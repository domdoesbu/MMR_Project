// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRSurfacePath.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_vector_MR_EdgePoint MR_std_vector_MR_EdgePoint; // Defined in `#include <MRCMisc/std_vector_MR_EdgePoint.h>`.


/// Stores either a `std::vector<MR::EdgePoint>` that represents success or a `MR::PathError` that represents an error.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_expected_std_vector_MR_EdgePoint_MR_PathError MR_expected_std_vector_MR_EdgePoint_MR_PathError;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_MR_EdgePoint_MR_PathError_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_MR_EdgePoint_MR_PathError *MR_expected_std_vector_MR_EdgePoint_MR_PathError_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_expected_std_vector_MR_EdgePoint_MR_PathError_DestroyArray()`.
/// Use `MR_expected_std_vector_MR_EdgePoint_MR_PathError_OffsetMutablePtr()` and `MR_expected_std_vector_MR_EdgePoint_MR_PathError_OffsetPtr()` to access the array elements.
MRC_API MR_expected_std_vector_MR_EdgePoint_MR_PathError *MR_expected_std_vector_MR_EdgePoint_MR_PathError_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_MR_EdgePoint_MR_PathError_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_MR_EdgePoint_MR_PathError *MR_expected_std_vector_MR_EdgePoint_MR_PathError_ConstructFromAnother(MR_PassBy other_pass_by, MR_expected_std_vector_MR_EdgePoint_MR_PathError *other);

/// Constructs a new instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_MR_EdgePoint_MR_PathError_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_MR_EdgePoint_MR_PathError *MR_expected_std_vector_MR_EdgePoint_MR_PathError_ConstructFrom(MR_PassBy other_pass_by, MR_expected_std_vector_MR_EdgePoint_MR_PathError *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_expected_std_vector_MR_EdgePoint_MR_PathError_AssignFromAnother(MR_expected_std_vector_MR_EdgePoint_MR_PathError *_this, MR_PassBy other_pass_by, MR_expected_std_vector_MR_EdgePoint_MR_PathError *other);

/// Assigns the contents.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_expected_std_vector_MR_EdgePoint_MR_PathError_AssignFrom(MR_expected_std_vector_MR_EdgePoint_MR_PathError *_this, MR_PassBy other_pass_by, MR_expected_std_vector_MR_EdgePoint_MR_PathError *other);

/// Destroys a heap-allocated instance of `MR_expected_std_vector_MR_EdgePoint_MR_PathError`. Does nothing if the pointer is null.
MRC_API void MR_expected_std_vector_MR_EdgePoint_MR_PathError_Destroy(const MR_expected_std_vector_MR_EdgePoint_MR_PathError *_this);

/// Destroys a heap-allocated array of `MR_expected_std_vector_MR_EdgePoint_MR_PathError`. Does nothing if the pointer is null.
MRC_API void MR_expected_std_vector_MR_EdgePoint_MR_PathError_DestroyArray(const MR_expected_std_vector_MR_EdgePoint_MR_PathError *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_expected_std_vector_MR_EdgePoint_MR_PathError *MR_expected_std_vector_MR_EdgePoint_MR_PathError_OffsetPtr(const MR_expected_std_vector_MR_EdgePoint_MR_PathError *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_expected_std_vector_MR_EdgePoint_MR_PathError *MR_expected_std_vector_MR_EdgePoint_MR_PathError_OffsetMutablePtr(MR_expected_std_vector_MR_EdgePoint_MR_PathError *ptr, ptrdiff_t i);

/// If this instance represents success, returns the stored `std::vector<MR::EdgePoint>`. Otherwise null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_std_vector_MR_EdgePoint *MR_expected_std_vector_MR_EdgePoint_MR_PathError_GetValue(const MR_expected_std_vector_MR_EdgePoint_MR_PathError *_this);

/// If this instance represents an error, returns the stored `MR::PathError`. Otherwise null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_PathError *MR_expected_std_vector_MR_EdgePoint_MR_PathError_GetError(const MR_expected_std_vector_MR_EdgePoint_MR_PathError *_this);

/// If this instance represents success, returns the stored `std::vector<MR::EdgePoint>`. Otherwise null. This version returns a mutable pointer.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_std_vector_MR_EdgePoint *MR_expected_std_vector_MR_EdgePoint_MR_PathError_GetMutableValue(MR_expected_std_vector_MR_EdgePoint_MR_PathError *_this);

/// If this instance represents an error, returns the stored `MR::PathError`. Otherwise null. This version returns a mutable pointer.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_PathError *MR_expected_std_vector_MR_EdgePoint_MR_PathError_GetMutableError(MR_expected_std_vector_MR_EdgePoint_MR_PathError *_this);

#ifdef __cplusplus
} // extern "C"
#endif
