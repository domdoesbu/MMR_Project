// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMesh/MRVector2.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AABBTreePolyline3 MR_AABBTreePolyline3; // Defined in `#include <MRCMesh/MRAABBTreePolyline.h>`.
typedef struct MR_AffineXf2f MR_AffineXf2f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_Line3f MR_Line3f; // Defined in `#include <MRCMesh/MRLine.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_Polyline2 MR_Polyline2; // Defined in `#include <MRCMesh/MRPolyline.h>`.
typedef struct MR_Polyline3 MR_Polyline3; // Defined in `#include <MRCMesh/MRPolyline.h>`.
typedef struct MR_UndirectedEdgeScalars MR_UndirectedEdgeScalars; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_function_void_from_MR_UndirectedEdgeId_const_MR_Vector2f_ref_float MR_std_function_void_from_MR_UndirectedEdgeId_const_MR_Vector2f_ref_float; // Defined in `#include <MRCMisc/std_function_void_from_MR_UndirectedEdgeId_const_MR_Vector2f_ref_float.h>`.
typedef struct MR_std_function_void_from_MR_UndirectedEdgeId_const_MR_Vector3f_ref_float MR_std_function_void_from_MR_UndirectedEdgeId_const_MR_Vector3f_ref_float; // Defined in `#include <MRCMisc/std_function_void_from_MR_UndirectedEdgeId_const_MR_Vector3f_ref_float.h>`.


/// Generated from class `MR::PolylineProjectionResult2`.
typedef struct MR_PolylineProjectionResult2 MR_PolylineProjectionResult2;

/// Generated from class `MR::PolylineProjectionResult3`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::PolylineProjectionResult3Arg`
typedef struct MR_PolylineProjectionResult3 MR_PolylineProjectionResult3;

/// Generated from class `MR::Polyline2ProjectionWithOffsetResult`.
typedef struct MR_Polyline2ProjectionWithOffsetResult MR_Polyline2ProjectionWithOffsetResult;

/// Generated from class `MR::PolylineProjectionWithOffsetResult3`.
typedef struct MR_PolylineProjectionWithOffsetResult3 MR_PolylineProjectionWithOffsetResult3;

/// Generated from class `MR::PolylineProjectionResult3Arg`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::PolylineProjectionResult3`
typedef struct MR_PolylineProjectionResult3Arg MR_PolylineProjectionResult3Arg;

/// polyline's edge containing the closest point
/// Returns a pointer to a member variable of class `MR::PolylineProjectionResult2` named `line`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeId *MR_PolylineProjectionResult2_Get_line(const MR_PolylineProjectionResult2 *_this);

/// polyline's edge containing the closest point
/// Modifies a member variable of class `MR::PolylineProjectionResult2` named `line`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineProjectionResult2_Set_line(MR_PolylineProjectionResult2 *_this, MR_UndirectedEdgeId value);

/// polyline's edge containing the closest point
/// Returns a mutable pointer to a member variable of class `MR::PolylineProjectionResult2` named `line`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeId *MR_PolylineProjectionResult2_GetMutable_line(MR_PolylineProjectionResult2 *_this);

/// closest point on polyline, transformed by xf if it is given
/// Returns a pointer to a member variable of class `MR::PolylineProjectionResult2` named `point`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2f *MR_PolylineProjectionResult2_Get_point(const MR_PolylineProjectionResult2 *_this);

/// closest point on polyline, transformed by xf if it is given
/// Modifies a member variable of class `MR::PolylineProjectionResult2` named `point`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineProjectionResult2_Set_point(MR_PolylineProjectionResult2 *_this, MR_Vector2f value);

/// closest point on polyline, transformed by xf if it is given
/// Returns a mutable pointer to a member variable of class `MR::PolylineProjectionResult2` named `point`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2f *MR_PolylineProjectionResult2_GetMutable_point(MR_PolylineProjectionResult2 *_this);

/// squared distance from pt to proj
/// Returns a pointer to a member variable of class `MR::PolylineProjectionResult2` named `distSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_PolylineProjectionResult2_Get_distSq(const MR_PolylineProjectionResult2 *_this);

/// squared distance from pt to proj
/// Modifies a member variable of class `MR::PolylineProjectionResult2` named `distSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineProjectionResult2_Set_distSq(MR_PolylineProjectionResult2 *_this, float value);

/// squared distance from pt to proj
/// Returns a mutable pointer to a member variable of class `MR::PolylineProjectionResult2` named `distSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_PolylineProjectionResult2_GetMutable_distSq(MR_PolylineProjectionResult2 *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineProjectionResult2_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineProjectionResult2 *MR_PolylineProjectionResult2_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PolylineProjectionResult2_DestroyArray()`.
/// Use `MR_PolylineProjectionResult2_OffsetMutablePtr()` and `MR_PolylineProjectionResult2_OffsetPtr()` to access the array elements.
MRC_API MR_PolylineProjectionResult2 *MR_PolylineProjectionResult2_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::PolylineProjectionResult2` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineProjectionResult2_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineProjectionResult2 *MR_PolylineProjectionResult2_ConstructFrom(MR_UndirectedEdgeId line, MR_Vector2f point, float distSq);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PolylineProjectionResult2 *MR_PolylineProjectionResult2_OffsetPtr(const MR_PolylineProjectionResult2 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PolylineProjectionResult2 *MR_PolylineProjectionResult2_OffsetMutablePtr(MR_PolylineProjectionResult2 *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PolylineProjectionResult2`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineProjectionResult2_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineProjectionResult2 *MR_PolylineProjectionResult2_ConstructFromAnother(const MR_PolylineProjectionResult2 *_other);

/// Destroys a heap-allocated instance of `MR_PolylineProjectionResult2`. Does nothing if the pointer is null.
MRC_API void MR_PolylineProjectionResult2_Destroy(const MR_PolylineProjectionResult2 *_this);

/// Destroys a heap-allocated array of `MR_PolylineProjectionResult2`. Does nothing if the pointer is null.
MRC_API void MR_PolylineProjectionResult2_DestroyArray(const MR_PolylineProjectionResult2 *_this);

/// Generated from a conversion operator of class `MR::PolylineProjectionResult2` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_PolylineProjectionResult2_ConvertTo_bool(const MR_PolylineProjectionResult2 *_this);

/// Generated from a method of class `MR::PolylineProjectionResult2` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PolylineProjectionResult2 *MR_PolylineProjectionResult2_AssignFromAnother(MR_PolylineProjectionResult2 *_this, const MR_PolylineProjectionResult2 *_other);

/// check for validity, otherwise the projection was not found
/// Generated from a method of class `MR::PolylineProjectionResult2` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_PolylineProjectionResult2_valid(const MR_PolylineProjectionResult2 *_this);

/// polyline's edge containing the closest point
/// Returns a pointer to a member variable of class `MR::PolylineProjectionResult3` named `line`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeId *MR_PolylineProjectionResult3_Get_line(const MR_PolylineProjectionResult3 *_this);

/// polyline's edge containing the closest point
/// Modifies a member variable of class `MR::PolylineProjectionResult3` named `line`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineProjectionResult3_Set_line(MR_PolylineProjectionResult3 *_this, MR_UndirectedEdgeId value);

/// polyline's edge containing the closest point
/// Returns a mutable pointer to a member variable of class `MR::PolylineProjectionResult3` named `line`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeId *MR_PolylineProjectionResult3_GetMutable_line(MR_PolylineProjectionResult3 *_this);

/// closest point on polyline, transformed by xf if it is given
/// Returns a pointer to a member variable of class `MR::PolylineProjectionResult3` named `point`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_PolylineProjectionResult3_Get_point(const MR_PolylineProjectionResult3 *_this);

/// closest point on polyline, transformed by xf if it is given
/// Modifies a member variable of class `MR::PolylineProjectionResult3` named `point`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineProjectionResult3_Set_point(MR_PolylineProjectionResult3 *_this, MR_Vector3f value);

/// closest point on polyline, transformed by xf if it is given
/// Returns a mutable pointer to a member variable of class `MR::PolylineProjectionResult3` named `point`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_PolylineProjectionResult3_GetMutable_point(MR_PolylineProjectionResult3 *_this);

/// squared distance from pt to proj
/// Returns a pointer to a member variable of class `MR::PolylineProjectionResult3` named `distSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_PolylineProjectionResult3_Get_distSq(const MR_PolylineProjectionResult3 *_this);

/// squared distance from pt to proj
/// Modifies a member variable of class `MR::PolylineProjectionResult3` named `distSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineProjectionResult3_Set_distSq(MR_PolylineProjectionResult3 *_this, float value);

/// squared distance from pt to proj
/// Returns a mutable pointer to a member variable of class `MR::PolylineProjectionResult3` named `distSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_PolylineProjectionResult3_GetMutable_distSq(MR_PolylineProjectionResult3 *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineProjectionResult3_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineProjectionResult3 *MR_PolylineProjectionResult3_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PolylineProjectionResult3_DestroyArray()`.
/// Use `MR_PolylineProjectionResult3_OffsetMutablePtr()` and `MR_PolylineProjectionResult3_OffsetPtr()` to access the array elements.
MRC_API MR_PolylineProjectionResult3 *MR_PolylineProjectionResult3_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::PolylineProjectionResult3` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineProjectionResult3_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineProjectionResult3 *MR_PolylineProjectionResult3_ConstructFrom(MR_UndirectedEdgeId line, MR_Vector3f point, float distSq);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PolylineProjectionResult3 *MR_PolylineProjectionResult3_OffsetPtr(const MR_PolylineProjectionResult3 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PolylineProjectionResult3 *MR_PolylineProjectionResult3_OffsetMutablePtr(MR_PolylineProjectionResult3 *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::PolylineProjectionResult3` to a derived class `MR::PolylineProjectionResult3Arg`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_PolylineProjectionResult3Arg *MR_PolylineProjectionResult3_StaticDowncastTo_MR_PolylineProjectionResult3Arg(const MR_PolylineProjectionResult3 *object);

/// Downcasts an instance of `MR::PolylineProjectionResult3` to a derived class `MR::PolylineProjectionResult3Arg`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_PolylineProjectionResult3Arg *MR_PolylineProjectionResult3_MutableStaticDowncastTo_MR_PolylineProjectionResult3Arg(MR_PolylineProjectionResult3 *object);

/// Generated from a constructor of class `MR::PolylineProjectionResult3`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineProjectionResult3_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineProjectionResult3 *MR_PolylineProjectionResult3_ConstructFromAnother(const MR_PolylineProjectionResult3 *_other);

/// Destroys a heap-allocated instance of `MR_PolylineProjectionResult3`. Does nothing if the pointer is null.
MRC_API void MR_PolylineProjectionResult3_Destroy(const MR_PolylineProjectionResult3 *_this);

/// Destroys a heap-allocated array of `MR_PolylineProjectionResult3`. Does nothing if the pointer is null.
MRC_API void MR_PolylineProjectionResult3_DestroyArray(const MR_PolylineProjectionResult3 *_this);

/// Generated from a conversion operator of class `MR::PolylineProjectionResult3` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_PolylineProjectionResult3_ConvertTo_bool(const MR_PolylineProjectionResult3 *_this);

/// Generated from a method of class `MR::PolylineProjectionResult3` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PolylineProjectionResult3 *MR_PolylineProjectionResult3_AssignFromAnother(MR_PolylineProjectionResult3 *_this, const MR_PolylineProjectionResult3 *_other);

/// check for validity, otherwise the projection was not found
/// Generated from a method of class `MR::PolylineProjectionResult3` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_PolylineProjectionResult3_valid(const MR_PolylineProjectionResult3 *_this);

/// closest line id on polyline
/// Returns a pointer to a member variable of class `MR::Polyline2ProjectionWithOffsetResult` named `line`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeId *MR_Polyline2ProjectionWithOffsetResult_Get_line(const MR_Polyline2ProjectionWithOffsetResult *_this);

/// closest line id on polyline
/// Modifies a member variable of class `MR::Polyline2ProjectionWithOffsetResult` named `line`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Polyline2ProjectionWithOffsetResult_Set_line(MR_Polyline2ProjectionWithOffsetResult *_this, MR_UndirectedEdgeId value);

/// closest line id on polyline
/// Returns a mutable pointer to a member variable of class `MR::Polyline2ProjectionWithOffsetResult` named `line`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeId *MR_Polyline2ProjectionWithOffsetResult_GetMutable_line(MR_Polyline2ProjectionWithOffsetResult *_this);

/// closest point on polyline, transformed by xf if it is given
/// Returns a pointer to a member variable of class `MR::Polyline2ProjectionWithOffsetResult` named `point`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2f *MR_Polyline2ProjectionWithOffsetResult_Get_point(const MR_Polyline2ProjectionWithOffsetResult *_this);

/// closest point on polyline, transformed by xf if it is given
/// Modifies a member variable of class `MR::Polyline2ProjectionWithOffsetResult` named `point`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Polyline2ProjectionWithOffsetResult_Set_point(MR_Polyline2ProjectionWithOffsetResult *_this, MR_Vector2f value);

/// closest point on polyline, transformed by xf if it is given
/// Returns a mutable pointer to a member variable of class `MR::Polyline2ProjectionWithOffsetResult` named `point`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2f *MR_Polyline2ProjectionWithOffsetResult_GetMutable_point(MR_Polyline2ProjectionWithOffsetResult *_this);

/// distance from offset point to proj
/// Returns a pointer to a member variable of class `MR::Polyline2ProjectionWithOffsetResult` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Polyline2ProjectionWithOffsetResult_Get_dist(const MR_Polyline2ProjectionWithOffsetResult *_this);

/// distance from offset point to proj
/// Modifies a member variable of class `MR::Polyline2ProjectionWithOffsetResult` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Polyline2ProjectionWithOffsetResult_Set_dist(MR_Polyline2ProjectionWithOffsetResult *_this, float value);

/// distance from offset point to proj
/// Returns a mutable pointer to a member variable of class `MR::Polyline2ProjectionWithOffsetResult` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Polyline2ProjectionWithOffsetResult_GetMutable_dist(MR_Polyline2ProjectionWithOffsetResult *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polyline2ProjectionWithOffsetResult_Destroy()` to free it when you're done using it.
MRC_API MR_Polyline2ProjectionWithOffsetResult *MR_Polyline2ProjectionWithOffsetResult_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Polyline2ProjectionWithOffsetResult_DestroyArray()`.
/// Use `MR_Polyline2ProjectionWithOffsetResult_OffsetMutablePtr()` and `MR_Polyline2ProjectionWithOffsetResult_OffsetPtr()` to access the array elements.
MRC_API MR_Polyline2ProjectionWithOffsetResult *MR_Polyline2ProjectionWithOffsetResult_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Polyline2ProjectionWithOffsetResult` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polyline2ProjectionWithOffsetResult_Destroy()` to free it when you're done using it.
MRC_API MR_Polyline2ProjectionWithOffsetResult *MR_Polyline2ProjectionWithOffsetResult_ConstructFrom(MR_UndirectedEdgeId line, MR_Vector2f point, float dist);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Polyline2ProjectionWithOffsetResult *MR_Polyline2ProjectionWithOffsetResult_OffsetPtr(const MR_Polyline2ProjectionWithOffsetResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Polyline2ProjectionWithOffsetResult *MR_Polyline2ProjectionWithOffsetResult_OffsetMutablePtr(MR_Polyline2ProjectionWithOffsetResult *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Polyline2ProjectionWithOffsetResult`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polyline2ProjectionWithOffsetResult_Destroy()` to free it when you're done using it.
MRC_API MR_Polyline2ProjectionWithOffsetResult *MR_Polyline2ProjectionWithOffsetResult_ConstructFromAnother(const MR_Polyline2ProjectionWithOffsetResult *_other);

/// Destroys a heap-allocated instance of `MR_Polyline2ProjectionWithOffsetResult`. Does nothing if the pointer is null.
MRC_API void MR_Polyline2ProjectionWithOffsetResult_Destroy(const MR_Polyline2ProjectionWithOffsetResult *_this);

/// Destroys a heap-allocated array of `MR_Polyline2ProjectionWithOffsetResult`. Does nothing if the pointer is null.
MRC_API void MR_Polyline2ProjectionWithOffsetResult_DestroyArray(const MR_Polyline2ProjectionWithOffsetResult *_this);

/// Generated from a method of class `MR::Polyline2ProjectionWithOffsetResult` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Polyline2ProjectionWithOffsetResult *MR_Polyline2ProjectionWithOffsetResult_AssignFromAnother(MR_Polyline2ProjectionWithOffsetResult *_this, const MR_Polyline2ProjectionWithOffsetResult *_other);

/// closest line id on polyline
/// Returns a pointer to a member variable of class `MR::PolylineProjectionWithOffsetResult3` named `line`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeId *MR_PolylineProjectionWithOffsetResult3_Get_line(const MR_PolylineProjectionWithOffsetResult3 *_this);

/// closest line id on polyline
/// Modifies a member variable of class `MR::PolylineProjectionWithOffsetResult3` named `line`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineProjectionWithOffsetResult3_Set_line(MR_PolylineProjectionWithOffsetResult3 *_this, MR_UndirectedEdgeId value);

/// closest line id on polyline
/// Returns a mutable pointer to a member variable of class `MR::PolylineProjectionWithOffsetResult3` named `line`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeId *MR_PolylineProjectionWithOffsetResult3_GetMutable_line(MR_PolylineProjectionWithOffsetResult3 *_this);

/// closest point on polyline, transformed by xf if it is given
/// Returns a pointer to a member variable of class `MR::PolylineProjectionWithOffsetResult3` named `point`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_PolylineProjectionWithOffsetResult3_Get_point(const MR_PolylineProjectionWithOffsetResult3 *_this);

/// closest point on polyline, transformed by xf if it is given
/// Modifies a member variable of class `MR::PolylineProjectionWithOffsetResult3` named `point`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineProjectionWithOffsetResult3_Set_point(MR_PolylineProjectionWithOffsetResult3 *_this, MR_Vector3f value);

/// closest point on polyline, transformed by xf if it is given
/// Returns a mutable pointer to a member variable of class `MR::PolylineProjectionWithOffsetResult3` named `point`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_PolylineProjectionWithOffsetResult3_GetMutable_point(MR_PolylineProjectionWithOffsetResult3 *_this);

/// distance from offset point to proj
/// Returns a pointer to a member variable of class `MR::PolylineProjectionWithOffsetResult3` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_PolylineProjectionWithOffsetResult3_Get_dist(const MR_PolylineProjectionWithOffsetResult3 *_this);

/// distance from offset point to proj
/// Modifies a member variable of class `MR::PolylineProjectionWithOffsetResult3` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineProjectionWithOffsetResult3_Set_dist(MR_PolylineProjectionWithOffsetResult3 *_this, float value);

/// distance from offset point to proj
/// Returns a mutable pointer to a member variable of class `MR::PolylineProjectionWithOffsetResult3` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_PolylineProjectionWithOffsetResult3_GetMutable_dist(MR_PolylineProjectionWithOffsetResult3 *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineProjectionWithOffsetResult3_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineProjectionWithOffsetResult3 *MR_PolylineProjectionWithOffsetResult3_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PolylineProjectionWithOffsetResult3_DestroyArray()`.
/// Use `MR_PolylineProjectionWithOffsetResult3_OffsetMutablePtr()` and `MR_PolylineProjectionWithOffsetResult3_OffsetPtr()` to access the array elements.
MRC_API MR_PolylineProjectionWithOffsetResult3 *MR_PolylineProjectionWithOffsetResult3_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::PolylineProjectionWithOffsetResult3` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineProjectionWithOffsetResult3_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineProjectionWithOffsetResult3 *MR_PolylineProjectionWithOffsetResult3_ConstructFrom(MR_UndirectedEdgeId line, MR_Vector3f point, float dist);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PolylineProjectionWithOffsetResult3 *MR_PolylineProjectionWithOffsetResult3_OffsetPtr(const MR_PolylineProjectionWithOffsetResult3 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PolylineProjectionWithOffsetResult3 *MR_PolylineProjectionWithOffsetResult3_OffsetMutablePtr(MR_PolylineProjectionWithOffsetResult3 *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PolylineProjectionWithOffsetResult3`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineProjectionWithOffsetResult3_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineProjectionWithOffsetResult3 *MR_PolylineProjectionWithOffsetResult3_ConstructFromAnother(const MR_PolylineProjectionWithOffsetResult3 *_other);

/// Destroys a heap-allocated instance of `MR_PolylineProjectionWithOffsetResult3`. Does nothing if the pointer is null.
MRC_API void MR_PolylineProjectionWithOffsetResult3_Destroy(const MR_PolylineProjectionWithOffsetResult3 *_this);

/// Destroys a heap-allocated array of `MR_PolylineProjectionWithOffsetResult3`. Does nothing if the pointer is null.
MRC_API void MR_PolylineProjectionWithOffsetResult3_DestroyArray(const MR_PolylineProjectionWithOffsetResult3 *_this);

/// Generated from a method of class `MR::PolylineProjectionWithOffsetResult3` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PolylineProjectionWithOffsetResult3 *MR_PolylineProjectionWithOffsetResult3_AssignFromAnother(MR_PolylineProjectionWithOffsetResult3 *_this, const MR_PolylineProjectionWithOffsetResult3 *_other);

/**
* \brief computes the closest point on polyline to given point
* \param upDistLimitSq upper limit on the distance in question, if the real distance is larger then the function exists returning upDistLimitSq and no valid point or edge
* \param xf polyline-to-point transformation, if not specified then identity transformation is assumed
* \param loDistLimitSq low limit on the distance in question, if a point is found within this distance then it is immediately returned without searching for a closer one
*/
/// Generated from function `MR::findProjectionOnPolyline2`.
/// Parameter `pt` can not be null. It is a single object.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `upDistLimitSq` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `xf` defaults to a null pointer in C++.
/// Parameter `loDistLimitSq` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineProjectionResult2_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineProjectionResult2 *MR_findProjectionOnPolyline2(const MR_Vector2f *pt, const MR_Polyline2 *polyline, const float *upDistLimitSq, MR_AffineXf2f *xf, const float *loDistLimitSq);

/**
* \brief computes the closest point on polyline to given point
* \param upDistLimitSq upper limit on the distance in question, if the real distance is larger then the function exists returning upDistLimitSq and no valid point or edge
* \param xf polyline-to-point transformation, if not specified then identity transformation is assumed
* \param loDistLimitSq low limit on the distance in question, if a point is found within this distance then it is immediately returned without searching for a closer one
*/
/// Generated from function `MR::findProjectionOnPolyline`.
/// Parameter `pt` can not be null. It is a single object.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `upDistLimitSq` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `xf` defaults to a null pointer in C++.
/// Parameter `loDistLimitSq` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineProjectionResult3_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineProjectionResult3 *MR_findProjectionOnPolyline_MR_Vector3f(const MR_Vector3f *pt, const MR_Polyline3 *polyline, const float *upDistLimitSq, MR_AffineXf3f *xf, const float *loDistLimitSq);

// id of source point from which closest point was searched
/// Returns a pointer to a member variable of class `MR::PolylineProjectionResult3Arg` named `pointId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_PolylineProjectionResult3Arg_Get_pointId(const MR_PolylineProjectionResult3Arg *_this);

// id of source point from which closest point was searched
/// Modifies a member variable of class `MR::PolylineProjectionResult3Arg` named `pointId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineProjectionResult3Arg_Set_pointId(MR_PolylineProjectionResult3Arg *_this, MR_VertId value);

// id of source point from which closest point was searched
/// Returns a mutable pointer to a member variable of class `MR::PolylineProjectionResult3Arg` named `pointId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_PolylineProjectionResult3Arg_GetMutable_pointId(MR_PolylineProjectionResult3Arg *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineProjectionResult3Arg_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineProjectionResult3Arg *MR_PolylineProjectionResult3Arg_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PolylineProjectionResult3Arg_DestroyArray()`.
/// Use `MR_PolylineProjectionResult3Arg_OffsetMutablePtr()` and `MR_PolylineProjectionResult3Arg_OffsetPtr()` to access the array elements.
MRC_API MR_PolylineProjectionResult3Arg *MR_PolylineProjectionResult3Arg_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PolylineProjectionResult3Arg *MR_PolylineProjectionResult3Arg_OffsetPtr(const MR_PolylineProjectionResult3Arg *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PolylineProjectionResult3Arg *MR_PolylineProjectionResult3Arg_OffsetMutablePtr(MR_PolylineProjectionResult3Arg *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::PolylineProjectionResult3Arg` to its base class `MR::PolylineProjectionResult3`.
/// This version is acting on mutable pointers.
MRC_API const MR_PolylineProjectionResult3 *MR_PolylineProjectionResult3Arg_UpcastTo_MR_PolylineProjectionResult3(const MR_PolylineProjectionResult3Arg *object);

/// Upcasts an instance of `MR::PolylineProjectionResult3Arg` to its base class `MR::PolylineProjectionResult3`.
MRC_API MR_PolylineProjectionResult3 *MR_PolylineProjectionResult3Arg_MutableUpcastTo_MR_PolylineProjectionResult3(MR_PolylineProjectionResult3Arg *object);

/// Generated from a constructor of class `MR::PolylineProjectionResult3Arg`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineProjectionResult3Arg_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineProjectionResult3Arg *MR_PolylineProjectionResult3Arg_ConstructFromAnother(const MR_PolylineProjectionResult3Arg *_other);

/// Destroys a heap-allocated instance of `MR_PolylineProjectionResult3Arg`. Does nothing if the pointer is null.
MRC_API void MR_PolylineProjectionResult3Arg_Destroy(const MR_PolylineProjectionResult3Arg *_this);

/// Destroys a heap-allocated array of `MR_PolylineProjectionResult3Arg`. Does nothing if the pointer is null.
MRC_API void MR_PolylineProjectionResult3Arg_DestroyArray(const MR_PolylineProjectionResult3Arg *_this);

/// Generated from a method of class `MR::PolylineProjectionResult3Arg` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PolylineProjectionResult3Arg *MR_PolylineProjectionResult3Arg_AssignFromAnother(MR_PolylineProjectionResult3Arg *_this, const MR_PolylineProjectionResult3Arg *_other);

/**
* \brief for each of points (pointsRegion) computes the closest point on polyline and returns the point for which maximum distance is reached,
* \param xf polyline-to-point transformation, if not specified then identity transformation is assumed
* \param loDistLimitSq low limit on the distance in question, if a point is found within this distance then it is immediately returned without searching for a closer one
*/
/// Generated from function `MR::findMaxProjectionOnPolyline`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `pointsRegion` defaults to a null pointer in C++.
/// Parameter `xf` defaults to a null pointer in C++.
/// Parameter `loDistLimitSq` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineProjectionResult3Arg_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineProjectionResult3Arg *MR_findMaxProjectionOnPolyline(const MR_VertCoords *points, const MR_Polyline3 *polyline, const MR_VertBitSet *pointsRegion, MR_AffineXf3f *xf, const float *loDistLimitSq);

/**
* \brief computes the closest point on polyline to given straight line
* \param upDistLimitSq upper limit on the distance in question, if the real distance is larger then the function exists returning upDistLimitSq and no valid point or edge
* \param xf polyline-to-point transformation, if not specified then identity transformation is assumed
* \param loDistLimitSq low limit on the distance in question, if a point is found within this distance then it is immediately returned without searching for a closer one
*/
/// Generated from function `MR::findProjectionOnPolyline`.
/// Parameter `ln` can not be null. It is a single object.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `upDistLimitSq` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `xf` defaults to a null pointer in C++.
/// Parameter `loDistLimitSq` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineProjectionResult3_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineProjectionResult3 *MR_findProjectionOnPolyline_MR_Line3f(const MR_Line3f *ln, const MR_Polyline3 *polyline, const float *upDistLimitSq, MR_AffineXf3f *xf, const float *loDistLimitSq);

/**
* \brief computes the closest point on polyline to given point, respecting each edge offset
* \param offsetPerEdge offset for each edge of polyline
* \param upDistLimit upper limit on the distance in question, if the real distance is larger then the function exists returning upDistLimit and no valid point or edge
* \param xf polyline-to-point transformation, if not specified then identity transformation is assumed
* \param loDistLimit low limit on the distance in question, if a point is found within this distance then it is immediately returned without searching for a closer one
*/
/// Generated from function `MR::findProjectionOnPolyline2WithOffset`.
/// Parameter `pt` can not be null. It is a single object.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `offsetPerEdge` can not be null. It is a single object.
/// Parameter `upDistLimit` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `xf` defaults to a null pointer in C++.
/// Parameter `loDistLimit` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polyline2ProjectionWithOffsetResult_Destroy()` to free it when you're done using it.
MRC_API MR_Polyline2ProjectionWithOffsetResult *MR_findProjectionOnPolyline2WithOffset(const MR_Vector2f *pt, const MR_Polyline2 *polyline, const MR_UndirectedEdgeScalars *offsetPerEdge, const float *upDistLimit, MR_AffineXf2f *xf, const float *loDistLimit);

/**
* \brief computes the closest point on polyline to given point, respecting each edge offset
* \param offsetPerEdge offset for each edge of polyline
* \param upDistLimit upper limit on the distance in question, if the real distance is larger then the function exists returning upDistLimit and no valid point or edge
* \param xf polyline-to-point transformation, if not specified then identity transformation is assumed
* \param loDistLimit low limit on the distance in question, if a point is found within this distance then it is immediately returned without searching for a closer one
*/
/// Generated from function `MR::findProjectionOnPolylineWithOffset`.
/// Parameter `pt` can not be null. It is a single object.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `offsetPerEdge` can not be null. It is a single object.
/// Parameter `upDistLimit` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `xf` defaults to a null pointer in C++.
/// Parameter `loDistLimit` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineProjectionWithOffsetResult3_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineProjectionWithOffsetResult3 *MR_findProjectionOnPolylineWithOffset(const MR_Vector3f *pt, const MR_Polyline3 *polyline, const MR_UndirectedEdgeScalars *offsetPerEdge, const float *upDistLimit, MR_AffineXf3f *xf, const float *loDistLimit);

/// Finds all edges of given polyline that cross or touch given ball (center, radius)
/// Generated from function `MR::findEdgesInBall`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `center` can not be null. It is a single object.
/// Parameter `foundCallback` can not be null. It is a single object.
/// Parameter `xf` defaults to a null pointer in C++.
MRC_API void MR_findEdgesInBall_MR_Polyline2(const MR_Polyline2 *polyline, const MR_Vector2f *center, float radius, const MR_std_function_void_from_MR_UndirectedEdgeId_const_MR_Vector2f_ref_float *foundCallback, MR_AffineXf2f *xf);

/// Finds all edges of given polyline that cross or touch given ball (center, radius)
/// Generated from function `MR::findEdgesInBall`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `center` can not be null. It is a single object.
/// Parameter `foundCallback` can not be null. It is a single object.
/// Parameter `xf` defaults to a null pointer in C++.
MRC_API void MR_findEdgesInBall_MR_Polyline3(const MR_Polyline3 *polyline, const MR_Vector3f *center, float radius, const MR_std_function_void_from_MR_UndirectedEdgeId_const_MR_Vector3f_ref_float *foundCallback, MR_AffineXf3f *xf);

/// Finds all edges of given mesh edges (specified by the tree) that cross or touch given ball (center, radius)
/// Generated from function `MR::findMeshEdgesInBall`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `tree` can not be null. It is a single object.
/// Parameter `center` can not be null. It is a single object.
/// Parameter `foundCallback` can not be null. It is a single object.
/// Parameter `xf` defaults to a null pointer in C++.
MRC_API void MR_findMeshEdgesInBall(const MR_Mesh *mesh, const MR_AABBTreePolyline3 *tree, const MR_Vector3f *center, float radius, const MR_std_function_void_from_MR_UndirectedEdgeId_const_MR_Vector3f_ref_float *foundCallback, MR_AffineXf3f *xf);

/**
* \brief computes the closest point on the mesh edges (specified by the tree) to given point
* \param upDistLimitSq upper limit on the distance in question, if the real distance is larger then the function exists returning upDistLimitSq and no valid point or edge
* \param xf polyline-to-point transformation, if not specified then identity transformation is assumed
* \param loDistLimitSq low limit on the distance in question, if a point is found within this distance then it is immediately returned without searching for a closer one
*/
/// Generated from function `MR::findProjectionOnMeshEdges`.
/// Parameter `pt` can not be null. It is a single object.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `tree` can not be null. It is a single object.
/// Parameter `upDistLimitSq` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `xf` defaults to a null pointer in C++.
/// Parameter `loDistLimitSq` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineProjectionResult3_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineProjectionResult3 *MR_findProjectionOnMeshEdges_MR_Vector3f(const MR_Vector3f *pt, const MR_Mesh *mesh, const MR_AABBTreePolyline3 *tree, const float *upDistLimitSq, MR_AffineXf3f *xf, const float *loDistLimitSq);

/**
* \brief computes the closest point on the mesh edges (specified by the tree) to given straight line
* \param upDistLimitSq upper limit on the distance in question, if the real distance is larger then the function exists returning upDistLimitSq and no valid point or edge
* \param xf polyline-to-point transformation, if not specified then identity transformation is assumed
* \param loDistLimitSq low limit on the distance in question, if a point is found within this distance then it is immediately returned without searching for a closer one
*/
/// Generated from function `MR::findProjectionOnMeshEdges`.
/// Parameter `ln` can not be null. It is a single object.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `tree` can not be null. It is a single object.
/// Parameter `upDistLimitSq` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `xf` defaults to a null pointer in C++.
/// Parameter `loDistLimitSq` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineProjectionResult3_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineProjectionResult3 *MR_findProjectionOnMeshEdges_MR_Line3f(const MR_Line3f *ln, const MR_Mesh *mesh, const MR_AABBTreePolyline3 *tree, const float *upDistLimitSq, MR_AffineXf3f *xf, const float *loDistLimitSq);

#ifdef __cplusplus
} // extern "C"
#endif
