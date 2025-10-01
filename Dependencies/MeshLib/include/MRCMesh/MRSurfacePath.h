// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MREnums.h>
#include <MRCMesh/MRId.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_EdgePoint MR_EdgePoint; // Defined in `#include <MRCMesh/MREdgePoint.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_MeshTriPoint MR_MeshTriPoint; // Defined in `#include <MRCMesh/MRMeshTriPoint.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertScalars MR_VertScalars; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_expected_std_vector_MR_EdgePoint_MR_PathError MR_expected_std_vector_MR_EdgePoint_MR_PathError; // Defined in `#include <MRCMisc/expected_std_vector_MR_EdgePoint_MR_PathError.h>`.
typedef struct MR_phmap_flat_hash_map_MR_VertId_MR_VertId MR_phmap_flat_hash_map_MR_VertId_MR_VertId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_VertId_MR_VertId.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_MR_EdgePoint MR_std_vector_MR_EdgePoint; // Defined in `#include <MRCMisc/std_vector_MR_EdgePoint.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.
typedef struct MR_std_vector_std_vector_MR_EdgePoint MR_std_vector_std_vector_MR_EdgePoint; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_EdgePoint.h>`.
typedef struct MR_std_vector_std_vector_MR_Vector3f MR_std_vector_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_Vector3f.h>`.


typedef int32_t MR_PathError;
enum // MR_PathError
{
    ///< no path can be found from start to end, because they are not from the same connected component
    MR_PathError_StartEndNotConnected = 0,
    ///< report to developers for investigation
    MR_PathError_InternalError = 1,
};

/// Generated from class `MR::ComputeSteepestDescentPathSettings`.
typedef struct MR_ComputeSteepestDescentPathSettings MR_ComputeSteepestDescentPathSettings;

typedef int32_t MR_ExtremeEdgeType;
enum // MR_ExtremeEdgeType
{
    // where the field not-increases both in left and right triangles
    MR_ExtremeEdgeType_Ridge = 0,
    // where the field not-decreases both in left and right triangles
    MR_ExtremeEdgeType_Gorge = 1,
};

/// Generated from function `MR::toString`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_toString_MR_PathError(MR_PathError error);

/// returns intermediate points of the geodesic path from start to end, where it crosses mesh edges;
/// the path can be limited to given region: in face-format inside mp, or in vert-format in vertRegion argument.
/// It is the same as calling computeFastMarchingPath() then reducePath()
/// Generated from function `MR::computeSurfacePath`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `start` can not be null. It is a single object.
/// Parameter `end` can not be null. It is a single object.
/// Parameter `maxGeodesicIters` has a default argument: `5`, pass a null pointer to use it.
/// Parameter `vertRegion` defaults to a null pointer in C++.
/// Parameter `outSurfaceDistances` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_MR_EdgePoint_MR_PathError_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_MR_EdgePoint_MR_PathError *MR_computeSurfacePath(const MR_MeshPart *mp, const MR_MeshTriPoint *start, const MR_MeshTriPoint *end, const int32_t *maxGeodesicIters, const MR_VertBitSet *vertRegion, MR_VertScalars *outSurfaceDistances);

/// returns intermediate points of the geodesic path from start to end, where it crosses mesh edges;
/// It is the same as calling computeGeodesicPathApprox() then reducePath()
/// Generated from function `MR::computeGeodesicPath`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `start` can not be null. It is a single object.
/// Parameter `end` can not be null. It is a single object.
/// Parameter `atype` has a default argument: `GeodesicPathApprox::FastMarching`, pass a null pointer to use it.
/// Parameter `maxGeodesicIters` has a default argument: `100`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_MR_EdgePoint_MR_PathError_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_MR_EdgePoint_MR_PathError *MR_computeGeodesicPath(const MR_Mesh *mesh, const MR_MeshTriPoint *start, const MR_MeshTriPoint *end, const MR_GeodesicPathApprox *atype, const int32_t *maxGeodesicIters);

/// computes by given method and returns intermediate points of approximately geodesic path from start to end,
/// every next point is located in the same triangle with the previous point
/// Generated from function `MR::computeGeodesicPathApprox`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `start` can not be null. It is a single object.
/// Parameter `end` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_MR_EdgePoint_MR_PathError_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_MR_EdgePoint_MR_PathError *MR_computeGeodesicPathApprox(const MR_Mesh *mesh, const MR_MeshTriPoint *start, const MR_MeshTriPoint *end, MR_GeodesicPathApprox atype);

/// computes by Fast Marching method and returns intermediate points of approximately geodesic path from start to end, where it crosses mesh edges;
/// the path can be limited to given region: in face-format inside mp, or in vert-format in vertRegion argument
/// Generated from function `MR::computeFastMarchingPath`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `start` can not be null. It is a single object.
/// Parameter `end` can not be null. It is a single object.
/// Parameter `vertRegion` defaults to a null pointer in C++.
/// Parameter `outSurfaceDistances` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_MR_EdgePoint_MR_PathError_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_MR_EdgePoint_MR_PathError *MR_computeFastMarchingPath(const MR_MeshPart *mp, const MR_MeshTriPoint *start, const MR_MeshTriPoint *end, const MR_VertBitSet *vertRegion, MR_VertScalars *outSurfaceDistances);

/// if valid, then the descent is stopped as soon as same triangle with (end) is reached
/// Returns a pointer to a member variable of class `MR::ComputeSteepestDescentPathSettings` named `end`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshTriPoint *MR_ComputeSteepestDescentPathSettings_Get_end(const MR_ComputeSteepestDescentPathSettings *_this);

/// if valid, then the descent is stopped as soon as same triangle with (end) is reached
/// Modifies a member variable of class `MR::ComputeSteepestDescentPathSettings` named `end`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_ComputeSteepestDescentPathSettings_Set_end(MR_ComputeSteepestDescentPathSettings *_this, const MR_MeshTriPoint *value);

/// if valid, then the descent is stopped as soon as same triangle with (end) is reached
/// Returns a mutable pointer to a member variable of class `MR::ComputeSteepestDescentPathSettings` named `end`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshTriPoint *MR_ComputeSteepestDescentPathSettings_GetMutable_end(MR_ComputeSteepestDescentPathSettings *_this);

/// if not nullptr, then the descent is stopped as soon as any vertex is reached, which is written in *outVertexReached
/// Returns a pointer to a member variable of class `MR::ComputeSteepestDescentPathSettings` named `outVertexReached`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *const *MR_ComputeSteepestDescentPathSettings_Get_outVertexReached(const MR_ComputeSteepestDescentPathSettings *_this);

/// if not nullptr, then the descent is stopped as soon as any vertex is reached, which is written in *outVertexReached
/// Modifies a member variable of class `MR::ComputeSteepestDescentPathSettings` named `outVertexReached`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ComputeSteepestDescentPathSettings_Set_outVertexReached(MR_ComputeSteepestDescentPathSettings *_this, MR_VertId *value);

/// if not nullptr, then the descent is stopped as soon as any vertex is reached, which is written in *outVertexReached
/// Returns a mutable pointer to a member variable of class `MR::ComputeSteepestDescentPathSettings` named `outVertexReached`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId **MR_ComputeSteepestDescentPathSettings_GetMutable_outVertexReached(MR_ComputeSteepestDescentPathSettings *_this);

/// if not nullptr, then the descent is stopped as soon as any boundary point is reached, which is written in *outBdReached
/// Returns a pointer to a member variable of class `MR::ComputeSteepestDescentPathSettings` named `outBdReached`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgePoint *const *MR_ComputeSteepestDescentPathSettings_Get_outBdReached(const MR_ComputeSteepestDescentPathSettings *_this);

/// if not nullptr, then the descent is stopped as soon as any boundary point is reached, which is written in *outBdReached
/// Modifies a member variable of class `MR::ComputeSteepestDescentPathSettings` named `outBdReached`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ComputeSteepestDescentPathSettings_Set_outBdReached(MR_ComputeSteepestDescentPathSettings *_this, MR_EdgePoint *value);

/// if not nullptr, then the descent is stopped as soon as any boundary point is reached, which is written in *outBdReached
/// Returns a mutable pointer to a member variable of class `MR::ComputeSteepestDescentPathSettings` named `outBdReached`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgePoint **MR_ComputeSteepestDescentPathSettings_GetMutable_outBdReached(MR_ComputeSteepestDescentPathSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ComputeSteepestDescentPathSettings_Destroy()` to free it when you're done using it.
MRC_API MR_ComputeSteepestDescentPathSettings *MR_ComputeSteepestDescentPathSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ComputeSteepestDescentPathSettings_DestroyArray()`.
/// Use `MR_ComputeSteepestDescentPathSettings_OffsetMutablePtr()` and `MR_ComputeSteepestDescentPathSettings_OffsetPtr()` to access the array elements.
MRC_API MR_ComputeSteepestDescentPathSettings *MR_ComputeSteepestDescentPathSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::ComputeSteepestDescentPathSettings` elementwise.
/// Parameter `end` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ComputeSteepestDescentPathSettings_Destroy()` to free it when you're done using it.
MRC_API MR_ComputeSteepestDescentPathSettings *MR_ComputeSteepestDescentPathSettings_ConstructFrom(const MR_MeshTriPoint *end, MR_VertId *outVertexReached, MR_EdgePoint *outBdReached);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ComputeSteepestDescentPathSettings *MR_ComputeSteepestDescentPathSettings_OffsetPtr(const MR_ComputeSteepestDescentPathSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ComputeSteepestDescentPathSettings *MR_ComputeSteepestDescentPathSettings_OffsetMutablePtr(MR_ComputeSteepestDescentPathSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ComputeSteepestDescentPathSettings`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ComputeSteepestDescentPathSettings_Destroy()` to free it when you're done using it.
MRC_API MR_ComputeSteepestDescentPathSettings *MR_ComputeSteepestDescentPathSettings_ConstructFromAnother(const MR_ComputeSteepestDescentPathSettings *_other);

/// Destroys a heap-allocated instance of `MR_ComputeSteepestDescentPathSettings`. Does nothing if the pointer is null.
MRC_API void MR_ComputeSteepestDescentPathSettings_Destroy(const MR_ComputeSteepestDescentPathSettings *_this);

/// Destroys a heap-allocated array of `MR_ComputeSteepestDescentPathSettings`. Does nothing if the pointer is null.
MRC_API void MR_ComputeSteepestDescentPathSettings_DestroyArray(const MR_ComputeSteepestDescentPathSettings *_this);

/// Generated from a method of class `MR::ComputeSteepestDescentPathSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ComputeSteepestDescentPathSettings *MR_ComputeSteepestDescentPathSettings_AssignFromAnother(MR_ComputeSteepestDescentPathSettings *_this, const MR_ComputeSteepestDescentPathSettings *_other);

/// computes the path (edge points crossed by the path) staring in given point
/// and moving in each triangle in minus gradient direction of given field;
/// the path stops when it reaches a local minimum in the field or one of stop conditions in settings
/// Generated from function `MR::computeSteepestDescentPath`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `field` can not be null. It is a single object.
/// Parameter `start` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgePoint *MR_computeSteepestDescentPath_4(const MR_MeshPart *mp, const MR_VertScalars *field, const MR_MeshTriPoint *start, const MR_ComputeSteepestDescentPathSettings *settings);

/// computes the path (edge points crossed by the path) staring in given point
/// and moving in each triangle in minus gradient direction of given field,
/// and outputs the path in \param outPath if requested;
/// the path stops when it reaches a local minimum in the field or one of stop conditions in settings
/// Generated from function `MR::computeSteepestDescentPath`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `field` can not be null. It is a single object.
/// Parameter `start` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_computeSteepestDescentPath_5(const MR_MeshPart *mp, const MR_VertScalars *field, const MR_MeshTriPoint *start, MR_std_vector_MR_EdgePoint *outPath, const MR_ComputeSteepestDescentPathSettings *settings);

/// finds the point along minus maximal gradient on the boundary of first ring boundary around given vertex
/// Generated from function `MR::findSteepestDescentPoint`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `field` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePoint *MR_findSteepestDescentPoint_MR_VertId(const MR_MeshPart *mp, const MR_VertScalars *field, MR_VertId v);

/// finds the point along minus maximal gradient on the boundary of triangles around given point (the boundary of left and right edge triangles' union in case (ep) is inner edge point)
/// Generated from function `MR::findSteepestDescentPoint`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `field` can not be null. It is a single object.
/// Parameter `ep` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePoint *MR_findSteepestDescentPoint_MR_EdgePoint(const MR_MeshPart *mp, const MR_VertScalars *field, const MR_EdgePoint *ep);

/// finds the point along minus maximal gradient on the boundary of triangles around given point (the boundary of the triangle itself in case (tp) is inner triangle point)
/// Generated from function `MR::findSteepestDescentPoint`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `field` can not be null. It is a single object.
/// Parameter `tp` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePoint *MR_findSteepestDescentPoint_MR_MeshTriPoint(const MR_MeshPart *mp, const MR_VertScalars *field, const MR_MeshTriPoint *tp);

/// computes all edges in the mesh, where the field not-increases both in left and right triangles
/// Generated from function `MR::findExtremeEdges`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `field` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_findExtremeEdges(const MR_Mesh *mesh, const MR_VertScalars *field, MR_ExtremeEdgeType type);

/// for each vertex from (starts) finds the closest vertex from (ends) in geodesic sense
/// \param vertRegion consider paths going in this region only
/// Generated from function `MR::computeClosestSurfacePathTargets`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `starts` can not be null. It is a single object.
/// Parameter `ends` can not be null. It is a single object.
/// Parameter `vertRegion` defaults to a null pointer in C++.
/// Parameter `outSurfaceDistances` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_VertId *MR_computeClosestSurfacePathTargets(const MR_Mesh *mesh, const MR_VertBitSet *starts, const MR_VertBitSet *ends, const MR_VertBitSet *vertRegion, MR_VertScalars *outSurfaceDistances);

/// returns a set of mesh lines passing via most of given vertices in auto-selected order;
/// the lines try to avoid sharp turns in the vertices
/// Generated from function `MR::getSurfacePathsViaVertices`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `vs` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_EdgePoint *MR_getSurfacePathsViaVertices(const MR_Mesh *mesh, const MR_VertBitSet *vs);

/// computes the length of surface path
/// Generated from function `MR::surfacePathLength`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `surfacePath` can not be null. It is a single object.
MRC_API float MR_surfacePathLength(const MR_Mesh *mesh, const MR_std_vector_MR_EdgePoint *surfacePath);

/// converts lines on mesh in 3D contours by computing coordinate of each point
/// Generated from function `MR::surfacePathToContour3f`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `line` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_Vector3f *MR_surfacePathToContour3f(const MR_Mesh *mesh, const MR_std_vector_MR_EdgePoint *line);

/// Generated from function `MR::surfacePathsToContours3f`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `lines` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector3f *MR_surfacePathsToContours3f(const MR_Mesh *mesh, const MR_std_vector_std_vector_MR_EdgePoint *lines);

#ifdef __cplusplus
} // extern "C"
#endif
