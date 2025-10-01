// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_PointsProjectionResult MR_PointsProjectionResult; // Defined in `#include <MRCMesh/MRPointsProject.h>`.
typedef struct MR_std_vector_MR_PointsProjectionResult MR_std_vector_MR_PointsProjectionResult; // Defined in `#include <MRCMisc/std_vector_MR_PointsProjectionResult.h>`.


/// the class stores some number of smallest elements from a larger number of candidates
/// Generated from class `MR::FewSmallest<MR::PointsProjectionResult>`.
typedef struct MR_FewSmallest_MR_PointsProjectionResult MR_FewSmallest_MR_PointsProjectionResult;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FewSmallest_MR_PointsProjectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_FewSmallest_MR_PointsProjectionResult *MR_FewSmallest_MR_PointsProjectionResult_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FewSmallest_MR_PointsProjectionResult_DestroyArray()`.
/// Use `MR_FewSmallest_MR_PointsProjectionResult_OffsetMutablePtr()` and `MR_FewSmallest_MR_PointsProjectionResult_OffsetPtr()` to access the array elements.
MRC_API MR_FewSmallest_MR_PointsProjectionResult *MR_FewSmallest_MR_PointsProjectionResult_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FewSmallest_MR_PointsProjectionResult *MR_FewSmallest_MR_PointsProjectionResult_OffsetPtr(const MR_FewSmallest_MR_PointsProjectionResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FewSmallest_MR_PointsProjectionResult *MR_FewSmallest_MR_PointsProjectionResult_OffsetMutablePtr(MR_FewSmallest_MR_PointsProjectionResult *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FewSmallest<MR::PointsProjectionResult>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FewSmallest_MR_PointsProjectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_FewSmallest_MR_PointsProjectionResult *MR_FewSmallest_MR_PointsProjectionResult_ConstructFromAnother(MR_PassBy _other_pass_by, MR_FewSmallest_MR_PointsProjectionResult *_other);

/// configure the object to store at most given number of elements
/// Generated from a constructor of class `MR::FewSmallest<MR::PointsProjectionResult>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FewSmallest_MR_PointsProjectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_FewSmallest_MR_PointsProjectionResult *MR_FewSmallest_MR_PointsProjectionResult_Construct(MR_uint64_t maxElms);

/// Destroys a heap-allocated instance of `MR_FewSmallest_MR_PointsProjectionResult`. Does nothing if the pointer is null.
MRC_API void MR_FewSmallest_MR_PointsProjectionResult_Destroy(const MR_FewSmallest_MR_PointsProjectionResult *_this);

/// Destroys a heap-allocated array of `MR_FewSmallest_MR_PointsProjectionResult`. Does nothing if the pointer is null.
MRC_API void MR_FewSmallest_MR_PointsProjectionResult_DestroyArray(const MR_FewSmallest_MR_PointsProjectionResult *_this);

/// Generated from a method of class `MR::FewSmallest<MR::PointsProjectionResult>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FewSmallest_MR_PointsProjectionResult *MR_FewSmallest_MR_PointsProjectionResult_AssignFromAnother(MR_FewSmallest_MR_PointsProjectionResult *_this, MR_PassBy _other_pass_by, MR_FewSmallest_MR_PointsProjectionResult *_other);

/// clears the content and reconfigure the object to store at most given number of elements
/// Generated from a method of class `MR::FewSmallest<MR::PointsProjectionResult>` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FewSmallest_MR_PointsProjectionResult_reset(MR_FewSmallest_MR_PointsProjectionResult *_this, MR_uint64_t maxElms);

/// returns the maximum number of elements to be stored here
/// Generated from a method of class `MR::FewSmallest<MR::PointsProjectionResult>` named `maxElms`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_FewSmallest_MR_PointsProjectionResult_maxElms(const MR_FewSmallest_MR_PointsProjectionResult *_this);

/// returns whether the container is currently empty
/// Generated from a method of class `MR::FewSmallest<MR::PointsProjectionResult>` named `empty`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_FewSmallest_MR_PointsProjectionResult_empty(const MR_FewSmallest_MR_PointsProjectionResult *_this);

/// returns current number of stored element
/// Generated from a method of class `MR::FewSmallest<MR::PointsProjectionResult>` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_FewSmallest_MR_PointsProjectionResult_size(const MR_FewSmallest_MR_PointsProjectionResult *_this);

/// returns whether we have already maximum number of elements stored
/// Generated from a method of class `MR::FewSmallest<MR::PointsProjectionResult>` named `full`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_FewSmallest_MR_PointsProjectionResult_full(const MR_FewSmallest_MR_PointsProjectionResult *_this);

/// returns the smallest elements found so far
/// Generated from a method of class `MR::FewSmallest<MR::PointsProjectionResult>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_PointsProjectionResult *MR_FewSmallest_MR_PointsProjectionResult_get(const MR_FewSmallest_MR_PointsProjectionResult *_this);

/// returns the largest among stored smallest elements
/// Generated from a method of class `MR::FewSmallest<MR::PointsProjectionResult>` named `top`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PointsProjectionResult *MR_FewSmallest_MR_PointsProjectionResult_top(const MR_FewSmallest_MR_PointsProjectionResult *_this);

/// returns the largest among stored smallest elements or given element if this is empty
/// Generated from a method of class `MR::FewSmallest<MR::PointsProjectionResult>` named `topOr`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `emptyRes` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PointsProjectionResult *MR_FewSmallest_MR_PointsProjectionResult_topOr(const MR_FewSmallest_MR_PointsProjectionResult *_this, const MR_PointsProjectionResult *emptyRes);

/// considers one more element, storing it if it is within the smallest
/// Generated from a method of class `MR::FewSmallest<MR::PointsProjectionResult>` named `push`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `t` can not be null. It is a single object.
MRC_API void MR_FewSmallest_MR_PointsProjectionResult_push(MR_FewSmallest_MR_PointsProjectionResult *_this, const MR_PointsProjectionResult *t);

/// removes all stored elements
/// Generated from a method of class `MR::FewSmallest<MR::PointsProjectionResult>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FewSmallest_MR_PointsProjectionResult_clear(MR_FewSmallest_MR_PointsProjectionResult *_this);

#ifdef __cplusplus
} // extern "C"
#endif
