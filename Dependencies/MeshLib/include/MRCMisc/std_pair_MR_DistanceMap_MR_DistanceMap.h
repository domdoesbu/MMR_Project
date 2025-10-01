// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_DistanceMap MR_DistanceMap; // Defined in `#include <MRCMesh/MRDistanceMap.h>`.


/// Stores two objects: `MR::DistanceMap` and `MR::DistanceMap`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_pair_MR_DistanceMap_MR_DistanceMap MR_std_pair_MR_DistanceMap_MR_DistanceMap;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_MR_DistanceMap_MR_DistanceMap_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_MR_DistanceMap_MR_DistanceMap *MR_std_pair_MR_DistanceMap_MR_DistanceMap_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_pair_MR_DistanceMap_MR_DistanceMap_DestroyArray()`.
/// Use `MR_std_pair_MR_DistanceMap_MR_DistanceMap_OffsetMutablePtr()` and `MR_std_pair_MR_DistanceMap_MR_DistanceMap_OffsetPtr()` to access the array elements.
MRC_API MR_std_pair_MR_DistanceMap_MR_DistanceMap *MR_std_pair_MR_DistanceMap_MR_DistanceMap_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_MR_DistanceMap_MR_DistanceMap_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_MR_DistanceMap_MR_DistanceMap *MR_std_pair_MR_DistanceMap_MR_DistanceMap_ConstructFromAnother(MR_PassBy other_pass_by, MR_std_pair_MR_DistanceMap_MR_DistanceMap *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_pair_MR_DistanceMap_MR_DistanceMap_AssignFromAnother(MR_std_pair_MR_DistanceMap_MR_DistanceMap *_this, MR_PassBy other_pass_by, MR_std_pair_MR_DistanceMap_MR_DistanceMap *other);

/// Destroys a heap-allocated instance of `MR_std_pair_MR_DistanceMap_MR_DistanceMap`. Does nothing if the pointer is null.
MRC_API void MR_std_pair_MR_DistanceMap_MR_DistanceMap_Destroy(const MR_std_pair_MR_DistanceMap_MR_DistanceMap *_this);

/// Destroys a heap-allocated array of `MR_std_pair_MR_DistanceMap_MR_DistanceMap`. Does nothing if the pointer is null.
MRC_API void MR_std_pair_MR_DistanceMap_MR_DistanceMap_DestroyArray(const MR_std_pair_MR_DistanceMap_MR_DistanceMap *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_pair_MR_DistanceMap_MR_DistanceMap *MR_std_pair_MR_DistanceMap_MR_DistanceMap_OffsetPtr(const MR_std_pair_MR_DistanceMap_MR_DistanceMap *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_pair_MR_DistanceMap_MR_DistanceMap *MR_std_pair_MR_DistanceMap_MR_DistanceMap_OffsetMutablePtr(MR_std_pair_MR_DistanceMap_MR_DistanceMap *ptr, ptrdiff_t i);

/// Constructs the pair elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_MR_DistanceMap_MR_DistanceMap_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_MR_DistanceMap_MR_DistanceMap *MR_std_pair_MR_DistanceMap_MR_DistanceMap_Construct(MR_PassBy first_pass_by, MR_DistanceMap *first, MR_PassBy second_pass_by, MR_DistanceMap *second);

/// The first of the two elements, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_DistanceMap *MR_std_pair_MR_DistanceMap_MR_DistanceMap_First(const MR_std_pair_MR_DistanceMap_MR_DistanceMap *_this);

/// The first of the two elements, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DistanceMap *MR_std_pair_MR_DistanceMap_MR_DistanceMap_MutableFirst(MR_std_pair_MR_DistanceMap_MR_DistanceMap *_this);

/// The second of the two elements, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_DistanceMap *MR_std_pair_MR_DistanceMap_MR_DistanceMap_Second(const MR_std_pair_MR_DistanceMap_MR_DistanceMap *_this);

/// The second of the two elements, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DistanceMap *MR_std_pair_MR_DistanceMap_MR_DistanceMap_MutableSecond(MR_std_pair_MR_DistanceMap_MR_DistanceMap *_this);

#ifdef __cplusplus
} // extern "C"
#endif
