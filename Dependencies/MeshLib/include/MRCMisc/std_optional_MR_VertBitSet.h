// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.


/// Stores either a single `MR::VertBitSet` or nothing.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_optional_MR_VertBitSet MR_std_optional_MR_VertBitSet;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_VertBitSet *MR_std_optional_MR_VertBitSet_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_optional_MR_VertBitSet_DestroyArray()`.
/// Use `MR_std_optional_MR_VertBitSet_OffsetMutablePtr()` and `MR_std_optional_MR_VertBitSet_OffsetPtr()` to access the array elements.
MRC_API MR_std_optional_MR_VertBitSet *MR_std_optional_MR_VertBitSet_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_VertBitSet *MR_std_optional_MR_VertBitSet_ConstructFromAnother(MR_PassBy other_pass_by, MR_std_optional_MR_VertBitSet *other);

/// Constructs a new instance.
/// Parameter `other` is optional. To keep it empty, pass `MR_PassBy_NoObject` and a null pointer.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_VertBitSet *MR_std_optional_MR_VertBitSet_ConstructFrom(MR_PassBy other_pass_by, MR_VertBitSet *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_optional_MR_VertBitSet_AssignFromAnother(MR_std_optional_MR_VertBitSet *_this, MR_PassBy other_pass_by, MR_std_optional_MR_VertBitSet *other);

/// Assigns the contents.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` is optional. To keep it empty, pass `MR_PassBy_NoObject` and a null pointer.
MRC_API void MR_std_optional_MR_VertBitSet_AssignFrom(MR_std_optional_MR_VertBitSet *_this, MR_PassBy other_pass_by, MR_VertBitSet *other);

/// Destroys a heap-allocated instance of `MR_std_optional_MR_VertBitSet`. Does nothing if the pointer is null.
MRC_API void MR_std_optional_MR_VertBitSet_Destroy(const MR_std_optional_MR_VertBitSet *_this);

/// Destroys a heap-allocated array of `MR_std_optional_MR_VertBitSet`. Does nothing if the pointer is null.
MRC_API void MR_std_optional_MR_VertBitSet_DestroyArray(const MR_std_optional_MR_VertBitSet *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_optional_MR_VertBitSet *MR_std_optional_MR_VertBitSet_OffsetPtr(const MR_std_optional_MR_VertBitSet *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_optional_MR_VertBitSet *MR_std_optional_MR_VertBitSet_OffsetMutablePtr(MR_std_optional_MR_VertBitSet *ptr, ptrdiff_t i);

/// The stored element or null if none, read-only.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_VertBitSet *MR_std_optional_MR_VertBitSet_Value(const MR_std_optional_MR_VertBitSet *_this);

/// The stored element or null if none, mutable.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertBitSet *MR_std_optional_MR_VertBitSet_MutableValue(MR_std_optional_MR_VertBitSet *_this);

#ifdef __cplusplus
} // extern "C"
#endif
