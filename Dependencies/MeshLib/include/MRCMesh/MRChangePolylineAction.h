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
typedef struct MR_std_shared_ptr_MR_ObjectLines MR_std_shared_ptr_MR_ObjectLines; // Defined in `#include <MRCMisc/std_shared_ptr_MR_ObjectLines.h>`.
typedef struct MR_std_shared_ptr_MR_Polyline3 MR_std_shared_ptr_MR_Polyline3; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Polyline3.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// Undo action for ObjectLines polyline change
/// Generated from class `MR::ChangePolylineAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangePolylineAction MR_ChangePolylineAction;

/// Undo action for ObjectLines points only (not topology) change
/// Generated from class `MR::ChangePolylinePointsAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangePolylinePointsAction MR_ChangePolylinePointsAction;

/// Undo action for ObjectLines topology only (not points) change
/// Generated from class `MR::ChangePolylineTopologyAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangePolylineTopologyAction MR_ChangePolylineTopologyAction;

/// Generated from a constructor of class `MR::ChangePolylineAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangePolylineAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangePolylineAction *MR_ChangePolylineAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangePolylineAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangePolylineAction *MR_ChangePolylineAction_OffsetPtr(const MR_ChangePolylineAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangePolylineAction *MR_ChangePolylineAction_OffsetMutablePtr(MR_ChangePolylineAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangePolylineAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangePolylineAction_UpcastTo_MR_HistoryAction(const MR_ChangePolylineAction *object);

/// Upcasts an instance of `MR::ChangePolylineAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangePolylineAction_MutableUpcastTo_MR_HistoryAction(MR_ChangePolylineAction *object);

/// use this constructor to remember object's polyline before making any changes in it
/// Generated from a constructor of class `MR::ChangePolylineAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangePolylineAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangePolylineAction *MR_ChangePolylineAction_Construct_2(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectLines *obj);

/// use this constructor to remember object's polyline and immediately set new polyline
/// Generated from a constructor of class `MR::ChangePolylineAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangePolylineAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangePolylineAction *MR_ChangePolylineAction_Construct_3(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectLines *obj, MR_PassBy newPolyline_pass_by, MR_std_shared_ptr_MR_Polyline3 *newPolyline);

/// Destroys a heap-allocated instance of `MR_ChangePolylineAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangePolylineAction_Destroy(const MR_ChangePolylineAction *_this);

/// Destroys a heap-allocated array of `MR_ChangePolylineAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangePolylineAction_DestroyArray(const MR_ChangePolylineAction *_this);

/// Generated from a method of class `MR::ChangePolylineAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangePolylineAction *MR_ChangePolylineAction_AssignFromAnother(MR_ChangePolylineAction *_this, MR_PassBy _other_pass_by, MR_ChangePolylineAction *_other);

/// Generated from a method of class `MR::ChangePolylineAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangePolylineAction_name(const MR_ChangePolylineAction *_this);

/// Generated from a method of class `MR::ChangePolylineAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangePolylineAction_action(MR_ChangePolylineAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangePolylineAction` named `setObjectDirty`.
/// Parameter `obj` can not be null. It is a single object.
MRC_API void MR_ChangePolylineAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectLines *obj);

/// Generated from a method of class `MR::ChangePolylineAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangePolylineAction_heapBytes(const MR_ChangePolylineAction *_this);

/// Generated from a constructor of class `MR::ChangePolylinePointsAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangePolylinePointsAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangePolylinePointsAction *MR_ChangePolylinePointsAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangePolylinePointsAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangePolylinePointsAction *MR_ChangePolylinePointsAction_OffsetPtr(const MR_ChangePolylinePointsAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangePolylinePointsAction *MR_ChangePolylinePointsAction_OffsetMutablePtr(MR_ChangePolylinePointsAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangePolylinePointsAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangePolylinePointsAction_UpcastTo_MR_HistoryAction(const MR_ChangePolylinePointsAction *object);

/// Upcasts an instance of `MR::ChangePolylinePointsAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangePolylinePointsAction_MutableUpcastTo_MR_HistoryAction(MR_ChangePolylinePointsAction *object);

/// use this constructor to remember object's lines points before making any changes in it
/// Generated from a constructor of class `MR::ChangePolylinePointsAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangePolylinePointsAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangePolylinePointsAction *MR_ChangePolylinePointsAction_Construct(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectLines *obj);

/// Destroys a heap-allocated instance of `MR_ChangePolylinePointsAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangePolylinePointsAction_Destroy(const MR_ChangePolylinePointsAction *_this);

/// Destroys a heap-allocated array of `MR_ChangePolylinePointsAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangePolylinePointsAction_DestroyArray(const MR_ChangePolylinePointsAction *_this);

/// Generated from a method of class `MR::ChangePolylinePointsAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangePolylinePointsAction *MR_ChangePolylinePointsAction_AssignFromAnother(MR_ChangePolylinePointsAction *_this, MR_PassBy _other_pass_by, MR_ChangePolylinePointsAction *_other);

/// Generated from a method of class `MR::ChangePolylinePointsAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangePolylinePointsAction_name(const MR_ChangePolylinePointsAction *_this);

/// Generated from a method of class `MR::ChangePolylinePointsAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangePolylinePointsAction_action(MR_ChangePolylinePointsAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangePolylinePointsAction` named `setObjectDirty`.
/// Parameter `obj` can not be null. It is a single object.
MRC_API void MR_ChangePolylinePointsAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectLines *obj);

/// Generated from a method of class `MR::ChangePolylinePointsAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangePolylinePointsAction_heapBytes(const MR_ChangePolylinePointsAction *_this);

/// Generated from a constructor of class `MR::ChangePolylineTopologyAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangePolylineTopologyAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangePolylineTopologyAction *MR_ChangePolylineTopologyAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangePolylineTopologyAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangePolylineTopologyAction *MR_ChangePolylineTopologyAction_OffsetPtr(const MR_ChangePolylineTopologyAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangePolylineTopologyAction *MR_ChangePolylineTopologyAction_OffsetMutablePtr(MR_ChangePolylineTopologyAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangePolylineTopologyAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangePolylineTopologyAction_UpcastTo_MR_HistoryAction(const MR_ChangePolylineTopologyAction *object);

/// Upcasts an instance of `MR::ChangePolylineTopologyAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangePolylineTopologyAction_MutableUpcastTo_MR_HistoryAction(MR_ChangePolylineTopologyAction *object);

/// use this constructor to remember object's lines points before making any changes in it
/// Generated from a constructor of class `MR::ChangePolylineTopologyAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangePolylineTopologyAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangePolylineTopologyAction *MR_ChangePolylineTopologyAction_Construct(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectLines *obj);

/// Destroys a heap-allocated instance of `MR_ChangePolylineTopologyAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangePolylineTopologyAction_Destroy(const MR_ChangePolylineTopologyAction *_this);

/// Destroys a heap-allocated array of `MR_ChangePolylineTopologyAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangePolylineTopologyAction_DestroyArray(const MR_ChangePolylineTopologyAction *_this);

/// Generated from a method of class `MR::ChangePolylineTopologyAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangePolylineTopologyAction *MR_ChangePolylineTopologyAction_AssignFromAnother(MR_ChangePolylineTopologyAction *_this, MR_PassBy _other_pass_by, MR_ChangePolylineTopologyAction *_other);

/// Generated from a method of class `MR::ChangePolylineTopologyAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangePolylineTopologyAction_name(const MR_ChangePolylineTopologyAction *_this);

/// Generated from a method of class `MR::ChangePolylineTopologyAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangePolylineTopologyAction_action(MR_ChangePolylineTopologyAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangePolylineTopologyAction` named `setObjectDirty`.
/// Parameter `obj` can not be null. It is a single object.
MRC_API void MR_ChangePolylineTopologyAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectLines *obj);

/// Generated from a method of class `MR::ChangePolylineTopologyAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangePolylineTopologyAction_heapBytes(const MR_ChangePolylineTopologyAction *_this);

#ifdef __cplusplus
} // extern "C"
#endif
