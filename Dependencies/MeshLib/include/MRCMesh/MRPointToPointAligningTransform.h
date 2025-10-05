// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRAffineXf.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.


/// This class and its main method can be used to solve the problem well-known as the absolute orientation problem.
/// It means computing the transformation that aligns two sets of points for which correspondence is known.
/// Generated from class `MR::PointToPointAligningTransform`.
typedef struct MR_PointToPointAligningTransform MR_PointToPointAligningTransform;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointToPointAligningTransform_Destroy()` to free it when you're done using it.
MRC_API MR_PointToPointAligningTransform *MR_PointToPointAligningTransform_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PointToPointAligningTransform_DestroyArray()`.
/// Use `MR_PointToPointAligningTransform_OffsetMutablePtr()` and `MR_PointToPointAligningTransform_OffsetPtr()` to access the array elements.
MRC_API MR_PointToPointAligningTransform *MR_PointToPointAligningTransform_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PointToPointAligningTransform *MR_PointToPointAligningTransform_OffsetPtr(const MR_PointToPointAligningTransform *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PointToPointAligningTransform *MR_PointToPointAligningTransform_OffsetMutablePtr(MR_PointToPointAligningTransform *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PointToPointAligningTransform`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointToPointAligningTransform_Destroy()` to free it when you're done using it.
MRC_API MR_PointToPointAligningTransform *MR_PointToPointAligningTransform_ConstructFromAnother(const MR_PointToPointAligningTransform *_other);

/// Destroys a heap-allocated instance of `MR_PointToPointAligningTransform`. Does nothing if the pointer is null.
MRC_API void MR_PointToPointAligningTransform_Destroy(const MR_PointToPointAligningTransform *_this);

/// Destroys a heap-allocated array of `MR_PointToPointAligningTransform`. Does nothing if the pointer is null.
MRC_API void MR_PointToPointAligningTransform_DestroyArray(const MR_PointToPointAligningTransform *_this);

/// Generated from a method of class `MR::PointToPointAligningTransform` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointToPointAligningTransform *MR_PointToPointAligningTransform_AssignFromAnother(MR_PointToPointAligningTransform *_this, const MR_PointToPointAligningTransform *_other);

/// Add one pair of points in the set
/// Generated from a method of class `MR::PointToPointAligningTransform` named `add`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p1` can not be null. It is a single object.
/// Parameter `p2` can not be null. It is a single object.
/// Parameter `w` has a default argument: `1`, pass a null pointer to use it.
MRC_API void MR_PointToPointAligningTransform_add_3_MR_Vector3d(MR_PointToPointAligningTransform *_this, const MR_Vector3d *p1, const MR_Vector3d *p2, const double *w);

/// Add one pair of points in the set
/// Generated from a method of class `MR::PointToPointAligningTransform` named `add`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p1` can not be null. It is a single object.
/// Parameter `p2` can not be null. It is a single object.
/// Parameter `w` has a default argument: `1`, pass a null pointer to use it.
MRC_API void MR_PointToPointAligningTransform_add_3_MR_Vector3f(MR_PointToPointAligningTransform *_this, const MR_Vector3f *p1, const MR_Vector3f *p2, const float *w);

/// Add another two sets of points.
/// Generated from a method of class `MR::PointToPointAligningTransform` named `add`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API void MR_PointToPointAligningTransform_add_1(MR_PointToPointAligningTransform *_this, const MR_PointToPointAligningTransform *other);

/// Clear sets.
/// Generated from a method of class `MR::PointToPointAligningTransform` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointToPointAligningTransform_clear(MR_PointToPointAligningTransform *_this);

/// returns weighted centroid of points p1 accumulated so far
/// Generated from a method of class `MR::PointToPointAligningTransform` named `centroid1`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3d MR_PointToPointAligningTransform_centroid1(const MR_PointToPointAligningTransform *_this);

/// returns weighted centroid of points p2 accumulated so far
/// Generated from a method of class `MR::PointToPointAligningTransform` named `centroid2`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3d MR_PointToPointAligningTransform_centroid2(const MR_PointToPointAligningTransform *_this);

/// returns summed weight of points accumulated so far
/// Generated from a method of class `MR::PointToPointAligningTransform` named `totalWeight`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_PointToPointAligningTransform_totalWeight(const MR_PointToPointAligningTransform *_this);

/// Compute transformation as the solution to a least squares formulation of the problem:
/// xf( p1_i ) = p2_i
/// this version searches for best rigid body transformation
/// Generated from a method of class `MR::PointToPointAligningTransform` named `findBestRigidXf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3d MR_PointToPointAligningTransform_findBestRigidXf(const MR_PointToPointAligningTransform *_this);

/// this version searches for best rigid body transformation with uniform scaling
/// Generated from a method of class `MR::PointToPointAligningTransform` named `findBestRigidScaleXf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3d MR_PointToPointAligningTransform_findBestRigidScaleXf(const MR_PointToPointAligningTransform *_this);

/// this version searches for best transformation where rotation is allowed only around given axis and with arbitrary translation
/// Generated from a method of class `MR::PointToPointAligningTransform` named `findBestRigidXfFixedRotationAxis`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `axis` can not be null. It is a single object.
MRC_API MR_AffineXf3d MR_PointToPointAligningTransform_findBestRigidXfFixedRotationAxis(const MR_PointToPointAligningTransform *_this, const MR_Vector3d *axis);

/// this version searches for best transformation where rotation is allowed only around axes orthogonal to given one
/// Generated from a method of class `MR::PointToPointAligningTransform` named `findBestRigidXfOrthogonalRotationAxis`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `ort` can not be null. It is a single object.
MRC_API MR_AffineXf3d MR_PointToPointAligningTransform_findBestRigidXfOrthogonalRotationAxis(const MR_PointToPointAligningTransform *_this, const MR_Vector3d *ort);

/// Simplified solution for translational part only
/// Generated from a method of class `MR::PointToPointAligningTransform` named `findBestTranslation`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3d MR_PointToPointAligningTransform_findBestTranslation(const MR_PointToPointAligningTransform *_this);

#ifdef __cplusplus
} // extern "C"
#endif
