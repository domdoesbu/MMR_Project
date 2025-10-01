// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.


/// this object stores a difference between two meshes: both in coordinates and in topology
/// \details if the meshes are similar then this object is small, if the meshes are very distinct then this object will be even larger than one mesh itself
/// Generated from class `MR::MeshDiff`.
typedef struct MR_MeshDiff MR_MeshDiff;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshDiff_Destroy()` to free it when you're done using it.
MRC_API MR_MeshDiff *MR_MeshDiff_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshDiff_DestroyArray()`.
/// Use `MR_MeshDiff_OffsetMutablePtr()` and `MR_MeshDiff_OffsetPtr()` to access the array elements.
MRC_API MR_MeshDiff *MR_MeshDiff_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshDiff *MR_MeshDiff_OffsetPtr(const MR_MeshDiff *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshDiff *MR_MeshDiff_OffsetMutablePtr(MR_MeshDiff *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshDiff`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshDiff_Destroy()` to free it when you're done using it.
MRC_API MR_MeshDiff *MR_MeshDiff_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MeshDiff *_other);

/// computes the difference, that can be applied to mesh-from in order to get mesh-to
/// Generated from a constructor of class `MR::MeshDiff`.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `to` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshDiff_Destroy()` to free it when you're done using it.
MRC_API MR_MeshDiff *MR_MeshDiff_Construct(const MR_Mesh *from, const MR_Mesh *to);

/// Destroys a heap-allocated instance of `MR_MeshDiff`. Does nothing if the pointer is null.
MRC_API void MR_MeshDiff_Destroy(const MR_MeshDiff *_this);

/// Destroys a heap-allocated array of `MR_MeshDiff`. Does nothing if the pointer is null.
MRC_API void MR_MeshDiff_DestroyArray(const MR_MeshDiff *_this);

/// Generated from a method of class `MR::MeshDiff` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshDiff *MR_MeshDiff_AssignFromAnother(MR_MeshDiff *_this, MR_PassBy _other_pass_by, MR_MeshDiff *_other);

/// given mesh-from on input converts it in mesh-to,
/// this object is updated to become the reverse difference from original mesh-to to original mesh-from
/// Generated from a method of class `MR::MeshDiff` named `applyAndSwap`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `m` can not be null. It is a single object.
MRC_API void MR_MeshDiff_applyAndSwap(MR_MeshDiff *_this, MR_Mesh *m);

/// returns true if this object does contain some difference in point coordinates or in topology;
/// if (from) mesh has just more points or more topology elements than (to) and the common elements are the same,
/// then the method will return false since nothing is stored here
/// Generated from a method of class `MR::MeshDiff` named `any`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_MeshDiff_any(const MR_MeshDiff *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::MeshDiff` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_MeshDiff_heapBytes(const MR_MeshDiff *_this);

#ifdef __cplusplus
} // extern "C"
#endif
