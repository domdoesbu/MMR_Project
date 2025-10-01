// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_VdbVolume MR_VdbVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.


typedef int32_t MR_VoxelFilterType;
enum // MR_VoxelFilterType
{
    MR_VoxelFilterType_Median = 0,
    MR_VoxelFilterType_Mean = 1,
    MR_VoxelFilterType_Gaussian = 2,
};

/// Performs voxels filtering.
/// @param type Type of fitler
/// @param width Width of the filtering window, must be an odd number greater or equal to 1.
/// Generated from function `MR::voxelFilter`.
/// Parameter `volume` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VdbVolume_Destroy()` to free it when you're done using it.
MRC_API MR_VdbVolume *MR_voxelFilter(const MR_VdbVolume *volume, MR_VoxelFilterType type, int32_t width);

#ifdef __cplusplus
} // extern "C"
#endif
