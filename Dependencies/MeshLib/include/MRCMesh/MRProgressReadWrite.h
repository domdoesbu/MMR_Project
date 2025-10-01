// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_istream MR_std_istream; // Defined in `#include <MRCMisc/iostream.h>`.
typedef struct MR_std_ostream MR_std_ostream; // Defined in `#include <MRCMisc/iostream.h>`.


/**
* \brief write dataSize bytes from data to out stream by blocks blockSize bytes
* \details if progress callback is not set, write all data by one block
* \return false if process was canceled (callback is set and return false )
*/
/// Generated from function `MR::writeByBlocks`.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Parameter `blockSize` has a default argument: `(size_t(1) << 16)`, pass a null pointer to use it.
MRC_API bool MR_writeByBlocks(MR_std_ostream *out, const char *data, MR_uint64_t dataSize, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback, const MR_uint64_t *blockSize);

/**
* \brief read dataSize bytes from in stream to data by blocks blockSize bytes
* \details if progress callback is not set, read all data by one block
* \return false if process was canceled (callback is set and return false )
*/
/// Generated from function `MR::readByBlocks`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Parameter `blockSize` has a default argument: `(size_t(1) << 16)`, pass a null pointer to use it.
MRC_API bool MR_readByBlocks(MR_std_istream *in, char *data, MR_uint64_t dataSize, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback, const MR_uint64_t *blockSize);

#ifdef __cplusplus
} // extern "C"
#endif
