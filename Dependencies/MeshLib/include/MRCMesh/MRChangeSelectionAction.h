// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRHistoryAction.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_HistoryAction MR_HistoryAction; // Defined in `#include <MRCMesh/MRHistoryAction.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_std_shared_ptr_MR_ObjectMesh MR_std_shared_ptr_MR_ObjectMesh; // Defined in `#include <MRCMisc/std_shared_ptr_MR_ObjectMesh.h>`.
typedef struct MR_std_shared_ptr_MR_ObjectPoints MR_std_shared_ptr_MR_ObjectPoints; // Defined in `#include <MRCMisc/std_shared_ptr_MR_ObjectPoints.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// Undo action for ObjectMesh face selection
/// Generated from class `MR::ChangeMeshFaceSelectionAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeMeshFaceSelectionAction MR_ChangeMeshFaceSelectionAction;

/// Undo action for ObjectMesh edge selection
/// Generated from class `MR::ChangeMeshEdgeSelectionAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeMeshEdgeSelectionAction MR_ChangeMeshEdgeSelectionAction;

/// Undo action for ObjectMesh creases
/// Generated from class `MR::ChangeMeshCreasesAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeMeshCreasesAction MR_ChangeMeshCreasesAction;

/// Undo action for ObjectPoints point selection
/// Generated from class `MR::ChangePointPointSelectionAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangePointPointSelectionAction MR_ChangePointPointSelectionAction;

/// Generated from a constructor of class `MR::ChangeMeshFaceSelectionAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshFaceSelectionAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshFaceSelectionAction *MR_ChangeMeshFaceSelectionAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeMeshFaceSelectionAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeMeshFaceSelectionAction *MR_ChangeMeshFaceSelectionAction_OffsetPtr(const MR_ChangeMeshFaceSelectionAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeMeshFaceSelectionAction *MR_ChangeMeshFaceSelectionAction_OffsetMutablePtr(MR_ChangeMeshFaceSelectionAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeMeshFaceSelectionAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeMeshFaceSelectionAction_UpcastTo_MR_HistoryAction(const MR_ChangeMeshFaceSelectionAction *object);

/// Upcasts an instance of `MR::ChangeMeshFaceSelectionAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeMeshFaceSelectionAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeMeshFaceSelectionAction *object);

/// use this constructor to remember object's face selection before making any changes in it
/// Generated from a constructor of class `MR::ChangeMeshFaceSelectionAction`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `objMesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshFaceSelectionAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshFaceSelectionAction *MR_ChangeMeshFaceSelectionAction_Construct_2(const MR_std_string *name, const MR_std_shared_ptr_MR_ObjectMesh *objMesh);

/// use this constructor to remember object's face selection and immediate set new value
/// Generated from a constructor of class `MR::ChangeMeshFaceSelectionAction`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `objMesh` can not be null. It is a single object.
/// Parameter `newSelection` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshFaceSelectionAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshFaceSelectionAction *MR_ChangeMeshFaceSelectionAction_Construct_3(const MR_std_string *name, const MR_std_shared_ptr_MR_ObjectMesh *objMesh, MR_FaceBitSet *newSelection);

/// Destroys a heap-allocated instance of `MR_ChangeMeshFaceSelectionAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeMeshFaceSelectionAction_Destroy(const MR_ChangeMeshFaceSelectionAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeMeshFaceSelectionAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeMeshFaceSelectionAction_DestroyArray(const MR_ChangeMeshFaceSelectionAction *_this);

/// Generated from a method of class `MR::ChangeMeshFaceSelectionAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeMeshFaceSelectionAction *MR_ChangeMeshFaceSelectionAction_AssignFromAnother(MR_ChangeMeshFaceSelectionAction *_this, MR_PassBy _other_pass_by, MR_ChangeMeshFaceSelectionAction *_other);

/// Generated from a method of class `MR::ChangeMeshFaceSelectionAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeMeshFaceSelectionAction_name(const MR_ChangeMeshFaceSelectionAction *_this);

/// Generated from a method of class `MR::ChangeMeshFaceSelectionAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeMeshFaceSelectionAction_action(MR_ChangeMeshFaceSelectionAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeMeshFaceSelectionAction` named `selection`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet *MR_ChangeMeshFaceSelectionAction_selection(const MR_ChangeMeshFaceSelectionAction *_this);

/// empty because set dirty is inside selectFaces
/// Generated from a method of class `MR::ChangeMeshFaceSelectionAction` named `setObjectDirty`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API void MR_ChangeMeshFaceSelectionAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectMesh *_1);

/// Generated from a method of class `MR::ChangeMeshFaceSelectionAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeMeshFaceSelectionAction_heapBytes(const MR_ChangeMeshFaceSelectionAction *_this);

/// Generated from a constructor of class `MR::ChangeMeshEdgeSelectionAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshEdgeSelectionAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshEdgeSelectionAction *MR_ChangeMeshEdgeSelectionAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeMeshEdgeSelectionAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeMeshEdgeSelectionAction *MR_ChangeMeshEdgeSelectionAction_OffsetPtr(const MR_ChangeMeshEdgeSelectionAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeMeshEdgeSelectionAction *MR_ChangeMeshEdgeSelectionAction_OffsetMutablePtr(MR_ChangeMeshEdgeSelectionAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeMeshEdgeSelectionAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeMeshEdgeSelectionAction_UpcastTo_MR_HistoryAction(const MR_ChangeMeshEdgeSelectionAction *object);

/// Upcasts an instance of `MR::ChangeMeshEdgeSelectionAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeMeshEdgeSelectionAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeMeshEdgeSelectionAction *object);

/// use this constructor to remember object's edge selection before making any changes in it
/// Generated from a constructor of class `MR::ChangeMeshEdgeSelectionAction`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `objMesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshEdgeSelectionAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshEdgeSelectionAction *MR_ChangeMeshEdgeSelectionAction_Construct_2(const MR_std_string *name, const MR_std_shared_ptr_MR_ObjectMesh *objMesh);

/// use this constructor to remember object's edge selection and immediate set new selection
/// Generated from a constructor of class `MR::ChangeMeshEdgeSelectionAction`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `objMesh` can not be null. It is a single object.
/// Parameter `newSelection` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshEdgeSelectionAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshEdgeSelectionAction *MR_ChangeMeshEdgeSelectionAction_Construct_3(const MR_std_string *name, const MR_std_shared_ptr_MR_ObjectMesh *objMesh, MR_UndirectedEdgeBitSet *newSelection);

/// Destroys a heap-allocated instance of `MR_ChangeMeshEdgeSelectionAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeMeshEdgeSelectionAction_Destroy(const MR_ChangeMeshEdgeSelectionAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeMeshEdgeSelectionAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeMeshEdgeSelectionAction_DestroyArray(const MR_ChangeMeshEdgeSelectionAction *_this);

/// Generated from a method of class `MR::ChangeMeshEdgeSelectionAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeMeshEdgeSelectionAction *MR_ChangeMeshEdgeSelectionAction_AssignFromAnother(MR_ChangeMeshEdgeSelectionAction *_this, MR_PassBy _other_pass_by, MR_ChangeMeshEdgeSelectionAction *_other);

/// Generated from a method of class `MR::ChangeMeshEdgeSelectionAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeMeshEdgeSelectionAction_name(const MR_ChangeMeshEdgeSelectionAction *_this);

/// Generated from a method of class `MR::ChangeMeshEdgeSelectionAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeMeshEdgeSelectionAction_action(MR_ChangeMeshEdgeSelectionAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeMeshEdgeSelectionAction` named `selection`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeBitSet *MR_ChangeMeshEdgeSelectionAction_selection(const MR_ChangeMeshEdgeSelectionAction *_this);

/// empty because set dirty is inside selectEdges
/// Generated from a method of class `MR::ChangeMeshEdgeSelectionAction` named `setObjectDirty`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API void MR_ChangeMeshEdgeSelectionAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectMesh *_1);

/// Generated from a method of class `MR::ChangeMeshEdgeSelectionAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeMeshEdgeSelectionAction_heapBytes(const MR_ChangeMeshEdgeSelectionAction *_this);

/// Generated from a constructor of class `MR::ChangeMeshCreasesAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshCreasesAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshCreasesAction *MR_ChangeMeshCreasesAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeMeshCreasesAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeMeshCreasesAction *MR_ChangeMeshCreasesAction_OffsetPtr(const MR_ChangeMeshCreasesAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeMeshCreasesAction *MR_ChangeMeshCreasesAction_OffsetMutablePtr(MR_ChangeMeshCreasesAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeMeshCreasesAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeMeshCreasesAction_UpcastTo_MR_HistoryAction(const MR_ChangeMeshCreasesAction *object);

/// Upcasts an instance of `MR::ChangeMeshCreasesAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeMeshCreasesAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeMeshCreasesAction *object);

/// use this constructor to remember object's creases before making any changes in it
/// Generated from a constructor of class `MR::ChangeMeshCreasesAction`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `objMesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshCreasesAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshCreasesAction *MR_ChangeMeshCreasesAction_Construct_2(const MR_std_string *name, const MR_std_shared_ptr_MR_ObjectMesh *objMesh);

/// use this constructor to remember object's current creases and immediate set new creases
/// Generated from a constructor of class `MR::ChangeMeshCreasesAction`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `objMesh` can not be null. It is a single object.
/// Parameter `newCreases` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshCreasesAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshCreasesAction *MR_ChangeMeshCreasesAction_Construct_3(const MR_std_string *name, const MR_std_shared_ptr_MR_ObjectMesh *objMesh, MR_UndirectedEdgeBitSet *newCreases);

/// Destroys a heap-allocated instance of `MR_ChangeMeshCreasesAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeMeshCreasesAction_Destroy(const MR_ChangeMeshCreasesAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeMeshCreasesAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeMeshCreasesAction_DestroyArray(const MR_ChangeMeshCreasesAction *_this);

/// Generated from a method of class `MR::ChangeMeshCreasesAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeMeshCreasesAction *MR_ChangeMeshCreasesAction_AssignFromAnother(MR_ChangeMeshCreasesAction *_this, MR_PassBy _other_pass_by, MR_ChangeMeshCreasesAction *_other);

/// Generated from a method of class `MR::ChangeMeshCreasesAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeMeshCreasesAction_name(const MR_ChangeMeshCreasesAction *_this);

/// Generated from a method of class `MR::ChangeMeshCreasesAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeMeshCreasesAction_action(MR_ChangeMeshCreasesAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeMeshCreasesAction` named `creases`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeBitSet *MR_ChangeMeshCreasesAction_creases(const MR_ChangeMeshCreasesAction *_this);

/// empty because set dirty is inside setCreases
/// Generated from a method of class `MR::ChangeMeshCreasesAction` named `setObjectDirty`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API void MR_ChangeMeshCreasesAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectMesh *_1);

/// Generated from a method of class `MR::ChangeMeshCreasesAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeMeshCreasesAction_heapBytes(const MR_ChangeMeshCreasesAction *_this);

/// Generated from a constructor of class `MR::ChangePointPointSelectionAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangePointPointSelectionAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangePointPointSelectionAction *MR_ChangePointPointSelectionAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangePointPointSelectionAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangePointPointSelectionAction *MR_ChangePointPointSelectionAction_OffsetPtr(const MR_ChangePointPointSelectionAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangePointPointSelectionAction *MR_ChangePointPointSelectionAction_OffsetMutablePtr(MR_ChangePointPointSelectionAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangePointPointSelectionAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangePointPointSelectionAction_UpcastTo_MR_HistoryAction(const MR_ChangePointPointSelectionAction *object);

/// Upcasts an instance of `MR::ChangePointPointSelectionAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangePointPointSelectionAction_MutableUpcastTo_MR_HistoryAction(MR_ChangePointPointSelectionAction *object);

/// use this constructor to remember object's vertex selection before making any changes in it
/// Generated from a constructor of class `MR::ChangePointPointSelectionAction`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `objPoints` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangePointPointSelectionAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangePointPointSelectionAction *MR_ChangePointPointSelectionAction_Construct(const MR_std_string *name, const MR_std_shared_ptr_MR_ObjectPoints *objPoints);

/// Destroys a heap-allocated instance of `MR_ChangePointPointSelectionAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangePointPointSelectionAction_Destroy(const MR_ChangePointPointSelectionAction *_this);

/// Destroys a heap-allocated array of `MR_ChangePointPointSelectionAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangePointPointSelectionAction_DestroyArray(const MR_ChangePointPointSelectionAction *_this);

/// Generated from a method of class `MR::ChangePointPointSelectionAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangePointPointSelectionAction *MR_ChangePointPointSelectionAction_AssignFromAnother(MR_ChangePointPointSelectionAction *_this, MR_PassBy _other_pass_by, MR_ChangePointPointSelectionAction *_other);

/// Generated from a method of class `MR::ChangePointPointSelectionAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangePointPointSelectionAction_name(const MR_ChangePointPointSelectionAction *_this);

/// Generated from a method of class `MR::ChangePointPointSelectionAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangePointPointSelectionAction_action(MR_ChangePointPointSelectionAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangePointPointSelectionAction` named `selection`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *MR_ChangePointPointSelectionAction_selection(const MR_ChangePointPointSelectionAction *_this);

/// empty because set dirty is inside selectPoints
/// Generated from a method of class `MR::ChangePointPointSelectionAction` named `setObjectDirty`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API void MR_ChangePointPointSelectionAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectPoints *_1);

/// Generated from a method of class `MR::ChangePointPointSelectionAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangePointPointSelectionAction_heapBytes(const MR_ChangePointPointSelectionAction *_this);

#ifdef __cplusplus
} // extern "C"
#endif
