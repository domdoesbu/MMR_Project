// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRBox.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Stores either a single `MR::Box3f` or nothing.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_optional_MR_Box3f MR_std_optional_MR_Box3f;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_Box3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_Box3f *MR_std_optional_MR_Box3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_optional_MR_Box3f_DestroyArray()`.
/// Use `MR_std_optional_MR_Box3f_OffsetMutablePtr()` and `MR_std_optional_MR_Box3f_OffsetPtr()` to access the array elements.
MRC_API MR_std_optional_MR_Box3f *MR_std_optional_MR_Box3f_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_Box3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_Box3f *MR_std_optional_MR_Box3f_ConstructFromAnother(const MR_std_optional_MR_Box3f *other);

/// Constructs a new instance.
/// Parameter `other` is optional. To keep it empty, pass a null pointer.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_Box3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_Box3f *MR_std_optional_MR_Box3f_ConstructFrom(const MR_Box3f *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API void MR_std_optional_MR_Box3f_AssignFromAnother(MR_std_optional_MR_Box3f *_this, const MR_std_optional_MR_Box3f *other);

/// Assigns the contents.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` is optional. To keep it empty, pass a null pointer.
MRC_API void MR_std_optional_MR_Box3f_AssignFrom(MR_std_optional_MR_Box3f *_this, const MR_Box3f *other);

/// Destroys a heap-allocated instance of `MR_std_optional_MR_Box3f`. Does nothing if the pointer is null.
MRC_API void MR_std_optional_MR_Box3f_Destroy(const MR_std_optional_MR_Box3f *_this);

/// Destroys a heap-allocated array of `MR_std_optional_MR_Box3f`. Does nothing if the pointer is null.
MRC_API void MR_std_optional_MR_Box3f_DestroyArray(const MR_std_optional_MR_Box3f *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_optional_MR_Box3f *MR_std_optional_MR_Box3f_OffsetPtr(const MR_std_optional_MR_Box3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_optional_MR_Box3f *MR_std_optional_MR_Box3f_OffsetMutablePtr(MR_std_optional_MR_Box3f *ptr, ptrdiff_t i);

/// The stored element or null if none, read-only.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_Box3f *MR_std_optional_MR_Box3f_Value(const MR_std_optional_MR_Box3f *_this);

/// The stored element or null if none, mutable.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Box3f *MR_std_optional_MR_Box3f_MutableValue(MR_std_optional_MR_Box3f *_this);

#ifdef __cplusplus
} // extern "C"
#endif
