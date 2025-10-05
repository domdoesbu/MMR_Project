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


/// Undo action for changing normals in PointCloud
/// Generated from class `MR::ChangePointCloudNormalsAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangePointCloudNormalsAction MR_ChangePointCloudNormalsAction;

/// Undo action that modifies one point's normal inside ObjectPoints
/// Generated from class `MR::ChangeOneNormalInCloudAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeOneNormalInCloudAction MR_ChangeOneNormalInCloudAction;

/// Generated from a constructor of class `MR::ChangePointCloudNormalsAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangePointCloudNormalsAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangePointCloudNormalsAction *MR_ChangePointCloudNormalsAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangePointCloudNormalsAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangePointCloudNormalsAction *MR_ChangePointCloudNormalsAction_OffsetPtr(const MR_ChangePointCloudNormalsAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangePointCloudNormalsAction *MR_ChangePointCloudNormalsAction_OffsetMutablePtr(MR_ChangePointCloudNormalsAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangePointCloudNormalsAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangePointCloudNormalsAction_UpcastTo_MR_HistoryAction(const MR_ChangePointCloudNormalsAction *object);

/// Upcasts an instance of `MR::ChangePointCloudNormalsAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangePointCloudNormalsAction_MutableUpcastTo_MR_HistoryAction(MR_ChangePointCloudNormalsAction *object);

/// use this constructor to remember point cloud's normals before making any changes in them
/// Generated from a constructor of class `MR::ChangePointCloudNormalsAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangePointCloudNormalsAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangePointCloudNormalsAction *MR_ChangePointCloudNormalsAction_Construct_2(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectPoints *obj);

/// use this constructor to remember point cloud's normals and immediate set new value
/// Generated from a constructor of class `MR::ChangePointCloudNormalsAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Parameter `newNormals` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangePointCloudNormalsAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangePointCloudNormalsAction *MR_ChangePointCloudNormalsAction_Construct_3(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectPoints *obj, MR_VertCoords *newNormals);

/// Destroys a heap-allocated instance of `MR_ChangePointCloudNormalsAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangePointCloudNormalsAction_Destroy(const MR_ChangePointCloudNormalsAction *_this);

/// Destroys a heap-allocated array of `MR_ChangePointCloudNormalsAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangePointCloudNormalsAction_DestroyArray(const MR_ChangePointCloudNormalsAction *_this);

/// Generated from a method of class `MR::ChangePointCloudNormalsAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangePointCloudNormalsAction *MR_ChangePointCloudNormalsAction_AssignFromAnother(MR_ChangePointCloudNormalsAction *_this, MR_PassBy _other_pass_by, MR_ChangePointCloudNormalsAction *_other);

/// Generated from a method of class `MR::ChangePointCloudNormalsAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangePointCloudNormalsAction_name(const MR_ChangePointCloudNormalsAction *_this);

/// Generated from a method of class `MR::ChangePointCloudNormalsAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangePointCloudNormalsAction_action(MR_ChangePointCloudNormalsAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangePointCloudNormalsAction` named `setObjectDirty`.
/// Parameter `obj` can not be null. It is a single object.
MRC_API void MR_ChangePointCloudNormalsAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectPoints *obj);

/// Generated from a method of class `MR::ChangePointCloudNormalsAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangePointCloudNormalsAction_heapBytes(const MR_ChangePointCloudNormalsAction *_this);

/// Generated from a constructor of class `MR::ChangeOneNormalInCloudAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeOneNormalInCloudAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeOneNormalInCloudAction *MR_ChangeOneNormalInCloudAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeOneNormalInCloudAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeOneNormalInCloudAction *MR_ChangeOneNormalInCloudAction_OffsetPtr(const MR_ChangeOneNormalInCloudAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeOneNormalInCloudAction *MR_ChangeOneNormalInCloudAction_OffsetMutablePtr(MR_ChangeOneNormalInCloudAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeOneNormalInCloudAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeOneNormalInCloudAction_UpcastTo_MR_HistoryAction(const MR_ChangeOneNormalInCloudAction *object);

/// Upcasts an instance of `MR::ChangeOneNormalInCloudAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeOneNormalInCloudAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeOneNormalInCloudAction *object);

/// use this constructor to remember point's normal before making any changes in it
/// Generated from a constructor of class `MR::ChangeOneNormalInCloudAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeOneNormalInCloudAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeOneNormalInCloudAction *MR_ChangeOneNormalInCloudAction_Construct_3(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectPoints *obj, MR_VertId pointId);

/// use this constructor to remember point's normal and immediate set new normal
/// Generated from a constructor of class `MR::ChangeOneNormalInCloudAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Parameter `newNormal` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeOneNormalInCloudAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeOneNormalInCloudAction *MR_ChangeOneNormalInCloudAction_Construct_4(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectPoints *obj, MR_VertId pointId, const MR_Vector3f *newNormal);

/// Destroys a heap-allocated instance of `MR_ChangeOneNormalInCloudAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeOneNormalInCloudAction_Destroy(const MR_ChangeOneNormalInCloudAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeOneNormalInCloudAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeOneNormalInCloudAction_DestroyArray(const MR_ChangeOneNormalInCloudAction *_this);

/// Generated from a method of class `MR::ChangeOneNormalInCloudAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeOneNormalInCloudAction *MR_ChangeOneNormalInCloudAction_AssignFromAnother(MR_ChangeOneNormalInCloudAction *_this, MR_PassBy _other_pass_by, MR_ChangeOneNormalInCloudAction *_other);

/// Generated from a method of class `MR::ChangeOneNormalInCloudAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeOneNormalInCloudAction_name(const MR_ChangeOneNormalInCloudAction *_this);

/// Generated from a method of class `MR::ChangeOneNormalInCloudAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeOneNormalInCloudAction_action(MR_ChangeOneNormalInCloudAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeOneNormalInCloudAction` named `setObjectDirty`.
/// Parameter `obj` can not be null. It is a single object.
MRC_API void MR_ChangeOneNormalInCloudAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectPoints *obj);

/// Generated from a method of class `MR::ChangeOneNormalInCloudAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeOneNormalInCloudAction_heapBytes(const MR_ChangeOneNormalInCloudAction *_this);

#ifdef __cplusplus
} // extern "C"
#endif
