// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMesh/MRRelaxParams.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_RelaxParams MR_RelaxParams; // Defined in `#include <MRCMesh/MRRelaxParams.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertScalars MR_VertScalars; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


/// Generated from class `MR::MeshRelaxParams`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::RelaxParams`
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::MeshApproxRelaxParams`
///     `MR::MeshEqualizeTriAreasParams`
typedef struct MR_MeshRelaxParams MR_MeshRelaxParams;

/// Generated from class `MR::MeshEqualizeTriAreasParams`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::MeshRelaxParams`
///   Indirect: (non-virtual)
///     `MR::RelaxParams`
typedef struct MR_MeshEqualizeTriAreasParams MR_MeshEqualizeTriAreasParams;

/// Generated from class `MR::MeshApproxRelaxParams`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::MeshRelaxParams`
///   Indirect: (non-virtual)
///     `MR::RelaxParams`
typedef struct MR_MeshApproxRelaxParams MR_MeshApproxRelaxParams;

/// move all region vertices with exactly three neighbor vertices in the center of the neighbors
/// Returns a pointer to a member variable of class `MR::MeshRelaxParams` named `hardSmoothTetrahedrons`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_MeshRelaxParams_Get_hardSmoothTetrahedrons(const MR_MeshRelaxParams *_this);

/// move all region vertices with exactly three neighbor vertices in the center of the neighbors
/// Modifies a member variable of class `MR::MeshRelaxParams` named `hardSmoothTetrahedrons`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshRelaxParams_Set_hardSmoothTetrahedrons(MR_MeshRelaxParams *_this, bool value);

/// move all region vertices with exactly three neighbor vertices in the center of the neighbors
/// Returns a mutable pointer to a member variable of class `MR::MeshRelaxParams` named `hardSmoothTetrahedrons`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_MeshRelaxParams_GetMutable_hardSmoothTetrahedrons(MR_MeshRelaxParams *_this);

/// weight for each vertex. By default, all the vertices have equal weights.
/// Returns a pointer to a member variable of class `MR::MeshRelaxParams` named `weights`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertScalars *const *MR_MeshRelaxParams_Get_weights(const MR_MeshRelaxParams *_this);

/// weight for each vertex. By default, all the vertices have equal weights.
/// Modifies a member variable of class `MR::MeshRelaxParams` named `weights`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshRelaxParams_Set_weights(MR_MeshRelaxParams *_this, const MR_VertScalars *value);

/// weight for each vertex. By default, all the vertices have equal weights.
/// Returns a mutable pointer to a member variable of class `MR::MeshRelaxParams` named `weights`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertScalars **MR_MeshRelaxParams_GetMutable_weights(MR_MeshRelaxParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshRelaxParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshRelaxParams *MR_MeshRelaxParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshRelaxParams_DestroyArray()`.
/// Use `MR_MeshRelaxParams_OffsetMutablePtr()` and `MR_MeshRelaxParams_OffsetPtr()` to access the array elements.
MRC_API MR_MeshRelaxParams *MR_MeshRelaxParams_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshRelaxParams *MR_MeshRelaxParams_OffsetPtr(const MR_MeshRelaxParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshRelaxParams *MR_MeshRelaxParams_OffsetMutablePtr(MR_MeshRelaxParams *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::MeshRelaxParams` to its base class `MR::RelaxParams`.
/// This version is acting on mutable pointers.
MRC_API const MR_RelaxParams *MR_MeshRelaxParams_UpcastTo_MR_RelaxParams(const MR_MeshRelaxParams *object);

/// Upcasts an instance of `MR::MeshRelaxParams` to its base class `MR::RelaxParams`.
MRC_API MR_RelaxParams *MR_MeshRelaxParams_MutableUpcastTo_MR_RelaxParams(MR_MeshRelaxParams *object);

/// Downcasts an instance of `MR::MeshRelaxParams` to a derived class `MR::MeshApproxRelaxParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_MeshApproxRelaxParams *MR_MeshRelaxParams_StaticDowncastTo_MR_MeshApproxRelaxParams(const MR_MeshRelaxParams *object);

/// Downcasts an instance of `MR::MeshRelaxParams` to a derived class `MR::MeshApproxRelaxParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_MeshApproxRelaxParams *MR_MeshRelaxParams_MutableStaticDowncastTo_MR_MeshApproxRelaxParams(MR_MeshRelaxParams *object);

/// Downcasts an instance of `MR::MeshRelaxParams` to a derived class `MR::MeshEqualizeTriAreasParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_MeshEqualizeTriAreasParams *MR_MeshRelaxParams_StaticDowncastTo_MR_MeshEqualizeTriAreasParams(const MR_MeshRelaxParams *object);

/// Downcasts an instance of `MR::MeshRelaxParams` to a derived class `MR::MeshEqualizeTriAreasParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_MeshEqualizeTriAreasParams *MR_MeshRelaxParams_MutableStaticDowncastTo_MR_MeshEqualizeTriAreasParams(MR_MeshRelaxParams *object);

/// Generated from a constructor of class `MR::MeshRelaxParams`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshRelaxParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshRelaxParams *MR_MeshRelaxParams_ConstructFromAnother(const MR_MeshRelaxParams *_other);

/// Destroys a heap-allocated instance of `MR_MeshRelaxParams`. Does nothing if the pointer is null.
MRC_API void MR_MeshRelaxParams_Destroy(const MR_MeshRelaxParams *_this);

/// Destroys a heap-allocated array of `MR_MeshRelaxParams`. Does nothing if the pointer is null.
MRC_API void MR_MeshRelaxParams_DestroyArray(const MR_MeshRelaxParams *_this);

/// Generated from a method of class `MR::MeshRelaxParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshRelaxParams *MR_MeshRelaxParams_AssignFromAnother(MR_MeshRelaxParams *_this, const MR_MeshRelaxParams *_other);

/// applies given number of relaxation iterations to the whole mesh ( or some region if it is specified )
/// \return true if was finished successfully, false if was interrupted by progress callback
/// Generated from function `MR::relax`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
MRC_API bool MR_relax_3_MR_Mesh(MR_Mesh *mesh, const MR_MeshRelaxParams *params, const MR_std_function_bool_from_float *cb);

/// Generated from function `MR::relax`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
MRC_API bool MR_relax_4(const MR_MeshTopology *topology, MR_VertCoords *points, const MR_MeshRelaxParams *params, const MR_std_function_bool_from_float *cb);

/// computes position of a vertex, when all neighbor triangles have almost equal areas,
/// more precisely it minimizes sum_i (area_i)^2 by adjusting the position of this vertex only
/// Generated from function `MR::vertexPosEqualNeiAreas`.
/// Parameter `mesh` can not be null. It is a single object.
MRC_API MR_Vector3f MR_vertexPosEqualNeiAreas_3(const MR_Mesh *mesh, MR_VertId v, bool noShrinkage);

/// Generated from function `MR::vertexPosEqualNeiAreas`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API MR_Vector3f MR_vertexPosEqualNeiAreas_4(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_VertId v, bool noShrinkage);

/// if true prevents the surface from shrinkage after many iterations;
/// technically it is done by solving the same task in the plane orthogonal to normal direction
/// Returns a pointer to a member variable of class `MR::MeshEqualizeTriAreasParams` named `noShrinkage`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_MeshEqualizeTriAreasParams_Get_noShrinkage(const MR_MeshEqualizeTriAreasParams *_this);

/// if true prevents the surface from shrinkage after many iterations;
/// technically it is done by solving the same task in the plane orthogonal to normal direction
/// Modifies a member variable of class `MR::MeshEqualizeTriAreasParams` named `noShrinkage`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshEqualizeTriAreasParams_Set_noShrinkage(MR_MeshEqualizeTriAreasParams *_this, bool value);

/// if true prevents the surface from shrinkage after many iterations;
/// technically it is done by solving the same task in the plane orthogonal to normal direction
/// Returns a mutable pointer to a member variable of class `MR::MeshEqualizeTriAreasParams` named `noShrinkage`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_MeshEqualizeTriAreasParams_GetMutable_noShrinkage(MR_MeshEqualizeTriAreasParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshEqualizeTriAreasParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshEqualizeTriAreasParams *MR_MeshEqualizeTriAreasParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshEqualizeTriAreasParams_DestroyArray()`.
/// Use `MR_MeshEqualizeTriAreasParams_OffsetMutablePtr()` and `MR_MeshEqualizeTriAreasParams_OffsetPtr()` to access the array elements.
MRC_API MR_MeshEqualizeTriAreasParams *MR_MeshEqualizeTriAreasParams_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshEqualizeTriAreasParams *MR_MeshEqualizeTriAreasParams_OffsetPtr(const MR_MeshEqualizeTriAreasParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshEqualizeTriAreasParams *MR_MeshEqualizeTriAreasParams_OffsetMutablePtr(MR_MeshEqualizeTriAreasParams *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::MeshEqualizeTriAreasParams` to its base class `MR::MeshRelaxParams`.
/// This version is acting on mutable pointers.
MRC_API const MR_MeshRelaxParams *MR_MeshEqualizeTriAreasParams_UpcastTo_MR_MeshRelaxParams(const MR_MeshEqualizeTriAreasParams *object);

/// Upcasts an instance of `MR::MeshEqualizeTriAreasParams` to its base class `MR::MeshRelaxParams`.
MRC_API MR_MeshRelaxParams *MR_MeshEqualizeTriAreasParams_MutableUpcastTo_MR_MeshRelaxParams(MR_MeshEqualizeTriAreasParams *object);

/// Upcasts an instance of `MR::MeshEqualizeTriAreasParams` to its base class `MR::RelaxParams`.
/// This version is acting on mutable pointers.
MRC_API const MR_RelaxParams *MR_MeshEqualizeTriAreasParams_UpcastTo_MR_RelaxParams(const MR_MeshEqualizeTriAreasParams *object);

/// Upcasts an instance of `MR::MeshEqualizeTriAreasParams` to its base class `MR::RelaxParams`.
MRC_API MR_RelaxParams *MR_MeshEqualizeTriAreasParams_MutableUpcastTo_MR_RelaxParams(MR_MeshEqualizeTriAreasParams *object);

/// Generated from a constructor of class `MR::MeshEqualizeTriAreasParams`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshEqualizeTriAreasParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshEqualizeTriAreasParams *MR_MeshEqualizeTriAreasParams_ConstructFromAnother(const MR_MeshEqualizeTriAreasParams *_other);

/// Destroys a heap-allocated instance of `MR_MeshEqualizeTriAreasParams`. Does nothing if the pointer is null.
MRC_API void MR_MeshEqualizeTriAreasParams_Destroy(const MR_MeshEqualizeTriAreasParams *_this);

/// Destroys a heap-allocated array of `MR_MeshEqualizeTriAreasParams`. Does nothing if the pointer is null.
MRC_API void MR_MeshEqualizeTriAreasParams_DestroyArray(const MR_MeshEqualizeTriAreasParams *_this);

/// Generated from a method of class `MR::MeshEqualizeTriAreasParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshEqualizeTriAreasParams *MR_MeshEqualizeTriAreasParams_AssignFromAnother(MR_MeshEqualizeTriAreasParams *_this, const MR_MeshEqualizeTriAreasParams *_other);

/// applies given number of iterations with movement toward vertexPosEqualNeiAreas() to the whole mesh ( or some region if it is specified )
/// \return true if the operation completed successfully, and false if it was interrupted by the progress callback.
/// Generated from function `MR::equalizeTriAreas`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
MRC_API bool MR_equalizeTriAreas_3(MR_Mesh *mesh, const MR_MeshEqualizeTriAreasParams *params, const MR_std_function_bool_from_float *cb);

/// Generated from function `MR::equalizeTriAreas`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
MRC_API bool MR_equalizeTriAreas_4(const MR_MeshTopology *topology, MR_VertCoords *points, const MR_MeshEqualizeTriAreasParams *params, const MR_std_function_bool_from_float *cb);

/// applies given number of relaxation iterations to the whole mesh ( or some region if it is specified ) \n
/// do not really keeps volume but tries hard
/// \return true if the operation completed successfully, and false if it was interrupted by the progress callback.
/// Generated from function `MR::relaxKeepVolume`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
MRC_API bool MR_relaxKeepVolume_3_MR_Mesh(MR_Mesh *mesh, const MR_MeshRelaxParams *params, const MR_std_function_bool_from_float *cb);

/// Generated from function `MR::relaxKeepVolume`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
MRC_API bool MR_relaxKeepVolume_4(const MR_MeshTopology *topology, MR_VertCoords *points, const MR_MeshRelaxParams *params, const MR_std_function_bool_from_float *cb);

/// radius to find neighbors by surface
/// 0.0f - default = 1e-3 * sqrt(surface area)
/// Returns a pointer to a member variable of class `MR::MeshApproxRelaxParams` named `surfaceDilateRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MeshApproxRelaxParams_Get_surfaceDilateRadius(const MR_MeshApproxRelaxParams *_this);

/// radius to find neighbors by surface
/// 0.0f - default = 1e-3 * sqrt(surface area)
/// Modifies a member variable of class `MR::MeshApproxRelaxParams` named `surfaceDilateRadius`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshApproxRelaxParams_Set_surfaceDilateRadius(MR_MeshApproxRelaxParams *_this, float value);

/// radius to find neighbors by surface
/// 0.0f - default = 1e-3 * sqrt(surface area)
/// Returns a mutable pointer to a member variable of class `MR::MeshApproxRelaxParams` named `surfaceDilateRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MeshApproxRelaxParams_GetMutable_surfaceDilateRadius(MR_MeshApproxRelaxParams *_this);

/// Returns a pointer to a member variable of class `MR::MeshApproxRelaxParams` named `type`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_RelaxApproxType *MR_MeshApproxRelaxParams_Get_type(const MR_MeshApproxRelaxParams *_this);

/// Modifies a member variable of class `MR::MeshApproxRelaxParams` named `type`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshApproxRelaxParams_Set_type(MR_MeshApproxRelaxParams *_this, MR_RelaxApproxType value);

/// Returns a mutable pointer to a member variable of class `MR::MeshApproxRelaxParams` named `type`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RelaxApproxType *MR_MeshApproxRelaxParams_GetMutable_type(MR_MeshApproxRelaxParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshApproxRelaxParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshApproxRelaxParams *MR_MeshApproxRelaxParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshApproxRelaxParams_DestroyArray()`.
/// Use `MR_MeshApproxRelaxParams_OffsetMutablePtr()` and `MR_MeshApproxRelaxParams_OffsetPtr()` to access the array elements.
MRC_API MR_MeshApproxRelaxParams *MR_MeshApproxRelaxParams_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshApproxRelaxParams *MR_MeshApproxRelaxParams_OffsetPtr(const MR_MeshApproxRelaxParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshApproxRelaxParams *MR_MeshApproxRelaxParams_OffsetMutablePtr(MR_MeshApproxRelaxParams *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::MeshApproxRelaxParams` to its base class `MR::MeshRelaxParams`.
/// This version is acting on mutable pointers.
MRC_API const MR_MeshRelaxParams *MR_MeshApproxRelaxParams_UpcastTo_MR_MeshRelaxParams(const MR_MeshApproxRelaxParams *object);

/// Upcasts an instance of `MR::MeshApproxRelaxParams` to its base class `MR::MeshRelaxParams`.
MRC_API MR_MeshRelaxParams *MR_MeshApproxRelaxParams_MutableUpcastTo_MR_MeshRelaxParams(MR_MeshApproxRelaxParams *object);

/// Upcasts an instance of `MR::MeshApproxRelaxParams` to its base class `MR::RelaxParams`.
/// This version is acting on mutable pointers.
MRC_API const MR_RelaxParams *MR_MeshApproxRelaxParams_UpcastTo_MR_RelaxParams(const MR_MeshApproxRelaxParams *object);

/// Upcasts an instance of `MR::MeshApproxRelaxParams` to its base class `MR::RelaxParams`.
MRC_API MR_RelaxParams *MR_MeshApproxRelaxParams_MutableUpcastTo_MR_RelaxParams(MR_MeshApproxRelaxParams *object);

/// Generated from a constructor of class `MR::MeshApproxRelaxParams`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshApproxRelaxParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshApproxRelaxParams *MR_MeshApproxRelaxParams_ConstructFromAnother(const MR_MeshApproxRelaxParams *_other);

/// Destroys a heap-allocated instance of `MR_MeshApproxRelaxParams`. Does nothing if the pointer is null.
MRC_API void MR_MeshApproxRelaxParams_Destroy(const MR_MeshApproxRelaxParams *_this);

/// Destroys a heap-allocated array of `MR_MeshApproxRelaxParams`. Does nothing if the pointer is null.
MRC_API void MR_MeshApproxRelaxParams_DestroyArray(const MR_MeshApproxRelaxParams *_this);

/// Generated from a method of class `MR::MeshApproxRelaxParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshApproxRelaxParams *MR_MeshApproxRelaxParams_AssignFromAnother(MR_MeshApproxRelaxParams *_this, const MR_MeshApproxRelaxParams *_other);

/// applies given number of relaxation iterations to the whole mesh ( or some region if it is specified )
/// approx neighborhoods
/// \return true if the operation completed successfully, and false if it was interrupted by the progress callback.
/// Generated from function `MR::relaxApprox`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
MRC_API bool MR_relaxApprox_3_MR_Mesh(MR_Mesh *mesh, const MR_MeshApproxRelaxParams *params, const MR_std_function_bool_from_float *cb);

/// Generated from function `MR::relaxApprox`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
MRC_API bool MR_relaxApprox_4(const MR_MeshTopology *topology, MR_VertCoords *points, const MR_MeshApproxRelaxParams *params, const MR_std_function_bool_from_float *cb);

/// applies at most given number of relaxation iterations the spikes detected by given threshold
/// Generated from function `MR::removeSpikes`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API void MR_removeSpikes_4(MR_Mesh *mesh, int32_t maxIterations, float minSumAngle, const MR_VertBitSet *region);

/// Generated from function `MR::removeSpikes`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API void MR_removeSpikes_5(const MR_MeshTopology *topology, MR_VertCoords *points, int32_t maxIterations, float minSumAngle, const MR_VertBitSet *region);

/// given a region of faces on the mesh, moves boundary vertices of the region
/// to make the region contour much smoother with minor optimization of mesh topology near region boundary;
/// \param numIters >= 1 how many times to run the algorithm to achieve a better quality,
/// solution is typically oscillates back and forth so even number of iterations is recommended
/// Generated from function `MR::smoothRegionBoundary`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `regionFaces` can not be null. It is a single object.
/// Parameter `numIters` has a default argument: `4`, pass a null pointer to use it.
MRC_API void MR_smoothRegionBoundary(MR_Mesh *mesh, const MR_FaceBitSet *regionFaces, const int32_t *numIters);

/// move all region vertices with exactly three neighbor vertices in the center of the neighbors
/// Generated from function `MR::hardSmoothTetrahedrons`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API void MR_hardSmoothTetrahedrons_2(MR_Mesh *mesh, const MR_VertBitSet *region);

/// Generated from function `MR::hardSmoothTetrahedrons`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API void MR_hardSmoothTetrahedrons_3(const MR_MeshTopology *topology, MR_VertCoords *points, const MR_VertBitSet *region);

#ifdef __cplusplus
} // extern "C"
#endif
