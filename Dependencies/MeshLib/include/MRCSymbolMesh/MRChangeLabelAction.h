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
typedef struct MR_std_shared_ptr_MR_ObjectLabel MR_std_shared_ptr_MR_ObjectLabel; // Defined in `#include <MRCMisc/std_shared_ptr_MR_ObjectLabel.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// Generated from class `MR::ChangeLabelAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeLabelAction MR_ChangeLabelAction;

/// Generated from a constructor of class `MR::ChangeLabelAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeLabelAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeLabelAction *MR_ChangeLabelAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeLabelAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeLabelAction *MR_ChangeLabelAction_OffsetPtr(const MR_ChangeLabelAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeLabelAction *MR_ChangeLabelAction_OffsetMutablePtr(MR_ChangeLabelAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeLabelAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeLabelAction_UpcastTo_MR_HistoryAction(const MR_ChangeLabelAction *object);

/// Upcasts an instance of `MR::ChangeLabelAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeLabelAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeLabelAction *object);

/// Generated from a constructor of class `MR::ChangeLabelAction`.
/// Parameter `actionName` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeLabelAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeLabelAction *MR_ChangeLabelAction_Construct(const MR_std_string *actionName, MR_PassBy obj_pass_by, MR_std_shared_ptr_MR_ObjectLabel *obj);

/// Destroys a heap-allocated instance of `MR_ChangeLabelAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeLabelAction_Destroy(const MR_ChangeLabelAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeLabelAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeLabelAction_DestroyArray(const MR_ChangeLabelAction *_this);

/// Generated from a method of class `MR::ChangeLabelAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeLabelAction *MR_ChangeLabelAction_AssignFromAnother(MR_ChangeLabelAction *_this, MR_PassBy _other_pass_by, MR_ChangeLabelAction *_other);

/// Generated from a method of class `MR::ChangeLabelAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeLabelAction_name(const MR_ChangeLabelAction *_this);

/// Generated from a method of class `MR::ChangeLabelAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeLabelAction_action(MR_ChangeLabelAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeLabelAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeLabelAction_heapBytes(const MR_ChangeLabelAction *_this);

#ifdef __cplusplus
} // extern "C"
#endif
