// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRHistoryAction.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_HistoryAction MR_HistoryAction; // Defined in `#include <MRCMesh/MRHistoryAction.h>`.
typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// History action for xf change
/// Generated from class `MR::ChangeXfAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeXfAction MR_ChangeXfAction;

/// Generated from a constructor of class `MR::ChangeXfAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeXfAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeXfAction *MR_ChangeXfAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeXfAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeXfAction *MR_ChangeXfAction_OffsetPtr(const MR_ChangeXfAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeXfAction *MR_ChangeXfAction_OffsetMutablePtr(MR_ChangeXfAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeXfAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeXfAction_UpcastTo_MR_HistoryAction(const MR_ChangeXfAction *object);

/// Upcasts an instance of `MR::ChangeXfAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeXfAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeXfAction *object);

/// use this constructor to remember object's transformation before making any changes in it
/// Generated from a constructor of class `MR::ChangeXfAction`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeXfAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeXfAction *MR_ChangeXfAction_Construct_2(const MR_std_string *name, const MR_std_shared_ptr_MR_Object *obj);

/// use this constructor to remember object's transformation and immediately set new mesh
/// Generated from a constructor of class `MR::ChangeXfAction`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `obj` can not be null. It is a single object.
/// Parameter `newXf` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeXfAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeXfAction *MR_ChangeXfAction_Construct_3(const MR_std_string *name, const MR_std_shared_ptr_MR_Object *obj, const MR_AffineXf3f *newXf);

/// Destroys a heap-allocated instance of `MR_ChangeXfAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeXfAction_Destroy(const MR_ChangeXfAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeXfAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeXfAction_DestroyArray(const MR_ChangeXfAction *_this);

/// Generated from a method of class `MR::ChangeXfAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeXfAction *MR_ChangeXfAction_AssignFromAnother(MR_ChangeXfAction *_this, MR_PassBy _other_pass_by, MR_ChangeXfAction *_other);

/// Generated from a method of class `MR::ChangeXfAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeXfAction_name(const MR_ChangeXfAction *_this);

/// Generated from a method of class `MR::ChangeXfAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeXfAction_action(MR_ChangeXfAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeXfAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeXfAction_heapBytes(const MR_ChangeXfAction *_this);

/// Generated from a method of class `MR::ChangeXfAction` named `obj`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_MR_Object *MR_ChangeXfAction_obj(const MR_ChangeXfAction *_this);

#ifdef __cplusplus
} // extern "C"
#endif
