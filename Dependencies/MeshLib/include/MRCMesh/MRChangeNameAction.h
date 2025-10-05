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


/// This action to undo/redo the change of object name
/// Generated from class `MR::ChangeNameAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeNameAction MR_ChangeNameAction;

/// Generated from a constructor of class `MR::ChangeNameAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeNameAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeNameAction *MR_ChangeNameAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeNameAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeNameAction *MR_ChangeNameAction_OffsetPtr(const MR_ChangeNameAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeNameAction *MR_ChangeNameAction_OffsetMutablePtr(MR_ChangeNameAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeNameAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeNameAction_UpcastTo_MR_HistoryAction(const MR_ChangeNameAction *object);

/// Upcasts an instance of `MR::ChangeNameAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeNameAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeNameAction *object);

/// construct before giving new name to the object
/// Generated from a constructor of class `MR::ChangeNameAction`.
/// Parameter `actionName` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeNameAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeNameAction *MR_ChangeNameAction_Construct(const MR_std_string *actionName, MR_PassBy obj_pass_by, MR_std_shared_ptr_MR_Object *obj);

/// Destroys a heap-allocated instance of `MR_ChangeNameAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeNameAction_Destroy(const MR_ChangeNameAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeNameAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeNameAction_DestroyArray(const MR_ChangeNameAction *_this);

/// Generated from a method of class `MR::ChangeNameAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeNameAction *MR_ChangeNameAction_AssignFromAnother(MR_ChangeNameAction *_this, MR_PassBy _other_pass_by, MR_ChangeNameAction *_other);

/// Generated from a method of class `MR::ChangeNameAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeNameAction_name(const MR_ChangeNameAction *_this);

/// Generated from a method of class `MR::ChangeNameAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeNameAction_action(MR_ChangeNameAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeNameAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeNameAction_heapBytes(const MR_ChangeNameAction *_this);

#ifdef __cplusplus
} // extern "C"
#endif
