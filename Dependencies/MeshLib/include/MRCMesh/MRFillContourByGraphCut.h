// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_function_float_from_MR_EdgeId MR_std_function_float_from_MR_EdgeId; // Defined in `#include <MRCMisc/std_function_float_from_MR_EdgeId.h>`.
typedef struct MR_std_vector_MR_EdgeId MR_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_MR_EdgeId.h>`.
typedef struct MR_std_vector_std_vector_MR_EdgeId MR_std_vector_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_EdgeId.h>`.


/**
* \brief Fills region located to the left from given contour, by minimizing the sum of metric over the boundary
* If the computations are terminated by \p progress, then returns the best approximation found by the moment of termination
*
*/
/// Generated from function `MR::fillContourLeftByGraphCut`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `contour` can not be null. It is a single object.
/// Parameter `metric` can not be null. It is a single object.
/// Parameter `progress` is a single object.
/// Parameter `progress` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_fillContourLeftByGraphCut_std_vector_MR_EdgeId(const MR_MeshTopology *topology, const MR_std_vector_MR_EdgeId *contour, const MR_std_function_float_from_MR_EdgeId *metric, const MR_std_function_bool_from_float *progress);

/**
* \brief Fills region located to the left from given contours, by minimizing the sum of metric over the boundary
* If the computations are terminated by \p progress, then returns the best approximation found by the moment of termination
*
*/
/// Generated from function `MR::fillContourLeftByGraphCut`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `contours` can not be null. It is a single object.
/// Parameter `metric` can not be null. It is a single object.
/// Parameter `progress` is a single object.
/// Parameter `progress` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_fillContourLeftByGraphCut_std_vector_std_vector_MR_EdgeId(const MR_MeshTopology *topology, const MR_std_vector_std_vector_MR_EdgeId *contours, const MR_std_function_float_from_MR_EdgeId *metric, const MR_std_function_bool_from_float *progress);

/**
* \brief Finds segment that divide mesh on source and sink (source included, sink excluded), by minimizing the sum of metric over the boundary
* If the computations are terminated by \p progress, then returns the best approximation found by the moment of termination
*
*/
/// Generated from function `MR::segmentByGraphCut`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `source` can not be null. It is a single object.
/// Parameter `sink` can not be null. It is a single object.
/// Parameter `metric` can not be null. It is a single object.
/// Parameter `progress` is a single object.
/// Parameter `progress` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_segmentByGraphCut(const MR_MeshTopology *topology, const MR_FaceBitSet *source, const MR_FaceBitSet *sink, const MR_std_function_float_from_MR_EdgeId *metric, const MR_std_function_bool_from_float *progress);

#ifdef __cplusplus
} // extern "C"
#endif
