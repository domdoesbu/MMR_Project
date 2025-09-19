#pragma once
#include <iostream>
#include <filesystem>
#include <string>


class Preprocessing
{
public:
	Preprocessing() {};

	/*
	Checks all shapes in the database, and for each shape shoudl return
		1. The class of the shape
		2. Number of faces and vertices of the shape
		3. Type of faces
		4. The axis aligned 3D bounding box of the shape
	*/ 
	
	void AnalyzeShapes(const std::string& databasePath);


};

