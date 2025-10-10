#define GLM_ENABLE_EXPERIMENTAL

#include "Preprocessing.h"


namespace fs = std::filesystem;
namespace plt = matplotlibcpp;

void Preprocessing::AnalyzeShape(std::filesystem::path filename, shapeInfo & outInfo)
{
    if (filename.extension() != ".obj") return;
    outInfo.fileName = filename.string();
    std::ifstream objFile(filename);

    size_t vertexCount = 0, faceCount = 0;
    bool headerVertexFound = false, headerFaceFound = false;

    // This is for the bounding boxes
    outInfo.minX = std::numeric_limits<float>::max();
    outInfo.minY = std::numeric_limits<float>::max();
    outInfo.minZ = std::numeric_limits<float>::max();
    outInfo.maxX = std::numeric_limits<float>::lowest();
    outInfo.maxY = std::numeric_limits<float>::lowest();
    outInfo.maxZ = std::numeric_limits<float>::lowest();

    // Tells us what kind of faces we actually have
    bool hasTriangle = false, hasQuad = false, hasOther = false;

    std::string line;
    while (std::getline(objFile, line)) {
        if (line.empty()) continue;

        // Some obj files have the info in the header, so find those first
        if (line.rfind("# Vertices:", 0) == 0) {
            vertexCount = std::stoul(line.substr(11));
            headerVertexFound = true;
            continue;
        }
        if (line.rfind("# Faces:", 0) == 0) {
            faceCount = std::stoul(line.substr(8));
            headerFaceFound = true;
            continue;
        }

        // If it doesn't have information int he header, look over everything
        std::istringstream iss(line);
        std::string type;
        iss >> type;

        if (type == "v") { // Always process vertices for bounding box, even if we have header information
            float x, y, z;
            iss >> x >> y >> z;
            if (!headerVertexFound) vertexCount++; // Only count manually if no header info
            outInfo.minX = std::min(outInfo.minX, x);
            outInfo.minY = std::min(outInfo.minY, y);
            outInfo.minZ = std::min(outInfo.minZ, z);
            outInfo.maxX = std::max(outInfo.maxX, x);
            outInfo.maxY = std::max(outInfo.maxY, y);
            outInfo.maxZ = std::max(outInfo.maxZ, z);
        }
        else if (type == "f") {
            if (!headerFaceFound) faceCount++; // Only count manually if no header info

            std::vector<std::string> vertices;
            std::string token;
            while (iss >> token) vertices.push_back(token);

            if (vertices.size() == 3)
                hasTriangle = true;
            else if (vertices.size() == 4)
                hasQuad = true;
            else
                hasOther = true;
        }
    }
    objFile.close();

    outInfo.vertexNum = vertexCount;
    outInfo.faceNum = faceCount;

    // Get the info on which kind of faces it has
    if (hasOther) outInfo.faceType = "Mixed (N-gons)";
    else if (hasTriangle && hasQuad) outInfo.faceType = "Mixed (Triangles+Quads)";
    else if (hasTriangle) outInfo.faceType = "Triangles";
    else if (hasQuad) outInfo.faceType = "Quads";
    else outInfo.faceType = "Unknown";
}

void Preprocessing::AnalyzeShapes(const std::string& databasePath, const std::string& outputCsv)
{
	std::cout << "Analyzing shapes in database: " << databasePath << std::endl;
    // Excel file for all the data
    

    // Check if database actually exists
    if (!fs::exists(databasePath) || !fs::is_directory(databasePath)) {
        std::cerr << "Database folder does not exist: " << databasePath << std::endl;
        return;
    }

	std::ofstream csvFile(outputCsv);
    if (!csvFile.is_open()) {
        std::cerr << "Failed to open output CSV file: " << outputCsv << std::endl;
        return;
    }

    csvFile << "Class,File,Vertices,Faces,FaceType,Minx,Miny,Minz,Maxx,Maxy,Maxz\n";

    shapeInfo currentShapeInfo;

    // loop over every sub folder, aka the class itself
    for (const auto& classDir : fs::directory_iterator(databasePath)) {
        if (!fs::is_directory(classDir)) continue;

        // Get the class
        currentShapeInfo.className = classDir.path().filename().string();

        // For each obj in the folder, get the information about it
        for (const auto& file : fs::directory_iterator(classDir)) {
            Preprocessing::AnalyzeShape(file.path(), currentShapeInfo);

            csvFile << currentShapeInfo.className << ","
                << file.path().filename().string() << ","
                << currentShapeInfo.vertexNum<< ","
                << currentShapeInfo.faceNum << ","
                << "\"" << currentShapeInfo.faceType << "\"" << ","
                << currentShapeInfo.minX << "," << currentShapeInfo.minY << "," << currentShapeInfo.minZ << ","
                << currentShapeInfo.maxX << "," << currentShapeInfo.maxY << "," << currentShapeInfo.maxZ
                << "\n";
        }
    }
    std::cout << "Finsihed Analyzing shapes in database: " << std::endl;
	csvFile.close();
}

void Preprocessing::DatabaseStatistics(const std::string& shapeAnalysisFile) {
    /*
    2.2: Statisitcs
        1. Average shape in the database (in terms of number of vertices and faces)
        2. Significant Outliers from the average
        3. Show as a hisogram counting how many shapes in the database for every range of possible interest
            a. Number of vertices
            b. Number of faces
            c. Shape class
    */

    std::cout << "Generating statistics from file: " << shapeAnalysisFile << std::endl;
    std::ifstream csvFile(shapeAnalysisFile);
    if (!csvFile.is_open()) {
        std::cerr << "Failed to open input CSV file: " << shapeAnalysisFile << std::endl;
        return;
    }

    std::vector<shapeInfo> shapes;
    std::vector<int> vertexVals;
	std::vector<int> faceVals;
	std::unordered_map<std::string, int> classNames;
    std::string line;
    
       
    int currentClassCount = 0;
    // Skip header
    std::vector<std::string> classHist;
    std::getline(csvFile, line);
    while (std::getline(csvFile, line)) {
        std::istringstream iss(line);
        std::string token;
        shapeInfo info;
        std::getline(iss, info.className, ',');
        std::getline(iss, info.fileName, ',');
        std::getline(iss, token, ','); info.vertexNum = std::stoul(token);
        std::getline(iss, token, ','); info.faceNum= std::stoul(token);
        std::getline(iss, info.faceType, ',');
        std::getline(iss, token, ','); info.minX = std::stof(token);
        std::getline(iss, token, ','); info.minY = std::stof(token);
        std::getline(iss, token, ','); info.minZ = std::stof(token);
        std::getline(iss, token, ','); info.maxX = std::stof(token);
        std::getline(iss, token, ','); info.maxY = std::stof(token);
        std::getline(iss, token, ','); info.maxZ = std::stof(token);

		classNames[info.className]++;
		faceVals.push_back(info.faceNum);
		vertexVals.push_back(info.vertexNum);
        shapes.push_back(info);
    }
   
    
    if (shapes.empty()) {
        std::cerr << "No shape data found in file." << std::endl;
        return;
    }
    // Calculate averages
    double totalVertices = 0.0;
    double totalFaces = 0.0;
    for (const auto& shape : shapes) {
        totalVertices += shape.vertexNum;
        totalFaces += shape.faceNum;
    }
    double avgVertices = totalVertices / shapes.size();
	double avgFaces = totalFaces / shapes.size();

    // Re-go over
    std::string averageShapeFile = "";

    float minDistanceAvg = avgVertices;

    // Average Shape
    for (const auto& shape : shapes) {

		float currentDistance = sqrt(pow(avgVertices - shape.vertexNum, 2) + pow(avgFaces - shape.faceNum, 2));
		if (currentDistance < minDistanceAvg) {
			minDistanceAvg = currentDistance;
			averageShapeFile = shape.fileName;
		}
    }

	std::cout << "Average shape by vertices: " << averageShapeFile << std::endl;

    // SD
    int accumulator = 0;
	for (const auto& vertex : vertexVals) {
        accumulator += pow(vertex - avgVertices, 2);
	}
	float stdDev = sqrt(accumulator / vertexVals.size());
	std::cout << "Standard Deviation of vertices: " << stdDev << std::endl;

    // Outliers

    // Vertices
    std::string highVertOutlier = "";
	std::string lowVertOutlier = "";

	std::string highFaceOutlier = "";
	std::string lowFaceOutlier = "";
	
	std::string highEDOutlier = "";
	std::string lowEDOutlier = "";
    int maxVertNumber = 0;
    int minVertNumber = std::numeric_limits<int>::max();
    int maxEUDistance = 0;
	int minEUDistance = std::numeric_limits<int>::max();
    int maxFaceDistance = 0;
	int minFaceDistance = std::numeric_limits<int>::max();
    
	for (const auto& shape : shapes) {
		
        // Highest Number of verts
        if (shape.vertexNum > maxVertNumber)
        {
            maxVertNumber = shape.vertexNum;
            highVertOutlier = shape.fileName;
        }

        // Min number of verts
        if (shape.vertexNum< minVertNumber)
        {
            minVertNumber = shape.vertexNum;
            lowVertOutlier = shape.fileName;
        }

        // Faces
		if (shape.faceNum< minFaceDistance)
		{
			minFaceDistance = shape.faceNum;
			lowFaceOutlier = shape.fileName;
		}
		if (shape.faceNum > maxFaceDistance)
		{
			maxFaceDistance = shape.faceNum;
			highFaceOutlier = shape.fileName;
		}

        // Euclidean Distance
        float currentDistanceEU = sqrt(pow(avgVertices - shape.vertexNum, 2) + pow(avgFaces - shape.faceNum, 2));
        if (currentDistanceEU < minEUDistance) {
            minEUDistance = currentDistanceEU;
            lowEDOutlier = shape.fileName;
        }
        if (currentDistanceEU > maxEUDistance) {
            maxEUDistance = currentDistanceEU;
            highEDOutlier = shape.fileName;
        }
	}

    std::cout << "Low outlier shape by vertices: " << lowVertOutlier << " with " << (minVertNumber) << " less vertices." << std::endl;
    std::cout << "High outlier shape by vertices: " << highVertOutlier << " with " << (maxVertNumber) << "more vertices." << std::endl;
    std::cout << "Low shape by faces: " << lowFaceOutlier << " with " << (minFaceDistance) << " less faces." << std::endl;
    std::cout << "High shape by faces: " << highFaceOutlier << " with " << (maxFaceDistance) << " more faces." << std::endl;
    std::cout << "Low shape by EU: " << lowEDOutlier << " with " << (minEUDistance) << " higher EU." << std::endl;
    std::cout << "High shape by EU: " << highEDOutlier << " with " << (maxEUDistance) << " lower EU." << std::endl;

    //counts
    // 1. Shape classes

    std::vector<std::string> labels;
    std::vector<int> values;
    for (auto& p : classNames) {
        labels.push_back(p.first);
        values.push_back(p.second);
    }

    std::vector<size_t> idx(labels.size());
    std::iota(idx.begin(), idx.end(), 0);
    std::sort(idx.begin(), idx.end(), [&](size_t i, size_t j) {
        return labels[i] < labels[j];
        });


    std::vector<double> x;
    std::vector<double> y;
    std::vector<std::string> sorted_labels;
    for (size_t i : idx) {
        x.push_back(static_cast<double>(x.size()));
        y.push_back(static_cast<double>(values[i]));
        sorted_labels.push_back(labels[i]);
    }

 //   plt::bar(x, y);
	//plt::xticks(x, sorted_labels, { {"rotation", "vertical"} });
 //   plt::xlabel("Classes");
 //   plt::ylabel("Count");
 //   plt::title("Class Histogram");
 //   plt::show();

	//// 2. Number of vertices
	////plt::hist(vertexVals, 20);
 //   
 //   // 3. Number of faces
 //    plt::xlabel("Faces");
 //   plt::ylabel("Count");
 //   plt::title("Face Histogram");
 //   plt::hist(faceVals, 20);

 //   plt::show();

    csvFile.close();
}


namespace fs = std::filesystem;
int Preprocessing::Resampling(const std::string& source, const std::string& target)
{
    FileOrganizer fo;
    std::vector<float> positions;
    std::vector<unsigned int> indices;
    fs::path sourcePath = source;
    fs::path targetParent = target;
    std::string databasePath = sourcePath.string();
    int resmapledCount = 0;
    for (const auto& classDir : fs::directory_iterator(databasePath)) {
        if (!fs::is_directory(classDir)) continue;
        std::string className = classDir.path().filename().string();
        fs::path fullTargetPath = targetParent.string() + className + "/";
        fs::create_directories(fullTargetPath);
        // For each obj in the folder, get the information about it
        Simplification simp;
		Refinement ref;
        for (const auto& file : fs::directory_iterator(classDir)) {

            positions.clear();
            indices.clear();
            std::string currentFile = file.path().filename().string();
            std::string fullFilePath = classDir.path().string() + "/" + currentFile;
            if (!fo.LoadObj(fullFilePath.c_str(), positions, indices))
            {
                std::cerr << "Failed to load obj" << std::endl;
                return -1;
            }

            if (positions.size() / 6 < 5000) { // Refinement

                std::string path = fullTargetPath.string() + file.path().filename().string();
                std::cout << path << std::endl;
                int maxEdgeSplits = 5000 - (positions.size()/6);
				ref.Refine(file.path(), path, maxEdgeSplits);
				resmapledCount++;
            }
            else if (positions.size() / 6 > 10000) { //Simplification

                std::string path = fullTargetPath.string() + file.path().filename().string();
                std::cout << path << std::endl;

                int maxDeletedVerts = (positions.size() / 6) - 9000;
                simp.Simplify(file.path(), path, maxDeletedVerts);
				resmapledCount++;
            }
            else {

                fs::copy(fullFilePath, fullTargetPath, fs::copy_options::overwrite_existing);
            }
        }
    }
}

glm::vec3 Preprocessing::ComputeBarycenter(std::vector<float> positions)
{
    glm::vec3 barycenter(0.0f);
    float sumOfAreas = 0.0f;

    for (int i = 0; i + 14 < positions.size(); i += 18) {
        glm::vec3 v1(positions[i + 0], positions[i + 1], positions[i + 2]);
        glm::vec3 v2(positions[i + 6], positions[i + 7], positions[i + 8]);
        glm::vec3 v3(positions[i + 12], positions[i + 13], positions[i + 14]);
        glm::vec3 localBarycenter(0.0f);
        //glm::vec3 localBarycenter = (v1 + v2 + v3) / 3.0f;
        localBarycenter.x = (positions[i + 0] + positions[i + 6 + 0] + positions[i + 12 + 0]) / 3.0f;
        localBarycenter.y = (positions[i + 1] + positions[i + 6 + 1] + positions[i + 12 + 1]) / 3.0f;
        localBarycenter.z = (positions[i + 2] + positions[i + 6 + 2] + positions[i + 12 + 2]) / 3.0f;


        glm::vec3 e1 = v2 - v1;
        glm::vec3 e2 = v3 - v1;
        glm::vec3 cross = glm::cross(e1, e2);

        float localArea = glm::length(cross) * 0.5f; // triangle area

        // sum (x * area)
        // / sum area

        sumOfAreas += localArea;
        barycenter += localBarycenter * localArea;
    }

    if (sumOfAreas > 0.0f) {
        barycenter /= sumOfAreas;
    }
    else
        barycenter = glm::vec3(0.0f);
    return barycenter;
}

std::vector<float> Preprocessing::NormalizeScale(std::vector<float> positions, std::filesystem::path filename)
{
    // we need to scale the positions to fit into a 1:1 unit cube
    // use formula y = x / maxcoord where x is the vertex position, to get new vertex position y. i.e. newMaxcoord = maxcoord / maxcoord = 1
    // MaxCoord needs to be the highest among the maxCoord numbers for every axis so that the object will fit into a 1:1 unit cube 
    // without stretching and changing proportions

    shapeInfo sInfo;
    AnalyzeShape(filename, sInfo);

    // Find the largest absolute coordinate value
    float maxAbsCoord = std::max({
        std::abs(sInfo.maxX), std::abs(sInfo.minX),
        std::abs(sInfo.maxY), std::abs(sInfo.minY),
        std::abs(sInfo.maxZ), std::abs(sInfo.minZ)
        });

    // Compute scale so that maxAbsCoord maps to 0.5
    float scale = 0.5f / maxAbsCoord;

    std::vector<float> scaledPositions = positions;
    for (size_t i = 0; i < positions.size(); i += 6) // 6 floats per vertex: pos(3) + normal(3)
    {
        scaledPositions[i] = positions[i] * scale;
        scaledPositions[i + 1] = positions[i + 1] * scale;
        scaledPositions[i + 2] = positions[i + 2] * scale;
        // normals untouched
    }

    return scaledPositions;
}

Eigen::Vector3f Preprocessing::NormalizeAlign(std::vector<float> &positions, int stride = 6, int posOffset = 0) {
    
    int vertexCount = positions.size() / stride;
    // 1. Calculate the covariance matrix

	size_t idx = posOffset;

    Eigen::Vector3f mean(0, 0, 0);
    idx = posOffset;
    for (size_t v = 0; v < vertexCount; ++v, idx += stride) {
        mean.x() += positions[idx + 0];
        mean.y() += positions[idx + 1];
        mean.z() += positions[idx + 2];
    }
    mean /= static_cast<float>(vertexCount);

    // 1. Compute covariance
    Eigen::Matrix3f covariance = Eigen::Matrix3f::Zero();
    idx = posOffset;
    for (size_t v = 0; v < vertexCount; ++v, idx += stride) {
        Eigen::Vector3f p(positions[idx + 0], positions[idx + 1], positions[idx + 2]);
        Eigen::Vector3f d = p - mean;
        covariance += d * d.transpose();
    }
    covariance /= static_cast<float>(vertexCount);

    // 2. Calculate the covariance eigen valuyes and eigen vectors
	Eigen::SelfAdjointEigenSolver<Eigen::Matrix3f> solver(covariance);
	if (solver.info() != Eigen::Success) {
		std::cerr << "Eigen decomposition failed!" << std::endl;
		return Eigen::Vector3f::Zero();
	}

	Eigen::Vector3f eigVals = solver.eigenvalues();
    Eigen::Matrix3f eigVecs = solver.eigenvectors();

    int idxOrder[3] = { 0,1,2 };
    for (int i = 0; i < 3; ++i) {
        int best = i;
        for (int j = i + 1; j < 3; j++) {
            if (eigVals(idxOrder[j]) > eigVals(idxOrder[best])) {
				best = j;
            }
        }
		std::swap(idxOrder[i], idxOrder[best]);
    }
    
	Eigen::Matrix3f rotation;
	rotation.col(0) = eigVecs.col(idxOrder[0]);
	rotation.col(1) = eigVecs.col(idxOrder[1]);
	rotation.col(2) = eigVecs.col(idxOrder[2]);

	float det = rotation.determinant();
    if (det < 0) {
		rotation.col(2) = -rotation.col(2);
		det = rotation.determinant();
    }

	Eigen::Matrix3f invRotation = rotation.transpose();

	// 3. Rotate all vertices
	idx = posOffset;
    for (size_t v = 0; v < vertexCount; ++v, idx += stride) {
		Eigen::Vector3f p(positions[idx + 0], positions[idx + 1], positions[idx + 2]);
		Eigen::Vector3f pRotated = invRotation * p;
		positions[idx + 0] = pRotated.x();
        positions[idx + 1] = pRotated.y();
		positions[idx + 2] = pRotated.z();
    }
	
    return eigVals;
}

void Preprocessing::NormalizeFlipping(std::vector<float>& positions, std::vector<unsigned int>& indices, int stride, int posOffset) 
{
    // fi = sum sign(Ct,i)(Ct,i)^2
    // Ct, i = coordinate of the center of traingfle t

    // Update formula
    // xi = xi sign(f0)
	// yi = yi sign(f1)
	// zi = zi sign(f2)

    for (int axis = 0; axis < 3; ++axis) {
        float positiveMass = 0.0f;
		float negativeMass = 0.0f;

        for (size_t i = 0; i < indices.size(); i += 3) {
            unsigned int i0 = indices[i + 0] * stride + posOffset;
            unsigned int i1 = indices[i + 1] * stride + posOffset;
			unsigned int i2 = indices[i + 2] * stride + posOffset;
			glm::fvec3 v0(positions[i0 + 0], positions[i0 + 1], positions[i0 + 2]);
			glm::fvec3 v1(positions[i1 + 0], positions[i1 + 1], positions[i1 + 2]);
			glm::fvec3 v2(positions[i2 + 0], positions[i2 + 1], positions[i2 + 2]);
			
            // area
			float area = 0.5f * glm::length(glm::cross(v1 - v0, v2 - v0));
			glm::fvec3 center = (v0 + v1 + v2) / 3.0f;

            if (center[axis] >= 0) {
                positiveMass += area;
            }
            else
            {
                negativeMass += area;
            }
        }

        if (negativeMass > positiveMass) {
            for (size_t i = posOffset; i < positions.size(); i += stride) {
                positions[i + axis] = -positions[i + axis];
            }
        }
    }
}
void Preprocessing::CheckNormalOrientation(std::vector<float>& vertices, std::vector<unsigned int>& indices, glm::vec3& barycenter) {
    const int floatsPerVertex = 6; // 3 position + 3 normal

    // Compute barycenter once

    // Flip faces if their normal points inward
    for (size_t i = 0; i + 2 < indices.size(); i += 3) {
        unsigned int i1 = indices[i];
        unsigned int i2 = indices[i + 1];
        unsigned int i3 = indices[i + 2];

        glm::vec3 v1(vertices[i1 * floatsPerVertex + 0],
            vertices[i1 * floatsPerVertex + 1],
            vertices[i1 * floatsPerVertex + 2]);
        glm::vec3 v2(vertices[i2 * floatsPerVertex + 0],
            vertices[i2 * floatsPerVertex + 1],
            vertices[i2 * floatsPerVertex + 2]);
        glm::vec3 v3(vertices[i3 * floatsPerVertex + 0],
            vertices[i3 * floatsPerVertex + 1],
            vertices[i3 * floatsPerVertex + 2]);

        glm::vec3 faceNormal = glm::cross(v2 - v1, v3 - v1);
        glm::vec3 faceCenter = (v1 + v2 + v3) / 3.0f;

        if (glm::dot(faceNormal, faceCenter - barycenter) < 0.0f) {
            std::swap(indices[i + 1], indices[i + 2]);
        }
    }
}

void Preprocessing::CheckHoles(const std::string& filename) {  
   MR::Mesh mesh = *MR::MeshLoad::fromAnySupportedFormat(filename);  

   std::vector<MR::EdgeId> holeEdges = mesh.topology.findHoleRepresentiveEdges();  
   for (MR::EdgeId e : holeEdges) {  
       MR::FillHoleParams params;  
       params.metric = MR::getUniversalMetric(mesh);  
       MR::fillHole(mesh, e, params);  
   }  

   if (mesh.volume() < 0) {  
       std::cout << "Flipping mesh orientation to ensure outward normals..." << std::endl;  
       mesh.topology.flipOrientation();  
   }  
 
   MR::MeshSave::toAnySupportedFormat(mesh, filename);  
}
