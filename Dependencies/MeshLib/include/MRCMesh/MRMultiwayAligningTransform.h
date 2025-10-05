// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Vector3d MR_Vector3d; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_std_vector_MR_RigidXf3d MR_std_vector_MR_RigidXf3d; // Defined in `#include <MRCMisc/std_vector_MR_RigidXf3d.h>`.


/// This class can be used to solve the problem of multiple 3D objects alignment,
/// by first collecting weighted links between pairs of points from different objects,
/// and then solving for transformations minimizing weighted average of link penalties
/// Generated from class `MR::MultiwayAligningTransform`.
typedef struct MR_MultiwayAligningTransform MR_MultiwayAligningTransform;

/// small stabilizer allows one to convert the linear system from under-determined to determined (e.g. too few linearly independent pairs for some object);
/// large stabilizer results in suboptimal found transformations (huge stabilizier => zero transforamtions)
/// Generated from class `MR::MultiwayAligningTransform::Stabilizer`.
typedef struct MR_MultiwayAligningTransform_Stabilizer MR_MultiwayAligningTransform_Stabilizer;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MultiwayAligningTransform_Destroy()` to free it when you're done using it.
MRC_API MR_MultiwayAligningTransform *MR_MultiwayAligningTransform_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MultiwayAligningTransform_DestroyArray()`.
/// Use `MR_MultiwayAligningTransform_OffsetMutablePtr()` and `MR_MultiwayAligningTransform_OffsetPtr()` to access the array elements.
MRC_API MR_MultiwayAligningTransform *MR_MultiwayAligningTransform_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MultiwayAligningTransform *MR_MultiwayAligningTransform_OffsetPtr(const MR_MultiwayAligningTransform *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MultiwayAligningTransform *MR_MultiwayAligningTransform_OffsetMutablePtr(MR_MultiwayAligningTransform *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MultiwayAligningTransform`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MultiwayAligningTransform_Destroy()` to free it when you're done using it.
MRC_API MR_MultiwayAligningTransform *MR_MultiwayAligningTransform_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MultiwayAligningTransform *_other);

/// initializes internal data to start registering given number of objects
/// Generated from a constructor of class `MR::MultiwayAligningTransform`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MultiwayAligningTransform_Destroy()` to free it when you're done using it.
MRC_API MR_MultiwayAligningTransform *MR_MultiwayAligningTransform_Construct(int32_t numObjs);

/// Destroys a heap-allocated instance of `MR_MultiwayAligningTransform`. Does nothing if the pointer is null.
MRC_API void MR_MultiwayAligningTransform_Destroy(const MR_MultiwayAligningTransform *_this);

/// Destroys a heap-allocated array of `MR_MultiwayAligningTransform`. Does nothing if the pointer is null.
MRC_API void MR_MultiwayAligningTransform_DestroyArray(const MR_MultiwayAligningTransform *_this);

/// Generated from a method of class `MR::MultiwayAligningTransform` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MultiwayAligningTransform *MR_MultiwayAligningTransform_AssignFromAnother(MR_MultiwayAligningTransform *_this, MR_PassBy _other_pass_by, MR_MultiwayAligningTransform *_other);

/// reinitializes internal data to start registering given number of objects
/// Generated from a method of class `MR::MultiwayAligningTransform` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MultiwayAligningTransform_reset(MR_MultiwayAligningTransform *_this, int32_t numObjs);

/// appends a 3D link into consideration: one point (pA) from (objA), and the other point (pB) from (objB)
/// with link penalty equal to weight (w) times squared distance between two points
/// Generated from a method of class `MR::MultiwayAligningTransform` named `add`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pA` can not be null. It is a single object.
/// Parameter `pB` can not be null. It is a single object.
/// Parameter `w` has a default argument: `1`, pass a null pointer to use it.
MRC_API void MR_MultiwayAligningTransform_add_5_MR_Vector3d(MR_MultiwayAligningTransform *_this, int32_t objA, const MR_Vector3d *pA, int32_t objB, const MR_Vector3d *pB, const double *w);

/// appends a 3D link into consideration: one point (pA) from (objA), and the other point (pB) from (objB)
/// with link penalty equal to weight (w) times squared distance between two points
/// Generated from a method of class `MR::MultiwayAligningTransform` named `add`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pA` can not be null. It is a single object.
/// Parameter `pB` can not be null. It is a single object.
/// Parameter `w` has a default argument: `1`, pass a null pointer to use it.
MRC_API void MR_MultiwayAligningTransform_add_5_MR_Vector3f(MR_MultiwayAligningTransform *_this, int32_t objA, const MR_Vector3f *pA, int32_t objB, const MR_Vector3f *pB, const float *w);

/// appends a 1D link into consideration: one point (pA) from (objA), and the other point (pB) from (objB)
/// with link penalty equal to weight (w) times squared distance between their projections on given direction (n);
/// for a point on last fixed object, it is equivalent to point-to-plane link with the plane through that fixed point with normal (n)
/// Generated from a method of class `MR::MultiwayAligningTransform` named `add`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pA` can not be null. It is a single object.
/// Parameter `pB` can not be null. It is a single object.
/// Parameter `n` can not be null. It is a single object.
/// Parameter `w` has a default argument: `1`, pass a null pointer to use it.
MRC_API void MR_MultiwayAligningTransform_add_6_MR_Vector3d(MR_MultiwayAligningTransform *_this, int32_t objA, const MR_Vector3d *pA, int32_t objB, const MR_Vector3d *pB, const MR_Vector3d *n, const double *w);

/// appends a 1D link into consideration: one point (pA) from (objA), and the other point (pB) from (objB)
/// with link penalty equal to weight (w) times squared distance between their projections on given direction (n);
/// for a point on last fixed object, it is equivalent to point-to-plane link with the plane through that fixed point with normal (n)
/// Generated from a method of class `MR::MultiwayAligningTransform` named `add`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pA` can not be null. It is a single object.
/// Parameter `pB` can not be null. It is a single object.
/// Parameter `n` can not be null. It is a single object.
/// Parameter `w` has a default argument: `1`, pass a null pointer to use it.
MRC_API void MR_MultiwayAligningTransform_add_6_MR_Vector3f(MR_MultiwayAligningTransform *_this, int32_t objA, const MR_Vector3f *pA, int32_t objB, const MR_Vector3f *pB, const MR_Vector3f *n, const float *w);

/// appends links accumulated in (r) into this
/// Generated from a method of class `MR::MultiwayAligningTransform` named `add`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `r` can not be null. It is a single object.
MRC_API void MR_MultiwayAligningTransform_add_1(MR_MultiwayAligningTransform *_this, const MR_MultiwayAligningTransform *r);

/// finds the solution consisting of all objects transformations (numObj),
/// that minimizes the summed weighted squared distance among accumulated links;
/// the transform of the last object is always identity (it is fixed)
/// Generated from a method of class `MR::MultiwayAligningTransform` named `solve`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `stab` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_RigidXf3d_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_RigidXf3d *MR_MultiwayAligningTransform_solve_1(const MR_MultiwayAligningTransform *_this, const MR_MultiwayAligningTransform_Stabilizer *stab);

/// Generated from a method of class `MR::MultiwayAligningTransform` named `solve`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_RigidXf3d_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_RigidXf3d *MR_MultiwayAligningTransform_solve_0(const MR_MultiwayAligningTransform *_this);

// length units
/// Returns a pointer to a member variable of class `MR::MultiwayAligningTransform::Stabilizer` named `rot`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_MultiwayAligningTransform_Stabilizer_Get_rot(const MR_MultiwayAligningTransform_Stabilizer *_this);

// length units
/// Modifies a member variable of class `MR::MultiwayAligningTransform::Stabilizer` named `rot`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MultiwayAligningTransform_Stabilizer_Set_rot(MR_MultiwayAligningTransform_Stabilizer *_this, double value);

// length units
/// Returns a mutable pointer to a member variable of class `MR::MultiwayAligningTransform::Stabilizer` named `rot`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_MultiwayAligningTransform_Stabilizer_GetMutable_rot(MR_MultiwayAligningTransform_Stabilizer *_this);

// dimensionless
/// Returns a pointer to a member variable of class `MR::MultiwayAligningTransform::Stabilizer` named `shift`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_MultiwayAligningTransform_Stabilizer_Get_shift(const MR_MultiwayAligningTransform_Stabilizer *_this);

// dimensionless
/// Modifies a member variable of class `MR::MultiwayAligningTransform::Stabilizer` named `shift`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MultiwayAligningTransform_Stabilizer_Set_shift(MR_MultiwayAligningTransform_Stabilizer *_this, double value);

// dimensionless
/// Returns a mutable pointer to a member variable of class `MR::MultiwayAligningTransform::Stabilizer` named `shift`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_MultiwayAligningTransform_Stabilizer_GetMutable_shift(MR_MultiwayAligningTransform_Stabilizer *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MultiwayAligningTransform_Stabilizer_Destroy()` to free it when you're done using it.
MRC_API MR_MultiwayAligningTransform_Stabilizer *MR_MultiwayAligningTransform_Stabilizer_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MultiwayAligningTransform_Stabilizer_DestroyArray()`.
/// Use `MR_MultiwayAligningTransform_Stabilizer_OffsetMutablePtr()` and `MR_MultiwayAligningTransform_Stabilizer_OffsetPtr()` to access the array elements.
MRC_API MR_MultiwayAligningTransform_Stabilizer *MR_MultiwayAligningTransform_Stabilizer_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MultiwayAligningTransform::Stabilizer` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MultiwayAligningTransform_Stabilizer_Destroy()` to free it when you're done using it.
MRC_API MR_MultiwayAligningTransform_Stabilizer *MR_MultiwayAligningTransform_Stabilizer_ConstructFrom(double rot, double shift);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MultiwayAligningTransform_Stabilizer *MR_MultiwayAligningTransform_Stabilizer_OffsetPtr(const MR_MultiwayAligningTransform_Stabilizer *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MultiwayAligningTransform_Stabilizer *MR_MultiwayAligningTransform_Stabilizer_OffsetMutablePtr(MR_MultiwayAligningTransform_Stabilizer *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MultiwayAligningTransform::Stabilizer`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MultiwayAligningTransform_Stabilizer_Destroy()` to free it when you're done using it.
MRC_API MR_MultiwayAligningTransform_Stabilizer *MR_MultiwayAligningTransform_Stabilizer_ConstructFromAnother(const MR_MultiwayAligningTransform_Stabilizer *_other);

/// Destroys a heap-allocated instance of `MR_MultiwayAligningTransform_Stabilizer`. Does nothing if the pointer is null.
MRC_API void MR_MultiwayAligningTransform_Stabilizer_Destroy(const MR_MultiwayAligningTransform_Stabilizer *_this);

/// Destroys a heap-allocated array of `MR_MultiwayAligningTransform_Stabilizer`. Does nothing if the pointer is null.
MRC_API void MR_MultiwayAligningTransform_Stabilizer_DestroyArray(const MR_MultiwayAligningTransform_Stabilizer *_this);

/// Generated from a method of class `MR::MultiwayAligningTransform::Stabilizer` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MultiwayAligningTransform_Stabilizer *MR_MultiwayAligningTransform_Stabilizer_AssignFromAnother(MR_MultiwayAligningTransform_Stabilizer *_this, const MR_MultiwayAligningTransform_Stabilizer *_other);

#ifdef __cplusplus
} // extern "C"
#endif
