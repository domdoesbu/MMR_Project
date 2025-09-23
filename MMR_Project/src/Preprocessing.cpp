#include <vcg/complex/complex.h>
#include <vcg/complex/algorithms/clean.h>
#include <vcg/complex/algorithms/local_optimization/tri_edge_collapse_quadric.h>
#include <vcg/complex/used_types.h>
#include <vcg/simplex/vertex/base.h>
#include <vcg/simplex/edge/base.h>
#include <vcg/complex/algorithms/edge_collapse.h>
#include <vcg/simplex/face/base.h>
#include <vcg/complex/base.h>
// io
#include <wrap/io_trimesh/import.h>
#include <wrap/io_trimesh/export_ply.h>
// local optimization
#include <vcg/complex/algorithms/local_optimization.h>
#include <vcg/math/quadric.h>
#include "Preprocessing.h"
#include <iostream>
#include <filesystem>
#include <string>
#include <fstream>
#include <sstream>
#include <limits>
#include <vector>
#include <regex>

#include "matplotlibcpp.h"

namespace fs = std::filesystem;
namespace plt = matplotlibcpp;


using namespace vcg;
using namespace tri;

/**********************************************************
Mesh Classes for Quadric Edge collapse based simplification

For edge collpases we need verteses with:
- V->F adjacency
- per vertex incremental mark
- per vertex Normal


Moreover for using a quadric based collapse the vertex class
must have also a Quadric member Q();
Otherwise the user have to provide an helper function object
to recover the quadric.

******************************************************/
// The class prototypes.
class MyVertex;
class MyEdge;
class MyFace;

struct MyUsedTypes : public UsedTypes<Use<MyVertex>::AsVertexType, Use<MyEdge>::AsEdgeType, Use<MyFace>::AsFaceType> {};

class MyVertex : public vcg::Vertex<
    MyUsedTypes,
    vcg::vertex::Coord3f,    // 3D position
    vcg::vertex::Normal3f,   // per-vertex normal (REQUIRED)
    vcg::vertex::Qualityf,   // used for quality-weighted decimation
    vcg::vertex::Mark,       // marking utility
    vcg::vertex::BitFlags,   // deleted/selected flags
    vcg::vertex::VFAdj       // vertex->face adjacency (REQUIRED)
>
{
public:
    vcg::math::Quadric<double>& Qd() { return q; }  // Quadric storage
private:
    vcg::math::Quadric<double> q;
};

class MyEdge : public Edge< MyUsedTypes> {};

typedef BasicVertexPair<MyVertex> VertexPair;

class MyFace : public vcg::Face<
    MyUsedTypes,
    vcg::face::VertexRef,    // references to vertices
    vcg::face::FFAdj,
    vcg::face::Normal3f,     // per-face normal (REQUIRED)
    vcg::face::VFAdj,        // face->vertex adjacency (REQUIRED)
    vcg::face::BitFlags      // deleted/selected flags
> {
};
// the main mesh class
class MyMesh : public vcg::tri::TriMesh<std::vector<MyVertex>, std::vector<MyFace> > {};


class MyTriEdgeCollapse : public vcg::tri::TriEdgeCollapseQuadric< MyMesh, VertexPair, MyTriEdgeCollapse, QInfoStandard<MyVertex>  > {
public:
    typedef  vcg::tri::TriEdgeCollapseQuadric< MyMesh, VertexPair, MyTriEdgeCollapse, QInfoStandard<MyVertex>  > TECQ;
    typedef  MyMesh::EdgeType EdgeType;
    inline MyTriEdgeCollapse(const VertexPair& p, int i, BaseParameterClass* pp)
        : TECQ(p, i, pp) {
    }
};

void Preprocessing::AnalyzeShapes(const std::string& databasePath)
{
	std::cout << "Analyzing shapes in database: " << databasePath << std::endl;
    // Excel file for all the data
    std::string outputCsv = "shape_analysis.csv";

    // Check if database actually exists
    if (!fs::exists(databasePath) || !fs::is_directory(databasePath)) {
        std::cerr << "Database folder does not exist: " << databasePath << std::endl;
        return;
    }

	std::ofstream csvFile(outputCsv);
    if (!csvFile.is_open()) {
        std::cerr << "Failed to open output CSV file: " << outputCsv << std::endl;
        return;
    }

    csvFile << "Class,File,Vertices,Faces,FaceType,Minx,Miny,Minz,Maxx,Maxy,Maxz\n";

    // loop over every sub folder, aka the class itself
    for (const auto& classDir : fs::directory_iterator(databasePath)) {
        if (!fs::is_directory(classDir)) continue;

        // Get the class
        std::string className = classDir.path().filename().string();

        // For each obj in the folder, get the information about it
        for (const auto& file : fs::directory_iterator(classDir)) {
            if (file.path().extension() != ".obj") continue;

            std::ifstream objFile(file.path());
            if (!objFile.is_open()) {
                std::cerr << "Failed to open file: " << file.path() << std::endl;
                continue;
            }

            size_t vertexCount = 0, faceCount = 0;
            bool headerVertexFound = false, headerFaceFound = false;

            // This is for the bounding boxes
            float minX = std::numeric_limits<float>::max();
            float minY = std::numeric_limits<float>::max();
            float minZ = std::numeric_limits<float>::max();
            float maxX = std::numeric_limits<float>::lowest();
            float maxY = std::numeric_limits<float>::lowest();
            float maxZ = std::numeric_limits<float>::lowest();

            // Tells us what kind of faces we actually have
            bool hasTriangle = false, hasQuad = false, hasOther = false;

            std::string line;
            while (std::getline(objFile, line)) {
                if (line.empty()) continue;

                // Some obj files have the info in the header, so find those first
                if (line.rfind("# Vertices:", 0) == 0) {
                    vertexCount = std::stoul(line.substr(11));
                    headerVertexFound = true;
                    continue;
                }
                if (line.rfind("# Faces:", 0) == 0) {
                    faceCount = std::stoul(line.substr(8));
                    headerFaceFound = true;
                    continue;
                }

                // If it doesn't have information int he header, look over everything
                std::istringstream iss(line);
                std::string type;
                iss >> type;

                if (type == "v") { // Always process vertices for bounding box, even if we have header information
                    float x, y, z;
                    iss >> x >> y >> z;
                    if (!headerVertexFound) vertexCount++; // Only count manually if no header info
                    minX = std::min(minX, x);
                    minY = std::min(minY, y);
                    minZ = std::min(minZ, z);
                    maxX = std::max(maxX, x);
                    maxY = std::max(maxY, y);
                    maxZ = std::max(maxZ, z);
                }
                else if (type == "f") {
                    if (!headerFaceFound) faceCount++; // Only count manually if no header info

                    std::vector<std::string> vertices;
                    std::string token;
                    while (iss >> token) vertices.push_back(token);

                    if (vertices.size() == 3)
                        hasTriangle = true;
                    else if (vertices.size() == 4)
                        hasQuad = true;
                    else
                        hasOther = true;
                }
            }

            // Get the info on which kind of faces it has
            std::string faceType;
            if (hasOther) faceType = "Mixed (N-gons)";
            else if (hasTriangle && hasQuad) faceType = "Mixed (Triangles+Quads)";
            else if (hasTriangle) faceType = "Triangles";
            else if (hasQuad) faceType = "Quads";
            else faceType = "Unknown";

            csvFile << className << ","
                << file.path().filename().string() << ","
                << vertexCount << ","
                << faceCount << ","
                << "\"" << faceType << "\"" << ","
                << minX << "," << minY << "," << minZ << ","
                << maxX << "," << maxY << "," << maxZ
                << "\n";
        }
    }
    std::cout << "Finsihed Analyzing shapes in database: " << std::endl;
	csvFile.close();
}

void Preprocessing::DatabaseStatistics(const std::string& shapeAnalysisFile) {
    /*
    2.2: Statisitcs
        1. Average shape in the database (in terms of number of vertices and faces)
        2. Significant Outliers from the average
        3. Show as a hisogram counting how many shapes in the database for every range of possible interest
            a. Number of vertices
            b. Number of faces
            c. Shape class
    */

    std::cout << "Generating statistics from file: " << shapeAnalysisFile << std::endl;
    std::ifstream csvFile(shapeAnalysisFile);
    if (!csvFile.is_open()) {
        std::cerr << "Failed to open input CSV file: " << shapeAnalysisFile << std::endl;
        return;
    }
    struct ShapeInfo {
        std::string className;
        std::string fileName;
        size_t vertices;
        size_t faces;
        std::string faceType;
        float minX, minY, minZ;
        float maxX, maxY, maxZ;
    };
    std::vector<ShapeInfo> shapes;
    std::vector<int> vertexVals;
	std::vector<int> faceVals;
	std::unordered_map<std::string, int> classNames;
    std::string line;
    
       
    int currentClassCount = 0;
    // Skip header
    std::vector<std::string> classHist;
    std::getline(csvFile, line);
    while (std::getline(csvFile, line)) {
        std::istringstream iss(line);
        std::string token;
        ShapeInfo info;
        std::getline(iss, info.className, ',');
        std::getline(iss, info.fileName, ',');
        std::getline(iss, token, ','); info.vertices = std::stoul(token);
        std::getline(iss, token, ','); info.faces = std::stoul(token);
        std::getline(iss, info.faceType, ',');
        std::getline(iss, token, ','); info.minX = std::stof(token);
        std::getline(iss, token, ','); info.minY = std::stof(token);
        std::getline(iss, token, ','); info.minZ = std::stof(token);
        std::getline(iss, token, ','); info.maxX = std::stof(token);
        std::getline(iss, token, ','); info.maxY = std::stof(token);
        std::getline(iss, token, ','); info.maxZ = std::stof(token);

		classNames[info.className]++;
		faceVals.push_back(info.faces);
		vertexVals.push_back(info.vertices);
        shapes.push_back(info);
    }
   
    
    if (shapes.empty()) {
        std::cerr << "No shape data found in file." << std::endl;
        return;
    }
    // Calculate averages
    double totalVertices = 0.0;
    double totalFaces = 0.0;
    for (const auto& shape : shapes) {
        totalVertices += shape.vertices;
        totalFaces += shape.faces;
    }
    double avgVertices = totalVertices / shapes.size();
	double avgFaces = totalFaces / shapes.size();

    // Re-go over
    std::string averageShapeFile = "";

    float minDistanceAvg = avgVertices;

    // Average Shape
    for (const auto& shape : shapes) {

		float currentDistance = sqrt(pow(avgVertices - shape.vertices, 2) + pow(avgFaces - shape.faces, 2));
		if (currentDistance < minDistanceAvg) {
			minDistanceAvg = currentDistance;
			averageShapeFile = shape.fileName;
		}
    }

	std::cout << "Average shape by vertices: " << averageShapeFile << std::endl;

    // SD
    int accumulator = 0;
	for (const auto& vertex : vertexVals) {
        accumulator += pow(vertex - avgVertices, 2);
	}
	float stdDev = sqrt(accumulator / vertexVals.size());
	std::cout << "Standard Deviation of vertices: " << stdDev << std::endl;

    // Outliers

    // Vertices
    std::string highVertOutlier = "";
	std::string lowVertOutlier = "";

	std::string highFaceOutlier = "";
	std::string lowFaceOutlier = "";
	
	std::string highEDOutlier = "";
	std::string lowEDOutlier = "";
    int maxVertNumber = 0;
    int minVertNumber = std::numeric_limits<int>::max();
    int maxEUDistance = 0;
	int minEUDistance = std::numeric_limits<int>::max();
    int maxFaceDistance = 0;
	int minFaceDistance = std::numeric_limits<int>::max();

    
    
	for (const auto& shape : shapes) {
		
       
        // Highest Number of verts
        if (shape.vertices > maxVertNumber)
        {
            maxVertNumber = shape.vertices;
            highVertOutlier = shape.fileName;
        }

        // Min number of verts
        if (shape.vertices < minVertNumber)
        {
            minVertNumber = shape.vertices;
            lowVertOutlier = shape.fileName;
        }

        // Faces

		if (shape.faces < minFaceDistance)
		{
			minFaceDistance = shape.faces;
			lowFaceOutlier = shape.fileName;
		}
		if (shape.faces > maxFaceDistance)
		{
			maxFaceDistance = shape.faces;
			highFaceOutlier = shape.fileName;
		}

        // Euclidean Distance
        float currentDistanceEU = sqrt(pow(avgVertices - shape.vertices, 2) + pow(avgFaces - shape.faces, 2));
        if (currentDistanceEU < minEUDistance) {
            minEUDistance = currentDistanceEU;
            lowEDOutlier = shape.fileName;
        }
        if (currentDistanceEU > maxEUDistance) {
            maxEUDistance = currentDistanceEU;
            highEDOutlier = shape.fileName;
        }
	}

    std::cout << "Low outlier shape by vertices: " << lowVertOutlier << " with " << (minVertNumber) << " less vertices." << std::endl;
    std::cout << "High outlier shape by vertices: " << highVertOutlier << " with " << (maxVertNumber) << "more vertices." << std::endl;
    std::cout << "Low shape by faces: " << lowFaceOutlier << " with " << (minFaceDistance) << " less faces." << std::endl;
    std::cout << "High shape by faces: " << highFaceOutlier << " with " << (maxFaceDistance) << " more faces." << std::endl;
    std::cout << "Low shape by EU: " << lowEDOutlier << " with " << (minEUDistance) << " higher EU." << std::endl;
    std::cout << "High shape by EU: " << highEDOutlier << " with " << (maxEUDistance) << " lower EU." << std::endl;

    //counts
    // 1. Shape classes

    std::vector<std::string> labels;
    std::vector<int> values;
    for (auto& p : classNames) {
        labels.push_back(p.first);
        values.push_back(p.second);
    }

    std::vector<size_t> idx(labels.size());
    std::iota(idx.begin(), idx.end(), 0);
    std::sort(idx.begin(), idx.end(), [&](size_t i, size_t j) {
        return labels[i] < labels[j];
        });


    std::vector<double> x;
    std::vector<double> y;
    std::vector<std::string> sorted_labels;
    for (size_t i : idx) {
        x.push_back(static_cast<double>(x.size()));
        y.push_back(static_cast<double>(values[i]));
        sorted_labels.push_back(labels[i]);
    }

    plt::bar(x, y);
	plt::xticks(x, sorted_labels, { {"rotation", "vertical"} });
    plt::xlabel("Classes");
    plt::ylabel("Count");
    plt::title("Class Histogram");
    plt::show();

	// 2. Number of vertices
	//plt::hist(vertexVals, 20);
    
    // 3. Number of faces
     plt::xlabel("Faces");
    plt::ylabel("Count");
    plt::title("Face Histogram");
    plt::hist(faceVals, 20);

    plt::show();

    csvFile.close();
}

MeshData Preprocessing::ResamplingOutliers(std::vector<float>& positions, std::vector<unsigned int>& indices)
{
    MeshData results;

    std::cout << "positions.size() = " << positions.size() << " indices.size() = " << indices.size() << std::endl;
    float targetRatio = 0.5f; // Reduce to 50% of original faces by default

    try {
        if (positions.empty() || indices.empty()) {
            std::cerr << "[ResamplingOutliers] Empty input, nothing to do.\n";
            return results;
        }
        if (positions.size() % 6 != 0) {
            throw std::runtime_error("positions vector length must be multiple of 6 (pos + normal per vertex)");
        }
        if (indices.size() % 3 != 0) {
            throw std::runtime_error("indices vector length must be multiple of 3 (triangles)");
        }

        const size_t vertCount = positions.size() / 6;
        const size_t faceCount = indices.size() / 3;
        if (vertCount == 0 || faceCount == 0) {
            std::cerr << "[ResamplingOutliers] No vertices/faces found.\n";
            return results;
        }

        std::cout << "vertCount = " << vertCount << ", faceCount = " << faceCount << std::endl;

        // validate indices
        for (size_t i = 0; i < indices.size(); ++i) {
            if (indices[i] >= vertCount) {
                std::cerr << "Error: index " << indices[i] << " out of range (vertCount=" << vertCount << ")" << std::endl;
                // continue checking but don't crash here (caller should fix input)
            }
        }

        // --- Build mesh ---
        MyMesh mesh;
        mesh.vert.resize(vertCount);
        mesh.face.resize(faceCount);

        // Fill vertices (position + normal)
        for (size_t i = 0; i < vertCount; ++i) {
            MyVertex& v = mesh.vert[i];
            v.P() = vcg::Point3f(
                positions[i * 6 + 0],
                positions[i * 6 + 1],
                positions[i * 6 + 2]
            );
            v.N() = vcg::Point3f(
                positions[i * 6 + 3],
                positions[i * 6 + 4],
                positions[i * 6 + 5]
            );
            v.ClearD(); // ensure not marked deleted initially
        }

        // Fill faces
        for (size_t f = 0; f < faceCount; ++f) {
            unsigned int i0 = indices[f * 3 + 0];
            unsigned int i1 = indices[f * 3 + 1];
            unsigned int i2 = indices[f * 3 + 2];

            mesh.face[f].ClearD();

            if (i0 >= vertCount || i1 >= vertCount || i2 >= vertCount) {
                // invalid face -> mark as deleted explicitly
                mesh.face[f].SetD(); // mark deleted
                continue;
            }
            mesh.face[f].V(0) = &mesh.vert[i0];
            mesh.face[f].V(1) = &mesh.vert[i1];
            mesh.face[f].V(2) = &mesh.vert[i2];

        }

        std::cout << "Before cleaning: vertCount=" << mesh.vert.size() << " faceCount=" << mesh.face.size() << std::endl;

        // Build vertex->face adjacency BEFORE cleaning (important for RemoveUnreferencedVertex)
        vcg::tri::UpdateTopology<MyMesh>::VertexFace(mesh);

        // Debug: count deleted faces before cleaning
        {
            int deletedFaces = 0;
            for (auto& f : mesh.face) if (f.IsD()) ++deletedFaces;
            std::cout << "Deleted faces before cleaning: " << deletedFaces << std::endl;
        }

        // --- Clean: remove degenerate faces, duplicate vertices, unreferenced vertices
        tri::Clean<MyMesh>::RemoveDegenerateFace(mesh);       // remove degenerate triangles
        tri::Clean<MyMesh>::RemoveDuplicateVertex(mesh);      // remove duplicate vertices
        tri::Clean<MyMesh>::RemoveUnreferencedVertex(mesh);   // remove vertices not referenced by any face

        // Debug: count deleted faces after cleaning (logical deletes)
        {
            int deletedFaces = 0;
            for (auto& f : mesh.face) if (f.IsD()) ++deletedFaces;
            int deletedVerts = 0;
            for (auto& v : mesh.vert) if (v.IsD()) ++deletedVerts;
            std::cout << "After cleaning: deletedFaces=" << deletedFaces
                << " deletedVerts=" << deletedVerts << std::endl;
        }

        mesh.vn = 0;
        for (auto& v : mesh.vert) if (!v.IsD()) ++mesh.vn;

        mesh.fn = 0;
        for (auto& f : mesh.face) if (!f.IsD()) ++mesh.fn;

        std::cout << "Before compaction: mesh.vn=" << mesh.vn << " mesh.fn=" << mesh.fn << std::endl;

        // Compact internal vectors to remove deleted elements and keep contiguous storage
        vcg::tri::Allocator<MyMesh>::CompactEveryVector(mesh);

        // After compaction, rebuild adjacency (both VertexFace and FaceFace) on the cleaned mesh
        vcg::tri::UpdateTopology<MyMesh>::VertexFace(mesh);
        // FaceFace requires FFAdj component in MyFace; ensure your MyFace includes vcg::face::FFAdj.
        vcg::tri::UpdateTopology<MyMesh>::FaceFace(mesh);

        // Recompute counts of non-deleted elements
       

        std::cout << mesh.fn << " faces before decimation.\n";

        // Safeguard: if no faces remain, return original (avoid returning empty mesh)
        if (mesh.fn == 0) {
            std::cerr << "[ResamplingOutliers] No valid faces after cleaning. Returning original mesh unchanged.\n";
            // Copy original input into results (so caller keeps the original mesh)
            results.positions = positions;
            results.indices = indices;
            return results;
        }

        // Update bounding box and normals
        vcg::tri::UpdateBounding<MyMesh>::Box(mesh);
        vcg::tri::UpdateNormal<MyMesh>::PerFaceNormalized(mesh);
        vcg::tri::UpdateNormal<MyMesh>::PerVertexNormalized(mesh);

        // --- Setup decimation
        TriEdgeCollapseQuadricParameter qparams;
        qparams.PreserveTopology = false;
        qparams.PreserveBoundary = true;
        qparams.QualityCheck = false;
        qparams.NormalCheck = false;
        qparams.OptimalPlacement = true;
        qparams.QualityThr = 0.0f;

        vcg::LocalOptimization<MyMesh> deciSession(mesh, &qparams);
        deciSession.Init<MyTriEdgeCollapse>();

        std::cout << mesh.fn << " faces before decimation.\n";

        if (targetRatio <= 0.0f || targetRatio >= 1.0f) targetRatio = 0.5f;
        const int minTargetFaces = 100;
        const int targetFaces = std::max(minTargetFaces, (int)std::floor(mesh.fn * targetRatio));
        deciSession.SetTargetSimplices(targetFaces);
        deciSession.SetTimeBudget(0.5f);
        deciSession.SetTargetOperations(100000);

        std::cout << "[ResamplingOutliers] Target faces: " << targetFaces << std::endl;

        // --- Run optimization loop
        int lastFn = mesh.fn;
        int iter = 0;
        while (deciSession.DoOptimization() && mesh.fn > targetFaces) {
            if (++iter % 20 == 0) {
                std::cout << "[ResamplingOutliers] progress: faces=" << mesh.fn
                    << " heap=" << deciSession.h.size()
                    << " err=" << deciSession.currMetric << std::endl;
            }
            if (mesh.fn == lastFn) {
                std::cout << "[ResamplingOutliers] decimation stalled (no face reduction this loop). Breaking.\n";
                break;
            }
            lastFn = mesh.fn;
        }

        std::cout << "[ResamplingOutliers] #verts after: " << mesh.vn
            << " #faces after: " << mesh.fn
            << " final err: " << deciSession.currMetric << std::endl;

        // --- Build compact arrays back to positions/indices -------------
        std::unordered_map<MyVertex*, unsigned int> vmap;
        vmap.reserve(mesh.vert.size());

        unsigned int newIdx = 0;
        for (size_t i = 0; i < mesh.vert.size(); ++i) {
            MyVertex& v = mesh.vert[i];
            if (!v.IsD()) {
                vmap[&v] = newIdx++;
            }
        }

        // Reserve and fill results
        results.positions.reserve(newIdx * 6);
        // Fill vertex array in deterministic order (iterate mesh.vert)
        for (size_t i = 0; i < mesh.vert.size(); ++i) {
            MyVertex& v = mesh.vert[i];
            if (!v.IsD()) {
                results.positions.push_back(v.P()[0]);
                results.positions.push_back(v.P()[1]);
                results.positions.push_back(v.P()[2]);
                // vertex normal (updated previously)
                results.positions.push_back(v.N()[0]);
                results.positions.push_back(v.N()[1]);
                results.positions.push_back(v.N()[2]);
            }
        }

        // Faces -> indices
        for (size_t fi = 0; fi < mesh.face.size(); ++fi) {
            MyFace& f = mesh.face[fi];
            if (f.IsD()) continue;
            MyVertex* v0 = f.V(0);
            MyVertex* v1 = f.V(1);
            MyVertex* v2 = f.V(2);
            if (!v0 || !v1 || !v2) continue;
            auto it0 = vmap.find(v0);
            auto it1 = vmap.find(v1);
            auto it2 = vmap.find(v2);
            if (it0 == vmap.end() || it1 == vmap.end() || it2 == vmap.end()) continue;
            results.indices.push_back(it0->second);
            results.indices.push_back(it1->second);
            results.indices.push_back(it2->second);
        }

        std::cout << "Output positions: " << results.positions.size()
            << " indices: " << results.indices.size() << std::endl;

        std::cout << "[ResamplingOutliers] finished: positions=" << positions.size()
            << " indices=" << indices.size() << std::endl;

        return results;
    }
    catch (const std::length_error& le) {
        std::cerr << "[ResamplingOutliers] std::length_error: " << le.what() << std::endl;
        throw;
    }
    catch (const std::exception& ex) {
        std::cerr << "[ResamplingOutliers] exception: " << ex.what() << std::endl;
        throw;
    }
    catch (...) {
        std::cerr << "[ResamplingOutliers] unknown exception" << std::endl;
        throw;
    }
}





