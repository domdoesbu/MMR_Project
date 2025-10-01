// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRHistoryAction.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_HistoryAction MR_HistoryAction; // Defined in `#include <MRCMesh/MRHistoryAction.h>`.
typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// Change scene action
/// Generated from class `MR::ChangeSceneAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeSceneAction MR_ChangeSceneAction;

typedef int32_t MR_ChangeSceneAction_Type;
enum // MR_ChangeSceneAction_Type
{
    MR_ChangeSceneAction_Type_AddObject = 0,
    MR_ChangeSceneAction_Type_RemoveObject = 1,
};

/// Generated from a constructor of class `MR::ChangeSceneAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeSceneAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeSceneAction *MR_ChangeSceneAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeSceneAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeSceneAction *MR_ChangeSceneAction_OffsetPtr(const MR_ChangeSceneAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeSceneAction *MR_ChangeSceneAction_OffsetMutablePtr(MR_ChangeSceneAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeSceneAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeSceneAction_UpcastTo_MR_HistoryAction(const MR_ChangeSceneAction *object);

/// Upcasts an instance of `MR::ChangeSceneAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeSceneAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeSceneAction *object);

/// Constructed before removal or addition
/// Generated from a constructor of class `MR::ChangeSceneAction`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeSceneAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeSceneAction *MR_ChangeSceneAction_Construct(const MR_std_string *name, const MR_std_shared_ptr_MR_Object *obj, MR_ChangeSceneAction_Type type);

/// Destroys a heap-allocated instance of `MR_ChangeSceneAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeSceneAction_Destroy(const MR_ChangeSceneAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeSceneAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeSceneAction_DestroyArray(const MR_ChangeSceneAction *_this);

/// Generated from a method of class `MR::ChangeSceneAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeSceneAction *MR_ChangeSceneAction_AssignFromAnother(MR_ChangeSceneAction *_this, MR_PassBy _other_pass_by, MR_ChangeSceneAction *_other);

/// Generated from a method of class `MR::ChangeSceneAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeSceneAction_name(const MR_ChangeSceneAction *_this);

/// Generated from a method of class `MR::ChangeSceneAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeSceneAction_action(MR_ChangeSceneAction *_this, MR_HistoryAction_Type actionType);

/// Generated from a method of class `MR::ChangeSceneAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeSceneAction_heapBytes(const MR_ChangeSceneAction *_this);

#ifdef __cplusplus
} // extern "C"
#endif
