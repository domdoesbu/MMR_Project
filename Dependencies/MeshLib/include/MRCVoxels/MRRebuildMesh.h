// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MREnums.h>
#include <MRCMesh/MRSignDetectionMode.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_expected_MR_Mesh_std_string MR_expected_MR_Mesh_std_string; // Defined in `#include <MRCMisc/expected_MR_Mesh_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_function_void_from_MR_SignDetectionMode MR_std_function_void_from_MR_SignDetectionMode; // Defined in `#include <MRCMisc/std_function_void_from_MR_SignDetectionMode.h>`.
typedef struct MR_std_shared_ptr_MR_IFastWindingNumber MR_std_shared_ptr_MR_IFastWindingNumber; // Defined in `#include <MRCMisc/std_shared_ptr_MR_IFastWindingNumber.h>`.


/// Generated from class `MR::RebuildMeshSettings`.
typedef struct MR_RebuildMeshSettings MR_RebuildMeshSettings;

/// whether to make subdivision of initial mesh before conversion to voxels,
/// despite time and memory required for the subdivision, it typically makes the whole rebuilding faster (or even much faster in case of large initial triangles),
/// because AABB tree contains small triangles in leaves, which is good for both
/// 1) search for closest triangle because the closest box more frequently contains the closest triangle,
/// 2) and winding number approximation because of more frequent usage of approximation for distant dipoles
/// Returns a pointer to a member variable of class `MR::RebuildMeshSettings` named `preSubdivide`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_RebuildMeshSettings_Get_preSubdivide(const MR_RebuildMeshSettings *_this);

/// whether to make subdivision of initial mesh before conversion to voxels,
/// despite time and memory required for the subdivision, it typically makes the whole rebuilding faster (or even much faster in case of large initial triangles),
/// because AABB tree contains small triangles in leaves, which is good for both
/// 1) search for closest triangle because the closest box more frequently contains the closest triangle,
/// 2) and winding number approximation because of more frequent usage of approximation for distant dipoles
/// Modifies a member variable of class `MR::RebuildMeshSettings` named `preSubdivide`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RebuildMeshSettings_Set_preSubdivide(MR_RebuildMeshSettings *_this, bool value);

/// whether to make subdivision of initial mesh before conversion to voxels,
/// despite time and memory required for the subdivision, it typically makes the whole rebuilding faster (or even much faster in case of large initial triangles),
/// because AABB tree contains small triangles in leaves, which is good for both
/// 1) search for closest triangle because the closest box more frequently contains the closest triangle,
/// 2) and winding number approximation because of more frequent usage of approximation for distant dipoles
/// Returns a mutable pointer to a member variable of class `MR::RebuildMeshSettings` named `preSubdivide`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_RebuildMeshSettings_GetMutable_preSubdivide(MR_RebuildMeshSettings *_this);

/// Size of voxel in grid conversions;
/// The user is responsible for setting some positive value here
/// Returns a pointer to a member variable of class `MR::RebuildMeshSettings` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_RebuildMeshSettings_Get_voxelSize(const MR_RebuildMeshSettings *_this);

/// Size of voxel in grid conversions;
/// The user is responsible for setting some positive value here
/// Modifies a member variable of class `MR::RebuildMeshSettings` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RebuildMeshSettings_Set_voxelSize(MR_RebuildMeshSettings *_this, float value);

/// Size of voxel in grid conversions;
/// The user is responsible for setting some positive value here
/// Returns a mutable pointer to a member variable of class `MR::RebuildMeshSettings` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_RebuildMeshSettings_GetMutable_voxelSize(MR_RebuildMeshSettings *_this);

/// Returns a pointer to a member variable of class `MR::RebuildMeshSettings` named `signMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_SignDetectionModeShort *MR_RebuildMeshSettings_Get_signMode(const MR_RebuildMeshSettings *_this);

/// Modifies a member variable of class `MR::RebuildMeshSettings` named `signMode`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RebuildMeshSettings_Set_signMode(MR_RebuildMeshSettings *_this, MR_SignDetectionModeShort value);

/// Returns a mutable pointer to a member variable of class `MR::RebuildMeshSettings` named `signMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SignDetectionModeShort *MR_RebuildMeshSettings_GetMutable_signMode(MR_RebuildMeshSettings *_this);

/// whether to construct closed mesh in signMode = SignDetectionModeShort::HoleWindingNumber
/// Returns a pointer to a member variable of class `MR::RebuildMeshSettings` named `closeHolesInHoleWindingNumber`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_RebuildMeshSettings_Get_closeHolesInHoleWindingNumber(const MR_RebuildMeshSettings *_this);

/// whether to construct closed mesh in signMode = SignDetectionModeShort::HoleWindingNumber
/// Modifies a member variable of class `MR::RebuildMeshSettings` named `closeHolesInHoleWindingNumber`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RebuildMeshSettings_Set_closeHolesInHoleWindingNumber(MR_RebuildMeshSettings *_this, bool value);

/// whether to construct closed mesh in signMode = SignDetectionModeShort::HoleWindingNumber
/// Returns a mutable pointer to a member variable of class `MR::RebuildMeshSettings` named `closeHolesInHoleWindingNumber`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_RebuildMeshSettings_GetMutable_closeHolesInHoleWindingNumber(MR_RebuildMeshSettings *_this);

/// Returns a pointer to a member variable of class `MR::RebuildMeshSettings` named `offsetMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_OffsetMode *MR_RebuildMeshSettings_Get_offsetMode(const MR_RebuildMeshSettings *_this);

/// Modifies a member variable of class `MR::RebuildMeshSettings` named `offsetMode`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RebuildMeshSettings_Set_offsetMode(MR_RebuildMeshSettings *_this, MR_OffsetMode value);

/// Returns a mutable pointer to a member variable of class `MR::RebuildMeshSettings` named `offsetMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OffsetMode *MR_RebuildMeshSettings_GetMutable_offsetMode(MR_RebuildMeshSettings *_this);

/// if non-null then created sharp edges (only if offsetMode = OffsetMode::Sharpening) will be saved here
/// Returns a pointer to a member variable of class `MR::RebuildMeshSettings` named `outSharpEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *const *MR_RebuildMeshSettings_Get_outSharpEdges(const MR_RebuildMeshSettings *_this);

/// if non-null then created sharp edges (only if offsetMode = OffsetMode::Sharpening) will be saved here
/// Modifies a member variable of class `MR::RebuildMeshSettings` named `outSharpEdges`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RebuildMeshSettings_Set_outSharpEdges(MR_RebuildMeshSettings *_this, MR_UndirectedEdgeBitSet *value);

/// if non-null then created sharp edges (only if offsetMode = OffsetMode::Sharpening) will be saved here
/// Returns a mutable pointer to a member variable of class `MR::RebuildMeshSettings` named `outSharpEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet **MR_RebuildMeshSettings_GetMutable_outSharpEdges(MR_RebuildMeshSettings *_this);

/// if general winding number is used to differentiate inside from outside:
/// positive distance if winding number below or equal this threshold;
/// ideal threshold: 0.5 for closed meshes; 0.0 for planar meshes
/// Returns a pointer to a member variable of class `MR::RebuildMeshSettings` named `windingNumberThreshold`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_RebuildMeshSettings_Get_windingNumberThreshold(const MR_RebuildMeshSettings *_this);

/// if general winding number is used to differentiate inside from outside:
/// positive distance if winding number below or equal this threshold;
/// ideal threshold: 0.5 for closed meshes; 0.0 for planar meshes
/// Modifies a member variable of class `MR::RebuildMeshSettings` named `windingNumberThreshold`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RebuildMeshSettings_Set_windingNumberThreshold(MR_RebuildMeshSettings *_this, float value);

/// if general winding number is used to differentiate inside from outside:
/// positive distance if winding number below or equal this threshold;
/// ideal threshold: 0.5 for closed meshes; 0.0 for planar meshes
/// Returns a mutable pointer to a member variable of class `MR::RebuildMeshSettings` named `windingNumberThreshold`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_RebuildMeshSettings_GetMutable_windingNumberThreshold(MR_RebuildMeshSettings *_this);

/// if general winding number is used to differentiate inside from outside:
/// determines the precision of fast approximation: the more the better, minimum value is 1
/// Returns a pointer to a member variable of class `MR::RebuildMeshSettings` named `windingNumberBeta`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_RebuildMeshSettings_Get_windingNumberBeta(const MR_RebuildMeshSettings *_this);

/// if general winding number is used to differentiate inside from outside:
/// determines the precision of fast approximation: the more the better, minimum value is 1
/// Modifies a member variable of class `MR::RebuildMeshSettings` named `windingNumberBeta`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RebuildMeshSettings_Set_windingNumberBeta(MR_RebuildMeshSettings *_this, float value);

/// if general winding number is used to differentiate inside from outside:
/// determines the precision of fast approximation: the more the better, minimum value is 1
/// Returns a mutable pointer to a member variable of class `MR::RebuildMeshSettings` named `windingNumberBeta`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_RebuildMeshSettings_GetMutable_windingNumberBeta(MR_RebuildMeshSettings *_this);

/// defines particular implementation of IFastWindingNumber interface that will compute windings (if required).
/// If it is not specified, default FastWindingNumber is used
/// Returns a pointer to a member variable of class `MR::RebuildMeshSettings` named `fwn`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_MR_IFastWindingNumber *MR_RebuildMeshSettings_Get_fwn(const MR_RebuildMeshSettings *_this);

/// defines particular implementation of IFastWindingNumber interface that will compute windings (if required).
/// If it is not specified, default FastWindingNumber is used
/// Modifies a member variable of class `MR::RebuildMeshSettings` named `fwn`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RebuildMeshSettings_Set_fwn(MR_RebuildMeshSettings *_this, MR_PassBy value_pass_by, MR_std_shared_ptr_MR_IFastWindingNumber *value);

/// defines particular implementation of IFastWindingNumber interface that will compute windings (if required).
/// If it is not specified, default FastWindingNumber is used
/// Returns a mutable pointer to a member variable of class `MR::RebuildMeshSettings` named `fwn`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_shared_ptr_MR_IFastWindingNumber *MR_RebuildMeshSettings_GetMutable_fwn(MR_RebuildMeshSettings *_this);

/// whether to decimate resulting mesh
/// Returns a pointer to a member variable of class `MR::RebuildMeshSettings` named `decimate`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_RebuildMeshSettings_Get_decimate(const MR_RebuildMeshSettings *_this);

/// whether to decimate resulting mesh
/// Modifies a member variable of class `MR::RebuildMeshSettings` named `decimate`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RebuildMeshSettings_Set_decimate(MR_RebuildMeshSettings *_this, bool value);

/// whether to decimate resulting mesh
/// Returns a mutable pointer to a member variable of class `MR::RebuildMeshSettings` named `decimate`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_RebuildMeshSettings_GetMutable_decimate(MR_RebuildMeshSettings *_this);

/// only if decimate = true:
/// edges not longer than this value will be collapsed even if it results in appearance of a triangle with high aspect ratio
/// Returns a pointer to a member variable of class `MR::RebuildMeshSettings` named `tinyEdgeLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_RebuildMeshSettings_Get_tinyEdgeLength(const MR_RebuildMeshSettings *_this);

/// only if decimate = true:
/// edges not longer than this value will be collapsed even if it results in appearance of a triangle with high aspect ratio
/// Modifies a member variable of class `MR::RebuildMeshSettings` named `tinyEdgeLength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RebuildMeshSettings_Set_tinyEdgeLength(MR_RebuildMeshSettings *_this, float value);

/// only if decimate = true:
/// edges not longer than this value will be collapsed even if it results in appearance of a triangle with high aspect ratio
/// Returns a mutable pointer to a member variable of class `MR::RebuildMeshSettings` named `tinyEdgeLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_RebuildMeshSettings_GetMutable_tinyEdgeLength(MR_RebuildMeshSettings *_this);

/// To report algorithm's progress and cancel it on user demand
/// Returns a pointer to a member variable of class `MR::RebuildMeshSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_RebuildMeshSettings_Get_progress(const MR_RebuildMeshSettings *_this);

/// To report algorithm's progress and cancel it on user demand
/// Modifies a member variable of class `MR::RebuildMeshSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RebuildMeshSettings_Set_progress(MR_RebuildMeshSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// To report algorithm's progress and cancel it on user demand
/// Returns a mutable pointer to a member variable of class `MR::RebuildMeshSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_RebuildMeshSettings_GetMutable_progress(MR_RebuildMeshSettings *_this);

/// this callback is invoked when SignDetectionMode is determined (useful if signMode = SignDetectionModeShort::Auto),
/// but before actual work begins
/// Returns a pointer to a member variable of class `MR::RebuildMeshSettings` named `onSignDetectionModeSelected`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_void_from_MR_SignDetectionMode *MR_RebuildMeshSettings_Get_onSignDetectionModeSelected(const MR_RebuildMeshSettings *_this);

/// this callback is invoked when SignDetectionMode is determined (useful if signMode = SignDetectionModeShort::Auto),
/// but before actual work begins
/// Modifies a member variable of class `MR::RebuildMeshSettings` named `onSignDetectionModeSelected`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RebuildMeshSettings_Set_onSignDetectionModeSelected(MR_RebuildMeshSettings *_this, MR_PassBy value_pass_by, MR_std_function_void_from_MR_SignDetectionMode *value);

/// this callback is invoked when SignDetectionMode is determined (useful if signMode = SignDetectionModeShort::Auto),
/// but before actual work begins
/// Returns a mutable pointer to a member variable of class `MR::RebuildMeshSettings` named `onSignDetectionModeSelected`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_void_from_MR_SignDetectionMode *MR_RebuildMeshSettings_GetMutable_onSignDetectionModeSelected(MR_RebuildMeshSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RebuildMeshSettings_Destroy()` to free it when you're done using it.
MRC_API MR_RebuildMeshSettings *MR_RebuildMeshSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_RebuildMeshSettings_DestroyArray()`.
/// Use `MR_RebuildMeshSettings_OffsetMutablePtr()` and `MR_RebuildMeshSettings_OffsetPtr()` to access the array elements.
MRC_API MR_RebuildMeshSettings *MR_RebuildMeshSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::RebuildMeshSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RebuildMeshSettings_Destroy()` to free it when you're done using it.
MRC_API MR_RebuildMeshSettings *MR_RebuildMeshSettings_ConstructFrom(bool preSubdivide, float voxelSize, MR_SignDetectionModeShort signMode, bool closeHolesInHoleWindingNumber, MR_OffsetMode offsetMode, MR_UndirectedEdgeBitSet *outSharpEdges, float windingNumberThreshold, float windingNumberBeta, MR_PassBy fwn_pass_by, MR_std_shared_ptr_MR_IFastWindingNumber *fwn, bool decimate, float tinyEdgeLength, MR_PassBy progress_pass_by, MR_std_function_bool_from_float *progress, MR_PassBy onSignDetectionModeSelected_pass_by, MR_std_function_void_from_MR_SignDetectionMode *onSignDetectionModeSelected);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_RebuildMeshSettings *MR_RebuildMeshSettings_OffsetPtr(const MR_RebuildMeshSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_RebuildMeshSettings *MR_RebuildMeshSettings_OffsetMutablePtr(MR_RebuildMeshSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::RebuildMeshSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RebuildMeshSettings_Destroy()` to free it when you're done using it.
MRC_API MR_RebuildMeshSettings *MR_RebuildMeshSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_RebuildMeshSettings *_other);

/// Destroys a heap-allocated instance of `MR_RebuildMeshSettings`. Does nothing if the pointer is null.
MRC_API void MR_RebuildMeshSettings_Destroy(const MR_RebuildMeshSettings *_this);

/// Destroys a heap-allocated array of `MR_RebuildMeshSettings`. Does nothing if the pointer is null.
MRC_API void MR_RebuildMeshSettings_DestroyArray(const MR_RebuildMeshSettings *_this);

/// Generated from a method of class `MR::RebuildMeshSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RebuildMeshSettings *MR_RebuildMeshSettings_AssignFromAnother(MR_RebuildMeshSettings *_this, MR_PassBy _other_pass_by, MR_RebuildMeshSettings *_other);

/// fixes all types of issues in input mesh (degenerations, holes, self-intersections, etc.)
/// by first converting mesh in voxel representation, and then backward
/// Generated from function `MR::rebuildMesh`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_rebuildMesh(const MR_MeshPart *mp, const MR_RebuildMeshSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
