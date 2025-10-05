// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MREnums.h>
#include <MRCMesh/MRHistoryAction.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_HistoryAction MR_HistoryAction; // Defined in `#include <MRCMesh/MRHistoryAction.h>`.
typedef struct MR_std_shared_ptr_MR_VisualObject MR_std_shared_ptr_MR_VisualObject; // Defined in `#include <MRCMisc/std_shared_ptr_MR_VisualObject.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// History action for ColoringType change
/// Generated from class `MR::ChangeColoringType`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeColoringType MR_ChangeColoringType;

/// Generated from a constructor of class `MR::ChangeColoringType`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeColoringType_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeColoringType *MR_ChangeColoringType_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeColoringType *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeColoringType *MR_ChangeColoringType_OffsetPtr(const MR_ChangeColoringType *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeColoringType *MR_ChangeColoringType_OffsetMutablePtr(MR_ChangeColoringType *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeColoringType` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeColoringType_UpcastTo_MR_HistoryAction(const MR_ChangeColoringType *object);

/// Upcasts an instance of `MR::ChangeColoringType` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeColoringType_MutableUpcastTo_MR_HistoryAction(MR_ChangeColoringType *object);

/// use this constructor to remember object's coloring type before making any changes in it
/// Generated from a constructor of class `MR::ChangeColoringType`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeColoringType_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeColoringType *MR_ChangeColoringType_Construct_2(const MR_std_string *name, const MR_std_shared_ptr_MR_VisualObject *obj);

/// use this constructor to remember object's coloring type and immediate set new value
/// Generated from a constructor of class `MR::ChangeColoringType`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeColoringType_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeColoringType *MR_ChangeColoringType_Construct_3(const MR_std_string *name, const MR_std_shared_ptr_MR_VisualObject *obj, MR_ColoringType newType);

/// Destroys a heap-allocated instance of `MR_ChangeColoringType`. Does nothing if the pointer is null.
MRC_API void MR_ChangeColoringType_Destroy(const MR_ChangeColoringType *_this);

/// Destroys a heap-allocated array of `MR_ChangeColoringType`. Does nothing if the pointer is null.
MRC_API void MR_ChangeColoringType_DestroyArray(const MR_ChangeColoringType *_this);

/// Generated from a method of class `MR::ChangeColoringType` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeColoringType *MR_ChangeColoringType_AssignFromAnother(MR_ChangeColoringType *_this, MR_PassBy _other_pass_by, MR_ChangeColoringType *_other);

/// Generated from a method of class `MR::ChangeColoringType` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeColoringType_name(const MR_ChangeColoringType *_this);

/// Generated from a method of class `MR::ChangeColoringType` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeColoringType_action(MR_ChangeColoringType *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeColoringType` named `setObjectDirty`.
/// Parameter `obj` can not be null. It is a single object.
MRC_API void MR_ChangeColoringType_setObjectDirty(const MR_std_shared_ptr_MR_VisualObject *obj);

/// Generated from a method of class `MR::ChangeColoringType` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeColoringType_heapBytes(const MR_ChangeColoringType *_this);

#ifdef __cplusplus
} // extern "C"
#endif
