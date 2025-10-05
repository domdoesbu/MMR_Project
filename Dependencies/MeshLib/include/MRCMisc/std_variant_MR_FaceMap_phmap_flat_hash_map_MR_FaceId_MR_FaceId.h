// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceMap MR_FaceMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_FaceId_MR_FaceId.h>`.


/// Stores one of 2 objects: `MR::FaceMap`, `phmap::flat_hash_map<MR::FaceId, MR::FaceId>`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId *MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId_DestroyArray()`.
/// Use `MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId_OffsetMutablePtr()` and `MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId_OffsetPtr()` to access the array elements.
MRC_API MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId *MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId *MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId_ConstructFromAnother(MR_PassBy other_pass_by, MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId_AssignFromAnother(MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId *_this, MR_PassBy other_pass_by, MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId *other);

/// Destroys a heap-allocated instance of `MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId`. Does nothing if the pointer is null.
MRC_API void MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId_Destroy(const MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId *_this);

/// Destroys a heap-allocated array of `MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId`. Does nothing if the pointer is null.
MRC_API void MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId_DestroyArray(const MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId *MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId_OffsetPtr(const MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId *MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId_OffsetMutablePtr(MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId *ptr, ptrdiff_t i);

/// Returns the index of the stored element type. In rare cases may return -1 if this variant is "valueless by exception".
/// Parameter `_this` can not be null. It is a single object.
MRC_API size_t MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId_Index(const MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId *_this);

/// Constructs the variant storing the element 0, of type `MR::FaceMap`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId *MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId_ConstructAs_MR_FaceMap(MR_PassBy value_pass_by, MR_FaceMap *value);

/// Constructs the variant storing the element 1, of type `phmap::flat_hash_map<MR::FaceId, MR::FaceId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId *MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId_ConstructAs_phmap_flat_hash_map_MR_FaceId_MR_FaceId(MR_PassBy value_pass_by, MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId *value);

/// Assigns to the variant, making it store the element 0, of type `MR::FaceMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId_AssignAs_MR_FaceMap(MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId *_this, MR_PassBy value_pass_by, MR_FaceMap *value);

/// Assigns to the variant, making it store the element 1, of type `phmap::flat_hash_map<MR::FaceId, MR::FaceId>`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId_AssignAs_phmap_flat_hash_map_MR_FaceId_MR_FaceId(MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId *_this, MR_PassBy value_pass_by, MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId *value);

/// Returns the element 0, of type `MR::FaceMap`, read-only. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_FaceMap *MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId_Get_MR_FaceMap(const MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId *_this);

/// Returns the element 0, of type `MR::FaceMap`, mutable. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_FaceMap *MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId_GetMutable_MR_FaceMap(MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId *_this);

/// Returns the element 1, of type `phmap::flat_hash_map<MR::FaceId, MR::FaceId>`, read-only. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId *MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId_Get_phmap_flat_hash_map_MR_FaceId_MR_FaceId(const MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId *_this);

/// Returns the element 1, of type `phmap::flat_hash_map<MR::FaceId, MR::FaceId>`, mutable. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId *MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId_GetMutable_phmap_flat_hash_map_MR_FaceId_MR_FaceId(MR_std_variant_MR_FaceMap_phmap_flat_hash_map_MR_FaceId_MR_FaceId *_this);

#ifdef __cplusplus
} // extern "C"
#endif
