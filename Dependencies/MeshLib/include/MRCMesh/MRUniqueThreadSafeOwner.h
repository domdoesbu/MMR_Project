// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AABBTree MR_AABBTree; // Defined in `#include <MRCMesh/MRAABBTree.h>`.
typedef struct MR_AABBTreePoints MR_AABBTreePoints; // Defined in `#include <MRCMesh/MRAABBTreePoints.h>`.
typedef struct MR_std_function_MR_AABBTree MR_std_function_MR_AABBTree; // Defined in `#include <MRCMisc/std_function_MR_AABBTree.h>`.
typedef struct MR_std_function_MR_AABBTreePoints MR_std_function_MR_AABBTreePoints; // Defined in `#include <MRCMisc/std_function_MR_AABBTreePoints.h>`.
typedef struct MR_std_function_void_from_MR_AABBTreePoints_ref MR_std_function_void_from_MR_AABBTreePoints_ref; // Defined in `#include <MRCMisc/std_function_void_from_MR_AABBTreePoints_ref.h>`.
typedef struct MR_std_function_void_from_MR_AABBTree_ref MR_std_function_void_from_MR_AABBTree_ref; // Defined in `#include <MRCMisc/std_function_void_from_MR_AABBTree_ref.h>`.


/// This class is base class for unique thread safe owning of some objects, for example AABBTree
/// classes derived from this one should have function like getOrCreate
/// Generated from class `MR::UniqueThreadSafeOwner<MR::AABBTree>`.
typedef struct MR_UniqueThreadSafeOwner_MR_AABBTree MR_UniqueThreadSafeOwner_MR_AABBTree;

/// This class is base class for unique thread safe owning of some objects, for example AABBTree
/// classes derived from this one should have function like getOrCreate
/// Generated from class `MR::UniqueThreadSafeOwner<MR::AABBTreePoints>`.
typedef struct MR_UniqueThreadSafeOwner_MR_AABBTreePoints MR_UniqueThreadSafeOwner_MR_AABBTreePoints;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UniqueThreadSafeOwner_MR_AABBTree_Destroy()` to free it when you're done using it.
MRC_API MR_UniqueThreadSafeOwner_MR_AABBTree *MR_UniqueThreadSafeOwner_MR_AABBTree_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_UniqueThreadSafeOwner_MR_AABBTree_DestroyArray()`.
/// Use `MR_UniqueThreadSafeOwner_MR_AABBTree_OffsetMutablePtr()` and `MR_UniqueThreadSafeOwner_MR_AABBTree_OffsetPtr()` to access the array elements.
MRC_API MR_UniqueThreadSafeOwner_MR_AABBTree *MR_UniqueThreadSafeOwner_MR_AABBTree_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_UniqueThreadSafeOwner_MR_AABBTree *MR_UniqueThreadSafeOwner_MR_AABBTree_OffsetPtr(const MR_UniqueThreadSafeOwner_MR_AABBTree *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_UniqueThreadSafeOwner_MR_AABBTree *MR_UniqueThreadSafeOwner_MR_AABBTree_OffsetMutablePtr(MR_UniqueThreadSafeOwner_MR_AABBTree *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::UniqueThreadSafeOwner<MR::AABBTree>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UniqueThreadSafeOwner_MR_AABBTree_Destroy()` to free it when you're done using it.
MRC_API MR_UniqueThreadSafeOwner_MR_AABBTree *MR_UniqueThreadSafeOwner_MR_AABBTree_ConstructFromAnother(MR_PassBy b_pass_by, MR_UniqueThreadSafeOwner_MR_AABBTree *b);

/// Destroys a heap-allocated instance of `MR_UniqueThreadSafeOwner_MR_AABBTree`. Does nothing if the pointer is null.
MRC_API void MR_UniqueThreadSafeOwner_MR_AABBTree_Destroy(const MR_UniqueThreadSafeOwner_MR_AABBTree *_this);

/// Destroys a heap-allocated array of `MR_UniqueThreadSafeOwner_MR_AABBTree`. Does nothing if the pointer is null.
MRC_API void MR_UniqueThreadSafeOwner_MR_AABBTree_DestroyArray(const MR_UniqueThreadSafeOwner_MR_AABBTree *_this);

/// Generated from a method of class `MR::UniqueThreadSafeOwner<MR::AABBTree>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UniqueThreadSafeOwner_MR_AABBTree *MR_UniqueThreadSafeOwner_MR_AABBTree_AssignFromAnother(MR_UniqueThreadSafeOwner_MR_AABBTree *_this, MR_PassBy b_pass_by, MR_UniqueThreadSafeOwner_MR_AABBTree *b);

/// deletes owned object
/// Generated from a method of class `MR::UniqueThreadSafeOwner<MR::AABBTree>` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UniqueThreadSafeOwner_MR_AABBTree_reset(MR_UniqueThreadSafeOwner_MR_AABBTree *_this);

/// returns existing owned object and does not create new one
/// Generated from a method of class `MR::UniqueThreadSafeOwner<MR::AABBTree>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AABBTree *MR_UniqueThreadSafeOwner_MR_AABBTree_get(MR_UniqueThreadSafeOwner_MR_AABBTree *_this);

/// returns existing owned object or creates new one using creator function
/// Generated from a method of class `MR::UniqueThreadSafeOwner<MR::AABBTree>` named `getOrCreate`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `creator` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AABBTree *MR_UniqueThreadSafeOwner_MR_AABBTree_getOrCreate(MR_UniqueThreadSafeOwner_MR_AABBTree *_this, const MR_std_function_MR_AABBTree *creator);

/// calls given updater for the owned object (if any)
/// Generated from a method of class `MR::UniqueThreadSafeOwner<MR::AABBTree>` named `update`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `updater` can not be null. It is a single object.
MRC_API void MR_UniqueThreadSafeOwner_MR_AABBTree_update(MR_UniqueThreadSafeOwner_MR_AABBTree *_this, const MR_std_function_void_from_MR_AABBTree_ref *updater);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::UniqueThreadSafeOwner<MR::AABBTree>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_UniqueThreadSafeOwner_MR_AABBTree_heapBytes(const MR_UniqueThreadSafeOwner_MR_AABBTree *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UniqueThreadSafeOwner_MR_AABBTreePoints_Destroy()` to free it when you're done using it.
MRC_API MR_UniqueThreadSafeOwner_MR_AABBTreePoints *MR_UniqueThreadSafeOwner_MR_AABBTreePoints_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_UniqueThreadSafeOwner_MR_AABBTreePoints_DestroyArray()`.
/// Use `MR_UniqueThreadSafeOwner_MR_AABBTreePoints_OffsetMutablePtr()` and `MR_UniqueThreadSafeOwner_MR_AABBTreePoints_OffsetPtr()` to access the array elements.
MRC_API MR_UniqueThreadSafeOwner_MR_AABBTreePoints *MR_UniqueThreadSafeOwner_MR_AABBTreePoints_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_UniqueThreadSafeOwner_MR_AABBTreePoints *MR_UniqueThreadSafeOwner_MR_AABBTreePoints_OffsetPtr(const MR_UniqueThreadSafeOwner_MR_AABBTreePoints *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_UniqueThreadSafeOwner_MR_AABBTreePoints *MR_UniqueThreadSafeOwner_MR_AABBTreePoints_OffsetMutablePtr(MR_UniqueThreadSafeOwner_MR_AABBTreePoints *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::UniqueThreadSafeOwner<MR::AABBTreePoints>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UniqueThreadSafeOwner_MR_AABBTreePoints_Destroy()` to free it when you're done using it.
MRC_API MR_UniqueThreadSafeOwner_MR_AABBTreePoints *MR_UniqueThreadSafeOwner_MR_AABBTreePoints_ConstructFromAnother(MR_PassBy b_pass_by, MR_UniqueThreadSafeOwner_MR_AABBTreePoints *b);

/// Destroys a heap-allocated instance of `MR_UniqueThreadSafeOwner_MR_AABBTreePoints`. Does nothing if the pointer is null.
MRC_API void MR_UniqueThreadSafeOwner_MR_AABBTreePoints_Destroy(const MR_UniqueThreadSafeOwner_MR_AABBTreePoints *_this);

/// Destroys a heap-allocated array of `MR_UniqueThreadSafeOwner_MR_AABBTreePoints`. Does nothing if the pointer is null.
MRC_API void MR_UniqueThreadSafeOwner_MR_AABBTreePoints_DestroyArray(const MR_UniqueThreadSafeOwner_MR_AABBTreePoints *_this);

/// Generated from a method of class `MR::UniqueThreadSafeOwner<MR::AABBTreePoints>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UniqueThreadSafeOwner_MR_AABBTreePoints *MR_UniqueThreadSafeOwner_MR_AABBTreePoints_AssignFromAnother(MR_UniqueThreadSafeOwner_MR_AABBTreePoints *_this, MR_PassBy b_pass_by, MR_UniqueThreadSafeOwner_MR_AABBTreePoints *b);

/// deletes owned object
/// Generated from a method of class `MR::UniqueThreadSafeOwner<MR::AABBTreePoints>` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UniqueThreadSafeOwner_MR_AABBTreePoints_reset(MR_UniqueThreadSafeOwner_MR_AABBTreePoints *_this);

/// returns existing owned object and does not create new one
/// Generated from a method of class `MR::UniqueThreadSafeOwner<MR::AABBTreePoints>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AABBTreePoints *MR_UniqueThreadSafeOwner_MR_AABBTreePoints_get(MR_UniqueThreadSafeOwner_MR_AABBTreePoints *_this);

/// returns existing owned object or creates new one using creator function
/// Generated from a method of class `MR::UniqueThreadSafeOwner<MR::AABBTreePoints>` named `getOrCreate`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `creator` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AABBTreePoints *MR_UniqueThreadSafeOwner_MR_AABBTreePoints_getOrCreate(MR_UniqueThreadSafeOwner_MR_AABBTreePoints *_this, const MR_std_function_MR_AABBTreePoints *creator);

/// calls given updater for the owned object (if any)
/// Generated from a method of class `MR::UniqueThreadSafeOwner<MR::AABBTreePoints>` named `update`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `updater` can not be null. It is a single object.
MRC_API void MR_UniqueThreadSafeOwner_MR_AABBTreePoints_update(MR_UniqueThreadSafeOwner_MR_AABBTreePoints *_this, const MR_std_function_void_from_MR_AABBTreePoints_ref *updater);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::UniqueThreadSafeOwner<MR::AABBTreePoints>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_UniqueThreadSafeOwner_MR_AABBTreePoints_heapBytes(const MR_UniqueThreadSafeOwner_MR_AABBTreePoints *_this);

#ifdef __cplusplus
} // extern "C"
#endif
