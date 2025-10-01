// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>
#include <MRCVoxels/MRScalarConvert.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_expected_MR_FloatGrid_std_string MR_expected_MR_FloatGrid_std_string; // Defined in `#include <MRCMisc/expected_MR_FloatGrid_std_string.h>`.
typedef struct MR_expected_MR_LoadedObjects_std_string MR_expected_MR_LoadedObjects_std_string; // Defined in `#include <MRCMisc/expected_MR_LoadedObjects_std_string.h>`.
typedef struct MR_expected_MR_VdbVolume_std_string MR_expected_MR_VdbVolume_std_string; // Defined in `#include <MRCMisc/expected_MR_VdbVolume_std_string.h>`.
typedef struct MR_expected_MR_VoxelsLoad_RawParameters_std_string MR_expected_MR_VoxelsLoad_RawParameters_std_string; // Defined in `#include <MRCMisc/expected_MR_VoxelsLoad_RawParameters_std_string.h>`.
typedef struct MR_expected_std_vector_MR_FloatGrid_std_string MR_expected_std_vector_MR_FloatGrid_std_string; // Defined in `#include <MRCMisc/expected_std_vector_MR_FloatGrid_std_string.h>`.
typedef struct MR_expected_std_vector_MR_VdbVolume_std_string MR_expected_std_vector_MR_VdbVolume_std_string; // Defined in `#include <MRCMisc/expected_std_vector_MR_VdbVolume_std_string.h>`.
typedef struct MR_expected_std_vector_std_shared_ptr_MR_ObjectVoxels_std_string MR_expected_std_vector_std_shared_ptr_MR_ObjectVoxels_std_string; // Defined in `#include <MRCMisc/expected_std_vector_std_shared_ptr_MR_ObjectVoxels_std_string.h>`.
typedef struct MR_std_filesystem_path MR_std_filesystem_path; // Defined in `#include <MRCMisc/std_filesystem_path.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_istream MR_std_istream; // Defined in `#include <MRCMisc/iostream.h>`.


/// Generated from class `MR::VoxelsLoad::RawParameters`.
typedef struct MR_VoxelsLoad_RawParameters MR_VoxelsLoad_RawParameters;

// Determines iso-surface orientation
typedef int32_t MR_VoxelsLoad_GridType;
enum // MR_VoxelsLoad_GridType
{
    // consider values less than iso as outer area
    MR_VoxelsLoad_GridType_DenseGrid = 0,
    // consider values less than iso as inner area
    MR_VoxelsLoad_GridType_LevelSet = 1,
};

/// Generated from class `MR::VoxelsLoad::LoadingTiffSettings`.
typedef struct MR_VoxelsLoad_LoadingTiffSettings MR_VoxelsLoad_LoadingTiffSettings;

/// Returns a pointer to a member variable of class `MR::VoxelsLoad::RawParameters` named `dimensions`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3i *MR_VoxelsLoad_RawParameters_Get_dimensions(const MR_VoxelsLoad_RawParameters *_this);

/// Modifies a member variable of class `MR::VoxelsLoad::RawParameters` named `dimensions`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VoxelsLoad_RawParameters_Set_dimensions(MR_VoxelsLoad_RawParameters *_this, MR_Vector3i value);

/// Returns a mutable pointer to a member variable of class `MR::VoxelsLoad::RawParameters` named `dimensions`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3i *MR_VoxelsLoad_RawParameters_GetMutable_dimensions(MR_VoxelsLoad_RawParameters *_this);

/// Returns a pointer to a member variable of class `MR::VoxelsLoad::RawParameters` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_VoxelsLoad_RawParameters_Get_voxelSize(const MR_VoxelsLoad_RawParameters *_this);

/// Modifies a member variable of class `MR::VoxelsLoad::RawParameters` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VoxelsLoad_RawParameters_Set_voxelSize(MR_VoxelsLoad_RawParameters *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::VoxelsLoad::RawParameters` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_VoxelsLoad_RawParameters_GetMutable_voxelSize(MR_VoxelsLoad_RawParameters *_this);

///< OpenVDB GridClass set as GRID_LEVEL_SET (need to set right surface normals direction)
/// Returns a pointer to a member variable of class `MR::VoxelsLoad::RawParameters` named `gridLevelSet`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_VoxelsLoad_RawParameters_Get_gridLevelSet(const MR_VoxelsLoad_RawParameters *_this);

///< OpenVDB GridClass set as GRID_LEVEL_SET (need to set right surface normals direction)
/// Modifies a member variable of class `MR::VoxelsLoad::RawParameters` named `gridLevelSet`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VoxelsLoad_RawParameters_Set_gridLevelSet(MR_VoxelsLoad_RawParameters *_this, bool value);

///< OpenVDB GridClass set as GRID_LEVEL_SET (need to set right surface normals direction)
/// Returns a mutable pointer to a member variable of class `MR::VoxelsLoad::RawParameters` named `gridLevelSet`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_VoxelsLoad_RawParameters_GetMutable_gridLevelSet(MR_VoxelsLoad_RawParameters *_this);

/// Returns a pointer to a member variable of class `MR::VoxelsLoad::RawParameters` named `scalarType`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ScalarType *MR_VoxelsLoad_RawParameters_Get_scalarType(const MR_VoxelsLoad_RawParameters *_this);

/// Modifies a member variable of class `MR::VoxelsLoad::RawParameters` named `scalarType`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VoxelsLoad_RawParameters_Set_scalarType(MR_VoxelsLoad_RawParameters *_this, MR_ScalarType value);

/// Returns a mutable pointer to a member variable of class `MR::VoxelsLoad::RawParameters` named `scalarType`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ScalarType *MR_VoxelsLoad_RawParameters_GetMutable_scalarType(MR_VoxelsLoad_RawParameters *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsLoad_RawParameters_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsLoad_RawParameters *MR_VoxelsLoad_RawParameters_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VoxelsLoad_RawParameters_DestroyArray()`.
/// Use `MR_VoxelsLoad_RawParameters_OffsetMutablePtr()` and `MR_VoxelsLoad_RawParameters_OffsetPtr()` to access the array elements.
MRC_API MR_VoxelsLoad_RawParameters *MR_VoxelsLoad_RawParameters_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::VoxelsLoad::RawParameters` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsLoad_RawParameters_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsLoad_RawParameters *MR_VoxelsLoad_RawParameters_ConstructFrom(MR_Vector3i dimensions, MR_Vector3f voxelSize, bool gridLevelSet, MR_ScalarType scalarType);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VoxelsLoad_RawParameters *MR_VoxelsLoad_RawParameters_OffsetPtr(const MR_VoxelsLoad_RawParameters *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VoxelsLoad_RawParameters *MR_VoxelsLoad_RawParameters_OffsetMutablePtr(MR_VoxelsLoad_RawParameters *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VoxelsLoad::RawParameters`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsLoad_RawParameters_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsLoad_RawParameters *MR_VoxelsLoad_RawParameters_ConstructFromAnother(const MR_VoxelsLoad_RawParameters *_other);

/// Destroys a heap-allocated instance of `MR_VoxelsLoad_RawParameters`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsLoad_RawParameters_Destroy(const MR_VoxelsLoad_RawParameters *_this);

/// Destroys a heap-allocated array of `MR_VoxelsLoad_RawParameters`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsLoad_RawParameters_DestroyArray(const MR_VoxelsLoad_RawParameters *_this);

/// Generated from a method of class `MR::VoxelsLoad::RawParameters` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelsLoad_RawParameters *MR_VoxelsLoad_RawParameters_AssignFromAnother(MR_VoxelsLoad_RawParameters *_this, const MR_VoxelsLoad_RawParameters *_other);

/// Load raw voxels from file with provided parameters
/// Generated from function `MR::VoxelsLoad::fromRaw`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `params` can not be null. It is a single object.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VdbVolume_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VdbVolume_std_string *MR_VoxelsLoad_fromRaw_3_std_filesystem_path(const char *file, const char *file_end, const MR_VoxelsLoad_RawParameters *params, const MR_std_function_bool_from_float *cb);

/// Load raw voxels from stream with provided parameters;
/// important on Windows: in stream must be open in binary mode
/// Generated from function `MR::VoxelsLoad::fromRaw`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VdbVolume_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VdbVolume_std_string *MR_VoxelsLoad_fromRaw_3_std_istream(MR_std_istream *in, const MR_VoxelsLoad_RawParameters *params, const MR_std_function_bool_from_float *cb);

/// Load raw voxels from file with provided parameters
/// Generated from function `MR::VoxelsLoad::gridFromRaw`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `params` can not be null. It is a single object.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_FloatGrid_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_FloatGrid_std_string *MR_VoxelsLoad_gridFromRaw_3_std_filesystem_path(const char *file, const char *file_end, const MR_VoxelsLoad_RawParameters *params, const MR_std_function_bool_from_float *cb);

/// Load raw voxels from stream with provided parameters;
/// important on Windows: in stream must be open in binary mode
/// Generated from function `MR::VoxelsLoad::gridFromRaw`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_FloatGrid_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_FloatGrid_std_string *MR_VoxelsLoad_gridFromRaw_3_std_istream(MR_std_istream *in, const MR_VoxelsLoad_RawParameters *params, const MR_std_function_bool_from_float *cb);

/// finds raw voxels file and its encoding parameters
/// \param file on input: file name probably without suffix with parameters
///             on output: if success existing file name
/// Generated from function `MR::VoxelsLoad::findRawParameters`.
/// Parameter `file` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VoxelsLoad_RawParameters_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VoxelsLoad_RawParameters_std_string *MR_VoxelsLoad_findRawParameters(MR_std_filesystem_path *file);

/// Load raw voxels file, parsing parameters from name
/// Generated from function `MR::VoxelsLoad::fromRaw`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VdbVolume_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VdbVolume_std_string *MR_VoxelsLoad_fromRaw_2(const char *file, const char *file_end, const MR_std_function_bool_from_float *cb);

/// Load raw voxels file, parsing parameters from name
/// Generated from function `MR::VoxelsLoad::gridFromRaw`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_FloatGrid_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_FloatGrid_std_string *MR_VoxelsLoad_gridFromRaw_2(const char *file, const char *file_end, const MR_std_function_bool_from_float *cb);

/// Load all voxel volumes from OpenVDB file
/// Generated from function `MR::VoxelsLoad::fromVdb`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_MR_VdbVolume_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_MR_VdbVolume_std_string *MR_VoxelsLoad_fromVdb(const char *file, const char *file_end, const MR_std_function_bool_from_float *cb);

/// Generated from function `MR::VoxelsLoad::gridsFromVdb`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_MR_FloatGrid_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_MR_FloatGrid_std_string *MR_VoxelsLoad_gridsFromVdb_std_filesystem_path(const char *file, const char *file_end, const MR_std_function_bool_from_float *cb);

/// Generated from function `MR::VoxelsLoad::gridsFromVdb`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_MR_FloatGrid_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_MR_FloatGrid_std_string *MR_VoxelsLoad_gridsFromVdb_std_istream(MR_std_istream *in, const MR_std_function_bool_from_float *cb);

/// Load voxel from Gav-file with micro CT reconstruction
/// Generated from function `MR::VoxelsLoad::fromGav`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VdbVolume_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VdbVolume_std_string *MR_VoxelsLoad_fromGav_std_filesystem_path(const char *file, const char *file_end, const MR_std_function_bool_from_float *cb);

/// Load voxel from Gav-stream with micro CT reconstruction
/// Generated from function `MR::VoxelsLoad::fromGav`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VdbVolume_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VdbVolume_std_string *MR_VoxelsLoad_fromGav_std_istream(MR_std_istream *in, const MR_std_function_bool_from_float *cb);

/// Detects the format from file extension and loads voxels from it
/// Generated from function `MR::VoxelsLoad::gridsFromAnySupportedFormat`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_MR_FloatGrid_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_MR_FloatGrid_std_string *MR_VoxelsLoad_gridsFromAnySupportedFormat(const char *file, const char *file_end, const MR_std_function_bool_from_float *cb);

/// Detects the format from file extension and loads voxels from it
/// Generated from function `MR::VoxelsLoad::fromAnySupportedFormat`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_MR_VdbVolume_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_MR_VdbVolume_std_string *MR_VoxelsLoad_fromAnySupportedFormat(const char *file, const char *file_end, const MR_std_function_bool_from_float *cb);

/// Returns a pointer to a member variable of class `MR::VoxelsLoad::LoadingTiffSettings` named `dir`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_filesystem_path *MR_VoxelsLoad_LoadingTiffSettings_Get_dir(const MR_VoxelsLoad_LoadingTiffSettings *_this);

/// Modifies a member variable of class `MR::VoxelsLoad::LoadingTiffSettings` named `dir`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` is a UTF-8 encoded filesystem path.
MRC_API void MR_VoxelsLoad_LoadingTiffSettings_Set_dir(MR_VoxelsLoad_LoadingTiffSettings *_this, const char *value, const char *value_end);

/// Returns a mutable pointer to a member variable of class `MR::VoxelsLoad::LoadingTiffSettings` named `dir`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_filesystem_path *MR_VoxelsLoad_LoadingTiffSettings_GetMutable_dir(MR_VoxelsLoad_LoadingTiffSettings *_this);

/// Returns a pointer to a member variable of class `MR::VoxelsLoad::LoadingTiffSettings` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_VoxelsLoad_LoadingTiffSettings_Get_voxelSize(const MR_VoxelsLoad_LoadingTiffSettings *_this);

/// Modifies a member variable of class `MR::VoxelsLoad::LoadingTiffSettings` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VoxelsLoad_LoadingTiffSettings_Set_voxelSize(MR_VoxelsLoad_LoadingTiffSettings *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::VoxelsLoad::LoadingTiffSettings` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_VoxelsLoad_LoadingTiffSettings_GetMutable_voxelSize(MR_VoxelsLoad_LoadingTiffSettings *_this);

/// Returns a pointer to a member variable of class `MR::VoxelsLoad::LoadingTiffSettings` named `gridType`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VoxelsLoad_GridType *MR_VoxelsLoad_LoadingTiffSettings_Get_gridType(const MR_VoxelsLoad_LoadingTiffSettings *_this);

/// Modifies a member variable of class `MR::VoxelsLoad::LoadingTiffSettings` named `gridType`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VoxelsLoad_LoadingTiffSettings_Set_gridType(MR_VoxelsLoad_LoadingTiffSettings *_this, MR_VoxelsLoad_GridType value);

/// Returns a mutable pointer to a member variable of class `MR::VoxelsLoad::LoadingTiffSettings` named `gridType`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelsLoad_GridType *MR_VoxelsLoad_LoadingTiffSettings_GetMutable_gridType(MR_VoxelsLoad_LoadingTiffSettings *_this);

/// Returns a pointer to a member variable of class `MR::VoxelsLoad::LoadingTiffSettings` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_VoxelsLoad_LoadingTiffSettings_Get_cb(const MR_VoxelsLoad_LoadingTiffSettings *_this);

/// Modifies a member variable of class `MR::VoxelsLoad::LoadingTiffSettings` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VoxelsLoad_LoadingTiffSettings_Set_cb(MR_VoxelsLoad_LoadingTiffSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// Returns a mutable pointer to a member variable of class `MR::VoxelsLoad::LoadingTiffSettings` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_VoxelsLoad_LoadingTiffSettings_GetMutable_cb(MR_VoxelsLoad_LoadingTiffSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsLoad_LoadingTiffSettings_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsLoad_LoadingTiffSettings *MR_VoxelsLoad_LoadingTiffSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VoxelsLoad_LoadingTiffSettings_DestroyArray()`.
/// Use `MR_VoxelsLoad_LoadingTiffSettings_OffsetMutablePtr()` and `MR_VoxelsLoad_LoadingTiffSettings_OffsetPtr()` to access the array elements.
MRC_API MR_VoxelsLoad_LoadingTiffSettings *MR_VoxelsLoad_LoadingTiffSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::VoxelsLoad::LoadingTiffSettings` elementwise.
/// Parameter `dir` is a UTF-8 encoded filesystem path.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsLoad_LoadingTiffSettings_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsLoad_LoadingTiffSettings *MR_VoxelsLoad_LoadingTiffSettings_ConstructFrom(const char *dir, const char *dir_end, MR_Vector3f voxelSize, MR_VoxelsLoad_GridType gridType, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VoxelsLoad_LoadingTiffSettings *MR_VoxelsLoad_LoadingTiffSettings_OffsetPtr(const MR_VoxelsLoad_LoadingTiffSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VoxelsLoad_LoadingTiffSettings *MR_VoxelsLoad_LoadingTiffSettings_OffsetMutablePtr(MR_VoxelsLoad_LoadingTiffSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VoxelsLoad::LoadingTiffSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsLoad_LoadingTiffSettings_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsLoad_LoadingTiffSettings *MR_VoxelsLoad_LoadingTiffSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_VoxelsLoad_LoadingTiffSettings *_other);

/// Destroys a heap-allocated instance of `MR_VoxelsLoad_LoadingTiffSettings`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsLoad_LoadingTiffSettings_Destroy(const MR_VoxelsLoad_LoadingTiffSettings *_this);

/// Destroys a heap-allocated array of `MR_VoxelsLoad_LoadingTiffSettings`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsLoad_LoadingTiffSettings_DestroyArray(const MR_VoxelsLoad_LoadingTiffSettings *_this);

/// Generated from a method of class `MR::VoxelsLoad::LoadingTiffSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelsLoad_LoadingTiffSettings *MR_VoxelsLoad_LoadingTiffSettings_AssignFromAnother(MR_VoxelsLoad_LoadingTiffSettings *_this, MR_PassBy _other_pass_by, MR_VoxelsLoad_LoadingTiffSettings *_other);

/// Load voxels from a set of TIFF files
/// Generated from function `MR::VoxelsLoad::loadTiffDir`.
/// Parameter `settings` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VdbVolume_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VdbVolume_std_string *MR_VoxelsLoad_loadTiffDir(const MR_VoxelsLoad_LoadingTiffSettings *settings);

/// loads voxels from given file in new object
/// Generated from function `MR::makeObjectVoxelsFromFile`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_std_shared_ptr_MR_ObjectVoxels_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_std_shared_ptr_MR_ObjectVoxels_std_string *MR_makeObjectVoxelsFromFile(const char *file, const char *file_end, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::makeObjectFromVoxelsFile`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `callback` is a single object.
/// Parameter `callback` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_LoadedObjects_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_LoadedObjects_std_string *MR_makeObjectFromVoxelsFile(const char *file, const char *file_end, const MR_std_function_bool_from_float *callback);

#ifdef __cplusplus
} // extern "C"
#endif
