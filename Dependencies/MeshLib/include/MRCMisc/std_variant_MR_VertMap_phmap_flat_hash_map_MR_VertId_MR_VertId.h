// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_VertMap MR_VertMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_phmap_flat_hash_map_MR_VertId_MR_VertId MR_phmap_flat_hash_map_MR_VertId_MR_VertId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_VertId_MR_VertId.h>`.


/// Stores one of 2 objects: `MR::VertMap`, `phmap::flat_hash_map<MR::VertId, MR::VertId>`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId *MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId_DestroyArray()`.
/// Use `MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId_OffsetMutablePtr()` and `MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId_OffsetPtr()` to access the array elements.
MRC_API MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId *MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId *MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId_ConstructFromAnother(MR_PassBy other_pass_by, MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId_AssignFromAnother(MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId *_this, MR_PassBy other_pass_by, MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId *other);

/// Destroys a heap-allocated instance of `MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId`. Does nothing if the pointer is null.
MRC_API void MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId_Destroy(const MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId *_this);

/// Destroys a heap-allocated array of `MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId`. Does nothing if the pointer is null.
MRC_API void MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId_DestroyArray(const MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId *MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId_OffsetPtr(const MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId *MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId_OffsetMutablePtr(MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId *ptr, ptrdiff_t i);

/// Returns the index of the stored element type. In rare cases may return -1 if this variant is "valueless by exception".
/// Parameter `_this` can not be null. It is a single object.
MRC_API size_t MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId_Index(const MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId *_this);

/// Constructs the variant storing the element 0, of type `MR::VertMap`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId *MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId_ConstructAs_MR_VertMap(MR_PassBy value_pass_by, MR_VertMap *value);

/// Constructs the variant storing the element 1, of type `phmap::flat_hash_map<MR::VertId, MR::VertId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId *MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId_ConstructAs_phmap_flat_hash_map_MR_VertId_MR_VertId(MR_PassBy value_pass_by, MR_phmap_flat_hash_map_MR_VertId_MR_VertId *value);

/// Assigns to the variant, making it store the element 0, of type `MR::VertMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId_AssignAs_MR_VertMap(MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId *_this, MR_PassBy value_pass_by, MR_VertMap *value);

/// Assigns to the variant, making it store the element 1, of type `phmap::flat_hash_map<MR::VertId, MR::VertId>`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId_AssignAs_phmap_flat_hash_map_MR_VertId_MR_VertId(MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId *_this, MR_PassBy value_pass_by, MR_phmap_flat_hash_map_MR_VertId_MR_VertId *value);

/// Returns the element 0, of type `MR::VertMap`, read-only. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_VertMap *MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId_Get_MR_VertMap(const MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId *_this);

/// Returns the element 0, of type `MR::VertMap`, mutable. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertMap *MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId_GetMutable_MR_VertMap(MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId *_this);

/// Returns the element 1, of type `phmap::flat_hash_map<MR::VertId, MR::VertId>`, read-only. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_phmap_flat_hash_map_MR_VertId_MR_VertId *MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId_Get_phmap_flat_hash_map_MR_VertId_MR_VertId(const MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId *_this);

/// Returns the element 1, of type `phmap::flat_hash_map<MR::VertId, MR::VertId>`, mutable. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_VertId *MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId_GetMutable_phmap_flat_hash_map_MR_VertId_MR_VertId(MR_std_variant_MR_VertMap_phmap_flat_hash_map_MR_VertId_MR_VertId *_this);

#ifdef __cplusplus
} // extern "C"
#endif
