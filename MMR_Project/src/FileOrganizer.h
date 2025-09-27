#pragma once
#include <filesystem>
#include <wrap/io_trimesh/export_ply.h>
#include <iostream>
#include "./include/tiny_obj_loader.h"

struct MeshData {
	std::vector<float> positions;
	std::vector<unsigned int> indices;
};
class FileOrganizer
{
public:
	FileOrganizer() {};

	static bool LoadObj(const char* inputFile, std::vector<float>& outVertices, std::vector<unsigned int>& outIndices);

	void WriteNewObj(std::string destinationFilename, MeshData results);
};

