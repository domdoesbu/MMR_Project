// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Face2RegionMap MR_Face2RegionMap; // Defined in `#include <MRCMesh/MRVector.h>`.


/// Stores two objects: `MR::Face2RegionMap` and `MR::Face2RegionMap`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_pair_MR_Face2RegionMap_int32_t MR_std_pair_MR_Face2RegionMap_int32_t;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_MR_Face2RegionMap_int32_t_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_MR_Face2RegionMap_int32_t *MR_std_pair_MR_Face2RegionMap_int32_t_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_pair_MR_Face2RegionMap_int32_t_DestroyArray()`.
/// Use `MR_std_pair_MR_Face2RegionMap_int32_t_OffsetMutablePtr()` and `MR_std_pair_MR_Face2RegionMap_int32_t_OffsetPtr()` to access the array elements.
MRC_API MR_std_pair_MR_Face2RegionMap_int32_t *MR_std_pair_MR_Face2RegionMap_int32_t_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_MR_Face2RegionMap_int32_t_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_MR_Face2RegionMap_int32_t *MR_std_pair_MR_Face2RegionMap_int32_t_ConstructFromAnother(MR_PassBy other_pass_by, MR_std_pair_MR_Face2RegionMap_int32_t *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_pair_MR_Face2RegionMap_int32_t_AssignFromAnother(MR_std_pair_MR_Face2RegionMap_int32_t *_this, MR_PassBy other_pass_by, MR_std_pair_MR_Face2RegionMap_int32_t *other);

/// Destroys a heap-allocated instance of `MR_std_pair_MR_Face2RegionMap_int32_t`. Does nothing if the pointer is null.
MRC_API void MR_std_pair_MR_Face2RegionMap_int32_t_Destroy(const MR_std_pair_MR_Face2RegionMap_int32_t *_this);

/// Destroys a heap-allocated array of `MR_std_pair_MR_Face2RegionMap_int32_t`. Does nothing if the pointer is null.
MRC_API void MR_std_pair_MR_Face2RegionMap_int32_t_DestroyArray(const MR_std_pair_MR_Face2RegionMap_int32_t *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_pair_MR_Face2RegionMap_int32_t *MR_std_pair_MR_Face2RegionMap_int32_t_OffsetPtr(const MR_std_pair_MR_Face2RegionMap_int32_t *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_pair_MR_Face2RegionMap_int32_t *MR_std_pair_MR_Face2RegionMap_int32_t_OffsetMutablePtr(MR_std_pair_MR_Face2RegionMap_int32_t *ptr, ptrdiff_t i);

/// Constructs the pair elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_MR_Face2RegionMap_int32_t_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_MR_Face2RegionMap_int32_t *MR_std_pair_MR_Face2RegionMap_int32_t_Construct(MR_PassBy first_pass_by, MR_Face2RegionMap *first, int32_t second);

/// The first of the two elements, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Face2RegionMap *MR_std_pair_MR_Face2RegionMap_int32_t_First(const MR_std_pair_MR_Face2RegionMap_int32_t *_this);

/// The first of the two elements, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Face2RegionMap *MR_std_pair_MR_Face2RegionMap_int32_t_MutableFirst(MR_std_pair_MR_Face2RegionMap_int32_t *_this);

/// The second of the two elements, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_std_pair_MR_Face2RegionMap_int32_t_Second(const MR_std_pair_MR_Face2RegionMap_int32_t *_this);

/// The second of the two elements, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_std_pair_MR_Face2RegionMap_int32_t_MutableSecond(MR_std_pair_MR_Face2RegionMap_int32_t *_this);

#ifdef __cplusplus
} // extern "C"
#endif
