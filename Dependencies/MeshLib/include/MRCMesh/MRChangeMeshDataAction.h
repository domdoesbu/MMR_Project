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
typedef struct MR_ObjectMeshData MR_ObjectMeshData; // Defined in `#include <MRCMesh/MRObjectMeshData.h>`.
typedef struct MR_std_shared_ptr_MR_ObjectMesh MR_std_shared_ptr_MR_ObjectMesh; // Defined in `#include <MRCMisc/std_shared_ptr_MR_ObjectMesh.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// Undo action for ObjectMeshData change
/// Generated from class `MR::ChangeMeshDataAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeMeshDataAction MR_ChangeMeshDataAction;

/// Generated from a constructor of class `MR::ChangeMeshDataAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshDataAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshDataAction *MR_ChangeMeshDataAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeMeshDataAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeMeshDataAction *MR_ChangeMeshDataAction_OffsetPtr(const MR_ChangeMeshDataAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeMeshDataAction *MR_ChangeMeshDataAction_OffsetMutablePtr(MR_ChangeMeshDataAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeMeshDataAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeMeshDataAction_UpcastTo_MR_HistoryAction(const MR_ChangeMeshDataAction *object);

/// Upcasts an instance of `MR::ChangeMeshDataAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeMeshDataAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeMeshDataAction *object);

/// use this constructor to remember object's data before making any changes in it
/// Generated from a constructor of class `MR::ChangeMeshDataAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshDataAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshDataAction *MR_ChangeMeshDataAction_Construct_2(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectMesh *obj);

/// use this constructor to remember object's data and immediately set new data
/// Generated from a constructor of class `MR::ChangeMeshDataAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Parameter `newData` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshDataAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshDataAction *MR_ChangeMeshDataAction_Construct_3(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectMesh *obj, MR_ObjectMeshData *newData);

/// Destroys a heap-allocated instance of `MR_ChangeMeshDataAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeMeshDataAction_Destroy(const MR_ChangeMeshDataAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeMeshDataAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeMeshDataAction_DestroyArray(const MR_ChangeMeshDataAction *_this);

/// Generated from a method of class `MR::ChangeMeshDataAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeMeshDataAction *MR_ChangeMeshDataAction_AssignFromAnother(MR_ChangeMeshDataAction *_this, MR_PassBy _other_pass_by, MR_ChangeMeshDataAction *_other);

/// Generated from a method of class `MR::ChangeMeshDataAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeMeshDataAction_name(const MR_ChangeMeshDataAction *_this);

/// Generated from a method of class `MR::ChangeMeshDataAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeMeshDataAction_action(MR_ChangeMeshDataAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeMeshDataAction` named `setObjectDirty`.
/// Parameter `obj` can not be null. It is a single object.
MRC_API void MR_ChangeMeshDataAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectMesh *obj);

/// Generated from a method of class `MR::ChangeMeshDataAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeMeshDataAction_heapBytes(const MR_ChangeMeshDataAction *_this);

#ifdef __cplusplus
} // extern "C"
#endif
