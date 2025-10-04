#include "FeatureExtraction.h"
#include <iostream>



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