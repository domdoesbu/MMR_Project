// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_istream MR_std_istream; // Defined in `#include <MRCMisc/iostream.h>`.
typedef struct MR_std_ostream MR_std_ostream; // Defined in `#include <MRCMisc/iostream.h>`.


/**
* @brief compress the input data using the Deflate algorithm
* @param in - input data stream
* @param out - output data stream
* @param level - compression level (0 - no compression, 1 - the fastest but the most inefficient compression, 9 - the most efficient but the slowest compression)
* @return nothing or error string
*/
/// Generated from function `MR::zlibCompressStream`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `level` has a default argument: `-1`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_zlibCompressStream(MR_std_istream *in, MR_std_ostream *out, const int32_t *level);

/**
* /brief decompress the input data compressed using the Deflate algorithm
* @param in - input data stream
* @param out - output data stream
* @return nothing or error string
*/
/// Generated from function `MR::zlibDecompressStream`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_zlibDecompressStream(MR_std_istream *in, MR_std_ostream *out);

#ifdef __cplusplus
} // extern "C"
#endif
