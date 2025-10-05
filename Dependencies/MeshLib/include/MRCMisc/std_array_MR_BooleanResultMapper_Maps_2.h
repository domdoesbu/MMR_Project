// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_BooleanResultMapper_Maps MR_BooleanResultMapper_Maps; // Defined in `#include <MRCMesh/MRBooleanOperation.h>`.


/// A fixed-size array of `MR::BooleanResultMapper::Maps` of size 2.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_array_MR_BooleanResultMapper_Maps_2 MR_std_array_MR_BooleanResultMapper_Maps_2;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_array_MR_BooleanResultMapper_Maps_2_Destroy()` to free it when you're done using it.
MRC_API MR_std_array_MR_BooleanResultMapper_Maps_2 *MR_std_array_MR_BooleanResultMapper_Maps_2_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_array_MR_BooleanResultMapper_Maps_2_DestroyArray()`.
/// Use `MR_std_array_MR_BooleanResultMapper_Maps_2_OffsetMutablePtr()` and `MR_std_array_MR_BooleanResultMapper_Maps_2_OffsetPtr()` to access the array elements.
MRC_API MR_std_array_MR_BooleanResultMapper_Maps_2 *MR_std_array_MR_BooleanResultMapper_Maps_2_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_array_MR_BooleanResultMapper_Maps_2_Destroy()` to free it when you're done using it.
MRC_API MR_std_array_MR_BooleanResultMapper_Maps_2 *MR_std_array_MR_BooleanResultMapper_Maps_2_ConstructFromAnother(MR_PassBy other_pass_by, MR_std_array_MR_BooleanResultMapper_Maps_2 *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_array_MR_BooleanResultMapper_Maps_2_AssignFromAnother(MR_std_array_MR_BooleanResultMapper_Maps_2 *_this, MR_PassBy other_pass_by, MR_std_array_MR_BooleanResultMapper_Maps_2 *other);

/// Destroys a heap-allocated instance of `MR_std_array_MR_BooleanResultMapper_Maps_2`. Does nothing if the pointer is null.
MRC_API void MR_std_array_MR_BooleanResultMapper_Maps_2_Destroy(const MR_std_array_MR_BooleanResultMapper_Maps_2 *_this);

/// Destroys a heap-allocated array of `MR_std_array_MR_BooleanResultMapper_Maps_2`. Does nothing if the pointer is null.
MRC_API void MR_std_array_MR_BooleanResultMapper_Maps_2_DestroyArray(const MR_std_array_MR_BooleanResultMapper_Maps_2 *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_array_MR_BooleanResultMapper_Maps_2 *MR_std_array_MR_BooleanResultMapper_Maps_2_OffsetPtr(const MR_std_array_MR_BooleanResultMapper_Maps_2 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_array_MR_BooleanResultMapper_Maps_2 *MR_std_array_MR_BooleanResultMapper_Maps_2_OffsetMutablePtr(MR_std_array_MR_BooleanResultMapper_Maps_2 *ptr, ptrdiff_t i);

/// The element at a specific index, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_BooleanResultMapper_Maps *MR_std_array_MR_BooleanResultMapper_Maps_2_At(const MR_std_array_MR_BooleanResultMapper_Maps_2 *_this, size_t i);

/// The element at a specific index, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BooleanResultMapper_Maps *MR_std_array_MR_BooleanResultMapper_Maps_2_MutableAt(MR_std_array_MR_BooleanResultMapper_Maps_2 *_this, size_t i);

/// Returns a pointer to the continuous storage that holds all elements, read-only.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_BooleanResultMapper_Maps *MR_std_array_MR_BooleanResultMapper_Maps_2_Data(const MR_std_array_MR_BooleanResultMapper_Maps_2 *_this);

/// Returns a pointer to the continuous storage that holds all elements, mutable.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_BooleanResultMapper_Maps *MR_std_array_MR_BooleanResultMapper_Maps_2_MutableData(MR_std_array_MR_BooleanResultMapper_Maps_2 *_this);

#ifdef __cplusplus
} // extern "C"
#endif
