#include "ElementaryFeatures.h"

float ElementaryFeatures::SurfaceArea(std::vector<float> positions)
{
    float sumOfAreas = 0.0;
    for (int i = 0; i + 14 < positions.size(); i += 18) {
        glm::vec3 v1(positions[i + 0], positions[i + 1], positions[i + 2]);
        glm::vec3 v2(positions[i + 6], positions[i + 7], positions[i + 8]);
        glm::vec3 v3(positions[i + 12], positions[i + 13], positions[i + 14]);
        glm::vec3 localBarycenter(0.0f);

        glm::vec3 e1 = v2 - v1;
        glm::vec3 e2 = v3 - v1;
        glm::vec3 cross = glm::cross(e1, e2);

        float localArea = glm::length(cross) * 0.5f; // triangle area

        // sum (x * area)
        // / sum area

        sumOfAreas += localArea;
    }
    return sumOfAreas;
}


float ElementaryFeatures::Rectangularity(std::vector<float> positions)
{

}


float ElementaryFeatures::Convexity(std::vector<float> positions)
{

}