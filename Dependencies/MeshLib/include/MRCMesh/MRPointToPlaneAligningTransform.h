// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRAffineXf.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_RigidScaleXf3d MR_RigidScaleXf3d; // Defined in `#include <MRCMesh/MRRigidScaleXf3.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.


/// This class and its main method can be used to solve the problem of 3D shape alignment.
/// This algorithm uses a point-to-plane error metric in which the object of minimization is the sum of
/// the squared distance between a point and the tangent plane at its correspondence point.
/// To use this technique it's need to have small rotation angles. So there is an approximate solution.
/// The result of this algorithm is the transformation of first points (p1) which aligns it to the second ones (p2).
/// Generated from class `MR::PointToPlaneAligningTransform`.
typedef struct MR_PointToPlaneAligningTransform MR_PointToPlaneAligningTransform;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointToPlaneAligningTransform_Destroy()` to free it when you're done using it.
MRC_API MR_PointToPlaneAligningTransform *MR_PointToPlaneAligningTransform_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PointToPlaneAligningTransform_DestroyArray()`.
/// Use `MR_PointToPlaneAligningTransform_OffsetMutablePtr()` and `MR_PointToPlaneAligningTransform_OffsetPtr()` to access the array elements.
MRC_API MR_PointToPlaneAligningTransform *MR_PointToPlaneAligningTransform_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PointToPlaneAligningTransform *MR_PointToPlaneAligningTransform_OffsetPtr(const MR_PointToPlaneAligningTransform *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PointToPlaneAligningTransform *MR_PointToPlaneAligningTransform_OffsetMutablePtr(MR_PointToPlaneAligningTransform *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PointToPlaneAligningTransform`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointToPlaneAligningTransform_Destroy()` to free it when you're done using it.
MRC_API MR_PointToPlaneAligningTransform *MR_PointToPlaneAligningTransform_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PointToPlaneAligningTransform *_other);

/// Destroys a heap-allocated instance of `MR_PointToPlaneAligningTransform`. Does nothing if the pointer is null.
MRC_API void MR_PointToPlaneAligningTransform_Destroy(const MR_PointToPlaneAligningTransform *_this);

/// Destroys a heap-allocated array of `MR_PointToPlaneAligningTransform`. Does nothing if the pointer is null.
MRC_API void MR_PointToPlaneAligningTransform_DestroyArray(const MR_PointToPlaneAligningTransform *_this);

/// Generated from a method of class `MR::PointToPlaneAligningTransform` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointToPlaneAligningTransform *MR_PointToPlaneAligningTransform_AssignFromAnother(MR_PointToPlaneAligningTransform *_this, MR_PassBy _other_pass_by, MR_PointToPlaneAligningTransform *_other);

/// Add a pair of corresponding points and the normal of the tangent plane at the second point
/// Generated from a method of class `MR::PointToPlaneAligningTransform` named `add`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p1` can not be null. It is a single object.
/// Parameter `p2` can not be null. It is a single object.
/// Parameter `normal2` can not be null. It is a single object.
/// Parameter `w` has a default argument: `1`, pass a null pointer to use it.
MRC_API void MR_PointToPlaneAligningTransform_add_MR_Vector3d(MR_PointToPlaneAligningTransform *_this, const MR_Vector3d *p1, const MR_Vector3d *p2, const MR_Vector3d *normal2, const double *w);

/// Add a pair of corresponding points and the normal of the tangent plane at the second point
/// Generated from a method of class `MR::PointToPlaneAligningTransform` named `add`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p1` can not be null. It is a single object.
/// Parameter `p2` can not be null. It is a single object.
/// Parameter `normal2` can not be null. It is a single object.
/// Parameter `w` has a default argument: `1`, pass a null pointer to use it.
MRC_API void MR_PointToPlaneAligningTransform_add_MR_Vector3f(MR_PointToPlaneAligningTransform *_this, const MR_Vector3f *p1, const MR_Vector3f *p2, const MR_Vector3f *normal2, const float *w);

/// this method must be called after add() and before constant find...()/calculate...() to make the matrix symmetric
/// Generated from a method of class `MR::PointToPlaneAligningTransform` named `prepare`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointToPlaneAligningTransform_prepare(MR_PointToPlaneAligningTransform *_this);

/// Clear points and normals data
/// Generated from a method of class `MR::PointToPlaneAligningTransform` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointToPlaneAligningTransform_clear(MR_PointToPlaneAligningTransform *_this);

/// Compute transformation as the solution to a least squares optimization problem:
/// xf( p1_i ) = p2_i
/// this version searches for best rigid body transformation
/// Generated from a method of class `MR::PointToPlaneAligningTransform` named `findBestRigidXf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3d MR_PointToPlaneAligningTransform_findBestRigidXf(const MR_PointToPlaneAligningTransform *_this);

/// this version searches for best rigid body transformation with uniform scaling
/// Generated from a method of class `MR::PointToPlaneAligningTransform` named `findBestRigidScaleXf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3d MR_PointToPlaneAligningTransform_findBestRigidScaleXf(const MR_PointToPlaneAligningTransform *_this);

/// this version searches for best transformation where rotation is allowed only around given axis and with arbitrary translation
/// Generated from a method of class `MR::PointToPlaneAligningTransform` named `findBestRigidXfFixedRotationAxis`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `axis` can not be null. It is a single object.
MRC_API MR_AffineXf3d MR_PointToPlaneAligningTransform_findBestRigidXfFixedRotationAxis(const MR_PointToPlaneAligningTransform *_this, const MR_Vector3d *axis);

/// this version searches for best transformation where rotation is allowed only around axes orthogonal to given one
/// Generated from a method of class `MR::PointToPlaneAligningTransform` named `findBestRigidXfOrthogonalRotationAxis`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `ort` can not be null. It is a single object.
MRC_API MR_AffineXf3d MR_PointToPlaneAligningTransform_findBestRigidXfOrthogonalRotationAxis(const MR_PointToPlaneAligningTransform *_this, const MR_Vector3d *ort);

/// this version searches for best translational part of affine transformation with given linear part
/// Generated from a method of class `MR::PointToPlaneAligningTransform` named `findBestTranslation`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rotAngles` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `scale` has a default argument: `1`, pass a null pointer to use it.
MRC_API MR_Vector3d MR_PointToPlaneAligningTransform_findBestTranslation(const MR_PointToPlaneAligningTransform *_this, const MR_Vector3d *rotAngles, const double *scale);

/// Compute transformation relative to given approximation and return it as angles and shift (scale = 1)
/// Generated from a method of class `MR::PointToPlaneAligningTransform` named `calculateAmendment`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RigidScaleXf3d_Destroy()` to free it when you're done using it.
MRC_API MR_RigidScaleXf3d *MR_PointToPlaneAligningTransform_calculateAmendment(const MR_PointToPlaneAligningTransform *_this);

/// Compute transformation relative to given approximation and return it as scale, angles and shift
/// Generated from a method of class `MR::PointToPlaneAligningTransform` named `calculateAmendmentWithScale`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RigidScaleXf3d_Destroy()` to free it when you're done using it.
MRC_API MR_RigidScaleXf3d *MR_PointToPlaneAligningTransform_calculateAmendmentWithScale(const MR_PointToPlaneAligningTransform *_this);

/// this version searches for best transformation where rotation is allowed only around given axis and with arbitrary translation
/// Generated from a method of class `MR::PointToPlaneAligningTransform` named `calculateFixedAxisAmendment`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `axis` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RigidScaleXf3d_Destroy()` to free it when you're done using it.
MRC_API MR_RigidScaleXf3d *MR_PointToPlaneAligningTransform_calculateFixedAxisAmendment(const MR_PointToPlaneAligningTransform *_this, const MR_Vector3d *axis);

/// this version searches for best transformation where rotation is allowed only around axes orthogonal to given one
/// Generated from a method of class `MR::PointToPlaneAligningTransform` named `calculateOrthogonalAxisAmendment`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `ort` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RigidScaleXf3d_Destroy()` to free it when you're done using it.
MRC_API MR_RigidScaleXf3d *MR_PointToPlaneAligningTransform_calculateOrthogonalAxisAmendment(const MR_PointToPlaneAligningTransform *_this, const MR_Vector3d *ort);

#ifdef __cplusplus
} // extern "C"
#endif
