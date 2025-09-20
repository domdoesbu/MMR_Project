#include "Preprocessing.h"
#include <iostream>
#include <filesystem>
#include <string>
#include <fstream>
#include <sstream>
#include <limits>
#include <vector>
#include <regex>

namespace fs = std::filesystem;


void Preprocessing::AnalyzeShapes(const std::string& databasePath)
{
	std::cout << "Analyzing shapes in database: " << databasePath << std::endl;
    // Excel file for all the data
    std::string outputCsv = "shape_analysis.csv";

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

    // loop over every sub folder, aka the class itself
    for (const auto& classDir : fs::directory_iterator(databasePath)) {
        if (!fs::is_directory(classDir)) continue;

        // Get the class
        std::string className = classDir.path().filename().string();

        // For each obj in the folder, get the information about it
        for (const auto& file : fs::directory_iterator(classDir)) {
            if (file.path().extension() != ".obj") continue;

            std::ifstream objFile(file.path());
            if (!objFile.is_open()) {
                std::cerr << "Failed to open file: " << file.path() << std::endl;
                continue;
            }

            size_t vertexCount = 0, faceCount = 0;
            bool headerVertexFound = false, headerFaceFound = false;

            // This is for the bounding boxes
            float minX = std::numeric_limits<float>::max();
            float minY = std::numeric_limits<float>::max();
            float minZ = std::numeric_limits<float>::max();
            float maxX = std::numeric_limits<float>::lowest();
            float maxY = std::numeric_limits<float>::lowest();
            float maxZ = std::numeric_limits<float>::lowest();

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
                    minX = std::min(minX, x);
                    minY = std::min(minY, y);
                    minZ = std::min(minZ, z);
                    maxX = std::max(maxX, x);
                    maxY = std::max(maxY, y);
                    maxZ = std::max(maxZ, z);
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

            // Get the info on which kind of faces it has
            std::string faceType;
            if (hasOther) faceType = "Mixed (N-gons)";
            else if (hasTriangle && hasQuad) faceType = "Mixed (Triangles+Quads)";
            else if (hasTriangle) faceType = "Triangles";
            else if (hasQuad) faceType = "Quads";
            else faceType = "Unknown";

            csvFile << className << ","
                << file.path().filename().string() << ","
                << vertexCount << ","
                << faceCount << ","
                << "\"" << faceType << "\"" << ","
                << minX << "," << minY << "," << minZ << ","
                << maxX << "," << maxY << "," << maxZ
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
    std::string line;
    // Skip header
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
    float minimumDistanceAvgVert = avgVertices;
    float minimumDistanceAvgFace = avgFaces;
    std::string averageShapeFileVert = "";
    std::string averageShapeFileFace = "";

    float minDistanceAvg = avgVertices;

    for (const auto& shape : shapes) {

		float currentDistance = sqrt(pow(avgVertices - shape.vertices, 2) + pow(avgFaces - shape.faces, 2));
		if (currentDistance < minDistanceAvg) {
			minDistanceAvg = currentDistance;
			averageShapeFileVert = shape.fileName;
		}
    }

	std::cout << "Average shape by vertices: " << averageShapeFileVert << " with " << (avgVertices - minimumDistanceAvgVert) << " vertices." << std::endl;

    float largestDistance = 0.0f;
    float smallestDistance = 0.0f;

    csvFile.close();
}
