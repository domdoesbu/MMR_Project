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


/// History action for scene objects order change
/// Generated from class `MR::ChangeSceneObjectsOrder`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeSceneObjectsOrder MR_ChangeSceneObjectsOrder;

/// Generated from a constructor of class `MR::ChangeSceneObjectsOrder`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeSceneObjectsOrder_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeSceneObjectsOrder *MR_ChangeSceneObjectsOrder_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeSceneObjectsOrder *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeSceneObjectsOrder *MR_ChangeSceneObjectsOrder_OffsetPtr(const MR_ChangeSceneObjectsOrder *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeSceneObjectsOrder *MR_ChangeSceneObjectsOrder_OffsetMutablePtr(MR_ChangeSceneObjectsOrder *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeSceneObjectsOrder` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeSceneObjectsOrder_UpcastTo_MR_HistoryAction(const MR_ChangeSceneObjectsOrder *object);

/// Upcasts an instance of `MR::ChangeSceneObjectsOrder` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeSceneObjectsOrder_MutableUpcastTo_MR_HistoryAction(MR_ChangeSceneObjectsOrder *object);

/// Constructed before change order
/// Generated from a constructor of class `MR::ChangeSceneObjectsOrder`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeSceneObjectsOrder_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeSceneObjectsOrder *MR_ChangeSceneObjectsOrder_Construct(const MR_std_string *name, const MR_std_shared_ptr_MR_Object *obj);

/// Destroys a heap-allocated instance of `MR_ChangeSceneObjectsOrder`. Does nothing if the pointer is null.
MRC_API void MR_ChangeSceneObjectsOrder_Destroy(const MR_ChangeSceneObjectsOrder *_this);

/// Destroys a heap-allocated array of `MR_ChangeSceneObjectsOrder`. Does nothing if the pointer is null.
MRC_API void MR_ChangeSceneObjectsOrder_DestroyArray(const MR_ChangeSceneObjectsOrder *_this);

/// Generated from a method of class `MR::ChangeSceneObjectsOrder` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeSceneObjectsOrder *MR_ChangeSceneObjectsOrder_AssignFromAnother(MR_ChangeSceneObjectsOrder *_this, MR_PassBy _other_pass_by, MR_ChangeSceneObjectsOrder *_other);

/// Generated from a method of class `MR::ChangeSceneObjectsOrder` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeSceneObjectsOrder_name(const MR_ChangeSceneObjectsOrder *_this);

/// Generated from a method of class `MR::ChangeSceneObjectsOrder` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeSceneObjectsOrder_action(MR_ChangeSceneObjectsOrder *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeSceneObjectsOrder` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeSceneObjectsOrder_heapBytes(const MR_ChangeSceneObjectsOrder *_this);

#ifdef __cplusplus
} // extern "C"
#endif
