// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRAffineXf.h>
#include <MRCMesh/MRColor.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_TexturePerFace MR_TexturePerFace; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_std_filesystem_path_MR_TextureId MR_Vector_std_filesystem_path_MR_TextureId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertColors MR_VertColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertCoords2 MR_VertCoords2; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_expected_MR_LoadedObjects_std_string MR_expected_MR_LoadedObjects_std_string; // Defined in `#include <MRCMisc/expected_MR_LoadedObjects_std_string.h>`.
typedef struct MR_expected_std_vector_MR_MeshLoad_NamedMesh_std_string MR_expected_std_vector_MR_MeshLoad_NamedMesh_std_string; // Defined in `#include <MRCMisc/expected_std_vector_MR_MeshLoad_NamedMesh_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_istream MR_std_istream; // Defined in `#include <MRCMisc/iostream.h>`.
typedef struct MR_std_optional_MR_Color MR_std_optional_MR_Color; // Defined in `#include <MRCMisc/std_optional_MR_Color.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// Generated from class `MR::MeshLoad::ObjLoadSettings`.
typedef struct MR_MeshLoad_ObjLoadSettings MR_MeshLoad_ObjLoadSettings;

/// Generated from class `MR::MeshLoad::NamedMesh`.
typedef struct MR_MeshLoad_NamedMesh MR_MeshLoad_NamedMesh;

/// if true then vertices will be returned relative to some transformation to avoid precision loss
/// Returns a pointer to a member variable of class `MR::MeshLoad::ObjLoadSettings` named `customXf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_MeshLoad_ObjLoadSettings_Get_customXf(const MR_MeshLoad_ObjLoadSettings *_this);

/// if true then vertices will be returned relative to some transformation to avoid precision loss
/// Modifies a member variable of class `MR::MeshLoad::ObjLoadSettings` named `customXf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshLoad_ObjLoadSettings_Set_customXf(MR_MeshLoad_ObjLoadSettings *_this, bool value);

/// if true then vertices will be returned relative to some transformation to avoid precision loss
/// Returns a mutable pointer to a member variable of class `MR::MeshLoad::ObjLoadSettings` named `customXf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_MeshLoad_ObjLoadSettings_GetMutable_customXf(MR_MeshLoad_ObjLoadSettings *_this);

/// if true, the number of skipped faces (faces than can't be created) will be counted
/// Returns a pointer to a member variable of class `MR::MeshLoad::ObjLoadSettings` named `countSkippedFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_MeshLoad_ObjLoadSettings_Get_countSkippedFaces(const MR_MeshLoad_ObjLoadSettings *_this);

/// if true, the number of skipped faces (faces than can't be created) will be counted
/// Modifies a member variable of class `MR::MeshLoad::ObjLoadSettings` named `countSkippedFaces`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshLoad_ObjLoadSettings_Set_countSkippedFaces(MR_MeshLoad_ObjLoadSettings *_this, bool value);

/// if true, the number of skipped faces (faces than can't be created) will be counted
/// Returns a mutable pointer to a member variable of class `MR::MeshLoad::ObjLoadSettings` named `countSkippedFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_MeshLoad_ObjLoadSettings_GetMutable_countSkippedFaces(MR_MeshLoad_ObjLoadSettings *_this);

/// callback for set progress and stop process
/// Returns a pointer to a member variable of class `MR::MeshLoad::ObjLoadSettings` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_MeshLoad_ObjLoadSettings_Get_callback(const MR_MeshLoad_ObjLoadSettings *_this);

/// callback for set progress and stop process
/// Modifies a member variable of class `MR::MeshLoad::ObjLoadSettings` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshLoad_ObjLoadSettings_Set_callback(MR_MeshLoad_ObjLoadSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// callback for set progress and stop process
/// Returns a mutable pointer to a member variable of class `MR::MeshLoad::ObjLoadSettings` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_MeshLoad_ObjLoadSettings_GetMutable_callback(MR_MeshLoad_ObjLoadSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshLoad_ObjLoadSettings_Destroy()` to free it when you're done using it.
MRC_API MR_MeshLoad_ObjLoadSettings *MR_MeshLoad_ObjLoadSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshLoad_ObjLoadSettings_DestroyArray()`.
/// Use `MR_MeshLoad_ObjLoadSettings_OffsetMutablePtr()` and `MR_MeshLoad_ObjLoadSettings_OffsetPtr()` to access the array elements.
MRC_API MR_MeshLoad_ObjLoadSettings *MR_MeshLoad_ObjLoadSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshLoad::ObjLoadSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshLoad_ObjLoadSettings_Destroy()` to free it when you're done using it.
MRC_API MR_MeshLoad_ObjLoadSettings *MR_MeshLoad_ObjLoadSettings_ConstructFrom(bool customXf, bool countSkippedFaces, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshLoad_ObjLoadSettings *MR_MeshLoad_ObjLoadSettings_OffsetPtr(const MR_MeshLoad_ObjLoadSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshLoad_ObjLoadSettings *MR_MeshLoad_ObjLoadSettings_OffsetMutablePtr(MR_MeshLoad_ObjLoadSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshLoad::ObjLoadSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshLoad_ObjLoadSettings_Destroy()` to free it when you're done using it.
MRC_API MR_MeshLoad_ObjLoadSettings *MR_MeshLoad_ObjLoadSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MeshLoad_ObjLoadSettings *_other);

/// Destroys a heap-allocated instance of `MR_MeshLoad_ObjLoadSettings`. Does nothing if the pointer is null.
MRC_API void MR_MeshLoad_ObjLoadSettings_Destroy(const MR_MeshLoad_ObjLoadSettings *_this);

/// Destroys a heap-allocated array of `MR_MeshLoad_ObjLoadSettings`. Does nothing if the pointer is null.
MRC_API void MR_MeshLoad_ObjLoadSettings_DestroyArray(const MR_MeshLoad_ObjLoadSettings *_this);

/// Generated from a method of class `MR::MeshLoad::ObjLoadSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshLoad_ObjLoadSettings *MR_MeshLoad_ObjLoadSettings_AssignFromAnother(MR_MeshLoad_ObjLoadSettings *_this, MR_PassBy _other_pass_by, MR_MeshLoad_ObjLoadSettings *_other);

/// Returns a pointer to a member variable of class `MR::MeshLoad::NamedMesh` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_MeshLoad_NamedMesh_Get_name(const MR_MeshLoad_NamedMesh *_this);

/// Modifies a member variable of class `MR::MeshLoad::NamedMesh` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_MeshLoad_NamedMesh_Set_name(MR_MeshLoad_NamedMesh *_this, const char *value, const char *value_end);

/// Returns a mutable pointer to a member variable of class `MR::MeshLoad::NamedMesh` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_MeshLoad_NamedMesh_GetMutable_name(MR_MeshLoad_NamedMesh *_this);

/// Returns a pointer to a member variable of class `MR::MeshLoad::NamedMesh` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Mesh *MR_MeshLoad_NamedMesh_Get_mesh(const MR_MeshLoad_NamedMesh *_this);

/// Modifies a member variable of class `MR::MeshLoad::NamedMesh` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshLoad_NamedMesh_Set_mesh(MR_MeshLoad_NamedMesh *_this, MR_PassBy value_pass_by, MR_Mesh *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshLoad::NamedMesh` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Mesh *MR_MeshLoad_NamedMesh_GetMutable_mesh(MR_MeshLoad_NamedMesh *_this);

/// Returns a pointer to a member variable of class `MR::MeshLoad::NamedMesh` named `uvCoords`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords2 *MR_MeshLoad_NamedMesh_Get_uvCoords(const MR_MeshLoad_NamedMesh *_this);

/// Modifies a member variable of class `MR::MeshLoad::NamedMesh` named `uvCoords`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshLoad_NamedMesh_Set_uvCoords(MR_MeshLoad_NamedMesh *_this, MR_PassBy value_pass_by, MR_VertCoords2 *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshLoad::NamedMesh` named `uvCoords`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertCoords2 *MR_MeshLoad_NamedMesh_GetMutable_uvCoords(MR_MeshLoad_NamedMesh *_this);

/// Returns a pointer to a member variable of class `MR::MeshLoad::NamedMesh` named `colors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertColors *MR_MeshLoad_NamedMesh_Get_colors(const MR_MeshLoad_NamedMesh *_this);

/// Modifies a member variable of class `MR::MeshLoad::NamedMesh` named `colors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshLoad_NamedMesh_Set_colors(MR_MeshLoad_NamedMesh *_this, MR_PassBy value_pass_by, MR_VertColors *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshLoad::NamedMesh` named `colors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertColors *MR_MeshLoad_NamedMesh_GetMutable_colors(MR_MeshLoad_NamedMesh *_this);

/// Returns a pointer to a member variable of class `MR::MeshLoad::NamedMesh` named `textureFiles`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector_std_filesystem_path_MR_TextureId *MR_MeshLoad_NamedMesh_Get_textureFiles(const MR_MeshLoad_NamedMesh *_this);

/// Modifies a member variable of class `MR::MeshLoad::NamedMesh` named `textureFiles`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshLoad_NamedMesh_Set_textureFiles(MR_MeshLoad_NamedMesh *_this, MR_PassBy value_pass_by, MR_Vector_std_filesystem_path_MR_TextureId *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshLoad::NamedMesh` named `textureFiles`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector_std_filesystem_path_MR_TextureId *MR_MeshLoad_NamedMesh_GetMutable_textureFiles(MR_MeshLoad_NamedMesh *_this);

/// Returns a pointer to a member variable of class `MR::MeshLoad::NamedMesh` named `texturePerFace`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_TexturePerFace *MR_MeshLoad_NamedMesh_Get_texturePerFace(const MR_MeshLoad_NamedMesh *_this);

/// Modifies a member variable of class `MR::MeshLoad::NamedMesh` named `texturePerFace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshLoad_NamedMesh_Set_texturePerFace(MR_MeshLoad_NamedMesh *_this, MR_PassBy value_pass_by, MR_TexturePerFace *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshLoad::NamedMesh` named `texturePerFace`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TexturePerFace *MR_MeshLoad_NamedMesh_GetMutable_texturePerFace(MR_MeshLoad_NamedMesh *_this);

/// Returns a pointer to a member variable of class `MR::MeshLoad::NamedMesh` named `diffuseColor`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_optional_MR_Color *MR_MeshLoad_NamedMesh_Get_diffuseColor(const MR_MeshLoad_NamedMesh *_this);

/// Modifies a member variable of class `MR::MeshLoad::NamedMesh` named `diffuseColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` is optional. To keep it empty, pass a null pointer.
MRC_API void MR_MeshLoad_NamedMesh_Set_diffuseColor(MR_MeshLoad_NamedMesh *_this, const MR_Color *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshLoad::NamedMesh` named `diffuseColor`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_optional_MR_Color *MR_MeshLoad_NamedMesh_GetMutable_diffuseColor(MR_MeshLoad_NamedMesh *_this);

/// transform of the loaded mesh, not identity only if ObjLoadSettings.customXf
/// Returns a pointer to a member variable of class `MR::MeshLoad::NamedMesh` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *MR_MeshLoad_NamedMesh_Get_xf(const MR_MeshLoad_NamedMesh *_this);

/// transform of the loaded mesh, not identity only if ObjLoadSettings.customXf
/// Modifies a member variable of class `MR::MeshLoad::NamedMesh` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshLoad_NamedMesh_Set_xf(MR_MeshLoad_NamedMesh *_this, MR_AffineXf3f value);

/// transform of the loaded mesh, not identity only if ObjLoadSettings.customXf
/// Returns a mutable pointer to a member variable of class `MR::MeshLoad::NamedMesh` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AffineXf3f *MR_MeshLoad_NamedMesh_GetMutable_xf(MR_MeshLoad_NamedMesh *_this);

/// counter of skipped faces (faces than can't be created), not zero only if ObjLoadSettings.countSkippedFaces
/// Returns a pointer to a member variable of class `MR::MeshLoad::NamedMesh` named `skippedFaceCount`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_MeshLoad_NamedMesh_Get_skippedFaceCount(const MR_MeshLoad_NamedMesh *_this);

/// counter of skipped faces (faces than can't be created), not zero only if ObjLoadSettings.countSkippedFaces
/// Modifies a member variable of class `MR::MeshLoad::NamedMesh` named `skippedFaceCount`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshLoad_NamedMesh_Set_skippedFaceCount(MR_MeshLoad_NamedMesh *_this, int32_t value);

/// counter of skipped faces (faces than can't be created), not zero only if ObjLoadSettings.countSkippedFaces
/// Returns a mutable pointer to a member variable of class `MR::MeshLoad::NamedMesh` named `skippedFaceCount`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_MeshLoad_NamedMesh_GetMutable_skippedFaceCount(MR_MeshLoad_NamedMesh *_this);

/// counter of duplicated vertices (that created for resolve non-manifold geometry)
/// Returns a pointer to a member variable of class `MR::MeshLoad::NamedMesh` named `duplicatedVertexCount`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_MeshLoad_NamedMesh_Get_duplicatedVertexCount(const MR_MeshLoad_NamedMesh *_this);

/// counter of duplicated vertices (that created for resolve non-manifold geometry)
/// Modifies a member variable of class `MR::MeshLoad::NamedMesh` named `duplicatedVertexCount`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshLoad_NamedMesh_Set_duplicatedVertexCount(MR_MeshLoad_NamedMesh *_this, int32_t value);

/// counter of duplicated vertices (that created for resolve non-manifold geometry)
/// Returns a mutable pointer to a member variable of class `MR::MeshLoad::NamedMesh` named `duplicatedVertexCount`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_MeshLoad_NamedMesh_GetMutable_duplicatedVertexCount(MR_MeshLoad_NamedMesh *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshLoad_NamedMesh_Destroy()` to free it when you're done using it.
MRC_API MR_MeshLoad_NamedMesh *MR_MeshLoad_NamedMesh_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshLoad_NamedMesh_DestroyArray()`.
/// Use `MR_MeshLoad_NamedMesh_OffsetMutablePtr()` and `MR_MeshLoad_NamedMesh_OffsetPtr()` to access the array elements.
MRC_API MR_MeshLoad_NamedMesh *MR_MeshLoad_NamedMesh_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshLoad::NamedMesh` elementwise.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `diffuseColor` is optional. To keep it empty, pass a null pointer.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshLoad_NamedMesh_Destroy()` to free it when you're done using it.
MRC_API MR_MeshLoad_NamedMesh *MR_MeshLoad_NamedMesh_ConstructFrom(const char *name, const char *name_end, MR_PassBy mesh_pass_by, MR_Mesh *mesh, MR_PassBy uvCoords_pass_by, MR_VertCoords2 *uvCoords, MR_PassBy colors_pass_by, MR_VertColors *colors, MR_PassBy textureFiles_pass_by, MR_Vector_std_filesystem_path_MR_TextureId *textureFiles, MR_PassBy texturePerFace_pass_by, MR_TexturePerFace *texturePerFace, const MR_Color *diffuseColor, MR_AffineXf3f xf, int32_t skippedFaceCount, int32_t duplicatedVertexCount);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshLoad_NamedMesh *MR_MeshLoad_NamedMesh_OffsetPtr(const MR_MeshLoad_NamedMesh *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshLoad_NamedMesh *MR_MeshLoad_NamedMesh_OffsetMutablePtr(MR_MeshLoad_NamedMesh *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshLoad::NamedMesh`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshLoad_NamedMesh_Destroy()` to free it when you're done using it.
MRC_API MR_MeshLoad_NamedMesh *MR_MeshLoad_NamedMesh_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MeshLoad_NamedMesh *_other);

/// Destroys a heap-allocated instance of `MR_MeshLoad_NamedMesh`. Does nothing if the pointer is null.
MRC_API void MR_MeshLoad_NamedMesh_Destroy(const MR_MeshLoad_NamedMesh *_this);

/// Destroys a heap-allocated array of `MR_MeshLoad_NamedMesh`. Does nothing if the pointer is null.
MRC_API void MR_MeshLoad_NamedMesh_DestroyArray(const MR_MeshLoad_NamedMesh *_this);

/// Generated from a method of class `MR::MeshLoad::NamedMesh` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshLoad_NamedMesh *MR_MeshLoad_NamedMesh_AssignFromAnother(MR_MeshLoad_NamedMesh *_this, MR_PassBy _other_pass_by, MR_MeshLoad_NamedMesh *_other);

/// loads meshes from .obj file
/// Generated from function `MR::MeshLoad::fromSceneObjFile`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_MR_MeshLoad_NamedMesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_MR_MeshLoad_NamedMesh_std_string *MR_MeshLoad_fromSceneObjFile_3(const char *file, const char *file_end, bool combineAllObjects, const MR_MeshLoad_ObjLoadSettings *settings);

/// loads meshes from a stream with .obj file contents
/// important on Windows: in stream must be open in binary mode
/// \param dir working directory where materials and textures are located
/// Generated from function `MR::MeshLoad::fromSceneObjFile`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `dir` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_MR_MeshLoad_NamedMesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_MR_MeshLoad_NamedMesh_std_string *MR_MeshLoad_fromSceneObjFile_4(MR_std_istream *in, bool combineAllObjects, const char *dir, const char *dir_end, const MR_MeshLoad_ObjLoadSettings *settings);

/// loads meshes from memory array with .obj file contents
/// \param dir working directory where materials and textures are located
/// Generated from function `MR::MeshLoad::fromSceneObjFile`.
/// Parameter `dir` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_MR_MeshLoad_NamedMesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_MR_MeshLoad_NamedMesh_std_string *MR_MeshLoad_fromSceneObjFile_5(const char *data, MR_uint64_t size, bool combineAllObjects, const char *dir, const char *dir_end, const MR_MeshLoad_ObjLoadSettings *settings);

/// reads all objects from .OBJ file
/// Generated from function `MR::MeshLoad::loadObjectFromObj`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_LoadedObjects_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_LoadedObjects_std_string *MR_MeshLoad_loadObjectFromObj(const char *file, const char *file_end, const MR_std_function_bool_from_float *cb);

#ifdef __cplusplus
} // extern "C"
#endif
