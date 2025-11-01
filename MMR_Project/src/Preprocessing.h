#pragma once
#define GLM_ENABLE_EXPERIMENTAL
#include <iostream>
#include <filesystem>
#include <string>
#include <vector>
#include <limits>
#include <regex>
#include <unordered_map>
#include <tuple>
#include <Eigen/Dense>
#include <cmath>
#include <algorithm>
#include <array>
// glm
#include <glm/gtx/norm.hpp>
#include "glm/gtc/type_ptr.hpp"
#include "glm/gtc/epsilon.hpp"
#include <glm/gtx/string_cast.hpp>
#include "glm/glm.hpp"

// Other
#include "matplotlibcpp.h"

// MeshLibs

#include <MRMesh/MRMesh.h>
#include <MRMesh/MRPointCloud.h>
#include <MRMesh/MRMeshBoundary.h>
#include <MRMesh/MRMeshNormals.h>
#include <MRMesh/MRMeshFixer.h>
#include <MRMesh/MRMeshOrPoints.h>
#include <MRMesh/MRMeshLoad.h>
#include <MRMesh/MRMeshSave.h>
#include <MRMesh/MRBox.h>
#include <MRMesh/MRMeshFillHole.h>
#include <MRMesh/MRMeshTopology.h>
#include <MRMesh/MRMeshComponents.h>
#include "MRMesh/MRBitSet.h"

// Our files
#include "Simplification.h"
#include "Refinement.h"
#include "FileOrganizer.h"

class Preprocessing
{
public:
	Preprocessing() {};

	void NormalizeDatabase(std::string& databasePath);

	// 2.1: Checks all shapes in the database, and for each shape shoudl return

	void AnalyzeShape(std::filesystem::path filename, shapeInfo& outInfo);

	void AnalyzeShapes(const std::string& databasePath, const std::string& outputCsv);

	// 2.2: Statisitcs

	void DatabaseStatistics(const std::string& shapeAnalysisFile);

	// 2.3: Resampling outliers

	int Resampling(const std::string& source, const std::string& target);

	// 2.5: Normalizing shapes

	glm::vec3 ComputeBarycenter(std::vector<float> positions);

	std::vector<float> NormalizeScale(std::vector<float> positions, std::filesystem::path filename);

	std::pair<Eigen::Vector3f, std::vector<float>> NormalizeAlign(std::vector<float> positions, int stride, int posOffset);

	std::vector<float> NormalizeFlipping(std::vector<float> positions, std::vector<unsigned int>& indices, int stride, int posOffset);

	void CheckNormalOrientation(MR::Mesh& mesh);

	void CheckHoles(const std::string& filename);
	void OrientNormalsOutward(std::vector<float>& positions,
		std::vector<unsigned int>& indices,
		const glm::vec3& barycenter);

};

