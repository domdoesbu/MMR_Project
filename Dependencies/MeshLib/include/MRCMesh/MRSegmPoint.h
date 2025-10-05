// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


/// \brief encodes a point inside a line segment using relative distance in [0,1]
/// Generated from class `MR::SegmPointf`.
typedef struct MR_SegmPointf MR_SegmPointf;

/// \brief encodes a point inside a line segment using relative distance in [0,1]
/// Generated from class `MR::SegmPointd`.
typedef struct MR_SegmPointd MR_SegmPointd;

/// Returns a pointer to a member variable of class `MR::SegmPointf` named `eps`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SegmPointf_Get_eps(void);

///< a in [0,1], a=0 => point is in v0, a=1 => point is in v1
/// Returns a pointer to a member variable of class `MR::SegmPointf` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SegmPointf_Get_a(const MR_SegmPointf *_this);

///< a in [0,1], a=0 => point is in v0, a=1 => point is in v1
/// Modifies a member variable of class `MR::SegmPointf` named `a`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SegmPointf_Set_a(MR_SegmPointf *_this, float value);

///< a in [0,1], a=0 => point is in v0, a=1 => point is in v1
/// Returns a mutable pointer to a member variable of class `MR::SegmPointf` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SegmPointf_GetMutable_a(MR_SegmPointf *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SegmPointf_Destroy()` to free it when you're done using it.
MRC_API MR_SegmPointf *MR_SegmPointf_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SegmPointf_DestroyArray()`.
/// Use `MR_SegmPointf_OffsetMutablePtr()` and `MR_SegmPointf_OffsetPtr()` to access the array elements.
MRC_API MR_SegmPointf *MR_SegmPointf_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SegmPointf *MR_SegmPointf_OffsetPtr(const MR_SegmPointf *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SegmPointf *MR_SegmPointf_OffsetMutablePtr(MR_SegmPointf *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SegmPointf`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SegmPointf_Destroy()` to free it when you're done using it.
MRC_API MR_SegmPointf *MR_SegmPointf_ConstructFromAnother(const MR_SegmPointf *_other);

/// Generated from a constructor of class `MR::SegmPointf`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SegmPointf_Destroy()` to free it when you're done using it.
MRC_API MR_SegmPointf *MR_SegmPointf_Construct(float a);

/// Destroys a heap-allocated instance of `MR_SegmPointf`. Does nothing if the pointer is null.
MRC_API void MR_SegmPointf_Destroy(const MR_SegmPointf *_this);

/// Destroys a heap-allocated array of `MR_SegmPointf`. Does nothing if the pointer is null.
MRC_API void MR_SegmPointf_DestroyArray(const MR_SegmPointf *_this);

/// Generated from a conversion operator of class `MR::SegmPointf` to type `float`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_SegmPointf_ConvertTo_float(const MR_SegmPointf *_this);

/// Generated from a conversion operator of class `MR::SegmPointf` to type `float &`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SegmPointf_ConvertTo_float_ref(MR_SegmPointf *_this);

/// Generated from a method of class `MR::SegmPointf` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SegmPointf *MR_SegmPointf_AssignFromAnother(MR_SegmPointf *_this, const MR_SegmPointf *_other);

/// returns [0,1] if the point is in a vertex or -1 otherwise
/// Generated from a method of class `MR::SegmPointf` named `inVertex`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_SegmPointf_inVertex(const MR_SegmPointf *_this);

/// represents the same point relative to oppositely directed segment
/// Generated from a method of class `MR::SegmPointf` named `sym`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SegmPointf_Destroy()` to free it when you're done using it.
MRC_API MR_SegmPointf *MR_SegmPointf_sym(const MR_SegmPointf *_this);

/// returns true if two points have equal (a) representation
/// Generated from a method of class `MR::SegmPointf` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rhs` can not be null. It is a single object.
MRC_API bool MR_equal_MR_SegmPointf(const MR_SegmPointf *_this, const MR_SegmPointf *rhs);

/// Generated from a method of class `MR::SegmPointf` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_equal_MR_SegmPointf_float(const MR_SegmPointf *_this, float rhs);

/// Returns a pointer to a member variable of class `MR::SegmPointd` named `eps`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_SegmPointd_Get_eps(void);

///< a in [0,1], a=0 => point is in v0, a=1 => point is in v1
/// Returns a pointer to a member variable of class `MR::SegmPointd` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_SegmPointd_Get_a(const MR_SegmPointd *_this);

///< a in [0,1], a=0 => point is in v0, a=1 => point is in v1
/// Modifies a member variable of class `MR::SegmPointd` named `a`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SegmPointd_Set_a(MR_SegmPointd *_this, double value);

///< a in [0,1], a=0 => point is in v0, a=1 => point is in v1
/// Returns a mutable pointer to a member variable of class `MR::SegmPointd` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_SegmPointd_GetMutable_a(MR_SegmPointd *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SegmPointd_Destroy()` to free it when you're done using it.
MRC_API MR_SegmPointd *MR_SegmPointd_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SegmPointd_DestroyArray()`.
/// Use `MR_SegmPointd_OffsetMutablePtr()` and `MR_SegmPointd_OffsetPtr()` to access the array elements.
MRC_API MR_SegmPointd *MR_SegmPointd_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SegmPointd *MR_SegmPointd_OffsetPtr(const MR_SegmPointd *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SegmPointd *MR_SegmPointd_OffsetMutablePtr(MR_SegmPointd *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SegmPointd`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SegmPointd_Destroy()` to free it when you're done using it.
MRC_API MR_SegmPointd *MR_SegmPointd_ConstructFromAnother(const MR_SegmPointd *_other);

/// Generated from a constructor of class `MR::SegmPointd`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SegmPointd_Destroy()` to free it when you're done using it.
MRC_API MR_SegmPointd *MR_SegmPointd_Construct(double a);

/// Destroys a heap-allocated instance of `MR_SegmPointd`. Does nothing if the pointer is null.
MRC_API void MR_SegmPointd_Destroy(const MR_SegmPointd *_this);

/// Destroys a heap-allocated array of `MR_SegmPointd`. Does nothing if the pointer is null.
MRC_API void MR_SegmPointd_DestroyArray(const MR_SegmPointd *_this);

/// Generated from a conversion operator of class `MR::SegmPointd` to type `double`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_SegmPointd_ConvertTo_double(const MR_SegmPointd *_this);

/// Generated from a conversion operator of class `MR::SegmPointd` to type `double &`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_SegmPointd_ConvertTo_double_ref(MR_SegmPointd *_this);

/// Generated from a method of class `MR::SegmPointd` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SegmPointd *MR_SegmPointd_AssignFromAnother(MR_SegmPointd *_this, const MR_SegmPointd *_other);

/// returns [0,1] if the point is in a vertex or -1 otherwise
/// Generated from a method of class `MR::SegmPointd` named `inVertex`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_SegmPointd_inVertex(const MR_SegmPointd *_this);

/// represents the same point relative to oppositely directed segment
/// Generated from a method of class `MR::SegmPointd` named `sym`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SegmPointd_Destroy()` to free it when you're done using it.
MRC_API MR_SegmPointd *MR_SegmPointd_sym(const MR_SegmPointd *_this);

/// returns true if two points have equal (a) representation
/// Generated from a method of class `MR::SegmPointd` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rhs` can not be null. It is a single object.
MRC_API bool MR_equal_MR_SegmPointd(const MR_SegmPointd *_this, const MR_SegmPointd *rhs);

/// Generated from a method of class `MR::SegmPointd` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_equal_MR_SegmPointd_double(const MR_SegmPointd *_this, double rhs);

#ifdef __cplusplus
} // extern "C"
#endif
