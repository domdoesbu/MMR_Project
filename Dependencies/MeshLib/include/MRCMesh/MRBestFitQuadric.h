// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Vector3d MR_Vector3d; // Defined in `#include <MRCMesh/MRVector3.h>`.


/// Accumulate points and make best quadric approximation
/// \details \f$ a*x^2 + b*x*y + c*y^2 + d*x + e*y + f = z \f$
/// Generated from class `MR::QuadricApprox`.
typedef struct MR_QuadricApprox MR_QuadricApprox;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_QuadricApprox_Destroy()` to free it when you're done using it.
MRC_API MR_QuadricApprox *MR_QuadricApprox_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_QuadricApprox_DestroyArray()`.
/// Use `MR_QuadricApprox_OffsetMutablePtr()` and `MR_QuadricApprox_OffsetPtr()` to access the array elements.
MRC_API MR_QuadricApprox *MR_QuadricApprox_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_QuadricApprox *MR_QuadricApprox_OffsetPtr(const MR_QuadricApprox *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_QuadricApprox *MR_QuadricApprox_OffsetMutablePtr(MR_QuadricApprox *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::QuadricApprox`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_QuadricApprox_Destroy()` to free it when you're done using it.
MRC_API MR_QuadricApprox *MR_QuadricApprox_ConstructFromAnother(MR_PassBy _other_pass_by, MR_QuadricApprox *_other);

/// Destroys a heap-allocated instance of `MR_QuadricApprox`. Does nothing if the pointer is null.
MRC_API void MR_QuadricApprox_Destroy(const MR_QuadricApprox *_this);

/// Destroys a heap-allocated array of `MR_QuadricApprox`. Does nothing if the pointer is null.
MRC_API void MR_QuadricApprox_DestroyArray(const MR_QuadricApprox *_this);

/// Generated from a method of class `MR::QuadricApprox` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_QuadricApprox *MR_QuadricApprox_AssignFromAnother(MR_QuadricApprox *_this, MR_PassBy _other_pass_by, MR_QuadricApprox *_other);

/// Adds point to accumulation with weight
/// Generated from a method of class `MR::QuadricApprox` named `addPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
/// Parameter `weight` has a default argument: `1.`, pass a null pointer to use it.
MRC_API void MR_QuadricApprox_addPoint(MR_QuadricApprox *_this, const MR_Vector3d *point, const double *weight);

#ifdef __cplusplus
} // extern "C"
#endif
