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

float FeatureExtraction::SurfaceArea(std::vector<float> positions)
{
    float sumOfAreas = 0.0;
    for (int i = 0; i + 14 < positions.size(); i += 18) {
        glm::vec3 v1(positions[i + 0], positions[i + 1], positions[i + 2]);
        glm::vec3 v2(positions[i + 6], positions[i + 7], positions[i + 8]);
        glm::vec3 v3(positions[i + 12], positions[i + 13], positions[i + 14]);

        float localArea = ComputeLocalArea(v1, v2, v3); // triangle area

        sumOfAreas += localArea;
    }
    return sumOfAreas;
}

float FeatureExtraction::Rectangularity(std::vector<float> positions, float barycenter[3], std::string shapeFilename, std::string csvFilename)
{
    // 1. Get eigen vector aligned bounding volume (which after full normalization is just the axis aligned one) from the csv database
    shapeInfo info;
    FileOrganizer fo;
    info = fo.getShapeFromDatabase(csvFilename, shapeFilename);

    glm::vec3 OBBp1(info.minX, info.maxY, info.minZ);
    glm::vec3 OBBp2(info.maxX, info.maxY, info.maxZ);
    glm::vec3 OBBp3(info.maxX, info.minY, info.minZ);
    glm::vec3 OBBp4(info.maxX, info.maxY, info.minZ);


    float OBBbase = Distance(OBBp1, OBBp4);
    float OBBheight = Distance(OBBp3, OBBp4);
    float OBBdepth = Distance(OBBp4, OBBp2);

    float OBBvolume = OBBbase * OBBheight * OBBdepth;

    // 2. Compute the ratio between the mesh volume and that of the bounding volume
    float shapeVolume = ComputeVolume(positions, info.faceType, barycenter);

    return shapeVolume / OBBvolume;
}

// Shape volume divided by convex hull volume
float FeatureExtraction::Convexity(std::vector<float> positions, float barycenter[3])
{
    // Generate the convex hull mesh using MeshLib
    //MR::Mesh mesh;
    //MR::makeConvexHull(mesh);

    //// compute the volume of the convex hull

    //// compute the volume of the shape
    //float shapeVolume = ComputeVolume(positions, "triangles", barycenter);

    //// return the ratio
}

// TODO: untested
float FeatureExtraction::ComputeVolume(std::vector<float> positions, std::string faceType, float barycenter[3])
{
    float fullVolume = 0.0;
    // TODO: change computation based on facetype
    if (faceType != "triangle") {
        std::cout << "vol computation failed, implement other facetypes" << std::endl;
        return -1.0;
    }
    // Iterate through all faces and compute volume of the tetrahedron with the face as base and the barycenter as the tip
    for (int i = 0; i + 14 < positions.size(); i += 18) {
        glm::vec3 v1(positions[i + 0], positions[i + 1], positions[i + 2]);
        glm::vec3 v2(positions[i + 6], positions[i + 7], positions[i + 8]);
        glm::vec3 v3(positions[i + 12], positions[i + 13], positions[i + 14]);

        float baseArea = ComputeLocalArea(v1, v2, v3);

        // Volume = 1/3 * B * h
        // Find the local barycenter of the face
        glm::vec3 localBarycenter = v1 + v2 + v3;
        localBarycenter.x = localBarycenter.x / 3;
        localBarycenter.y = localBarycenter.y / 3;
        localBarycenter.z = localBarycenter.z / 3;

        // We need to find the distance from the face barycenter to the mesh barycenter (that's h)
        float height = Distance(glm::vec3(barycenter[0],barycenter[1],barycenter[2]), localBarycenter);
        float localVolume = (1 / 3) * baseArea * height;
        fullVolume += localVolume;
    }
    return fullVolume;
}
//TODO: add support for other facetypes?
float FeatureExtraction::ComputeLocalArea(glm::vec3 v1, glm::vec3 v2, glm::vec3 v3)
{
    glm::vec3 e1 = v2 - v1;
    glm::vec3 e2 = v3 - v1;
    glm::vec3 cross = glm::cross(e1, e2);

    return glm::length(cross) * 0.5f; // triangle area
}

//TODO: untested
float FeatureExtraction::Distance(glm::vec3 v1, glm::vec3 v2) 
{
    float a1 = pow(v1.x - v2.x, 2);
    float a2 = pow(v1.y - v2.y, 2);
    float a3 = pow(v1.z - v2.z, 2);

    return sqrt(a1 + a2 + a3);
}