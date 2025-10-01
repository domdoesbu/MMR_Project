// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from class `MR::NoInit`.
typedef struct MR_NoInit MR_NoInit;

typedef char MR_FilterType;
enum // MR_FilterType
{
    MR_FilterType_Linear = 0,
    MR_FilterType_Discrete = 1,
};

typedef char MR_WrapType;
enum // MR_WrapType
{
    MR_WrapType_Repeat = 0,
    MR_WrapType_Mirror = 1,
    MR_WrapType_Clamp = 2,
};

/// determines how points to be ordered
typedef char MR_Reorder;
enum // MR_Reorder
{
    ///< the order is not changed
    MR_Reorder_None = 0,
    ///< the order is determined by lexicographical sorting by coordinates (optimal for uniform sampling)
    MR_Reorder_Lexicographically = 1,
    ///< the order is determined so to put close in space points in close indices (optimal for compression)
    MR_Reorder_AABBTree = 2,
};

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoInit_Destroy()` to free it when you're done using it.
MRC_API MR_NoInit *MR_NoInit_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoInit_DestroyArray()`.
/// Use `MR_NoInit_OffsetMutablePtr()` and `MR_NoInit_OffsetPtr()` to access the array elements.
MRC_API MR_NoInit *MR_NoInit_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoInit *MR_NoInit_OffsetPtr(const MR_NoInit *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoInit *MR_NoInit_OffsetMutablePtr(MR_NoInit *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::NoInit`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoInit_Destroy()` to free it when you're done using it.
MRC_API MR_NoInit *MR_NoInit_ConstructFromAnother(const MR_NoInit *_other);

/// Destroys a heap-allocated instance of `MR_NoInit`. Does nothing if the pointer is null.
MRC_API void MR_NoInit_Destroy(const MR_NoInit *_this);

/// Destroys a heap-allocated array of `MR_NoInit`. Does nothing if the pointer is null.
MRC_API void MR_NoInit_DestroyArray(const MR_NoInit *_this);

/// Generated from a method of class `MR::NoInit` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoInit *MR_NoInit_AssignFromAnother(MR_NoInit *_this, const MR_NoInit *_other);

#ifdef __cplusplus
} // extern "C"
#endif
