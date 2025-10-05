// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MREnums.h>
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
typedef struct MR_FaceColors MR_FaceColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_FillHoleParams MR_FillHoleParams; // Defined in `#include <MRCMesh/MRMeshFillHole.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertColors MR_VertColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertCoords2 MR_VertCoords2; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_function_bool_from_MR_EdgeId MR_std_function_bool_from_MR_EdgeId; // Defined in `#include <MRCMisc/std_function_bool_from_MR_EdgeId.h>`.
typedef struct MR_std_function_void_from_MR_EdgeId_MR_EdgeId MR_std_function_void_from_MR_EdgeId_MR_EdgeId; // Defined in `#include <MRCMisc/std_function_void_from_MR_EdgeId_MR_EdgeId.h>`.


/// Generated from class `MR::FillHoleNicelySettings`.
typedef struct MR_FillHoleNicelySettings MR_FillHoleNicelySettings;

/// how to triangulate the hole, must be specified by the user
/// Returns a pointer to a member variable of class `MR::FillHoleNicelySettings` named `triangulateParams`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FillHoleParams *MR_FillHoleNicelySettings_Get_triangulateParams(const MR_FillHoleNicelySettings *_this);

/// how to triangulate the hole, must be specified by the user
/// Modifies a member variable of class `MR::FillHoleNicelySettings` named `triangulateParams`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleNicelySettings_Set_triangulateParams(MR_FillHoleNicelySettings *_this, MR_PassBy value_pass_by, MR_FillHoleParams *value);

/// how to triangulate the hole, must be specified by the user
/// Returns a mutable pointer to a member variable of class `MR::FillHoleNicelySettings` named `triangulateParams`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FillHoleParams *MR_FillHoleNicelySettings_GetMutable_triangulateParams(MR_FillHoleNicelySettings *_this);

/// If false then additional vertices are created inside the patch for best mesh quality
/// Returns a pointer to a member variable of class `MR::FillHoleNicelySettings` named `triangulateOnly`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_FillHoleNicelySettings_Get_triangulateOnly(const MR_FillHoleNicelySettings *_this);

/// If false then additional vertices are created inside the patch for best mesh quality
/// Modifies a member variable of class `MR::FillHoleNicelySettings` named `triangulateOnly`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleNicelySettings_Set_triangulateOnly(MR_FillHoleNicelySettings *_this, bool value);

/// If false then additional vertices are created inside the patch for best mesh quality
/// Returns a mutable pointer to a member variable of class `MR::FillHoleNicelySettings` named `triangulateOnly`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_FillHoleNicelySettings_GetMutable_triangulateOnly(MR_FillHoleNicelySettings *_this);

/// in triangulateOnly = false mode, edges specified by this bit-set will never be flipped, but they can be split so it is updated during the operation
/// Returns a pointer to a member variable of class `MR::FillHoleNicelySettings` named `notFlippable`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *const *MR_FillHoleNicelySettings_Get_notFlippable(const MR_FillHoleNicelySettings *_this);

/// in triangulateOnly = false mode, edges specified by this bit-set will never be flipped, but they can be split so it is updated during the operation
/// Modifies a member variable of class `MR::FillHoleNicelySettings` named `notFlippable`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleNicelySettings_Set_notFlippable(MR_FillHoleNicelySettings *_this, MR_UndirectedEdgeBitSet *value);

/// in triangulateOnly = false mode, edges specified by this bit-set will never be flipped, but they can be split so it is updated during the operation
/// Returns a mutable pointer to a member variable of class `MR::FillHoleNicelySettings` named `notFlippable`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet **MR_FillHoleNicelySettings_GetMutable_notFlippable(MR_FillHoleNicelySettings *_this);

/// Subdivision is stopped when all edges inside or on the boundary of the region are not longer than this value
/// Returns a pointer to a member variable of class `MR::FillHoleNicelySettings` named `maxEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FillHoleNicelySettings_Get_maxEdgeLen(const MR_FillHoleNicelySettings *_this);

/// Subdivision is stopped when all edges inside or on the boundary of the region are not longer than this value
/// Modifies a member variable of class `MR::FillHoleNicelySettings` named `maxEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleNicelySettings_Set_maxEdgeLen(MR_FillHoleNicelySettings *_this, float value);

/// Subdivision is stopped when all edges inside or on the boundary of the region are not longer than this value
/// Returns a mutable pointer to a member variable of class `MR::FillHoleNicelySettings` named `maxEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FillHoleNicelySettings_GetMutable_maxEdgeLen(MR_FillHoleNicelySettings *_this);

/// Maximum number of edge splits allowed during subdivision
/// Returns a pointer to a member variable of class `MR::FillHoleNicelySettings` named `maxEdgeSplits`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_FillHoleNicelySettings_Get_maxEdgeSplits(const MR_FillHoleNicelySettings *_this);

/// Maximum number of edge splits allowed during subdivision
/// Modifies a member variable of class `MR::FillHoleNicelySettings` named `maxEdgeSplits`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleNicelySettings_Set_maxEdgeSplits(MR_FillHoleNicelySettings *_this, int32_t value);

/// Maximum number of edge splits allowed during subdivision
/// Returns a mutable pointer to a member variable of class `MR::FillHoleNicelySettings` named `maxEdgeSplits`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_FillHoleNicelySettings_GetMutable_maxEdgeSplits(MR_FillHoleNicelySettings *_this);

/// Improves local mesh triangulation by doing edge flips if it does not change dihedral angle more than on this value (in radians)
/// Returns a pointer to a member variable of class `MR::FillHoleNicelySettings` named `maxAngleChangeAfterFlip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FillHoleNicelySettings_Get_maxAngleChangeAfterFlip(const MR_FillHoleNicelySettings *_this);

/// Improves local mesh triangulation by doing edge flips if it does not change dihedral angle more than on this value (in radians)
/// Modifies a member variable of class `MR::FillHoleNicelySettings` named `maxAngleChangeAfterFlip`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleNicelySettings_Set_maxAngleChangeAfterFlip(MR_FillHoleNicelySettings *_this, float value);

/// Improves local mesh triangulation by doing edge flips if it does not change dihedral angle more than on this value (in radians)
/// Returns a mutable pointer to a member variable of class `MR::FillHoleNicelySettings` named `maxAngleChangeAfterFlip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FillHoleNicelySettings_GetMutable_maxAngleChangeAfterFlip(MR_FillHoleNicelySettings *_this);

/// Whether to make patch over the hole smooth both inside and on its boundary with existed surface
/// Returns a pointer to a member variable of class `MR::FillHoleNicelySettings` named `smoothCurvature`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_FillHoleNicelySettings_Get_smoothCurvature(const MR_FillHoleNicelySettings *_this);

/// Whether to make patch over the hole smooth both inside and on its boundary with existed surface
/// Modifies a member variable of class `MR::FillHoleNicelySettings` named `smoothCurvature`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleNicelySettings_Set_smoothCurvature(MR_FillHoleNicelySettings *_this, bool value);

/// Whether to make patch over the hole smooth both inside and on its boundary with existed surface
/// Returns a mutable pointer to a member variable of class `MR::FillHoleNicelySettings` named `smoothCurvature`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_FillHoleNicelySettings_GetMutable_smoothCurvature(MR_FillHoleNicelySettings *_this);

/// Additionally smooth 3 layers of vertices near hole boundary both inside and outside of the hole
/// Returns a pointer to a member variable of class `MR::FillHoleNicelySettings` named `naturalSmooth`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_FillHoleNicelySettings_Get_naturalSmooth(const MR_FillHoleNicelySettings *_this);

/// Additionally smooth 3 layers of vertices near hole boundary both inside and outside of the hole
/// Modifies a member variable of class `MR::FillHoleNicelySettings` named `naturalSmooth`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleNicelySettings_Set_naturalSmooth(MR_FillHoleNicelySettings *_this, bool value);

/// Additionally smooth 3 layers of vertices near hole boundary both inside and outside of the hole
/// Returns a mutable pointer to a member variable of class `MR::FillHoleNicelySettings` named `naturalSmooth`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_FillHoleNicelySettings_GetMutable_naturalSmooth(MR_FillHoleNicelySettings *_this);

/// (If this is set) this function is called in subdivision each time edge (e) is going to split, if it returns false then this split will be skipped
/// Returns a pointer to a member variable of class `MR::FillHoleNicelySettings` named `beforeEdgeSplit`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_MR_EdgeId *MR_FillHoleNicelySettings_Get_beforeEdgeSplit(const MR_FillHoleNicelySettings *_this);

/// (If this is set) this function is called in subdivision each time edge (e) is going to split, if it returns false then this split will be skipped
/// Modifies a member variable of class `MR::FillHoleNicelySettings` named `beforeEdgeSplit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleNicelySettings_Set_beforeEdgeSplit(MR_FillHoleNicelySettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_MR_EdgeId *value);

/// (If this is set) this function is called in subdivision each time edge (e) is going to split, if it returns false then this split will be skipped
/// Returns a mutable pointer to a member variable of class `MR::FillHoleNicelySettings` named `beforeEdgeSplit`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_MR_EdgeId *MR_FillHoleNicelySettings_GetMutable_beforeEdgeSplit(MR_FillHoleNicelySettings *_this);

/// (If this is set) this function is called in subdivision each time edge (e) is split into (e1->e), but before the ring is made Delone
/// Returns a pointer to a member variable of class `MR::FillHoleNicelySettings` named `onEdgeSplit`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_void_from_MR_EdgeId_MR_EdgeId *MR_FillHoleNicelySettings_Get_onEdgeSplit(const MR_FillHoleNicelySettings *_this);

/// (If this is set) this function is called in subdivision each time edge (e) is split into (e1->e), but before the ring is made Delone
/// Modifies a member variable of class `MR::FillHoleNicelySettings` named `onEdgeSplit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleNicelySettings_Set_onEdgeSplit(MR_FillHoleNicelySettings *_this, MR_PassBy value_pass_by, MR_std_function_void_from_MR_EdgeId_MR_EdgeId *value);

/// (If this is set) this function is called in subdivision each time edge (e) is split into (e1->e), but before the ring is made Delone
/// Returns a mutable pointer to a member variable of class `MR::FillHoleNicelySettings` named `onEdgeSplit`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_void_from_MR_EdgeId_MR_EdgeId *MR_FillHoleNicelySettings_GetMutable_onEdgeSplit(MR_FillHoleNicelySettings *_this);

/// edge weighting scheme for smoothCurvature mode
/// Returns a pointer to a member variable of class `MR::FillHoleNicelySettings` named `edgeWeights`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_EdgeWeights *MR_FillHoleNicelySettings_Get_edgeWeights(const MR_FillHoleNicelySettings *_this);

/// edge weighting scheme for smoothCurvature mode
/// Modifies a member variable of class `MR::FillHoleNicelySettings` named `edgeWeights`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleNicelySettings_Set_edgeWeights(MR_FillHoleNicelySettings *_this, MR_EdgeWeights value);

/// edge weighting scheme for smoothCurvature mode
/// Returns a mutable pointer to a member variable of class `MR::FillHoleNicelySettings` named `edgeWeights`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeWeights *MR_FillHoleNicelySettings_GetMutable_edgeWeights(MR_FillHoleNicelySettings *_this);

/// vertex mass scheme for smoothCurvature mode
/// Returns a pointer to a member variable of class `MR::FillHoleNicelySettings` named `vmass`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertexMass *MR_FillHoleNicelySettings_Get_vmass(const MR_FillHoleNicelySettings *_this);

/// vertex mass scheme for smoothCurvature mode
/// Modifies a member variable of class `MR::FillHoleNicelySettings` named `vmass`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleNicelySettings_Set_vmass(MR_FillHoleNicelySettings *_this, MR_VertexMass value);

/// vertex mass scheme for smoothCurvature mode
/// Returns a mutable pointer to a member variable of class `MR::FillHoleNicelySettings` named `vmass`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertexMass *MR_FillHoleNicelySettings_GetMutable_vmass(MR_FillHoleNicelySettings *_this);

/// optional uv-coordinates of vertices; if provided then elements corresponding to new vertices will be added there
/// Returns a pointer to a member variable of class `MR::FillHoleNicelySettings` named `uvCoords`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertCoords2 *const *MR_FillHoleNicelySettings_Get_uvCoords(const MR_FillHoleNicelySettings *_this);

/// optional uv-coordinates of vertices; if provided then elements corresponding to new vertices will be added there
/// Modifies a member variable of class `MR::FillHoleNicelySettings` named `uvCoords`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleNicelySettings_Set_uvCoords(MR_FillHoleNicelySettings *_this, MR_VertCoords2 *value);

/// optional uv-coordinates of vertices; if provided then elements corresponding to new vertices will be added there
/// Returns a mutable pointer to a member variable of class `MR::FillHoleNicelySettings` named `uvCoords`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertCoords2 **MR_FillHoleNicelySettings_GetMutable_uvCoords(MR_FillHoleNicelySettings *_this);

/// optional colors of vertices; if provided then elements corresponding to new vertices will be added there
/// Returns a pointer to a member variable of class `MR::FillHoleNicelySettings` named `colorMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertColors *const *MR_FillHoleNicelySettings_Get_colorMap(const MR_FillHoleNicelySettings *_this);

/// optional colors of vertices; if provided then elements corresponding to new vertices will be added there
/// Modifies a member variable of class `MR::FillHoleNicelySettings` named `colorMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleNicelySettings_Set_colorMap(MR_FillHoleNicelySettings *_this, MR_VertColors *value);

/// optional colors of vertices; if provided then elements corresponding to new vertices will be added there
/// Returns a mutable pointer to a member variable of class `MR::FillHoleNicelySettings` named `colorMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertColors **MR_FillHoleNicelySettings_GetMutable_colorMap(MR_FillHoleNicelySettings *_this);

/// optional colors of faces; if provided then elements corresponding to new faces will be added there
/// Returns a pointer to a member variable of class `MR::FillHoleNicelySettings` named `faceColors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceColors *const *MR_FillHoleNicelySettings_Get_faceColors(const MR_FillHoleNicelySettings *_this);

/// optional colors of faces; if provided then elements corresponding to new faces will be added there
/// Modifies a member variable of class `MR::FillHoleNicelySettings` named `faceColors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleNicelySettings_Set_faceColors(MR_FillHoleNicelySettings *_this, MR_FaceColors *value);

/// optional colors of faces; if provided then elements corresponding to new faces will be added there
/// Returns a mutable pointer to a member variable of class `MR::FillHoleNicelySettings` named `faceColors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceColors **MR_FillHoleNicelySettings_GetMutable_faceColors(MR_FillHoleNicelySettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FillHoleNicelySettings_Destroy()` to free it when you're done using it.
MRC_API MR_FillHoleNicelySettings *MR_FillHoleNicelySettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FillHoleNicelySettings_DestroyArray()`.
/// Use `MR_FillHoleNicelySettings_OffsetMutablePtr()` and `MR_FillHoleNicelySettings_OffsetPtr()` to access the array elements.
MRC_API MR_FillHoleNicelySettings *MR_FillHoleNicelySettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::FillHoleNicelySettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FillHoleNicelySettings_Destroy()` to free it when you're done using it.
MRC_API MR_FillHoleNicelySettings *MR_FillHoleNicelySettings_ConstructFrom(MR_PassBy triangulateParams_pass_by, MR_FillHoleParams *triangulateParams, bool triangulateOnly, MR_UndirectedEdgeBitSet *notFlippable, float maxEdgeLen, int32_t maxEdgeSplits, float maxAngleChangeAfterFlip, bool smoothCurvature, bool naturalSmooth, MR_PassBy beforeEdgeSplit_pass_by, MR_std_function_bool_from_MR_EdgeId *beforeEdgeSplit, MR_PassBy onEdgeSplit_pass_by, MR_std_function_void_from_MR_EdgeId_MR_EdgeId *onEdgeSplit, MR_EdgeWeights edgeWeights, MR_VertexMass vmass, MR_VertCoords2 *uvCoords, MR_VertColors *colorMap, MR_FaceColors *faceColors);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FillHoleNicelySettings *MR_FillHoleNicelySettings_OffsetPtr(const MR_FillHoleNicelySettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FillHoleNicelySettings *MR_FillHoleNicelySettings_OffsetMutablePtr(MR_FillHoleNicelySettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FillHoleNicelySettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FillHoleNicelySettings_Destroy()` to free it when you're done using it.
MRC_API MR_FillHoleNicelySettings *MR_FillHoleNicelySettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_FillHoleNicelySettings *_other);

/// Destroys a heap-allocated instance of `MR_FillHoleNicelySettings`. Does nothing if the pointer is null.
MRC_API void MR_FillHoleNicelySettings_Destroy(const MR_FillHoleNicelySettings *_this);

/// Destroys a heap-allocated array of `MR_FillHoleNicelySettings`. Does nothing if the pointer is null.
MRC_API void MR_FillHoleNicelySettings_DestroyArray(const MR_FillHoleNicelySettings *_this);

/// Generated from a method of class `MR::FillHoleNicelySettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FillHoleNicelySettings *MR_FillHoleNicelySettings_AssignFromAnother(MR_FillHoleNicelySettings *_this, MR_PassBy _other_pass_by, MR_FillHoleNicelySettings *_other);

/// fills a hole in mesh specified by one of its edge,
/// optionally subdivides new patch on smaller triangles,
/// optionally make smooth connection with existing triangles outside the hole
/// \return triangles of the patch
/// Generated from function `MR::fillHoleNicely`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_fillHoleNicely(MR_Mesh *mesh, MR_EdgeId holeEdge, const MR_FillHoleNicelySettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
