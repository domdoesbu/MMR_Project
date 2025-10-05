// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Stores two objects: `float` and `float`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_pair_float_MR_VertId MR_std_pair_float_MR_VertId;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_float_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_float_MR_VertId *MR_std_pair_float_MR_VertId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_pair_float_MR_VertId_DestroyArray()`.
/// Use `MR_std_pair_float_MR_VertId_OffsetMutablePtr()` and `MR_std_pair_float_MR_VertId_OffsetPtr()` to access the array elements.
MRC_API MR_std_pair_float_MR_VertId *MR_std_pair_float_MR_VertId_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_float_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_float_MR_VertId *MR_std_pair_float_MR_VertId_ConstructFromAnother(const MR_std_pair_float_MR_VertId *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API void MR_std_pair_float_MR_VertId_AssignFromAnother(MR_std_pair_float_MR_VertId *_this, const MR_std_pair_float_MR_VertId *other);

/// Destroys a heap-allocated instance of `MR_std_pair_float_MR_VertId`. Does nothing if the pointer is null.
MRC_API void MR_std_pair_float_MR_VertId_Destroy(const MR_std_pair_float_MR_VertId *_this);

/// Destroys a heap-allocated array of `MR_std_pair_float_MR_VertId`. Does nothing if the pointer is null.
MRC_API void MR_std_pair_float_MR_VertId_DestroyArray(const MR_std_pair_float_MR_VertId *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_pair_float_MR_VertId *MR_std_pair_float_MR_VertId_OffsetPtr(const MR_std_pair_float_MR_VertId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_pair_float_MR_VertId *MR_std_pair_float_MR_VertId_OffsetMutablePtr(MR_std_pair_float_MR_VertId *ptr, ptrdiff_t i);

/// Constructs the pair elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_float_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_float_MR_VertId *MR_std_pair_float_MR_VertId_Construct(float first, MR_VertId second);

/// The first of the two elements, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_std_pair_float_MR_VertId_First(const MR_std_pair_float_MR_VertId *_this);

/// The first of the two elements, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_std_pair_float_MR_VertId_MutableFirst(MR_std_pair_float_MR_VertId *_this);

/// The second of the two elements, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_std_pair_float_MR_VertId_Second(const MR_std_pair_float_MR_VertId *_this);

/// The second of the two elements, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_std_pair_float_MR_VertId_MutableSecond(MR_std_pair_float_MR_VertId *_this);

#ifdef __cplusplus
} // extern "C"
#endif
