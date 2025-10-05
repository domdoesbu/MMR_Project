// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_CoordinateConverters MR_CoordinateConverters; // Defined in `#include <MRCMesh/MRPrecisePredicates3.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_std_function_MR_Vector3i_from_const_MR_Vector3f_ref MR_std_function_MR_Vector3i_from_const_MR_Vector3f_ref; // Defined in `#include <MRCMisc/std_function_MR_Vector3i_from_const_MR_Vector3f_ref.h>`.
typedef struct MR_std_vector_MR_EdgeId MR_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_MR_EdgeId.h>`.
typedef struct MR_std_vector_MR_EdgeTri MR_std_vector_MR_EdgeTri; // Defined in `#include <MRCMisc/std_vector_MR_EdgeTri.h>`.
typedef struct MR_std_vector_MR_FaceId MR_std_vector_MR_FaceId; // Defined in `#include <MRCMisc/std_vector_MR_FaceId.h>`.
typedef struct MR_std_vector_MR_VarEdgeTri MR_std_vector_MR_VarEdgeTri; // Defined in `#include <MRCMisc/std_vector_MR_VarEdgeTri.h>`.


/// edge from one mesh and triangle from another mesh
/// Generated from class `MR::EdgeTri`.
typedef struct MR_EdgeTri MR_EdgeTri;

/// if isEdgeATriB() == true,  then stores edge from mesh A and triangle from mesh B
/// if isEdgeATriB() == false, then stores edge from mesh B and triangle from mesh A
/// Generated from class `MR::VarEdgeTri`.
typedef struct MR_VarEdgeTri MR_VarEdgeTri;

/// Generated from class `MR::VarEdgeTri::FlaggedTri`.
typedef struct MR_VarEdgeTri_FlaggedTri MR_VarEdgeTri_FlaggedTri;

/// Returns a pointer to a member variable of class `MR::EdgeTri` named `edge`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_EdgeId *MR_EdgeTri_Get_edge(const MR_EdgeTri *_this);

/// Modifies a member variable of class `MR::EdgeTri` named `edge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EdgeTri_Set_edge(MR_EdgeTri *_this, MR_EdgeId value);

/// Returns a mutable pointer to a member variable of class `MR::EdgeTri` named `edge`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeId *MR_EdgeTri_GetMutable_edge(MR_EdgeTri *_this);

/// Returns a pointer to a member variable of class `MR::EdgeTri` named `tri`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceId *MR_EdgeTri_Get_tri(const MR_EdgeTri *_this);

/// Modifies a member variable of class `MR::EdgeTri` named `tri`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EdgeTri_Set_tri(MR_EdgeTri *_this, MR_FaceId value);

/// Returns a mutable pointer to a member variable of class `MR::EdgeTri` named `tri`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceId *MR_EdgeTri_GetMutable_tri(MR_EdgeTri *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeTri_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeTri *MR_EdgeTri_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_EdgeTri_DestroyArray()`.
/// Use `MR_EdgeTri_OffsetMutablePtr()` and `MR_EdgeTri_OffsetPtr()` to access the array elements.
MRC_API MR_EdgeTri *MR_EdgeTri_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_EdgeTri *MR_EdgeTri_OffsetPtr(const MR_EdgeTri *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_EdgeTri *MR_EdgeTri_OffsetMutablePtr(MR_EdgeTri *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::EdgeTri`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeTri_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeTri *MR_EdgeTri_ConstructFromAnother(const MR_EdgeTri *_other);

/// Generated from a constructor of class `MR::EdgeTri`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeTri_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeTri *MR_EdgeTri_Construct(MR_EdgeId e, MR_FaceId t);

/// Destroys a heap-allocated instance of `MR_EdgeTri`. Does nothing if the pointer is null.
MRC_API void MR_EdgeTri_Destroy(const MR_EdgeTri *_this);

/// Destroys a heap-allocated array of `MR_EdgeTri`. Does nothing if the pointer is null.
MRC_API void MR_EdgeTri_DestroyArray(const MR_EdgeTri *_this);

/// Generated from a method of class `MR::EdgeTri` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeTri *MR_EdgeTri_AssignFromAnother(MR_EdgeTri *_this, const MR_EdgeTri *_other);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_EdgeTri(const MR_EdgeTri *a, const MR_EdgeTri *b);

/// Returns a pointer to a member variable of class `MR::VarEdgeTri` named `edge`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_EdgeId *MR_VarEdgeTri_Get_edge(const MR_VarEdgeTri *_this);

/// Modifies a member variable of class `MR::VarEdgeTri` named `edge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VarEdgeTri_Set_edge(MR_VarEdgeTri *_this, MR_EdgeId value);

/// Returns a mutable pointer to a member variable of class `MR::VarEdgeTri` named `edge`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeId *MR_VarEdgeTri_GetMutable_edge(MR_VarEdgeTri *_this);

/// Returns a pointer to a member variable of class `MR::VarEdgeTri` named `flaggedTri`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VarEdgeTri_FlaggedTri *MR_VarEdgeTri_Get_flaggedTri(const MR_VarEdgeTri *_this);

/// Modifies a member variable of class `MR::VarEdgeTri` named `flaggedTri`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_VarEdgeTri_Set_flaggedTri(MR_VarEdgeTri *_this, const MR_VarEdgeTri_FlaggedTri *value);

/// Returns a mutable pointer to a member variable of class `MR::VarEdgeTri` named `flaggedTri`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VarEdgeTri_FlaggedTri *MR_VarEdgeTri_GetMutable_flaggedTri(MR_VarEdgeTri *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VarEdgeTri_Destroy()` to free it when you're done using it.
MRC_API MR_VarEdgeTri *MR_VarEdgeTri_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VarEdgeTri_DestroyArray()`.
/// Use `MR_VarEdgeTri_OffsetMutablePtr()` and `MR_VarEdgeTri_OffsetPtr()` to access the array elements.
MRC_API MR_VarEdgeTri *MR_VarEdgeTri_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VarEdgeTri *MR_VarEdgeTri_OffsetPtr(const MR_VarEdgeTri *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VarEdgeTri *MR_VarEdgeTri_OffsetMutablePtr(MR_VarEdgeTri *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VarEdgeTri`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VarEdgeTri_Destroy()` to free it when you're done using it.
MRC_API MR_VarEdgeTri *MR_VarEdgeTri_ConstructFromAnother(const MR_VarEdgeTri *_other);

/// Generated from a constructor of class `MR::VarEdgeTri`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VarEdgeTri_Destroy()` to free it when you're done using it.
MRC_API MR_VarEdgeTri *MR_VarEdgeTri_Construct_3(bool isEdgeATriB, MR_EdgeId e, MR_FaceId t);

/// Generated from a constructor of class `MR::VarEdgeTri`.
/// Parameter `et` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VarEdgeTri_Destroy()` to free it when you're done using it.
MRC_API MR_VarEdgeTri *MR_VarEdgeTri_Construct_2(bool isEdgeATriB, const MR_EdgeTri *et);

/// Destroys a heap-allocated instance of `MR_VarEdgeTri`. Does nothing if the pointer is null.
MRC_API void MR_VarEdgeTri_Destroy(const MR_VarEdgeTri *_this);

/// Destroys a heap-allocated array of `MR_VarEdgeTri`. Does nothing if the pointer is null.
MRC_API void MR_VarEdgeTri_DestroyArray(const MR_VarEdgeTri *_this);

/// Generated from a conversion operator of class `MR::VarEdgeTri` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_VarEdgeTri_ConvertTo_bool(const MR_VarEdgeTri *_this);

/// Generated from a method of class `MR::VarEdgeTri` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VarEdgeTri *MR_VarEdgeTri_AssignFromAnother(MR_VarEdgeTri *_this, const MR_VarEdgeTri *_other);

/// Generated from a method of class `MR::VarEdgeTri` named `tri`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_FaceId MR_VarEdgeTri_tri(const MR_VarEdgeTri *_this);

/// Generated from a method of class `MR::VarEdgeTri` named `isEdgeATriB`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_VarEdgeTri_isEdgeATriB(const MR_VarEdgeTri *_this);

/// Generated from a method of class `MR::VarEdgeTri` named `edgeTri`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeTri_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeTri *MR_VarEdgeTri_edgeTri(const MR_VarEdgeTri *_this);

/// Generated from a method of class `MR::VarEdgeTri` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_VarEdgeTri_valid(const MR_VarEdgeTri *_this);

/// Generated from a method of class `MR::VarEdgeTri` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MRC_API bool MR_equal_MR_VarEdgeTri(const MR_VarEdgeTri *_this, const MR_VarEdgeTri *_1);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VarEdgeTri_FlaggedTri_Destroy()` to free it when you're done using it.
MRC_API MR_VarEdgeTri_FlaggedTri *MR_VarEdgeTri_FlaggedTri_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VarEdgeTri_FlaggedTri_DestroyArray()`.
/// Use `MR_VarEdgeTri_FlaggedTri_OffsetMutablePtr()` and `MR_VarEdgeTri_FlaggedTri_OffsetPtr()` to access the array elements.
MRC_API MR_VarEdgeTri_FlaggedTri *MR_VarEdgeTri_FlaggedTri_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VarEdgeTri_FlaggedTri *MR_VarEdgeTri_FlaggedTri_OffsetPtr(const MR_VarEdgeTri_FlaggedTri *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VarEdgeTri_FlaggedTri *MR_VarEdgeTri_FlaggedTri_OffsetMutablePtr(MR_VarEdgeTri_FlaggedTri *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VarEdgeTri::FlaggedTri`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VarEdgeTri_FlaggedTri_Destroy()` to free it when you're done using it.
MRC_API MR_VarEdgeTri_FlaggedTri *MR_VarEdgeTri_FlaggedTri_ConstructFromAnother(const MR_VarEdgeTri_FlaggedTri *_other);

/// Destroys a heap-allocated instance of `MR_VarEdgeTri_FlaggedTri`. Does nothing if the pointer is null.
MRC_API void MR_VarEdgeTri_FlaggedTri_Destroy(const MR_VarEdgeTri_FlaggedTri *_this);

/// Destroys a heap-allocated array of `MR_VarEdgeTri_FlaggedTri`. Does nothing if the pointer is null.
MRC_API void MR_VarEdgeTri_FlaggedTri_DestroyArray(const MR_VarEdgeTri_FlaggedTri *_this);

/// Generated from a method of class `MR::VarEdgeTri::FlaggedTri` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VarEdgeTri_FlaggedTri *MR_VarEdgeTri_FlaggedTri_AssignFromAnother(MR_VarEdgeTri_FlaggedTri *_this, const MR_VarEdgeTri_FlaggedTri *_other);

/// Generated from a method of class `MR::VarEdgeTri::FlaggedTri` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MRC_API bool MR_equal_MR_VarEdgeTri_FlaggedTri(const MR_VarEdgeTri_FlaggedTri *_this, const MR_VarEdgeTri_FlaggedTri *_1);

/**
* \brief finds all pairs of colliding edges from one mesh and triangle from another mesh
* \param rigidB2A rigid transformation from B-mesh space to A mesh space, nullptr considered as identity transformation
* \param anyIntersection if true then the function returns as fast as it finds any intersection
*/
/// Generated from function `MR::findCollidingEdgeTrisPrecise`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `rigidB2A` defaults to a null pointer in C++.
/// Parameter `anyIntersection` has a default argument: `false`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_VarEdgeTri_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_VarEdgeTri *MR_findCollidingEdgeTrisPrecise_5(const MR_MeshPart *a, const MR_MeshPart *b, MR_PassBy conv_pass_by, MR_std_function_MR_Vector3i_from_const_MR_Vector3f_ref *conv, const MR_AffineXf3f *rigidB2A, const bool *anyIntersection);

/**
* \brief finds all pairs of colliding edges and triangle within one mesh
* \param anyIntersection if true then the function returns as fast as it finds any intersection
* \param rigidB2A rigid transformation from B-mesh space to A mesh space, nullptr considered as identity transformation, might be useful to obtain same result as in boolean operation would for mesh B
* \param aVertsSize used in float to int conversion, might be useful to obtain same result as in boolean operation would for mesh B
*/
/// Generated from function `MR::findSelfCollidingEdgeTrisPrecise`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `anyIntersection` has a default argument: `false`, pass a null pointer to use it.
/// Parameter `rigidB2A` defaults to a null pointer in C++.
/// Parameter `aVertSizes` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeTri_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeTri *MR_findSelfCollidingEdgeTrisPrecise(const MR_MeshPart *mp, MR_PassBy conv_pass_by, MR_std_function_MR_Vector3i_from_const_MR_Vector3f_ref *conv, const bool *anyIntersection, const MR_AffineXf3f *rigidB2A, const int32_t *aVertSizes);

/// finds all intersections between every given edge from A and given triangles from B
/// Generated from function `MR::findCollidingEdgeTrisPrecise`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `edgesA` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `facesB` can not be null. It is a single object.
/// Parameter `rigidB2A` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeTri_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeTri *MR_findCollidingEdgeTrisPrecise_6_std_vector_MR_EdgeId(const MR_Mesh *a, const MR_std_vector_MR_EdgeId *edgesA, const MR_Mesh *b, const MR_std_vector_MR_FaceId *facesB, MR_PassBy conv_pass_by, MR_std_function_MR_Vector3i_from_const_MR_Vector3f_ref *conv, const MR_AffineXf3f *rigidB2A);

/// finds all intersections between every given triangle from A and given edge from B
/// Generated from function `MR::findCollidingEdgeTrisPrecise`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `facesA` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `edgesB` can not be null. It is a single object.
/// Parameter `rigidB2A` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeTri_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeTri *MR_findCollidingEdgeTrisPrecise_6_std_vector_MR_FaceId(const MR_Mesh *a, const MR_std_vector_MR_FaceId *facesA, const MR_Mesh *b, const MR_std_vector_MR_EdgeId *edgesB, MR_PassBy conv_pass_by, MR_std_function_MR_Vector3i_from_const_MR_Vector3f_ref *conv, const MR_AffineXf3f *rigidB2A);

/**
* \brief creates simple converters from Vector3f to Vector3i and back in mesh part area range
*/
/// Generated from function `MR::getVectorConverters`.
/// Parameter `a` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CoordinateConverters_Destroy()` to free it when you're done using it.
MRC_API MR_CoordinateConverters *MR_getVectorConverters_1(const MR_MeshPart *a);

/**
* \brief creates simple converters from Vector3f to Vector3i and back in mesh parts area range
* \param rigidB2A rigid transformation from B-mesh space to A mesh space, nullptr considered as identity transformation
*/
/// Generated from function `MR::getVectorConverters`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `rigidB2A` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CoordinateConverters_Destroy()` to free it when you're done using it.
MRC_API MR_CoordinateConverters *MR_getVectorConverters_3(const MR_MeshPart *a, const MR_MeshPart *b, const MR_AffineXf3f *rigidB2A);

#ifdef __cplusplus
} // extern "C"
#endif
