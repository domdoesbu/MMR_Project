// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_EdgeMap MR_EdgeMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId MR_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_EdgeId_MR_EdgeId.h>`.


/// Stores one of 2 objects: `MR::EdgeMap`, `phmap::flat_hash_map<MR::EdgeId, MR::EdgeId>`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId_DestroyArray()`.
/// Use `MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId_OffsetMutablePtr()` and `MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId_OffsetPtr()` to access the array elements.
MRC_API MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId_ConstructFromAnother(MR_PassBy other_pass_by, MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId_AssignFromAnother(MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *_this, MR_PassBy other_pass_by, MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *other);

/// Destroys a heap-allocated instance of `MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId`. Does nothing if the pointer is null.
MRC_API void MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId_Destroy(const MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *_this);

/// Destroys a heap-allocated array of `MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId`. Does nothing if the pointer is null.
MRC_API void MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId_DestroyArray(const MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId_OffsetPtr(const MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId_OffsetMutablePtr(MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *ptr, ptrdiff_t i);

/// Returns the index of the stored element type. In rare cases may return -1 if this variant is "valueless by exception".
/// Parameter `_this` can not be null. It is a single object.
MRC_API size_t MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId_Index(const MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *_this);

/// Constructs the variant storing the element 0, of type `MR::EdgeMap`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId_ConstructAs_MR_EdgeMap(MR_PassBy value_pass_by, MR_EdgeMap *value);

/// Constructs the variant storing the element 1, of type `phmap::flat_hash_map<MR::EdgeId, MR::EdgeId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId_ConstructAs_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId(MR_PassBy value_pass_by, MR_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *value);

/// Assigns to the variant, making it store the element 0, of type `MR::EdgeMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId_AssignAs_MR_EdgeMap(MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *_this, MR_PassBy value_pass_by, MR_EdgeMap *value);

/// Assigns to the variant, making it store the element 1, of type `phmap::flat_hash_map<MR::EdgeId, MR::EdgeId>`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId_AssignAs_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId(MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *_this, MR_PassBy value_pass_by, MR_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *value);

/// Returns the element 0, of type `MR::EdgeMap`, read-only. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_EdgeMap *MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId_Get_MR_EdgeMap(const MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *_this);

/// Returns the element 0, of type `MR::EdgeMap`, mutable. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeMap *MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId_GetMutable_MR_EdgeMap(MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *_this);

/// Returns the element 1, of type `phmap::flat_hash_map<MR::EdgeId, MR::EdgeId>`, read-only. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId_Get_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId(const MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *_this);

/// Returns the element 1, of type `phmap::flat_hash_map<MR::EdgeId, MR::EdgeId>`, mutable. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId_GetMutable_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId(MR_std_variant_MR_EdgeMap_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *_this);

#ifdef __cplusplus
} // extern "C"
#endif
