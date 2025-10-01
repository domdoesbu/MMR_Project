// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRAffineXf.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Polyline2 MR_Polyline2; // Defined in `#include <MRCMesh/MRPolyline.h>`.


/// Stores two objects: `MR::Polyline2` and `MR::Polyline2`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_pair_MR_Polyline2_MR_AffineXf3f MR_std_pair_MR_Polyline2_MR_AffineXf3f;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_MR_Polyline2_MR_AffineXf3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_MR_Polyline2_MR_AffineXf3f *MR_std_pair_MR_Polyline2_MR_AffineXf3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_pair_MR_Polyline2_MR_AffineXf3f_DestroyArray()`.
/// Use `MR_std_pair_MR_Polyline2_MR_AffineXf3f_OffsetMutablePtr()` and `MR_std_pair_MR_Polyline2_MR_AffineXf3f_OffsetPtr()` to access the array elements.
MRC_API MR_std_pair_MR_Polyline2_MR_AffineXf3f *MR_std_pair_MR_Polyline2_MR_AffineXf3f_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_MR_Polyline2_MR_AffineXf3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_MR_Polyline2_MR_AffineXf3f *MR_std_pair_MR_Polyline2_MR_AffineXf3f_ConstructFromAnother(MR_PassBy other_pass_by, MR_std_pair_MR_Polyline2_MR_AffineXf3f *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_pair_MR_Polyline2_MR_AffineXf3f_AssignFromAnother(MR_std_pair_MR_Polyline2_MR_AffineXf3f *_this, MR_PassBy other_pass_by, MR_std_pair_MR_Polyline2_MR_AffineXf3f *other);

/// Destroys a heap-allocated instance of `MR_std_pair_MR_Polyline2_MR_AffineXf3f`. Does nothing if the pointer is null.
MRC_API void MR_std_pair_MR_Polyline2_MR_AffineXf3f_Destroy(const MR_std_pair_MR_Polyline2_MR_AffineXf3f *_this);

/// Destroys a heap-allocated array of `MR_std_pair_MR_Polyline2_MR_AffineXf3f`. Does nothing if the pointer is null.
MRC_API void MR_std_pair_MR_Polyline2_MR_AffineXf3f_DestroyArray(const MR_std_pair_MR_Polyline2_MR_AffineXf3f *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_pair_MR_Polyline2_MR_AffineXf3f *MR_std_pair_MR_Polyline2_MR_AffineXf3f_OffsetPtr(const MR_std_pair_MR_Polyline2_MR_AffineXf3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_pair_MR_Polyline2_MR_AffineXf3f *MR_std_pair_MR_Polyline2_MR_AffineXf3f_OffsetMutablePtr(MR_std_pair_MR_Polyline2_MR_AffineXf3f *ptr, ptrdiff_t i);

/// Constructs the pair elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_MR_Polyline2_MR_AffineXf3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_MR_Polyline2_MR_AffineXf3f *MR_std_pair_MR_Polyline2_MR_AffineXf3f_Construct(MR_PassBy first_pass_by, MR_Polyline2 *first, MR_AffineXf3f second);

/// The first of the two elements, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Polyline2 *MR_std_pair_MR_Polyline2_MR_AffineXf3f_First(const MR_std_pair_MR_Polyline2_MR_AffineXf3f *_this);

/// The first of the two elements, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Polyline2 *MR_std_pair_MR_Polyline2_MR_AffineXf3f_MutableFirst(MR_std_pair_MR_Polyline2_MR_AffineXf3f *_this);

/// The second of the two elements, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *MR_std_pair_MR_Polyline2_MR_AffineXf3f_Second(const MR_std_pair_MR_Polyline2_MR_AffineXf3f *_this);

/// The second of the two elements, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AffineXf3f *MR_std_pair_MR_Polyline2_MR_AffineXf3f_MutableSecond(MR_std_pair_MR_Polyline2_MR_AffineXf3f *_this);

#ifdef __cplusplus
} // extern "C"
#endif
