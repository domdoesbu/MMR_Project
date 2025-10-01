// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FunctionVolume MR_FunctionVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_SimpleVolume MR_SimpleVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_VdbVolume MR_VdbVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_Vector3i MR_Vector3i; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_VoxelLocation MR_VoxelLocation; // Defined in `#include <MRCMesh/MRVolumeIndexer.h>`.


/// VoxelsVolumeAccessor specialization for simple volumes with min/max
/// Generated from class `MR::VoxelsVolumeAccessor<MR::SimpleVolumeMinMax>`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::VoxelsVolumeAccessor<MR::SimpleVolume>`
typedef struct MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax;

/// VoxelsVolumeAccessor specialization for simple volumes
/// Generated from class `MR::VoxelsVolumeAccessor<MR::SimpleVolume>`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::VoxelsVolumeAccessor<MR::SimpleVolumeMinMax>`
typedef struct MR_VoxelsVolumeAccessor_MR_SimpleVolume MR_VoxelsVolumeAccessor_MR_SimpleVolume;

/// VoxelsVolumeAccessor specialization for value getters
/// Generated from class `MR::VoxelsVolumeAccessor<MR::FunctionVolume>`.
typedef struct MR_VoxelsVolumeAccessor_MR_FunctionVolume MR_VoxelsVolumeAccessor_MR_FunctionVolume;

/// VoxelsVolumeAccessor specialization for VDB volume
/// Generated from class `MR::VoxelsVolumeAccessor<MR::VdbVolume>`.
typedef struct MR_VoxelsVolumeAccessor_MR_VdbVolume MR_VoxelsVolumeAccessor_MR_VdbVolume;

/// Generated from a constructor of class `MR::VoxelsVolumeAccessor<MR::SimpleVolumeMinMax>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax *MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax_ConstructFromAnother(const MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax *MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax_OffsetPtr(const MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax *MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax_OffsetMutablePtr(MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::VoxelsVolumeAccessor<MR::SimpleVolumeMinMax>` to its base class `MR::VoxelsVolumeAccessor<MR::SimpleVolume>`.
/// This version is acting on mutable pointers.
MRC_API const MR_VoxelsVolumeAccessor_MR_SimpleVolume *MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax_UpcastTo_MR_VoxelsVolumeAccessor_MR_SimpleVolume(const MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax *object);

/// Upcasts an instance of `MR::VoxelsVolumeAccessor<MR::SimpleVolumeMinMax>` to its base class `MR::VoxelsVolumeAccessor<MR::SimpleVolume>`.
MRC_API MR_VoxelsVolumeAccessor_MR_SimpleVolume *MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax_MutableUpcastTo_MR_VoxelsVolumeAccessor_MR_SimpleVolume(MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax *object);

/// Destroys a heap-allocated instance of `MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax_Destroy(const MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax *_this);

/// Destroys a heap-allocated array of `MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax_DestroyArray(const MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax *_this);

///< caching results of this accessor does not make any sense since it returns values from a simple container
/// Returns a pointer to a member variable of class `MR::VoxelsVolumeAccessor<MR::SimpleVolume>` named `cacheEffective`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_VoxelsVolumeAccessor_MR_SimpleVolume_Get_cacheEffective(void);

/// Generated from a constructor of class `MR::VoxelsVolumeAccessor<MR::SimpleVolume>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsVolumeAccessor_MR_SimpleVolume_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsVolumeAccessor_MR_SimpleVolume *MR_VoxelsVolumeAccessor_MR_SimpleVolume_ConstructFromAnother(const MR_VoxelsVolumeAccessor_MR_SimpleVolume *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VoxelsVolumeAccessor_MR_SimpleVolume *MR_VoxelsVolumeAccessor_MR_SimpleVolume_OffsetPtr(const MR_VoxelsVolumeAccessor_MR_SimpleVolume *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VoxelsVolumeAccessor_MR_SimpleVolume *MR_VoxelsVolumeAccessor_MR_SimpleVolume_OffsetMutablePtr(MR_VoxelsVolumeAccessor_MR_SimpleVolume *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::VoxelsVolumeAccessor<MR::SimpleVolume>` to a derived class `MR::VoxelsVolumeAccessor<MR::SimpleVolumeMinMax>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax *MR_VoxelsVolumeAccessor_MR_SimpleVolume_StaticDowncastTo_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax(const MR_VoxelsVolumeAccessor_MR_SimpleVolume *object);

/// Downcasts an instance of `MR::VoxelsVolumeAccessor<MR::SimpleVolume>` to a derived class `MR::VoxelsVolumeAccessor<MR::SimpleVolumeMinMax>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax *MR_VoxelsVolumeAccessor_MR_SimpleVolume_MutableStaticDowncastTo_MR_VoxelsVolumeAccessor_MR_SimpleVolumeMinMax(MR_VoxelsVolumeAccessor_MR_SimpleVolume *object);

/// Generated from a constructor of class `MR::VoxelsVolumeAccessor<MR::SimpleVolume>`.
/// Parameter `volume` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsVolumeAccessor_MR_SimpleVolume_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsVolumeAccessor_MR_SimpleVolume *MR_VoxelsVolumeAccessor_MR_SimpleVolume_Construct(const MR_SimpleVolume *volume);

/// Destroys a heap-allocated instance of `MR_VoxelsVolumeAccessor_MR_SimpleVolume`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsVolumeAccessor_MR_SimpleVolume_Destroy(const MR_VoxelsVolumeAccessor_MR_SimpleVolume *_this);

/// Destroys a heap-allocated array of `MR_VoxelsVolumeAccessor_MR_SimpleVolume`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsVolumeAccessor_MR_SimpleVolume_DestroyArray(const MR_VoxelsVolumeAccessor_MR_SimpleVolume *_this);

/// Generated from a method of class `MR::VoxelsVolumeAccessor<MR::SimpleVolume>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API float MR_VoxelsVolumeAccessor_MR_SimpleVolume_get_MR_Vector3i(const MR_VoxelsVolumeAccessor_MR_SimpleVolume *_this, const MR_Vector3i *pos);

/// Generated from a method of class `MR::VoxelsVolumeAccessor<MR::SimpleVolume>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `loc` can not be null. It is a single object.
MRC_API float MR_VoxelsVolumeAccessor_MR_SimpleVolume_get_MR_VoxelLocation(const MR_VoxelsVolumeAccessor_MR_SimpleVolume *_this, const MR_VoxelLocation *loc);

/// this additional shift shall be added to integer voxel coordinates during transformation in 3D space
/// Generated from a method of class `MR::VoxelsVolumeAccessor<MR::SimpleVolume>` named `shift`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_VoxelsVolumeAccessor_MR_SimpleVolume_shift(const MR_VoxelsVolumeAccessor_MR_SimpleVolume *_this);

///< caching results of this accessor can improve performance
/// Returns a pointer to a member variable of class `MR::VoxelsVolumeAccessor<MR::FunctionVolume>` named `cacheEffective`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_VoxelsVolumeAccessor_MR_FunctionVolume_Get_cacheEffective(void);

/// Generated from a constructor of class `MR::VoxelsVolumeAccessor<MR::FunctionVolume>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsVolumeAccessor_MR_FunctionVolume_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsVolumeAccessor_MR_FunctionVolume *MR_VoxelsVolumeAccessor_MR_FunctionVolume_ConstructFromAnother(const MR_VoxelsVolumeAccessor_MR_FunctionVolume *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VoxelsVolumeAccessor_MR_FunctionVolume *MR_VoxelsVolumeAccessor_MR_FunctionVolume_OffsetPtr(const MR_VoxelsVolumeAccessor_MR_FunctionVolume *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VoxelsVolumeAccessor_MR_FunctionVolume *MR_VoxelsVolumeAccessor_MR_FunctionVolume_OffsetMutablePtr(MR_VoxelsVolumeAccessor_MR_FunctionVolume *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VoxelsVolumeAccessor<MR::FunctionVolume>`.
/// Parameter `volume` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsVolumeAccessor_MR_FunctionVolume_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsVolumeAccessor_MR_FunctionVolume *MR_VoxelsVolumeAccessor_MR_FunctionVolume_Construct(const MR_FunctionVolume *volume);

/// Destroys a heap-allocated instance of `MR_VoxelsVolumeAccessor_MR_FunctionVolume`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsVolumeAccessor_MR_FunctionVolume_Destroy(const MR_VoxelsVolumeAccessor_MR_FunctionVolume *_this);

/// Destroys a heap-allocated array of `MR_VoxelsVolumeAccessor_MR_FunctionVolume`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsVolumeAccessor_MR_FunctionVolume_DestroyArray(const MR_VoxelsVolumeAccessor_MR_FunctionVolume *_this);

/// Generated from a method of class `MR::VoxelsVolumeAccessor<MR::FunctionVolume>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API float MR_VoxelsVolumeAccessor_MR_FunctionVolume_get_MR_Vector3i(const MR_VoxelsVolumeAccessor_MR_FunctionVolume *_this, const MR_Vector3i *pos);

/// Generated from a method of class `MR::VoxelsVolumeAccessor<MR::FunctionVolume>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `loc` can not be null. It is a single object.
MRC_API float MR_VoxelsVolumeAccessor_MR_FunctionVolume_get_MR_VoxelLocation(const MR_VoxelsVolumeAccessor_MR_FunctionVolume *_this, const MR_VoxelLocation *loc);

/// this additional shift shall be added to integer voxel coordinates during transformation in 3D space
/// Generated from a method of class `MR::VoxelsVolumeAccessor<MR::FunctionVolume>` named `shift`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_VoxelsVolumeAccessor_MR_FunctionVolume_shift(const MR_VoxelsVolumeAccessor_MR_FunctionVolume *_this);

///< caching results of this accessor can improve performance
/// Returns a pointer to a member variable of class `MR::VoxelsVolumeAccessor<MR::VdbVolume>` named `cacheEffective`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_VoxelsVolumeAccessor_MR_VdbVolume_Get_cacheEffective(void);

/// Generated from a constructor of class `MR::VoxelsVolumeAccessor<MR::VdbVolume>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsVolumeAccessor_MR_VdbVolume_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsVolumeAccessor_MR_VdbVolume *MR_VoxelsVolumeAccessor_MR_VdbVolume_ConstructFromAnother(MR_PassBy _other_pass_by, MR_VoxelsVolumeAccessor_MR_VdbVolume *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VoxelsVolumeAccessor_MR_VdbVolume *MR_VoxelsVolumeAccessor_MR_VdbVolume_OffsetPtr(const MR_VoxelsVolumeAccessor_MR_VdbVolume *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VoxelsVolumeAccessor_MR_VdbVolume *MR_VoxelsVolumeAccessor_MR_VdbVolume_OffsetMutablePtr(MR_VoxelsVolumeAccessor_MR_VdbVolume *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VoxelsVolumeAccessor<MR::VdbVolume>`.
/// Parameter `volume` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsVolumeAccessor_MR_VdbVolume_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsVolumeAccessor_MR_VdbVolume *MR_VoxelsVolumeAccessor_MR_VdbVolume_Construct(const MR_VdbVolume *volume);

/// Destroys a heap-allocated instance of `MR_VoxelsVolumeAccessor_MR_VdbVolume`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsVolumeAccessor_MR_VdbVolume_Destroy(const MR_VoxelsVolumeAccessor_MR_VdbVolume *_this);

/// Destroys a heap-allocated array of `MR_VoxelsVolumeAccessor_MR_VdbVolume`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsVolumeAccessor_MR_VdbVolume_DestroyArray(const MR_VoxelsVolumeAccessor_MR_VdbVolume *_this);

/// Generated from a method of class `MR::VoxelsVolumeAccessor<MR::VdbVolume>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelsVolumeAccessor_MR_VdbVolume *MR_VoxelsVolumeAccessor_MR_VdbVolume_AssignFromAnother(MR_VoxelsVolumeAccessor_MR_VdbVolume *_this, MR_PassBy _other_pass_by, MR_VoxelsVolumeAccessor_MR_VdbVolume *_other);

/// Generated from a method of class `MR::VoxelsVolumeAccessor<MR::VdbVolume>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API float MR_VoxelsVolumeAccessor_MR_VdbVolume_get_MR_Vector3i(const MR_VoxelsVolumeAccessor_MR_VdbVolume *_this, const MR_Vector3i *pos);

/// Generated from a method of class `MR::VoxelsVolumeAccessor<MR::VdbVolume>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `loc` can not be null. It is a single object.
MRC_API float MR_VoxelsVolumeAccessor_MR_VdbVolume_get_MR_VoxelLocation(const MR_VoxelsVolumeAccessor_MR_VdbVolume *_this, const MR_VoxelLocation *loc);

/// Generated from a method of class `MR::VoxelsVolumeAccessor<MR::VdbVolume>` named `minCoord`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3i *MR_VoxelsVolumeAccessor_MR_VdbVolume_minCoord(const MR_VoxelsVolumeAccessor_MR_VdbVolume *_this);

/// this additional shift shall be added to integer voxel coordinates during transformation in 3D space
/// Generated from a method of class `MR::VoxelsVolumeAccessor<MR::VdbVolume>` named `shift`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_VoxelsVolumeAccessor_MR_VdbVolume_shift(const MR_VoxelsVolumeAccessor_MR_VdbVolume *_this);

#ifdef __cplusplus
} // extern "C"
#endif
