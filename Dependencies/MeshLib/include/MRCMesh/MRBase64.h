// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_uint8_t MR_std_vector_uint8_t; // Defined in `#include <MRCMisc/std_vector_uint8_t.h>`.


/// encodes binary data into textual Base64 format
/// Generated from function `MR::encode64`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_encode64(const uint8_t *data, MR_uint64_t size);

/// decodes Base64 format into binary data
/// Generated from function `MR::decode64`.
/// Parameter `val` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_uint8_t_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_uint8_t *MR_decode64(const MR_std_string *val);

#ifdef __cplusplus
} // extern "C"
#endif
