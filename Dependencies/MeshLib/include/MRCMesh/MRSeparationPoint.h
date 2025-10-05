// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Triangulation MR_Triangulation; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_MR_VoxelId_MR_FaceId MR_Vector_MR_VoxelId_MR_FaceId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_phmap_flat_hash_map_uint64_t_std_array_MR_VertId_3_phmap_Hash_uint64_t MR_phmap_flat_hash_map_uint64_t_std_array_MR_VertId_3_phmap_Hash_uint64_t; // Defined in `#include <MRCMisc/phmap_flat_hash_map_uint64_t_std_array_MR_VertId_3_phmap_Hash_uint64_t.h>`.
typedef struct MR_std_array_MR_VertId_3 MR_std_array_MR_VertId_3; // Defined in `#include <MRCMisc/std_array_MR_VertId_3.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.


typedef int32_t MR_NeighborDir;
enum // MR_NeighborDir
{
    MR_NeighborDir_X = 0,
    MR_NeighborDir_Y = 1,
    MR_NeighborDir_Z = 2,
    MR_NeighborDir_Count = 3,
};

/// storage for points on voxel edges used in Marching Cubes algorithms
/// Generated from class `MR::SeparationPointStorage`.
typedef struct MR_SeparationPointStorage MR_SeparationPointStorage;

/// Generated from class `MR::SeparationPointStorage::Block`.
typedef struct MR_SeparationPointStorage_Block MR_SeparationPointStorage_Block;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SeparationPointStorage_Destroy()` to free it when you're done using it.
MRC_API MR_SeparationPointStorage *MR_SeparationPointStorage_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SeparationPointStorage_DestroyArray()`.
/// Use `MR_SeparationPointStorage_OffsetMutablePtr()` and `MR_SeparationPointStorage_OffsetPtr()` to access the array elements.
MRC_API MR_SeparationPointStorage *MR_SeparationPointStorage_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SeparationPointStorage *MR_SeparationPointStorage_OffsetPtr(const MR_SeparationPointStorage *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SeparationPointStorage *MR_SeparationPointStorage_OffsetMutablePtr(MR_SeparationPointStorage *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SeparationPointStorage`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SeparationPointStorage_Destroy()` to free it when you're done using it.
MRC_API MR_SeparationPointStorage *MR_SeparationPointStorage_ConstructFromAnother(MR_PassBy _other_pass_by, MR_SeparationPointStorage *_other);

/// Destroys a heap-allocated instance of `MR_SeparationPointStorage`. Does nothing if the pointer is null.
MRC_API void MR_SeparationPointStorage_Destroy(const MR_SeparationPointStorage *_this);

/// Destroys a heap-allocated array of `MR_SeparationPointStorage`. Does nothing if the pointer is null.
MRC_API void MR_SeparationPointStorage_DestroyArray(const MR_SeparationPointStorage *_this);

/// Generated from a method of class `MR::SeparationPointStorage` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SeparationPointStorage *MR_SeparationPointStorage_AssignFromAnother(MR_SeparationPointStorage *_this, MR_PassBy _other_pass_by, MR_SeparationPointStorage *_other);

/// prepares storage for given number of blocks, each containing given size of voxels
/// Generated from a method of class `MR::SeparationPointStorage` named `resize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SeparationPointStorage_resize(MR_SeparationPointStorage *_this, MR_uint64_t blockCount, MR_uint64_t blockSize);

/// get block for filling in the thread responsible for it
/// Generated from a method of class `MR::SeparationPointStorage` named `getBlock`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SeparationPointStorage_Block *MR_SeparationPointStorage_getBlock(MR_SeparationPointStorage *_this, MR_uint64_t blockIndex);

/// shifts vertex ids in each block (after they are filled) to make them unique;
/// returns the total number of valid points in the storage
/// Generated from a method of class `MR::SeparationPointStorage` named `makeUniqueVids`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_SeparationPointStorage_makeUniqueVids(MR_SeparationPointStorage *_this);

/// finds the set (locating the block) by voxel id
/// Generated from a method of class `MR::SeparationPointStorage` named `findSeparationPointSet`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_std_array_MR_VertId_3 *MR_SeparationPointStorage_findSeparationPointSet(const MR_SeparationPointStorage *_this, MR_uint64_t voxelId);

/// combines triangulations from every block into one and returns it
/// Generated from a method of class `MR::SeparationPointStorage` named `getTriangulation`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `outVoxelPerFaceMap` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Triangulation_Destroy()` to free it when you're done using it.
MRC_API MR_Triangulation *MR_SeparationPointStorage_getTriangulation(const MR_SeparationPointStorage *_this, MR_Vector_MR_VoxelId_MR_FaceId *outVoxelPerFaceMap);

/// obtains coordinates of all stored points
/// Generated from a method of class `MR::SeparationPointStorage` named `getPoints`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API void MR_SeparationPointStorage_getPoints(const MR_SeparationPointStorage *_this, MR_VertCoords *points);

/// Returns a pointer to a member variable of class `MR::SeparationPointStorage::Block` named `smap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_phmap_flat_hash_map_uint64_t_std_array_MR_VertId_3_phmap_Hash_uint64_t *MR_SeparationPointStorage_Block_Get_smap(const MR_SeparationPointStorage_Block *_this);

/// Modifies a member variable of class `MR::SeparationPointStorage::Block` named `smap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SeparationPointStorage_Block_Set_smap(MR_SeparationPointStorage_Block *_this, MR_PassBy value_pass_by, MR_phmap_flat_hash_map_uint64_t_std_array_MR_VertId_3_phmap_Hash_uint64_t *value);

/// Returns a mutable pointer to a member variable of class `MR::SeparationPointStorage::Block` named `smap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_phmap_flat_hash_map_uint64_t_std_array_MR_VertId_3_phmap_Hash_uint64_t *MR_SeparationPointStorage_Block_GetMutable_smap(MR_SeparationPointStorage_Block *_this);

/// Returns a pointer to a member variable of class `MR::SeparationPointStorage::Block` named `coords`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_Vector3f *MR_SeparationPointStorage_Block_Get_coords(const MR_SeparationPointStorage_Block *_this);

/// Modifies a member variable of class `MR::SeparationPointStorage::Block` named `coords`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SeparationPointStorage_Block_Set_coords(MR_SeparationPointStorage_Block *_this, MR_PassBy value_pass_by, MR_std_vector_MR_Vector3f *value);

/// Returns a mutable pointer to a member variable of class `MR::SeparationPointStorage::Block` named `coords`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_Vector3f *MR_SeparationPointStorage_Block_GetMutable_coords(MR_SeparationPointStorage_Block *_this);

/// after makeUniqueVids(), it is the unique id of first point in coords
/// Returns a pointer to a member variable of class `MR::SeparationPointStorage::Block` named `shift`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_SeparationPointStorage_Block_Get_shift(const MR_SeparationPointStorage_Block *_this);

/// after makeUniqueVids(), it is the unique id of first point in coords
/// Modifies a member variable of class `MR::SeparationPointStorage::Block` named `shift`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SeparationPointStorage_Block_Set_shift(MR_SeparationPointStorage_Block *_this, MR_VertId value);

/// after makeUniqueVids(), it is the unique id of first point in coords
/// Returns a mutable pointer to a member variable of class `MR::SeparationPointStorage::Block` named `shift`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_SeparationPointStorage_Block_GetMutable_shift(MR_SeparationPointStorage_Block *_this);

/// Returns a pointer to a member variable of class `MR::SeparationPointStorage::Block` named `tris`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Triangulation *MR_SeparationPointStorage_Block_Get_tris(const MR_SeparationPointStorage_Block *_this);

/// Modifies a member variable of class `MR::SeparationPointStorage::Block` named `tris`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SeparationPointStorage_Block_Set_tris(MR_SeparationPointStorage_Block *_this, MR_PassBy value_pass_by, MR_Triangulation *value);

/// Returns a mutable pointer to a member variable of class `MR::SeparationPointStorage::Block` named `tris`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Triangulation *MR_SeparationPointStorage_Block_GetMutable_tris(MR_SeparationPointStorage_Block *_this);

/// Returns a pointer to a member variable of class `MR::SeparationPointStorage::Block` named `faceMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector_MR_VoxelId_MR_FaceId *MR_SeparationPointStorage_Block_Get_faceMap(const MR_SeparationPointStorage_Block *_this);

/// Modifies a member variable of class `MR::SeparationPointStorage::Block` named `faceMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SeparationPointStorage_Block_Set_faceMap(MR_SeparationPointStorage_Block *_this, MR_PassBy value_pass_by, MR_Vector_MR_VoxelId_MR_FaceId *value);

/// Returns a mutable pointer to a member variable of class `MR::SeparationPointStorage::Block` named `faceMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector_MR_VoxelId_MR_FaceId *MR_SeparationPointStorage_Block_GetMutable_faceMap(MR_SeparationPointStorage_Block *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SeparationPointStorage_Block_Destroy()` to free it when you're done using it.
MRC_API MR_SeparationPointStorage_Block *MR_SeparationPointStorage_Block_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SeparationPointStorage_Block_DestroyArray()`.
/// Use `MR_SeparationPointStorage_Block_OffsetMutablePtr()` and `MR_SeparationPointStorage_Block_OffsetPtr()` to access the array elements.
MRC_API MR_SeparationPointStorage_Block *MR_SeparationPointStorage_Block_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::SeparationPointStorage::Block` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SeparationPointStorage_Block_Destroy()` to free it when you're done using it.
MRC_API MR_SeparationPointStorage_Block *MR_SeparationPointStorage_Block_ConstructFrom(MR_PassBy smap_pass_by, MR_phmap_flat_hash_map_uint64_t_std_array_MR_VertId_3_phmap_Hash_uint64_t *smap, MR_PassBy coords_pass_by, MR_std_vector_MR_Vector3f *coords, MR_VertId shift, MR_PassBy tris_pass_by, MR_Triangulation *tris, MR_PassBy faceMap_pass_by, MR_Vector_MR_VoxelId_MR_FaceId *faceMap);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SeparationPointStorage_Block *MR_SeparationPointStorage_Block_OffsetPtr(const MR_SeparationPointStorage_Block *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SeparationPointStorage_Block *MR_SeparationPointStorage_Block_OffsetMutablePtr(MR_SeparationPointStorage_Block *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SeparationPointStorage::Block`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SeparationPointStorage_Block_Destroy()` to free it when you're done using it.
MRC_API MR_SeparationPointStorage_Block *MR_SeparationPointStorage_Block_ConstructFromAnother(MR_PassBy _other_pass_by, MR_SeparationPointStorage_Block *_other);

/// Destroys a heap-allocated instance of `MR_SeparationPointStorage_Block`. Does nothing if the pointer is null.
MRC_API void MR_SeparationPointStorage_Block_Destroy(const MR_SeparationPointStorage_Block *_this);

/// Destroys a heap-allocated array of `MR_SeparationPointStorage_Block`. Does nothing if the pointer is null.
MRC_API void MR_SeparationPointStorage_Block_DestroyArray(const MR_SeparationPointStorage_Block *_this);

/// Generated from a method of class `MR::SeparationPointStorage::Block` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SeparationPointStorage_Block *MR_SeparationPointStorage_Block_AssignFromAnother(MR_SeparationPointStorage_Block *_this, MR_PassBy _other_pass_by, MR_SeparationPointStorage_Block *_other);

/// during filling, it is the id of next valid point;
/// Generated from a method of class `MR::SeparationPointStorage::Block` named `nextVid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertId MR_SeparationPointStorage_Block_nextVid(const MR_SeparationPointStorage_Block *_this);

#ifdef __cplusplus
} // extern "C"
#endif
