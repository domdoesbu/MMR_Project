#pragma once
#define GLM_ENABLE_EXPERIMENTAL
#include <filesystem>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <limits>
#include <vector>
#include <array>
#include <Eigen/Dense>
#include "glm/gtx/string_cast.hpp"
#include "glm/glm.hpp"
#include "./include/tiny_obj_loader.h"
#include "CodeFromProf/UnstructuredGrid3D.h"

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

struct baryAndEigInfo
{
	std::string className;
	std::string fileName;
	float baryX;
	float baryY;
	float baryZ;

	float eigLarge;
	float eigSmall;
};

class FileOrganizer
{
public:
	FileOrganizer() {};

	static bool LoadObj(const char* inputFile, std::vector<float>& outVertices, std::vector<unsigned int>& outIndices);
	UnstructuredGrid3D* LoadObjGrid(const char* inputFile);
	void WriteNewObj(std::string destinationFilename, MeshData results);
	void WriteObjGrid(const char* filename, UnstructuredGrid3D* grid);
	shapeInfo getShapeFromDatabase(std::string csvFilename, std::string shapeFilename);
	baryAndEigInfo getBaryAndEigFromCSV(std::string csvFilename, std::string shapeFilename);
	void WriteCSVAfterNorm(std::filesystem::path database, std::string csvFilename, std::vector<glm::vec3> barycenter, std::vector<Eigen::Vector3f> eigVals);
	void WriteCSVFeatureExtraction(std::filesystem::path database, std::string csvFilename, std::vector<float> surfaceArea,
		std::vector<float> volume,
		std::vector<float> compactness,
		std::vector<float> rectangularity,
		std::vector<float> diameter,
		std::vector<float> convexity,
		std::vector<float> eccentricity);
};

