// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Box3f MR_Box3f; // Defined in `#include <MRCMesh/MRBox.h>`.


/// shift of zero voxel in 3D space and dimensions of voxel-grid
/// Generated from class `MR::OriginAndDimensions`.
typedef struct MR_OriginAndDimensions MR_OriginAndDimensions;

/// Returns a pointer to a member variable of class `MR::OriginAndDimensions` named `origin`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_OriginAndDimensions_Get_origin(const MR_OriginAndDimensions *_this);

/// Modifies a member variable of class `MR::OriginAndDimensions` named `origin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OriginAndDimensions_Set_origin(MR_OriginAndDimensions *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::OriginAndDimensions` named `origin`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_OriginAndDimensions_GetMutable_origin(MR_OriginAndDimensions *_this);

/// Returns a pointer to a member variable of class `MR::OriginAndDimensions` named `dimensions`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3i *MR_OriginAndDimensions_Get_dimensions(const MR_OriginAndDimensions *_this);

/// Modifies a member variable of class `MR::OriginAndDimensions` named `dimensions`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OriginAndDimensions_Set_dimensions(MR_OriginAndDimensions *_this, MR_Vector3i value);

/// Returns a mutable pointer to a member variable of class `MR::OriginAndDimensions` named `dimensions`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3i *MR_OriginAndDimensions_GetMutable_dimensions(MR_OriginAndDimensions *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OriginAndDimensions_Destroy()` to free it when you're done using it.
MRC_API MR_OriginAndDimensions *MR_OriginAndDimensions_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_OriginAndDimensions_DestroyArray()`.
/// Use `MR_OriginAndDimensions_OffsetMutablePtr()` and `MR_OriginAndDimensions_OffsetPtr()` to access the array elements.
MRC_API MR_OriginAndDimensions *MR_OriginAndDimensions_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::OriginAndDimensions` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OriginAndDimensions_Destroy()` to free it when you're done using it.
MRC_API MR_OriginAndDimensions *MR_OriginAndDimensions_ConstructFrom(MR_Vector3f origin, MR_Vector3i dimensions);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_OriginAndDimensions *MR_OriginAndDimensions_OffsetPtr(const MR_OriginAndDimensions *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_OriginAndDimensions *MR_OriginAndDimensions_OffsetMutablePtr(MR_OriginAndDimensions *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::OriginAndDimensions`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OriginAndDimensions_Destroy()` to free it when you're done using it.
MRC_API MR_OriginAndDimensions *MR_OriginAndDimensions_ConstructFromAnother(const MR_OriginAndDimensions *_other);

/// Destroys a heap-allocated instance of `MR_OriginAndDimensions`. Does nothing if the pointer is null.
MRC_API void MR_OriginAndDimensions_Destroy(const MR_OriginAndDimensions *_this);

/// Destroys a heap-allocated array of `MR_OriginAndDimensions`. Does nothing if the pointer is null.
MRC_API void MR_OriginAndDimensions_DestroyArray(const MR_OriginAndDimensions *_this);

/// Generated from a method of class `MR::OriginAndDimensions` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OriginAndDimensions *MR_OriginAndDimensions_AssignFromAnother(MR_OriginAndDimensions *_this, const MR_OriginAndDimensions *_other);

/// computes origin and dimensions of voxel-grid to cover given 3D box with given spacing (voxelSize)
/// Generated from function `MR::calcOriginAndDimensions`.
/// Parameter `box` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OriginAndDimensions_Destroy()` to free it when you're done using it.
MRC_API MR_OriginAndDimensions *MR_calcOriginAndDimensions(const MR_Box3f *box, float voxelSize);

#ifdef __cplusplus
} // extern "C"
#endif
