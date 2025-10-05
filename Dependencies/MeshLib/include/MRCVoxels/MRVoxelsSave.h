// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>
#include <MRCVoxels/MRVoxelPath.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FloatGrid MR_FloatGrid; // Defined in `#include <MRCVoxels/MRFloatGrid.h>`.
typedef struct MR_Object MR_Object; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_SimpleVolume MR_SimpleVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_SimpleVolumeMinMax MR_SimpleVolumeMinMax; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_VdbVolume MR_VdbVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_Vector3i MR_Vector3i; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_filesystem_path MR_std_filesystem_path; // Defined in `#include <MRCMisc/std_filesystem_path.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_ostream MR_std_ostream; // Defined in `#include <MRCMisc/iostream.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


// stores together all data for save voxel object as a group of images
/// Generated from class `MR::VoxelsSave::SavingSettings`.
typedef struct MR_VoxelsSave_SavingSettings MR_VoxelsSave_SavingSettings;

/// Save raw voxels file, writing parameters in file name
/// Generated from function `MR::VoxelsSave::toRawAutoname`.
/// Parameter `vdbVolume` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_VoxelsSave_toRawAutoname_MR_VdbVolume(const MR_VdbVolume *vdbVolume, const char *file, const char *file_end, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::VoxelsSave::toRawAutoname`.
/// Parameter `simpleVolume` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_VoxelsSave_toRawAutoname_MR_SimpleVolume(const MR_SimpleVolume *simpleVolume, const char *file, const char *file_end, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::VoxelsSave::gridToRawAutoname`.
/// Parameter `grid` can not be null. It is a single object.
/// Parameter `dims` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_VoxelsSave_gridToRawAutoname(const MR_FloatGrid *grid, const MR_Vector3i *dims, const char *file, const char *file_end, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Save voxels in raw format with each value as 32-bit float in given binary stream
/// Generated from function `MR::VoxelsSave::gridToRawFloat`.
/// Parameter `grid` can not be null. It is a single object.
/// Parameter `dims` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_VoxelsSave_gridToRawFloat(const MR_FloatGrid *grid, const MR_Vector3i *dims, MR_std_ostream *out, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::VoxelsSave::toRawFloat`.
/// Parameter `vdbVolume` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_VoxelsSave_toRawFloat_MR_VdbVolume(const MR_VdbVolume *vdbVolume, MR_std_ostream *out, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::VoxelsSave::toRawFloat`.
/// Parameter `simpleVolume` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_VoxelsSave_toRawFloat_MR_SimpleVolume(const MR_SimpleVolume *simpleVolume, MR_std_ostream *out, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Save voxels in Gav-format in given destination
/// Generated from function `MR::VoxelsSave::toGav`.
/// Parameter `vdbVolume` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_VoxelsSave_toGav_const_MR_VdbVolume_ref_std_filesystem_path(const MR_VdbVolume *vdbVolume, const char *file, const char *file_end, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::VoxelsSave::toGav`.
/// Parameter `vdbVolume` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_VoxelsSave_toGav_const_MR_VdbVolume_ref_std_ostream(const MR_VdbVolume *vdbVolume, MR_std_ostream *out, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::VoxelsSave::toGav`.
/// Parameter `simpleVolumeMinMax` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_VoxelsSave_toGav_const_MR_SimpleVolumeMinMax_ref_std_filesystem_path(const MR_SimpleVolumeMinMax *simpleVolumeMinMax, const char *file, const char *file_end, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::VoxelsSave::toGav`.
/// Parameter `simpleVolumeMinMax` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_VoxelsSave_toGav_const_MR_SimpleVolumeMinMax_ref_std_ostream(const MR_SimpleVolumeMinMax *simpleVolumeMinMax, MR_std_ostream *out, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::VoxelsSave::toGav`.
/// Parameter `simpleVolume` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_VoxelsSave_toGav_const_MR_SimpleVolume_ref_std_filesystem_path(const MR_SimpleVolume *simpleVolume, const char *file, const char *file_end, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::VoxelsSave::toGav`.
/// Parameter `simpleVolume` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_VoxelsSave_toGav_const_MR_SimpleVolume_ref_std_ostream(const MR_SimpleVolume *simpleVolume, MR_std_ostream *out, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Save voxels file in OpenVDB format
/// Generated from function `MR::VoxelsSave::gridToVdb`.
/// Parameter `grid` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_VoxelsSave_gridToVdb_std_filesystem_path(const MR_FloatGrid *grid, const char *file, const char *file_end, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::VoxelsSave::gridToVdb`.
/// Parameter `grid` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_VoxelsSave_gridToVdb_std_ostream(const MR_FloatGrid *grid, MR_std_ostream *out, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::VoxelsSave::toVdb`.
/// Parameter `vdbVolume` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_VoxelsSave_toVdb(const MR_VdbVolume *vdbVolume, const char *file, const char *file_end, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Saves voxels in a file, detecting the format from file extension
/// Generated from function `MR::VoxelsSave::gridToAnySupportedFormat`.
/// Parameter `grid` can not be null. It is a single object.
/// Parameter `dims` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_VoxelsSave_gridToAnySupportedFormat(const MR_FloatGrid *grid, const MR_Vector3i *dims, const char *file, const char *file_end, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::VoxelsSave::toAnySupportedFormat`.
/// Parameter `vdbVolume` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_VoxelsSave_toAnySupportedFormat(const MR_VdbVolume *vdbVolume, const char *file, const char *file_end, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// save the slice by the active plane through the sliceNumber to an image file
/// Generated from function `MR::VoxelsSave::saveSliceToImage`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `vdbVolume` can not be null. It is a single object.
/// Parameter `slicePlain` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_VoxelsSave_saveSliceToImage(const char *path, const char *path_end, const MR_VdbVolume *vdbVolume, const MR_SlicePlane *slicePlain, int32_t sliceNumber, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

// path to directory where you want to save images
/// Returns a pointer to a member variable of class `MR::VoxelsSave::SavingSettings` named `path`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_filesystem_path *MR_VoxelsSave_SavingSettings_Get_path(const MR_VoxelsSave_SavingSettings *_this);

// path to directory where you want to save images
/// Modifies a member variable of class `MR::VoxelsSave::SavingSettings` named `path`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` is a UTF-8 encoded filesystem path.
MRC_API void MR_VoxelsSave_SavingSettings_Set_path(MR_VoxelsSave_SavingSettings *_this, const char *value, const char *value_end);

// path to directory where you want to save images
/// Returns a mutable pointer to a member variable of class `MR::VoxelsSave::SavingSettings` named `path`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_filesystem_path *MR_VoxelsSave_SavingSettings_GetMutable_path(MR_VoxelsSave_SavingSettings *_this);

// format for file names, you should specify a placeholder for number and extension, eg "slice_{0:0{1}}.tif"
/// Returns a pointer to a member variable of class `MR::VoxelsSave::SavingSettings` named `format`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_VoxelsSave_SavingSettings_Get_format(const MR_VoxelsSave_SavingSettings *_this);

// format for file names, you should specify a placeholder for number and extension, eg "slice_{0:0{1}}.tif"
/// Modifies a member variable of class `MR::VoxelsSave::SavingSettings` named `format`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_VoxelsSave_SavingSettings_Set_format(MR_VoxelsSave_SavingSettings *_this, const char *value, const char *value_end);

// format for file names, you should specify a placeholder for number and extension, eg "slice_{0:0{1}}.tif"
/// Returns a mutable pointer to a member variable of class `MR::VoxelsSave::SavingSettings` named `format`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_VoxelsSave_SavingSettings_GetMutable_format(MR_VoxelsSave_SavingSettings *_this);

// Plane which the object is sliced by. XY, XZ, or YZ
/// Returns a pointer to a member variable of class `MR::VoxelsSave::SavingSettings` named `slicePlane`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_SlicePlane *MR_VoxelsSave_SavingSettings_Get_slicePlane(const MR_VoxelsSave_SavingSettings *_this);

// Plane which the object is sliced by. XY, XZ, or YZ
/// Modifies a member variable of class `MR::VoxelsSave::SavingSettings` named `slicePlane`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VoxelsSave_SavingSettings_Set_slicePlane(MR_VoxelsSave_SavingSettings *_this, MR_SlicePlane value);

// Plane which the object is sliced by. XY, XZ, or YZ
/// Returns a mutable pointer to a member variable of class `MR::VoxelsSave::SavingSettings` named `slicePlane`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SlicePlane *MR_VoxelsSave_SavingSettings_GetMutable_slicePlane(MR_VoxelsSave_SavingSettings *_this);

// Callback reporting progress
/// Returns a pointer to a member variable of class `MR::VoxelsSave::SavingSettings` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_VoxelsSave_SavingSettings_Get_cb(const MR_VoxelsSave_SavingSettings *_this);

// Callback reporting progress
/// Modifies a member variable of class `MR::VoxelsSave::SavingSettings` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VoxelsSave_SavingSettings_Set_cb(MR_VoxelsSave_SavingSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

// Callback reporting progress
/// Returns a mutable pointer to a member variable of class `MR::VoxelsSave::SavingSettings` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_VoxelsSave_SavingSettings_GetMutable_cb(MR_VoxelsSave_SavingSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsSave_SavingSettings_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsSave_SavingSettings *MR_VoxelsSave_SavingSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VoxelsSave_SavingSettings_DestroyArray()`.
/// Use `MR_VoxelsSave_SavingSettings_OffsetMutablePtr()` and `MR_VoxelsSave_SavingSettings_OffsetPtr()` to access the array elements.
MRC_API MR_VoxelsSave_SavingSettings *MR_VoxelsSave_SavingSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::VoxelsSave::SavingSettings` elementwise.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `format` can not be null.
/// If `format_end` is null, then `format` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsSave_SavingSettings_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsSave_SavingSettings *MR_VoxelsSave_SavingSettings_ConstructFrom(const char *path, const char *path_end, const char *format, const char *format_end, MR_SlicePlane slicePlane, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VoxelsSave_SavingSettings *MR_VoxelsSave_SavingSettings_OffsetPtr(const MR_VoxelsSave_SavingSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VoxelsSave_SavingSettings *MR_VoxelsSave_SavingSettings_OffsetMutablePtr(MR_VoxelsSave_SavingSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VoxelsSave::SavingSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsSave_SavingSettings_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsSave_SavingSettings *MR_VoxelsSave_SavingSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_VoxelsSave_SavingSettings *_other);

/// Destroys a heap-allocated instance of `MR_VoxelsSave_SavingSettings`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsSave_SavingSettings_Destroy(const MR_VoxelsSave_SavingSettings *_this);

/// Destroys a heap-allocated array of `MR_VoxelsSave_SavingSettings`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsSave_SavingSettings_DestroyArray(const MR_VoxelsSave_SavingSettings *_this);

/// Generated from a method of class `MR::VoxelsSave::SavingSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelsSave_SavingSettings *MR_VoxelsSave_SavingSettings_AssignFromAnother(MR_VoxelsSave_SavingSettings *_this, MR_PassBy _other_pass_by, MR_VoxelsSave_SavingSettings *_other);

/// save all slices by the active plane through all voxel planes along the active axis to an image file
/// Generated from function `MR::VoxelsSave::saveAllSlicesToImage`.
/// Parameter `vdbVolume` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_VoxelsSave_saveAllSlicesToImage(const MR_VdbVolume *vdbVolume, const MR_VoxelsSave_SavingSettings *settings);

/// Generated from function `MR::saveObjectVoxelsToFile`.
/// Parameter `object` can not be null. It is a single object.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `callback` is a single object.
/// Parameter `callback` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_saveObjectVoxelsToFile(const MR_Object *object, const char *path, const char *path_end, const MR_std_function_bool_from_float *callback);

#ifdef __cplusplus
} // extern "C"
#endif
