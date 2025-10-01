// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_PointOnFace MR_PointOnFace; // Defined in `#include <MRCMesh/MRPointOnFace.h>`.
typedef struct MR_VisualObject MR_VisualObject; // Defined in `#include <MRCMesh/MRVisualObject.h>`.
typedef struct MR_std_optional_MR_Vector3f MR_std_optional_MR_Vector3f; // Defined in `#include <MRCMisc/std_optional_MR_Vector3f.h>`.
typedef struct MR_std_variant_std_monostate_MR_MeshTriPoint_MR_EdgePoint_MR_VertId MR_std_variant_std_monostate_MR_MeshTriPoint_MR_EdgePoint_MR_VertId; // Defined in `#include <MRCMisc/std_variant_std_monostate_MR_MeshTriPoint_MR_EdgePoint_MR_VertId.h>`.


// point located on either
// 1. face of ObjectMesh
// 2. line of ObjectLines
// 3. point of ObjectPoints
/// Generated from class `MR::PointOnObject`.
typedef struct MR_PointOnObject MR_PointOnObject;

/// 3D location on the object in local coordinates
/// Returns a pointer to a member variable of class `MR::PointOnObject` named `point`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_PointOnObject_Get_point(const MR_PointOnObject *_this);

/// 3D location on the object in local coordinates
/// Modifies a member variable of class `MR::PointOnObject` named `point`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointOnObject_Set_point(MR_PointOnObject *_this, MR_Vector3f value);

/// 3D location on the object in local coordinates
/// Returns a mutable pointer to a member variable of class `MR::PointOnObject` named `point`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_PointOnObject_GetMutable_point(MR_PointOnObject *_this);

/// z buffer value
/// Returns a pointer to a member variable of class `MR::PointOnObject` named `zBuffer`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_PointOnObject_Get_zBuffer(const MR_PointOnObject *_this);

/// z buffer value
/// Modifies a member variable of class `MR::PointOnObject` named `zBuffer`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointOnObject_Set_zBuffer(MR_PointOnObject *_this, float value);

/// z buffer value
/// Returns a mutable pointer to a member variable of class `MR::PointOnObject` named `zBuffer`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_PointOnObject_GetMutable_zBuffer(MR_PointOnObject *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointOnObject_Destroy()` to free it when you're done using it.
MRC_API MR_PointOnObject *MR_PointOnObject_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PointOnObject_DestroyArray()`.
/// Use `MR_PointOnObject_OffsetMutablePtr()` and `MR_PointOnObject_OffsetPtr()` to access the array elements.
MRC_API MR_PointOnObject *MR_PointOnObject_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PointOnObject *MR_PointOnObject_OffsetPtr(const MR_PointOnObject *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PointOnObject *MR_PointOnObject_OffsetMutablePtr(MR_PointOnObject *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PointOnObject`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointOnObject_Destroy()` to free it when you're done using it.
MRC_API MR_PointOnObject *MR_PointOnObject_ConstructFromAnother(const MR_PointOnObject *_other);

/// Destroys a heap-allocated instance of `MR_PointOnObject`. Does nothing if the pointer is null.
MRC_API void MR_PointOnObject_Destroy(const MR_PointOnObject *_this);

/// Destroys a heap-allocated array of `MR_PointOnObject`. Does nothing if the pointer is null.
MRC_API void MR_PointOnObject_DestroyArray(const MR_PointOnObject *_this);

/// Generated from a conversion operator of class `MR::PointOnObject` to type `MR::PointOnFace`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointOnFace_Destroy()` to free it when you're done using it.
MRC_API MR_PointOnFace *MR_PointOnObject_ConvertTo_MR_PointOnFace(const MR_PointOnObject *_this);

/// Generated from a method of class `MR::PointOnObject` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointOnObject *MR_PointOnObject_AssignFromAnother(MR_PointOnObject *_this, const MR_PointOnObject *_other);

/// Converts PointOnObject coordinates depending on the object type to the PickedPoint variant
/// Generated from function `MR::pointOnObjectToPickedPoint`.
/// Parameter `pos` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_std_monostate_MR_MeshTriPoint_MR_EdgePoint_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_std_monostate_MR_MeshTriPoint_MR_EdgePoint_MR_VertId *MR_pointOnObjectToPickedPoint(const MR_VisualObject *object, const MR_PointOnObject *pos);

/// Converts given point into local coordinates of its object,
/// returns std::nullopt if object or point is invalid, or if it does not present in the object's topology
/// Generated from function `MR::getPickedPointPosition`.
/// Parameter `object` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_Vector3f *MR_getPickedPointPosition(const MR_VisualObject *object, const MR_std_variant_std_monostate_MR_MeshTriPoint_MR_EdgePoint_MR_VertId *point);

/// Returns object normal in local coordinates at given point,
/// returns std::nullopt if object or point is invalid, or if it is ObjectLines or ObjectPoints without normals
/// Generated from function `MR::getPickedPointNormal`.
/// Parameter `object` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_Vector3f *MR_getPickedPointNormal(const MR_VisualObject *object, const MR_std_variant_std_monostate_MR_MeshTriPoint_MR_EdgePoint_MR_VertId *point);

#ifdef __cplusplus
} // extern "C"
#endif
