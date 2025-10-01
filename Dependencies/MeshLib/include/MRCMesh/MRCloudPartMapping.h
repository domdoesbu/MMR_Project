// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_VertMap MR_VertMap; // Defined in `#include <MRCMesh/MRVector.h>`.


// mapping among elements of source point cloud, from which a part is taken, and target (this) point cloud
/// Generated from class `MR::CloudPartMapping`.
typedef struct MR_CloudPartMapping MR_CloudPartMapping;

// from.id -> this.id, efficient when full cloud without many invalid points is added into another cloud
/// Returns a pointer to a member variable of class `MR::CloudPartMapping` named `src2tgtVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertMap *const *MR_CloudPartMapping_Get_src2tgtVerts(const MR_CloudPartMapping *_this);

// from.id -> this.id, efficient when full cloud without many invalid points is added into another cloud
/// Modifies a member variable of class `MR::CloudPartMapping` named `src2tgtVerts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_CloudPartMapping_Set_src2tgtVerts(MR_CloudPartMapping *_this, MR_VertMap *value);

// from.id -> this.id, efficient when full cloud without many invalid points is added into another cloud
/// Returns a mutable pointer to a member variable of class `MR::CloudPartMapping` named `src2tgtVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertMap **MR_CloudPartMapping_GetMutable_src2tgtVerts(MR_CloudPartMapping *_this);

// this.id -> from.id, efficient when any cloud or its part is added into empty cloud
/// Returns a pointer to a member variable of class `MR::CloudPartMapping` named `tgt2srcVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertMap *const *MR_CloudPartMapping_Get_tgt2srcVerts(const MR_CloudPartMapping *_this);

// this.id -> from.id, efficient when any cloud or its part is added into empty cloud
/// Modifies a member variable of class `MR::CloudPartMapping` named `tgt2srcVerts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_CloudPartMapping_Set_tgt2srcVerts(MR_CloudPartMapping *_this, MR_VertMap *value);

// this.id -> from.id, efficient when any cloud or its part is added into empty cloud
/// Returns a mutable pointer to a member variable of class `MR::CloudPartMapping` named `tgt2srcVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertMap **MR_CloudPartMapping_GetMutable_tgt2srcVerts(MR_CloudPartMapping *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CloudPartMapping_Destroy()` to free it when you're done using it.
MRC_API MR_CloudPartMapping *MR_CloudPartMapping_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CloudPartMapping_DestroyArray()`.
/// Use `MR_CloudPartMapping_OffsetMutablePtr()` and `MR_CloudPartMapping_OffsetPtr()` to access the array elements.
MRC_API MR_CloudPartMapping *MR_CloudPartMapping_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::CloudPartMapping` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CloudPartMapping_Destroy()` to free it when you're done using it.
MRC_API MR_CloudPartMapping *MR_CloudPartMapping_ConstructFrom(MR_VertMap *src2tgtVerts, MR_VertMap *tgt2srcVerts);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_CloudPartMapping *MR_CloudPartMapping_OffsetPtr(const MR_CloudPartMapping *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_CloudPartMapping *MR_CloudPartMapping_OffsetMutablePtr(MR_CloudPartMapping *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::CloudPartMapping`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CloudPartMapping_Destroy()` to free it when you're done using it.
MRC_API MR_CloudPartMapping *MR_CloudPartMapping_ConstructFromAnother(const MR_CloudPartMapping *_other);

/// Destroys a heap-allocated instance of `MR_CloudPartMapping`. Does nothing if the pointer is null.
MRC_API void MR_CloudPartMapping_Destroy(const MR_CloudPartMapping *_this);

/// Destroys a heap-allocated array of `MR_CloudPartMapping`. Does nothing if the pointer is null.
MRC_API void MR_CloudPartMapping_DestroyArray(const MR_CloudPartMapping *_this);

/// Generated from a method of class `MR::CloudPartMapping` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_CloudPartMapping *MR_CloudPartMapping_AssignFromAnother(MR_CloudPartMapping *_this, const MR_CloudPartMapping *_other);

#ifdef __cplusplus
} // extern "C"
#endif
