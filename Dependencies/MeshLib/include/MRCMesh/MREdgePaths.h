// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_EdgeBitSet MR_EdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_MeshTriPoint MR_MeshTriPoint; // Defined in `#include <MRCMesh/MRMeshTriPoint.h>`.
typedef struct MR_Plane3f MR_Plane3f; // Defined in `#include <MRCMesh/MRPlane3.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_function_float_from_MR_EdgeId MR_std_function_float_from_MR_EdgeId; // Defined in `#include <MRCMisc/std_function_float_from_MR_EdgeId.h>`.
typedef struct MR_std_vector_MR_EdgeId MR_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_MR_EdgeId.h>`.
typedef struct MR_std_vector_MR_EdgePoint MR_std_vector_MR_EdgePoint; // Defined in `#include <MRCMisc/std_vector_MR_EdgePoint.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.
typedef struct MR_std_vector_MR_VertId MR_std_vector_MR_VertId; // Defined in `#include <MRCMisc/std_vector_MR_VertId.h>`.
typedef struct MR_std_vector_std_vector_MR_EdgeId MR_std_vector_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_EdgeId.h>`.


/// a vertex with associated penalty metric
/// to designate a possible start or end of edge path
/// Generated from class `MR::TerminalVertex`.
typedef struct MR_TerminalVertex MR_TerminalVertex;

/// returns true if every next edge starts where previous edge ends
/// Generated from function `MR::isEdgePath`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `edges` can not be null. It is a single object.
MRC_API bool MR_isEdgePath(const MR_MeshTopology *topology, const MR_std_vector_MR_EdgeId *edges);

/// returns true if every next edge starts where previous edge ends, and start vertex coincides with finish vertex
/// Generated from function `MR::isEdgeLoop`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `edges` can not be null. It is a single object.
MRC_API bool MR_isEdgeLoop(const MR_MeshTopology *topology, const MR_std_vector_MR_EdgeId *edges);

/// given a number of edge loops, splits every loop that passes via a vertex more than once on smaller loops without self-intersections
/// Generated from function `MR::splitOnSimpleLoops`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `loops` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_EdgeId *MR_splitOnSimpleLoops(const MR_MeshTopology *topology, MR_std_vector_std_vector_MR_EdgeId *loops);

/// reverses the order of edges and flips each edge orientation, thus
/// making the opposite directed edge path
/// Generated from function `MR::reverse`.
/// Parameter `path` can not be null. It is a single object.
MRC_API void MR_reverse_std_vector_MR_EdgeId(MR_std_vector_MR_EdgeId *path);

/// reverse every path in the vector
/// Generated from function `MR::reverse`.
/// Parameter `paths` can not be null. It is a single object.
MRC_API void MR_reverse_std_vector_std_vector_MR_EdgeId(MR_std_vector_std_vector_MR_EdgeId *paths);

/// computes summed metric of all edges in the path
/// Generated from function `MR::calcPathMetric`.
/// Parameter `path` can not be null. It is a single object.
MRC_API double MR_calcPathMetric(const MR_std_vector_MR_EdgeId *path, MR_PassBy metric_pass_by, MR_std_function_float_from_MR_EdgeId *metric);

/// Generated from function `MR::calcPathLength`.
/// Parameter `path` can not be null. It is a single object.
/// Parameter `mesh` can not be null. It is a single object.
MRC_API double MR_calcPathLength(const MR_std_vector_MR_EdgeId *path, const MR_Mesh *mesh);

/// returns the vector with the magnitude equal to the area surrounded by the loop (if the loop is planar),
/// and directed to see the loop in ccw order from the vector tip
/// Generated from function `MR::calcOrientedArea`.
/// Parameter `loop` can not be null. It is a single object.
/// Parameter `mesh` can not be null. It is a single object.
MRC_API MR_Vector3d MR_calcOrientedArea(const MR_std_vector_MR_EdgeId *loop, const MR_Mesh *mesh);

/// sorts given paths in ascending order of their metrics
/// Generated from function `MR::sortPathsByMetric`.
/// Parameter `paths` can not be null. It is a single object.
MRC_API void MR_sortPathsByMetric(MR_std_vector_std_vector_MR_EdgeId *paths, MR_PassBy metric_pass_by, MR_std_function_float_from_MR_EdgeId *metric);

/// Generated from function `MR::sortPathsByLength`.
/// Parameter `paths` can not be null. It is a single object.
/// Parameter `mesh` can not be null. It is a single object.
MRC_API void MR_sortPathsByLength(MR_std_vector_std_vector_MR_EdgeId *paths, const MR_Mesh *mesh);

/// adds all faces incident to loop vertices and located to the left from the loop to given FaceBitSet
/// Generated from function `MR::addLeftBand`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `loop` can not be null. It is a single object.
/// Parameter `addHere` can not be null. It is a single object.
MRC_API void MR_addLeftBand(const MR_MeshTopology *topology, const MR_std_vector_MR_EdgeId *loop, MR_FaceBitSet *addHere);

/// Returns a pointer to a member variable of class `MR::TerminalVertex` named `v`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_TerminalVertex_Get_v(const MR_TerminalVertex *_this);

/// Modifies a member variable of class `MR::TerminalVertex` named `v`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TerminalVertex_Set_v(MR_TerminalVertex *_this, MR_VertId value);

/// Returns a mutable pointer to a member variable of class `MR::TerminalVertex` named `v`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_TerminalVertex_GetMutable_v(MR_TerminalVertex *_this);

/// Returns a pointer to a member variable of class `MR::TerminalVertex` named `metric`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_TerminalVertex_Get_metric(const MR_TerminalVertex *_this);

/// Modifies a member variable of class `MR::TerminalVertex` named `metric`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TerminalVertex_Set_metric(MR_TerminalVertex *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::TerminalVertex` named `metric`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_TerminalVertex_GetMutable_metric(MR_TerminalVertex *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TerminalVertex_Destroy()` to free it when you're done using it.
MRC_API MR_TerminalVertex *MR_TerminalVertex_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_TerminalVertex_DestroyArray()`.
/// Use `MR_TerminalVertex_OffsetMutablePtr()` and `MR_TerminalVertex_OffsetPtr()` to access the array elements.
MRC_API MR_TerminalVertex *MR_TerminalVertex_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::TerminalVertex` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TerminalVertex_Destroy()` to free it when you're done using it.
MRC_API MR_TerminalVertex *MR_TerminalVertex_ConstructFrom(MR_VertId v, float metric);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_TerminalVertex *MR_TerminalVertex_OffsetPtr(const MR_TerminalVertex *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_TerminalVertex *MR_TerminalVertex_OffsetMutablePtr(MR_TerminalVertex *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::TerminalVertex`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TerminalVertex_Destroy()` to free it when you're done using it.
MRC_API MR_TerminalVertex *MR_TerminalVertex_ConstructFromAnother(const MR_TerminalVertex *_other);

/// Destroys a heap-allocated instance of `MR_TerminalVertex`. Does nothing if the pointer is null.
MRC_API void MR_TerminalVertex_Destroy(const MR_TerminalVertex *_this);

/// Destroys a heap-allocated array of `MR_TerminalVertex`. Does nothing if the pointer is null.
MRC_API void MR_TerminalVertex_DestroyArray(const MR_TerminalVertex *_this);

/// Generated from a method of class `MR::TerminalVertex` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TerminalVertex *MR_TerminalVertex_AssignFromAnother(MR_TerminalVertex *_this, const MR_TerminalVertex *_other);

/// finds the shortest path in euclidean metric from start to finish vertices using Dijkstra algorithm;
/// if no path can be found then empty path is returned
/// Generated from function `MR::buildShortestPath`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `maxPathLen` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeId *MR_buildShortestPath_MR_VertId(const MR_Mesh *mesh, MR_VertId start, MR_VertId finish, const float *maxPathLen);

/// finds the shortest path in euclidean metric from start to finish vertices using bidirectional modification of Dijkstra algorithm,
/// constructing the path simultaneously from both start and finish, which is faster for long paths;
/// if no path can be found then empty path is returned
/// Generated from function `MR::buildShortestPathBiDir`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `maxPathLen` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeId *MR_buildShortestPathBiDir_4(const MR_Mesh *mesh, MR_VertId start, MR_VertId finish, const float *maxPathLen);

/// finds the path from a vertex in start-triangle to a vertex in finish-triangle,
/// so that the length start-first_vertex-...-last_vertex-finish is shortest in euclidean metric;
/// using bidirectional modification of Dijkstra algorithm, constructing the path simultaneously from both start and finish, which is faster for long paths;
/// if no path can be found then empty path is returned
/// Generated from function `MR::buildShortestPathBiDir`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `start` can not be null. It is a single object.
/// Parameter `finish` can not be null. It is a single object.
/// Parameter `outPathStart` defaults to a null pointer in C++.
/// Parameter `outPathFinish` defaults to a null pointer in C++.
/// Parameter `maxPathLen` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeId *MR_buildShortestPathBiDir_6(const MR_Mesh *mesh, const MR_MeshTriPoint *start, const MR_MeshTriPoint *finish, MR_VertId *outPathStart, MR_VertId *outPathFinish, const float *maxPathLen);

/// finds the shortest path in euclidean metric from start to finish vertices using A* modification of Dijkstra algorithm,
/// which is faster for near linear path;
/// if no path can be found then empty path is returned
/// Generated from function `MR::buildShortestPathAStar`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `maxPathLen` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeId *MR_buildShortestPathAStar_4(const MR_Mesh *mesh, MR_VertId start, MR_VertId finish, const float *maxPathLen);

/// finds the path from a vertex in start-triangle to a vertex in finish-triangle,
/// so that the length start-first_vertex-...-last_vertex-finish is shortest in euclidean metric;
/// using A* modification of Dijkstra algorithm, which is faster for near linear path;
/// if no path can be found then empty path is returned
/// Generated from function `MR::buildShortestPathAStar`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `start` can not be null. It is a single object.
/// Parameter `finish` can not be null. It is a single object.
/// Parameter `outPathStart` defaults to a null pointer in C++.
/// Parameter `outPathFinish` defaults to a null pointer in C++.
/// Parameter `maxPathLen` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeId *MR_buildShortestPathAStar_6(const MR_Mesh *mesh, const MR_MeshTriPoint *start, const MR_MeshTriPoint *finish, MR_VertId *outPathStart, MR_VertId *outPathFinish, const float *maxPathLen);

/// builds shortest path in euclidean metric from start to finish vertices; if no path can be found then empty path is returned
/// Generated from function `MR::buildShortestPath`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `finish` can not be null. It is a single object.
/// Parameter `maxPathLen` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeId *MR_buildShortestPath_MR_VertBitSet(const MR_Mesh *mesh, MR_VertId start, const MR_VertBitSet *finish, const float *maxPathLen);

/// builds shortest path in given metric from start to finish vertices; if no path can be found then empty path is returned
/// Generated from function `MR::buildSmallestMetricPath`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `metric` can not be null. It is a single object.
/// Parameter `maxPathMetric` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeId *MR_buildSmallestMetricPath_const_MR_MeshTopology_ref_MR_VertId(const MR_MeshTopology *topology, const MR_std_function_float_from_MR_EdgeId *metric, MR_VertId start, MR_VertId finish, const float *maxPathMetric);

/// finds the smallest metric path from start vertex to finish vertex,
/// using bidirectional modification of Dijkstra algorithm, constructing the path simultaneously from both start and finish, which is faster for long paths;
/// if no path can be found then empty path is returned
/// Generated from function `MR::buildSmallestMetricPathBiDir`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `metric` can not be null. It is a single object.
/// Parameter `maxPathMetric` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeId *MR_buildSmallestMetricPathBiDir_5(const MR_MeshTopology *topology, const MR_std_function_float_from_MR_EdgeId *metric, MR_VertId start, MR_VertId finish, const float *maxPathMetric);

/// finds the smallest metric path from one of start vertices to one of the finish vertices,
/// using bidirectional modification of Dijkstra algorithm, constructing the path simultaneously from both starts and finishes, which is faster for long paths;
/// if no path can be found then empty path is returned
/// Generated from function `MR::buildSmallestMetricPathBiDir`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `metric` can not be null. It is a single object.
/// Parameter `outPathStart` defaults to a null pointer in C++.
/// Parameter `outPathFinish` defaults to a null pointer in C++.
/// Parameter `maxPathMetric` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeId *MR_buildSmallestMetricPathBiDir_9(const MR_MeshTopology *topology, const MR_std_function_float_from_MR_EdgeId *metric, const MR_TerminalVertex *starts, int32_t numStarts, const MR_TerminalVertex *finishes, int32_t numFinishes, MR_VertId *outPathStart, MR_VertId *outPathFinish, const float *maxPathMetric);

/// builds shortest path in given metric from start to finish vertices; if no path can be found then empty path is returned
/// Generated from function `MR::buildSmallestMetricPath`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `metric` can not be null. It is a single object.
/// Parameter `finish` can not be null. It is a single object.
/// Parameter `maxPathMetric` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeId *MR_buildSmallestMetricPath_const_MR_MeshTopology_ref_MR_VertBitSet(const MR_MeshTopology *topology, const MR_std_function_float_from_MR_EdgeId *metric, MR_VertId start, const MR_VertBitSet *finish, const float *maxPathMetric);

/// returns all vertices from given region ordered in each connected component in breadth-first way
/// Generated from function `MR::getVertexOrdering`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_VertId *MR_getVertexOrdering_MR_MeshTopology(const MR_MeshTopology *topology, MR_PassBy region_pass_by, MR_VertBitSet *region);

/// finds all closed loops from given edges and removes them from edges
/// Generated from function `MR::extractClosedLoops`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `edges` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_EdgeId *MR_extractClosedLoops_2(const MR_MeshTopology *topology, MR_EdgeBitSet *edges);

/// Generated from function `MR::extractClosedLoops`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `inEdges` can not be null. It is a single object.
/// Parameter `outNotLoopEdges` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_EdgeId *MR_extractClosedLoops_3(const MR_MeshTopology *topology, const MR_std_vector_MR_EdgeId *inEdges, MR_EdgeBitSet *outNotLoopEdges);

/// Generated from function `MR::extractLongestClosedLoop`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `inEdges` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeId *MR_extractLongestClosedLoop(const MR_Mesh *mesh, const MR_std_vector_MR_EdgeId *inEdges);

/// expands the region (of faces or vertices) on given metric value. returns false if callback also returns false
/// Generated from function `MR::dilateRegionByMetric`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `metric` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_dilateRegionByMetric_MR_FaceBitSet(const MR_MeshTopology *topology, const MR_std_function_float_from_MR_EdgeId *metric, MR_FaceBitSet *region, float dilation, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::dilateRegionByMetric`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `metric` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_dilateRegionByMetric_MR_VertBitSet(const MR_MeshTopology *topology, const MR_std_function_float_from_MR_EdgeId *metric, MR_VertBitSet *region, float dilation, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::dilateRegionByMetric`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `metric` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_dilateRegionByMetric_MR_UndirectedEdgeBitSet(const MR_MeshTopology *topology, const MR_std_function_float_from_MR_EdgeId *metric, MR_UndirectedEdgeBitSet *region, float dilation, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// shrinks the region (of faces or vertices) on given metric value. returns false if callback also returns false
/// Generated from function `MR::erodeRegionByMetric`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `metric` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_erodeRegionByMetric_MR_FaceBitSet(const MR_MeshTopology *topology, const MR_std_function_float_from_MR_EdgeId *metric, MR_FaceBitSet *region, float dilation, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::erodeRegionByMetric`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `metric` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_erodeRegionByMetric_MR_VertBitSet(const MR_MeshTopology *topology, const MR_std_function_float_from_MR_EdgeId *metric, MR_VertBitSet *region, float dilation, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::erodeRegionByMetric`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `metric` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_erodeRegionByMetric_MR_UndirectedEdgeBitSet(const MR_MeshTopology *topology, const MR_std_function_float_from_MR_EdgeId *metric, MR_UndirectedEdgeBitSet *region, float dilation, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// expands the region (of faces or vertices) on given value (in meters). returns false if callback also returns false
/// Generated from function `MR::dilateRegion`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_dilateRegion_4_MR_FaceBitSet(const MR_Mesh *mesh, MR_FaceBitSet *region, float dilation, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::dilateRegion`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_dilateRegion_4_MR_VertBitSet(const MR_Mesh *mesh, MR_VertBitSet *region, float dilation, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::dilateRegion`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_dilateRegion_4_MR_UndirectedEdgeBitSet(const MR_Mesh *mesh, MR_UndirectedEdgeBitSet *region, float dilation, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::dilateRegion`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_dilateRegion_5_const_MR_MeshTopology_ref_MR_FaceBitSet(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_FaceBitSet *region, float dilation, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::dilateRegion`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_dilateRegion_5_const_MR_MeshTopology_ref_MR_VertBitSet(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_VertBitSet *region, float dilation, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::dilateRegion`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_dilateRegion_5_const_MR_MeshTopology_ref_MR_UndirectedEdgeBitSet(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_UndirectedEdgeBitSet *region, float dilation, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// shrinks the region (of faces or vertices) on given value (in meters). returns false if callback also returns false
/// Generated from function `MR::erodeRegion`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_erodeRegion_4_MR_FaceBitSet(const MR_Mesh *mesh, MR_FaceBitSet *region, float dilation, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::erodeRegion`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_erodeRegion_4_MR_VertBitSet(const MR_Mesh *mesh, MR_VertBitSet *region, float dilation, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::erodeRegion`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_erodeRegion_4_MR_UndirectedEdgeBitSet(const MR_Mesh *mesh, MR_UndirectedEdgeBitSet *region, float dilation, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::erodeRegion`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_erodeRegion_5_const_MR_MeshTopology_ref_MR_FaceBitSet(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_FaceBitSet *region, float dilation, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::erodeRegion`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_erodeRegion_5_const_MR_MeshTopology_ref_MR_VertBitSet(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_VertBitSet *region, float dilation, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::erodeRegion`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_erodeRegion_5_const_MR_MeshTopology_ref_MR_UndirectedEdgeBitSet(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_UndirectedEdgeBitSet *region, float dilation, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// finds all intersection points between given path and plane, adds them in outIntersections and returns their number
/// Generated from function `MR::getPathPlaneIntersections`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `path` can not be null. It is a single object.
/// Parameter `plane` can not be null. It is a single object.
/// Parameter `outIntersections` defaults to a null pointer in C++.
MRC_API int32_t MR_getPathPlaneIntersections(const MR_Mesh *mesh, const MR_std_vector_MR_EdgeId *path, const MR_Plane3f *plane, MR_std_vector_MR_EdgePoint *outIntersections);

/// finds all intersection points between given contour and plane, adds them in outIntersections and returns their number
/// Generated from function `MR::getContourPlaneIntersections`.
/// Parameter `path` can not be null. It is a single object.
/// Parameter `plane` can not be null. It is a single object.
/// Parameter `outIntersections` defaults to a null pointer in C++.
MRC_API int32_t MR_getContourPlaneIntersections(const MR_std_vector_MR_Vector3f *path, const MR_Plane3f *plane, MR_std_vector_MR_Vector3f *outIntersections);

/// finds all path edges located in given plane with given tolerance, adds them in outInPlaneEdges and returns their number
/// Generated from function `MR::getPathEdgesInPlane`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `path` can not be null. It is a single object.
/// Parameter `plane` can not be null. It is a single object.
/// Parameter `tolerance` has a default argument: `0.F`, pass a null pointer to use it.
/// Parameter `outInPlaneEdges` defaults to a null pointer in C++.
MRC_API int32_t MR_getPathEdgesInPlane(const MR_Mesh *mesh, const MR_std_vector_MR_EdgeId *path, const MR_Plane3f *plane, const float *tolerance, MR_std_vector_MR_EdgeId *outInPlaneEdges);

#ifdef __cplusplus
} // extern "C"
#endif
