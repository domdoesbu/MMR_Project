#pragma once
#define _USE_MATH_DEFINES
#define GLM_ENABLE_EXPERIMENTAL
#include <vector>
#include <iostream>
#include <glm/glm.hpp>
#include <math.h>
#include <string>
#include <filesystem>
#include "FileOrganizer.h"
#include "Preprocessing.h"


#include <MRMesh/MRConvexHull.h>
#include <MRMesh/MRMeshFwd.h>
#include <MRMesh/MRMeshLoad.h>
#include <MRMesh/MRMeshSave.h>
#include <MRMesh/MRMesh.h>
#include <MRMesh/MRMeshDecimate.h>
#include <MRMesh/MRBuffer.h>
#include <MRMesh/MRMeshSubdivide.h>
#include <MRMesh/MRVector.h>
#include "matplotlibcpp.h"

struct ShapeFeatures {
	float surfaceArea;
	float volume;
	float compactness;
	float rectangularity;
	float diameter;
	float convexity;
	float eccentricity;
	std::vector<double> A3;
	std::vector<double> D1;
	std::vector<double> D2;
	std::vector<double> D3;
	std::vector<double> D4;
};

class FeatureExtraction
{
public:
	FeatureExtraction() {};

	// 1. Surface area S
	float SurfaceArea(std::string& fileName);

	// 2. Compactness
	float Compactness(float surfaceArea, float volume);

	// 3. Recantgularity
	float Rectangularity(std::vector<float> positions, glm::vec3 barycenter, std::string filePath, std::string shapeFilename, std::string csvFilename);
	// 4. Diameter
	float Diameter(std::vector<float>& positions);

	// 5. Convexity
	float Convexity(std::vector<float> positions, glm::vec3 barycenter, std::string filename, std::string filePath);

	// 6. Eccentricity
	float Eccentricity(float largeEig, float smallEig);

	// 7. A3 -> D4
	//// A3
	void ExtractA3Features(std::string& classPath);
	std::pair< std::vector<double>, std::vector<double>> A3(std::vector<float>& positions, int samples, int bins);
	//// D1
	void ExtractD1Features(std::string& classPath);
	std::pair< std::vector<double>, std::vector<double>> D1(std::vector<float>& positions, glm::vec3 barycenter, int bins);
	//// D2
	void ExtractD2Features(std::string& classPath);
	std::pair< std::vector<double>, std::vector<double>> D2(std::vector<float>& positions, int samples, int bins);
	//// D3
	void ExtractD3Features(std::string& classPath);
	std::pair< std::vector<double>, std::vector<double>> D3(std::vector<float>& positions, int samples, int bins);
	//// D4
	void ExtractD4Features(std::string& classPath);
	std::pair< std::vector<double>, std::vector<double>> D4(std::vector<float>& positions, int samples, int bins);

	// Helper
	float Volume(std::string& fileName);
	void ExtractFeaturesAtoD(const std::string& databasePath);
	void ExtractFeaturesOthers(const std::string& databasePath);
	ShapeFeatures ExtractFeaturesOneShape(std::string inputFile, std::vector<float>& positions);
private:
	float Volume(std::vector<float> positions);

	float ComputeLocalArea(glm::vec3 v1, glm::vec3 v2, glm::vec3 v3);

	float Distance(glm::vec3 v1, glm::vec3 v2);
	
	std::vector<float> GenerateConvexHull(std::string filename, std::string outputDir);
};

