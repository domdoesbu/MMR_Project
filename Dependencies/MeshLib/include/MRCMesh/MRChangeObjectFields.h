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

typedef struct MR_AnyVisualizeMaskEnum MR_AnyVisualizeMaskEnum; // Defined in `#include <MRCMesh/MRVisualObject.h>`.
typedef struct MR_HistoryAction MR_HistoryAction; // Defined in `#include <MRCMesh/MRHistoryAction.h>`.
typedef struct MR_ViewportMask MR_ViewportMask; // Defined in `#include <MRCMesh/MRViewportId.h>`.
typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_shared_ptr_MR_VisualObject MR_std_shared_ptr_MR_VisualObject; // Defined in `#include <MRCMisc/std_shared_ptr_MR_VisualObject.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// History action for visualizeMaskType change
/// Generated from class `MR::ChangeVisualizePropertyAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeVisualizePropertyAction MR_ChangeVisualizePropertyAction;

/// History action for object selected state
/// Generated from class `MR::ChangeObjectSelectedAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeObjectSelectedAction MR_ChangeObjectSelectedAction;

/// History action for object visibility
/// Generated from class `MR::ChangeObjectVisibilityAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeObjectVisibilityAction MR_ChangeObjectVisibilityAction;

/// Generated from a constructor of class `MR::ChangeVisualizePropertyAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeVisualizePropertyAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeVisualizePropertyAction *MR_ChangeVisualizePropertyAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeVisualizePropertyAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeVisualizePropertyAction *MR_ChangeVisualizePropertyAction_OffsetPtr(const MR_ChangeVisualizePropertyAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeVisualizePropertyAction *MR_ChangeVisualizePropertyAction_OffsetMutablePtr(MR_ChangeVisualizePropertyAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeVisualizePropertyAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeVisualizePropertyAction_UpcastTo_MR_HistoryAction(const MR_ChangeVisualizePropertyAction *object);

/// Upcasts an instance of `MR::ChangeVisualizePropertyAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeVisualizePropertyAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeVisualizePropertyAction *object);

/// use this constructor to remember object's visualize property mask before making any changes in it
/// Generated from a constructor of class `MR::ChangeVisualizePropertyAction`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `obj` can not be null. It is a single object.
/// Parameter `visualizeMaskType` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeVisualizePropertyAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeVisualizePropertyAction *MR_ChangeVisualizePropertyAction_Construct_3(const MR_std_string *name, const MR_std_shared_ptr_MR_VisualObject *obj, const MR_AnyVisualizeMaskEnum *visualizeMaskType);

/// use this constructor to remember object's visualize property mask and immediately set new value
/// Generated from a constructor of class `MR::ChangeVisualizePropertyAction`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `obj` can not be null. It is a single object.
/// Parameter `visualizeMaskType` can not be null. It is a single object.
/// Parameter `newMask` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeVisualizePropertyAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeVisualizePropertyAction *MR_ChangeVisualizePropertyAction_Construct_4(const MR_std_string *name, const MR_std_shared_ptr_MR_VisualObject *obj, const MR_AnyVisualizeMaskEnum *visualizeMaskType, const MR_ViewportMask *newMask);

/// Destroys a heap-allocated instance of `MR_ChangeVisualizePropertyAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeVisualizePropertyAction_Destroy(const MR_ChangeVisualizePropertyAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeVisualizePropertyAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeVisualizePropertyAction_DestroyArray(const MR_ChangeVisualizePropertyAction *_this);

/// Generated from a method of class `MR::ChangeVisualizePropertyAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeVisualizePropertyAction *MR_ChangeVisualizePropertyAction_AssignFromAnother(MR_ChangeVisualizePropertyAction *_this, MR_PassBy _other_pass_by, MR_ChangeVisualizePropertyAction *_other);

/// Generated from a method of class `MR::ChangeVisualizePropertyAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeVisualizePropertyAction_name(const MR_ChangeVisualizePropertyAction *_this);

/// Generated from a method of class `MR::ChangeVisualizePropertyAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeVisualizePropertyAction_action(MR_ChangeVisualizePropertyAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeVisualizePropertyAction` named `setObjectDirty`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API void MR_ChangeVisualizePropertyAction_setObjectDirty(const MR_std_shared_ptr_MR_VisualObject *_1);

/// Generated from a method of class `MR::ChangeVisualizePropertyAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeVisualizePropertyAction_heapBytes(const MR_ChangeVisualizePropertyAction *_this);

/// Generated from a constructor of class `MR::ChangeObjectSelectedAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeObjectSelectedAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeObjectSelectedAction *MR_ChangeObjectSelectedAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeObjectSelectedAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeObjectSelectedAction *MR_ChangeObjectSelectedAction_OffsetPtr(const MR_ChangeObjectSelectedAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeObjectSelectedAction *MR_ChangeObjectSelectedAction_OffsetMutablePtr(MR_ChangeObjectSelectedAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeObjectSelectedAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeObjectSelectedAction_UpcastTo_MR_HistoryAction(const MR_ChangeObjectSelectedAction *object);

/// Upcasts an instance of `MR::ChangeObjectSelectedAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeObjectSelectedAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeObjectSelectedAction *object);

/// use this constructor to remember object's isSelected property before making any changes in it
/// Generated from a constructor of class `MR::ChangeObjectSelectedAction`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeObjectSelectedAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeObjectSelectedAction *MR_ChangeObjectSelectedAction_Construct_2(const MR_std_string *name, const MR_std_shared_ptr_MR_Object *obj);

/// use this constructor to remember object's isSelected property and immediately set new value
/// Generated from a constructor of class `MR::ChangeObjectSelectedAction`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeObjectSelectedAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeObjectSelectedAction *MR_ChangeObjectSelectedAction_Construct_3(const MR_std_string *name, const MR_std_shared_ptr_MR_Object *obj, bool newValue);

/// Destroys a heap-allocated instance of `MR_ChangeObjectSelectedAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeObjectSelectedAction_Destroy(const MR_ChangeObjectSelectedAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeObjectSelectedAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeObjectSelectedAction_DestroyArray(const MR_ChangeObjectSelectedAction *_this);

/// Generated from a method of class `MR::ChangeObjectSelectedAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeObjectSelectedAction *MR_ChangeObjectSelectedAction_AssignFromAnother(MR_ChangeObjectSelectedAction *_this, MR_PassBy _other_pass_by, MR_ChangeObjectSelectedAction *_other);

/// Generated from a method of class `MR::ChangeObjectSelectedAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeObjectSelectedAction_name(const MR_ChangeObjectSelectedAction *_this);

/// Generated from a method of class `MR::ChangeObjectSelectedAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeObjectSelectedAction_action(MR_ChangeObjectSelectedAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeObjectSelectedAction` named `setObjectDirty`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API void MR_ChangeObjectSelectedAction_setObjectDirty(const MR_std_shared_ptr_MR_Object *_1);

/// Generated from a method of class `MR::ChangeObjectSelectedAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeObjectSelectedAction_heapBytes(const MR_ChangeObjectSelectedAction *_this);

/// Generated from a constructor of class `MR::ChangeObjectVisibilityAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeObjectVisibilityAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeObjectVisibilityAction *MR_ChangeObjectVisibilityAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeObjectVisibilityAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeObjectVisibilityAction *MR_ChangeObjectVisibilityAction_OffsetPtr(const MR_ChangeObjectVisibilityAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeObjectVisibilityAction *MR_ChangeObjectVisibilityAction_OffsetMutablePtr(MR_ChangeObjectVisibilityAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeObjectVisibilityAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeObjectVisibilityAction_UpcastTo_MR_HistoryAction(const MR_ChangeObjectVisibilityAction *object);

/// Upcasts an instance of `MR::ChangeObjectVisibilityAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeObjectVisibilityAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeObjectVisibilityAction *object);

/// use this constructor to remember object's visibility mask before making any changes in it
/// Generated from a constructor of class `MR::ChangeObjectVisibilityAction`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeObjectVisibilityAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeObjectVisibilityAction *MR_ChangeObjectVisibilityAction_Construct_2(const MR_std_string *name, const MR_std_shared_ptr_MR_Object *obj);

/// use this constructor to remember object's visibility mask and immediately set new mask
/// Generated from a constructor of class `MR::ChangeObjectVisibilityAction`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `obj` can not be null. It is a single object.
/// Parameter `newVisibilityMask` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeObjectVisibilityAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeObjectVisibilityAction *MR_ChangeObjectVisibilityAction_Construct_3(const MR_std_string *name, const MR_std_shared_ptr_MR_Object *obj, const MR_ViewportMask *newVisibilityMask);

/// Destroys a heap-allocated instance of `MR_ChangeObjectVisibilityAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeObjectVisibilityAction_Destroy(const MR_ChangeObjectVisibilityAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeObjectVisibilityAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeObjectVisibilityAction_DestroyArray(const MR_ChangeObjectVisibilityAction *_this);

/// Generated from a method of class `MR::ChangeObjectVisibilityAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeObjectVisibilityAction *MR_ChangeObjectVisibilityAction_AssignFromAnother(MR_ChangeObjectVisibilityAction *_this, MR_PassBy _other_pass_by, MR_ChangeObjectVisibilityAction *_other);

/// Generated from a method of class `MR::ChangeObjectVisibilityAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeObjectVisibilityAction_name(const MR_ChangeObjectVisibilityAction *_this);

/// Generated from a method of class `MR::ChangeObjectVisibilityAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeObjectVisibilityAction_action(MR_ChangeObjectVisibilityAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeObjectVisibilityAction` named `setObjectDirty`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API void MR_ChangeObjectVisibilityAction_setObjectDirty(const MR_std_shared_ptr_MR_Object *_1);

/// Generated from a method of class `MR::ChangeObjectVisibilityAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeObjectVisibilityAction_heapBytes(const MR_ChangeObjectVisibilityAction *_this);

#ifdef __cplusplus
} // extern "C"
#endif
