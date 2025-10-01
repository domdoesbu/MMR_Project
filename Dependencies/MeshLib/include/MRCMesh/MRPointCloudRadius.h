// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


/// \brief Finds the radius of ball, so on average that ball contained avgPoints excluding the central point
/// \param samples the number of test points to find given number of samples in each
/// Generated from function `MR::findAvgPointsRadius`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `samples` has a default argument: `1024`, pass a null pointer to use it.
MRC_API float MR_findAvgPointsRadius(const MR_PointCloud *pointCloud, int32_t avgPoints, const int32_t *samples);

/// expands the region on given euclidian distance. returns false if callback also returns false
/// Generated from function `MR::dilateRegion`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Parameter `xf` defaults to a null pointer in C++.
MRC_API bool MR_dilateRegion_5_const_MR_PointCloud_ref(const MR_PointCloud *pointCloud, MR_VertBitSet *region, float dilation, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb, const MR_AffineXf3f *xf);

/// shrinks the region on given euclidian distance. returns false if callback also returns false
/// Generated from function `MR::erodeRegion`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Parameter `xf` defaults to a null pointer in C++.
MRC_API bool MR_erodeRegion_5_const_MR_PointCloud_ref(const MR_PointCloud *pointCloud, MR_VertBitSet *region, float erosion, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb, const MR_AffineXf3f *xf);

#ifdef __cplusplus
} // extern "C"
#endif
