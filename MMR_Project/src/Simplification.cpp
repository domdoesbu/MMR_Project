#include "Simplification.h"

void Simplification::Simplify(std::filesystem::path file, std::string& outputDir, int maxDeletedVerts) {
    MR::Mesh mesh = *MR::MeshLoad::fromAnySupportedFormat(file);

    //// Repack mesh optimally.
    //// It's not necessary but highly recommended to achieve the best performance in parallel processing
    mesh.packOptimally();

    //// Setup decimate parameters
    MR::DecimateSettings settings;
    //settings.strategy = MR::DecimateStrategy::ShortestEdgeFirst;

    //// Decimation stop thresholds, you may specify one or both
    //// settings.maxDeletedFaces = 1000; // Number of faces to be deleted
    //settings.maxError = 0.05f; // Maximum error when decimation stops
	settings.maxDeletedVertices = maxDeletedVerts; // Number of vertices to be deleted
    //// Number of parts to simultaneous processing, greatly improves performance by cost of minor quality loss.
    //// Recommended to set to the number of available CPU cores or more for the best performance
    settings.subdivideParts = 1;

    //// Simplify mesh
    MR::decimateMesh(mesh, settings);

    //// Save result
    MR::MeshSave::toAnySupportedFormat(mesh, outputDir);

}