#pragma once
#include <vector>
#include <iostream>
#include<glm/glm.hpp>
#include"FileOrganizer.h"
#include"Preprocessing.h"
#include<MRMesh/MRConvexHull.h>
#include <MRMesh/MRMeshFwd.h>
#include <MRMesh/MRMeshLoad.h>
#include <MRMesh/MRMeshSave.h>
#include <MRMesh/MRMesh.h>

class FeatureExtraction
{
public:
	FeatureExtraction() {};



	float SurfaceArea(std::vector<float> positions);

	// shape volume divided by OBB volume
	float Rectangularity(std::vector<float> positions, glm::vec3 barycenter, std::string shapeFilename, std::string csvFilename);

	// shape volume divided by convex hull volume, should return a histogram?
	float Convexity(std::vector<float> positions, glm::vec3 barycenter, std::string filename);


	// Volume V

	// Surface area S

	// Compactness
	// S^3/(36*Pi*V^2)


	// 3D rectangularity

	// Diameter: largest distance between any two surface points
	float Diameter(std::vector<float>& positions);
	// Convexity (shape volume / convex hull volume)

	// Eccentricity (ratio of largest to smallest eigenvalues of covariance matrix)
	float Eccentricity(float largeEig, float smallEig);
	// A3
	float A3(std::vector<float>& positions);
	// D1
	float D1(std::vector<float>& positions, glm::vec3 barycenter);
	// D2
	float D2(std::vector<float>& positions);
	// D3
	float D3(std::vector<float>& positions);
	// D4
	float D4(std::vector<float>& positions);

private:
	float ComputeVolume(std::vector<float> positions, std::string faceType, glm::vec3 barycenter);

	float ComputeLocalArea(glm::vec3 v1, glm::vec3 v2, glm::vec3 v3);

	float Distance(glm::vec3 v1, glm::vec3 v2);
	
	void GenerateConvexHull(std::string filename, std::string outputDir);
};

