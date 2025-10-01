// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRMatrix2.h>
#include <MRCMesh/MRMatrix3.h>
#include <MRCMesh/MRVector2.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// affine transformation: y = A*x + b, where A in VxV, and b in V
/// Generated from class `MR::AffineXf2f`.
typedef struct MR_AffineXf2f
{
    MR_Matrix2f A;
    MR_Vector2f b;
} MR_AffineXf2f;

/// affine transformation: y = A*x + b, where A in VxV, and b in V
/// Generated from class `MR::AffineXf2d`.
typedef struct MR_AffineXf2d
{
    MR_Matrix2d A;
    MR_Vector2d b;
} MR_AffineXf2d;

/// affine transformation: y = A*x + b, where A in VxV, and b in V
/// Generated from class `MR::AffineXf3f`.
typedef struct MR_AffineXf3f
{
    MR_Matrix3f A;
    MR_Vector3f b;
} MR_AffineXf3f;

/// affine transformation: y = A*x + b, where A in VxV, and b in V
/// Generated from class `MR::AffineXf3d`.
typedef struct MR_AffineXf3d
{
    MR_Matrix3d A;
    MR_Vector3d b;
} MR_AffineXf3d;

/// Constructs an empty (default-constructed) instance.
MRC_API MR_AffineXf2f MR_AffineXf2f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_AffineXf2f_DestroyArray()`.
/// Use `MR_AffineXf2f_OffsetMutablePtr()` and `MR_AffineXf2f_OffsetPtr()` to access the array elements.
MRC_API MR_AffineXf2f *MR_AffineXf2f_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::AffineXf2f`.
/// Parameter `A` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_AffineXf2f MR_AffineXf2f_Construct(const MR_Matrix2f *A, const MR_Vector2f *b);

/// creates translation-only transformation (with identity linear component)
/// Generated from a method of class `MR::AffineXf2f` named `translation`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_AffineXf2f MR_AffineXf2f_translation(const MR_Vector2f *b);

/// creates linear-only transformation (without translation)
/// Generated from a method of class `MR::AffineXf2f` named `linear`.
/// Parameter `A` can not be null. It is a single object.
MRC_API MR_AffineXf2f MR_AffineXf2f_linear(const MR_Matrix2f *A);

/// creates transformation with given linear part with given stable point
/// Generated from a method of class `MR::AffineXf2f` named `xfAround`.
/// Parameter `A` can not be null. It is a single object.
/// Parameter `stable` can not be null. It is a single object.
MRC_API MR_AffineXf2f MR_AffineXf2f_xfAround(const MR_Matrix2f *A, const MR_Vector2f *stable);

/// application of the transformation to a point
/// Generated from a method of class `MR::AffineXf2f` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API MR_Vector2f MR_AffineXf2f_call(const MR_AffineXf2f *_this, const MR_Vector2f *x);

/// applies only linear part of the transformation to given vector (e.g. to normal) skipping adding shift (b)
/// for example if this is a rigid transformation, then only rotates input vector
/// Generated from a method of class `MR::AffineXf2f` named `linearOnly`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API MR_Vector2f MR_AffineXf2f_linearOnly(const MR_AffineXf2f *_this, const MR_Vector2f *x);

/// computes inverse transformation
/// Generated from a method of class `MR::AffineXf2f` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf2f MR_AffineXf2f_inverse(const MR_AffineXf2f *_this);

/// composition of two transformations:
/// \f( y = (u * v) ( x ) = u( v( x ) ) = ( u.A * ( v.A * x + v.b ) + u.b ) = ( u.A * v.A ) * x + ( u.A * v.b + u.b ) \f)
/// Generated from function `MR::operator*`.
/// Parameter `u` can not be null. It is a single object.
/// Parameter `v` can not be null. It is a single object.
MRC_API MR_AffineXf2f MR_mul_MR_AffineXf2f(const MR_AffineXf2f *u, const MR_AffineXf2f *v);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_AffineXf2f(const MR_AffineXf2f *a, const MR_AffineXf2f *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_AffineXf2f(const MR_AffineXf2f *a, const MR_AffineXf2f *b);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_AffineXf2d MR_AffineXf2d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_AffineXf2d_DestroyArray()`.
/// Use `MR_AffineXf2d_OffsetMutablePtr()` and `MR_AffineXf2d_OffsetPtr()` to access the array elements.
MRC_API MR_AffineXf2d *MR_AffineXf2d_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::AffineXf2d`.
/// Parameter `A` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_AffineXf2d MR_AffineXf2d_Construct(const MR_Matrix2d *A, const MR_Vector2d *b);

/// creates translation-only transformation (with identity linear component)
/// Generated from a method of class `MR::AffineXf2d` named `translation`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_AffineXf2d MR_AffineXf2d_translation(const MR_Vector2d *b);

/// creates linear-only transformation (without translation)
/// Generated from a method of class `MR::AffineXf2d` named `linear`.
/// Parameter `A` can not be null. It is a single object.
MRC_API MR_AffineXf2d MR_AffineXf2d_linear(const MR_Matrix2d *A);

/// creates transformation with given linear part with given stable point
/// Generated from a method of class `MR::AffineXf2d` named `xfAround`.
/// Parameter `A` can not be null. It is a single object.
/// Parameter `stable` can not be null. It is a single object.
MRC_API MR_AffineXf2d MR_AffineXf2d_xfAround(const MR_Matrix2d *A, const MR_Vector2d *stable);

/// application of the transformation to a point
/// Generated from a method of class `MR::AffineXf2d` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API MR_Vector2d MR_AffineXf2d_call(const MR_AffineXf2d *_this, const MR_Vector2d *x);

/// applies only linear part of the transformation to given vector (e.g. to normal) skipping adding shift (b)
/// for example if this is a rigid transformation, then only rotates input vector
/// Generated from a method of class `MR::AffineXf2d` named `linearOnly`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API MR_Vector2d MR_AffineXf2d_linearOnly(const MR_AffineXf2d *_this, const MR_Vector2d *x);

/// computes inverse transformation
/// Generated from a method of class `MR::AffineXf2d` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf2d MR_AffineXf2d_inverse(const MR_AffineXf2d *_this);

/// composition of two transformations:
/// \f( y = (u * v) ( x ) = u( v( x ) ) = ( u.A * ( v.A * x + v.b ) + u.b ) = ( u.A * v.A ) * x + ( u.A * v.b + u.b ) \f)
/// Generated from function `MR::operator*`.
/// Parameter `u` can not be null. It is a single object.
/// Parameter `v` can not be null. It is a single object.
MRC_API MR_AffineXf2d MR_mul_MR_AffineXf2d(const MR_AffineXf2d *u, const MR_AffineXf2d *v);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_AffineXf2d(const MR_AffineXf2d *a, const MR_AffineXf2d *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_AffineXf2d(const MR_AffineXf2d *a, const MR_AffineXf2d *b);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_AffineXf3f MR_AffineXf3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_AffineXf3f_DestroyArray()`.
/// Use `MR_AffineXf3f_OffsetMutablePtr()` and `MR_AffineXf3f_OffsetPtr()` to access the array elements.
MRC_API MR_AffineXf3f *MR_AffineXf3f_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::AffineXf3f`.
/// Parameter `A` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_AffineXf3f_Construct(const MR_Matrix3f *A, const MR_Vector3f *b);

/// Generated from a constructor of class `MR::AffineXf3f`.
/// Parameter `xf` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_AffineXf3f_Construct_MR_Vector3f(const MR_AffineXf3f *xf);

/// Generated from a constructor of class `MR::AffineXf3f`.
/// Parameter `xf` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_AffineXf3f_Construct_MR_Vector3d(const MR_AffineXf3d *xf);

/// creates translation-only transformation (with identity linear component)
/// Generated from a method of class `MR::AffineXf3f` named `translation`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_AffineXf3f_translation(const MR_Vector3f *b);

/// creates linear-only transformation (without translation)
/// Generated from a method of class `MR::AffineXf3f` named `linear`.
/// Parameter `A` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_AffineXf3f_linear(const MR_Matrix3f *A);

/// creates transformation with given linear part with given stable point
/// Generated from a method of class `MR::AffineXf3f` named `xfAround`.
/// Parameter `A` can not be null. It is a single object.
/// Parameter `stable` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_AffineXf3f_xfAround(const MR_Matrix3f *A, const MR_Vector3f *stable);

/// application of the transformation to a point
/// Generated from a method of class `MR::AffineXf3f` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API MR_Vector3f MR_AffineXf3f_call(const MR_AffineXf3f *_this, const MR_Vector3f *x);

/// applies only linear part of the transformation to given vector (e.g. to normal) skipping adding shift (b)
/// for example if this is a rigid transformation, then only rotates input vector
/// Generated from a method of class `MR::AffineXf3f` named `linearOnly`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API MR_Vector3f MR_AffineXf3f_linearOnly(const MR_AffineXf3f *_this, const MR_Vector3f *x);

/// computes inverse transformation
/// Generated from a method of class `MR::AffineXf3f` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_AffineXf3f_inverse(const MR_AffineXf3f *_this);

/// composition of two transformations:
/// \f( y = (u * v) ( x ) = u( v( x ) ) = ( u.A * ( v.A * x + v.b ) + u.b ) = ( u.A * v.A ) * x + ( u.A * v.b + u.b ) \f)
/// Generated from function `MR::operator*`.
/// Parameter `u` can not be null. It is a single object.
/// Parameter `v` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_mul_MR_AffineXf3f(const MR_AffineXf3f *u, const MR_AffineXf3f *v);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_AffineXf3f(const MR_AffineXf3f *a, const MR_AffineXf3f *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_AffineXf3f(const MR_AffineXf3f *a, const MR_AffineXf3f *b);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_AffineXf3d MR_AffineXf3d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_AffineXf3d_DestroyArray()`.
/// Use `MR_AffineXf3d_OffsetMutablePtr()` and `MR_AffineXf3d_OffsetPtr()` to access the array elements.
MRC_API MR_AffineXf3d *MR_AffineXf3d_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::AffineXf3d`.
/// Parameter `A` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_AffineXf3d MR_AffineXf3d_Construct(const MR_Matrix3d *A, const MR_Vector3d *b);

/// creates translation-only transformation (with identity linear component)
/// Generated from a method of class `MR::AffineXf3d` named `translation`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_AffineXf3d MR_AffineXf3d_translation(const MR_Vector3d *b);

/// creates linear-only transformation (without translation)
/// Generated from a method of class `MR::AffineXf3d` named `linear`.
/// Parameter `A` can not be null. It is a single object.
MRC_API MR_AffineXf3d MR_AffineXf3d_linear(const MR_Matrix3d *A);

/// creates transformation with given linear part with given stable point
/// Generated from a method of class `MR::AffineXf3d` named `xfAround`.
/// Parameter `A` can not be null. It is a single object.
/// Parameter `stable` can not be null. It is a single object.
MRC_API MR_AffineXf3d MR_AffineXf3d_xfAround(const MR_Matrix3d *A, const MR_Vector3d *stable);

/// application of the transformation to a point
/// Generated from a method of class `MR::AffineXf3d` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API MR_Vector3d MR_AffineXf3d_call(const MR_AffineXf3d *_this, const MR_Vector3d *x);

/// applies only linear part of the transformation to given vector (e.g. to normal) skipping adding shift (b)
/// for example if this is a rigid transformation, then only rotates input vector
/// Generated from a method of class `MR::AffineXf3d` named `linearOnly`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API MR_Vector3d MR_AffineXf3d_linearOnly(const MR_AffineXf3d *_this, const MR_Vector3d *x);

/// computes inverse transformation
/// Generated from a method of class `MR::AffineXf3d` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3d MR_AffineXf3d_inverse(const MR_AffineXf3d *_this);

/// composition of two transformations:
/// \f( y = (u * v) ( x ) = u( v( x ) ) = ( u.A * ( v.A * x + v.b ) + u.b ) = ( u.A * v.A ) * x + ( u.A * v.b + u.b ) \f)
/// Generated from function `MR::operator*`.
/// Parameter `u` can not be null. It is a single object.
/// Parameter `v` can not be null. It is a single object.
MRC_API MR_AffineXf3d MR_mul_MR_AffineXf3d(const MR_AffineXf3d *u, const MR_AffineXf3d *v);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_AffineXf3d(const MR_AffineXf3d *a, const MR_AffineXf3d *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_AffineXf3d(const MR_AffineXf3d *a, const MR_AffineXf3d *b);

#ifdef __cplusplus
} // extern "C"
#endif
