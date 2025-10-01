// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_FaceColors MR_FaceColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_TexturePerFace MR_TexturePerFace; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertColors MR_VertColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertCoords2 MR_VertCoords2; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_shared_ptr_MR_Mesh MR_std_shared_ptr_MR_Mesh; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Mesh.h>`.


/// mesh and its per-element attributes for ObjectMeshHolder
/// Generated from class `MR::ObjectMeshData`.
typedef struct MR_ObjectMeshData MR_ObjectMeshData;

/// Returns a pointer to a member variable of class `MR::ObjectMeshData` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_MR_Mesh *MR_ObjectMeshData_Get_mesh(const MR_ObjectMeshData *_this);

/// Modifies a member variable of class `MR::ObjectMeshData` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshData_Set_mesh(MR_ObjectMeshData *_this, MR_PassBy value_pass_by, MR_std_shared_ptr_MR_Mesh *value);

/// Returns a mutable pointer to a member variable of class `MR::ObjectMeshData` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_shared_ptr_MR_Mesh *MR_ObjectMeshData_GetMutable_mesh(MR_ObjectMeshData *_this);

// selection
/// Returns a pointer to a member variable of class `MR::ObjectMeshData` named `selectedFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet *MR_ObjectMeshData_Get_selectedFaces(const MR_ObjectMeshData *_this);

// selection
/// Modifies a member variable of class `MR::ObjectMeshData` named `selectedFaces`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshData_Set_selectedFaces(MR_ObjectMeshData *_this, MR_PassBy value_pass_by, MR_FaceBitSet *value);

// selection
/// Returns a mutable pointer to a member variable of class `MR::ObjectMeshData` named `selectedFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *MR_ObjectMeshData_GetMutable_selectedFaces(MR_ObjectMeshData *_this);

/// Returns a pointer to a member variable of class `MR::ObjectMeshData` named `selectedEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeBitSet *MR_ObjectMeshData_Get_selectedEdges(const MR_ObjectMeshData *_this);

/// Modifies a member variable of class `MR::ObjectMeshData` named `selectedEdges`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshData_Set_selectedEdges(MR_ObjectMeshData *_this, MR_PassBy value_pass_by, MR_UndirectedEdgeBitSet *value);

/// Returns a mutable pointer to a member variable of class `MR::ObjectMeshData` named `selectedEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *MR_ObjectMeshData_GetMutable_selectedEdges(MR_ObjectMeshData *_this);

/// Returns a pointer to a member variable of class `MR::ObjectMeshData` named `creases`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeBitSet *MR_ObjectMeshData_Get_creases(const MR_ObjectMeshData *_this);

/// Modifies a member variable of class `MR::ObjectMeshData` named `creases`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshData_Set_creases(MR_ObjectMeshData *_this, MR_PassBy value_pass_by, MR_UndirectedEdgeBitSet *value);

/// Returns a mutable pointer to a member variable of class `MR::ObjectMeshData` named `creases`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *MR_ObjectMeshData_GetMutable_creases(MR_ObjectMeshData *_this);

// colors
/// Returns a pointer to a member variable of class `MR::ObjectMeshData` named `vertColors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertColors *MR_ObjectMeshData_Get_vertColors(const MR_ObjectMeshData *_this);

// colors
/// Modifies a member variable of class `MR::ObjectMeshData` named `vertColors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshData_Set_vertColors(MR_ObjectMeshData *_this, MR_PassBy value_pass_by, MR_VertColors *value);

// colors
/// Returns a mutable pointer to a member variable of class `MR::ObjectMeshData` named `vertColors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertColors *MR_ObjectMeshData_GetMutable_vertColors(MR_ObjectMeshData *_this);

/// Returns a pointer to a member variable of class `MR::ObjectMeshData` named `faceColors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceColors *MR_ObjectMeshData_Get_faceColors(const MR_ObjectMeshData *_this);

/// Modifies a member variable of class `MR::ObjectMeshData` named `faceColors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshData_Set_faceColors(MR_ObjectMeshData *_this, MR_PassBy value_pass_by, MR_FaceColors *value);

/// Returns a mutable pointer to a member variable of class `MR::ObjectMeshData` named `faceColors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceColors *MR_ObjectMeshData_GetMutable_faceColors(MR_ObjectMeshData *_this);

///< vertices coordinates in texture
/// Returns a pointer to a member variable of class `MR::ObjectMeshData` named `uvCoordinates`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords2 *MR_ObjectMeshData_Get_uvCoordinates(const MR_ObjectMeshData *_this);

///< vertices coordinates in texture
/// Modifies a member variable of class `MR::ObjectMeshData` named `uvCoordinates`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshData_Set_uvCoordinates(MR_ObjectMeshData *_this, MR_PassBy value_pass_by, MR_VertCoords2 *value);

///< vertices coordinates in texture
/// Returns a mutable pointer to a member variable of class `MR::ObjectMeshData` named `uvCoordinates`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertCoords2 *MR_ObjectMeshData_GetMutable_uvCoordinates(MR_ObjectMeshData *_this);

/// Returns a pointer to a member variable of class `MR::ObjectMeshData` named `texturePerFace`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_TexturePerFace *MR_ObjectMeshData_Get_texturePerFace(const MR_ObjectMeshData *_this);

/// Modifies a member variable of class `MR::ObjectMeshData` named `texturePerFace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshData_Set_texturePerFace(MR_ObjectMeshData *_this, MR_PassBy value_pass_by, MR_TexturePerFace *value);

/// Returns a mutable pointer to a member variable of class `MR::ObjectMeshData` named `texturePerFace`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TexturePerFace *MR_ObjectMeshData_GetMutable_texturePerFace(MR_ObjectMeshData *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectMeshData_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectMeshData *MR_ObjectMeshData_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ObjectMeshData_DestroyArray()`.
/// Use `MR_ObjectMeshData_OffsetMutablePtr()` and `MR_ObjectMeshData_OffsetPtr()` to access the array elements.
MRC_API MR_ObjectMeshData *MR_ObjectMeshData_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::ObjectMeshData` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectMeshData_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectMeshData *MR_ObjectMeshData_ConstructFrom(MR_PassBy mesh_pass_by, MR_std_shared_ptr_MR_Mesh *mesh, MR_PassBy selectedFaces_pass_by, MR_FaceBitSet *selectedFaces, MR_PassBy selectedEdges_pass_by, MR_UndirectedEdgeBitSet *selectedEdges, MR_PassBy creases_pass_by, MR_UndirectedEdgeBitSet *creases, MR_PassBy vertColors_pass_by, MR_VertColors *vertColors, MR_PassBy faceColors_pass_by, MR_FaceColors *faceColors, MR_PassBy uvCoordinates_pass_by, MR_VertCoords2 *uvCoordinates, MR_PassBy texturePerFace_pass_by, MR_TexturePerFace *texturePerFace);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ObjectMeshData *MR_ObjectMeshData_OffsetPtr(const MR_ObjectMeshData *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ObjectMeshData *MR_ObjectMeshData_OffsetMutablePtr(MR_ObjectMeshData *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ObjectMeshData`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectMeshData_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectMeshData *MR_ObjectMeshData_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ObjectMeshData *_other);

/// Destroys a heap-allocated instance of `MR_ObjectMeshData`. Does nothing if the pointer is null.
MRC_API void MR_ObjectMeshData_Destroy(const MR_ObjectMeshData *_this);

/// Destroys a heap-allocated array of `MR_ObjectMeshData`. Does nothing if the pointer is null.
MRC_API void MR_ObjectMeshData_DestroyArray(const MR_ObjectMeshData *_this);

/// Generated from a method of class `MR::ObjectMeshData` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectMeshData *MR_ObjectMeshData_AssignFromAnother(MR_ObjectMeshData *_this, MR_PassBy _other_pass_by, MR_ObjectMeshData *_other);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::ObjectMeshData` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ObjectMeshData_heapBytes(const MR_ObjectMeshData *_this);

#ifdef __cplusplus
} // extern "C"
#endif
