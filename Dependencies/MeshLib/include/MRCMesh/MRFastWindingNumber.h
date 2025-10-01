// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_DistanceToMeshOptions MR_DistanceToMeshOptions; // Defined in `#include <MRCMesh/MRDistanceToMeshOptions.h>`.
typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_Vector3i MR_Vector3i; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t; // Defined in `#include <MRCMisc/std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref__a9a4.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.
typedef struct MR_std_vector_float MR_std_vector_float; // Defined in `#include <MRCMisc/std_vector_float.h>`.


/// Abstract class for fast approximate computation of generalized winding number for a mesh (using its AABB tree)
/// Generated from class `MR::IFastWindingNumber`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::FastWindingNumber`
typedef struct MR_IFastWindingNumber MR_IFastWindingNumber;

/// the class for fast approximate computation of winding number for a mesh (using its AABB tree)

/// Note, this used to be `[[nodiscard]]`, but GCC 12 doesn't understand both `[[...]]` and `__attribute__(...)` on the same class.
/// A possible fix is to change `MRMESH_CLASS` globally to `[[__gnu__::__visibility__("default")]]`.
/// Generated from class `MR::FastWindingNumber`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::IFastWindingNumber`
typedef struct MR_FastWindingNumber MR_FastWindingNumber;

/// Abstract class that complements \ref IFastWindingNumber with chunked processing variants of its methods
/// Generated from class `MR::IFastWindingNumberByParts`.
typedef struct MR_IFastWindingNumberByParts MR_IFastWindingNumberByParts;

/// Destroys a heap-allocated instance of `MR_IFastWindingNumber`. Does nothing if the pointer is null.
MRC_API void MR_IFastWindingNumber_Destroy(const MR_IFastWindingNumber *_this);

/// Destroys a heap-allocated array of `MR_IFastWindingNumber`. Does nothing if the pointer is null.
MRC_API void MR_IFastWindingNumber_DestroyArray(const MR_IFastWindingNumber *_this);

/// <summary>
/// calculates winding numbers in the points from given vector
/// </summary>
/// <param name="res">resulting winding numbers, will be resized automatically</param>
/// <param name="points">incoming points</param>
/// <param name="beta">determines the precision of the approximation: the more the better, recommended value 2 or more</param>
/// <param name="skipFace">this triangle (if it is close to `q`) will be skipped from summation</param>
/// Generated from a method of class `MR::IFastWindingNumber` named `calcFromVector`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `res` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `skipFace` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_IFastWindingNumber_calcFromVector(MR_IFastWindingNumber *_this, MR_std_vector_float *res, const MR_std_vector_MR_Vector3f *points, float beta, const MR_FaceId *skipFace, const MR_std_function_bool_from_float *cb);

/// <summary>
/// calculates winding numbers for all centers of mesh's triangles. if winding number is less than 0 or greater then 1, that face is marked as self-intersected
/// </summary>
/// <param name="res">resulting bit set</param>
/// <param name="beta">determines the precision of the approximation: the more the better, recommended value 2 or more</param>
/// Generated from a method of class `MR::IFastWindingNumber` named `calcSelfIntersections`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `res` can not be null. It is a single object.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_IFastWindingNumber_calcSelfIntersections(MR_IFastWindingNumber *_this, MR_FaceBitSet *res, float beta, const MR_std_function_bool_from_float *cb);

/// <summary>
/// calculates winding numbers in each point from a three-dimensional grid
/// </summary>
/// <param name="res">resulting winding numbers, will be resized automatically</param>
/// <param name="dims">dimensions of the grid</param>
/// <param name="gridToMeshXf">transform from integer grid locations to voxel's centers in mesh reference frame</param>
/// <param name="beta">determines the precision of the approximation: the more the better, recommended value 2 or more</param>
/// Generated from a method of class `MR::IFastWindingNumber` named `calcFromGrid`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `res` can not be null. It is a single object.
/// Parameter `dims` can not be null. It is a single object.
/// Parameter `gridToMeshXf` can not be null. It is a single object.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_IFastWindingNumber_calcFromGrid(MR_IFastWindingNumber *_this, MR_std_vector_float *res, const MR_Vector3i *dims, const MR_AffineXf3f *gridToMeshXf, float beta, const MR_std_function_bool_from_float *cb);

/// <summary>
/// calculates distances with the sign obtained from generalized winding number in each point from a three-dimensional grid;
/// if sqr(res) < minDistSq or sqr(res) >= maxDistSq, then NaN is returned for such point
/// </summary>
/// <param name="res">resulting signed distances, will be resized automatically</param>
/// <param name="dims">dimensions of the grid</param>
/// Generated from a method of class `MR::IFastWindingNumber` named `calcFromGridWithDistances`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `res` can not be null. It is a single object.
/// Parameter `dims` can not be null. It is a single object.
/// Parameter `gridToMeshXf` can not be null. It is a single object.
/// Parameter `options` can not be null. It is a single object.
/// Parameter `cb` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_IFastWindingNumber_calcFromGridWithDistances(MR_IFastWindingNumber *_this, MR_std_vector_float *res, const MR_Vector3i *dims, const MR_AffineXf3f *gridToMeshXf, const MR_DistanceToMeshOptions *options, const MR_std_function_bool_from_float *cb);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IFastWindingNumber *MR_IFastWindingNumber_OffsetPtr(const MR_IFastWindingNumber *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IFastWindingNumber *MR_IFastWindingNumber_OffsetMutablePtr(MR_IFastWindingNumber *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::IFastWindingNumber` to a derived class `MR::FastWindingNumber`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_FastWindingNumber *MR_IFastWindingNumber_StaticDowncastTo_MR_FastWindingNumber(const MR_IFastWindingNumber *object);

/// Downcasts an instance of `MR::IFastWindingNumber` to a derived class `MR::FastWindingNumber`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_FastWindingNumber *MR_IFastWindingNumber_MutableStaticDowncastTo_MR_FastWindingNumber(MR_IFastWindingNumber *object);

/// Downcasts an instance of `MR::IFastWindingNumber` to a derived class `MR::FastWindingNumber`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_FastWindingNumber *MR_IFastWindingNumber_DynamicDowncastTo_MR_FastWindingNumber(const MR_IFastWindingNumber *object);

/// Downcasts an instance of `MR::IFastWindingNumber` to a derived class `MR::FastWindingNumber`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_FastWindingNumber *MR_IFastWindingNumber_MutableDynamicDowncastTo_MR_FastWindingNumber(MR_IFastWindingNumber *object);

/// Downcasts an instance of `MR::IFastWindingNumber` to a derived class `MR::FastWindingNumber`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FastWindingNumber *MR_IFastWindingNumber_DynamicDowncastToOrFail_MR_FastWindingNumber(const MR_IFastWindingNumber *object);

/// Downcasts an instance of `MR::IFastWindingNumber` to a derived class `MR::FastWindingNumber`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FastWindingNumber *MR_IFastWindingNumber_MutableDynamicDowncastToOrFail_MR_FastWindingNumber(MR_IFastWindingNumber *object);

/// Generated from a constructor of class `MR::FastWindingNumber`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FastWindingNumber_Destroy()` to free it when you're done using it.
MRC_API MR_FastWindingNumber *MR_FastWindingNumber_ConstructFromAnother(MR_PassBy _other_pass_by, MR_FastWindingNumber *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FastWindingNumber *MR_FastWindingNumber_OffsetPtr(const MR_FastWindingNumber *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FastWindingNumber *MR_FastWindingNumber_OffsetMutablePtr(MR_FastWindingNumber *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::FastWindingNumber` to its base class `MR::IFastWindingNumber`.
/// This version is acting on mutable pointers.
MRC_API const MR_IFastWindingNumber *MR_FastWindingNumber_UpcastTo_MR_IFastWindingNumber(const MR_FastWindingNumber *object);

/// Upcasts an instance of `MR::FastWindingNumber` to its base class `MR::IFastWindingNumber`.
MRC_API MR_IFastWindingNumber *MR_FastWindingNumber_MutableUpcastTo_MR_IFastWindingNumber(MR_FastWindingNumber *object);

/// constructs this from AABB tree of given mesh;
/// this remains valid only if tree is valid
/// Generated from a constructor of class `MR::FastWindingNumber`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FastWindingNumber_Destroy()` to free it when you're done using it.
MRC_API MR_FastWindingNumber *MR_FastWindingNumber_Construct(const MR_Mesh *mesh);

/// Destroys a heap-allocated instance of `MR_FastWindingNumber`. Does nothing if the pointer is null.
MRC_API void MR_FastWindingNumber_Destroy(const MR_FastWindingNumber *_this);

/// Destroys a heap-allocated array of `MR_FastWindingNumber`. Does nothing if the pointer is null.
MRC_API void MR_FastWindingNumber_DestroyArray(const MR_FastWindingNumber *_this);

// see methods' descriptions in IFastWindingNumber
/// Generated from a method of class `MR::FastWindingNumber` named `calcFromVector`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `res` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `cb` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_FastWindingNumber_calcFromVector(MR_FastWindingNumber *_this, MR_std_vector_float *res, const MR_std_vector_MR_Vector3f *points, float beta, MR_FaceId skipFace, const MR_std_function_bool_from_float *cb);

/// Generated from a method of class `MR::FastWindingNumber` named `calcSelfIntersections`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `res` can not be null. It is a single object.
/// Parameter `cb` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_FastWindingNumber_calcSelfIntersections(MR_FastWindingNumber *_this, MR_FaceBitSet *res, float beta, const MR_std_function_bool_from_float *cb);

/// Generated from a method of class `MR::FastWindingNumber` named `calcFromGrid`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `res` can not be null. It is a single object.
/// Parameter `dims` can not be null. It is a single object.
/// Parameter `gridToMeshXf` can not be null. It is a single object.
/// Parameter `cb` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_FastWindingNumber_calcFromGrid(MR_FastWindingNumber *_this, MR_std_vector_float *res, const MR_Vector3i *dims, const MR_AffineXf3f *gridToMeshXf, float beta, const MR_std_function_bool_from_float *cb);

/// Generated from a method of class `MR::FastWindingNumber` named `calcWithDistances`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
/// Parameter `options` can not be null. It is a single object.
MRC_API float MR_FastWindingNumber_calcWithDistances(MR_FastWindingNumber *_this, const MR_Vector3f *p, const MR_DistanceToMeshOptions *options);

/// Generated from a method of class `MR::FastWindingNumber` named `calcFromGridWithDistances`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `res` can not be null. It is a single object.
/// Parameter `dims` can not be null. It is a single object.
/// Parameter `gridToMeshXf` can not be null. It is a single object.
/// Parameter `options` can not be null. It is a single object.
/// Parameter `cb` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_FastWindingNumber_calcFromGridWithDistances(MR_FastWindingNumber *_this, MR_std_vector_float *res, const MR_Vector3i *dims, const MR_AffineXf3f *gridToMeshXf, const MR_DistanceToMeshOptions *options, const MR_std_function_bool_from_float *cb);

/// Destroys a heap-allocated instance of `MR_IFastWindingNumberByParts`. Does nothing if the pointer is null.
MRC_API void MR_IFastWindingNumberByParts_Destroy(const MR_IFastWindingNumberByParts *_this);

/// Destroys a heap-allocated array of `MR_IFastWindingNumberByParts`. Does nothing if the pointer is null.
MRC_API void MR_IFastWindingNumberByParts_DestroyArray(const MR_IFastWindingNumberByParts *_this);

/// <summary>
/// calculates winding numbers in each point from a three-dimensional grid
/// </summary>
/// <param name="resFunc">callback that gets a block of resulting winding numbers</param>
/// <param name="dims">dimensions of the grid</param>
/// <param name="gridToMeshXf">transform from integer grid locations to voxel's centers in mesh reference frame</param>
/// <param name="beta">determines the precision of the approximation: the more the better, recommended value 2 or more</param>
/// <param name="layerOverlap">overlap between two blocks of the grid, set as XY layer count</param>
/// Generated from a method of class `MR::IFastWindingNumberByParts` named `calcFromGridByParts`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `dims` can not be null. It is a single object.
/// Parameter `gridToMeshXf` can not be null. It is a single object.
/// Parameter `cb` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_IFastWindingNumberByParts_calcFromGridByParts(MR_IFastWindingNumberByParts *_this, MR_PassBy resFunc_pass_by, MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t *resFunc, const MR_Vector3i *dims, const MR_AffineXf3f *gridToMeshXf, float beta, int32_t layerOverlap, const MR_std_function_bool_from_float *cb);

/// <summary>
/// calculates distances with the sign obtained from generalized winding number in each point from a three-dimensional grid;
/// if sqr(res) < minDistSq or sqr(res) >= maxDistSq, then NaN is returned for such point
/// </summary>
/// <param name="resFunc">callback that gets a block of resulting winding numbers</param>
/// <param name="dims">dimensions of the grid</param>
/// <param name="gridToMeshXf">transform from integer grid locations to voxel's centers in mesh reference frame</param>
/// <param name="layerOverlap">overlap between two blocks of the grid, set as XY layer count</param>
/// Generated from a method of class `MR::IFastWindingNumberByParts` named `calcFromGridWithDistancesByParts`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `dims` can not be null. It is a single object.
/// Parameter `gridToMeshXf` can not be null. It is a single object.
/// Parameter `options` can not be null. It is a single object.
/// Parameter `cb` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_IFastWindingNumberByParts_calcFromGridWithDistancesByParts(MR_IFastWindingNumberByParts *_this, MR_PassBy resFunc_pass_by, MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t *resFunc, const MR_Vector3i *dims, const MR_AffineXf3f *gridToMeshXf, const MR_DistanceToMeshOptions *options, int32_t layerOverlap, const MR_std_function_bool_from_float *cb);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IFastWindingNumberByParts *MR_IFastWindingNumberByParts_OffsetPtr(const MR_IFastWindingNumberByParts *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IFastWindingNumberByParts *MR_IFastWindingNumberByParts_OffsetMutablePtr(MR_IFastWindingNumberByParts *ptr, ptrdiff_t i);

#ifdef __cplusplus
} // extern "C"
#endif
