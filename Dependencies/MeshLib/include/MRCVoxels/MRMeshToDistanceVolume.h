// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_DistanceToMeshOptions MR_DistanceToMeshOptions; // Defined in `#include <MRCMesh/MRDistanceToMeshOptions.h>`.
typedef struct MR_DistanceVolumeParams MR_DistanceVolumeParams; // Defined in `#include <MRCVoxels/MRDistanceVolumeParams.h>`.
typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_FunctionVolume MR_FunctionVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_SignedDistanceToMeshOptions MR_SignedDistanceToMeshOptions; // Defined in `#include <MRCMesh/MRDistanceToMeshOptions.h>`.
typedef struct MR_expected_MR_SimpleVolumeMinMax_std_string MR_expected_MR_SimpleVolumeMinMax_std_string; // Defined in `#include <MRCMisc/expected_MR_SimpleVolumeMinMax_std_string.h>`.
typedef struct MR_expected_std_array_MR_SimpleVolumeMinMax_3_std_string MR_expected_std_array_MR_SimpleVolumeMinMax_3_std_string; // Defined in `#include <MRCMisc/expected_std_array_MR_SimpleVolumeMinMax_3_std_string.h>`.
typedef struct MR_std_shared_ptr_MR_IFastWindingNumber MR_std_shared_ptr_MR_IFastWindingNumber; // Defined in `#include <MRCMisc/std_shared_ptr_MR_IFastWindingNumber.h>`.
typedef struct MR_std_shared_ptr_MR_IPointsToMeshProjector MR_std_shared_ptr_MR_IPointsToMeshProjector; // Defined in `#include <MRCMisc/std_shared_ptr_MR_IPointsToMeshProjector.h>`.


/// Generated from class `MR::MeshToDistanceVolumeParams`.
typedef struct MR_MeshToDistanceVolumeParams MR_MeshToDistanceVolumeParams;

/// Generated from class `MR::MeshToDirectionVolumeParams`.
typedef struct MR_MeshToDirectionVolumeParams MR_MeshToDirectionVolumeParams;

/// Returns a pointer to a member variable of class `MR::MeshToDistanceVolumeParams` named `vol`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_DistanceVolumeParams *MR_MeshToDistanceVolumeParams_Get_vol(const MR_MeshToDistanceVolumeParams *_this);

/// Modifies a member variable of class `MR::MeshToDistanceVolumeParams` named `vol`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshToDistanceVolumeParams_Set_vol(MR_MeshToDistanceVolumeParams *_this, MR_PassBy value_pass_by, MR_DistanceVolumeParams *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshToDistanceVolumeParams` named `vol`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DistanceVolumeParams *MR_MeshToDistanceVolumeParams_GetMutable_vol(MR_MeshToDistanceVolumeParams *_this);

/// Returns a pointer to a member variable of class `MR::MeshToDistanceVolumeParams` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_SignedDistanceToMeshOptions *MR_MeshToDistanceVolumeParams_Get_dist(const MR_MeshToDistanceVolumeParams *_this);

/// Modifies a member variable of class `MR::MeshToDistanceVolumeParams` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_MeshToDistanceVolumeParams_Set_dist(MR_MeshToDistanceVolumeParams *_this, const MR_SignedDistanceToMeshOptions *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshToDistanceVolumeParams` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SignedDistanceToMeshOptions *MR_MeshToDistanceVolumeParams_GetMutable_dist(MR_MeshToDistanceVolumeParams *_this);

/// Returns a pointer to a member variable of class `MR::MeshToDistanceVolumeParams` named `fwn`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_MR_IFastWindingNumber *MR_MeshToDistanceVolumeParams_Get_fwn(const MR_MeshToDistanceVolumeParams *_this);

/// Modifies a member variable of class `MR::MeshToDistanceVolumeParams` named `fwn`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshToDistanceVolumeParams_Set_fwn(MR_MeshToDistanceVolumeParams *_this, MR_PassBy value_pass_by, MR_std_shared_ptr_MR_IFastWindingNumber *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshToDistanceVolumeParams` named `fwn`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_shared_ptr_MR_IFastWindingNumber *MR_MeshToDistanceVolumeParams_GetMutable_fwn(MR_MeshToDistanceVolumeParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshToDistanceVolumeParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshToDistanceVolumeParams *MR_MeshToDistanceVolumeParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshToDistanceVolumeParams_DestroyArray()`.
/// Use `MR_MeshToDistanceVolumeParams_OffsetMutablePtr()` and `MR_MeshToDistanceVolumeParams_OffsetPtr()` to access the array elements.
MRC_API MR_MeshToDistanceVolumeParams *MR_MeshToDistanceVolumeParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshToDistanceVolumeParams` elementwise.
/// Parameter `dist` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshToDistanceVolumeParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshToDistanceVolumeParams *MR_MeshToDistanceVolumeParams_ConstructFrom(MR_PassBy vol_pass_by, MR_DistanceVolumeParams *vol, const MR_SignedDistanceToMeshOptions *dist, MR_PassBy fwn_pass_by, MR_std_shared_ptr_MR_IFastWindingNumber *fwn);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshToDistanceVolumeParams *MR_MeshToDistanceVolumeParams_OffsetPtr(const MR_MeshToDistanceVolumeParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshToDistanceVolumeParams *MR_MeshToDistanceVolumeParams_OffsetMutablePtr(MR_MeshToDistanceVolumeParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshToDistanceVolumeParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshToDistanceVolumeParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshToDistanceVolumeParams *MR_MeshToDistanceVolumeParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MeshToDistanceVolumeParams *_other);

/// Destroys a heap-allocated instance of `MR_MeshToDistanceVolumeParams`. Does nothing if the pointer is null.
MRC_API void MR_MeshToDistanceVolumeParams_Destroy(const MR_MeshToDistanceVolumeParams *_this);

/// Destroys a heap-allocated array of `MR_MeshToDistanceVolumeParams`. Does nothing if the pointer is null.
MRC_API void MR_MeshToDistanceVolumeParams_DestroyArray(const MR_MeshToDistanceVolumeParams *_this);

/// Generated from a method of class `MR::MeshToDistanceVolumeParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshToDistanceVolumeParams *MR_MeshToDistanceVolumeParams_AssignFromAnother(MR_MeshToDistanceVolumeParams *_this, MR_PassBy _other_pass_by, MR_MeshToDistanceVolumeParams *_other);

/// makes SimpleVolume filled with (signed or unsigned) distances from Mesh with given settings
/// Generated from function `MR::meshToDistanceVolume`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_SimpleVolumeMinMax_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_SimpleVolumeMinMax_std_string *MR_meshToDistanceVolume(const MR_MeshPart *mp, const MR_MeshToDistanceVolumeParams *params);

/// makes FunctionVolume representing (signed or unsigned) distances from Mesh with given settings
/// Generated from function `MR::meshToDistanceFunctionVolume`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FunctionVolume_Destroy()` to free it when you're done using it.
MRC_API MR_FunctionVolume *MR_meshToDistanceFunctionVolume(const MR_MeshPart *mp, const MR_MeshToDistanceVolumeParams *params);

/// returns a volume filled with the values:
/// v < 0: this point is within offset distance to region-part of mesh and it is closer to region-part than to not-region-part
/// Generated from function `MR::meshRegionToIndicatorVolume`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_SimpleVolumeMinMax_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_SimpleVolumeMinMax_std_string *MR_meshRegionToIndicatorVolume(const MR_Mesh *mesh, const MR_FaceBitSet *region, float offset, const MR_DistanceVolumeParams *params);

/// Returns a pointer to a member variable of class `MR::MeshToDirectionVolumeParams` named `vol`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_DistanceVolumeParams *MR_MeshToDirectionVolumeParams_Get_vol(const MR_MeshToDirectionVolumeParams *_this);

/// Modifies a member variable of class `MR::MeshToDirectionVolumeParams` named `vol`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshToDirectionVolumeParams_Set_vol(MR_MeshToDirectionVolumeParams *_this, MR_PassBy value_pass_by, MR_DistanceVolumeParams *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshToDirectionVolumeParams` named `vol`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DistanceVolumeParams *MR_MeshToDirectionVolumeParams_GetMutable_vol(MR_MeshToDirectionVolumeParams *_this);

// note that signMode is ignored in this algorithm
/// Returns a pointer to a member variable of class `MR::MeshToDirectionVolumeParams` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_DistanceToMeshOptions *MR_MeshToDirectionVolumeParams_Get_dist(const MR_MeshToDirectionVolumeParams *_this);

// note that signMode is ignored in this algorithm
/// Modifies a member variable of class `MR::MeshToDirectionVolumeParams` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_MeshToDirectionVolumeParams_Set_dist(MR_MeshToDirectionVolumeParams *_this, const MR_DistanceToMeshOptions *value);

// note that signMode is ignored in this algorithm
/// Returns a mutable pointer to a member variable of class `MR::MeshToDirectionVolumeParams` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DistanceToMeshOptions *MR_MeshToDirectionVolumeParams_GetMutable_dist(MR_MeshToDirectionVolumeParams *_this);

/// Returns a pointer to a member variable of class `MR::MeshToDirectionVolumeParams` named `projector`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_MR_IPointsToMeshProjector *MR_MeshToDirectionVolumeParams_Get_projector(const MR_MeshToDirectionVolumeParams *_this);

/// Modifies a member variable of class `MR::MeshToDirectionVolumeParams` named `projector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshToDirectionVolumeParams_Set_projector(MR_MeshToDirectionVolumeParams *_this, MR_PassBy value_pass_by, MR_std_shared_ptr_MR_IPointsToMeshProjector *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshToDirectionVolumeParams` named `projector`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_shared_ptr_MR_IPointsToMeshProjector *MR_MeshToDirectionVolumeParams_GetMutable_projector(MR_MeshToDirectionVolumeParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshToDirectionVolumeParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshToDirectionVolumeParams *MR_MeshToDirectionVolumeParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshToDirectionVolumeParams_DestroyArray()`.
/// Use `MR_MeshToDirectionVolumeParams_OffsetMutablePtr()` and `MR_MeshToDirectionVolumeParams_OffsetPtr()` to access the array elements.
MRC_API MR_MeshToDirectionVolumeParams *MR_MeshToDirectionVolumeParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshToDirectionVolumeParams` elementwise.
/// Parameter `dist` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshToDirectionVolumeParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshToDirectionVolumeParams *MR_MeshToDirectionVolumeParams_ConstructFrom(MR_PassBy vol_pass_by, MR_DistanceVolumeParams *vol, const MR_DistanceToMeshOptions *dist, MR_PassBy projector_pass_by, MR_std_shared_ptr_MR_IPointsToMeshProjector *projector);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshToDirectionVolumeParams *MR_MeshToDirectionVolumeParams_OffsetPtr(const MR_MeshToDirectionVolumeParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshToDirectionVolumeParams *MR_MeshToDirectionVolumeParams_OffsetMutablePtr(MR_MeshToDirectionVolumeParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshToDirectionVolumeParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshToDirectionVolumeParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshToDirectionVolumeParams *MR_MeshToDirectionVolumeParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MeshToDirectionVolumeParams *_other);

/// Destroys a heap-allocated instance of `MR_MeshToDirectionVolumeParams`. Does nothing if the pointer is null.
MRC_API void MR_MeshToDirectionVolumeParams_Destroy(const MR_MeshToDirectionVolumeParams *_this);

/// Destroys a heap-allocated array of `MR_MeshToDirectionVolumeParams`. Does nothing if the pointer is null.
MRC_API void MR_MeshToDirectionVolumeParams_DestroyArray(const MR_MeshToDirectionVolumeParams *_this);

/// Generated from a method of class `MR::MeshToDirectionVolumeParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshToDirectionVolumeParams *MR_MeshToDirectionVolumeParams_AssignFromAnother(MR_MeshToDirectionVolumeParams *_this, MR_PassBy _other_pass_by, MR_MeshToDirectionVolumeParams *_other);

/// Converts mesh into 4d voxels, so that each cell in 3d space holds the direction from the closest point on mesh to the cell position.
/// Resulting volume is encoded by 3 separate 3d volumes, corresponding to `x`, `y` and `z` components of vectors respectively.
/// \param params Expected to have valid (not null) projector, with invoked method \ref IPointsToMeshProjector::updateMeshData
/// Generated from function `MR::meshToDirectionVolume`.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_array_MR_SimpleVolumeMinMax_3_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_array_MR_SimpleVolumeMinMax_3_std_string *MR_meshToDirectionVolume(const MR_MeshToDirectionVolumeParams *params);

#ifdef __cplusplus
} // extern "C"
#endif
