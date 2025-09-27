#define TINYOBJLOADER_IMPLEMENTATION
#define GLM_ENABLE_EXPERIMENTAL
#include "FileOrganizer.h"
#include <iostream>
#include <filesystem>
#include <string>
#include <fstream>

#include <glm/gtx/string_cast.hpp>
#include "glm/glm.hpp"
#include <limits>
#include <vector>

bool FileOrganizer::LoadObj(const char* inputFile, std::vector<float>& outVertices, std::vector<unsigned int>& outIndices)
{
    tinyobj::ObjReaderConfig readerConfig;
    tinyobj::ObjReader reader;

    if (!reader.ParseFromFile(inputFile, readerConfig)) {
        if (!reader.Error().empty()) {
            std::cerr << "TinyObjReader: " << reader.Error() << std::endl;
        }
        return false;
    }

    if (!reader.Warning().empty()) {
        std::cout << "TinyObjReader: " << reader.Warning() << std::endl;
    }

    const tinyobj::attrib_t& attrib = reader.GetAttrib();
    const std::vector<tinyobj::shape_t>& shapes = reader.GetShapes();

    outVertices.clear();
    outIndices.clear();

    // Temporary arrays
    std::vector<glm::vec3> positions(attrib.vertices.size() / 3);
    for (size_t i = 0; i < positions.size(); i++) {
        positions[i] = glm::vec3(
            attrib.vertices[3 * i + 0],
            attrib.vertices[3 * i + 1],
            attrib.vertices[3 * i + 2]
        );
    }

    std::vector<glm::vec3> normals;
    bool hasNormals = !attrib.normals.empty();
    if (hasNormals) {
        normals.resize(attrib.normals.size() / 3);
        for (size_t i = 0; i < normals.size(); i++) {
            normals[i] = glm::vec3(
                attrib.normals[3 * i + 0],
                attrib.normals[3 * i + 1],
                attrib.normals[3 * i + 2]
            );
        }
    }
    else {
        normals.resize(positions.size(), glm::vec3(0.0f));
    }

    for (const auto& shape : shapes) {
        size_t index_offset = 0;
        for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++) {
            int fv = shape.mesh.num_face_vertices[f];
            if (fv != 3) {
                std::cerr << "Warning: non-triangle face detected. Skipping.\n";
                index_offset += fv;
                continue;
            }

            glm::vec3 faceNormal(0.0f);

            for (int v = 0; v < fv; v++) {
                tinyobj::index_t idx = shape.mesh.indices[index_offset + v];
                outIndices.push_back(idx.vertex_index);

                // If normals are missing, compute face normal
                if (!hasNormals) {
                    glm::vec3 v0 = positions[shape.mesh.indices[index_offset + 0].vertex_index];
                    glm::vec3 v1 = positions[shape.mesh.indices[index_offset + 1].vertex_index];
                    glm::vec3 v2 = positions[shape.mesh.indices[index_offset + 2].vertex_index];
                    faceNormal = glm::normalize(glm::cross(v1 - v0, v2 - v0));
                }
            }

            if (!hasNormals) {
                // Accumulate face normal into vertex normals
                for (int v = 0; v < fv; v++) {
                    tinyobj::index_t idx = shape.mesh.indices[index_offset + v];
                    normals[idx.vertex_index] += faceNormal;
                }
            }

            index_offset += fv;
        }
    }

    if (!hasNormals) {
        for (auto& n : normals) {
            n = glm::normalize(n);
        }
    }

    // Interleave position + normal
    outVertices.reserve(positions.size() * 6);
    for (size_t i = 0; i < positions.size(); i++) {
        outVertices.push_back(positions[i].x);
        outVertices.push_back(positions[i].y);
        outVertices.push_back(positions[i].z);
        outVertices.push_back(normals[i].x);
        outVertices.push_back(normals[i].y);
        outVertices.push_back(normals[i].z);
    }

    return true;
}

void FileOrganizer::WriteNewObj(std::string destinationFilename, MeshData results) {

    std::ofstream out(destinationFilename);
    if (!out) {
        std::cerr << "Error: Could not open file for writing: " << destinationFilename << std::endl;
    }
    else {
        // Write vertices
        for (size_t i = 0; i < results.positions.size(); i += 6) {
            float x = results.positions[i + 0];
            float y = results.positions[i + 1];
            float z = results.positions[i + 2];
            out << "v " << x << " " << y << " " << z << "\n";
        }

        // Optionally write normals (OBJ allows this)
        for (size_t i = 0; i < results.positions.size(); i += 6) {
            float nx = results.positions[i + 3];
            float ny = results.positions[i + 4];
            float nz = results.positions[i + 5];
            out << "vn " << nx << " " << ny << " " << nz << "\n";
        }

        // Write faces (OBJ uses 1-based indices)
        for (size_t i = 0; i < results.indices.size(); i += 3) {
            unsigned int i0 = results.indices[i + 0] + 1;
            unsigned int i1 = results.indices[i + 1] + 1;
            unsigned int i2 = results.indices[i + 2] + 1;
            // If you want normals: use format "f v1//n1 v2//n2 v3//n3"
            out << "f " << i0 << "//" << i0 << " "
                << i1 << "//" << i1 << " "
                << i2 << "//" << i2 << "\n";
        }

        out.close();
        std::cout << "[ResamplingOutliers] Wrote OBJ: " << destinationFilename << std::endl;
    }
}