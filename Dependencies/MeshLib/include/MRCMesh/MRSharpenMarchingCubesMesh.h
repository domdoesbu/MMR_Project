// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Vector_MR_VoxelId_MR_FaceId MR_Vector_MR_VoxelId_MR_FaceId; // Defined in `#include <MRCMesh/MRVector.h>`.


/// Generated from class `MR::SharpenMarchingCubesMeshSettings`.
typedef struct MR_SharpenMarchingCubesMeshSettings MR_SharpenMarchingCubesMeshSettings;

/// minimal surface deviation to introduce new vertex in a voxel;
/// recommended set equal to ( voxel size / 25 )
/// Returns a pointer to a member variable of class `MR::SharpenMarchingCubesMeshSettings` named `minNewVertDev`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SharpenMarchingCubesMeshSettings_Get_minNewVertDev(const MR_SharpenMarchingCubesMeshSettings *_this);

/// minimal surface deviation to introduce new vertex in a voxel;
/// recommended set equal to ( voxel size / 25 )
/// Modifies a member variable of class `MR::SharpenMarchingCubesMeshSettings` named `minNewVertDev`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SharpenMarchingCubesMeshSettings_Set_minNewVertDev(MR_SharpenMarchingCubesMeshSettings *_this, float value);

/// minimal surface deviation to introduce new vertex in a voxel;
/// recommended set equal to ( voxel size / 25 )
/// Returns a mutable pointer to a member variable of class `MR::SharpenMarchingCubesMeshSettings` named `minNewVertDev`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SharpenMarchingCubesMeshSettings_GetMutable_minNewVertDev(MR_SharpenMarchingCubesMeshSettings *_this);

/// maximal surface deviation to introduce new rank 2 vertex (on intersection of 2 planes);
/// recommended set equal to ( 5 * voxel size )
/// Returns a pointer to a member variable of class `MR::SharpenMarchingCubesMeshSettings` named `maxNewRank2VertDev`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SharpenMarchingCubesMeshSettings_Get_maxNewRank2VertDev(const MR_SharpenMarchingCubesMeshSettings *_this);

/// maximal surface deviation to introduce new rank 2 vertex (on intersection of 2 planes);
/// recommended set equal to ( 5 * voxel size )
/// Modifies a member variable of class `MR::SharpenMarchingCubesMeshSettings` named `maxNewRank2VertDev`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SharpenMarchingCubesMeshSettings_Set_maxNewRank2VertDev(MR_SharpenMarchingCubesMeshSettings *_this, float value);

/// maximal surface deviation to introduce new rank 2 vertex (on intersection of 2 planes);
/// recommended set equal to ( 5 * voxel size )
/// Returns a mutable pointer to a member variable of class `MR::SharpenMarchingCubesMeshSettings` named `maxNewRank2VertDev`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SharpenMarchingCubesMeshSettings_GetMutable_maxNewRank2VertDev(MR_SharpenMarchingCubesMeshSettings *_this);

/// maximal surface deviation to introduce new rank 3 vertex (on intersection of 3 planes);
/// recommended set equal to ( 2 * voxel size )
/// Returns a pointer to a member variable of class `MR::SharpenMarchingCubesMeshSettings` named `maxNewRank3VertDev`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SharpenMarchingCubesMeshSettings_Get_maxNewRank3VertDev(const MR_SharpenMarchingCubesMeshSettings *_this);

/// maximal surface deviation to introduce new rank 3 vertex (on intersection of 3 planes);
/// recommended set equal to ( 2 * voxel size )
/// Modifies a member variable of class `MR::SharpenMarchingCubesMeshSettings` named `maxNewRank3VertDev`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SharpenMarchingCubesMeshSettings_Set_maxNewRank3VertDev(MR_SharpenMarchingCubesMeshSettings *_this, float value);

/// maximal surface deviation to introduce new rank 3 vertex (on intersection of 3 planes);
/// recommended set equal to ( 2 * voxel size )
/// Returns a mutable pointer to a member variable of class `MR::SharpenMarchingCubesMeshSettings` named `maxNewRank3VertDev`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SharpenMarchingCubesMeshSettings_GetMutable_maxNewRank3VertDev(MR_SharpenMarchingCubesMeshSettings *_this);

/// relative to reference mesh
/// Returns a pointer to a member variable of class `MR::SharpenMarchingCubesMeshSettings` named `offset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SharpenMarchingCubesMeshSettings_Get_offset(const MR_SharpenMarchingCubesMeshSettings *_this);

/// relative to reference mesh
/// Modifies a member variable of class `MR::SharpenMarchingCubesMeshSettings` named `offset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SharpenMarchingCubesMeshSettings_Set_offset(MR_SharpenMarchingCubesMeshSettings *_this, float value);

/// relative to reference mesh
/// Returns a mutable pointer to a member variable of class `MR::SharpenMarchingCubesMeshSettings` named `offset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SharpenMarchingCubesMeshSettings_GetMutable_offset(MR_SharpenMarchingCubesMeshSettings *_this);

/// correct positions of the input vertices using reference mesh by not more than this distance;
/// big correction can be wrong and result from self-intersections in the reference mesh
/// recommended set equal to ( voxel size / 2 )
/// Returns a pointer to a member variable of class `MR::SharpenMarchingCubesMeshSettings` named `maxOldVertPosCorrection`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SharpenMarchingCubesMeshSettings_Get_maxOldVertPosCorrection(const MR_SharpenMarchingCubesMeshSettings *_this);

/// correct positions of the input vertices using reference mesh by not more than this distance;
/// big correction can be wrong and result from self-intersections in the reference mesh
/// recommended set equal to ( voxel size / 2 )
/// Modifies a member variable of class `MR::SharpenMarchingCubesMeshSettings` named `maxOldVertPosCorrection`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SharpenMarchingCubesMeshSettings_Set_maxOldVertPosCorrection(MR_SharpenMarchingCubesMeshSettings *_this, float value);

/// correct positions of the input vertices using reference mesh by not more than this distance;
/// big correction can be wrong and result from self-intersections in the reference mesh
/// recommended set equal to ( voxel size / 2 )
/// Returns a mutable pointer to a member variable of class `MR::SharpenMarchingCubesMeshSettings` named `maxOldVertPosCorrection`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SharpenMarchingCubesMeshSettings_GetMutable_maxOldVertPosCorrection(MR_SharpenMarchingCubesMeshSettings *_this);

/// the number of iterations to best select positions for new vertices,
/// the probability of self-intersections and spikes are higher if posSelIters = 0
/// Returns a pointer to a member variable of class `MR::SharpenMarchingCubesMeshSettings` named `posSelIters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SharpenMarchingCubesMeshSettings_Get_posSelIters(const MR_SharpenMarchingCubesMeshSettings *_this);

/// the number of iterations to best select positions for new vertices,
/// the probability of self-intersections and spikes are higher if posSelIters = 0
/// Modifies a member variable of class `MR::SharpenMarchingCubesMeshSettings` named `posSelIters`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SharpenMarchingCubesMeshSettings_Set_posSelIters(MR_SharpenMarchingCubesMeshSettings *_this, int32_t value);

/// the number of iterations to best select positions for new vertices,
/// the probability of self-intersections and spikes are higher if posSelIters = 0
/// Returns a mutable pointer to a member variable of class `MR::SharpenMarchingCubesMeshSettings` named `posSelIters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SharpenMarchingCubesMeshSettings_GetMutable_posSelIters(MR_SharpenMarchingCubesMeshSettings *_this);

/// if non-null then created sharp edges will be saved here
/// Returns a pointer to a member variable of class `MR::SharpenMarchingCubesMeshSettings` named `outSharpEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *const *MR_SharpenMarchingCubesMeshSettings_Get_outSharpEdges(const MR_SharpenMarchingCubesMeshSettings *_this);

/// if non-null then created sharp edges will be saved here
/// Modifies a member variable of class `MR::SharpenMarchingCubesMeshSettings` named `outSharpEdges`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SharpenMarchingCubesMeshSettings_Set_outSharpEdges(MR_SharpenMarchingCubesMeshSettings *_this, MR_UndirectedEdgeBitSet *value);

/// if non-null then created sharp edges will be saved here
/// Returns a mutable pointer to a member variable of class `MR::SharpenMarchingCubesMeshSettings` named `outSharpEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet **MR_SharpenMarchingCubesMeshSettings_GetMutable_outSharpEdges(MR_SharpenMarchingCubesMeshSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SharpenMarchingCubesMeshSettings_Destroy()` to free it when you're done using it.
MRC_API MR_SharpenMarchingCubesMeshSettings *MR_SharpenMarchingCubesMeshSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SharpenMarchingCubesMeshSettings_DestroyArray()`.
/// Use `MR_SharpenMarchingCubesMeshSettings_OffsetMutablePtr()` and `MR_SharpenMarchingCubesMeshSettings_OffsetPtr()` to access the array elements.
MRC_API MR_SharpenMarchingCubesMeshSettings *MR_SharpenMarchingCubesMeshSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::SharpenMarchingCubesMeshSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SharpenMarchingCubesMeshSettings_Destroy()` to free it when you're done using it.
MRC_API MR_SharpenMarchingCubesMeshSettings *MR_SharpenMarchingCubesMeshSettings_ConstructFrom(float minNewVertDev, float maxNewRank2VertDev, float maxNewRank3VertDev, float offset, float maxOldVertPosCorrection, int32_t posSelIters, MR_UndirectedEdgeBitSet *outSharpEdges);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SharpenMarchingCubesMeshSettings *MR_SharpenMarchingCubesMeshSettings_OffsetPtr(const MR_SharpenMarchingCubesMeshSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SharpenMarchingCubesMeshSettings *MR_SharpenMarchingCubesMeshSettings_OffsetMutablePtr(MR_SharpenMarchingCubesMeshSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SharpenMarchingCubesMeshSettings`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SharpenMarchingCubesMeshSettings_Destroy()` to free it when you're done using it.
MRC_API MR_SharpenMarchingCubesMeshSettings *MR_SharpenMarchingCubesMeshSettings_ConstructFromAnother(const MR_SharpenMarchingCubesMeshSettings *_other);

/// Destroys a heap-allocated instance of `MR_SharpenMarchingCubesMeshSettings`. Does nothing if the pointer is null.
MRC_API void MR_SharpenMarchingCubesMeshSettings_Destroy(const MR_SharpenMarchingCubesMeshSettings *_this);

/// Destroys a heap-allocated array of `MR_SharpenMarchingCubesMeshSettings`. Does nothing if the pointer is null.
MRC_API void MR_SharpenMarchingCubesMeshSettings_DestroyArray(const MR_SharpenMarchingCubesMeshSettings *_this);

/// Generated from a method of class `MR::SharpenMarchingCubesMeshSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SharpenMarchingCubesMeshSettings *MR_SharpenMarchingCubesMeshSettings_AssignFromAnother(MR_SharpenMarchingCubesMeshSettings *_this, const MR_SharpenMarchingCubesMeshSettings *_other);

/// adjust the mesh \param vox produced by marching cubes method (NOT dual marching cubes) by
/// 1) correcting positions of all vertices to given offset relative to \param ref mesh (if correctOldVertPos == true);
/// 2) introducing new vertices in the voxels where the normals change abruptly.
/// \param face2voxel mapping from Face Id to Voxel Id where it is located
/// Generated from function `MR::sharpenMarchingCubesMesh`.
/// Parameter `ref` can not be null. It is a single object.
/// Parameter `vox` can not be null. It is a single object.
/// Parameter `face2voxel` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
MRC_API void MR_sharpenMarchingCubesMesh(const MR_MeshPart *ref, MR_Mesh *vox, MR_Vector_MR_VoxelId_MR_FaceId *face2voxel, const MR_SharpenMarchingCubesMeshSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
