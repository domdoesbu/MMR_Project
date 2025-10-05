// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// a point located on some mesh's face
/// Generated from class `MR::PointOnFace`.
typedef struct MR_PointOnFace MR_PointOnFace;

/// mesh's face containing the point
/// Returns a pointer to a member variable of class `MR::PointOnFace` named `face`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceId *MR_PointOnFace_Get_face(const MR_PointOnFace *_this);

/// mesh's face containing the point
/// Modifies a member variable of class `MR::PointOnFace` named `face`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointOnFace_Set_face(MR_PointOnFace *_this, MR_FaceId value);

/// mesh's face containing the point
/// Returns a mutable pointer to a member variable of class `MR::PointOnFace` named `face`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceId *MR_PointOnFace_GetMutable_face(MR_PointOnFace *_this);

/// a point of the mesh's face
/// Returns a pointer to a member variable of class `MR::PointOnFace` named `point`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_PointOnFace_Get_point(const MR_PointOnFace *_this);

/// a point of the mesh's face
/// Modifies a member variable of class `MR::PointOnFace` named `point`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointOnFace_Set_point(MR_PointOnFace *_this, MR_Vector3f value);

/// a point of the mesh's face
/// Returns a mutable pointer to a member variable of class `MR::PointOnFace` named `point`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_PointOnFace_GetMutable_point(MR_PointOnFace *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointOnFace_Destroy()` to free it when you're done using it.
MRC_API MR_PointOnFace *MR_PointOnFace_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PointOnFace_DestroyArray()`.
/// Use `MR_PointOnFace_OffsetMutablePtr()` and `MR_PointOnFace_OffsetPtr()` to access the array elements.
MRC_API MR_PointOnFace *MR_PointOnFace_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::PointOnFace` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointOnFace_Destroy()` to free it when you're done using it.
MRC_API MR_PointOnFace *MR_PointOnFace_ConstructFrom(MR_FaceId face, MR_Vector3f point);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PointOnFace *MR_PointOnFace_OffsetPtr(const MR_PointOnFace *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PointOnFace *MR_PointOnFace_OffsetMutablePtr(MR_PointOnFace *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PointOnFace`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointOnFace_Destroy()` to free it when you're done using it.
MRC_API MR_PointOnFace *MR_PointOnFace_ConstructFromAnother(const MR_PointOnFace *_other);

/// Destroys a heap-allocated instance of `MR_PointOnFace`. Does nothing if the pointer is null.
MRC_API void MR_PointOnFace_Destroy(const MR_PointOnFace *_this);

/// Destroys a heap-allocated array of `MR_PointOnFace`. Does nothing if the pointer is null.
MRC_API void MR_PointOnFace_DestroyArray(const MR_PointOnFace *_this);

/// Generated from a conversion operator of class `MR::PointOnFace` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_PointOnFace_ConvertTo_bool(const MR_PointOnFace *_this);

/// Generated from a method of class `MR::PointOnFace` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointOnFace *MR_PointOnFace_AssignFromAnother(MR_PointOnFace *_this, const MR_PointOnFace *_other);

/// check for validity, otherwise the point is not defined
/// Generated from a method of class `MR::PointOnFace` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_PointOnFace_valid(const MR_PointOnFace *_this);

#ifdef __cplusplus
} // extern "C"
#endif
