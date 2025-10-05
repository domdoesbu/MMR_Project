// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRAffineXf.h>
#include <MRCMesh/MRMatrix3.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Represents a quaternion following the notations from
/// https://en.wikipedia.org/wiki/Quaternion
/// Generated from class `MR::Quaternionf`.
typedef struct MR_Quaternionf MR_Quaternionf;

/// Represents a quaternion following the notations from
/// https://en.wikipedia.org/wiki/Quaternion
/// Generated from class `MR::Quaterniond`.
typedef struct MR_Quaterniond MR_Quaterniond;

///< real part of the quaternion
/// Returns a pointer to a member variable of class `MR::Quaternionf` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Quaternionf_Get_a(const MR_Quaternionf *_this);

///< real part of the quaternion
/// Modifies a member variable of class `MR::Quaternionf` named `a`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Quaternionf_Set_a(MR_Quaternionf *_this, float value);

///< real part of the quaternion
/// Returns a mutable pointer to a member variable of class `MR::Quaternionf` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Quaternionf_GetMutable_a(MR_Quaternionf *_this);

///< imaginary part: b*i + c*j + d*k
/// Returns a pointer to a member variable of class `MR::Quaternionf` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Quaternionf_Get_b(const MR_Quaternionf *_this);

///< imaginary part: b*i + c*j + d*k
/// Modifies a member variable of class `MR::Quaternionf` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Quaternionf_Set_b(MR_Quaternionf *_this, float value);

///< imaginary part: b*i + c*j + d*k
/// Returns a mutable pointer to a member variable of class `MR::Quaternionf` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Quaternionf_GetMutable_b(MR_Quaternionf *_this);

///< imaginary part: b*i + c*j + d*k
/// Returns a pointer to a member variable of class `MR::Quaternionf` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Quaternionf_Get_c(const MR_Quaternionf *_this);

///< imaginary part: b*i + c*j + d*k
/// Modifies a member variable of class `MR::Quaternionf` named `c`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Quaternionf_Set_c(MR_Quaternionf *_this, float value);

///< imaginary part: b*i + c*j + d*k
/// Returns a mutable pointer to a member variable of class `MR::Quaternionf` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Quaternionf_GetMutable_c(MR_Quaternionf *_this);

///< imaginary part: b*i + c*j + d*k
/// Returns a pointer to a member variable of class `MR::Quaternionf` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Quaternionf_Get_d(const MR_Quaternionf *_this);

///< imaginary part: b*i + c*j + d*k
/// Modifies a member variable of class `MR::Quaternionf` named `d`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Quaternionf_Set_d(MR_Quaternionf *_this, float value);

///< imaginary part: b*i + c*j + d*k
/// Returns a mutable pointer to a member variable of class `MR::Quaternionf` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Quaternionf_GetMutable_d(MR_Quaternionf *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaternionf_Destroy()` to free it when you're done using it.
MRC_API MR_Quaternionf *MR_Quaternionf_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Quaternionf_DestroyArray()`.
/// Use `MR_Quaternionf_OffsetMutablePtr()` and `MR_Quaternionf_OffsetPtr()` to access the array elements.
MRC_API MR_Quaternionf *MR_Quaternionf_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Quaternionf *MR_Quaternionf_OffsetPtr(const MR_Quaternionf *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Quaternionf *MR_Quaternionf_OffsetMutablePtr(MR_Quaternionf *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Quaternionf`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaternionf_Destroy()` to free it when you're done using it.
MRC_API MR_Quaternionf *MR_Quaternionf_ConstructFromAnother(const MR_Quaternionf *_other);

/// Generated from a constructor of class `MR::Quaternionf`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaternionf_Destroy()` to free it when you're done using it.
MRC_API MR_Quaternionf *MR_Quaternionf_Construct_4(float a, float b, float c, float d);

/// \related Quaternion
/// Generated from a constructor of class `MR::Quaternionf`.
/// Parameter `axis` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaternionf_Destroy()` to free it when you're done using it.
MRC_API MR_Quaternionf *MR_Quaternionf_Construct_2_const_MR_Vector3f_ref_float(const MR_Vector3f *axis, float angle);

/// Generated from a constructor of class `MR::Quaternionf`.
/// Parameter `im` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaternionf_Destroy()` to free it when you're done using it.
MRC_API MR_Quaternionf *MR_Quaternionf_Construct_2_float(float real, const MR_Vector3f *im);

/// Generated from a constructor of class `MR::Quaternionf`.
/// Parameter `m` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaternionf_Destroy()` to free it when you're done using it.
MRC_API MR_Quaternionf *MR_Quaternionf_Construct_1(const MR_Matrix3f *m);

/// finds shorter arc rotation quaternion from one vector to another
/// Generated from a constructor of class `MR::Quaternionf`.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `to` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaternionf_Destroy()` to free it when you're done using it.
MRC_API MR_Quaternionf *MR_Quaternionf_Construct_2_const_MR_Vector3f_ref_MR_Vector3f(const MR_Vector3f *from, const MR_Vector3f *to);

/// Destroys a heap-allocated instance of `MR_Quaternionf`. Does nothing if the pointer is null.
MRC_API void MR_Quaternionf_Destroy(const MR_Quaternionf *_this);

/// Destroys a heap-allocated array of `MR_Quaternionf`. Does nothing if the pointer is null.
MRC_API void MR_Quaternionf_DestroyArray(const MR_Quaternionf *_this);

/// converts this into 3x3 rotation matrix
/// Generated from a conversion operator of class `MR::Quaternionf` to type `MR::Matrix3f`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix3f MR_Quaternionf_ConvertTo_MR_Matrix3f(const MR_Quaternionf *_this);

/// Generated from a method of class `MR::Quaternionf` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Quaternionf *MR_Quaternionf_AssignFromAnother(MR_Quaternionf *_this, const MR_Quaternionf *_other);

/// returns imaginary part of the quaternion as a vector
/// Generated from a method of class `MR::Quaternionf` named `im`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Quaternionf_im(const MR_Quaternionf *_this);

/// returns angle of rotation encoded in this quaternion
/// Generated from a method of class `MR::Quaternionf` named `angle`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Quaternionf_angle(const MR_Quaternionf *_this);

/// returns axis of rotation encoded in this quaternion
/// Generated from a method of class `MR::Quaternionf` named `axis`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Quaternionf_axis(const MR_Quaternionf *_this);

/// Generated from a method of class `MR::Quaternionf` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Quaternionf_normSq(const MR_Quaternionf *_this);

/// Generated from a method of class `MR::Quaternionf` named `norm`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Quaternionf_norm(const MR_Quaternionf *_this);

/// returns quaternion representing the same rotation, using the opposite rotation direction and opposite angle
/// Generated from a method of class `MR::Quaternionf` named `operator-`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaternionf_Destroy()` to free it when you're done using it.
MRC_API MR_Quaternionf *MR_neg_MR_Quaternionf(const MR_Quaternionf *_this);

/// scales this quaternion to make its norm unit
/// Generated from a method of class `MR::Quaternionf` named `normalize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Quaternionf_normalize(MR_Quaternionf *_this);

/// Generated from a method of class `MR::Quaternionf` named `normalized`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaternionf_Destroy()` to free it when you're done using it.
MRC_API MR_Quaternionf *MR_Quaternionf_normalized(const MR_Quaternionf *_this);

/// computes conjugate quaternion, which for unit quaternions encodes the opposite rotation
/// Generated from a method of class `MR::Quaternionf` named `conjugate`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaternionf_Destroy()` to free it when you're done using it.
MRC_API MR_Quaternionf *MR_Quaternionf_conjugate(const MR_Quaternionf *_this);

/// computes reciprocal quaternion
/// Generated from a method of class `MR::Quaternionf` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaternionf_Destroy()` to free it when you're done using it.
MRC_API MR_Quaternionf *MR_Quaternionf_inverse(const MR_Quaternionf *_this);

/// for unit quaternion returns the rotation of point p, which is faster to compute for single point;
/// for multiple points it is faster to create matrix representation and apply it to the points
/// Generated from a method of class `MR::Quaternionf` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Quaternionf_call(const MR_Quaternionf *_this, const MR_Vector3f *p);

/// given t in [0,1], interpolates linearly two quaternions giving in general not-unit quaternion
/// Generated from a method of class `MR::Quaternionf` named `lerp`.
/// Parameter `q0` can not be null. It is a single object.
/// Parameter `q1` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaternionf_Destroy()` to free it when you're done using it.
MRC_API MR_Quaternionf *MR_Quaternionf_lerp(const MR_Quaternionf *q0, const MR_Quaternionf *q1, float t);

/// given t in [0,1] and two unit quaternions, interpolates them spherically and produces another unit quaternion
/// Generated from a method of class `MR::Quaternionf` named `slerp`.
/// Parameter `q0` can not be null. It is a single object.
/// Parameter `q1` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaternionf_Destroy()` to free it when you're done using it.
MRC_API MR_Quaternionf *MR_Quaternionf_slerp_3_MR_Quaternionf(const MR_Quaternionf *q0, const MR_Quaternionf *q1, float t);

/// given t in [0,1] and two rotation matrices, interpolates them spherically and produces another rotation matrix
/// Generated from a method of class `MR::Quaternionf` named `slerp`.
/// Parameter `m0` can not be null. It is a single object.
/// Parameter `m1` can not be null. It is a single object.
MRC_API MR_Matrix3f MR_Quaternionf_slerp_3_MR_Matrix3f(const MR_Matrix3f *m0, const MR_Matrix3f *m1, float t);

/// given t in [0,1] and rigid transformations, interpolates them spherically and produces another rigid transformation;
/// p is the only point that will have straight line movement during interpolation
/// Generated from a method of class `MR::Quaternionf` named `slerp`.
/// Parameter `xf0` can not be null. It is a single object.
/// Parameter `xf1` can not be null. It is a single object.
/// Parameter `p` is a single object.
/// Parameter `p` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_AffineXf3f MR_Quaternionf_slerp_4(const MR_AffineXf3f *xf0, const MR_AffineXf3f *xf1, float t, const MR_Vector3f *p);

/// Generated from a method of class `MR::Quaternionf` named `operator*=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Quaternionf *MR_Quaternionf_mul_assign(MR_Quaternionf *_this, float s);

/// Generated from a method of class `MR::Quaternionf` named `operator/=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Quaternionf *MR_Quaternionf_div_assign(MR_Quaternionf *_this, float s);

///< real part of the quaternion
/// Returns a pointer to a member variable of class `MR::Quaterniond` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_Quaterniond_Get_a(const MR_Quaterniond *_this);

///< real part of the quaternion
/// Modifies a member variable of class `MR::Quaterniond` named `a`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Quaterniond_Set_a(MR_Quaterniond *_this, double value);

///< real part of the quaternion
/// Returns a mutable pointer to a member variable of class `MR::Quaterniond` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_Quaterniond_GetMutable_a(MR_Quaterniond *_this);

///< imaginary part: b*i + c*j + d*k
/// Returns a pointer to a member variable of class `MR::Quaterniond` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_Quaterniond_Get_b(const MR_Quaterniond *_this);

///< imaginary part: b*i + c*j + d*k
/// Modifies a member variable of class `MR::Quaterniond` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Quaterniond_Set_b(MR_Quaterniond *_this, double value);

///< imaginary part: b*i + c*j + d*k
/// Returns a mutable pointer to a member variable of class `MR::Quaterniond` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_Quaterniond_GetMutable_b(MR_Quaterniond *_this);

///< imaginary part: b*i + c*j + d*k
/// Returns a pointer to a member variable of class `MR::Quaterniond` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_Quaterniond_Get_c(const MR_Quaterniond *_this);

///< imaginary part: b*i + c*j + d*k
/// Modifies a member variable of class `MR::Quaterniond` named `c`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Quaterniond_Set_c(MR_Quaterniond *_this, double value);

///< imaginary part: b*i + c*j + d*k
/// Returns a mutable pointer to a member variable of class `MR::Quaterniond` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_Quaterniond_GetMutable_c(MR_Quaterniond *_this);

///< imaginary part: b*i + c*j + d*k
/// Returns a pointer to a member variable of class `MR::Quaterniond` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_Quaterniond_Get_d(const MR_Quaterniond *_this);

///< imaginary part: b*i + c*j + d*k
/// Modifies a member variable of class `MR::Quaterniond` named `d`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Quaterniond_Set_d(MR_Quaterniond *_this, double value);

///< imaginary part: b*i + c*j + d*k
/// Returns a mutable pointer to a member variable of class `MR::Quaterniond` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_Quaterniond_GetMutable_d(MR_Quaterniond *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaterniond_Destroy()` to free it when you're done using it.
MRC_API MR_Quaterniond *MR_Quaterniond_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Quaterniond_DestroyArray()`.
/// Use `MR_Quaterniond_OffsetMutablePtr()` and `MR_Quaterniond_OffsetPtr()` to access the array elements.
MRC_API MR_Quaterniond *MR_Quaterniond_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Quaterniond *MR_Quaterniond_OffsetPtr(const MR_Quaterniond *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Quaterniond *MR_Quaterniond_OffsetMutablePtr(MR_Quaterniond *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Quaterniond`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaterniond_Destroy()` to free it when you're done using it.
MRC_API MR_Quaterniond *MR_Quaterniond_ConstructFromAnother(const MR_Quaterniond *_other);

/// Generated from a constructor of class `MR::Quaterniond`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaterniond_Destroy()` to free it when you're done using it.
MRC_API MR_Quaterniond *MR_Quaterniond_Construct_4(double a, double b, double c, double d);

/// \related Quaternion
/// Generated from a constructor of class `MR::Quaterniond`.
/// Parameter `axis` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaterniond_Destroy()` to free it when you're done using it.
MRC_API MR_Quaterniond *MR_Quaterniond_Construct_2_const_MR_Vector3d_ref_double(const MR_Vector3d *axis, double angle);

/// Generated from a constructor of class `MR::Quaterniond`.
/// Parameter `im` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaterniond_Destroy()` to free it when you're done using it.
MRC_API MR_Quaterniond *MR_Quaterniond_Construct_2_double(double real, const MR_Vector3d *im);

/// Generated from a constructor of class `MR::Quaterniond`.
/// Parameter `m` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaterniond_Destroy()` to free it when you're done using it.
MRC_API MR_Quaterniond *MR_Quaterniond_Construct_1(const MR_Matrix3d *m);

/// finds shorter arc rotation quaternion from one vector to another
/// Generated from a constructor of class `MR::Quaterniond`.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `to` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaterniond_Destroy()` to free it when you're done using it.
MRC_API MR_Quaterniond *MR_Quaterniond_Construct_2_const_MR_Vector3d_ref_MR_Vector3d(const MR_Vector3d *from, const MR_Vector3d *to);

/// Destroys a heap-allocated instance of `MR_Quaterniond`. Does nothing if the pointer is null.
MRC_API void MR_Quaterniond_Destroy(const MR_Quaterniond *_this);

/// Destroys a heap-allocated array of `MR_Quaterniond`. Does nothing if the pointer is null.
MRC_API void MR_Quaterniond_DestroyArray(const MR_Quaterniond *_this);

/// converts this into 3x3 rotation matrix
/// Generated from a conversion operator of class `MR::Quaterniond` to type `MR::Matrix3d`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix3d MR_Quaterniond_ConvertTo_MR_Matrix3d(const MR_Quaterniond *_this);

/// Generated from a method of class `MR::Quaterniond` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Quaterniond *MR_Quaterniond_AssignFromAnother(MR_Quaterniond *_this, const MR_Quaterniond *_other);

/// returns imaginary part of the quaternion as a vector
/// Generated from a method of class `MR::Quaterniond` named `im`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3d MR_Quaterniond_im(const MR_Quaterniond *_this);

/// returns angle of rotation encoded in this quaternion
/// Generated from a method of class `MR::Quaterniond` named `angle`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Quaterniond_angle(const MR_Quaterniond *_this);

/// returns axis of rotation encoded in this quaternion
/// Generated from a method of class `MR::Quaterniond` named `axis`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3d MR_Quaterniond_axis(const MR_Quaterniond *_this);

/// Generated from a method of class `MR::Quaterniond` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Quaterniond_normSq(const MR_Quaterniond *_this);

/// Generated from a method of class `MR::Quaterniond` named `norm`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Quaterniond_norm(const MR_Quaterniond *_this);

/// returns quaternion representing the same rotation, using the opposite rotation direction and opposite angle
/// Generated from a method of class `MR::Quaterniond` named `operator-`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaterniond_Destroy()` to free it when you're done using it.
MRC_API MR_Quaterniond *MR_neg_MR_Quaterniond(const MR_Quaterniond *_this);

/// scales this quaternion to make its norm unit
/// Generated from a method of class `MR::Quaterniond` named `normalize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Quaterniond_normalize(MR_Quaterniond *_this);

/// Generated from a method of class `MR::Quaterniond` named `normalized`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaterniond_Destroy()` to free it when you're done using it.
MRC_API MR_Quaterniond *MR_Quaterniond_normalized(const MR_Quaterniond *_this);

/// computes conjugate quaternion, which for unit quaternions encodes the opposite rotation
/// Generated from a method of class `MR::Quaterniond` named `conjugate`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaterniond_Destroy()` to free it when you're done using it.
MRC_API MR_Quaterniond *MR_Quaterniond_conjugate(const MR_Quaterniond *_this);

/// computes reciprocal quaternion
/// Generated from a method of class `MR::Quaterniond` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaterniond_Destroy()` to free it when you're done using it.
MRC_API MR_Quaterniond *MR_Quaterniond_inverse(const MR_Quaterniond *_this);

/// for unit quaternion returns the rotation of point p, which is faster to compute for single point;
/// for multiple points it is faster to create matrix representation and apply it to the points
/// Generated from a method of class `MR::Quaterniond` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
MRC_API MR_Vector3d MR_Quaterniond_call(const MR_Quaterniond *_this, const MR_Vector3d *p);

/// given t in [0,1], interpolates linearly two quaternions giving in general not-unit quaternion
/// Generated from a method of class `MR::Quaterniond` named `lerp`.
/// Parameter `q0` can not be null. It is a single object.
/// Parameter `q1` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaterniond_Destroy()` to free it when you're done using it.
MRC_API MR_Quaterniond *MR_Quaterniond_lerp(const MR_Quaterniond *q0, const MR_Quaterniond *q1, double t);

/// given t in [0,1] and two unit quaternions, interpolates them spherically and produces another unit quaternion
/// Generated from a method of class `MR::Quaterniond` named `slerp`.
/// Parameter `q0` can not be null. It is a single object.
/// Parameter `q1` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Quaterniond_Destroy()` to free it when you're done using it.
MRC_API MR_Quaterniond *MR_Quaterniond_slerp_3_MR_Quaterniond(const MR_Quaterniond *q0, const MR_Quaterniond *q1, double t);

/// given t in [0,1] and two rotation matrices, interpolates them spherically and produces another rotation matrix
/// Generated from a method of class `MR::Quaterniond` named `slerp`.
/// Parameter `m0` can not be null. It is a single object.
/// Parameter `m1` can not be null. It is a single object.
MRC_API MR_Matrix3d MR_Quaterniond_slerp_3_MR_Matrix3d(const MR_Matrix3d *m0, const MR_Matrix3d *m1, double t);

/// given t in [0,1] and rigid transformations, interpolates them spherically and produces another rigid transformation;
/// p is the only point that will have straight line movement during interpolation
/// Generated from a method of class `MR::Quaterniond` named `slerp`.
/// Parameter `xf0` can not be null. It is a single object.
/// Parameter `xf1` can not be null. It is a single object.
/// Parameter `p` is a single object.
/// Parameter `p` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_AffineXf3d MR_Quaterniond_slerp_4(const MR_AffineXf3d *xf0, const MR_AffineXf3d *xf1, double t, const MR_Vector3d *p);

/// Generated from a method of class `MR::Quaterniond` named `operator*=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Quaterniond *MR_Quaterniond_mul_assign(MR_Quaterniond *_this, double s);

/// Generated from a method of class `MR::Quaterniond` named `operator/=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Quaterniond *MR_Quaterniond_div_assign(MR_Quaterniond *_this, double s);

#ifdef __cplusplus
} // extern "C"
#endif
