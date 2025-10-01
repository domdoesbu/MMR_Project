// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertScalars MR_VertScalars; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_vector_MR_MeshProjectionResult MR_std_vector_MR_MeshProjectionResult; // Defined in `#include <MRCMisc/std_vector_MR_MeshProjectionResult.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.


/// Abstract class, computes the closest point on mesh to each of given points. Pure virtual functions must be implemented
/// Generated from class `MR::IPointsToMeshProjector`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::PointsToMeshProjector`
typedef struct MR_IPointsToMeshProjector MR_IPointsToMeshProjector;

/// Generated from class `MR::MeshProjectionParameters`.
typedef struct MR_MeshProjectionParameters MR_MeshProjectionParameters;

/// Computes the closest point on mesh to each of given points on CPU
/// Generated from class `MR::PointsToMeshProjector`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::IPointsToMeshProjector`
typedef struct MR_PointsToMeshProjector MR_PointsToMeshProjector;

/// Destroys a heap-allocated instance of `MR_IPointsToMeshProjector`. Does nothing if the pointer is null.
MRC_API void MR_IPointsToMeshProjector_Destroy(const MR_IPointsToMeshProjector *_this);

/// Destroys a heap-allocated array of `MR_IPointsToMeshProjector`. Does nothing if the pointer is null.
MRC_API void MR_IPointsToMeshProjector_DestroyArray(const MR_IPointsToMeshProjector *_this);

/// Updates all data related to the referencing mesh
/// Generated from a method of class `MR::IPointsToMeshProjector` named `updateMeshData`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IPointsToMeshProjector_updateMeshData(MR_IPointsToMeshProjector *_this, const MR_Mesh *mesh);

/// Computes the closest point on mesh to each of given points
/// Generated from a method of class `MR::IPointsToMeshProjector` named `findProjections`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `result` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `worldXf` defaults to a null pointer in C++.
/// Parameter `worldRefXf` defaults to a null pointer in C++.
/// Parameter `upDistLimitSq` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `loDistLimitSq` has a default argument: `0.F`, pass a null pointer to use it.
MRC_API void MR_IPointsToMeshProjector_findProjections(MR_IPointsToMeshProjector *_this, MR_std_vector_MR_MeshProjectionResult *result, const MR_std_vector_MR_Vector3f *points, const MR_AffineXf3f *worldXf, const MR_AffineXf3f *worldRefXf, const float *upDistLimitSq, const float *loDistLimitSq);

/// Returns amount of memory needed to compute projections
/// Generated from a method of class `MR::IPointsToMeshProjector` named `projectionsHeapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_IPointsToMeshProjector_projectionsHeapBytes(const MR_IPointsToMeshProjector *_this, MR_uint64_t numProjections);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IPointsToMeshProjector *MR_IPointsToMeshProjector_OffsetPtr(const MR_IPointsToMeshProjector *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IPointsToMeshProjector *MR_IPointsToMeshProjector_OffsetMutablePtr(MR_IPointsToMeshProjector *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::IPointsToMeshProjector` to a derived class `MR::PointsToMeshProjector`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_PointsToMeshProjector *MR_IPointsToMeshProjector_StaticDowncastTo_MR_PointsToMeshProjector(const MR_IPointsToMeshProjector *object);

/// Downcasts an instance of `MR::IPointsToMeshProjector` to a derived class `MR::PointsToMeshProjector`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_PointsToMeshProjector *MR_IPointsToMeshProjector_MutableStaticDowncastTo_MR_PointsToMeshProjector(MR_IPointsToMeshProjector *object);

/// Downcasts an instance of `MR::IPointsToMeshProjector` to a derived class `MR::PointsToMeshProjector`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_PointsToMeshProjector *MR_IPointsToMeshProjector_DynamicDowncastTo_MR_PointsToMeshProjector(const MR_IPointsToMeshProjector *object);

/// Downcasts an instance of `MR::IPointsToMeshProjector` to a derived class `MR::PointsToMeshProjector`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_PointsToMeshProjector *MR_IPointsToMeshProjector_MutableDynamicDowncastTo_MR_PointsToMeshProjector(MR_IPointsToMeshProjector *object);

/// Downcasts an instance of `MR::IPointsToMeshProjector` to a derived class `MR::PointsToMeshProjector`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PointsToMeshProjector *MR_IPointsToMeshProjector_DynamicDowncastToOrFail_MR_PointsToMeshProjector(const MR_IPointsToMeshProjector *object);

/// Downcasts an instance of `MR::IPointsToMeshProjector` to a derived class `MR::PointsToMeshProjector`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointsToMeshProjector *MR_IPointsToMeshProjector_MutableDynamicDowncastToOrFail_MR_PointsToMeshProjector(MR_IPointsToMeshProjector *object);

/// minimum squared distance from a test point to mesh to be computed precisely,
/// if a mesh point is found within this distance then it is immediately returned without searching for a closer one
/// Returns a pointer to a member variable of class `MR::MeshProjectionParameters` named `loDistLimitSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MeshProjectionParameters_Get_loDistLimitSq(const MR_MeshProjectionParameters *_this);

/// minimum squared distance from a test point to mesh to be computed precisely,
/// if a mesh point is found within this distance then it is immediately returned without searching for a closer one
/// Modifies a member variable of class `MR::MeshProjectionParameters` named `loDistLimitSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshProjectionParameters_Set_loDistLimitSq(MR_MeshProjectionParameters *_this, float value);

/// minimum squared distance from a test point to mesh to be computed precisely,
/// if a mesh point is found within this distance then it is immediately returned without searching for a closer one
/// Returns a mutable pointer to a member variable of class `MR::MeshProjectionParameters` named `loDistLimitSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MeshProjectionParameters_GetMutable_loDistLimitSq(MR_MeshProjectionParameters *_this);

/// maximum squared distance from a test point to mesh to be computed precisely,
/// if actual distance is larger than upDistLimit will be returned with not-trusted sign
/// Returns a pointer to a member variable of class `MR::MeshProjectionParameters` named `upDistLimitSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MeshProjectionParameters_Get_upDistLimitSq(const MR_MeshProjectionParameters *_this);

/// maximum squared distance from a test point to mesh to be computed precisely,
/// if actual distance is larger than upDistLimit will be returned with not-trusted sign
/// Modifies a member variable of class `MR::MeshProjectionParameters` named `upDistLimitSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshProjectionParameters_Set_upDistLimitSq(MR_MeshProjectionParameters *_this, float value);

/// maximum squared distance from a test point to mesh to be computed precisely,
/// if actual distance is larger than upDistLimit will be returned with not-trusted sign
/// Returns a mutable pointer to a member variable of class `MR::MeshProjectionParameters` named `upDistLimitSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MeshProjectionParameters_GetMutable_upDistLimitSq(MR_MeshProjectionParameters *_this);

/// optional reference mesh to world transformation
/// Returns a pointer to a member variable of class `MR::MeshProjectionParameters` named `refXf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *const *MR_MeshProjectionParameters_Get_refXf(const MR_MeshProjectionParameters *_this);

/// optional reference mesh to world transformation
/// Modifies a member variable of class `MR::MeshProjectionParameters` named `refXf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshProjectionParameters_Set_refXf(MR_MeshProjectionParameters *_this, const MR_AffineXf3f *value);

/// optional reference mesh to world transformation
/// Returns a mutable pointer to a member variable of class `MR::MeshProjectionParameters` named `refXf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f **MR_MeshProjectionParameters_GetMutable_refXf(MR_MeshProjectionParameters *_this);

/// optional test points to world transformation
/// Returns a pointer to a member variable of class `MR::MeshProjectionParameters` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *const *MR_MeshProjectionParameters_Get_xf(const MR_MeshProjectionParameters *_this);

/// optional test points to world transformation
/// Modifies a member variable of class `MR::MeshProjectionParameters` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshProjectionParameters_Set_xf(MR_MeshProjectionParameters *_this, const MR_AffineXf3f *value);

/// optional test points to world transformation
/// Returns a mutable pointer to a member variable of class `MR::MeshProjectionParameters` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f **MR_MeshProjectionParameters_GetMutable_xf(MR_MeshProjectionParameters *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshProjectionParameters_Destroy()` to free it when you're done using it.
MRC_API MR_MeshProjectionParameters *MR_MeshProjectionParameters_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshProjectionParameters_DestroyArray()`.
/// Use `MR_MeshProjectionParameters_OffsetMutablePtr()` and `MR_MeshProjectionParameters_OffsetPtr()` to access the array elements.
MRC_API MR_MeshProjectionParameters *MR_MeshProjectionParameters_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshProjectionParameters` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshProjectionParameters_Destroy()` to free it when you're done using it.
MRC_API MR_MeshProjectionParameters *MR_MeshProjectionParameters_ConstructFrom(float loDistLimitSq, float upDistLimitSq, const MR_AffineXf3f *refXf, const MR_AffineXf3f *xf);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshProjectionParameters *MR_MeshProjectionParameters_OffsetPtr(const MR_MeshProjectionParameters *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshProjectionParameters *MR_MeshProjectionParameters_OffsetMutablePtr(MR_MeshProjectionParameters *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshProjectionParameters`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshProjectionParameters_Destroy()` to free it when you're done using it.
MRC_API MR_MeshProjectionParameters *MR_MeshProjectionParameters_ConstructFromAnother(const MR_MeshProjectionParameters *_other);

/// Destroys a heap-allocated instance of `MR_MeshProjectionParameters`. Does nothing if the pointer is null.
MRC_API void MR_MeshProjectionParameters_Destroy(const MR_MeshProjectionParameters *_this);

/// Destroys a heap-allocated array of `MR_MeshProjectionParameters`. Does nothing if the pointer is null.
MRC_API void MR_MeshProjectionParameters_DestroyArray(const MR_MeshProjectionParameters *_this);

/// Generated from a method of class `MR::MeshProjectionParameters` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshProjectionParameters *MR_MeshProjectionParameters_AssignFromAnother(MR_MeshProjectionParameters *_this, const MR_MeshProjectionParameters *_other);

/// Computes signed distances from given test points to the closest point on the reference mesh:
/// positive value - outside reference mesh, negative - inside reference mesh;
/// this method can return wrong sign if the closest point is located on self-intersecting part of the mesh
/// Generated from function `MR::findSignedDistances`.
/// Parameter `refMesh` can not be null. It is a single object.
/// Parameter `testPoints` can not be null. It is a single object.
/// Parameter `validTestPoints` defaults to a null pointer in C++.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `projector` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertScalars_Destroy()` to free it when you're done using it.
MRC_API MR_VertScalars *MR_findSignedDistances_5(const MR_Mesh *refMesh, const MR_VertCoords *testPoints, const MR_VertBitSet *validTestPoints, const MR_MeshProjectionParameters *params, MR_IPointsToMeshProjector *projector);

/// Computes signed distances from valid vertices of test mesh to the closest point on the reference mesh:
/// positive value - outside reference mesh, negative - inside reference mesh;
/// this method can return wrong sign if the closest point is located on self-intersecting part of the mesh
/// Generated from function `MR::findSignedDistances`.
/// Parameter `refMesh` can not be null. It is a single object.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `projector` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertScalars_Destroy()` to free it when you're done using it.
MRC_API MR_VertScalars *MR_findSignedDistances_4(const MR_Mesh *refMesh, const MR_Mesh *mesh, const MR_MeshProjectionParameters *params, MR_IPointsToMeshProjector *projector);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointsToMeshProjector_Destroy()` to free it when you're done using it.
MRC_API MR_PointsToMeshProjector *MR_PointsToMeshProjector_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PointsToMeshProjector_DestroyArray()`.
/// Use `MR_PointsToMeshProjector_OffsetMutablePtr()` and `MR_PointsToMeshProjector_OffsetPtr()` to access the array elements.
MRC_API MR_PointsToMeshProjector *MR_PointsToMeshProjector_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PointsToMeshProjector *MR_PointsToMeshProjector_OffsetPtr(const MR_PointsToMeshProjector *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PointsToMeshProjector *MR_PointsToMeshProjector_OffsetMutablePtr(MR_PointsToMeshProjector *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::PointsToMeshProjector` to its base class `MR::IPointsToMeshProjector`.
/// This version is acting on mutable pointers.
MRC_API const MR_IPointsToMeshProjector *MR_PointsToMeshProjector_UpcastTo_MR_IPointsToMeshProjector(const MR_PointsToMeshProjector *object);

/// Upcasts an instance of `MR::PointsToMeshProjector` to its base class `MR::IPointsToMeshProjector`.
MRC_API MR_IPointsToMeshProjector *MR_PointsToMeshProjector_MutableUpcastTo_MR_IPointsToMeshProjector(MR_PointsToMeshProjector *object);

/// Generated from a constructor of class `MR::PointsToMeshProjector`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointsToMeshProjector_Destroy()` to free it when you're done using it.
MRC_API MR_PointsToMeshProjector *MR_PointsToMeshProjector_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PointsToMeshProjector *_other);

/// Destroys a heap-allocated instance of `MR_PointsToMeshProjector`. Does nothing if the pointer is null.
MRC_API void MR_PointsToMeshProjector_Destroy(const MR_PointsToMeshProjector *_this);

/// Destroys a heap-allocated array of `MR_PointsToMeshProjector`. Does nothing if the pointer is null.
MRC_API void MR_PointsToMeshProjector_DestroyArray(const MR_PointsToMeshProjector *_this);

/// Generated from a method of class `MR::PointsToMeshProjector` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointsToMeshProjector *MR_PointsToMeshProjector_AssignFromAnother(MR_PointsToMeshProjector *_this, MR_PassBy _other_pass_by, MR_PointsToMeshProjector *_other);

/// update all data related to the referencing mesh
/// Generated from a method of class `MR::PointsToMeshProjector` named `updateMeshData`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointsToMeshProjector_updateMeshData(MR_PointsToMeshProjector *_this, const MR_Mesh *mesh);

/// <summary>
/// Computes the closest point on mesh to each of given points
/// </summary>
/// <param name="result">vector pf projections</param>
/// <param name="points">vector of points to project</param>
/// <param name="objXf">transform applied to points</param>
/// <param name="refObjXf">transform applied to referencing mesh</param>
/// <param name="upDistLimitSq">maximal squared distance from point to mesh</param>
/// <param name="loDistLimitSq">minimal squared distance from point to mesh</param>
/// Generated from a method of class `MR::PointsToMeshProjector` named `findProjections`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `result` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API void MR_PointsToMeshProjector_findProjections(MR_PointsToMeshProjector *_this, MR_std_vector_MR_MeshProjectionResult *result, const MR_std_vector_MR_Vector3f *points, const MR_AffineXf3f *objXf, const MR_AffineXf3f *refObjXf, float upDistLimitSq, float loDistLimitSq);

/// Returns amount of additional memory needed to compute projections
/// Generated from a method of class `MR::PointsToMeshProjector` named `projectionsHeapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_PointsToMeshProjector_projectionsHeapBytes(const MR_PointsToMeshProjector *_this, MR_uint64_t numProjections);

#ifdef __cplusplus
} // extern "C"
#endif
