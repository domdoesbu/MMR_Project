// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_vector_MR_SomeLocalTriangulations MR_std_vector_MR_SomeLocalTriangulations; // Defined in `#include <MRCMisc/std_vector_MR_SomeLocalTriangulations.h>`.


/// Stores either a single `std::vector<MR::SomeLocalTriangulations>` or nothing.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_optional_std_vector_MR_SomeLocalTriangulations MR_std_optional_std_vector_MR_SomeLocalTriangulations;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_std_vector_MR_SomeLocalTriangulations_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_std_vector_MR_SomeLocalTriangulations *MR_std_optional_std_vector_MR_SomeLocalTriangulations_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_optional_std_vector_MR_SomeLocalTriangulations_DestroyArray()`.
/// Use `MR_std_optional_std_vector_MR_SomeLocalTriangulations_OffsetMutablePtr()` and `MR_std_optional_std_vector_MR_SomeLocalTriangulations_OffsetPtr()` to access the array elements.
MRC_API MR_std_optional_std_vector_MR_SomeLocalTriangulations *MR_std_optional_std_vector_MR_SomeLocalTriangulations_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_std_vector_MR_SomeLocalTriangulations_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_std_vector_MR_SomeLocalTriangulations *MR_std_optional_std_vector_MR_SomeLocalTriangulations_ConstructFromAnother(MR_PassBy other_pass_by, MR_std_optional_std_vector_MR_SomeLocalTriangulations *other);

/// Constructs a new instance.
/// Parameter `other` is optional. To keep it empty, pass `MR_PassBy_NoObject` and a null pointer.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_std_vector_MR_SomeLocalTriangulations_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_std_vector_MR_SomeLocalTriangulations *MR_std_optional_std_vector_MR_SomeLocalTriangulations_ConstructFrom(MR_PassBy other_pass_by, MR_std_vector_MR_SomeLocalTriangulations *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_optional_std_vector_MR_SomeLocalTriangulations_AssignFromAnother(MR_std_optional_std_vector_MR_SomeLocalTriangulations *_this, MR_PassBy other_pass_by, MR_std_optional_std_vector_MR_SomeLocalTriangulations *other);

/// Assigns the contents.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` is optional. To keep it empty, pass `MR_PassBy_NoObject` and a null pointer.
MRC_API void MR_std_optional_std_vector_MR_SomeLocalTriangulations_AssignFrom(MR_std_optional_std_vector_MR_SomeLocalTriangulations *_this, MR_PassBy other_pass_by, MR_std_vector_MR_SomeLocalTriangulations *other);

/// Destroys a heap-allocated instance of `MR_std_optional_std_vector_MR_SomeLocalTriangulations`. Does nothing if the pointer is null.
MRC_API void MR_std_optional_std_vector_MR_SomeLocalTriangulations_Destroy(const MR_std_optional_std_vector_MR_SomeLocalTriangulations *_this);

/// Destroys a heap-allocated array of `MR_std_optional_std_vector_MR_SomeLocalTriangulations`. Does nothing if the pointer is null.
MRC_API void MR_std_optional_std_vector_MR_SomeLocalTriangulations_DestroyArray(const MR_std_optional_std_vector_MR_SomeLocalTriangulations *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_optional_std_vector_MR_SomeLocalTriangulations *MR_std_optional_std_vector_MR_SomeLocalTriangulations_OffsetPtr(const MR_std_optional_std_vector_MR_SomeLocalTriangulations *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_optional_std_vector_MR_SomeLocalTriangulations *MR_std_optional_std_vector_MR_SomeLocalTriangulations_OffsetMutablePtr(MR_std_optional_std_vector_MR_SomeLocalTriangulations *ptr, ptrdiff_t i);

/// The stored element or null if none, read-only.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_std_vector_MR_SomeLocalTriangulations *MR_std_optional_std_vector_MR_SomeLocalTriangulations_Value(const MR_std_optional_std_vector_MR_SomeLocalTriangulations *_this);

/// The stored element or null if none, mutable.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_std_vector_MR_SomeLocalTriangulations *MR_std_optional_std_vector_MR_SomeLocalTriangulations_MutableValue(MR_std_optional_std_vector_MR_SomeLocalTriangulations *_this);

#ifdef __cplusplus
} // extern "C"
#endif
