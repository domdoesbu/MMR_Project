// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_IntersectionPrecomputes_double MR_IntersectionPrecomputes_double; // Defined in `#include <MRCMesh/MRIntersectionPrecomputes.h>`.
typedef struct MR_IntersectionPrecomputes_float MR_IntersectionPrecomputes_float; // Defined in `#include <MRCMesh/MRIntersectionPrecomputes.h>`.
typedef struct MR_TriPointf MR_TriPointf; // Defined in `#include <MRCMesh/MRTriPoint.h>`.
typedef struct MR_Vector3d MR_Vector3d; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_std_optional_MR_TriIntersectResult MR_std_optional_MR_TriIntersectResult; // Defined in `#include <MRCMisc/std_optional_MR_TriIntersectResult.h>`.


/// Generated from class `MR::TriIntersectResult`.
typedef struct MR_TriIntersectResult MR_TriIntersectResult;

// barycentric representation
/// Returns a pointer to a member variable of class `MR::TriIntersectResult` named `bary`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_TriPointf *MR_TriIntersectResult_Get_bary(const MR_TriIntersectResult *_this);

// barycentric representation
/// Modifies a member variable of class `MR::TriIntersectResult` named `bary`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_TriIntersectResult_Set_bary(MR_TriIntersectResult *_this, const MR_TriPointf *value);

// barycentric representation
/// Returns a mutable pointer to a member variable of class `MR::TriIntersectResult` named `bary`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TriPointf *MR_TriIntersectResult_GetMutable_bary(MR_TriIntersectResult *_this);

// distance from ray origin to p in dir length units
/// Returns a pointer to a member variable of class `MR::TriIntersectResult` named `t`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_TriIntersectResult_Get_t(const MR_TriIntersectResult *_this);

// distance from ray origin to p in dir length units
/// Modifies a member variable of class `MR::TriIntersectResult` named `t`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriIntersectResult_Set_t(MR_TriIntersectResult *_this, float value);

// distance from ray origin to p in dir length units
/// Returns a mutable pointer to a member variable of class `MR::TriIntersectResult` named `t`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_TriIntersectResult_GetMutable_t(MR_TriIntersectResult *_this);

/// Generated from a constructor of class `MR::TriIntersectResult`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriIntersectResult_Destroy()` to free it when you're done using it.
MRC_API MR_TriIntersectResult *MR_TriIntersectResult_ConstructFromAnother(const MR_TriIntersectResult *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_TriIntersectResult *MR_TriIntersectResult_OffsetPtr(const MR_TriIntersectResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_TriIntersectResult *MR_TriIntersectResult_OffsetMutablePtr(MR_TriIntersectResult *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::TriIntersectResult`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriIntersectResult_Destroy()` to free it when you're done using it.
MRC_API MR_TriIntersectResult *MR_TriIntersectResult_Construct(float U, float V, float dist);

/// Destroys a heap-allocated instance of `MR_TriIntersectResult`. Does nothing if the pointer is null.
MRC_API void MR_TriIntersectResult_Destroy(const MR_TriIntersectResult *_this);

/// Destroys a heap-allocated array of `MR_TriIntersectResult`. Does nothing if the pointer is null.
MRC_API void MR_TriIntersectResult_DestroyArray(const MR_TriIntersectResult *_this);

/// Generated from a method of class `MR::TriIntersectResult` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TriIntersectResult *MR_TriIntersectResult_AssignFromAnother(MR_TriIntersectResult *_this, const MR_TriIntersectResult *_other);

/// Generated from function `MR::rayTriangleIntersect_<float>`.
/// Parameter `oriA` can not be null. It is a single object.
/// Parameter `oriB` can not be null. It is a single object.
/// Parameter `oriC` can not be null. It is a single object.
/// Parameter `prec` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_TriIntersectResult_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_TriIntersectResult *MR_rayTriangleIntersect__float(const MR_Vector3f *oriA, const MR_Vector3f *oriB, const MR_Vector3f *oriC, const MR_IntersectionPrecomputes_float *prec);

/// Generated from function `MR::rayTriangleIntersect_<double>`.
/// Parameter `oriA` can not be null. It is a single object.
/// Parameter `oriB` can not be null. It is a single object.
/// Parameter `oriC` can not be null. It is a single object.
/// Parameter `prec` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_TriIntersectResult_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_TriIntersectResult *MR_rayTriangleIntersect__double(const MR_Vector3d *oriA, const MR_Vector3d *oriB, const MR_Vector3d *oriC, const MR_IntersectionPrecomputes_double *prec);

/// Generated from function `MR::rayTriangleIntersect`.
/// Parameter `oriA` can not be null. It is a single object.
/// Parameter `oriB` can not be null. It is a single object.
/// Parameter `oriC` can not be null. It is a single object.
/// Parameter `prec` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_TriIntersectResult_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_TriIntersectResult *MR_rayTriangleIntersect_const_MR_Vector3f_ref_MR_IntersectionPrecomputes_float(const MR_Vector3f *oriA, const MR_Vector3f *oriB, const MR_Vector3f *oriC, const MR_IntersectionPrecomputes_float *prec);

/// Generated from function `MR::rayTriangleIntersect`.
/// Parameter `oriA` can not be null. It is a single object.
/// Parameter `oriB` can not be null. It is a single object.
/// Parameter `oriC` can not be null. It is a single object.
/// Parameter `dir` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_TriIntersectResult_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_TriIntersectResult *MR_rayTriangleIntersect_const_MR_Vector3f_ref_MR_Vector3f(const MR_Vector3f *oriA, const MR_Vector3f *oriB, const MR_Vector3f *oriC, const MR_Vector3f *dir);

/// Generated from function `MR::rayTriangleIntersect`.
/// Parameter `oriA` can not be null. It is a single object.
/// Parameter `oriB` can not be null. It is a single object.
/// Parameter `oriC` can not be null. It is a single object.
/// Parameter `prec` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_TriIntersectResult_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_TriIntersectResult *MR_rayTriangleIntersect_const_MR_Vector3d_ref_MR_IntersectionPrecomputes_double(const MR_Vector3d *oriA, const MR_Vector3d *oriB, const MR_Vector3d *oriC, const MR_IntersectionPrecomputes_double *prec);

/// Generated from function `MR::rayTriangleIntersect`.
/// Parameter `oriA` can not be null. It is a single object.
/// Parameter `oriB` can not be null. It is a single object.
/// Parameter `oriC` can not be null. It is a single object.
/// Parameter `dir` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_TriIntersectResult_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_TriIntersectResult *MR_rayTriangleIntersect_const_MR_Vector3d_ref_MR_Vector3d(const MR_Vector3d *oriA, const MR_Vector3d *oriB, const MR_Vector3d *oriC, const MR_Vector3d *dir);

#ifdef __cplusplus
} // extern "C"
#endif
