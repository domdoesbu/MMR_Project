// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRAffineXf.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_ObjectMesh MR_ObjectMesh; // Defined in `#include <MRCMesh/MRObjectMesh.h>`.


/// just stores a mesh and its transformation to some fixed reference frame
/// Generated from class `MR::TransformedMesh`.
typedef struct MR_TransformedMesh MR_TransformedMesh;

/// the purpose of this class is to be a replacement for MeshVoxelsConverter
/// in case one wants to quickly assess the change from voxel-based to mesh-based boolean
/// Generated from class `MR::MeshMeshConverter`.
typedef struct MR_MeshMeshConverter MR_MeshMeshConverter;

/// Returns a pointer to a member variable of class `MR::TransformedMesh` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Mesh *MR_TransformedMesh_Get_mesh(const MR_TransformedMesh *_this);

/// Modifies a member variable of class `MR::TransformedMesh` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TransformedMesh_Set_mesh(MR_TransformedMesh *_this, MR_PassBy value_pass_by, MR_Mesh *value);

/// Returns a mutable pointer to a member variable of class `MR::TransformedMesh` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Mesh *MR_TransformedMesh_GetMutable_mesh(MR_TransformedMesh *_this);

/// Returns a pointer to a member variable of class `MR::TransformedMesh` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *MR_TransformedMesh_Get_xf(const MR_TransformedMesh *_this);

/// Modifies a member variable of class `MR::TransformedMesh` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TransformedMesh_Set_xf(MR_TransformedMesh *_this, MR_AffineXf3f value);

/// Returns a mutable pointer to a member variable of class `MR::TransformedMesh` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AffineXf3f *MR_TransformedMesh_GetMutable_xf(MR_TransformedMesh *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TransformedMesh_Destroy()` to free it when you're done using it.
MRC_API MR_TransformedMesh *MR_TransformedMesh_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_TransformedMesh_DestroyArray()`.
/// Use `MR_TransformedMesh_OffsetMutablePtr()` and `MR_TransformedMesh_OffsetPtr()` to access the array elements.
MRC_API MR_TransformedMesh *MR_TransformedMesh_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_TransformedMesh *MR_TransformedMesh_OffsetPtr(const MR_TransformedMesh *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_TransformedMesh *MR_TransformedMesh_OffsetMutablePtr(MR_TransformedMesh *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::TransformedMesh`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TransformedMesh_Destroy()` to free it when you're done using it.
MRC_API MR_TransformedMesh *MR_TransformedMesh_ConstructFromAnother(MR_PassBy _other_pass_by, MR_TransformedMesh *_other);

/// Generated from a constructor of class `MR::TransformedMesh`.
/// Parameter `xf` is a single object.
/// Parameter `xf` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TransformedMesh_Destroy()` to free it when you're done using it.
MRC_API MR_TransformedMesh *MR_TransformedMesh_Construct(MR_PassBy mesh_pass_by, MR_Mesh *mesh, const MR_AffineXf3f *xf);

/// Destroys a heap-allocated instance of `MR_TransformedMesh`. Does nothing if the pointer is null.
MRC_API void MR_TransformedMesh_Destroy(const MR_TransformedMesh *_this);

/// Destroys a heap-allocated array of `MR_TransformedMesh`. Does nothing if the pointer is null.
MRC_API void MR_TransformedMesh_DestroyArray(const MR_TransformedMesh *_this);

/// Generated from a method of class `MR::TransformedMesh` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TransformedMesh *MR_TransformedMesh_AssignFromAnother(MR_TransformedMesh *_this, MR_PassBy _other_pass_by, MR_TransformedMesh *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshMeshConverter_Destroy()` to free it when you're done using it.
MRC_API MR_MeshMeshConverter *MR_MeshMeshConverter_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshMeshConverter_DestroyArray()`.
/// Use `MR_MeshMeshConverter_OffsetMutablePtr()` and `MR_MeshMeshConverter_OffsetPtr()` to access the array elements.
MRC_API MR_MeshMeshConverter *MR_MeshMeshConverter_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshMeshConverter *MR_MeshMeshConverter_OffsetPtr(const MR_MeshMeshConverter *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshMeshConverter *MR_MeshMeshConverter_OffsetMutablePtr(MR_MeshMeshConverter *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshMeshConverter`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshMeshConverter_Destroy()` to free it when you're done using it.
MRC_API MR_MeshMeshConverter *MR_MeshMeshConverter_ConstructFromAnother(const MR_MeshMeshConverter *_other);

/// Destroys a heap-allocated instance of `MR_MeshMeshConverter`. Does nothing if the pointer is null.
MRC_API void MR_MeshMeshConverter_Destroy(const MR_MeshMeshConverter *_this);

/// Destroys a heap-allocated array of `MR_MeshMeshConverter`. Does nothing if the pointer is null.
MRC_API void MR_MeshMeshConverter_DestroyArray(const MR_MeshMeshConverter *_this);

/// Generated from a method of class `MR::MeshMeshConverter` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshMeshConverter *MR_MeshMeshConverter_AssignFromAnother(MR_MeshMeshConverter *_this, const MR_MeshMeshConverter *_other);

/// Generated from a method of class `MR::MeshMeshConverter` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `xf` is a single object.
/// Parameter `xf` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TransformedMesh_Destroy()` to free it when you're done using it.
MRC_API MR_TransformedMesh *MR_MeshMeshConverter_call_2(const MR_MeshMeshConverter *_this, MR_PassBy mesh_pass_by, MR_Mesh *mesh, const MR_AffineXf3f *xf);

/// Generated from a method of class `MR::MeshMeshConverter` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TransformedMesh_Destroy()` to free it when you're done using it.
MRC_API MR_TransformedMesh *MR_MeshMeshConverter_call_1_const_MR_ObjectMesh_ref(const MR_MeshMeshConverter *_this, const MR_ObjectMesh *obj);

/// Generated from a method of class `MR::MeshMeshConverter` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `xm` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Mesh *MR_MeshMeshConverter_call_1_const_MR_TransformedMesh_ref(const MR_MeshMeshConverter *_this, const MR_TransformedMesh *xm);

/// Generated from a method of class `MR::MeshMeshConverter` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `xm` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MRC_API MR_Mesh *MR_MeshMeshConverter_call_1_MR_TransformedMesh_rvalue_ref(const MR_MeshMeshConverter *_this, MR_TransformedMesh *xm);

/// union operation on two meshes
/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TransformedMesh *MR_add_assign_MR_TransformedMesh(MR_TransformedMesh *a, const MR_TransformedMesh *b);

/// difference operation on two meshes
/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TransformedMesh *MR_sub_assign_MR_TransformedMesh(MR_TransformedMesh *a, const MR_TransformedMesh *b);

/// intersection operation on two meshes
/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TransformedMesh *MR_mul_assign_MR_TransformedMesh(MR_TransformedMesh *a, const MR_TransformedMesh *b);

#ifdef __cplusplus
} // extern "C"
#endif
