// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FunctionVolume MR_FunctionVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_SimpleBinaryVolume MR_SimpleBinaryVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_SimpleVolume MR_SimpleVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_SimpleVolumeMinMax MR_SimpleVolumeMinMax; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_VdbVolume MR_VdbVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_Vector3i MR_Vector3i; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_Vector_MR_VoxelId_MR_FaceId MR_Vector_MR_VoxelId_MR_FaceId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_expected_MR_Mesh_std_string MR_expected_MR_Mesh_std_string; // Defined in `#include <MRCMisc/expected_MR_Mesh_std_string.h>`.
typedef struct MR_expected_MR_TriMesh_std_string MR_expected_MR_TriMesh_std_string; // Defined in `#include <MRCMisc/expected_MR_TriMesh_std_string.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_function_MR_Vector3f_from_const_MR_Vector3f_ref_const_MR_Vector3f_ref_float_float_float MR_std_function_MR_Vector3f_from_const_MR_Vector3f_ref_const_MR_Vector3f_ref_float_float_float; // Defined in `#include <MRCMisc/std_function_MR_Vector3f_from_const_MR_Vector3f_ref_const_MR_Vector3f_ref_float_float_float.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_function_void MR_std_function_void; // Defined in `#include <MRCMisc/std_function_void.h>`.


/// Generated from class `MR::MarchingCubesParams`.
typedef struct MR_MarchingCubesParams MR_MarchingCubesParams;

/// caching mode to reduce the number of accesses to voxel volume data on the first pass of the algorithm by consuming more memory on cache;
/// note: the cache for the second pass of the algorithm (bit sets of invalid and lower-than-iso voxels are always allocated)
typedef int32_t MR_MarchingCubesParams_CachingMode;
enum // MR_MarchingCubesParams_CachingMode
{
    /// choose caching mode automatically depending on volume type
    /// (current defaults: Normal for FunctionVolume and VdbVolume, None for others)
    MR_MarchingCubesParams_CachingMode_Automatic = 0,
    /// don't cache any data
    MR_MarchingCubesParams_CachingMode_None = 1,
    /// allocates 2 full slices per parallel thread
    MR_MarchingCubesParams_CachingMode_Normal = 2,
};

/// converts volume split on parts by planes z=const into mesh,
/// last z-layer of previous part must be repeated as first z-layer of next part
/// usage:
/// MarchingCubesByParts x( dims, params);
/// x.addPart( part1 );
/// ...
/// x.addPart( partN );
/// Mesh mesh = Mesh::fromTriMesh( *x.finalize() );
/// Generated from class `MR::MarchingCubesByParts`.
typedef struct MR_MarchingCubesByParts MR_MarchingCubesByParts;

/// origin point of voxels box in 3D space with output mesh
/// Returns a pointer to a member variable of class `MR::MarchingCubesParams` named `origin`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_MarchingCubesParams_Get_origin(const MR_MarchingCubesParams *_this);

/// origin point of voxels box in 3D space with output mesh
/// Modifies a member variable of class `MR::MarchingCubesParams` named `origin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MarchingCubesParams_Set_origin(MR_MarchingCubesParams *_this, MR_Vector3f value);

/// origin point of voxels box in 3D space with output mesh
/// Returns a mutable pointer to a member variable of class `MR::MarchingCubesParams` named `origin`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_MarchingCubesParams_GetMutable_origin(MR_MarchingCubesParams *_this);

/// progress callback
/// Returns a pointer to a member variable of class `MR::MarchingCubesParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_MarchingCubesParams_Get_cb(const MR_MarchingCubesParams *_this);

/// progress callback
/// Modifies a member variable of class `MR::MarchingCubesParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MarchingCubesParams_Set_cb(MR_MarchingCubesParams *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// progress callback
/// Returns a mutable pointer to a member variable of class `MR::MarchingCubesParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_MarchingCubesParams_GetMutable_cb(MR_MarchingCubesParams *_this);

/// target iso-value of the surface to be extracted from volume
/// Returns a pointer to a member variable of class `MR::MarchingCubesParams` named `iso`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MarchingCubesParams_Get_iso(const MR_MarchingCubesParams *_this);

/// target iso-value of the surface to be extracted from volume
/// Modifies a member variable of class `MR::MarchingCubesParams` named `iso`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MarchingCubesParams_Set_iso(MR_MarchingCubesParams *_this, float value);

/// target iso-value of the surface to be extracted from volume
/// Returns a mutable pointer to a member variable of class `MR::MarchingCubesParams` named `iso`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MarchingCubesParams_GetMutable_iso(MR_MarchingCubesParams *_this);

/// should be false for dense volumes, and true for distance volume
/// Returns a pointer to a member variable of class `MR::MarchingCubesParams` named `lessInside`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_MarchingCubesParams_Get_lessInside(const MR_MarchingCubesParams *_this);

/// should be false for dense volumes, and true for distance volume
/// Modifies a member variable of class `MR::MarchingCubesParams` named `lessInside`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MarchingCubesParams_Set_lessInside(MR_MarchingCubesParams *_this, bool value);

/// should be false for dense volumes, and true for distance volume
/// Returns a mutable pointer to a member variable of class `MR::MarchingCubesParams` named `lessInside`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_MarchingCubesParams_GetMutable_lessInside(MR_MarchingCubesParams *_this);

/// optional output map FaceId->VoxelId
/// Returns a pointer to a member variable of class `MR::MarchingCubesParams` named `outVoxelPerFaceMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector_MR_VoxelId_MR_FaceId *const *MR_MarchingCubesParams_Get_outVoxelPerFaceMap(const MR_MarchingCubesParams *_this);

/// optional output map FaceId->VoxelId
/// Modifies a member variable of class `MR::MarchingCubesParams` named `outVoxelPerFaceMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MarchingCubesParams_Set_outVoxelPerFaceMap(MR_MarchingCubesParams *_this, MR_Vector_MR_VoxelId_MR_FaceId *value);

/// optional output map FaceId->VoxelId
/// Returns a mutable pointer to a member variable of class `MR::MarchingCubesParams` named `outVoxelPerFaceMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector_MR_VoxelId_MR_FaceId **MR_MarchingCubesParams_GetMutable_outVoxelPerFaceMap(MR_MarchingCubesParams *_this);

/// function to calculate position of result mesh points
/// if the function isn't set, a linear positioner will be used
/// note: this function is called in parallel from different threads
/// Returns a pointer to a member variable of class `MR::MarchingCubesParams` named `positioner`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_MR_Vector3f_from_const_MR_Vector3f_ref_const_MR_Vector3f_ref_float_float_float *MR_MarchingCubesParams_Get_positioner(const MR_MarchingCubesParams *_this);

/// function to calculate position of result mesh points
/// if the function isn't set, a linear positioner will be used
/// note: this function is called in parallel from different threads
/// Modifies a member variable of class `MR::MarchingCubesParams` named `positioner`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MarchingCubesParams_Set_positioner(MR_MarchingCubesParams *_this, MR_PassBy value_pass_by, MR_std_function_MR_Vector3f_from_const_MR_Vector3f_ref_const_MR_Vector3f_ref_float_float_float *value);

/// function to calculate position of result mesh points
/// if the function isn't set, a linear positioner will be used
/// note: this function is called in parallel from different threads
/// Returns a mutable pointer to a member variable of class `MR::MarchingCubesParams` named `positioner`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_MR_Vector3f_from_const_MR_Vector3f_ref_const_MR_Vector3f_ref_float_float_float *MR_MarchingCubesParams_GetMutable_positioner(MR_MarchingCubesParams *_this);

/// if the mesh exceeds this number of vertices, an error returns
/// Returns a pointer to a member variable of class `MR::MarchingCubesParams` named `maxVertices`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_MarchingCubesParams_Get_maxVertices(const MR_MarchingCubesParams *_this);

/// if the mesh exceeds this number of vertices, an error returns
/// Modifies a member variable of class `MR::MarchingCubesParams` named `maxVertices`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MarchingCubesParams_Set_maxVertices(MR_MarchingCubesParams *_this, int32_t value);

/// if the mesh exceeds this number of vertices, an error returns
/// Returns a mutable pointer to a member variable of class `MR::MarchingCubesParams` named `maxVertices`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_MarchingCubesParams_GetMutable_maxVertices(MR_MarchingCubesParams *_this);

/// Returns a pointer to a member variable of class `MR::MarchingCubesParams` named `cachingMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MarchingCubesParams_CachingMode *MR_MarchingCubesParams_Get_cachingMode(const MR_MarchingCubesParams *_this);

/// Modifies a member variable of class `MR::MarchingCubesParams` named `cachingMode`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MarchingCubesParams_Set_cachingMode(MR_MarchingCubesParams *_this, MR_MarchingCubesParams_CachingMode value);

/// Returns a mutable pointer to a member variable of class `MR::MarchingCubesParams` named `cachingMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MarchingCubesParams_CachingMode *MR_MarchingCubesParams_GetMutable_cachingMode(MR_MarchingCubesParams *_this);

/// this optional function is called when volume is no longer needed to deallocate it and reduce peak memory consumption
/// Returns a pointer to a member variable of class `MR::MarchingCubesParams` named `freeVolume`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_void *MR_MarchingCubesParams_Get_freeVolume(const MR_MarchingCubesParams *_this);

/// this optional function is called when volume is no longer needed to deallocate it and reduce peak memory consumption
/// Modifies a member variable of class `MR::MarchingCubesParams` named `freeVolume`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MarchingCubesParams_Set_freeVolume(MR_MarchingCubesParams *_this, MR_PassBy value_pass_by, MR_std_function_void *value);

/// this optional function is called when volume is no longer needed to deallocate it and reduce peak memory consumption
/// Returns a mutable pointer to a member variable of class `MR::MarchingCubesParams` named `freeVolume`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_void *MR_MarchingCubesParams_GetMutable_freeVolume(MR_MarchingCubesParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MarchingCubesParams_Destroy()` to free it when you're done using it.
MRC_API MR_MarchingCubesParams *MR_MarchingCubesParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MarchingCubesParams_DestroyArray()`.
/// Use `MR_MarchingCubesParams_OffsetMutablePtr()` and `MR_MarchingCubesParams_OffsetPtr()` to access the array elements.
MRC_API MR_MarchingCubesParams *MR_MarchingCubesParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MarchingCubesParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MarchingCubesParams_Destroy()` to free it when you're done using it.
MRC_API MR_MarchingCubesParams *MR_MarchingCubesParams_ConstructFrom(MR_Vector3f origin, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb, float iso, bool lessInside, MR_Vector_MR_VoxelId_MR_FaceId *outVoxelPerFaceMap, MR_PassBy positioner_pass_by, MR_std_function_MR_Vector3f_from_const_MR_Vector3f_ref_const_MR_Vector3f_ref_float_float_float *positioner, int32_t maxVertices, MR_MarchingCubesParams_CachingMode cachingMode, MR_PassBy freeVolume_pass_by, MR_std_function_void *freeVolume);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MarchingCubesParams *MR_MarchingCubesParams_OffsetPtr(const MR_MarchingCubesParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MarchingCubesParams *MR_MarchingCubesParams_OffsetMutablePtr(MR_MarchingCubesParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MarchingCubesParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MarchingCubesParams_Destroy()` to free it when you're done using it.
MRC_API MR_MarchingCubesParams *MR_MarchingCubesParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MarchingCubesParams *_other);

/// Destroys a heap-allocated instance of `MR_MarchingCubesParams`. Does nothing if the pointer is null.
MRC_API void MR_MarchingCubesParams_Destroy(const MR_MarchingCubesParams *_this);

/// Destroys a heap-allocated array of `MR_MarchingCubesParams`. Does nothing if the pointer is null.
MRC_API void MR_MarchingCubesParams_DestroyArray(const MR_MarchingCubesParams *_this);

/// Generated from a method of class `MR::MarchingCubesParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MarchingCubesParams *MR_MarchingCubesParams_AssignFromAnother(MR_MarchingCubesParams *_this, MR_PassBy _other_pass_by, MR_MarchingCubesParams *_other);

// makes Mesh from SimpleVolume with given settings using Marching Cubes algorithm
/// Generated from function `MR::marchingCubes`.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_marchingCubes_MR_SimpleVolume(const MR_SimpleVolume *volume, const MR_MarchingCubesParams *params);

/// Generated from function `MR::marchingCubesAsTriMesh`.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_TriMesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_TriMesh_std_string *MR_marchingCubesAsTriMesh_MR_SimpleVolume(const MR_SimpleVolume *volume, const MR_MarchingCubesParams *params);

// makes Mesh from SimpleVolumeMinMax with given settings using Marching Cubes algorithm
/// Generated from function `MR::marchingCubes`.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_marchingCubes_MR_SimpleVolumeMinMax(const MR_SimpleVolumeMinMax *volume, const MR_MarchingCubesParams *params);

/// Generated from function `MR::marchingCubesAsTriMesh`.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_TriMesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_TriMesh_std_string *MR_marchingCubesAsTriMesh_MR_SimpleVolumeMinMax(const MR_SimpleVolumeMinMax *volume, const MR_MarchingCubesParams *params);

// makes Mesh from VdbVolume with given settings using Marching Cubes algorithm
/// Generated from function `MR::marchingCubes`.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_marchingCubes_MR_VdbVolume(const MR_VdbVolume *volume, const MR_MarchingCubesParams *params);

/// Generated from function `MR::marchingCubesAsTriMesh`.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_TriMesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_TriMesh_std_string *MR_marchingCubesAsTriMesh_MR_VdbVolume(const MR_VdbVolume *volume, const MR_MarchingCubesParams *params);

// makes Mesh from FunctionVolume with given settings using Marching Cubes algorithm
/// Generated from function `MR::marchingCubes`.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_marchingCubes_MR_FunctionVolume(const MR_FunctionVolume *volume, const MR_MarchingCubesParams *params);

/// Generated from function `MR::marchingCubesAsTriMesh`.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_TriMesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_TriMesh_std_string *MR_marchingCubesAsTriMesh_MR_FunctionVolume(const MR_FunctionVolume *volume, const MR_MarchingCubesParams *params);

// makes Mesh from SimpleBinaryVolume with given settings using Marching Cubes algorithm
/// Generated from function `MR::marchingCubes`.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_marchingCubes_MR_SimpleBinaryVolume(const MR_SimpleBinaryVolume *volume, const MR_MarchingCubesParams *params);

/// Generated from function `MR::marchingCubesAsTriMesh`.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_TriMesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_TriMesh_std_string *MR_marchingCubesAsTriMesh_MR_SimpleBinaryVolume(const MR_SimpleBinaryVolume *volume, const MR_MarchingCubesParams *params);

/// Generated from a constructor of class `MR::MarchingCubesByParts`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MarchingCubesByParts_Destroy()` to free it when you're done using it.
MRC_API MR_MarchingCubesByParts *MR_MarchingCubesByParts_ConstructFromAnother(MR_PassBy s_pass_by, MR_MarchingCubesByParts *s);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MarchingCubesByParts *MR_MarchingCubesByParts_OffsetPtr(const MR_MarchingCubesByParts *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MarchingCubesByParts *MR_MarchingCubesByParts_OffsetMutablePtr(MR_MarchingCubesByParts *ptr, ptrdiff_t i);

/// prepares convention for given volume dimensions and given parameters
/// \param layersPerBlock all z-slices of the volume will be partitioned on blocks of given size to process blocks in parallel (0 means auto-select layersPerBlock)
/// Generated from a constructor of class `MR::MarchingCubesByParts`.
/// Parameter `dims` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Parameter `layersPerBlock` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MarchingCubesByParts_Destroy()` to free it when you're done using it.
MRC_API MR_MarchingCubesByParts *MR_MarchingCubesByParts_Construct(const MR_Vector3i *dims, const MR_MarchingCubesParams *params, const int32_t *layersPerBlock);

/// Destroys a heap-allocated instance of `MR_MarchingCubesByParts`. Does nothing if the pointer is null.
MRC_API void MR_MarchingCubesByParts_Destroy(const MR_MarchingCubesByParts *_this);

/// Destroys a heap-allocated array of `MR_MarchingCubesByParts`. Does nothing if the pointer is null.
MRC_API void MR_MarchingCubesByParts_DestroyArray(const MR_MarchingCubesByParts *_this);

/// Generated from a method of class `MR::MarchingCubesByParts` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MarchingCubesByParts *MR_MarchingCubesByParts_AssignFromAnother(MR_MarchingCubesByParts *_this, MR_PassBy s_pass_by, MR_MarchingCubesByParts *s);

/// the number of z-slices of the volume in the blocks
/// Generated from a method of class `MR::MarchingCubesByParts` named `layersPerBlock`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_MarchingCubesByParts_layersPerBlock(const MR_MarchingCubesByParts *_this);

/// the last z-layer of the previous part and the first z-layer of the next part
/// Generated from a method of class `MR::MarchingCubesByParts` named `nextZ`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_MarchingCubesByParts_nextZ(const MR_MarchingCubesByParts *_this);

/// adds one more part of volume into consideration, with first z=nextZ()
/// Generated from a method of class `MR::MarchingCubesByParts` named `addPart`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `part` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_MarchingCubesByParts_addPart(MR_MarchingCubesByParts *_this, const MR_SimpleVolume *part);

/// finishes processing and outputs produced trimesh
/// Generated from a method of class `MR::MarchingCubesByParts` named `finalize`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_TriMesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_TriMesh_std_string *MR_MarchingCubesByParts_finalize(MR_MarchingCubesByParts *_this);

#ifdef __cplusplus
} // extern "C"
#endif
