#pragma once
#include<vector>
#include<string>
#include<glm/glm.hpp>

class ElementaryFeatures
{
	ElementaryFeatures() {};

	float SurfaceArea(std::vector<float> positions);

	// shape volume divided by OBB volume, should return a histogram
	float Rectangularity(std::vector<float> positions);

	// shape volume divided by convex hull volume, should return a histogram
	float Convexity(std::vector<float> positions);

};

