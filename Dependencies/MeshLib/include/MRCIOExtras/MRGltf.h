// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Object MR_Object; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_expected_std_shared_ptr_MR_Object_std_string MR_expected_std_shared_ptr_MR_Object_std_string; // Defined in `#include <MRCMisc/expected_std_shared_ptr_MR_Object_std_string.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


// loads scene from glTF file in a new container object
/// Generated from function `MR::deserializeObjectTreeFromGltf`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_shared_ptr_MR_Object_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_shared_ptr_MR_Object_std_string *MR_deserializeObjectTreeFromGltf(const char *file, const char *file_end, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

// saves scene to a glTF file
/// Generated from function `MR::serializeObjectTreeToGltf`.
/// Parameter `root` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_serializeObjectTreeToGltf(const MR_Object *root, const char *file, const char *file_end, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

#ifdef __cplusplus
} // extern "C"
#endif
