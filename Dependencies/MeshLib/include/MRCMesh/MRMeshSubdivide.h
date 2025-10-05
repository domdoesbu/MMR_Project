// (C) 2024, AMV Consulting
#pragma once

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
typedef struct MR_ObjectMesh MR_ObjectMesh; // Defined in `#include <MRCMesh/MRObjectMesh.h>`.
typedef struct MR_ObjectMeshData MR_ObjectMeshData; // Defined in `#include <MRCMesh/MRObjectMeshData.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_expected_MR_Mesh_std_string MR_expected_MR_Mesh_std_string; // Defined in `#include <MRCMisc/expected_MR_Mesh_std_string.h>`.
typedef struct MR_std_function_bool_from_MR_EdgeId MR_std_function_bool_from_MR_EdgeId; // Defined in `#include <MRCMisc/std_function_bool_from_MR_EdgeId.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_function_void_from_MR_EdgeId_MR_EdgeId MR_std_function_void_from_MR_EdgeId_MR_EdgeId; // Defined in `#include <MRCMisc/std_function_void_from_MR_EdgeId_MR_EdgeId.h>`.
typedef struct MR_std_function_void_from_MR_VertId MR_std_function_void_from_MR_VertId; // Defined in `#include <MRCMisc/std_function_void_from_MR_VertId.h>`.


/// Generated from class `MR::SubdivideSettings`.
typedef struct MR_SubdivideSettings MR_SubdivideSettings;

/// Subdivision is stopped when all edges inside or on the boundary of the region are not longer than this value
/// Returns a pointer to a member variable of class `MR::SubdivideSettings` named `maxEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SubdivideSettings_Get_maxEdgeLen(const MR_SubdivideSettings *_this);

/// Subdivision is stopped when all edges inside or on the boundary of the region are not longer than this value
/// Modifies a member variable of class `MR::SubdivideSettings` named `maxEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SubdivideSettings_Set_maxEdgeLen(MR_SubdivideSettings *_this, float value);

/// Subdivision is stopped when all edges inside or on the boundary of the region are not longer than this value
/// Returns a mutable pointer to a member variable of class `MR::SubdivideSettings` named `maxEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SubdivideSettings_GetMutable_maxEdgeLen(MR_SubdivideSettings *_this);

/// Maximum number of edge splits allowed
/// Returns a pointer to a member variable of class `MR::SubdivideSettings` named `maxEdgeSplits`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SubdivideSettings_Get_maxEdgeSplits(const MR_SubdivideSettings *_this);

/// Maximum number of edge splits allowed
/// Modifies a member variable of class `MR::SubdivideSettings` named `maxEdgeSplits`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SubdivideSettings_Set_maxEdgeSplits(MR_SubdivideSettings *_this, int32_t value);

/// Maximum number of edge splits allowed
/// Returns a mutable pointer to a member variable of class `MR::SubdivideSettings` named `maxEdgeSplits`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SubdivideSettings_GetMutable_maxEdgeSplits(MR_SubdivideSettings *_this);

/// Improves local mesh triangulation by doing edge flips if it does not make too big surface deviation
/// Returns a pointer to a member variable of class `MR::SubdivideSettings` named `maxDeviationAfterFlip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SubdivideSettings_Get_maxDeviationAfterFlip(const MR_SubdivideSettings *_this);

/// Improves local mesh triangulation by doing edge flips if it does not make too big surface deviation
/// Modifies a member variable of class `MR::SubdivideSettings` named `maxDeviationAfterFlip`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SubdivideSettings_Set_maxDeviationAfterFlip(MR_SubdivideSettings *_this, float value);

/// Improves local mesh triangulation by doing edge flips if it does not make too big surface deviation
/// Returns a mutable pointer to a member variable of class `MR::SubdivideSettings` named `maxDeviationAfterFlip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SubdivideSettings_GetMutable_maxDeviationAfterFlip(MR_SubdivideSettings *_this);

/// Improves local mesh triangulation by doing edge flips if it does not change dihedral angle more than on this value (in radians)
/// Returns a pointer to a member variable of class `MR::SubdivideSettings` named `maxAngleChangeAfterFlip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SubdivideSettings_Get_maxAngleChangeAfterFlip(const MR_SubdivideSettings *_this);

/// Improves local mesh triangulation by doing edge flips if it does not change dihedral angle more than on this value (in radians)
/// Modifies a member variable of class `MR::SubdivideSettings` named `maxAngleChangeAfterFlip`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SubdivideSettings_Set_maxAngleChangeAfterFlip(MR_SubdivideSettings *_this, float value);

/// Improves local mesh triangulation by doing edge flips if it does not change dihedral angle more than on this value (in radians)
/// Returns a mutable pointer to a member variable of class `MR::SubdivideSettings` named `maxAngleChangeAfterFlip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SubdivideSettings_GetMutable_maxAngleChangeAfterFlip(MR_SubdivideSettings *_this);

/// If this value is less than FLT_MAX then edge flips will
/// ignore dihedral angle check if one of triangles has aspect ratio more than this value
/// Unit: rad
/// Returns a pointer to a member variable of class `MR::SubdivideSettings` named `criticalAspectRatioFlip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SubdivideSettings_Get_criticalAspectRatioFlip(const MR_SubdivideSettings *_this);

/// If this value is less than FLT_MAX then edge flips will
/// ignore dihedral angle check if one of triangles has aspect ratio more than this value
/// Unit: rad
/// Modifies a member variable of class `MR::SubdivideSettings` named `criticalAspectRatioFlip`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SubdivideSettings_Set_criticalAspectRatioFlip(MR_SubdivideSettings *_this, float value);

/// If this value is less than FLT_MAX then edge flips will
/// ignore dihedral angle check if one of triangles has aspect ratio more than this value
/// Unit: rad
/// Returns a mutable pointer to a member variable of class `MR::SubdivideSettings` named `criticalAspectRatioFlip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SubdivideSettings_GetMutable_criticalAspectRatioFlip(MR_SubdivideSettings *_this);

/// Region on mesh to be subdivided, it is updated during the operation
/// Returns a pointer to a member variable of class `MR::SubdivideSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *const *MR_SubdivideSettings_Get_region(const MR_SubdivideSettings *_this);

/// Region on mesh to be subdivided, it is updated during the operation
/// Modifies a member variable of class `MR::SubdivideSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SubdivideSettings_Set_region(MR_SubdivideSettings *_this, MR_FaceBitSet *value);

/// Region on mesh to be subdivided, it is updated during the operation
/// Returns a mutable pointer to a member variable of class `MR::SubdivideSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet **MR_SubdivideSettings_GetMutable_region(MR_SubdivideSettings *_this);

/// Edges specified by this bit-set will never be flipped, but they can be split so it is updated during the operation
/// Returns a pointer to a member variable of class `MR::SubdivideSettings` named `notFlippable`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *const *MR_SubdivideSettings_Get_notFlippable(const MR_SubdivideSettings *_this);

/// Edges specified by this bit-set will never be flipped, but they can be split so it is updated during the operation
/// Modifies a member variable of class `MR::SubdivideSettings` named `notFlippable`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SubdivideSettings_Set_notFlippable(MR_SubdivideSettings *_this, MR_UndirectedEdgeBitSet *value);

/// Edges specified by this bit-set will never be flipped, but they can be split so it is updated during the operation
/// Returns a mutable pointer to a member variable of class `MR::SubdivideSettings` named `notFlippable`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet **MR_SubdivideSettings_GetMutable_notFlippable(MR_SubdivideSettings *_this);

/// New vertices appeared during subdivision will be added here
/// Returns a pointer to a member variable of class `MR::SubdivideSettings` named `newVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *const *MR_SubdivideSettings_Get_newVerts(const MR_SubdivideSettings *_this);

/// New vertices appeared during subdivision will be added here
/// Modifies a member variable of class `MR::SubdivideSettings` named `newVerts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SubdivideSettings_Set_newVerts(MR_SubdivideSettings *_this, MR_VertBitSet *value);

/// New vertices appeared during subdivision will be added here
/// Returns a mutable pointer to a member variable of class `MR::SubdivideSettings` named `newVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet **MR_SubdivideSettings_GetMutable_newVerts(MR_SubdivideSettings *_this);

/// If false do not touch border edges (cannot subdivide lone faces)\n
/// use \ref MR::findRegionOuterFaces to find boundary faces
/// Returns a pointer to a member variable of class `MR::SubdivideSettings` named `subdivideBorder`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SubdivideSettings_Get_subdivideBorder(const MR_SubdivideSettings *_this);

/// If false do not touch border edges (cannot subdivide lone faces)\n
/// use \ref MR::findRegionOuterFaces to find boundary faces
/// Modifies a member variable of class `MR::SubdivideSettings` named `subdivideBorder`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SubdivideSettings_Set_subdivideBorder(MR_SubdivideSettings *_this, bool value);

/// If false do not touch border edges (cannot subdivide lone faces)\n
/// use \ref MR::findRegionOuterFaces to find boundary faces
/// Returns a mutable pointer to a member variable of class `MR::SubdivideSettings` named `subdivideBorder`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SubdivideSettings_GetMutable_subdivideBorder(MR_SubdivideSettings *_this);

/// The subdivision stops as soon as all triangles (in the region) have aspect ratio below or equal to this value
/// Returns a pointer to a member variable of class `MR::SubdivideSettings` named `maxTriAspectRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SubdivideSettings_Get_maxTriAspectRatio(const MR_SubdivideSettings *_this);

/// The subdivision stops as soon as all triangles (in the region) have aspect ratio below or equal to this value
/// Modifies a member variable of class `MR::SubdivideSettings` named `maxTriAspectRatio`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SubdivideSettings_Set_maxTriAspectRatio(MR_SubdivideSettings *_this, float value);

/// The subdivision stops as soon as all triangles (in the region) have aspect ratio below or equal to this value
/// Returns a mutable pointer to a member variable of class `MR::SubdivideSettings` named `maxTriAspectRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SubdivideSettings_GetMutable_maxTriAspectRatio(MR_SubdivideSettings *_this);

/// An edge is subdivided only if both its left and right triangles have aspect ratio below or equal to this value.
/// So this is a maximum aspect ratio of a triangle that can be split on two before Delone optimization.
/// Please set it to a smaller value only if subdivideBorder==false, otherwise many narrow triangles can appear near border
/// Returns a pointer to a member variable of class `MR::SubdivideSettings` named `maxSplittableTriAspectRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SubdivideSettings_Get_maxSplittableTriAspectRatio(const MR_SubdivideSettings *_this);

/// An edge is subdivided only if both its left and right triangles have aspect ratio below or equal to this value.
/// So this is a maximum aspect ratio of a triangle that can be split on two before Delone optimization.
/// Please set it to a smaller value only if subdivideBorder==false, otherwise many narrow triangles can appear near border
/// Modifies a member variable of class `MR::SubdivideSettings` named `maxSplittableTriAspectRatio`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SubdivideSettings_Set_maxSplittableTriAspectRatio(MR_SubdivideSettings *_this, float value);

/// An edge is subdivided only if both its left and right triangles have aspect ratio below or equal to this value.
/// So this is a maximum aspect ratio of a triangle that can be split on two before Delone optimization.
/// Please set it to a smaller value only if subdivideBorder==false, otherwise many narrow triangles can appear near border
/// Returns a mutable pointer to a member variable of class `MR::SubdivideSettings` named `maxSplittableTriAspectRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SubdivideSettings_GetMutable_maxSplittableTriAspectRatio(MR_SubdivideSettings *_this);

/// Puts new vertices so that they form a smooth surface together with existing vertices.
/// This option works best for natural surfaces without sharp edges in between triangles
/// Returns a pointer to a member variable of class `MR::SubdivideSettings` named `smoothMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SubdivideSettings_Get_smoothMode(const MR_SubdivideSettings *_this);

/// Puts new vertices so that they form a smooth surface together with existing vertices.
/// This option works best for natural surfaces without sharp edges in between triangles
/// Modifies a member variable of class `MR::SubdivideSettings` named `smoothMode`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SubdivideSettings_Set_smoothMode(MR_SubdivideSettings *_this, bool value);

/// Puts new vertices so that they form a smooth surface together with existing vertices.
/// This option works best for natural surfaces without sharp edges in between triangles
/// Returns a mutable pointer to a member variable of class `MR::SubdivideSettings` named `smoothMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SubdivideSettings_GetMutable_smoothMode(MR_SubdivideSettings *_this);

// 30 degrees
/// Returns a pointer to a member variable of class `MR::SubdivideSettings` named `minSharpDihedralAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SubdivideSettings_Get_minSharpDihedralAngle(const MR_SubdivideSettings *_this);

// 30 degrees
/// Modifies a member variable of class `MR::SubdivideSettings` named `minSharpDihedralAngle`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SubdivideSettings_Set_minSharpDihedralAngle(MR_SubdivideSettings *_this, float value);

// 30 degrees
/// Returns a mutable pointer to a member variable of class `MR::SubdivideSettings` named `minSharpDihedralAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SubdivideSettings_GetMutable_minSharpDihedralAngle(MR_SubdivideSettings *_this);

/// if true, then every new vertex will be projected on the original mesh (before smoothing)
/// Returns a pointer to a member variable of class `MR::SubdivideSettings` named `projectOnOriginalMesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SubdivideSettings_Get_projectOnOriginalMesh(const MR_SubdivideSettings *_this);

/// if true, then every new vertex will be projected on the original mesh (before smoothing)
/// Modifies a member variable of class `MR::SubdivideSettings` named `projectOnOriginalMesh`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SubdivideSettings_Set_projectOnOriginalMesh(MR_SubdivideSettings *_this, bool value);

/// if true, then every new vertex will be projected on the original mesh (before smoothing)
/// Returns a mutable pointer to a member variable of class `MR::SubdivideSettings` named `projectOnOriginalMesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SubdivideSettings_GetMutable_projectOnOriginalMesh(MR_SubdivideSettings *_this);

/// this function is called each time edge (e) is going to split, if it returns false then this split will be skipped
/// Returns a pointer to a member variable of class `MR::SubdivideSettings` named `beforeEdgeSplit`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_MR_EdgeId *MR_SubdivideSettings_Get_beforeEdgeSplit(const MR_SubdivideSettings *_this);

/// this function is called each time edge (e) is going to split, if it returns false then this split will be skipped
/// Modifies a member variable of class `MR::SubdivideSettings` named `beforeEdgeSplit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SubdivideSettings_Set_beforeEdgeSplit(MR_SubdivideSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_MR_EdgeId *value);

/// this function is called each time edge (e) is going to split, if it returns false then this split will be skipped
/// Returns a mutable pointer to a member variable of class `MR::SubdivideSettings` named `beforeEdgeSplit`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_MR_EdgeId *MR_SubdivideSettings_GetMutable_beforeEdgeSplit(MR_SubdivideSettings *_this);

/// this function is called each time a new vertex has been created, but before the ring is made Delone
/// Returns a pointer to a member variable of class `MR::SubdivideSettings` named `onVertCreated`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_void_from_MR_VertId *MR_SubdivideSettings_Get_onVertCreated(const MR_SubdivideSettings *_this);

/// this function is called each time a new vertex has been created, but before the ring is made Delone
/// Modifies a member variable of class `MR::SubdivideSettings` named `onVertCreated`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SubdivideSettings_Set_onVertCreated(MR_SubdivideSettings *_this, MR_PassBy value_pass_by, MR_std_function_void_from_MR_VertId *value);

/// this function is called each time a new vertex has been created, but before the ring is made Delone
/// Returns a mutable pointer to a member variable of class `MR::SubdivideSettings` named `onVertCreated`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_void_from_MR_VertId *MR_SubdivideSettings_GetMutable_onVertCreated(MR_SubdivideSettings *_this);

/// this function is called each time edge (e) is split into (e1->e), but before the ring is made Delone
/// Returns a pointer to a member variable of class `MR::SubdivideSettings` named `onEdgeSplit`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_void_from_MR_EdgeId_MR_EdgeId *MR_SubdivideSettings_Get_onEdgeSplit(const MR_SubdivideSettings *_this);

/// this function is called each time edge (e) is split into (e1->e), but before the ring is made Delone
/// Modifies a member variable of class `MR::SubdivideSettings` named `onEdgeSplit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SubdivideSettings_Set_onEdgeSplit(MR_SubdivideSettings *_this, MR_PassBy value_pass_by, MR_std_function_void_from_MR_EdgeId_MR_EdgeId *value);

/// this function is called each time edge (e) is split into (e1->e), but before the ring is made Delone
/// Returns a mutable pointer to a member variable of class `MR::SubdivideSettings` named `onEdgeSplit`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_void_from_MR_EdgeId_MR_EdgeId *MR_SubdivideSettings_GetMutable_onEdgeSplit(MR_SubdivideSettings *_this);

/// callback to report algorithm progress and cancel it by user request
/// Returns a pointer to a member variable of class `MR::SubdivideSettings` named `progressCallback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_SubdivideSettings_Get_progressCallback(const MR_SubdivideSettings *_this);

/// callback to report algorithm progress and cancel it by user request
/// Modifies a member variable of class `MR::SubdivideSettings` named `progressCallback`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SubdivideSettings_Set_progressCallback(MR_SubdivideSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// callback to report algorithm progress and cancel it by user request
/// Returns a mutable pointer to a member variable of class `MR::SubdivideSettings` named `progressCallback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_SubdivideSettings_GetMutable_progressCallback(MR_SubdivideSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SubdivideSettings_Destroy()` to free it when you're done using it.
MRC_API MR_SubdivideSettings *MR_SubdivideSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SubdivideSettings_DestroyArray()`.
/// Use `MR_SubdivideSettings_OffsetMutablePtr()` and `MR_SubdivideSettings_OffsetPtr()` to access the array elements.
MRC_API MR_SubdivideSettings *MR_SubdivideSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::SubdivideSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SubdivideSettings_Destroy()` to free it when you're done using it.
MRC_API MR_SubdivideSettings *MR_SubdivideSettings_ConstructFrom(float maxEdgeLen, int32_t maxEdgeSplits, float maxDeviationAfterFlip, float maxAngleChangeAfterFlip, float criticalAspectRatioFlip, MR_FaceBitSet *region, MR_UndirectedEdgeBitSet *notFlippable, MR_VertBitSet *newVerts, bool subdivideBorder, float maxTriAspectRatio, float maxSplittableTriAspectRatio, bool smoothMode, float minSharpDihedralAngle, bool projectOnOriginalMesh, MR_PassBy beforeEdgeSplit_pass_by, MR_std_function_bool_from_MR_EdgeId *beforeEdgeSplit, MR_PassBy onVertCreated_pass_by, MR_std_function_void_from_MR_VertId *onVertCreated, MR_PassBy onEdgeSplit_pass_by, MR_std_function_void_from_MR_EdgeId_MR_EdgeId *onEdgeSplit, MR_PassBy progressCallback_pass_by, MR_std_function_bool_from_float *progressCallback);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SubdivideSettings *MR_SubdivideSettings_OffsetPtr(const MR_SubdivideSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SubdivideSettings *MR_SubdivideSettings_OffsetMutablePtr(MR_SubdivideSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SubdivideSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SubdivideSettings_Destroy()` to free it when you're done using it.
MRC_API MR_SubdivideSettings *MR_SubdivideSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_SubdivideSettings *_other);

/// Destroys a heap-allocated instance of `MR_SubdivideSettings`. Does nothing if the pointer is null.
MRC_API void MR_SubdivideSettings_Destroy(const MR_SubdivideSettings *_this);

/// Destroys a heap-allocated array of `MR_SubdivideSettings`. Does nothing if the pointer is null.
MRC_API void MR_SubdivideSettings_DestroyArray(const MR_SubdivideSettings *_this);

/// Generated from a method of class `MR::SubdivideSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SubdivideSettings *MR_SubdivideSettings_AssignFromAnother(MR_SubdivideSettings *_this, MR_PassBy _other_pass_by, MR_SubdivideSettings *_other);

/// splits edges in mesh region according to the settings;\n
/// \return The total number of edge splits performed
/// Generated from function `MR::subdivideMesh`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
MRC_API int32_t MR_subdivideMesh_MR_Mesh(MR_Mesh *mesh, const MR_SubdivideSettings *settings);

/// subdivides mesh with per-element attributes according to given settings;
/// \detail if settings.region is not null, then given region must be a subset of current face selection or face selection must absent
/// \return The total number of edge splits performed
/// Generated from function `MR::subdivideMesh`.
/// Parameter `data` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
MRC_API int32_t MR_subdivideMesh_MR_ObjectMeshData(MR_ObjectMeshData *data, const MR_SubdivideSettings *settings);

/// creates a copy of given mesh part, subdivides it to get rid of too long edges compared with voxelSize, then packs resulting mesh,
/// this is called typically in preparation for 3D space sampling with voxelSize step, and subdivision is important for making leaves of AABB tree not too big compared with voxelSize
/// Generated from function `MR::copySubdividePackMesh`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_copySubdividePackMesh(const MR_MeshPart *mp, float voxelSize, const MR_std_function_bool_from_float *cb);

/// returns the data of subdivided mesh given ObjectMesh (which remains unchanged) and subdivision parameters
/// Generated from function `MR::makeSubdividedObjectMeshData`.
/// Parameter `obj` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectMeshData_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectMeshData *MR_makeSubdividedObjectMeshData(const MR_ObjectMesh *obj, const MR_SubdivideSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
