// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.


/// this object stores a difference between two vectors with 3D coordinates
/// \details if the vectors are similar then this object is small, if the vectors are very distinct then this object will be even larger than one vector itself
/// Generated from class `MR::VertCoordsDiff`.
typedef struct MR_VertCoordsDiff MR_VertCoordsDiff;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertCoordsDiff_Destroy()` to free it when you're done using it.
MRC_API MR_VertCoordsDiff *MR_VertCoordsDiff_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VertCoordsDiff_DestroyArray()`.
/// Use `MR_VertCoordsDiff_OffsetMutablePtr()` and `MR_VertCoordsDiff_OffsetPtr()` to access the array elements.
MRC_API MR_VertCoordsDiff *MR_VertCoordsDiff_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VertCoordsDiff *MR_VertCoordsDiff_OffsetPtr(const MR_VertCoordsDiff *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VertCoordsDiff *MR_VertCoordsDiff_OffsetMutablePtr(MR_VertCoordsDiff *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VertCoordsDiff`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertCoordsDiff_Destroy()` to free it when you're done using it.
MRC_API MR_VertCoordsDiff *MR_VertCoordsDiff_ConstructFromAnother(MR_PassBy _other_pass_by, MR_VertCoordsDiff *_other);

/// computes the difference, that can be applied to vector-from in order to get vector-to
/// Generated from a constructor of class `MR::VertCoordsDiff`.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `to` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertCoordsDiff_Destroy()` to free it when you're done using it.
MRC_API MR_VertCoordsDiff *MR_VertCoordsDiff_Construct(const MR_VertCoords *from, const MR_VertCoords *to);

/// Destroys a heap-allocated instance of `MR_VertCoordsDiff`. Does nothing if the pointer is null.
MRC_API void MR_VertCoordsDiff_Destroy(const MR_VertCoordsDiff *_this);

/// Destroys a heap-allocated array of `MR_VertCoordsDiff`. Does nothing if the pointer is null.
MRC_API void MR_VertCoordsDiff_DestroyArray(const MR_VertCoordsDiff *_this);

/// Generated from a method of class `MR::VertCoordsDiff` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertCoordsDiff *MR_VertCoordsDiff_AssignFromAnother(MR_VertCoordsDiff *_this, MR_PassBy _other_pass_by, MR_VertCoordsDiff *_other);

/// given vector-from on input converts it in vector-to,
/// this object is updated to become the reverse difference from original vector-to to original vector-from
/// Generated from a method of class `MR::VertCoordsDiff` named `applyAndSwap`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `m` can not be null. It is a single object.
MRC_API void MR_VertCoordsDiff_applyAndSwap(MR_VertCoordsDiff *_this, MR_VertCoords *m);

/// returns true if this object does contain some difference in point coordinates;
/// if (from) vector has just more points and the common elements are the same,
/// then the method will return false since nothing is stored here
/// Generated from a method of class `MR::VertCoordsDiff` named `any`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_VertCoordsDiff_any(const MR_VertCoordsDiff *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::VertCoordsDiff` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_VertCoordsDiff_heapBytes(const MR_VertCoordsDiff *_this);

#ifdef __cplusplus
} // extern "C"
#endif
