// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_FloatGrid MR_FloatGrid; // Defined in `#include <MRCVoxels/MRFloatGrid.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_ObjectMesh MR_ObjectMesh; // Defined in `#include <MRCMesh/MRObjectMesh.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


// converter of meshes in or from signed distance volumetric representation
/// Generated from class `MR::MeshVoxelsConverter`.
typedef struct MR_MeshVoxelsConverter MR_MeshVoxelsConverter;

// both in and from
/// Returns a pointer to a member variable of class `MR::MeshVoxelsConverter` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MeshVoxelsConverter_Get_voxelSize(const MR_MeshVoxelsConverter *_this);

// both in and from
/// Modifies a member variable of class `MR::MeshVoxelsConverter` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshVoxelsConverter_Set_voxelSize(MR_MeshVoxelsConverter *_this, float value);

// both in and from
/// Returns a mutable pointer to a member variable of class `MR::MeshVoxelsConverter` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MeshVoxelsConverter_GetMutable_voxelSize(MR_MeshVoxelsConverter *_this);

// number voxels around surface to calculate distance in (should be positive)
/// Returns a pointer to a member variable of class `MR::MeshVoxelsConverter` named `surfaceOffset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MeshVoxelsConverter_Get_surfaceOffset(const MR_MeshVoxelsConverter *_this);

// number voxels around surface to calculate distance in (should be positive)
/// Modifies a member variable of class `MR::MeshVoxelsConverter` named `surfaceOffset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshVoxelsConverter_Set_surfaceOffset(MR_MeshVoxelsConverter *_this, float value);

// number voxels around surface to calculate distance in (should be positive)
/// Returns a mutable pointer to a member variable of class `MR::MeshVoxelsConverter` named `surfaceOffset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MeshVoxelsConverter_GetMutable_surfaceOffset(MR_MeshVoxelsConverter *_this);

/// Returns a pointer to a member variable of class `MR::MeshVoxelsConverter` named `callBack`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_MeshVoxelsConverter_Get_callBack(const MR_MeshVoxelsConverter *_this);

/// Modifies a member variable of class `MR::MeshVoxelsConverter` named `callBack`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshVoxelsConverter_Set_callBack(MR_MeshVoxelsConverter *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshVoxelsConverter` named `callBack`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_MeshVoxelsConverter_GetMutable_callBack(MR_MeshVoxelsConverter *_this);

// the value is in voxels (not in meters!), 0 for no-offset
/// Returns a pointer to a member variable of class `MR::MeshVoxelsConverter` named `offsetVoxels`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MeshVoxelsConverter_Get_offsetVoxels(const MR_MeshVoxelsConverter *_this);

// the value is in voxels (not in meters!), 0 for no-offset
/// Modifies a member variable of class `MR::MeshVoxelsConverter` named `offsetVoxels`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshVoxelsConverter_Set_offsetVoxels(MR_MeshVoxelsConverter *_this, float value);

// the value is in voxels (not in meters!), 0 for no-offset
/// Returns a mutable pointer to a member variable of class `MR::MeshVoxelsConverter` named `offsetVoxels`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MeshVoxelsConverter_GetMutable_offsetVoxels(MR_MeshVoxelsConverter *_this);

// [0, 1] ratio of combining small triangles into bigger ones
/// Returns a pointer to a member variable of class `MR::MeshVoxelsConverter` named `adaptivity`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MeshVoxelsConverter_Get_adaptivity(const MR_MeshVoxelsConverter *_this);

// [0, 1] ratio of combining small triangles into bigger ones
/// Modifies a member variable of class `MR::MeshVoxelsConverter` named `adaptivity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshVoxelsConverter_Set_adaptivity(MR_MeshVoxelsConverter *_this, float value);

// [0, 1] ratio of combining small triangles into bigger ones
/// Returns a mutable pointer to a member variable of class `MR::MeshVoxelsConverter` named `adaptivity`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MeshVoxelsConverter_GetMutable_adaptivity(MR_MeshVoxelsConverter *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshVoxelsConverter_Destroy()` to free it when you're done using it.
MRC_API MR_MeshVoxelsConverter *MR_MeshVoxelsConverter_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshVoxelsConverter_DestroyArray()`.
/// Use `MR_MeshVoxelsConverter_OffsetMutablePtr()` and `MR_MeshVoxelsConverter_OffsetPtr()` to access the array elements.
MRC_API MR_MeshVoxelsConverter *MR_MeshVoxelsConverter_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshVoxelsConverter` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshVoxelsConverter_Destroy()` to free it when you're done using it.
MRC_API MR_MeshVoxelsConverter *MR_MeshVoxelsConverter_ConstructFrom(float voxelSize, float surfaceOffset, MR_PassBy callBack_pass_by, MR_std_function_bool_from_float *callBack, float offsetVoxels, float adaptivity);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshVoxelsConverter *MR_MeshVoxelsConverter_OffsetPtr(const MR_MeshVoxelsConverter *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshVoxelsConverter *MR_MeshVoxelsConverter_OffsetMutablePtr(MR_MeshVoxelsConverter *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshVoxelsConverter`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshVoxelsConverter_Destroy()` to free it when you're done using it.
MRC_API MR_MeshVoxelsConverter *MR_MeshVoxelsConverter_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MeshVoxelsConverter *_other);

/// Destroys a heap-allocated instance of `MR_MeshVoxelsConverter`. Does nothing if the pointer is null.
MRC_API void MR_MeshVoxelsConverter_Destroy(const MR_MeshVoxelsConverter *_this);

/// Destroys a heap-allocated array of `MR_MeshVoxelsConverter`. Does nothing if the pointer is null.
MRC_API void MR_MeshVoxelsConverter_DestroyArray(const MR_MeshVoxelsConverter *_this);

/// Generated from a method of class `MR::MeshVoxelsConverter` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshVoxelsConverter *MR_MeshVoxelsConverter_AssignFromAnother(MR_MeshVoxelsConverter *_this, MR_PassBy _other_pass_by, MR_MeshVoxelsConverter *_other);

/// Generated from a method of class `MR::MeshVoxelsConverter` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `xf` is a single object.
/// Parameter `xf` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FloatGrid_Destroy()` to free it when you're done using it.
MRC_API MR_FloatGrid *MR_MeshVoxelsConverter_call_2(const MR_MeshVoxelsConverter *_this, const MR_MeshPart *mp, const MR_AffineXf3f *xf);

/// Generated from a method of class `MR::MeshVoxelsConverter` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FloatGrid_Destroy()` to free it when you're done using it.
MRC_API MR_FloatGrid *MR_MeshVoxelsConverter_call_1_MR_ObjectMesh(const MR_MeshVoxelsConverter *_this, const MR_ObjectMesh *obj);

/// Generated from a method of class `MR::MeshVoxelsConverter` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `grid` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_MeshVoxelsConverter_call_1_MR_FloatGrid(const MR_MeshVoxelsConverter *_this, const MR_FloatGrid *grid);

#ifdef __cplusplus
} // extern "C"
#endif
