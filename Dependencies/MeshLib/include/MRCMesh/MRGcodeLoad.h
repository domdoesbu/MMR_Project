// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_expected_std_vector_std_string_std_string MR_expected_std_vector_std_string_std_string; // Defined in `#include <MRCMisc/expected_std_vector_std_string_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_istream MR_std_istream; // Defined in `#include <MRCMisc/iostream.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// loads from *.gcode file (or any text file)
/// Generated from function `MR::GcodeLoad::fromGcode`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_std_string_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_std_string_std_string *MR_GcodeLoad_fromGcode_std_filesystem_path(const char *file, const char *file_end, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from function `MR::GcodeLoad::fromGcode`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_std_string_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_std_string_std_string *MR_GcodeLoad_fromGcode_std_istream(MR_std_istream *in, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// detects the format from file extension and loads mesh from it
/// Generated from function `MR::GcodeLoad::fromAnySupportedFormat`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_std_string_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_std_string_std_string *MR_GcodeLoad_fromAnySupportedFormat_2(const char *file, const char *file_end, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// extension in `*.ext` format
/// Generated from function `MR::GcodeLoad::fromAnySupportedFormat`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `extension` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_std_string_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_std_string_std_string *MR_GcodeLoad_fromAnySupportedFormat_3(MR_std_istream *in, const MR_std_string *extension, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

#ifdef __cplusplus
} // extern "C"
#endif
