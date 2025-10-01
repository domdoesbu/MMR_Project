// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRAffineXf.h>
#include <MRCMesh/MRBox.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Box3i MR_Box3i; // Defined in `#include <MRCMesh/MRBox.h>`.
typedef struct MR_FloatGrid MR_FloatGrid; // Defined in `#include <MRCVoxels/MRFloatGrid.h>`.
typedef struct MR_FunctionVolume MR_FunctionVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_SimpleVolume MR_SimpleVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_SimpleVolumeMinMax MR_SimpleVolumeMinMax; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_VdbVolume MR_VdbVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_expected_MR_Mesh_std_string MR_expected_MR_Mesh_std_string; // Defined in `#include <MRCMisc/expected_MR_Mesh_std_string.h>`.
typedef struct MR_expected_MR_SimpleVolumeMinMaxU16_std_string MR_expected_MR_SimpleVolumeMinMaxU16_std_string; // Defined in `#include <MRCMisc/expected_MR_SimpleVolumeMinMaxU16_std_string.h>`.
typedef struct MR_expected_MR_SimpleVolumeMinMax_std_string MR_expected_MR_SimpleVolumeMinMax_std_string; // Defined in `#include <MRCMisc/expected_MR_SimpleVolumeMinMax_std_string.h>`.
typedef struct MR_expected_MR_VdbVolume_std_string MR_expected_MR_VdbVolume_std_string; // Defined in `#include <MRCMisc/expected_MR_VdbVolume_std_string.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_shared_ptr_MR_IFastWindingNumber MR_std_shared_ptr_MR_IFastWindingNumber; // Defined in `#include <MRCMisc/std_shared_ptr_MR_IFastWindingNumber.h>`.


// Parameters structure for meshToVolume function
/// Generated from class `MR::MeshToVolumeParams`.
typedef struct MR_MeshToVolumeParams MR_MeshToVolumeParams;

// Conversion type
typedef int32_t MR_MeshToVolumeParams_Type;
enum // MR_MeshToVolumeParams_Type
{
    // only closed meshes can be converted with signed type
    MR_MeshToVolumeParams_Type_Signed = 0,
    // this type leads to shell like iso-surfaces
    MR_MeshToVolumeParams_Type_Unsigned = 1,
};

/// parameters of OpenVDB Grid to Mesh conversion using Dual Marching Cubes algorithm
/// Generated from class `MR::GridToMeshSettings`.
typedef struct MR_GridToMeshSettings MR_GridToMeshSettings;

/// Generated from class `MR::MakeSignedByWindingNumberSettings`.
typedef struct MR_MakeSignedByWindingNumberSettings MR_MakeSignedByWindingNumberSettings;

/// Generated from class `MR::DoubleOffsetSettings`.
typedef struct MR_DoubleOffsetSettings MR_DoubleOffsetSettings;

// closed surface is required
// surfaceOffset - number voxels around surface to calculate distance in (should be positive)
// returns null if was canceled by progress callback
/// Generated from function `MR::meshToLevelSet`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `xf` can not be null. It is a single object.
/// Parameter `voxelSize` can not be null. It is a single object.
/// Parameter `surfaceOffset` has a default argument: `3`, pass a null pointer to use it.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FloatGrid_Destroy()` to free it when you're done using it.
MRC_API MR_FloatGrid *MR_meshToLevelSet(const MR_MeshPart *mp, const MR_AffineXf3f *xf, const MR_Vector3f *voxelSize, const float *surfaceOffset, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

// does not require closed surface, resulting grid cannot be used for boolean operations,
// surfaceOffset - the number of voxels around surface to calculate distance in (should be positive)
// returns null if was canceled by progress callback
/// Generated from function `MR::meshToDistanceField`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `xf` can not be null. It is a single object.
/// Parameter `voxelSize` can not be null. It is a single object.
/// Parameter `surfaceOffset` has a default argument: `3`, pass a null pointer to use it.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FloatGrid_Destroy()` to free it when you're done using it.
MRC_API MR_FloatGrid *MR_meshToDistanceField(const MR_MeshPart *mp, const MR_AffineXf3f *xf, const MR_Vector3f *voxelSize, const float *surfaceOffset, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Returns a pointer to a member variable of class `MR::MeshToVolumeParams` named `type`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshToVolumeParams_Type *MR_MeshToVolumeParams_Get_type(const MR_MeshToVolumeParams *_this);

/// Modifies a member variable of class `MR::MeshToVolumeParams` named `type`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshToVolumeParams_Set_type(MR_MeshToVolumeParams *_this, MR_MeshToVolumeParams_Type value);

/// Returns a mutable pointer to a member variable of class `MR::MeshToVolumeParams` named `type`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshToVolumeParams_Type *MR_MeshToVolumeParams_GetMutable_type(MR_MeshToVolumeParams *_this);

// the number of voxels around surface to calculate distance in (should be positive)
/// Returns a pointer to a member variable of class `MR::MeshToVolumeParams` named `surfaceOffset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MeshToVolumeParams_Get_surfaceOffset(const MR_MeshToVolumeParams *_this);

// the number of voxels around surface to calculate distance in (should be positive)
/// Modifies a member variable of class `MR::MeshToVolumeParams` named `surfaceOffset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshToVolumeParams_Set_surfaceOffset(MR_MeshToVolumeParams *_this, float value);

// the number of voxels around surface to calculate distance in (should be positive)
/// Returns a mutable pointer to a member variable of class `MR::MeshToVolumeParams` named `surfaceOffset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MeshToVolumeParams_GetMutable_surfaceOffset(MR_MeshToVolumeParams *_this);

/// Returns a pointer to a member variable of class `MR::MeshToVolumeParams` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_MeshToVolumeParams_Get_voxelSize(const MR_MeshToVolumeParams *_this);

/// Modifies a member variable of class `MR::MeshToVolumeParams` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshToVolumeParams_Set_voxelSize(MR_MeshToVolumeParams *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::MeshToVolumeParams` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_MeshToVolumeParams_GetMutable_voxelSize(MR_MeshToVolumeParams *_this);

// mesh initial transform
/// Returns a pointer to a member variable of class `MR::MeshToVolumeParams` named `worldXf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *MR_MeshToVolumeParams_Get_worldXf(const MR_MeshToVolumeParams *_this);

// mesh initial transform
/// Modifies a member variable of class `MR::MeshToVolumeParams` named `worldXf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshToVolumeParams_Set_worldXf(MR_MeshToVolumeParams *_this, MR_AffineXf3f value);

// mesh initial transform
/// Returns a mutable pointer to a member variable of class `MR::MeshToVolumeParams` named `worldXf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AffineXf3f *MR_MeshToVolumeParams_GetMutable_worldXf(MR_MeshToVolumeParams *_this);

// optional output: xf to original mesh (respecting worldXf)
/// Returns a pointer to a member variable of class `MR::MeshToVolumeParams` named `outXf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AffineXf3f *const *MR_MeshToVolumeParams_Get_outXf(const MR_MeshToVolumeParams *_this);

// optional output: xf to original mesh (respecting worldXf)
/// Modifies a member variable of class `MR::MeshToVolumeParams` named `outXf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshToVolumeParams_Set_outXf(MR_MeshToVolumeParams *_this, MR_AffineXf3f *value);

// optional output: xf to original mesh (respecting worldXf)
/// Returns a mutable pointer to a member variable of class `MR::MeshToVolumeParams` named `outXf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AffineXf3f **MR_MeshToVolumeParams_GetMutable_outXf(MR_MeshToVolumeParams *_this);

/// Returns a pointer to a member variable of class `MR::MeshToVolumeParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_MeshToVolumeParams_Get_cb(const MR_MeshToVolumeParams *_this);

/// Modifies a member variable of class `MR::MeshToVolumeParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshToVolumeParams_Set_cb(MR_MeshToVolumeParams *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshToVolumeParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_MeshToVolumeParams_GetMutable_cb(MR_MeshToVolumeParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshToVolumeParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshToVolumeParams *MR_MeshToVolumeParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshToVolumeParams_DestroyArray()`.
/// Use `MR_MeshToVolumeParams_OffsetMutablePtr()` and `MR_MeshToVolumeParams_OffsetPtr()` to access the array elements.
MRC_API MR_MeshToVolumeParams *MR_MeshToVolumeParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshToVolumeParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshToVolumeParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshToVolumeParams *MR_MeshToVolumeParams_ConstructFrom(MR_MeshToVolumeParams_Type type, float surfaceOffset, MR_Vector3f voxelSize, MR_AffineXf3f worldXf, MR_AffineXf3f *outXf, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshToVolumeParams *MR_MeshToVolumeParams_OffsetPtr(const MR_MeshToVolumeParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshToVolumeParams *MR_MeshToVolumeParams_OffsetMutablePtr(MR_MeshToVolumeParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshToVolumeParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshToVolumeParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshToVolumeParams *MR_MeshToVolumeParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MeshToVolumeParams *_other);

/// Destroys a heap-allocated instance of `MR_MeshToVolumeParams`. Does nothing if the pointer is null.
MRC_API void MR_MeshToVolumeParams_Destroy(const MR_MeshToVolumeParams *_this);

/// Destroys a heap-allocated array of `MR_MeshToVolumeParams`. Does nothing if the pointer is null.
MRC_API void MR_MeshToVolumeParams_DestroyArray(const MR_MeshToVolumeParams *_this);

/// Generated from a method of class `MR::MeshToVolumeParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshToVolumeParams *MR_MeshToVolumeParams_AssignFromAnother(MR_MeshToVolumeParams *_this, MR_PassBy _other_pass_by, MR_MeshToVolumeParams *_other);

// eval min max value from FloatGrid
/// Generated from function `MR::evalGridMinMax`.
/// Parameter `grid` can not be null. It is a single object.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `max` can not be null. It is a single object.
MRC_API void MR_evalGridMinMax(const MR_FloatGrid *grid, float *min, float *max);

/// converts mesh (or its part) into a volume filled with signed or unsigned distances to mesh using OpenVDB library;
/// for signed distances the mesh must be closed;
/// *params.outXf is untouched
/// Generated from function `MR::meshToDistanceVdbVolume`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VdbVolume_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VdbVolume_std_string *MR_meshToDistanceVdbVolume(const MR_MeshPart *mp, const MR_MeshToVolumeParams *params);

/// converts mesh (or its part) into a volume filled with signed or unsigned distances to mesh using OpenVDB library;
/// for signed distances the mesh must be closed;
/// prior to conversion, world space is shifted to ensure that the bounding box of offset mesh is in positive quarter-space,
/// and the shift is written in *params.outXf
/// Generated from function `MR::meshToVolume`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VdbVolume_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VdbVolume_std_string *MR_meshToVolume(const MR_MeshPart *mp, const MR_MeshToVolumeParams *params);

// fills VdbVolume data from FloatGrid (does not fill voxels size, cause we expect it outside)
/// Generated from function `MR::floatGridToVdbVolume`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VdbVolume_Destroy()` to free it when you're done using it.
MRC_API MR_VdbVolume *MR_floatGridToVdbVolume(MR_PassBy grid_pass_by, MR_FloatGrid *grid);

// make FloatGrid from SimpleVolume
// make copy of data
// background - the new background value for FloatGrid
// grid can be used to make iso-surface later with gridToMesh function
/// Generated from function `MR::simpleVolumeToDenseGrid`.
/// Parameter `simpleVolume` can not be null. It is a single object.
/// Parameter `background` has a default argument: `0.F`, pass a null pointer to use it.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FloatGrid_Destroy()` to free it when you're done using it.
MRC_API MR_FloatGrid *MR_simpleVolumeToDenseGrid(const MR_SimpleVolume *simpleVolume, const float *background, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

// set the simpleVolume.min as the background value
/// Generated from function `MR::simpleVolumeToVdbVolume`.
/// Parameter `simpleVolume` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VdbVolume_Destroy()` to free it when you're done using it.
MRC_API MR_VdbVolume *MR_simpleVolumeToVdbVolume(const MR_SimpleVolumeMinMax *simpleVolume, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

// make VdbVolume from FunctionVolume
// make copy of data
// set minimum value as the background value
/// Generated from function `MR::functionVolumeToVdbVolume`.
/// Parameter `functoinVolume` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VdbVolume_Destroy()` to free it when you're done using it.
MRC_API MR_VdbVolume *MR_functionVolumeToVdbVolume(const MR_FunctionVolume *functoinVolume, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

// make SimpleVolume from VdbVolume
// make copy of data
/// Generated from function `MR::vdbVolumeToSimpleVolume`.
/// Parameter `vdbVolume` can not be null. It is a single object.
/// Parameter `activeBox` is a single object.
/// Parameter `activeBox` has a default argument: `MR::Box3i()`, pass a null pointer to use it.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_SimpleVolumeMinMax_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_SimpleVolumeMinMax_std_string *MR_vdbVolumeToSimpleVolume(const MR_VdbVolume *vdbVolume, const MR_Box3i *activeBox, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Makes normalized SimpleVolume from VdbVolume
/// Normalisation consist of scaling values linearly from the source scale to the interval [0;1]
/// @note Makes copy of data
/// @param sourceScale if specified, defines the initial scale of voxels.
///     If not specified, it is estimated as min. and max. values from the voxels
/// Generated from function `MR::vdbVolumeToSimpleVolumeNorm`.
/// Parameter `vdbVolume` can not be null. It is a single object.
/// Parameter `activeBox` is a single object.
/// Parameter `activeBox` has a default argument: `MR::Box3i()`, pass a null pointer to use it.
/// Parameter `sourceScale` is optional. To keep it empty, pass a null pointer.
/// Parameter `sourceScale` defaults to empty in C++.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_SimpleVolumeMinMax_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_SimpleVolumeMinMax_std_string *MR_vdbVolumeToSimpleVolumeNorm(const MR_VdbVolume *vdbVolume, const MR_Box3i *activeBox, const MR_Box1f *sourceScale, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Makes SimpleVolumeU16 from VdbVolume
/// Values are linearly scaled from the source scale to the range corresponding to uint16_t
/// @note Makes copy of data
/// @param sourceScale if specified, defines the initial scale of voxels.
///     If not specified, it is estimated as min. and max. values from the voxels
/// Generated from function `MR::vdbVolumeToSimpleVolumeU16`.
/// Parameter `vdbVolume` can not be null. It is a single object.
/// Parameter `activeBox` is a single object.
/// Parameter `activeBox` has a default argument: `MR::Box3i()`, pass a null pointer to use it.
/// Parameter `sourceScale` is optional. To keep it empty, pass a null pointer.
/// Parameter `sourceScale` defaults to empty in C++.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_SimpleVolumeMinMaxU16_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_SimpleVolumeMinMaxU16_std_string *MR_vdbVolumeToSimpleVolumeU16(const MR_VdbVolume *vdbVolume, const MR_Box3i *activeBox, const MR_Box1f *sourceScale, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// the size of each voxel in the grid
/// Returns a pointer to a member variable of class `MR::GridToMeshSettings` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_GridToMeshSettings_Get_voxelSize(const MR_GridToMeshSettings *_this);

/// the size of each voxel in the grid
/// Modifies a member variable of class `MR::GridToMeshSettings` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GridToMeshSettings_Set_voxelSize(MR_GridToMeshSettings *_this, MR_Vector3f value);

/// the size of each voxel in the grid
/// Returns a mutable pointer to a member variable of class `MR::GridToMeshSettings` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_GridToMeshSettings_GetMutable_voxelSize(MR_GridToMeshSettings *_this);

/// layer of grid with this value would be converted in mesh; isoValue can be negative only in level set grids
/// Returns a pointer to a member variable of class `MR::GridToMeshSettings` named `isoValue`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_GridToMeshSettings_Get_isoValue(const MR_GridToMeshSettings *_this);

/// layer of grid with this value would be converted in mesh; isoValue can be negative only in level set grids
/// Modifies a member variable of class `MR::GridToMeshSettings` named `isoValue`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GridToMeshSettings_Set_isoValue(MR_GridToMeshSettings *_this, float value);

/// layer of grid with this value would be converted in mesh; isoValue can be negative only in level set grids
/// Returns a mutable pointer to a member variable of class `MR::GridToMeshSettings` named `isoValue`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_GridToMeshSettings_GetMutable_isoValue(MR_GridToMeshSettings *_this);

/// adaptivity - [0.0;1.0] ratio of combining small triangles into bigger ones (curvature can be lost on high values)
/// Returns a pointer to a member variable of class `MR::GridToMeshSettings` named `adaptivity`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_GridToMeshSettings_Get_adaptivity(const MR_GridToMeshSettings *_this);

/// adaptivity - [0.0;1.0] ratio of combining small triangles into bigger ones (curvature can be lost on high values)
/// Modifies a member variable of class `MR::GridToMeshSettings` named `adaptivity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GridToMeshSettings_Set_adaptivity(MR_GridToMeshSettings *_this, float value);

/// adaptivity - [0.0;1.0] ratio of combining small triangles into bigger ones (curvature can be lost on high values)
/// Returns a mutable pointer to a member variable of class `MR::GridToMeshSettings` named `adaptivity`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_GridToMeshSettings_GetMutable_adaptivity(MR_GridToMeshSettings *_this);

/// if the mesh exceeds this number of faces, an error returns
/// Returns a pointer to a member variable of class `MR::GridToMeshSettings` named `maxFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_GridToMeshSettings_Get_maxFaces(const MR_GridToMeshSettings *_this);

/// if the mesh exceeds this number of faces, an error returns
/// Modifies a member variable of class `MR::GridToMeshSettings` named `maxFaces`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GridToMeshSettings_Set_maxFaces(MR_GridToMeshSettings *_this, int32_t value);

/// if the mesh exceeds this number of faces, an error returns
/// Returns a mutable pointer to a member variable of class `MR::GridToMeshSettings` named `maxFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_GridToMeshSettings_GetMutable_maxFaces(MR_GridToMeshSettings *_this);

/// if the mesh exceeds this number of vertices, an error returns
/// Returns a pointer to a member variable of class `MR::GridToMeshSettings` named `maxVertices`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_GridToMeshSettings_Get_maxVertices(const MR_GridToMeshSettings *_this);

/// if the mesh exceeds this number of vertices, an error returns
/// Modifies a member variable of class `MR::GridToMeshSettings` named `maxVertices`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GridToMeshSettings_Set_maxVertices(MR_GridToMeshSettings *_this, int32_t value);

/// if the mesh exceeds this number of vertices, an error returns
/// Returns a mutable pointer to a member variable of class `MR::GridToMeshSettings` named `maxVertices`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_GridToMeshSettings_GetMutable_maxVertices(MR_GridToMeshSettings *_this);

/// Returns a pointer to a member variable of class `MR::GridToMeshSettings` named `relaxDisorientedTriangles`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_GridToMeshSettings_Get_relaxDisorientedTriangles(const MR_GridToMeshSettings *_this);

/// Modifies a member variable of class `MR::GridToMeshSettings` named `relaxDisorientedTriangles`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GridToMeshSettings_Set_relaxDisorientedTriangles(MR_GridToMeshSettings *_this, bool value);

/// Returns a mutable pointer to a member variable of class `MR::GridToMeshSettings` named `relaxDisorientedTriangles`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_GridToMeshSettings_GetMutable_relaxDisorientedTriangles(MR_GridToMeshSettings *_this);

/// to receive progress and request cancellation
/// Returns a pointer to a member variable of class `MR::GridToMeshSettings` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_GridToMeshSettings_Get_cb(const MR_GridToMeshSettings *_this);

/// to receive progress and request cancellation
/// Modifies a member variable of class `MR::GridToMeshSettings` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GridToMeshSettings_Set_cb(MR_GridToMeshSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// to receive progress and request cancellation
/// Returns a mutable pointer to a member variable of class `MR::GridToMeshSettings` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_GridToMeshSettings_GetMutable_cb(MR_GridToMeshSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GridToMeshSettings_Destroy()` to free it when you're done using it.
MRC_API MR_GridToMeshSettings *MR_GridToMeshSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_GridToMeshSettings_DestroyArray()`.
/// Use `MR_GridToMeshSettings_OffsetMutablePtr()` and `MR_GridToMeshSettings_OffsetPtr()` to access the array elements.
MRC_API MR_GridToMeshSettings *MR_GridToMeshSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::GridToMeshSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GridToMeshSettings_Destroy()` to free it when you're done using it.
MRC_API MR_GridToMeshSettings *MR_GridToMeshSettings_ConstructFrom(MR_Vector3f voxelSize, float isoValue, float adaptivity, int32_t maxFaces, int32_t maxVertices, bool relaxDisorientedTriangles, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_GridToMeshSettings *MR_GridToMeshSettings_OffsetPtr(const MR_GridToMeshSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_GridToMeshSettings *MR_GridToMeshSettings_OffsetMutablePtr(MR_GridToMeshSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::GridToMeshSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GridToMeshSettings_Destroy()` to free it when you're done using it.
MRC_API MR_GridToMeshSettings *MR_GridToMeshSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_GridToMeshSettings *_other);

/// Destroys a heap-allocated instance of `MR_GridToMeshSettings`. Does nothing if the pointer is null.
MRC_API void MR_GridToMeshSettings_Destroy(const MR_GridToMeshSettings *_this);

/// Destroys a heap-allocated array of `MR_GridToMeshSettings`. Does nothing if the pointer is null.
MRC_API void MR_GridToMeshSettings_DestroyArray(const MR_GridToMeshSettings *_this);

/// Generated from a method of class `MR::GridToMeshSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GridToMeshSettings *MR_GridToMeshSettings_AssignFromAnother(MR_GridToMeshSettings *_this, MR_PassBy _other_pass_by, MR_GridToMeshSettings *_other);

/// converts OpenVDB Grid into mesh using Dual Marching Cubes algorithm
/// Generated from function `MR::gridToMesh`.
/// Parameter `grid` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_gridToMesh_const_MR_FloatGrid_ref(const MR_FloatGrid *grid, const MR_GridToMeshSettings *settings);

/// converts OpenVDB Grid into mesh using Dual Marching Cubes algorithm;
/// deletes grid in the middle to reduce peak memory consumption
/// Generated from function `MR::gridToMesh`.
/// Parameter `grid` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `settings` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_gridToMesh_MR_FloatGrid_rvalue_ref(MR_FloatGrid *grid, const MR_GridToMeshSettings *settings);

/// defines the mapping from mesh reference from to grid reference frame
/// Returns a pointer to a member variable of class `MR::MakeSignedByWindingNumberSettings` named `meshToGridXf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *MR_MakeSignedByWindingNumberSettings_Get_meshToGridXf(const MR_MakeSignedByWindingNumberSettings *_this);

/// defines the mapping from mesh reference from to grid reference frame
/// Modifies a member variable of class `MR::MakeSignedByWindingNumberSettings` named `meshToGridXf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MakeSignedByWindingNumberSettings_Set_meshToGridXf(MR_MakeSignedByWindingNumberSettings *_this, MR_AffineXf3f value);

/// defines the mapping from mesh reference from to grid reference frame
/// Returns a mutable pointer to a member variable of class `MR::MakeSignedByWindingNumberSettings` named `meshToGridXf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AffineXf3f *MR_MakeSignedByWindingNumberSettings_GetMutable_meshToGridXf(MR_MakeSignedByWindingNumberSettings *_this);

/// defines particular implementation of IFastWindingNumber interface that will compute windings. If it is not specified, default FastWindingNumber is used
/// Returns a pointer to a member variable of class `MR::MakeSignedByWindingNumberSettings` named `fwn`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_MR_IFastWindingNumber *MR_MakeSignedByWindingNumberSettings_Get_fwn(const MR_MakeSignedByWindingNumberSettings *_this);

/// defines particular implementation of IFastWindingNumber interface that will compute windings. If it is not specified, default FastWindingNumber is used
/// Modifies a member variable of class `MR::MakeSignedByWindingNumberSettings` named `fwn`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MakeSignedByWindingNumberSettings_Set_fwn(MR_MakeSignedByWindingNumberSettings *_this, MR_PassBy value_pass_by, MR_std_shared_ptr_MR_IFastWindingNumber *value);

/// defines particular implementation of IFastWindingNumber interface that will compute windings. If it is not specified, default FastWindingNumber is used
/// Returns a mutable pointer to a member variable of class `MR::MakeSignedByWindingNumberSettings` named `fwn`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_shared_ptr_MR_IFastWindingNumber *MR_MakeSignedByWindingNumberSettings_GetMutable_fwn(MR_MakeSignedByWindingNumberSettings *_this);

/// positive distance if winding number below or equal this threshold;
/// ideal threshold: 0.5 for closed meshes; 0.0 for planar meshes
/// Returns a pointer to a member variable of class `MR::MakeSignedByWindingNumberSettings` named `windingNumberThreshold`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MakeSignedByWindingNumberSettings_Get_windingNumberThreshold(const MR_MakeSignedByWindingNumberSettings *_this);

/// positive distance if winding number below or equal this threshold;
/// ideal threshold: 0.5 for closed meshes; 0.0 for planar meshes
/// Modifies a member variable of class `MR::MakeSignedByWindingNumberSettings` named `windingNumberThreshold`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MakeSignedByWindingNumberSettings_Set_windingNumberThreshold(MR_MakeSignedByWindingNumberSettings *_this, float value);

/// positive distance if winding number below or equal this threshold;
/// ideal threshold: 0.5 for closed meshes; 0.0 for planar meshes
/// Returns a mutable pointer to a member variable of class `MR::MakeSignedByWindingNumberSettings` named `windingNumberThreshold`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MakeSignedByWindingNumberSettings_GetMutable_windingNumberThreshold(MR_MakeSignedByWindingNumberSettings *_this);

/// determines the precision of fast approximation: the more the better, minimum value is 1
/// Returns a pointer to a member variable of class `MR::MakeSignedByWindingNumberSettings` named `windingNumberBeta`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MakeSignedByWindingNumberSettings_Get_windingNumberBeta(const MR_MakeSignedByWindingNumberSettings *_this);

/// determines the precision of fast approximation: the more the better, minimum value is 1
/// Modifies a member variable of class `MR::MakeSignedByWindingNumberSettings` named `windingNumberBeta`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MakeSignedByWindingNumberSettings_Set_windingNumberBeta(MR_MakeSignedByWindingNumberSettings *_this, float value);

/// determines the precision of fast approximation: the more the better, minimum value is 1
/// Returns a mutable pointer to a member variable of class `MR::MakeSignedByWindingNumberSettings` named `windingNumberBeta`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MakeSignedByWindingNumberSettings_GetMutable_windingNumberBeta(MR_MakeSignedByWindingNumberSettings *_this);

/// to report algorithm's progress and to cancel it
/// Returns a pointer to a member variable of class `MR::MakeSignedByWindingNumberSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_MakeSignedByWindingNumberSettings_Get_progress(const MR_MakeSignedByWindingNumberSettings *_this);

/// to report algorithm's progress and to cancel it
/// Modifies a member variable of class `MR::MakeSignedByWindingNumberSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MakeSignedByWindingNumberSettings_Set_progress(MR_MakeSignedByWindingNumberSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// to report algorithm's progress and to cancel it
/// Returns a mutable pointer to a member variable of class `MR::MakeSignedByWindingNumberSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_MakeSignedByWindingNumberSettings_GetMutable_progress(MR_MakeSignedByWindingNumberSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MakeSignedByWindingNumberSettings_Destroy()` to free it when you're done using it.
MRC_API MR_MakeSignedByWindingNumberSettings *MR_MakeSignedByWindingNumberSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MakeSignedByWindingNumberSettings_DestroyArray()`.
/// Use `MR_MakeSignedByWindingNumberSettings_OffsetMutablePtr()` and `MR_MakeSignedByWindingNumberSettings_OffsetPtr()` to access the array elements.
MRC_API MR_MakeSignedByWindingNumberSettings *MR_MakeSignedByWindingNumberSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MakeSignedByWindingNumberSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MakeSignedByWindingNumberSettings_Destroy()` to free it when you're done using it.
MRC_API MR_MakeSignedByWindingNumberSettings *MR_MakeSignedByWindingNumberSettings_ConstructFrom(MR_AffineXf3f meshToGridXf, MR_PassBy fwn_pass_by, MR_std_shared_ptr_MR_IFastWindingNumber *fwn, float windingNumberThreshold, float windingNumberBeta, MR_PassBy progress_pass_by, MR_std_function_bool_from_float *progress);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MakeSignedByWindingNumberSettings *MR_MakeSignedByWindingNumberSettings_OffsetPtr(const MR_MakeSignedByWindingNumberSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MakeSignedByWindingNumberSettings *MR_MakeSignedByWindingNumberSettings_OffsetMutablePtr(MR_MakeSignedByWindingNumberSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MakeSignedByWindingNumberSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MakeSignedByWindingNumberSettings_Destroy()` to free it when you're done using it.
MRC_API MR_MakeSignedByWindingNumberSettings *MR_MakeSignedByWindingNumberSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MakeSignedByWindingNumberSettings *_other);

/// Destroys a heap-allocated instance of `MR_MakeSignedByWindingNumberSettings`. Does nothing if the pointer is null.
MRC_API void MR_MakeSignedByWindingNumberSettings_Destroy(const MR_MakeSignedByWindingNumberSettings *_this);

/// Destroys a heap-allocated array of `MR_MakeSignedByWindingNumberSettings`. Does nothing if the pointer is null.
MRC_API void MR_MakeSignedByWindingNumberSettings_DestroyArray(const MR_MakeSignedByWindingNumberSettings *_this);

/// Generated from a method of class `MR::MakeSignedByWindingNumberSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MakeSignedByWindingNumberSettings *MR_MakeSignedByWindingNumberSettings_AssignFromAnother(MR_MakeSignedByWindingNumberSettings *_this, MR_PassBy _other_pass_by, MR_MakeSignedByWindingNumberSettings *_other);

/// set signs for unsigned distance field grid using generalized winding number computed at voxel grid point from refMesh
/// Generated from function `MR::makeSignedByWindingNumber`.
/// Parameter `grid` can not be null. It is a single object.
/// Parameter `voxelSize` can not be null. It is a single object.
/// Parameter `refMesh` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_makeSignedByWindingNumber(MR_FloatGrid *grid, const MR_Vector3f *voxelSize, const MR_Mesh *refMesh, const MR_MakeSignedByWindingNumberSettings *settings);

/// the size of voxel in intermediate voxel grid representation
/// Returns a pointer to a member variable of class `MR::DoubleOffsetSettings` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DoubleOffsetSettings_Get_voxelSize(const MR_DoubleOffsetSettings *_this);

/// the size of voxel in intermediate voxel grid representation
/// Modifies a member variable of class `MR::DoubleOffsetSettings` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DoubleOffsetSettings_Set_voxelSize(MR_DoubleOffsetSettings *_this, float value);

/// the size of voxel in intermediate voxel grid representation
/// Returns a mutable pointer to a member variable of class `MR::DoubleOffsetSettings` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DoubleOffsetSettings_GetMutable_voxelSize(MR_DoubleOffsetSettings *_this);

/// the amount of first offset
/// Returns a pointer to a member variable of class `MR::DoubleOffsetSettings` named `offsetA`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DoubleOffsetSettings_Get_offsetA(const MR_DoubleOffsetSettings *_this);

/// the amount of first offset
/// Modifies a member variable of class `MR::DoubleOffsetSettings` named `offsetA`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DoubleOffsetSettings_Set_offsetA(MR_DoubleOffsetSettings *_this, float value);

/// the amount of first offset
/// Returns a mutable pointer to a member variable of class `MR::DoubleOffsetSettings` named `offsetA`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DoubleOffsetSettings_GetMutable_offsetA(MR_DoubleOffsetSettings *_this);

/// the amount of second offset
/// Returns a pointer to a member variable of class `MR::DoubleOffsetSettings` named `offsetB`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DoubleOffsetSettings_Get_offsetB(const MR_DoubleOffsetSettings *_this);

/// the amount of second offset
/// Modifies a member variable of class `MR::DoubleOffsetSettings` named `offsetB`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DoubleOffsetSettings_Set_offsetB(MR_DoubleOffsetSettings *_this, float value);

/// the amount of second offset
/// Returns a mutable pointer to a member variable of class `MR::DoubleOffsetSettings` named `offsetB`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DoubleOffsetSettings_GetMutable_offsetB(MR_DoubleOffsetSettings *_this);

/// in [0; 1] - ratio of combining small triangles into bigger ones (curvature can be lost on high values)
/// Returns a pointer to a member variable of class `MR::DoubleOffsetSettings` named `adaptivity`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DoubleOffsetSettings_Get_adaptivity(const MR_DoubleOffsetSettings *_this);

/// in [0; 1] - ratio of combining small triangles into bigger ones (curvature can be lost on high values)
/// Modifies a member variable of class `MR::DoubleOffsetSettings` named `adaptivity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DoubleOffsetSettings_Set_adaptivity(MR_DoubleOffsetSettings *_this, float value);

/// in [0; 1] - ratio of combining small triangles into bigger ones (curvature can be lost on high values)
/// Returns a mutable pointer to a member variable of class `MR::DoubleOffsetSettings` named `adaptivity`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DoubleOffsetSettings_GetMutable_adaptivity(MR_DoubleOffsetSettings *_this);

/// defines particular implementation of IFastWindingNumber interface that will compute windings. If it is not specified, default FastWindingNumber is used
/// Returns a pointer to a member variable of class `MR::DoubleOffsetSettings` named `fwn`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_MR_IFastWindingNumber *MR_DoubleOffsetSettings_Get_fwn(const MR_DoubleOffsetSettings *_this);

/// defines particular implementation of IFastWindingNumber interface that will compute windings. If it is not specified, default FastWindingNumber is used
/// Modifies a member variable of class `MR::DoubleOffsetSettings` named `fwn`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DoubleOffsetSettings_Set_fwn(MR_DoubleOffsetSettings *_this, MR_PassBy value_pass_by, MR_std_shared_ptr_MR_IFastWindingNumber *value);

/// defines particular implementation of IFastWindingNumber interface that will compute windings. If it is not specified, default FastWindingNumber is used
/// Returns a mutable pointer to a member variable of class `MR::DoubleOffsetSettings` named `fwn`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_shared_ptr_MR_IFastWindingNumber *MR_DoubleOffsetSettings_GetMutable_fwn(MR_DoubleOffsetSettings *_this);

/// positive distance if winding number below or equal this threshold;
/// ideal threshold: 0.5 for closed meshes; 0.0 for planar meshes
/// Returns a pointer to a member variable of class `MR::DoubleOffsetSettings` named `windingNumberThreshold`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DoubleOffsetSettings_Get_windingNumberThreshold(const MR_DoubleOffsetSettings *_this);

/// positive distance if winding number below or equal this threshold;
/// ideal threshold: 0.5 for closed meshes; 0.0 for planar meshes
/// Modifies a member variable of class `MR::DoubleOffsetSettings` named `windingNumberThreshold`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DoubleOffsetSettings_Set_windingNumberThreshold(MR_DoubleOffsetSettings *_this, float value);

/// positive distance if winding number below or equal this threshold;
/// ideal threshold: 0.5 for closed meshes; 0.0 for planar meshes
/// Returns a mutable pointer to a member variable of class `MR::DoubleOffsetSettings` named `windingNumberThreshold`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DoubleOffsetSettings_GetMutable_windingNumberThreshold(MR_DoubleOffsetSettings *_this);

/// determines the precision of fast approximation: the more the better, minimum value is 1
/// Returns a pointer to a member variable of class `MR::DoubleOffsetSettings` named `windingNumberBeta`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DoubleOffsetSettings_Get_windingNumberBeta(const MR_DoubleOffsetSettings *_this);

/// determines the precision of fast approximation: the more the better, minimum value is 1
/// Modifies a member variable of class `MR::DoubleOffsetSettings` named `windingNumberBeta`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DoubleOffsetSettings_Set_windingNumberBeta(MR_DoubleOffsetSettings *_this, float value);

/// determines the precision of fast approximation: the more the better, minimum value is 1
/// Returns a mutable pointer to a member variable of class `MR::DoubleOffsetSettings` named `windingNumberBeta`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DoubleOffsetSettings_GetMutable_windingNumberBeta(MR_DoubleOffsetSettings *_this);

/// to report algorithm's progress and to cancel it
/// Returns a pointer to a member variable of class `MR::DoubleOffsetSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_DoubleOffsetSettings_Get_progress(const MR_DoubleOffsetSettings *_this);

/// to report algorithm's progress and to cancel it
/// Modifies a member variable of class `MR::DoubleOffsetSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DoubleOffsetSettings_Set_progress(MR_DoubleOffsetSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// to report algorithm's progress and to cancel it
/// Returns a mutable pointer to a member variable of class `MR::DoubleOffsetSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_DoubleOffsetSettings_GetMutable_progress(MR_DoubleOffsetSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DoubleOffsetSettings_Destroy()` to free it when you're done using it.
MRC_API MR_DoubleOffsetSettings *MR_DoubleOffsetSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_DoubleOffsetSettings_DestroyArray()`.
/// Use `MR_DoubleOffsetSettings_OffsetMutablePtr()` and `MR_DoubleOffsetSettings_OffsetPtr()` to access the array elements.
MRC_API MR_DoubleOffsetSettings *MR_DoubleOffsetSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::DoubleOffsetSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DoubleOffsetSettings_Destroy()` to free it when you're done using it.
MRC_API MR_DoubleOffsetSettings *MR_DoubleOffsetSettings_ConstructFrom(float voxelSize, float offsetA, float offsetB, float adaptivity, MR_PassBy fwn_pass_by, MR_std_shared_ptr_MR_IFastWindingNumber *fwn, float windingNumberThreshold, float windingNumberBeta, MR_PassBy progress_pass_by, MR_std_function_bool_from_float *progress);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_DoubleOffsetSettings *MR_DoubleOffsetSettings_OffsetPtr(const MR_DoubleOffsetSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_DoubleOffsetSettings *MR_DoubleOffsetSettings_OffsetMutablePtr(MR_DoubleOffsetSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::DoubleOffsetSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DoubleOffsetSettings_Destroy()` to free it when you're done using it.
MRC_API MR_DoubleOffsetSettings *MR_DoubleOffsetSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_DoubleOffsetSettings *_other);

/// Destroys a heap-allocated instance of `MR_DoubleOffsetSettings`. Does nothing if the pointer is null.
MRC_API void MR_DoubleOffsetSettings_Destroy(const MR_DoubleOffsetSettings *_this);

/// Destroys a heap-allocated array of `MR_DoubleOffsetSettings`. Does nothing if the pointer is null.
MRC_API void MR_DoubleOffsetSettings_DestroyArray(const MR_DoubleOffsetSettings *_this);

/// Generated from a method of class `MR::DoubleOffsetSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DoubleOffsetSettings *MR_DoubleOffsetSettings_AssignFromAnother(MR_DoubleOffsetSettings *_this, MR_PassBy _other_pass_by, MR_DoubleOffsetSettings *_other);

/// performs convention from mesh to voxel grid and back with offsetA, and than same with offsetB;
/// if input mesh is not closed then the sign of distance field will be obtained using generalized winding number computation
/// Generated from function `MR::doubleOffsetVdb`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_doubleOffsetVdb(const MR_MeshPart *mp, const MR_DoubleOffsetSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
