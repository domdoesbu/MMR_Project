// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf2f MR_AffineXf2f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_Polyline2 MR_Polyline2; // Defined in `#include <MRCMesh/MRPolyline.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_std_pair_MR_UndirectedEdgeBitSet_MR_UndirectedEdgeBitSet MR_std_pair_MR_UndirectedEdgeBitSet_MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMisc/std_pair_MR_UndirectedEdgeBitSet_MR_UndirectedEdgeBitSet.h>`.
typedef struct MR_std_vector_MR_EdgePointPair MR_std_vector_MR_EdgePointPair; // Defined in `#include <MRCMisc/std_vector_MR_EdgePointPair.h>`.
typedef struct MR_std_vector_MR_UndirectedEdgeUndirectedEdge MR_std_vector_MR_UndirectedEdgeUndirectedEdge; // Defined in `#include <MRCMisc/std_vector_MR_UndirectedEdgeUndirectedEdge.h>`.


/**
* \brief finds all pairs of colliding edges from two 2d polylines
* \param rigidB2A rigid transformation from B-polyline space to A polyline space, nullptr considered as identity transformation
* \param firstIntersectionOnly if true then the function returns at most one pair of intersecting edges and returns faster
*/
/// Generated from function `MR::findCollidingEdgePairs`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `rigidB2A` defaults to a null pointer in C++.
/// Parameter `firstIntersectionOnly` has a default argument: `false`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgePointPair_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgePointPair *MR_findCollidingEdgePairs(const MR_Polyline2 *a, const MR_Polyline2 *b, const MR_AffineXf2f *rigidB2A, const bool *firstIntersectionOnly);

/**
* \brief finds all pairs of colliding edges from two 2d polylines
* \param rigidB2A rigid transformation from B-polyline space to A polyline space, nullptr considered as identity transformation
* \param firstIntersectionOnly if true then the function returns at most one pair of intersecting edges and returns faster
*/
/// Generated from function `MR::findCollidingEdges`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `rigidB2A` defaults to a null pointer in C++.
/// Parameter `firstIntersectionOnly` has a default argument: `false`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_UndirectedEdgeUndirectedEdge_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_UndirectedEdgeUndirectedEdge *MR_findCollidingEdges(const MR_Polyline2 *a, const MR_Polyline2 *b, const MR_AffineXf2f *rigidB2A, const bool *firstIntersectionOnly);

/**
* \brief finds bitset per polyline with colliding edges
* \param rigidB2A rigid transformation from B-polyline space to A polyline space, nullptr considered as identity transformation
*/
/// Generated from function `MR::findCollidingEdgesBitsets`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `rigidB2A` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_MR_UndirectedEdgeBitSet_MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_MR_UndirectedEdgeBitSet_MR_UndirectedEdgeBitSet *MR_findCollidingEdgesBitsets(const MR_Polyline2 *a, const MR_Polyline2 *b, const MR_AffineXf2f *rigidB2A);

/// finds all pairs of colliding edges from 2d polyline
/// Generated from function `MR::findSelfCollidingEdgePairs`.
/// Parameter `polyline` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgePointPair_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgePointPair *MR_findSelfCollidingEdgePairs(const MR_Polyline2 *polyline);

/// finds all pairs of colliding edges from 2d polyline
/// Generated from function `MR::findSelfCollidingEdges`.
/// Parameter `polyline` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_UndirectedEdgeUndirectedEdge_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_UndirectedEdgeUndirectedEdge *MR_findSelfCollidingEdges(const MR_Polyline2 *polyline);

/// finds the union of all self-intersecting edges
/// Generated from function `MR::findSelfCollidingEdgesBS`.
/// Parameter `polyline` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_findSelfCollidingEdgesBS(const MR_Polyline2 *polyline);

/**
* \brief checks that arbitrary 2d polyline A is inside of closed 2d polyline B
* \param rigidB2A rigid transformation from B-polyline space to A polyline space, nullptr considered as identity transformation
*/
/// Generated from function `MR::isInside`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `rigidB2A` defaults to a null pointer in C++.
MRC_API bool MR_isInside_MR_Polyline2(const MR_Polyline2 *a, const MR_Polyline2 *b, const MR_AffineXf2f *rigidB2A);

#ifdef __cplusplus
} // extern "C"
#endif
