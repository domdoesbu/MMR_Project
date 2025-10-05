// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRAffineXf.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_PointsLoadSettings MR_PointsLoadSettings; // Defined in `#include <MRCMesh/MRPointsLoadSettings.h>`.
typedef struct MR_VertColors MR_VertColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_expected_MR_LoadedObjects_std_string MR_expected_MR_LoadedObjects_std_string; // Defined in `#include <MRCMisc/expected_MR_LoadedObjects_std_string.h>`.
typedef struct MR_expected_MR_PointCloud_std_string MR_expected_MR_PointCloud_std_string; // Defined in `#include <MRCMisc/expected_MR_PointCloud_std_string.h>`.
typedef struct MR_expected_std_vector_MR_PointsLoad_NamedCloud_std_string MR_expected_std_vector_MR_PointsLoad_NamedCloud_std_string; // Defined in `#include <MRCMisc/expected_std_vector_MR_PointsLoad_NamedCloud_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_istream MR_std_istream; // Defined in `#include <MRCMisc/iostream.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// Generated from class `MR::PointsLoad::E57LoadSettings`.
typedef struct MR_PointsLoad_E57LoadSettings MR_PointsLoad_E57LoadSettings;

/// loads scene from e57 file
/// Generated from class `MR::PointsLoad::NamedCloud`.
typedef struct MR_PointsLoad_NamedCloud MR_PointsLoad_NamedCloud;

/// true => if input file has more than one cloud, they all will be combined in one
/// Returns a pointer to a member variable of class `MR::PointsLoad::E57LoadSettings` named `combineAllObjects`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_PointsLoad_E57LoadSettings_Get_combineAllObjects(const MR_PointsLoad_E57LoadSettings *_this);

/// true => if input file has more than one cloud, they all will be combined in one
/// Modifies a member variable of class `MR::PointsLoad::E57LoadSettings` named `combineAllObjects`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointsLoad_E57LoadSettings_Set_combineAllObjects(MR_PointsLoad_E57LoadSettings *_this, bool value);

/// true => if input file has more than one cloud, they all will be combined in one
/// Returns a mutable pointer to a member variable of class `MR::PointsLoad::E57LoadSettings` named `combineAllObjects`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_PointsLoad_E57LoadSettings_GetMutable_combineAllObjects(MR_PointsLoad_E57LoadSettings *_this);

/// true => return only identity transforms, applying them to points
/// Returns a pointer to a member variable of class `MR::PointsLoad::E57LoadSettings` named `identityXf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_PointsLoad_E57LoadSettings_Get_identityXf(const MR_PointsLoad_E57LoadSettings *_this);

/// true => return only identity transforms, applying them to points
/// Modifies a member variable of class `MR::PointsLoad::E57LoadSettings` named `identityXf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointsLoad_E57LoadSettings_Set_identityXf(MR_PointsLoad_E57LoadSettings *_this, bool value);

/// true => return only identity transforms, applying them to points
/// Returns a mutable pointer to a member variable of class `MR::PointsLoad::E57LoadSettings` named `identityXf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_PointsLoad_E57LoadSettings_GetMutable_identityXf(MR_PointsLoad_E57LoadSettings *_this);

/// progress report and cancellation
/// Returns a pointer to a member variable of class `MR::PointsLoad::E57LoadSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_PointsLoad_E57LoadSettings_Get_progress(const MR_PointsLoad_E57LoadSettings *_this);

/// progress report and cancellation
/// Modifies a member variable of class `MR::PointsLoad::E57LoadSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointsLoad_E57LoadSettings_Set_progress(MR_PointsLoad_E57LoadSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// progress report and cancellation
/// Returns a mutable pointer to a member variable of class `MR::PointsLoad::E57LoadSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_PointsLoad_E57LoadSettings_GetMutable_progress(MR_PointsLoad_E57LoadSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointsLoad_E57LoadSettings_Destroy()` to free it when you're done using it.
MRC_API MR_PointsLoad_E57LoadSettings *MR_PointsLoad_E57LoadSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PointsLoad_E57LoadSettings_DestroyArray()`.
/// Use `MR_PointsLoad_E57LoadSettings_OffsetMutablePtr()` and `MR_PointsLoad_E57LoadSettings_OffsetPtr()` to access the array elements.
MRC_API MR_PointsLoad_E57LoadSettings *MR_PointsLoad_E57LoadSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::PointsLoad::E57LoadSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointsLoad_E57LoadSettings_Destroy()` to free it when you're done using it.
MRC_API MR_PointsLoad_E57LoadSettings *MR_PointsLoad_E57LoadSettings_ConstructFrom(bool combineAllObjects, bool identityXf, MR_PassBy progress_pass_by, MR_std_function_bool_from_float *progress);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PointsLoad_E57LoadSettings *MR_PointsLoad_E57LoadSettings_OffsetPtr(const MR_PointsLoad_E57LoadSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PointsLoad_E57LoadSettings *MR_PointsLoad_E57LoadSettings_OffsetMutablePtr(MR_PointsLoad_E57LoadSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PointsLoad::E57LoadSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointsLoad_E57LoadSettings_Destroy()` to free it when you're done using it.
MRC_API MR_PointsLoad_E57LoadSettings *MR_PointsLoad_E57LoadSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PointsLoad_E57LoadSettings *_other);

/// Destroys a heap-allocated instance of `MR_PointsLoad_E57LoadSettings`. Does nothing if the pointer is null.
MRC_API void MR_PointsLoad_E57LoadSettings_Destroy(const MR_PointsLoad_E57LoadSettings *_this);

/// Destroys a heap-allocated array of `MR_PointsLoad_E57LoadSettings`. Does nothing if the pointer is null.
MRC_API void MR_PointsLoad_E57LoadSettings_DestroyArray(const MR_PointsLoad_E57LoadSettings *_this);

/// Generated from a method of class `MR::PointsLoad::E57LoadSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointsLoad_E57LoadSettings *MR_PointsLoad_E57LoadSettings_AssignFromAnother(MR_PointsLoad_E57LoadSettings *_this, MR_PassBy _other_pass_by, MR_PointsLoad_E57LoadSettings *_other);

/// Returns a pointer to a member variable of class `MR::PointsLoad::NamedCloud` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_PointsLoad_NamedCloud_Get_name(const MR_PointsLoad_NamedCloud *_this);

/// Modifies a member variable of class `MR::PointsLoad::NamedCloud` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_PointsLoad_NamedCloud_Set_name(MR_PointsLoad_NamedCloud *_this, const char *value, const char *value_end);

/// Returns a mutable pointer to a member variable of class `MR::PointsLoad::NamedCloud` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_PointsLoad_NamedCloud_GetMutable_name(MR_PointsLoad_NamedCloud *_this);

/// Returns a pointer to a member variable of class `MR::PointsLoad::NamedCloud` named `cloud`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PointCloud *MR_PointsLoad_NamedCloud_Get_cloud(const MR_PointsLoad_NamedCloud *_this);

/// Modifies a member variable of class `MR::PointsLoad::NamedCloud` named `cloud`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointsLoad_NamedCloud_Set_cloud(MR_PointsLoad_NamedCloud *_this, MR_PassBy value_pass_by, MR_PointCloud *value);

/// Returns a mutable pointer to a member variable of class `MR::PointsLoad::NamedCloud` named `cloud`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointCloud *MR_PointsLoad_NamedCloud_GetMutable_cloud(MR_PointsLoad_NamedCloud *_this);

/// Returns a pointer to a member variable of class `MR::PointsLoad::NamedCloud` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *MR_PointsLoad_NamedCloud_Get_xf(const MR_PointsLoad_NamedCloud *_this);

/// Modifies a member variable of class `MR::PointsLoad::NamedCloud` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointsLoad_NamedCloud_Set_xf(MR_PointsLoad_NamedCloud *_this, MR_AffineXf3f value);

/// Returns a mutable pointer to a member variable of class `MR::PointsLoad::NamedCloud` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AffineXf3f *MR_PointsLoad_NamedCloud_GetMutable_xf(MR_PointsLoad_NamedCloud *_this);

/// Returns a pointer to a member variable of class `MR::PointsLoad::NamedCloud` named `colors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertColors *MR_PointsLoad_NamedCloud_Get_colors(const MR_PointsLoad_NamedCloud *_this);

/// Modifies a member variable of class `MR::PointsLoad::NamedCloud` named `colors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointsLoad_NamedCloud_Set_colors(MR_PointsLoad_NamedCloud *_this, MR_PassBy value_pass_by, MR_VertColors *value);

/// Returns a mutable pointer to a member variable of class `MR::PointsLoad::NamedCloud` named `colors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertColors *MR_PointsLoad_NamedCloud_GetMutable_colors(MR_PointsLoad_NamedCloud *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointsLoad_NamedCloud_Destroy()` to free it when you're done using it.
MRC_API MR_PointsLoad_NamedCloud *MR_PointsLoad_NamedCloud_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PointsLoad_NamedCloud_DestroyArray()`.
/// Use `MR_PointsLoad_NamedCloud_OffsetMutablePtr()` and `MR_PointsLoad_NamedCloud_OffsetPtr()` to access the array elements.
MRC_API MR_PointsLoad_NamedCloud *MR_PointsLoad_NamedCloud_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::PointsLoad::NamedCloud` elementwise.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointsLoad_NamedCloud_Destroy()` to free it when you're done using it.
MRC_API MR_PointsLoad_NamedCloud *MR_PointsLoad_NamedCloud_ConstructFrom(const char *name, const char *name_end, MR_PassBy cloud_pass_by, MR_PointCloud *cloud, MR_AffineXf3f xf, MR_PassBy colors_pass_by, MR_VertColors *colors);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PointsLoad_NamedCloud *MR_PointsLoad_NamedCloud_OffsetPtr(const MR_PointsLoad_NamedCloud *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PointsLoad_NamedCloud *MR_PointsLoad_NamedCloud_OffsetMutablePtr(MR_PointsLoad_NamedCloud *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PointsLoad::NamedCloud`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointsLoad_NamedCloud_Destroy()` to free it when you're done using it.
MRC_API MR_PointsLoad_NamedCloud *MR_PointsLoad_NamedCloud_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PointsLoad_NamedCloud *_other);

/// Destroys a heap-allocated instance of `MR_PointsLoad_NamedCloud`. Does nothing if the pointer is null.
MRC_API void MR_PointsLoad_NamedCloud_Destroy(const MR_PointsLoad_NamedCloud *_this);

/// Destroys a heap-allocated array of `MR_PointsLoad_NamedCloud`. Does nothing if the pointer is null.
MRC_API void MR_PointsLoad_NamedCloud_DestroyArray(const MR_PointsLoad_NamedCloud *_this);

/// Generated from a method of class `MR::PointsLoad::NamedCloud` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointsLoad_NamedCloud *MR_PointsLoad_NamedCloud_AssignFromAnother(MR_PointsLoad_NamedCloud *_this, MR_PassBy _other_pass_by, MR_PointsLoad_NamedCloud *_other);

/// Generated from function `MR::PointsLoad::fromSceneE57File`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_MR_PointsLoad_NamedCloud_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_MR_PointsLoad_NamedCloud_std_string *MR_PointsLoad_fromSceneE57File(const char *file, const char *file_end, const MR_PointsLoad_E57LoadSettings *settings);

/// loads from .e57 file
/// Generated from function `MR::PointsLoad::fromE57`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_PointCloud_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_PointCloud_std_string *MR_PointsLoad_fromE57_std_filesystem_path(const char *file, const char *file_end, const MR_PointsLoadSettings *settings);

/// Generated from function `MR::PointsLoad::fromE57`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_PointCloud_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_PointCloud_std_string *MR_PointsLoad_fromE57_std_istream(MR_std_istream *in, const MR_PointsLoadSettings *settings);

/// Generated from function `MR::PointsLoad::loadObjectFromE57`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_LoadedObjects_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_LoadedObjects_std_string *MR_PointsLoad_loadObjectFromE57(const char *path, const char *path_end, const MR_std_function_bool_from_float *cb);

#ifdef __cplusplus
} // extern "C"
#endif
