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
typedef struct MR_VoxelBitSet MR_VoxelBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_std_shared_ptr_MR_ObjectVoxels MR_std_shared_ptr_MR_ObjectVoxels; // Defined in `#include <MRCMisc/std_shared_ptr_MR_ObjectVoxels.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// Undo action for ObjectVoxels face selection
/// Generated from class `MR::ChangVoxelSelectionAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangVoxelSelectionAction MR_ChangVoxelSelectionAction;

/// Generated from a constructor of class `MR::ChangVoxelSelectionAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangVoxelSelectionAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangVoxelSelectionAction *MR_ChangVoxelSelectionAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangVoxelSelectionAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangVoxelSelectionAction *MR_ChangVoxelSelectionAction_OffsetPtr(const MR_ChangVoxelSelectionAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangVoxelSelectionAction *MR_ChangVoxelSelectionAction_OffsetMutablePtr(MR_ChangVoxelSelectionAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangVoxelSelectionAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangVoxelSelectionAction_UpcastTo_MR_HistoryAction(const MR_ChangVoxelSelectionAction *object);

/// Upcasts an instance of `MR::ChangVoxelSelectionAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangVoxelSelectionAction_MutableUpcastTo_MR_HistoryAction(MR_ChangVoxelSelectionAction *object);

/// use this constructor to remember object's face selection before making any changes in it
/// Generated from a constructor of class `MR::ChangVoxelSelectionAction`.
/// Parameter `name` can not be null. It is a single object.
/// Parameter `objVoxels` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangVoxelSelectionAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangVoxelSelectionAction *MR_ChangVoxelSelectionAction_Construct(const MR_std_string *name, const MR_std_shared_ptr_MR_ObjectVoxels *objVoxels);

/// Destroys a heap-allocated instance of `MR_ChangVoxelSelectionAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangVoxelSelectionAction_Destroy(const MR_ChangVoxelSelectionAction *_this);

/// Destroys a heap-allocated array of `MR_ChangVoxelSelectionAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangVoxelSelectionAction_DestroyArray(const MR_ChangVoxelSelectionAction *_this);

/// Generated from a method of class `MR::ChangVoxelSelectionAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangVoxelSelectionAction *MR_ChangVoxelSelectionAction_AssignFromAnother(MR_ChangVoxelSelectionAction *_this, MR_PassBy _other_pass_by, MR_ChangVoxelSelectionAction *_other);

/// Generated from a method of class `MR::ChangVoxelSelectionAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangVoxelSelectionAction_name(const MR_ChangVoxelSelectionAction *_this);

/// Generated from a method of class `MR::ChangVoxelSelectionAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangVoxelSelectionAction_action(MR_ChangVoxelSelectionAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangVoxelSelectionAction` named `selection`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VoxelBitSet *MR_ChangVoxelSelectionAction_selection(const MR_ChangVoxelSelectionAction *_this);

/// empty because set dirty is inside selectFaces
/// Generated from a method of class `MR::ChangVoxelSelectionAction` named `setObjectDirty`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API void MR_ChangVoxelSelectionAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectVoxels *_1);

/// Generated from a method of class `MR::ChangVoxelSelectionAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangVoxelSelectionAction_heapBytes(const MR_ChangVoxelSelectionAction *_this);

#ifdef __cplusplus
} // extern "C"
#endif
