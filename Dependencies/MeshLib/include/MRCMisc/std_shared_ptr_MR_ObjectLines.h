// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_ObjectLines MR_ObjectLines; // Defined in `#include <MRCMesh/MRObjectLines.h>`.


/// Wraps a pointer to a single shared reference-counted heap-allocated `MR::ObjectLines`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_shared_ptr_MR_ObjectLines MR_std_shared_ptr_MR_ObjectLines;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_ObjectLines_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_ObjectLines *MR_std_shared_ptr_MR_ObjectLines_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_shared_ptr_MR_ObjectLines_DestroyArray()`.
/// Use `MR_std_shared_ptr_MR_ObjectLines_OffsetMutablePtr()` and `MR_std_shared_ptr_MR_ObjectLines_OffsetPtr()` to access the array elements.
MRC_API MR_std_shared_ptr_MR_ObjectLines *MR_std_shared_ptr_MR_ObjectLines_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_ObjectLines_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_ObjectLines *MR_std_shared_ptr_MR_ObjectLines_ConstructFromAnother(MR_PassBy other_pass_by, MR_std_shared_ptr_MR_ObjectLines *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_shared_ptr_MR_ObjectLines_AssignFromAnother(MR_std_shared_ptr_MR_ObjectLines *_this, MR_PassBy other_pass_by, MR_std_shared_ptr_MR_ObjectLines *other);

/// Destroys a heap-allocated instance of `MR_std_shared_ptr_MR_ObjectLines`. Does nothing if the pointer is null.
MRC_API void MR_std_shared_ptr_MR_ObjectLines_Destroy(const MR_std_shared_ptr_MR_ObjectLines *_this);

/// Destroys a heap-allocated array of `MR_std_shared_ptr_MR_ObjectLines`. Does nothing if the pointer is null.
MRC_API void MR_std_shared_ptr_MR_ObjectLines_DestroyArray(const MR_std_shared_ptr_MR_ObjectLines *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_shared_ptr_MR_ObjectLines *MR_std_shared_ptr_MR_ObjectLines_OffsetPtr(const MR_std_shared_ptr_MR_ObjectLines *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_shared_ptr_MR_ObjectLines *MR_std_shared_ptr_MR_ObjectLines_OffsetMutablePtr(MR_std_shared_ptr_MR_ObjectLines *ptr, ptrdiff_t i);

/// Returns the stored pointer, possibly null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_ObjectLines *MR_std_shared_ptr_MR_ObjectLines_Get(const MR_std_shared_ptr_MR_ObjectLines *_this);

/// How many shared pointers share the managed object. Zero if no object is being managed.
/// This being zero usually conincides with `MR_std_shared_ptr_MR_ObjectLines_Get()` returning null, but is ultimately orthogonal.
/// Note that in multithreaded environments, the only safe way to use this number is comparing it with zero. Positive values might change by the time you get to use them.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int MR_std_shared_ptr_MR_ObjectLines_UseCount(const MR_std_shared_ptr_MR_ObjectLines *_this);

/// Create a new instance, taking ownership of an existing pointer.
/// Parameter `ptr` should point to a single object rather than to an array.
/// Parameter `ptr` takes ownership of the passed pointer (if not null), and will later call `MR_ObjectLines_Destroy()` on it automatically.
MRC_API void MR_std_shared_ptr_MR_ObjectLines_Construct(MR_ObjectLines *ptr);

/// Overwrite the existing instance, taking ownership of an existing pointer. The previously owned object, if any, has its reference count decremented.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `ptr` should point to a single object rather than to an array.
/// Parameter `ptr` takes ownership of the passed pointer (if not null), and will later call `MR_ObjectLines_Destroy()` on it automatically.
MRC_API void MR_std_shared_ptr_MR_ObjectLines_Assign(MR_std_shared_ptr_MR_ObjectLines *_this, MR_ObjectLines *ptr);

#ifdef __cplusplus
} // extern "C"
#endif
