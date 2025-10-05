// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRAffineXf.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_DistanceToMeshOptions MR_DistanceToMeshOptions; // Defined in `#include <MRCMesh/MRDistanceToMeshOptions.h>`.
typedef struct MR_DistanceVolumeParams MR_DistanceVolumeParams; // Defined in `#include <MRCVoxels/MRDistanceVolumeParams.h>`.
typedef struct MR_Polyline3 MR_Polyline3; // Defined in `#include <MRCMesh/MRPolyline.h>`.
typedef struct MR_expected_MR_FloatGrid_std_string MR_expected_MR_FloatGrid_std_string; // Defined in `#include <MRCMisc/expected_MR_FloatGrid_std_string.h>`.
typedef struct MR_expected_MR_FunctionVolume_std_string MR_expected_MR_FunctionVolume_std_string; // Defined in `#include <MRCMisc/expected_MR_FunctionVolume_std_string.h>`.
typedef struct MR_expected_MR_SimpleVolume_std_string MR_expected_MR_SimpleVolume_std_string; // Defined in `#include <MRCMisc/expected_MR_SimpleVolume_std_string.h>`.
typedef struct MR_expected_MR_VdbVolume_std_string MR_expected_MR_VdbVolume_std_string; // Defined in `#include <MRCMisc/expected_MR_VdbVolume_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


/// Generated from class `MR::PolylineToDistanceVolumeParams`.
typedef struct MR_PolylineToDistanceVolumeParams MR_PolylineToDistanceVolumeParams;

/// Settings to conversion polyline to volume
/// Generated from class `MR::PolylineToVolumeParams`.
typedef struct MR_PolylineToVolumeParams MR_PolylineToVolumeParams;

/// Returns a pointer to a member variable of class `MR::PolylineToDistanceVolumeParams` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_PolylineToDistanceVolumeParams_Get_voxelSize(const MR_PolylineToDistanceVolumeParams *_this);

/// Modifies a member variable of class `MR::PolylineToDistanceVolumeParams` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineToDistanceVolumeParams_Set_voxelSize(MR_PolylineToDistanceVolumeParams *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::PolylineToDistanceVolumeParams` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_PolylineToDistanceVolumeParams_GetMutable_voxelSize(MR_PolylineToDistanceVolumeParams *_this);

/// offsetCount - the number of voxels around polyline to calculate distance in (should be positive)
/// Returns a pointer to a member variable of class `MR::PolylineToDistanceVolumeParams` named `offsetCount`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_PolylineToDistanceVolumeParams_Get_offsetCount(const MR_PolylineToDistanceVolumeParams *_this);

/// offsetCount - the number of voxels around polyline to calculate distance in (should be positive)
/// Modifies a member variable of class `MR::PolylineToDistanceVolumeParams` named `offsetCount`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineToDistanceVolumeParams_Set_offsetCount(MR_PolylineToDistanceVolumeParams *_this, float value);

/// offsetCount - the number of voxels around polyline to calculate distance in (should be positive)
/// Returns a mutable pointer to a member variable of class `MR::PolylineToDistanceVolumeParams` named `offsetCount`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_PolylineToDistanceVolumeParams_GetMutable_offsetCount(MR_PolylineToDistanceVolumeParams *_this);

// line initial transform
/// Returns a pointer to a member variable of class `MR::PolylineToDistanceVolumeParams` named `worldXf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *MR_PolylineToDistanceVolumeParams_Get_worldXf(const MR_PolylineToDistanceVolumeParams *_this);

// line initial transform
/// Modifies a member variable of class `MR::PolylineToDistanceVolumeParams` named `worldXf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineToDistanceVolumeParams_Set_worldXf(MR_PolylineToDistanceVolumeParams *_this, MR_AffineXf3f value);

// line initial transform
/// Returns a mutable pointer to a member variable of class `MR::PolylineToDistanceVolumeParams` named `worldXf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AffineXf3f *MR_PolylineToDistanceVolumeParams_GetMutable_worldXf(MR_PolylineToDistanceVolumeParams *_this);

// optional output: xf to original mesh (respecting worldXf)
/// Returns a pointer to a member variable of class `MR::PolylineToDistanceVolumeParams` named `outXf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AffineXf3f *const *MR_PolylineToDistanceVolumeParams_Get_outXf(const MR_PolylineToDistanceVolumeParams *_this);

// optional output: xf to original mesh (respecting worldXf)
/// Modifies a member variable of class `MR::PolylineToDistanceVolumeParams` named `outXf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineToDistanceVolumeParams_Set_outXf(MR_PolylineToDistanceVolumeParams *_this, MR_AffineXf3f *value);

// optional output: xf to original mesh (respecting worldXf)
/// Returns a mutable pointer to a member variable of class `MR::PolylineToDistanceVolumeParams` named `outXf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AffineXf3f **MR_PolylineToDistanceVolumeParams_GetMutable_outXf(MR_PolylineToDistanceVolumeParams *_this);

/// Returns a pointer to a member variable of class `MR::PolylineToDistanceVolumeParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_PolylineToDistanceVolumeParams_Get_cb(const MR_PolylineToDistanceVolumeParams *_this);

/// Modifies a member variable of class `MR::PolylineToDistanceVolumeParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineToDistanceVolumeParams_Set_cb(MR_PolylineToDistanceVolumeParams *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// Returns a mutable pointer to a member variable of class `MR::PolylineToDistanceVolumeParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_PolylineToDistanceVolumeParams_GetMutable_cb(MR_PolylineToDistanceVolumeParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineToDistanceVolumeParams_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineToDistanceVolumeParams *MR_PolylineToDistanceVolumeParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PolylineToDistanceVolumeParams_DestroyArray()`.
/// Use `MR_PolylineToDistanceVolumeParams_OffsetMutablePtr()` and `MR_PolylineToDistanceVolumeParams_OffsetPtr()` to access the array elements.
MRC_API MR_PolylineToDistanceVolumeParams *MR_PolylineToDistanceVolumeParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::PolylineToDistanceVolumeParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineToDistanceVolumeParams_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineToDistanceVolumeParams *MR_PolylineToDistanceVolumeParams_ConstructFrom(MR_Vector3f voxelSize, float offsetCount, MR_AffineXf3f worldXf, MR_AffineXf3f *outXf, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PolylineToDistanceVolumeParams *MR_PolylineToDistanceVolumeParams_OffsetPtr(const MR_PolylineToDistanceVolumeParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PolylineToDistanceVolumeParams *MR_PolylineToDistanceVolumeParams_OffsetMutablePtr(MR_PolylineToDistanceVolumeParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PolylineToDistanceVolumeParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineToDistanceVolumeParams_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineToDistanceVolumeParams *MR_PolylineToDistanceVolumeParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PolylineToDistanceVolumeParams *_other);

/// Destroys a heap-allocated instance of `MR_PolylineToDistanceVolumeParams`. Does nothing if the pointer is null.
MRC_API void MR_PolylineToDistanceVolumeParams_Destroy(const MR_PolylineToDistanceVolumeParams *_this);

/// Destroys a heap-allocated array of `MR_PolylineToDistanceVolumeParams`. Does nothing if the pointer is null.
MRC_API void MR_PolylineToDistanceVolumeParams_DestroyArray(const MR_PolylineToDistanceVolumeParams *_this);

/// Generated from a method of class `MR::PolylineToDistanceVolumeParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PolylineToDistanceVolumeParams *MR_PolylineToDistanceVolumeParams_AssignFromAnother(MR_PolylineToDistanceVolumeParams *_this, MR_PassBy _other_pass_by, MR_PolylineToDistanceVolumeParams *_other);

/// convert polyline to voxels distance field
/// Generated from function `MR::polylineToDistanceField`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_FloatGrid_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_FloatGrid_std_string *MR_polylineToDistanceField(const MR_Polyline3 *polyline, const MR_PolylineToDistanceVolumeParams *params);

/// convert polyline to VDB volume
/// Generated from function `MR::polylineToVdbVolume`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VdbVolume_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VdbVolume_std_string *MR_polylineToVdbVolume(const MR_Polyline3 *polyline, const MR_PolylineToDistanceVolumeParams *params);

/// Returns a pointer to a member variable of class `MR::PolylineToVolumeParams` named `vol`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_DistanceVolumeParams *MR_PolylineToVolumeParams_Get_vol(const MR_PolylineToVolumeParams *_this);

/// Modifies a member variable of class `MR::PolylineToVolumeParams` named `vol`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineToVolumeParams_Set_vol(MR_PolylineToVolumeParams *_this, MR_PassBy value_pass_by, MR_DistanceVolumeParams *value);

/// Returns a mutable pointer to a member variable of class `MR::PolylineToVolumeParams` named `vol`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DistanceVolumeParams *MR_PolylineToVolumeParams_GetMutable_vol(MR_PolylineToVolumeParams *_this);

/// Returns a pointer to a member variable of class `MR::PolylineToVolumeParams` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_DistanceToMeshOptions *MR_PolylineToVolumeParams_Get_dist(const MR_PolylineToVolumeParams *_this);

/// Modifies a member variable of class `MR::PolylineToVolumeParams` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_PolylineToVolumeParams_Set_dist(MR_PolylineToVolumeParams *_this, const MR_DistanceToMeshOptions *value);

/// Returns a mutable pointer to a member variable of class `MR::PolylineToVolumeParams` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DistanceToMeshOptions *MR_PolylineToVolumeParams_GetMutable_dist(MR_PolylineToVolumeParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineToVolumeParams_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineToVolumeParams *MR_PolylineToVolumeParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PolylineToVolumeParams_DestroyArray()`.
/// Use `MR_PolylineToVolumeParams_OffsetMutablePtr()` and `MR_PolylineToVolumeParams_OffsetPtr()` to access the array elements.
MRC_API MR_PolylineToVolumeParams *MR_PolylineToVolumeParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::PolylineToVolumeParams` elementwise.
/// Parameter `dist` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineToVolumeParams_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineToVolumeParams *MR_PolylineToVolumeParams_ConstructFrom(MR_PassBy vol_pass_by, MR_DistanceVolumeParams *vol, const MR_DistanceToMeshOptions *dist);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PolylineToVolumeParams *MR_PolylineToVolumeParams_OffsetPtr(const MR_PolylineToVolumeParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PolylineToVolumeParams *MR_PolylineToVolumeParams_OffsetMutablePtr(MR_PolylineToVolumeParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PolylineToVolumeParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineToVolumeParams_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineToVolumeParams *MR_PolylineToVolumeParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PolylineToVolumeParams *_other);

/// Destroys a heap-allocated instance of `MR_PolylineToVolumeParams`. Does nothing if the pointer is null.
MRC_API void MR_PolylineToVolumeParams_Destroy(const MR_PolylineToVolumeParams *_this);

/// Destroys a heap-allocated array of `MR_PolylineToVolumeParams`. Does nothing if the pointer is null.
MRC_API void MR_PolylineToVolumeParams_DestroyArray(const MR_PolylineToVolumeParams *_this);

/// Generated from a method of class `MR::PolylineToVolumeParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PolylineToVolumeParams *MR_PolylineToVolumeParams_AssignFromAnother(MR_PolylineToVolumeParams *_this, MR_PassBy _other_pass_by, MR_PolylineToVolumeParams *_other);

/// convert polyline to simple volume
/// Generated from function `MR::polylineToSimpleVolume`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_SimpleVolume_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_SimpleVolume_std_string *MR_polylineToSimpleVolume(const MR_Polyline3 *polyline, const MR_PolylineToVolumeParams *params);

/// convert polyline to function volume
/// Generated from function `MR::polylineToFunctionVolume`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_FunctionVolume_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_FunctionVolume_std_string *MR_polylineToFunctionVolume(const MR_Polyline3 *polyline, const MR_PolylineToVolumeParams *params);

#ifdef __cplusplus
} // extern "C"
#endif
