// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_SimpleVolume MR_SimpleVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_VoxelBitSet MR_VoxelBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_expected_MR_VoxelBitSet_std_string MR_expected_MR_VoxelBitSet_std_string; // Defined in `#include <MRCMisc/expected_MR_VoxelBitSet_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


/**
* \brief Segment voxels of given volume on two sets using graph-cut, returning source set
*
* \param k - coefficient in the exponent of the metric affecting edge capacity:\n
*        increasing k you force to find a higher steps in the density on the boundary, decreasing k you ask for smoother boundary
* \param sourceSeeds - these voxels will be included in the result
* \param sinkSeeds - these voxels will be excluded from the result
* 
* \sa \ref VolumeSegmenter
*/
/// Generated from function `MR::segmentVolumeByGraphCut`.
/// Parameter `densityVolume` can not be null. It is a single object.
/// Parameter `sourceSeeds` can not be null. It is a single object.
/// Parameter `sinkSeeds` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VoxelBitSet_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VoxelBitSet_std_string *MR_segmentVolumeByGraphCut(const MR_SimpleVolume *densityVolume, float k, const MR_VoxelBitSet *sourceSeeds, const MR_VoxelBitSet *sinkSeeds, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

#ifdef __cplusplus
} // extern "C"
#endif
