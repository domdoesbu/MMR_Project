// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Stores one of 3 objects: `MR::FaceId`, `MR::EdgeId`, `MR::VertId`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_DestroyArray()`.
/// Use `MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_OffsetMutablePtr()` and `MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_OffsetPtr()` to access the array elements.
MRC_API MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_ConstructFromAnother(const MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API void MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_AssignFromAnother(MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *_this, const MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *other);

/// Destroys a heap-allocated instance of `MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId`. Does nothing if the pointer is null.
MRC_API void MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_Destroy(const MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *_this);

/// Destroys a heap-allocated array of `MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId`. Does nothing if the pointer is null.
MRC_API void MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_DestroyArray(const MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_OffsetPtr(const MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_OffsetMutablePtr(MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *ptr, ptrdiff_t i);

/// Returns the index of the stored element type. In rare cases may return -1 if this variant is "valueless by exception".
/// Parameter `_this` can not be null. It is a single object.
MRC_API size_t MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_Index(const MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *_this);

/// Constructs the variant storing the element 0, of type `MR::FaceId`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_ConstructAs_MR_FaceId(MR_FaceId value);

/// Constructs the variant storing the element 1, of type `MR::EdgeId`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_ConstructAs_MR_EdgeId(MR_EdgeId value);

/// Constructs the variant storing the element 2, of type `MR::VertId`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_ConstructAs_MR_VertId(MR_VertId value);

/// Assigns to the variant, making it store the element 0, of type `MR::FaceId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_AssignAs_MR_FaceId(MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *_this, MR_FaceId value);

/// Assigns to the variant, making it store the element 1, of type `MR::EdgeId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_AssignAs_MR_EdgeId(MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *_this, MR_EdgeId value);

/// Assigns to the variant, making it store the element 2, of type `MR::VertId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_AssignAs_MR_VertId(MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *_this, MR_VertId value);

/// Returns the element 0, of type `MR::FaceId`, read-only. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_FaceId *MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_Get_MR_FaceId(const MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *_this);

/// Returns the element 0, of type `MR::FaceId`, mutable. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_FaceId *MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_GetMutable_MR_FaceId(MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *_this);

/// Returns the element 1, of type `MR::EdgeId`, read-only. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_EdgeId *MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_Get_MR_EdgeId(const MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *_this);

/// Returns the element 1, of type `MR::EdgeId`, mutable. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId *MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_GetMutable_MR_EdgeId(MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *_this);

/// Returns the element 2, of type `MR::VertId`, read-only. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_VertId *MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_Get_MR_VertId(const MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *_this);

/// Returns the element 2, of type `MR::VertId`, mutable. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertId *MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId_GetMutable_MR_VertId(MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *_this);

#ifdef __cplusplus
} // extern "C"
#endif
