#pragma once
#define GLM_ENABLE_EXPERIMENTAL
#include <iostream>
#include <filesystem>
#include <string>
#include <vector>

#include "glm/gtc/type_ptr.hpp"
#include <glm/gtx/string_cast.hpp>
#include "glm/glm.hpp"
#include "FileOrganizer.h"

struct shapeInfo
{
	std::string className;
	std::string fileName;

	int vertexNum;
	int faceNum;
	std::string faceType;

	float minX;
	float minY;
	float minZ;

	float maxX;
	float maxY;
	float maxZ;
};

class Preprocessing
{
public:
	Preprocessing() {};

	/*
	2.1: Checks all shapes in the database, and for each shape shoudl return
		1. The class of the shape
		2. Number of faces and vertices of the shape
		3. Type of faces
		4. The axis aligned 3D bounding box of the shape
	*/ 

	void AnalyzeShape(std::filesystem::path filename, shapeInfo& outInfo);

	void AnalyzeShapes(const std::string& databasePath);

	/*
	2.2: Statisitcs
		1. Average shape in the database (in terms of number of vertices and faces)
		2. Significant OUtliers from the average
		3. Show as a hisogram counting how many shapes in the database for every range of possible interest
			a. Number of vertices
			b. Number of faces
			c. Shape class
	*/

	void DatabaseStatistics(const std::string& shapeAnalysisFile);

	/*
	2.3: Resampling outliers
		1. Find outliers
			a. under 100 vertices/faces
			b. very large number of vertices
		2. Resample them
			a. either by removing vertices/faces
			b. or by adding vertices/facesa.
		3. Maybe save the new shapes?
	*/
	
	
	
	MeshData Simplify(std::vector<float>& positions, std::vector<unsigned int>& indices, float targetRatio, std::string className, std::string filename);

	MeshData Refine(std::vector<float>& positions, std::vector<unsigned int>& indices, float targetRatio, std::string className, std::string filename);

	int Resampling();

	/*
	2.4. Checkiung the resampling
		1. Visualize the results of the previous steps
			a. Show the average shape
			b. Show the outliers
			c. Show the histograms
	*/

	/*
	2.5: Normalizing shapes
		1. Read each shape
		2. Translate to barycenter
		3. Make sure to align with coordinate frame origin
		1. Scale
		
	
	*/

	glm::vec3 ComputeBarycenter(std::vector<float> positions);

	std::vector<float> NormalizeScale(std::vector<float> positions, std::filesystem::path filename);


};

