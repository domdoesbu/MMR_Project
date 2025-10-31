#pragma once
#include <MRMesh/MRMeshFwd.h>
#include <MRMesh/MRMeshLoad.h>
#include <MRMesh/MRMeshSave.h>
#include <MRMesh/MRMesh.h>
#include <MRMesh/MRMeshDecimate.h>
#include <MRMesh/MRBuffer.h>
#include <string>
#include <filesystem>
#include <iostream>
#include "FileOrganizer.h"
#include "CodeFromProf/MeshDecimator.h"

class Simplification
{
public:
	Simplification() {};

	void Simplify(std::string& inputFile, std::string& outputFile);


};

