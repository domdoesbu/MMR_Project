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

namespace plt = matplotlibcpp;
void FeatureExtraction::A3(std::vector<float>& positions, int samples, int bins)
{
	// Pick 3 random points on the surface and find the angle between them
	// Repeat this a large number of times and make a histogram of the angles
	std::vector<float> vertexVals;
	int numVertices = positions.size() / 6;
	int k = pow(samples, 1.0 / 3.0);
	for (int i = 0; i < k; i++) {
		int vi = rand() % numVertices;
		for (int j = 0; j < k; j++) {
			int vj = rand() % numVertices;
			if (vj == vi) continue;
			for (int l = 0; l < k; l++) {
				int vl = rand() % numVertices;
				if (vl == vi || vl == vj) continue;
				glm::vec3 p1(positions[vi * 6 + 0], positions[vi * 6 + 1], positions[vi * 6 + 2]);
				glm::vec3 p2(positions[vj * 6 + 0], positions[vj * 6 + 1], positions[vj * 6 + 2]);
				glm::vec3 p3(positions[vl * 6 + 0], positions[vl * 6 + 1], positions[vl * 6 + 2]);
				glm::vec3 v1 = p2 - p1;
				glm::vec3 v2 = p3 - p1;
				v1 = glm::normalize(v1);
				v2 = glm::normalize(v2);
				float dotProduct = glm::dot(v1, v2);
				float angle = acos(dotProduct);
				vertexVals.push_back(angle);
			}
		}
	}

	plt::xlabel("Angle");
	plt::ylabel("Count");
    plt::title("A3 Histogram");
	plt::hist(vertexVals, bins);
	plt::show();

}

void FeatureExtraction::D1(std::vector<float>& positions, glm::vec3 barycenter, int samples, int bins)
{
	// Pick a random point on the surface and find the distance to the barycenter
	std::vector<float> vertexVals;
	int numVertices = positions.size() / 6;
	for (int i = 0; i < samples; i++) {
		int random = rand() % numVertices;
		glm::vec3 p(positions[random * 6 + 0], positions[random * 6 + 1], positions[random * 6 + 2]);
		float distance = glm::distance(p, barycenter);
		vertexVals.push_back(distance);
	}
	plt::xlabel("Distance to Barycenter");
	plt::ylabel("Count");
	plt::title("D1 Histogram");
	plt::hist(vertexVals, bins);
	plt::show();
}

void FeatureExtraction::D2(std::vector<float>& positions, int samples, int bins)
{
	// Pick 2 random points on the surface and find the distance between them
	std::vector<float> vertexVals;
	int numVertices = positions.size() / 6;
	int k = pow(samples, 1.0 / 2.0);
	for (int i = 0; i < k; i++) {
		int vi = rand() % numVertices;
		for (int j = 0; j < k; j++) {
			int vj = rand() % numVertices;
			if (vj == vi) continue;
			glm::vec3 p1(positions[vi * 6 + 0], positions[vi * 6 + 1], positions[vi * 6 + 2]);
			glm::vec3 p2(positions[vj * 6 + 0], positions[vj * 6 + 1], positions[vj * 6 + 2]);
			float distance = glm::distance(p1, p2);
			vertexVals.push_back(distance);
		}
	}

	plt::xlabel("Distance between 2 points");
	plt::ylabel("Count");
	plt::title("D2 Histogram");
	plt::hist(vertexVals, 20);
	plt::show();
}

void FeatureExtraction::D3(std::vector<float>& positions, int samples, int bins)
{
	// Pick 3 random points on the surface and find the area of the triangle they form
	std::vector<float> vertexVals;
	int numVertices = positions.size() / 6;
	int k = pow(samples, 1.0 / 3.0);
	for (int i = 0; i < k; i++) {
		int vi = rand() % numVertices;
		for (int j = 0; j < k; j++) {
			int vj = rand() % numVertices;
			if (vj == vi) continue;
			for (int l = 0; l < k; l++) {
				int vl = rand() % numVertices;
				if (vl == vi || vl == vj) continue;
				glm::vec3 p1(positions[vi * 6 + 0], positions[vi * 6 + 1], positions[vi * 6 + 2]);
				glm::vec3 p2(positions[vj * 6 + 0], positions[vj * 6 + 1], positions[vj * 6 + 2]);
				glm::vec3 p3(positions[vl * 6 + 0], positions[vl * 6 + 1], positions[vl * 6 + 2]);
				glm::vec3 v1 = p2 - p1;
				glm::vec3 v2 = p3 - p1;
				glm::vec3 crossProduct = glm::cross(v1, v2);
				float area = glm::length(crossProduct) / 2.0f;
				vertexVals.push_back(area);
			}
		}
	}
	std::cout << vertexVals.size() << std::endl;
	plt::xlabel("Area of Triangles");
	plt::ylabel("Count");
	plt::title("D3 Histogram");
	plt::hist(vertexVals, 20);
	plt::show();
}

void FeatureExtraction::D4(std::vector<float>& positions, int samples, int bins)
{
	std::vector<float> vertexVals;
	int numVertices = positions.size() / 6;
	int k = pow(samples, 1.0 / 4.0);
	for (int i = 0; i < k; i++) {
		int vi = rand() % numVertices;
		for (int j = 0; j < k; j++) {
			int vj = rand() % numVertices;
			if (vj == vi) continue;
			for (int l = 0; l < k; l++) {
				int vl = rand() % numVertices;
				if (vl == vi || vl == vj) continue;
				for (int m = 0; m < k; m++) {
					int vm = rand() % numVertices;
					if (vm == vi || vm == vj || vm == vl) continue;
					glm::vec3 p1(positions[vi * 6 + 0], positions[vi * 6 + 1], positions[vi * 6 + 2]);
					glm::vec3 p2(positions[vj * 6 + 0], positions[vj * 6 + 1], positions[vj * 6 + 2]);
					glm::vec3 p3(positions[vl * 6 + 0], positions[vl * 6 + 1], positions[vl * 6 + 2]);
					glm::vec3 p4(positions[vm * 6 + 0], positions[vm * 6 + 1], positions[vm * 6 + 2]);
					glm::vec3 v1 = p2 - p1;
					glm::vec3 v2 = p3 - p1;
					glm::vec3 v3 = p4 - p1;
					float volume = glm::dot(v1, glm::cross(v2, v3)) / 6.0f;
					vertexVals.push_back(abs(volume));
				}
			}
		}
	}

	// Pick 4 random points on the surface and find the volume of the tetrahedron they form
	plt::xlabel("Volume of Tetrahedron");
	plt::ylabel("Count");
	plt::title("D4 Histogram");
	plt::hist(vertexVals, 20);
	plt::show();
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

float FeatureExtraction::Rectangularity(std::vector<float> positions, glm::vec3 barycenter, std::string shapeFilename, std::string csvFilename)
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

void FeatureExtraction::GenerateConvexHull(std::string filename, std::string outputDir)
{
	MR::Mesh mesh = *MR::MeshLoad::fromAnySupportedFormat(filename);

	//// Repack mesh optimally.
	//// It's not necessary but highly recommended to achieve the best performance in parallel processing
	mesh.packOptimally();

	MR::Mesh convexHull = MR::makeConvexHull(mesh);
	//ask Dom how this works
	MR::MeshSave::toAnySupportedFormat(mesh, outputDir);
	return;
}

// Shape volume divided by convex hull volume
float FeatureExtraction::Convexity(std::vector<float> positions, glm::vec3 barycenter, std::string filename)
{
    // Generate the convex hull mesh using MeshLib
	std::string chPath = "./ConvexHulls/" + filename; // I dont like how Im saving these and loading them, feels like a waste of time
	GenerateConvexHull(filename, "./ConvexHulls/" + filename);
	FileOrganizer fo;
	std::vector<float> chPositions;
	std::vector<unsigned int> chIndices;
	fo.LoadObj(chPath.c_str(), chPositions, chIndices);
	
    // compute the volume of the convex hull
	Preprocessing prep;
	glm::vec3 chBarycenter = prep.ComputeBarycenter(chPositions);
	float chVolume = ComputeVolume(chPositions, "triangles", chBarycenter);

    // compute the volume of the shape
	float shapeVolume = ComputeVolume(chPositions, "triangles", chBarycenter);

    // return the ratio
	return shapeVolume / chVolume;
}

// TODO: untested
float FeatureExtraction::ComputeVolume(std::vector<float> positions, std::string faceType, glm::vec3 barycenter)
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
        float height = Distance(barycenter, localBarycenter);
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