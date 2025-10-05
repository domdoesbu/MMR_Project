// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_MeshTexture MR_MeshTexture; // Defined in `#include <MRCMesh/MRMeshTexture.h>`.
typedef struct MR_VertColors MR_VertColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertCoords2 MR_VertCoords2; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_expected_MR_VertCoords_std_string MR_expected_MR_VertCoords_std_string; // Defined in `#include <MRCMisc/expected_MR_VertCoords_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_istream MR_std_istream; // Defined in `#include <MRCMisc/iostream.h>`.
typedef struct MR_std_optional_MR_Edges MR_std_optional_MR_Edges; // Defined in `#include <MRCMisc/std_optional_MR_Edges.h>`.
typedef struct MR_std_optional_MR_Triangulation MR_std_optional_MR_Triangulation; // Defined in `#include <MRCMisc/std_optional_MR_Triangulation.h>`.


/// optional load artifacts and other setting for PLY file loading
/// Generated from class `MR::PlyLoadParams`.
typedef struct MR_PlyLoadParams MR_PlyLoadParams;

///< optional load artifact: mesh triangles
/// Returns a pointer to a member variable of class `MR::PlyLoadParams` named `tris`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_optional_MR_Triangulation *const *MR_PlyLoadParams_Get_tris(const MR_PlyLoadParams *_this);

///< optional load artifact: mesh triangles
/// Modifies a member variable of class `MR::PlyLoadParams` named `tris`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PlyLoadParams_Set_tris(MR_PlyLoadParams *_this, MR_std_optional_MR_Triangulation *value);

///< optional load artifact: mesh triangles
/// Returns a mutable pointer to a member variable of class `MR::PlyLoadParams` named `tris`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_optional_MR_Triangulation **MR_PlyLoadParams_GetMutable_tris(MR_PlyLoadParams *_this);

///< optional load artifact: polyline edges
/// Returns a pointer to a member variable of class `MR::PlyLoadParams` named `edges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_optional_MR_Edges *const *MR_PlyLoadParams_Get_edges(const MR_PlyLoadParams *_this);

///< optional load artifact: polyline edges
/// Modifies a member variable of class `MR::PlyLoadParams` named `edges`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PlyLoadParams_Set_edges(MR_PlyLoadParams *_this, MR_std_optional_MR_Edges *value);

///< optional load artifact: polyline edges
/// Returns a mutable pointer to a member variable of class `MR::PlyLoadParams` named `edges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_optional_MR_Edges **MR_PlyLoadParams_GetMutable_edges(MR_PlyLoadParams *_this);

///< optional load artifact: per-vertex color map
/// Returns a pointer to a member variable of class `MR::PlyLoadParams` named `colors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertColors *const *MR_PlyLoadParams_Get_colors(const MR_PlyLoadParams *_this);

///< optional load artifact: per-vertex color map
/// Modifies a member variable of class `MR::PlyLoadParams` named `colors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PlyLoadParams_Set_colors(MR_PlyLoadParams *_this, MR_VertColors *value);

///< optional load artifact: per-vertex color map
/// Returns a mutable pointer to a member variable of class `MR::PlyLoadParams` named `colors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertColors **MR_PlyLoadParams_GetMutable_colors(MR_PlyLoadParams *_this);

///< optional load artifact: per-vertex uv-coordinates
/// Returns a pointer to a member variable of class `MR::PlyLoadParams` named `uvCoords`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertCoords2 *const *MR_PlyLoadParams_Get_uvCoords(const MR_PlyLoadParams *_this);

///< optional load artifact: per-vertex uv-coordinates
/// Modifies a member variable of class `MR::PlyLoadParams` named `uvCoords`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PlyLoadParams_Set_uvCoords(MR_PlyLoadParams *_this, MR_VertCoords2 *value);

///< optional load artifact: per-vertex uv-coordinates
/// Returns a mutable pointer to a member variable of class `MR::PlyLoadParams` named `uvCoords`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertCoords2 **MR_PlyLoadParams_GetMutable_uvCoords(MR_PlyLoadParams *_this);

///< optional load artifact: per-vertex normals
/// Returns a pointer to a member variable of class `MR::PlyLoadParams` named `normals`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertCoords *const *MR_PlyLoadParams_Get_normals(const MR_PlyLoadParams *_this);

///< optional load artifact: per-vertex normals
/// Modifies a member variable of class `MR::PlyLoadParams` named `normals`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PlyLoadParams_Set_normals(MR_PlyLoadParams *_this, MR_VertCoords *value);

///< optional load artifact: per-vertex normals
/// Returns a mutable pointer to a member variable of class `MR::PlyLoadParams` named `normals`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertCoords **MR_PlyLoadParams_GetMutable_normals(MR_PlyLoadParams *_this);

///< optional load artifact: texture image
/// Returns a pointer to a member variable of class `MR::PlyLoadParams` named `texture`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshTexture *const *MR_PlyLoadParams_Get_texture(const MR_PlyLoadParams *_this);

///< optional load artifact: texture image
/// Modifies a member variable of class `MR::PlyLoadParams` named `texture`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PlyLoadParams_Set_texture(MR_PlyLoadParams *_this, MR_MeshTexture *value);

///< optional load artifact: texture image
/// Returns a mutable pointer to a member variable of class `MR::PlyLoadParams` named `texture`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshTexture **MR_PlyLoadParams_GetMutable_texture(MR_PlyLoadParams *_this);

///< callback for set progress and stop process
/// Returns a pointer to a member variable of class `MR::PlyLoadParams` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_PlyLoadParams_Get_callback(const MR_PlyLoadParams *_this);

///< callback for set progress and stop process
/// Modifies a member variable of class `MR::PlyLoadParams` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PlyLoadParams_Set_callback(MR_PlyLoadParams *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

///< callback for set progress and stop process
/// Returns a mutable pointer to a member variable of class `MR::PlyLoadParams` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_PlyLoadParams_GetMutable_callback(MR_PlyLoadParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PlyLoadParams_Destroy()` to free it when you're done using it.
MRC_API MR_PlyLoadParams *MR_PlyLoadParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PlyLoadParams_DestroyArray()`.
/// Use `MR_PlyLoadParams_OffsetMutablePtr()` and `MR_PlyLoadParams_OffsetPtr()` to access the array elements.
MRC_API MR_PlyLoadParams *MR_PlyLoadParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::PlyLoadParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PlyLoadParams_Destroy()` to free it when you're done using it.
MRC_API MR_PlyLoadParams *MR_PlyLoadParams_ConstructFrom(MR_std_optional_MR_Triangulation *tris, MR_std_optional_MR_Edges *edges, MR_VertColors *colors, MR_VertCoords2 *uvCoords, MR_VertCoords *normals, MR_MeshTexture *texture, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PlyLoadParams *MR_PlyLoadParams_OffsetPtr(const MR_PlyLoadParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PlyLoadParams *MR_PlyLoadParams_OffsetMutablePtr(MR_PlyLoadParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PlyLoadParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PlyLoadParams_Destroy()` to free it when you're done using it.
MRC_API MR_PlyLoadParams *MR_PlyLoadParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PlyLoadParams *_other);

/// Destroys a heap-allocated instance of `MR_PlyLoadParams`. Does nothing if the pointer is null.
MRC_API void MR_PlyLoadParams_Destroy(const MR_PlyLoadParams *_this);

/// Destroys a heap-allocated array of `MR_PlyLoadParams`. Does nothing if the pointer is null.
MRC_API void MR_PlyLoadParams_DestroyArray(const MR_PlyLoadParams *_this);

/// Generated from a method of class `MR::PlyLoadParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PlyLoadParams *MR_PlyLoadParams_AssignFromAnother(MR_PlyLoadParams *_this, MR_PassBy _other_pass_by, MR_PlyLoadParams *_other);

/// Generated from function `MR::loadPly`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VertCoords_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VertCoords_std_string *MR_loadPly_std_istream_ref_MR_PlyLoadParams(MR_std_istream *in, const MR_PlyLoadParams *params);

#ifdef __cplusplus
} // extern "C"
#endif
