// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_PolylineTopology MR_PolylineTopology; // Defined in `#include <MRCMesh/MRPolylineTopology.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_UnionFind_MR_UndirectedEdgeId MR_UnionFind_MR_UndirectedEdgeId; // Defined in `#include <MRCMesh/MRUnionFind.h>`.
typedef struct MR_std_pair_std_vector_MR_UndirectedEdgeBitSet_int32_t MR_std_pair_std_vector_MR_UndirectedEdgeBitSet_int32_t; // Defined in `#include <MRCMisc/std_pair_std_vector_MR_UndirectedEdgeBitSet_int32_t.h>`.
typedef struct MR_std_vector_MR_UndirectedEdgeBitSet MR_std_vector_MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMisc/std_vector_MR_UndirectedEdgeBitSet.h>`.


/// returns the number of connected components in polyline
/// Generated from function `MR::PolylineComponents::getNumComponents`.
/// Parameter `topology` can not be null. It is a single object.
MRC_API MR_uint64_t MR_PolylineComponents_getNumComponents(const MR_PolylineTopology *topology);

/// returns one connected component containing given undirected edge id, 
/// not effective to call more than once, if several components are needed use getAllComponents
/// Generated from function `MR::PolylineComponents::getComponent`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_PolylineComponents_getComponent(const MR_PolylineTopology *topology, MR_UndirectedEdgeId id);

/// gets all connected components of polyline topology

/// \note be careful, if mesh is large enough and has many components, the memory overflow will occur
/// Generated from function `MR::PolylineComponents::getAllComponents`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_UndirectedEdgeBitSet *MR_PolylineComponents_getAllComponents_1(const MR_PolylineTopology *topology);

/// gets all connected components of polyline topology

/// \detail if components  number more than the maxComponentCount, they will be combined into groups of the same size 
/// \param maxComponentCount should be more then 1
/// \return pair components bitsets vector and number components in one group if components number more than maxComponentCount
/// Generated from function `MR::PolylineComponents::getAllComponents`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_std_vector_MR_UndirectedEdgeBitSet_int32_t_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_std_vector_MR_UndirectedEdgeBitSet_int32_t *MR_PolylineComponents_getAllComponents_2(const MR_PolylineTopology *topology, int32_t maxComponentCount);

/// gets union-find structure for given polyline
/// Generated from function `MR::PolylineComponents::getUnionFindStructure`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UnionFind_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_UnionFind_MR_UndirectedEdgeId *MR_PolylineComponents_getUnionFindStructure(const MR_PolylineTopology *topology);

#ifdef __cplusplus
} // extern "C"
#endif
