// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MREnums.h>
#include <MRCMesh/MRVector3.h>
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
typedef struct MR_MeshTriPoint MR_MeshTriPoint; // Defined in `#include <MRCMesh/MRMeshTriPoint.h>`.
typedef struct MR_expected_MR_OneMeshContour_std_string MR_expected_MR_OneMeshContour_std_string; // Defined in `#include <MRCMisc/expected_MR_OneMeshContour_std_string.h>`.
typedef struct MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_FaceId_MR_FaceId.h>`.
typedef struct MR_std_function_MR_Vector3i_from_const_MR_Vector3f_ref MR_std_function_MR_Vector3i_from_const_MR_Vector3f_ref; // Defined in `#include <MRCMisc/std_function_MR_Vector3i_from_const_MR_Vector3f_ref.h>`.
typedef struct MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId; // Defined in `#include <MRCMisc/std_variant_MR_FaceId_MR_EdgeId_MR_VertId.h>`.
typedef struct MR_std_vector_MR_EdgePoint MR_std_vector_MR_EdgePoint; // Defined in `#include <MRCMisc/std_vector_MR_EdgePoint.h>`.
typedef struct MR_std_vector_MR_MeshTriPoint MR_std_vector_MR_MeshTriPoint; // Defined in `#include <MRCMisc/std_vector_MR_MeshTriPoint.h>`.
typedef struct MR_std_vector_MR_OneMeshContour MR_std_vector_MR_OneMeshContour; // Defined in `#include <MRCMisc/std_vector_MR_OneMeshContour.h>`.
typedef struct MR_std_vector_MR_OneMeshIntersection MR_std_vector_MR_OneMeshIntersection; // Defined in `#include <MRCMisc/std_vector_MR_OneMeshIntersection.h>`.
typedef struct MR_std_vector_int32_t MR_std_vector_int32_t; // Defined in `#include <MRCMisc/std_vector_int32_t.h>`.
typedef struct MR_std_vector_std_vector_MR_EdgePoint MR_std_vector_std_vector_MR_EdgePoint; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_EdgePoint.h>`.
typedef struct MR_std_vector_std_vector_MR_VarEdgeTri MR_std_vector_std_vector_MR_VarEdgeTri; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_VarEdgeTri.h>`.
typedef struct MR_std_vector_std_vector_MR_Vector3f MR_std_vector_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_Vector3f.h>`.


// Special data to sort intersections more accurate
/// Generated from class `MR::SortIntersectionsData`.
typedef struct MR_SortIntersectionsData MR_SortIntersectionsData;

// Simple point on mesh, represented by primitive id and coordinate in mesh space
/// Generated from class `MR::OneMeshIntersection`.
typedef struct MR_OneMeshIntersection MR_OneMeshIntersection;

// One contour on mesh
/// Generated from class `MR::OneMeshContour`.
typedef struct MR_OneMeshContour MR_OneMeshContour;

/// Geo path search settings
/// Generated from class `MR::SearchPathSettings`.
typedef struct MR_SearchPathSettings MR_SearchPathSettings;

/// Returns a pointer to a member variable of class `MR::SortIntersectionsData` named `otherMesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Mesh *MR_SortIntersectionsData_Get_otherMesh(const MR_SortIntersectionsData *_this);

/// Returns a pointer to a member variable of class `MR::SortIntersectionsData` named `contours`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_std_vector_MR_VarEdgeTri *MR_SortIntersectionsData_Get_contours(const MR_SortIntersectionsData *_this);

/// Returns a pointer to a member variable of class `MR::SortIntersectionsData` named `converter`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_MR_Vector3i_from_const_MR_Vector3f_ref *MR_SortIntersectionsData_Get_converter(const MR_SortIntersectionsData *_this);

/// Modifies a member variable of class `MR::SortIntersectionsData` named `converter`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SortIntersectionsData_Set_converter(MR_SortIntersectionsData *_this, MR_PassBy value_pass_by, MR_std_function_MR_Vector3i_from_const_MR_Vector3f_ref *value);

/// Returns a mutable pointer to a member variable of class `MR::SortIntersectionsData` named `converter`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_MR_Vector3i_from_const_MR_Vector3f_ref *MR_SortIntersectionsData_GetMutable_converter(MR_SortIntersectionsData *_this);

/// Returns a pointer to a member variable of class `MR::SortIntersectionsData` named `rigidB2A`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *const *MR_SortIntersectionsData_Get_rigidB2A(const MR_SortIntersectionsData *_this);

/// Modifies a member variable of class `MR::SortIntersectionsData` named `rigidB2A`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SortIntersectionsData_Set_rigidB2A(MR_SortIntersectionsData *_this, const MR_AffineXf3f *value);

/// Returns a mutable pointer to a member variable of class `MR::SortIntersectionsData` named `rigidB2A`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f **MR_SortIntersectionsData_GetMutable_rigidB2A(MR_SortIntersectionsData *_this);

/// Returns a pointer to a member variable of class `MR::SortIntersectionsData` named `meshAVertsNum`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_SortIntersectionsData_Get_meshAVertsNum(const MR_SortIntersectionsData *_this);

/// Modifies a member variable of class `MR::SortIntersectionsData` named `meshAVertsNum`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SortIntersectionsData_Set_meshAVertsNum(MR_SortIntersectionsData *_this, MR_uint64_t value);

/// Returns a mutable pointer to a member variable of class `MR::SortIntersectionsData` named `meshAVertsNum`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_SortIntersectionsData_GetMutable_meshAVertsNum(MR_SortIntersectionsData *_this);

/// Returns a pointer to a member variable of class `MR::SortIntersectionsData` named `isOtherA`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SortIntersectionsData_Get_isOtherA(const MR_SortIntersectionsData *_this);

/// Modifies a member variable of class `MR::SortIntersectionsData` named `isOtherA`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SortIntersectionsData_Set_isOtherA(MR_SortIntersectionsData *_this, bool value);

/// Returns a mutable pointer to a member variable of class `MR::SortIntersectionsData` named `isOtherA`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SortIntersectionsData_GetMutable_isOtherA(MR_SortIntersectionsData *_this);

/// Generated from a constructor of class `MR::SortIntersectionsData`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SortIntersectionsData_Destroy()` to free it when you're done using it.
MRC_API MR_SortIntersectionsData *MR_SortIntersectionsData_ConstructFromAnother(MR_PassBy _other_pass_by, MR_SortIntersectionsData *_other);

/// Constructs `MR::SortIntersectionsData` elementwise.
/// Parameter `otherMesh` can not be null. It is a single object.
/// Parameter `contours` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SortIntersectionsData_Destroy()` to free it when you're done using it.
MRC_API MR_SortIntersectionsData *MR_SortIntersectionsData_ConstructFrom(const MR_Mesh *otherMesh, const MR_std_vector_std_vector_MR_VarEdgeTri *contours, MR_PassBy converter_pass_by, MR_std_function_MR_Vector3i_from_const_MR_Vector3f_ref *converter, const MR_AffineXf3f *rigidB2A, MR_uint64_t meshAVertsNum, bool isOtherA);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SortIntersectionsData *MR_SortIntersectionsData_OffsetPtr(const MR_SortIntersectionsData *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SortIntersectionsData *MR_SortIntersectionsData_OffsetMutablePtr(MR_SortIntersectionsData *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_SortIntersectionsData`. Does nothing if the pointer is null.
MRC_API void MR_SortIntersectionsData_Destroy(const MR_SortIntersectionsData *_this);

/// Destroys a heap-allocated array of `MR_SortIntersectionsData`. Does nothing if the pointer is null.
MRC_API void MR_SortIntersectionsData_DestroyArray(const MR_SortIntersectionsData *_this);

/// Returns a pointer to a member variable of class `MR::OneMeshIntersection` named `primitiveId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *MR_OneMeshIntersection_Get_primitiveId(const MR_OneMeshIntersection *_this);

/// Modifies a member variable of class `MR::OneMeshIntersection` named `primitiveId`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_OneMeshIntersection_Set_primitiveId(MR_OneMeshIntersection *_this, const MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *value);

/// Returns a mutable pointer to a member variable of class `MR::OneMeshIntersection` named `primitiveId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *MR_OneMeshIntersection_GetMutable_primitiveId(MR_OneMeshIntersection *_this);

/// Returns a pointer to a member variable of class `MR::OneMeshIntersection` named `coordinate`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_OneMeshIntersection_Get_coordinate(const MR_OneMeshIntersection *_this);

/// Modifies a member variable of class `MR::OneMeshIntersection` named `coordinate`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OneMeshIntersection_Set_coordinate(MR_OneMeshIntersection *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::OneMeshIntersection` named `coordinate`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_OneMeshIntersection_GetMutable_coordinate(MR_OneMeshIntersection *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OneMeshIntersection_Destroy()` to free it when you're done using it.
MRC_API MR_OneMeshIntersection *MR_OneMeshIntersection_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_OneMeshIntersection_DestroyArray()`.
/// Use `MR_OneMeshIntersection_OffsetMutablePtr()` and `MR_OneMeshIntersection_OffsetPtr()` to access the array elements.
MRC_API MR_OneMeshIntersection *MR_OneMeshIntersection_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::OneMeshIntersection` elementwise.
/// Parameter `primitiveId` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OneMeshIntersection_Destroy()` to free it when you're done using it.
MRC_API MR_OneMeshIntersection *MR_OneMeshIntersection_ConstructFrom(const MR_std_variant_MR_FaceId_MR_EdgeId_MR_VertId *primitiveId, MR_Vector3f coordinate);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_OneMeshIntersection *MR_OneMeshIntersection_OffsetPtr(const MR_OneMeshIntersection *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_OneMeshIntersection *MR_OneMeshIntersection_OffsetMutablePtr(MR_OneMeshIntersection *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::OneMeshIntersection`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OneMeshIntersection_Destroy()` to free it when you're done using it.
MRC_API MR_OneMeshIntersection *MR_OneMeshIntersection_ConstructFromAnother(const MR_OneMeshIntersection *_other);

/// Destroys a heap-allocated instance of `MR_OneMeshIntersection`. Does nothing if the pointer is null.
MRC_API void MR_OneMeshIntersection_Destroy(const MR_OneMeshIntersection *_this);

/// Destroys a heap-allocated array of `MR_OneMeshIntersection`. Does nothing if the pointer is null.
MRC_API void MR_OneMeshIntersection_DestroyArray(const MR_OneMeshIntersection *_this);

/// Generated from a method of class `MR::OneMeshIntersection` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OneMeshIntersection *MR_OneMeshIntersection_AssignFromAnother(MR_OneMeshIntersection *_this, const MR_OneMeshIntersection *_other);

/// Returns a pointer to a member variable of class `MR::OneMeshContour` named `intersections`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_OneMeshIntersection *MR_OneMeshContour_Get_intersections(const MR_OneMeshContour *_this);

/// Modifies a member variable of class `MR::OneMeshContour` named `intersections`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OneMeshContour_Set_intersections(MR_OneMeshContour *_this, MR_PassBy value_pass_by, MR_std_vector_MR_OneMeshIntersection *value);

/// Returns a mutable pointer to a member variable of class `MR::OneMeshContour` named `intersections`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_OneMeshIntersection *MR_OneMeshContour_GetMutable_intersections(MR_OneMeshContour *_this);

/// Returns a pointer to a member variable of class `MR::OneMeshContour` named `closed`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_OneMeshContour_Get_closed(const MR_OneMeshContour *_this);

/// Modifies a member variable of class `MR::OneMeshContour` named `closed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OneMeshContour_Set_closed(MR_OneMeshContour *_this, bool value);

/// Returns a mutable pointer to a member variable of class `MR::OneMeshContour` named `closed`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_OneMeshContour_GetMutable_closed(MR_OneMeshContour *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OneMeshContour_Destroy()` to free it when you're done using it.
MRC_API MR_OneMeshContour *MR_OneMeshContour_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_OneMeshContour_DestroyArray()`.
/// Use `MR_OneMeshContour_OffsetMutablePtr()` and `MR_OneMeshContour_OffsetPtr()` to access the array elements.
MRC_API MR_OneMeshContour *MR_OneMeshContour_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::OneMeshContour` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OneMeshContour_Destroy()` to free it when you're done using it.
MRC_API MR_OneMeshContour *MR_OneMeshContour_ConstructFrom(MR_PassBy intersections_pass_by, MR_std_vector_MR_OneMeshIntersection *intersections, bool closed);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_OneMeshContour *MR_OneMeshContour_OffsetPtr(const MR_OneMeshContour *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_OneMeshContour *MR_OneMeshContour_OffsetMutablePtr(MR_OneMeshContour *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::OneMeshContour`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OneMeshContour_Destroy()` to free it when you're done using it.
MRC_API MR_OneMeshContour *MR_OneMeshContour_ConstructFromAnother(MR_PassBy _other_pass_by, MR_OneMeshContour *_other);

/// Destroys a heap-allocated instance of `MR_OneMeshContour`. Does nothing if the pointer is null.
MRC_API void MR_OneMeshContour_Destroy(const MR_OneMeshContour *_this);

/// Destroys a heap-allocated array of `MR_OneMeshContour`. Does nothing if the pointer is null.
MRC_API void MR_OneMeshContour_DestroyArray(const MR_OneMeshContour *_this);

/// Generated from a method of class `MR::OneMeshContour` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OneMeshContour *MR_OneMeshContour_AssignFromAnother(MR_OneMeshContour *_this, MR_PassBy _other_pass_by, MR_OneMeshContour *_other);

// Divides faces that fully own contours into 3 parts with center in center mass of one of the face contours
// if there is more than one contour on face it guarantee to subdivide at least one lone contour on this face
/// Generated from function `MR::subdivideLoneContours`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `contours` can not be null. It is a single object.
/// Parameter `new2oldMap` defaults to a null pointer in C++.
MRC_API void MR_subdivideLoneContours(MR_Mesh *mesh, const MR_std_vector_MR_OneMeshContour *contours, MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId *new2oldMap);

/// Converts contours given in topological terms as the intersections of one mesh's edge and another mesh's triangle (ContinuousContours),
/// into contours of meshA and/or meshB given as a sequence of (primitiveId and Cartesian coordinates);
/// converters are required for better precision in case of degenerations;
/// note that contours should not have intersections
/// Generated from function `MR::getOneMeshIntersectionContours`.
/// Parameter `meshA` can not be null. It is a single object.
/// Parameter `meshB` can not be null. It is a single object.
/// Parameter `contours` can not be null. It is a single object.
/// Parameter `converters` can not be null. It is a single object.
/// Parameter `rigidB2A` defaults to a null pointer in C++.
/// Parameter `outPtsA` defaults to a null pointer in C++.
/// Parameter `addSelfyTerminalVerts` has a default argument: `false`, pass a null pointer to use it.
MRC_API void MR_getOneMeshIntersectionContours(const MR_Mesh *meshA, const MR_Mesh *meshB, const MR_std_vector_std_vector_MR_VarEdgeTri *contours, MR_std_vector_MR_OneMeshContour *outA, MR_std_vector_MR_OneMeshContour *outB, const MR_CoordinateConverters *converters, const MR_AffineXf3f *rigidB2A, MR_std_vector_std_vector_MR_Vector3f *outPtsA, const bool *addSelfyTerminalVerts);

// Converts ordered continuous self contours of single meshes to OneMeshContours
// converters are required for better precision in case of degenerations
/// Generated from function `MR::getOneMeshSelfIntersectionContours`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `contours` can not be null. It is a single object.
/// Parameter `converters` can not be null. It is a single object.
/// Parameter `rigidB2A` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_OneMeshContour_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_OneMeshContour *MR_getOneMeshSelfIntersectionContours(const MR_Mesh *mesh, const MR_std_vector_std_vector_MR_VarEdgeTri *contours, const MR_CoordinateConverters *converters, const MR_AffineXf3f *rigidB2A);

// Converts OneMeshContours contours representation to Contours3f: set of coordinates
/// Generated from function `MR::extractMeshContours`.
/// Parameter `meshContours` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector3f *MR_extractMeshContours(const MR_std_vector_MR_OneMeshContour *meshContours);

///< the algorithm to compute approximately geodesic path
/// Returns a pointer to a member variable of class `MR::SearchPathSettings` named `geodesicPathApprox`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_GeodesicPathApprox *MR_SearchPathSettings_Get_geodesicPathApprox(const MR_SearchPathSettings *_this);

///< the algorithm to compute approximately geodesic path
/// Modifies a member variable of class `MR::SearchPathSettings` named `geodesicPathApprox`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SearchPathSettings_Set_geodesicPathApprox(MR_SearchPathSettings *_this, MR_GeodesicPathApprox value);

///< the algorithm to compute approximately geodesic path
/// Returns a mutable pointer to a member variable of class `MR::SearchPathSettings` named `geodesicPathApprox`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GeodesicPathApprox *MR_SearchPathSettings_GetMutable_geodesicPathApprox(MR_SearchPathSettings *_this);

///< the maximum number of iterations to reduce approximate path length and convert it in geodesic path
/// Returns a pointer to a member variable of class `MR::SearchPathSettings` named `maxReduceIters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SearchPathSettings_Get_maxReduceIters(const MR_SearchPathSettings *_this);

///< the maximum number of iterations to reduce approximate path length and convert it in geodesic path
/// Modifies a member variable of class `MR::SearchPathSettings` named `maxReduceIters`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SearchPathSettings_Set_maxReduceIters(MR_SearchPathSettings *_this, int32_t value);

///< the maximum number of iterations to reduce approximate path length and convert it in geodesic path
/// Returns a mutable pointer to a member variable of class `MR::SearchPathSettings` named `maxReduceIters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SearchPathSettings_GetMutable_maxReduceIters(MR_SearchPathSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SearchPathSettings_Destroy()` to free it when you're done using it.
MRC_API MR_SearchPathSettings *MR_SearchPathSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SearchPathSettings_DestroyArray()`.
/// Use `MR_SearchPathSettings_OffsetMutablePtr()` and `MR_SearchPathSettings_OffsetPtr()` to access the array elements.
MRC_API MR_SearchPathSettings *MR_SearchPathSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::SearchPathSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SearchPathSettings_Destroy()` to free it when you're done using it.
MRC_API MR_SearchPathSettings *MR_SearchPathSettings_ConstructFrom(MR_GeodesicPathApprox geodesicPathApprox, int32_t maxReduceIters);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SearchPathSettings *MR_SearchPathSettings_OffsetPtr(const MR_SearchPathSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SearchPathSettings *MR_SearchPathSettings_OffsetMutablePtr(MR_SearchPathSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SearchPathSettings`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SearchPathSettings_Destroy()` to free it when you're done using it.
MRC_API MR_SearchPathSettings *MR_SearchPathSettings_ConstructFromAnother(const MR_SearchPathSettings *_other);

/// Destroys a heap-allocated instance of `MR_SearchPathSettings`. Does nothing if the pointer is null.
MRC_API void MR_SearchPathSettings_Destroy(const MR_SearchPathSettings *_this);

/// Destroys a heap-allocated array of `MR_SearchPathSettings`. Does nothing if the pointer is null.
MRC_API void MR_SearchPathSettings_DestroyArray(const MR_SearchPathSettings *_this);

/// Generated from a method of class `MR::SearchPathSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SearchPathSettings *MR_SearchPathSettings_AssignFromAnother(MR_SearchPathSettings *_this, const MR_SearchPathSettings *_other);

/**
* \brief Makes continuous contour by mesh tri points, if first and last meshTriPoint is the same, makes closed contour
*
* Finds shortest paths between neighbor \p surfaceLine and build contour MR::cutMesh input
* \param searchSettings settings for search geo path 
* \param pivotIndices optional output indices of given surfaceLine in result OneMeshContour
*/
/// Generated from function `MR::convertMeshTriPointsToMeshContour`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `surfaceLine` can not be null. It is a single object.
/// Parameter `searchSettings` is a single object.
/// Parameter `searchSettings` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `pivotIndices` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_OneMeshContour_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_OneMeshContour_std_string *MR_convertMeshTriPointsToMeshContour(const MR_Mesh *mesh, const MR_std_vector_MR_MeshTriPoint *surfaceLine, const MR_SearchPathSettings *searchSettings, MR_std_vector_int32_t *pivotIndices);

/**
* \brief Makes closed continuous contour by mesh tri points, note that first and last meshTriPoint should not be same
* 
* Finds shortest paths between neighbor \p surfaceLine and build closed contour MR::cutMesh input
* \param pivotIndices optional output indices of given surfaceLine in result OneMeshContour
* \note better use convertMeshTriPointsToMeshContour(...) instead, note that it requires same front and back MeshTriPoints for closed contour
*/
/// Generated from function `MR::convertMeshTriPointsToClosedContour`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `surfaceLine` can not be null. It is a single object.
/// Parameter `searchSettings` is a single object.
/// Parameter `searchSettings` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `pivotIndices` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_OneMeshContour_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_OneMeshContour_std_string *MR_convertMeshTriPointsToClosedContour(const MR_Mesh *mesh, const MR_std_vector_MR_MeshTriPoint *surfaceLine, const MR_SearchPathSettings *searchSettings, MR_std_vector_int32_t *pivotIndices);

/**
* \brief Converts SurfacePath to OneMeshContours
*
* Creates MR::OneMeshContour object from given surface path with ends for MR::cutMesh input
* `start` and surfacePath.front() should be from same face
* surfacePath.back() and `end` should be from same face
* 
* note that whole path (including `start` and `end`) should not have self-intersections
* also following case is not supported (vertex -> edge (incident with vertex)):
* 
* vert path  edge point path     edge end
* o----------o-  --  --  --  --  O
*  \          \                /
*       \      \          /
*            \  \     /
*               \\/
*                 o path
*/
/// Generated from function `MR::convertSurfacePathWithEndsToMeshContour`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `start` can not be null. It is a single object.
/// Parameter `surfacePath` can not be null. It is a single object.
/// Parameter `end` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OneMeshContour_Destroy()` to free it when you're done using it.
MRC_API MR_OneMeshContour *MR_convertSurfacePathWithEndsToMeshContour(const MR_Mesh *mesh, const MR_MeshTriPoint *start, const MR_std_vector_MR_EdgePoint *surfacePath, const MR_MeshTriPoint *end);

/**
* \brief Converts SurfacePaths to OneMeshContours
* 
* Creates MR::OneMeshContours object from given surface paths for MR::cutMesh input
*/
/// Generated from function `MR::convertSurfacePathsToMeshContours`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `surfacePaths` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_OneMeshContour_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_OneMeshContour *MR_convertSurfacePathsToMeshContours(const MR_Mesh *mesh, const MR_std_vector_std_vector_MR_EdgePoint *surfacePaths);

#ifdef __cplusplus
} // extern "C"
#endif
