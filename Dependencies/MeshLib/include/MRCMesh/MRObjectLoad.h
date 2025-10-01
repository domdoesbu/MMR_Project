// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_expected_MR_LoadedObjectT_MR_ObjectMesh_std_string MR_expected_MR_LoadedObjectT_MR_ObjectMesh_std_string; // Defined in `#include <MRCMisc/expected_MR_LoadedObjectT_MR_ObjectMesh_std_string.h>`.
typedef struct MR_expected_MR_LoadedObjectT_std_string MR_expected_MR_LoadedObjectT_std_string; // Defined in `#include <MRCMisc/expected_MR_LoadedObjectT_std_string.h>`.
typedef struct MR_expected_MR_LoadedObjects_std_string MR_expected_MR_LoadedObjects_std_string; // Defined in `#include <MRCMisc/expected_MR_LoadedObjects_std_string.h>`.
typedef struct MR_expected_MR_ObjectDistanceMap_std_string MR_expected_MR_ObjectDistanceMap_std_string; // Defined in `#include <MRCMisc/expected_MR_ObjectDistanceMap_std_string.h>`.
typedef struct MR_expected_MR_ObjectGcode_std_string MR_expected_MR_ObjectGcode_std_string; // Defined in `#include <MRCMisc/expected_MR_ObjectGcode_std_string.h>`.
typedef struct MR_expected_MR_ObjectLines_std_string MR_expected_MR_ObjectLines_std_string; // Defined in `#include <MRCMisc/expected_MR_ObjectLines_std_string.h>`.
typedef struct MR_expected_MR_ObjectPoints_std_string MR_expected_MR_ObjectPoints_std_string; // Defined in `#include <MRCMisc/expected_MR_ObjectPoints_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_function_void_from_const_std_filesystem_path_ref MR_std_function_void_from_const_std_filesystem_path_ref; // Defined in `#include <MRCMisc/std_function_void_from_const_std_filesystem_path_ref.h>`.
typedef struct MR_std_vector_MR_IOFilter MR_std_vector_MR_IOFilter; // Defined in `#include <MRCMisc/std_vector_MR_IOFilter.h>`.


/// loads mesh from given file in new object
/// Generated from function `MR::makeObjectMeshFromFile`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_LoadedObjectT_MR_ObjectMesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_LoadedObjectT_MR_ObjectMesh_std_string *MR_makeObjectMeshFromFile(const char *file, const char *file_end, const MR_std_function_bool_from_float *cb);

/// loads data from given file and makes either ObjectMesh, ObjectLines or ObjectPoints (if the file has points or edges but not faces)
/// Generated from function `MR::makeObjectFromMeshFile`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `returnOnlyMesh` has a default argument: `false`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_LoadedObjectT_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_LoadedObjectT_std_string *MR_makeObjectFromMeshFile(const char *file, const char *file_end, const MR_std_function_bool_from_float *cb, const bool *returnOnlyMesh);

/// loads lines from given file in new object
/// Generated from function `MR::makeObjectLinesFromFile`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_ObjectLines_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_ObjectLines_std_string *MR_makeObjectLinesFromFile(const char *file, const char *file_end, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// loads points from given file in new object
/// Generated from function `MR::makeObjectPointsFromFile`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_ObjectPoints_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_ObjectPoints_std_string *MR_makeObjectPointsFromFile(const char *file, const char *file_end, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// loads distance map from given file in new object
/// Generated from function `MR::makeObjectDistanceMapFromFile`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_ObjectDistanceMap_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_ObjectDistanceMap_std_string *MR_makeObjectDistanceMapFromFile(const char *file, const char *file_end, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// loads gcode from given file in new object
/// Generated from function `MR::makeObjectGcodeFromFile`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_ObjectGcode_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_ObjectGcode_std_string *MR_makeObjectGcodeFromFile(const char *file, const char *file_end, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/**
* \brief load all objects (or any type: mesh, lines, points, voxels or scene) from file
* \param callback - callback function to set progress (for progress bar)
*/
/// Generated from function `MR::loadObjectFromFile`.
/// Parameter `filename` is a UTF-8 encoded filesystem path.
/// Parameter `callback` is a single object.
/// Parameter `callback` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_LoadedObjects_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_LoadedObjects_std_string *MR_loadObjectFromFile(const char *filename, const char *filename_end, const MR_std_function_bool_from_float *callback);

// check if there are any supported files folder and subfolders
/// Generated from function `MR::isSupportedFileInSubfolders`.
/// Parameter `folder` is a UTF-8 encoded filesystem path.
MRC_API bool MR_isSupportedFileInSubfolders(const char *folder, const char *folder_end);

//tries to load scene from every format listed in SceneFormatFilters
/// Generated from function `MR::loadSceneFromAnySupportedFormat`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `callback` is a single object.
/// Parameter `callback` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_LoadedObjectT_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_LoadedObjectT_std_string *MR_loadSceneFromAnySupportedFormat(const char *path, const char *path_end, const MR_std_function_bool_from_float *callback);

/**
* \brief loads objects tree from given scene file (zip/mru)
* \details format specification:
*  children are saved under folder with name of their parent object
*  all objects parameters are saved in one JSON file in the root folder
*
* if postDecompress is set, it is called after decompression
* loading is controlled with Object::deserializeModel_ and Object::deserializeFields_
*/
/// Generated from function `MR::deserializeObjectTree`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `postDecompress` is a single object.
/// Parameter `postDecompress` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `progressCb` is a single object.
/// Parameter `progressCb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_LoadedObjectT_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_LoadedObjectT_std_string *MR_deserializeObjectTree(const char *path, const char *path_end, const MR_std_function_void_from_const_std_filesystem_path_ref *postDecompress, const MR_std_function_bool_from_float *progressCb);

/**
* \brief loads objects tree from given scene folder
* \details format specification:
*  children are saved under folder with name of their parent object
*  all objects parameters are saved in one JSON file in the root folder
*
* loading is controlled with Object::deserializeModel_ and Object::deserializeFields_
*/
/// Generated from function `MR::deserializeObjectTreeFromFolder`.
/// Parameter `folder` is a UTF-8 encoded filesystem path.
/// Parameter `progressCb` is a single object.
/// Parameter `progressCb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_LoadedObjectT_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_LoadedObjectT_std_string *MR_deserializeObjectTreeFromFolder(const char *folder, const char *folder_end, const MR_std_function_bool_from_float *progressCb);

/// returns filters for all supported file formats for all types of objects
/// Generated from function `MR::getAllFilters`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_IOFilter_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_IOFilter *MR_getAllFilters(void);

#ifdef __cplusplus
} // extern "C"
#endif
