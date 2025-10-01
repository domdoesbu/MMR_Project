// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_EdgeLengthMesh MR_EdgeLengthMesh; // Defined in `#include <MRCMesh/MREdgeLengthMesh.h>`.
typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Vector3d MR_Vector3d; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


/// Generated from class `MR::DeloneSettings`.
typedef struct MR_DeloneSettings MR_DeloneSettings;

typedef int32_t MR_FlipEdge;
enum // MR_FlipEdge
{
    ///< edge flipping is possible
    MR_FlipEdge_Can = 0,
    ///< edge flipping is prohibited by topology or by constraints
    MR_FlipEdge_Cannot = 1,
    ///< edge flipping is required to solve some topology issue
    MR_FlipEdge_Must = 2,
};

/// Generated from class `MR::IntrinsicDeloneSettings`.
typedef struct MR_IntrinsicDeloneSettings MR_IntrinsicDeloneSettings;

/// Maximal allowed surface deviation during every individual flip
/// Returns a pointer to a member variable of class `MR::DeloneSettings` named `maxDeviationAfterFlip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DeloneSettings_Get_maxDeviationAfterFlip(const MR_DeloneSettings *_this);

/// Maximal allowed surface deviation during every individual flip
/// Modifies a member variable of class `MR::DeloneSettings` named `maxDeviationAfterFlip`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DeloneSettings_Set_maxDeviationAfterFlip(MR_DeloneSettings *_this, float value);

/// Maximal allowed surface deviation during every individual flip
/// Returns a mutable pointer to a member variable of class `MR::DeloneSettings` named `maxDeviationAfterFlip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DeloneSettings_GetMutable_maxDeviationAfterFlip(MR_DeloneSettings *_this);

/// Maximal allowed dihedral angle change (in radians) over the flipped edge
/// Returns a pointer to a member variable of class `MR::DeloneSettings` named `maxAngleChange`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DeloneSettings_Get_maxAngleChange(const MR_DeloneSettings *_this);

/// Maximal allowed dihedral angle change (in radians) over the flipped edge
/// Modifies a member variable of class `MR::DeloneSettings` named `maxAngleChange`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DeloneSettings_Set_maxAngleChange(MR_DeloneSettings *_this, float value);

/// Maximal allowed dihedral angle change (in radians) over the flipped edge
/// Returns a mutable pointer to a member variable of class `MR::DeloneSettings` named `maxAngleChange`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DeloneSettings_GetMutable_maxAngleChange(MR_DeloneSettings *_this);

/// if this value is less than FLT_MAX then the algorithm will
/// ignore dihedral angle check if one of triangles has aspect ratio more than this value
/// Returns a pointer to a member variable of class `MR::DeloneSettings` named `criticalTriAspectRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DeloneSettings_Get_criticalTriAspectRatio(const MR_DeloneSettings *_this);

/// if this value is less than FLT_MAX then the algorithm will
/// ignore dihedral angle check if one of triangles has aspect ratio more than this value
/// Modifies a member variable of class `MR::DeloneSettings` named `criticalTriAspectRatio`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DeloneSettings_Set_criticalTriAspectRatio(MR_DeloneSettings *_this, float value);

/// if this value is less than FLT_MAX then the algorithm will
/// ignore dihedral angle check if one of triangles has aspect ratio more than this value
/// Returns a mutable pointer to a member variable of class `MR::DeloneSettings` named `criticalTriAspectRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DeloneSettings_GetMutable_criticalTriAspectRatio(MR_DeloneSettings *_this);

/// Only edges with left and right faces in this set can be flipped
/// Returns a pointer to a member variable of class `MR::DeloneSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet *const *MR_DeloneSettings_Get_region(const MR_DeloneSettings *_this);

/// Only edges with left and right faces in this set can be flipped
/// Modifies a member variable of class `MR::DeloneSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DeloneSettings_Set_region(MR_DeloneSettings *_this, const MR_FaceBitSet *value);

/// Only edges with left and right faces in this set can be flipped
/// Returns a mutable pointer to a member variable of class `MR::DeloneSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet **MR_DeloneSettings_GetMutable_region(MR_DeloneSettings *_this);

/// Edges specified by this bit-set will never be flipped
/// Returns a pointer to a member variable of class `MR::DeloneSettings` named `notFlippable`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeBitSet *const *MR_DeloneSettings_Get_notFlippable(const MR_DeloneSettings *_this);

/// Edges specified by this bit-set will never be flipped
/// Modifies a member variable of class `MR::DeloneSettings` named `notFlippable`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DeloneSettings_Set_notFlippable(MR_DeloneSettings *_this, const MR_UndirectedEdgeBitSet *value);

/// Edges specified by this bit-set will never be flipped
/// Returns a mutable pointer to a member variable of class `MR::DeloneSettings` named `notFlippable`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeBitSet **MR_DeloneSettings_GetMutable_notFlippable(MR_DeloneSettings *_this);

/// Only edges with origin or destination in this set before or after flip can be flipped
/// Returns a pointer to a member variable of class `MR::DeloneSettings` named `vertRegion`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *const *MR_DeloneSettings_Get_vertRegion(const MR_DeloneSettings *_this);

/// Only edges with origin or destination in this set before or after flip can be flipped
/// Modifies a member variable of class `MR::DeloneSettings` named `vertRegion`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DeloneSettings_Set_vertRegion(MR_DeloneSettings *_this, const MR_VertBitSet *value);

/// Only edges with origin or destination in this set before or after flip can be flipped
/// Returns a mutable pointer to a member variable of class `MR::DeloneSettings` named `vertRegion`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet **MR_DeloneSettings_GetMutable_vertRegion(MR_DeloneSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DeloneSettings_Destroy()` to free it when you're done using it.
MRC_API MR_DeloneSettings *MR_DeloneSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_DeloneSettings_DestroyArray()`.
/// Use `MR_DeloneSettings_OffsetMutablePtr()` and `MR_DeloneSettings_OffsetPtr()` to access the array elements.
MRC_API MR_DeloneSettings *MR_DeloneSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::DeloneSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DeloneSettings_Destroy()` to free it when you're done using it.
MRC_API MR_DeloneSettings *MR_DeloneSettings_ConstructFrom(float maxDeviationAfterFlip, float maxAngleChange, float criticalTriAspectRatio, const MR_FaceBitSet *region, const MR_UndirectedEdgeBitSet *notFlippable, const MR_VertBitSet *vertRegion);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_DeloneSettings *MR_DeloneSettings_OffsetPtr(const MR_DeloneSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_DeloneSettings *MR_DeloneSettings_OffsetMutablePtr(MR_DeloneSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::DeloneSettings`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DeloneSettings_Destroy()` to free it when you're done using it.
MRC_API MR_DeloneSettings *MR_DeloneSettings_ConstructFromAnother(const MR_DeloneSettings *_other);

/// Destroys a heap-allocated instance of `MR_DeloneSettings`. Does nothing if the pointer is null.
MRC_API void MR_DeloneSettings_Destroy(const MR_DeloneSettings *_this);

/// Destroys a heap-allocated array of `MR_DeloneSettings`. Does nothing if the pointer is null.
MRC_API void MR_DeloneSettings_DestroyArray(const MR_DeloneSettings *_this);

/// Generated from a method of class `MR::DeloneSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DeloneSettings *MR_DeloneSettings_AssignFromAnother(MR_DeloneSettings *_this, const MR_DeloneSettings *_other);

/// given quadrangle ABCD, checks whether its edge AC satisfies Delone's condition;
/// if dihedral angles
///   1) between triangles ABD and DBC and
///   2) between triangles ABC and ACD
/// differ more than on maxAngleChange then also returns true to prevent flipping from 1) to 2)
/// Generated from function `MR::checkDeloneQuadrangle`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `c` can not be null. It is a single object.
/// Parameter `d` can not be null. It is a single object.
/// Parameter `maxAngleChange` has a default argument: `1.7976931348623157E+308`, pass a null pointer to use it.
MRC_API bool MR_checkDeloneQuadrangle_MR_Vector3d(const MR_Vector3d *a, const MR_Vector3d *b, const MR_Vector3d *c, const MR_Vector3d *d, const double *maxAngleChange);

/// converts arguments in double and calls above function
/// Generated from function `MR::checkDeloneQuadrangle`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `c` can not be null. It is a single object.
/// Parameter `d` can not be null. It is a single object.
/// Parameter `maxAngleChange` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
MRC_API bool MR_checkDeloneQuadrangle_MR_Vector3f(const MR_Vector3f *a, const MR_Vector3f *b, const MR_Vector3f *c, const MR_Vector3f *d, const float *maxAngleChange);

/// consider topology and constraints to decide about flip possibility
/// Generated from function `MR::canFlipEdge`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `notFlippable` defaults to a null pointer in C++.
/// Parameter `vertRegion` defaults to a null pointer in C++.
MRC_API MR_FlipEdge MR_canFlipEdge(const MR_MeshTopology *topology, MR_EdgeId edge, const MR_FaceBitSet *region, const MR_UndirectedEdgeBitSet *notFlippable, const MR_VertBitSet *vertRegion);

/// consider quadrangle formed by left and right triangles of given edge, and
/// checks whether this edge satisfies Delone's condition in the quadrangle;
/// \return false otherwise if flipping the edge does not introduce too large surface deviation (can be returned only for inner edge of the region)
/// Generated from function `MR::checkDeloneQuadrangleInMesh`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `deviationSqAfterFlip` defaults to a null pointer in C++.
MRC_API bool MR_checkDeloneQuadrangleInMesh_4(const MR_Mesh *mesh, MR_EdgeId edge, const MR_DeloneSettings *settings, float *deviationSqAfterFlip);

/// Generated from function `MR::checkDeloneQuadrangleInMesh`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `deviationSqAfterFlip` defaults to a null pointer in C++.
MRC_API bool MR_checkDeloneQuadrangleInMesh_5(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_EdgeId edge, const MR_DeloneSettings *settings, float *deviationSqAfterFlip);

/// given quadrangle ABCD, selects how to best triangulate it:
///   false = by introducing BD diagonal and splitting ABCD on triangles ABD and DBC,
///   true  = by introducing AC diagonal and splitting ABCD on triangles ABC and ACD
/// Generated from function `MR::bestQuadrangleDiagonal`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `c` can not be null. It is a single object.
/// Parameter `d` can not be null. It is a single object.
MRC_API bool MR_bestQuadrangleDiagonal(const MR_Vector3f *a, const MR_Vector3f *b, const MR_Vector3f *c, const MR_Vector3f *d);

/// improves mesh triangulation in a ring of vertices with common origin and represented by edge e
/// Generated from function `MR::makeDeloneOriginRing`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_makeDeloneOriginRing_3(MR_Mesh *mesh, MR_EdgeId e, const MR_DeloneSettings *settings);

/// Generated from function `MR::makeDeloneOriginRing`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_makeDeloneOriginRing_4(MR_MeshTopology *topology, const MR_VertCoords *points, MR_EdgeId e, const MR_DeloneSettings *settings);

/// improves mesh triangulation by performing flipping of edges to satisfy Delone local property,
/// consider every edge at most numIters times, and allow surface deviation at most on given value during every individual flip,
/// \return the number of flips done
/// \param numIters Maximal iteration count
/// \param progressCallback Callback to report algorithm progress and cancel it by user request
/// Generated from function `MR::makeDeloneEdgeFlips`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `numIters` has a default argument: `1`, pass a null pointer to use it.
/// Parameter `progressCallback` is a single object.
/// Parameter `progressCallback` has a default argument: `{}`, pass a null pointer to use it.
MRC_API int32_t MR_makeDeloneEdgeFlips_4_MR_Mesh(MR_Mesh *mesh, const MR_DeloneSettings *settings, const int32_t *numIters, const MR_std_function_bool_from_float *progressCallback);

/// Generated from function `MR::makeDeloneEdgeFlips`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `numIters` has a default argument: `1`, pass a null pointer to use it.
/// Parameter `progressCallback` is a single object.
/// Parameter `progressCallback` has a default argument: `{}`, pass a null pointer to use it.
MRC_API int32_t MR_makeDeloneEdgeFlips_5(MR_MeshTopology *topology, const MR_VertCoords *points, const MR_DeloneSettings *settings, const int32_t *numIters, const MR_std_function_bool_from_float *progressCallback);

/// the edge is considered Delaunay, if cotan(a1) + cotan(a2) >= threshold;
/// passing positive(negative) threshold makes less(more) edges satisfy Delaunay conditions
/// Returns a pointer to a member variable of class `MR::IntrinsicDeloneSettings` named `threshold`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_IntrinsicDeloneSettings_Get_threshold(const MR_IntrinsicDeloneSettings *_this);

/// the edge is considered Delaunay, if cotan(a1) + cotan(a2) >= threshold;
/// passing positive(negative) threshold makes less(more) edges satisfy Delaunay conditions
/// Modifies a member variable of class `MR::IntrinsicDeloneSettings` named `threshold`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntrinsicDeloneSettings_Set_threshold(MR_IntrinsicDeloneSettings *_this, float value);

/// the edge is considered Delaunay, if cotan(a1) + cotan(a2) >= threshold;
/// passing positive(negative) threshold makes less(more) edges satisfy Delaunay conditions
/// Returns a mutable pointer to a member variable of class `MR::IntrinsicDeloneSettings` named `threshold`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_IntrinsicDeloneSettings_GetMutable_threshold(MR_IntrinsicDeloneSettings *_this);

/// Only edges with left and right faces in this set can be flipped
/// Returns a pointer to a member variable of class `MR::IntrinsicDeloneSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet *const *MR_IntrinsicDeloneSettings_Get_region(const MR_IntrinsicDeloneSettings *_this);

/// Only edges with left and right faces in this set can be flipped
/// Modifies a member variable of class `MR::IntrinsicDeloneSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntrinsicDeloneSettings_Set_region(MR_IntrinsicDeloneSettings *_this, const MR_FaceBitSet *value);

/// Only edges with left and right faces in this set can be flipped
/// Returns a mutable pointer to a member variable of class `MR::IntrinsicDeloneSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet **MR_IntrinsicDeloneSettings_GetMutable_region(MR_IntrinsicDeloneSettings *_this);

/// Edges specified by this bit-set will never be flipped
/// Returns a pointer to a member variable of class `MR::IntrinsicDeloneSettings` named `notFlippable`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeBitSet *const *MR_IntrinsicDeloneSettings_Get_notFlippable(const MR_IntrinsicDeloneSettings *_this);

/// Edges specified by this bit-set will never be flipped
/// Modifies a member variable of class `MR::IntrinsicDeloneSettings` named `notFlippable`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntrinsicDeloneSettings_Set_notFlippable(MR_IntrinsicDeloneSettings *_this, const MR_UndirectedEdgeBitSet *value);

/// Edges specified by this bit-set will never be flipped
/// Returns a mutable pointer to a member variable of class `MR::IntrinsicDeloneSettings` named `notFlippable`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeBitSet **MR_IntrinsicDeloneSettings_GetMutable_notFlippable(MR_IntrinsicDeloneSettings *_this);

/// Only edges with origin or destination in this set before or after flip can be flipped
/// Returns a pointer to a member variable of class `MR::IntrinsicDeloneSettings` named `vertRegion`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *const *MR_IntrinsicDeloneSettings_Get_vertRegion(const MR_IntrinsicDeloneSettings *_this);

/// Only edges with origin or destination in this set before or after flip can be flipped
/// Modifies a member variable of class `MR::IntrinsicDeloneSettings` named `vertRegion`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntrinsicDeloneSettings_Set_vertRegion(MR_IntrinsicDeloneSettings *_this, const MR_VertBitSet *value);

/// Only edges with origin or destination in this set before or after flip can be flipped
/// Returns a mutable pointer to a member variable of class `MR::IntrinsicDeloneSettings` named `vertRegion`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet **MR_IntrinsicDeloneSettings_GetMutable_vertRegion(MR_IntrinsicDeloneSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IntrinsicDeloneSettings_Destroy()` to free it when you're done using it.
MRC_API MR_IntrinsicDeloneSettings *MR_IntrinsicDeloneSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_IntrinsicDeloneSettings_DestroyArray()`.
/// Use `MR_IntrinsicDeloneSettings_OffsetMutablePtr()` and `MR_IntrinsicDeloneSettings_OffsetPtr()` to access the array elements.
MRC_API MR_IntrinsicDeloneSettings *MR_IntrinsicDeloneSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::IntrinsicDeloneSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IntrinsicDeloneSettings_Destroy()` to free it when you're done using it.
MRC_API MR_IntrinsicDeloneSettings *MR_IntrinsicDeloneSettings_ConstructFrom(float threshold, const MR_FaceBitSet *region, const MR_UndirectedEdgeBitSet *notFlippable, const MR_VertBitSet *vertRegion);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IntrinsicDeloneSettings *MR_IntrinsicDeloneSettings_OffsetPtr(const MR_IntrinsicDeloneSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IntrinsicDeloneSettings *MR_IntrinsicDeloneSettings_OffsetMutablePtr(MR_IntrinsicDeloneSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::IntrinsicDeloneSettings`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IntrinsicDeloneSettings_Destroy()` to free it when you're done using it.
MRC_API MR_IntrinsicDeloneSettings *MR_IntrinsicDeloneSettings_ConstructFromAnother(const MR_IntrinsicDeloneSettings *_other);

/// Destroys a heap-allocated instance of `MR_IntrinsicDeloneSettings`. Does nothing if the pointer is null.
MRC_API void MR_IntrinsicDeloneSettings_Destroy(const MR_IntrinsicDeloneSettings *_this);

/// Destroys a heap-allocated array of `MR_IntrinsicDeloneSettings`. Does nothing if the pointer is null.
MRC_API void MR_IntrinsicDeloneSettings_DestroyArray(const MR_IntrinsicDeloneSettings *_this);

/// Generated from a method of class `MR::IntrinsicDeloneSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_IntrinsicDeloneSettings *MR_IntrinsicDeloneSettings_AssignFromAnother(MR_IntrinsicDeloneSettings *_this, const MR_IntrinsicDeloneSettings *_other);

/// improves mesh triangulation by performing flipping of edges to satisfy Intrinsic Delaunay local property,
/// consider every edge at most numIters times,
/// \return the number of flips done
/// \param numIters Maximal iteration count
/// \param progressCallback Callback to report algorithm progress and cancel it by user request
/// see "An Algorithm for the Construction of Intrinsic Delaunay Triangulations with Applications to Digital Geometry Processing". https://page.math.tu-berlin.de/~bobenko/papers/InDel.pdf
/// Generated from function `MR::makeDeloneEdgeFlips`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `numIters` has a default argument: `1`, pass a null pointer to use it.
/// Parameter `progressCallback` is a single object.
/// Parameter `progressCallback` has a default argument: `{}`, pass a null pointer to use it.
MRC_API int32_t MR_makeDeloneEdgeFlips_4_MR_EdgeLengthMesh(MR_EdgeLengthMesh *mesh, const MR_IntrinsicDeloneSettings *settings, const int32_t *numIters, const MR_std_function_bool_from_float *progressCallback);

#ifdef __cplusplus
} // extern "C"
#endif
