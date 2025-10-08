#pragma once
#include <vector>
#include <iostream>
#include<glm/glm.hpp>
#include"FileOrganizer.h"
#include<MRMesh/MRConvexHull.h>

class FeatureExtraction
{
public:
	FeatureExtraction() {};



	float SurfaceArea(std::vector<float> positions);

	// shape volume divided by OBB volume
	float Rectangularity(std::vector<float> positions, float barycenter[3], std::string shapeFilename, std::string csvFilename);

	// shape volume divided by convex hull volume, should return a histogram?
	float Convexity(std::vector<float> positions, float barycenter[3]);


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

	// D1

	// D2

	// D3

	// D4

private:
	float ComputeVolume(std::vector<float> positions, std::string faceType, float barycenter[3]);

	float ComputeLocalArea(glm::vec3 v1, glm::vec3 v2, glm::vec3 v3);

	float Distance(glm::vec3 v1, glm::vec3 v2);
};

