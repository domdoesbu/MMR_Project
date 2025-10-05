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


/// History action for object change
/// Generated from class `MR::ChangeObjectAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeObjectAction MR_ChangeObjectAction;

/// Generated from a constructor of class `MR::ChangeObjectAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeObjectAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeObjectAction *MR_ChangeObjectAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeObjectAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeObjectAction *MR_ChangeObjectAction_OffsetPtr(const MR_ChangeObjectAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeObjectAction *MR_ChangeObjectAction_OffsetMutablePtr(MR_ChangeObjectAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeObjectAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeObjectAction_UpcastTo_MR_HistoryAction(const MR_ChangeObjectAction *object);

/// Upcasts an instance of `MR::ChangeObjectAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeObjectAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeObjectAction *object);

/// Constructed from original Object
/// Generated from a constructor of class `MR::ChangeObjectAction`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeObjectAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeObjectAction *MR_ChangeObjectAction_Construct(const MR_std_string *name, const MR_std_shared_ptr_MR_Object *obj);

/// Destroys a heap-allocated instance of `MR_ChangeObjectAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeObjectAction_Destroy(const MR_ChangeObjectAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeObjectAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeObjectAction_DestroyArray(const MR_ChangeObjectAction *_this);

/// Generated from a method of class `MR::ChangeObjectAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeObjectAction *MR_ChangeObjectAction_AssignFromAnother(MR_ChangeObjectAction *_this, MR_PassBy _other_pass_by, MR_ChangeObjectAction *_other);

/// Generated from a method of class `MR::ChangeObjectAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeObjectAction_name(const MR_ChangeObjectAction *_this);

/// Generated from a method of class `MR::ChangeObjectAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeObjectAction_action(MR_ChangeObjectAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeObjectAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeObjectAction_heapBytes(const MR_ChangeObjectAction *_this);

#ifdef __cplusplus
} // extern "C"
#endif
