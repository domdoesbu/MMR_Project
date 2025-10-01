// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_VertId MR_VertId; // Defined in `#include <MRCMesh/MRId.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_vector_uint64_t MR_std_vector_uint64_t; // Defined in `#include <MRCMisc/std_vector_uint64_t.h>`.


// returns offsets for each new line in monolith char block
/// Generated from function `MR::splitByLines`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_uint64_t_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_uint64_t *MR_splitByLines(const char *data, MR_uint64_t size);

// reads the first integer number in the line
/// Generated from function `MR::parseFirstNum`.
/// Parameter `str` can not be null.
/// If `str_end` is null, then `str` is assumed to be null-terminated.
/// Parameter `num` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_parseFirstNum(const char *str, const char *str_end, int32_t *num);

// reads the polygon points and optional number of polygon points
// example
// N vertex0 vertex1 ... vertexN
/// Generated from function `MR::parsePolygon`.
/// Parameter `str` can not be null.
/// If `str_end` is null, then `str` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_parsePolygon(const char *str, const char *str_end, MR_VertId *vertId, int32_t *numPoints);

#ifdef __cplusplus
} // extern "C"
#endif
