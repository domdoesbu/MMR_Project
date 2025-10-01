// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_function_void_from_MR_SceneLoad_SceneLoadResult MR_std_function_void_from_MR_SceneLoad_SceneLoadResult; // Defined in `#include <MRCMisc/std_function_void_from_MR_SceneLoad_SceneLoadResult.h>`.
typedef struct MR_std_shared_ptr_MR_SceneRootObject MR_std_shared_ptr_MR_SceneRootObject; // Defined in `#include <MRCMisc/std_shared_ptr_MR_SceneRootObject.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_std_filesystem_path MR_std_vector_std_filesystem_path; // Defined in `#include <MRCMisc/std_vector_std_filesystem_path.h>`.


/// Scene loading result
/// Generated from class `MR::SceneLoad::SceneLoadResult`.
typedef struct MR_SceneLoad_SceneLoadResult MR_SceneLoad_SceneLoadResult;

/// The loaded scene or empty object
/// Returns a pointer to a member variable of class `MR::SceneLoad::SceneLoadResult` named `scene`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_MR_SceneRootObject *MR_SceneLoad_SceneLoadResult_Get_scene(const MR_SceneLoad_SceneLoadResult *_this);

/// The loaded scene or empty object
/// Modifies a member variable of class `MR::SceneLoad::SceneLoadResult` named `scene`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SceneLoad_SceneLoadResult_Set_scene(MR_SceneLoad_SceneLoadResult *_this, MR_PassBy value_pass_by, MR_std_shared_ptr_MR_SceneRootObject *value);

/// The loaded scene or empty object
/// Returns a mutable pointer to a member variable of class `MR::SceneLoad::SceneLoadResult` named `scene`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_shared_ptr_MR_SceneRootObject *MR_SceneLoad_SceneLoadResult_GetMutable_scene(MR_SceneLoad_SceneLoadResult *_this);

/// Marks whether the scene was loaded from a single file (false) or was built from scratch (true)
/// Returns a pointer to a member variable of class `MR::SceneLoad::SceneLoadResult` named `isSceneConstructed`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SceneLoad_SceneLoadResult_Get_isSceneConstructed(const MR_SceneLoad_SceneLoadResult *_this);

/// Marks whether the scene was loaded from a single file (false) or was built from scratch (true)
/// Modifies a member variable of class `MR::SceneLoad::SceneLoadResult` named `isSceneConstructed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SceneLoad_SceneLoadResult_Set_isSceneConstructed(MR_SceneLoad_SceneLoadResult *_this, bool value);

/// Marks whether the scene was loaded from a single file (false) or was built from scratch (true)
/// Returns a mutable pointer to a member variable of class `MR::SceneLoad::SceneLoadResult` named `isSceneConstructed`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SceneLoad_SceneLoadResult_GetMutable_isSceneConstructed(MR_SceneLoad_SceneLoadResult *_this);

/// List of successfully loaded files
/// Returns a pointer to a member variable of class `MR::SceneLoad::SceneLoadResult` named `loadedFiles`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_std_filesystem_path *MR_SceneLoad_SceneLoadResult_Get_loadedFiles(const MR_SceneLoad_SceneLoadResult *_this);

/// List of successfully loaded files
/// Modifies a member variable of class `MR::SceneLoad::SceneLoadResult` named `loadedFiles`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SceneLoad_SceneLoadResult_Set_loadedFiles(MR_SceneLoad_SceneLoadResult *_this, MR_PassBy value_pass_by, MR_std_vector_std_filesystem_path *value);

/// List of successfully loaded files
/// Returns a mutable pointer to a member variable of class `MR::SceneLoad::SceneLoadResult` named `loadedFiles`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_std_filesystem_path *MR_SceneLoad_SceneLoadResult_GetMutable_loadedFiles(MR_SceneLoad_SceneLoadResult *_this);

/// Error summary text
// TODO: user-defined error format
/// Returns a pointer to a member variable of class `MR::SceneLoad::SceneLoadResult` named `errorSummary`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_SceneLoad_SceneLoadResult_Get_errorSummary(const MR_SceneLoad_SceneLoadResult *_this);

/// Error summary text
// TODO: user-defined error format
/// Modifies a member variable of class `MR::SceneLoad::SceneLoadResult` named `errorSummary`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_SceneLoad_SceneLoadResult_Set_errorSummary(MR_SceneLoad_SceneLoadResult *_this, const char *value, const char *value_end);

/// Error summary text
// TODO: user-defined error format
/// Returns a mutable pointer to a member variable of class `MR::SceneLoad::SceneLoadResult` named `errorSummary`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_SceneLoad_SceneLoadResult_GetMutable_errorSummary(MR_SceneLoad_SceneLoadResult *_this);

/// Warning summary text
// TODO: user-defined warning format
/// Returns a pointer to a member variable of class `MR::SceneLoad::SceneLoadResult` named `warningSummary`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_SceneLoad_SceneLoadResult_Get_warningSummary(const MR_SceneLoad_SceneLoadResult *_this);

/// Warning summary text
// TODO: user-defined warning format
/// Modifies a member variable of class `MR::SceneLoad::SceneLoadResult` named `warningSummary`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_SceneLoad_SceneLoadResult_Set_warningSummary(MR_SceneLoad_SceneLoadResult *_this, const char *value, const char *value_end);

/// Warning summary text
// TODO: user-defined warning format
/// Returns a mutable pointer to a member variable of class `MR::SceneLoad::SceneLoadResult` named `warningSummary`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_SceneLoad_SceneLoadResult_GetMutable_warningSummary(MR_SceneLoad_SceneLoadResult *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SceneLoad_SceneLoadResult_Destroy()` to free it when you're done using it.
MRC_API MR_SceneLoad_SceneLoadResult *MR_SceneLoad_SceneLoadResult_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SceneLoad_SceneLoadResult_DestroyArray()`.
/// Use `MR_SceneLoad_SceneLoadResult_OffsetMutablePtr()` and `MR_SceneLoad_SceneLoadResult_OffsetPtr()` to access the array elements.
MRC_API MR_SceneLoad_SceneLoadResult *MR_SceneLoad_SceneLoadResult_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::SceneLoad::SceneLoadResult` elementwise.
/// Parameter `errorSummary` can not be null.
/// If `errorSummary_end` is null, then `errorSummary` is assumed to be null-terminated.
/// Parameter `warningSummary` can not be null.
/// If `warningSummary_end` is null, then `warningSummary` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SceneLoad_SceneLoadResult_Destroy()` to free it when you're done using it.
MRC_API MR_SceneLoad_SceneLoadResult *MR_SceneLoad_SceneLoadResult_ConstructFrom(MR_PassBy scene_pass_by, MR_std_shared_ptr_MR_SceneRootObject *scene, bool isSceneConstructed, MR_PassBy loadedFiles_pass_by, MR_std_vector_std_filesystem_path *loadedFiles, const char *errorSummary, const char *errorSummary_end, const char *warningSummary, const char *warningSummary_end);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SceneLoad_SceneLoadResult *MR_SceneLoad_SceneLoadResult_OffsetPtr(const MR_SceneLoad_SceneLoadResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SceneLoad_SceneLoadResult *MR_SceneLoad_SceneLoadResult_OffsetMutablePtr(MR_SceneLoad_SceneLoadResult *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SceneLoad::SceneLoadResult`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SceneLoad_SceneLoadResult_Destroy()` to free it when you're done using it.
MRC_API MR_SceneLoad_SceneLoadResult *MR_SceneLoad_SceneLoadResult_ConstructFromAnother(MR_PassBy _other_pass_by, MR_SceneLoad_SceneLoadResult *_other);

/// Destroys a heap-allocated instance of `MR_SceneLoad_SceneLoadResult`. Does nothing if the pointer is null.
MRC_API void MR_SceneLoad_SceneLoadResult_Destroy(const MR_SceneLoad_SceneLoadResult *_this);

/// Destroys a heap-allocated array of `MR_SceneLoad_SceneLoadResult`. Does nothing if the pointer is null.
MRC_API void MR_SceneLoad_SceneLoadResult_DestroyArray(const MR_SceneLoad_SceneLoadResult *_this);

/// Generated from a method of class `MR::SceneLoad::SceneLoadResult` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SceneLoad_SceneLoadResult *MR_SceneLoad_SceneLoadResult_AssignFromAnother(MR_SceneLoad_SceneLoadResult *_this, MR_PassBy _other_pass_by, MR_SceneLoad_SceneLoadResult *_other);

/// Load scene from file
/// Generated from function `MR::SceneLoad::fromAnySupportedFormat`.
/// Parameter `files` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SceneLoad_SceneLoadResult_Destroy()` to free it when you're done using it.
MRC_API MR_SceneLoad_SceneLoadResult *MR_SceneLoad_fromAnySupportedFormat(const MR_std_vector_std_filesystem_path *files, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::SceneLoad::asyncFromAnySupportedFormat`.
/// Parameter `files` can not be null. It is a single object.
/// Parameter `progressCallback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API void MR_SceneLoad_asyncFromAnySupportedFormat(const MR_std_vector_std_filesystem_path *files, MR_PassBy postLoadCallback_pass_by, MR_std_function_void_from_MR_SceneLoad_SceneLoadResult *postLoadCallback, MR_PassBy progressCallback_pass_by, MR_std_function_bool_from_float *progressCallback);

#ifdef __cplusplus
} // extern "C"
#endif
