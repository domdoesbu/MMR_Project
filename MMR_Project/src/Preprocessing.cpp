#define GLM_ENABLE_EXPERIMENTAL

#include "Preprocessing.h"
#include <iostream>
#include <filesystem>
#include <string>
#include <fstream>
#include <sstream>
#include <limits>
#include <vector>
#include <regex>
#include <unordered_map>
#include <tuple>

// MeshLibs
#include "Simplification.h"
#include "Refinement.h"
#include "matplotlibcpp.h"

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
    struct ShapeInfo {
        std::string className;
        std::string fileName;
        size_t vertices;
        size_t faces;
        std::string faceType;
        float minX, minY, minZ;
        float maxX, maxY, maxZ;
    };
    std::vector<ShapeInfo> shapes;
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
        ShapeInfo info;
        std::getline(iss, info.className, ',');
        std::getline(iss, info.fileName, ',');
        std::getline(iss, token, ','); info.vertices = std::stoul(token);
        std::getline(iss, token, ','); info.faces = std::stoul(token);
        std::getline(iss, info.faceType, ',');
        std::getline(iss, token, ','); info.minX = std::stof(token);
        std::getline(iss, token, ','); info.minY = std::stof(token);
        std::getline(iss, token, ','); info.minZ = std::stof(token);
        std::getline(iss, token, ','); info.maxX = std::stof(token);
        std::getline(iss, token, ','); info.maxY = std::stof(token);
        std::getline(iss, token, ','); info.maxZ = std::stof(token);

		classNames[info.className]++;
		faceVals.push_back(info.faces);
		vertexVals.push_back(info.vertices);
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
        totalVertices += shape.vertices;
        totalFaces += shape.faces;
    }
    double avgVertices = totalVertices / shapes.size();
	double avgFaces = totalFaces / shapes.size();

    // Re-go over
    std::string averageShapeFile = "";

    float minDistanceAvg = avgVertices;

    // Average Shape
    for (const auto& shape : shapes) {

		float currentDistance = sqrt(pow(avgVertices - shape.vertices, 2) + pow(avgFaces - shape.faces, 2));
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
        if (shape.vertices > maxVertNumber)
        {
            maxVertNumber = shape.vertices;
            highVertOutlier = shape.fileName;
        }

        // Min number of verts
        if (shape.vertices < minVertNumber)
        {
            minVertNumber = shape.vertices;
            lowVertOutlier = shape.fileName;
        }

        // Faces
		if (shape.faces < minFaceDistance)
		{
			minFaceDistance = shape.faces;
			lowFaceOutlier = shape.fileName;
		}
		if (shape.faces > maxFaceDistance)
		{
			maxFaceDistance = shape.faces;
			highFaceOutlier = shape.fileName;
		}

        // Euclidean Distance
        float currentDistanceEU = sqrt(pow(avgVertices - shape.vertices, 2) + pow(avgFaces - shape.faces, 2));
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
            }
            else if (positions.size() / 6 > 10000) { //Simplification

                std::string path = fullTargetPath.string() + file.path().filename().string();
                std::cout << path << std::endl;

                int maxDeletedVerts = (positions.size() / 6) - 9000;
                simp.Simplify(file.path(), path, maxDeletedVerts);
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

    for (int i = 0; i < positions.size(); i += 18) {
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


