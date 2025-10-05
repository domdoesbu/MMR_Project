// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_optional_MR_VertBitSet MR_std_optional_MR_VertBitSet; // Defined in `#include <MRCMisc/std_optional_MR_VertBitSet.h>`.


/// performs sampling of cloud points by iteratively removing one point with minimal metric (describing distance to the closest point and previous nearby removals),
/// thus allowing stopping at any given number of samples;
/// returns std::nullopt if it was terminated by the callback
/// Generated from function `MR::pointIterativeSampling`.
/// Parameter `cloud` can not be null. It is a single object.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_VertBitSet *MR_pointIterativeSampling(const MR_PointCloud *cloud, int32_t numSamples, const MR_std_function_bool_from_float *cb);

#ifdef __cplusplus
} // extern "C"
#endif
