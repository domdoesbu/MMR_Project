// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_PointCloudPart MR_PointCloudPart; // Defined in `#include <MRCMesh/MRPointCloudPart.h>`.
typedef struct MR_Vector_MR_ModelPointsData_MR_ObjId MR_Vector_MR_ModelPointsData_MR_ObjId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_optional_MR_VertBitSet MR_std_optional_MR_VertBitSet; // Defined in `#include <MRCMisc/std_optional_MR_VertBitSet.h>`.
typedef struct MR_std_optional_std_vector_MR_ObjVertId MR_std_optional_std_vector_MR_ObjVertId; // Defined in `#include <MRCMisc/std_optional_std_vector_MR_ObjVertId.h>`.


/// structure to contain pointers to model data
/// Generated from class `MR::ModelPointsData`.
typedef struct MR_ModelPointsData MR_ModelPointsData;

/// Generated from class `MR::ObjVertId`.
typedef struct MR_ObjVertId
{
    MR_ObjId objId;
    MR_VertId vId;
} MR_ObjVertId;

/// performs sampling of mesh vertices;
/// subdivides mesh bounding box on voxels of approximately given size and returns at most one vertex per voxel;
/// returns std::nullopt if it was terminated by the callback
/// Generated from function `MR::verticesGridSampling`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_VertBitSet *MR_verticesGridSampling(const MR_MeshPart *mp, float voxelSize, const MR_std_function_bool_from_float *cb);

/// performs sampling of cloud points;
/// subdivides point cloud bounding box on voxels of approximately given size and returns at most one point per voxel;
/// returns std::nullopt if it was terminated by the callback
/// Generated from function `MR::pointGridSampling`.
/// Parameter `pcp` can not be null. It is a single object.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_VertBitSet *MR_pointGridSampling(const MR_PointCloudPart *pcp, float voxelSize, const MR_std_function_bool_from_float *cb);

/// all points of model
/// Returns a pointer to a member variable of class `MR::ModelPointsData` named `points`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords *const *MR_ModelPointsData_Get_points(const MR_ModelPointsData *_this);

/// all points of model
/// Modifies a member variable of class `MR::ModelPointsData` named `points`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ModelPointsData_Set_points(MR_ModelPointsData *_this, const MR_VertCoords *value);

/// all points of model
/// Returns a mutable pointer to a member variable of class `MR::ModelPointsData` named `points`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords **MR_ModelPointsData_GetMutable_points(MR_ModelPointsData *_this);

/// bitset of valid points
/// Returns a pointer to a member variable of class `MR::ModelPointsData` named `validPoints`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *const *MR_ModelPointsData_Get_validPoints(const MR_ModelPointsData *_this);

/// bitset of valid points
/// Modifies a member variable of class `MR::ModelPointsData` named `validPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ModelPointsData_Set_validPoints(MR_ModelPointsData *_this, const MR_VertBitSet *value);

/// bitset of valid points
/// Returns a mutable pointer to a member variable of class `MR::ModelPointsData` named `validPoints`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet **MR_ModelPointsData_GetMutable_validPoints(MR_ModelPointsData *_this);

/// model world xf
/// Returns a pointer to a member variable of class `MR::ModelPointsData` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *const *MR_ModelPointsData_Get_xf(const MR_ModelPointsData *_this);

/// model world xf
/// Modifies a member variable of class `MR::ModelPointsData` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ModelPointsData_Set_xf(MR_ModelPointsData *_this, const MR_AffineXf3f *value);

/// model world xf
/// Returns a mutable pointer to a member variable of class `MR::ModelPointsData` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f **MR_ModelPointsData_GetMutable_xf(MR_ModelPointsData *_this);

/// if present this value will override ObjId in result ObjVertId
/// Returns a pointer to a member variable of class `MR::ModelPointsData` named `fakeObjId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjId *MR_ModelPointsData_Get_fakeObjId(const MR_ModelPointsData *_this);

/// if present this value will override ObjId in result ObjVertId
/// Modifies a member variable of class `MR::ModelPointsData` named `fakeObjId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ModelPointsData_Set_fakeObjId(MR_ModelPointsData *_this, MR_ObjId value);

/// if present this value will override ObjId in result ObjVertId
/// Returns a mutable pointer to a member variable of class `MR::ModelPointsData` named `fakeObjId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjId *MR_ModelPointsData_GetMutable_fakeObjId(MR_ModelPointsData *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ModelPointsData_Destroy()` to free it when you're done using it.
MRC_API MR_ModelPointsData *MR_ModelPointsData_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ModelPointsData_DestroyArray()`.
/// Use `MR_ModelPointsData_OffsetMutablePtr()` and `MR_ModelPointsData_OffsetPtr()` to access the array elements.
MRC_API MR_ModelPointsData *MR_ModelPointsData_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::ModelPointsData` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ModelPointsData_Destroy()` to free it when you're done using it.
MRC_API MR_ModelPointsData *MR_ModelPointsData_ConstructFrom(const MR_VertCoords *points, const MR_VertBitSet *validPoints, const MR_AffineXf3f *xf, MR_ObjId fakeObjId);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ModelPointsData *MR_ModelPointsData_OffsetPtr(const MR_ModelPointsData *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ModelPointsData *MR_ModelPointsData_OffsetMutablePtr(MR_ModelPointsData *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ModelPointsData`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ModelPointsData_Destroy()` to free it when you're done using it.
MRC_API MR_ModelPointsData *MR_ModelPointsData_ConstructFromAnother(const MR_ModelPointsData *_other);

/// Destroys a heap-allocated instance of `MR_ModelPointsData`. Does nothing if the pointer is null.
MRC_API void MR_ModelPointsData_Destroy(const MR_ModelPointsData *_this);

/// Destroys a heap-allocated array of `MR_ModelPointsData`. Does nothing if the pointer is null.
MRC_API void MR_ModelPointsData_DestroyArray(const MR_ModelPointsData *_this);

/// Generated from a method of class `MR::ModelPointsData` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ModelPointsData *MR_ModelPointsData_AssignFromAnother(MR_ModelPointsData *_this, const MR_ModelPointsData *_other);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_ObjVertId MR_ObjVertId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ObjVertId_DestroyArray()`.
/// Use `MR_ObjVertId_OffsetMutablePtr()` and `MR_ObjVertId_OffsetPtr()` to access the array elements.
MRC_API MR_ObjVertId *MR_ObjVertId_DefaultConstructArray(size_t num_elems);

/// Generated from function `MR::operator==`.
/// Parameter `_1` can not be null. It is a single object.
/// Parameter `_2` can not be null. It is a single object.
MRC_API bool MR_equal_MR_ObjVertId(const MR_ObjVertId *_1, const MR_ObjVertId *_2);

/// performs sampling of several models respecting their world transformations
/// subdivides models bounding box on voxels of approximately given size and returns at most one point per voxel;
/// returns std::nullopt if it was terminated by the callback
/// Generated from function `MR::multiModelGridSampling`.
/// Parameter `models` can not be null. It is a single object.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_std_vector_MR_ObjVertId_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_std_vector_MR_ObjVertId *MR_multiModelGridSampling(const MR_Vector_MR_ModelPointsData_MR_ObjId *models, float voxelSize, const MR_std_function_bool_from_float *cb);

#ifdef __cplusplus
} // extern "C"
#endif
