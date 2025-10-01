// (C) 2024, AMV Consulting
#pragma once

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
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.


typedef int32_t MR_Side;
enum // MR_Side
{
    MR_Side_Negative = 0,
    MR_Side_Positive = 1,
};

/// Generated from class `MR::FindInnerShellSettings`.
typedef struct MR_FindInnerShellSettings MR_FindInnerShellSettings;

/// information about shell vertex
/// Generated from class `MR::ShellVertexInfo`.
typedef struct MR_ShellVertexInfo MR_ShellVertexInfo;

/// specifies which side of shell is of interest: negative or positive relative to mesh normals
/// Returns a pointer to a member variable of class `MR::FindInnerShellSettings` named `side`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Side *MR_FindInnerShellSettings_Get_side(const MR_FindInnerShellSettings *_this);

/// specifies which side of shell is of interest: negative or positive relative to mesh normals
/// Modifies a member variable of class `MR::FindInnerShellSettings` named `side`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindInnerShellSettings_Set_side(MR_FindInnerShellSettings *_this, MR_Side value);

/// specifies which side of shell is of interest: negative or positive relative to mesh normals
/// Returns a mutable pointer to a member variable of class `MR::FindInnerShellSettings` named `side`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Side *MR_FindInnerShellSettings_GetMutable_side(MR_FindInnerShellSettings *_this);

/// specifies maximum squared distance from shell parts of interest to source mesh
/// Returns a pointer to a member variable of class `MR::FindInnerShellSettings` named `maxDistSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FindInnerShellSettings_Get_maxDistSq(const MR_FindInnerShellSettings *_this);

/// specifies maximum squared distance from shell parts of interest to source mesh
/// Modifies a member variable of class `MR::FindInnerShellSettings` named `maxDistSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindInnerShellSettings_Set_maxDistSq(MR_FindInnerShellSettings *_this, float value);

/// specifies maximum squared distance from shell parts of interest to source mesh
/// Returns a mutable pointer to a member variable of class `MR::FindInnerShellSettings` named `maxDistSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FindInnerShellSettings_GetMutable_maxDistSq(MR_FindInnerShellSettings *_this);

/// if true, a slower algorithm is activated that is more robust in the presence of self-intersections on mesh
/// Returns a pointer to a member variable of class `MR::FindInnerShellSettings` named `useWindingNumber`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_FindInnerShellSettings_Get_useWindingNumber(const MR_FindInnerShellSettings *_this);

/// if true, a slower algorithm is activated that is more robust in the presence of self-intersections on mesh
/// Modifies a member variable of class `MR::FindInnerShellSettings` named `useWindingNumber`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindInnerShellSettings_Set_useWindingNumber(MR_FindInnerShellSettings *_this, bool value);

/// if true, a slower algorithm is activated that is more robust in the presence of self-intersections on mesh
/// Returns a mutable pointer to a member variable of class `MR::FindInnerShellSettings` named `useWindingNumber`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_FindInnerShellSettings_GetMutable_useWindingNumber(MR_FindInnerShellSettings *_this);

/// positive side if winding number below or equal this threshold;
/// ideal threshold: 0.5 for closed meshes; 0.0 for planar meshes
/// Returns a pointer to a member variable of class `MR::FindInnerShellSettings` named `windingNumberThreshold`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FindInnerShellSettings_Get_windingNumberThreshold(const MR_FindInnerShellSettings *_this);

/// positive side if winding number below or equal this threshold;
/// ideal threshold: 0.5 for closed meshes; 0.0 for planar meshes
/// Modifies a member variable of class `MR::FindInnerShellSettings` named `windingNumberThreshold`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindInnerShellSettings_Set_windingNumberThreshold(MR_FindInnerShellSettings *_this, float value);

/// positive side if winding number below or equal this threshold;
/// ideal threshold: 0.5 for closed meshes; 0.0 for planar meshes
/// Returns a mutable pointer to a member variable of class `MR::FindInnerShellSettings` named `windingNumberThreshold`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FindInnerShellSettings_GetMutable_windingNumberThreshold(MR_FindInnerShellSettings *_this);

/// components of proper side with smaller number of vertices than this value will be removed from the result;
/// components of wrong side with smaller number of vertices than this value will be added to the result
/// Returns a pointer to a member variable of class `MR::FindInnerShellSettings` named `minVertsInComp`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_FindInnerShellSettings_Get_minVertsInComp(const MR_FindInnerShellSettings *_this);

/// components of proper side with smaller number of vertices than this value will be removed from the result;
/// components of wrong side with smaller number of vertices than this value will be added to the result
/// Modifies a member variable of class `MR::FindInnerShellSettings` named `minVertsInComp`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindInnerShellSettings_Set_minVertsInComp(MR_FindInnerShellSettings *_this, int32_t value);

/// components of proper side with smaller number of vertices than this value will be removed from the result;
/// components of wrong side with smaller number of vertices than this value will be added to the result
/// Returns a mutable pointer to a member variable of class `MR::FindInnerShellSettings` named `minVertsInComp`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_FindInnerShellSettings_GetMutable_minVertsInComp(MR_FindInnerShellSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FindInnerShellSettings_Destroy()` to free it when you're done using it.
MRC_API MR_FindInnerShellSettings *MR_FindInnerShellSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FindInnerShellSettings_DestroyArray()`.
/// Use `MR_FindInnerShellSettings_OffsetMutablePtr()` and `MR_FindInnerShellSettings_OffsetPtr()` to access the array elements.
MRC_API MR_FindInnerShellSettings *MR_FindInnerShellSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::FindInnerShellSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FindInnerShellSettings_Destroy()` to free it when you're done using it.
MRC_API MR_FindInnerShellSettings *MR_FindInnerShellSettings_ConstructFrom(MR_Side side, float maxDistSq, bool useWindingNumber, float windingNumberThreshold, int32_t minVertsInComp);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FindInnerShellSettings *MR_FindInnerShellSettings_OffsetPtr(const MR_FindInnerShellSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FindInnerShellSettings *MR_FindInnerShellSettings_OffsetMutablePtr(MR_FindInnerShellSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FindInnerShellSettings`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FindInnerShellSettings_Destroy()` to free it when you're done using it.
MRC_API MR_FindInnerShellSettings *MR_FindInnerShellSettings_ConstructFromAnother(const MR_FindInnerShellSettings *_other);

/// Destroys a heap-allocated instance of `MR_FindInnerShellSettings`. Does nothing if the pointer is null.
MRC_API void MR_FindInnerShellSettings_Destroy(const MR_FindInnerShellSettings *_this);

/// Destroys a heap-allocated array of `MR_FindInnerShellSettings`. Does nothing if the pointer is null.
MRC_API void MR_FindInnerShellSettings_DestroyArray(const MR_FindInnerShellSettings *_this);

/// Generated from a method of class `MR::FindInnerShellSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FindInnerShellSettings *MR_FindInnerShellSettings_AssignFromAnother(MR_FindInnerShellSettings *_this, const MR_FindInnerShellSettings *_other);

/// true when shell vertex is within settings.maxDist from source mesh
/// Returns a pointer to a member variable of class `MR::ShellVertexInfo` named `inRange`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_ShellVertexInfo_Get_inRange(const MR_ShellVertexInfo *_this);

/// true when shell vertex is within settings.maxDist from source mesh
/// Modifies a member variable of class `MR::ShellVertexInfo` named `inRange`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ShellVertexInfo_Set_inRange(MR_ShellVertexInfo *_this, bool value);

/// true when shell vertex is within settings.maxDist from source mesh
/// Returns a mutable pointer to a member variable of class `MR::ShellVertexInfo` named `inRange`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_ShellVertexInfo_GetMutable_inRange(MR_ShellVertexInfo *_this);

/// shell vertex projects on source mesh boundary (never true for winding rule mode)
/// Returns a pointer to a member variable of class `MR::ShellVertexInfo` named `projOnBd`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_ShellVertexInfo_Get_projOnBd(const MR_ShellVertexInfo *_this);

/// shell vertex projects on source mesh boundary (never true for winding rule mode)
/// Modifies a member variable of class `MR::ShellVertexInfo` named `projOnBd`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ShellVertexInfo_Set_projOnBd(MR_ShellVertexInfo *_this, bool value);

/// shell vertex projects on source mesh boundary (never true for winding rule mode)
/// Returns a mutable pointer to a member variable of class `MR::ShellVertexInfo` named `projOnBd`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_ShellVertexInfo_GetMutable_projOnBd(MR_ShellVertexInfo *_this);

/// whether shell vertex is on requested side of source mesh
/// Returns a pointer to a member variable of class `MR::ShellVertexInfo` named `rightSide`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_ShellVertexInfo_Get_rightSide(const MR_ShellVertexInfo *_this);

/// whether shell vertex is on requested side of source mesh
/// Modifies a member variable of class `MR::ShellVertexInfo` named `rightSide`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ShellVertexInfo_Set_rightSide(MR_ShellVertexInfo *_this, bool value);

/// whether shell vertex is on requested side of source mesh
/// Returns a mutable pointer to a member variable of class `MR::ShellVertexInfo` named `rightSide`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_ShellVertexInfo_GetMutable_rightSide(MR_ShellVertexInfo *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ShellVertexInfo_Destroy()` to free it when you're done using it.
MRC_API MR_ShellVertexInfo *MR_ShellVertexInfo_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ShellVertexInfo_DestroyArray()`.
/// Use `MR_ShellVertexInfo_OffsetMutablePtr()` and `MR_ShellVertexInfo_OffsetPtr()` to access the array elements.
MRC_API MR_ShellVertexInfo *MR_ShellVertexInfo_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::ShellVertexInfo` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ShellVertexInfo_Destroy()` to free it when you're done using it.
MRC_API MR_ShellVertexInfo *MR_ShellVertexInfo_ConstructFrom(bool inRange, bool projOnBd, bool rightSide);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ShellVertexInfo *MR_ShellVertexInfo_OffsetPtr(const MR_ShellVertexInfo *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ShellVertexInfo *MR_ShellVertexInfo_OffsetMutablePtr(MR_ShellVertexInfo *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ShellVertexInfo`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ShellVertexInfo_Destroy()` to free it when you're done using it.
MRC_API MR_ShellVertexInfo *MR_ShellVertexInfo_ConstructFromAnother(const MR_ShellVertexInfo *_other);

/// Destroys a heap-allocated instance of `MR_ShellVertexInfo`. Does nothing if the pointer is null.
MRC_API void MR_ShellVertexInfo_Destroy(const MR_ShellVertexInfo *_this);

/// Destroys a heap-allocated array of `MR_ShellVertexInfo`. Does nothing if the pointer is null.
MRC_API void MR_ShellVertexInfo_DestroyArray(const MR_ShellVertexInfo *_this);

/// Generated from a method of class `MR::ShellVertexInfo` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ShellVertexInfo *MR_ShellVertexInfo_AssignFromAnother(MR_ShellVertexInfo *_this, const MR_ShellVertexInfo *_other);

/// returns true if shell vertex is in range, does not project on boundary and located on proper side
/// Generated from a method of class `MR::ShellVertexInfo` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ShellVertexInfo_valid(const MR_ShellVertexInfo *_this);

/// Tests \param shellPoint from bidirectional shell constructed for an open \param mp;
/// \return whether the distance from given point to given mesh part is of same sign as settings.side,
/// if useWindingNumber = false, returns false for all points projecting on mesh boundary
/// Generated from function `MR::classifyShellVert`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `shellPoint` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ShellVertexInfo_Destroy()` to free it when you're done using it.
MRC_API MR_ShellVertexInfo *MR_classifyShellVert(const MR_MeshPart *mp, const MR_Vector3f *shellPoint, const MR_FindInnerShellSettings *settings);

/// Finds inner-shell vertices on bidirectional \param shell constructed for an open \param mp;
/// The function will return all shell vertices that have distance to mesh of same sign as settings.side
/// Generated from function `MR::findInnerShellVerts`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `shell` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_findInnerShellVerts(const MR_MeshPart *mp, const MR_Mesh *shell, const MR_FindInnerShellSettings *settings);

/// Finds inner-shell faces on bidirectional \param shell constructed for an open \param mp;
/// The function will return all shell faces (after some subdivision) that have distance to mesh of same sign as settings.side
/// Generated from function `MR::findInnerShellFacesWithSplits`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `shell` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_findInnerShellFacesWithSplits(const MR_MeshPart *mp, MR_Mesh *shell, const MR_FindInnerShellSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
