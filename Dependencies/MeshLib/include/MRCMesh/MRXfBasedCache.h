// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRBox.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_std_optional_MR_Box3f MR_std_optional_MR_Box3f; // Defined in `#include <MRCMisc/std_optional_MR_Box3f.h>`.


/// optional T-object container, which stores a transformation as well for which the object is valid
/// Generated from class `MR::XfBasedCache<MR::Box3f>`.
typedef struct MR_XfBasedCache_MR_Box3f MR_XfBasedCache_MR_Box3f;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_XfBasedCache_MR_Box3f_Destroy()` to free it when you're done using it.
MRC_API MR_XfBasedCache_MR_Box3f *MR_XfBasedCache_MR_Box3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_XfBasedCache_MR_Box3f_DestroyArray()`.
/// Use `MR_XfBasedCache_MR_Box3f_OffsetMutablePtr()` and `MR_XfBasedCache_MR_Box3f_OffsetPtr()` to access the array elements.
MRC_API MR_XfBasedCache_MR_Box3f *MR_XfBasedCache_MR_Box3f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_XfBasedCache_MR_Box3f *MR_XfBasedCache_MR_Box3f_OffsetPtr(const MR_XfBasedCache_MR_Box3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_XfBasedCache_MR_Box3f *MR_XfBasedCache_MR_Box3f_OffsetMutablePtr(MR_XfBasedCache_MR_Box3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::XfBasedCache<MR::Box3f>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_XfBasedCache_MR_Box3f_Destroy()` to free it when you're done using it.
MRC_API MR_XfBasedCache_MR_Box3f *MR_XfBasedCache_MR_Box3f_ConstructFromAnother(const MR_XfBasedCache_MR_Box3f *_other);

/// Destroys a heap-allocated instance of `MR_XfBasedCache_MR_Box3f`. Does nothing if the pointer is null.
MRC_API void MR_XfBasedCache_MR_Box3f_Destroy(const MR_XfBasedCache_MR_Box3f *_this);

/// Destroys a heap-allocated array of `MR_XfBasedCache_MR_Box3f`. Does nothing if the pointer is null.
MRC_API void MR_XfBasedCache_MR_Box3f_DestroyArray(const MR_XfBasedCache_MR_Box3f *_this);

/// Generated from a method of class `MR::XfBasedCache<MR::Box3f>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_XfBasedCache_MR_Box3f *MR_XfBasedCache_MR_Box3f_AssignFromAnother(MR_XfBasedCache_MR_Box3f *_this, const MR_XfBasedCache_MR_Box3f *_other);

/// returns stored object only if requested transformation is the same as stored one
/// Generated from a method of class `MR::XfBasedCache<MR::Box3f>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `xf` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_optional_MR_Box3f *MR_XfBasedCache_MR_Box3f_get(const MR_XfBasedCache_MR_Box3f *_this, const MR_AffineXf3f *xf);

/// sets new transformation and the object
/// Generated from a method of class `MR::XfBasedCache<MR::Box3f>` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `xf` can not be null. It is a single object.
MRC_API void MR_XfBasedCache_MR_Box3f_set(MR_XfBasedCache_MR_Box3f *_this, const MR_AffineXf3f *xf, MR_Box3f t);

/// clears stored object
/// Generated from a method of class `MR::XfBasedCache<MR::Box3f>` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_XfBasedCache_MR_Box3f_reset(MR_XfBasedCache_MR_Box3f *_this);

#ifdef __cplusplus
} // extern "C"
#endif
