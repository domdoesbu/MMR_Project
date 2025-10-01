// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRAffineXf.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_VertColors MR_VertColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_ostream MR_std_ostream; // Defined in `#include <MRCMisc/iostream.h>`.
typedef struct MR_std_shared_ptr_const_MR_Mesh MR_std_shared_ptr_const_MR_Mesh; // Defined in `#include <MRCMisc/std_shared_ptr_const_MR_Mesh.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_MR_MeshSave_NamedXfMesh MR_std_vector_MR_MeshSave_NamedXfMesh; // Defined in `#include <MRCMisc/std_vector_MR_MeshSave_NamedXfMesh.h>`.


/// saves a number of named meshes in .obj file
/// Generated from class `MR::MeshSave::NamedXfMesh`.
typedef struct MR_MeshSave_NamedXfMesh MR_MeshSave_NamedXfMesh;

/// Returns a pointer to a member variable of class `MR::MeshSave::NamedXfMesh` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_MeshSave_NamedXfMesh_Get_name(const MR_MeshSave_NamedXfMesh *_this);

/// Modifies a member variable of class `MR::MeshSave::NamedXfMesh` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_MeshSave_NamedXfMesh_Set_name(MR_MeshSave_NamedXfMesh *_this, const char *value, const char *value_end);

/// Returns a mutable pointer to a member variable of class `MR::MeshSave::NamedXfMesh` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_MeshSave_NamedXfMesh_GetMutable_name(MR_MeshSave_NamedXfMesh *_this);

/// Returns a pointer to a member variable of class `MR::MeshSave::NamedXfMesh` named `toWorld`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *MR_MeshSave_NamedXfMesh_Get_toWorld(const MR_MeshSave_NamedXfMesh *_this);

/// Modifies a member variable of class `MR::MeshSave::NamedXfMesh` named `toWorld`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshSave_NamedXfMesh_Set_toWorld(MR_MeshSave_NamedXfMesh *_this, MR_AffineXf3f value);

/// Returns a mutable pointer to a member variable of class `MR::MeshSave::NamedXfMesh` named `toWorld`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AffineXf3f *MR_MeshSave_NamedXfMesh_GetMutable_toWorld(MR_MeshSave_NamedXfMesh *_this);

/// Returns a pointer to a member variable of class `MR::MeshSave::NamedXfMesh` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_const_MR_Mesh *MR_MeshSave_NamedXfMesh_Get_mesh(const MR_MeshSave_NamedXfMesh *_this);

/// Modifies a member variable of class `MR::MeshSave::NamedXfMesh` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshSave_NamedXfMesh_Set_mesh(MR_MeshSave_NamedXfMesh *_this, MR_PassBy value_pass_by, MR_std_shared_ptr_const_MR_Mesh *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshSave::NamedXfMesh` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_shared_ptr_const_MR_Mesh *MR_MeshSave_NamedXfMesh_GetMutable_mesh(MR_MeshSave_NamedXfMesh *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshSave_NamedXfMesh_Destroy()` to free it when you're done using it.
MRC_API MR_MeshSave_NamedXfMesh *MR_MeshSave_NamedXfMesh_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshSave_NamedXfMesh_DestroyArray()`.
/// Use `MR_MeshSave_NamedXfMesh_OffsetMutablePtr()` and `MR_MeshSave_NamedXfMesh_OffsetPtr()` to access the array elements.
MRC_API MR_MeshSave_NamedXfMesh *MR_MeshSave_NamedXfMesh_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshSave::NamedXfMesh` elementwise.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshSave_NamedXfMesh_Destroy()` to free it when you're done using it.
MRC_API MR_MeshSave_NamedXfMesh *MR_MeshSave_NamedXfMesh_ConstructFrom(const char *name, const char *name_end, MR_AffineXf3f toWorld, MR_PassBy mesh_pass_by, MR_std_shared_ptr_const_MR_Mesh *mesh);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshSave_NamedXfMesh *MR_MeshSave_NamedXfMesh_OffsetPtr(const MR_MeshSave_NamedXfMesh *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshSave_NamedXfMesh *MR_MeshSave_NamedXfMesh_OffsetMutablePtr(MR_MeshSave_NamedXfMesh *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshSave::NamedXfMesh`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshSave_NamedXfMesh_Destroy()` to free it when you're done using it.
MRC_API MR_MeshSave_NamedXfMesh *MR_MeshSave_NamedXfMesh_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MeshSave_NamedXfMesh *_other);

/// Destroys a heap-allocated instance of `MR_MeshSave_NamedXfMesh`. Does nothing if the pointer is null.
MRC_API void MR_MeshSave_NamedXfMesh_Destroy(const MR_MeshSave_NamedXfMesh *_this);

/// Destroys a heap-allocated array of `MR_MeshSave_NamedXfMesh`. Does nothing if the pointer is null.
MRC_API void MR_MeshSave_NamedXfMesh_DestroyArray(const MR_MeshSave_NamedXfMesh *_this);

/// Generated from a method of class `MR::MeshSave::NamedXfMesh` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshSave_NamedXfMesh *MR_MeshSave_NamedXfMesh_AssignFromAnother(MR_MeshSave_NamedXfMesh *_this, MR_PassBy _other_pass_by, MR_MeshSave_NamedXfMesh *_other);

/// Generated from function `MR::MeshSave::sceneToObj`.
/// Parameter `objects` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `colors` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_MeshSave_sceneToObj_std_filesystem_path(const MR_std_vector_MR_MeshSave_NamedXfMesh *objects, const char *file, const char *file_end, MR_VertColors *colors);

/// Generated from function `MR::MeshSave::sceneToObj`.
/// Parameter `objects` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `colors` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_MeshSave_sceneToObj_std_ostream(const MR_std_vector_MR_MeshSave_NamedXfMesh *objects, MR_std_ostream *out, MR_VertColors *colors);

#ifdef __cplusplus
} // extern "C"
#endif
