// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FunctionVolume MR_FunctionVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_SimpleVolumeMinMax MR_SimpleVolumeMinMax; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_VdbVolume MR_VdbVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_VoxelsVolumeAccessor_MR_FunctionVolume MR_VoxelsVolumeAccessor_MR_FunctionVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolumeAccess.h>`.
typedef struct MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax; // Defined in `#include <MRCVoxels/MRVoxelsVolumeAccess.h>`.
typedef struct MR_VoxelsVolumeAccessor_MR_VdbVolume MR_VoxelsVolumeAccessor_MR_VdbVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolumeAccess.h>`.


/// helper class for generalized access to voxel volume data with trilinear interpolation
/// coordinate: 0       voxelSize
///             |       |
///             I---*---I---*---I---
///             |       |       |
/// value:     [0]     [1]     [2] ...
/// note: this class is as thread-safe as the underlying Accessor
/// e.g. VoxelsVolumeAccessor<VdbVolume> is not thread-safe (but several instances on same volume is thread-safe)
/// Generated from class `MR::VoxelsVolumeInterpolatedAccessor<MR::VoxelsVolumeAccessor<MR::VdbVolume>>`.
typedef struct MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_VdbVolume MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_VdbVolume;

/// helper class for generalized access to voxel volume data with trilinear interpolation
/// coordinate: 0       voxelSize
///             |       |
///             I---*---I---*---I---
///             |       |       |
/// value:     [0]     [1]     [2] ...
/// note: this class is as thread-safe as the underlying Accessor
/// e.g. VoxelsVolumeAccessor<VdbVolume> is not thread-safe (but several instances on same volume is thread-safe)
/// Generated from class `MR::VoxelsVolumeInterpolatedAccessor<MR::VoxelsVolumeAccessor<MR::SimpleVolumeMinMax>>`.
typedef struct MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax;

/// helper class for generalized access to voxel volume data with trilinear interpolation
/// coordinate: 0       voxelSize
///             |       |
///             I---*---I---*---I---
///             |       |       |
/// value:     [0]     [1]     [2] ...
/// note: this class is as thread-safe as the underlying Accessor
/// e.g. VoxelsVolumeAccessor<VdbVolume> is not thread-safe (but several instances on same volume is thread-safe)
/// Generated from class `MR::VoxelsVolumeInterpolatedAccessor<MR::VoxelsVolumeAccessor<MR::FunctionVolume>>`.
typedef struct MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_FunctionVolume MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_FunctionVolume;

/// create an accessor instance that stores references to volume and its accessor
/// the volume should not modified while it is accessed by this class
/// Generated from a constructor of class `MR::VoxelsVolumeInterpolatedAccessor<MR::VoxelsVolumeAccessor<MR::VdbVolume>>`.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `accessor` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_VdbVolume_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_VdbVolume *MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_VdbVolume_Construct_MR_VdbVolume(const MR_VdbVolume *volume, const MR_VoxelsVolumeAccessor_MR_VdbVolume *accessor);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_VdbVolume *MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_VdbVolume_OffsetPtr(const MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_VdbVolume *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_VdbVolume *MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_VdbVolume_OffsetMutablePtr(MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_VdbVolume *ptr, ptrdiff_t i);

/// a copying-like constructor with explicitly provided accessor
/// Generated from a constructor of class `MR::VoxelsVolumeInterpolatedAccessor<MR::VoxelsVolumeAccessor<MR::VdbVolume>>`.
/// Parameter `other` can not be null. It is a single object.
/// Parameter `accessor` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_VdbVolume_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_VdbVolume *MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_VdbVolume_Construct_MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_VdbVolume(const MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_VdbVolume *other, const MR_VoxelsVolumeAccessor_MR_VdbVolume *accessor);

/// Destroys a heap-allocated instance of `MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_VdbVolume`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_VdbVolume_Destroy(const MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_VdbVolume *_this);

/// Destroys a heap-allocated array of `MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_VdbVolume`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_VdbVolume_DestroyArray(const MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_VdbVolume *_this);

/// get value at specified coordinates
/// Generated from a method of class `MR::VoxelsVolumeInterpolatedAccessor<MR::VoxelsVolumeAccessor<MR::VdbVolume>>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API float MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_VdbVolume_get(const MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_VdbVolume *_this, const MR_Vector3f *pos);

/// create an accessor instance that stores references to volume and its accessor
/// the volume should not modified while it is accessed by this class
/// Generated from a constructor of class `MR::VoxelsVolumeInterpolatedAccessor<MR::VoxelsVolumeAccessor<MR::SimpleVolumeMinMax>>`.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `accessor` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax *MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax_Construct_MR_SimpleVolumeMinMax(const MR_SimpleVolumeMinMax *volume, const MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax *accessor);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax *MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax_OffsetPtr(const MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax *MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax_OffsetMutablePtr(MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax *ptr, ptrdiff_t i);

/// a copying-like constructor with explicitly provided accessor
/// Generated from a constructor of class `MR::VoxelsVolumeInterpolatedAccessor<MR::VoxelsVolumeAccessor<MR::SimpleVolumeMinMax>>`.
/// Parameter `other` can not be null. It is a single object.
/// Parameter `accessor` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax *MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax_Construct_MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax(const MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax *other, const MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax *accessor);

/// Destroys a heap-allocated instance of `MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax_Destroy(const MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax *_this);

/// Destroys a heap-allocated array of `MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax_DestroyArray(const MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax *_this);

/// get value at specified coordinates
/// Generated from a method of class `MR::VoxelsVolumeInterpolatedAccessor<MR::VoxelsVolumeAccessor<MR::SimpleVolumeMinMax>>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API float MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax_get(const MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax *_this, const MR_Vector3f *pos);

/// create an accessor instance that stores references to volume and its accessor
/// the volume should not modified while it is accessed by this class
/// Generated from a constructor of class `MR::VoxelsVolumeInterpolatedAccessor<MR::VoxelsVolumeAccessor<MR::FunctionVolume>>`.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `accessor` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_FunctionVolume_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_FunctionVolume *MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_FunctionVolume_Construct_MR_FunctionVolume(const MR_FunctionVolume *volume, const MR_VoxelsVolumeAccessor_MR_FunctionVolume *accessor);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_FunctionVolume *MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_FunctionVolume_OffsetPtr(const MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_FunctionVolume *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_FunctionVolume *MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_FunctionVolume_OffsetMutablePtr(MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_FunctionVolume *ptr, ptrdiff_t i);

/// a copying-like constructor with explicitly provided accessor
/// Generated from a constructor of class `MR::VoxelsVolumeInterpolatedAccessor<MR::VoxelsVolumeAccessor<MR::FunctionVolume>>`.
/// Parameter `other` can not be null. It is a single object.
/// Parameter `accessor` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_FunctionVolume_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_FunctionVolume *MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_FunctionVolume_Construct_MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_FunctionVolume(const MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_FunctionVolume *other, const MR_VoxelsVolumeAccessor_MR_FunctionVolume *accessor);

/// Destroys a heap-allocated instance of `MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_FunctionVolume`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_FunctionVolume_Destroy(const MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_FunctionVolume *_this);

/// Destroys a heap-allocated array of `MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_FunctionVolume`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_FunctionVolume_DestroyArray(const MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_FunctionVolume *_this);

/// get value at specified coordinates
/// Generated from a method of class `MR::VoxelsVolumeInterpolatedAccessor<MR::VoxelsVolumeAccessor<MR::FunctionVolume>>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API float MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_FunctionVolume_get(const MR_VoxelsVolumeInterpolatedAccessor_MR_VoxelsVolumeAccessor_MR_FunctionVolume *_this, const MR_Vector3f *pos);

#ifdef __cplusplus
} // extern "C"
#endif
