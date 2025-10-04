#include "ElementaryFeatures.h"

float ElementaryFeatures::SurfaceArea(std::vector<float> positions)
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


float ElementaryFeatures::Rectangularity(std::vector<float> positions, float barycenter[3])
{
    // 1. Get eigen vector aligned bounding volume (which after full normalization is just the axis aligned one) 
    // 2. Compute the ratio between the mesh volume and that of the bounding volume

}


float ElementaryFeatures::Convexity(std::vector<float> positions)
{

}

float ElementaryFeatures::ComputeVolume(std::vector<float> positions, std::string faceType, float barycenter[3])
{
    // Iterate through all faces and compute volume of the tetrahedron with the face as base and the barycenter as the tip
    for (int i = 0; i + 14 < positions.size(); i += 18) {
        glm::vec3 v1(positions[i + 0], positions[i + 1], positions[i + 2]);
        glm::vec3 v2(positions[i + 6], positions[i + 7], positions[i + 8]);
        glm::vec3 v3(positions[i + 12], positions[i + 13], positions[i + 14]);

        float baseArea = ComputeLocalArea(v1, v2, v3);

        
    }
}

float ElementaryFeatures::ComputeLocalArea(glm::vec3 v1, glm::vec3 v2, glm::vec3 v3)
{
    glm::vec3 e1 = v2 - v1;
    glm::vec3 e2 = v3 - v1;
    glm::vec3 cross = glm::cross(e1, e2);

    return glm::length(cross) * 0.5f; // triangle area
}