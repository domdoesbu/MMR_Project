// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshLoadSettings MR_MeshLoadSettings; // Defined in `#include <MRCMesh/MRMeshLoadSettings.h>`.
typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_PointsLoadSettings MR_PointsLoadSettings; // Defined in `#include <MRCMesh/MRPointsLoadSettings.h>`.
typedef struct MR_SaveSettings MR_SaveSettings; // Defined in `#include <MRCMesh/MRSaveSettings.h>`.
typedef struct MR_expected_MR_Mesh_std_string MR_expected_MR_Mesh_std_string; // Defined in `#include <MRCMisc/expected_MR_Mesh_std_string.h>`.
typedef struct MR_expected_MR_PointCloud_std_string MR_expected_MR_PointCloud_std_string; // Defined in `#include <MRCMisc/expected_MR_PointCloud_std_string.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_istream MR_std_istream; // Defined in `#include <MRCMisc/iostream.h>`.
typedef struct MR_std_ostream MR_std_ostream; // Defined in `#include <MRCMisc/iostream.h>`.


/// Generated from class `MR::MeshSave::CtmSaveOptions`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::SaveSettings`
typedef struct MR_MeshSave_CtmSaveOptions MR_MeshSave_CtmSaveOptions;

typedef int32_t MR_MeshSave_CtmSaveOptions_MeshCompression;
enum // MR_MeshSave_CtmSaveOptions_MeshCompression
{
    ///< no compression at all, fast but not effective
    MR_MeshSave_CtmSaveOptions_MeshCompression_None = 0,
    ///< compression without any loss in vertex coordinates
    MR_MeshSave_CtmSaveOptions_MeshCompression_Lossless = 1,
    ///< compression with loss in vertex coordinates
    MR_MeshSave_CtmSaveOptions_MeshCompression_Lossy = 2,
};

/// Generated from class `MR::PointsSave::CtmSavePointsOptions`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::SaveSettings`
typedef struct MR_PointsSave_CtmSavePointsOptions MR_PointsSave_CtmSavePointsOptions;

/// loads from .ctm file
/// Generated from function `MR::MeshLoad::fromCtm`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_MeshLoad_fromCtm_std_filesystem_path(const char *file, const char *file_end, const MR_MeshLoadSettings *settings);

/// Generated from function `MR::MeshLoad::fromCtm`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_MeshLoad_fromCtm_std_istream(MR_std_istream *in, const MR_MeshLoadSettings *settings);

/// Returns a pointer to a member variable of class `MR::MeshSave::CtmSaveOptions` named `meshCompression`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshSave_CtmSaveOptions_MeshCompression *MR_MeshSave_CtmSaveOptions_Get_meshCompression(const MR_MeshSave_CtmSaveOptions *_this);

/// Modifies a member variable of class `MR::MeshSave::CtmSaveOptions` named `meshCompression`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshSave_CtmSaveOptions_Set_meshCompression(MR_MeshSave_CtmSaveOptions *_this, MR_MeshSave_CtmSaveOptions_MeshCompression value);

/// Returns a mutable pointer to a member variable of class `MR::MeshSave::CtmSaveOptions` named `meshCompression`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshSave_CtmSaveOptions_MeshCompression *MR_MeshSave_CtmSaveOptions_GetMutable_meshCompression(MR_MeshSave_CtmSaveOptions *_this);

//~= 0.00098
/// Returns a pointer to a member variable of class `MR::MeshSave::CtmSaveOptions` named `vertexPrecision`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MeshSave_CtmSaveOptions_Get_vertexPrecision(const MR_MeshSave_CtmSaveOptions *_this);

//~= 0.00098
/// Modifies a member variable of class `MR::MeshSave::CtmSaveOptions` named `vertexPrecision`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshSave_CtmSaveOptions_Set_vertexPrecision(MR_MeshSave_CtmSaveOptions *_this, float value);

//~= 0.00098
/// Returns a mutable pointer to a member variable of class `MR::MeshSave::CtmSaveOptions` named `vertexPrecision`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MeshSave_CtmSaveOptions_GetMutable_vertexPrecision(MR_MeshSave_CtmSaveOptions *_this);

/// LZMA compression: 0 - minimal compression, but fast; 9 - maximal compression, but slow
/// Returns a pointer to a member variable of class `MR::MeshSave::CtmSaveOptions` named `compressionLevel`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_MeshSave_CtmSaveOptions_Get_compressionLevel(const MR_MeshSave_CtmSaveOptions *_this);

/// LZMA compression: 0 - minimal compression, but fast; 9 - maximal compression, but slow
/// Modifies a member variable of class `MR::MeshSave::CtmSaveOptions` named `compressionLevel`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshSave_CtmSaveOptions_Set_compressionLevel(MR_MeshSave_CtmSaveOptions *_this, int32_t value);

/// LZMA compression: 0 - minimal compression, but fast; 9 - maximal compression, but slow
/// Returns a mutable pointer to a member variable of class `MR::MeshSave::CtmSaveOptions` named `compressionLevel`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_MeshSave_CtmSaveOptions_GetMutable_compressionLevel(MR_MeshSave_CtmSaveOptions *_this);

/// comment saved in the file
/// Returns a pointer to a member variable of class `MR::MeshSave::CtmSaveOptions` named `comment`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const char *const *MR_MeshSave_CtmSaveOptions_Get_comment(const MR_MeshSave_CtmSaveOptions *_this);

/// comment saved in the file
/// Modifies a member variable of class `MR::MeshSave::CtmSaveOptions` named `comment`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshSave_CtmSaveOptions_Set_comment(MR_MeshSave_CtmSaveOptions *_this, const char *value);

/// comment saved in the file
/// Returns a mutable pointer to a member variable of class `MR::MeshSave::CtmSaveOptions` named `comment`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const char **MR_MeshSave_CtmSaveOptions_GetMutable_comment(MR_MeshSave_CtmSaveOptions *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshSave_CtmSaveOptions_Destroy()` to free it when you're done using it.
MRC_API MR_MeshSave_CtmSaveOptions *MR_MeshSave_CtmSaveOptions_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshSave_CtmSaveOptions_DestroyArray()`.
/// Use `MR_MeshSave_CtmSaveOptions_OffsetMutablePtr()` and `MR_MeshSave_CtmSaveOptions_OffsetPtr()` to access the array elements.
MRC_API MR_MeshSave_CtmSaveOptions *MR_MeshSave_CtmSaveOptions_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshSave_CtmSaveOptions *MR_MeshSave_CtmSaveOptions_OffsetPtr(const MR_MeshSave_CtmSaveOptions *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshSave_CtmSaveOptions *MR_MeshSave_CtmSaveOptions_OffsetMutablePtr(MR_MeshSave_CtmSaveOptions *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::MeshSave::CtmSaveOptions` to its base class `MR::SaveSettings`.
/// This version is acting on mutable pointers.
MRC_API const MR_SaveSettings *MR_MeshSave_CtmSaveOptions_UpcastTo_MR_SaveSettings(const MR_MeshSave_CtmSaveOptions *object);

/// Upcasts an instance of `MR::MeshSave::CtmSaveOptions` to its base class `MR::SaveSettings`.
MRC_API MR_SaveSettings *MR_MeshSave_CtmSaveOptions_MutableUpcastTo_MR_SaveSettings(MR_MeshSave_CtmSaveOptions *object);

/// Generated from a constructor of class `MR::MeshSave::CtmSaveOptions`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshSave_CtmSaveOptions_Destroy()` to free it when you're done using it.
MRC_API MR_MeshSave_CtmSaveOptions *MR_MeshSave_CtmSaveOptions_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MeshSave_CtmSaveOptions *_other);

/// Destroys a heap-allocated instance of `MR_MeshSave_CtmSaveOptions`. Does nothing if the pointer is null.
MRC_API void MR_MeshSave_CtmSaveOptions_Destroy(const MR_MeshSave_CtmSaveOptions *_this);

/// Destroys a heap-allocated array of `MR_MeshSave_CtmSaveOptions`. Does nothing if the pointer is null.
MRC_API void MR_MeshSave_CtmSaveOptions_DestroyArray(const MR_MeshSave_CtmSaveOptions *_this);

/// Generated from a method of class `MR::MeshSave::CtmSaveOptions` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshSave_CtmSaveOptions *MR_MeshSave_CtmSaveOptions_AssignFromAnother(MR_MeshSave_CtmSaveOptions *_this, MR_PassBy _other_pass_by, MR_MeshSave_CtmSaveOptions *_other);

/// saves in .ctm file
/// Generated from function `MR::MeshSave::toCtm`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `options` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_MeshSave_toCtm_const_std_filesystem_path_ref_MR_MeshSave_CtmSaveOptions(const MR_Mesh *mesh, const char *file, const char *file_end, const MR_MeshSave_CtmSaveOptions *options);

/// Generated from function `MR::MeshSave::toCtm`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `options` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_MeshSave_toCtm_std_ostream_ref_MR_MeshSave_CtmSaveOptions(const MR_Mesh *mesh, MR_std_ostream *out, const MR_MeshSave_CtmSaveOptions *options);

/// Generated from function `MR::MeshSave::toCtm`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_MeshSave_toCtm_const_std_filesystem_path_ref_MR_SaveSettings(const MR_Mesh *mesh, const char *file, const char *file_end, const MR_SaveSettings *settings);

/// Generated from function `MR::MeshSave::toCtm`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_MeshSave_toCtm_std_ostream_ref_MR_SaveSettings(const MR_Mesh *mesh, MR_std_ostream *out, const MR_SaveSettings *settings);

/// loads from .ctm file
/// Generated from function `MR::PointsLoad::fromCtm`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_PointCloud_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_PointCloud_std_string *MR_PointsLoad_fromCtm_std_filesystem_path(const char *file, const char *file_end, const MR_PointsLoadSettings *settings);

/// Generated from function `MR::PointsLoad::fromCtm`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_PointCloud_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_PointCloud_std_string *MR_PointsLoad_fromCtm_std_istream(MR_std_istream *in, const MR_PointsLoadSettings *settings);

/// 0 - minimal compression, but fast; 9 - maximal compression, but slow
/// Returns a pointer to a member variable of class `MR::PointsSave::CtmSavePointsOptions` named `compressionLevel`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_PointsSave_CtmSavePointsOptions_Get_compressionLevel(const MR_PointsSave_CtmSavePointsOptions *_this);

/// 0 - minimal compression, but fast; 9 - maximal compression, but slow
/// Modifies a member variable of class `MR::PointsSave::CtmSavePointsOptions` named `compressionLevel`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointsSave_CtmSavePointsOptions_Set_compressionLevel(MR_PointsSave_CtmSavePointsOptions *_this, int32_t value);

/// 0 - minimal compression, but fast; 9 - maximal compression, but slow
/// Returns a mutable pointer to a member variable of class `MR::PointsSave::CtmSavePointsOptions` named `compressionLevel`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_PointsSave_CtmSavePointsOptions_GetMutable_compressionLevel(MR_PointsSave_CtmSavePointsOptions *_this);

/// comment saved in the file
/// Returns a pointer to a member variable of class `MR::PointsSave::CtmSavePointsOptions` named `comment`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const char *const *MR_PointsSave_CtmSavePointsOptions_Get_comment(const MR_PointsSave_CtmSavePointsOptions *_this);

/// comment saved in the file
/// Modifies a member variable of class `MR::PointsSave::CtmSavePointsOptions` named `comment`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointsSave_CtmSavePointsOptions_Set_comment(MR_PointsSave_CtmSavePointsOptions *_this, const char *value);

/// comment saved in the file
/// Returns a mutable pointer to a member variable of class `MR::PointsSave::CtmSavePointsOptions` named `comment`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const char **MR_PointsSave_CtmSavePointsOptions_GetMutable_comment(MR_PointsSave_CtmSavePointsOptions *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointsSave_CtmSavePointsOptions_Destroy()` to free it when you're done using it.
MRC_API MR_PointsSave_CtmSavePointsOptions *MR_PointsSave_CtmSavePointsOptions_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PointsSave_CtmSavePointsOptions_DestroyArray()`.
/// Use `MR_PointsSave_CtmSavePointsOptions_OffsetMutablePtr()` and `MR_PointsSave_CtmSavePointsOptions_OffsetPtr()` to access the array elements.
MRC_API MR_PointsSave_CtmSavePointsOptions *MR_PointsSave_CtmSavePointsOptions_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PointsSave_CtmSavePointsOptions *MR_PointsSave_CtmSavePointsOptions_OffsetPtr(const MR_PointsSave_CtmSavePointsOptions *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PointsSave_CtmSavePointsOptions *MR_PointsSave_CtmSavePointsOptions_OffsetMutablePtr(MR_PointsSave_CtmSavePointsOptions *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::PointsSave::CtmSavePointsOptions` to its base class `MR::SaveSettings`.
/// This version is acting on mutable pointers.
MRC_API const MR_SaveSettings *MR_PointsSave_CtmSavePointsOptions_UpcastTo_MR_SaveSettings(const MR_PointsSave_CtmSavePointsOptions *object);

/// Upcasts an instance of `MR::PointsSave::CtmSavePointsOptions` to its base class `MR::SaveSettings`.
MRC_API MR_SaveSettings *MR_PointsSave_CtmSavePointsOptions_MutableUpcastTo_MR_SaveSettings(MR_PointsSave_CtmSavePointsOptions *object);

/// Generated from a constructor of class `MR::PointsSave::CtmSavePointsOptions`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointsSave_CtmSavePointsOptions_Destroy()` to free it when you're done using it.
MRC_API MR_PointsSave_CtmSavePointsOptions *MR_PointsSave_CtmSavePointsOptions_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PointsSave_CtmSavePointsOptions *_other);

/// Destroys a heap-allocated instance of `MR_PointsSave_CtmSavePointsOptions`. Does nothing if the pointer is null.
MRC_API void MR_PointsSave_CtmSavePointsOptions_Destroy(const MR_PointsSave_CtmSavePointsOptions *_this);

/// Destroys a heap-allocated array of `MR_PointsSave_CtmSavePointsOptions`. Does nothing if the pointer is null.
MRC_API void MR_PointsSave_CtmSavePointsOptions_DestroyArray(const MR_PointsSave_CtmSavePointsOptions *_this);

/// Generated from a method of class `MR::PointsSave::CtmSavePointsOptions` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointsSave_CtmSavePointsOptions *MR_PointsSave_CtmSavePointsOptions_AssignFromAnother(MR_PointsSave_CtmSavePointsOptions *_this, MR_PassBy _other_pass_by, MR_PointsSave_CtmSavePointsOptions *_other);

/// saves in .ctm file
/// Generated from function `MR::PointsSave::toCtm`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `options` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_PointsSave_toCtm_const_std_filesystem_path_ref_MR_PointsSave_CtmSavePointsOptions(const MR_PointCloud *points, const char *file, const char *file_end, const MR_PointsSave_CtmSavePointsOptions *options);

/// Generated from function `MR::PointsSave::toCtm`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `options` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_PointsSave_toCtm_std_ostream_ref_MR_PointsSave_CtmSavePointsOptions(const MR_PointCloud *points, MR_std_ostream *out, const MR_PointsSave_CtmSavePointsOptions *options);

/// Generated from function `MR::PointsSave::toCtm`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_PointsSave_toCtm_const_std_filesystem_path_ref_MR_SaveSettings(const MR_PointCloud *points, const char *file, const char *file_end, const MR_SaveSettings *settings);

/// Generated from function `MR::PointsSave::toCtm`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_PointsSave_toCtm_std_ostream_ref_MR_SaveSettings(const MR_PointCloud *points, MR_std_ostream *out, const MR_SaveSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
