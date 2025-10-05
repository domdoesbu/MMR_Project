// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRHistoryAction.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_HistoryAction MR_HistoryAction; // Defined in `#include <MRCMesh/MRHistoryAction.h>`.
typedef struct MR_std_function_bool_from_const_std_shared_ptr_MR_HistoryAction_ref MR_std_function_bool_from_const_std_shared_ptr_MR_HistoryAction_ref; // Defined in `#include <MRCMisc/std_function_bool_from_const_std_shared_ptr_MR_HistoryAction_ref.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_std_shared_ptr_MR_HistoryAction MR_std_vector_std_shared_ptr_MR_HistoryAction; // Defined in `#include <MRCMisc/std_vector_std_shared_ptr_MR_HistoryAction.h>`.


/// History action for combine some history actions
/// Generated from class `MR::CombinedHistoryAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_CombinedHistoryAction MR_CombinedHistoryAction;

/// Generated from a constructor of class `MR::CombinedHistoryAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CombinedHistoryAction_Destroy()` to free it when you're done using it.
MRC_API MR_CombinedHistoryAction *MR_CombinedHistoryAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_CombinedHistoryAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_CombinedHistoryAction *MR_CombinedHistoryAction_OffsetPtr(const MR_CombinedHistoryAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_CombinedHistoryAction *MR_CombinedHistoryAction_OffsetMutablePtr(MR_CombinedHistoryAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::CombinedHistoryAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_CombinedHistoryAction_UpcastTo_MR_HistoryAction(const MR_CombinedHistoryAction *object);

/// Upcasts an instance of `MR::CombinedHistoryAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_CombinedHistoryAction_MutableUpcastTo_MR_HistoryAction(MR_CombinedHistoryAction *object);

/// Will call action() for each actions in given order (undo in reverse, redo in forward)
/// Generated from a constructor of class `MR::CombinedHistoryAction`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `actions` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CombinedHistoryAction_Destroy()` to free it when you're done using it.
MRC_API MR_CombinedHistoryAction *MR_CombinedHistoryAction_Construct(const MR_std_string *name, const MR_std_vector_std_shared_ptr_MR_HistoryAction *actions);

/// Destroys a heap-allocated instance of `MR_CombinedHistoryAction`. Does nothing if the pointer is null.
MRC_API void MR_CombinedHistoryAction_Destroy(const MR_CombinedHistoryAction *_this);

/// Destroys a heap-allocated array of `MR_CombinedHistoryAction`. Does nothing if the pointer is null.
MRC_API void MR_CombinedHistoryAction_DestroyArray(const MR_CombinedHistoryAction *_this);

/// Generated from a method of class `MR::CombinedHistoryAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_CombinedHistoryAction *MR_CombinedHistoryAction_AssignFromAnother(MR_CombinedHistoryAction *_this, MR_PassBy _other_pass_by, MR_CombinedHistoryAction *_other);

/// Generated from a method of class `MR::CombinedHistoryAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_CombinedHistoryAction_name(const MR_CombinedHistoryAction *_this);

/// Generated from a method of class `MR::CombinedHistoryAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_CombinedHistoryAction_action(MR_CombinedHistoryAction *_this, MR_HistoryAction_Type type);

/// Generated from a method of class `MR::CombinedHistoryAction` named `getStack`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_std_shared_ptr_MR_HistoryAction *MR_CombinedHistoryAction_getStack(MR_CombinedHistoryAction *_this);

/// Generated from a method of class `MR::CombinedHistoryAction` named `getStack`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_std_shared_ptr_MR_HistoryAction *MR_CombinedHistoryAction_getStack_const(const MR_CombinedHistoryAction *_this);

/// Remove some actions according to condition inside combined actions.
/// Do deep filtering.
/// Generated from a method of class `MR::CombinedHistoryAction` named `filter`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_CombinedHistoryAction_filter(MR_CombinedHistoryAction *_this, MR_PassBy filteringCondition_pass_by, MR_std_function_bool_from_const_std_shared_ptr_MR_HistoryAction_ref *filteringCondition);

/// Generated from a method of class `MR::CombinedHistoryAction` named `empty`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_CombinedHistoryAction_empty(const MR_CombinedHistoryAction *_this);

/// Generated from a method of class `MR::CombinedHistoryAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_CombinedHistoryAction_heapBytes(const MR_CombinedHistoryAction *_this);

#ifdef __cplusplus
} // extern "C"
#endif
