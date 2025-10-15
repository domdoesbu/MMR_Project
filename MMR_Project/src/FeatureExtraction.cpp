#include "FeatureExtraction.h"

namespace plt = matplotlibcpp;
namespace fs = std::filesystem;

// 1. Surface Area :: S
//// Helper
float FeatureExtraction::ComputeLocalArea(glm::vec3 v1, glm::vec3 v2, glm::vec3 v3)
{
	glm::vec3 e1 = v2 - v1;
	glm::vec3 e2 = v3 - v1;
	glm::vec3 cross = glm::cross(e1, e2);

	return glm::length(cross) * 0.5f; // triangle area
}

float FeatureExtraction::SurfaceArea(std::string& fileName)
{
	auto mesh = MR::MeshLoad::fromAnySupportedFormat(fileName);
	if (!mesh)
	{
		std::cerr << "Failed to load mesh for surface area: " << fileName << std::endl;
		return 0.0f;
	}
	return mesh->area();

}

// 2. Compactness
float FeatureExtraction::Compactness(float surfaceArea, float volume)
{
	if (volume == 0) return 0.0f;
	return (surfaceArea * surfaceArea * surfaceArea) / (36.0f * M_PI * volume * volume);
}

// 3. Rectangularity
float FeatureExtraction::Rectangularity(std::vector<float> positions, glm::vec3 barycenter, std::string filePath, std::string shapeFilename, std::string csvFilename)
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
	float shapeVolume = Volume(filePath);

	return shapeVolume / OBBvolume;
}

// 4. Diameter
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

// 5. Convexity
//// Helper for generation
std::vector<float> FeatureExtraction::GenerateConvexHull(std::string filename, std::string outputDir)
{
	MR::Mesh mesh = *MR::MeshLoad::fromAnySupportedFormat(filename);

	//// Repack mesh optimally.
	//// It's not necessary but highly recommended to achieve the best performance in parallel processing
	mesh.packOptimally();

	MR::Mesh convexHull = MR::makeConvexHull(mesh);
	//ask Dom how this works
	MR::MeshSave::toAnySupportedFormat(convexHull, outputDir);

	convexHull.points.vec_;

	std::vector<float> positions;
	positions.resize(convexHull.points.size() * 3);
	for (int i = 0; i < convexHull.points.size(); i++) {
		positions[i * 3 + 0] = convexHull.points.vec_[i].x;
		positions[i * 3 + 1] = convexHull.points.vec_[i].y;
		positions[i * 3 + 2] = convexHull.points.vec_[i].z;
	}

	return positions;
}

float FeatureExtraction::Convexity(std::vector<float> positions, glm::vec3 barycenter, std::string filename, std::string filePath)
{
	// Generate the convex hull mesh using MeshLib
	std::string chPath = "./ConvexHulls/" + filename; // I dont like how Im saving these and loading them, feels like a waste of time
	std::vector<float> chPositions = GenerateConvexHull(filePath, "./ConvexHulls/" + filename);
	FileOrganizer fo;
	//std::vector<unsigned int> chIndices;
	//fo.LoadObj(chPath.c_str(), chPositions, chIndices);

	float chVolume = Volume(chPositions);

	// compute the volume of the shape
	float shapeVolume = Volume(filePath);

	// return the ratio
	return shapeVolume / chVolume;
}

// 6. Eccentricity
float FeatureExtraction::Eccentricity(float largeEig, float smallEig)
{
	std::cout << "Large Eig: " << largeEig << " Small Eig: " << smallEig << std::endl;
	return largeEig / smallEig;
}

// 7. A3 -> D4
void FeatureExtraction::ExtractA3Features(std::string& classPath) {
	FileOrganizer fo;
	std::vector<std::pair<std::vector<double>, std::vector<double>>> a3Results;

	std::vector<float> positions;
	std::vector<unsigned int> indices;
	fs::path sourcePath = classPath;
	std::string databasePath = sourcePath.string();

	for (const auto& file : fs::directory_iterator(databasePath)) {
		positions.clear();
		indices.clear();
		std::string currentFile = file.path().filename().string();
		std::string fullFilePath = databasePath + "/" + currentFile;
		if (!fo.LoadObj(fullFilePath.c_str(), positions, indices))
		{
			std::cerr << "Failed to load obj" << std::endl;
		}

		std::pair<std::vector<double>, std::vector<double>> results = A3(positions, 1000000, 20);

		a3Results.push_back(results);
	}
	if (a3Results.empty()) {
		std::cerr << "No valid A3 results to plot.\n";
		return;
	}

	plt::figure();
	for (size_t i = 0; i < a3Results.size(); ++i) {
		auto& bins = a3Results[i].first;
		auto& counts = a3Results[i].second;

		// connected line + scatter points
		plt::plot(bins, counts);
		plt::scatter(bins, counts, 8.0);

	}
	plt::xlabel("Angle (radians)");
	plt::ylabel("Count");
	plt::title(classPath);
	plt::legend();
	plt::grid(true);
	plt::ylim(0.0, 1.0);
	plt::show();
}
std::pair< std::vector<double>, std::vector<double>>  FeatureExtraction::A3(std::vector<float>& positions, int samples, int bins)
{
	// Pick 3 random points on the surface and find the angle between them
	// Repeat this a large number of times and make a histogram of the angles
	std::vector<double> vertexVals;
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
	

	float minVal = 0.0f;
	float maxVal = glm::pi<float>();
	float binWidth = (maxVal - minVal) / bins;
	std::vector<double> counts(bins, 0.0);

	for (float v : vertexVals) {
		int binIdx = static_cast<int>((v - minVal) / binWidth);
		if (binIdx < 0) binIdx = 0;
		if (binIdx >= bins) binIdx = bins - 1;
		counts[binIdx]++;
	}

	double total = std::accumulate(counts.begin(), counts.end(), 0.0);
	if (total > 0.0) {
		for (auto& c : counts) c /= total;
	}

	
	// Compute bin centers
	std::vector<double> bin_centers(bins);
	for (int i = 0; i < bins; ++i) {
		bin_centers[i] = minVal + (i + 0.5) * binWidth;
	}
	return { bin_centers, counts };
}

void FeatureExtraction::ExtractD1Features(std::string& classPath) {
	FileOrganizer fo;
	std::vector<std::pair<std::vector<double>, std::vector<double>>> d1Results;

	std::vector<float> positions;
	std::vector<unsigned int> indices;
	fs::path sourcePath = classPath;
	std::string databasePath = sourcePath.string();

	for (const auto& file : fs::directory_iterator(databasePath)) {
		positions.clear();
		indices.clear();
		std::string currentFile = file.path().filename().string();
		std::string fullFilePath = databasePath + "/" + currentFile;
		if (!fo.LoadObj(fullFilePath.c_str(), positions, indices))
		{
			std::cerr << "Failed to load obj" << std::endl;
		}

		baryAndEigInfo info = fo.getBaryAndEigFromCSV("Bary_Eigs.csv", currentFile);
		glm::vec3 barycenter = { info.baryX, info.baryY, info.baryZ };
		glm::vec3 origin = { 0,0,0 };

		std::pair<std::vector<double>, std::vector<double>> results = D1(positions, barycenter, 20);

		d1Results.push_back(results);
	}
	if (d1Results.empty()) {
		std::cerr << "No valid D1 results to plot.\n";
		return;
	}

	plt::figure();
	for (size_t i = 0; i < d1Results.size(); ++i) {
		auto& bins = d1Results[i].first;
		auto& counts = d1Results[i].second;

		// connected line + scatter points
		plt::plot(bins, counts);
		plt::scatter(bins, counts, 8.0);

	}
	plt::xlabel("Distance");
	plt::ylabel("Count");
	plt::title("D1 " + classPath);
	plt::legend();
	plt::grid(true);
	plt::show();
}
std::pair< std::vector<double>, std::vector<double>> FeatureExtraction::D1(std::vector<float>& positions, glm::vec3 barycenter, int bins)
{
	// Pick a random point on the surface and find the distance to the barycenter
	std::vector<float> vertexVals;

	for (int i = 0; i + 6 < positions.size(); i += 6) {
		glm::vec3 p(positions[i], positions[i + 1], positions[i + 2]);
		float distance = glm::distance(p, barycenter);
		vertexVals.push_back(distance);

	}
	float maxDistance = *std::max_element(vertexVals.begin(), vertexVals.end());
	for (auto& v : vertexVals)
		v /= maxDistance; // scale between 0 and 1
	float minVal = 0.0f;
	float maxVal = 1;
	float binWidth = (maxVal - minVal) / bins;
	std::vector<double> counts(bins, 0.0);

	for (float v : vertexVals) {
		int binIdx = static_cast<int>((v - minVal) / binWidth);
		if (binIdx < 0) binIdx = 0;
		if (binIdx >= bins) binIdx = bins - 1;
		counts[binIdx]++;
	}

	double total = std::accumulate(counts.begin(), counts.end(), 0.0);
	if (total > 0.0) {
		for (auto& c : counts) c /= total;
	}


	// Compute bin centers
	std::vector<double> bin_centers(bins);
	for (int i = 0; i < bins; ++i) {
		bin_centers[i] = minVal + (i + 0.5) * binWidth;
	}
	return { bin_centers, counts };
}

void FeatureExtraction::ExtractD2Features(std::string& classPath) {
	FileOrganizer fo;
	std::vector<std::pair<std::vector<double>, std::vector<double>>> d2Results;

	std::vector<float> positions;
	std::vector<unsigned int> indices;
	fs::path sourcePath = classPath;
	std::string databasePath = sourcePath.string();

	for (const auto& file : fs::directory_iterator(databasePath)) {
		positions.clear();
		indices.clear();
		std::string currentFile = file.path().filename().string();
		std::string fullFilePath = databasePath + "/" + currentFile;
		if (!fo.LoadObj(fullFilePath.c_str(), positions, indices))
		{
			std::cerr << "Failed to load obj" << std::endl;
		}

		std::pair<std::vector<double>, std::vector<double>> results = D2(positions, 1000000, 20);

		d2Results.push_back(results);
	}
	if (d2Results.empty()) {
		std::cerr << "No valid D2 results to plot.\n";
		return;
	}

	plt::figure();
	for (size_t i = 0; i < d2Results.size(); ++i) {
		auto& bins = d2Results[i].first;
		auto& counts = d2Results[i].second;

		// connected line + scatter points
		plt::plot(bins, counts);
		plt::scatter(bins, counts, 8.0);

	}
	plt::xlabel("Distance");
	plt::ylabel("Count");
	plt::title("D2 " + classPath);
	plt::legend();
	plt::grid(true);
	plt::show();
}
std::pair< std::vector<double>, std::vector<double>> FeatureExtraction::D2(std::vector<float>& positions, int samples, int bins)
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
	float maxDistance = *std::max_element(vertexVals.begin(), vertexVals.end());
	for (auto& v : vertexVals)
		v /= maxDistance; // scale between 0 and 1
	float minVal = 0.0f;
	float maxVal = 1;
	float binWidth = (maxVal - minVal) / bins;
	std::vector<double> counts(bins, 0.0);

	for (float v : vertexVals) {
		int binIdx = static_cast<int>((v - minVal) / binWidth);
		if (binIdx < 0) binIdx = 0;
		if (binIdx >= bins) binIdx = bins - 1;
		counts[binIdx]++;
	}

	double total = std::accumulate(counts.begin(), counts.end(), 0.0);
	if (total > 0.0) {
		for (auto& c : counts) c /= total;
	}

	// Compute bin centers
	std::vector<double> bin_centers(bins);
	for (int i = 0; i < bins; ++i) {
		bin_centers[i] = minVal + (i + 0.5) * binWidth;
	}
	return { bin_centers, counts };
}

void FeatureExtraction::ExtractD3Features(std::string& classPath) {
	FileOrganizer fo;
	std::vector<std::pair<std::vector<double>, std::vector<double>>> d3Results;

	std::vector<float> positions;
	std::vector<unsigned int> indices;
	fs::path sourcePath = classPath;
	std::string databasePath = sourcePath.string();

	for (const auto& file : fs::directory_iterator(databasePath)) {
		positions.clear();
		indices.clear();
		std::string currentFile = file.path().filename().string();
		std::string fullFilePath = databasePath + "/" + currentFile;
		if (!fo.LoadObj(fullFilePath.c_str(), positions, indices))
		{
			std::cerr << "Failed to load obj" << std::endl;
		}

		std::pair<std::vector<double>, std::vector<double>> results = D3(positions, 1000000, 20);

		d3Results.push_back(results);
	}
	if (d3Results.empty()) {
		std::cerr << "No valid D3 results to plot.\n";
		return;
	}

	plt::figure();
	for (size_t i = 0; i < d3Results.size(); ++i) {
		auto& bins = d3Results[i].first;
		auto& counts = d3Results[i].second;

		// connected line + scatter points
		plt::plot(bins, counts);
		plt::scatter(bins, counts, 8.0);

	}
	plt::xlabel("Area");
	plt::ylabel("Count");
	plt::title("D3 " + classPath);
	plt::legend();
	plt::grid(true);
	plt::show();
}
std::pair< std::vector<double>, std::vector<double>> FeatureExtraction::D3(std::vector<float>& positions, int samples, int bins)
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

	float maxVolume = *std::max_element(vertexVals.begin(), vertexVals.end());
	for (auto& v : vertexVals)
		v /= maxVolume; // scale between 0 and 1
	float minVal = 0.0f;
	float maxVal = 1;
	float binWidth = (maxVal - minVal) / bins;
	std::vector<double> counts(bins, 0.0);

	for (float v : vertexVals) {
		int binIdx = static_cast<int>((v - minVal) / binWidth);
		if (binIdx < 0) binIdx = 0;
		if (binIdx >= bins) binIdx = bins - 1;
		counts[binIdx]++;
	}

	double total = std::accumulate(counts.begin(), counts.end(), 0.0);
	if (total > 0.0) {
		for (auto& c : counts) c /= total;
	}


	// Compute bin centers
	std::vector<double> bin_centers(bins);
	for (int i = 0; i < bins; ++i) {
		bin_centers[i] = minVal + (i + 0.5) * binWidth;
	}
	return { bin_centers, counts };
}

void FeatureExtraction::ExtractD4Features(std::string& classPath) {
	FileOrganizer fo;
	std::vector<std::pair<std::vector<double>, std::vector<double>>> d4Results;

	std::vector<float> positions;
	std::vector<unsigned int> indices;
	fs::path sourcePath = classPath;
	std::string databasePath = sourcePath.string();

	for (const auto& file : fs::directory_iterator(databasePath)) {
		positions.clear();
		indices.clear();
		std::string currentFile = file.path().filename().string();
		std::string fullFilePath = databasePath + "/" + currentFile;
		if (!fo.LoadObj(fullFilePath.c_str(), positions, indices))
		{
			std::cerr << "Failed to load obj" << std::endl;
		}

		std::pair<std::vector<double>, std::vector<double>> results = D4(positions, 1000000, 20);

		d4Results.push_back(results);
	}
	if (d4Results.empty()) {
		std::cerr << "No valid D4 results to plot.\n";
		return;
	}

	plt::figure();
	for (size_t i = 0; i < d4Results.size(); ++i) {
		auto& bins = d4Results[i].first;
		auto& counts = d4Results[i].second;

		// connected line + scatter points
		plt::plot(bins, counts);
		plt::scatter(bins, counts, 8.0);

	}
	plt::xlabel("Volume");
	plt::ylabel("Count");
	plt::title("D4: " + classPath);
	plt::legend();
	plt::grid(true);
	plt::ylim(0.0, 1.0);
	plt::show();
}
std::pair< std::vector<double>, std::vector<double>> FeatureExtraction::D4(std::vector<float>& positions, int samples, int bins)
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
	float maxVolume = *std::max_element(vertexVals.begin(), vertexVals.end());
	for (auto& v : vertexVals)
		v /= maxVolume; // scale between 0 and 1
	float minVal = 0.0f;
	float maxVal = 1.0f;
	float binWidth = (maxVal - minVal) / bins;
	std::vector<double> counts(bins, 0.0);

	for (float v : vertexVals) {
		int binIdx = static_cast<int>((v - minVal) / binWidth);
		if (binIdx < 0) binIdx = 0;
		if (binIdx >= bins) binIdx = bins - 1;
		counts[binIdx]++;
	}

	double total = std::accumulate(counts.begin(), counts.end(), 0.0);
	if (total > 0.0) {
		for (auto& c : counts) c /= total;
	}

	// Compute bin centers
	std::vector<double> bin_centers(bins);
	for (int i = 0; i < bins; ++i) {
		bin_centers[i] = minVal + (i + 0.5) * binWidth;
	}
	return { bin_centers, counts };
}

// Helpers

//// Volume of a shape given a filename
float FeatureExtraction::Volume(std::string& fileName)
{
	auto mesh = MR::MeshLoad::fromAnySupportedFormat(fileName);
	
	return mesh->volume();
}

//// Volume of a shape given its vertices and face type
float FeatureExtraction::Volume(std::vector<float> positions)
{
    float fullVolume = 0.0;

    // Iterate through all faces and compute volume of the tetrahedron with the face as base and the barycenter as the tip
    for (int i = 0; i + 14 < positions.size(); i += 18) {
        glm::vec3 v1(positions[i + 0], positions[i + 1], positions[i + 2]);
        glm::vec3 v2(positions[i + 6], positions[i + 7], positions[i + 8]);
        glm::vec3 v3(positions[i + 12], positions[i + 13], positions[i + 14]);

		float localVolume = glm::dot(v1, glm::cross(v2, v3)) / 6.0f;
        fullVolume += localVolume;
		
    }
    return fabs(fullVolume);
}

// Distance
float FeatureExtraction::Distance(glm::vec3 v1, glm::vec3 v2) 
{	
    return sqrt((v2.x - v1.x) * (v2.x - v1.x) + (v2.y - v1.y) * (v2.y - v1.y) + (v2.z - v1.z) * (v2.z - v1.z));
}

ShapeFeatures FeatureExtraction::ExtractFeaturesOneShape(std::string inputFile, std::vector<float>& positions) {

	std::cout << "In extract" << std::endl;
	FeatureExtraction fe;

	FileOrganizer fo;
	fs::path path = inputFile;
	std::cout << "bary" << std::endl;
	baryAndEigInfo info = fo.getBaryAndEigFromCSV("Bary_Eigs.csv", path.filename().string());

	// InputFile is the full path
	std::cout << "surface" << std::endl;
	// 1. Surface area S
	float surfaceArea = fe.SurfaceArea(inputFile);
	std::cout << "Surface Area: " << surfaceArea << std::endl;
	// 2. Compactness
	float volume = fe.Volume(inputFile);
	float compactness = fe.Compactness(surfaceArea, volume);
	std::cout << "Volume : " << volume << " || Compactness : " << compactness << std::endl;
	// 3. Recantgularity
	glm::vec3 barycenter = { info.baryX, info.baryY, info.baryZ };
	float rectangularity = fe.Rectangularity(positions, barycenter, inputFile, path.filename().string(), "./shape_analysis_resamp.csv");
	std::cout << "Rectangularity: " << rectangularity << std::endl;
	// 4. Diameter
	float diameter = fe.Diameter(positions);
	std::cout << "Diameter: " << diameter << std::endl;
	// 5. Convexity
	float convexity = fe.Convexity(positions, barycenter, path.filename().string(), inputFile);
	std::cout << "Convexity: " << convexity << std::endl;
	// 6. Eccentricity
	float eccentricity = fe.Eccentricity(info.eigLarge, info.eigSmall);

	std::cout << "Eccentricity: " << eccentricity << std::endl;

	return { surfaceArea, volume, compactness, rectangularity, diameter, convexity, eccentricity };
}

void FeatureExtraction::ExtractFeaturesOthers(const std::string& databasePath) {

	FileOrganizer fo;
	std::vector<float> surfaceArea;
	std::vector<float> volume;
	std::vector<float> compactness;
	std::vector<float> rectangularity;
	std::vector<float> diameter;
	std::vector<float> convexity;
	std::vector<float> eccentricity;
	fs::path sourcePath = databasePath;
	std::vector<float> positions;
	std::vector<unsigned int> indices;
	std::vector<glm::vec3> barycenters;
	std::vector<Eigen::Vector3f> eigenValues;
	for (const auto& classDir : fs::directory_iterator(sourcePath)) {
		if (!fs::is_directory(classDir)) continue;
		std::string className = classDir.path().filename().string();
		// For each obj in the folder, get the information about it
		std::string classPath = sourcePath.string()  + className;
		for (const auto& file : fs::directory_iterator(classDir)) {
			positions.clear();
			indices.clear();
			std::string currentFile = file.path().filename().string();
			std::string fullFilePath = classPath + "/" + currentFile;
			if (!fo.LoadObj(fullFilePath.c_str(), positions, indices))
			{
				std::cerr << "Failed to load obj" << std::endl;

			}
			std::cout << "Loaded obj: verts=" << positions.size() / 3 << " tris=" << indices.size() / 3
				<< " positions.size()=" << positions.size() << " indices.size()=" << indices.size() << std::endl;
			std::cout << fullFilePath << std::endl;
			
			ShapeFeatures features = ExtractFeaturesOneShape(fullFilePath, positions);
			surfaceArea.push_back(features.surfaceArea);
			volume.push_back(features.volume);
			compactness.push_back(features.compactness);
			rectangularity.push_back(features.rectangularity);
			diameter.push_back(features.diameter);
			convexity.push_back(features.convexity);
			eccentricity.push_back(features.eccentricity);
		}
	}

	fo.WriteCSVFeatureExtraction(databasePath, "feature_extraction.csv",
		surfaceArea,
		volume,
		compactness,
		rectangularity,
		diameter,
		convexity,
		eccentricity
	);
}

void FeatureExtraction::ExtractFeaturesAtoD(const std::string& databasePath) {
	// FEATURE EXTRACTION
	std::cout << "--- FEATURE EXTRACTION ---" << std::endl;
	FeatureExtraction fe;
	FileOrganizer fo;
	fs::path sourcePath = databasePath;
	// 7. A3 -> D4
	//// A3

    for (const auto& classDir : fs::directory_iterator(sourcePath)) {
        if (!fs::is_directory(classDir)) continue;
        std::string className = classDir.path().filename().string();
        // For each obj in the folder, get the information about it
		std::string classPath = sourcePath.string() + '/' + className;
        fe.ExtractA3Features(classPath);
    }
   
	//// D1
	for (const auto& classDir : fs::directory_iterator(sourcePath)) {
	    if (!fs::is_directory(classDir)) continue;
	    std::string className = classDir.path().filename().string();
	    // For each obj in the folder, get the information about it
	    std::string classPath = sourcePath.string() + '/' + className;
	    fe.ExtractD1Features(classPath);
	}

	//// D2
	for (const auto& classDir : fs::directory_iterator(sourcePath)) {
	    if (!fs::is_directory(classDir)) continue;
	    std::string className = classDir.path().filename().string();
	    // For each obj in the folder, get the information about it
	    std::string classPath = sourcePath.string() + '/' + className;
	    fe.ExtractD2Features(classPath);
	}
	//// D3
	for (const auto& classDir : fs::directory_iterator(sourcePath)) {
	    if (!fs::is_directory(classDir)) continue;
	    std::string className = classDir.path().filename().string();
	    // For each obj in the folder, get the information about it
	    std::string classPath = sourcePath.string() + '/' + className;
	    fe.ExtractD3Features(classPath);
	}
	//// D4
	for (const auto& classDir : fs::directory_iterator(sourcePath)) {
	    if (!fs::is_directory(classDir)) continue;
	    std::string className = classDir.path().filename().string();
	    // For each obj in the folder, get the information about it
	    std::string classPath = sourcePath.string() + '/' + className;
	    fe.ExtractD4Features(classPath);
	}

	std::cout << "--- END FEATURE EXTRACTION ---" << std::endl;
}


	