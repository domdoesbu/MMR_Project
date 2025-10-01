// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_Plane3f MR_Plane3f; // Defined in `#include <MRCMesh/MRPlane3.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_FaceId_MR_FaceId.h>`.
typedef struct MR_std_function_void_from_MR_EdgeId_MR_EdgeId_float MR_std_function_void_from_MR_EdgeId_MR_EdgeId_float; // Defined in `#include <MRCMisc/std_function_void_from_MR_EdgeId_MR_EdgeId_float.h>`.
typedef struct MR_std_vector_std_vector_MR_EdgeId MR_std_vector_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_EdgeId.h>`.


// stores basic params for trimWithPlane function
/// Generated from class `MR::TrimWithPlaneParams`.
typedef struct MR_TrimWithPlaneParams MR_TrimWithPlaneParams;

// stores optional output params for trimWithPlane function
/// Generated from class `MR::TrimOptionalOutput`.
typedef struct MR_TrimOptionalOutput MR_TrimOptionalOutput;

/// subdivides all triangles intersected by given plane, leaving smaller triangles that only touch the plane;
/// \return all triangles on the positive side of the plane
/// \param new2Old receive mapping from newly appeared triangle to its original triangle (part to full)
/// \param eps if existing vertex is within eps distance from the plane, then move the vertex not introducing new ones
/// \param onEdgeSplitCallback is invoked each time when an edge is split. Receives edge ID before split, edge ID after split, and weight of the origin vertex
/// Generated from function `MR::subdivideWithPlane`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `plane` can not be null. It is a single object.
/// Parameter `new2Old` defaults to a null pointer in C++.
/// Parameter `eps` has a default argument: `0`, pass a null pointer to use it.
/// Parameter `onEdgeSplitCallback` has a default argument: `nullptr`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_subdivideWithPlane_5(MR_Mesh *mesh, const MR_Plane3f *plane, MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId *new2Old, const float *eps, MR_PassBy onEdgeSplitCallback_pass_by, MR_std_function_void_from_MR_EdgeId_MR_EdgeId_float *onEdgeSplitCallback);

//Input plane to cut mesh with
/// Returns a pointer to a member variable of class `MR::TrimWithPlaneParams` named `plane`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Plane3f *MR_TrimWithPlaneParams_Get_plane(const MR_TrimWithPlaneParams *_this);

//Input plane to cut mesh with
/// Modifies a member variable of class `MR::TrimWithPlaneParams` named `plane`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_TrimWithPlaneParams_Set_plane(MR_TrimWithPlaneParams *_this, const MR_Plane3f *value);

//Input plane to cut mesh with
/// Returns a mutable pointer to a member variable of class `MR::TrimWithPlaneParams` named `plane`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Plane3f *MR_TrimWithPlaneParams_GetMutable_plane(MR_TrimWithPlaneParams *_this);

// if existing vertex is within eps distance from the plane, then move the vertex not introducing new ones
/// Returns a pointer to a member variable of class `MR::TrimWithPlaneParams` named `eps`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_TrimWithPlaneParams_Get_eps(const MR_TrimWithPlaneParams *_this);

// if existing vertex is within eps distance from the plane, then move the vertex not introducing new ones
/// Modifies a member variable of class `MR::TrimWithPlaneParams` named `eps`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TrimWithPlaneParams_Set_eps(MR_TrimWithPlaneParams *_this, float value);

// if existing vertex is within eps distance from the plane, then move the vertex not introducing new ones
/// Returns a mutable pointer to a member variable of class `MR::TrimWithPlaneParams` named `eps`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_TrimWithPlaneParams_GetMutable_eps(MR_TrimWithPlaneParams *_this);

// is invoked each time when an edge is split. Receives edge ID before split, edge ID after split, and weight of the origin vertex
/// Returns a pointer to a member variable of class `MR::TrimWithPlaneParams` named `onEdgeSplitCallback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_void_from_MR_EdgeId_MR_EdgeId_float *MR_TrimWithPlaneParams_Get_onEdgeSplitCallback(const MR_TrimWithPlaneParams *_this);

// is invoked each time when an edge is split. Receives edge ID before split, edge ID after split, and weight of the origin vertex
/// Modifies a member variable of class `MR::TrimWithPlaneParams` named `onEdgeSplitCallback`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TrimWithPlaneParams_Set_onEdgeSplitCallback(MR_TrimWithPlaneParams *_this, MR_PassBy value_pass_by, MR_std_function_void_from_MR_EdgeId_MR_EdgeId_float *value);

// is invoked each time when an edge is split. Receives edge ID before split, edge ID after split, and weight of the origin vertex
/// Returns a mutable pointer to a member variable of class `MR::TrimWithPlaneParams` named `onEdgeSplitCallback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_void_from_MR_EdgeId_MR_EdgeId_float *MR_TrimWithPlaneParams_GetMutable_onEdgeSplitCallback(MR_TrimWithPlaneParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TrimWithPlaneParams_Destroy()` to free it when you're done using it.
MRC_API MR_TrimWithPlaneParams *MR_TrimWithPlaneParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_TrimWithPlaneParams_DestroyArray()`.
/// Use `MR_TrimWithPlaneParams_OffsetMutablePtr()` and `MR_TrimWithPlaneParams_OffsetPtr()` to access the array elements.
MRC_API MR_TrimWithPlaneParams *MR_TrimWithPlaneParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::TrimWithPlaneParams` elementwise.
/// Parameter `plane` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TrimWithPlaneParams_Destroy()` to free it when you're done using it.
MRC_API MR_TrimWithPlaneParams *MR_TrimWithPlaneParams_ConstructFrom(const MR_Plane3f *plane, float eps, MR_PassBy onEdgeSplitCallback_pass_by, MR_std_function_void_from_MR_EdgeId_MR_EdgeId_float *onEdgeSplitCallback);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_TrimWithPlaneParams *MR_TrimWithPlaneParams_OffsetPtr(const MR_TrimWithPlaneParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_TrimWithPlaneParams *MR_TrimWithPlaneParams_OffsetMutablePtr(MR_TrimWithPlaneParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::TrimWithPlaneParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TrimWithPlaneParams_Destroy()` to free it when you're done using it.
MRC_API MR_TrimWithPlaneParams *MR_TrimWithPlaneParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_TrimWithPlaneParams *_other);

/// Destroys a heap-allocated instance of `MR_TrimWithPlaneParams`. Does nothing if the pointer is null.
MRC_API void MR_TrimWithPlaneParams_Destroy(const MR_TrimWithPlaneParams *_this);

/// Destroys a heap-allocated array of `MR_TrimWithPlaneParams`. Does nothing if the pointer is null.
MRC_API void MR_TrimWithPlaneParams_DestroyArray(const MR_TrimWithPlaneParams *_this);

/// Generated from a method of class `MR::TrimWithPlaneParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TrimWithPlaneParams *MR_TrimWithPlaneParams_AssignFromAnother(MR_TrimWithPlaneParams *_this, MR_PassBy _other_pass_by, MR_TrimWithPlaneParams *_other);

// newly appeared hole boundary edges
/// Returns a pointer to a member variable of class `MR::TrimOptionalOutput` named `outCutEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *const *MR_TrimOptionalOutput_Get_outCutEdges(const MR_TrimOptionalOutput *_this);

// newly appeared hole boundary edges
/// Modifies a member variable of class `MR::TrimOptionalOutput` named `outCutEdges`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TrimOptionalOutput_Set_outCutEdges(MR_TrimOptionalOutput *_this, MR_UndirectedEdgeBitSet *value);

// newly appeared hole boundary edges
/// Returns a mutable pointer to a member variable of class `MR::TrimOptionalOutput` named `outCutEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet **MR_TrimOptionalOutput_GetMutable_outCutEdges(MR_TrimOptionalOutput *_this);

// newly appeared hole contours where each edge does not have right face
/// Returns a pointer to a member variable of class `MR::TrimOptionalOutput` named `outCutContours`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_std_vector_MR_EdgeId *const *MR_TrimOptionalOutput_Get_outCutContours(const MR_TrimOptionalOutput *_this);

// newly appeared hole contours where each edge does not have right face
/// Modifies a member variable of class `MR::TrimOptionalOutput` named `outCutContours`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TrimOptionalOutput_Set_outCutContours(MR_TrimOptionalOutput *_this, MR_std_vector_std_vector_MR_EdgeId *value);

// newly appeared hole contours where each edge does not have right face
/// Returns a mutable pointer to a member variable of class `MR::TrimOptionalOutput` named `outCutContours`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_std_vector_MR_EdgeId **MR_TrimOptionalOutput_GetMutable_outCutContours(MR_TrimOptionalOutput *_this);

// mapping from newly appeared triangle to its original triangle (part to full)
/// Returns a pointer to a member variable of class `MR::TrimOptionalOutput` named `new2Old`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId *const *MR_TrimOptionalOutput_Get_new2Old(const MR_TrimOptionalOutput *_this);

// mapping from newly appeared triangle to its original triangle (part to full)
/// Modifies a member variable of class `MR::TrimOptionalOutput` named `new2Old`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TrimOptionalOutput_Set_new2Old(MR_TrimOptionalOutput *_this, MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId *value);

// mapping from newly appeared triangle to its original triangle (part to full)
/// Returns a mutable pointer to a member variable of class `MR::TrimOptionalOutput` named `new2Old`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId **MR_TrimOptionalOutput_GetMutable_new2Old(MR_TrimOptionalOutput *_this);

// left part of the trimmed mesh
/// Returns a pointer to a member variable of class `MR::TrimOptionalOutput` named `otherPart`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Mesh *const *MR_TrimOptionalOutput_Get_otherPart(const MR_TrimOptionalOutput *_this);

// left part of the trimmed mesh
/// Modifies a member variable of class `MR::TrimOptionalOutput` named `otherPart`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TrimOptionalOutput_Set_otherPart(MR_TrimOptionalOutput *_this, MR_Mesh *value);

// left part of the trimmed mesh
/// Returns a mutable pointer to a member variable of class `MR::TrimOptionalOutput` named `otherPart`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Mesh **MR_TrimOptionalOutput_GetMutable_otherPart(MR_TrimOptionalOutput *_this);

// mapping from newly appeared triangle to its original triangle (part to full) in otherPart
/// Returns a pointer to a member variable of class `MR::TrimOptionalOutput` named `otherNew2Old`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId *const *MR_TrimOptionalOutput_Get_otherNew2Old(const MR_TrimOptionalOutput *_this);

// mapping from newly appeared triangle to its original triangle (part to full) in otherPart
/// Modifies a member variable of class `MR::TrimOptionalOutput` named `otherNew2Old`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TrimOptionalOutput_Set_otherNew2Old(MR_TrimOptionalOutput *_this, MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId *value);

// mapping from newly appeared triangle to its original triangle (part to full) in otherPart
/// Returns a mutable pointer to a member variable of class `MR::TrimOptionalOutput` named `otherNew2Old`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId **MR_TrimOptionalOutput_GetMutable_otherNew2Old(MR_TrimOptionalOutput *_this);

// newly appeared hole contours where each edge does not have right face in otherPart
/// Returns a pointer to a member variable of class `MR::TrimOptionalOutput` named `otherOutCutContours`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_std_vector_MR_EdgeId *const *MR_TrimOptionalOutput_Get_otherOutCutContours(const MR_TrimOptionalOutput *_this);

// newly appeared hole contours where each edge does not have right face in otherPart
/// Modifies a member variable of class `MR::TrimOptionalOutput` named `otherOutCutContours`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TrimOptionalOutput_Set_otherOutCutContours(MR_TrimOptionalOutput *_this, MR_std_vector_std_vector_MR_EdgeId *value);

// newly appeared hole contours where each edge does not have right face in otherPart
/// Returns a mutable pointer to a member variable of class `MR::TrimOptionalOutput` named `otherOutCutContours`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_std_vector_MR_EdgeId **MR_TrimOptionalOutput_GetMutable_otherOutCutContours(MR_TrimOptionalOutput *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TrimOptionalOutput_Destroy()` to free it when you're done using it.
MRC_API MR_TrimOptionalOutput *MR_TrimOptionalOutput_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_TrimOptionalOutput_DestroyArray()`.
/// Use `MR_TrimOptionalOutput_OffsetMutablePtr()` and `MR_TrimOptionalOutput_OffsetPtr()` to access the array elements.
MRC_API MR_TrimOptionalOutput *MR_TrimOptionalOutput_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::TrimOptionalOutput` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TrimOptionalOutput_Destroy()` to free it when you're done using it.
MRC_API MR_TrimOptionalOutput *MR_TrimOptionalOutput_ConstructFrom(MR_UndirectedEdgeBitSet *outCutEdges, MR_std_vector_std_vector_MR_EdgeId *outCutContours, MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId *new2Old, MR_Mesh *otherPart, MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId *otherNew2Old, MR_std_vector_std_vector_MR_EdgeId *otherOutCutContours);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_TrimOptionalOutput *MR_TrimOptionalOutput_OffsetPtr(const MR_TrimOptionalOutput *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_TrimOptionalOutput *MR_TrimOptionalOutput_OffsetMutablePtr(MR_TrimOptionalOutput *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::TrimOptionalOutput`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TrimOptionalOutput_Destroy()` to free it when you're done using it.
MRC_API MR_TrimOptionalOutput *MR_TrimOptionalOutput_ConstructFromAnother(const MR_TrimOptionalOutput *_other);

/// Destroys a heap-allocated instance of `MR_TrimOptionalOutput`. Does nothing if the pointer is null.
MRC_API void MR_TrimOptionalOutput_Destroy(const MR_TrimOptionalOutput *_this);

/// Destroys a heap-allocated array of `MR_TrimOptionalOutput`. Does nothing if the pointer is null.
MRC_API void MR_TrimOptionalOutput_DestroyArray(const MR_TrimOptionalOutput *_this);

/// Generated from a method of class `MR::TrimOptionalOutput` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TrimOptionalOutput *MR_TrimOptionalOutput_AssignFromAnother(MR_TrimOptionalOutput *_this, const MR_TrimOptionalOutput *_other);

/** \brief trim mesh by plane
*
* This function cuts mesh with plane, leaving only part of mesh that lay in positive direction of normal
* \param mesh Input mesh that will be cut
* \param params stores basic params for trimWithPlane function
* \param optOut stores optional output params for trimWithPlane function
*/
/// Generated from function `MR::trimWithPlane`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Parameter `optOut` is a single object.
/// Parameter `optOut` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_trimWithPlane_MR_Mesh(MR_Mesh *mesh, const MR_TrimWithPlaneParams *params, const MR_TrimOptionalOutput *optOut);

#ifdef __cplusplus
} // extern "C"
#endif
