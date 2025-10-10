#pragma once
#define _USE_MATH_DEFINES
#define GLM_ENABLE_EXPERIMENTAL
#include <vector>
#include <iostream>
#include <glm/glm.hpp>
#include <math.h>

#include "FileOrganizer.h"
#include "Preprocessing.h"
#include "matplotlibcpp.h"

#include <MRMesh/MRConvexHull.h>
#include <MRMesh/MRMeshFwd.h>
#include <MRMesh/MRMeshLoad.h>
#include <MRMesh/MRMeshSave.h>
#include <MRMesh/MRMesh.h>
#include <MRMesh/MRMeshDecimate.h>
#include <MRMesh/MRBuffer.h>
#include <MRMesh/MRMeshSubdivide.h>
class FeatureExtraction
{
public:
	FeatureExtraction() {};

	// 1. Surface area S
	float SurfaceArea(std::vector<float> positions);

	// 2. Compactness
	float Compactness(float surfaceArea, float volume);

	// 3. Recantgularity
	float Rectangularity(std::vector<float> positions, glm::vec3 barycenter, std::string filePath, std::string shapeFilename, std::string csvFilename);
	// 4. Diameter
	float Diameter(std::vector<float>& positions);

	// 5. Convexity
	float Convexity(std::vector<float> positions, glm::vec3 barycenter, std::string filename);

	// 6. Eccentricity
	float Eccentricity(float largeEig, float smallEig);

	// 7. A3 -> D4
	//// A3
	void A3(std::vector<float>& positions, int samples, int bins);
	//// D1
	void D1(std::vector<float>& positions, glm::vec3 barycenter, int samples, int bins);
	//// D2
	void D2(std::vector<float>& positions, int samples, int bins);
	//// D3
	void D3(std::vector<float>& positions, int samples, int bins);
	//// D4
	void D4(std::vector<float>& positions, int samples, int bins);

	// Helper
	float Volume(std::string& fileName);

private:
	float Volume(std::vector<float> positions, std::string faceType, glm::vec3 barycenter);

	float ComputeLocalArea(glm::vec3 v1, glm::vec3 v2, glm::vec3 v3);

	float Distance(glm::vec3 v1, glm::vec3 v2);
	
	void GenerateConvexHull(std::string filename, std::string outputDir);
};

