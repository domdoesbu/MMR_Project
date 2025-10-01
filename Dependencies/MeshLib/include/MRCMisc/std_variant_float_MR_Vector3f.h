// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Stores one of 2 objects: `float`, `MR::Vector3f`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_variant_float_MR_Vector3f MR_std_variant_float_MR_Vector3f;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_float_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_float_MR_Vector3f *MR_std_variant_float_MR_Vector3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_variant_float_MR_Vector3f_DestroyArray()`.
/// Use `MR_std_variant_float_MR_Vector3f_OffsetMutablePtr()` and `MR_std_variant_float_MR_Vector3f_OffsetPtr()` to access the array elements.
MRC_API MR_std_variant_float_MR_Vector3f *MR_std_variant_float_MR_Vector3f_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_float_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_float_MR_Vector3f *MR_std_variant_float_MR_Vector3f_ConstructFromAnother(const MR_std_variant_float_MR_Vector3f *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API void MR_std_variant_float_MR_Vector3f_AssignFromAnother(MR_std_variant_float_MR_Vector3f *_this, const MR_std_variant_float_MR_Vector3f *other);

/// Destroys a heap-allocated instance of `MR_std_variant_float_MR_Vector3f`. Does nothing if the pointer is null.
MRC_API void MR_std_variant_float_MR_Vector3f_Destroy(const MR_std_variant_float_MR_Vector3f *_this);

/// Destroys a heap-allocated array of `MR_std_variant_float_MR_Vector3f`. Does nothing if the pointer is null.
MRC_API void MR_std_variant_float_MR_Vector3f_DestroyArray(const MR_std_variant_float_MR_Vector3f *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_variant_float_MR_Vector3f *MR_std_variant_float_MR_Vector3f_OffsetPtr(const MR_std_variant_float_MR_Vector3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_variant_float_MR_Vector3f *MR_std_variant_float_MR_Vector3f_OffsetMutablePtr(MR_std_variant_float_MR_Vector3f *ptr, ptrdiff_t i);

/// Returns the index of the stored element type. In rare cases may return -1 if this variant is "valueless by exception".
/// Parameter `_this` can not be null. It is a single object.
MRC_API size_t MR_std_variant_float_MR_Vector3f_Index(const MR_std_variant_float_MR_Vector3f *_this);

/// Constructs the variant storing the element 0, of type `float`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_float_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_float_MR_Vector3f *MR_std_variant_float_MR_Vector3f_ConstructAs_float(float value);

/// Constructs the variant storing the element 1, of type `MR::Vector3f`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_float_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_float_MR_Vector3f *MR_std_variant_float_MR_Vector3f_ConstructAs_MR_Vector3f(MR_Vector3f value);

/// Assigns to the variant, making it store the element 0, of type `float`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_variant_float_MR_Vector3f_AssignAs_float(MR_std_variant_float_MR_Vector3f *_this, float value);

/// Assigns to the variant, making it store the element 1, of type `MR::Vector3f`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_variant_float_MR_Vector3f_AssignAs_MR_Vector3f(MR_std_variant_float_MR_Vector3f *_this, MR_Vector3f value);

/// Returns the element 0, of type `float`, read-only. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const float *MR_std_variant_float_MR_Vector3f_Get_float(const MR_std_variant_float_MR_Vector3f *_this);

/// Returns the element 0, of type `float`, mutable. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float *MR_std_variant_float_MR_Vector3f_GetMutable_float(MR_std_variant_float_MR_Vector3f *_this);

/// Returns the element 1, of type `MR::Vector3f`, read-only. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_Vector3f *MR_std_variant_float_MR_Vector3f_Get_MR_Vector3f(const MR_std_variant_float_MR_Vector3f *_this);

/// Returns the element 1, of type `MR::Vector3f`, mutable. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f *MR_std_variant_float_MR_Vector3f_GetMutable_MR_Vector3f(MR_std_variant_float_MR_Vector3f *_this);

#ifdef __cplusplus
} // extern "C"
#endif
