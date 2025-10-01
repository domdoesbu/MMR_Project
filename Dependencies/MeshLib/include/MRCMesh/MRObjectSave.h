// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Object MR_Object; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_function_void_from_const_std_filesystem_path_ref MR_std_function_void_from_const_std_filesystem_path_ref; // Defined in `#include <MRCMisc/std_function_void_from_const_std_filesystem_path_ref.h>`.


/// save an object tree to a given file
/// file format must be scene-capable
/// Generated from function `MR::ObjectSave::toAnySupportedSceneFormat`.
/// Parameter `object` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_ObjectSave_toAnySupportedSceneFormat(const MR_Object *object, const char *file, const char *file_end, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// save a scene object to a given file
/// if the file format is scene-capable, saves all the object's entities
/// otherwise, saves only merged entities of the corresponding type (mesh, polyline, point cloud, etc.)
/// Generated from function `MR::ObjectSave::toAnySupportedFormat`.
/// Parameter `object` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_ObjectSave_toAnySupportedFormat(const MR_Object *object, const char *file, const char *file_end, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/**
* \brief saves object subtree in given scene file (zip/mru)
* \details format specification:
*  children are saved under folder with name of their parent object
*  all objects parameters are saved in one JSON file in the root folder
*
* if preCompress is set, it is called before compression
* saving is controlled with Object::serializeModel_ and Object::serializeFields_
*/
/// Generated from function `MR::serializeObjectTree`.
/// Parameter `object` can not be null. It is a single object.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_serializeObjectTree_4(const MR_Object *object, const char *path, const char *path_end, MR_PassBy progress_pass_by, MR_std_function_bool_from_float *progress, MR_PassBy preCompress_pass_by, MR_std_function_void_from_const_std_filesystem_path_ref *preCompress);

/// Generated from function `MR::serializeObjectTree`.
/// Parameter `object` can not be null. It is a single object.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `progress` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_serializeObjectTree_3(const MR_Object *object, const char *path, const char *path_end, MR_PassBy progress_pass_by, MR_std_function_bool_from_float *progress);

#ifdef __cplusplus
} // extern "C"
#endif
