// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_expected_MR_FaceBitSet_std_string MR_expected_MR_FaceBitSet_std_string; // Defined in `#include <MRCMisc/expected_MR_FaceBitSet_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


/// Generated from class `MR::FindOverlappingSettings`.
typedef struct MR_FindOverlappingSettings MR_FindOverlappingSettings;

// suggestion: multiply it on mesh.getBoundingBox().size().lengthSq();
/// Returns a pointer to a member variable of class `MR::FindOverlappingSettings` named `maxDistSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FindOverlappingSettings_Get_maxDistSq(const MR_FindOverlappingSettings *_this);

// suggestion: multiply it on mesh.getBoundingBox().size().lengthSq();
/// Modifies a member variable of class `MR::FindOverlappingSettings` named `maxDistSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindOverlappingSettings_Set_maxDistSq(MR_FindOverlappingSettings *_this, float value);

// suggestion: multiply it on mesh.getBoundingBox().size().lengthSq();
/// Returns a mutable pointer to a member variable of class `MR::FindOverlappingSettings` named `maxDistSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FindOverlappingSettings_GetMutable_maxDistSq(MR_FindOverlappingSettings *_this);

/// maximal dot product of one triangle and another overlapping triangle normals
/// Returns a pointer to a member variable of class `MR::FindOverlappingSettings` named `maxNormalDot`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FindOverlappingSettings_Get_maxNormalDot(const MR_FindOverlappingSettings *_this);

/// maximal dot product of one triangle and another overlapping triangle normals
/// Modifies a member variable of class `MR::FindOverlappingSettings` named `maxNormalDot`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindOverlappingSettings_Set_maxNormalDot(MR_FindOverlappingSettings *_this, float value);

/// maximal dot product of one triangle and another overlapping triangle normals
/// Returns a mutable pointer to a member variable of class `MR::FindOverlappingSettings` named `maxNormalDot`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FindOverlappingSettings_GetMutable_maxNormalDot(MR_FindOverlappingSettings *_this);

/// consider triangle as overlapping only if the area of the oppositely oriented triangle is at least given fraction of the triangle's area
/// Returns a pointer to a member variable of class `MR::FindOverlappingSettings` named `minAreaFraction`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FindOverlappingSettings_Get_minAreaFraction(const MR_FindOverlappingSettings *_this);

/// consider triangle as overlapping only if the area of the oppositely oriented triangle is at least given fraction of the triangle's area
/// Modifies a member variable of class `MR::FindOverlappingSettings` named `minAreaFraction`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindOverlappingSettings_Set_minAreaFraction(MR_FindOverlappingSettings *_this, float value);

/// consider triangle as overlapping only if the area of the oppositely oriented triangle is at least given fraction of the triangle's area
/// Returns a mutable pointer to a member variable of class `MR::FindOverlappingSettings` named `minAreaFraction`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FindOverlappingSettings_GetMutable_minAreaFraction(MR_FindOverlappingSettings *_this);

/// for reporting current progress and allowing the user to cancel the algorithm
/// Returns a pointer to a member variable of class `MR::FindOverlappingSettings` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_FindOverlappingSettings_Get_cb(const MR_FindOverlappingSettings *_this);

/// for reporting current progress and allowing the user to cancel the algorithm
/// Modifies a member variable of class `MR::FindOverlappingSettings` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindOverlappingSettings_Set_cb(MR_FindOverlappingSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// for reporting current progress and allowing the user to cancel the algorithm
/// Returns a mutable pointer to a member variable of class `MR::FindOverlappingSettings` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_FindOverlappingSettings_GetMutable_cb(MR_FindOverlappingSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FindOverlappingSettings_Destroy()` to free it when you're done using it.
MRC_API MR_FindOverlappingSettings *MR_FindOverlappingSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FindOverlappingSettings_DestroyArray()`.
/// Use `MR_FindOverlappingSettings_OffsetMutablePtr()` and `MR_FindOverlappingSettings_OffsetPtr()` to access the array elements.
MRC_API MR_FindOverlappingSettings *MR_FindOverlappingSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::FindOverlappingSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FindOverlappingSettings_Destroy()` to free it when you're done using it.
MRC_API MR_FindOverlappingSettings *MR_FindOverlappingSettings_ConstructFrom(float maxDistSq, float maxNormalDot, float minAreaFraction, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FindOverlappingSettings *MR_FindOverlappingSettings_OffsetPtr(const MR_FindOverlappingSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FindOverlappingSettings *MR_FindOverlappingSettings_OffsetMutablePtr(MR_FindOverlappingSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FindOverlappingSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FindOverlappingSettings_Destroy()` to free it when you're done using it.
MRC_API MR_FindOverlappingSettings *MR_FindOverlappingSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_FindOverlappingSettings *_other);

/// Destroys a heap-allocated instance of `MR_FindOverlappingSettings`. Does nothing if the pointer is null.
MRC_API void MR_FindOverlappingSettings_Destroy(const MR_FindOverlappingSettings *_this);

/// Destroys a heap-allocated array of `MR_FindOverlappingSettings`. Does nothing if the pointer is null.
MRC_API void MR_FindOverlappingSettings_DestroyArray(const MR_FindOverlappingSettings *_this);

/// Generated from a method of class `MR::FindOverlappingSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FindOverlappingSettings *MR_FindOverlappingSettings_AssignFromAnother(MR_FindOverlappingSettings *_this, MR_PassBy _other_pass_by, MR_FindOverlappingSettings *_other);

/// finds all triangles that have oppositely oriented close triangle in the mesh
/// Generated from function `MR::findOverlappingTris`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_FaceBitSet_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_FaceBitSet_std_string *MR_findOverlappingTris(const MR_MeshPart *mp, const MR_FindOverlappingSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
