#pragma once
#include <MRMesh/MRMeshFwd.h>
#include <MRMesh/MRMeshLoad.h>
#include <MRMesh/MRMeshSave.h>
#include <MRMesh/MRMesh.h>
#include <MRMesh/MRMeshDecimate.h>
#include <MRMesh/MRBuffer.h>
#include <string>
#include <filesystem>

class Simplification
{
public:
	Simplification() {};

	void Simplify(std::filesystem::path file, std::string& outputDir, int maxDeletedVerts);


};

