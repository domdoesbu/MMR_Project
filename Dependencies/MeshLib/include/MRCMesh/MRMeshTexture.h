// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRMeshFwd.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Image MR_Image; // Defined in `#include <MRCMesh/MRImage.h>`.


/// Generated from class `MR::MeshTexture`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::Image`
typedef struct MR_MeshTexture MR_MeshTexture;

/// Returns a pointer to a member variable of class `MR::MeshTexture` named `filter`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FilterType *MR_MeshTexture_Get_filter(const MR_MeshTexture *_this);

/// Modifies a member variable of class `MR::MeshTexture` named `filter`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshTexture_Set_filter(MR_MeshTexture *_this, MR_FilterType value);

/// Returns a mutable pointer to a member variable of class `MR::MeshTexture` named `filter`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FilterType *MR_MeshTexture_GetMutable_filter(MR_MeshTexture *_this);

/// Returns a pointer to a member variable of class `MR::MeshTexture` named `wrap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_WrapType *MR_MeshTexture_Get_wrap(const MR_MeshTexture *_this);

/// Modifies a member variable of class `MR::MeshTexture` named `wrap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshTexture_Set_wrap(MR_MeshTexture *_this, MR_WrapType value);

/// Returns a mutable pointer to a member variable of class `MR::MeshTexture` named `wrap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_WrapType *MR_MeshTexture_GetMutable_wrap(MR_MeshTexture *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTexture_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTexture *MR_MeshTexture_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshTexture_DestroyArray()`.
/// Use `MR_MeshTexture_OffsetMutablePtr()` and `MR_MeshTexture_OffsetPtr()` to access the array elements.
MRC_API MR_MeshTexture *MR_MeshTexture_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshTexture *MR_MeshTexture_OffsetPtr(const MR_MeshTexture *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshTexture *MR_MeshTexture_OffsetMutablePtr(MR_MeshTexture *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::MeshTexture` to its base class `MR::Image`.
/// This version is acting on mutable pointers.
MRC_API const MR_Image *MR_MeshTexture_UpcastTo_MR_Image(const MR_MeshTexture *object);

/// Upcasts an instance of `MR::MeshTexture` to its base class `MR::Image`.
MRC_API MR_Image *MR_MeshTexture_MutableUpcastTo_MR_Image(MR_MeshTexture *object);

/// Generated from a constructor of class `MR::MeshTexture`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTexture_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTexture *MR_MeshTexture_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MeshTexture *_other);

/// Destroys a heap-allocated instance of `MR_MeshTexture`. Does nothing if the pointer is null.
MRC_API void MR_MeshTexture_Destroy(const MR_MeshTexture *_this);

/// Destroys a heap-allocated array of `MR_MeshTexture`. Does nothing if the pointer is null.
MRC_API void MR_MeshTexture_DestroyArray(const MR_MeshTexture *_this);

/// Generated from a method of class `MR::MeshTexture` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshTexture *MR_MeshTexture_AssignFromAnother(MR_MeshTexture *_this, MR_PassBy _other_pass_by, MR_MeshTexture *_other);

#ifdef __cplusplus
} // extern "C"
#endif
