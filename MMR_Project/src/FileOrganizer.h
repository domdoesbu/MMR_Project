#pragma once
#define GLM_ENABLE_EXPERIMENTAL
#include <filesystem>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <limits>
#include <vector>
#include "glm/gtx/string_cast.hpp"
#include "glm/glm.hpp"
#include "./include/tiny_obj_loader.h"

struct MeshData {
	std::vector<float> positions;
	std::vector<unsigned int> indices;
};

struct shapeInfo
{
	std::string className;
	std::string fileName;

	int vertexNum;
	int faceNum;
	std::string faceType;

	float minX;
	float minY;
	float minZ;

	float maxX;
	float maxY;
	float maxZ;
};

class FileOrganizer
{
public:
	FileOrganizer() {};

	static bool LoadObj(const char* inputFile, std::vector<float>& outVertices, std::vector<unsigned int>& outIndices);

	void WriteNewObj(std::string destinationFilename, MeshData results);
	
	shapeInfo getShapeFromDatabase(std::string csvFilename, std::string shapeFilename);

};

