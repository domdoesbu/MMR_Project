// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_VoxelBitSet MR_VoxelBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.


typedef int8_t MR_OutEdge;
enum // MR_OutEdge
{
    MR_OutEdge_Invalid = -1,
    MR_OutEdge_PlusZ = 0,
    MR_OutEdge_MinusZ = 1,
    MR_OutEdge_PlusY = 2,
    MR_OutEdge_MinusY = 3,
    MR_OutEdge_PlusX = 4,
    MR_OutEdge_MinusX = 5,
    MR_OutEdge_Count = 6,
};

/// contains both linear Id and 3D coordinates of the same voxel
/// Generated from class `MR::VoxelLocation`.
typedef struct MR_VoxelLocation MR_VoxelLocation;

/// Generated from class `MR::VolumeIndexer`.
typedef struct MR_VolumeIndexer MR_VolumeIndexer;

/// Generated from function `MR::opposite`.
MRC_API MR_OutEdge MR_opposite_MR_OutEdge(MR_OutEdge e);

/// Returns a pointer to a member variable of class `MR::VoxelLocation` named `id`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VoxelId *MR_VoxelLocation_Get_id(const MR_VoxelLocation *_this);

/// Modifies a member variable of class `MR::VoxelLocation` named `id`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VoxelLocation_Set_id(MR_VoxelLocation *_this, MR_VoxelId value);

/// Returns a mutable pointer to a member variable of class `MR::VoxelLocation` named `id`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelId *MR_VoxelLocation_GetMutable_id(MR_VoxelLocation *_this);

/// Returns a pointer to a member variable of class `MR::VoxelLocation` named `pos`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3i *MR_VoxelLocation_Get_pos(const MR_VoxelLocation *_this);

/// Modifies a member variable of class `MR::VoxelLocation` named `pos`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VoxelLocation_Set_pos(MR_VoxelLocation *_this, MR_Vector3i value);

/// Returns a mutable pointer to a member variable of class `MR::VoxelLocation` named `pos`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3i *MR_VoxelLocation_GetMutable_pos(MR_VoxelLocation *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelLocation_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelLocation *MR_VoxelLocation_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VoxelLocation_DestroyArray()`.
/// Use `MR_VoxelLocation_OffsetMutablePtr()` and `MR_VoxelLocation_OffsetPtr()` to access the array elements.
MRC_API MR_VoxelLocation *MR_VoxelLocation_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::VoxelLocation` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelLocation_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelLocation *MR_VoxelLocation_ConstructFrom(MR_VoxelId id, MR_Vector3i pos);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VoxelLocation *MR_VoxelLocation_OffsetPtr(const MR_VoxelLocation *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VoxelLocation *MR_VoxelLocation_OffsetMutablePtr(MR_VoxelLocation *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VoxelLocation`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelLocation_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelLocation *MR_VoxelLocation_ConstructFromAnother(const MR_VoxelLocation *_other);

/// Destroys a heap-allocated instance of `MR_VoxelLocation`. Does nothing if the pointer is null.
MRC_API void MR_VoxelLocation_Destroy(const MR_VoxelLocation *_this);

/// Destroys a heap-allocated array of `MR_VoxelLocation`. Does nothing if the pointer is null.
MRC_API void MR_VoxelLocation_DestroyArray(const MR_VoxelLocation *_this);

/// check for validity
/// Generated from a conversion operator of class `MR::VoxelLocation` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_VoxelLocation_ConvertTo_bool(const MR_VoxelLocation *_this);

/// Generated from a method of class `MR::VoxelLocation` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelLocation *MR_VoxelLocation_AssignFromAnother(MR_VoxelLocation *_this, const MR_VoxelLocation *_other);

/// Generated from a constructor of class `MR::VolumeIndexer`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VolumeIndexer_Destroy()` to free it when you're done using it.
MRC_API MR_VolumeIndexer *MR_VolumeIndexer_ConstructFromAnother(const MR_VolumeIndexer *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VolumeIndexer *MR_VolumeIndexer_OffsetPtr(const MR_VolumeIndexer *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VolumeIndexer *MR_VolumeIndexer_OffsetMutablePtr(MR_VolumeIndexer *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VolumeIndexer`.
/// Parameter `dims` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VolumeIndexer_Destroy()` to free it when you're done using it.
MRC_API MR_VolumeIndexer *MR_VolumeIndexer_Construct(const MR_Vector3i *dims);

/// Destroys a heap-allocated instance of `MR_VolumeIndexer`. Does nothing if the pointer is null.
MRC_API void MR_VolumeIndexer_Destroy(const MR_VolumeIndexer *_this);

/// Destroys a heap-allocated array of `MR_VolumeIndexer`. Does nothing if the pointer is null.
MRC_API void MR_VolumeIndexer_DestroyArray(const MR_VolumeIndexer *_this);

/// Generated from a method of class `MR::VolumeIndexer` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VolumeIndexer *MR_VolumeIndexer_AssignFromAnother(MR_VolumeIndexer *_this, const MR_VolumeIndexer *_other);

/// Generated from a method of class `MR::VolumeIndexer` named `dims`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3i *MR_VolumeIndexer_dims(const MR_VolumeIndexer *_this);

/// returns the total number of voxels
/// Generated from a method of class `MR::VolumeIndexer` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_VolumeIndexer_size(const MR_VolumeIndexer *_this);

/// returns the last plus one voxel Id for defining iteration range
/// Generated from a method of class `MR::VolumeIndexer` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VoxelId MR_VolumeIndexer_endId(const MR_VolumeIndexer *_this);

/// Generated from a method of class `MR::VolumeIndexer` named `sizeXY`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_VolumeIndexer_sizeXY(const MR_VolumeIndexer *_this);

/// Generated from a method of class `MR::VolumeIndexer` named `toPos`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3i MR_VolumeIndexer_toPos(const MR_VolumeIndexer *_this, MR_VoxelId id);

/// Generated from a method of class `MR::VolumeIndexer` named `toVoxelId`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API MR_VoxelId MR_VolumeIndexer_toVoxelId(const MR_VolumeIndexer *_this, const MR_Vector3i *pos);

/// Generated from a method of class `MR::VolumeIndexer` named `toLoc`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelLocation_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelLocation *MR_VolumeIndexer_toLoc_MR_VoxelId(const MR_VolumeIndexer *_this, MR_VoxelId id);

/// Generated from a method of class `MR::VolumeIndexer` named `toLoc`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelLocation_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelLocation *MR_VolumeIndexer_toLoc_MR_Vector3i(const MR_VolumeIndexer *_this, const MR_Vector3i *pos);

/// returns true if this voxel is within dimensions
/// Generated from a method of class `MR::VolumeIndexer` named `isInDims`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API bool MR_VolumeIndexer_isInDims(const MR_VolumeIndexer *_this, const MR_Vector3i *pos);

/// returns true if this voxel is on the boundary of the volume
/// Generated from a method of class `MR::VolumeIndexer` named `isBdVoxel`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API bool MR_VolumeIndexer_isBdVoxel(const MR_VolumeIndexer *_this, const MR_Vector3i *pos);

/// returns true if v1 is within at most 6 neighbors of v0
/// Generated from a method of class `MR::VolumeIndexer` named `areNeigbors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_VolumeIndexer_areNeigbors_MR_VoxelId(const MR_VolumeIndexer *_this, MR_VoxelId v0, MR_VoxelId v1);

/// Generated from a method of class `MR::VolumeIndexer` named `areNeigbors`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos0` can not be null. It is a single object.
/// Parameter `pos1` can not be null. It is a single object.
MRC_API bool MR_VolumeIndexer_areNeigbors_MR_Vector3i(const MR_VolumeIndexer *_this, const MR_Vector3i *pos0, const MR_Vector3i *pos1);

/// given existing voxel at (pos), returns whether it has valid neighbor specified by the edge (toNei)
/// Generated from a method of class `MR::VolumeIndexer` named `hasNeighbour`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API bool MR_VolumeIndexer_hasNeighbour(const MR_VolumeIndexer *_this, const MR_Vector3i *pos, MR_OutEdge toNei);

/// returns id of v's neighbor specified by the edge
/// Generated from a method of class `MR::VolumeIndexer` named `getNeighbor`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VoxelId MR_VolumeIndexer_getNeighbor_2_MR_VoxelId(const MR_VolumeIndexer *_this, MR_VoxelId v, MR_OutEdge toNei);

/// Generated from a method of class `MR::VolumeIndexer` named `getNeighbor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API MR_VoxelId MR_VolumeIndexer_getNeighbor_3(const MR_VolumeIndexer *_this, MR_VoxelId v, const MR_Vector3i *pos, MR_OutEdge toNei);

/// given existing voxel at (loc), returns its neighbor specified by the edge (toNei);
/// if the neighbour does not exist (loc is on boundary), returns invalid VoxelLocation
/// Generated from a method of class `MR::VolumeIndexer` named `getNeighbor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `loc` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelLocation_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelLocation *MR_VolumeIndexer_getNeighbor_2_MR_VoxelLocation(const MR_VolumeIndexer *_this, const MR_VoxelLocation *loc, MR_OutEdge toNei);

/// returns id of v's neighbor specified by the edge, which is known to exist (so skipping a lot of checks)
/// Generated from a method of class `MR::VolumeIndexer` named `getExistingNeighbor`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VoxelId MR_VolumeIndexer_getExistingNeighbor(const MR_VolumeIndexer *_this, MR_VoxelId v, MR_OutEdge toNei);

/// Generated from a method of class `MR::VolumeIndexer` named `getNeighbor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API MR_VoxelId MR_VolumeIndexer_getNeighbor_4(const MR_VolumeIndexer *_this, MR_VoxelId v, const MR_Vector3i *pos, bool bdPos, MR_OutEdge toNei);

/// expands VoxelBitSet with given number of steps
/// Generated from function `MR::expandVoxelsMask`.
/// Parameter `mask` can not be null. It is a single object.
/// Parameter `indexer` can not be null. It is a single object.
/// Parameter `expansion` has a default argument: `1`, pass a null pointer to use it.
MRC_API void MR_expandVoxelsMask(MR_VoxelBitSet *mask, const MR_VolumeIndexer *indexer, const int32_t *expansion);

/// shrinks VoxelBitSet with given number of steps
/// Generated from function `MR::shrinkVoxelsMask`.
/// Parameter `mask` can not be null. It is a single object.
/// Parameter `indexer` can not be null. It is a single object.
/// Parameter `shrinkage` has a default argument: `1`, pass a null pointer to use it.
MRC_API void MR_shrinkVoxelsMask(MR_VoxelBitSet *mask, const MR_VolumeIndexer *indexer, const int32_t *shrinkage);

#ifdef __cplusplus
} // extern "C"
#endif
