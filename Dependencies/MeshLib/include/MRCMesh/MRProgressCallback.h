// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


/// safely invokes \param cb with given value; just returning true for empty callback
/// Generated from function `MR::reportProgress`.
MRC_API bool MR_reportProgress_2(MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb, float v);

/// safely invokes \param cb with given value if \param counter is divisible by \param divider (preferably a power of 2);
/// just returning true for empty callback
/// Generated from function `MR::reportProgress`.
MRC_API bool MR_reportProgress_4(MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb, float v, MR_uint64_t counter, int32_t divider);

/// returns a callback that maps [0,1] linearly into [from,to] in the call to \param cb (which can be empty)
/// Generated from function `MR::subprogress`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_bool_from_float_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_bool_from_float *MR_subprogress_float(MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb, float from, float to);

/// returns a callback that maps [0,1] linearly into [(index+0)/count,(index+1)/count] in the call to \param cb (which can be empty)
/// Generated from function `MR::subprogress`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_bool_from_float_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_bool_from_float *MR_subprogress_uint64_t(MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb, MR_uint64_t index, MR_uint64_t count);

#ifdef __cplusplus
} // extern "C"
#endif
