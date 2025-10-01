// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_EdgeMap MR_EdgeMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_FaceMap MR_FaceMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_UndirectedEdgeMap MR_UndirectedEdgeMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertMap MR_VertMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_WholeEdgeMap MR_WholeEdgeMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId MR_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_EdgeId_MR_EdgeId.h>`.
typedef struct MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_FaceId_MR_FaceId.h>`.
typedef struct MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_EdgeId MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_EdgeId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_UndirectedEdgeId_MR_EdgeId.h>`.
typedef struct MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId.h>`.
typedef struct MR_phmap_flat_hash_map_MR_VertId_MR_VertId MR_phmap_flat_hash_map_MR_VertId_MR_VertId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_VertId_MR_VertId.h>`.
typedef struct MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId; // Defined in `#include <MRCMisc/std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId.h>`.
typedef struct MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId; // Defined in `#include <MRCMisc/std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId.h>`.
typedef struct MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId; // Defined in `#include <MRCMisc/std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId.h>`.
typedef struct MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId; // Defined in `#include <MRCMisc/std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId.h>`.
typedef struct MR_std_variant_MR_WholeEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_EdgeId MR_std_variant_MR_WholeEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_EdgeId; // Defined in `#include <MRCMisc/std_variant_MR_WholeEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_EdgeId.h>`.


/// stores a mapping from keys K to values V in one of two forms:
/// 1) as dense map (vector) preferable when there are few missing keys in a range [0, endKey)
/// 2) as hash map preferable when valid keys are a small subset of the range
/// Generated from class `MR::MapOrHashMap<MR::FaceId, MR::FaceId>`.
typedef struct MR_MapOrHashMap_MR_FaceId_MR_FaceId MR_MapOrHashMap_MR_FaceId_MR_FaceId;

/// stores a mapping from keys K to values V in one of two forms:
/// 1) as dense map (vector) preferable when there are few missing keys in a range [0, endKey)
/// 2) as hash map preferable when valid keys are a small subset of the range
/// Generated from class `MR::MapOrHashMap<MR::VertId, MR::VertId>`.
typedef struct MR_MapOrHashMap_MR_VertId_MR_VertId MR_MapOrHashMap_MR_VertId_MR_VertId;

/// stores a mapping from keys K to values V in one of two forms:
/// 1) as dense map (vector) preferable when there are few missing keys in a range [0, endKey)
/// 2) as hash map preferable when valid keys are a small subset of the range
/// Generated from class `MR::MapOrHashMap<MR::EdgeId, MR::EdgeId>`.
typedef struct MR_MapOrHashMap_MR_EdgeId_MR_EdgeId MR_MapOrHashMap_MR_EdgeId_MR_EdgeId;

/// stores a mapping from keys K to values V in one of two forms:
/// 1) as dense map (vector) preferable when there are few missing keys in a range [0, endKey)
/// 2) as hash map preferable when valid keys are a small subset of the range
/// Generated from class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::UndirectedEdgeId>`.
typedef struct MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId;

/// stores a mapping from keys K to values V in one of two forms:
/// 1) as dense map (vector) preferable when there are few missing keys in a range [0, endKey)
/// 2) as hash map preferable when valid keys are a small subset of the range
/// Generated from class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::EdgeId>`.
typedef struct MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId;

// default construction will select dense map
/// Returns a pointer to a member variable of class `MR::MapOrHashMap<MR::FaceId, MR::FaceId>` named `var`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId *MR_MapOrHashMap_MR_FaceId_MR_FaceId_Get_var(const MR_MapOrHashMap_MR_FaceId_MR_FaceId *_this);

// default construction will select dense map
/// Modifies a member variable of class `MR::MapOrHashMap<MR::FaceId, MR::FaceId>` named `var`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MapOrHashMap_MR_FaceId_MR_FaceId_Set_var(MR_MapOrHashMap_MR_FaceId_MR_FaceId *_this, MR_PassBy value_pass_by, MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId *value);

// default construction will select dense map
/// Returns a mutable pointer to a member variable of class `MR::MapOrHashMap<MR::FaceId, MR::FaceId>` named `var`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId *MR_MapOrHashMap_MR_FaceId_MR_FaceId_GetMutable_var(MR_MapOrHashMap_MR_FaceId_MR_FaceId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MapOrHashMap_MR_FaceId_MR_FaceId_Destroy()` to free it when you're done using it.
MRC_API MR_MapOrHashMap_MR_FaceId_MR_FaceId *MR_MapOrHashMap_MR_FaceId_MR_FaceId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MapOrHashMap_MR_FaceId_MR_FaceId_DestroyArray()`.
/// Use `MR_MapOrHashMap_MR_FaceId_MR_FaceId_OffsetMutablePtr()` and `MR_MapOrHashMap_MR_FaceId_MR_FaceId_OffsetPtr()` to access the array elements.
MRC_API MR_MapOrHashMap_MR_FaceId_MR_FaceId *MR_MapOrHashMap_MR_FaceId_MR_FaceId_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MapOrHashMap<MR::FaceId, MR::FaceId>` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MapOrHashMap_MR_FaceId_MR_FaceId_Destroy()` to free it when you're done using it.
MRC_API MR_MapOrHashMap_MR_FaceId_MR_FaceId *MR_MapOrHashMap_MR_FaceId_MR_FaceId_ConstructFrom(MR_PassBy var_pass_by, MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId *var);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MapOrHashMap_MR_FaceId_MR_FaceId *MR_MapOrHashMap_MR_FaceId_MR_FaceId_OffsetPtr(const MR_MapOrHashMap_MR_FaceId_MR_FaceId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MapOrHashMap_MR_FaceId_MR_FaceId *MR_MapOrHashMap_MR_FaceId_MR_FaceId_OffsetMutablePtr(MR_MapOrHashMap_MR_FaceId_MR_FaceId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MapOrHashMap<MR::FaceId, MR::FaceId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MapOrHashMap_MR_FaceId_MR_FaceId_Destroy()` to free it when you're done using it.
MRC_API MR_MapOrHashMap_MR_FaceId_MR_FaceId *MR_MapOrHashMap_MR_FaceId_MR_FaceId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MapOrHashMap_MR_FaceId_MR_FaceId *_other);

/// Destroys a heap-allocated instance of `MR_MapOrHashMap_MR_FaceId_MR_FaceId`. Does nothing if the pointer is null.
MRC_API void MR_MapOrHashMap_MR_FaceId_MR_FaceId_Destroy(const MR_MapOrHashMap_MR_FaceId_MR_FaceId *_this);

/// Destroys a heap-allocated array of `MR_MapOrHashMap_MR_FaceId_MR_FaceId`. Does nothing if the pointer is null.
MRC_API void MR_MapOrHashMap_MR_FaceId_MR_FaceId_DestroyArray(const MR_MapOrHashMap_MR_FaceId_MR_FaceId *_this);

/// Generated from a method of class `MR::MapOrHashMap<MR::FaceId, MR::FaceId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MapOrHashMap_MR_FaceId_MR_FaceId *MR_MapOrHashMap_MR_FaceId_MR_FaceId_AssignFromAnother(MR_MapOrHashMap_MR_FaceId_MR_FaceId *_this, MR_PassBy _other_pass_by, MR_MapOrHashMap_MR_FaceId_MR_FaceId *_other);

/// Generated from a method of class `MR::MapOrHashMap<MR::FaceId, MR::FaceId>` named `createMap`.
/// Parameter `size` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MapOrHashMap_MR_FaceId_MR_FaceId_Destroy()` to free it when you're done using it.
MRC_API MR_MapOrHashMap_MR_FaceId_MR_FaceId *MR_MapOrHashMap_MR_FaceId_MR_FaceId_createMap(const MR_uint64_t *size);

/// Generated from a method of class `MR::MapOrHashMap<MR::FaceId, MR::FaceId>` named `createHashMap`.
/// Parameter `capacity` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MapOrHashMap_MR_FaceId_MR_FaceId_Destroy()` to free it when you're done using it.
MRC_API MR_MapOrHashMap_MR_FaceId_MR_FaceId *MR_MapOrHashMap_MR_FaceId_MR_FaceId_createHashMap(const MR_uint64_t *capacity);

/// Generated from a method of class `MR::MapOrHashMap<MR::FaceId, MR::FaceId>` named `setMap`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `m` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MRC_API void MR_MapOrHashMap_MR_FaceId_MR_FaceId_setMap(MR_MapOrHashMap_MR_FaceId_MR_FaceId *_this, MR_FaceMap *m);

/// Generated from a method of class `MR::MapOrHashMap<MR::FaceId, MR::FaceId>` named `setHashMap`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `m` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MRC_API void MR_MapOrHashMap_MR_FaceId_MR_FaceId_setHashMap(MR_MapOrHashMap_MR_FaceId_MR_FaceId *_this, MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId *m);

/// if this stores dense map then resizes it to denseTotalSize;
/// if this stores hash map then sets its capacity to size()+hashAdditionalCapacity
/// Generated from a method of class `MR::MapOrHashMap<MR::FaceId, MR::FaceId>` named `resizeReserve`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MapOrHashMap_MR_FaceId_MR_FaceId_resizeReserve(MR_MapOrHashMap_MR_FaceId_MR_FaceId *_this, MR_uint64_t denseTotalSize, MR_uint64_t hashAdditionalCapacity);

/// appends one element in the map,
/// in case of dense map, key must be equal to vector.endId()
/// Generated from a method of class `MR::MapOrHashMap<MR::FaceId, MR::FaceId>` named `pushBack`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MapOrHashMap_MR_FaceId_MR_FaceId_pushBack(MR_MapOrHashMap_MR_FaceId_MR_FaceId *_this, MR_FaceId key, MR_FaceId val);

/// Generated from a method of class `MR::MapOrHashMap<MR::FaceId, MR::FaceId>` named `getMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_FaceMap *MR_MapOrHashMap_MR_FaceId_MR_FaceId_getMap(MR_MapOrHashMap_MR_FaceId_MR_FaceId *_this);

/// Generated from a method of class `MR::MapOrHashMap<MR::FaceId, MR::FaceId>` named `getMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_FaceMap *MR_MapOrHashMap_MR_FaceId_MR_FaceId_getMap_const(const MR_MapOrHashMap_MR_FaceId_MR_FaceId *_this);

/// Generated from a method of class `MR::MapOrHashMap<MR::FaceId, MR::FaceId>` named `getHashMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId *MR_MapOrHashMap_MR_FaceId_MR_FaceId_getHashMap(MR_MapOrHashMap_MR_FaceId_MR_FaceId *_this);

/// Generated from a method of class `MR::MapOrHashMap<MR::FaceId, MR::FaceId>` named `getHashMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId *MR_MapOrHashMap_MR_FaceId_MR_FaceId_getHashMap_const(const MR_MapOrHashMap_MR_FaceId_MR_FaceId *_this);

/// Generated from a method of class `MR::MapOrHashMap<MR::FaceId, MR::FaceId>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MapOrHashMap_MR_FaceId_MR_FaceId_clear(MR_MapOrHashMap_MR_FaceId_MR_FaceId *_this);

// default construction will select dense map
/// Returns a pointer to a member variable of class `MR::MapOrHashMap<MR::VertId, MR::VertId>` named `var`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId *MR_MapOrHashMap_MR_VertId_MR_VertId_Get_var(const MR_MapOrHashMap_MR_VertId_MR_VertId *_this);

// default construction will select dense map
/// Modifies a member variable of class `MR::MapOrHashMap<MR::VertId, MR::VertId>` named `var`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MapOrHashMap_MR_VertId_MR_VertId_Set_var(MR_MapOrHashMap_MR_VertId_MR_VertId *_this, MR_PassBy value_pass_by, MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId *value);

// default construction will select dense map
/// Returns a mutable pointer to a member variable of class `MR::MapOrHashMap<MR::VertId, MR::VertId>` named `var`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId *MR_MapOrHashMap_MR_VertId_MR_VertId_GetMutable_var(MR_MapOrHashMap_MR_VertId_MR_VertId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MapOrHashMap_MR_VertId_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_MapOrHashMap_MR_VertId_MR_VertId *MR_MapOrHashMap_MR_VertId_MR_VertId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MapOrHashMap_MR_VertId_MR_VertId_DestroyArray()`.
/// Use `MR_MapOrHashMap_MR_VertId_MR_VertId_OffsetMutablePtr()` and `MR_MapOrHashMap_MR_VertId_MR_VertId_OffsetPtr()` to access the array elements.
MRC_API MR_MapOrHashMap_MR_VertId_MR_VertId *MR_MapOrHashMap_MR_VertId_MR_VertId_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MapOrHashMap<MR::VertId, MR::VertId>` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MapOrHashMap_MR_VertId_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_MapOrHashMap_MR_VertId_MR_VertId *MR_MapOrHashMap_MR_VertId_MR_VertId_ConstructFrom(MR_PassBy var_pass_by, MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId *var);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MapOrHashMap_MR_VertId_MR_VertId *MR_MapOrHashMap_MR_VertId_MR_VertId_OffsetPtr(const MR_MapOrHashMap_MR_VertId_MR_VertId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MapOrHashMap_MR_VertId_MR_VertId *MR_MapOrHashMap_MR_VertId_MR_VertId_OffsetMutablePtr(MR_MapOrHashMap_MR_VertId_MR_VertId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MapOrHashMap<MR::VertId, MR::VertId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MapOrHashMap_MR_VertId_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_MapOrHashMap_MR_VertId_MR_VertId *MR_MapOrHashMap_MR_VertId_MR_VertId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MapOrHashMap_MR_VertId_MR_VertId *_other);

/// Destroys a heap-allocated instance of `MR_MapOrHashMap_MR_VertId_MR_VertId`. Does nothing if the pointer is null.
MRC_API void MR_MapOrHashMap_MR_VertId_MR_VertId_Destroy(const MR_MapOrHashMap_MR_VertId_MR_VertId *_this);

/// Destroys a heap-allocated array of `MR_MapOrHashMap_MR_VertId_MR_VertId`. Does nothing if the pointer is null.
MRC_API void MR_MapOrHashMap_MR_VertId_MR_VertId_DestroyArray(const MR_MapOrHashMap_MR_VertId_MR_VertId *_this);

/// Generated from a method of class `MR::MapOrHashMap<MR::VertId, MR::VertId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MapOrHashMap_MR_VertId_MR_VertId *MR_MapOrHashMap_MR_VertId_MR_VertId_AssignFromAnother(MR_MapOrHashMap_MR_VertId_MR_VertId *_this, MR_PassBy _other_pass_by, MR_MapOrHashMap_MR_VertId_MR_VertId *_other);

/// Generated from a method of class `MR::MapOrHashMap<MR::VertId, MR::VertId>` named `createMap`.
/// Parameter `size` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MapOrHashMap_MR_VertId_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_MapOrHashMap_MR_VertId_MR_VertId *MR_MapOrHashMap_MR_VertId_MR_VertId_createMap(const MR_uint64_t *size);

/// Generated from a method of class `MR::MapOrHashMap<MR::VertId, MR::VertId>` named `createHashMap`.
/// Parameter `capacity` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MapOrHashMap_MR_VertId_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_MapOrHashMap_MR_VertId_MR_VertId *MR_MapOrHashMap_MR_VertId_MR_VertId_createHashMap(const MR_uint64_t *capacity);

/// Generated from a method of class `MR::MapOrHashMap<MR::VertId, MR::VertId>` named `setMap`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `m` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MRC_API void MR_MapOrHashMap_MR_VertId_MR_VertId_setMap(MR_MapOrHashMap_MR_VertId_MR_VertId *_this, MR_VertMap *m);

/// Generated from a method of class `MR::MapOrHashMap<MR::VertId, MR::VertId>` named `setHashMap`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `m` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MRC_API void MR_MapOrHashMap_MR_VertId_MR_VertId_setHashMap(MR_MapOrHashMap_MR_VertId_MR_VertId *_this, MR_phmap_flat_hash_map_MR_VertId_MR_VertId *m);

/// if this stores dense map then resizes it to denseTotalSize;
/// if this stores hash map then sets its capacity to size()+hashAdditionalCapacity
/// Generated from a method of class `MR::MapOrHashMap<MR::VertId, MR::VertId>` named `resizeReserve`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MapOrHashMap_MR_VertId_MR_VertId_resizeReserve(MR_MapOrHashMap_MR_VertId_MR_VertId *_this, MR_uint64_t denseTotalSize, MR_uint64_t hashAdditionalCapacity);

/// appends one element in the map,
/// in case of dense map, key must be equal to vector.endId()
/// Generated from a method of class `MR::MapOrHashMap<MR::VertId, MR::VertId>` named `pushBack`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MapOrHashMap_MR_VertId_MR_VertId_pushBack(MR_MapOrHashMap_MR_VertId_MR_VertId *_this, MR_VertId key, MR_VertId val);

/// Generated from a method of class `MR::MapOrHashMap<MR::VertId, MR::VertId>` named `getMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertMap *MR_MapOrHashMap_MR_VertId_MR_VertId_getMap(MR_MapOrHashMap_MR_VertId_MR_VertId *_this);

/// Generated from a method of class `MR::MapOrHashMap<MR::VertId, MR::VertId>` named `getMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_VertMap *MR_MapOrHashMap_MR_VertId_MR_VertId_getMap_const(const MR_MapOrHashMap_MR_VertId_MR_VertId *_this);

/// Generated from a method of class `MR::MapOrHashMap<MR::VertId, MR::VertId>` named `getHashMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_VertId *MR_MapOrHashMap_MR_VertId_MR_VertId_getHashMap(MR_MapOrHashMap_MR_VertId_MR_VertId *_this);

/// Generated from a method of class `MR::MapOrHashMap<MR::VertId, MR::VertId>` named `getHashMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_phmap_flat_hash_map_MR_VertId_MR_VertId *MR_MapOrHashMap_MR_VertId_MR_VertId_getHashMap_const(const MR_MapOrHashMap_MR_VertId_MR_VertId *_this);

/// Generated from a method of class `MR::MapOrHashMap<MR::VertId, MR::VertId>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MapOrHashMap_MR_VertId_MR_VertId_clear(MR_MapOrHashMap_MR_VertId_MR_VertId *_this);

// default construction will select dense map
/// Returns a pointer to a member variable of class `MR::MapOrHashMap<MR::EdgeId, MR::EdgeId>` named `var`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_Get_var(const MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *_this);

// default construction will select dense map
/// Modifies a member variable of class `MR::MapOrHashMap<MR::EdgeId, MR::EdgeId>` named `var`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_Set_var(MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *_this, MR_PassBy value_pass_by, MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *value);

// default construction will select dense map
/// Returns a mutable pointer to a member variable of class `MR::MapOrHashMap<MR::EdgeId, MR::EdgeId>` named `var`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_GetMutable_var(MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_DestroyArray()`.
/// Use `MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_OffsetMutablePtr()` and `MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_OffsetPtr()` to access the array elements.
MRC_API MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MapOrHashMap<MR::EdgeId, MR::EdgeId>` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_ConstructFrom(MR_PassBy var_pass_by, MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *var);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_OffsetPtr(const MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_OffsetMutablePtr(MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MapOrHashMap<MR::EdgeId, MR::EdgeId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *_other);

/// Destroys a heap-allocated instance of `MR_MapOrHashMap_MR_EdgeId_MR_EdgeId`. Does nothing if the pointer is null.
MRC_API void MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_Destroy(const MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *_this);

/// Destroys a heap-allocated array of `MR_MapOrHashMap_MR_EdgeId_MR_EdgeId`. Does nothing if the pointer is null.
MRC_API void MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_DestroyArray(const MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *_this);

/// Generated from a method of class `MR::MapOrHashMap<MR::EdgeId, MR::EdgeId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_AssignFromAnother(MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *_this, MR_PassBy _other_pass_by, MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *_other);

/// Generated from a method of class `MR::MapOrHashMap<MR::EdgeId, MR::EdgeId>` named `createMap`.
/// Parameter `size` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_createMap(const MR_uint64_t *size);

/// Generated from a method of class `MR::MapOrHashMap<MR::EdgeId, MR::EdgeId>` named `createHashMap`.
/// Parameter `capacity` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_createHashMap(const MR_uint64_t *capacity);

/// Generated from a method of class `MR::MapOrHashMap<MR::EdgeId, MR::EdgeId>` named `setMap`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `m` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MRC_API void MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_setMap(MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *_this, MR_EdgeMap *m);

/// Generated from a method of class `MR::MapOrHashMap<MR::EdgeId, MR::EdgeId>` named `setHashMap`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `m` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MRC_API void MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_setHashMap(MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *_this, MR_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *m);

/// if this stores dense map then resizes it to denseTotalSize;
/// if this stores hash map then sets its capacity to size()+hashAdditionalCapacity
/// Generated from a method of class `MR::MapOrHashMap<MR::EdgeId, MR::EdgeId>` named `resizeReserve`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_resizeReserve(MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *_this, MR_uint64_t denseTotalSize, MR_uint64_t hashAdditionalCapacity);

/// appends one element in the map,
/// in case of dense map, key must be equal to vector.endId()
/// Generated from a method of class `MR::MapOrHashMap<MR::EdgeId, MR::EdgeId>` named `pushBack`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_pushBack(MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *_this, MR_EdgeId key, MR_EdgeId val);

/// Generated from a method of class `MR::MapOrHashMap<MR::EdgeId, MR::EdgeId>` named `getMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeMap *MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_getMap(MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *_this);

/// Generated from a method of class `MR::MapOrHashMap<MR::EdgeId, MR::EdgeId>` named `getMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_EdgeMap *MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_getMap_const(const MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *_this);

/// Generated from a method of class `MR::MapOrHashMap<MR::EdgeId, MR::EdgeId>` named `getHashMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_getHashMap(MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *_this);

/// Generated from a method of class `MR::MapOrHashMap<MR::EdgeId, MR::EdgeId>` named `getHashMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_getHashMap_const(const MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *_this);

/// Generated from a method of class `MR::MapOrHashMap<MR::EdgeId, MR::EdgeId>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MapOrHashMap_MR_EdgeId_MR_EdgeId_clear(MR_MapOrHashMap_MR_EdgeId_MR_EdgeId *_this);

// default construction will select dense map
/// Returns a pointer to a member variable of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `var`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_Get_var(const MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

// default construction will select dense map
/// Modifies a member variable of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `var`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_Set_var(MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this, MR_PassBy value_pass_by, MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *value);

// default construction will select dense map
/// Returns a mutable pointer to a member variable of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `var`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_GetMutable_var(MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_DestroyArray()`.
/// Use `MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_OffsetMutablePtr()` and `MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_OffsetPtr()` to access the array elements.
MRC_API MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_ConstructFrom(MR_PassBy var_pass_by, MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *var);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_OffsetPtr(const MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_OffsetMutablePtr(MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::UndirectedEdgeId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_other);

/// Destroys a heap-allocated instance of `MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId`. Does nothing if the pointer is null.
MRC_API void MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_Destroy(const MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

/// Destroys a heap-allocated array of `MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId`. Does nothing if the pointer is null.
MRC_API void MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_DestroyArray(const MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_AssignFromAnother(MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this, MR_PassBy _other_pass_by, MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_other);

/// Generated from a method of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `createMap`.
/// Parameter `size` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_createMap(const MR_uint64_t *size);

/// Generated from a method of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `createHashMap`.
/// Parameter `capacity` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_createHashMap(const MR_uint64_t *capacity);

/// Generated from a method of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `setMap`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `m` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MRC_API void MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_setMap(MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this, MR_UndirectedEdgeMap *m);

/// Generated from a method of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `setHashMap`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `m` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MRC_API void MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_setHashMap(MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this, MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *m);

/// if this stores dense map then resizes it to denseTotalSize;
/// if this stores hash map then sets its capacity to size()+hashAdditionalCapacity
/// Generated from a method of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `resizeReserve`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_resizeReserve(MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this, MR_uint64_t denseTotalSize, MR_uint64_t hashAdditionalCapacity);

/// appends one element in the map,
/// in case of dense map, key must be equal to vector.endId()
/// Generated from a method of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `pushBack`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_pushBack(MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this, MR_UndirectedEdgeId key, MR_UndirectedEdgeId val);

/// Generated from a method of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `getMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeMap *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_getMap(MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `getMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_UndirectedEdgeMap *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_getMap_const(const MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `getHashMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_getHashMap(MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `getHashMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_getHashMap_const(const MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId_clear(MR_MapOrHashMap_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

// default construction will select dense map
/// Returns a pointer to a member variable of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::EdgeId>` named `var`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_variant_MR_WholeEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_EdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_Get_var(const MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *_this);

// default construction will select dense map
/// Modifies a member variable of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::EdgeId>` named `var`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_Set_var(MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *_this, MR_PassBy value_pass_by, MR_std_variant_MR_WholeEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_EdgeId *value);

// default construction will select dense map
/// Returns a mutable pointer to a member variable of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::EdgeId>` named `var`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_variant_MR_WholeEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_EdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_GetMutable_var(MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_DestroyArray()`.
/// Use `MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_OffsetMutablePtr()` and `MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_OffsetPtr()` to access the array elements.
MRC_API MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::EdgeId>` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_ConstructFrom(MR_PassBy var_pass_by, MR_std_variant_MR_WholeEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_EdgeId *var);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_OffsetPtr(const MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_OffsetMutablePtr(MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::EdgeId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *_other);

/// Destroys a heap-allocated instance of `MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId`. Does nothing if the pointer is null.
MRC_API void MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_Destroy(const MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *_this);

/// Destroys a heap-allocated array of `MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId`. Does nothing if the pointer is null.
MRC_API void MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_DestroyArray(const MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *_this);

/// Generated from a method of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::EdgeId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_AssignFromAnother(MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *_this, MR_PassBy _other_pass_by, MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *_other);

/// Generated from a method of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::EdgeId>` named `createMap`.
/// Parameter `size` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_createMap(const MR_uint64_t *size);

/// Generated from a method of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::EdgeId>` named `createHashMap`.
/// Parameter `capacity` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_createHashMap(const MR_uint64_t *capacity);

/// Generated from a method of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::EdgeId>` named `setMap`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `m` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MRC_API void MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_setMap(MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *_this, MR_WholeEdgeMap *m);

/// Generated from a method of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::EdgeId>` named `setHashMap`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `m` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MRC_API void MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_setHashMap(MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *_this, MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_EdgeId *m);

/// if this stores dense map then resizes it to denseTotalSize;
/// if this stores hash map then sets its capacity to size()+hashAdditionalCapacity
/// Generated from a method of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::EdgeId>` named `resizeReserve`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_resizeReserve(MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *_this, MR_uint64_t denseTotalSize, MR_uint64_t hashAdditionalCapacity);

/// appends one element in the map,
/// in case of dense map, key must be equal to vector.endId()
/// Generated from a method of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::EdgeId>` named `pushBack`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_pushBack(MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *_this, MR_UndirectedEdgeId key, MR_EdgeId val);

/// Generated from a method of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::EdgeId>` named `getMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_WholeEdgeMap *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_getMap(MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *_this);

/// Generated from a method of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::EdgeId>` named `getMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_WholeEdgeMap *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_getMap_const(const MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *_this);

/// Generated from a method of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::EdgeId>` named `getHashMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_EdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_getHashMap(MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *_this);

/// Generated from a method of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::EdgeId>` named `getHashMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_EdgeId *MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_getHashMap_const(const MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *_this);

/// Generated from a method of class `MR::MapOrHashMap<MR::UndirectedEdgeId, MR::EdgeId>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId_clear(MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *_this);

#ifdef __cplusplus
} // extern "C"
#endif
