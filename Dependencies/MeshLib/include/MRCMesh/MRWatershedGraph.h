// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Graph MR_Graph; // Defined in `#include <MRCMesh/MRGraph.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Vector_MR_FaceBitSet_MR_GraphVertId MR_Vector_MR_FaceBitSet_MR_GraphVertId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_MR_GraphVertId_MR_GraphVertId MR_Vector_MR_GraphVertId_MR_GraphVertId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_int32_t_MR_FaceId MR_Vector_int32_t_MR_FaceId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_pair_MR_GraphEdgeId_float MR_std_pair_MR_GraphEdgeId_float; // Defined in `#include <MRCMisc/std_pair_MR_GraphEdgeId_float.h>`.
typedef struct MR_std_vector_MR_WatershedGraph_OverflowPoint MR_std_vector_MR_WatershedGraph_OverflowPoint; // Defined in `#include <MRCMisc/std_vector_MR_WatershedGraph_OverflowPoint.h>`.


/// graphs representing rain basins on the mesh
/// Generated from class `MR::WatershedGraph`.
typedef struct MR_WatershedGraph MR_WatershedGraph;

/// associated with each vertex in graph
/// Generated from class `MR::WatershedGraph::BasinInfo`.
typedef struct MR_WatershedGraph_BasinInfo MR_WatershedGraph_BasinInfo;

/// associated with each edge in graph
/// Generated from class `MR::WatershedGraph::BdInfo`.
typedef struct MR_WatershedGraph_BdInfo MR_WatershedGraph_BdInfo;

/// describes a point where a flow from one basin overflows into another basin
/// Generated from class `MR::WatershedGraph::OverflowPoint`.
typedef struct MR_WatershedGraph_OverflowPoint MR_WatershedGraph_OverflowPoint;

/// Generated from a constructor of class `MR::WatershedGraph`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WatershedGraph_Destroy()` to free it when you're done using it.
MRC_API MR_WatershedGraph *MR_WatershedGraph_ConstructFromAnother(MR_PassBy _other_pass_by, MR_WatershedGraph *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_WatershedGraph *MR_WatershedGraph_OffsetPtr(const MR_WatershedGraph *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_WatershedGraph *MR_WatershedGraph_OffsetMutablePtr(MR_WatershedGraph *ptr, ptrdiff_t i);

/// constructs the graph from given mesh, heights in z-coordinate, and initial subdivision on basins
/// Generated from a constructor of class `MR::WatershedGraph`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `face2basin` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WatershedGraph_Destroy()` to free it when you're done using it.
MRC_API MR_WatershedGraph *MR_WatershedGraph_Construct(const MR_Mesh *mesh, const MR_Vector_int32_t_MR_FaceId *face2basin, int32_t numBasins);

/// Destroys a heap-allocated instance of `MR_WatershedGraph`. Does nothing if the pointer is null.
MRC_API void MR_WatershedGraph_Destroy(const MR_WatershedGraph *_this);

/// Destroys a heap-allocated array of `MR_WatershedGraph`. Does nothing if the pointer is null.
MRC_API void MR_WatershedGraph_DestroyArray(const MR_WatershedGraph *_this);

/// returns height at given vertex or FLT_MAX if the vertex is invalid
/// Generated from a method of class `MR::WatershedGraph` named `getHeightAt`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_WatershedGraph_getHeightAt(const MR_WatershedGraph *_this, MR_VertId v);

/// returns underlying graph where each basin is a vertex
/// Generated from a method of class `MR::WatershedGraph` named `graph`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Graph *MR_WatershedGraph_graph(const MR_WatershedGraph *_this);

/// returns total precipitation area
/// Generated from a method of class `MR::WatershedGraph` named `totalArea`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_WatershedGraph_totalArea(const MR_WatershedGraph *_this);

/// returns the current number of basins (excluding special "outside" basin)
/// Generated from a method of class `MR::WatershedGraph` named `numBasins`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_WatershedGraph_numBasins(const MR_WatershedGraph *_this);

/// returns data associated with given basin
/// Generated from a method of class `MR::WatershedGraph` named `basinInfo`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_WatershedGraph_BasinInfo *MR_WatershedGraph_basinInfo_const(const MR_WatershedGraph *_this, MR_GraphVertId v);

/// Generated from a method of class `MR::WatershedGraph` named `basinInfo`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_WatershedGraph_BasinInfo *MR_WatershedGraph_basinInfo(MR_WatershedGraph *_this, MR_GraphVertId v);

/// returns data associated with given boundary between basins
/// Generated from a method of class `MR::WatershedGraph` named `bdInfo`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_WatershedGraph_BdInfo *MR_WatershedGraph_bdInfo_const(const MR_WatershedGraph *_this, MR_GraphEdgeId e);

/// Generated from a method of class `MR::WatershedGraph` named `bdInfo`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_WatershedGraph_BdInfo *MR_WatershedGraph_bdInfo(MR_WatershedGraph *_this, MR_GraphEdgeId e);

/// returns special "basin" representing outside areas of the mesh
/// Generated from a method of class `MR::WatershedGraph` named `outsideId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphVertId MR_WatershedGraph_outsideId(const MR_WatershedGraph *_this);

/// for valid basin returns self id; for invalid basin returns the id of basin it was merged in
/// Generated from a method of class `MR::WatershedGraph` named `getRootBasin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphVertId MR_WatershedGraph_getRootBasin(const MR_WatershedGraph *_this, MR_GraphVertId v);

/// returns the basin where the flow from this basin goes next (it can be self id if the basin is not full yet)
/// Generated from a method of class `MR::WatershedGraph` named `flowsTo`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphVertId MR_WatershedGraph_flowsTo(const MR_WatershedGraph *_this, MR_GraphVertId v);

/// returns the basin where the flow from this basin finally goes (it can be self id if the basin is not full yet);
/// \param exceptOutside if true then the method returns the basin that receives water flow from (v) just before outside
/// Generated from a method of class `MR::WatershedGraph` named `flowsFinallyTo`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `exceptOutside` has a default argument: `false`, pass a null pointer to use it.
MRC_API MR_GraphVertId MR_WatershedGraph_flowsFinallyTo(const MR_WatershedGraph *_this, MR_GraphVertId v, const bool *exceptOutside);

/// replaces parent of each basin with its computed root;
/// this speeds up following calls to getRootBasin()
/// Generated from a method of class `MR::WatershedGraph` named `setParentsToRoots`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WatershedGraph_setParentsToRoots(MR_WatershedGraph *_this);

/// finds the lowest boundary between basins and its height, which is defined
/// as the minimal different between lowest boundary point and lowest point in a basin
/// Generated from a method of class `MR::WatershedGraph` named `findLowestBd`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_MR_GraphEdgeId_float_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_MR_GraphEdgeId_float *MR_WatershedGraph_findLowestBd(const MR_WatershedGraph *_this);

/// merges basin v1 into basin v0, v1 is deleted after that, returns v0
/// Generated from a method of class `MR::WatershedGraph` named `merge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphVertId MR_WatershedGraph_merge(MR_WatershedGraph *_this, MR_GraphVertId v0, MR_GraphVertId v1);

/// merges two basins sharing given boundary, returns remaining basin
/// Generated from a method of class `MR::WatershedGraph` named `mergeViaBd`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphVertId MR_WatershedGraph_mergeViaBd(MR_WatershedGraph *_this, MR_GraphEdgeId bd);

/// returns the mesh faces of given basin
/// Generated from a method of class `MR::WatershedGraph` named `getBasinFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_WatershedGraph_getBasinFaces(const MR_WatershedGraph *_this, MR_GraphVertId basin);

/// returns the mesh faces of each valid basin;
/// \param joinOverflowBasins if true then overflowing basins will be merged in the target basins (except for overflow in outside)
/// Generated from a method of class `MR::WatershedGraph` named `getAllBasinFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `joinOverflowBasins` has a default argument: `false`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Vector_MR_FaceBitSet_MR_GraphVertId_Destroy()` to free it when you're done using it.
MRC_API MR_Vector_MR_FaceBitSet_MR_GraphVertId *MR_WatershedGraph_getAllBasinFaces(const MR_WatershedGraph *_this, const bool *joinOverflowBasins);

/// returns the mesh faces of given basin with at least one vertex below given level
/// Generated from a method of class `MR::WatershedGraph` named `getBasinFacesBelowLevel`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_WatershedGraph_getBasinFacesBelowLevel(const MR_WatershedGraph *_this, MR_GraphVertId basin, float waterLevel);

/// returns water volume in basin when its surface reaches given level, which must be in between
/// the lowest basin level and the lowest level on basin's boundary
/// Generated from a method of class `MR::WatershedGraph` named `computeBasinVolume`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_WatershedGraph_computeBasinVolume(const MR_WatershedGraph *_this, MR_GraphVertId basin, float waterLevel);

/// returns the mesh edges between current basins
/// \param joinOverflowBasins if true then overflowing basins will be merged in the target basins (except for overflow in outside)
/// Generated from a method of class `MR::WatershedGraph` named `getInterBasinEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `joinOverflowBasins` has a default argument: `false`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_WatershedGraph_getInterBasinEdges(const MR_WatershedGraph *_this, const bool *joinOverflowBasins);

/// returns all overflow points in the graph
/// Generated from a method of class `MR::WatershedGraph` named `getOverflowPoints`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_WatershedGraph_OverflowPoint_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_WatershedGraph_OverflowPoint *MR_WatershedGraph_getOverflowPoints(const MR_WatershedGraph *_this);

/// computes a map from initial basin id to a valid basin in which it was merged
/// \param joinOverflowBasins if true then overflowing basins will be merged in the target basins (except for overflow in outside)
/// Generated from a method of class `MR::WatershedGraph` named `iniBasin2Tgt`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `joinOverflowBasins` has a default argument: `false`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Vector_MR_GraphVertId_MR_GraphVertId_Destroy()` to free it when you're done using it.
MRC_API MR_Vector_MR_GraphVertId_MR_GraphVertId *MR_WatershedGraph_iniBasin2Tgt(const MR_WatershedGraph *_this, const bool *joinOverflowBasins);

///< in the whole basin
/// Returns a pointer to a member variable of class `MR::WatershedGraph::BasinInfo` named `lowestVert`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_WatershedGraph_BasinInfo_Get_lowestVert(const MR_WatershedGraph_BasinInfo *_this);

///< in the whole basin
/// Modifies a member variable of class `MR::WatershedGraph::BasinInfo` named `lowestVert`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WatershedGraph_BasinInfo_Set_lowestVert(MR_WatershedGraph_BasinInfo *_this, MR_VertId value);

///< in the whole basin
/// Returns a mutable pointer to a member variable of class `MR::WatershedGraph::BasinInfo` named `lowestVert`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_WatershedGraph_BasinInfo_GetMutable_lowestVert(MR_WatershedGraph_BasinInfo *_this);

///< lowest level (z-coordinate of lowestVert) in the basin
/// Returns a pointer to a member variable of class `MR::WatershedGraph::BasinInfo` named `lowestLevel`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_WatershedGraph_BasinInfo_Get_lowestLevel(const MR_WatershedGraph_BasinInfo *_this);

///< lowest level (z-coordinate of lowestVert) in the basin
/// Modifies a member variable of class `MR::WatershedGraph::BasinInfo` named `lowestLevel`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WatershedGraph_BasinInfo_Set_lowestLevel(MR_WatershedGraph_BasinInfo *_this, float value);

///< lowest level (z-coordinate of lowestVert) in the basin
/// Returns a mutable pointer to a member variable of class `MR::WatershedGraph::BasinInfo` named `lowestLevel`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_WatershedGraph_BasinInfo_GetMutable_lowestLevel(MR_WatershedGraph_BasinInfo *_this);

///< precipitation area that flows in this basin (and if it is full, continue flowing next)
/// Returns a pointer to a member variable of class `MR::WatershedGraph::BasinInfo` named `area`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_WatershedGraph_BasinInfo_Get_area(const MR_WatershedGraph_BasinInfo *_this);

///< precipitation area that flows in this basin (and if it is full, continue flowing next)
/// Modifies a member variable of class `MR::WatershedGraph::BasinInfo` named `area`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WatershedGraph_BasinInfo_Set_area(MR_WatershedGraph_BasinInfo *_this, float value);

///< precipitation area that flows in this basin (and if it is full, continue flowing next)
/// Returns a mutable pointer to a member variable of class `MR::WatershedGraph::BasinInfo` named `area`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_WatershedGraph_BasinInfo_GetMutable_area(MR_WatershedGraph_BasinInfo *_this);

///< lowest position on the boundary of the basin
/// Returns a pointer to a member variable of class `MR::WatershedGraph::BasinInfo` named `lowestBdLevel`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_WatershedGraph_BasinInfo_Get_lowestBdLevel(const MR_WatershedGraph_BasinInfo *_this);

///< lowest position on the boundary of the basin
/// Modifies a member variable of class `MR::WatershedGraph::BasinInfo` named `lowestBdLevel`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WatershedGraph_BasinInfo_Set_lowestBdLevel(MR_WatershedGraph_BasinInfo *_this, float value);

///< lowest position on the boundary of the basin
/// Returns a mutable pointer to a member variable of class `MR::WatershedGraph::BasinInfo` named `lowestBdLevel`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_WatershedGraph_BasinInfo_GetMutable_lowestBdLevel(MR_WatershedGraph_BasinInfo *_this);

///< full water volume to be accumulated in the basin till water reaches the lowest height on the boundary
/// Returns a pointer to a member variable of class `MR::WatershedGraph::BasinInfo` named `maxVolume`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_WatershedGraph_BasinInfo_Get_maxVolume(const MR_WatershedGraph_BasinInfo *_this);

///< full water volume to be accumulated in the basin till water reaches the lowest height on the boundary
/// Modifies a member variable of class `MR::WatershedGraph::BasinInfo` named `maxVolume`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WatershedGraph_BasinInfo_Set_maxVolume(MR_WatershedGraph_BasinInfo *_this, float value);

///< full water volume to be accumulated in the basin till water reaches the lowest height on the boundary
/// Returns a mutable pointer to a member variable of class `MR::WatershedGraph::BasinInfo` named `maxVolume`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_WatershedGraph_BasinInfo_GetMutable_maxVolume(MR_WatershedGraph_BasinInfo *_this);

///< accumulated water volume in the basin so far
/// Returns a pointer to a member variable of class `MR::WatershedGraph::BasinInfo` named `accVolume`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_WatershedGraph_BasinInfo_Get_accVolume(const MR_WatershedGraph_BasinInfo *_this);

///< accumulated water volume in the basin so far
/// Modifies a member variable of class `MR::WatershedGraph::BasinInfo` named `accVolume`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WatershedGraph_BasinInfo_Set_accVolume(MR_WatershedGraph_BasinInfo *_this, float value);

///< accumulated water volume in the basin so far
/// Returns a mutable pointer to a member variable of class `MR::WatershedGraph::BasinInfo` named `accVolume`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_WatershedGraph_BasinInfo_GetMutable_accVolume(MR_WatershedGraph_BasinInfo *_this);

///< the amount when accVolume was last updated
/// Returns a pointer to a member variable of class `MR::WatershedGraph::BasinInfo` named `lastUpdateAmount`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_WatershedGraph_BasinInfo_Get_lastUpdateAmount(const MR_WatershedGraph_BasinInfo *_this);

///< the amount when accVolume was last updated
/// Modifies a member variable of class `MR::WatershedGraph::BasinInfo` named `lastUpdateAmount`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WatershedGraph_BasinInfo_Set_lastUpdateAmount(MR_WatershedGraph_BasinInfo *_this, float value);

///< the amount when accVolume was last updated
/// Returns a mutable pointer to a member variable of class `MR::WatershedGraph::BasinInfo` named `lastUpdateAmount`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_WatershedGraph_BasinInfo_GetMutable_lastUpdateAmount(MR_WatershedGraph_BasinInfo *_this);

///< water level in the basin when it was formed (by merge or creation)
/// Returns a pointer to a member variable of class `MR::WatershedGraph::BasinInfo` named `lastMergeLevel`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_WatershedGraph_BasinInfo_Get_lastMergeLevel(const MR_WatershedGraph_BasinInfo *_this);

///< water level in the basin when it was formed (by merge or creation)
/// Modifies a member variable of class `MR::WatershedGraph::BasinInfo` named `lastMergeLevel`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WatershedGraph_BasinInfo_Set_lastMergeLevel(MR_WatershedGraph_BasinInfo *_this, float value);

///< water level in the basin when it was formed (by merge or creation)
/// Returns a mutable pointer to a member variable of class `MR::WatershedGraph::BasinInfo` named `lastMergeLevel`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_WatershedGraph_BasinInfo_GetMutable_lastMergeLevel(MR_WatershedGraph_BasinInfo *_this);

///< water volume in the basin when it was formed (by merge or creation)
/// Returns a pointer to a member variable of class `MR::WatershedGraph::BasinInfo` named `lastMergeVolume`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_WatershedGraph_BasinInfo_Get_lastMergeVolume(const MR_WatershedGraph_BasinInfo *_this);

///< water volume in the basin when it was formed (by merge or creation)
/// Modifies a member variable of class `MR::WatershedGraph::BasinInfo` named `lastMergeVolume`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WatershedGraph_BasinInfo_Set_lastMergeVolume(MR_WatershedGraph_BasinInfo *_this, float value);

///< water volume in the basin when it was formed (by merge or creation)
/// Returns a mutable pointer to a member variable of class `MR::WatershedGraph::BasinInfo` named `lastMergeVolume`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_WatershedGraph_BasinInfo_GetMutable_lastMergeVolume(MR_WatershedGraph_BasinInfo *_this);

///< when level=lowestBdLevel, volume=0, all water from this basin overflows via this boundary
/// Returns a pointer to a member variable of class `MR::WatershedGraph::BasinInfo` named `overflowVia`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_GraphEdgeId *MR_WatershedGraph_BasinInfo_Get_overflowVia(const MR_WatershedGraph_BasinInfo *_this);

///< when level=lowestBdLevel, volume=0, all water from this basin overflows via this boundary
/// Modifies a member variable of class `MR::WatershedGraph::BasinInfo` named `overflowVia`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WatershedGraph_BasinInfo_Set_overflowVia(MR_WatershedGraph_BasinInfo *_this, MR_GraphEdgeId value);

///< when level=lowestBdLevel, volume=0, all water from this basin overflows via this boundary
/// Returns a mutable pointer to a member variable of class `MR::WatershedGraph::BasinInfo` named `overflowVia`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphEdgeId *MR_WatershedGraph_BasinInfo_GetMutable_overflowVia(MR_WatershedGraph_BasinInfo *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WatershedGraph_BasinInfo_Destroy()` to free it when you're done using it.
MRC_API MR_WatershedGraph_BasinInfo *MR_WatershedGraph_BasinInfo_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_WatershedGraph_BasinInfo_DestroyArray()`.
/// Use `MR_WatershedGraph_BasinInfo_OffsetMutablePtr()` and `MR_WatershedGraph_BasinInfo_OffsetPtr()` to access the array elements.
MRC_API MR_WatershedGraph_BasinInfo *MR_WatershedGraph_BasinInfo_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_WatershedGraph_BasinInfo *MR_WatershedGraph_BasinInfo_OffsetPtr(const MR_WatershedGraph_BasinInfo *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_WatershedGraph_BasinInfo *MR_WatershedGraph_BasinInfo_OffsetMutablePtr(MR_WatershedGraph_BasinInfo *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::WatershedGraph::BasinInfo`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WatershedGraph_BasinInfo_Destroy()` to free it when you're done using it.
MRC_API MR_WatershedGraph_BasinInfo *MR_WatershedGraph_BasinInfo_ConstructFromAnother(const MR_WatershedGraph_BasinInfo *_other);

/// Destroys a heap-allocated instance of `MR_WatershedGraph_BasinInfo`. Does nothing if the pointer is null.
MRC_API void MR_WatershedGraph_BasinInfo_Destroy(const MR_WatershedGraph_BasinInfo *_this);

/// Destroys a heap-allocated array of `MR_WatershedGraph_BasinInfo`. Does nothing if the pointer is null.
MRC_API void MR_WatershedGraph_BasinInfo_DestroyArray(const MR_WatershedGraph_BasinInfo *_this);

/// Generated from a method of class `MR::WatershedGraph::BasinInfo` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_WatershedGraph_BasinInfo *MR_WatershedGraph_BasinInfo_AssignFromAnother(MR_WatershedGraph_BasinInfo *_this, const MR_WatershedGraph_BasinInfo *_other);

/// amount of precipitation (in same units as mesh coordinates and water level),
/// which can be added before overflowing the basin
/// Generated from a method of class `MR::WatershedGraph::BasinInfo` named `amountTillOverflow`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_WatershedGraph_BasinInfo_amountTillOverflow(const MR_WatershedGraph_BasinInfo *_this);

/// approximate current level of water (z-coordinate) in the basin
/// Generated from a method of class `MR::WatershedGraph::BasinInfo` named `approxLevel`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_WatershedGraph_BasinInfo_approxLevel(const MR_WatershedGraph_BasinInfo *_this);

/// updates accumulated volume in the basin to the moment of given precipitation amount
/// Generated from a method of class `MR::WatershedGraph::BasinInfo` named `updateAccVolume`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WatershedGraph_BasinInfo_updateAccVolume(MR_WatershedGraph_BasinInfo *_this, float amount);

///< on this boundary
/// Returns a pointer to a member variable of class `MR::WatershedGraph::BdInfo` named `lowestVert`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_WatershedGraph_BdInfo_Get_lowestVert(const MR_WatershedGraph_BdInfo *_this);

///< on this boundary
/// Modifies a member variable of class `MR::WatershedGraph::BdInfo` named `lowestVert`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WatershedGraph_BdInfo_Set_lowestVert(MR_WatershedGraph_BdInfo *_this, MR_VertId value);

///< on this boundary
/// Returns a mutable pointer to a member variable of class `MR::WatershedGraph::BdInfo` named `lowestVert`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_WatershedGraph_BdInfo_GetMutable_lowestVert(MR_WatershedGraph_BdInfo *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WatershedGraph_BdInfo_Destroy()` to free it when you're done using it.
MRC_API MR_WatershedGraph_BdInfo *MR_WatershedGraph_BdInfo_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_WatershedGraph_BdInfo_DestroyArray()`.
/// Use `MR_WatershedGraph_BdInfo_OffsetMutablePtr()` and `MR_WatershedGraph_BdInfo_OffsetPtr()` to access the array elements.
MRC_API MR_WatershedGraph_BdInfo *MR_WatershedGraph_BdInfo_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::WatershedGraph::BdInfo` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WatershedGraph_BdInfo_Destroy()` to free it when you're done using it.
MRC_API MR_WatershedGraph_BdInfo *MR_WatershedGraph_BdInfo_ConstructFrom(MR_VertId lowestVert);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_WatershedGraph_BdInfo *MR_WatershedGraph_BdInfo_OffsetPtr(const MR_WatershedGraph_BdInfo *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_WatershedGraph_BdInfo *MR_WatershedGraph_BdInfo_OffsetMutablePtr(MR_WatershedGraph_BdInfo *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::WatershedGraph::BdInfo`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WatershedGraph_BdInfo_Destroy()` to free it when you're done using it.
MRC_API MR_WatershedGraph_BdInfo *MR_WatershedGraph_BdInfo_ConstructFromAnother(const MR_WatershedGraph_BdInfo *_other);

/// Destroys a heap-allocated instance of `MR_WatershedGraph_BdInfo`. Does nothing if the pointer is null.
MRC_API void MR_WatershedGraph_BdInfo_Destroy(const MR_WatershedGraph_BdInfo *_this);

/// Destroys a heap-allocated array of `MR_WatershedGraph_BdInfo`. Does nothing if the pointer is null.
MRC_API void MR_WatershedGraph_BdInfo_DestroyArray(const MR_WatershedGraph_BdInfo *_this);

/// Generated from a method of class `MR::WatershedGraph::BdInfo` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_WatershedGraph_BdInfo *MR_WatershedGraph_BdInfo_AssignFromAnother(MR_WatershedGraph_BdInfo *_this, const MR_WatershedGraph_BdInfo *_other);

// mesh vertex on the boundary of full basin and the other where it overflows
/// Returns a pointer to a member variable of class `MR::WatershedGraph::OverflowPoint` named `v`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_WatershedGraph_OverflowPoint_Get_v(const MR_WatershedGraph_OverflowPoint *_this);

// mesh vertex on the boundary of full basin and the other where it overflows
/// Modifies a member variable of class `MR::WatershedGraph::OverflowPoint` named `v`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WatershedGraph_OverflowPoint_Set_v(MR_WatershedGraph_OverflowPoint *_this, MR_VertId value);

// mesh vertex on the boundary of full basin and the other where it overflows
/// Returns a mutable pointer to a member variable of class `MR::WatershedGraph::OverflowPoint` named `v`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_WatershedGraph_OverflowPoint_GetMutable_v(MR_WatershedGraph_OverflowPoint *_this);

/// Returns a pointer to a member variable of class `MR::WatershedGraph::OverflowPoint` named `fullBasin`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_GraphVertId *MR_WatershedGraph_OverflowPoint_Get_fullBasin(const MR_WatershedGraph_OverflowPoint *_this);

/// Modifies a member variable of class `MR::WatershedGraph::OverflowPoint` named `fullBasin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WatershedGraph_OverflowPoint_Set_fullBasin(MR_WatershedGraph_OverflowPoint *_this, MR_GraphVertId value);

/// Returns a mutable pointer to a member variable of class `MR::WatershedGraph::OverflowPoint` named `fullBasin`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertId *MR_WatershedGraph_OverflowPoint_GetMutable_fullBasin(MR_WatershedGraph_OverflowPoint *_this);

// basin where the flow from v goes
/// Returns a pointer to a member variable of class `MR::WatershedGraph::OverflowPoint` named `overflowTo`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_GraphVertId *MR_WatershedGraph_OverflowPoint_Get_overflowTo(const MR_WatershedGraph_OverflowPoint *_this);

// basin where the flow from v goes
/// Modifies a member variable of class `MR::WatershedGraph::OverflowPoint` named `overflowTo`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WatershedGraph_OverflowPoint_Set_overflowTo(MR_WatershedGraph_OverflowPoint *_this, MR_GraphVertId value);

// basin where the flow from v goes
/// Returns a mutable pointer to a member variable of class `MR::WatershedGraph::OverflowPoint` named `overflowTo`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertId *MR_WatershedGraph_OverflowPoint_GetMutable_overflowTo(MR_WatershedGraph_OverflowPoint *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WatershedGraph_OverflowPoint_Destroy()` to free it when you're done using it.
MRC_API MR_WatershedGraph_OverflowPoint *MR_WatershedGraph_OverflowPoint_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_WatershedGraph_OverflowPoint_DestroyArray()`.
/// Use `MR_WatershedGraph_OverflowPoint_OffsetMutablePtr()` and `MR_WatershedGraph_OverflowPoint_OffsetPtr()` to access the array elements.
MRC_API MR_WatershedGraph_OverflowPoint *MR_WatershedGraph_OverflowPoint_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::WatershedGraph::OverflowPoint` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WatershedGraph_OverflowPoint_Destroy()` to free it when you're done using it.
MRC_API MR_WatershedGraph_OverflowPoint *MR_WatershedGraph_OverflowPoint_ConstructFrom(MR_VertId v, MR_GraphVertId fullBasin, MR_GraphVertId overflowTo);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_WatershedGraph_OverflowPoint *MR_WatershedGraph_OverflowPoint_OffsetPtr(const MR_WatershedGraph_OverflowPoint *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_WatershedGraph_OverflowPoint *MR_WatershedGraph_OverflowPoint_OffsetMutablePtr(MR_WatershedGraph_OverflowPoint *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::WatershedGraph::OverflowPoint`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WatershedGraph_OverflowPoint_Destroy()` to free it when you're done using it.
MRC_API MR_WatershedGraph_OverflowPoint *MR_WatershedGraph_OverflowPoint_ConstructFromAnother(const MR_WatershedGraph_OverflowPoint *_other);

/// Destroys a heap-allocated instance of `MR_WatershedGraph_OverflowPoint`. Does nothing if the pointer is null.
MRC_API void MR_WatershedGraph_OverflowPoint_Destroy(const MR_WatershedGraph_OverflowPoint *_this);

/// Destroys a heap-allocated array of `MR_WatershedGraph_OverflowPoint`. Does nothing if the pointer is null.
MRC_API void MR_WatershedGraph_OverflowPoint_DestroyArray(const MR_WatershedGraph_OverflowPoint *_this);

/// Generated from a method of class `MR::WatershedGraph::OverflowPoint` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_WatershedGraph_OverflowPoint *MR_WatershedGraph_OverflowPoint_AssignFromAnother(MR_WatershedGraph_OverflowPoint *_this, const MR_WatershedGraph_OverflowPoint *_other);

#ifdef __cplusplus
} // extern "C"
#endif
