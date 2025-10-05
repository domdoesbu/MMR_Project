// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_function_float_from_const_char_ptr MR_std_function_float_from_const_char_ptr; // Defined in `#include <MRCMisc/std_function_float_from_const_char_ptr.h>`.


/// scalar value's binary format type
typedef int32_t MR_ScalarType;
enum // MR_ScalarType
{
    MR_ScalarType_UInt8 = 0,
    MR_ScalarType_Int8 = 1,
    MR_ScalarType_UInt16 = 2,
    MR_ScalarType_Int16 = 3,
    MR_ScalarType_UInt32 = 4,
    MR_ScalarType_Int32 = 5,
    MR_ScalarType_UInt64 = 6,
    MR_ScalarType_Int64 = 7,
    MR_ScalarType_Float32 = 8,
    MR_ScalarType_Float64 = 9,
    ///< the last value from float[4]
    MR_ScalarType_Float32_4 = 10,
    MR_ScalarType_Unknown = 11,
    MR_ScalarType_Count = 12,
};

/// get a function to convert binary data of specified format type to a scalar value
/// \param scalarType - binary format type
/// \param range - (for integer types only) the range of possible values
/// \param min - (for integer types only) the minimal value
/// Generated from function `MR::getTypeConverter`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_float_from_const_char_ptr_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_float_from_const_char_ptr *MR_getTypeConverter(MR_ScalarType scalarType, MR_uint64_t range, MR_int64_t min);

#ifdef __cplusplus
} // extern "C"
#endif
