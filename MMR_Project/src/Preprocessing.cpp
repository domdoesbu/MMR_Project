#define GLM_ENABLE_EXPERIMENTAL
#include <vcg/complex/complex.h>

#include <vcg/complex/algorithms/local_optimization/tri_edge_collapse_quadric.h>
#include <vcg/complex/used_types.h>
#include <vcg/simplex/vertex/base.h>
#include <vcg/simplex/edge/base.h>
#include <vcg/complex/algorithms/edge_collapse.h>
#include <vcg/simplex/face/base.h>
#include <vcg/complex/base.h>
#include <vcg/complex/algorithms/update/topology.h>
#include <vcg/complex/algorithms/update/normal.h>

// io
#include <wrap/io_trimesh/import.h>
#include <wrap/io_trimesh/export_ply.h>
#include <wrap/io_trimesh/export_ply.h>
#include <wrap/io_trimesh/export_obj.h>
#include <wrap/ply/plylib.h>
#define VCG_IMPLEMENT_PLY
//Refine
#include <vcg/complex/algorithms/refine.h>
#include <vcg/complex/algorithms/refine_loop.h>
// local optimization
#include <vcg/complex/algorithms/local_optimization.h>
#include <vcg/math/quadric.h>
#include <vcg/complex/algorithms/clean.h>
#include "Preprocessing.h"
#include <iostream>
#include <filesystem>
#include <string>
#include <fstream>
#include <sstream>
#include <limits>
#include <vector>
#include <regex>
#include <unordered_map>
#include <tuple>

#include "matplotlibcpp.h"




namespace fs = std::filesystem;
namespace plt = matplotlibcpp;


using namespace vcg;
using namespace tri;


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
    vcg::face::BitFlags,      // deleted/selected flags
    vcg::face::WedgeTexCoord2f
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

//void PrepareMeshForRefinement(MyMesh& mesh)
//{
//    // --- Step 1: Clean obvious problems ---
//    // Remove degenerate faces (zero area)
//    int removedDegenerate = vcg::tri::Clean<MyMesh>::RemoveDegenerateFace(mesh);
//    if (removedDegenerate > 0)
//        std::cerr << "[Repair] Removed " << removedDegenerate << " degenerate faces.\n";
//
//    // Remove duplicated vertices
//    int removedDuplicates = vcg::tri::Clean<MyMesh>::RemoveDuplicateVertex(mesh);
//    if (removedDuplicates > 0)
//        std::cerr << "[Repair] Removed " << removedDuplicates << " duplicate vertices.\n";
//
//    // Remove unreferenced vertices (important after face deletions)
//    int removedUnref = vcg::tri::Clean<MyMesh>::RemoveUnreferencedVertex(mesh);
//    if (removedUnref > 0)
//        std::cerr << "[Repair] Removed " << removedUnref << " unreferenced vertices.\n";
//
//    vcg::tri::Allocator<MyMesh>::CompactEveryVector(mesh);
//
//    // --- Step 2: Build adjacency ---
//    vcg::tri::UpdateTopology<MyMesh>::VertexFace(mesh);
//    vcg::tri::UpdateTopology<MyMesh>::FaceFace(mesh);
//
//    // --- Step 3: Fix non-manifold vertices ---
//    int splitVerts = vcg::tri::Clean<MyMesh>::SplitNonManifoldVertex(mesh, 0.0f);
//    if (splitVerts > 0)
//        std::cerr << "[Repair] Split " << splitVerts << " non-manifold vertices.\n";
//
//    vcg::tri::Allocator<MyMesh>::CompactEveryVector(mesh);
//    vcg::tri::UpdateTopology<MyMesh>::VertexFace(mesh);
//    vcg::tri::UpdateTopology<MyMesh>::FaceFace(mesh);
//
//    // --- Step 4: Split non-manifold edges (into separate components) ---
//    int compCount = vcg::tri::Clean<MyMesh>::SplitManifoldComponents(mesh);
//    if (compCount > 1)
//        std::cerr << "[Repair] Mesh split into " << compCount << " manifold components.\n";
//
//    vcg::tri::Allocator<MyMesh>::CompactEveryVector(mesh);
//    vcg::tri::UpdateTopology<MyMesh>::VertexFace(mesh);
//    vcg::tri::UpdateTopology<MyMesh>::FaceFace(mesh);
//
//    // --- Step 5: Optional cleaning of small components ---
//    // Remove tiny connected components (optional, depends on your pipeline)
//    // int removedSmall = vcg::tri::Clean<MyMesh>::RemoveSmallConnectedComponentsDiameter(mesh, minComponentDiameter);
//    // if (removedSmall > 0)
//    //     std::cerr << "[Repair] Removed " << removedSmall << " tiny connected components.\n";
//
//    // --- Step 6: Update normals and bounding box ---
//    vcg::tri::UpdateBounding<MyMesh>::Box(mesh);
//    vcg::tri::UpdateNormal<MyMesh>::PerFaceNormalized(mesh);
//    vcg::tri::UpdateNormal<MyMesh>::PerVertexNormalized(mesh);
//}

bool CheckMeshManifoldAndValidity(MyMesh& mesh) {
    // quick face/vertex null checks
    for (size_t fi = 0; fi < mesh.face.size(); ++fi) {
        MyFace& f = mesh.face[fi];
        if (f.IsD()) continue;
        if (f.VN() != 3) {
            std::cerr << "Mesh invalid: face " << fi << " VN() != 3 (" << f.VN() << ")\n";
            return false;
        }
        for (int j = 0; j < 3; ++j) {
            if (f.V(j) == nullptr) {
                std::cerr << "Mesh invalid: face " << fi << " has null vertex at corner " << j << "\n";
                return false;
            }
        }
    }

    // Build an undirected edge key (min,max) -> count
    struct EdgeKey {
        unsigned int a, b;
        bool operator==(EdgeKey const& o) const { return a == o.a && b == o.b; }
    };
    struct EdgeKeyHash {
        size_t operator()(EdgeKey const& k) const noexcept {
            return (std::hash<unsigned int>()(k.a) * 73856093u) ^ (std::hash<unsigned int>()(k.b) * 19349663u);
        }
    };

    std::unordered_map<EdgeKey, int, EdgeKeyHash> edgeCount;
    edgeCount.reserve(mesh.face.size() * 3);

    // We need a stable index for vertices; map vertex pointer -> index
    std::unordered_map<MyVertex*, unsigned int> vIndex;
    vIndex.reserve(mesh.vert.size());
    unsigned int vidx = 0;
    for (size_t i = 0; i < mesh.vert.size(); ++i) {
        if (!mesh.vert[i].IsD()) vIndex[&mesh.vert[i]] = vidx++;
    }

    for (size_t fi = 0; fi < mesh.face.size(); ++fi) {
        MyFace& f = mesh.face[fi];
        if (f.IsD()) continue;
        unsigned int idx[3];
        for (int j = 0; j < 3; ++j) {
            auto it = vIndex.find(f.V(j));
            if (it == vIndex.end()) {
                std::cerr << "Mesh invalid: face " << fi << " references a vertex not in vIndex map\n";
                return false;
            }
            idx[j] = it->second;
        }
        for (int e = 0; e < 3; ++e) {
            unsigned int a = idx[e];
            unsigned int b = idx[(e + 1) % 3];
            EdgeKey k{ std::min(a,b), std::max(a,b) };
            edgeCount[k]++;
            if (edgeCount[k] > 2) {
                std::cerr << "Non-manifold edge detected between verts " << k.a << " and " << k.b
                    << " (shared by >2 faces)." << edgeCount[k] << " Aborting refine.\n";
                return false;
            }
        }
    }

    // Optionally print boundary edge count
    int boundaryEdges = 0;
    for (auto& kv : edgeCount) if (kv.second == 1) ++boundaryEdges;
    std::cout << "Mesh checks ok: vertices=" << vidx
        << " faces=" << mesh.fn
        << " boundaryEdges=" << boundaryEdges << "\n";

    return true;
}

void Preprocessing::AnalyzeShape(std::filesystem::path filename, shapeInfo & outInfo)
{
    if (filename.extension() != ".obj") return;
    outInfo.fileName = filename.string();
    std::ifstream objFile(filename);

    size_t vertexCount = 0, faceCount = 0;
    bool headerVertexFound = false, headerFaceFound = false;

    // This is for the bounding boxes
    outInfo.minX = std::numeric_limits<float>::max();
    outInfo.minY = std::numeric_limits<float>::max();
    outInfo.minZ = std::numeric_limits<float>::max();
    outInfo.maxX = std::numeric_limits<float>::lowest();
    outInfo.maxY = std::numeric_limits<float>::lowest();
    outInfo.maxZ = std::numeric_limits<float>::lowest();

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
            outInfo.minX = std::min(outInfo.minX, x);
            outInfo.minY = std::min(outInfo.minY, y);
            outInfo.minZ = std::min(outInfo.minZ, z);
            outInfo.maxX = std::max(outInfo.maxX, x);
            outInfo.maxY = std::max(outInfo.maxY, y);
            outInfo.maxZ = std::max(outInfo.maxZ, z);
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
    objFile.close();

    outInfo.vertexNum = vertexCount;
    outInfo.faceNum = faceCount;

    // Get the info on which kind of faces it has
    if (hasOther) outInfo.faceType = "Mixed (N-gons)";
    else if (hasTriangle && hasQuad) outInfo.faceType = "Mixed (Triangles+Quads)";
    else if (hasTriangle) outInfo.faceType = "Triangles";
    else if (hasQuad) outInfo.faceType = "Quads";
    else outInfo.faceType = "Unknown";
}

void Preprocessing::AnalyzeShapes(const std::string& databasePath)
{
	std::cout << "Analyzing shapes in database: " << databasePath << std::endl;
    // Excel file for all the data
    std::string outputCsv = "shape_analysistmp.csv";

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

    shapeInfo currentShapeInfo;

    // loop over every sub folder, aka the class itself
    for (const auto& classDir : fs::directory_iterator(databasePath)) {
        if (!fs::is_directory(classDir)) continue;

        // Get the class
        currentShapeInfo.className = classDir.path().filename().string();

        // For each obj in the folder, get the information about it
        for (const auto& file : fs::directory_iterator(classDir)) {
            Preprocessing::AnalyzeShape(file.path(), currentShapeInfo);

            csvFile << currentShapeInfo.className << ","
                << file.path().filename().string() << ","
                << currentShapeInfo.vertexNum<< ","
                << currentShapeInfo.faceNum << ","
                << "\"" << currentShapeInfo.faceType << "\"" << ","
                << currentShapeInfo.minX << "," << currentShapeInfo.minY << "," << currentShapeInfo.minZ << ","
                << currentShapeInfo.maxX << "," << currentShapeInfo.maxY << "," << currentShapeInfo.maxZ
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

 //   plt::bar(x, y);
	//plt::xticks(x, sorted_labels, { {"rotation", "vertical"} });
 //   plt::xlabel("Classes");
 //   plt::ylabel("Count");
 //   plt::title("Class Histogram");
 //   plt::show();

	//// 2. Number of vertices
	////plt::hist(vertexVals, 20);
 //   
 //   // 3. Number of faces
 //    plt::xlabel("Faces");
 //   plt::ylabel("Count");
 //   plt::title("Face Histogram");
 //   plt::hist(faceVals, 20);

 //   plt::show();

    csvFile.close();
}

MeshData Preprocessing::Simplify(std::vector<float>& positions, std::vector<unsigned int>& indices, float targetVertices, std::string className, std::string filename)
{
    MeshData results;
    std::cout << "----------------------------------------------\n" << std::endl;
    std::cout << "[Simplification] "<< filename << "positions.size() = " << positions.size() << " indices.size() = " << indices.size() << std::endl;
   

    try {
        if (positions.empty() || indices.empty()) {
            std::cerr << "[Simplification] Empty input, nothing to do.\n";
            return results;
        }
        if (positions.size() % 6 != 0) {
            throw std::runtime_error("[Simplification] positions vector length must be multiple of 6 (pos + normal per vertex)");
        }
        if (indices.size() % 3 != 0) {
            throw std::runtime_error("[Simplification] indices vector length must be multiple of 3 (triangles)");
        }

        const size_t vertCount = positions.size() / 6;
        const size_t faceCount = indices.size() / 3;
        if (vertCount == 0 || faceCount == 0) {
            std::cerr << "[Simplification] No vertices/faces found.\n";
            return results;
        }

        std::cout << "[Simplification] vertCount = " << vertCount << ", faceCount = " << faceCount << std::endl;

        // validate indices
        for (size_t i = 0; i < indices.size(); ++i) {
            if (indices[i] >= vertCount) {
                std::cerr << "[Simplification] Error: index " << indices[i] << " out of range (vertCount=" << vertCount << ")" << std::endl;
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

        std::cout << "[Simplification] Before cleaning: vertCount=" << mesh.vert.size() << " faceCount=" << mesh.face.size() << std::endl;

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
            std::cout << "[Simplification] After cleaning: deletedFaces=" << deletedFaces << " deletedVerts=" << deletedVerts << std::endl;
        }

        mesh.vn = 0;
        for (auto& v : mesh.vert) if (!v.IsD()) ++mesh.vn;

        mesh.fn = 0;
        for (auto& f : mesh.face) if (!f.IsD()) ++mesh.fn;

        std::cout << "[Simplification] Before compaction: mesh.vn=" << mesh.vn << " mesh.fn=" << mesh.fn << std::endl;

        // Compact internal vectors to remove deleted elements and keep contiguous storage
        vcg::tri::Allocator<MyMesh>::CompactEveryVector(mesh);

        // After compaction, rebuild adjacency (both VertexFace and FaceFace) on the cleaned mesh
        vcg::tri::UpdateTopology<MyMesh>::VertexFace(mesh);
        // FaceFace requires FFAdj component in MyFace; ensure your MyFace includes vcg::face::FFAdj.
        vcg::tri::UpdateTopology<MyMesh>::FaceFace(mesh);

        // Recompute counts of non-deleted elements
       

        std::cout << "[Simplification] " << mesh.fn << " faces before decimation.\n";

        // Safeguard: if no faces remain, return original (avoid returning empty mesh)
        if (mesh.fn == 0) {
            std::cerr << "[Simplification] No valid faces after cleaning. Returning original mesh unchanged.\n";
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
        
        const int minTargetFaces = 100;
        const int targetFaces = std::max(minTargetFaces, (int)std::floor(mesh.fn * 0.5));
        deciSession.SetTargetSimplices(targetFaces);
        deciSession.SetTimeBudget(0.5f);
        deciSession.SetTargetOperations(100000);

        std::cout << "[Simplification] Target faces: " << targetFaces << std::endl;

        // --- Run optimization loop
        int lastFn = mesh.fn;
        int iter = 0;
        while (deciSession.DoOptimization() && mesh.vn > targetVertices) {
            if (++iter % 20 == 0) {
                std::cout << "[Simplification] progress: faces=" << mesh.fn << " heap=" << deciSession.h.size() << " err=" << deciSession.currMetric << std::endl;
            }
            if (mesh.fn == lastFn) {
                std::cout << "[Simplification] decimation stalled (no face reduction this loop). Breaking.\n";
                break;
            }
            lastFn = mesh.fn;
        }

        std::string destinationFilename = "./ResampledDatabase/" + className + filename;
        //vcg::tri::io::ExporterOBJ<MyMesh>::Save(mesh, destinationFilename.c_str());

        std::cout << "[Simplification] #verts after: " << mesh.vn << " #faces after: " << mesh.fn << " final err: " << deciSession.currMetric << std::endl;

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

        std::cout << "[Simplification] Output positions: " << results.positions.size() << " indices: " << results.indices.size() << std::endl;

        std::cout << "[Simplification] finished: positions=" << positions.size() << " indices=" << indices.size() << std::endl;
        std::cout << "----------------------------------------------\n" << std::endl;
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

MeshData Preprocessing::Refine(std::vector<float>& positions, std::vector<unsigned int>& indices, float targetVertices, std::string className, std::string filename) {
    MeshData results;

	
    std::cout << "----------------------------------------------\n" << std::endl;
    std::cout << "[Refinement] "<< filename << "positions.size() "<<  positions.size() << " indices.size() = " << indices.size() << std::endl;
    

    try {
        if (positions.empty() || indices.empty()) {
            std::cerr << "[Refinement]  Empty input, nothing to do.\n";
            return results;
        }
        if (positions.size() % 6 != 0) {
            throw std::runtime_error("[Refinement] positions vector length must be multiple of 6 (pos + normal per vertex)");
        }
        if (indices.size() % 3 != 0) {
            throw std::runtime_error("[Refinement] indices vector length must be multiple of 3 (triangles)");
        }

        const size_t vertCount = positions.size() / 6;
        const size_t faceCount = indices.size() / 3;
        if (vertCount == 0 || faceCount == 0) {
            std::cerr << "[Refinement] No vertices/faces found.\n";
            return results;
        }

        std::cout << "[Refinement] vertCount = " << vertCount << ", faceCount = " << faceCount << std::endl;

        // validate indices
        for (size_t i = 0; i < indices.size(); ++i) {
            if (indices[i] >= vertCount) {
                std::cerr << "[Refinement] Error: index " << indices[i] << " out of range (vertCount=" << vertCount << ")" << std::endl;
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
                mesh.face[f].V(0) = nullptr;
                mesh.face[f].V(1) = nullptr;
                mesh.face[f].V(2) = nullptr;
                continue;
            }
            mesh.face[f].V(0) = &mesh.vert[i0];
            mesh.face[f].V(1) = &mesh.vert[i1];
            mesh.face[f].V(2) = &mesh.vert[i2];

        }

        std::cout << "[Refinement] Before cleaning: vertCount=" << mesh.vert.size() << " faceCount=" << mesh.face.size() << std::endl;

        // Build vertex->face adjacency BEFORE cleaning (important for RemoveUnreferencedVertex)
        vcg::tri::UpdateTopology<MyMesh>::VertexFace(mesh);

        // Debug: count deleted faces before cleaning
        {
            int deletedFaces = 0;
            for (auto& f : mesh.face) if (f.IsD()) ++deletedFaces;
            std::cout << "[Refinement] Deleted faces before cleaning: " << deletedFaces << std::endl;
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
            std::cout << "[Refinement] After cleaning: deletedFaces=" << deletedFaces << " deletedVerts=" << deletedVerts << std::endl;
        }

        mesh.vn = 0;
        for (auto& v : mesh.vert) if (!v.IsD()) ++mesh.vn;

        mesh.fn = 0;
        for (auto& f : mesh.face) if (!f.IsD()) ++mesh.fn;

        // Validate faces after initial construction
        for (size_t fi = 0; fi < mesh.face.size(); ++fi) {
            MyFace& f = mesh.face[fi];
            if (f.IsD()) continue; // skip deleted ones

            bool bad = false;
            for (int j = 0; j < f.VN(); ++j) {
                MyVertex* pv = f.V(j);
                if (pv == nullptr) { bad = true; break; }
                // Optional: check pointer belongs to mesh.vert storage range:
                // (this is approximate; pointer comparisons with vector data are fragile but can help in debug)
            }
            if (bad) {
                std::cerr << "[Refinement] Marking face " << fi << " deleted due to null vertex pointer\n";
                f.SetD();
                f.V(0) = f.V(1) = f.V(2) = nullptr;
            }
        }

        // Compact internal vectors to remove deleted elements and keep contiguous storage
        vcg::tri::Allocator<MyMesh>::CompactEveryVector(mesh);

        // After compaction, rebuild adjacency (both VertexFace and FaceFace) on the cleaned mesh
        vcg::tri::UpdateTopology<MyMesh>::VertexFace(mesh);
        // FaceFace requires FFAdj component in MyFace; ensure your MyFace includes vcg::face::FFAdj.
        vcg::tri::UpdateTopology<MyMesh>::FaceFace(mesh);

        // Safeguard: if no faces remain, return original (avoid returning empty mesh)
        if (mesh.fn == 0) {
            std::cerr << "[Refinement] No valid faces after cleaning. Returning original mesh unchanged.\n";
            // Copy original input into results (so caller keeps the original mesh)
            results.positions = positions;
            results.indices = indices;
            return results;
        }
        
        // Update bounding box and normals
        vcg::tri::UpdateBounding<MyMesh>::Box(mesh);
        vcg::tri::UpdateNormal<MyMesh>::PerFaceNormalized(mesh);
        vcg::tri::UpdateNormal<MyMesh>::PerVertexNormalized(mesh);
        vcg::tri::Allocator<MyMesh>::CompactEveryVector(mesh);
        vcg::tri::UpdateTopology<MyMesh>::VertexFace(mesh);
        vcg::tri::UpdateTopology<MyMesh>::FaceFace(mesh);


        //REFINEMENT

        //PrepareMeshForRefinement(mesh);

        if (CheckMeshManifoldAndValidity(mesh)) {
            while (mesh.vn < targetVertices) {
                vcg::tri::Refine<MyMesh, vcg::tri::MidPoint<MyMesh>>(
                    mesh,
                    vcg::tri::MidPoint<MyMesh>(&mesh),
                    0.01f // no minimum edge length
                );

                vcg::tri::Allocator<MyMesh>::CompactEveryVector(mesh);
                vcg::tri::UpdateTopology<MyMesh>::VertexFace(mesh);
                vcg::tri::UpdateTopology<MyMesh>::FaceFace(mesh);

                std::cout << "[Refinement] Vertex count: " << mesh.vn << std::endl;
            }
        }
        else {
            std::cerr << "[Refinement] Mesh still non-manifold/invalid — skipping refinement.\n";
        }

        int deletedFaces = 0;
        for (auto& f : mesh.face) if (f.IsD()) ++deletedFaces;
        std::cout << "[Refinement] After refinement: deletedFaces=" << deletedFaces << std::endl;
        //  compact & validate mesh before rebuilding adjacency
        vcg::tri::Allocator<MyMesh>::CompactEveryVector(mesh);

        // validate faces to avoid dangling vertex pointers
        for (size_t fi = 0; fi < mesh.face.size(); ++fi) {
            MyFace& f = mesh.face[fi];
            if (f.IsD()) continue;
            bool bad = false;
            for (int j = 0; j < f.VN(); ++j) {
                if (f.V(j) == nullptr || f.V(j)->IsD()) { bad = true; break; }
            }
            if (bad) {
                f.SetD();
                f.V(0) = f.V(1) = f.V(2) = nullptr;
            }
        }
        vcg::tri::Allocator<MyMesh>::CompactEveryVector(mesh);

        vcg::tri::UpdateTopology<MyMesh>::VertexFace(mesh);
        vcg::tri::UpdateTopology<MyMesh>::FaceFace(mesh);
        vcg::tri::UpdateNormal<MyMesh>::PerFaceNormalized(mesh);
        vcg::tri::UpdateNormal<MyMesh>::PerVertexNormalized(mesh);

        std::cout << "[Refinement] REFINEMENT done. New face count: " << mesh.fn << std::endl;
        
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

        std::cout << "[Refinement] Output positions: " << results.positions.size() << " indices: " << results.indices.size() << std::endl;
        std::cout << "----------------------------------------------\n" << std::endl;
        

        return results;
    }
    catch (const std::length_error& le) {
        std::cerr << "[Refinement] std::length_error: " << le.what() << std::endl;
        throw;
    }
    catch (const std::exception& ex) {
        std::cerr << "[Refinement] exception: " << ex.what() << std::endl;
        throw;
    }
    catch (...) {
        std::cerr << "[Refinement] unknown exception" << std::endl;
        throw;
    }
}

namespace fs = std::filesystem;
int Preprocessing::Resampling()
{
    FileOrganizer fo;
    std::vector<float> positions;
    std::vector<unsigned int> indices;
    fs::path sourcePath = "./test_objs/";
    fs::path targetParent = "./ResampledDatabase/";
    std::string databasePath = "./test_objs/";
    for (const auto& classDir : fs::directory_iterator(databasePath)) {
        if (!fs::is_directory(classDir)) continue;
        std::string className = classDir.path().filename().string();
        fs::path fullTargetPath = targetParent.string() + className + "/";
        fs::create_directories(fullTargetPath);
        // For each obj in the folder, get the information about it

        for (const auto& file : fs::directory_iterator(classDir)) {

            positions.clear();
            indices.clear();
            std::string currentFile = file.path().filename().string();
            std::string fullFilePath = classDir.path().string() + "/" + currentFile;
            if (!fo.LoadObj(fullFilePath.c_str(), positions, indices))
            {
                std::cerr << "Failed to load obj" << std::endl;
                return -1;
            }

            if (positions.size() / 6 < 5000) { // Refinement

                MeshData data = Refine(positions, indices, 5000, className, currentFile);
                std::string path = fullTargetPath.string() + file.path().filename().string();
                std::cout << path << std::endl;
                fo.WriteNewObj(path, data);

            }
            else if (positions.size() / 6 > 10000) { //Simplification
                MeshData data = Simplify(positions, indices, 10000, className, currentFile);
                std::string path = fullTargetPath.string() + file.path().filename().string();
                std::cout << path << std::endl;
                fo.WriteNewObj(path, data);

            }
            else {

                fs::copy(fullFilePath, fullTargetPath, fs::copy_options::overwrite_existing);
            }
        }
    }
}



glm::vec3 Preprocessing::ComputeBarycenter(std::vector<float> positions)
{
    glm::vec3 barycenter(0.0f);
    float sumOfAreas = 0.0f;

    for (int i = 0; i < positions.size(); i += 18) {
        glm::vec3 v1(positions[i + 0], positions[i + 1], positions[i + 2]);
        glm::vec3 v2(positions[i + 6], positions[i + 7], positions[i + 8]);
        glm::vec3 v3(positions[i + 12], positions[i + 13], positions[i + 14]);
        glm::vec3 localBarycenter(0.0f);
        //glm::vec3 localBarycenter = (v1 + v2 + v3) / 3.0f;
        localBarycenter.x = (positions[i + 0] + positions[i + 6 + 0] + positions[i + 12 + 0]) / 3.0f;
        localBarycenter.y = (positions[i + 1] + positions[i + 6 + 1] + positions[i + 12 + 1]) / 3.0f;
        localBarycenter.z = (positions[i + 2] + positions[i + 6 + 2] + positions[i + 12 + 2]) / 3.0f;


        glm::vec3 e1 = v2 - v1;
        glm::vec3 e2 = v3 - v1;
        glm::vec3 cross = glm::cross(e1, e2);

        float localArea = glm::length(cross) * 0.5f; // triangle area

        // sum (x * area)
        // / sum area

        sumOfAreas += localArea;
        barycenter += localBarycenter * localArea;
    }

    if (sumOfAreas > 0.0f) {
        barycenter /= sumOfAreas;
    }
    return barycenter;
}

std::vector<float> Preprocessing::NormalizeScale(std::vector<float> positions, std::filesystem::path filename)
{
    // we need to scale the positions to fit into a 1:1 unit cube
    // use formula y = x / maxcoord where x is the vertex position, to get new vertex position y. i.e. newMaxcoord = maxcoord / maxcoord = 1
    // MaxCoord needs to be the highest among the maxCoord numbers for every axis so that the object will fit into a 1:1 unit cube 
    // without stretching and changing proportions

    shapeInfo sInfo;
    AnalyzeShape(filename, sInfo);

    float shapeMaxCoords[6] = { std::abs(sInfo.maxX), std::abs(sInfo.maxY), std::abs(sInfo.maxZ), std::abs(sInfo.minX), std::abs(sInfo.minY), std::abs(sInfo.minZ)};
    float maxCoord = shapeMaxCoords[0];
    for (int i = 1; i < sizeof(shapeMaxCoords); ++i)
    {
        if (shapeMaxCoords[i] > maxCoord)
            maxCoord = shapeMaxCoords[i];
    }

    std::vector<float> scaledPositions = positions;
    for (int i = 0; i < positions.size(); i += 3)
    {
        scaledPositions[i] = positions[i] / maxCoord;
        scaledPositions[i + 1] = positions[i + 1] / maxCoord;
        scaledPositions[i + 2] = positions[i + 2] / maxCoord;
    }

    return scaledPositions;
}


