// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Box3f MR_Box3f; // Defined in `#include <MRCMesh/MRBox.h>`.
typedef struct MR_IntersectionPrecomputes_float MR_IntersectionPrecomputes_float; // Defined in `#include <MRCMesh/MRIntersectionPrecomputes.h>`.
typedef struct MR_Line3f MR_Line3f; // Defined in `#include <MRCMesh/MRLine.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.


/// Generated from class `MR::RayOrigin<float>`.
typedef struct MR_RayOrigin_float MR_RayOrigin_float;

/// Generated from a constructor of class `MR::RayOrigin<float>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RayOrigin_float_Destroy()` to free it when you're done using it.
MRC_API MR_RayOrigin_float *MR_RayOrigin_float_ConstructFromAnother(const MR_RayOrigin_float *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_RayOrigin_float *MR_RayOrigin_float_OffsetPtr(const MR_RayOrigin_float *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_RayOrigin_float *MR_RayOrigin_float_OffsetMutablePtr(MR_RayOrigin_float *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::RayOrigin<float>`.
/// Parameter `ro` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RayOrigin_float_Destroy()` to free it when you're done using it.
MRC_API MR_RayOrigin_float *MR_RayOrigin_float_Construct(const MR_Vector3f *ro);

/// Destroys a heap-allocated instance of `MR_RayOrigin_float`. Does nothing if the pointer is null.
MRC_API void MR_RayOrigin_float_Destroy(const MR_RayOrigin_float *_this);

/// Destroys a heap-allocated array of `MR_RayOrigin_float`. Does nothing if the pointer is null.
MRC_API void MR_RayOrigin_float_DestroyArray(const MR_RayOrigin_float *_this);

/// Generated from a method of class `MR::RayOrigin<float>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RayOrigin_float *MR_RayOrigin_float_AssignFromAnother(MR_RayOrigin_float *_this, const MR_RayOrigin_float *_other);

/// finds intersection between the Ray and the Box.
/// Precomputed values could be useful for several calls with the same direction,
/// see "An Efficient and Robust Ray-Box Intersection Algorithm" at https://people.csail.mit.edu/amy/papers/box-jgt.pdf
/// Generated from function `MR::rayBoxIntersect`.
/// Parameter `box` can not be null. It is a single object.
/// Parameter `rayOrigin` can not be null. It is a single object.
/// Parameter `t0` can not be null. It is a single object.
/// Parameter `t1` can not be null. It is a single object.
/// Parameter `prec` can not be null. It is a single object.
MRC_API bool MR_rayBoxIntersect(const MR_Box3f *box, const MR_RayOrigin_float *rayOrigin, float *t0, float *t1, const MR_IntersectionPrecomputes_float *prec);

/// Generated from function `MR::rayBoxIntersect<float>`.
/// Parameter `box` can not be null. It is a single object.
/// Parameter `line` can not be null. It is a single object.
MRC_API bool MR_rayBoxIntersect_float_MR_Box3f(const MR_Box3f *box, const MR_Line3f *line, float t0, float t1);

#ifdef __cplusplus
} // extern "C"
#endif
