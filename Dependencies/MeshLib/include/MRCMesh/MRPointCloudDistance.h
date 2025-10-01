// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.


/**
* \brief returns the maximum of the squared distances from each B-point to A-cloud
* \param rigidB2A rigid transformation from B-cloud space to A-cloud space, nullptr considered as identity transformation
* \param maxDistanceSq upper limit on the positive distance in question, if the real distance is larger than the function exists returning maxDistanceSq
*/
/// Generated from function `MR::findMaxDistanceSqOneWay`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `rigidB2A` defaults to a null pointer in C++.
/// Parameter `maxDistanceSq` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
MRC_API float MR_findMaxDistanceSqOneWay_MR_PointCloud(const MR_PointCloud *a, const MR_PointCloud *b, const MR_AffineXf3f *rigidB2A, const float *maxDistanceSq);

/**
* \brief returns the squared Hausdorff distance between two point clouds, that is
the maximum of squared distances from each point to the other cloud (in both directions)
* \param rigidB2A rigid transformation from B-cloud space to A-cloud space, nullptr considered as identity transformation
* \param maxDistanceSq upper limit on the positive distance in question, if the real distance is larger than the function exists returning maxDistanceSq
*/
/// Generated from function `MR::findMaxDistanceSq`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `rigidB2A` defaults to a null pointer in C++.
/// Parameter `maxDistanceSq` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
MRC_API float MR_findMaxDistanceSq_MR_PointCloud(const MR_PointCloud *a, const MR_PointCloud *b, const MR_AffineXf3f *rigidB2A, const float *maxDistanceSq);

#ifdef __cplusplus
} // extern "C"
#endif
