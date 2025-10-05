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

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_Polyline3 MR_Polyline3; // Defined in `#include <MRCMesh/MRPolyline.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Vector_MR_VoxelId_MR_FaceId MR_Vector_MR_VoxelId_MR_FaceId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_expected_MR_Mesh_std_string MR_expected_MR_Mesh_std_string; // Defined in `#include <MRCMisc/expected_MR_Mesh_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_shared_ptr_MR_IFastWindingNumber MR_std_shared_ptr_MR_IFastWindingNumber; // Defined in `#include <MRCMisc/std_shared_ptr_MR_IFastWindingNumber.h>`.


/// Generated from class `MR::BaseShellParameters`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::OffsetParameters`
///   Indirect: (non-virtual)
///     `MR::GeneralOffsetParameters`
///     `MR::SharpOffsetParameters`
typedef struct MR_BaseShellParameters MR_BaseShellParameters;

/// Generated from class `MR::OffsetParameters`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::BaseShellParameters`
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::SharpOffsetParameters`
///   Indirect: (non-virtual)
///     `MR::GeneralOffsetParameters`
typedef struct MR_OffsetParameters MR_OffsetParameters;

/// Generated from class `MR::SharpOffsetParameters`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::OffsetParameters`
///   Indirect: (non-virtual)
///     `MR::BaseShellParameters`
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::GeneralOffsetParameters`
typedef struct MR_SharpOffsetParameters MR_SharpOffsetParameters;

/// allows the user to select in the parameters which offset algorithm to call
/// Generated from class `MR::GeneralOffsetParameters`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::SharpOffsetParameters`
///   Indirect: (non-virtual)
///     `MR::BaseShellParameters`
///     `MR::OffsetParameters`
typedef struct MR_GeneralOffsetParameters MR_GeneralOffsetParameters;

/// Size of voxel in grid conversions;
/// The user is responsible for setting some positive value here
/// Returns a pointer to a member variable of class `MR::BaseShellParameters` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_BaseShellParameters_Get_voxelSize(const MR_BaseShellParameters *_this);

/// Size of voxel in grid conversions;
/// The user is responsible for setting some positive value here
/// Modifies a member variable of class `MR::BaseShellParameters` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BaseShellParameters_Set_voxelSize(MR_BaseShellParameters *_this, float value);

/// Size of voxel in grid conversions;
/// The user is responsible for setting some positive value here
/// Returns a mutable pointer to a member variable of class `MR::BaseShellParameters` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_BaseShellParameters_GetMutable_voxelSize(MR_BaseShellParameters *_this);

/// Progress callback
/// Returns a pointer to a member variable of class `MR::BaseShellParameters` named `callBack`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_BaseShellParameters_Get_callBack(const MR_BaseShellParameters *_this);

/// Progress callback
/// Modifies a member variable of class `MR::BaseShellParameters` named `callBack`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BaseShellParameters_Set_callBack(MR_BaseShellParameters *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// Progress callback
/// Returns a mutable pointer to a member variable of class `MR::BaseShellParameters` named `callBack`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_BaseShellParameters_GetMutable_callBack(MR_BaseShellParameters *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BaseShellParameters_Destroy()` to free it when you're done using it.
MRC_API MR_BaseShellParameters *MR_BaseShellParameters_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BaseShellParameters_DestroyArray()`.
/// Use `MR_BaseShellParameters_OffsetMutablePtr()` and `MR_BaseShellParameters_OffsetPtr()` to access the array elements.
MRC_API MR_BaseShellParameters *MR_BaseShellParameters_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::BaseShellParameters` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BaseShellParameters_Destroy()` to free it when you're done using it.
MRC_API MR_BaseShellParameters *MR_BaseShellParameters_ConstructFrom(float voxelSize, MR_PassBy callBack_pass_by, MR_std_function_bool_from_float *callBack);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BaseShellParameters *MR_BaseShellParameters_OffsetPtr(const MR_BaseShellParameters *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BaseShellParameters *MR_BaseShellParameters_OffsetMutablePtr(MR_BaseShellParameters *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::BaseShellParameters` to a derived class `MR::GeneralOffsetParameters`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_GeneralOffsetParameters *MR_BaseShellParameters_StaticDowncastTo_MR_GeneralOffsetParameters(const MR_BaseShellParameters *object);

/// Downcasts an instance of `MR::BaseShellParameters` to a derived class `MR::GeneralOffsetParameters`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_GeneralOffsetParameters *MR_BaseShellParameters_MutableStaticDowncastTo_MR_GeneralOffsetParameters(MR_BaseShellParameters *object);

/// Downcasts an instance of `MR::BaseShellParameters` to a derived class `MR::OffsetParameters`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_OffsetParameters *MR_BaseShellParameters_StaticDowncastTo_MR_OffsetParameters(const MR_BaseShellParameters *object);

/// Downcasts an instance of `MR::BaseShellParameters` to a derived class `MR::OffsetParameters`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_OffsetParameters *MR_BaseShellParameters_MutableStaticDowncastTo_MR_OffsetParameters(MR_BaseShellParameters *object);

/// Downcasts an instance of `MR::BaseShellParameters` to a derived class `MR::SharpOffsetParameters`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_SharpOffsetParameters *MR_BaseShellParameters_StaticDowncastTo_MR_SharpOffsetParameters(const MR_BaseShellParameters *object);

/// Downcasts an instance of `MR::BaseShellParameters` to a derived class `MR::SharpOffsetParameters`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_SharpOffsetParameters *MR_BaseShellParameters_MutableStaticDowncastTo_MR_SharpOffsetParameters(MR_BaseShellParameters *object);

/// Generated from a constructor of class `MR::BaseShellParameters`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BaseShellParameters_Destroy()` to free it when you're done using it.
MRC_API MR_BaseShellParameters *MR_BaseShellParameters_ConstructFromAnother(MR_PassBy _other_pass_by, MR_BaseShellParameters *_other);

/// Destroys a heap-allocated instance of `MR_BaseShellParameters`. Does nothing if the pointer is null.
MRC_API void MR_BaseShellParameters_Destroy(const MR_BaseShellParameters *_this);

/// Destroys a heap-allocated array of `MR_BaseShellParameters`. Does nothing if the pointer is null.
MRC_API void MR_BaseShellParameters_DestroyArray(const MR_BaseShellParameters *_this);

/// Generated from a method of class `MR::BaseShellParameters` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BaseShellParameters *MR_BaseShellParameters_AssignFromAnother(MR_BaseShellParameters *_this, MR_PassBy _other_pass_by, MR_BaseShellParameters *_other);

/// computes size of a cubical voxel to get approximately given number of voxels during rasterization
/// Generated from function `MR::suggestVoxelSize`.
/// Parameter `mp` can not be null. It is a single object.
MRC_API float MR_suggestVoxelSize(const MR_MeshPart *mp, float approxNumVoxels);

/// determines the method to compute distance sign
/// Returns a pointer to a member variable of class `MR::OffsetParameters` named `signDetectionMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_SignDetectionMode *MR_OffsetParameters_Get_signDetectionMode(const MR_OffsetParameters *_this);

/// determines the method to compute distance sign
/// Modifies a member variable of class `MR::OffsetParameters` named `signDetectionMode`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OffsetParameters_Set_signDetectionMode(MR_OffsetParameters *_this, MR_SignDetectionMode value);

/// determines the method to compute distance sign
/// Returns a mutable pointer to a member variable of class `MR::OffsetParameters` named `signDetectionMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SignDetectionMode *MR_OffsetParameters_GetMutable_signDetectionMode(MR_OffsetParameters *_this);

/// whether to construct closed mesh in signMode = SignDetectionModeShort::HoleWindingNumber
/// Returns a pointer to a member variable of class `MR::OffsetParameters` named `closeHolesInHoleWindingNumber`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_OffsetParameters_Get_closeHolesInHoleWindingNumber(const MR_OffsetParameters *_this);

/// whether to construct closed mesh in signMode = SignDetectionModeShort::HoleWindingNumber
/// Modifies a member variable of class `MR::OffsetParameters` named `closeHolesInHoleWindingNumber`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OffsetParameters_Set_closeHolesInHoleWindingNumber(MR_OffsetParameters *_this, bool value);

/// whether to construct closed mesh in signMode = SignDetectionModeShort::HoleWindingNumber
/// Returns a mutable pointer to a member variable of class `MR::OffsetParameters` named `closeHolesInHoleWindingNumber`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_OffsetParameters_GetMutable_closeHolesInHoleWindingNumber(MR_OffsetParameters *_this);

/// only for SignDetectionMode::HoleWindingRule:
/// positive distance if winding number below or equal this threshold;
/// ideal threshold: 0.5 for closed meshes; 0.0 for planar meshes
/// Returns a pointer to a member variable of class `MR::OffsetParameters` named `windingNumberThreshold`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_OffsetParameters_Get_windingNumberThreshold(const MR_OffsetParameters *_this);

/// only for SignDetectionMode::HoleWindingRule:
/// positive distance if winding number below or equal this threshold;
/// ideal threshold: 0.5 for closed meshes; 0.0 for planar meshes
/// Modifies a member variable of class `MR::OffsetParameters` named `windingNumberThreshold`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OffsetParameters_Set_windingNumberThreshold(MR_OffsetParameters *_this, float value);

/// only for SignDetectionMode::HoleWindingRule:
/// positive distance if winding number below or equal this threshold;
/// ideal threshold: 0.5 for closed meshes; 0.0 for planar meshes
/// Returns a mutable pointer to a member variable of class `MR::OffsetParameters` named `windingNumberThreshold`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_OffsetParameters_GetMutable_windingNumberThreshold(MR_OffsetParameters *_this);

/// only for SignDetectionMode::HoleWindingRule:
/// determines the precision of fast approximation: the more the better, minimum value is 1
/// Returns a pointer to a member variable of class `MR::OffsetParameters` named `windingNumberBeta`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_OffsetParameters_Get_windingNumberBeta(const MR_OffsetParameters *_this);

/// only for SignDetectionMode::HoleWindingRule:
/// determines the precision of fast approximation: the more the better, minimum value is 1
/// Modifies a member variable of class `MR::OffsetParameters` named `windingNumberBeta`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OffsetParameters_Set_windingNumberBeta(MR_OffsetParameters *_this, float value);

/// only for SignDetectionMode::HoleWindingRule:
/// determines the precision of fast approximation: the more the better, minimum value is 1
/// Returns a mutable pointer to a member variable of class `MR::OffsetParameters` named `windingNumberBeta`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_OffsetParameters_GetMutable_windingNumberBeta(MR_OffsetParameters *_this);

/// defines particular implementation of IFastWindingNumber interface that will compute windings. If it is not specified, default FastWindingNumber is used
/// this only used if signDetectionMode == SignDetectionMode::HoleWindingRule, otherwise it is ignored
/// providing this will disable memoryEfficient (as if memoryEfficient == false)
/// Returns a pointer to a member variable of class `MR::OffsetParameters` named `fwn`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_MR_IFastWindingNumber *MR_OffsetParameters_Get_fwn(const MR_OffsetParameters *_this);

/// defines particular implementation of IFastWindingNumber interface that will compute windings. If it is not specified, default FastWindingNumber is used
/// this only used if signDetectionMode == SignDetectionMode::HoleWindingRule, otherwise it is ignored
/// providing this will disable memoryEfficient (as if memoryEfficient == false)
/// Modifies a member variable of class `MR::OffsetParameters` named `fwn`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OffsetParameters_Set_fwn(MR_OffsetParameters *_this, MR_PassBy value_pass_by, MR_std_shared_ptr_MR_IFastWindingNumber *value);

/// defines particular implementation of IFastWindingNumber interface that will compute windings. If it is not specified, default FastWindingNumber is used
/// this only used if signDetectionMode == SignDetectionMode::HoleWindingRule, otherwise it is ignored
/// providing this will disable memoryEfficient (as if memoryEfficient == false)
/// Returns a mutable pointer to a member variable of class `MR::OffsetParameters` named `fwn`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_shared_ptr_MR_IFastWindingNumber *MR_OffsetParameters_GetMutable_fwn(MR_OffsetParameters *_this);

/// use FunctionVolume for voxel grid representation:
///  - memory consumption for voxel storage is approx. (dims.z / (2 * thread_count)) lesser
///  - computations are about 15% slower (because some z-layers are computed twice)
/// this setting is ignored (as if memoryEfficient == false) if
///  a) signDetectionMode = SignDetectionMode::OpenVDB, or
///  b) \ref fwn is provided (CUDA computations require full memory storage)
/// used only by \ref mcOffsetMesh and \ref sharpOffsetMesh methods
/// Returns a pointer to a member variable of class `MR::OffsetParameters` named `memoryEfficient`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_OffsetParameters_Get_memoryEfficient(const MR_OffsetParameters *_this);

/// use FunctionVolume for voxel grid representation:
///  - memory consumption for voxel storage is approx. (dims.z / (2 * thread_count)) lesser
///  - computations are about 15% slower (because some z-layers are computed twice)
/// this setting is ignored (as if memoryEfficient == false) if
///  a) signDetectionMode = SignDetectionMode::OpenVDB, or
///  b) \ref fwn is provided (CUDA computations require full memory storage)
/// used only by \ref mcOffsetMesh and \ref sharpOffsetMesh methods
/// Modifies a member variable of class `MR::OffsetParameters` named `memoryEfficient`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OffsetParameters_Set_memoryEfficient(MR_OffsetParameters *_this, bool value);

/// use FunctionVolume for voxel grid representation:
///  - memory consumption for voxel storage is approx. (dims.z / (2 * thread_count)) lesser
///  - computations are about 15% slower (because some z-layers are computed twice)
/// this setting is ignored (as if memoryEfficient == false) if
///  a) signDetectionMode = SignDetectionMode::OpenVDB, or
///  b) \ref fwn is provided (CUDA computations require full memory storage)
/// used only by \ref mcOffsetMesh and \ref sharpOffsetMesh methods
/// Returns a mutable pointer to a member variable of class `MR::OffsetParameters` named `memoryEfficient`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_OffsetParameters_GetMutable_memoryEfficient(MR_OffsetParameters *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OffsetParameters_Destroy()` to free it when you're done using it.
MRC_API MR_OffsetParameters *MR_OffsetParameters_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_OffsetParameters_DestroyArray()`.
/// Use `MR_OffsetParameters_OffsetMutablePtr()` and `MR_OffsetParameters_OffsetPtr()` to access the array elements.
MRC_API MR_OffsetParameters *MR_OffsetParameters_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_OffsetParameters *MR_OffsetParameters_OffsetPtr(const MR_OffsetParameters *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_OffsetParameters *MR_OffsetParameters_OffsetMutablePtr(MR_OffsetParameters *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::OffsetParameters` to its base class `MR::BaseShellParameters`.
/// This version is acting on mutable pointers.
MRC_API const MR_BaseShellParameters *MR_OffsetParameters_UpcastTo_MR_BaseShellParameters(const MR_OffsetParameters *object);

/// Upcasts an instance of `MR::OffsetParameters` to its base class `MR::BaseShellParameters`.
MRC_API MR_BaseShellParameters *MR_OffsetParameters_MutableUpcastTo_MR_BaseShellParameters(MR_OffsetParameters *object);

/// Downcasts an instance of `MR::OffsetParameters` to a derived class `MR::GeneralOffsetParameters`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_GeneralOffsetParameters *MR_OffsetParameters_StaticDowncastTo_MR_GeneralOffsetParameters(const MR_OffsetParameters *object);

/// Downcasts an instance of `MR::OffsetParameters` to a derived class `MR::GeneralOffsetParameters`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_GeneralOffsetParameters *MR_OffsetParameters_MutableStaticDowncastTo_MR_GeneralOffsetParameters(MR_OffsetParameters *object);

/// Downcasts an instance of `MR::OffsetParameters` to a derived class `MR::SharpOffsetParameters`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_SharpOffsetParameters *MR_OffsetParameters_StaticDowncastTo_MR_SharpOffsetParameters(const MR_OffsetParameters *object);

/// Downcasts an instance of `MR::OffsetParameters` to a derived class `MR::SharpOffsetParameters`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_SharpOffsetParameters *MR_OffsetParameters_MutableStaticDowncastTo_MR_SharpOffsetParameters(MR_OffsetParameters *object);

/// Generated from a constructor of class `MR::OffsetParameters`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OffsetParameters_Destroy()` to free it when you're done using it.
MRC_API MR_OffsetParameters *MR_OffsetParameters_ConstructFromAnother(MR_PassBy _other_pass_by, MR_OffsetParameters *_other);

/// Destroys a heap-allocated instance of `MR_OffsetParameters`. Does nothing if the pointer is null.
MRC_API void MR_OffsetParameters_Destroy(const MR_OffsetParameters *_this);

/// Destroys a heap-allocated array of `MR_OffsetParameters`. Does nothing if the pointer is null.
MRC_API void MR_OffsetParameters_DestroyArray(const MR_OffsetParameters *_this);

/// Generated from a method of class `MR::OffsetParameters` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OffsetParameters *MR_OffsetParameters_AssignFromAnother(MR_OffsetParameters *_this, MR_PassBy _other_pass_by, MR_OffsetParameters *_other);

/// if non-null then created sharp edges will be saved here
/// Returns a pointer to a member variable of class `MR::SharpOffsetParameters` named `outSharpEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *const *MR_SharpOffsetParameters_Get_outSharpEdges(const MR_SharpOffsetParameters *_this);

/// if non-null then created sharp edges will be saved here
/// Modifies a member variable of class `MR::SharpOffsetParameters` named `outSharpEdges`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SharpOffsetParameters_Set_outSharpEdges(MR_SharpOffsetParameters *_this, MR_UndirectedEdgeBitSet *value);

/// if non-null then created sharp edges will be saved here
/// Returns a mutable pointer to a member variable of class `MR::SharpOffsetParameters` named `outSharpEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet **MR_SharpOffsetParameters_GetMutable_outSharpEdges(MR_SharpOffsetParameters *_this);

/// minimal surface deviation to introduce new vertex in a voxel, measured in voxelSize
/// Returns a pointer to a member variable of class `MR::SharpOffsetParameters` named `minNewVertDev`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SharpOffsetParameters_Get_minNewVertDev(const MR_SharpOffsetParameters *_this);

/// minimal surface deviation to introduce new vertex in a voxel, measured in voxelSize
/// Modifies a member variable of class `MR::SharpOffsetParameters` named `minNewVertDev`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SharpOffsetParameters_Set_minNewVertDev(MR_SharpOffsetParameters *_this, float value);

/// minimal surface deviation to introduce new vertex in a voxel, measured in voxelSize
/// Returns a mutable pointer to a member variable of class `MR::SharpOffsetParameters` named `minNewVertDev`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SharpOffsetParameters_GetMutable_minNewVertDev(MR_SharpOffsetParameters *_this);

/// maximal surface deviation to introduce new rank 2 vertex (on intersection of 2 planes), measured in voxelSize
/// Returns a pointer to a member variable of class `MR::SharpOffsetParameters` named `maxNewRank2VertDev`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SharpOffsetParameters_Get_maxNewRank2VertDev(const MR_SharpOffsetParameters *_this);

/// maximal surface deviation to introduce new rank 2 vertex (on intersection of 2 planes), measured in voxelSize
/// Modifies a member variable of class `MR::SharpOffsetParameters` named `maxNewRank2VertDev`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SharpOffsetParameters_Set_maxNewRank2VertDev(MR_SharpOffsetParameters *_this, float value);

/// maximal surface deviation to introduce new rank 2 vertex (on intersection of 2 planes), measured in voxelSize
/// Returns a mutable pointer to a member variable of class `MR::SharpOffsetParameters` named `maxNewRank2VertDev`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SharpOffsetParameters_GetMutable_maxNewRank2VertDev(MR_SharpOffsetParameters *_this);

/// maximal surface deviation to introduce new rank 3 vertex (on intersection of 3 planes), measured in voxelSize
/// Returns a pointer to a member variable of class `MR::SharpOffsetParameters` named `maxNewRank3VertDev`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SharpOffsetParameters_Get_maxNewRank3VertDev(const MR_SharpOffsetParameters *_this);

/// maximal surface deviation to introduce new rank 3 vertex (on intersection of 3 planes), measured in voxelSize
/// Modifies a member variable of class `MR::SharpOffsetParameters` named `maxNewRank3VertDev`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SharpOffsetParameters_Set_maxNewRank3VertDev(MR_SharpOffsetParameters *_this, float value);

/// maximal surface deviation to introduce new rank 3 vertex (on intersection of 3 planes), measured in voxelSize
/// Returns a mutable pointer to a member variable of class `MR::SharpOffsetParameters` named `maxNewRank3VertDev`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SharpOffsetParameters_GetMutable_maxNewRank3VertDev(MR_SharpOffsetParameters *_this);

/// correct positions of the input vertices using reference mesh by not more than this distance, measured in voxelSize;
/// big correction can be wrong and result from self-intersections in the reference mesh
/// Returns a pointer to a member variable of class `MR::SharpOffsetParameters` named `maxOldVertPosCorrection`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SharpOffsetParameters_Get_maxOldVertPosCorrection(const MR_SharpOffsetParameters *_this);

/// correct positions of the input vertices using reference mesh by not more than this distance, measured in voxelSize;
/// big correction can be wrong and result from self-intersections in the reference mesh
/// Modifies a member variable of class `MR::SharpOffsetParameters` named `maxOldVertPosCorrection`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SharpOffsetParameters_Set_maxOldVertPosCorrection(MR_SharpOffsetParameters *_this, float value);

/// correct positions of the input vertices using reference mesh by not more than this distance, measured in voxelSize;
/// big correction can be wrong and result from self-intersections in the reference mesh
/// Returns a mutable pointer to a member variable of class `MR::SharpOffsetParameters` named `maxOldVertPosCorrection`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SharpOffsetParameters_GetMutable_maxOldVertPosCorrection(MR_SharpOffsetParameters *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SharpOffsetParameters_Destroy()` to free it when you're done using it.
MRC_API MR_SharpOffsetParameters *MR_SharpOffsetParameters_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SharpOffsetParameters_DestroyArray()`.
/// Use `MR_SharpOffsetParameters_OffsetMutablePtr()` and `MR_SharpOffsetParameters_OffsetPtr()` to access the array elements.
MRC_API MR_SharpOffsetParameters *MR_SharpOffsetParameters_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SharpOffsetParameters *MR_SharpOffsetParameters_OffsetPtr(const MR_SharpOffsetParameters *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SharpOffsetParameters *MR_SharpOffsetParameters_OffsetMutablePtr(MR_SharpOffsetParameters *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::SharpOffsetParameters` to its base class `MR::BaseShellParameters`.
/// This version is acting on mutable pointers.
MRC_API const MR_BaseShellParameters *MR_SharpOffsetParameters_UpcastTo_MR_BaseShellParameters(const MR_SharpOffsetParameters *object);

/// Upcasts an instance of `MR::SharpOffsetParameters` to its base class `MR::BaseShellParameters`.
MRC_API MR_BaseShellParameters *MR_SharpOffsetParameters_MutableUpcastTo_MR_BaseShellParameters(MR_SharpOffsetParameters *object);

/// Upcasts an instance of `MR::SharpOffsetParameters` to its base class `MR::OffsetParameters`.
/// This version is acting on mutable pointers.
MRC_API const MR_OffsetParameters *MR_SharpOffsetParameters_UpcastTo_MR_OffsetParameters(const MR_SharpOffsetParameters *object);

/// Upcasts an instance of `MR::SharpOffsetParameters` to its base class `MR::OffsetParameters`.
MRC_API MR_OffsetParameters *MR_SharpOffsetParameters_MutableUpcastTo_MR_OffsetParameters(MR_SharpOffsetParameters *object);

/// Downcasts an instance of `MR::SharpOffsetParameters` to a derived class `MR::GeneralOffsetParameters`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_GeneralOffsetParameters *MR_SharpOffsetParameters_StaticDowncastTo_MR_GeneralOffsetParameters(const MR_SharpOffsetParameters *object);

/// Downcasts an instance of `MR::SharpOffsetParameters` to a derived class `MR::GeneralOffsetParameters`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_GeneralOffsetParameters *MR_SharpOffsetParameters_MutableStaticDowncastTo_MR_GeneralOffsetParameters(MR_SharpOffsetParameters *object);

/// Generated from a constructor of class `MR::SharpOffsetParameters`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SharpOffsetParameters_Destroy()` to free it when you're done using it.
MRC_API MR_SharpOffsetParameters *MR_SharpOffsetParameters_ConstructFromAnother(MR_PassBy _other_pass_by, MR_SharpOffsetParameters *_other);

/// Destroys a heap-allocated instance of `MR_SharpOffsetParameters`. Does nothing if the pointer is null.
MRC_API void MR_SharpOffsetParameters_Destroy(const MR_SharpOffsetParameters *_this);

/// Destroys a heap-allocated array of `MR_SharpOffsetParameters`. Does nothing if the pointer is null.
MRC_API void MR_SharpOffsetParameters_DestroyArray(const MR_SharpOffsetParameters *_this);

/// Generated from a method of class `MR::SharpOffsetParameters` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SharpOffsetParameters *MR_SharpOffsetParameters_AssignFromAnother(MR_SharpOffsetParameters *_this, MR_PassBy _other_pass_by, MR_SharpOffsetParameters *_other);

/// Offsets mesh by converting it to distance field in voxels using OpenVDB library,
/// signDetectionMode = Unsigned(from OpenVDB) | OpenVDB | HoleWindingRule,
/// and then converts back using OpenVDB library (dual marching cubes),
/// so result mesh is always closed
/// Generated from function `MR::offsetMesh`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_offsetMesh(const MR_MeshPart *mp, float offset, const MR_OffsetParameters *params);

/// Offsets mesh by converting it to voxels and back two times
/// only closed meshes allowed (only Offset mode)
/// typically offsetA and offsetB have distinct signs
/// Generated from function `MR::doubleOffsetMesh`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_doubleOffsetMesh(const MR_MeshPart *mp, float offsetA, float offsetB, const MR_OffsetParameters *params);

/// Offsets mesh by converting it to distance field in voxels (using OpenVDB library if SignDetectionMode::OpenVDB or our implementation otherwise)
/// and back using standard Marching Cubes, as opposed to Dual Marching Cubes in offsetMesh(...)
/// Generated from function `MR::mcOffsetMesh`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `outMap` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_mcOffsetMesh(const MR_MeshPart *mp, float offset, const MR_OffsetParameters *params, MR_Vector_MR_VoxelId_MR_FaceId *outMap);

/// Constructs a shell around selected mesh region with the properties that every point on the shall must
///  1. be located not further than given distance from selected mesh part,
///  2. be located not closer to not-selected mesh part than to selected mesh part.
/// Generated from function `MR::mcShellMeshRegion`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Parameter `outMap` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_mcShellMeshRegion(const MR_Mesh *mesh, const MR_FaceBitSet *region, float offset, const MR_BaseShellParameters *params, MR_Vector_MR_VoxelId_MR_FaceId *outMap);

/// Offsets mesh by converting it to voxels and back
/// post process result using reference mesh to sharpen features
/// Generated from function `MR::sharpOffsetMesh`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_sharpOffsetMesh(const MR_MeshPart *mp, float offset, const MR_SharpOffsetParameters *params);

/// Returns a pointer to a member variable of class `MR::GeneralOffsetParameters` named `mode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_OffsetMode *MR_GeneralOffsetParameters_Get_mode(const MR_GeneralOffsetParameters *_this);

/// Modifies a member variable of class `MR::GeneralOffsetParameters` named `mode`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GeneralOffsetParameters_Set_mode(MR_GeneralOffsetParameters *_this, MR_OffsetMode value);

/// Returns a mutable pointer to a member variable of class `MR::GeneralOffsetParameters` named `mode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OffsetMode *MR_GeneralOffsetParameters_GetMutable_mode(MR_GeneralOffsetParameters *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GeneralOffsetParameters_Destroy()` to free it when you're done using it.
MRC_API MR_GeneralOffsetParameters *MR_GeneralOffsetParameters_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_GeneralOffsetParameters_DestroyArray()`.
/// Use `MR_GeneralOffsetParameters_OffsetMutablePtr()` and `MR_GeneralOffsetParameters_OffsetPtr()` to access the array elements.
MRC_API MR_GeneralOffsetParameters *MR_GeneralOffsetParameters_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_GeneralOffsetParameters *MR_GeneralOffsetParameters_OffsetPtr(const MR_GeneralOffsetParameters *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_GeneralOffsetParameters *MR_GeneralOffsetParameters_OffsetMutablePtr(MR_GeneralOffsetParameters *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::GeneralOffsetParameters` to its base class `MR::BaseShellParameters`.
/// This version is acting on mutable pointers.
MRC_API const MR_BaseShellParameters *MR_GeneralOffsetParameters_UpcastTo_MR_BaseShellParameters(const MR_GeneralOffsetParameters *object);

/// Upcasts an instance of `MR::GeneralOffsetParameters` to its base class `MR::BaseShellParameters`.
MRC_API MR_BaseShellParameters *MR_GeneralOffsetParameters_MutableUpcastTo_MR_BaseShellParameters(MR_GeneralOffsetParameters *object);

/// Upcasts an instance of `MR::GeneralOffsetParameters` to its base class `MR::OffsetParameters`.
/// This version is acting on mutable pointers.
MRC_API const MR_OffsetParameters *MR_GeneralOffsetParameters_UpcastTo_MR_OffsetParameters(const MR_GeneralOffsetParameters *object);

/// Upcasts an instance of `MR::GeneralOffsetParameters` to its base class `MR::OffsetParameters`.
MRC_API MR_OffsetParameters *MR_GeneralOffsetParameters_MutableUpcastTo_MR_OffsetParameters(MR_GeneralOffsetParameters *object);

/// Upcasts an instance of `MR::GeneralOffsetParameters` to its base class `MR::SharpOffsetParameters`.
/// This version is acting on mutable pointers.
MRC_API const MR_SharpOffsetParameters *MR_GeneralOffsetParameters_UpcastTo_MR_SharpOffsetParameters(const MR_GeneralOffsetParameters *object);

/// Upcasts an instance of `MR::GeneralOffsetParameters` to its base class `MR::SharpOffsetParameters`.
MRC_API MR_SharpOffsetParameters *MR_GeneralOffsetParameters_MutableUpcastTo_MR_SharpOffsetParameters(MR_GeneralOffsetParameters *object);

/// Generated from a constructor of class `MR::GeneralOffsetParameters`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GeneralOffsetParameters_Destroy()` to free it when you're done using it.
MRC_API MR_GeneralOffsetParameters *MR_GeneralOffsetParameters_ConstructFromAnother(MR_PassBy _other_pass_by, MR_GeneralOffsetParameters *_other);

/// Destroys a heap-allocated instance of `MR_GeneralOffsetParameters`. Does nothing if the pointer is null.
MRC_API void MR_GeneralOffsetParameters_Destroy(const MR_GeneralOffsetParameters *_this);

/// Destroys a heap-allocated array of `MR_GeneralOffsetParameters`. Does nothing if the pointer is null.
MRC_API void MR_GeneralOffsetParameters_DestroyArray(const MR_GeneralOffsetParameters *_this);

/// Generated from a method of class `MR::GeneralOffsetParameters` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GeneralOffsetParameters *MR_GeneralOffsetParameters_AssignFromAnother(MR_GeneralOffsetParameters *_this, MR_PassBy _other_pass_by, MR_GeneralOffsetParameters *_other);

/// Offsets mesh by converting it to voxels and back using one of three modes specified in the parameters
/// \snippet cpp-examples/MeshOffset.dox.cpp 0
/// Generated from function `MR::generalOffsetMesh`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_generalOffsetMesh(const MR_MeshPart *mp, float offset, const MR_GeneralOffsetParameters *params);

/// in case of positive offset, returns the mesh consisting of offset mesh merged with inversed original mesh (thickening mode);
/// in case of negative offset, returns the mesh consisting of inversed offset mesh merged with original mesh (hollowing mode);
/// if your input mesh is open then please specify params.signDetectionMode = SignDetectionMode::Unsigned, and you will get open mesh (with several components) on output
/// if your input mesh is closed then please specify another sign detection mode, and you will get closed mesh (with several components) on output;
/// Generated from function `MR::thickenMesh`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_thickenMesh(const MR_Mesh *mesh, float offset, const MR_GeneralOffsetParameters *params);

/// offsets given MeshPart in one direction only (positive or negative)
/// if your input mesh is open then please specify params.signDetectionMode = SignDetectionMode::Unsigned
/// if your input mesh is closed this function is equivalent to `generalOffsetMesh`, but in SignDetectionMode::Unsigned mode it will only keep one side (just like for open mesh)
/// unlike `thickenMesh` this functions does not keep original mesh in result
/// Generated from function `MR::offsetOneDirection`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_offsetOneDirection(const MR_MeshPart *mp, float offset, const MR_GeneralOffsetParameters *params);

/// Offsets polyline by converting it to voxels and building iso-surface
/// do offset in all directions
/// so result mesh is always closed
/// params.signDetectionMode is ignored (always assumed SignDetectionMode::Unsigned)
/// Generated from function `MR::offsetPolyline`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_offsetPolyline(const MR_Polyline3 *polyline, float offset, const MR_OffsetParameters *params);

#ifdef __cplusplus
} // extern "C"
#endif
