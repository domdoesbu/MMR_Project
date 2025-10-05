// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector2.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshTriPoint MR_MeshTriPoint; // Defined in `#include <MRCMesh/MRMeshTriPoint.h>`.
typedef struct MR_expected_MR_Mesh_std_string MR_expected_MR_Mesh_std_string; // Defined in `#include <MRCMisc/expected_MR_Mesh_std_string.h>`.
typedef struct MR_std_vector_std_vector_MR_Vector2f MR_std_vector_std_vector_MR_Vector2f; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_Vector2f.h>`.


/// Parameters for aligning 2d contour onto mesh surface
/// Generated from class `MR::ContoursMeshAlignParams`.
typedef struct MR_ContoursMeshAlignParams MR_ContoursMeshAlignParams;

/// Point coordinate on mesh, represent position of contours box 'pivotPoint' on mesh
/// Returns a pointer to a member variable of class `MR::ContoursMeshAlignParams` named `meshPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshTriPoint *MR_ContoursMeshAlignParams_Get_meshPoint(const MR_ContoursMeshAlignParams *_this);

/// Point coordinate on mesh, represent position of contours box 'pivotPoint' on mesh
/// Modifies a member variable of class `MR::ContoursMeshAlignParams` named `meshPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_ContoursMeshAlignParams_Set_meshPoint(MR_ContoursMeshAlignParams *_this, const MR_MeshTriPoint *value);

/// Point coordinate on mesh, represent position of contours box 'pivotPoint' on mesh
/// Returns a mutable pointer to a member variable of class `MR::ContoursMeshAlignParams` named `meshPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshTriPoint *MR_ContoursMeshAlignParams_GetMutable_meshPoint(MR_ContoursMeshAlignParams *_this);

/// Relative position of 'meshPoint' in contours bounding box
/// (0, 0) - bottom left, (0, 1) - bottom right, (0.5, 0.5) - center, (1, 1) - top right
/// Returns a pointer to a member variable of class `MR::ContoursMeshAlignParams` named `pivotPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2f *MR_ContoursMeshAlignParams_Get_pivotPoint(const MR_ContoursMeshAlignParams *_this);

/// Relative position of 'meshPoint' in contours bounding box
/// (0, 0) - bottom left, (0, 1) - bottom right, (0.5, 0.5) - center, (1, 1) - top right
/// Modifies a member variable of class `MR::ContoursMeshAlignParams` named `pivotPoint`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ContoursMeshAlignParams_Set_pivotPoint(MR_ContoursMeshAlignParams *_this, MR_Vector2f value);

/// Relative position of 'meshPoint' in contours bounding box
/// (0, 0) - bottom left, (0, 1) - bottom right, (0.5, 0.5) - center, (1, 1) - top right
/// Returns a mutable pointer to a member variable of class `MR::ContoursMeshAlignParams` named `pivotPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2f *MR_ContoursMeshAlignParams_GetMutable_pivotPoint(MR_ContoursMeshAlignParams *_this);

/// Represents 2d contours xDirection in mesh space
/// Returns a pointer to a member variable of class `MR::ContoursMeshAlignParams` named `xDirection`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_ContoursMeshAlignParams_Get_xDirection(const MR_ContoursMeshAlignParams *_this);

/// Represents 2d contours xDirection in mesh space
/// Modifies a member variable of class `MR::ContoursMeshAlignParams` named `xDirection`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ContoursMeshAlignParams_Set_xDirection(MR_ContoursMeshAlignParams *_this, MR_Vector3f value);

/// Represents 2d contours xDirection in mesh space
/// Returns a mutable pointer to a member variable of class `MR::ContoursMeshAlignParams` named `xDirection`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_ContoursMeshAlignParams_GetMutable_xDirection(MR_ContoursMeshAlignParams *_this);

/// Represents contours normal in mesh space 
/// if nullptr - use mesh normal at 'meshPoint'
/// Returns a pointer to a member variable of class `MR::ContoursMeshAlignParams` named `zDirection`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *const *MR_ContoursMeshAlignParams_Get_zDirection(const MR_ContoursMeshAlignParams *_this);

/// Represents contours normal in mesh space 
/// if nullptr - use mesh normal at 'meshPoint'
/// Modifies a member variable of class `MR::ContoursMeshAlignParams` named `zDirection`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ContoursMeshAlignParams_Set_zDirection(MR_ContoursMeshAlignParams *_this, const MR_Vector3f *value);

/// Represents contours normal in mesh space 
/// if nullptr - use mesh normal at 'meshPoint'
/// Returns a mutable pointer to a member variable of class `MR::ContoursMeshAlignParams` named `zDirection`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f **MR_ContoursMeshAlignParams_GetMutable_zDirection(MR_ContoursMeshAlignParams *_this);

/// Contours extrusion in +z and -z direction
/// Returns a pointer to a member variable of class `MR::ContoursMeshAlignParams` named `extrusion`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ContoursMeshAlignParams_Get_extrusion(const MR_ContoursMeshAlignParams *_this);

/// Contours extrusion in +z and -z direction
/// Modifies a member variable of class `MR::ContoursMeshAlignParams` named `extrusion`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ContoursMeshAlignParams_Set_extrusion(MR_ContoursMeshAlignParams *_this, float value);

/// Contours extrusion in +z and -z direction
/// Returns a mutable pointer to a member variable of class `MR::ContoursMeshAlignParams` named `extrusion`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ContoursMeshAlignParams_GetMutable_extrusion(MR_ContoursMeshAlignParams *_this);

/// Maximum allowed shift along 'zDirection' for alignment
/// Returns a pointer to a member variable of class `MR::ContoursMeshAlignParams` named `maximumShift`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ContoursMeshAlignParams_Get_maximumShift(const MR_ContoursMeshAlignParams *_this);

/// Maximum allowed shift along 'zDirection' for alignment
/// Modifies a member variable of class `MR::ContoursMeshAlignParams` named `maximumShift`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ContoursMeshAlignParams_Set_maximumShift(MR_ContoursMeshAlignParams *_this, float value);

/// Maximum allowed shift along 'zDirection' for alignment
/// Returns a mutable pointer to a member variable of class `MR::ContoursMeshAlignParams` named `maximumShift`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ContoursMeshAlignParams_GetMutable_maximumShift(MR_ContoursMeshAlignParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ContoursMeshAlignParams_Destroy()` to free it when you're done using it.
MRC_API MR_ContoursMeshAlignParams *MR_ContoursMeshAlignParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ContoursMeshAlignParams_DestroyArray()`.
/// Use `MR_ContoursMeshAlignParams_OffsetMutablePtr()` and `MR_ContoursMeshAlignParams_OffsetPtr()` to access the array elements.
MRC_API MR_ContoursMeshAlignParams *MR_ContoursMeshAlignParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::ContoursMeshAlignParams` elementwise.
/// Parameter `meshPoint` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ContoursMeshAlignParams_Destroy()` to free it when you're done using it.
MRC_API MR_ContoursMeshAlignParams *MR_ContoursMeshAlignParams_ConstructFrom(const MR_MeshTriPoint *meshPoint, MR_Vector2f pivotPoint, MR_Vector3f xDirection, const MR_Vector3f *zDirection, float extrusion, float maximumShift);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ContoursMeshAlignParams *MR_ContoursMeshAlignParams_OffsetPtr(const MR_ContoursMeshAlignParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ContoursMeshAlignParams *MR_ContoursMeshAlignParams_OffsetMutablePtr(MR_ContoursMeshAlignParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ContoursMeshAlignParams`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ContoursMeshAlignParams_Destroy()` to free it when you're done using it.
MRC_API MR_ContoursMeshAlignParams *MR_ContoursMeshAlignParams_ConstructFromAnother(const MR_ContoursMeshAlignParams *_other);

/// Destroys a heap-allocated instance of `MR_ContoursMeshAlignParams`. Does nothing if the pointer is null.
MRC_API void MR_ContoursMeshAlignParams_Destroy(const MR_ContoursMeshAlignParams *_this);

/// Destroys a heap-allocated array of `MR_ContoursMeshAlignParams`. Does nothing if the pointer is null.
MRC_API void MR_ContoursMeshAlignParams_DestroyArray(const MR_ContoursMeshAlignParams *_this);

/// Generated from a method of class `MR::ContoursMeshAlignParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ContoursMeshAlignParams *MR_ContoursMeshAlignParams_AssignFromAnother(MR_ContoursMeshAlignParams *_this, const MR_ContoursMeshAlignParams *_other);

/// Creates planar mesh out of given contour and aligns it to given surface
/// Generated from function `MR::alignContoursToMesh`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `contours` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_alignContoursToMesh(const MR_Mesh *mesh, const MR_std_vector_std_vector_MR_Vector2f *contours, const MR_ContoursMeshAlignParams *params);

/// given a planar mesh with boundary on input located in plane XY, packs and extends it along Z on zOffset (along -Z if zOffset is negative) to make a volumetric closed mesh
/// note that this function also packs the mesh
/// Generated from function `MR::addBaseToPlanarMesh`.
/// Parameter `mesh` can not be null. It is a single object.
MRC_API void MR_addBaseToPlanarMesh(MR_Mesh *mesh, float zOffset);

#ifdef __cplusplus
} // extern "C"
#endif
