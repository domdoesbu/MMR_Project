// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_NoInit MR_NoInit; // Defined in `#include <MRCMesh/MRMeshFwd.h>`.
typedef struct MR_Vector3d MR_Vector3d; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.


/// \brief encodes a point inside a triangle using barycentric coordinates

/// \details Notations used below: v0, v1, v2 - points of the triangle
/// Generated from class `MR::TriPointf`.
typedef struct MR_TriPointf MR_TriPointf;

/// \brief encodes a point inside a triangle using barycentric coordinates

/// \details Notations used below: v0, v1, v2 - points of the triangle
/// Generated from class `MR::TriPointd`.
typedef struct MR_TriPointd MR_TriPointd;

/// Returns a pointer to a member variable of class `MR::TriPointf` named `eps`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_TriPointf_Get_eps(void);

///< a in [0,1], a=0 => point is on [v2,v0] edge, a=1 => point is in v1
/// Returns a pointer to a member variable of class `MR::TriPointf` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_TriPointf_Get_a(const MR_TriPointf *_this);

///< a in [0,1], a=0 => point is on [v2,v0] edge, a=1 => point is in v1
/// Modifies a member variable of class `MR::TriPointf` named `a`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriPointf_Set_a(MR_TriPointf *_this, float value);

///< a in [0,1], a=0 => point is on [v2,v0] edge, a=1 => point is in v1
/// Returns a mutable pointer to a member variable of class `MR::TriPointf` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_TriPointf_GetMutable_a(MR_TriPointf *_this);

///< b in [0,1], b=0 => point is on [v0,v1] edge, b=1 => point is in v2
/// Returns a pointer to a member variable of class `MR::TriPointf` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_TriPointf_Get_b(const MR_TriPointf *_this);

///< b in [0,1], b=0 => point is on [v0,v1] edge, b=1 => point is in v2
/// Modifies a member variable of class `MR::TriPointf` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriPointf_Set_b(MR_TriPointf *_this, float value);

///< b in [0,1], b=0 => point is on [v0,v1] edge, b=1 => point is in v2
/// Returns a mutable pointer to a member variable of class `MR::TriPointf` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_TriPointf_GetMutable_b(MR_TriPointf *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriPointf_Destroy()` to free it when you're done using it.
MRC_API MR_TriPointf *MR_TriPointf_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_TriPointf_DestroyArray()`.
/// Use `MR_TriPointf_OffsetMutablePtr()` and `MR_TriPointf_OffsetPtr()` to access the array elements.
MRC_API MR_TriPointf *MR_TriPointf_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_TriPointf *MR_TriPointf_OffsetPtr(const MR_TriPointf *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_TriPointf *MR_TriPointf_OffsetMutablePtr(MR_TriPointf *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::TriPointf`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriPointf_Destroy()` to free it when you're done using it.
MRC_API MR_TriPointf *MR_TriPointf_ConstructFromAnother(const MR_TriPointf *_other);

/// Generated from a constructor of class `MR::TriPointf`.
/// Parameter `_1` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriPointf_Destroy()` to free it when you're done using it.
MRC_API MR_TriPointf *MR_TriPointf_Construct_1(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::TriPointf`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriPointf_Destroy()` to free it when you're done using it.
MRC_API MR_TriPointf *MR_TriPointf_Construct_2(float a, float b);

/// Generated from a constructor of class `MR::TriPointf`.
/// Parameter `s` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriPointf_Destroy()` to free it when you're done using it.
MRC_API MR_TriPointf *MR_TriPointf_Construct_float(const MR_TriPointf *s);

/// given a point coordinates and triangle (v0,v1,v2) computes barycentric coordinates of the point
/// Generated from a constructor of class `MR::TriPointf`.
/// Parameter `p` can not be null. It is a single object.
/// Parameter `v0` can not be null. It is a single object.
/// Parameter `v1` can not be null. It is a single object.
/// Parameter `v2` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriPointf_Destroy()` to free it when you're done using it.
MRC_API MR_TriPointf *MR_TriPointf_Construct_4(const MR_Vector3f *p, const MR_Vector3f *v0, const MR_Vector3f *v1, const MR_Vector3f *v2);

/// given a point coordinates and triangle (0,v1,v2) computes barycentric coordinates of the point
/// Generated from a constructor of class `MR::TriPointf`.
/// Parameter `p` can not be null. It is a single object.
/// Parameter `v1` can not be null. It is a single object.
/// Parameter `v2` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriPointf_Destroy()` to free it when you're done using it.
MRC_API MR_TriPointf *MR_TriPointf_Construct_3(const MR_Vector3f *p, const MR_Vector3f *v1, const MR_Vector3f *v2);

/// Destroys a heap-allocated instance of `MR_TriPointf`. Does nothing if the pointer is null.
MRC_API void MR_TriPointf_Destroy(const MR_TriPointf *_this);

/// Destroys a heap-allocated array of `MR_TriPointf`. Does nothing if the pointer is null.
MRC_API void MR_TriPointf_DestroyArray(const MR_TriPointf *_this);

/// Generated from a method of class `MR::TriPointf` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TriPointf *MR_TriPointf_AssignFromAnother(MR_TriPointf *_this, const MR_TriPointf *_other);

/// represents the same point relative to next edge in the same triangle
/// Generated from a method of class `MR::TriPointf` named `lnext`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriPointf_Destroy()` to free it when you're done using it.
MRC_API MR_TriPointf *MR_TriPointf_lnext(const MR_TriPointf *_this);

/// returns [0,2] if the point is in a vertex or -1 otherwise
/// Generated from a method of class `MR::TriPointf` named `inVertex`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_TriPointf_inVertex(const MR_TriPointf *_this);

/// returns [0,2] if the point is on edge or -1 otherwise:
/// 0 means edge [v1,v2]; 1 means edge [v2,v0]; 2 means edge [v0,v1]
/// Generated from a method of class `MR::TriPointf` named `onEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_TriPointf_onEdge(const MR_TriPointf *_this);

/// returns true if two points have equal (a,b) representation
/// Generated from a method of class `MR::TriPointf` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rhs` can not be null. It is a single object.
MRC_API bool MR_equal_MR_TriPointf(const MR_TriPointf *_this, const MR_TriPointf *rhs);

/// Returns a pointer to a member variable of class `MR::TriPointd` named `eps`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_TriPointd_Get_eps(void);

///< a in [0,1], a=0 => point is on [v2,v0] edge, a=1 => point is in v1
/// Returns a pointer to a member variable of class `MR::TriPointd` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_TriPointd_Get_a(const MR_TriPointd *_this);

///< a in [0,1], a=0 => point is on [v2,v0] edge, a=1 => point is in v1
/// Modifies a member variable of class `MR::TriPointd` named `a`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriPointd_Set_a(MR_TriPointd *_this, double value);

///< a in [0,1], a=0 => point is on [v2,v0] edge, a=1 => point is in v1
/// Returns a mutable pointer to a member variable of class `MR::TriPointd` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_TriPointd_GetMutable_a(MR_TriPointd *_this);

///< b in [0,1], b=0 => point is on [v0,v1] edge, b=1 => point is in v2
/// Returns a pointer to a member variable of class `MR::TriPointd` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_TriPointd_Get_b(const MR_TriPointd *_this);

///< b in [0,1], b=0 => point is on [v0,v1] edge, b=1 => point is in v2
/// Modifies a member variable of class `MR::TriPointd` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriPointd_Set_b(MR_TriPointd *_this, double value);

///< b in [0,1], b=0 => point is on [v0,v1] edge, b=1 => point is in v2
/// Returns a mutable pointer to a member variable of class `MR::TriPointd` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_TriPointd_GetMutable_b(MR_TriPointd *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriPointd_Destroy()` to free it when you're done using it.
MRC_API MR_TriPointd *MR_TriPointd_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_TriPointd_DestroyArray()`.
/// Use `MR_TriPointd_OffsetMutablePtr()` and `MR_TriPointd_OffsetPtr()` to access the array elements.
MRC_API MR_TriPointd *MR_TriPointd_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_TriPointd *MR_TriPointd_OffsetPtr(const MR_TriPointd *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_TriPointd *MR_TriPointd_OffsetMutablePtr(MR_TriPointd *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::TriPointd`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriPointd_Destroy()` to free it when you're done using it.
MRC_API MR_TriPointd *MR_TriPointd_ConstructFromAnother(const MR_TriPointd *_other);

/// Generated from a constructor of class `MR::TriPointd`.
/// Parameter `_1` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriPointd_Destroy()` to free it when you're done using it.
MRC_API MR_TriPointd *MR_TriPointd_Construct_1(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::TriPointd`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriPointd_Destroy()` to free it when you're done using it.
MRC_API MR_TriPointd *MR_TriPointd_Construct_2(double a, double b);

/// given a point coordinates and triangle (v0,v1,v2) computes barycentric coordinates of the point
/// Generated from a constructor of class `MR::TriPointd`.
/// Parameter `p` can not be null. It is a single object.
/// Parameter `v0` can not be null. It is a single object.
/// Parameter `v1` can not be null. It is a single object.
/// Parameter `v2` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriPointd_Destroy()` to free it when you're done using it.
MRC_API MR_TriPointd *MR_TriPointd_Construct_4(const MR_Vector3d *p, const MR_Vector3d *v0, const MR_Vector3d *v1, const MR_Vector3d *v2);

/// given a point coordinates and triangle (0,v1,v2) computes barycentric coordinates of the point
/// Generated from a constructor of class `MR::TriPointd`.
/// Parameter `p` can not be null. It is a single object.
/// Parameter `v1` can not be null. It is a single object.
/// Parameter `v2` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriPointd_Destroy()` to free it when you're done using it.
MRC_API MR_TriPointd *MR_TriPointd_Construct_3(const MR_Vector3d *p, const MR_Vector3d *v1, const MR_Vector3d *v2);

/// Destroys a heap-allocated instance of `MR_TriPointd`. Does nothing if the pointer is null.
MRC_API void MR_TriPointd_Destroy(const MR_TriPointd *_this);

/// Destroys a heap-allocated array of `MR_TriPointd`. Does nothing if the pointer is null.
MRC_API void MR_TriPointd_DestroyArray(const MR_TriPointd *_this);

/// Generated from a method of class `MR::TriPointd` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TriPointd *MR_TriPointd_AssignFromAnother(MR_TriPointd *_this, const MR_TriPointd *_other);

/// represents the same point relative to next edge in the same triangle
/// Generated from a method of class `MR::TriPointd` named `lnext`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriPointd_Destroy()` to free it when you're done using it.
MRC_API MR_TriPointd *MR_TriPointd_lnext(const MR_TriPointd *_this);

/// returns [0,2] if the point is in a vertex or -1 otherwise
/// Generated from a method of class `MR::TriPointd` named `inVertex`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_TriPointd_inVertex(const MR_TriPointd *_this);

/// returns [0,2] if the point is on edge or -1 otherwise:
/// 0 means edge [v1,v2]; 1 means edge [v2,v0]; 2 means edge [v0,v1]
/// Generated from a method of class `MR::TriPointd` named `onEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_TriPointd_onEdge(const MR_TriPointd *_this);

/// returns true if two points have equal (a,b) representation
/// Generated from a method of class `MR::TriPointd` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rhs` can not be null. It is a single object.
MRC_API bool MR_equal_MR_TriPointd(const MR_TriPointd *_this, const MR_TriPointd *rhs);

#ifdef __cplusplus
} // extern "C"
#endif
