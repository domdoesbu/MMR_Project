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
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_shared_ptr_MR_Mesh MR_std_shared_ptr_MR_Mesh; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Mesh.h>`.
typedef struct MR_std_shared_ptr_MR_ObjectMesh MR_std_shared_ptr_MR_ObjectMesh; // Defined in `#include <MRCMisc/std_shared_ptr_MR_ObjectMesh.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// argument of this type indicates that the object is already in new state, and the following argument is old state
/// Generated from class `MR::CmpOld`.
typedef struct MR_CmpOld MR_CmpOld;

/// argument of this type indicates that the object is in old state, and the following argument is new state to be set
/// Generated from class `MR::SetNew`.
typedef struct MR_SetNew MR_SetNew;

/// Undo action for efficiently storage of partial change in mesh (e.g. a modification of small region)
/// Generated from class `MR::PartialChangeMeshAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_PartialChangeMeshAction MR_PartialChangeMeshAction;

/// Undo action for efficiently storage of partial change in mesh points (e.g. a modification of small region)
/// Generated from class `MR::PartialChangeMeshPointsAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_PartialChangeMeshPointsAction MR_PartialChangeMeshPointsAction;

/// Undo action for efficiently storage of partial change in mesh topology (e.g. a modification of small region)
/// Generated from class `MR::PartialChangeMeshTopologyAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_PartialChangeMeshTopologyAction MR_PartialChangeMeshTopologyAction;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CmpOld_Destroy()` to free it when you're done using it.
MRC_API MR_CmpOld *MR_CmpOld_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CmpOld_DestroyArray()`.
/// Use `MR_CmpOld_OffsetMutablePtr()` and `MR_CmpOld_OffsetPtr()` to access the array elements.
MRC_API MR_CmpOld *MR_CmpOld_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_CmpOld *MR_CmpOld_OffsetPtr(const MR_CmpOld *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_CmpOld *MR_CmpOld_OffsetMutablePtr(MR_CmpOld *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::CmpOld`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CmpOld_Destroy()` to free it when you're done using it.
MRC_API MR_CmpOld *MR_CmpOld_ConstructFromAnother(const MR_CmpOld *_other);

/// Destroys a heap-allocated instance of `MR_CmpOld`. Does nothing if the pointer is null.
MRC_API void MR_CmpOld_Destroy(const MR_CmpOld *_this);

/// Destroys a heap-allocated array of `MR_CmpOld`. Does nothing if the pointer is null.
MRC_API void MR_CmpOld_DestroyArray(const MR_CmpOld *_this);

/// Generated from a method of class `MR::CmpOld` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_CmpOld *MR_CmpOld_AssignFromAnother(MR_CmpOld *_this, const MR_CmpOld *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SetNew_Destroy()` to free it when you're done using it.
MRC_API MR_SetNew *MR_SetNew_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SetNew_DestroyArray()`.
/// Use `MR_SetNew_OffsetMutablePtr()` and `MR_SetNew_OffsetPtr()` to access the array elements.
MRC_API MR_SetNew *MR_SetNew_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SetNew *MR_SetNew_OffsetPtr(const MR_SetNew *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SetNew *MR_SetNew_OffsetMutablePtr(MR_SetNew *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SetNew`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SetNew_Destroy()` to free it when you're done using it.
MRC_API MR_SetNew *MR_SetNew_ConstructFromAnother(const MR_SetNew *_other);

/// Destroys a heap-allocated instance of `MR_SetNew`. Does nothing if the pointer is null.
MRC_API void MR_SetNew_Destroy(const MR_SetNew *_this);

/// Destroys a heap-allocated array of `MR_SetNew`. Does nothing if the pointer is null.
MRC_API void MR_SetNew_DestroyArray(const MR_SetNew *_this);

/// Generated from a method of class `MR::SetNew` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SetNew *MR_SetNew_AssignFromAnother(MR_SetNew *_this, const MR_SetNew *_other);

/// Generated from a constructor of class `MR::PartialChangeMeshAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PartialChangeMeshAction_Destroy()` to free it when you're done using it.
MRC_API MR_PartialChangeMeshAction *MR_PartialChangeMeshAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PartialChangeMeshAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PartialChangeMeshAction *MR_PartialChangeMeshAction_OffsetPtr(const MR_PartialChangeMeshAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PartialChangeMeshAction *MR_PartialChangeMeshAction_OffsetMutablePtr(MR_PartialChangeMeshAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::PartialChangeMeshAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_PartialChangeMeshAction_UpcastTo_MR_HistoryAction(const MR_PartialChangeMeshAction *object);

/// Upcasts an instance of `MR::PartialChangeMeshAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_PartialChangeMeshAction_MutableUpcastTo_MR_HistoryAction(MR_PartialChangeMeshAction *object);

/// use this constructor after the object already contains new mesh,
/// and old mesh is passed to remember the difference for future undoing
/// Generated from a constructor of class `MR::PartialChangeMeshAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `_3` can not be null. It is a single object.
/// Parameter `oldMesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PartialChangeMeshAction_Destroy()` to free it when you're done using it.
MRC_API MR_PartialChangeMeshAction *MR_PartialChangeMeshAction_Construct_MR_CmpOld(const char *name, const char *name_end, MR_PassBy obj_pass_by, MR_std_shared_ptr_MR_ObjectMesh *obj, const MR_CmpOld *_3, const MR_Mesh *oldMesh);

/// use this constructor to set new object's mesh and remember its difference from existed mesh for future undoing
/// Generated from a constructor of class `MR::PartialChangeMeshAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `_3` can not be null. It is a single object.
/// Parameter `newMesh` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PartialChangeMeshAction_Destroy()` to free it when you're done using it.
MRC_API MR_PartialChangeMeshAction *MR_PartialChangeMeshAction_Construct_MR_SetNew(const char *name, const char *name_end, MR_PassBy obj_pass_by, MR_std_shared_ptr_MR_ObjectMesh *obj, const MR_SetNew *_3, MR_std_shared_ptr_MR_Mesh *newMesh);

/// Destroys a heap-allocated instance of `MR_PartialChangeMeshAction`. Does nothing if the pointer is null.
MRC_API void MR_PartialChangeMeshAction_Destroy(const MR_PartialChangeMeshAction *_this);

/// Destroys a heap-allocated array of `MR_PartialChangeMeshAction`. Does nothing if the pointer is null.
MRC_API void MR_PartialChangeMeshAction_DestroyArray(const MR_PartialChangeMeshAction *_this);

/// Generated from a method of class `MR::PartialChangeMeshAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PartialChangeMeshAction *MR_PartialChangeMeshAction_AssignFromAnother(MR_PartialChangeMeshAction *_this, MR_PassBy _other_pass_by, MR_PartialChangeMeshAction *_other);

/// Generated from a method of class `MR::PartialChangeMeshAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_PartialChangeMeshAction_name(const MR_PartialChangeMeshAction *_this);

/// Generated from a method of class `MR::PartialChangeMeshAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PartialChangeMeshAction_action(MR_PartialChangeMeshAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::PartialChangeMeshAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_PartialChangeMeshAction_heapBytes(const MR_PartialChangeMeshAction *_this);

/// Generated from a constructor of class `MR::PartialChangeMeshPointsAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PartialChangeMeshPointsAction_Destroy()` to free it when you're done using it.
MRC_API MR_PartialChangeMeshPointsAction *MR_PartialChangeMeshPointsAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PartialChangeMeshPointsAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PartialChangeMeshPointsAction *MR_PartialChangeMeshPointsAction_OffsetPtr(const MR_PartialChangeMeshPointsAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PartialChangeMeshPointsAction *MR_PartialChangeMeshPointsAction_OffsetMutablePtr(MR_PartialChangeMeshPointsAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::PartialChangeMeshPointsAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_PartialChangeMeshPointsAction_UpcastTo_MR_HistoryAction(const MR_PartialChangeMeshPointsAction *object);

/// Upcasts an instance of `MR::PartialChangeMeshPointsAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_PartialChangeMeshPointsAction_MutableUpcastTo_MR_HistoryAction(MR_PartialChangeMeshPointsAction *object);

/// use this constructor after the object already contains new points,
/// and old points are passed to remember the difference for future undoing
/// Generated from a constructor of class `MR::PartialChangeMeshPointsAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `_3` can not be null. It is a single object.
/// Parameter `oldPoints` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PartialChangeMeshPointsAction_Destroy()` to free it when you're done using it.
MRC_API MR_PartialChangeMeshPointsAction *MR_PartialChangeMeshPointsAction_Construct_MR_CmpOld(const char *name, const char *name_end, MR_PassBy obj_pass_by, MR_std_shared_ptr_MR_ObjectMesh *obj, const MR_CmpOld *_3, const MR_VertCoords *oldPoints);

/// use this constructor to set new object's points and remember its difference from existed points for future undoing
/// Generated from a constructor of class `MR::PartialChangeMeshPointsAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `_3` can not be null. It is a single object.
/// Parameter `newPoints` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PartialChangeMeshPointsAction_Destroy()` to free it when you're done using it.
MRC_API MR_PartialChangeMeshPointsAction *MR_PartialChangeMeshPointsAction_Construct_MR_SetNew(const char *name, const char *name_end, MR_PassBy obj_pass_by, MR_std_shared_ptr_MR_ObjectMesh *obj, const MR_SetNew *_3, MR_VertCoords *newPoints);

/// Destroys a heap-allocated instance of `MR_PartialChangeMeshPointsAction`. Does nothing if the pointer is null.
MRC_API void MR_PartialChangeMeshPointsAction_Destroy(const MR_PartialChangeMeshPointsAction *_this);

/// Destroys a heap-allocated array of `MR_PartialChangeMeshPointsAction`. Does nothing if the pointer is null.
MRC_API void MR_PartialChangeMeshPointsAction_DestroyArray(const MR_PartialChangeMeshPointsAction *_this);

/// Generated from a method of class `MR::PartialChangeMeshPointsAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PartialChangeMeshPointsAction *MR_PartialChangeMeshPointsAction_AssignFromAnother(MR_PartialChangeMeshPointsAction *_this, MR_PassBy _other_pass_by, MR_PartialChangeMeshPointsAction *_other);

/// Generated from a method of class `MR::PartialChangeMeshPointsAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_PartialChangeMeshPointsAction_name(const MR_PartialChangeMeshPointsAction *_this);

/// Generated from a method of class `MR::PartialChangeMeshPointsAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PartialChangeMeshPointsAction_action(MR_PartialChangeMeshPointsAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::PartialChangeMeshPointsAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_PartialChangeMeshPointsAction_heapBytes(const MR_PartialChangeMeshPointsAction *_this);

/// Generated from a constructor of class `MR::PartialChangeMeshTopologyAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PartialChangeMeshTopologyAction_Destroy()` to free it when you're done using it.
MRC_API MR_PartialChangeMeshTopologyAction *MR_PartialChangeMeshTopologyAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PartialChangeMeshTopologyAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PartialChangeMeshTopologyAction *MR_PartialChangeMeshTopologyAction_OffsetPtr(const MR_PartialChangeMeshTopologyAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PartialChangeMeshTopologyAction *MR_PartialChangeMeshTopologyAction_OffsetMutablePtr(MR_PartialChangeMeshTopologyAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::PartialChangeMeshTopologyAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_PartialChangeMeshTopologyAction_UpcastTo_MR_HistoryAction(const MR_PartialChangeMeshTopologyAction *object);

/// Upcasts an instance of `MR::PartialChangeMeshTopologyAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_PartialChangeMeshTopologyAction_MutableUpcastTo_MR_HistoryAction(MR_PartialChangeMeshTopologyAction *object);

/// use this constructor after the object already contains new topology,
/// and old topology is passed to remember the difference for future undoing
/// Generated from a constructor of class `MR::PartialChangeMeshTopologyAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `_3` can not be null. It is a single object.
/// Parameter `oldTopology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PartialChangeMeshTopologyAction_Destroy()` to free it when you're done using it.
MRC_API MR_PartialChangeMeshTopologyAction *MR_PartialChangeMeshTopologyAction_Construct_MR_CmpOld(const char *name, const char *name_end, MR_PassBy obj_pass_by, MR_std_shared_ptr_MR_ObjectMesh *obj, const MR_CmpOld *_3, const MR_MeshTopology *oldTopology);

/// use this constructor to set new object's topology and remember its difference from existed topology for future undoing
/// Generated from a constructor of class `MR::PartialChangeMeshTopologyAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `_3` can not be null. It is a single object.
/// Parameter `newTopology` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PartialChangeMeshTopologyAction_Destroy()` to free it when you're done using it.
MRC_API MR_PartialChangeMeshTopologyAction *MR_PartialChangeMeshTopologyAction_Construct_MR_SetNew(const char *name, const char *name_end, MR_PassBy obj_pass_by, MR_std_shared_ptr_MR_ObjectMesh *obj, const MR_SetNew *_3, MR_MeshTopology *newTopology);

/// Destroys a heap-allocated instance of `MR_PartialChangeMeshTopologyAction`. Does nothing if the pointer is null.
MRC_API void MR_PartialChangeMeshTopologyAction_Destroy(const MR_PartialChangeMeshTopologyAction *_this);

/// Destroys a heap-allocated array of `MR_PartialChangeMeshTopologyAction`. Does nothing if the pointer is null.
MRC_API void MR_PartialChangeMeshTopologyAction_DestroyArray(const MR_PartialChangeMeshTopologyAction *_this);

/// Generated from a method of class `MR::PartialChangeMeshTopologyAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PartialChangeMeshTopologyAction *MR_PartialChangeMeshTopologyAction_AssignFromAnother(MR_PartialChangeMeshTopologyAction *_this, MR_PassBy _other_pass_by, MR_PartialChangeMeshTopologyAction *_other);

/// Generated from a method of class `MR::PartialChangeMeshTopologyAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_PartialChangeMeshTopologyAction_name(const MR_PartialChangeMeshTopologyAction *_this);

/// Generated from a method of class `MR::PartialChangeMeshTopologyAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PartialChangeMeshTopologyAction_action(MR_PartialChangeMeshTopologyAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::PartialChangeMeshTopologyAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_PartialChangeMeshTopologyAction_heapBytes(const MR_PartialChangeMeshTopologyAction *_this);

#ifdef __cplusplus
} // extern "C"
#endif
