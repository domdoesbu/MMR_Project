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
