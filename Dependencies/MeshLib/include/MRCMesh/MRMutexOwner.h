// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// This class exists to provide copy and move constructors and assignment operations for std::mutex
/// which actually does nothing
/// Generated from class `MR::MutexOwner`.
typedef struct MR_MutexOwner MR_MutexOwner;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MutexOwner_Destroy()` to free it when you're done using it.
MRC_API MR_MutexOwner *MR_MutexOwner_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MutexOwner_DestroyArray()`.
/// Use `MR_MutexOwner_OffsetMutablePtr()` and `MR_MutexOwner_OffsetPtr()` to access the array elements.
MRC_API MR_MutexOwner *MR_MutexOwner_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MutexOwner *MR_MutexOwner_OffsetPtr(const MR_MutexOwner *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MutexOwner *MR_MutexOwner_OffsetMutablePtr(MR_MutexOwner *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MutexOwner`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MutexOwner_Destroy()` to free it when you're done using it.
MRC_API MR_MutexOwner *MR_MutexOwner_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MutexOwner *_other);

/// Destroys a heap-allocated instance of `MR_MutexOwner`. Does nothing if the pointer is null.
MRC_API void MR_MutexOwner_Destroy(const MR_MutexOwner *_this);

/// Destroys a heap-allocated array of `MR_MutexOwner`. Does nothing if the pointer is null.
MRC_API void MR_MutexOwner_DestroyArray(const MR_MutexOwner *_this);

/// Generated from a method of class `MR::MutexOwner` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MutexOwner *MR_MutexOwner_AssignFromAnother(MR_MutexOwner *_this, MR_PassBy _other_pass_by, MR_MutexOwner *_other);

#ifdef __cplusplus
} // extern "C"
#endif
