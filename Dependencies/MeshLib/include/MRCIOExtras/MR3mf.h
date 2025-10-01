// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_expected_MR_LoadedObjectT_std_string MR_expected_MR_LoadedObjectT_std_string; // Defined in `#include <MRCMisc/expected_MR_LoadedObjectT_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


// loads scene from 3MF file in a new container object
/// Generated from function `MR::deserializeObjectTreeFrom3mf`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `callback` is a single object.
/// Parameter `callback` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_LoadedObjectT_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_LoadedObjectT_std_string *MR_deserializeObjectTreeFrom3mf(const char *file, const char *file_end, const MR_std_function_bool_from_float *callback);

// loads scene from .model file in a new container object
/// Generated from function `MR::deserializeObjectTreeFromModel`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `callback` is a single object.
/// Parameter `callback` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_LoadedObjectT_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_LoadedObjectT_std_string *MR_deserializeObjectTreeFromModel(const char *file, const char *file_end, const MR_std_function_bool_from_float *callback);

#ifdef __cplusplus
} // extern "C"
#endif
