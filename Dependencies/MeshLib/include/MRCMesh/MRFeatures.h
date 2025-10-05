// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_Cone3f MR_Cone3f; // Defined in `#include <MRCMesh/MRCone3.h>`.
typedef struct MR_Cylinder3f MR_Cylinder3f; // Defined in `#include <MRCMesh/MRCylinder3.h>`.
typedef struct MR_Line3f MR_Line3f; // Defined in `#include <MRCMesh/MRLine.h>`.
typedef struct MR_LineSegm3f MR_LineSegm3f; // Defined in `#include <MRCMesh/MRLineSegm.h>`.
typedef struct MR_Object MR_Object; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_Sphere3f MR_Sphere3f; // Defined in `#include <MRCMesh/MRSphere.h>`.
typedef struct MR_std_optional_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane MR_std_optional_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane; // Defined in `#include <MRCMisc/std_optional_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitiv__9713.h>`.
typedef struct MR_std_shared_ptr_MR_FeatureObject MR_std_shared_ptr_MR_FeatureObject; // Defined in `#include <MRCMisc/std_shared_ptr_MR_FeatureObject.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_string_view MR_std_string_view; // Defined in `#include <MRCMisc/std_string_view.h>`.
typedef struct MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane; // Defined in `#include <MRCMisc/std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane.h>`.
typedef struct MR_std_vector_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane MR_std_vector_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane; // Defined in `#include <MRCMisc/std_vector_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives__cdd2.h>`.


/// Generated from class `MR::Features::Primitives::Plane`.
typedef struct MR_Features_Primitives_Plane MR_Features_Primitives_Plane;

//! Can have infinite length in one or two directions.
//! The top and/or bottom can be flat or pointy.
//! Doubles as a cylinder, line (finite or infinite), and a circle.
/// Generated from class `MR::Features::Primitives::ConeSegment`.
typedef struct MR_Features_Primitives_ConeSegment MR_Features_Primitives_ConeSegment;

//! Stores the results of measuring two objects relative to one another.
/// Generated from class `MR::Features::MeasureResult`.
typedef struct MR_Features_MeasureResult MR_Features_MeasureResult;

typedef int32_t MR_Features_MeasureResult_Status;
enum // MR_Features_MeasureResult_Status
{
    MR_Features_MeasureResult_Status_ok = 0,
    //! Algorithms set this if this when something isn't yet implemented.
    MR_Features_MeasureResult_Status_notImplemented = 1,
    //! Algorithms set this when the calculation doesn't make sense for those object types.
    //! This result can be based on object parameters, but not on their relative location.
    MR_Features_MeasureResult_Status_badFeaturePair = 2,
    //! Can't be computed because of how the objects are located relative to each other.
    MR_Features_MeasureResult_Status_badRelativeLocation = 3,
    //! The result was not finite. This is set automatically if you return non-finite values, but you can also set this manually.
    MR_Features_MeasureResult_Status_notFinite = 4,
};

/// Generated from class `MR::Features::MeasureResult::BasicPart`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::Features::MeasureResult::Angle`
///     `MR::Features::MeasureResult::Distance`
typedef struct MR_Features_MeasureResult_BasicPart MR_Features_MeasureResult_BasicPart;

/// Generated from class `MR::Features::MeasureResult::Distance`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::Features::MeasureResult::BasicPart`
typedef struct MR_Features_MeasureResult_Distance MR_Features_MeasureResult_Distance;

/// Generated from class `MR::Features::MeasureResult::Angle`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::Features::MeasureResult::BasicPart`
typedef struct MR_Features_MeasureResult_Angle MR_Features_MeasureResult_Angle;

/// Generated from class `MR::Features::Traits::Unary<MR::Sphere3f>`.
typedef struct MR_Features_Traits_Unary_MR_Sphere3f MR_Features_Traits_Unary_MR_Sphere3f;

/// Generated from class `MR::Features::Traits::Unary<MR::Features::Primitives::ConeSegment>`.
typedef struct MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment;

/// Generated from class `MR::Features::Traits::Unary<MR::Features::Primitives::Plane>`.
typedef struct MR_Features_Traits_Unary_MR_Features_Primitives_Plane MR_Features_Traits_Unary_MR_Features_Primitives_Plane;

// ?? <-> Sphere
/// Generated from class `MR::Features::Traits::Binary<MR::Sphere3f, MR::Sphere3f>`.
typedef struct MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f;

/// Generated from class `MR::Features::Traits::Binary<MR::Features::Primitives::ConeSegment, MR::Sphere3f>`.
typedef struct MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f;

/// Generated from class `MR::Features::Traits::Binary<MR::Features::Primitives::Plane, MR::Sphere3f>`.
typedef struct MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f;

// ?? <-> Cone
/// Generated from class `MR::Features::Traits::Binary<MR::Features::Primitives::ConeSegment, MR::Features::Primitives::ConeSegment>`.
typedef struct MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment;

/// Generated from class `MR::Features::Traits::Binary<MR::Features::Primitives::Plane, MR::Features::Primitives::ConeSegment>`.
typedef struct MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment;

// ?? <-> Plane
/// Generated from class `MR::Features::Traits::Binary<MR::Features::Primitives::Plane, MR::Features::Primitives::Plane>`.
typedef struct MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane;

/// Returns a pointer to a member variable of class `MR::Features::Primitives::Plane` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_Features_Primitives_Plane_Get_center(const MR_Features_Primitives_Plane *_this);

/// Modifies a member variable of class `MR::Features::Primitives::Plane` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Features_Primitives_Plane_Set_center(MR_Features_Primitives_Plane *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::Features::Primitives::Plane` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_Features_Primitives_Plane_GetMutable_center(MR_Features_Primitives_Plane *_this);

// This must be normalized. The sign doesn't matter.
/// Returns a pointer to a member variable of class `MR::Features::Primitives::Plane` named `normal`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_Features_Primitives_Plane_Get_normal(const MR_Features_Primitives_Plane *_this);

// This must be normalized. The sign doesn't matter.
/// Modifies a member variable of class `MR::Features::Primitives::Plane` named `normal`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Features_Primitives_Plane_Set_normal(MR_Features_Primitives_Plane *_this, MR_Vector3f value);

// This must be normalized. The sign doesn't matter.
/// Returns a mutable pointer to a member variable of class `MR::Features::Primitives::Plane` named `normal`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_Features_Primitives_Plane_GetMutable_normal(MR_Features_Primitives_Plane *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Primitives_Plane_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Primitives_Plane *MR_Features_Primitives_Plane_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Features_Primitives_Plane_DestroyArray()`.
/// Use `MR_Features_Primitives_Plane_OffsetMutablePtr()` and `MR_Features_Primitives_Plane_OffsetPtr()` to access the array elements.
MRC_API MR_Features_Primitives_Plane *MR_Features_Primitives_Plane_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Features::Primitives::Plane` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Primitives_Plane_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Primitives_Plane *MR_Features_Primitives_Plane_ConstructFrom(MR_Vector3f center, MR_Vector3f normal);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Features_Primitives_Plane *MR_Features_Primitives_Plane_OffsetPtr(const MR_Features_Primitives_Plane *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Features_Primitives_Plane *MR_Features_Primitives_Plane_OffsetMutablePtr(MR_Features_Primitives_Plane *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Features::Primitives::Plane`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Primitives_Plane_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Primitives_Plane *MR_Features_Primitives_Plane_ConstructFromAnother(const MR_Features_Primitives_Plane *_other);

/// Destroys a heap-allocated instance of `MR_Features_Primitives_Plane`. Does nothing if the pointer is null.
MRC_API void MR_Features_Primitives_Plane_Destroy(const MR_Features_Primitives_Plane *_this);

/// Destroys a heap-allocated array of `MR_Features_Primitives_Plane`. Does nothing if the pointer is null.
MRC_API void MR_Features_Primitives_Plane_DestroyArray(const MR_Features_Primitives_Plane *_this);

/// Generated from a method of class `MR::Features::Primitives::Plane` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Features_Primitives_Plane *MR_Features_Primitives_Plane_AssignFromAnother(MR_Features_Primitives_Plane *_this, const MR_Features_Primitives_Plane *_other);

// Returns an infinite line, with the center in a sane location.
/// Generated from a method of class `MR::Features::Primitives::Plane` named `intersectWithPlane`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Primitives_ConeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Primitives_ConeSegment *MR_Features_Primitives_Plane_intersectWithPlane(const MR_Features_Primitives_Plane *_this, const MR_Features_Primitives_Plane *other);

// Intersects the plane with a line, returns a point (zero radius sphere).
// Only `center` and `dir` are used from `line` (so if `line` is a cone/cylinder, its axis is used,
// and the line is extended to infinity).
/// Generated from a method of class `MR::Features::Primitives::Plane` named `intersectWithLine`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `line` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Sphere3f_Destroy()` to free it when you're done using it.
MRC_API MR_Sphere3f *MR_Features_Primitives_Plane_intersectWithLine(const MR_Features_Primitives_Plane *_this, const MR_Features_Primitives_ConeSegment *line);

/// Generated from function `MR::Features::Primitives::operator==`.
/// Parameter `_1` can not be null. It is a single object.
/// Parameter `_2` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Features_Primitives_Plane(const MR_Features_Primitives_Plane *_1, const MR_Features_Primitives_Plane *_2);

//! Some point on the axis, but not necessarily the true center point. Use `centerPoint()` for that.
/// Returns a pointer to a member variable of class `MR::Features::Primitives::ConeSegment` named `referencePoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_Features_Primitives_ConeSegment_Get_referencePoint(const MR_Features_Primitives_ConeSegment *_this);

//! Some point on the axis, but not necessarily the true center point. Use `centerPoint()` for that.
/// Modifies a member variable of class `MR::Features::Primitives::ConeSegment` named `referencePoint`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Features_Primitives_ConeSegment_Set_referencePoint(MR_Features_Primitives_ConeSegment *_this, MR_Vector3f value);

//! Some point on the axis, but not necessarily the true center point. Use `centerPoint()` for that.
/// Returns a mutable pointer to a member variable of class `MR::Features::Primitives::ConeSegment` named `referencePoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_Features_Primitives_ConeSegment_GetMutable_referencePoint(MR_Features_Primitives_ConeSegment *_this);

//! The axis direction. Must be normalized.
/// Returns a pointer to a member variable of class `MR::Features::Primitives::ConeSegment` named `dir`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_Features_Primitives_ConeSegment_Get_dir(const MR_Features_Primitives_ConeSegment *_this);

//! The axis direction. Must be normalized.
/// Modifies a member variable of class `MR::Features::Primitives::ConeSegment` named `dir`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Features_Primitives_ConeSegment_Set_dir(MR_Features_Primitives_ConeSegment *_this, MR_Vector3f value);

//! The axis direction. Must be normalized.
/// Returns a mutable pointer to a member variable of class `MR::Features::Primitives::ConeSegment` named `dir`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_Features_Primitives_ConeSegment_GetMutable_dir(MR_Features_Primitives_ConeSegment *_this);

//! Cap radius in the `dir` direction.
/// Returns a pointer to a member variable of class `MR::Features::Primitives::ConeSegment` named `positiveSideRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Features_Primitives_ConeSegment_Get_positiveSideRadius(const MR_Features_Primitives_ConeSegment *_this);

//! Cap radius in the `dir` direction.
/// Modifies a member variable of class `MR::Features::Primitives::ConeSegment` named `positiveSideRadius`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Features_Primitives_ConeSegment_Set_positiveSideRadius(MR_Features_Primitives_ConeSegment *_this, float value);

//! Cap radius in the `dir` direction.
/// Returns a mutable pointer to a member variable of class `MR::Features::Primitives::ConeSegment` named `positiveSideRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Features_Primitives_ConeSegment_GetMutable_positiveSideRadius(MR_Features_Primitives_ConeSegment *_this);

//! Cap radius in the direction opposite to `dir`.
/// Returns a pointer to a member variable of class `MR::Features::Primitives::ConeSegment` named `negativeSideRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Features_Primitives_ConeSegment_Get_negativeSideRadius(const MR_Features_Primitives_ConeSegment *_this);

//! Cap radius in the direction opposite to `dir`.
/// Modifies a member variable of class `MR::Features::Primitives::ConeSegment` named `negativeSideRadius`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Features_Primitives_ConeSegment_Set_negativeSideRadius(MR_Features_Primitives_ConeSegment *_this, float value);

//! Cap radius in the direction opposite to `dir`.
/// Returns a mutable pointer to a member variable of class `MR::Features::Primitives::ConeSegment` named `negativeSideRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Features_Primitives_ConeSegment_GetMutable_negativeSideRadius(MR_Features_Primitives_ConeSegment *_this);

//! Distance from the `center` to the cap in the `dir` direction.
/// Returns a pointer to a member variable of class `MR::Features::Primitives::ConeSegment` named `positiveLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Features_Primitives_ConeSegment_Get_positiveLength(const MR_Features_Primitives_ConeSegment *_this);

//! Distance from the `center` to the cap in the `dir` direction.
/// Modifies a member variable of class `MR::Features::Primitives::ConeSegment` named `positiveLength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Features_Primitives_ConeSegment_Set_positiveLength(MR_Features_Primitives_ConeSegment *_this, float value);

//! Distance from the `center` to the cap in the `dir` direction.
/// Returns a mutable pointer to a member variable of class `MR::Features::Primitives::ConeSegment` named `positiveLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Features_Primitives_ConeSegment_GetMutable_positiveLength(MR_Features_Primitives_ConeSegment *_this);

//! Distance from the `center` to the cap in the direction opposite to `dir`.
/// Returns a pointer to a member variable of class `MR::Features::Primitives::ConeSegment` named `negativeLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Features_Primitives_ConeSegment_Get_negativeLength(const MR_Features_Primitives_ConeSegment *_this);

//! Distance from the `center` to the cap in the direction opposite to `dir`.
/// Modifies a member variable of class `MR::Features::Primitives::ConeSegment` named `negativeLength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Features_Primitives_ConeSegment_Set_negativeLength(MR_Features_Primitives_ConeSegment *_this, float value);

//! Distance from the `center` to the cap in the direction opposite to `dir`.
/// Returns a mutable pointer to a member variable of class `MR::Features::Primitives::ConeSegment` named `negativeLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Features_Primitives_ConeSegment_GetMutable_negativeLength(MR_Features_Primitives_ConeSegment *_this);

// If true, the cone has no caps and no volume, and all distances (to the conical surface, that is) are positive.
/// Returns a pointer to a member variable of class `MR::Features::Primitives::ConeSegment` named `hollow`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_Features_Primitives_ConeSegment_Get_hollow(const MR_Features_Primitives_ConeSegment *_this);

// If true, the cone has no caps and no volume, and all distances (to the conical surface, that is) are positive.
/// Modifies a member variable of class `MR::Features::Primitives::ConeSegment` named `hollow`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Features_Primitives_ConeSegment_Set_hollow(MR_Features_Primitives_ConeSegment *_this, bool value);

// If true, the cone has no caps and no volume, and all distances (to the conical surface, that is) are positive.
/// Returns a mutable pointer to a member variable of class `MR::Features::Primitives::ConeSegment` named `hollow`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_Features_Primitives_ConeSegment_GetMutable_hollow(MR_Features_Primitives_ConeSegment *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Primitives_ConeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Primitives_ConeSegment *MR_Features_Primitives_ConeSegment_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Features_Primitives_ConeSegment_DestroyArray()`.
/// Use `MR_Features_Primitives_ConeSegment_OffsetMutablePtr()` and `MR_Features_Primitives_ConeSegment_OffsetPtr()` to access the array elements.
MRC_API MR_Features_Primitives_ConeSegment *MR_Features_Primitives_ConeSegment_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Features::Primitives::ConeSegment` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Primitives_ConeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Primitives_ConeSegment *MR_Features_Primitives_ConeSegment_ConstructFrom(MR_Vector3f referencePoint, MR_Vector3f dir, float positiveSideRadius, float negativeSideRadius, float positiveLength, float negativeLength, bool hollow);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Features_Primitives_ConeSegment *MR_Features_Primitives_ConeSegment_OffsetPtr(const MR_Features_Primitives_ConeSegment *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Features_Primitives_ConeSegment *MR_Features_Primitives_ConeSegment_OffsetMutablePtr(MR_Features_Primitives_ConeSegment *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Features::Primitives::ConeSegment`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Primitives_ConeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Primitives_ConeSegment *MR_Features_Primitives_ConeSegment_ConstructFromAnother(const MR_Features_Primitives_ConeSegment *_other);

/// Destroys a heap-allocated instance of `MR_Features_Primitives_ConeSegment`. Does nothing if the pointer is null.
MRC_API void MR_Features_Primitives_ConeSegment_Destroy(const MR_Features_Primitives_ConeSegment *_this);

/// Destroys a heap-allocated array of `MR_Features_Primitives_ConeSegment`. Does nothing if the pointer is null.
MRC_API void MR_Features_Primitives_ConeSegment_DestroyArray(const MR_Features_Primitives_ConeSegment *_this);

/// Generated from a method of class `MR::Features::Primitives::ConeSegment` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Features_Primitives_ConeSegment *MR_Features_Primitives_ConeSegment_AssignFromAnother(MR_Features_Primitives_ConeSegment *_this, const MR_Features_Primitives_ConeSegment *_other);

/// Generated from a method of class `MR::Features::Primitives::ConeSegment` named `isZeroRadius`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Features_Primitives_ConeSegment_isZeroRadius(const MR_Features_Primitives_ConeSegment *_this);

/// Generated from a method of class `MR::Features::Primitives::ConeSegment` named `isCircle`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Features_Primitives_ConeSegment_isCircle(const MR_Features_Primitives_ConeSegment *_this);

// Returns the length. Can be infinite.
/// Generated from a method of class `MR::Features::Primitives::ConeSegment` named `length`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Features_Primitives_ConeSegment_length(const MR_Features_Primitives_ConeSegment *_this);

// Returns the center point (unlike `referencePoint`, which can actually be off-center).
// For half-infinite objects, returns the finite end.
/// Generated from a method of class `MR::Features::Primitives::ConeSegment` named `centerPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Sphere3f_Destroy()` to free it when you're done using it.
MRC_API MR_Sphere3f *MR_Features_Primitives_ConeSegment_centerPoint(const MR_Features_Primitives_ConeSegment *_this);

// Extends the object to infinity in one direction. The radius in the extended direction becomes equal to the radius in the opposite direction.
/// Generated from a method of class `MR::Features::Primitives::ConeSegment` named `extendToInfinity`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Primitives_ConeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Primitives_ConeSegment *MR_Features_Primitives_ConeSegment_extendToInfinity_1(const MR_Features_Primitives_ConeSegment *_this, bool negative);

// Extends the object to infinity in both directions. This is equivalent to `.extendToInfinity(false).extendToInfinity(true)`,
// except that calling it with `positiveSideRadius != negativeSideRadius` is illegal and triggers an assertion.
/// Generated from a method of class `MR::Features::Primitives::ConeSegment` named `extendToInfinity`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Primitives_ConeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Primitives_ConeSegment *MR_Features_Primitives_ConeSegment_extendToInfinity_0(const MR_Features_Primitives_ConeSegment *_this);

// Untruncates a truncated cone. If it's not a cone at all, returns the object unchanged and triggers an assertion.
/// Generated from a method of class `MR::Features::Primitives::ConeSegment` named `untruncateCone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Primitives_ConeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Primitives_ConeSegment *MR_Features_Primitives_ConeSegment_untruncateCone(const MR_Features_Primitives_ConeSegment *_this);

// Returns a finite axis. For circles, you might want to immediately `extendToInfinity()` it.
/// Generated from a method of class `MR::Features::Primitives::ConeSegment` named `axis`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Primitives_ConeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Primitives_ConeSegment *MR_Features_Primitives_ConeSegment_axis(const MR_Features_Primitives_ConeSegment *_this);

// Returns a center of one of the two base circles.
/// Generated from a method of class `MR::Features::Primitives::ConeSegment` named `basePoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Sphere3f_Destroy()` to free it when you're done using it.
MRC_API MR_Sphere3f *MR_Features_Primitives_ConeSegment_basePoint(const MR_Features_Primitives_ConeSegment *_this, bool negative);

// Returns one of the two base planes.
/// Generated from a method of class `MR::Features::Primitives::ConeSegment` named `basePlane`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Primitives_Plane_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Primitives_Plane *MR_Features_Primitives_ConeSegment_basePlane(const MR_Features_Primitives_ConeSegment *_this, bool negative);

// Returns one of the two base circles.
/// Generated from a method of class `MR::Features::Primitives::ConeSegment` named `baseCircle`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Primitives_ConeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Primitives_ConeSegment *MR_Features_Primitives_ConeSegment_baseCircle(const MR_Features_Primitives_ConeSegment *_this, bool negative);

/// Generated from function `MR::Features::Primitives::operator==`.
/// Parameter `_1` can not be null. It is a single object.
/// Parameter `_2` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Features_Primitives_ConeSegment(const MR_Features_Primitives_ConeSegment *_1, const MR_Features_Primitives_ConeSegment *_2);

// Those map various MR types to our primitives. Some of those are identity functions.
/// Generated from function `MR::Features::toPrimitive`.
/// Parameter `point` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Sphere3f_Destroy()` to free it when you're done using it.
MRC_API MR_Sphere3f *MR_Features_toPrimitive_MR_Vector3f(const MR_Vector3f *point);

/// Generated from function `MR::Features::toPrimitive`.
/// Parameter `sphere` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Sphere3f_Destroy()` to free it when you're done using it.
MRC_API MR_Sphere3f *MR_Features_toPrimitive_MR_Sphere3f(const MR_Sphere3f *sphere);

/// Generated from function `MR::Features::toPrimitive`.
/// Parameter `line` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Primitives_ConeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Primitives_ConeSegment *MR_Features_toPrimitive_MR_Line3f(const MR_Line3f *line);

/// Generated from function `MR::Features::toPrimitive`.
/// Parameter `segm` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Primitives_ConeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Primitives_ConeSegment *MR_Features_toPrimitive_MR_LineSegm3f(const MR_LineSegm3f *segm);

/// Generated from function `MR::Features::toPrimitive`.
/// Parameter `cyl` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Primitives_ConeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Primitives_ConeSegment *MR_Features_toPrimitive_MR_Cylinder3f(const MR_Cylinder3f *cyl);

/// Generated from function `MR::Features::toPrimitive`.
/// Parameter `cone` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Primitives_ConeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Primitives_ConeSegment *MR_Features_toPrimitive_MR_Cone3f(const MR_Cone3f *cone);

//! `normal` doesn't need to be normalized.
/// Generated from function `MR::Features::primitiveCircle`.
/// Parameter `point` can not be null. It is a single object.
/// Parameter `normal` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Primitives_ConeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Primitives_ConeSegment *MR_Features_primitiveCircle(const MR_Vector3f *point, const MR_Vector3f *normal, float rad);

//! `a` and `b` are centers of the sides.
/// Generated from function `MR::Features::primitiveCylinder`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Primitives_ConeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Primitives_ConeSegment *MR_Features_primitiveCylinder(const MR_Vector3f *a, const MR_Vector3f *b, float rad);

//! `a` is the center of the base, `b` is the pointy end.
/// Generated from function `MR::Features::primitiveCone`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Primitives_ConeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Primitives_ConeSegment *MR_Features_primitiveCone(const MR_Vector3f *a, const MR_Vector3f *b, float rad);

// Returns null if the object type is unknown. This overload ignores the parent xf.
/// Generated from function `MR::Features::primitiveFromObject`.
/// Parameter `object` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *MR_Features_primitiveFromObject(const MR_Object *object);

// Returns null if the object type is unknown. This overload respects the parent's `worldXf()`.
/// Generated from function `MR::Features::primitiveFromObjectWithWorldXf`.
/// Parameter `object` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *MR_Features_primitiveFromObjectWithWorldXf(const MR_Object *object);

// Can return null on some primitive configurations.
// `infiniteExtent` is how large we make "infinite" objects. Half-infinite objects divide this by 2.
/// Generated from function `MR::Features::primitiveToObject`.
/// Parameter `primitive` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_FeatureObject_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_FeatureObject *MR_Features_primitiveToObject(const MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *primitive, float infiniteExtent);

// Transform a primitive by an xf.
// Non-uniform scaling and skewing are not supported.
/// Generated from function `MR::Features::transformPrimitive`.
/// Parameter `xf` can not be null. It is a single object.
/// Parameter `primitive` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Sphere3f_Destroy()` to free it when you're done using it.
MRC_API MR_Sphere3f *MR_Features_transformPrimitive_MR_Sphere3f(const MR_AffineXf3f *xf, const MR_Sphere3f *primitive);

/// Generated from function `MR::Features::transformPrimitive`.
/// Parameter `xf` can not be null. It is a single object.
/// Parameter `primitive` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Primitives_Plane_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Primitives_Plane *MR_Features_transformPrimitive_MR_Features_Primitives_Plane(const MR_AffineXf3f *xf, const MR_Features_Primitives_Plane *primitive);

/// Generated from function `MR::Features::transformPrimitive`.
/// Parameter `xf` can not be null. It is a single object.
/// Parameter `primitive` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Primitives_ConeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Primitives_ConeSegment *MR_Features_transformPrimitive_MR_Features_Primitives_ConeSegment(const MR_AffineXf3f *xf, const MR_Features_Primitives_ConeSegment *primitive);

/// Generated from function `MR::Features::transformPrimitive`.
/// Parameter `xf` can not be null. It is a single object.
/// Parameter `primitive` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *MR_Features_transformPrimitive_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane(const MR_AffineXf3f *xf, const MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *primitive);

// Exact distance.
/// Returns a pointer to a member variable of class `MR::Features::MeasureResult` named `distance`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Features_MeasureResult_Distance *MR_Features_MeasureResult_Get_distance(const MR_Features_MeasureResult *_this);

// Exact distance.
/// Modifies a member variable of class `MR::Features::MeasureResult` named `distance`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_Features_MeasureResult_Set_distance(MR_Features_MeasureResult *_this, const MR_Features_MeasureResult_Distance *value);

// Exact distance.
/// Returns a mutable pointer to a member variable of class `MR::Features::MeasureResult` named `distance`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Features_MeasureResult_Distance *MR_Features_MeasureResult_GetMutable_distance(MR_Features_MeasureResult *_this);

// Some approximation of the distance.
// For planes and lines, this expects them to be mostly parallel. For everything else, it just takes the feature center.
/// Returns a pointer to a member variable of class `MR::Features::MeasureResult` named `centerDistance`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Features_MeasureResult_Distance *MR_Features_MeasureResult_Get_centerDistance(const MR_Features_MeasureResult *_this);

// Some approximation of the distance.
// For planes and lines, this expects them to be mostly parallel. For everything else, it just takes the feature center.
/// Modifies a member variable of class `MR::Features::MeasureResult` named `centerDistance`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_Features_MeasureResult_Set_centerDistance(MR_Features_MeasureResult *_this, const MR_Features_MeasureResult_Distance *value);

// Some approximation of the distance.
// For planes and lines, this expects them to be mostly parallel. For everything else, it just takes the feature center.
/// Returns a mutable pointer to a member variable of class `MR::Features::MeasureResult` named `centerDistance`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Features_MeasureResult_Distance *MR_Features_MeasureResult_GetMutable_centerDistance(MR_Features_MeasureResult *_this);

/// Returns a pointer to a member variable of class `MR::Features::MeasureResult` named `angle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Features_MeasureResult_Angle *MR_Features_MeasureResult_Get_angle(const MR_Features_MeasureResult *_this);

/// Modifies a member variable of class `MR::Features::MeasureResult` named `angle`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_Features_MeasureResult_Set_angle(MR_Features_MeasureResult *_this, const MR_Features_MeasureResult_Angle *value);

/// Returns a mutable pointer to a member variable of class `MR::Features::MeasureResult` named `angle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Features_MeasureResult_Angle *MR_Features_MeasureResult_GetMutable_angle(MR_Features_MeasureResult *_this);

// The primitives obtained from intersecting those two.
/// Returns a pointer to a member variable of class `MR::Features::MeasureResult` named `intersections`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *MR_Features_MeasureResult_Get_intersections(const MR_Features_MeasureResult *_this);

// The primitives obtained from intersecting those two.
/// Modifies a member variable of class `MR::Features::MeasureResult` named `intersections`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Features_MeasureResult_Set_intersections(MR_Features_MeasureResult *_this, MR_PassBy value_pass_by, MR_std_vector_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *value);

// The primitives obtained from intersecting those two.
/// Returns a mutable pointer to a member variable of class `MR::Features::MeasureResult` named `intersections`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *MR_Features_MeasureResult_GetMutable_intersections(MR_Features_MeasureResult *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_MeasureResult_Destroy()` to free it when you're done using it.
MRC_API MR_Features_MeasureResult *MR_Features_MeasureResult_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Features_MeasureResult_DestroyArray()`.
/// Use `MR_Features_MeasureResult_OffsetMutablePtr()` and `MR_Features_MeasureResult_OffsetPtr()` to access the array elements.
MRC_API MR_Features_MeasureResult *MR_Features_MeasureResult_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Features::MeasureResult` elementwise.
/// Parameter `distance` can not be null. It is a single object.
/// Parameter `centerDistance` can not be null. It is a single object.
/// Parameter `angle` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_MeasureResult_Destroy()` to free it when you're done using it.
MRC_API MR_Features_MeasureResult *MR_Features_MeasureResult_ConstructFrom(const MR_Features_MeasureResult_Distance *distance, const MR_Features_MeasureResult_Distance *centerDistance, const MR_Features_MeasureResult_Angle *angle, MR_PassBy intersections_pass_by, MR_std_vector_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *intersections);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Features_MeasureResult *MR_Features_MeasureResult_OffsetPtr(const MR_Features_MeasureResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Features_MeasureResult *MR_Features_MeasureResult_OffsetMutablePtr(MR_Features_MeasureResult *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Features::MeasureResult`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_MeasureResult_Destroy()` to free it when you're done using it.
MRC_API MR_Features_MeasureResult *MR_Features_MeasureResult_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Features_MeasureResult *_other);

/// Destroys a heap-allocated instance of `MR_Features_MeasureResult`. Does nothing if the pointer is null.
MRC_API void MR_Features_MeasureResult_Destroy(const MR_Features_MeasureResult *_this);

/// Destroys a heap-allocated array of `MR_Features_MeasureResult`. Does nothing if the pointer is null.
MRC_API void MR_Features_MeasureResult_DestroyArray(const MR_Features_MeasureResult *_this);

/// Generated from a method of class `MR::Features::MeasureResult` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Features_MeasureResult *MR_Features_MeasureResult_AssignFromAnother(MR_Features_MeasureResult *_this, MR_PassBy _other_pass_by, MR_Features_MeasureResult *_other);

// Modifies the object to swap A and B;
/// Generated from a method of class `MR::Features::MeasureResult` named `swapObjects`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Features_MeasureResult_swapObjects(MR_Features_MeasureResult *_this);

/// Returns a pointer to a member variable of class `MR::Features::MeasureResult::BasicPart` named `status`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Features_MeasureResult_Status *MR_Features_MeasureResult_BasicPart_Get_status(const MR_Features_MeasureResult_BasicPart *_this);

/// Modifies a member variable of class `MR::Features::MeasureResult::BasicPart` named `status`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Features_MeasureResult_BasicPart_Set_status(MR_Features_MeasureResult_BasicPart *_this, MR_Features_MeasureResult_Status value);

/// Returns a mutable pointer to a member variable of class `MR::Features::MeasureResult::BasicPart` named `status`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Features_MeasureResult_Status *MR_Features_MeasureResult_BasicPart_GetMutable_status(MR_Features_MeasureResult_BasicPart *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_MeasureResult_BasicPart_Destroy()` to free it when you're done using it.
MRC_API MR_Features_MeasureResult_BasicPart *MR_Features_MeasureResult_BasicPart_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Features_MeasureResult_BasicPart_DestroyArray()`.
/// Use `MR_Features_MeasureResult_BasicPart_OffsetMutablePtr()` and `MR_Features_MeasureResult_BasicPart_OffsetPtr()` to access the array elements.
MRC_API MR_Features_MeasureResult_BasicPart *MR_Features_MeasureResult_BasicPart_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Features::MeasureResult::BasicPart` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_MeasureResult_BasicPart_Destroy()` to free it when you're done using it.
MRC_API MR_Features_MeasureResult_BasicPart *MR_Features_MeasureResult_BasicPart_ConstructFrom(MR_Features_MeasureResult_Status status);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Features_MeasureResult_BasicPart *MR_Features_MeasureResult_BasicPart_OffsetPtr(const MR_Features_MeasureResult_BasicPart *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Features_MeasureResult_BasicPart *MR_Features_MeasureResult_BasicPart_OffsetMutablePtr(MR_Features_MeasureResult_BasicPart *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::Features::MeasureResult::BasicPart` to a derived class `MR::Features::MeasureResult::Angle`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_Features_MeasureResult_Angle *MR_Features_MeasureResult_BasicPart_StaticDowncastTo_MR_Features_MeasureResult_Angle(const MR_Features_MeasureResult_BasicPart *object);

/// Downcasts an instance of `MR::Features::MeasureResult::BasicPart` to a derived class `MR::Features::MeasureResult::Angle`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_Features_MeasureResult_Angle *MR_Features_MeasureResult_BasicPart_MutableStaticDowncastTo_MR_Features_MeasureResult_Angle(MR_Features_MeasureResult_BasicPart *object);

/// Downcasts an instance of `MR::Features::MeasureResult::BasicPart` to a derived class `MR::Features::MeasureResult::Distance`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_Features_MeasureResult_Distance *MR_Features_MeasureResult_BasicPart_StaticDowncastTo_MR_Features_MeasureResult_Distance(const MR_Features_MeasureResult_BasicPart *object);

/// Downcasts an instance of `MR::Features::MeasureResult::BasicPart` to a derived class `MR::Features::MeasureResult::Distance`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_Features_MeasureResult_Distance *MR_Features_MeasureResult_BasicPart_MutableStaticDowncastTo_MR_Features_MeasureResult_Distance(MR_Features_MeasureResult_BasicPart *object);

/// Generated from a constructor of class `MR::Features::MeasureResult::BasicPart`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_MeasureResult_BasicPart_Destroy()` to free it when you're done using it.
MRC_API MR_Features_MeasureResult_BasicPart *MR_Features_MeasureResult_BasicPart_ConstructFromAnother(const MR_Features_MeasureResult_BasicPart *_other);

/// Destroys a heap-allocated instance of `MR_Features_MeasureResult_BasicPart`. Does nothing if the pointer is null.
MRC_API void MR_Features_MeasureResult_BasicPart_Destroy(const MR_Features_MeasureResult_BasicPart *_this);

/// Destroys a heap-allocated array of `MR_Features_MeasureResult_BasicPart`. Does nothing if the pointer is null.
MRC_API void MR_Features_MeasureResult_BasicPart_DestroyArray(const MR_Features_MeasureResult_BasicPart *_this);

/// Generated from a conversion operator of class `MR::Features::MeasureResult::BasicPart` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Features_MeasureResult_BasicPart_ConvertTo_bool(const MR_Features_MeasureResult_BasicPart *_this);

/// Generated from a method of class `MR::Features::MeasureResult::BasicPart` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Features_MeasureResult_BasicPart *MR_Features_MeasureResult_BasicPart_AssignFromAnother(MR_Features_MeasureResult_BasicPart *_this, const MR_Features_MeasureResult_BasicPart *_other);

// This is a separate field because it can be negative.
/// Returns a pointer to a member variable of class `MR::Features::MeasureResult::Distance` named `distance`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Features_MeasureResult_Distance_Get_distance(const MR_Features_MeasureResult_Distance *_this);

// This is a separate field because it can be negative.
/// Modifies a member variable of class `MR::Features::MeasureResult::Distance` named `distance`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Features_MeasureResult_Distance_Set_distance(MR_Features_MeasureResult_Distance *_this, float value);

// This is a separate field because it can be negative.
/// Returns a mutable pointer to a member variable of class `MR::Features::MeasureResult::Distance` named `distance`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Features_MeasureResult_Distance_GetMutable_distance(MR_Features_MeasureResult_Distance *_this);

/// Returns a pointer to a member variable of class `MR::Features::MeasureResult::Distance` named `closestPointA`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_Features_MeasureResult_Distance_Get_closestPointA(const MR_Features_MeasureResult_Distance *_this);

/// Modifies a member variable of class `MR::Features::MeasureResult::Distance` named `closestPointA`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Features_MeasureResult_Distance_Set_closestPointA(MR_Features_MeasureResult_Distance *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::Features::MeasureResult::Distance` named `closestPointA`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_Features_MeasureResult_Distance_GetMutable_closestPointA(MR_Features_MeasureResult_Distance *_this);

/// Returns a pointer to a member variable of class `MR::Features::MeasureResult::Distance` named `closestPointB`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_Features_MeasureResult_Distance_Get_closestPointB(const MR_Features_MeasureResult_Distance *_this);

/// Modifies a member variable of class `MR::Features::MeasureResult::Distance` named `closestPointB`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Features_MeasureResult_Distance_Set_closestPointB(MR_Features_MeasureResult_Distance *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::Features::MeasureResult::Distance` named `closestPointB`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_Features_MeasureResult_Distance_GetMutable_closestPointB(MR_Features_MeasureResult_Distance *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_MeasureResult_Distance_Destroy()` to free it when you're done using it.
MRC_API MR_Features_MeasureResult_Distance *MR_Features_MeasureResult_Distance_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Features_MeasureResult_Distance_DestroyArray()`.
/// Use `MR_Features_MeasureResult_Distance_OffsetMutablePtr()` and `MR_Features_MeasureResult_Distance_OffsetPtr()` to access the array elements.
MRC_API MR_Features_MeasureResult_Distance *MR_Features_MeasureResult_Distance_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Features_MeasureResult_Distance *MR_Features_MeasureResult_Distance_OffsetPtr(const MR_Features_MeasureResult_Distance *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Features_MeasureResult_Distance *MR_Features_MeasureResult_Distance_OffsetMutablePtr(MR_Features_MeasureResult_Distance *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::Features::MeasureResult::Distance` to its base class `MR::Features::MeasureResult::BasicPart`.
/// This version is acting on mutable pointers.
MRC_API const MR_Features_MeasureResult_BasicPart *MR_Features_MeasureResult_Distance_UpcastTo_MR_Features_MeasureResult_BasicPart(const MR_Features_MeasureResult_Distance *object);

/// Upcasts an instance of `MR::Features::MeasureResult::Distance` to its base class `MR::Features::MeasureResult::BasicPart`.
MRC_API MR_Features_MeasureResult_BasicPart *MR_Features_MeasureResult_Distance_MutableUpcastTo_MR_Features_MeasureResult_BasicPart(MR_Features_MeasureResult_Distance *object);

/// Generated from a constructor of class `MR::Features::MeasureResult::Distance`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_MeasureResult_Distance_Destroy()` to free it when you're done using it.
MRC_API MR_Features_MeasureResult_Distance *MR_Features_MeasureResult_Distance_ConstructFromAnother(const MR_Features_MeasureResult_Distance *_other);

/// Destroys a heap-allocated instance of `MR_Features_MeasureResult_Distance`. Does nothing if the pointer is null.
MRC_API void MR_Features_MeasureResult_Distance_Destroy(const MR_Features_MeasureResult_Distance *_this);

/// Destroys a heap-allocated array of `MR_Features_MeasureResult_Distance`. Does nothing if the pointer is null.
MRC_API void MR_Features_MeasureResult_Distance_DestroyArray(const MR_Features_MeasureResult_Distance *_this);

/// Generated from a method of class `MR::Features::MeasureResult::Distance` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Features_MeasureResult_Distance *MR_Features_MeasureResult_Distance_AssignFromAnother(MR_Features_MeasureResult_Distance *_this, const MR_Features_MeasureResult_Distance *_other);

/// Generated from a method of class `MR::Features::MeasureResult::Distance` named `closestPointFor`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Features_MeasureResult_Distance_closestPointFor(const MR_Features_MeasureResult_Distance *_this, bool b);

/// Returns a pointer to a member variable of class `MR::Features::MeasureResult::Angle` named `pointA`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_Features_MeasureResult_Angle_Get_pointA(const MR_Features_MeasureResult_Angle *_this);

/// Modifies a member variable of class `MR::Features::MeasureResult::Angle` named `pointA`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Features_MeasureResult_Angle_Set_pointA(MR_Features_MeasureResult_Angle *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::Features::MeasureResult::Angle` named `pointA`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_Features_MeasureResult_Angle_GetMutable_pointA(MR_Features_MeasureResult_Angle *_this);

/// Returns a pointer to a member variable of class `MR::Features::MeasureResult::Angle` named `pointB`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_Features_MeasureResult_Angle_Get_pointB(const MR_Features_MeasureResult_Angle *_this);

/// Modifies a member variable of class `MR::Features::MeasureResult::Angle` named `pointB`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Features_MeasureResult_Angle_Set_pointB(MR_Features_MeasureResult_Angle *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::Features::MeasureResult::Angle` named `pointB`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_Features_MeasureResult_Angle_GetMutable_pointB(MR_Features_MeasureResult_Angle *_this);

// Normalized.
/// Returns a pointer to a member variable of class `MR::Features::MeasureResult::Angle` named `dirA`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_Features_MeasureResult_Angle_Get_dirA(const MR_Features_MeasureResult_Angle *_this);

// Normalized.
/// Modifies a member variable of class `MR::Features::MeasureResult::Angle` named `dirA`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Features_MeasureResult_Angle_Set_dirA(MR_Features_MeasureResult_Angle *_this, MR_Vector3f value);

// Normalized.
/// Returns a mutable pointer to a member variable of class `MR::Features::MeasureResult::Angle` named `dirA`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_Features_MeasureResult_Angle_GetMutable_dirA(MR_Features_MeasureResult_Angle *_this);

// ^
/// Returns a pointer to a member variable of class `MR::Features::MeasureResult::Angle` named `dirB`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_Features_MeasureResult_Angle_Get_dirB(const MR_Features_MeasureResult_Angle *_this);

// ^
/// Modifies a member variable of class `MR::Features::MeasureResult::Angle` named `dirB`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Features_MeasureResult_Angle_Set_dirB(MR_Features_MeasureResult_Angle *_this, MR_Vector3f value);

// ^
/// Returns a mutable pointer to a member variable of class `MR::Features::MeasureResult::Angle` named `dirB`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_Features_MeasureResult_Angle_GetMutable_dirB(MR_Features_MeasureResult_Angle *_this);

/// Whether `dir{A,B}` is a surface normal or a line direction.
/// Returns a pointer to a member variable of class `MR::Features::MeasureResult::Angle` named `isSurfaceNormalA`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_Features_MeasureResult_Angle_Get_isSurfaceNormalA(const MR_Features_MeasureResult_Angle *_this);

/// Whether `dir{A,B}` is a surface normal or a line direction.
/// Modifies a member variable of class `MR::Features::MeasureResult::Angle` named `isSurfaceNormalA`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Features_MeasureResult_Angle_Set_isSurfaceNormalA(MR_Features_MeasureResult_Angle *_this, bool value);

/// Whether `dir{A,B}` is a surface normal or a line direction.
/// Returns a mutable pointer to a member variable of class `MR::Features::MeasureResult::Angle` named `isSurfaceNormalA`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_Features_MeasureResult_Angle_GetMutable_isSurfaceNormalA(MR_Features_MeasureResult_Angle *_this);

/// Returns a pointer to a member variable of class `MR::Features::MeasureResult::Angle` named `isSurfaceNormalB`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_Features_MeasureResult_Angle_Get_isSurfaceNormalB(const MR_Features_MeasureResult_Angle *_this);

/// Modifies a member variable of class `MR::Features::MeasureResult::Angle` named `isSurfaceNormalB`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Features_MeasureResult_Angle_Set_isSurfaceNormalB(MR_Features_MeasureResult_Angle *_this, bool value);

/// Returns a mutable pointer to a member variable of class `MR::Features::MeasureResult::Angle` named `isSurfaceNormalB`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_Features_MeasureResult_Angle_GetMutable_isSurfaceNormalB(MR_Features_MeasureResult_Angle *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_MeasureResult_Angle_Destroy()` to free it when you're done using it.
MRC_API MR_Features_MeasureResult_Angle *MR_Features_MeasureResult_Angle_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Features_MeasureResult_Angle_DestroyArray()`.
/// Use `MR_Features_MeasureResult_Angle_OffsetMutablePtr()` and `MR_Features_MeasureResult_Angle_OffsetPtr()` to access the array elements.
MRC_API MR_Features_MeasureResult_Angle *MR_Features_MeasureResult_Angle_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Features_MeasureResult_Angle *MR_Features_MeasureResult_Angle_OffsetPtr(const MR_Features_MeasureResult_Angle *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Features_MeasureResult_Angle *MR_Features_MeasureResult_Angle_OffsetMutablePtr(MR_Features_MeasureResult_Angle *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::Features::MeasureResult::Angle` to its base class `MR::Features::MeasureResult::BasicPart`.
/// This version is acting on mutable pointers.
MRC_API const MR_Features_MeasureResult_BasicPart *MR_Features_MeasureResult_Angle_UpcastTo_MR_Features_MeasureResult_BasicPart(const MR_Features_MeasureResult_Angle *object);

/// Upcasts an instance of `MR::Features::MeasureResult::Angle` to its base class `MR::Features::MeasureResult::BasicPart`.
MRC_API MR_Features_MeasureResult_BasicPart *MR_Features_MeasureResult_Angle_MutableUpcastTo_MR_Features_MeasureResult_BasicPart(MR_Features_MeasureResult_Angle *object);

/// Generated from a constructor of class `MR::Features::MeasureResult::Angle`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_MeasureResult_Angle_Destroy()` to free it when you're done using it.
MRC_API MR_Features_MeasureResult_Angle *MR_Features_MeasureResult_Angle_ConstructFromAnother(const MR_Features_MeasureResult_Angle *_other);

/// Destroys a heap-allocated instance of `MR_Features_MeasureResult_Angle`. Does nothing if the pointer is null.
MRC_API void MR_Features_MeasureResult_Angle_Destroy(const MR_Features_MeasureResult_Angle *_this);

/// Destroys a heap-allocated array of `MR_Features_MeasureResult_Angle`. Does nothing if the pointer is null.
MRC_API void MR_Features_MeasureResult_Angle_DestroyArray(const MR_Features_MeasureResult_Angle *_this);

/// Generated from a method of class `MR::Features::MeasureResult::Angle` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Features_MeasureResult_Angle *MR_Features_MeasureResult_Angle_AssignFromAnother(MR_Features_MeasureResult_Angle *_this, const MR_Features_MeasureResult_Angle *_other);

/// Generated from a method of class `MR::Features::MeasureResult::Angle` named `pointFor`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Features_MeasureResult_Angle_pointFor(const MR_Features_MeasureResult_Angle *_this, bool b);

/// Generated from a method of class `MR::Features::MeasureResult::Angle` named `dirFor`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Features_MeasureResult_Angle_dirFor(const MR_Features_MeasureResult_Angle *_this, bool b);

/// Generated from a method of class `MR::Features::MeasureResult::Angle` named `isSurfaceNormalFor`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Features_MeasureResult_Angle_isSurfaceNormalFor(const MR_Features_MeasureResult_Angle *_this, bool b);

/// Generated from a method of class `MR::Features::MeasureResult::Angle` named `computeAngleInRadians`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Features_MeasureResult_Angle_computeAngleInRadians(const MR_Features_MeasureResult_Angle *_this);

// `MeasureResult::Status` enum to string.
/// Generated from function `MR::Features::toString`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_view_Destroy()` to free it when you're done using it.
MRC_API MR_std_string_view *MR_Features_toString(MR_Features_MeasureResult_Status status);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Traits_Unary_MR_Sphere3f_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Traits_Unary_MR_Sphere3f *MR_Features_Traits_Unary_MR_Sphere3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Features_Traits_Unary_MR_Sphere3f_DestroyArray()`.
/// Use `MR_Features_Traits_Unary_MR_Sphere3f_OffsetMutablePtr()` and `MR_Features_Traits_Unary_MR_Sphere3f_OffsetPtr()` to access the array elements.
MRC_API MR_Features_Traits_Unary_MR_Sphere3f *MR_Features_Traits_Unary_MR_Sphere3f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Features_Traits_Unary_MR_Sphere3f *MR_Features_Traits_Unary_MR_Sphere3f_OffsetPtr(const MR_Features_Traits_Unary_MR_Sphere3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Features_Traits_Unary_MR_Sphere3f *MR_Features_Traits_Unary_MR_Sphere3f_OffsetMutablePtr(MR_Features_Traits_Unary_MR_Sphere3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Features::Traits::Unary<MR::Sphere3f>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Traits_Unary_MR_Sphere3f_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Traits_Unary_MR_Sphere3f *MR_Features_Traits_Unary_MR_Sphere3f_ConstructFromAnother(const MR_Features_Traits_Unary_MR_Sphere3f *_other);

/// Destroys a heap-allocated instance of `MR_Features_Traits_Unary_MR_Sphere3f`. Does nothing if the pointer is null.
MRC_API void MR_Features_Traits_Unary_MR_Sphere3f_Destroy(const MR_Features_Traits_Unary_MR_Sphere3f *_this);

/// Destroys a heap-allocated array of `MR_Features_Traits_Unary_MR_Sphere3f`. Does nothing if the pointer is null.
MRC_API void MR_Features_Traits_Unary_MR_Sphere3f_DestroyArray(const MR_Features_Traits_Unary_MR_Sphere3f *_this);

/// Generated from a method of class `MR::Features::Traits::Unary<MR::Sphere3f>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Features_Traits_Unary_MR_Sphere3f *MR_Features_Traits_Unary_MR_Sphere3f_AssignFromAnother(MR_Features_Traits_Unary_MR_Sphere3f *_this, const MR_Features_Traits_Unary_MR_Sphere3f *_other);

/// Generated from a method of class `MR::Features::Traits::Unary<MR::Sphere3f>` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `prim` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_Features_Traits_Unary_MR_Sphere3f_name(const MR_Features_Traits_Unary_MR_Sphere3f *_this, const MR_Sphere3f *prim);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment *MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment_DestroyArray()`.
/// Use `MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment_OffsetMutablePtr()` and `MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment_OffsetPtr()` to access the array elements.
MRC_API MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment *MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment *MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment_OffsetPtr(const MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment *MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment_OffsetMutablePtr(MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Features::Traits::Unary<MR::Features::Primitives::ConeSegment>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment *MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment_ConstructFromAnother(const MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment *_other);

/// Destroys a heap-allocated instance of `MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment`. Does nothing if the pointer is null.
MRC_API void MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment_Destroy(const MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment *_this);

/// Destroys a heap-allocated array of `MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment`. Does nothing if the pointer is null.
MRC_API void MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment_DestroyArray(const MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment *_this);

/// Generated from a method of class `MR::Features::Traits::Unary<MR::Features::Primitives::ConeSegment>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment *MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment_AssignFromAnother(MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment *_this, const MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment *_other);

/// Generated from a method of class `MR::Features::Traits::Unary<MR::Features::Primitives::ConeSegment>` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `prim` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment_name(const MR_Features_Traits_Unary_MR_Features_Primitives_ConeSegment *_this, const MR_Features_Primitives_ConeSegment *prim);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Traits_Unary_MR_Features_Primitives_Plane_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Traits_Unary_MR_Features_Primitives_Plane *MR_Features_Traits_Unary_MR_Features_Primitives_Plane_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Features_Traits_Unary_MR_Features_Primitives_Plane_DestroyArray()`.
/// Use `MR_Features_Traits_Unary_MR_Features_Primitives_Plane_OffsetMutablePtr()` and `MR_Features_Traits_Unary_MR_Features_Primitives_Plane_OffsetPtr()` to access the array elements.
MRC_API MR_Features_Traits_Unary_MR_Features_Primitives_Plane *MR_Features_Traits_Unary_MR_Features_Primitives_Plane_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Features_Traits_Unary_MR_Features_Primitives_Plane *MR_Features_Traits_Unary_MR_Features_Primitives_Plane_OffsetPtr(const MR_Features_Traits_Unary_MR_Features_Primitives_Plane *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Features_Traits_Unary_MR_Features_Primitives_Plane *MR_Features_Traits_Unary_MR_Features_Primitives_Plane_OffsetMutablePtr(MR_Features_Traits_Unary_MR_Features_Primitives_Plane *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Features::Traits::Unary<MR::Features::Primitives::Plane>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Traits_Unary_MR_Features_Primitives_Plane_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Traits_Unary_MR_Features_Primitives_Plane *MR_Features_Traits_Unary_MR_Features_Primitives_Plane_ConstructFromAnother(const MR_Features_Traits_Unary_MR_Features_Primitives_Plane *_other);

/// Destroys a heap-allocated instance of `MR_Features_Traits_Unary_MR_Features_Primitives_Plane`. Does nothing if the pointer is null.
MRC_API void MR_Features_Traits_Unary_MR_Features_Primitives_Plane_Destroy(const MR_Features_Traits_Unary_MR_Features_Primitives_Plane *_this);

/// Destroys a heap-allocated array of `MR_Features_Traits_Unary_MR_Features_Primitives_Plane`. Does nothing if the pointer is null.
MRC_API void MR_Features_Traits_Unary_MR_Features_Primitives_Plane_DestroyArray(const MR_Features_Traits_Unary_MR_Features_Primitives_Plane *_this);

/// Generated from a method of class `MR::Features::Traits::Unary<MR::Features::Primitives::Plane>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Features_Traits_Unary_MR_Features_Primitives_Plane *MR_Features_Traits_Unary_MR_Features_Primitives_Plane_AssignFromAnother(MR_Features_Traits_Unary_MR_Features_Primitives_Plane *_this, const MR_Features_Traits_Unary_MR_Features_Primitives_Plane *_other);

/// Generated from a method of class `MR::Features::Traits::Unary<MR::Features::Primitives::Plane>` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `prim` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_Features_Traits_Unary_MR_Features_Primitives_Plane_name(const MR_Features_Traits_Unary_MR_Features_Primitives_Plane *_this, const MR_Features_Primitives_Plane *prim);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f *MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f_DestroyArray()`.
/// Use `MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f_OffsetMutablePtr()` and `MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f_OffsetPtr()` to access the array elements.
MRC_API MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f *MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f *MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f_OffsetPtr(const MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f *MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f_OffsetMutablePtr(MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Features::Traits::Binary<MR::Sphere3f, MR::Sphere3f>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f *MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f_ConstructFromAnother(const MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f *_other);

/// Destroys a heap-allocated instance of `MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f`. Does nothing if the pointer is null.
MRC_API void MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f_Destroy(const MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f *_this);

/// Destroys a heap-allocated array of `MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f`. Does nothing if the pointer is null.
MRC_API void MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f_DestroyArray(const MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f *_this);

/// Generated from a method of class `MR::Features::Traits::Binary<MR::Sphere3f, MR::Sphere3f>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f *MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f_AssignFromAnother(MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f *_this, const MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f *_other);

/// Generated from a method of class `MR::Features::Traits::Binary<MR::Sphere3f, MR::Sphere3f>` named `measure`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_MeasureResult_Destroy()` to free it when you're done using it.
MRC_API MR_Features_MeasureResult *MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f_measure(const MR_Features_Traits_Binary_MR_Sphere3f_MR_Sphere3f *_this, const MR_Sphere3f *a, const MR_Sphere3f *b);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f *MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f_DestroyArray()`.
/// Use `MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f_OffsetMutablePtr()` and `MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f_OffsetPtr()` to access the array elements.
MRC_API MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f *MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f *MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f_OffsetPtr(const MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f *MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f_OffsetMutablePtr(MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Features::Traits::Binary<MR::Features::Primitives::ConeSegment, MR::Sphere3f>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f *MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f_ConstructFromAnother(const MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f *_other);

/// Destroys a heap-allocated instance of `MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f`. Does nothing if the pointer is null.
MRC_API void MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f_Destroy(const MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f *_this);

/// Destroys a heap-allocated array of `MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f`. Does nothing if the pointer is null.
MRC_API void MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f_DestroyArray(const MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f *_this);

/// Generated from a method of class `MR::Features::Traits::Binary<MR::Features::Primitives::ConeSegment, MR::Sphere3f>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f *MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f_AssignFromAnother(MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f *_this, const MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f *_other);

/// Generated from a method of class `MR::Features::Traits::Binary<MR::Features::Primitives::ConeSegment, MR::Sphere3f>` named `measure`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_MeasureResult_Destroy()` to free it when you're done using it.
MRC_API MR_Features_MeasureResult *MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f_measure(const MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Sphere3f *_this, const MR_Features_Primitives_ConeSegment *a, const MR_Sphere3f *b);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f *MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f_DestroyArray()`.
/// Use `MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f_OffsetMutablePtr()` and `MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f_OffsetPtr()` to access the array elements.
MRC_API MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f *MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f *MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f_OffsetPtr(const MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f *MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f_OffsetMutablePtr(MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Features::Traits::Binary<MR::Features::Primitives::Plane, MR::Sphere3f>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f *MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f_ConstructFromAnother(const MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f *_other);

/// Destroys a heap-allocated instance of `MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f`. Does nothing if the pointer is null.
MRC_API void MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f_Destroy(const MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f *_this);

/// Destroys a heap-allocated array of `MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f`. Does nothing if the pointer is null.
MRC_API void MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f_DestroyArray(const MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f *_this);

/// Generated from a method of class `MR::Features::Traits::Binary<MR::Features::Primitives::Plane, MR::Sphere3f>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f *MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f_AssignFromAnother(MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f *_this, const MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f *_other);

/// Generated from a method of class `MR::Features::Traits::Binary<MR::Features::Primitives::Plane, MR::Sphere3f>` named `measure`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_MeasureResult_Destroy()` to free it when you're done using it.
MRC_API MR_Features_MeasureResult *MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f_measure(const MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Sphere3f *_this, const MR_Features_Primitives_Plane *a, const MR_Sphere3f *b);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment *MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment_DestroyArray()`.
/// Use `MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment_OffsetMutablePtr()` and `MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment_OffsetPtr()` to access the array elements.
MRC_API MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment *MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment *MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment_OffsetPtr(const MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment *MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment_OffsetMutablePtr(MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Features::Traits::Binary<MR::Features::Primitives::ConeSegment, MR::Features::Primitives::ConeSegment>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment *MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment_ConstructFromAnother(const MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment *_other);

/// Destroys a heap-allocated instance of `MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment`. Does nothing if the pointer is null.
MRC_API void MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment_Destroy(const MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment *_this);

/// Destroys a heap-allocated array of `MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment`. Does nothing if the pointer is null.
MRC_API void MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment_DestroyArray(const MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment *_this);

/// Generated from a method of class `MR::Features::Traits::Binary<MR::Features::Primitives::ConeSegment, MR::Features::Primitives::ConeSegment>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment *MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment_AssignFromAnother(MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment *_this, const MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment *_other);

/// Generated from a method of class `MR::Features::Traits::Binary<MR::Features::Primitives::ConeSegment, MR::Features::Primitives::ConeSegment>` named `measure`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_MeasureResult_Destroy()` to free it when you're done using it.
MRC_API MR_Features_MeasureResult *MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment_measure(const MR_Features_Traits_Binary_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_ConeSegment *_this, const MR_Features_Primitives_ConeSegment *a, const MR_Features_Primitives_ConeSegment *b);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment *MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment_DestroyArray()`.
/// Use `MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment_OffsetMutablePtr()` and `MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment_OffsetPtr()` to access the array elements.
MRC_API MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment *MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment *MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment_OffsetPtr(const MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment *MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment_OffsetMutablePtr(MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Features::Traits::Binary<MR::Features::Primitives::Plane, MR::Features::Primitives::ConeSegment>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment *MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment_ConstructFromAnother(const MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment *_other);

/// Destroys a heap-allocated instance of `MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment`. Does nothing if the pointer is null.
MRC_API void MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment_Destroy(const MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment *_this);

/// Destroys a heap-allocated array of `MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment`. Does nothing if the pointer is null.
MRC_API void MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment_DestroyArray(const MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment *_this);

/// Generated from a method of class `MR::Features::Traits::Binary<MR::Features::Primitives::Plane, MR::Features::Primitives::ConeSegment>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment *MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment_AssignFromAnother(MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment *_this, const MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment *_other);

/// Generated from a method of class `MR::Features::Traits::Binary<MR::Features::Primitives::Plane, MR::Features::Primitives::ConeSegment>` named `measure`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_MeasureResult_Destroy()` to free it when you're done using it.
MRC_API MR_Features_MeasureResult *MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment_measure(const MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_ConeSegment *_this, const MR_Features_Primitives_Plane *a, const MR_Features_Primitives_ConeSegment *b);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane *MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane_DestroyArray()`.
/// Use `MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane_OffsetMutablePtr()` and `MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane_OffsetPtr()` to access the array elements.
MRC_API MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane *MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane *MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane_OffsetPtr(const MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane *MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane_OffsetMutablePtr(MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Features::Traits::Binary<MR::Features::Primitives::Plane, MR::Features::Primitives::Plane>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane_Destroy()` to free it when you're done using it.
MRC_API MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane *MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane_ConstructFromAnother(const MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane *_other);

/// Destroys a heap-allocated instance of `MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane`. Does nothing if the pointer is null.
MRC_API void MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane_Destroy(const MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane *_this);

/// Destroys a heap-allocated array of `MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane`. Does nothing if the pointer is null.
MRC_API void MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane_DestroyArray(const MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane *_this);

/// Generated from a method of class `MR::Features::Traits::Binary<MR::Features::Primitives::Plane, MR::Features::Primitives::Plane>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane *MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane_AssignFromAnother(MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane *_this, const MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane *_other);

/// Generated from a method of class `MR::Features::Traits::Binary<MR::Features::Primitives::Plane, MR::Features::Primitives::Plane>` named `measure`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_MeasureResult_Destroy()` to free it when you're done using it.
MRC_API MR_Features_MeasureResult *MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane_measure(const MR_Features_Traits_Binary_MR_Features_Primitives_Plane_MR_Features_Primitives_Plane *_this, const MR_Features_Primitives_Plane *a, const MR_Features_Primitives_Plane *b);

// Same but for a variant.
/// Generated from function `MR::Features::name`.
/// Parameter `var` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_Features_name(const MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *var);

// Same, but with variants as both argument.
/// Generated from function `MR::Features::measure`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Features_MeasureResult_Destroy()` to free it when you're done using it.
MRC_API MR_Features_MeasureResult *MR_Features_measure(const MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *a, const MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *b);

#ifdef __cplusplus
} // extern "C"
#endif
