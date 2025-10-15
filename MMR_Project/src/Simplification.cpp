#include "Simplification.h"

void Simplification::Simplify(std::filesystem::path file, std::string& outputDir, int maxDeletedVerts) {
    MR::Mesh mesh = *MR::MeshLoad::fromAnySupportedFormat(file);

    mesh.packOptimally();

    MR::DecimateSettings settings;

    settings.maxDeletedVertices = std::max(1000, (int)(mesh.points.size() * 0.1));

    settings.subdivideParts = 1;

    MR::decimateMesh(mesh, settings);

    while (mesh.points.size() > 10000) {
        const auto before = mesh.points.size();
        settings.maxDeletedVertices = 1000;
        MR::decimateMesh(mesh, settings);
        mesh.packOptimally();

        const auto after = mesh.points.size();
        if (after >= before) {
            break;
        }
    }
    MR::MeshSave::toAnySupportedFormat(mesh, outputDir);

}