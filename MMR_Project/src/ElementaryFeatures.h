#pragma once
#include<vector>
#include<string>
#include<glm/glm.hpp>

class ElementaryFeatures
{
public:
	ElementaryFeatures() {};

	float SurfaceArea(std::vector<float> positions);

	// shape volume divided by OBB volume
	float Rectangularity(std::vector<float> positions, float barycenter[3]);

	// shape volume divided by convex hull volume, should return a histogram?
	float Convexity(std::vector<float> positions);

private:
	float ComputeVolume(std::vector<float> positions, std::string faceType, float barycenter[3]);

	float ComputeLocalArea(glm::vec3 v1, glm::vec3 v2, glm::vec3 v3);
};

