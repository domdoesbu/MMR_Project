// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_EdgePoint MR_EdgePoint; // Defined in `#include <MRCMesh/MREdgePoint.h>`.
typedef struct MR_IntersectionPrecomputes2_double MR_IntersectionPrecomputes2_double; // Defined in `#include <MRCMesh/MRIntersectionPrecomputes2.h>`.
typedef struct MR_IntersectionPrecomputes2_float MR_IntersectionPrecomputes2_float; // Defined in `#include <MRCMesh/MRIntersectionPrecomputes2.h>`.
typedef struct MR_Line2d MR_Line2d; // Defined in `#include <MRCMesh/MRLine.h>`.
typedef struct MR_Line2f MR_Line2f; // Defined in `#include <MRCMesh/MRLine.h>`.
typedef struct MR_Polyline2 MR_Polyline2; // Defined in `#include <MRCMesh/MRPolyline.h>`.
typedef struct MR_Vector2f MR_Vector2f; // Defined in `#include <MRCMesh/MRVector2.h>`.
typedef struct MR_std_function_MR_Processing_from_const_MR_EdgePoint_ref_double_double_ref MR_std_function_MR_Processing_from_const_MR_EdgePoint_ref_double_double_ref; // Defined in `#include <MRCMisc/std_function_MR_Processing_from_const_MR_EdgePoint_ref_double_double_ref.h>`.
typedef struct MR_std_function_MR_Processing_from_const_MR_EdgePoint_ref_float_float_ref MR_std_function_MR_Processing_from_const_MR_EdgePoint_ref_float_float_ref; // Defined in `#include <MRCMisc/std_function_MR_Processing_from_const_MR_EdgePoint_ref_float_float_ref.h>`.
typedef struct MR_std_optional_MR_PolylineIntersectionResult2 MR_std_optional_MR_PolylineIntersectionResult2; // Defined in `#include <MRCMisc/std_optional_MR_PolylineIntersectionResult2.h>`.


/// Generated from class `MR::PolylineIntersectionResult2`.
typedef struct MR_PolylineIntersectionResult2 MR_PolylineIntersectionResult2;

/**
* \brief detect if given point is inside polyline, by counting ray intersections
* \param polyline input polyline
* \param point input point
*/
/// Generated from function `MR::isPointInsidePolyline`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
MRC_API bool MR_isPointInsidePolyline(const MR_Polyline2 *polyline, const MR_Vector2f *point);

/// intersection point in polyline
/// Returns a pointer to a member variable of class `MR::PolylineIntersectionResult2` named `edgePoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_EdgePoint *MR_PolylineIntersectionResult2_Get_edgePoint(const MR_PolylineIntersectionResult2 *_this);

/// intersection point in polyline
/// Modifies a member variable of class `MR::PolylineIntersectionResult2` named `edgePoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_PolylineIntersectionResult2_Set_edgePoint(MR_PolylineIntersectionResult2 *_this, const MR_EdgePoint *value);

/// intersection point in polyline
/// Returns a mutable pointer to a member variable of class `MR::PolylineIntersectionResult2` named `edgePoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgePoint *MR_PolylineIntersectionResult2_GetMutable_edgePoint(MR_PolylineIntersectionResult2 *_this);

/// stores the distance from ray origin to the intersection point in direction units
/// Returns a pointer to a member variable of class `MR::PolylineIntersectionResult2` named `distanceAlongLine`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_PolylineIntersectionResult2_Get_distanceAlongLine(const MR_PolylineIntersectionResult2 *_this);

/// stores the distance from ray origin to the intersection point in direction units
/// Modifies a member variable of class `MR::PolylineIntersectionResult2` named `distanceAlongLine`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineIntersectionResult2_Set_distanceAlongLine(MR_PolylineIntersectionResult2 *_this, float value);

/// stores the distance from ray origin to the intersection point in direction units
/// Returns a mutable pointer to a member variable of class `MR::PolylineIntersectionResult2` named `distanceAlongLine`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_PolylineIntersectionResult2_GetMutable_distanceAlongLine(MR_PolylineIntersectionResult2 *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineIntersectionResult2_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineIntersectionResult2 *MR_PolylineIntersectionResult2_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PolylineIntersectionResult2_DestroyArray()`.
/// Use `MR_PolylineIntersectionResult2_OffsetMutablePtr()` and `MR_PolylineIntersectionResult2_OffsetPtr()` to access the array elements.
MRC_API MR_PolylineIntersectionResult2 *MR_PolylineIntersectionResult2_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::PolylineIntersectionResult2` elementwise.
/// Parameter `edgePoint` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineIntersectionResult2_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineIntersectionResult2 *MR_PolylineIntersectionResult2_ConstructFrom(const MR_EdgePoint *edgePoint, float distanceAlongLine);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PolylineIntersectionResult2 *MR_PolylineIntersectionResult2_OffsetPtr(const MR_PolylineIntersectionResult2 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PolylineIntersectionResult2 *MR_PolylineIntersectionResult2_OffsetMutablePtr(MR_PolylineIntersectionResult2 *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PolylineIntersectionResult2`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineIntersectionResult2_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineIntersectionResult2 *MR_PolylineIntersectionResult2_ConstructFromAnother(const MR_PolylineIntersectionResult2 *_other);

/// Destroys a heap-allocated instance of `MR_PolylineIntersectionResult2`. Does nothing if the pointer is null.
MRC_API void MR_PolylineIntersectionResult2_Destroy(const MR_PolylineIntersectionResult2 *_this);

/// Destroys a heap-allocated array of `MR_PolylineIntersectionResult2`. Does nothing if the pointer is null.
MRC_API void MR_PolylineIntersectionResult2_DestroyArray(const MR_PolylineIntersectionResult2 *_this);

/// Generated from a method of class `MR::PolylineIntersectionResult2` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PolylineIntersectionResult2 *MR_PolylineIntersectionResult2_AssignFromAnother(MR_PolylineIntersectionResult2 *_this, const MR_PolylineIntersectionResult2 *_other);

/// Finds ray and polyline intersection in float-precision.
/// \p rayStart and \p rayEnd define the interval on the ray to detect an intersection.
/// \p prec can be specified to reuse some precomputations (e.g. for checking many parallel rays).
/// Finds the closest to ray origin intersection (or any intersection for better performance if \p !closestIntersect).
/// Generated from function `MR::rayPolylineIntersect`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `line` can not be null. It is a single object.
/// Parameter `rayStart` has a default argument: `0`, pass a null pointer to use it.
/// Parameter `rayEnd` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `prec` defaults to a null pointer in C++.
/// Parameter `closestIntersect` has a default argument: `true`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_PolylineIntersectionResult2_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_PolylineIntersectionResult2 *MR_rayPolylineIntersect_MR_Line2f(const MR_Polyline2 *polyline, const MR_Line2f *line, const float *rayStart, const float *rayEnd, const MR_IntersectionPrecomputes2_float *prec, const bool *closestIntersect);

/// Finds ray and polyline intersection in double-precision.
/// \p rayStart and \p rayEnd define the interval on the ray to detect an intersection.
/// \p prec can be specified to reuse some precomputations (e.g. for checking many parallel rays).
/// Finds the closest to ray origin intersection (or any intersection for better performance if \p !closestIntersect).
/// Generated from function `MR::rayPolylineIntersect`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `line` can not be null. It is a single object.
/// Parameter `rayStart` has a default argument: `0`, pass a null pointer to use it.
/// Parameter `rayEnd` has a default argument: `1.7976931348623157E+308`, pass a null pointer to use it.
/// Parameter `prec` defaults to a null pointer in C++.
/// Parameter `closestIntersect` has a default argument: `true`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_PolylineIntersectionResult2_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_PolylineIntersectionResult2 *MR_rayPolylineIntersect_MR_Line2d(const MR_Polyline2 *polyline, const MR_Line2d *line, const double *rayStart, const double *rayEnd, const MR_IntersectionPrecomputes2_double *prec, const bool *closestIntersect);

/// Intersects 2D ray and polyline in single-precision.
/// Reports all intersections via given callback with the tendency to do it from ray start to ray end, but without guarantee of exact order.
/// Generated from function `MR::rayPolylineIntersectAll`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `line` can not be null. It is a single object.
/// Parameter `callback` can not be null. It is a single object.
/// Parameter `rayStart` has a default argument: `0.F`, pass a null pointer to use it.
/// Parameter `rayEnd` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `prec` defaults to a null pointer in C++.
MRC_API void MR_rayPolylineIntersectAll_MR_Line2f(const MR_Polyline2 *polyline, const MR_Line2f *line, const MR_std_function_MR_Processing_from_const_MR_EdgePoint_ref_float_float_ref *callback, const float *rayStart, const float *rayEnd, const MR_IntersectionPrecomputes2_float *prec);

/// Intersects 2D ray and polyline in double-precision.
/// Reports all intersections via given callback with the tendency to do it from ray start to ray end, but without guarantee of exact order.
/// Generated from function `MR::rayPolylineIntersectAll`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `line` can not be null. It is a single object.
/// Parameter `callback` can not be null. It is a single object.
/// Parameter `rayStart` has a default argument: `0.`, pass a null pointer to use it.
/// Parameter `rayEnd` has a default argument: `1.7976931348623157E+308`, pass a null pointer to use it.
/// Parameter `prec` defaults to a null pointer in C++.
MRC_API void MR_rayPolylineIntersectAll_MR_Line2d(const MR_Polyline2 *polyline, const MR_Line2d *line, const MR_std_function_MR_Processing_from_const_MR_EdgePoint_ref_double_double_ref *callback, const double *rayStart, const double *rayEnd, const MR_IntersectionPrecomputes2_double *prec);

#ifdef __cplusplus
} // extern "C"
#endif
