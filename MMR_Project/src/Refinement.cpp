#include "Refinement.h"

void Refinement::Refine(std::filesystem::path file, std::string& outputDir, int maxEdgeSplits) {

	MR::Mesh mesh = *MR::MeshLoad::fromAnySupportedFormat(file);
	mesh.packOptimally();

	MR::SubdivideSettings settings;

	settings.maxEdgeSplits = maxEdgeSplits;
	MR::subdivideMesh(mesh, settings);
	MR::MeshSave::toAnySupportedFormat(mesh, outputDir);
}