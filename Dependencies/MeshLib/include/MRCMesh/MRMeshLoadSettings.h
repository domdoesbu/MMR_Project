// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_MeshTexture MR_MeshTexture; // Defined in `#include <MRCMesh/MRMeshTexture.h>`.
typedef struct MR_VertColors MR_VertColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertCoords2 MR_VertCoords2; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_optional_MR_Edges MR_std_optional_MR_Edges; // Defined in `#include <MRCMisc/std_optional_MR_Edges.h>`.


/// setting for mesh loading from external format, and locations of optional output data
/// Generated from class `MR::MeshLoadSettings`.
typedef struct MR_MeshLoadSettings MR_MeshLoadSettings;

///< optional load artifact: polyline edges
/// Returns a pointer to a member variable of class `MR::MeshLoadSettings` named `edges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_optional_MR_Edges *const *MR_MeshLoadSettings_Get_edges(const MR_MeshLoadSettings *_this);

///< optional load artifact: polyline edges
/// Modifies a member variable of class `MR::MeshLoadSettings` named `edges`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshLoadSettings_Set_edges(MR_MeshLoadSettings *_this, MR_std_optional_MR_Edges *value);

///< optional load artifact: polyline edges
/// Returns a mutable pointer to a member variable of class `MR::MeshLoadSettings` named `edges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_optional_MR_Edges **MR_MeshLoadSettings_GetMutable_edges(MR_MeshLoadSettings *_this);

///< optional load artifact: per-vertex color map
/// Returns a pointer to a member variable of class `MR::MeshLoadSettings` named `colors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertColors *const *MR_MeshLoadSettings_Get_colors(const MR_MeshLoadSettings *_this);

///< optional load artifact: per-vertex color map
/// Modifies a member variable of class `MR::MeshLoadSettings` named `colors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshLoadSettings_Set_colors(MR_MeshLoadSettings *_this, MR_VertColors *value);

///< optional load artifact: per-vertex color map
/// Returns a mutable pointer to a member variable of class `MR::MeshLoadSettings` named `colors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertColors **MR_MeshLoadSettings_GetMutable_colors(MR_MeshLoadSettings *_this);

///< optional load artifact: per-vertex uv-coordinates
/// Returns a pointer to a member variable of class `MR::MeshLoadSettings` named `uvCoords`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertCoords2 *const *MR_MeshLoadSettings_Get_uvCoords(const MR_MeshLoadSettings *_this);

///< optional load artifact: per-vertex uv-coordinates
/// Modifies a member variable of class `MR::MeshLoadSettings` named `uvCoords`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshLoadSettings_Set_uvCoords(MR_MeshLoadSettings *_this, MR_VertCoords2 *value);

///< optional load artifact: per-vertex uv-coordinates
/// Returns a mutable pointer to a member variable of class `MR::MeshLoadSettings` named `uvCoords`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertCoords2 **MR_MeshLoadSettings_GetMutable_uvCoords(MR_MeshLoadSettings *_this);

///< optional load artifact: per-vertex normals
/// Returns a pointer to a member variable of class `MR::MeshLoadSettings` named `normals`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertCoords *const *MR_MeshLoadSettings_Get_normals(const MR_MeshLoadSettings *_this);

///< optional load artifact: per-vertex normals
/// Modifies a member variable of class `MR::MeshLoadSettings` named `normals`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshLoadSettings_Set_normals(MR_MeshLoadSettings *_this, MR_VertCoords *value);

///< optional load artifact: per-vertex normals
/// Returns a mutable pointer to a member variable of class `MR::MeshLoadSettings` named `normals`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertCoords **MR_MeshLoadSettings_GetMutable_normals(MR_MeshLoadSettings *_this);

///< optional load artifact: texture image
/// Returns a pointer to a member variable of class `MR::MeshLoadSettings` named `texture`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshTexture *const *MR_MeshLoadSettings_Get_texture(const MR_MeshLoadSettings *_this);

///< optional load artifact: texture image
/// Modifies a member variable of class `MR::MeshLoadSettings` named `texture`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshLoadSettings_Set_texture(MR_MeshLoadSettings *_this, MR_MeshTexture *value);

///< optional load artifact: texture image
/// Returns a mutable pointer to a member variable of class `MR::MeshLoadSettings` named `texture`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshTexture **MR_MeshLoadSettings_GetMutable_texture(MR_MeshLoadSettings *_this);

///< optional output: counter of skipped faces during mesh creation
/// Returns a pointer to a member variable of class `MR::MeshLoadSettings` named `skippedFaceCount`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *const *MR_MeshLoadSettings_Get_skippedFaceCount(const MR_MeshLoadSettings *_this);

///< optional output: counter of skipped faces during mesh creation
/// Modifies a member variable of class `MR::MeshLoadSettings` named `skippedFaceCount`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshLoadSettings_Set_skippedFaceCount(MR_MeshLoadSettings *_this, int32_t *value);

///< optional output: counter of skipped faces during mesh creation
/// Returns a mutable pointer to a member variable of class `MR::MeshLoadSettings` named `skippedFaceCount`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t **MR_MeshLoadSettings_GetMutable_skippedFaceCount(MR_MeshLoadSettings *_this);

///< optional output: counter of duplicated vertices (that created for resolve non-manifold geometry)
/// Returns a pointer to a member variable of class `MR::MeshLoadSettings` named `duplicatedVertexCount`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *const *MR_MeshLoadSettings_Get_duplicatedVertexCount(const MR_MeshLoadSettings *_this);

///< optional output: counter of duplicated vertices (that created for resolve non-manifold geometry)
/// Modifies a member variable of class `MR::MeshLoadSettings` named `duplicatedVertexCount`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshLoadSettings_Set_duplicatedVertexCount(MR_MeshLoadSettings *_this, int32_t *value);

///< optional output: counter of duplicated vertices (that created for resolve non-manifold geometry)
/// Returns a mutable pointer to a member variable of class `MR::MeshLoadSettings` named `duplicatedVertexCount`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t **MR_MeshLoadSettings_GetMutable_duplicatedVertexCount(MR_MeshLoadSettings *_this);

///< optional output: transform for the loaded mesh to improve precision of vertex coordinates
/// Returns a pointer to a member variable of class `MR::MeshLoadSettings` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AffineXf3f *const *MR_MeshLoadSettings_Get_xf(const MR_MeshLoadSettings *_this);

///< optional output: transform for the loaded mesh to improve precision of vertex coordinates
/// Modifies a member variable of class `MR::MeshLoadSettings` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshLoadSettings_Set_xf(MR_MeshLoadSettings *_this, MR_AffineXf3f *value);

///< optional output: transform for the loaded mesh to improve precision of vertex coordinates
/// Returns a mutable pointer to a member variable of class `MR::MeshLoadSettings` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AffineXf3f **MR_MeshLoadSettings_GetMutable_xf(MR_MeshLoadSettings *_this);

///< callback for set progress and stop process
/// Returns a pointer to a member variable of class `MR::MeshLoadSettings` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_MeshLoadSettings_Get_callback(const MR_MeshLoadSettings *_this);

///< callback for set progress and stop process
/// Modifies a member variable of class `MR::MeshLoadSettings` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshLoadSettings_Set_callback(MR_MeshLoadSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

///< callback for set progress and stop process
/// Returns a mutable pointer to a member variable of class `MR::MeshLoadSettings` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_MeshLoadSettings_GetMutable_callback(MR_MeshLoadSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshLoadSettings_Destroy()` to free it when you're done using it.
MRC_API MR_MeshLoadSettings *MR_MeshLoadSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshLoadSettings_DestroyArray()`.
/// Use `MR_MeshLoadSettings_OffsetMutablePtr()` and `MR_MeshLoadSettings_OffsetPtr()` to access the array elements.
MRC_API MR_MeshLoadSettings *MR_MeshLoadSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshLoadSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshLoadSettings_Destroy()` to free it when you're done using it.
MRC_API MR_MeshLoadSettings *MR_MeshLoadSettings_ConstructFrom(MR_std_optional_MR_Edges *edges, MR_VertColors *colors, MR_VertCoords2 *uvCoords, MR_VertCoords *normals, MR_MeshTexture *texture, int32_t *skippedFaceCount, int32_t *duplicatedVertexCount, MR_AffineXf3f *xf, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshLoadSettings *MR_MeshLoadSettings_OffsetPtr(const MR_MeshLoadSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshLoadSettings *MR_MeshLoadSettings_OffsetMutablePtr(MR_MeshLoadSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshLoadSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshLoadSettings_Destroy()` to free it when you're done using it.
MRC_API MR_MeshLoadSettings *MR_MeshLoadSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MeshLoadSettings *_other);

/// Destroys a heap-allocated instance of `MR_MeshLoadSettings`. Does nothing if the pointer is null.
MRC_API void MR_MeshLoadSettings_Destroy(const MR_MeshLoadSettings *_this);

/// Destroys a heap-allocated array of `MR_MeshLoadSettings`. Does nothing if the pointer is null.
MRC_API void MR_MeshLoadSettings_DestroyArray(const MR_MeshLoadSettings *_this);

/// Generated from a method of class `MR::MeshLoadSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshLoadSettings *MR_MeshLoadSettings_AssignFromAnother(MR_MeshLoadSettings *_this, MR_PassBy _other_pass_by, MR_MeshLoadSettings *_other);

#ifdef __cplusplus
} // extern "C"
#endif
