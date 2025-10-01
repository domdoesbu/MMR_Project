// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_function_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_from_const_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_ref MR_std_function_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_from_const_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_ref; // Defined in `#include <MRCMisc/std_function_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitiv__dc87.h>`.
typedef struct MR_std_function_void_from_const_MR_Features_SubfeatureInfo_ref MR_std_function_void_from_const_MR_Features_SubfeatureInfo_ref; // Defined in `#include <MRCMisc/std_function_void_from_const_MR_Features_SubfeatureInfo_ref.h>`.
typedef struct MR_std_string_view MR_std_string_view; // Defined in `#include <MRCMisc/std_string_view.h>`.
typedef struct MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane; // Defined in `#include <MRCMisc/std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane.h>`.


// Describes a single feature produced by `forEachSubfeature()`.
/// Generated from class `MR::Features::SubfeatureInfo`.
typedef struct MR_Features_SubfeatureInfo MR_Features_SubfeatureInfo;

// A user-friendly name.
/// Returns a pointer to a member variable of class `MR::Features::SubfeatureInfo` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string_view *MR_Features_SubfeatureInfo_Get_name(const MR_Features_SubfeatureInfo *_this);

// A user-friendly name.
/// Modifies a member variable of class `MR::Features::SubfeatureInfo` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_Features_SubfeatureInfo_Set_name(MR_Features_SubfeatureInfo *_this, const char *value, const char *value_end);

// A user-friendly name.
/// Returns a mutable pointer to a member variable of class `MR::Features::SubfeatureInfo` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string_view *MR_Features_SubfeatureInfo_GetMutable_name(MR_Features_SubfeatureInfo *_this);

// Whether the feature has infinite length.
/// Returns a pointer to a member variable of class `MR::Features::SubfeatureInfo` named `isInfinite`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_Features_SubfeatureInfo_Get_isInfinite(const MR_Features_SubfeatureInfo *_this);

// Whether the feature has infinite length.
/// Modifies a member variable of class `MR::Features::SubfeatureInfo` named `isInfinite`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Features_SubfeatureInfo_Set_isInfinite(MR_Features_SubfeatureInfo *_this, bool value);

// Whether the feature has infinite length.
/// Returns a mutable pointer to a member variable of class `MR::Features::SubfeatureInfo` named `isInfinite`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_Features_SubfeatureInfo_GetMutable_isInfinite(MR_Features_SubfeatureInfo *_this);

// Call this to create this subfeature.
// Pass the same feature you passed to `forEachSubfeature()`, or a DIFFERENT one to create the same kind of subfeature relative to that.
/// Returns a pointer to a member variable of class `MR::Features::SubfeatureInfo` named `create`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_from_const_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_ref *MR_Features_SubfeatureInfo_Get_create(const MR_Features_SubfeatureInfo *_this);

// Call this to create this subfeature.
// Pass the same feature you passed to `forEachSubfeature()`, or a DIFFERENT one to create the same kind of subfeature relative to that.
/// Modifies a member variable of class `MR::Features::SubfeatureInfo` named `create`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Features_SubfeatureInfo_Set_create(MR_Features_SubfeatureInfo *_this, MR_PassBy value_pass_by, MR_std_function_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_from_const_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_ref *value);

// Call this to create this subfeature.
// Pass the same feature you passed to `forEachSubfeature()`, or a DIFFERENT one to create the same kind of subfeature relative to that.
/// Returns a mutable pointer to a member variable of class `MR::Features::SubfeatureInfo` named `create`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_from_const_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_ref *MR_Features_SubfeatureInfo_GetMutable_create(MR_Features_SubfeatureInfo *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_SubfeatureInfo_Destroy()` to free it when you're done using it.
MRC_API MR_Features_SubfeatureInfo *MR_Features_SubfeatureInfo_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Features_SubfeatureInfo_DestroyArray()`.
/// Use `MR_Features_SubfeatureInfo_OffsetMutablePtr()` and `MR_Features_SubfeatureInfo_OffsetPtr()` to access the array elements.
MRC_API MR_Features_SubfeatureInfo *MR_Features_SubfeatureInfo_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Features::SubfeatureInfo` elementwise.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_SubfeatureInfo_Destroy()` to free it when you're done using it.
MRC_API MR_Features_SubfeatureInfo *MR_Features_SubfeatureInfo_ConstructFrom(const char *name, const char *name_end, bool isInfinite, MR_PassBy create_pass_by, MR_std_function_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_from_const_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_ref *create);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Features_SubfeatureInfo *MR_Features_SubfeatureInfo_OffsetPtr(const MR_Features_SubfeatureInfo *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Features_SubfeatureInfo *MR_Features_SubfeatureInfo_OffsetMutablePtr(MR_Features_SubfeatureInfo *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Features::SubfeatureInfo`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_SubfeatureInfo_Destroy()` to free it when you're done using it.
MRC_API MR_Features_SubfeatureInfo *MR_Features_SubfeatureInfo_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Features_SubfeatureInfo *_other);

/// Destroys a heap-allocated instance of `MR_Features_SubfeatureInfo`. Does nothing if the pointer is null.
MRC_API void MR_Features_SubfeatureInfo_Destroy(const MR_Features_SubfeatureInfo *_this);

/// Destroys a heap-allocated array of `MR_Features_SubfeatureInfo`. Does nothing if the pointer is null.
MRC_API void MR_Features_SubfeatureInfo_DestroyArray(const MR_Features_SubfeatureInfo *_this);

/// Generated from a method of class `MR::Features::SubfeatureInfo` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Features_SubfeatureInfo *MR_Features_SubfeatureInfo_AssignFromAnother(MR_Features_SubfeatureInfo *_this, MR_PassBy _other_pass_by, MR_Features_SubfeatureInfo *_other);

// Decomposes a feature to its subfeatures, by calling `func()` on each subfeature.
// This only returns the direct subfeatures. You can call this recursively to obtain all features,
//   but beware of duplicates (there's no easy way to filter them).
/// Generated from function `MR::Features::forEachSubfeature`.
/// Parameter `feature` can not be null. It is a single object.
/// Parameter `func` can not be null. It is a single object.
MRC_API void MR_Features_forEachSubfeature(const MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *feature, const MR_std_function_void_from_const_MR_Features_SubfeatureInfo_ref *func);

#ifdef __cplusplus
} // extern "C"
#endif
