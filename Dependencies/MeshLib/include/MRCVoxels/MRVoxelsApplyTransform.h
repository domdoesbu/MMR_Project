// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_Box3f MR_Box3f; // Defined in `#include <MRCMesh/MRBox.h>`.
typedef struct MR_ObjectVoxels MR_ObjectVoxels; // Defined in `#include <MRCVoxels/MRObjectVoxels.h>`.
typedef struct MR_VdbVolume MR_VdbVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.


/// Generated from class `MR::TransformVdbVolumeResult`.
typedef struct MR_TransformVdbVolumeResult MR_TransformVdbVolumeResult;

/// Returns a pointer to a member variable of class `MR::TransformVdbVolumeResult` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VdbVolume *MR_TransformVdbVolumeResult_Get_volume(const MR_TransformVdbVolumeResult *_this);

/// Modifies a member variable of class `MR::TransformVdbVolumeResult` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TransformVdbVolumeResult_Set_volume(MR_TransformVdbVolumeResult *_this, MR_PassBy value_pass_by, MR_VdbVolume *value);

/// Returns a mutable pointer to a member variable of class `MR::TransformVdbVolumeResult` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VdbVolume *MR_TransformVdbVolumeResult_GetMutable_volume(MR_TransformVdbVolumeResult *_this);

/// Returns a pointer to a member variable of class `MR::TransformVdbVolumeResult` named `boxFixed`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_TransformVdbVolumeResult_Get_boxFixed(const MR_TransformVdbVolumeResult *_this);

/// Modifies a member variable of class `MR::TransformVdbVolumeResult` named `boxFixed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TransformVdbVolumeResult_Set_boxFixed(MR_TransformVdbVolumeResult *_this, bool value);

/// Returns a mutable pointer to a member variable of class `MR::TransformVdbVolumeResult` named `boxFixed`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_TransformVdbVolumeResult_GetMutable_boxFixed(MR_TransformVdbVolumeResult *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TransformVdbVolumeResult_Destroy()` to free it when you're done using it.
MRC_API MR_TransformVdbVolumeResult *MR_TransformVdbVolumeResult_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_TransformVdbVolumeResult_DestroyArray()`.
/// Use `MR_TransformVdbVolumeResult_OffsetMutablePtr()` and `MR_TransformVdbVolumeResult_OffsetPtr()` to access the array elements.
MRC_API MR_TransformVdbVolumeResult *MR_TransformVdbVolumeResult_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::TransformVdbVolumeResult` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TransformVdbVolumeResult_Destroy()` to free it when you're done using it.
MRC_API MR_TransformVdbVolumeResult *MR_TransformVdbVolumeResult_ConstructFrom(MR_PassBy volume_pass_by, MR_VdbVolume *volume, bool boxFixed);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_TransformVdbVolumeResult *MR_TransformVdbVolumeResult_OffsetPtr(const MR_TransformVdbVolumeResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_TransformVdbVolumeResult *MR_TransformVdbVolumeResult_OffsetMutablePtr(MR_TransformVdbVolumeResult *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::TransformVdbVolumeResult`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TransformVdbVolumeResult_Destroy()` to free it when you're done using it.
MRC_API MR_TransformVdbVolumeResult *MR_TransformVdbVolumeResult_ConstructFromAnother(MR_PassBy _other_pass_by, MR_TransformVdbVolumeResult *_other);

/// Destroys a heap-allocated instance of `MR_TransformVdbVolumeResult`. Does nothing if the pointer is null.
MRC_API void MR_TransformVdbVolumeResult_Destroy(const MR_TransformVdbVolumeResult *_this);

/// Destroys a heap-allocated array of `MR_TransformVdbVolumeResult`. Does nothing if the pointer is null.
MRC_API void MR_TransformVdbVolumeResult_DestroyArray(const MR_TransformVdbVolumeResult *_this);

/// Generated from a method of class `MR::TransformVdbVolumeResult` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TransformVdbVolumeResult *MR_TransformVdbVolumeResult_AssignFromAnother(MR_TransformVdbVolumeResult *_this, MR_PassBy _other_pass_by, MR_TransformVdbVolumeResult *_other);

/// Transform volume
/// @param volume Volume to transform
/// @param xf The transformation
/// @param fixBox If true, and if \p box is valid and represents the bounding box of the \p volume, then
///               the result will be shifted so that no data has negative coordinate by any of dimensions
/// Generated from function `MR::transformVdbVolume`.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `xf` can not be null. It is a single object.
/// Parameter `fixBox` has a default argument: `false`, pass a null pointer to use it.
/// Parameter `box` is a single object.
/// Parameter `box` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TransformVdbVolumeResult_Destroy()` to free it when you're done using it.
MRC_API MR_TransformVdbVolumeResult *MR_transformVdbVolume(const MR_VdbVolume *volume, const MR_AffineXf3f *xf, const bool *fixBox, const MR_Box3f *box);

/// Same as above but for the SceneObject
/// @return true, if \p fixBox is true and the box was "fixed" (see parameter `fixBox` of \ref transformVdbVolume)
/// Generated from function `MR::voxelsApplyTransform`.
/// Parameter `obj` can not be null. It is a single object.
/// Parameter `xf` can not be null. It is a single object.
MRC_API bool MR_voxelsApplyTransform(MR_ObjectVoxels *obj, const MR_AffineXf3f *xf, bool fixBox);

#ifdef __cplusplus
} // extern "C"
#endif
