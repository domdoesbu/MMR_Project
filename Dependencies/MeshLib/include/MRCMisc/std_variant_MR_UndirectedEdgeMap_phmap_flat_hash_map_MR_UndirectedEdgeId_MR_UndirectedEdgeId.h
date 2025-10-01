// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_UndirectedEdgeMap MR_UndirectedEdgeMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId.h>`.


/// Stores one of 2 objects: `MR::UndirectedEdgeMap`, `phmap::flat_hash_map<MR::UndirectedEdgeId, MR::UndirectedEdgeId>`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_DestroyArray()`.
/// Use `MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_OffsetMutablePtr()` and `MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_OffsetPtr()` to access the array elements.
MRC_API MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_ConstructFromAnother(MR_PassBy other_pass_by, MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_AssignFromAnother(MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this, MR_PassBy other_pass_by, MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *other);

/// Destroys a heap-allocated instance of `MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId`. Does nothing if the pointer is null.
MRC_API void MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_Destroy(const MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

/// Destroys a heap-allocated array of `MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId`. Does nothing if the pointer is null.
MRC_API void MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_DestroyArray(const MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_OffsetPtr(const MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_OffsetMutablePtr(MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *ptr, ptrdiff_t i);

/// Returns the index of the stored element type. In rare cases may return -1 if this variant is "valueless by exception".
/// Parameter `_this` can not be null. It is a single object.
MRC_API size_t MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_Index(const MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

/// Constructs the variant storing the element 0, of type `MR::UndirectedEdgeMap`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_ConstructAs_MR_UndirectedEdgeMap(MR_PassBy value_pass_by, MR_UndirectedEdgeMap *value);

/// Constructs the variant storing the element 1, of type `phmap::flat_hash_map<MR::UndirectedEdgeId, MR::UndirectedEdgeId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_ConstructAs_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId(MR_PassBy value_pass_by, MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *value);

/// Assigns to the variant, making it store the element 0, of type `MR::UndirectedEdgeMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_AssignAs_MR_UndirectedEdgeMap(MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this, MR_PassBy value_pass_by, MR_UndirectedEdgeMap *value);

/// Assigns to the variant, making it store the element 1, of type `phmap::flat_hash_map<MR::UndirectedEdgeId, MR::UndirectedEdgeId>`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_AssignAs_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId(MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this, MR_PassBy value_pass_by, MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *value);

/// Returns the element 0, of type `MR::UndirectedEdgeMap`, read-only. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_UndirectedEdgeMap *MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_Get_MR_UndirectedEdgeMap(const MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

/// Returns the element 0, of type `MR::UndirectedEdgeMap`, mutable. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeMap *MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_GetMutable_MR_UndirectedEdgeMap(MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

/// Returns the element 1, of type `phmap::flat_hash_map<MR::UndirectedEdgeId, MR::UndirectedEdgeId>`, read-only. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_Get_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId(const MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

/// Returns the element 1, of type `phmap::flat_hash_map<MR::UndirectedEdgeId, MR::UndirectedEdgeId>`, mutable. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId_GetMutable_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId(MR_std_variant_MR_UndirectedEdgeMap_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

#ifdef __cplusplus
} // extern "C"
#endif
