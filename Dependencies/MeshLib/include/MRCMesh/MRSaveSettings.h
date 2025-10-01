// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3d MR_AffineXf3d; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_Matrix3d MR_Matrix3d; // Defined in `#include <MRCMesh/MRMatrix3.h>`.
typedef struct MR_MeshSave_CtmSaveOptions MR_MeshSave_CtmSaveOptions; // Defined in `#include <MRCIOExtras/MRCtm.h>`.
typedef struct MR_MeshTexture MR_MeshTexture; // Defined in `#include <MRCMesh/MRMeshTexture.h>`.
typedef struct MR_PointsSave_CtmSavePointsOptions MR_PointsSave_CtmSavePointsOptions; // Defined in `#include <MRCIOExtras/MRCtm.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertColors MR_VertColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertCoords2 MR_VertCoords2; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// determines how to save points/lines/mesh
/// Generated from class `MR::SaveSettings`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::MeshSave::CtmSaveOptions`
///     `MR::PointsSave::CtmSavePointsOptions`
typedef struct MR_SaveSettings MR_SaveSettings;

/// maps valid points to packed sequential indices
/// Generated from class `MR::VertRenumber`.
typedef struct MR_VertRenumber MR_VertRenumber;

/// true - save valid points/vertices only (pack them);
/// false - save all points/vertices preserving their indices
/// Returns a pointer to a member variable of class `MR::SaveSettings` named `onlyValidPoints`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SaveSettings_Get_onlyValidPoints(const MR_SaveSettings *_this);

/// true - save valid points/vertices only (pack them);
/// false - save all points/vertices preserving their indices
/// Modifies a member variable of class `MR::SaveSettings` named `onlyValidPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SaveSettings_Set_onlyValidPoints(MR_SaveSettings *_this, bool value);

/// true - save valid points/vertices only (pack them);
/// false - save all points/vertices preserving their indices
/// Returns a mutable pointer to a member variable of class `MR::SaveSettings` named `onlyValidPoints`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SaveSettings_GetMutable_onlyValidPoints(MR_SaveSettings *_this);

/// whether to allow packing or shuffling of primitives (triangles in meshes or edges in polylines);
/// if packPrimitives=true, then ids of invalid primitives are reused by valid primitives
/// and higher compression (in .ctm format) can be reached if the order of triangles is changed;
/// if packPrimitives=false then all primitives maintain their ids, and invalid primitives are saved with all vertex ids equal to zero;
/// currently this flag affects the saving in .ctm and .ply formats only
/// Returns a pointer to a member variable of class `MR::SaveSettings` named `packPrimitives`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SaveSettings_Get_packPrimitives(const MR_SaveSettings *_this);

/// whether to allow packing or shuffling of primitives (triangles in meshes or edges in polylines);
/// if packPrimitives=true, then ids of invalid primitives are reused by valid primitives
/// and higher compression (in .ctm format) can be reached if the order of triangles is changed;
/// if packPrimitives=false then all primitives maintain their ids, and invalid primitives are saved with all vertex ids equal to zero;
/// currently this flag affects the saving in .ctm and .ply formats only
/// Modifies a member variable of class `MR::SaveSettings` named `packPrimitives`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SaveSettings_Set_packPrimitives(MR_SaveSettings *_this, bool value);

/// whether to allow packing or shuffling of primitives (triangles in meshes or edges in polylines);
/// if packPrimitives=true, then ids of invalid primitives are reused by valid primitives
/// and higher compression (in .ctm format) can be reached if the order of triangles is changed;
/// if packPrimitives=false then all primitives maintain their ids, and invalid primitives are saved with all vertex ids equal to zero;
/// currently this flag affects the saving in .ctm and .ply formats only
/// Returns a mutable pointer to a member variable of class `MR::SaveSettings` named `packPrimitives`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SaveSettings_GetMutable_packPrimitives(MR_SaveSettings *_this);

/// optional per-vertex color to save with the geometry
/// Returns a pointer to a member variable of class `MR::SaveSettings` named `colors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertColors *const *MR_SaveSettings_Get_colors(const MR_SaveSettings *_this);

/// optional per-vertex color to save with the geometry
/// Modifies a member variable of class `MR::SaveSettings` named `colors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SaveSettings_Set_colors(MR_SaveSettings *_this, const MR_VertColors *value);

/// optional per-vertex color to save with the geometry
/// Returns a mutable pointer to a member variable of class `MR::SaveSettings` named `colors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertColors **MR_SaveSettings_GetMutable_colors(MR_SaveSettings *_this);

/// optional per-vertex uv coordinate to save with the geometry
/// Returns a pointer to a member variable of class `MR::SaveSettings` named `uvMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords2 *const *MR_SaveSettings_Get_uvMap(const MR_SaveSettings *_this);

/// optional per-vertex uv coordinate to save with the geometry
/// Modifies a member variable of class `MR::SaveSettings` named `uvMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SaveSettings_Set_uvMap(MR_SaveSettings *_this, const MR_VertCoords2 *value);

/// optional per-vertex uv coordinate to save with the geometry
/// Returns a mutable pointer to a member variable of class `MR::SaveSettings` named `uvMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords2 **MR_SaveSettings_GetMutable_uvMap(MR_SaveSettings *_this);

/// optional texture to save with the geometry
/// Returns a pointer to a member variable of class `MR::SaveSettings` named `texture`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshTexture *const *MR_SaveSettings_Get_texture(const MR_SaveSettings *_this);

/// optional texture to save with the geometry
/// Modifies a member variable of class `MR::SaveSettings` named `texture`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SaveSettings_Set_texture(MR_SaveSettings *_this, const MR_MeshTexture *value);

/// optional texture to save with the geometry
/// Returns a mutable pointer to a member variable of class `MR::SaveSettings` named `texture`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshTexture **MR_SaveSettings_GetMutable_texture(MR_SaveSettings *_this);

/// used to save texture and material in some formats (obj)
/// Returns a pointer to a member variable of class `MR::SaveSettings` named `materialName`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_SaveSettings_Get_materialName(const MR_SaveSettings *_this);

/// used to save texture and material in some formats (obj)
/// Modifies a member variable of class `MR::SaveSettings` named `materialName`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_SaveSettings_Set_materialName(MR_SaveSettings *_this, const char *value, const char *value_end);

/// used to save texture and material in some formats (obj)
/// Returns a mutable pointer to a member variable of class `MR::SaveSettings` named `materialName`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_SaveSettings_GetMutable_materialName(MR_SaveSettings *_this);

/// this transformation can optionally be applied to all vertices (points) of saved object
/// Returns a pointer to a member variable of class `MR::SaveSettings` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3d *const *MR_SaveSettings_Get_xf(const MR_SaveSettings *_this);

/// this transformation can optionally be applied to all vertices (points) of saved object
/// Modifies a member variable of class `MR::SaveSettings` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SaveSettings_Set_xf(MR_SaveSettings *_this, const MR_AffineXf3d *value);

/// this transformation can optionally be applied to all vertices (points) of saved object
/// Returns a mutable pointer to a member variable of class `MR::SaveSettings` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3d **MR_SaveSettings_GetMutable_xf(MR_SaveSettings *_this);

/// to report save progress and cancel saving if user desires
/// Returns a pointer to a member variable of class `MR::SaveSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_SaveSettings_Get_progress(const MR_SaveSettings *_this);

/// to report save progress and cancel saving if user desires
/// Modifies a member variable of class `MR::SaveSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SaveSettings_Set_progress(MR_SaveSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// to report save progress and cancel saving if user desires
/// Returns a mutable pointer to a member variable of class `MR::SaveSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_SaveSettings_GetMutable_progress(MR_SaveSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SaveSettings_Destroy()` to free it when you're done using it.
MRC_API MR_SaveSettings *MR_SaveSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SaveSettings_DestroyArray()`.
/// Use `MR_SaveSettings_OffsetMutablePtr()` and `MR_SaveSettings_OffsetPtr()` to access the array elements.
MRC_API MR_SaveSettings *MR_SaveSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::SaveSettings` elementwise.
/// Parameter `materialName` can not be null.
/// If `materialName_end` is null, then `materialName` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SaveSettings_Destroy()` to free it when you're done using it.
MRC_API MR_SaveSettings *MR_SaveSettings_ConstructFrom(bool onlyValidPoints, bool packPrimitives, const MR_VertColors *colors, const MR_VertCoords2 *uvMap, const MR_MeshTexture *texture, const char *materialName, const char *materialName_end, const MR_AffineXf3d *xf, MR_PassBy progress_pass_by, MR_std_function_bool_from_float *progress);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SaveSettings *MR_SaveSettings_OffsetPtr(const MR_SaveSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SaveSettings *MR_SaveSettings_OffsetMutablePtr(MR_SaveSettings *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::SaveSettings` to a derived class `MR::MeshSave::CtmSaveOptions`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_MeshSave_CtmSaveOptions *MR_SaveSettings_StaticDowncastTo_MR_MeshSave_CtmSaveOptions(const MR_SaveSettings *object);

/// Downcasts an instance of `MR::SaveSettings` to a derived class `MR::MeshSave::CtmSaveOptions`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_MeshSave_CtmSaveOptions *MR_SaveSettings_MutableStaticDowncastTo_MR_MeshSave_CtmSaveOptions(MR_SaveSettings *object);

/// Downcasts an instance of `MR::SaveSettings` to a derived class `MR::PointsSave::CtmSavePointsOptions`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_PointsSave_CtmSavePointsOptions *MR_SaveSettings_StaticDowncastTo_MR_PointsSave_CtmSavePointsOptions(const MR_SaveSettings *object);

/// Downcasts an instance of `MR::SaveSettings` to a derived class `MR::PointsSave::CtmSavePointsOptions`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_PointsSave_CtmSavePointsOptions *MR_SaveSettings_MutableStaticDowncastTo_MR_PointsSave_CtmSavePointsOptions(MR_SaveSettings *object);

/// Generated from a constructor of class `MR::SaveSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SaveSettings_Destroy()` to free it when you're done using it.
MRC_API MR_SaveSettings *MR_SaveSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_SaveSettings *_other);

/// Destroys a heap-allocated instance of `MR_SaveSettings`. Does nothing if the pointer is null.
MRC_API void MR_SaveSettings_Destroy(const MR_SaveSettings *_this);

/// Destroys a heap-allocated array of `MR_SaveSettings`. Does nothing if the pointer is null.
MRC_API void MR_SaveSettings_DestroyArray(const MR_SaveSettings *_this);

/// Generated from a method of class `MR::SaveSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SaveSettings *MR_SaveSettings_AssignFromAnother(MR_SaveSettings *_this, MR_PassBy _other_pass_by, MR_SaveSettings *_other);

/// returns the point as is or after application of given transform to it in double precision
/// Generated from function `MR::applyFloat`.
/// Parameter `p` can not be null. It is a single object.
MRC_API MR_Vector3f MR_applyFloat_const_MR_AffineXf3d_ptr(const MR_AffineXf3d *xf, const MR_Vector3f *p);

/// returns the normal as is or after application of given matrix to it in double precision
/// Generated from function `MR::applyFloat`.
/// Parameter `n` can not be null. It is a single object.
MRC_API MR_Vector3f MR_applyFloat_const_MR_Matrix3d_ptr(const MR_Matrix3d *m, const MR_Vector3f *n);

/// converts given point in double precision and applies given transformation to it
/// Generated from function `MR::applyDouble`.
/// Parameter `p` can not be null. It is a single object.
MRC_API MR_Vector3d MR_applyDouble_const_MR_AffineXf3d_ptr(const MR_AffineXf3d *xf, const MR_Vector3f *p);

/// converts given normal in double precision and applies given matrix to it
/// Generated from function `MR::applyDouble`.
/// Parameter `n` can not be null. It is a single object.
MRC_API MR_Vector3d MR_applyDouble_const_MR_Matrix3d_ptr(const MR_Matrix3d *m, const MR_Vector3f *n);

/// Generated from a constructor of class `MR::VertRenumber`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertRenumber_Destroy()` to free it when you're done using it.
MRC_API MR_VertRenumber *MR_VertRenumber_ConstructFromAnother(MR_PassBy _other_pass_by, MR_VertRenumber *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VertRenumber *MR_VertRenumber_OffsetPtr(const MR_VertRenumber *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VertRenumber *MR_VertRenumber_OffsetMutablePtr(MR_VertRenumber *ptr, ptrdiff_t i);

/// prepares the mapping
/// Generated from a constructor of class `MR::VertRenumber`.
/// Parameter `validVerts` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertRenumber_Destroy()` to free it when you're done using it.
MRC_API MR_VertRenumber *MR_VertRenumber_Construct(const MR_VertBitSet *validVerts, bool saveValidOnly);

/// Destroys a heap-allocated instance of `MR_VertRenumber`. Does nothing if the pointer is null.
MRC_API void MR_VertRenumber_Destroy(const MR_VertRenumber *_this);

/// Destroys a heap-allocated array of `MR_VertRenumber`. Does nothing if the pointer is null.
MRC_API void MR_VertRenumber_DestroyArray(const MR_VertRenumber *_this);

/// Generated from a method of class `MR::VertRenumber` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertRenumber *MR_VertRenumber_AssignFromAnother(MR_VertRenumber *_this, MR_PassBy _other_pass_by, MR_VertRenumber *_other);

/// Generated from a method of class `MR::VertRenumber` named `saveValidOnly`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_VertRenumber_saveValidOnly(const MR_VertRenumber *_this);

/// return the total number of vertices to be saved
/// Generated from a method of class `MR::VertRenumber` named `sizeVerts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_VertRenumber_sizeVerts(const MR_VertRenumber *_this);

/// return packed index (if saveValidOnly = true) or same index (if saveValidOnly = false)
/// Generated from a method of class `MR::VertRenumber` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_VertRenumber_call(const MR_VertRenumber *_this, MR_VertId v);

/// if (xf) is null then just returns (verts);
/// otherwise copies transformed points in (buf) and returns it
/// Generated from function `MR::transformPoints`.
/// Parameter `verts` can not be null. It is a single object.
/// Parameter `validVerts` can not be null. It is a single object.
/// Parameter `buf` can not be null. It is a single object.
/// Parameter `vertRenumber` defaults to a null pointer in C++.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords *MR_transformPoints(const MR_VertCoords *verts, const MR_VertBitSet *validVerts, const MR_AffineXf3d *xf, MR_VertCoords *buf, const MR_VertRenumber *vertRenumber);

/// if (m) is null then just returns (normals);
/// otherwise copies transformed normals in (buf) and returns it
/// Generated from function `MR::transformNormals`.
/// Parameter `normals` can not be null. It is a single object.
/// Parameter `validVerts` can not be null. It is a single object.
/// Parameter `buf` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords *MR_transformNormals(const MR_VertCoords *normals, const MR_VertBitSet *validVerts, const MR_Matrix3d *m, MR_VertCoords *buf);

#ifdef __cplusplus
} // extern "C"
#endif
