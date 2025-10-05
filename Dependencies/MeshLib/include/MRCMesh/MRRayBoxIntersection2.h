// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Box2f MR_Box2f; // Defined in `#include <MRCMesh/MRBox.h>`.
typedef struct MR_Line2f MR_Line2f; // Defined in `#include <MRCMesh/MRLine.h>`.


/// Generated from function `MR::rayBoxIntersect<float>`.
/// Parameter `box` can not be null. It is a single object.
/// Parameter `line` can not be null. It is a single object.
MRC_API bool MR_rayBoxIntersect_float_MR_Box2f(const MR_Box2f *box, const MR_Line2f *line, float t0, float t1);

#ifdef __cplusplus
} // extern "C"
#endif
