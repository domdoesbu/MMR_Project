// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FloatGrid MR_FloatGrid; // Defined in `#include <MRCVoxels/MRFloatGrid.h>`.
typedef struct MR_std_vector_MR_VoxelBitSet MR_std_vector_MR_VoxelBitSet; // Defined in `#include <MRCMisc/std_vector_MR_VoxelBitSet.h>`.


/// finds separated by iso-value components in grid space (0 voxel id is minimum active voxel in grid)
/// Generated from function `MR::FloatGridComponents::getAllComponents`.
/// Parameter `grid` can not be null. It is a single object.
/// Parameter `isoValue` has a default argument: `0.F`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_VoxelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_VoxelBitSet *MR_FloatGridComponents_getAllComponents(const MR_FloatGrid *grid, const float *isoValue);

#ifdef __cplusplus
} // extern "C"
#endif
