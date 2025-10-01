// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// class for dispatching object tag addition/removal events
/// Generated from class `MR::ObjectTagEventDispatcher`.
typedef struct MR_ObjectTagEventDispatcher MR_ObjectTagEventDispatcher;

/// Generated from a constructor of class `MR::ObjectTagEventDispatcher`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectTagEventDispatcher_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectTagEventDispatcher *MR_ObjectTagEventDispatcher_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ObjectTagEventDispatcher *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ObjectTagEventDispatcher *MR_ObjectTagEventDispatcher_OffsetPtr(const MR_ObjectTagEventDispatcher *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ObjectTagEventDispatcher *MR_ObjectTagEventDispatcher_OffsetMutablePtr(MR_ObjectTagEventDispatcher *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_ObjectTagEventDispatcher`. Does nothing if the pointer is null.
MRC_API void MR_ObjectTagEventDispatcher_Destroy(const MR_ObjectTagEventDispatcher *_this);

/// Destroys a heap-allocated array of `MR_ObjectTagEventDispatcher`. Does nothing if the pointer is null.
MRC_API void MR_ObjectTagEventDispatcher_DestroyArray(const MR_ObjectTagEventDispatcher *_this);

/// Generated from a method of class `MR::ObjectTagEventDispatcher` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectTagEventDispatcher *MR_ObjectTagEventDispatcher_AssignFromAnother(MR_ObjectTagEventDispatcher *_this, MR_PassBy _other_pass_by, MR_ObjectTagEventDispatcher *_other);

/// returns singleton instance
/// Generated from a method of class `MR::ObjectTagEventDispatcher` named `instance`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectTagEventDispatcher *MR_ObjectTagEventDispatcher_instance(void);

#ifdef __cplusplus
} // extern "C"
#endif
