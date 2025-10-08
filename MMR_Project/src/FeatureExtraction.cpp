#include "FeatureExtraction.h"

// Diameter
float FeatureExtraction::Diameter(std::vector<float>& positions)
{
	// Go through each combo of points and find the distances
	float maxDistance = 0.0f;
	for (size_t i = 0; i < positions.size() + 7; i += 6) 
	{
		float x1 = positions[i + 0];
		float y1 = positions[i + 1];
		float z1 = positions[i + 2];
		for (size_t j = i + 6; j < positions.size(); j += 6)
		{
			float x2 = positions[j + 0];
			float y2 = positions[j + 1];
			float z2 = positions[j + 2];
			float distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) + (z2 - z1) * (z2 - z1));
			if (distance > maxDistance)
			{
				maxDistance = distance;
			}
		}
	}
	return maxDistance;
}

float FeatureExtraction::Eccentricity(float largeEig, float smallEig)
{
	std::cout << "Large Eig: " << largeEig << " Small Eig: " << smallEig << std::endl;
	return largeEig / smallEig;
}

float FeatureExtraction::A3(std::vector<float>& positions)
{
	// Pick 3 random points on the surface and find the angle between them
	// Repeat this a large number of times and make a histogram of the angles
	int random1 = rand() % (positions.size() / 6);
	int random2 = rand() % (positions.size() / 6);
	int random3 = rand() % (positions.size() / 6);
	glm::vec3 p1(positions[random1 * 6 + 0], positions[random1 * 6 + 1], positions[random1 * 6 + 2]);
	glm::vec3 p2(positions[random2 * 6 + 0], positions[random2 * 6 + 1], positions[random2 * 6 + 2]);
	glm::vec3 p3(positions[random3 * 6 + 0], positions[random3 * 6 + 1], positions[random3 * 6 + 2]);

	glm::vec3 v1 = p2 - p1;
	glm::vec3 v2 = p3 - p1;

	v1 = glm::normalize(v1);
	v2 = glm::normalize(v2);

	float dotProduct = glm::dot(v1, v2);
	float angle = acos(dotProduct);

	return angle;
}

float FeatureExtraction::D1(std::vector<float>& positions, glm::vec3 barycenter)
{
	// Pick a random point on the surface and find the distance to the barycenter
	int random = rand() % (positions.size() / 6);
	glm::vec3 p(positions[random * 6 + 0], positions[random * 6 + 1], positions[random * 6 + 2]);
	float distance = glm::distance(p, barycenter);
	return distance;
}

float FeatureExtraction::D2(std::vector<float>& positions)
{
	// Pick 2 random points on the surface and find the distance between them
	int random1 = rand() % (positions.size() / 6);
	int random2 = rand() % (positions.size() / 6);
	glm::vec3 p1(positions[random1 * 6 + 0], positions[random1 * 6 + 1], positions[random1 * 6 + 2]);
	glm::vec3 p2(positions[random2 * 6 + 0], positions[random2 * 6 + 1], positions[random2 * 6 + 2]);
	float distance = glm::distance(p1, p2);
	return distance;
}

float FeatureExtraction::D3(std::vector<float>& positions)
{
	// Pick 3 random points on the surface and find the area of the triangle they form
	int random1 = rand() % (positions.size() / 6);
	int random2 = rand() % (positions.size() / 6);
	int random3 = rand() % (positions.size() / 6);
	glm::vec3 p1(positions[random1 * 6 + 0], positions[random1 * 6 + 1], positions[random1 * 6 + 2]);
	glm::vec3 p2(positions[random2 * 6 + 0], positions[random2 * 6 + 1], positions[random2 * 6 + 2]);
	glm::vec3 p3(positions[random3 * 6 + 0], positions[random3 * 6 + 1], positions[random3 * 6 + 2]);
	glm::vec3 v1 = p2 - p1;
	glm::vec3 v2 = p3 - p1;
	glm::vec3 crossProduct = glm::cross(v1, v2);
	float area = glm::length(crossProduct) / 2.0f;
	return area;
}

float FeatureExtraction::D4(std::vector<float>& positions)
{
	// Pick 4 random points on the surface and find the volume of the tetrahedron they form
	int random1 = rand() % (positions.size() / 6);
	int random2 = rand() % (positions.size() / 6);
	int random3 = rand() % (positions.size() / 6);
	int random4 = rand() % (positions.size() / 6);
	glm::vec3 p1(positions[random1 * 6 + 0], positions[random1 * 6 + 1], positions[random1 * 6 + 2]);
	glm::vec3 p2(positions[random2 * 6 + 0], positions[random2 * 6 + 1], positions[random2 * 6 + 2]);
	glm::vec3 p3(positions[random3 * 6 + 0], positions[random3 * 6 + 1], positions[random3 * 6 + 2]);
	glm::vec3 p4(positions[random4 * 6 + 0], positions[random4 * 6 + 1], positions[random4 * 6 + 2]);
	glm::vec3 v1 = p2 - p1;
	glm::vec3 v2 = p3 - p1;
	glm::vec3 v3 = p4 - p1;
	float volume = glm::dot(v1, glm::cross(v2, v3)) / 6.0f;
	return abs(volume);
}