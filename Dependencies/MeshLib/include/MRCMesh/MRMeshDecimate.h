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
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_QuadraticForm3f MR_QuadraticForm3f; // Defined in `#include <MRCMesh/MRQuadraticForm.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Vector_MR_QuadraticForm3f_MR_VertId MR_Vector_MR_QuadraticForm3f_MR_VertId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId.h>`.
typedef struct MR_std_function_bool_from_MR_EdgeId_const_MR_Vector3f_ref MR_std_function_bool_from_MR_EdgeId_const_MR_Vector3f_ref; // Defined in `#include <MRCMisc/std_function_bool_from_MR_EdgeId_const_MR_Vector3f_ref.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_function_void_from_MR_EdgeId_MR_EdgeId MR_std_function_void_from_MR_EdgeId_MR_EdgeId; // Defined in `#include <MRCMisc/std_function_void_from_MR_EdgeId_MR_EdgeId.h>`.
typedef struct MR_std_function_void_from_MR_UndirectedEdgeId_float_ref_MR_Vector3f_ref MR_std_function_void_from_MR_UndirectedEdgeId_float_ref_MR_Vector3f_ref; // Defined in `#include <MRCMisc/std_function_void_from_MR_UndirectedEdgeId_float_ref_MR_Vector3f_ref.h>`.
typedef struct MR_std_vector_MR_FaceBitSet MR_std_vector_MR_FaceBitSet; // Defined in `#include <MRCMisc/std_vector_MR_FaceBitSet.h>`.


/// Defines the order of edge collapses inside Decimate algorithm
typedef enum MR_DecimateStrategy
{
    // the next edge to collapse will be the one that introduced minimal error to the surface
    MR_DecimateStrategy_MinimizeError = 0,
    // the next edge to collapse will be the shortest one
    MR_DecimateStrategy_ShortestEdgeFirst = 1,
} MR_DecimateStrategy;

/**
* \struct MR::DecimateSettings
* \brief Parameters structure for MR::decimateMesh
*
*
* \sa \ref decimateMesh
*/
/// Generated from class `MR::DecimateSettings`.
typedef struct MR_DecimateSettings MR_DecimateSettings;

/**
* \struct MR::DecimateResult
* \brief Results of MR::decimateMesh
*
*
* \sa \ref decimateMesh
* \sa \ref decimateParallelMesh
* \sa \ref resolveMeshDegenerations
*/
/// Generated from class `MR::DecimateResult`.
typedef struct MR_DecimateResult MR_DecimateResult;

/// Generated from class `MR::ResolveMeshDegenSettings`.
typedef struct MR_ResolveMeshDegenSettings MR_ResolveMeshDegenSettings;

/// Generated from class `MR::RemeshSettings`.
typedef struct MR_RemeshSettings MR_RemeshSettings;

/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `strategy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_DecimateStrategy *MR_DecimateSettings_Get_strategy(const MR_DecimateSettings *_this);

/// Modifies a member variable of class `MR::DecimateSettings` named `strategy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_strategy(MR_DecimateSettings *_this, MR_DecimateStrategy value);

/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `strategy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DecimateStrategy *MR_DecimateSettings_GetMutable_strategy(MR_DecimateSettings *_this);

/// for DecimateStrategy::MinimizeError:
///   stop the decimation as soon as the estimated distance deviation from the original mesh is more than this value
/// for DecimateStrategy::ShortestEdgeFirst only:
///   stop the decimation as soon as the shortest edge in the mesh is greater than this value
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `maxError`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DecimateSettings_Get_maxError(const MR_DecimateSettings *_this);

/// for DecimateStrategy::MinimizeError:
///   stop the decimation as soon as the estimated distance deviation from the original mesh is more than this value
/// for DecimateStrategy::ShortestEdgeFirst only:
///   stop the decimation as soon as the shortest edge in the mesh is greater than this value
/// Modifies a member variable of class `MR::DecimateSettings` named `maxError`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_maxError(MR_DecimateSettings *_this, float value);

/// for DecimateStrategy::MinimizeError:
///   stop the decimation as soon as the estimated distance deviation from the original mesh is more than this value
/// for DecimateStrategy::ShortestEdgeFirst only:
///   stop the decimation as soon as the shortest edge in the mesh is greater than this value
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `maxError`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DecimateSettings_GetMutable_maxError(MR_DecimateSettings *_this);

/// Maximal possible edge length created during decimation
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `maxEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DecimateSettings_Get_maxEdgeLen(const MR_DecimateSettings *_this);

/// Maximal possible edge length created during decimation
/// Modifies a member variable of class `MR::DecimateSettings` named `maxEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_maxEdgeLen(MR_DecimateSettings *_this, float value);

/// Maximal possible edge length created during decimation
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `maxEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DecimateSettings_GetMutable_maxEdgeLen(MR_DecimateSettings *_this);

/// Maximal shift of a boundary during one edge collapse
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `maxBdShift`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DecimateSettings_Get_maxBdShift(const MR_DecimateSettings *_this);

/// Maximal shift of a boundary during one edge collapse
/// Modifies a member variable of class `MR::DecimateSettings` named `maxBdShift`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_maxBdShift(MR_DecimateSettings *_this, float value);

/// Maximal shift of a boundary during one edge collapse
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `maxBdShift`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DecimateSettings_GetMutable_maxBdShift(MR_DecimateSettings *_this);

/// Maximal possible aspect ratio of a triangle introduced during decimation
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `maxTriangleAspectRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DecimateSettings_Get_maxTriangleAspectRatio(const MR_DecimateSettings *_this);

/// Maximal possible aspect ratio of a triangle introduced during decimation
/// Modifies a member variable of class `MR::DecimateSettings` named `maxTriangleAspectRatio`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_maxTriangleAspectRatio(MR_DecimateSettings *_this, float value);

/// Maximal possible aspect ratio of a triangle introduced during decimation
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `maxTriangleAspectRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DecimateSettings_GetMutable_maxTriangleAspectRatio(MR_DecimateSettings *_this);

/// the algorithm will ignore dihedral angle check if one of triangles had aspect ratio equal or more than this value;
/// and the algorithm will permit temporary increase in aspect ratio after collapse, if before collapse one of the triangles had larger aspect ratio
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `criticalTriAspectRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DecimateSettings_Get_criticalTriAspectRatio(const MR_DecimateSettings *_this);

/// the algorithm will ignore dihedral angle check if one of triangles had aspect ratio equal or more than this value;
/// and the algorithm will permit temporary increase in aspect ratio after collapse, if before collapse one of the triangles had larger aspect ratio
/// Modifies a member variable of class `MR::DecimateSettings` named `criticalTriAspectRatio`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_criticalTriAspectRatio(MR_DecimateSettings *_this, float value);

/// the algorithm will ignore dihedral angle check if one of triangles had aspect ratio equal or more than this value;
/// and the algorithm will permit temporary increase in aspect ratio after collapse, if before collapse one of the triangles had larger aspect ratio
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `criticalTriAspectRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DecimateSettings_GetMutable_criticalTriAspectRatio(MR_DecimateSettings *_this);

/// edges not longer than this value will be collapsed even if it results in appearance of a triangle with high aspect ratio
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `tinyEdgeLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DecimateSettings_Get_tinyEdgeLength(const MR_DecimateSettings *_this);

/// edges not longer than this value will be collapsed even if it results in appearance of a triangle with high aspect ratio
/// Modifies a member variable of class `MR::DecimateSettings` named `tinyEdgeLength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_tinyEdgeLength(MR_DecimateSettings *_this, float value);

/// edges not longer than this value will be collapsed even if it results in appearance of a triangle with high aspect ratio
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `tinyEdgeLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DecimateSettings_GetMutable_tinyEdgeLength(MR_DecimateSettings *_this);

/// Small stabilizer is important to achieve good results on completely planar mesh parts,
/// if your mesh is not-planer everywhere, then you can set it to zero
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `stabilizer`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DecimateSettings_Get_stabilizer(const MR_DecimateSettings *_this);

/// Small stabilizer is important to achieve good results on completely planar mesh parts,
/// if your mesh is not-planer everywhere, then you can set it to zero
/// Modifies a member variable of class `MR::DecimateSettings` named `stabilizer`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_stabilizer(MR_DecimateSettings *_this, float value);

/// Small stabilizer is important to achieve good results on completely planar mesh parts,
/// if your mesh is not-planer everywhere, then you can set it to zero
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `stabilizer`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DecimateSettings_GetMutable_stabilizer(MR_DecimateSettings *_this);

/// if false, then quadratic error metric is equal to the sum of distances to the planes of original mesh triangles;
/// if true, then the sum is weighted, and the weight is equal to the angle of adjacent triangle at the vertex divided on PI (to get one after summing all 3 vertices of the triangle)
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `angleWeightedDistToPlane`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_DecimateSettings_Get_angleWeightedDistToPlane(const MR_DecimateSettings *_this);

/// if false, then quadratic error metric is equal to the sum of distances to the planes of original mesh triangles;
/// if true, then the sum is weighted, and the weight is equal to the angle of adjacent triangle at the vertex divided on PI (to get one after summing all 3 vertices of the triangle)
/// Modifies a member variable of class `MR::DecimateSettings` named `angleWeightedDistToPlane`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_angleWeightedDistToPlane(MR_DecimateSettings *_this, bool value);

/// if false, then quadratic error metric is equal to the sum of distances to the planes of original mesh triangles;
/// if true, then the sum is weighted, and the weight is equal to the angle of adjacent triangle at the vertex divided on PI (to get one after summing all 3 vertices of the triangle)
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `angleWeightedDistToPlane`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_DecimateSettings_GetMutable_angleWeightedDistToPlane(MR_DecimateSettings *_this);

/// if true then after each edge collapse the position of remaining vertex is optimized to
/// minimize local shape change, if false then the edge is collapsed in one of its vertices, which keeps its position
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `optimizeVertexPos`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_DecimateSettings_Get_optimizeVertexPos(const MR_DecimateSettings *_this);

/// if true then after each edge collapse the position of remaining vertex is optimized to
/// minimize local shape change, if false then the edge is collapsed in one of its vertices, which keeps its position
/// Modifies a member variable of class `MR::DecimateSettings` named `optimizeVertexPos`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_optimizeVertexPos(MR_DecimateSettings *_this, bool value);

/// if true then after each edge collapse the position of remaining vertex is optimized to
/// minimize local shape change, if false then the edge is collapsed in one of its vertices, which keeps its position
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `optimizeVertexPos`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_DecimateSettings_GetMutable_optimizeVertexPos(MR_DecimateSettings *_this);

/// Limit on the number of deleted vertices
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `maxDeletedVertices`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_DecimateSettings_Get_maxDeletedVertices(const MR_DecimateSettings *_this);

/// Limit on the number of deleted vertices
/// Modifies a member variable of class `MR::DecimateSettings` named `maxDeletedVertices`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_maxDeletedVertices(MR_DecimateSettings *_this, int32_t value);

/// Limit on the number of deleted vertices
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `maxDeletedVertices`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_DecimateSettings_GetMutable_maxDeletedVertices(MR_DecimateSettings *_this);

/// Limit on the number of deleted faces
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `maxDeletedFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_DecimateSettings_Get_maxDeletedFaces(const MR_DecimateSettings *_this);

/// Limit on the number of deleted faces
/// Modifies a member variable of class `MR::DecimateSettings` named `maxDeletedFaces`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_maxDeletedFaces(MR_DecimateSettings *_this, int32_t value);

/// Limit on the number of deleted faces
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `maxDeletedFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_DecimateSettings_GetMutable_maxDeletedFaces(MR_DecimateSettings *_this);

/// Region on mesh to be decimated, it is updated during the operation
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *const *MR_DecimateSettings_Get_region(const MR_DecimateSettings *_this);

/// Region on mesh to be decimated, it is updated during the operation
/// Modifies a member variable of class `MR::DecimateSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_region(MR_DecimateSettings *_this, MR_FaceBitSet *value);

/// Region on mesh to be decimated, it is updated during the operation
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet **MR_DecimateSettings_GetMutable_region(MR_DecimateSettings *_this);

/// Edges specified by this bit-set will never be flipped, but they can be collapsed or replaced during collapse of nearby edges so it is updated during the operation
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `notFlippable`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *const *MR_DecimateSettings_Get_notFlippable(const MR_DecimateSettings *_this);

/// Edges specified by this bit-set will never be flipped, but they can be collapsed or replaced during collapse of nearby edges so it is updated during the operation
/// Modifies a member variable of class `MR::DecimateSettings` named `notFlippable`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_notFlippable(MR_DecimateSettings *_this, MR_UndirectedEdgeBitSet *value);

/// Edges specified by this bit-set will never be flipped, but they can be collapsed or replaced during collapse of nearby edges so it is updated during the operation
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `notFlippable`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet **MR_DecimateSettings_GetMutable_notFlippable(MR_DecimateSettings *_this);

/// Whether to allow collapse of edges incident to notFlippable edges,
/// which can move vertices of notFlippable edges unless they are fixed
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `collapseNearNotFlippable`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_DecimateSettings_Get_collapseNearNotFlippable(const MR_DecimateSettings *_this);

/// Whether to allow collapse of edges incident to notFlippable edges,
/// which can move vertices of notFlippable edges unless they are fixed
/// Modifies a member variable of class `MR::DecimateSettings` named `collapseNearNotFlippable`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_collapseNearNotFlippable(MR_DecimateSettings *_this, bool value);

/// Whether to allow collapse of edges incident to notFlippable edges,
/// which can move vertices of notFlippable edges unless they are fixed
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `collapseNearNotFlippable`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_DecimateSettings_GetMutable_collapseNearNotFlippable(MR_DecimateSettings *_this);

/// If pointer is not null, then only edges from here can be collapsed (and some nearby edges can disappear);
/// the algorithm updates this map during collapses, removing or replacing elements
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `edgesToCollapse`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *const *MR_DecimateSettings_Get_edgesToCollapse(const MR_DecimateSettings *_this);

/// If pointer is not null, then only edges from here can be collapsed (and some nearby edges can disappear);
/// the algorithm updates this map during collapses, removing or replacing elements
/// Modifies a member variable of class `MR::DecimateSettings` named `edgesToCollapse`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_edgesToCollapse(MR_DecimateSettings *_this, MR_UndirectedEdgeBitSet *value);

/// If pointer is not null, then only edges from here can be collapsed (and some nearby edges can disappear);
/// the algorithm updates this map during collapses, removing or replacing elements
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `edgesToCollapse`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet **MR_DecimateSettings_GetMutable_edgesToCollapse(MR_DecimateSettings *_this);

/// if an edge present as a key in this map is flipped or collapsed, then same happens to the value-edge (with same collapse position);
/// the algorithm updates this map during collapses, removing or replacing elements
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `twinMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *const *MR_DecimateSettings_Get_twinMap(const MR_DecimateSettings *_this);

/// if an edge present as a key in this map is flipped or collapsed, then same happens to the value-edge (with same collapse position);
/// the algorithm updates this map during collapses, removing or replacing elements
/// Modifies a member variable of class `MR::DecimateSettings` named `twinMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_twinMap(MR_DecimateSettings *_this, MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *value);

/// if an edge present as a key in this map is flipped or collapsed, then same happens to the value-edge (with same collapse position);
/// the algorithm updates this map during collapses, removing or replacing elements
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `twinMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId **MR_DecimateSettings_GetMutable_twinMap(MR_DecimateSettings *_this);

/// Whether to allow collapsing or flipping edges having at least one vertex on (region) boundary
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `touchNearBdEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_DecimateSettings_Get_touchNearBdEdges(const MR_DecimateSettings *_this);

/// Whether to allow collapsing or flipping edges having at least one vertex on (region) boundary
/// Modifies a member variable of class `MR::DecimateSettings` named `touchNearBdEdges`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_touchNearBdEdges(MR_DecimateSettings *_this, bool value);

/// Whether to allow collapsing or flipping edges having at least one vertex on (region) boundary
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `touchNearBdEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_DecimateSettings_GetMutable_touchNearBdEdges(MR_DecimateSettings *_this);

/// touchBdVerts=true: allow moving and eliminating boundary vertices during edge collapses;
/// touchBdVerts=false: allow only collapsing an edge having only one boundary vertex in that vertex, so position and count of boundary vertices do not change;
/// this setting is ignored if touchNearBdEdges=false
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `touchBdVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_DecimateSettings_Get_touchBdVerts(const MR_DecimateSettings *_this);

/// touchBdVerts=true: allow moving and eliminating boundary vertices during edge collapses;
/// touchBdVerts=false: allow only collapsing an edge having only one boundary vertex in that vertex, so position and count of boundary vertices do not change;
/// this setting is ignored if touchNearBdEdges=false
/// Modifies a member variable of class `MR::DecimateSettings` named `touchBdVerts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_touchBdVerts(MR_DecimateSettings *_this, bool value);

/// touchBdVerts=true: allow moving and eliminating boundary vertices during edge collapses;
/// touchBdVerts=false: allow only collapsing an edge having only one boundary vertex in that vertex, so position and count of boundary vertices do not change;
/// this setting is ignored if touchNearBdEdges=false
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `touchBdVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_DecimateSettings_GetMutable_touchBdVerts(MR_DecimateSettings *_this);

/// if touchNearBdEdges=false or touchBdVerts=false then the algorithm needs to know about all boundary vertices;
/// if the pointer is not null then boundary vertices detection is replaced with testing values in this bit-set;
/// the algorithm updates this set if it packs the mesh
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `bdVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *const *MR_DecimateSettings_Get_bdVerts(const MR_DecimateSettings *_this);

/// if touchNearBdEdges=false or touchBdVerts=false then the algorithm needs to know about all boundary vertices;
/// if the pointer is not null then boundary vertices detection is replaced with testing values in this bit-set;
/// the algorithm updates this set if it packs the mesh
/// Modifies a member variable of class `MR::DecimateSettings` named `bdVerts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_bdVerts(MR_DecimateSettings *_this, MR_VertBitSet *value);

/// if touchNearBdEdges=false or touchBdVerts=false then the algorithm needs to know about all boundary vertices;
/// if the pointer is not null then boundary vertices detection is replaced with testing values in this bit-set;
/// the algorithm updates this set if it packs the mesh
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `bdVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet **MR_DecimateSettings_GetMutable_bdVerts(MR_DecimateSettings *_this);

/// Permit edge flips (in addition to collapsing) to improve Delone quality of the mesh
/// if it does not change dihedral angle more than on this value (negative value prohibits any edge flips)
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `maxAngleChange`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DecimateSettings_Get_maxAngleChange(const MR_DecimateSettings *_this);

/// Permit edge flips (in addition to collapsing) to improve Delone quality of the mesh
/// if it does not change dihedral angle more than on this value (negative value prohibits any edge flips)
/// Modifies a member variable of class `MR::DecimateSettings` named `maxAngleChange`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_maxAngleChange(MR_DecimateSettings *_this, float value);

/// Permit edge flips (in addition to collapsing) to improve Delone quality of the mesh
/// if it does not change dihedral angle more than on this value (negative value prohibits any edge flips)
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `maxAngleChange`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DecimateSettings_GetMutable_maxAngleChange(MR_DecimateSettings *_this);

/**
* \brief The user can provide this optional callback that is invoked immediately before edge collapse;
* \details It receives the edge being collapsed: its destination vertex will disappear,
* and its origin vertex will get new position (provided as the second argument) after collapse;
* If the callback returns false, then the collapse is prohibited
*/
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `preCollapse`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_MR_EdgeId_const_MR_Vector3f_ref *MR_DecimateSettings_Get_preCollapse(const MR_DecimateSettings *_this);

/**
* \brief The user can provide this optional callback that is invoked immediately before edge collapse;
* \details It receives the edge being collapsed: its destination vertex will disappear,
* and its origin vertex will get new position (provided as the second argument) after collapse;
* If the callback returns false, then the collapse is prohibited
*/
/// Modifies a member variable of class `MR::DecimateSettings` named `preCollapse`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_preCollapse(MR_DecimateSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_MR_EdgeId_const_MR_Vector3f_ref *value);

/**
* \brief The user can provide this optional callback that is invoked immediately before edge collapse;
* \details It receives the edge being collapsed: its destination vertex will disappear,
* and its origin vertex will get new position (provided as the second argument) after collapse;
* If the callback returns false, then the collapse is prohibited
*/
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `preCollapse`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_MR_EdgeId_const_MR_Vector3f_ref *MR_DecimateSettings_GetMutable_preCollapse(MR_DecimateSettings *_this);

/**
* \brief The user can provide this optional callback for adjusting error introduced by this
* edge collapse and the collapse position.
* \details On input the callback gets the squared error and position computed by standard means,
* and callback can modify any of them. The larger the error, the later this edge will be collapsed.
* This callback can be called from many threads in parallel and must be thread-safe.
* This callback can be called many times for each edge before real collapsing, and it is important to make the same adjustment.
*/
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `adjustCollapse`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_void_from_MR_UndirectedEdgeId_float_ref_MR_Vector3f_ref *MR_DecimateSettings_Get_adjustCollapse(const MR_DecimateSettings *_this);

/**
* \brief The user can provide this optional callback for adjusting error introduced by this
* edge collapse and the collapse position.
* \details On input the callback gets the squared error and position computed by standard means,
* and callback can modify any of them. The larger the error, the later this edge will be collapsed.
* This callback can be called from many threads in parallel and must be thread-safe.
* This callback can be called many times for each edge before real collapsing, and it is important to make the same adjustment.
*/
/// Modifies a member variable of class `MR::DecimateSettings` named `adjustCollapse`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_adjustCollapse(MR_DecimateSettings *_this, MR_PassBy value_pass_by, MR_std_function_void_from_MR_UndirectedEdgeId_float_ref_MR_Vector3f_ref *value);

/**
* \brief The user can provide this optional callback for adjusting error introduced by this
* edge collapse and the collapse position.
* \details On input the callback gets the squared error and position computed by standard means,
* and callback can modify any of them. The larger the error, the later this edge will be collapsed.
* This callback can be called from many threads in parallel and must be thread-safe.
* This callback can be called many times for each edge before real collapsing, and it is important to make the same adjustment.
*/
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `adjustCollapse`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_void_from_MR_UndirectedEdgeId_float_ref_MR_Vector3f_ref *MR_DecimateSettings_GetMutable_adjustCollapse(MR_DecimateSettings *_this);

/// this function is called each time edge (del) is deleted;
/// if valid (rem) is given then dest(del) = dest(rem) and their origins are in different ends of collapsing edge, (rem) shall take the place of (del)
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `onEdgeDel`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_void_from_MR_EdgeId_MR_EdgeId *MR_DecimateSettings_Get_onEdgeDel(const MR_DecimateSettings *_this);

/// this function is called each time edge (del) is deleted;
/// if valid (rem) is given then dest(del) = dest(rem) and their origins are in different ends of collapsing edge, (rem) shall take the place of (del)
/// Modifies a member variable of class `MR::DecimateSettings` named `onEdgeDel`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_onEdgeDel(MR_DecimateSettings *_this, MR_PassBy value_pass_by, MR_std_function_void_from_MR_EdgeId_MR_EdgeId *value);

/// this function is called each time edge (del) is deleted;
/// if valid (rem) is given then dest(del) = dest(rem) and their origins are in different ends of collapsing edge, (rem) shall take the place of (del)
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `onEdgeDel`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_void_from_MR_EdgeId_MR_EdgeId *MR_DecimateSettings_GetMutable_onEdgeDel(MR_DecimateSettings *_this);

/**
* \brief  If not null, then vertex quadratic forms are stored there;
* if on input the vector is not empty then initialization is skipped in favor of values from there;
* on output: quadratic form for each remaining vertex is returned there
*/
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `vertForms`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector_MR_QuadraticForm3f_MR_VertId *const *MR_DecimateSettings_Get_vertForms(const MR_DecimateSettings *_this);

/**
* \brief  If not null, then vertex quadratic forms are stored there;
* if on input the vector is not empty then initialization is skipped in favor of values from there;
* on output: quadratic form for each remaining vertex is returned there
*/
/// Modifies a member variable of class `MR::DecimateSettings` named `vertForms`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_vertForms(MR_DecimateSettings *_this, MR_Vector_MR_QuadraticForm3f_MR_VertId *value);

/**
* \brief  If not null, then vertex quadratic forms are stored there;
* if on input the vector is not empty then initialization is skipped in favor of values from there;
* on output: quadratic form for each remaining vertex is returned there
*/
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `vertForms`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector_MR_QuadraticForm3f_MR_VertId **MR_DecimateSettings_GetMutable_vertForms(MR_DecimateSettings *_this);

///  whether to pack mesh at the end
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `packMesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_DecimateSettings_Get_packMesh(const MR_DecimateSettings *_this);

///  whether to pack mesh at the end
/// Modifies a member variable of class `MR::DecimateSettings` named `packMesh`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_packMesh(MR_DecimateSettings *_this, bool value);

///  whether to pack mesh at the end
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `packMesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_DecimateSettings_GetMutable_packMesh(MR_DecimateSettings *_this);

/// callback to report algorithm progress and cancel it by user request
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `progressCallback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_DecimateSettings_Get_progressCallback(const MR_DecimateSettings *_this);

/// callback to report algorithm progress and cancel it by user request
/// Modifies a member variable of class `MR::DecimateSettings` named `progressCallback`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_progressCallback(MR_DecimateSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// callback to report algorithm progress and cancel it by user request
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `progressCallback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_DecimateSettings_GetMutable_progressCallback(MR_DecimateSettings *_this);

/// If this value is more than 1, then virtually subdivides the mesh on given number of parts to process them in parallel (using many threads);
/// IMPORTANT: please call mesh.packOptimally() before calling decimating with subdivideParts > 1, otherwise performance will be bad
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `subdivideParts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_DecimateSettings_Get_subdivideParts(const MR_DecimateSettings *_this);

/// If this value is more than 1, then virtually subdivides the mesh on given number of parts to process them in parallel (using many threads);
/// IMPORTANT: please call mesh.packOptimally() before calling decimating with subdivideParts > 1, otherwise performance will be bad
/// Modifies a member variable of class `MR::DecimateSettings` named `subdivideParts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_subdivideParts(MR_DecimateSettings *_this, int32_t value);

/// If this value is more than 1, then virtually subdivides the mesh on given number of parts to process them in parallel (using many threads);
/// IMPORTANT: please call mesh.packOptimally() before calling decimating with subdivideParts > 1, otherwise performance will be bad
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `subdivideParts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_DecimateSettings_GetMutable_subdivideParts(MR_DecimateSettings *_this);

/// After parallel decimation of all mesh parts is done, whether to perform final decimation of whole mesh region
/// to eliminate small edges near the border of individual parts
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `decimateBetweenParts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_DecimateSettings_Get_decimateBetweenParts(const MR_DecimateSettings *_this);

/// After parallel decimation of all mesh parts is done, whether to perform final decimation of whole mesh region
/// to eliminate small edges near the border of individual parts
/// Modifies a member variable of class `MR::DecimateSettings` named `decimateBetweenParts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_decimateBetweenParts(MR_DecimateSettings *_this, bool value);

/// After parallel decimation of all mesh parts is done, whether to perform final decimation of whole mesh region
/// to eliminate small edges near the border of individual parts
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `decimateBetweenParts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_DecimateSettings_GetMutable_decimateBetweenParts(MR_DecimateSettings *_this);

/// if not null, then it contains the faces of each subdivision part on input, which must not overlap,
/// and after decimation of all parts, the region inside each part is put here;
/// decimateBetweenParts=true or packMesh=true are not compatible with this option
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `partFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_FaceBitSet *const *MR_DecimateSettings_Get_partFaces(const MR_DecimateSettings *_this);

/// if not null, then it contains the faces of each subdivision part on input, which must not overlap,
/// and after decimation of all parts, the region inside each part is put here;
/// decimateBetweenParts=true or packMesh=true are not compatible with this option
/// Modifies a member variable of class `MR::DecimateSettings` named `partFaces`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_partFaces(MR_DecimateSettings *_this, MR_std_vector_MR_FaceBitSet *value);

/// if not null, then it contains the faces of each subdivision part on input, which must not overlap,
/// and after decimation of all parts, the region inside each part is put here;
/// decimateBetweenParts=true or packMesh=true are not compatible with this option
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `partFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_FaceBitSet **MR_DecimateSettings_GetMutable_partFaces(MR_DecimateSettings *_this);

/// minimum number of faces in one subdivision part for ( subdivideParts > 1 ) mode
/// Returns a pointer to a member variable of class `MR::DecimateSettings` named `minFacesInPart`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_DecimateSettings_Get_minFacesInPart(const MR_DecimateSettings *_this);

/// minimum number of faces in one subdivision part for ( subdivideParts > 1 ) mode
/// Modifies a member variable of class `MR::DecimateSettings` named `minFacesInPart`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateSettings_Set_minFacesInPart(MR_DecimateSettings *_this, int32_t value);

/// minimum number of faces in one subdivision part for ( subdivideParts > 1 ) mode
/// Returns a mutable pointer to a member variable of class `MR::DecimateSettings` named `minFacesInPart`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_DecimateSettings_GetMutable_minFacesInPart(MR_DecimateSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DecimateSettings_Destroy()` to free it when you're done using it.
MRC_API MR_DecimateSettings *MR_DecimateSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_DecimateSettings_DestroyArray()`.
/// Use `MR_DecimateSettings_OffsetMutablePtr()` and `MR_DecimateSettings_OffsetPtr()` to access the array elements.
MRC_API MR_DecimateSettings *MR_DecimateSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::DecimateSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DecimateSettings_Destroy()` to free it when you're done using it.
MRC_API MR_DecimateSettings *MR_DecimateSettings_ConstructFrom(MR_DecimateStrategy strategy, float maxError, float maxEdgeLen, float maxBdShift, float maxTriangleAspectRatio, float criticalTriAspectRatio, float tinyEdgeLength, float stabilizer, bool angleWeightedDistToPlane, bool optimizeVertexPos, int32_t maxDeletedVertices, int32_t maxDeletedFaces, MR_FaceBitSet *region, MR_UndirectedEdgeBitSet *notFlippable, bool collapseNearNotFlippable, MR_UndirectedEdgeBitSet *edgesToCollapse, MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *twinMap, bool touchNearBdEdges, bool touchBdVerts, MR_VertBitSet *bdVerts, float maxAngleChange, MR_PassBy preCollapse_pass_by, MR_std_function_bool_from_MR_EdgeId_const_MR_Vector3f_ref *preCollapse, MR_PassBy adjustCollapse_pass_by, MR_std_function_void_from_MR_UndirectedEdgeId_float_ref_MR_Vector3f_ref *adjustCollapse, MR_PassBy onEdgeDel_pass_by, MR_std_function_void_from_MR_EdgeId_MR_EdgeId *onEdgeDel, MR_Vector_MR_QuadraticForm3f_MR_VertId *vertForms, bool packMesh, MR_PassBy progressCallback_pass_by, MR_std_function_bool_from_float *progressCallback, int32_t subdivideParts, bool decimateBetweenParts, MR_std_vector_MR_FaceBitSet *partFaces, int32_t minFacesInPart);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_DecimateSettings *MR_DecimateSettings_OffsetPtr(const MR_DecimateSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_DecimateSettings *MR_DecimateSettings_OffsetMutablePtr(MR_DecimateSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::DecimateSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DecimateSettings_Destroy()` to free it when you're done using it.
MRC_API MR_DecimateSettings *MR_DecimateSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_DecimateSettings *_other);

/// Destroys a heap-allocated instance of `MR_DecimateSettings`. Does nothing if the pointer is null.
MRC_API void MR_DecimateSettings_Destroy(const MR_DecimateSettings *_this);

/// Destroys a heap-allocated array of `MR_DecimateSettings`. Does nothing if the pointer is null.
MRC_API void MR_DecimateSettings_DestroyArray(const MR_DecimateSettings *_this);

/// Generated from a method of class `MR::DecimateSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DecimateSettings *MR_DecimateSettings_AssignFromAnother(MR_DecimateSettings *_this, MR_PassBy _other_pass_by, MR_DecimateSettings *_other);

///< Number deleted verts. Same as the number of performed collapses
/// Returns a pointer to a member variable of class `MR::DecimateResult` named `vertsDeleted`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_DecimateResult_Get_vertsDeleted(const MR_DecimateResult *_this);

///< Number deleted verts. Same as the number of performed collapses
/// Modifies a member variable of class `MR::DecimateResult` named `vertsDeleted`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateResult_Set_vertsDeleted(MR_DecimateResult *_this, int32_t value);

///< Number deleted verts. Same as the number of performed collapses
/// Returns a mutable pointer to a member variable of class `MR::DecimateResult` named `vertsDeleted`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_DecimateResult_GetMutable_vertsDeleted(MR_DecimateResult *_this);

///< Number deleted faces
/// Returns a pointer to a member variable of class `MR::DecimateResult` named `facesDeleted`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_DecimateResult_Get_facesDeleted(const MR_DecimateResult *_this);

///< Number deleted faces
/// Modifies a member variable of class `MR::DecimateResult` named `facesDeleted`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateResult_Set_facesDeleted(MR_DecimateResult *_this, int32_t value);

///< Number deleted faces
/// Returns a mutable pointer to a member variable of class `MR::DecimateResult` named `facesDeleted`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_DecimateResult_GetMutable_facesDeleted(MR_DecimateResult *_this);

/// for DecimateStrategy::MinimizeError:
///    estimated distance deviation of decimated mesh from the original mesh
/// for DecimateStrategy::ShortestEdgeFirst:
///    the shortest remaining edge in the mesh
/// Returns a pointer to a member variable of class `MR::DecimateResult` named `errorIntroduced`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DecimateResult_Get_errorIntroduced(const MR_DecimateResult *_this);

/// for DecimateStrategy::MinimizeError:
///    estimated distance deviation of decimated mesh from the original mesh
/// for DecimateStrategy::ShortestEdgeFirst:
///    the shortest remaining edge in the mesh
/// Modifies a member variable of class `MR::DecimateResult` named `errorIntroduced`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateResult_Set_errorIntroduced(MR_DecimateResult *_this, float value);

/// for DecimateStrategy::MinimizeError:
///    estimated distance deviation of decimated mesh from the original mesh
/// for DecimateStrategy::ShortestEdgeFirst:
///    the shortest remaining edge in the mesh
/// Returns a mutable pointer to a member variable of class `MR::DecimateResult` named `errorIntroduced`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DecimateResult_GetMutable_errorIntroduced(MR_DecimateResult *_this);

/// whether the algorithm was cancelled by the callback
/// Returns a pointer to a member variable of class `MR::DecimateResult` named `cancelled`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_DecimateResult_Get_cancelled(const MR_DecimateResult *_this);

/// whether the algorithm was cancelled by the callback
/// Modifies a member variable of class `MR::DecimateResult` named `cancelled`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimateResult_Set_cancelled(MR_DecimateResult *_this, bool value);

/// whether the algorithm was cancelled by the callback
/// Returns a mutable pointer to a member variable of class `MR::DecimateResult` named `cancelled`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_DecimateResult_GetMutable_cancelled(MR_DecimateResult *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DecimateResult_Destroy()` to free it when you're done using it.
MRC_API MR_DecimateResult *MR_DecimateResult_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_DecimateResult_DestroyArray()`.
/// Use `MR_DecimateResult_OffsetMutablePtr()` and `MR_DecimateResult_OffsetPtr()` to access the array elements.
MRC_API MR_DecimateResult *MR_DecimateResult_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::DecimateResult` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DecimateResult_Destroy()` to free it when you're done using it.
MRC_API MR_DecimateResult *MR_DecimateResult_ConstructFrom(int32_t vertsDeleted, int32_t facesDeleted, float errorIntroduced, bool cancelled);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_DecimateResult *MR_DecimateResult_OffsetPtr(const MR_DecimateResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_DecimateResult *MR_DecimateResult_OffsetMutablePtr(MR_DecimateResult *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::DecimateResult`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DecimateResult_Destroy()` to free it when you're done using it.
MRC_API MR_DecimateResult *MR_DecimateResult_ConstructFromAnother(const MR_DecimateResult *_other);

/// Destroys a heap-allocated instance of `MR_DecimateResult`. Does nothing if the pointer is null.
MRC_API void MR_DecimateResult_Destroy(const MR_DecimateResult *_this);

/// Destroys a heap-allocated array of `MR_DecimateResult`. Does nothing if the pointer is null.
MRC_API void MR_DecimateResult_DestroyArray(const MR_DecimateResult *_this);

/// Generated from a method of class `MR::DecimateResult` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DecimateResult *MR_DecimateResult_AssignFromAnother(MR_DecimateResult *_this, const MR_DecimateResult *_other);

/**
* \brief Collapse edges in mesh region according to the settings
*
* \snippet cpp-examples/MeshDecimate.dox.cpp 0
*
* \image html decimate/decimate_before.png "Before" width = 350cm
* \image html decimate/decimate_after.png "After" width = 350cm
*/
/// Generated from function `MR::decimateMesh`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DecimateResult_Destroy()` to free it when you're done using it.
MRC_API MR_DecimateResult *MR_decimateMesh(MR_Mesh *mesh, const MR_DecimateSettings *settings);

/**
* \brief Computes quadratic form at given vertex of the initial surface before decimation
*
*/
/// Generated from function `MR::computeFormAtVertex`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `creases` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_QuadraticForm3f_Destroy()` to free it when you're done using it.
MRC_API MR_QuadraticForm3f *MR_computeFormAtVertex(const MR_MeshPart *mp, MR_VertId v, float stabilizer, bool angleWeigted, const MR_UndirectedEdgeBitSet *creases);

/**
* \brief Computes quadratic forms at every vertex of mesh part before decimation
*
*/
/// Generated from function `MR::computeFormsAtVertices`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `creases` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Vector_MR_QuadraticForm3f_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_Vector_MR_QuadraticForm3f_MR_VertId *MR_computeFormsAtVertices(const MR_MeshPart *mp, float stabilizer, bool angleWeigted, const MR_UndirectedEdgeBitSet *creases);

/**
* \brief returns given subdivision part of all valid faces;
* parallel threads shall be able to safely modify these bits because they do not share any block with other parts
*
*/
/// Generated from function `MR::getSubdividePart`.
/// Parameter `valids` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_getSubdividePart(const MR_FaceBitSet *valids, MR_uint64_t subdivideParts, MR_uint64_t myPart);

/// maximum permitted deviation from the original surface
/// Returns a pointer to a member variable of class `MR::ResolveMeshDegenSettings` named `maxDeviation`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ResolveMeshDegenSettings_Get_maxDeviation(const MR_ResolveMeshDegenSettings *_this);

/// maximum permitted deviation from the original surface
/// Modifies a member variable of class `MR::ResolveMeshDegenSettings` named `maxDeviation`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ResolveMeshDegenSettings_Set_maxDeviation(MR_ResolveMeshDegenSettings *_this, float value);

/// maximum permitted deviation from the original surface
/// Returns a mutable pointer to a member variable of class `MR::ResolveMeshDegenSettings` named `maxDeviation`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ResolveMeshDegenSettings_GetMutable_maxDeviation(MR_ResolveMeshDegenSettings *_this);

/// edges not longer than this value will be collapsed ignoring normals and aspect ratio checks
/// Returns a pointer to a member variable of class `MR::ResolveMeshDegenSettings` named `tinyEdgeLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ResolveMeshDegenSettings_Get_tinyEdgeLength(const MR_ResolveMeshDegenSettings *_this);

/// edges not longer than this value will be collapsed ignoring normals and aspect ratio checks
/// Modifies a member variable of class `MR::ResolveMeshDegenSettings` named `tinyEdgeLength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ResolveMeshDegenSettings_Set_tinyEdgeLength(MR_ResolveMeshDegenSettings *_this, float value);

/// edges not longer than this value will be collapsed ignoring normals and aspect ratio checks
/// Returns a mutable pointer to a member variable of class `MR::ResolveMeshDegenSettings` named `tinyEdgeLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ResolveMeshDegenSettings_GetMutable_tinyEdgeLength(MR_ResolveMeshDegenSettings *_this);

/// Permit edge flips if it does not change dihedral angle more than on this value
/// Returns a pointer to a member variable of class `MR::ResolveMeshDegenSettings` named `maxAngleChange`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ResolveMeshDegenSettings_Get_maxAngleChange(const MR_ResolveMeshDegenSettings *_this);

/// Permit edge flips if it does not change dihedral angle more than on this value
/// Modifies a member variable of class `MR::ResolveMeshDegenSettings` named `maxAngleChange`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ResolveMeshDegenSettings_Set_maxAngleChange(MR_ResolveMeshDegenSettings *_this, float value);

/// Permit edge flips if it does not change dihedral angle more than on this value
/// Returns a mutable pointer to a member variable of class `MR::ResolveMeshDegenSettings` named `maxAngleChange`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ResolveMeshDegenSettings_GetMutable_maxAngleChange(MR_ResolveMeshDegenSettings *_this);

/// the algorithm will ignore dihedral angle check if one of triangles had aspect ratio equal or more than this value;
/// and the algorithm will permit temporary increase in aspect ratio after collapse, if before collapse one of the triangles had larger aspect ratio
/// Returns a pointer to a member variable of class `MR::ResolveMeshDegenSettings` named `criticalAspectRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ResolveMeshDegenSettings_Get_criticalAspectRatio(const MR_ResolveMeshDegenSettings *_this);

/// the algorithm will ignore dihedral angle check if one of triangles had aspect ratio equal or more than this value;
/// and the algorithm will permit temporary increase in aspect ratio after collapse, if before collapse one of the triangles had larger aspect ratio
/// Modifies a member variable of class `MR::ResolveMeshDegenSettings` named `criticalAspectRatio`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ResolveMeshDegenSettings_Set_criticalAspectRatio(MR_ResolveMeshDegenSettings *_this, float value);

/// the algorithm will ignore dihedral angle check if one of triangles had aspect ratio equal or more than this value;
/// and the algorithm will permit temporary increase in aspect ratio after collapse, if before collapse one of the triangles had larger aspect ratio
/// Returns a mutable pointer to a member variable of class `MR::ResolveMeshDegenSettings` named `criticalAspectRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ResolveMeshDegenSettings_GetMutable_criticalAspectRatio(MR_ResolveMeshDegenSettings *_this);

/// Small stabilizer is important to achieve good results on completely planar mesh parts,
/// if your mesh is not-planer everywhere, then you can set it to zero
/// Returns a pointer to a member variable of class `MR::ResolveMeshDegenSettings` named `stabilizer`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ResolveMeshDegenSettings_Get_stabilizer(const MR_ResolveMeshDegenSettings *_this);

/// Small stabilizer is important to achieve good results on completely planar mesh parts,
/// if your mesh is not-planer everywhere, then you can set it to zero
/// Modifies a member variable of class `MR::ResolveMeshDegenSettings` named `stabilizer`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ResolveMeshDegenSettings_Set_stabilizer(MR_ResolveMeshDegenSettings *_this, float value);

/// Small stabilizer is important to achieve good results on completely planar mesh parts,
/// if your mesh is not-planer everywhere, then you can set it to zero
/// Returns a mutable pointer to a member variable of class `MR::ResolveMeshDegenSettings` named `stabilizer`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ResolveMeshDegenSettings_GetMutable_stabilizer(MR_ResolveMeshDegenSettings *_this);

/// degenerations will be fixed only in given region, which is updated during the processing
/// Returns a pointer to a member variable of class `MR::ResolveMeshDegenSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *const *MR_ResolveMeshDegenSettings_Get_region(const MR_ResolveMeshDegenSettings *_this);

/// degenerations will be fixed only in given region, which is updated during the processing
/// Modifies a member variable of class `MR::ResolveMeshDegenSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ResolveMeshDegenSettings_Set_region(MR_ResolveMeshDegenSettings *_this, MR_FaceBitSet *value);

/// degenerations will be fixed only in given region, which is updated during the processing
/// Returns a mutable pointer to a member variable of class `MR::ResolveMeshDegenSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet **MR_ResolveMeshDegenSettings_GetMutable_region(MR_ResolveMeshDegenSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ResolveMeshDegenSettings_Destroy()` to free it when you're done using it.
MRC_API MR_ResolveMeshDegenSettings *MR_ResolveMeshDegenSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ResolveMeshDegenSettings_DestroyArray()`.
/// Use `MR_ResolveMeshDegenSettings_OffsetMutablePtr()` and `MR_ResolveMeshDegenSettings_OffsetPtr()` to access the array elements.
MRC_API MR_ResolveMeshDegenSettings *MR_ResolveMeshDegenSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::ResolveMeshDegenSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ResolveMeshDegenSettings_Destroy()` to free it when you're done using it.
MRC_API MR_ResolveMeshDegenSettings *MR_ResolveMeshDegenSettings_ConstructFrom(float maxDeviation, float tinyEdgeLength, float maxAngleChange, float criticalAspectRatio, float stabilizer, MR_FaceBitSet *region);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ResolveMeshDegenSettings *MR_ResolveMeshDegenSettings_OffsetPtr(const MR_ResolveMeshDegenSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ResolveMeshDegenSettings *MR_ResolveMeshDegenSettings_OffsetMutablePtr(MR_ResolveMeshDegenSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ResolveMeshDegenSettings`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ResolveMeshDegenSettings_Destroy()` to free it when you're done using it.
MRC_API MR_ResolveMeshDegenSettings *MR_ResolveMeshDegenSettings_ConstructFromAnother(const MR_ResolveMeshDegenSettings *_other);

/// Destroys a heap-allocated instance of `MR_ResolveMeshDegenSettings`. Does nothing if the pointer is null.
MRC_API void MR_ResolveMeshDegenSettings_Destroy(const MR_ResolveMeshDegenSettings *_this);

/// Destroys a heap-allocated array of `MR_ResolveMeshDegenSettings`. Does nothing if the pointer is null.
MRC_API void MR_ResolveMeshDegenSettings_DestroyArray(const MR_ResolveMeshDegenSettings *_this);

/// Generated from a method of class `MR::ResolveMeshDegenSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ResolveMeshDegenSettings *MR_ResolveMeshDegenSettings_AssignFromAnother(MR_ResolveMeshDegenSettings *_this, const MR_ResolveMeshDegenSettings *_other);

/**
* \brief Removes degenerate triangles in a mesh by calling decimateMesh function with appropriate settings
* \details consider using \ref fixMeshDegeneracies for more complex cases
*
* \return true if the mesh has been changed
*
* \sa \ref decimateMesh
*/
/// Generated from function `MR::resolveMeshDegenerations`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
MRC_API bool MR_resolveMeshDegenerations(MR_Mesh *mesh, const MR_ResolveMeshDegenSettings *settings);

/// the algorithm will try to keep the length of all edges close to this value,
/// splitting the edges longer than targetEdgeLen, and then eliminating the edges shorter than targetEdgeLen
/// Returns a pointer to a member variable of class `MR::RemeshSettings` named `targetEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_RemeshSettings_Get_targetEdgeLen(const MR_RemeshSettings *_this);

/// the algorithm will try to keep the length of all edges close to this value,
/// splitting the edges longer than targetEdgeLen, and then eliminating the edges shorter than targetEdgeLen
/// Modifies a member variable of class `MR::RemeshSettings` named `targetEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RemeshSettings_Set_targetEdgeLen(MR_RemeshSettings *_this, float value);

/// the algorithm will try to keep the length of all edges close to this value,
/// splitting the edges longer than targetEdgeLen, and then eliminating the edges shorter than targetEdgeLen
/// Returns a mutable pointer to a member variable of class `MR::RemeshSettings` named `targetEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_RemeshSettings_GetMutable_targetEdgeLen(MR_RemeshSettings *_this);

/// Maximum number of edge splits allowed during subdivision
/// Returns a pointer to a member variable of class `MR::RemeshSettings` named `maxEdgeSplits`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_RemeshSettings_Get_maxEdgeSplits(const MR_RemeshSettings *_this);

/// Maximum number of edge splits allowed during subdivision
/// Modifies a member variable of class `MR::RemeshSettings` named `maxEdgeSplits`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RemeshSettings_Set_maxEdgeSplits(MR_RemeshSettings *_this, int32_t value);

/// Maximum number of edge splits allowed during subdivision
/// Returns a mutable pointer to a member variable of class `MR::RemeshSettings` named `maxEdgeSplits`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_RemeshSettings_GetMutable_maxEdgeSplits(MR_RemeshSettings *_this);

/// Improves local mesh triangulation by doing edge flips if it does not change dihedral angle more than on this value
/// Returns a pointer to a member variable of class `MR::RemeshSettings` named `maxAngleChangeAfterFlip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_RemeshSettings_Get_maxAngleChangeAfterFlip(const MR_RemeshSettings *_this);

/// Improves local mesh triangulation by doing edge flips if it does not change dihedral angle more than on this value
/// Modifies a member variable of class `MR::RemeshSettings` named `maxAngleChangeAfterFlip`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RemeshSettings_Set_maxAngleChangeAfterFlip(MR_RemeshSettings *_this, float value);

/// Improves local mesh triangulation by doing edge flips if it does not change dihedral angle more than on this value
/// Returns a mutable pointer to a member variable of class `MR::RemeshSettings` named `maxAngleChangeAfterFlip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_RemeshSettings_GetMutable_maxAngleChangeAfterFlip(MR_RemeshSettings *_this);

/// Maximal shift of a boundary during one edge collapse
/// Returns a pointer to a member variable of class `MR::RemeshSettings` named `maxBdShift`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_RemeshSettings_Get_maxBdShift(const MR_RemeshSettings *_this);

/// Maximal shift of a boundary during one edge collapse
/// Modifies a member variable of class `MR::RemeshSettings` named `maxBdShift`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RemeshSettings_Set_maxBdShift(MR_RemeshSettings *_this, float value);

/// Maximal shift of a boundary during one edge collapse
/// Returns a mutable pointer to a member variable of class `MR::RemeshSettings` named `maxBdShift`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_RemeshSettings_GetMutable_maxBdShift(MR_RemeshSettings *_this);

/// This option in subdivision works best for natural surfaces, where all triangles are close to equilateral and have similar area,
/// and no sharp edges in between
/// Returns a pointer to a member variable of class `MR::RemeshSettings` named `useCurvature`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_RemeshSettings_Get_useCurvature(const MR_RemeshSettings *_this);

/// This option in subdivision works best for natural surfaces, where all triangles are close to equilateral and have similar area,
/// and no sharp edges in between
/// Modifies a member variable of class `MR::RemeshSettings` named `useCurvature`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RemeshSettings_Set_useCurvature(MR_RemeshSettings *_this, bool value);

/// This option in subdivision works best for natural surfaces, where all triangles are close to equilateral and have similar area,
/// and no sharp edges in between
/// Returns a mutable pointer to a member variable of class `MR::RemeshSettings` named `useCurvature`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_RemeshSettings_GetMutable_useCurvature(MR_RemeshSettings *_this);

/// the number of iterations of final relaxation of mesh vertices;
/// few iterations can give almost perfect uniformity of the vertices and edge lengths but deviate from the original surface
/// Returns a pointer to a member variable of class `MR::RemeshSettings` named `finalRelaxIters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_RemeshSettings_Get_finalRelaxIters(const MR_RemeshSettings *_this);

/// the number of iterations of final relaxation of mesh vertices;
/// few iterations can give almost perfect uniformity of the vertices and edge lengths but deviate from the original surface
/// Modifies a member variable of class `MR::RemeshSettings` named `finalRelaxIters`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RemeshSettings_Set_finalRelaxIters(MR_RemeshSettings *_this, int32_t value);

/// the number of iterations of final relaxation of mesh vertices;
/// few iterations can give almost perfect uniformity of the vertices and edge lengths but deviate from the original surface
/// Returns a mutable pointer to a member variable of class `MR::RemeshSettings` named `finalRelaxIters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_RemeshSettings_GetMutable_finalRelaxIters(MR_RemeshSettings *_this);

/// if true prevents the surface from shrinkage after many iterations
/// Returns a pointer to a member variable of class `MR::RemeshSettings` named `finalRelaxNoShrinkage`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_RemeshSettings_Get_finalRelaxNoShrinkage(const MR_RemeshSettings *_this);

/// if true prevents the surface from shrinkage after many iterations
/// Modifies a member variable of class `MR::RemeshSettings` named `finalRelaxNoShrinkage`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RemeshSettings_Set_finalRelaxNoShrinkage(MR_RemeshSettings *_this, bool value);

/// if true prevents the surface from shrinkage after many iterations
/// Returns a mutable pointer to a member variable of class `MR::RemeshSettings` named `finalRelaxNoShrinkage`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_RemeshSettings_GetMutable_finalRelaxNoShrinkage(MR_RemeshSettings *_this);

/// Region on mesh to be changed, it is updated during the operation
/// Returns a pointer to a member variable of class `MR::RemeshSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *const *MR_RemeshSettings_Get_region(const MR_RemeshSettings *_this);

/// Region on mesh to be changed, it is updated during the operation
/// Modifies a member variable of class `MR::RemeshSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RemeshSettings_Set_region(MR_RemeshSettings *_this, MR_FaceBitSet *value);

/// Region on mesh to be changed, it is updated during the operation
/// Returns a mutable pointer to a member variable of class `MR::RemeshSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet **MR_RemeshSettings_GetMutable_region(MR_RemeshSettings *_this);

/// Edges specified by this bit-set will never be flipped or collapsed, but they can be replaced during collapse of nearby edges so it is updated during the operation;
/// also the vertices incident to these edges are excluded from relaxation
/// Returns a pointer to a member variable of class `MR::RemeshSettings` named `notFlippable`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *const *MR_RemeshSettings_Get_notFlippable(const MR_RemeshSettings *_this);

/// Edges specified by this bit-set will never be flipped or collapsed, but they can be replaced during collapse of nearby edges so it is updated during the operation;
/// also the vertices incident to these edges are excluded from relaxation
/// Modifies a member variable of class `MR::RemeshSettings` named `notFlippable`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RemeshSettings_Set_notFlippable(MR_RemeshSettings *_this, MR_UndirectedEdgeBitSet *value);

/// Edges specified by this bit-set will never be flipped or collapsed, but they can be replaced during collapse of nearby edges so it is updated during the operation;
/// also the vertices incident to these edges are excluded from relaxation
/// Returns a mutable pointer to a member variable of class `MR::RemeshSettings` named `notFlippable`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet **MR_RemeshSettings_GetMutable_notFlippable(MR_RemeshSettings *_this);

///  whether to pack mesh at the end
/// Returns a pointer to a member variable of class `MR::RemeshSettings` named `packMesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_RemeshSettings_Get_packMesh(const MR_RemeshSettings *_this);

///  whether to pack mesh at the end
/// Modifies a member variable of class `MR::RemeshSettings` named `packMesh`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RemeshSettings_Set_packMesh(MR_RemeshSettings *_this, bool value);

///  whether to pack mesh at the end
/// Returns a mutable pointer to a member variable of class `MR::RemeshSettings` named `packMesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_RemeshSettings_GetMutable_packMesh(MR_RemeshSettings *_this);

/// if true, then every new vertex after subdivision will be projected on the original mesh (before smoothing);
/// this does not affect the vertices moved on other stages of the processing
/// Returns a pointer to a member variable of class `MR::RemeshSettings` named `projectOnOriginalMesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_RemeshSettings_Get_projectOnOriginalMesh(const MR_RemeshSettings *_this);

/// if true, then every new vertex after subdivision will be projected on the original mesh (before smoothing);
/// this does not affect the vertices moved on other stages of the processing
/// Modifies a member variable of class `MR::RemeshSettings` named `projectOnOriginalMesh`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RemeshSettings_Set_projectOnOriginalMesh(MR_RemeshSettings *_this, bool value);

/// if true, then every new vertex after subdivision will be projected on the original mesh (before smoothing);
/// this does not affect the vertices moved on other stages of the processing
/// Returns a mutable pointer to a member variable of class `MR::RemeshSettings` named `projectOnOriginalMesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_RemeshSettings_GetMutable_projectOnOriginalMesh(MR_RemeshSettings *_this);

/// this function is called each time edge (e) is split into (e1->e), but before the ring is made Delone
/// Returns a pointer to a member variable of class `MR::RemeshSettings` named `onEdgeSplit`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_void_from_MR_EdgeId_MR_EdgeId *MR_RemeshSettings_Get_onEdgeSplit(const MR_RemeshSettings *_this);

/// this function is called each time edge (e) is split into (e1->e), but before the ring is made Delone
/// Modifies a member variable of class `MR::RemeshSettings` named `onEdgeSplit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RemeshSettings_Set_onEdgeSplit(MR_RemeshSettings *_this, MR_PassBy value_pass_by, MR_std_function_void_from_MR_EdgeId_MR_EdgeId *value);

/// this function is called each time edge (e) is split into (e1->e), but before the ring is made Delone
/// Returns a mutable pointer to a member variable of class `MR::RemeshSettings` named `onEdgeSplit`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_void_from_MR_EdgeId_MR_EdgeId *MR_RemeshSettings_GetMutable_onEdgeSplit(MR_RemeshSettings *_this);

/// if valid (e1) is given then dest(e) = dest(e1) and their origins are in different ends of collapsing edge, e1 shall take the place of e
/// Returns a pointer to a member variable of class `MR::RemeshSettings` named `onEdgeDel`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_void_from_MR_EdgeId_MR_EdgeId *MR_RemeshSettings_Get_onEdgeDel(const MR_RemeshSettings *_this);

/// if valid (e1) is given then dest(e) = dest(e1) and their origins are in different ends of collapsing edge, e1 shall take the place of e
/// Modifies a member variable of class `MR::RemeshSettings` named `onEdgeDel`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RemeshSettings_Set_onEdgeDel(MR_RemeshSettings *_this, MR_PassBy value_pass_by, MR_std_function_void_from_MR_EdgeId_MR_EdgeId *value);

/// if valid (e1) is given then dest(e) = dest(e1) and their origins are in different ends of collapsing edge, e1 shall take the place of e
/// Returns a mutable pointer to a member variable of class `MR::RemeshSettings` named `onEdgeDel`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_void_from_MR_EdgeId_MR_EdgeId *MR_RemeshSettings_GetMutable_onEdgeDel(MR_RemeshSettings *_this);

/**
* \brief The user can provide this optional callback that is invoked immediately before edge collapse;
* \details It receives the edge being collapsed: its destination vertex will disappear,
* and its origin vertex will get new position (provided as the second argument) after collapse;
* If the callback returns false, then the collapse is prohibited
*/
/// Returns a pointer to a member variable of class `MR::RemeshSettings` named `preCollapse`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_MR_EdgeId_const_MR_Vector3f_ref *MR_RemeshSettings_Get_preCollapse(const MR_RemeshSettings *_this);

/**
* \brief The user can provide this optional callback that is invoked immediately before edge collapse;
* \details It receives the edge being collapsed: its destination vertex will disappear,
* and its origin vertex will get new position (provided as the second argument) after collapse;
* If the callback returns false, then the collapse is prohibited
*/
/// Modifies a member variable of class `MR::RemeshSettings` named `preCollapse`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RemeshSettings_Set_preCollapse(MR_RemeshSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_MR_EdgeId_const_MR_Vector3f_ref *value);

/**
* \brief The user can provide this optional callback that is invoked immediately before edge collapse;
* \details It receives the edge being collapsed: its destination vertex will disappear,
* and its origin vertex will get new position (provided as the second argument) after collapse;
* If the callback returns false, then the collapse is prohibited
*/
/// Returns a mutable pointer to a member variable of class `MR::RemeshSettings` named `preCollapse`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_MR_EdgeId_const_MR_Vector3f_ref *MR_RemeshSettings_GetMutable_preCollapse(MR_RemeshSettings *_this);

/// callback to report algorithm progress and cancel it by user request
/// Returns a pointer to a member variable of class `MR::RemeshSettings` named `progressCallback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_RemeshSettings_Get_progressCallback(const MR_RemeshSettings *_this);

/// callback to report algorithm progress and cancel it by user request
/// Modifies a member variable of class `MR::RemeshSettings` named `progressCallback`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RemeshSettings_Set_progressCallback(MR_RemeshSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// callback to report algorithm progress and cancel it by user request
/// Returns a mutable pointer to a member variable of class `MR::RemeshSettings` named `progressCallback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_RemeshSettings_GetMutable_progressCallback(MR_RemeshSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RemeshSettings_Destroy()` to free it when you're done using it.
MRC_API MR_RemeshSettings *MR_RemeshSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_RemeshSettings_DestroyArray()`.
/// Use `MR_RemeshSettings_OffsetMutablePtr()` and `MR_RemeshSettings_OffsetPtr()` to access the array elements.
MRC_API MR_RemeshSettings *MR_RemeshSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::RemeshSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RemeshSettings_Destroy()` to free it when you're done using it.
MRC_API MR_RemeshSettings *MR_RemeshSettings_ConstructFrom(float targetEdgeLen, int32_t maxEdgeSplits, float maxAngleChangeAfterFlip, float maxBdShift, bool useCurvature, int32_t finalRelaxIters, bool finalRelaxNoShrinkage, MR_FaceBitSet *region, MR_UndirectedEdgeBitSet *notFlippable, bool packMesh, bool projectOnOriginalMesh, MR_PassBy onEdgeSplit_pass_by, MR_std_function_void_from_MR_EdgeId_MR_EdgeId *onEdgeSplit, MR_PassBy onEdgeDel_pass_by, MR_std_function_void_from_MR_EdgeId_MR_EdgeId *onEdgeDel, MR_PassBy preCollapse_pass_by, MR_std_function_bool_from_MR_EdgeId_const_MR_Vector3f_ref *preCollapse, MR_PassBy progressCallback_pass_by, MR_std_function_bool_from_float *progressCallback);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_RemeshSettings *MR_RemeshSettings_OffsetPtr(const MR_RemeshSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_RemeshSettings *MR_RemeshSettings_OffsetMutablePtr(MR_RemeshSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::RemeshSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RemeshSettings_Destroy()` to free it when you're done using it.
MRC_API MR_RemeshSettings *MR_RemeshSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_RemeshSettings *_other);

/// Destroys a heap-allocated instance of `MR_RemeshSettings`. Does nothing if the pointer is null.
MRC_API void MR_RemeshSettings_Destroy(const MR_RemeshSettings *_this);

/// Destroys a heap-allocated array of `MR_RemeshSettings`. Does nothing if the pointer is null.
MRC_API void MR_RemeshSettings_DestroyArray(const MR_RemeshSettings *_this);

/// Generated from a method of class `MR::RemeshSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RemeshSettings *MR_RemeshSettings_AssignFromAnother(MR_RemeshSettings *_this, MR_PassBy _other_pass_by, MR_RemeshSettings *_other);

// Splits too long and eliminates too short edges from the mesh
/// Generated from function `MR::remesh`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
MRC_API bool MR_remesh(MR_Mesh *mesh, const MR_RemeshSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
