// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// this class just hides very complex type of typedef openvdb::FloatGrid
/// Generated from class `MR::OpenVdbFloatGrid`.
typedef struct MR_OpenVdbFloatGrid MR_OpenVdbFloatGrid;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OpenVdbFloatGrid_Destroy()` to free it when you're done using it.
MRC_API MR_OpenVdbFloatGrid *MR_OpenVdbFloatGrid_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_OpenVdbFloatGrid_DestroyArray()`.
/// Use `MR_OpenVdbFloatGrid_OffsetMutablePtr()` and `MR_OpenVdbFloatGrid_OffsetPtr()` to access the array elements.
MRC_API MR_OpenVdbFloatGrid *MR_OpenVdbFloatGrid_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_OpenVdbFloatGrid *MR_OpenVdbFloatGrid_OffsetPtr(const MR_OpenVdbFloatGrid *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_OpenVdbFloatGrid *MR_OpenVdbFloatGrid_OffsetMutablePtr(MR_OpenVdbFloatGrid *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::OpenVdbFloatGrid`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OpenVdbFloatGrid_Destroy()` to free it when you're done using it.
MRC_API MR_OpenVdbFloatGrid *MR_OpenVdbFloatGrid_ConstructFromAnother(MR_PassBy _other_pass_by, MR_OpenVdbFloatGrid *_other);

/// Destroys a heap-allocated instance of `MR_OpenVdbFloatGrid`. Does nothing if the pointer is null.
MRC_API void MR_OpenVdbFloatGrid_Destroy(const MR_OpenVdbFloatGrid *_this);

/// Destroys a heap-allocated array of `MR_OpenVdbFloatGrid`. Does nothing if the pointer is null.
MRC_API void MR_OpenVdbFloatGrid_DestroyArray(const MR_OpenVdbFloatGrid *_this);

/// Generated from a method of class `MR::OpenVdbFloatGrid` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_OpenVdbFloatGrid_heapBytes(const MR_OpenVdbFloatGrid *_this);

#ifdef __cplusplus
} // extern "C"
#endif
