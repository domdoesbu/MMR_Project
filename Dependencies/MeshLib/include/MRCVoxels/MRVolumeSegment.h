// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_VdbVolume MR_VdbVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_Vector3i MR_Vector3i; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_VoxelBitSet MR_VoxelBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VoxelMetricParameters MR_VoxelMetricParameters; // Defined in `#include <MRCVoxels/MRVoxelPath.h>`.
typedef struct MR_expected_MR_Mesh_std_string MR_expected_MR_Mesh_std_string; // Defined in `#include <MRCMisc/expected_MR_Mesh_std_string.h>`.
typedef struct MR_expected_MR_VoxelBitSet_std_string MR_expected_MR_VoxelBitSet_std_string; // Defined in `#include <MRCMisc/expected_MR_VoxelBitSet_std_string.h>`.
typedef struct MR_expected_std_vector_MR_Mesh_std_string MR_expected_std_vector_MR_Mesh_std_string; // Defined in `#include <MRCMisc/expected_std_vector_MR_Mesh_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_vector_MR_Vector3i MR_std_vector_MR_Vector3i; // Defined in `#include <MRCMisc/std_vector_MR_Vector3i.h>`.
typedef struct MR_std_vector_std_pair_MR_Vector3f_MR_Vector3f MR_std_vector_std_pair_MR_Vector3f_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_std_pair_MR_Vector3f_MR_Vector3f.h>`.


/**
* \brief Parameters for volume segmentation
* 
* \sa \ref segmentVolume
*/
/// Generated from class `MR::VolumeSegmentationParameters`.
typedef struct MR_VolumeSegmentationParameters MR_VolumeSegmentationParameters;

/**
* \brief Class for voxels segmentation
*
* <table border=0> <caption id="VolumeSegmenter_examples"></caption>
* <tr> <td> \image html voxel_segmentation/voxel_segmentation_0_0.png "Before (a)" width = 350cm </td>
*      <td> \image html voxel_segmentation/voxel_segmentation_0_1.png "Before (b)" width = 350cm </td> </tr>
*      <td> \image html voxel_segmentation/voxel_segmentation_0_2.png "After" width = 350cm </td> </tr>
* </table>
*/
/// Generated from class `MR::VolumeSegmenter`.
typedef struct MR_VolumeSegmenter MR_VolumeSegmenter;

typedef enum MR_VolumeSegmenter_SeedType
{
    MR_VolumeSegmenter_SeedType_Inside = 0,
    MR_VolumeSegmenter_SeedType_Outside = 1,
    MR_VolumeSegmenter_SeedType_Count = 2,
} MR_VolumeSegmenter_SeedType;

/**
* \brief Creates mesh from voxels mask
* \param mask in space of whole volume
*  density inside mask is expected to be higher then outside
*/
/// Generated from function `MR::meshFromVoxelsMask`.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `mask` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_meshFromVoxelsMask(const MR_VdbVolume *volume, const MR_VoxelBitSet *mask);

/// Exponent modifier of path building metric (paths are built between voxel pairs and then marked as tooth seed)
/// Returns a pointer to a member variable of class `MR::VolumeSegmentationParameters` named `buildPathExponentModifier`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_VolumeSegmentationParameters_Get_buildPathExponentModifier(const MR_VolumeSegmentationParameters *_this);

/// Exponent modifier of path building metric (paths are built between voxel pairs and then marked as tooth seed)
/// Modifies a member variable of class `MR::VolumeSegmentationParameters` named `buildPathExponentModifier`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VolumeSegmentationParameters_Set_buildPathExponentModifier(MR_VolumeSegmentationParameters *_this, float value);

/// Exponent modifier of path building metric (paths are built between voxel pairs and then marked as tooth seed)
/// Returns a mutable pointer to a member variable of class `MR::VolumeSegmentationParameters` named `buildPathExponentModifier`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_VolumeSegmentationParameters_GetMutable_buildPathExponentModifier(MR_VolumeSegmentationParameters *_this);

/// Exponent modifier of graph cutting metric (volume presents graph with seeds, this graph are min cut)
/// Returns a pointer to a member variable of class `MR::VolumeSegmentationParameters` named `segmentationExponentModifier`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_VolumeSegmentationParameters_Get_segmentationExponentModifier(const MR_VolumeSegmentationParameters *_this);

/// Exponent modifier of graph cutting metric (volume presents graph with seeds, this graph are min cut)
/// Modifies a member variable of class `MR::VolumeSegmentationParameters` named `segmentationExponentModifier`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VolumeSegmentationParameters_Set_segmentationExponentModifier(MR_VolumeSegmentationParameters *_this, float value);

/// Exponent modifier of graph cutting metric (volume presents graph with seeds, this graph are min cut)
/// Returns a mutable pointer to a member variable of class `MR::VolumeSegmentationParameters` named `segmentationExponentModifier`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_VolumeSegmentationParameters_GetMutable_segmentationExponentModifier(MR_VolumeSegmentationParameters *_this);

/// Segment box expansion (only part of volume are segmented, this parameter shows how much to expand this part)
/// Returns a pointer to a member variable of class `MR::VolumeSegmentationParameters` named `voxelsExpansion`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_VolumeSegmentationParameters_Get_voxelsExpansion(const MR_VolumeSegmentationParameters *_this);

/// Segment box expansion (only part of volume are segmented, this parameter shows how much to expand this part)
/// Modifies a member variable of class `MR::VolumeSegmentationParameters` named `voxelsExpansion`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VolumeSegmentationParameters_Set_voxelsExpansion(MR_VolumeSegmentationParameters *_this, int32_t value);

/// Segment box expansion (only part of volume are segmented, this parameter shows how much to expand this part)
/// Returns a mutable pointer to a member variable of class `MR::VolumeSegmentationParameters` named `voxelsExpansion`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_VolumeSegmentationParameters_GetMutable_voxelsExpansion(MR_VolumeSegmentationParameters *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VolumeSegmentationParameters_Destroy()` to free it when you're done using it.
MRC_API MR_VolumeSegmentationParameters *MR_VolumeSegmentationParameters_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VolumeSegmentationParameters_DestroyArray()`.
/// Use `MR_VolumeSegmentationParameters_OffsetMutablePtr()` and `MR_VolumeSegmentationParameters_OffsetPtr()` to access the array elements.
MRC_API MR_VolumeSegmentationParameters *MR_VolumeSegmentationParameters_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::VolumeSegmentationParameters` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VolumeSegmentationParameters_Destroy()` to free it when you're done using it.
MRC_API MR_VolumeSegmentationParameters *MR_VolumeSegmentationParameters_ConstructFrom(float buildPathExponentModifier, float segmentationExponentModifier, int32_t voxelsExpansion);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VolumeSegmentationParameters *MR_VolumeSegmentationParameters_OffsetPtr(const MR_VolumeSegmentationParameters *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VolumeSegmentationParameters *MR_VolumeSegmentationParameters_OffsetMutablePtr(MR_VolumeSegmentationParameters *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VolumeSegmentationParameters`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VolumeSegmentationParameters_Destroy()` to free it when you're done using it.
MRC_API MR_VolumeSegmentationParameters *MR_VolumeSegmentationParameters_ConstructFromAnother(const MR_VolumeSegmentationParameters *_other);

/// Destroys a heap-allocated instance of `MR_VolumeSegmentationParameters`. Does nothing if the pointer is null.
MRC_API void MR_VolumeSegmentationParameters_Destroy(const MR_VolumeSegmentationParameters *_this);

/// Destroys a heap-allocated array of `MR_VolumeSegmentationParameters`. Does nothing if the pointer is null.
MRC_API void MR_VolumeSegmentationParameters_DestroyArray(const MR_VolumeSegmentationParameters *_this);

/// Generated from a method of class `MR::VolumeSegmentationParameters` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VolumeSegmentationParameters *MR_VolumeSegmentationParameters_AssignFromAnother(MR_VolumeSegmentationParameters *_this, const MR_VolumeSegmentationParameters *_other);

/**
* \brief Simple segment volume
* \details
* 1. Build paths between points pairs \n
* 2. Mark paths as inside part seeds \n
* 3. Mark volume part edges as outside part seeds \n
* 4. Return mesh from segmented inside part
*/
/// Generated from function `MR::segmentVolume`.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `pairs` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `MR::VolumeSegmentationParameters()`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_segmentVolume(const MR_VdbVolume *volume, const MR_std_vector_std_pair_MR_Vector3f_MR_Vector3f *pairs, const MR_VolumeSegmentationParameters *params);

/// Generated from a constructor of class `MR::VolumeSegmenter`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VolumeSegmenter_Destroy()` to free it when you're done using it.
MRC_API MR_VolumeSegmenter *MR_VolumeSegmenter_ConstructFromAnother(MR_PassBy _other_pass_by, MR_VolumeSegmenter *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VolumeSegmenter *MR_VolumeSegmenter_OffsetPtr(const MR_VolumeSegmenter *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VolumeSegmenter *MR_VolumeSegmenter_OffsetMutablePtr(MR_VolumeSegmenter *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VolumeSegmenter`.
/// Parameter `volume` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VolumeSegmenter_Destroy()` to free it when you're done using it.
MRC_API MR_VolumeSegmenter *MR_VolumeSegmenter_Construct(const MR_VdbVolume *volume);

/// Destroys a heap-allocated instance of `MR_VolumeSegmenter`. Does nothing if the pointer is null.
MRC_API void MR_VolumeSegmenter_Destroy(const MR_VolumeSegmenter *_this);

/// Destroys a heap-allocated array of `MR_VolumeSegmenter`. Does nothing if the pointer is null.
MRC_API void MR_VolumeSegmenter_DestroyArray(const MR_VolumeSegmenter *_this);

/// Builds path with given parameters, marks result as seedType seeds
/// Generated from a method of class `MR::VolumeSegmenter` named `addPathSeeds`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `metricParameters` can not be null. It is a single object.
/// Parameter `exponentModifier` has a default argument: `-1.F`, pass a null pointer to use it.
MRC_API void MR_VolumeSegmenter_addPathSeeds(MR_VolumeSegmenter *_this, const MR_VoxelMetricParameters *metricParameters, MR_VolumeSegmenter_SeedType seedType, const float *exponentModifier);

/// Reset seeds with given ones
/// Generated from a method of class `MR::VolumeSegmenter` named `setSeeds`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `seeds` can not be null. It is a single object.
MRC_API void MR_VolumeSegmenter_setSeeds(MR_VolumeSegmenter *_this, const MR_std_vector_MR_Vector3i *seeds, MR_VolumeSegmenter_SeedType seedType);

/// Adds new seeds to stored
/// Generated from a method of class `MR::VolumeSegmenter` named `addSeeds`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `seeds` can not be null. It is a single object.
MRC_API void MR_VolumeSegmenter_addSeeds(MR_VolumeSegmenter *_this, const MR_std_vector_MR_Vector3i *seeds, MR_VolumeSegmenter_SeedType seedType);

/// Return currently stored seeds
/// Generated from a method of class `MR::VolumeSegmenter` named `getSeeds`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_Vector3i *MR_VolumeSegmenter_getSeeds(const MR_VolumeSegmenter *_this, MR_VolumeSegmenter_SeedType seedType);

/// Segments volume, return inside part segmentation (VoxelBitSet in space of VolumePart)
/// Generated from a method of class `MR::VolumeSegmenter` named `segmentVolume`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `segmentationExponentModifier` has a default argument: `3000.F`, pass a null pointer to use it.
/// Parameter `voxelsExpansion` has a default argument: `25`, pass a null pointer to use it.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VoxelBitSet_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VoxelBitSet_std_string *MR_VolumeSegmenter_segmentVolume(MR_VolumeSegmenter *_this, const float *segmentationExponentModifier, const int32_t *voxelsExpansion, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Returns mesh of given segment
/// Generated from a method of class `MR::VolumeSegmenter` named `createMeshFromSegmentation`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `segmentation` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_VolumeSegmenter_createMeshFromSegmentation(const MR_VolumeSegmenter *_this, const MR_VoxelBitSet *segmentation);

/// Dimensions of volume part, filled after segmentation
/// Generated from a method of class `MR::VolumeSegmenter` named `getVolumePartDimensions`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3i *MR_VolumeSegmenter_getVolumePartDimensions(const MR_VolumeSegmenter *_this);

/// Min voxel of volume part box in whole volume space, filled after segmentation
/// Generated from a method of class `MR::VolumeSegmenter` named `getMinVoxel`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3i *MR_VolumeSegmenter_getMinVoxel(const MR_VolumeSegmenter *_this);

/// Given voxel mask, separate it into components using mincut algorithm
/// @param minSize Minimum size of a segment (in voxels)
/// Generated from function `MR::segmentVoxelMaskToInstances`.
/// Parameter `mask` can not be null. It is a single object.
/// Parameter `minSize` has a default argument: `100`, pass a null pointer to use it.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_MR_Mesh_std_string *MR_segmentVoxelMaskToInstances(const MR_VdbVolume *mask, const MR_uint64_t *minSize, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

#ifdef __cplusplus
} // extern "C"
#endif
