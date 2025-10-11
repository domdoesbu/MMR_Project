#include "Simplification.h"

void Simplification::Simplify(std::filesystem::path file, std::string& outputDir, int maxDeletedVerts) {
    MR::Mesh mesh = *MR::MeshLoad::fromAnySupportedFormat(file);

    mesh.packOptimally();

    MR::DecimateSettings settings;

	settings.maxDeletedVertices = maxDeletedVerts;

    settings.subdivideParts = 1;

    MR::decimateMesh(mesh, settings);

    while (mesh.points.size() > 10000) {
		settings.maxDeletedVertices = 1000;
		MR::decimateMesh(mesh, settings);
        mesh.packOptimally();
    }

    MR::MeshSave::toAnySupportedFormat(mesh, outputDir);

}