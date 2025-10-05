// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Box3i MR_Box3i; // Defined in `#include <MRCMesh/MRBox.h>`.
typedef struct MR_OpenVdbFloatGrid MR_OpenVdbFloatGrid; // Defined in `#include <MRCVoxels/MRVDBFloatGrid.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_Vector3i MR_Vector3i; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_VoxelBitSet MR_VoxelBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_shared_ptr_MR_OpenVdbFloatGrid MR_std_shared_ptr_MR_OpenVdbFloatGrid; // Defined in `#include <MRCMisc/std_shared_ptr_MR_OpenVdbFloatGrid.h>`.


/// wrapper class that helps mrbind to avoid excess MRVDBFloatGrid.h includes
/// Generated from class `MR::FloatGrid`.
typedef struct MR_FloatGrid MR_FloatGrid;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FloatGrid_Destroy()` to free it when you're done using it.
MRC_API MR_FloatGrid *MR_FloatGrid_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FloatGrid_DestroyArray()`.
/// Use `MR_FloatGrid_OffsetMutablePtr()` and `MR_FloatGrid_OffsetPtr()` to access the array elements.
MRC_API MR_FloatGrid *MR_FloatGrid_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FloatGrid *MR_FloatGrid_OffsetPtr(const MR_FloatGrid *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FloatGrid *MR_FloatGrid_OffsetMutablePtr(MR_FloatGrid *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FloatGrid`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FloatGrid_Destroy()` to free it when you're done using it.
MRC_API MR_FloatGrid *MR_FloatGrid_ConstructFromAnother(MR_PassBy _other_pass_by, MR_FloatGrid *_other);

/// Generated from a constructor of class `MR::FloatGrid`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FloatGrid_Destroy()` to free it when you're done using it.
MRC_API MR_FloatGrid *MR_FloatGrid_Construct(MR_PassBy ptr_pass_by, MR_std_shared_ptr_MR_OpenVdbFloatGrid *ptr);

/// Destroys a heap-allocated instance of `MR_FloatGrid`. Does nothing if the pointer is null.
MRC_API void MR_FloatGrid_Destroy(const MR_FloatGrid *_this);

/// Destroys a heap-allocated array of `MR_FloatGrid`. Does nothing if the pointer is null.
MRC_API void MR_FloatGrid_DestroyArray(const MR_FloatGrid *_this);

/// Generated from a conversion operator of class `MR::FloatGrid` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_FloatGrid_ConvertTo_bool(const MR_FloatGrid *_this);

/// Generated from a method of class `MR::FloatGrid` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FloatGrid *MR_FloatGrid_AssignFromAnother(MR_FloatGrid *_this, MR_PassBy _other_pass_by, MR_FloatGrid *_other);

/// Generated from a method of class `MR::FloatGrid` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FloatGrid_reset(MR_FloatGrid *_this);

/// Generated from a method of class `MR::FloatGrid` named `swap`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API void MR_FloatGrid_swap(MR_FloatGrid *_this, MR_FloatGrid *other);

/// Generated from a method of class `MR::FloatGrid` named `get`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_OpenVdbFloatGrid *MR_FloatGrid_get(const MR_FloatGrid *_this);

/// Generated from a method of class `MR::FloatGrid` named `operator*`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OpenVdbFloatGrid *MR_deref_MR_FloatGrid(const MR_FloatGrid *_this);

/// Generated from a method of class `MR::FloatGrid` named `operator->`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_OpenVdbFloatGrid *MR_FloatGrid_arrow(const MR_FloatGrid *_this);

/// Generated from a method of class `MR::FloatGrid` named `toVdb`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_OpenVdbFloatGrid_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_OpenVdbFloatGrid *MR_FloatGrid_toVdb(const MR_FloatGrid *_this);

/// returns the amount of heap memory occupied by grid
/// Generated from function `MR::heapBytes`.
/// Parameter `grid` can not be null. It is a single object.
MRC_API MR_uint64_t MR_heapBytes_MR_FloatGrid(const MR_FloatGrid *grid);

/// resample this grid to fit voxelScale
/// Generated from function `MR::resampled`.
/// Parameter `grid` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FloatGrid_Destroy()` to free it when you're done using it.
MRC_API MR_FloatGrid *MR_resampled_float(const MR_FloatGrid *grid, float voxelScale, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// resample this grid to fit voxelScale
/// Generated from function `MR::resampled`.
/// Parameter `grid` can not be null. It is a single object.
/// Parameter `voxelScale` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FloatGrid_Destroy()` to free it when you're done using it.
MRC_API MR_FloatGrid *MR_resampled_MR_Vector3f(const MR_FloatGrid *grid, const MR_Vector3f *voxelScale, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// returns cropped grid
/// Generated from function `MR::cropped`.
/// Parameter `grid` can not be null. It is a single object.
/// Parameter `box` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FloatGrid_Destroy()` to free it when you're done using it.
MRC_API MR_FloatGrid *MR_cropped(const MR_FloatGrid *grid, const MR_Box3i *box, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// returns grid with gaussian filter applied
/// Generated from function `MR::gaussianFilter`.
/// Parameter `grid` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API void MR_gaussianFilter(MR_FloatGrid *grid, int32_t width, int32_t iters, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Generated from function `MR::gaussianFiltered`.
/// Parameter `grid` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FloatGrid_Destroy()` to free it when you're done using it.
MRC_API MR_FloatGrid *MR_gaussianFiltered(const MR_FloatGrid *grid, int32_t width, int32_t iters, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// returns the value at given voxel
/// Generated from function `MR::getValue`.
/// Parameter `grid` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
MRC_API float MR_getValue(const MR_FloatGrid *grid, const MR_Vector3i *p);

/// sets given region voxels value
/// \note region is in grid space (0 voxel id is minimum active voxel in grid)
/// Generated from function `MR::setValue`.
/// Parameter `grid` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
MRC_API void MR_setValue_MR_Vector3i(MR_FloatGrid *grid, const MR_Vector3i *p, float value);

/// sets given region voxels value
/// \note region is in grid space (0 voxel id is minimum active voxel in grid)
/// Generated from function `MR::setValue`.
/// Parameter `grid` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
MRC_API void MR_setValue_MR_VoxelBitSet(MR_FloatGrid *grid, const MR_VoxelBitSet *region, float value);

/// sets type of this grid as LEVEL SET (for normal flipping)
/// Generated from function `MR::setLevelSetType`.
/// Parameter `grid` can not be null. It is a single object.
MRC_API void MR_setLevelSetType(MR_FloatGrid *grid);

// union operation on volumetric representation of two meshes
/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FloatGrid_Destroy()` to free it when you're done using it.
MRC_API MR_FloatGrid *MR_add_assign_MR_FloatGrid(MR_FloatGrid *a, const MR_FloatGrid *b);

// difference operation on volumetric representation of two meshes
/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FloatGrid_Destroy()` to free it when you're done using it.
MRC_API MR_FloatGrid *MR_sub_assign_MR_FloatGrid(MR_FloatGrid *a, const MR_FloatGrid *b);

// intersection operation on volumetric representation of two meshes
/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FloatGrid_Destroy()` to free it when you're done using it.
MRC_API MR_FloatGrid *MR_mul_assign_MR_FloatGrid(MR_FloatGrid *a, const MR_FloatGrid *b);

#ifdef __cplusplus
} // extern "C"
#endif
