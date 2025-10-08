#pragma once
#include <filesystem>
#include <wrap/io_trimesh/export_ply.h>
#include <iostream>
#include <fstream>
#include <sstream>
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

