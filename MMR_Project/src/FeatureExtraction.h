#pragma once
#include <vector>

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

	// D1

	// D2

	// D3

	// D4


};

