// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRHistoryAction.h>
#include <MRCMesh/MRId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_HistoryAction MR_HistoryAction; // Defined in `#include <MRCMesh/MRHistoryAction.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_shared_ptr_MR_ObjectPoints MR_std_shared_ptr_MR_ObjectPoints; // Defined in `#include <MRCMisc/std_shared_ptr_MR_ObjectPoints.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// Undo action for ObjectMesh mesh change
/// Generated from class `MR::ChangePointCloudAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangePointCloudAction MR_ChangePointCloudAction;

/// Undo action for points field inside ObjectPoints
/// Generated from class `MR::ChangePointCloudPointsAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangePointCloudPointsAction MR_ChangePointCloudPointsAction;

/// Undo action that modifies one point's coordinates inside ObjectPoints
/// Generated from class `MR::ChangeOnePointInCloudAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeOnePointInCloudAction MR_ChangeOnePointInCloudAction;

/// Generated from a constructor of class `MR::ChangePointCloudAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangePointCloudAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangePointCloudAction *MR_ChangePointCloudAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangePointCloudAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangePointCloudAction *MR_ChangePointCloudAction_OffsetPtr(const MR_ChangePointCloudAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangePointCloudAction *MR_ChangePointCloudAction_OffsetMutablePtr(MR_ChangePointCloudAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangePointCloudAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangePointCloudAction_UpcastTo_MR_HistoryAction(const MR_ChangePointCloudAction *object);

/// Upcasts an instance of `MR::ChangePointCloudAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangePointCloudAction_MutableUpcastTo_MR_HistoryAction(MR_ChangePointCloudAction *object);

/// use this constructor to remember object's point cloud before making any changes in it
/// Generated from a constructor of class `MR::ChangePointCloudAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangePointCloudAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangePointCloudAction *MR_ChangePointCloudAction_Construct(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectPoints *obj);

/// Destroys a heap-allocated instance of `MR_ChangePointCloudAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangePointCloudAction_Destroy(const MR_ChangePointCloudAction *_this);

/// Destroys a heap-allocated array of `MR_ChangePointCloudAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangePointCloudAction_DestroyArray(const MR_ChangePointCloudAction *_this);

/// Generated from a method of class `MR::ChangePointCloudAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangePointCloudAction *MR_ChangePointCloudAction_AssignFromAnother(MR_ChangePointCloudAction *_this, MR_PassBy _other_pass_by, MR_ChangePointCloudAction *_other);

/// Generated from a method of class `MR::ChangePointCloudAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangePointCloudAction_name(const MR_ChangePointCloudAction *_this);

/// Generated from a method of class `MR::ChangePointCloudAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangePointCloudAction_action(MR_ChangePointCloudAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangePointCloudAction` named `setObjectDirty`.
/// Parameter `obj` can not be null. It is a single object.
MRC_API void MR_ChangePointCloudAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectPoints *obj);

/// Generated from a method of class `MR::ChangePointCloudAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangePointCloudAction_heapBytes(const MR_ChangePointCloudAction *_this);

/// Generated from a constructor of class `MR::ChangePointCloudPointsAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangePointCloudPointsAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangePointCloudPointsAction *MR_ChangePointCloudPointsAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangePointCloudPointsAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangePointCloudPointsAction *MR_ChangePointCloudPointsAction_OffsetPtr(const MR_ChangePointCloudPointsAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangePointCloudPointsAction *MR_ChangePointCloudPointsAction_OffsetMutablePtr(MR_ChangePointCloudPointsAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangePointCloudPointsAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangePointCloudPointsAction_UpcastTo_MR_HistoryAction(const MR_ChangePointCloudPointsAction *object);

/// Upcasts an instance of `MR::ChangePointCloudPointsAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangePointCloudPointsAction_MutableUpcastTo_MR_HistoryAction(MR_ChangePointCloudPointsAction *object);

/// use this constructor to remember object's points field before making any changes in it
/// Generated from a constructor of class `MR::ChangePointCloudPointsAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangePointCloudPointsAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangePointCloudPointsAction *MR_ChangePointCloudPointsAction_Construct_2(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectPoints *obj);

/// use this constructor to remember object's points field and immediate set new value
/// Generated from a constructor of class `MR::ChangePointCloudPointsAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Parameter `newPoints` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangePointCloudPointsAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangePointCloudPointsAction *MR_ChangePointCloudPointsAction_Construct_3(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectPoints *obj, MR_VertCoords *newPoints);

/// Destroys a heap-allocated instance of `MR_ChangePointCloudPointsAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangePointCloudPointsAction_Destroy(const MR_ChangePointCloudPointsAction *_this);

/// Destroys a heap-allocated array of `MR_ChangePointCloudPointsAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangePointCloudPointsAction_DestroyArray(const MR_ChangePointCloudPointsAction *_this);

/// Generated from a method of class `MR::ChangePointCloudPointsAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangePointCloudPointsAction *MR_ChangePointCloudPointsAction_AssignFromAnother(MR_ChangePointCloudPointsAction *_this, MR_PassBy _other_pass_by, MR_ChangePointCloudPointsAction *_other);

/// Generated from a method of class `MR::ChangePointCloudPointsAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangePointCloudPointsAction_name(const MR_ChangePointCloudPointsAction *_this);

/// Generated from a method of class `MR::ChangePointCloudPointsAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangePointCloudPointsAction_action(MR_ChangePointCloudPointsAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangePointCloudPointsAction` named `setObjectDirty`.
/// Parameter `obj` can not be null. It is a single object.
MRC_API void MR_ChangePointCloudPointsAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectPoints *obj);

/// Generated from a method of class `MR::ChangePointCloudPointsAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangePointCloudPointsAction_heapBytes(const MR_ChangePointCloudPointsAction *_this);

/// Generated from a constructor of class `MR::ChangeOnePointInCloudAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeOnePointInCloudAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeOnePointInCloudAction *MR_ChangeOnePointInCloudAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeOnePointInCloudAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeOnePointInCloudAction *MR_ChangeOnePointInCloudAction_OffsetPtr(const MR_ChangeOnePointInCloudAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeOnePointInCloudAction *MR_ChangeOnePointInCloudAction_OffsetMutablePtr(MR_ChangeOnePointInCloudAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeOnePointInCloudAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeOnePointInCloudAction_UpcastTo_MR_HistoryAction(const MR_ChangeOnePointInCloudAction *object);

/// Upcasts an instance of `MR::ChangeOnePointInCloudAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeOnePointInCloudAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeOnePointInCloudAction *object);

/// use this constructor to remember point's coordinates before making any changes in it
/// Generated from a constructor of class `MR::ChangeOnePointInCloudAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeOnePointInCloudAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeOnePointInCloudAction *MR_ChangeOnePointInCloudAction_Construct_3(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectPoints *obj, MR_VertId pointId);

/// use this constructor to remember point's coordinates and immediate set new coordinates
/// Generated from a constructor of class `MR::ChangeOnePointInCloudAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Parameter `newCoords` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeOnePointInCloudAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeOnePointInCloudAction *MR_ChangeOnePointInCloudAction_Construct_4(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectPoints *obj, MR_VertId pointId, const MR_Vector3f *newCoords);

/// Destroys a heap-allocated instance of `MR_ChangeOnePointInCloudAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeOnePointInCloudAction_Destroy(const MR_ChangeOnePointInCloudAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeOnePointInCloudAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeOnePointInCloudAction_DestroyArray(const MR_ChangeOnePointInCloudAction *_this);

/// Generated from a method of class `MR::ChangeOnePointInCloudAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeOnePointInCloudAction *MR_ChangeOnePointInCloudAction_AssignFromAnother(MR_ChangeOnePointInCloudAction *_this, MR_PassBy _other_pass_by, MR_ChangeOnePointInCloudAction *_other);

/// Generated from a method of class `MR::ChangeOnePointInCloudAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeOnePointInCloudAction_name(const MR_ChangeOnePointInCloudAction *_this);

/// Generated from a method of class `MR::ChangeOnePointInCloudAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeOnePointInCloudAction_action(MR_ChangeOnePointInCloudAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeOnePointInCloudAction` named `setObjectDirty`.
/// Parameter `obj` can not be null. It is a single object.
MRC_API void MR_ChangeOnePointInCloudAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectPoints *obj);

/// Generated from a method of class `MR::ChangeOnePointInCloudAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeOnePointInCloudAction_heapBytes(const MR_ChangeOnePointInCloudAction *_this);

#ifdef __cplusplus
} // extern "C"
#endif
