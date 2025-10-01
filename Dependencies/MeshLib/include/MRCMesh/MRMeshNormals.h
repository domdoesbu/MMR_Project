// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceNormals MR_FaceNormals; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Vector4f MR_Vector4f; // Defined in `#include <MRCMesh/MRVector4.h>`.
typedef struct MR_Vector_std_array_MR_Vector3f_3_MR_FaceId MR_Vector_std_array_MR_Vector3f_3_MR_FaceId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.


/// Generated from class `MR::MeshNormals`.
typedef struct MR_MeshNormals MR_MeshNormals;

/// Returns a pointer to a member variable of class `MR::MeshNormals` named `faceNormals`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceNormals *MR_MeshNormals_Get_faceNormals(const MR_MeshNormals *_this);

/// Modifies a member variable of class `MR::MeshNormals` named `faceNormals`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshNormals_Set_faceNormals(MR_MeshNormals *_this, MR_PassBy value_pass_by, MR_FaceNormals *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshNormals` named `faceNormals`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceNormals *MR_MeshNormals_GetMutable_faceNormals(MR_MeshNormals *_this);

/// Returns a pointer to a member variable of class `MR::MeshNormals` named `vertNormals`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords *MR_MeshNormals_Get_vertNormals(const MR_MeshNormals *_this);

/// Modifies a member variable of class `MR::MeshNormals` named `vertNormals`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshNormals_Set_vertNormals(MR_MeshNormals *_this, MR_PassBy value_pass_by, MR_VertCoords *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshNormals` named `vertNormals`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertCoords *MR_MeshNormals_GetMutable_vertNormals(MR_MeshNormals *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshNormals_Destroy()` to free it when you're done using it.
MRC_API MR_MeshNormals *MR_MeshNormals_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshNormals_DestroyArray()`.
/// Use `MR_MeshNormals_OffsetMutablePtr()` and `MR_MeshNormals_OffsetPtr()` to access the array elements.
MRC_API MR_MeshNormals *MR_MeshNormals_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshNormals` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshNormals_Destroy()` to free it when you're done using it.
MRC_API MR_MeshNormals *MR_MeshNormals_ConstructFrom(MR_PassBy faceNormals_pass_by, MR_FaceNormals *faceNormals, MR_PassBy vertNormals_pass_by, MR_VertCoords *vertNormals);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshNormals *MR_MeshNormals_OffsetPtr(const MR_MeshNormals *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshNormals *MR_MeshNormals_OffsetMutablePtr(MR_MeshNormals *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshNormals`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshNormals_Destroy()` to free it when you're done using it.
MRC_API MR_MeshNormals *MR_MeshNormals_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MeshNormals *_other);

/// Destroys a heap-allocated instance of `MR_MeshNormals`. Does nothing if the pointer is null.
MRC_API void MR_MeshNormals_Destroy(const MR_MeshNormals *_this);

/// Destroys a heap-allocated array of `MR_MeshNormals`. Does nothing if the pointer is null.
MRC_API void MR_MeshNormals_DestroyArray(const MR_MeshNormals *_this);

/// Generated from a method of class `MR::MeshNormals` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshNormals *MR_MeshNormals_AssignFromAnother(MR_MeshNormals *_this, MR_PassBy _other_pass_by, MR_MeshNormals *_other);

/// returns a vector with face-normal in every element for valid mesh faces
/// Generated from function `MR::computePerFaceNormals`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceNormals_Destroy()` to free it when you're done using it.
MRC_API MR_FaceNormals *MR_computePerFaceNormals(const MR_Mesh *mesh);

/// fills buffer with face-normals as Vector4f for valid mesh faces
/// Generated from function `MR::computePerFaceNormals4`.
/// Parameter `mesh` can not be null. It is a single object.
MRC_API void MR_computePerFaceNormals4(const MR_Mesh *mesh, MR_Vector4f *faceNormals, MR_uint64_t size);

/// returns a vector with vertex normals in every element for valid mesh vertices
/// Generated from function `MR::computePerVertNormals`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertCoords_Destroy()` to free it when you're done using it.
MRC_API MR_VertCoords *MR_computePerVertNormals(const MR_Mesh *mesh);

/// returns a vector with vertex pseudonormals in every element for valid mesh vertices
/// see http://citeseerx.ist.psu.edu/viewdoc/download?doi=10.1.1.107.9173&rep=rep1&type=pdf
/// Generated from function `MR::computePerVertPseudoNormals`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertCoords_Destroy()` to free it when you're done using it.
MRC_API MR_VertCoords *MR_computePerVertPseudoNormals(const MR_Mesh *mesh);

/// computes both per-face and per-vertex normals more efficiently then just calling both previous functions
/// Generated from function `MR::computeMeshNormals`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshNormals_Destroy()` to free it when you're done using it.
MRC_API MR_MeshNormals *MR_computeMeshNormals(const MR_Mesh *mesh);

/// returns a vector with corner normals in every element for valid mesh faces;
/// corner normals of adjacent triangles are equal, unless they are separated by crease edges
/// Generated from function `MR::computePerCornerNormals`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Vector_std_array_MR_Vector3f_3_MR_FaceId_Destroy()` to free it when you're done using it.
MRC_API MR_Vector_std_array_MR_Vector3f_3_MR_FaceId *MR_computePerCornerNormals(const MR_Mesh *mesh, const MR_UndirectedEdgeBitSet *creases);

#ifdef __cplusplus
} // extern "C"
#endif
