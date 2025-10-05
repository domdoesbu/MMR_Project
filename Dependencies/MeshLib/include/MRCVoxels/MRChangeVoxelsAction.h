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
typedef struct MR_std_shared_ptr_MR_ObjectVoxels MR_std_shared_ptr_MR_ObjectVoxels; // Defined in `#include <MRCMisc/std_shared_ptr_MR_ObjectVoxels.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// Undo action for ObjectVoxels iso-value change
/// Generated from class `MR::ChangeIsoAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeIsoAction MR_ChangeIsoAction;

/// Undo action for ObjectVoxels dual/standard marching cubes change
/// Generated from class `MR::ChangeDualMarchingCubesAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeDualMarchingCubesAction MR_ChangeDualMarchingCubesAction;

// Undo action for ObjectVoxels active bounds change
/// Generated from class `MR::ChangeActiveBoxAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeActiveBoxAction MR_ChangeActiveBoxAction;

// Undo action for ObjectVoxels surface change (need for faster undo redo)
/// Generated from class `MR::ChangeSurfaceAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeSurfaceAction MR_ChangeSurfaceAction;

// Undo action for ObjectVoxels all data change (need for faster undo redo)
/// Generated from class `MR::ChangeGridAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeGridAction MR_ChangeGridAction;

/// Generated from a constructor of class `MR::ChangeIsoAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeIsoAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeIsoAction *MR_ChangeIsoAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeIsoAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeIsoAction *MR_ChangeIsoAction_OffsetPtr(const MR_ChangeIsoAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeIsoAction *MR_ChangeIsoAction_OffsetMutablePtr(MR_ChangeIsoAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeIsoAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeIsoAction_UpcastTo_MR_HistoryAction(const MR_ChangeIsoAction *object);

/// Upcasts an instance of `MR::ChangeIsoAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeIsoAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeIsoAction *object);

/// use this constructor to remember object's iso before making any changes in it
/// Generated from a constructor of class `MR::ChangeIsoAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeIsoAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeIsoAction *MR_ChangeIsoAction_Construct(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectVoxels *obj);

/// Destroys a heap-allocated instance of `MR_ChangeIsoAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeIsoAction_Destroy(const MR_ChangeIsoAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeIsoAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeIsoAction_DestroyArray(const MR_ChangeIsoAction *_this);

/// Generated from a method of class `MR::ChangeIsoAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeIsoAction *MR_ChangeIsoAction_AssignFromAnother(MR_ChangeIsoAction *_this, MR_PassBy _other_pass_by, MR_ChangeIsoAction *_other);

/// Generated from a method of class `MR::ChangeIsoAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeIsoAction_name(const MR_ChangeIsoAction *_this);

/// Generated from a method of class `MR::ChangeIsoAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeIsoAction_action(MR_ChangeIsoAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeIsoAction` named `setObjectDirty`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API void MR_ChangeIsoAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectVoxels *_1);

/// Generated from a method of class `MR::ChangeIsoAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeIsoAction_heapBytes(const MR_ChangeIsoAction *_this);

/// Generated from a constructor of class `MR::ChangeDualMarchingCubesAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeDualMarchingCubesAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeDualMarchingCubesAction *MR_ChangeDualMarchingCubesAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeDualMarchingCubesAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeDualMarchingCubesAction *MR_ChangeDualMarchingCubesAction_OffsetPtr(const MR_ChangeDualMarchingCubesAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeDualMarchingCubesAction *MR_ChangeDualMarchingCubesAction_OffsetMutablePtr(MR_ChangeDualMarchingCubesAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeDualMarchingCubesAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeDualMarchingCubesAction_UpcastTo_MR_HistoryAction(const MR_ChangeDualMarchingCubesAction *object);

/// Upcasts an instance of `MR::ChangeDualMarchingCubesAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeDualMarchingCubesAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeDualMarchingCubesAction *object);

/// use this constructor to remember object's dual-value before making any changes in it
/// Generated from a constructor of class `MR::ChangeDualMarchingCubesAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeDualMarchingCubesAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeDualMarchingCubesAction *MR_ChangeDualMarchingCubesAction_Construct_2(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectVoxels *obj);

/// use this constructor to remember given dual-value (and not the current value in the object)
/// Generated from a constructor of class `MR::ChangeDualMarchingCubesAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeDualMarchingCubesAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeDualMarchingCubesAction *MR_ChangeDualMarchingCubesAction_Construct_3(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectVoxels *obj, bool storeDual);

/// Destroys a heap-allocated instance of `MR_ChangeDualMarchingCubesAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeDualMarchingCubesAction_Destroy(const MR_ChangeDualMarchingCubesAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeDualMarchingCubesAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeDualMarchingCubesAction_DestroyArray(const MR_ChangeDualMarchingCubesAction *_this);

/// Generated from a method of class `MR::ChangeDualMarchingCubesAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeDualMarchingCubesAction *MR_ChangeDualMarchingCubesAction_AssignFromAnother(MR_ChangeDualMarchingCubesAction *_this, MR_PassBy _other_pass_by, MR_ChangeDualMarchingCubesAction *_other);

/// Generated from a method of class `MR::ChangeDualMarchingCubesAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeDualMarchingCubesAction_name(const MR_ChangeDualMarchingCubesAction *_this);

/// Generated from a method of class `MR::ChangeDualMarchingCubesAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeDualMarchingCubesAction_action(MR_ChangeDualMarchingCubesAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeDualMarchingCubesAction` named `setObjectDirty`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API void MR_ChangeDualMarchingCubesAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectVoxels *_1);

/// Generated from a method of class `MR::ChangeDualMarchingCubesAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeDualMarchingCubesAction_heapBytes(const MR_ChangeDualMarchingCubesAction *_this);

/// Generated from a constructor of class `MR::ChangeActiveBoxAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeActiveBoxAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeActiveBoxAction *MR_ChangeActiveBoxAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeActiveBoxAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeActiveBoxAction *MR_ChangeActiveBoxAction_OffsetPtr(const MR_ChangeActiveBoxAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeActiveBoxAction *MR_ChangeActiveBoxAction_OffsetMutablePtr(MR_ChangeActiveBoxAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeActiveBoxAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeActiveBoxAction_UpcastTo_MR_HistoryAction(const MR_ChangeActiveBoxAction *object);

/// Upcasts an instance of `MR::ChangeActiveBoxAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeActiveBoxAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeActiveBoxAction *object);

/// use this constructor to remember object's active box before making any changes in it
/// Generated from a constructor of class `MR::ChangeActiveBoxAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeActiveBoxAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeActiveBoxAction *MR_ChangeActiveBoxAction_Construct(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectVoxels *obj);

/// Destroys a heap-allocated instance of `MR_ChangeActiveBoxAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeActiveBoxAction_Destroy(const MR_ChangeActiveBoxAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeActiveBoxAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeActiveBoxAction_DestroyArray(const MR_ChangeActiveBoxAction *_this);

/// Generated from a method of class `MR::ChangeActiveBoxAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeActiveBoxAction *MR_ChangeActiveBoxAction_AssignFromAnother(MR_ChangeActiveBoxAction *_this, MR_PassBy _other_pass_by, MR_ChangeActiveBoxAction *_other);

/// Generated from a method of class `MR::ChangeActiveBoxAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeActiveBoxAction_name(const MR_ChangeActiveBoxAction *_this);

/// Generated from a method of class `MR::ChangeActiveBoxAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeActiveBoxAction_action(MR_ChangeActiveBoxAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeActiveBoxAction` named `setObjectDirty`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API void MR_ChangeActiveBoxAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectVoxels *_1);

/// Generated from a method of class `MR::ChangeActiveBoxAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeActiveBoxAction_heapBytes(const MR_ChangeActiveBoxAction *_this);

/// Generated from a constructor of class `MR::ChangeSurfaceAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeSurfaceAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeSurfaceAction *MR_ChangeSurfaceAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeSurfaceAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeSurfaceAction *MR_ChangeSurfaceAction_OffsetPtr(const MR_ChangeSurfaceAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeSurfaceAction *MR_ChangeSurfaceAction_OffsetMutablePtr(MR_ChangeSurfaceAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeSurfaceAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeSurfaceAction_UpcastTo_MR_HistoryAction(const MR_ChangeSurfaceAction *object);

/// Upcasts an instance of `MR::ChangeSurfaceAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeSurfaceAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeSurfaceAction *object);

/// use this constructor to remember object's surface before making any changes in it
/// Generated from a constructor of class `MR::ChangeSurfaceAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeSurfaceAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeSurfaceAction *MR_ChangeSurfaceAction_Construct(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectVoxels *obj);

/// Destroys a heap-allocated instance of `MR_ChangeSurfaceAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeSurfaceAction_Destroy(const MR_ChangeSurfaceAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeSurfaceAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeSurfaceAction_DestroyArray(const MR_ChangeSurfaceAction *_this);

/// Generated from a method of class `MR::ChangeSurfaceAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeSurfaceAction *MR_ChangeSurfaceAction_AssignFromAnother(MR_ChangeSurfaceAction *_this, MR_PassBy _other_pass_by, MR_ChangeSurfaceAction *_other);

/// Generated from a method of class `MR::ChangeSurfaceAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeSurfaceAction_name(const MR_ChangeSurfaceAction *_this);

/// Generated from a method of class `MR::ChangeSurfaceAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeSurfaceAction_action(MR_ChangeSurfaceAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeSurfaceAction` named `setObjectDirty`.
/// Parameter `obj` can not be null. It is a single object.
MRC_API void MR_ChangeSurfaceAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectVoxels *obj);

/// Generated from a method of class `MR::ChangeSurfaceAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeSurfaceAction_heapBytes(const MR_ChangeSurfaceAction *_this);

/// Generated from a constructor of class `MR::ChangeGridAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeGridAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeGridAction *MR_ChangeGridAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeGridAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeGridAction *MR_ChangeGridAction_OffsetPtr(const MR_ChangeGridAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeGridAction *MR_ChangeGridAction_OffsetMutablePtr(MR_ChangeGridAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeGridAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeGridAction_UpcastTo_MR_HistoryAction(const MR_ChangeGridAction *object);

/// Upcasts an instance of `MR::ChangeGridAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeGridAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeGridAction *object);

/// use this constructor to remember object's data before making any changes in it
/// Generated from a constructor of class `MR::ChangeGridAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeGridAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeGridAction *MR_ChangeGridAction_Construct(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectVoxels *obj);

/// Destroys a heap-allocated instance of `MR_ChangeGridAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeGridAction_Destroy(const MR_ChangeGridAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeGridAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeGridAction_DestroyArray(const MR_ChangeGridAction *_this);

/// Generated from a method of class `MR::ChangeGridAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeGridAction *MR_ChangeGridAction_AssignFromAnother(MR_ChangeGridAction *_this, MR_PassBy _other_pass_by, MR_ChangeGridAction *_other);

/// Generated from a method of class `MR::ChangeGridAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeGridAction_name(const MR_ChangeGridAction *_this);

/// Generated from a method of class `MR::ChangeGridAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeGridAction_action(MR_ChangeGridAction *_this, MR_HistoryAction_Type obj);

/// Generated from a method of class `MR::ChangeGridAction` named `setObjectDirty`.
/// Parameter `obj` can not be null. It is a single object.
MRC_API void MR_ChangeGridAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectVoxels *obj);

/// Generated from a method of class `MR::ChangeGridAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeGridAction_heapBytes(const MR_ChangeGridAction *_this);

#ifdef __cplusplus
} // extern "C"
#endif
