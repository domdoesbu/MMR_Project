#define TINYOBJLOADER_IMPLEMENTATION
#define GLM_ENABLE_EXPERIMENTAL
#include "FileOrganizer.h"

namespace fs = std::filesystem;
bool FileOrganizer::LoadObj(const char* inputFile, std::vector<float>& outVertices, std::vector<unsigned int>& outIndices)
{
    tinyobj::ObjReaderConfig readerConfig;
    tinyobj::ObjReader reader;

    if (!reader.ParseFromFile(inputFile, readerConfig)) {
        if (!reader.Error().empty()) {
            std::cerr << "TinyObjReader: " << reader.Error() << std::endl;
        }
        return false;
    }

    if (!reader.Warning().empty()) {
        std::cout << "TinyObjReader: " << reader.Warning() << std::endl;
    }

    const tinyobj::attrib_t& attrib = reader.GetAttrib();
    const std::vector<tinyobj::shape_t>& shapes = reader.GetShapes();

    outVertices.clear();
    outIndices.clear();

    // Temporary arrays
    std::vector<glm::vec3> positions(attrib.vertices.size() / 3);


    for (size_t i = 0; i < positions.size(); i++) {
        positions[i] = glm::vec3(
            attrib.vertices[3 * i + 0],
            attrib.vertices[3 * i + 1],
            attrib.vertices[3 * i + 2]
        );
		
    }

    std::vector<glm::vec3> normals;
    bool hasNormals = !attrib.normals.empty();
    if (hasNormals) {
        normals.resize(attrib.normals.size() / 3);
        for (size_t i = 0; i < normals.size(); i++) {
            normals[i] = glm::vec3(
                attrib.normals[3 * i + 0],
                attrib.normals[3 * i + 1],
                attrib.normals[3 * i + 2]
            );
        }
    }
    else {
        normals.resize(positions.size(), glm::vec3(0.0f));
    }

    for (const auto& shape : shapes) {
        size_t index_offset = 0;
        for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++) {
            int fv = shape.mesh.num_face_vertices[f];
            if (fv != 3) {
                std::cerr << "Warning: non-triangle face detected. Skipping.\n";
                index_offset += fv;
                continue;
            }
            std::array<int, 3> faceIndices;
            glm::vec3 faceNormal(0.0f);

            for (int v = 0; v < fv; v++) {
                tinyobj::index_t idx = shape.mesh.indices[index_offset + v];
                outIndices.push_back(idx.vertex_index);
                faceIndices[v] = idx.vertex_index;
                // If normals are missing, compute face normal
                if (!hasNormals) {
                    glm::vec3 v0 = positions[shape.mesh.indices[index_offset + 0].vertex_index];
                    glm::vec3 v1 = positions[shape.mesh.indices[index_offset + 1].vertex_index];
                    glm::vec3 v2 = positions[shape.mesh.indices[index_offset + 2].vertex_index];
                    faceNormal = glm::normalize(glm::cross(v1 - v0, v2 - v0));
                }
            }
            if (!hasNormals) {
                // Accumulate face normal into vertex normals
                for (int v = 0; v < fv; v++) {
                    tinyobj::index_t idx = shape.mesh.indices[index_offset + v];
                    normals[idx.vertex_index] += faceNormal;
                }
            }

            index_offset += fv;
        }
    }

    if (!hasNormals) {
        for (auto& n : normals) {
            n = glm::normalize(n);
        }
    }

    // Interleave position + normal
    outVertices.reserve(positions.size() * 6);
    for (size_t i = 0; i < positions.size(); i++) {
        outVertices.push_back(positions[i].x);
        outVertices.push_back(positions[i].y);
        outVertices.push_back(positions[i].z);
        outVertices.push_back(normals[i].x);
        outVertices.push_back(normals[i].y);
        outVertices.push_back(normals[i].z);
    }

    return true;
}

UnstructuredGrid3D* FileOrganizer::LoadObjGrid(const char* inputFile)
{
    tinyobj::ObjReaderConfig readerConfig;
    tinyobj::ObjReader reader;

    if (!reader.ParseFromFile(inputFile, readerConfig)) {
        if (!reader.Error().empty()) {
            std::cerr << "TinyObjReader: " << reader.Error() << std::endl;
        }
        return nullptr;
    }

    if (!reader.Warning().empty()) {
        std::cout << "TinyObjReader: " << reader.Warning() << std::endl;
    }

    const tinyobj::attrib_t& attrib = reader.GetAttrib();
    const std::vector<tinyobj::shape_t>& shapes = reader.GetShapes();

    // Temporary arrays
    std::vector<glm::vec3> positions(attrib.vertices.size() / 3);

    std::vector<std::array<float, 3>> verticesForGrid(positions.size());

    for (size_t i = 0; i < positions.size(); i++) {

        verticesForGrid[i] = { attrib.vertices[3 * i + 0], attrib.vertices[3 * i + 1], attrib.vertices[3 * i + 2] };
    }

    std::vector<std::array<int, 3>> facesForGrid;

    for (const auto& shape : shapes) {
        size_t index_offset = 0;
        for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++) {
            int fv = shape.mesh.num_face_vertices[f];
            if (fv != 3) {
                index_offset += fv; // skip non-triangular faces
                continue;
            }
            std::array<int, 3> face;
            for (int v = 0; v < 3; v++) {
                tinyobj::index_t idx = shape.mesh.indices[index_offset + v];
                face[v] = idx.vertex_index;
            }
            facesForGrid.push_back(face);
            index_offset += fv;
        }
    }

    UnstructuredGrid3D* grid = new UnstructuredGrid3D(verticesForGrid.size(), facesForGrid.size());

    for (size_t i = 0; i < verticesForGrid.size(); i++) {
        grid->setPoint(i, verticesForGrid[i].data());
    }

    for (size_t i = 0; i < facesForGrid.size(); ++i) {
        grid->setCell(i, facesForGrid[i].data());
    }

    return grid;
}

void FileOrganizer::WriteNewObj(std::string destinationFilename, MeshData results) {

    std::ofstream out(destinationFilename);
    if (!out) {
        std::cerr << "Error: Could not open file for writing: " << destinationFilename << std::endl;
    }
    else {

        // Write vertices
        for (size_t i = 0; i < results.positions.size(); i += 6) {
            float x = results.positions[i + 0];
            float y = results.positions[i + 1];
            float z = results.positions[i + 2];
            out << "v " << x << " " << y << " " << z << "\n";
        }

        // Write faces (OBJ uses 1-based indices)
        for (size_t i = 0; i < results.indices.size(); i += 3) {
            unsigned int i0 = results.indices[i + 0] + 1;
            unsigned int i1 = results.indices[i + 1] + 1;
            unsigned int i2 = results.indices[i + 2] + 1;
            // If you want normals: use format "f v1//n1 v2//n2 v3//n3"
            out << "f " << i0 << "//" << i0 << " "
                << i1 << "//" << i1 << " "
                << i2 << "//" << i2 << "\n";
        }

        out.close();
        std::cout << "Wrote OBJ: " << destinationFilename << std::endl;
    }
}

void FileOrganizer::WriteObjGrid(const char* filename, UnstructuredGrid3D* grid)
{
    std::ofstream out(filename);
    if (!out.is_open()) {
        std::cerr << "Error: could not open file for writing: " << filename << std::endl;
        return;
    }

    out << "# OBJ file written by ObjReader\n";

    // Write vertices
    for (int i = 0; i < grid->numPoints(); ++i) {
        float p[3];
        grid->getPoint(i, p);
        out << "v " << p[0] << " " << p[1] << " " << p[2] << "\n";
    }

    // Write faces (assuming triangles)
    for (int i = 0; i < grid->numCells(); ++i) {
        int c[3];
        grid->getCell(i, c);
        out << "f " << c[0] + 1 << " " << c[1] + 1 << " " << c[2] + 1 << "\n";  // convert to 1-based
    }

    out.close();
}


shapeInfo FileOrganizer::getShapeFromDatabase(std::string csvFilename, std::string shapeFilename)
{
    std::ifstream csvFile(csvFilename);
    shapeInfo outInfo;
    if (!csvFile.is_open()) {
        std::cerr << "Failed to open input CSV file: " << csvFilename << std::endl;
        return outInfo;
    }
    std::string line;

    

    while (std::getline(csvFile, line)) {
        std::istringstream iss(line);
        std::string token;
        std::getline(iss, outInfo.className, ',');
        std::getline(iss, outInfo.fileName, ',');
        if (outInfo.fileName == shapeFilename)
        {
            std::getline(iss, token, ','); outInfo.vertexNum = std::stoul(token);
            std::getline(iss, token, ','); outInfo.faceNum = std::stoul(token);
            std::getline(iss, outInfo.faceType, ',');
            std::getline(iss, token, ','); outInfo.minX = std::stof(token);
            std::getline(iss, token, ','); outInfo.minY = std::stof(token);
            std::getline(iss, token, ','); outInfo.minZ = std::stof(token);
            std::getline(iss, token, ','); outInfo.maxX = std::stof(token);
            std::getline(iss, token, ','); outInfo.maxY = std::stof(token);
            std::getline(iss, token, ','); outInfo.maxZ = std::stof(token);
            csvFile.close();
            return outInfo;
        }
    }
    csvFile.close();
    return outInfo;
}

baryAndEigInfo FileOrganizer::getBaryAndEigFromCSV(std::string csvFilename, std::string shapeFilename) {
    std::ifstream csvFile(csvFilename);
    baryAndEigInfo outInfo;
    if (!csvFile.is_open()) {
        std::cerr << "Failed to open input CSV file: " << csvFilename << std::endl;
        return outInfo;
    }
    std::string line;

    while (std::getline(csvFile, line)) {
        std::istringstream iss(line);
        std::string token;
        std::getline(iss, outInfo.className, ',');
        std::getline(iss, outInfo.fileName, ',');
        if (outInfo.fileName == shapeFilename)
        {
            std::getline(iss, token, ','); outInfo.baryX = std::stoul(token);
            std::getline(iss, token, ','); outInfo.baryY = std::stoul(token);
            std::getline(iss, token, ','); outInfo.baryZ = std::stof(token);
            std::getline(iss, token, ','); outInfo.eigLarge = std::stof(token);
            std::getline(iss, token, ','); outInfo.eigSmall = std::stof(token);
            csvFile.close();
            return outInfo;
        }
    }
    csvFile.close();
    return outInfo;
}

void FileOrganizer::WriteCSVAfterNorm(std::filesystem::path databasePath, std::string csvFilename,std::vector<glm::vec3> barycenter, std::vector<Eigen::Vector3f> eigVals )
{
    // Excel file for all the data


    // Check if database actually exists
    if (!fs::exists(databasePath) || !fs::is_directory(databasePath)) {
        std::cerr << "Database folder does not exist: " << databasePath << std::endl;
        return;
    }

    std::ofstream csvFile(csvFilename);
    if (!csvFile.is_open()) {
        std::cerr << "Failed to open output CSV file: " << csvFilename << std::endl;
        return;
    }

    csvFile << "Class,File,BaryX,BaryY,BaryZ,LargeEig,SmallEig\n";

    shapeInfo currentShapeInfo;
    int iterator = 0;
    // loop over every sub folder, aka the class itself
    for (const auto& classDir : fs::directory_iterator(databasePath)) {
        if (!fs::is_directory(classDir)) continue;

        // Get the class
        currentShapeInfo.className = classDir.path().filename().string();

        // For each obj in the folder, get the information about it
        for (const auto& file : fs::directory_iterator(classDir)) {


            csvFile << classDir << ","
                << file.path().filename().string() << ","
                << barycenter.at(iterator).x << ","
                << barycenter.at(iterator).y << ","
                << barycenter.at(iterator).z << ","
                << eigVals.at(iterator)(2) << ","
                << eigVals.at(iterator)(0)
                << "\n";
            iterator++;
        }
    }
    csvFile.close();
}