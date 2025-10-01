// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.


/// this object stores a difference between two topologies: both in coordinates and in topology
/// \details if the topologies are similar then this object is small, if the topologies are very distinct then this object will be even larger than one topology itself
/// Generated from class `MR::MeshTopologyDiff`.
typedef struct MR_MeshTopologyDiff MR_MeshTopologyDiff;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTopologyDiff_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTopologyDiff *MR_MeshTopologyDiff_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshTopologyDiff_DestroyArray()`.
/// Use `MR_MeshTopologyDiff_OffsetMutablePtr()` and `MR_MeshTopologyDiff_OffsetPtr()` to access the array elements.
MRC_API MR_MeshTopologyDiff *MR_MeshTopologyDiff_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshTopologyDiff *MR_MeshTopologyDiff_OffsetPtr(const MR_MeshTopologyDiff *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshTopologyDiff *MR_MeshTopologyDiff_OffsetMutablePtr(MR_MeshTopologyDiff *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshTopologyDiff`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTopologyDiff_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTopologyDiff *MR_MeshTopologyDiff_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MeshTopologyDiff *_other);

/// computes the difference, that can be applied to topology-from in order to get topology-to
/// Generated from a constructor of class `MR::MeshTopologyDiff`.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `to` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTopologyDiff_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTopologyDiff *MR_MeshTopologyDiff_Construct(const MR_MeshTopology *from, const MR_MeshTopology *to);

/// Destroys a heap-allocated instance of `MR_MeshTopologyDiff`. Does nothing if the pointer is null.
MRC_API void MR_MeshTopologyDiff_Destroy(const MR_MeshTopologyDiff *_this);

/// Destroys a heap-allocated array of `MR_MeshTopologyDiff`. Does nothing if the pointer is null.
MRC_API void MR_MeshTopologyDiff_DestroyArray(const MR_MeshTopologyDiff *_this);

/// Generated from a method of class `MR::MeshTopologyDiff` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshTopologyDiff *MR_MeshTopologyDiff_AssignFromAnother(MR_MeshTopologyDiff *_this, MR_PassBy _other_pass_by, MR_MeshTopologyDiff *_other);

/// given topology-from on input converts it in topology-to,
/// this object is updated to become the reverse difference from original topology-to to original topology-from
/// Generated from a method of class `MR::MeshTopologyDiff` named `applyAndSwap`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `t` can not be null. It is a single object.
MRC_API void MR_MeshTopologyDiff_applyAndSwap(MR_MeshTopologyDiff *_this, MR_MeshTopology *t);

/// returns true if this object does contain some difference in topology;
/// if (from) has more topology elements than (to) and the common elements are the same,
/// then the method will return false since nothing is stored here
/// Generated from a method of class `MR::MeshTopologyDiff` named `any`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_MeshTopologyDiff_any(const MR_MeshTopologyDiff *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::MeshTopologyDiff` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_MeshTopologyDiff_heapBytes(const MR_MeshTopologyDiff *_this);

#ifdef __cplusplus
} // extern "C"
#endif
