// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRAffineXf.h>
#include <MRCMesh/MRId.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FunctionVolume MR_FunctionVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_PolynomialWrapper_float MR_PolynomialWrapper_float; // Defined in `#include <MRCMesh/MRBestFitPolynomial.h>`.
typedef struct MR_SimpleVolumeMinMax MR_SimpleVolumeMinMax; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_VdbVolume MR_VdbVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_expected_MR_VertBitSet_std_string MR_expected_MR_VertBitSet_std_string; // Defined in `#include <MRCMisc/expected_MR_VertBitSet_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.
typedef struct MR_std_vector_float MR_std_vector_float; // Defined in `#include <MRCMisc/std_vector_float.h>`.


/// Generated from class `MR::MoveMeshToVoxelMaxDerivSettings`.
typedef struct MR_MoveMeshToVoxelMaxDerivSettings MR_MoveMeshToVoxelMaxDerivSettings;

/// Helper class to organize mesh and voxels volume access and build point sequences
/// \note this class is not thread-safe but accessing same volume from different instances is ok
/// Generated from class `MR::MeshOnVoxelsT<MR::Mesh, MR::VdbVolume>`.
typedef struct MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume;

/// Helper class to organize mesh and voxels volume access and build point sequences
/// \note this class is not thread-safe but accessing same volume from different instances is ok
/// Generated from class `MR::MeshOnVoxelsT<const MR::Mesh, MR::VdbVolume>`.
typedef struct MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume;

/// Helper class to organize mesh and voxels volume access and build point sequences
/// \note this class is not thread-safe but accessing same volume from different instances is ok
/// Generated from class `MR::MeshOnVoxelsT<MR::Mesh, MR::SimpleVolumeMinMax>`.
typedef struct MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax;

/// Helper class to organize mesh and voxels volume access and build point sequences
/// \note this class is not thread-safe but accessing same volume from different instances is ok
/// Generated from class `MR::MeshOnVoxelsT<const MR::Mesh, MR::SimpleVolumeMinMax>`.
typedef struct MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax;

/// Helper class to organize mesh and voxels volume access and build point sequences
/// \note this class is not thread-safe but accessing same volume from different instances is ok
/// Generated from class `MR::MeshOnVoxelsT<MR::Mesh, MR::FunctionVolume>`.
typedef struct MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume;

/// Helper class to organize mesh and voxels volume access and build point sequences
/// \note this class is not thread-safe but accessing same volume from different instances is ok
/// Generated from class `MR::MeshOnVoxelsT<const MR::Mesh, MR::FunctionVolume>`.
typedef struct MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume;

/// number of iterations. Each iteration moves vertex only slightly and smooths the vector field of shifts.
/// Returns a pointer to a member variable of class `MR::MoveMeshToVoxelMaxDerivSettings` named `iters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_MoveMeshToVoxelMaxDerivSettings_Get_iters(const MR_MoveMeshToVoxelMaxDerivSettings *_this);

/// number of iterations. Each iteration moves vertex only slightly and smooths the vector field of shifts.
/// Modifies a member variable of class `MR::MoveMeshToVoxelMaxDerivSettings` named `iters`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MoveMeshToVoxelMaxDerivSettings_Set_iters(MR_MoveMeshToVoxelMaxDerivSettings *_this, int32_t value);

/// number of iterations. Each iteration moves vertex only slightly and smooths the vector field of shifts.
/// Returns a mutable pointer to a member variable of class `MR::MoveMeshToVoxelMaxDerivSettings` named `iters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_MoveMeshToVoxelMaxDerivSettings_GetMutable_iters(MR_MoveMeshToVoxelMaxDerivSettings *_this);

/// number of points to sample for each vertex. Samples are used to get the picewice-linear function of density and
/// estimate the derivative based on it
/// Returns a pointer to a member variable of class `MR::MoveMeshToVoxelMaxDerivSettings` named `samplePoints`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_MoveMeshToVoxelMaxDerivSettings_Get_samplePoints(const MR_MoveMeshToVoxelMaxDerivSettings *_this);

/// number of points to sample for each vertex. Samples are used to get the picewice-linear function of density and
/// estimate the derivative based on it
/// Modifies a member variable of class `MR::MoveMeshToVoxelMaxDerivSettings` named `samplePoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MoveMeshToVoxelMaxDerivSettings_Set_samplePoints(MR_MoveMeshToVoxelMaxDerivSettings *_this, int32_t value);

/// number of points to sample for each vertex. Samples are used to get the picewice-linear function of density and
/// estimate the derivative based on it
/// Returns a mutable pointer to a member variable of class `MR::MoveMeshToVoxelMaxDerivSettings` named `samplePoints`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_MoveMeshToVoxelMaxDerivSettings_GetMutable_samplePoints(MR_MoveMeshToVoxelMaxDerivSettings *_this);

/// degree of the polynomial used to fit sampled points. Must be in range [3; 6]
/// Returns a pointer to a member variable of class `MR::MoveMeshToVoxelMaxDerivSettings` named `degree`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_MoveMeshToVoxelMaxDerivSettings_Get_degree(const MR_MoveMeshToVoxelMaxDerivSettings *_this);

/// degree of the polynomial used to fit sampled points. Must be in range [3; 6]
/// Modifies a member variable of class `MR::MoveMeshToVoxelMaxDerivSettings` named `degree`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MoveMeshToVoxelMaxDerivSettings_Set_degree(MR_MoveMeshToVoxelMaxDerivSettings *_this, int32_t value);

/// degree of the polynomial used to fit sampled points. Must be in range [3; 6]
/// Returns a mutable pointer to a member variable of class `MR::MoveMeshToVoxelMaxDerivSettings` named `degree`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_MoveMeshToVoxelMaxDerivSettings_GetMutable_degree(MR_MoveMeshToVoxelMaxDerivSettings *_this);

/// for each iteration, if target position of the vertex is greater than this threshold, it is disregarded.
/// For small degrees, this value should be small, for large degrees it may be larger.
/// Measured in number of voxels.
/// Returns a pointer to a member variable of class `MR::MoveMeshToVoxelMaxDerivSettings` named `outlierThreshold`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MoveMeshToVoxelMaxDerivSettings_Get_outlierThreshold(const MR_MoveMeshToVoxelMaxDerivSettings *_this);

/// for each iteration, if target position of the vertex is greater than this threshold, it is disregarded.
/// For small degrees, this value should be small, for large degrees it may be larger.
/// Measured in number of voxels.
/// Modifies a member variable of class `MR::MoveMeshToVoxelMaxDerivSettings` named `outlierThreshold`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MoveMeshToVoxelMaxDerivSettings_Set_outlierThreshold(MR_MoveMeshToVoxelMaxDerivSettings *_this, float value);

/// for each iteration, if target position of the vertex is greater than this threshold, it is disregarded.
/// For small degrees, this value should be small, for large degrees it may be larger.
/// Measured in number of voxels.
/// Returns a mutable pointer to a member variable of class `MR::MoveMeshToVoxelMaxDerivSettings` named `outlierThreshold`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MoveMeshToVoxelMaxDerivSettings_GetMutable_outlierThreshold(MR_MoveMeshToVoxelMaxDerivSettings *_this);

/// force of the smoothing (relaxation) of vector field of shifts on each iteration
/// Returns a pointer to a member variable of class `MR::MoveMeshToVoxelMaxDerivSettings` named `intermediateSmoothForce`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MoveMeshToVoxelMaxDerivSettings_Get_intermediateSmoothForce(const MR_MoveMeshToVoxelMaxDerivSettings *_this);

/// force of the smoothing (relaxation) of vector field of shifts on each iteration
/// Modifies a member variable of class `MR::MoveMeshToVoxelMaxDerivSettings` named `intermediateSmoothForce`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MoveMeshToVoxelMaxDerivSettings_Set_intermediateSmoothForce(MR_MoveMeshToVoxelMaxDerivSettings *_this, float value);

/// force of the smoothing (relaxation) of vector field of shifts on each iteration
/// Returns a mutable pointer to a member variable of class `MR::MoveMeshToVoxelMaxDerivSettings` named `intermediateSmoothForce`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MoveMeshToVoxelMaxDerivSettings_GetMutable_intermediateSmoothForce(MR_MoveMeshToVoxelMaxDerivSettings *_this);

/// force of initial smoothing of vertices, before applying the algorithm
/// Returns a pointer to a member variable of class `MR::MoveMeshToVoxelMaxDerivSettings` named `preparationSmoothForce`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MoveMeshToVoxelMaxDerivSettings_Get_preparationSmoothForce(const MR_MoveMeshToVoxelMaxDerivSettings *_this);

/// force of initial smoothing of vertices, before applying the algorithm
/// Modifies a member variable of class `MR::MoveMeshToVoxelMaxDerivSettings` named `preparationSmoothForce`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MoveMeshToVoxelMaxDerivSettings_Set_preparationSmoothForce(MR_MoveMeshToVoxelMaxDerivSettings *_this, float value);

/// force of initial smoothing of vertices, before applying the algorithm
/// Returns a mutable pointer to a member variable of class `MR::MoveMeshToVoxelMaxDerivSettings` named `preparationSmoothForce`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MoveMeshToVoxelMaxDerivSettings_GetMutable_preparationSmoothForce(MR_MoveMeshToVoxelMaxDerivSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MoveMeshToVoxelMaxDerivSettings_Destroy()` to free it when you're done using it.
MRC_API MR_MoveMeshToVoxelMaxDerivSettings *MR_MoveMeshToVoxelMaxDerivSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MoveMeshToVoxelMaxDerivSettings_DestroyArray()`.
/// Use `MR_MoveMeshToVoxelMaxDerivSettings_OffsetMutablePtr()` and `MR_MoveMeshToVoxelMaxDerivSettings_OffsetPtr()` to access the array elements.
MRC_API MR_MoveMeshToVoxelMaxDerivSettings *MR_MoveMeshToVoxelMaxDerivSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MoveMeshToVoxelMaxDerivSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MoveMeshToVoxelMaxDerivSettings_Destroy()` to free it when you're done using it.
MRC_API MR_MoveMeshToVoxelMaxDerivSettings *MR_MoveMeshToVoxelMaxDerivSettings_ConstructFrom(int32_t iters, int32_t samplePoints, int32_t degree, float outlierThreshold, float intermediateSmoothForce, float preparationSmoothForce);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MoveMeshToVoxelMaxDerivSettings *MR_MoveMeshToVoxelMaxDerivSettings_OffsetPtr(const MR_MoveMeshToVoxelMaxDerivSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MoveMeshToVoxelMaxDerivSettings *MR_MoveMeshToVoxelMaxDerivSettings_OffsetMutablePtr(MR_MoveMeshToVoxelMaxDerivSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MoveMeshToVoxelMaxDerivSettings`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MoveMeshToVoxelMaxDerivSettings_Destroy()` to free it when you're done using it.
MRC_API MR_MoveMeshToVoxelMaxDerivSettings *MR_MoveMeshToVoxelMaxDerivSettings_ConstructFromAnother(const MR_MoveMeshToVoxelMaxDerivSettings *_other);

/// Destroys a heap-allocated instance of `MR_MoveMeshToVoxelMaxDerivSettings`. Does nothing if the pointer is null.
MRC_API void MR_MoveMeshToVoxelMaxDerivSettings_Destroy(const MR_MoveMeshToVoxelMaxDerivSettings *_this);

/// Destroys a heap-allocated array of `MR_MoveMeshToVoxelMaxDerivSettings`. Does nothing if the pointer is null.
MRC_API void MR_MoveMeshToVoxelMaxDerivSettings_DestroyArray(const MR_MoveMeshToVoxelMaxDerivSettings *_this);

/// Generated from a method of class `MR::MoveMeshToVoxelMaxDerivSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MoveMeshToVoxelMaxDerivSettings *MR_MoveMeshToVoxelMaxDerivSettings_AssignFromAnother(MR_MoveMeshToVoxelMaxDerivSettings *_this, const MR_MoveMeshToVoxelMaxDerivSettings *_other);

/// Moves each vertex along its normal to the minimize (with sign, i.e. maximize the absolute value with negative sign) the derivative
/// of voxels.

/// @return Vertices that were moved by the algorithm
/// Generated from function `MR::moveMeshToVoxelMaxDeriv<MR::VdbVolume>`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `meshXf` can not be null. It is a single object.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `volumeXf` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VertBitSet_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VertBitSet_std_string *MR_moveMeshToVoxelMaxDeriv_MR_VdbVolume(MR_Mesh *mesh, const MR_AffineXf3f *meshXf, const MR_VdbVolume *volume, const MR_AffineXf3f *volumeXf, const MR_MoveMeshToVoxelMaxDerivSettings *settings, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Moves each vertex along its normal to the minimize (with sign, i.e. maximize the absolute value with negative sign) the derivative
/// of voxels.

/// @return Vertices that were moved by the algorithm
/// Generated from function `MR::moveMeshToVoxelMaxDeriv<MR::SimpleVolumeMinMax>`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `meshXf` can not be null. It is a single object.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `volumeXf` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VertBitSet_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VertBitSet_std_string *MR_moveMeshToVoxelMaxDeriv_MR_SimpleVolumeMinMax(MR_Mesh *mesh, const MR_AffineXf3f *meshXf, const MR_SimpleVolumeMinMax *volume, const MR_AffineXf3f *volumeXf, const MR_MoveMeshToVoxelMaxDerivSettings *settings, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Moves each vertex along its normal to the minimize (with sign, i.e. maximize the absolute value with negative sign) the derivative
/// of voxels.

/// @return Vertices that were moved by the algorithm
/// Generated from function `MR::moveMeshToVoxelMaxDeriv<MR::FunctionVolume>`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `meshXf` can not be null. It is a single object.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `volumeXf` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VertBitSet_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VertBitSet_std_string *MR_moveMeshToVoxelMaxDeriv_MR_FunctionVolume(MR_Mesh *mesh, const MR_AffineXf3f *meshXf, const MR_FunctionVolume *volume, const MR_AffineXf3f *volumeXf, const MR_MoveMeshToVoxelMaxDerivSettings *settings, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Generated from a constructor of class `MR::MeshOnVoxelsT<MR::Mesh, MR::VdbVolume>`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `meshXf` can not be null. It is a single object.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `volumeXf` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume_Destroy()` to free it when you're done using it.
MRC_API MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume *MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume_Construct(MR_Mesh *mesh, const MR_AffineXf3f *meshXf, const MR_VdbVolume *volume, const MR_AffineXf3f *volumeXf);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume *MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume_OffsetPtr(const MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume *MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume_OffsetMutablePtr(MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume`. Does nothing if the pointer is null.
MRC_API void MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume_Destroy(const MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume *_this);

/// Destroys a heap-allocated array of `MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume`. Does nothing if the pointer is null.
MRC_API void MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume_DestroyArray(const MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume *_this);

// Access to base data
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::VdbVolume>` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Mesh *MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume_mesh(const MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume *_this);

/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::VdbVolume>` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VdbVolume *MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume_volume(const MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume *_this);

// Cached number of valid vertices
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::VdbVolume>` named `numVerts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume_numVerts(const MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume *_this);

// Voxel size as scalar
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::VdbVolume>` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume_voxelSize(const MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume *_this);

// Transformation mesh to volume
// All points are in voxels volume space, unless otherwise is implied
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::VdbVolume>` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume_xf_0(const MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume *_this);

/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::VdbVolume>` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector3f MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume_xf_1(const MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume *_this, const MR_Vector3f *pt);

/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::VdbVolume>` named `xfInv`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume_xfInv_0(const MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume *_this);

/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::VdbVolume>` named `xfInv`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector3f MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume_xfInv_1(const MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume *_this, const MR_Vector3f *pt);

// Vertex position
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::VdbVolume>` named `point`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume_point(const MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume *_this, MR_VertId v);

// Volume value
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::VdbVolume>` named `getValue`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API float MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume_getValue(const MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume *_this, const MR_Vector3f *pos);

// Get offset vector (mesh normal for a vertex with `voxelSize` length)
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::VdbVolume>` named `getOffsetVector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume_getOffsetVector(const MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume *_this, MR_VertId v);

// Get a pseudo-index for a zero-based point index in a zero-centered row of `count` points
// Pseudo-index is a signed number; for whole index, is is whole or half-whole
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::VdbVolume>` named `pseudoIndex`.
MRC_API float MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume_pseudoIndex_float(float index, int32_t count);

/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::VdbVolume>` named `pseudoIndex`.
MRC_API float MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume_pseudoIndex_int32_t(int32_t index, int32_t count);

/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::VdbVolume>` named `indexFromPseudoIndex`.
MRC_API float MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume_indexFromPseudoIndex(float pseudoIndex, int32_t count);

// Get row of points with `offset` stride
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::VdbVolume>` named `getPoints`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `result` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
/// Parameter `offset` can not be null. It is a single object.
MRC_API void MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume_getPoints(const MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume *_this, MR_std_vector_MR_Vector3f *result, const MR_Vector3f *pos, const MR_Vector3f *offset);

// Get volume values for a row of points
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::VdbVolume>` named `getValues`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `result` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
/// Parameter `offset` can not be null. It is a single object.
MRC_API void MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume_getValues(const MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume *_this, MR_std_vector_float *result, const MR_Vector3f *pos, const MR_Vector3f *offset);

// Get derivatives from result of `getValues`
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::VdbVolume>` named `getDerivatives`.
/// Parameter `result` can not be null. It is a single object.
/// Parameter `values` can not be null. It is a single object.
MRC_API void MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume_getDerivatives(MR_std_vector_float *result, const MR_std_vector_float *values);

/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::VdbVolume>` named `getBestPolynomial`.
/// Parameter `values` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolynomialWrapper_float_Destroy()` to free it when you're done using it.
MRC_API MR_PolynomialWrapper_float *MR_MeshOnVoxelsT_MR_Mesh_MR_VdbVolume_getBestPolynomial(const MR_std_vector_float *values, MR_uint64_t degree);

/// Generated from a constructor of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::VdbVolume>`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `meshXf` can not be null. It is a single object.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `volumeXf` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume_Destroy()` to free it when you're done using it.
MRC_API MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume *MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume_Construct(const MR_Mesh *mesh, const MR_AffineXf3f *meshXf, const MR_VdbVolume *volume, const MR_AffineXf3f *volumeXf);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume *MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume_OffsetPtr(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume *MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume_OffsetMutablePtr(MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume`. Does nothing if the pointer is null.
MRC_API void MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume_Destroy(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume *_this);

/// Destroys a heap-allocated array of `MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume`. Does nothing if the pointer is null.
MRC_API void MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume_DestroyArray(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume *_this);

// Access to base data
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::VdbVolume>` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Mesh *MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume_mesh(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume *_this);

/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::VdbVolume>` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VdbVolume *MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume_volume(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume *_this);

// Cached number of valid vertices
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::VdbVolume>` named `numVerts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume_numVerts(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume *_this);

// Voxel size as scalar
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::VdbVolume>` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume_voxelSize(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume *_this);

// Transformation mesh to volume
// All points are in voxels volume space, unless otherwise is implied
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::VdbVolume>` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume_xf_0(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume *_this);

/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::VdbVolume>` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector3f MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume_xf_1(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume *_this, const MR_Vector3f *pt);

/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::VdbVolume>` named `xfInv`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume_xfInv_0(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume *_this);

/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::VdbVolume>` named `xfInv`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector3f MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume_xfInv_1(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume *_this, const MR_Vector3f *pt);

// Vertex position
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::VdbVolume>` named `point`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume_point(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume *_this, MR_VertId v);

// Volume value
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::VdbVolume>` named `getValue`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API float MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume_getValue(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume *_this, const MR_Vector3f *pos);

// Get offset vector (mesh normal for a vertex with `voxelSize` length)
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::VdbVolume>` named `getOffsetVector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume_getOffsetVector(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume *_this, MR_VertId v);

// Get a pseudo-index for a zero-based point index in a zero-centered row of `count` points
// Pseudo-index is a signed number; for whole index, is is whole or half-whole
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::VdbVolume>` named `pseudoIndex`.
MRC_API float MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume_pseudoIndex_float(float index, int32_t count);

/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::VdbVolume>` named `pseudoIndex`.
MRC_API float MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume_pseudoIndex_int32_t(int32_t index, int32_t count);

/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::VdbVolume>` named `indexFromPseudoIndex`.
MRC_API float MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume_indexFromPseudoIndex(float pseudoIndex, int32_t count);

// Get row of points with `offset` stride
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::VdbVolume>` named `getPoints`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `result` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
/// Parameter `offset` can not be null. It is a single object.
MRC_API void MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume_getPoints(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume *_this, MR_std_vector_MR_Vector3f *result, const MR_Vector3f *pos, const MR_Vector3f *offset);

// Get volume values for a row of points
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::VdbVolume>` named `getValues`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `result` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
/// Parameter `offset` can not be null. It is a single object.
MRC_API void MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume_getValues(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume *_this, MR_std_vector_float *result, const MR_Vector3f *pos, const MR_Vector3f *offset);

// Get derivatives from result of `getValues`
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::VdbVolume>` named `getDerivatives`.
/// Parameter `result` can not be null. It is a single object.
/// Parameter `values` can not be null. It is a single object.
MRC_API void MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume_getDerivatives(MR_std_vector_float *result, const MR_std_vector_float *values);

/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::VdbVolume>` named `getBestPolynomial`.
/// Parameter `values` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolynomialWrapper_float_Destroy()` to free it when you're done using it.
MRC_API MR_PolynomialWrapper_float *MR_MeshOnVoxelsT_const_MR_Mesh_MR_VdbVolume_getBestPolynomial(const MR_std_vector_float *values, MR_uint64_t degree);

/// Generated from a constructor of class `MR::MeshOnVoxelsT<MR::Mesh, MR::SimpleVolumeMinMax>`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `meshXf` can not be null. It is a single object.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `volumeXf` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax_Destroy()` to free it when you're done using it.
MRC_API MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax *MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax_Construct(MR_Mesh *mesh, const MR_AffineXf3f *meshXf, const MR_SimpleVolumeMinMax *volume, const MR_AffineXf3f *volumeXf);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax *MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax_OffsetPtr(const MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax *MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax_OffsetMutablePtr(MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax`. Does nothing if the pointer is null.
MRC_API void MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax_Destroy(const MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax *_this);

/// Destroys a heap-allocated array of `MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax`. Does nothing if the pointer is null.
MRC_API void MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax_DestroyArray(const MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax *_this);

// Access to base data
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::SimpleVolumeMinMax>` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Mesh *MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax_mesh(const MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax *_this);

/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::SimpleVolumeMinMax>` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_SimpleVolumeMinMax *MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax_volume(const MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax *_this);

// Cached number of valid vertices
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::SimpleVolumeMinMax>` named `numVerts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax_numVerts(const MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax *_this);

// Voxel size as scalar
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::SimpleVolumeMinMax>` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax_voxelSize(const MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax *_this);

// Transformation mesh to volume
// All points are in voxels volume space, unless otherwise is implied
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::SimpleVolumeMinMax>` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax_xf_0(const MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax *_this);

/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::SimpleVolumeMinMax>` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector3f MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax_xf_1(const MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax *_this, const MR_Vector3f *pt);

/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::SimpleVolumeMinMax>` named `xfInv`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax_xfInv_0(const MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax *_this);

/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::SimpleVolumeMinMax>` named `xfInv`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector3f MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax_xfInv_1(const MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax *_this, const MR_Vector3f *pt);

// Vertex position
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::SimpleVolumeMinMax>` named `point`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax_point(const MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax *_this, MR_VertId v);

// Volume value
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::SimpleVolumeMinMax>` named `getValue`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API float MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax_getValue(const MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax *_this, const MR_Vector3f *pos);

// Get offset vector (mesh normal for a vertex with `voxelSize` length)
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::SimpleVolumeMinMax>` named `getOffsetVector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax_getOffsetVector(const MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax *_this, MR_VertId v);

// Get a pseudo-index for a zero-based point index in a zero-centered row of `count` points
// Pseudo-index is a signed number; for whole index, is is whole or half-whole
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::SimpleVolumeMinMax>` named `pseudoIndex`.
MRC_API float MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax_pseudoIndex_float(float index, int32_t count);

/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::SimpleVolumeMinMax>` named `pseudoIndex`.
MRC_API float MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax_pseudoIndex_int32_t(int32_t index, int32_t count);

/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::SimpleVolumeMinMax>` named `indexFromPseudoIndex`.
MRC_API float MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax_indexFromPseudoIndex(float pseudoIndex, int32_t count);

// Get row of points with `offset` stride
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::SimpleVolumeMinMax>` named `getPoints`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `result` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
/// Parameter `offset` can not be null. It is a single object.
MRC_API void MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax_getPoints(const MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax *_this, MR_std_vector_MR_Vector3f *result, const MR_Vector3f *pos, const MR_Vector3f *offset);

// Get volume values for a row of points
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::SimpleVolumeMinMax>` named `getValues`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `result` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
/// Parameter `offset` can not be null. It is a single object.
MRC_API void MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax_getValues(const MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax *_this, MR_std_vector_float *result, const MR_Vector3f *pos, const MR_Vector3f *offset);

// Get derivatives from result of `getValues`
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::SimpleVolumeMinMax>` named `getDerivatives`.
/// Parameter `result` can not be null. It is a single object.
/// Parameter `values` can not be null. It is a single object.
MRC_API void MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax_getDerivatives(MR_std_vector_float *result, const MR_std_vector_float *values);

/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::SimpleVolumeMinMax>` named `getBestPolynomial`.
/// Parameter `values` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolynomialWrapper_float_Destroy()` to free it when you're done using it.
MRC_API MR_PolynomialWrapper_float *MR_MeshOnVoxelsT_MR_Mesh_MR_SimpleVolumeMinMax_getBestPolynomial(const MR_std_vector_float *values, MR_uint64_t degree);

/// Generated from a constructor of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::SimpleVolumeMinMax>`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `meshXf` can not be null. It is a single object.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `volumeXf` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax_Destroy()` to free it when you're done using it.
MRC_API MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax *MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax_Construct(const MR_Mesh *mesh, const MR_AffineXf3f *meshXf, const MR_SimpleVolumeMinMax *volume, const MR_AffineXf3f *volumeXf);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax *MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax_OffsetPtr(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax *MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax_OffsetMutablePtr(MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax`. Does nothing if the pointer is null.
MRC_API void MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax_Destroy(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax *_this);

/// Destroys a heap-allocated array of `MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax`. Does nothing if the pointer is null.
MRC_API void MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax_DestroyArray(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax *_this);

// Access to base data
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::SimpleVolumeMinMax>` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Mesh *MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax_mesh(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax *_this);

/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::SimpleVolumeMinMax>` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_SimpleVolumeMinMax *MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax_volume(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax *_this);

// Cached number of valid vertices
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::SimpleVolumeMinMax>` named `numVerts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax_numVerts(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax *_this);

// Voxel size as scalar
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::SimpleVolumeMinMax>` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax_voxelSize(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax *_this);

// Transformation mesh to volume
// All points are in voxels volume space, unless otherwise is implied
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::SimpleVolumeMinMax>` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax_xf_0(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax *_this);

/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::SimpleVolumeMinMax>` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector3f MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax_xf_1(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax *_this, const MR_Vector3f *pt);

/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::SimpleVolumeMinMax>` named `xfInv`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax_xfInv_0(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax *_this);

/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::SimpleVolumeMinMax>` named `xfInv`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector3f MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax_xfInv_1(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax *_this, const MR_Vector3f *pt);

// Vertex position
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::SimpleVolumeMinMax>` named `point`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax_point(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax *_this, MR_VertId v);

// Volume value
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::SimpleVolumeMinMax>` named `getValue`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API float MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax_getValue(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax *_this, const MR_Vector3f *pos);

// Get offset vector (mesh normal for a vertex with `voxelSize` length)
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::SimpleVolumeMinMax>` named `getOffsetVector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax_getOffsetVector(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax *_this, MR_VertId v);

// Get a pseudo-index for a zero-based point index in a zero-centered row of `count` points
// Pseudo-index is a signed number; for whole index, is is whole or half-whole
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::SimpleVolumeMinMax>` named `pseudoIndex`.
MRC_API float MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax_pseudoIndex_float(float index, int32_t count);

/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::SimpleVolumeMinMax>` named `pseudoIndex`.
MRC_API float MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax_pseudoIndex_int32_t(int32_t index, int32_t count);

/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::SimpleVolumeMinMax>` named `indexFromPseudoIndex`.
MRC_API float MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax_indexFromPseudoIndex(float pseudoIndex, int32_t count);

// Get row of points with `offset` stride
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::SimpleVolumeMinMax>` named `getPoints`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `result` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
/// Parameter `offset` can not be null. It is a single object.
MRC_API void MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax_getPoints(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax *_this, MR_std_vector_MR_Vector3f *result, const MR_Vector3f *pos, const MR_Vector3f *offset);

// Get volume values for a row of points
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::SimpleVolumeMinMax>` named `getValues`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `result` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
/// Parameter `offset` can not be null. It is a single object.
MRC_API void MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax_getValues(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax *_this, MR_std_vector_float *result, const MR_Vector3f *pos, const MR_Vector3f *offset);

// Get derivatives from result of `getValues`
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::SimpleVolumeMinMax>` named `getDerivatives`.
/// Parameter `result` can not be null. It is a single object.
/// Parameter `values` can not be null. It is a single object.
MRC_API void MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax_getDerivatives(MR_std_vector_float *result, const MR_std_vector_float *values);

/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::SimpleVolumeMinMax>` named `getBestPolynomial`.
/// Parameter `values` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolynomialWrapper_float_Destroy()` to free it when you're done using it.
MRC_API MR_PolynomialWrapper_float *MR_MeshOnVoxelsT_const_MR_Mesh_MR_SimpleVolumeMinMax_getBestPolynomial(const MR_std_vector_float *values, MR_uint64_t degree);

/// Generated from a constructor of class `MR::MeshOnVoxelsT<MR::Mesh, MR::FunctionVolume>`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `meshXf` can not be null. It is a single object.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `volumeXf` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume_Destroy()` to free it when you're done using it.
MRC_API MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume *MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume_Construct(MR_Mesh *mesh, const MR_AffineXf3f *meshXf, const MR_FunctionVolume *volume, const MR_AffineXf3f *volumeXf);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume *MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume_OffsetPtr(const MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume *MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume_OffsetMutablePtr(MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume`. Does nothing if the pointer is null.
MRC_API void MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume_Destroy(const MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume *_this);

/// Destroys a heap-allocated array of `MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume`. Does nothing if the pointer is null.
MRC_API void MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume_DestroyArray(const MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume *_this);

// Access to base data
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::FunctionVolume>` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Mesh *MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume_mesh(const MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume *_this);

/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::FunctionVolume>` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FunctionVolume *MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume_volume(const MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume *_this);

// Cached number of valid vertices
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::FunctionVolume>` named `numVerts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume_numVerts(const MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume *_this);

// Voxel size as scalar
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::FunctionVolume>` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume_voxelSize(const MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume *_this);

// Transformation mesh to volume
// All points are in voxels volume space, unless otherwise is implied
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::FunctionVolume>` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume_xf_0(const MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume *_this);

/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::FunctionVolume>` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector3f MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume_xf_1(const MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume *_this, const MR_Vector3f *pt);

/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::FunctionVolume>` named `xfInv`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume_xfInv_0(const MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume *_this);

/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::FunctionVolume>` named `xfInv`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector3f MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume_xfInv_1(const MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume *_this, const MR_Vector3f *pt);

// Vertex position
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::FunctionVolume>` named `point`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume_point(const MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume *_this, MR_VertId v);

// Volume value
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::FunctionVolume>` named `getValue`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API float MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume_getValue(const MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume *_this, const MR_Vector3f *pos);

// Get offset vector (mesh normal for a vertex with `voxelSize` length)
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::FunctionVolume>` named `getOffsetVector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume_getOffsetVector(const MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume *_this, MR_VertId v);

// Get a pseudo-index for a zero-based point index in a zero-centered row of `count` points
// Pseudo-index is a signed number; for whole index, is is whole or half-whole
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::FunctionVolume>` named `pseudoIndex`.
MRC_API float MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume_pseudoIndex_float(float index, int32_t count);

/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::FunctionVolume>` named `pseudoIndex`.
MRC_API float MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume_pseudoIndex_int32_t(int32_t index, int32_t count);

/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::FunctionVolume>` named `indexFromPseudoIndex`.
MRC_API float MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume_indexFromPseudoIndex(float pseudoIndex, int32_t count);

// Get row of points with `offset` stride
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::FunctionVolume>` named `getPoints`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `result` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
/// Parameter `offset` can not be null. It is a single object.
MRC_API void MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume_getPoints(const MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume *_this, MR_std_vector_MR_Vector3f *result, const MR_Vector3f *pos, const MR_Vector3f *offset);

// Get volume values for a row of points
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::FunctionVolume>` named `getValues`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `result` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
/// Parameter `offset` can not be null. It is a single object.
MRC_API void MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume_getValues(const MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume *_this, MR_std_vector_float *result, const MR_Vector3f *pos, const MR_Vector3f *offset);

// Get derivatives from result of `getValues`
/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::FunctionVolume>` named `getDerivatives`.
/// Parameter `result` can not be null. It is a single object.
/// Parameter `values` can not be null. It is a single object.
MRC_API void MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume_getDerivatives(MR_std_vector_float *result, const MR_std_vector_float *values);

/// Generated from a method of class `MR::MeshOnVoxelsT<MR::Mesh, MR::FunctionVolume>` named `getBestPolynomial`.
/// Parameter `values` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolynomialWrapper_float_Destroy()` to free it when you're done using it.
MRC_API MR_PolynomialWrapper_float *MR_MeshOnVoxelsT_MR_Mesh_MR_FunctionVolume_getBestPolynomial(const MR_std_vector_float *values, MR_uint64_t degree);

/// Generated from a constructor of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::FunctionVolume>`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `meshXf` can not be null. It is a single object.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `volumeXf` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume_Destroy()` to free it when you're done using it.
MRC_API MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume *MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume_Construct(const MR_Mesh *mesh, const MR_AffineXf3f *meshXf, const MR_FunctionVolume *volume, const MR_AffineXf3f *volumeXf);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume *MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume_OffsetPtr(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume *MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume_OffsetMutablePtr(MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume`. Does nothing if the pointer is null.
MRC_API void MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume_Destroy(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume *_this);

/// Destroys a heap-allocated array of `MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume`. Does nothing if the pointer is null.
MRC_API void MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume_DestroyArray(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume *_this);

// Access to base data
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::FunctionVolume>` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Mesh *MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume_mesh(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume *_this);

/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::FunctionVolume>` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FunctionVolume *MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume_volume(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume *_this);

// Cached number of valid vertices
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::FunctionVolume>` named `numVerts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume_numVerts(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume *_this);

// Voxel size as scalar
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::FunctionVolume>` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume_voxelSize(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume *_this);

// Transformation mesh to volume
// All points are in voxels volume space, unless otherwise is implied
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::FunctionVolume>` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume_xf_0(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume *_this);

/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::FunctionVolume>` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector3f MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume_xf_1(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume *_this, const MR_Vector3f *pt);

/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::FunctionVolume>` named `xfInv`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume_xfInv_0(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume *_this);

/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::FunctionVolume>` named `xfInv`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector3f MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume_xfInv_1(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume *_this, const MR_Vector3f *pt);

// Vertex position
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::FunctionVolume>` named `point`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume_point(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume *_this, MR_VertId v);

// Volume value
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::FunctionVolume>` named `getValue`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API float MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume_getValue(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume *_this, const MR_Vector3f *pos);

// Get offset vector (mesh normal for a vertex with `voxelSize` length)
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::FunctionVolume>` named `getOffsetVector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume_getOffsetVector(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume *_this, MR_VertId v);

// Get a pseudo-index for a zero-based point index in a zero-centered row of `count` points
// Pseudo-index is a signed number; for whole index, is is whole or half-whole
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::FunctionVolume>` named `pseudoIndex`.
MRC_API float MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume_pseudoIndex_float(float index, int32_t count);

/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::FunctionVolume>` named `pseudoIndex`.
MRC_API float MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume_pseudoIndex_int32_t(int32_t index, int32_t count);

/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::FunctionVolume>` named `indexFromPseudoIndex`.
MRC_API float MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume_indexFromPseudoIndex(float pseudoIndex, int32_t count);

// Get row of points with `offset` stride
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::FunctionVolume>` named `getPoints`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `result` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
/// Parameter `offset` can not be null. It is a single object.
MRC_API void MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume_getPoints(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume *_this, MR_std_vector_MR_Vector3f *result, const MR_Vector3f *pos, const MR_Vector3f *offset);

// Get volume values for a row of points
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::FunctionVolume>` named `getValues`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `result` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
/// Parameter `offset` can not be null. It is a single object.
MRC_API void MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume_getValues(const MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume *_this, MR_std_vector_float *result, const MR_Vector3f *pos, const MR_Vector3f *offset);

// Get derivatives from result of `getValues`
/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::FunctionVolume>` named `getDerivatives`.
/// Parameter `result` can not be null. It is a single object.
/// Parameter `values` can not be null. It is a single object.
MRC_API void MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume_getDerivatives(MR_std_vector_float *result, const MR_std_vector_float *values);

/// Generated from a method of class `MR::MeshOnVoxelsT<const MR::Mesh, MR::FunctionVolume>` named `getBestPolynomial`.
/// Parameter `values` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolynomialWrapper_float_Destroy()` to free it when you're done using it.
MRC_API MR_PolynomialWrapper_float *MR_MeshOnVoxelsT_const_MR_Mesh_MR_FunctionVolume_getBestPolynomial(const MR_std_vector_float *values, MR_uint64_t degree);

#ifdef __cplusplus
} // extern "C"
#endif
