#pragma once
#include <vector>
#include <iostream>
#include <glm/glm.hpp>

class FeatureExtraction
{
public:
	FeatureExtraction() {};

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

};

