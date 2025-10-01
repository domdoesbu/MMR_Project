// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __APPLE__
#include <stddef.h>
typedef ptrdiff_t MR_int64_t;
typedef size_t MR_uint64_t;
#else
#include <stdint.h>
typedef int64_t MR_int64_t;
typedef uint64_t MR_uint64_t;
#endif


typedef enum MR_PassBy
{
    MR_PassBy_DefaultConstruct, // Default-construct this parameter, the associated pointer must be null.
    MR_PassBy_Copy, // Copy the object into the function. For most types this doesn't modify the input object, so feel free to cast away constness from it if needed.
    MR_PassBy_Move, // Move the object into the function. The input object remains alive and still needs to be manually destroyed after.
    MR_PassBy_DefaultArgument, // If this function has a default argument value for this parameter, uses that; illegal otherwise. The associated pointer must be null.
    MR_PassBy_NoObject, // This is used to pass no object to the function (functions supporting this will document this fact). This is used e.g. for C++ `std::optional<T>` parameters.
} MR_PassBy;

/// Allocates `n` bytes of memory, which can then be freed using `MR_Free()`.
MRC_API void *MR_Alloc(size_t num_bytes);

/// Deallocates memory that was previously allocated with `MR_Alloc()`. Does nothing if the pointer is null.
MRC_API void MR_Free(void *ptr);

/// Allocates `n` bytes of memory, which can then be freed using `MR_FreeArray()`.
/// For all purposes this is equivalent to `MR_Alloc()` and `MR_Free()`, but the deallocation functions are not interchangable.
/// This is a bit weird, but we have to have separate deallocation functions for arrays and non-arrays, because ASAN complains otherwise.
/// So the allocation functions must be provided separately for both too.
MRC_API void *MR_AllocArray(size_t num_bytes);

/// Deallocates memory that was previously allocated with `MR_AllocArray()`. Does nothing if the pointer is null.
MRC_API void MR_FreeArray(void *ptr);

