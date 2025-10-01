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

typedef struct MR_FaceColors MR_FaceColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_HistoryAction MR_HistoryAction; // Defined in `#include <MRCMesh/MRHistoryAction.h>`.
typedef struct MR_UndirectedEdgeColors MR_UndirectedEdgeColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_shared_ptr_MR_ObjectLinesHolder MR_std_shared_ptr_MR_ObjectLinesHolder; // Defined in `#include <MRCMisc/std_shared_ptr_MR_ObjectLinesHolder.h>`.
typedef struct MR_std_shared_ptr_MR_ObjectMeshHolder MR_std_shared_ptr_MR_ObjectMeshHolder; // Defined in `#include <MRCMisc/std_shared_ptr_MR_ObjectMeshHolder.h>`.
typedef struct MR_std_shared_ptr_MR_VisualObject MR_std_shared_ptr_MR_VisualObject; // Defined in `#include <MRCMisc/std_shared_ptr_MR_VisualObject.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// History action for object color palette change
/// To use with setFrontColorsForAllViewports, setBackColorsForAllViewports, setFrontColor, setBackColor
/// Generated from class `MR::ChangeObjectColorAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeObjectColorAction MR_ChangeObjectColorAction;

typedef int32_t MR_ChangeObjectColorAction_Type;
enum // MR_ChangeObjectColorAction_Type
{
    MR_ChangeObjectColorAction_Type_Unselected = 0,
    MR_ChangeObjectColorAction_Type_Selected = 1,
    MR_ChangeObjectColorAction_Type_Back = 2,
};

/// History action for faces color map change
/// Generated from class `MR::ChangeFacesColorMapAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeFacesColorMapAction MR_ChangeFacesColorMapAction;

/// History action for lines color map change
/// Generated from class `MR::ChangeLinesColorMapAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeLinesColorMapAction MR_ChangeLinesColorMapAction;

/// Generated from a constructor of class `MR::ChangeObjectColorAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeObjectColorAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeObjectColorAction *MR_ChangeObjectColorAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeObjectColorAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeObjectColorAction *MR_ChangeObjectColorAction_OffsetPtr(const MR_ChangeObjectColorAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeObjectColorAction *MR_ChangeObjectColorAction_OffsetMutablePtr(MR_ChangeObjectColorAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeObjectColorAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeObjectColorAction_UpcastTo_MR_HistoryAction(const MR_ChangeObjectColorAction *object);

/// Upcasts an instance of `MR::ChangeObjectColorAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeObjectColorAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeObjectColorAction *object);

/// Constructed from original obj
/// Generated from a constructor of class `MR::ChangeObjectColorAction`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeObjectColorAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeObjectColorAction *MR_ChangeObjectColorAction_Construct(const MR_std_string *name, const MR_std_shared_ptr_MR_VisualObject *obj, MR_ChangeObjectColorAction_Type type);

/// Destroys a heap-allocated instance of `MR_ChangeObjectColorAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeObjectColorAction_Destroy(const MR_ChangeObjectColorAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeObjectColorAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeObjectColorAction_DestroyArray(const MR_ChangeObjectColorAction *_this);

/// Generated from a method of class `MR::ChangeObjectColorAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeObjectColorAction *MR_ChangeObjectColorAction_AssignFromAnother(MR_ChangeObjectColorAction *_this, MR_PassBy _other_pass_by, MR_ChangeObjectColorAction *_other);

/// Generated from a method of class `MR::ChangeObjectColorAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeObjectColorAction_name(const MR_ChangeObjectColorAction *_this);

/// Generated from a method of class `MR::ChangeObjectColorAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeObjectColorAction_action(MR_ChangeObjectColorAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeObjectColorAction` named `setObjectDirty`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API void MR_ChangeObjectColorAction_setObjectDirty(const MR_std_shared_ptr_MR_VisualObject *_1);

/// Generated from a method of class `MR::ChangeObjectColorAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeObjectColorAction_heapBytes(const MR_ChangeObjectColorAction *_this);

/// Generated from a constructor of class `MR::ChangeFacesColorMapAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeFacesColorMapAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeFacesColorMapAction *MR_ChangeFacesColorMapAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeFacesColorMapAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeFacesColorMapAction *MR_ChangeFacesColorMapAction_OffsetPtr(const MR_ChangeFacesColorMapAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeFacesColorMapAction *MR_ChangeFacesColorMapAction_OffsetMutablePtr(MR_ChangeFacesColorMapAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeFacesColorMapAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeFacesColorMapAction_UpcastTo_MR_HistoryAction(const MR_ChangeFacesColorMapAction *object);

/// Upcasts an instance of `MR::ChangeFacesColorMapAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeFacesColorMapAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeFacesColorMapAction *object);

/// use this constructor to remember object's face colors before making any changes in them
/// Generated from a constructor of class `MR::ChangeFacesColorMapAction`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeFacesColorMapAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeFacesColorMapAction *MR_ChangeFacesColorMapAction_Construct_2(const MR_std_string *name, const MR_std_shared_ptr_MR_ObjectMeshHolder *obj);

/// use this constructor to remember object's face colors and immediate set new value
/// Generated from a constructor of class `MR::ChangeFacesColorMapAction`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `obj` can not be null. It is a single object.
/// Parameter `newColorMap` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeFacesColorMapAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeFacesColorMapAction *MR_ChangeFacesColorMapAction_Construct_3(const MR_std_string *name, const MR_std_shared_ptr_MR_ObjectMeshHolder *obj, MR_FaceColors *newColorMap);

/// Destroys a heap-allocated instance of `MR_ChangeFacesColorMapAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeFacesColorMapAction_Destroy(const MR_ChangeFacesColorMapAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeFacesColorMapAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeFacesColorMapAction_DestroyArray(const MR_ChangeFacesColorMapAction *_this);

/// Generated from a method of class `MR::ChangeFacesColorMapAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeFacesColorMapAction *MR_ChangeFacesColorMapAction_AssignFromAnother(MR_ChangeFacesColorMapAction *_this, MR_PassBy _other_pass_by, MR_ChangeFacesColorMapAction *_other);

/// Generated from a method of class `MR::ChangeFacesColorMapAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeFacesColorMapAction_name(const MR_ChangeFacesColorMapAction *_this);

/// Generated from a method of class `MR::ChangeFacesColorMapAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeFacesColorMapAction_action(MR_ChangeFacesColorMapAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeFacesColorMapAction` named `setObjectDirty`.
/// Parameter `obj` can not be null. It is a single object.
MRC_API void MR_ChangeFacesColorMapAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectMeshHolder *obj);

/// Generated from a method of class `MR::ChangeFacesColorMapAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeFacesColorMapAction_heapBytes(const MR_ChangeFacesColorMapAction *_this);

/// Generated from a constructor of class `MR::ChangeLinesColorMapAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeLinesColorMapAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeLinesColorMapAction *MR_ChangeLinesColorMapAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeLinesColorMapAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeLinesColorMapAction *MR_ChangeLinesColorMapAction_OffsetPtr(const MR_ChangeLinesColorMapAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeLinesColorMapAction *MR_ChangeLinesColorMapAction_OffsetMutablePtr(MR_ChangeLinesColorMapAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeLinesColorMapAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeLinesColorMapAction_UpcastTo_MR_HistoryAction(const MR_ChangeLinesColorMapAction *object);

/// Upcasts an instance of `MR::ChangeLinesColorMapAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeLinesColorMapAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeLinesColorMapAction *object);

/// use this constructor to remember object's line colors before making any changes in them
/// Generated from a constructor of class `MR::ChangeLinesColorMapAction`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeLinesColorMapAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeLinesColorMapAction *MR_ChangeLinesColorMapAction_Construct_2(const MR_std_string *name, const MR_std_shared_ptr_MR_ObjectLinesHolder *obj);

/// use this constructor to remember object's lines colors and immediate set new value
/// Generated from a constructor of class `MR::ChangeLinesColorMapAction`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `obj` can not be null. It is a single object.
/// Parameter `newColorMap` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeLinesColorMapAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeLinesColorMapAction *MR_ChangeLinesColorMapAction_Construct_3(const MR_std_string *name, const MR_std_shared_ptr_MR_ObjectLinesHolder *obj, MR_UndirectedEdgeColors *newColorMap);

/// Destroys a heap-allocated instance of `MR_ChangeLinesColorMapAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeLinesColorMapAction_Destroy(const MR_ChangeLinesColorMapAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeLinesColorMapAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeLinesColorMapAction_DestroyArray(const MR_ChangeLinesColorMapAction *_this);

/// Generated from a method of class `MR::ChangeLinesColorMapAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeLinesColorMapAction *MR_ChangeLinesColorMapAction_AssignFromAnother(MR_ChangeLinesColorMapAction *_this, MR_PassBy _other_pass_by, MR_ChangeLinesColorMapAction *_other);

/// Generated from a method of class `MR::ChangeLinesColorMapAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeLinesColorMapAction_name(const MR_ChangeLinesColorMapAction *_this);

/// Generated from a method of class `MR::ChangeLinesColorMapAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeLinesColorMapAction_action(MR_ChangeLinesColorMapAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeLinesColorMapAction` named `setObjectDirty`.
/// Parameter `obj` can not be null. It is a single object.
MRC_API void MR_ChangeLinesColorMapAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectLinesHolder *obj);

/// Generated from a method of class `MR::ChangeLinesColorMapAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeLinesColorMapAction_heapBytes(const MR_ChangeLinesColorMapAction *_this);

#ifdef __cplusplus
} // extern "C"
#endif
