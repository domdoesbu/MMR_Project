// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_istream MR_std_istream; // Defined in `#include <MRCMisc/iostream.h>`.
typedef struct MR_std_vector_std_filesystem_path MR_std_vector_std_filesystem_path; // Defined in `#include <MRCMisc/std_vector_std_filesystem_path.h>`.


/**
* \brief decompresses given zip-file into given folder
* \param password if password is given then it will be used to decipher encrypted archive
*/
/// Generated from function `MR::decompressZip`.
/// Parameter `zipFile` is a UTF-8 encoded filesystem path.
/// Parameter `targetFolder` is a UTF-8 encoded filesystem path.
/// Parameter `password` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_decompressZip_std_filesystem_path(const char *zipFile, const char *zipFile_end, const char *targetFolder, const char *targetFolder_end, const char *password);

/**
* \brief decompresses given binary stream (containing the data of a zip file only) into given folder
* \param password if password is given then it will be used to decipher encrypted archive
*/
/// Generated from function `MR::decompressZip`.
/// Parameter `zipStream` can not be null. It is a single object.
/// Parameter `targetFolder` is a UTF-8 encoded filesystem path.
/// Parameter `password` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_decompressZip_std_istream(MR_std_istream *zipStream, const char *targetFolder, const char *targetFolder_end, const char *password);

/**
* \brief compresses given folder in given zip-file
* \param excludeFiles files that should not be included to result zip 
* \param password if password is given then the archive will be encrypted
* \param cb an option to get progress notifications and cancel the operation
*/
/// Generated from function `MR::compressZip`.
/// Parameter `zipFile` is a UTF-8 encoded filesystem path.
/// Parameter `sourceFolder` is a UTF-8 encoded filesystem path.
/// Parameter `excludeFiles` is a single object.
/// Parameter `excludeFiles` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `password` defaults to a null pointer in C++.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_compressZip(const char *zipFile, const char *zipFile_end, const char *sourceFolder, const char *sourceFolder_end, const MR_std_vector_std_filesystem_path *excludeFiles, const char *password, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

#ifdef __cplusplus
} // extern "C"
#endif
