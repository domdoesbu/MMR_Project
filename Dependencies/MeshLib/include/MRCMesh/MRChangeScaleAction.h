// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRHistoryAction.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_HistoryAction MR_HistoryAction; // Defined in `#include <MRCMesh/MRHistoryAction.h>`.
typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// History action for scale object change
/// Generated from class `MR::ChangeScaleAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeScaleAction MR_ChangeScaleAction;

/// Generated from a constructor of class `MR::ChangeScaleAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeScaleAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeScaleAction *MR_ChangeScaleAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeScaleAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeScaleAction *MR_ChangeScaleAction_OffsetPtr(const MR_ChangeScaleAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeScaleAction *MR_ChangeScaleAction_OffsetMutablePtr(MR_ChangeScaleAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeScaleAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeScaleAction_UpcastTo_MR_HistoryAction(const MR_ChangeScaleAction *object);

/// Upcasts an instance of `MR::ChangeScaleAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeScaleAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeScaleAction *object);

/// Constructor that performs object scaling, and remembers inverted scale value for undoing
/// Generated from a constructor of class `MR::ChangeScaleAction`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeScaleAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeScaleAction *MR_ChangeScaleAction_Construct(const MR_std_string *name, const MR_std_shared_ptr_MR_Object *obj, float scale);

/// Destroys a heap-allocated instance of `MR_ChangeScaleAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeScaleAction_Destroy(const MR_ChangeScaleAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeScaleAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeScaleAction_DestroyArray(const MR_ChangeScaleAction *_this);

/// Generated from a method of class `MR::ChangeScaleAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeScaleAction *MR_ChangeScaleAction_AssignFromAnother(MR_ChangeScaleAction *_this, MR_PassBy _other_pass_by, MR_ChangeScaleAction *_other);

/// Generated from a method of class `MR::ChangeScaleAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeScaleAction_name(const MR_ChangeScaleAction *_this);

/// Generated from a method of class `MR::ChangeScaleAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeScaleAction_action(MR_ChangeScaleAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeScaleAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeScaleAction_heapBytes(const MR_ChangeScaleAction *_this);

#ifdef __cplusplus
} // extern "C"
#endif
