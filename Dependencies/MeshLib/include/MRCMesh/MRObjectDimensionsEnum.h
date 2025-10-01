// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_string_view MR_std_string_view; // Defined in `#include <MRCMisc/std_string_view.h>`.


// This controls which dimensions are shown on top of an object as arrows.
typedef int32_t MR_DimensionsVisualizePropertyType;
enum // MR_DimensionsVisualizePropertyType
{
    MR_DimensionsVisualizePropertyType_diameter = 0,
    MR_DimensionsVisualizePropertyType_angle = 1,
    MR_DimensionsVisualizePropertyType_length = 2,
    MR_DimensionsVisualizePropertyType__count = 3,
};

/// Generated from function `MR::toString`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_view_Destroy()` to free it when you're done using it.
MRC_API MR_std_string_view *MR_toString_MR_DimensionsVisualizePropertyType(MR_DimensionsVisualizePropertyType value);

#ifdef __cplusplus
} // extern "C"
#endif
