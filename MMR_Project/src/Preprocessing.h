#pragma once
#include <iostream>
#include <filesystem>
#include <string>


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

};

