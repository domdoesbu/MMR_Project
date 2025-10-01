// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from class `MR::Parallel::CallSimply`.
typedef struct MR_Parallel_CallSimply MR_Parallel_CallSimply;

/// Generated from class `MR::Parallel::CallSimplyMaker`.
typedef struct MR_Parallel_CallSimplyMaker MR_Parallel_CallSimplyMaker;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Parallel_CallSimply_Destroy()` to free it when you're done using it.
MRC_API MR_Parallel_CallSimply *MR_Parallel_CallSimply_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Parallel_CallSimply_DestroyArray()`.
/// Use `MR_Parallel_CallSimply_OffsetMutablePtr()` and `MR_Parallel_CallSimply_OffsetPtr()` to access the array elements.
MRC_API MR_Parallel_CallSimply *MR_Parallel_CallSimply_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Parallel_CallSimply *MR_Parallel_CallSimply_OffsetPtr(const MR_Parallel_CallSimply *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Parallel_CallSimply *MR_Parallel_CallSimply_OffsetMutablePtr(MR_Parallel_CallSimply *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Parallel::CallSimply`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Parallel_CallSimply_Destroy()` to free it when you're done using it.
MRC_API MR_Parallel_CallSimply *MR_Parallel_CallSimply_ConstructFromAnother(const MR_Parallel_CallSimply *_other);

/// Destroys a heap-allocated instance of `MR_Parallel_CallSimply`. Does nothing if the pointer is null.
MRC_API void MR_Parallel_CallSimply_Destroy(const MR_Parallel_CallSimply *_this);

/// Destroys a heap-allocated array of `MR_Parallel_CallSimply`. Does nothing if the pointer is null.
MRC_API void MR_Parallel_CallSimply_DestroyArray(const MR_Parallel_CallSimply *_this);

/// Generated from a method of class `MR::Parallel::CallSimply` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Parallel_CallSimply *MR_Parallel_CallSimply_AssignFromAnother(MR_Parallel_CallSimply *_this, const MR_Parallel_CallSimply *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Parallel_CallSimplyMaker_Destroy()` to free it when you're done using it.
MRC_API MR_Parallel_CallSimplyMaker *MR_Parallel_CallSimplyMaker_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Parallel_CallSimplyMaker_DestroyArray()`.
/// Use `MR_Parallel_CallSimplyMaker_OffsetMutablePtr()` and `MR_Parallel_CallSimplyMaker_OffsetPtr()` to access the array elements.
MRC_API MR_Parallel_CallSimplyMaker *MR_Parallel_CallSimplyMaker_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Parallel_CallSimplyMaker *MR_Parallel_CallSimplyMaker_OffsetPtr(const MR_Parallel_CallSimplyMaker *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Parallel_CallSimplyMaker *MR_Parallel_CallSimplyMaker_OffsetMutablePtr(MR_Parallel_CallSimplyMaker *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Parallel::CallSimplyMaker`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Parallel_CallSimplyMaker_Destroy()` to free it when you're done using it.
MRC_API MR_Parallel_CallSimplyMaker *MR_Parallel_CallSimplyMaker_ConstructFromAnother(const MR_Parallel_CallSimplyMaker *_other);

/// Destroys a heap-allocated instance of `MR_Parallel_CallSimplyMaker`. Does nothing if the pointer is null.
MRC_API void MR_Parallel_CallSimplyMaker_Destroy(const MR_Parallel_CallSimplyMaker *_this);

/// Destroys a heap-allocated array of `MR_Parallel_CallSimplyMaker`. Does nothing if the pointer is null.
MRC_API void MR_Parallel_CallSimplyMaker_DestroyArray(const MR_Parallel_CallSimplyMaker *_this);

/// Generated from a method of class `MR::Parallel::CallSimplyMaker` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Parallel_CallSimplyMaker *MR_Parallel_CallSimplyMaker_AssignFromAnother(MR_Parallel_CallSimplyMaker *_this, const MR_Parallel_CallSimplyMaker *_other);

/// Generated from a method of class `MR::Parallel::CallSimplyMaker` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Parallel_CallSimply_Destroy()` to free it when you're done using it.
MRC_API MR_Parallel_CallSimply *MR_Parallel_CallSimplyMaker_call(const MR_Parallel_CallSimplyMaker *_this);

#ifdef __cplusplus
} // extern "C"
#endif
