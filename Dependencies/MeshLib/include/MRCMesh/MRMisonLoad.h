// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_expected_MR_LoadedObjectT_std_string MR_expected_MR_LoadedObjectT_std_string; // Defined in `#include <MRCMisc/expected_MR_LoadedObjectT_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_istream MR_std_istream; // Defined in `#include <MRCMisc/iostream.h>`.


/// load scene from MISON file \n
/// JSON file with array named "Objects" or root array: \n
/// element fields:\n
///    "Filename" : required full path to file for loading object
///    "XF": optional xf for loaded object
///    "Name": optional name for loaded object
/// Generated from function `MR::fromSceneMison`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `callback` is a single object.
/// Parameter `callback` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_LoadedObjectT_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_LoadedObjectT_std_string *MR_fromSceneMison_std_filesystem_path(const char *path, const char *path_end, const MR_std_function_bool_from_float *callback);

/// Generated from function `MR::fromSceneMison`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `callback` is a single object.
/// Parameter `callback` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_LoadedObjectT_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_LoadedObjectT_std_string *MR_fromSceneMison_std_istream(MR_std_istream *in, const MR_std_function_bool_from_float *callback);

#ifdef __cplusplus
} // extern "C"
#endif
