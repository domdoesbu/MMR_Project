// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AABBTreePoints MR_AABBTreePoints; // Defined in `#include <MRCMesh/MRAABBTreePoints.h>`.
typedef struct MR_EdgeBitSet MR_EdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertMap MR_VertMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_optional_MR_VertBitSet MR_std_optional_MR_VertBitSet; // Defined in `#include <MRCMisc/std_optional_MR_VertBitSet.h>`.
typedef struct MR_std_optional_MR_VertMap MR_std_optional_MR_VertMap; // Defined in `#include <MRCMisc/std_optional_MR_VertMap.h>`.
typedef struct MR_std_vector_std_pair_MR_EdgeId_MR_EdgeId MR_std_vector_std_pair_MR_EdgeId_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_std_pair_MR_EdgeId_MR_EdgeId.h>`.


/// returns a map where each valid vertex is mapped to the smallest valid vertex Id located within given distance (including itself), and this smallest vertex is mapped to itself,
/// each vertex not from valid set is mapped to itself
/// Generated from function `MR::findSmallestCloseVertices`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_VertMap_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_VertMap *MR_findSmallestCloseVertices_3_MR_Mesh(const MR_Mesh *mesh, float closeDist, const MR_std_function_bool_from_float *cb);

/// returns a map where each valid vertex is mapped to the smallest valid vertex Id located within given distance (including itself), and this smallest vertex is mapped to itself,
/// each vertex not from valid set is mapped to itself
/// Generated from function `MR::findSmallestCloseVertices`.
/// Parameter `cloud` can not be null. It is a single object.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_VertMap_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_VertMap *MR_findSmallestCloseVertices_3_MR_PointCloud(const MR_PointCloud *cloud, float closeDist, const MR_std_function_bool_from_float *cb);

/// returns a map where each valid vertex is mapped to the smallest valid vertex Id located within given distance (including itself), and this smallest vertex is mapped to itself,
/// each vertex not from valid set is mapped to itself; the search tree is constructe inside
/// Generated from function `MR::findSmallestCloseVertices`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `valid` defaults to a null pointer in C++.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_VertMap_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_VertMap *MR_findSmallestCloseVertices_4(const MR_VertCoords *points, float closeDist, const MR_VertBitSet *valid, const MR_std_function_bool_from_float *cb);

/// returns a map where each valid vertex is mapped to the smallest valid vertex Id located within given distance (including itself), and this smallest vertex is mapped to itself,
/// each vertex not from valid set is mapped to itself; given tree is used as is
/// Generated from function `MR::findSmallestCloseVerticesUsingTree`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `tree` can not be null. It is a single object.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_VertMap_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_VertMap *MR_findSmallestCloseVerticesUsingTree(const MR_VertCoords *points, float closeDist, const MR_AABBTreePoints *tree, const MR_VertBitSet *valid, const MR_std_function_bool_from_float *cb);

/// finds all close vertices, where for each vertex there is another one located within given distance
/// Generated from function `MR::findCloseVertices`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_VertBitSet *MR_findCloseVertices_3_MR_Mesh(const MR_Mesh *mesh, float closeDist, const MR_std_function_bool_from_float *cb);

/// finds all close vertices, where for each vertex there is another one located within given distance
/// Generated from function `MR::findCloseVertices`.
/// Parameter `cloud` can not be null. It is a single object.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_VertBitSet *MR_findCloseVertices_3_MR_PointCloud(const MR_PointCloud *cloud, float closeDist, const MR_std_function_bool_from_float *cb);

/// finds all close vertices, where for each vertex there is another one located within given distance
/// Generated from function `MR::findCloseVertices`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `valid` defaults to a null pointer in C++.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_VertBitSet *MR_findCloseVertices_4(const MR_VertCoords *points, float closeDist, const MR_VertBitSet *valid, const MR_std_function_bool_from_float *cb);

/// finds all close vertices, where for each vertex there is another one located within given distance; smallestMap is the result of findSmallestCloseVertices function call
/// Generated from function `MR::findCloseVertices`.
/// Parameter `smallestMap` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_findCloseVertices_1(const MR_VertMap *smallestMap);

/// finds pairs of twin edges (each twin edge will be present at least in one of pairs)
/// Generated from function `MR::findTwinEdgePairs`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_pair_MR_EdgeId_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_pair_MR_EdgeId_MR_EdgeId *MR_findTwinEdgePairs(const MR_Mesh *mesh, float closeDist);

/// finds all directed twin edges
/// Generated from function `MR::findTwinEdges`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeBitSet *MR_findTwinEdges_2(const MR_Mesh *mesh, float closeDist);

/// Generated from function `MR::findTwinEdges`.
/// Parameter `pairs` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeBitSet *MR_findTwinEdges_1(const MR_std_vector_std_pair_MR_EdgeId_MR_EdgeId *pairs);

/// finds all undirected twin edges
/// Generated from function `MR::findTwinUndirectedEdges`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_findTwinUndirectedEdges_2(const MR_Mesh *mesh, float closeDist);

/// Generated from function `MR::findTwinUndirectedEdges`.
/// Parameter `pairs` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_findTwinUndirectedEdges_1(const MR_std_vector_std_pair_MR_EdgeId_MR_EdgeId *pairs);

/// provided that each edge has at most one twin, composes bidirectional mapping between twins
/// Generated from function `MR::findTwinUndirectedEdgeHashMap`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_findTwinUndirectedEdgeHashMap_2(const MR_Mesh *mesh, float closeDist);

/// Generated from function `MR::findTwinUndirectedEdgeHashMap`.
/// Parameter `pairs` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_findTwinUndirectedEdgeHashMap_1(const MR_std_vector_std_pair_MR_EdgeId_MR_EdgeId *pairs);

#ifdef __cplusplus
} // extern "C"
#endif
