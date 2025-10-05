// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRBooleanOperation.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_BooleanResultMapper MR_BooleanResultMapper; // Defined in `#include <MRCMesh/MRBooleanOperation.h>`.
typedef struct MR_CoordinateConverters MR_CoordinateConverters; // Defined in `#include <MRCMesh/MRPrecisePredicates3.h>`.
typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_expected_MR_BooleanResultPoints_std_string MR_expected_MR_BooleanResultPoints_std_string; // Defined in `#include <MRCMisc/expected_MR_BooleanResultPoints_std_string.h>`.
typedef struct MR_expected_MR_Mesh_std_string MR_expected_MR_Mesh_std_string; // Defined in `#include <MRCMisc/expected_MR_Mesh_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_MR_OneMeshContour MR_std_vector_MR_OneMeshContour; // Defined in `#include <MRCMisc/std_vector_MR_OneMeshContour.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.
typedef struct MR_std_vector_std_vector_MR_EdgeId MR_std_vector_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_EdgeId.h>`.
typedef struct MR_std_vector_std_vector_MR_Vector3f MR_std_vector_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_Vector3f.h>`.


/** \struct MR::BooleanResult
*
* \brief Structure contain boolean result
* 
* This structure store result mesh of MR::boolean or some error info
*/
/// Generated from class `MR::BooleanResult`.
typedef struct MR_BooleanResult MR_BooleanResult;

/// Generated from class `MR::BooleanPreCutResult`.
typedef struct MR_BooleanPreCutResult MR_BooleanPreCutResult;

/** \struct MR::BooleanResult
*
* \brief Structure with parameters for boolean call
*/
/// Generated from class `MR::BooleanParameters`.
typedef struct MR_BooleanParameters MR_BooleanParameters;

/// vertices and points representing mesh intersection result
/// Generated from class `MR::BooleanResultPoints`.
typedef struct MR_BooleanResultPoints MR_BooleanResultPoints;

/// Result mesh of boolean operation, if error occurred it would be empty
/// Returns a pointer to a member variable of class `MR::BooleanResult` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Mesh *MR_BooleanResult_Get_mesh(const MR_BooleanResult *_this);

/// Result mesh of boolean operation, if error occurred it would be empty
/// Modifies a member variable of class `MR::BooleanResult` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BooleanResult_Set_mesh(MR_BooleanResult *_this, MR_PassBy value_pass_by, MR_Mesh *value);

/// Result mesh of boolean operation, if error occurred it would be empty
/// Returns a mutable pointer to a member variable of class `MR::BooleanResult` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Mesh *MR_BooleanResult_GetMutable_mesh(MR_BooleanResult *_this);

/// If input contours have intersections, this face bit set presents faces of mesh `A` on which contours intersect
/// Returns a pointer to a member variable of class `MR::BooleanResult` named `meshABadContourFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet *MR_BooleanResult_Get_meshABadContourFaces(const MR_BooleanResult *_this);

/// If input contours have intersections, this face bit set presents faces of mesh `A` on which contours intersect
/// Modifies a member variable of class `MR::BooleanResult` named `meshABadContourFaces`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BooleanResult_Set_meshABadContourFaces(MR_BooleanResult *_this, MR_PassBy value_pass_by, MR_FaceBitSet *value);

/// If input contours have intersections, this face bit set presents faces of mesh `A` on which contours intersect
/// Returns a mutable pointer to a member variable of class `MR::BooleanResult` named `meshABadContourFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *MR_BooleanResult_GetMutable_meshABadContourFaces(MR_BooleanResult *_this);

/// If input contours have intersections, this face bit set presents faces of mesh `B` on which contours intersect
/// Returns a pointer to a member variable of class `MR::BooleanResult` named `meshBBadContourFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet *MR_BooleanResult_Get_meshBBadContourFaces(const MR_BooleanResult *_this);

/// If input contours have intersections, this face bit set presents faces of mesh `B` on which contours intersect
/// Modifies a member variable of class `MR::BooleanResult` named `meshBBadContourFaces`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BooleanResult_Set_meshBBadContourFaces(MR_BooleanResult *_this, MR_PassBy value_pass_by, MR_FaceBitSet *value);

/// If input contours have intersections, this face bit set presents faces of mesh `B` on which contours intersect
/// Returns a mutable pointer to a member variable of class `MR::BooleanResult` named `meshBBadContourFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *MR_BooleanResult_GetMutable_meshBBadContourFaces(MR_BooleanResult *_this);

/// Holds error message, empty if boolean succeed
/// Returns a pointer to a member variable of class `MR::BooleanResult` named `errorString`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_BooleanResult_Get_errorString(const MR_BooleanResult *_this);

/// Holds error message, empty if boolean succeed
/// Modifies a member variable of class `MR::BooleanResult` named `errorString`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_BooleanResult_Set_errorString(MR_BooleanResult *_this, const char *value, const char *value_end);

/// Holds error message, empty if boolean succeed
/// Returns a mutable pointer to a member variable of class `MR::BooleanResult` named `errorString`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_BooleanResult_GetMutable_errorString(MR_BooleanResult *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BooleanResult_Destroy()` to free it when you're done using it.
MRC_API MR_BooleanResult *MR_BooleanResult_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BooleanResult_DestroyArray()`.
/// Use `MR_BooleanResult_OffsetMutablePtr()` and `MR_BooleanResult_OffsetPtr()` to access the array elements.
MRC_API MR_BooleanResult *MR_BooleanResult_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::BooleanResult` elementwise.
/// Parameter `errorString` can not be null.
/// If `errorString_end` is null, then `errorString` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BooleanResult_Destroy()` to free it when you're done using it.
MRC_API MR_BooleanResult *MR_BooleanResult_ConstructFrom(MR_PassBy mesh_pass_by, MR_Mesh *mesh, MR_PassBy meshABadContourFaces_pass_by, MR_FaceBitSet *meshABadContourFaces, MR_PassBy meshBBadContourFaces_pass_by, MR_FaceBitSet *meshBBadContourFaces, const char *errorString, const char *errorString_end);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BooleanResult *MR_BooleanResult_OffsetPtr(const MR_BooleanResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BooleanResult *MR_BooleanResult_OffsetMutablePtr(MR_BooleanResult *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::BooleanResult`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BooleanResult_Destroy()` to free it when you're done using it.
MRC_API MR_BooleanResult *MR_BooleanResult_ConstructFromAnother(MR_PassBy _other_pass_by, MR_BooleanResult *_other);

/// Destroys a heap-allocated instance of `MR_BooleanResult`. Does nothing if the pointer is null.
MRC_API void MR_BooleanResult_Destroy(const MR_BooleanResult *_this);

/// Destroys a heap-allocated array of `MR_BooleanResult`. Does nothing if the pointer is null.
MRC_API void MR_BooleanResult_DestroyArray(const MR_BooleanResult *_this);

/// Generated from a conversion operator of class `MR::BooleanResult` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_BooleanResult_ConvertTo_bool(const MR_BooleanResult *_this);

/// Generated from a method of class `MR::BooleanResult` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BooleanResult *MR_BooleanResult_AssignFromAnother(MR_BooleanResult *_this, MR_PassBy _other_pass_by, MR_BooleanResult *_other);

/// Returns true if boolean succeed, false otherwise
/// Generated from a method of class `MR::BooleanResult` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_BooleanResult_valid(const MR_BooleanResult *_this);

/// Generated from a method of class `MR::BooleanResult` named `operator*`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Mesh *MR_deref_MR_BooleanResult_ref(MR_BooleanResult *_this);

/// Generated from a method of class `MR::BooleanResult` named `operator*`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Mesh *MR_deref_const_MR_BooleanResult_ref(const MR_BooleanResult *_this);

/// Generated from a method of class `MR::BooleanResult` named `operator->`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Mesh *MR_BooleanResult_arrow(MR_BooleanResult *_this);

/// Generated from a method of class `MR::BooleanResult` named `operator->`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_Mesh *MR_BooleanResult_arrow_const(const MR_BooleanResult *_this);

/** \brief Performs CSG operation on two meshes
* 
*
* Makes new mesh - result of boolean operation on mesh `A` and mesh `B`
* \snippet cpp-examples/MeshBoolean.dox.cpp 0
*
* \param meshA Input mesh `A`
* \param meshB Input mesh `B`
* \param operation CSG operation to perform
* \param rigidB2A Transform from mesh `B` space to mesh `A` space
* \param mapper Optional output structure to map mesh `A` and mesh `B` topology to result mesh topology
* 
* \note Input meshes should have no self-intersections in intersecting zone
* \note If meshes are not closed in intersecting zone some boolean operations are not allowed (as far as input meshes interior and exterior cannot be determined)
*/
/// Generated from function `MR::boolean`.
/// Parameter `meshA` can not be null. It is a single object.
/// Parameter `meshB` can not be null. It is a single object.
/// Parameter `mapper` defaults to a null pointer in C++.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BooleanResult_Destroy()` to free it when you're done using it.
MRC_API MR_BooleanResult *MR_boolean_6_const_MR_Mesh_ref(const MR_Mesh *meshA, const MR_Mesh *meshB, MR_BooleanOperation operation, const MR_AffineXf3f *rigidB2A, MR_BooleanResultMapper *mapper, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Generated from function `MR::boolean`.
/// Parameter `meshA` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `meshB` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `mapper` defaults to a null pointer in C++.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BooleanResult_Destroy()` to free it when you're done using it.
MRC_API MR_BooleanResult *MR_boolean_6_MR_Mesh_rvalue_ref(MR_Mesh *meshA, MR_Mesh *meshB, MR_BooleanOperation operation, const MR_AffineXf3f *rigidB2A, MR_BooleanResultMapper *mapper, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Returns a pointer to a member variable of class `MR::BooleanPreCutResult` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Mesh *MR_BooleanPreCutResult_Get_mesh(const MR_BooleanPreCutResult *_this);

/// Modifies a member variable of class `MR::BooleanPreCutResult` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BooleanPreCutResult_Set_mesh(MR_BooleanPreCutResult *_this, MR_PassBy value_pass_by, MR_Mesh *value);

/// Returns a mutable pointer to a member variable of class `MR::BooleanPreCutResult` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Mesh *MR_BooleanPreCutResult_GetMutable_mesh(MR_BooleanPreCutResult *_this);

/// Returns a pointer to a member variable of class `MR::BooleanPreCutResult` named `contours`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_OneMeshContour *MR_BooleanPreCutResult_Get_contours(const MR_BooleanPreCutResult *_this);

/// Modifies a member variable of class `MR::BooleanPreCutResult` named `contours`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BooleanPreCutResult_Set_contours(MR_BooleanPreCutResult *_this, MR_PassBy value_pass_by, MR_std_vector_MR_OneMeshContour *value);

/// Returns a mutable pointer to a member variable of class `MR::BooleanPreCutResult` named `contours`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_OneMeshContour *MR_BooleanPreCutResult_GetMutable_contours(MR_BooleanPreCutResult *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BooleanPreCutResult_Destroy()` to free it when you're done using it.
MRC_API MR_BooleanPreCutResult *MR_BooleanPreCutResult_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BooleanPreCutResult_DestroyArray()`.
/// Use `MR_BooleanPreCutResult_OffsetMutablePtr()` and `MR_BooleanPreCutResult_OffsetPtr()` to access the array elements.
MRC_API MR_BooleanPreCutResult *MR_BooleanPreCutResult_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::BooleanPreCutResult` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BooleanPreCutResult_Destroy()` to free it when you're done using it.
MRC_API MR_BooleanPreCutResult *MR_BooleanPreCutResult_ConstructFrom(MR_PassBy mesh_pass_by, MR_Mesh *mesh, MR_PassBy contours_pass_by, MR_std_vector_MR_OneMeshContour *contours);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BooleanPreCutResult *MR_BooleanPreCutResult_OffsetPtr(const MR_BooleanPreCutResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BooleanPreCutResult *MR_BooleanPreCutResult_OffsetMutablePtr(MR_BooleanPreCutResult *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::BooleanPreCutResult`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BooleanPreCutResult_Destroy()` to free it when you're done using it.
MRC_API MR_BooleanPreCutResult *MR_BooleanPreCutResult_ConstructFromAnother(MR_PassBy _other_pass_by, MR_BooleanPreCutResult *_other);

/// Destroys a heap-allocated instance of `MR_BooleanPreCutResult`. Does nothing if the pointer is null.
MRC_API void MR_BooleanPreCutResult_Destroy(const MR_BooleanPreCutResult *_this);

/// Destroys a heap-allocated array of `MR_BooleanPreCutResult`. Does nothing if the pointer is null.
MRC_API void MR_BooleanPreCutResult_DestroyArray(const MR_BooleanPreCutResult *_this);

/// Generated from a method of class `MR::BooleanPreCutResult` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BooleanPreCutResult *MR_BooleanPreCutResult_AssignFromAnother(MR_BooleanPreCutResult *_this, MR_PassBy _other_pass_by, MR_BooleanPreCutResult *_other);

/// Transform from mesh `B` space to mesh `A` space
/// Returns a pointer to a member variable of class `MR::BooleanParameters` named `rigidB2A`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *const *MR_BooleanParameters_Get_rigidB2A(const MR_BooleanParameters *_this);

/// Transform from mesh `B` space to mesh `A` space
/// Modifies a member variable of class `MR::BooleanParameters` named `rigidB2A`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BooleanParameters_Set_rigidB2A(MR_BooleanParameters *_this, const MR_AffineXf3f *value);

/// Transform from mesh `B` space to mesh `A` space
/// Returns a mutable pointer to a member variable of class `MR::BooleanParameters` named `rigidB2A`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f **MR_BooleanParameters_GetMutable_rigidB2A(MR_BooleanParameters *_this);

/// Optional output structure to map mesh `A` and mesh `B` topology to result mesh topology
/// Returns a pointer to a member variable of class `MR::BooleanParameters` named `mapper`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BooleanResultMapper *const *MR_BooleanParameters_Get_mapper(const MR_BooleanParameters *_this);

/// Optional output structure to map mesh `A` and mesh `B` topology to result mesh topology
/// Modifies a member variable of class `MR::BooleanParameters` named `mapper`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BooleanParameters_Set_mapper(MR_BooleanParameters *_this, MR_BooleanResultMapper *value);

/// Optional output structure to map mesh `A` and mesh `B` topology to result mesh topology
/// Returns a mutable pointer to a member variable of class `MR::BooleanParameters` named `mapper`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BooleanResultMapper **MR_BooleanParameters_GetMutable_mapper(MR_BooleanParameters *_this);

/// Optional precut output of meshA, if present - does not perform boolean and just return them
/// Returns a pointer to a member variable of class `MR::BooleanParameters` named `outPreCutA`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BooleanPreCutResult *const *MR_BooleanParameters_Get_outPreCutA(const MR_BooleanParameters *_this);

/// Optional precut output of meshA, if present - does not perform boolean and just return them
/// Modifies a member variable of class `MR::BooleanParameters` named `outPreCutA`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BooleanParameters_Set_outPreCutA(MR_BooleanParameters *_this, MR_BooleanPreCutResult *value);

/// Optional precut output of meshA, if present - does not perform boolean and just return them
/// Returns a mutable pointer to a member variable of class `MR::BooleanParameters` named `outPreCutA`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BooleanPreCutResult **MR_BooleanParameters_GetMutable_outPreCutA(MR_BooleanParameters *_this);

/// Optional precut output of meshB, if present - does not perform boolean and just return them
/// Returns a pointer to a member variable of class `MR::BooleanParameters` named `outPreCutB`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BooleanPreCutResult *const *MR_BooleanParameters_Get_outPreCutB(const MR_BooleanParameters *_this);

/// Optional precut output of meshB, if present - does not perform boolean and just return them
/// Modifies a member variable of class `MR::BooleanParameters` named `outPreCutB`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BooleanParameters_Set_outPreCutB(MR_BooleanParameters *_this, MR_BooleanPreCutResult *value);

/// Optional precut output of meshB, if present - does not perform boolean and just return them
/// Returns a mutable pointer to a member variable of class `MR::BooleanParameters` named `outPreCutB`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BooleanPreCutResult **MR_BooleanParameters_GetMutable_outPreCutB(MR_BooleanParameters *_this);

/// Optional output cut edges of booleaned meshes 
/// Returns a pointer to a member variable of class `MR::BooleanParameters` named `outCutEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_std_vector_MR_EdgeId *const *MR_BooleanParameters_Get_outCutEdges(const MR_BooleanParameters *_this);

/// Optional output cut edges of booleaned meshes 
/// Modifies a member variable of class `MR::BooleanParameters` named `outCutEdges`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BooleanParameters_Set_outCutEdges(MR_BooleanParameters *_this, MR_std_vector_std_vector_MR_EdgeId *value);

/// Optional output cut edges of booleaned meshes 
/// Returns a mutable pointer to a member variable of class `MR::BooleanParameters` named `outCutEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_std_vector_MR_EdgeId **MR_BooleanParameters_GetMutable_outCutEdges(MR_BooleanParameters *_this);

/// By default produce valid operation on disconnected components
/// if set merge all non-intersecting components
/// Returns a pointer to a member variable of class `MR::BooleanParameters` named `mergeAllNonIntersectingComponents`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_BooleanParameters_Get_mergeAllNonIntersectingComponents(const MR_BooleanParameters *_this);

/// By default produce valid operation on disconnected components
/// if set merge all non-intersecting components
/// Modifies a member variable of class `MR::BooleanParameters` named `mergeAllNonIntersectingComponents`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BooleanParameters_Set_mergeAllNonIntersectingComponents(MR_BooleanParameters *_this, bool value);

/// By default produce valid operation on disconnected components
/// if set merge all non-intersecting components
/// Returns a mutable pointer to a member variable of class `MR::BooleanParameters` named `mergeAllNonIntersectingComponents`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_BooleanParameters_GetMutable_mergeAllNonIntersectingComponents(MR_BooleanParameters *_this);

/// If this option is enabled boolean will try to cut meshes even if there are self-intersections in intersecting area
/// it might work in some cases, but in general it might prevent fast error report and lead to other errors along the way
/// \warning not recommended in most cases
/// Returns a pointer to a member variable of class `MR::BooleanParameters` named `forceCut`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_BooleanParameters_Get_forceCut(const MR_BooleanParameters *_this);

/// If this option is enabled boolean will try to cut meshes even if there are self-intersections in intersecting area
/// it might work in some cases, but in general it might prevent fast error report and lead to other errors along the way
/// \warning not recommended in most cases
/// Modifies a member variable of class `MR::BooleanParameters` named `forceCut`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BooleanParameters_Set_forceCut(MR_BooleanParameters *_this, bool value);

/// If this option is enabled boolean will try to cut meshes even if there are self-intersections in intersecting area
/// it might work in some cases, but in general it might prevent fast error report and lead to other errors along the way
/// \warning not recommended in most cases
/// Returns a mutable pointer to a member variable of class `MR::BooleanParameters` named `forceCut`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_BooleanParameters_GetMutable_forceCut(MR_BooleanParameters *_this);

/// Returns a pointer to a member variable of class `MR::BooleanParameters` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_BooleanParameters_Get_cb(const MR_BooleanParameters *_this);

/// Modifies a member variable of class `MR::BooleanParameters` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BooleanParameters_Set_cb(MR_BooleanParameters *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// Returns a mutable pointer to a member variable of class `MR::BooleanParameters` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_BooleanParameters_GetMutable_cb(MR_BooleanParameters *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BooleanParameters_Destroy()` to free it when you're done using it.
MRC_API MR_BooleanParameters *MR_BooleanParameters_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BooleanParameters_DestroyArray()`.
/// Use `MR_BooleanParameters_OffsetMutablePtr()` and `MR_BooleanParameters_OffsetPtr()` to access the array elements.
MRC_API MR_BooleanParameters *MR_BooleanParameters_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::BooleanParameters` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BooleanParameters_Destroy()` to free it when you're done using it.
MRC_API MR_BooleanParameters *MR_BooleanParameters_ConstructFrom(const MR_AffineXf3f *rigidB2A, MR_BooleanResultMapper *mapper, MR_BooleanPreCutResult *outPreCutA, MR_BooleanPreCutResult *outPreCutB, MR_std_vector_std_vector_MR_EdgeId *outCutEdges, bool mergeAllNonIntersectingComponents, bool forceCut, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BooleanParameters *MR_BooleanParameters_OffsetPtr(const MR_BooleanParameters *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BooleanParameters *MR_BooleanParameters_OffsetMutablePtr(MR_BooleanParameters *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::BooleanParameters`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BooleanParameters_Destroy()` to free it when you're done using it.
MRC_API MR_BooleanParameters *MR_BooleanParameters_ConstructFromAnother(MR_PassBy _other_pass_by, MR_BooleanParameters *_other);

/// Destroys a heap-allocated instance of `MR_BooleanParameters`. Does nothing if the pointer is null.
MRC_API void MR_BooleanParameters_Destroy(const MR_BooleanParameters *_this);

/// Destroys a heap-allocated array of `MR_BooleanParameters`. Does nothing if the pointer is null.
MRC_API void MR_BooleanParameters_DestroyArray(const MR_BooleanParameters *_this);

/// Generated from a method of class `MR::BooleanParameters` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BooleanParameters *MR_BooleanParameters_AssignFromAnother(MR_BooleanParameters *_this, MR_PassBy _other_pass_by, MR_BooleanParameters *_other);

/// Generated from function `MR::boolean`.
/// Parameter `meshA` can not be null. It is a single object.
/// Parameter `meshB` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BooleanResult_Destroy()` to free it when you're done using it.
MRC_API MR_BooleanResult *MR_boolean_4_const_MR_Mesh_ref(const MR_Mesh *meshA, const MR_Mesh *meshB, MR_BooleanOperation operation, const MR_BooleanParameters *params);

/// Generated from function `MR::boolean`.
/// Parameter `meshA` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `meshB` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BooleanResult_Destroy()` to free it when you're done using it.
MRC_API MR_BooleanResult *MR_boolean_4_MR_Mesh_rvalue_ref(MR_Mesh *meshA, MR_Mesh *meshB, MR_BooleanOperation operation, const MR_BooleanParameters *params);

/// performs boolean operation on mesh with itself, cutting simple intersections contours and flipping their connectivity
/// this function is experimental and likely to change signature and/or behavior in future 
/// Generated from function `MR::selfBoolean`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_selfBoolean(const MR_Mesh *mesh);

/// returns intersection contours of given meshes
/// Generated from function `MR::findIntersectionContours`.
/// Parameter `meshA` can not be null. It is a single object.
/// Parameter `meshB` can not be null. It is a single object.
/// Parameter `rigidB2A` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector3f *MR_findIntersectionContours(const MR_Mesh *meshA, const MR_Mesh *meshB, const MR_AffineXf3f *rigidB2A);

/// Returns a pointer to a member variable of class `MR::BooleanResultPoints` named `meshAVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *MR_BooleanResultPoints_Get_meshAVerts(const MR_BooleanResultPoints *_this);

/// Modifies a member variable of class `MR::BooleanResultPoints` named `meshAVerts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BooleanResultPoints_Set_meshAVerts(MR_BooleanResultPoints *_this, MR_PassBy value_pass_by, MR_VertBitSet *value);

/// Returns a mutable pointer to a member variable of class `MR::BooleanResultPoints` named `meshAVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *MR_BooleanResultPoints_GetMutable_meshAVerts(MR_BooleanResultPoints *_this);

/// Returns a pointer to a member variable of class `MR::BooleanResultPoints` named `meshBVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *MR_BooleanResultPoints_Get_meshBVerts(const MR_BooleanResultPoints *_this);

/// Modifies a member variable of class `MR::BooleanResultPoints` named `meshBVerts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BooleanResultPoints_Set_meshBVerts(MR_BooleanResultPoints *_this, MR_PassBy value_pass_by, MR_VertBitSet *value);

/// Returns a mutable pointer to a member variable of class `MR::BooleanResultPoints` named `meshBVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *MR_BooleanResultPoints_GetMutable_meshBVerts(MR_BooleanResultPoints *_this);

/// Returns a pointer to a member variable of class `MR::BooleanResultPoints` named `intersectionPoints`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_Vector3f *MR_BooleanResultPoints_Get_intersectionPoints(const MR_BooleanResultPoints *_this);

/// Modifies a member variable of class `MR::BooleanResultPoints` named `intersectionPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BooleanResultPoints_Set_intersectionPoints(MR_BooleanResultPoints *_this, MR_PassBy value_pass_by, MR_std_vector_MR_Vector3f *value);

/// Returns a mutable pointer to a member variable of class `MR::BooleanResultPoints` named `intersectionPoints`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_Vector3f *MR_BooleanResultPoints_GetMutable_intersectionPoints(MR_BooleanResultPoints *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BooleanResultPoints_Destroy()` to free it when you're done using it.
MRC_API MR_BooleanResultPoints *MR_BooleanResultPoints_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BooleanResultPoints_DestroyArray()`.
/// Use `MR_BooleanResultPoints_OffsetMutablePtr()` and `MR_BooleanResultPoints_OffsetPtr()` to access the array elements.
MRC_API MR_BooleanResultPoints *MR_BooleanResultPoints_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::BooleanResultPoints` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BooleanResultPoints_Destroy()` to free it when you're done using it.
MRC_API MR_BooleanResultPoints *MR_BooleanResultPoints_ConstructFrom(MR_PassBy meshAVerts_pass_by, MR_VertBitSet *meshAVerts, MR_PassBy meshBVerts_pass_by, MR_VertBitSet *meshBVerts, MR_PassBy intersectionPoints_pass_by, MR_std_vector_MR_Vector3f *intersectionPoints);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BooleanResultPoints *MR_BooleanResultPoints_OffsetPtr(const MR_BooleanResultPoints *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BooleanResultPoints *MR_BooleanResultPoints_OffsetMutablePtr(MR_BooleanResultPoints *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::BooleanResultPoints`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BooleanResultPoints_Destroy()` to free it when you're done using it.
MRC_API MR_BooleanResultPoints *MR_BooleanResultPoints_ConstructFromAnother(MR_PassBy _other_pass_by, MR_BooleanResultPoints *_other);

/// Destroys a heap-allocated instance of `MR_BooleanResultPoints`. Does nothing if the pointer is null.
MRC_API void MR_BooleanResultPoints_Destroy(const MR_BooleanResultPoints *_this);

/// Destroys a heap-allocated array of `MR_BooleanResultPoints`. Does nothing if the pointer is null.
MRC_API void MR_BooleanResultPoints_DestroyArray(const MR_BooleanResultPoints *_this);

/// Generated from a method of class `MR::BooleanResultPoints` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BooleanResultPoints *MR_BooleanResultPoints_AssignFromAnother(MR_BooleanResultPoints *_this, MR_PassBy _other_pass_by, MR_BooleanResultPoints *_other);

/** \brief Returns the points of mesh boolean's result mesh
*
*
* Returns vertices and intersection points of mesh that is result of boolean operation of mesh `A` and mesh `B`.
* Can be used as fast alternative for cases where the mesh topology can be ignored (bounding box, convex hull, etc.)
* \param meshA Input mesh `A`
* \param meshB Input mesh `B`
* \param operation Boolean operation to perform
* \param rigidB2A Transform from mesh `B` space to mesh `A` space
*/
/// Generated from function `MR::getBooleanPoints`.
/// Parameter `meshA` can not be null. It is a single object.
/// Parameter `meshB` can not be null. It is a single object.
/// Parameter `rigidB2A` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_BooleanResultPoints_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_BooleanResultPoints_std_string *MR_getBooleanPoints(const MR_Mesh *meshA, const MR_Mesh *meshB, MR_BooleanOperation operation, const MR_AffineXf3f *rigidB2A);

/// converts all vertices of the mesh first in integer-coordinates, and then back in float-coordinates;
/// this is necessary to avoid small self-intersections near newly introduced vertices on cut-contours;
/// this actually sligntly moves only small perentage of vertices near x=0 or y=0 or z=0 planes, where float-precision is higher than int-precision;
/// newly introduced vertices on cut-contours are also converted, but we expected that they remain unchanged due to idempotent property of the conversion
/// Generated from function `MR::convertIntFloatAllVerts`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `conv` can not be null. It is a single object.
MRC_API void MR_convertIntFloatAllVerts(MR_Mesh *mesh, const MR_CoordinateConverters *conv);

#ifdef __cplusplus
} // extern "C"
#endif
