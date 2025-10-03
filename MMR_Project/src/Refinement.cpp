#include "Refinement.h"

void Refinement::Refine(std::filesystem::path file, std::string& outputDir, int maxEdgeSplits) {

	MR::Mesh mesh = *MR::MeshLoad::fromAnySupportedFormat(file);
	mesh.packOptimally();

	MR::SubdivideSettings settings;
	settings.smoothMode = true;
	settings.projectOnOriginalMesh = false;
	settings.maxEdgeSplits = maxEdgeSplits;
	MR::subdivideMesh(mesh, settings);
	mesh.packOptimally();
	
	MR::MeshSave::toAnySupportedFormat(mesh, outputDir);
}