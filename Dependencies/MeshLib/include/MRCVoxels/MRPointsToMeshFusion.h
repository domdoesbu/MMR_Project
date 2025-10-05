// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_VertColors MR_VertColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_expected_MR_Mesh_std_string MR_expected_MR_Mesh_std_string; // Defined in `#include <MRCMisc/expected_MR_Mesh_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


/// Generated from class `MR::PointsToMeshParameters`.
typedef struct MR_PointsToMeshParameters MR_PointsToMeshParameters;

/// it the distance of highest influence of a point;
/// the maximal influence distance is 3*sigma; beyond that distance the influence is strictly zero
/// Returns a pointer to a member variable of class `MR::PointsToMeshParameters` named `sigma`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_PointsToMeshParameters_Get_sigma(const MR_PointsToMeshParameters *_this);

/// it the distance of highest influence of a point;
/// the maximal influence distance is 3*sigma; beyond that distance the influence is strictly zero
/// Modifies a member variable of class `MR::PointsToMeshParameters` named `sigma`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointsToMeshParameters_Set_sigma(MR_PointsToMeshParameters *_this, float value);

/// it the distance of highest influence of a point;
/// the maximal influence distance is 3*sigma; beyond that distance the influence is strictly zero
/// Returns a mutable pointer to a member variable of class `MR::PointsToMeshParameters` named `sigma`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_PointsToMeshParameters_GetMutable_sigma(MR_PointsToMeshParameters *_this);

/// minimum sum of influence weights from surrounding points for a triangle to appear, meaning that there shall be at least this number of points in close proximity
/// Returns a pointer to a member variable of class `MR::PointsToMeshParameters` named `minWeight`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_PointsToMeshParameters_Get_minWeight(const MR_PointsToMeshParameters *_this);

/// minimum sum of influence weights from surrounding points for a triangle to appear, meaning that there shall be at least this number of points in close proximity
/// Modifies a member variable of class `MR::PointsToMeshParameters` named `minWeight`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointsToMeshParameters_Set_minWeight(MR_PointsToMeshParameters *_this, float value);

/// minimum sum of influence weights from surrounding points for a triangle to appear, meaning that there shall be at least this number of points in close proximity
/// Returns a mutable pointer to a member variable of class `MR::PointsToMeshParameters` named `minWeight`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_PointsToMeshParameters_GetMutable_minWeight(MR_PointsToMeshParameters *_this);

/// Size of voxel in grid conversions;
/// The user is responsible for setting some positive value here
/// Returns a pointer to a member variable of class `MR::PointsToMeshParameters` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_PointsToMeshParameters_Get_voxelSize(const MR_PointsToMeshParameters *_this);

/// Size of voxel in grid conversions;
/// The user is responsible for setting some positive value here
/// Modifies a member variable of class `MR::PointsToMeshParameters` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointsToMeshParameters_Set_voxelSize(MR_PointsToMeshParameters *_this, float value);

/// Size of voxel in grid conversions;
/// The user is responsible for setting some positive value here
/// Returns a mutable pointer to a member variable of class `MR::PointsToMeshParameters` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_PointsToMeshParameters_GetMutable_voxelSize(MR_PointsToMeshParameters *_this);

/// optional input: colors of input points
/// Returns a pointer to a member variable of class `MR::PointsToMeshParameters` named `ptColors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertColors *const *MR_PointsToMeshParameters_Get_ptColors(const MR_PointsToMeshParameters *_this);

/// optional input: colors of input points
/// Modifies a member variable of class `MR::PointsToMeshParameters` named `ptColors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointsToMeshParameters_Set_ptColors(MR_PointsToMeshParameters *_this, const MR_VertColors *value);

/// optional input: colors of input points
/// Returns a mutable pointer to a member variable of class `MR::PointsToMeshParameters` named `ptColors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertColors **MR_PointsToMeshParameters_GetMutable_ptColors(MR_PointsToMeshParameters *_this);

/// optional output: averaged colors of mesh vertices
/// Returns a pointer to a member variable of class `MR::PointsToMeshParameters` named `vColors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertColors *const *MR_PointsToMeshParameters_Get_vColors(const MR_PointsToMeshParameters *_this);

/// optional output: averaged colors of mesh vertices
/// Modifies a member variable of class `MR::PointsToMeshParameters` named `vColors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointsToMeshParameters_Set_vColors(MR_PointsToMeshParameters *_this, MR_VertColors *value);

/// optional output: averaged colors of mesh vertices
/// Returns a mutable pointer to a member variable of class `MR::PointsToMeshParameters` named `vColors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertColors **MR_PointsToMeshParameters_GetMutable_vColors(MR_PointsToMeshParameters *_this);

/// Progress callback
/// Returns a pointer to a member variable of class `MR::PointsToMeshParameters` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_PointsToMeshParameters_Get_progress(const MR_PointsToMeshParameters *_this);

/// Progress callback
/// Modifies a member variable of class `MR::PointsToMeshParameters` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointsToMeshParameters_Set_progress(MR_PointsToMeshParameters *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// Progress callback
/// Returns a mutable pointer to a member variable of class `MR::PointsToMeshParameters` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_PointsToMeshParameters_GetMutable_progress(MR_PointsToMeshParameters *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointsToMeshParameters_Destroy()` to free it when you're done using it.
MRC_API MR_PointsToMeshParameters *MR_PointsToMeshParameters_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PointsToMeshParameters_DestroyArray()`.
/// Use `MR_PointsToMeshParameters_OffsetMutablePtr()` and `MR_PointsToMeshParameters_OffsetPtr()` to access the array elements.
MRC_API MR_PointsToMeshParameters *MR_PointsToMeshParameters_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PointsToMeshParameters *MR_PointsToMeshParameters_OffsetPtr(const MR_PointsToMeshParameters *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PointsToMeshParameters *MR_PointsToMeshParameters_OffsetMutablePtr(MR_PointsToMeshParameters *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PointsToMeshParameters`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointsToMeshParameters_Destroy()` to free it when you're done using it.
MRC_API MR_PointsToMeshParameters *MR_PointsToMeshParameters_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PointsToMeshParameters *_other);

/// Destroys a heap-allocated instance of `MR_PointsToMeshParameters`. Does nothing if the pointer is null.
MRC_API void MR_PointsToMeshParameters_Destroy(const MR_PointsToMeshParameters *_this);

/// Destroys a heap-allocated array of `MR_PointsToMeshParameters`. Does nothing if the pointer is null.
MRC_API void MR_PointsToMeshParameters_DestroyArray(const MR_PointsToMeshParameters *_this);

/// Generated from a method of class `MR::PointsToMeshParameters` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointsToMeshParameters *MR_PointsToMeshParameters_AssignFromAnother(MR_PointsToMeshParameters *_this, MR_PassBy _other_pass_by, MR_PointsToMeshParameters *_other);

/// makes mesh from points with normals by constructing intermediate volume with signed distances
/// and then using marching cubes algorithm to extract the surface from there
/// Generated from function `MR::pointsToMeshFusion`.
/// Parameter `cloud` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_pointsToMeshFusion(const MR_PointCloud *cloud, const MR_PointsToMeshParameters *params);

#ifdef __cplusplus
} // extern "C"
#endif
