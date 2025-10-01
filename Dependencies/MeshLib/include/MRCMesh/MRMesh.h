// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRBox.h>
#include <MRCMesh/MRId.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>
#include <MRCMisc/std_array_MR_Vector3f_3.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AABBTree MR_AABBTree; // Defined in `#include <MRCMesh/MRAABBTree.h>`.
typedef struct MR_AABBTreePoints MR_AABBTreePoints; // Defined in `#include <MRCMesh/MRAABBTreePoints.h>`.
typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_Dipoles MR_Dipoles; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_EdgePoint MR_EdgePoint; // Defined in `#include <MRCMesh/MREdgePoint.h>`.
typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_FaceMap MR_FaceMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_LineSegm3f MR_LineSegm3f; // Defined in `#include <MRCMesh/MRLineSegm.h>`.
typedef struct MR_MeshBuilder_BuildSettings MR_MeshBuilder_BuildSettings; // Defined in `#include <MRCMesh/MRMeshBuilderTypes.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_MeshProjectionResult MR_MeshProjectionResult; // Defined in `#include <MRCMesh/MRMeshProject.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_MeshTriPoint MR_MeshTriPoint; // Defined in `#include <MRCMesh/MRMeshTriPoint.h>`.
typedef struct MR_PackMapping MR_PackMapping; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_PartMapping MR_PartMapping; // Defined in `#include <MRCMesh/MRPartMapping.h>`.
typedef struct MR_Plane3d MR_Plane3d; // Defined in `#include <MRCMesh/MRPlane3.h>`.
typedef struct MR_Plane3f MR_Plane3f; // Defined in `#include <MRCMesh/MRPlane3.h>`.
typedef struct MR_PointOnFace MR_PointOnFace; // Defined in `#include <MRCMesh/MRPointOnFace.h>`.
typedef struct MR_QuadraticForm3f MR_QuadraticForm3f; // Defined in `#include <MRCMesh/MRQuadraticForm.h>`.
typedef struct MR_TriMesh MR_TriMesh; // Defined in `#include <MRCMesh/MRTriMesh.h>`.
typedef struct MR_Triangulation MR_Triangulation; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_UndirectedEdgeScalars MR_UndirectedEdgeScalars; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_MR_MeshBuilder_VertSpan_MR_FaceId MR_Vector_MR_MeshBuilder_VertSpan_MR_FaceId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertMap MR_VertMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_WholeEdgeMap MR_WholeEdgeMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_expected_MR_PackMapping_std_string MR_expected_MR_PackMapping_std_string; // Defined in `#include <MRCMisc/expected_MR_PackMapping_std_string.h>`.
typedef struct MR_expected_MR_VertBitSet_std_string MR_expected_MR_VertBitSet_std_string; // Defined in `#include <MRCMisc/expected_MR_VertBitSet_std_string.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_FaceId_MR_FaceId.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_optional_float MR_std_optional_float; // Defined in `#include <MRCMisc/std_optional_float.h>`.
typedef struct MR_std_vector_MR_MeshBuilder_VertDuplication MR_std_vector_MR_MeshBuilder_VertDuplication; // Defined in `#include <MRCMisc/std_vector_MR_MeshBuilder_VertDuplication.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.
typedef struct MR_std_vector_MR_VertId MR_std_vector_MR_VertId; // Defined in `#include <MRCMisc/std_vector_MR_VertId.h>`.
typedef struct MR_std_vector_std_array_MR_Vector3f_3 MR_std_vector_std_array_MR_Vector3f_3; // Defined in `#include <MRCMisc/std_vector_std_array_MR_Vector3f_3.h>`.
typedef struct MR_std_vector_std_vector_MR_EdgeId MR_std_vector_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_EdgeId.h>`.
typedef struct MR_std_vector_std_vector_MR_Vector3f MR_std_vector_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_Vector3f.h>`.


/// This class represents a mesh, including topology (connectivity) information and point coordinates,
/// as well as some caches to accelerate search algorithms
/// Generated from class `MR::Mesh`.
typedef struct MR_Mesh MR_Mesh;

/// Returns a pointer to a member variable of class `MR::Mesh` named `topology`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshTopology *MR_Mesh_Get_topology(const MR_Mesh *_this);

/// Modifies a member variable of class `MR::Mesh` named `topology`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Mesh_Set_topology(MR_Mesh *_this, MR_PassBy value_pass_by, MR_MeshTopology *value);

/// Returns a mutable pointer to a member variable of class `MR::Mesh` named `topology`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshTopology *MR_Mesh_GetMutable_topology(MR_Mesh *_this);

/// Returns a pointer to a member variable of class `MR::Mesh` named `points`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords *MR_Mesh_Get_points(const MR_Mesh *_this);

/// Modifies a member variable of class `MR::Mesh` named `points`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Mesh_Set_points(MR_Mesh *_this, MR_PassBy value_pass_by, MR_VertCoords *value);

/// Returns a mutable pointer to a member variable of class `MR::Mesh` named `points`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertCoords *MR_Mesh_GetMutable_points(MR_Mesh *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_Mesh_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Mesh_DestroyArray()`.
/// Use `MR_Mesh_OffsetMutablePtr()` and `MR_Mesh_OffsetPtr()` to access the array elements.
MRC_API MR_Mesh *MR_Mesh_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Mesh *MR_Mesh_OffsetPtr(const MR_Mesh *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Mesh *MR_Mesh_OffsetMutablePtr(MR_Mesh *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Mesh`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_Mesh_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Mesh *_other);

/// Destroys a heap-allocated instance of `MR_Mesh`. Does nothing if the pointer is null.
MRC_API void MR_Mesh_Destroy(const MR_Mesh *_this);

/// Destroys a heap-allocated array of `MR_Mesh`. Does nothing if the pointer is null.
MRC_API void MR_Mesh_DestroyArray(const MR_Mesh *_this);

/// Generated from a method of class `MR::Mesh` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Mesh *MR_Mesh_AssignFromAnother(MR_Mesh *_this, MR_PassBy _other_pass_by, MR_Mesh *_other);

/// construct mesh from vertex coordinates and a set of triangles with given ids
/// Generated from a method of class `MR::Mesh` named `fromTriangles`.
/// Parameter `t` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_Mesh_fromTriangles(MR_PassBy vertexCoordinates_pass_by, MR_VertCoords *vertexCoordinates, const MR_Triangulation *t, const MR_MeshBuilder_BuildSettings *settings, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// construct mesh from TriMesh representation
/// Generated from a method of class `MR::Mesh` named `fromTriMesh`.
/// Parameter `triMesh` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_Mesh_fromTriMesh(MR_TriMesh *triMesh, const MR_MeshBuilder_BuildSettings *settings, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// construct mesh from vertex coordinates and a set of triangles with given ids;
/// unlike simple fromTriangles() it tries to resolve non-manifold vertices by creating duplicate vertices
/// Generated from a method of class `MR::Mesh` named `fromTrianglesDuplicatingNonManifoldVertices`.
/// Parameter `t` can not be null. It is a single object.
/// Parameter `dups` defaults to a null pointer in C++.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_Mesh_fromTrianglesDuplicatingNonManifoldVertices(MR_PassBy vertexCoordinates_pass_by, MR_VertCoords *vertexCoordinates, MR_Triangulation *t, MR_std_vector_MR_MeshBuilder_VertDuplication *dups, const MR_MeshBuilder_BuildSettings *settings);

/// construct mesh from vertex coordinates and construct mesh topology from face soup,
/// where each face can have arbitrary degree (not only triangles);
/// all non-triangular faces will be automatically subdivided on triangles
/// Generated from a method of class `MR::Mesh` named `fromFaceSoup`.
/// Parameter `verts` can not be null. It is a single object.
/// Parameter `faces` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_Mesh_fromFaceSoup(MR_PassBy vertexCoordinates_pass_by, MR_VertCoords *vertexCoordinates, const MR_std_vector_MR_VertId *verts, const MR_Vector_MR_MeshBuilder_VertSpan_MR_FaceId *faces, const MR_MeshBuilder_BuildSettings *settings, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// construct mesh from point triples;
/// \param duplicateNonManifoldVertices = false, all coinciding points are given the same VertId in the result;
/// \param duplicateNonManifoldVertices = true, it tries to avoid non-manifold vertices by creating duplicate vertices with same coordinates
/// Generated from a method of class `MR::Mesh` named `fromPointTriples`.
/// Parameter `posTriples` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_Mesh_fromPointTriples(const MR_std_vector_std_array_MR_Vector3f_3 *posTriples, bool duplicateNonManifoldVertices);

/// compare that two meshes are exactly the same
/// Generated from a method of class `MR::Mesh` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Mesh(const MR_Mesh *_this, const MR_Mesh *b);

/// returns coordinates of the edge origin
/// Generated from a method of class `MR::Mesh` named `orgPnt`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Mesh_orgPnt(const MR_Mesh *_this, MR_EdgeId e);

/// returns coordinates of the edge destination
/// Generated from a method of class `MR::Mesh` named `destPnt`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Mesh_destPnt(const MR_Mesh *_this, MR_EdgeId e);

/// returns vector equal to edge destination point minus edge origin point
/// Generated from a method of class `MR::Mesh` named `edgeVector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Mesh_edgeVector(const MR_Mesh *_this, MR_EdgeId e);

/// returns line segment of given edge
/// Generated from a method of class `MR::Mesh` named `edgeSegment`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LineSegm3f_Destroy()` to free it when you're done using it.
MRC_API MR_LineSegm3f *MR_Mesh_edgeSegment(const MR_Mesh *_this, MR_EdgeId e);

/// returns a point on the edge: origin point for f=0 and destination point for f=1
/// Generated from a method of class `MR::Mesh` named `edgePoint`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Mesh_edgePoint_2(const MR_Mesh *_this, MR_EdgeId e, float f);

/// computes coordinates of point given as edge and relative position on it
/// Generated from a method of class `MR::Mesh` named `edgePoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `ep` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Mesh_edgePoint_1(const MR_Mesh *_this, const MR_EdgePoint *ep);

/// computes the center of given edge
/// Generated from a method of class `MR::Mesh` named `edgeCenter`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Mesh_edgeCenter(const MR_Mesh *_this, MR_UndirectedEdgeId e);

/// returns three points of left face of e: v0 = orgPnt( e ), v1 = destPnt( e )
/// Generated from a method of class `MR::Mesh` named `getLeftTriPoints`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `v0` can not be null. It is a single object.
/// Parameter `v1` can not be null. It is a single object.
/// Parameter `v2` can not be null. It is a single object.
MRC_API void MR_Mesh_getLeftTriPoints_4(const MR_Mesh *_this, MR_EdgeId e, MR_Vector3f *v0, MR_Vector3f *v1, MR_Vector3f *v2);

/// returns three points of left face of e: res[0] = orgPnt( e ), res[1] = destPnt( e )
/// Generated from a method of class `MR::Mesh` named `getLeftTriPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_std_array_MR_Vector3f_3 MR_Mesh_getLeftTriPoints_1(const MR_Mesh *_this, MR_EdgeId e);

/// returns three points of given face
/// Generated from a method of class `MR::Mesh` named `getTriPoints`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `v0` can not be null. It is a single object.
/// Parameter `v1` can not be null. It is a single object.
/// Parameter `v2` can not be null. It is a single object.
MRC_API void MR_Mesh_getTriPoints_4(const MR_Mesh *_this, MR_FaceId f, MR_Vector3f *v0, MR_Vector3f *v1, MR_Vector3f *v2);

/// returns three points of given face
/// Generated from a method of class `MR::Mesh` named `getTriPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_std_array_MR_Vector3f_3 MR_Mesh_getTriPoints_1(const MR_Mesh *_this, MR_FaceId f);

/// computes coordinates of point given as face and barycentric representation
/// Generated from a method of class `MR::Mesh` named `triPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Mesh_triPoint(const MR_Mesh *_this, const MR_MeshTriPoint *p);

/// returns the centroid of given triangle
/// Generated from a method of class `MR::Mesh` named `triCenter`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Mesh_triCenter(const MR_Mesh *_this, MR_FaceId f);

/// returns aspect ratio of given mesh triangle equal to the ratio of the circum-radius to twice its in-radius
/// Generated from a method of class `MR::Mesh` named `triangleAspectRatio`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Mesh_triangleAspectRatio(const MR_Mesh *_this, MR_FaceId f);

/// returns squared circumcircle diameter of given mesh triangle
/// Generated from a method of class `MR::Mesh` named `circumcircleDiameterSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Mesh_circumcircleDiameterSq(const MR_Mesh *_this, MR_FaceId f);

/// returns circumcircle diameter of given mesh triangle
/// Generated from a method of class `MR::Mesh` named `circumcircleDiameter`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Mesh_circumcircleDiameter(const MR_Mesh *_this, MR_FaceId f);

/// converts vertex into barycentric representation
/// Generated from a method of class `MR::Mesh` named `toTriPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTriPoint_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTriPoint *MR_Mesh_toTriPoint_1_MR_VertId(const MR_Mesh *_this, MR_VertId v);

/// converts face id and 3d point into barycentric representation
/// Generated from a method of class `MR::Mesh` named `toTriPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTriPoint_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTriPoint *MR_Mesh_toTriPoint_2(const MR_Mesh *_this, MR_FaceId f, const MR_Vector3f *p);

/// converts face id and 3d point into barycentric representation
/// Generated from a method of class `MR::Mesh` named `toTriPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTriPoint_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTriPoint *MR_Mesh_toTriPoint_1_MR_PointOnFace(const MR_Mesh *_this, const MR_PointOnFace *p);

/// converts vertex into edge-point representation
/// Generated from a method of class `MR::Mesh` named `toEdgePoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePoint *MR_Mesh_toEdgePoint_1(const MR_Mesh *_this, MR_VertId v);

/// converts edge and 3d point into edge-point representation
/// Generated from a method of class `MR::Mesh` named `toEdgePoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePoint *MR_Mesh_toEdgePoint_2(const MR_Mesh *_this, MR_EdgeId e, const MR_Vector3f *p);

/// returns one of three face vertices, closest to given point
/// Generated from a method of class `MR::Mesh` named `getClosestVertex`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
MRC_API MR_VertId MR_Mesh_getClosestVertex_MR_PointOnFace(const MR_Mesh *_this, const MR_PointOnFace *p);

/// returns one of three face vertices, closest to given point
/// Generated from a method of class `MR::Mesh` named `getClosestVertex`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
MRC_API MR_VertId MR_Mesh_getClosestVertex_MR_MeshTriPoint(const MR_Mesh *_this, const MR_MeshTriPoint *p);

/// returns one of three face edges, closest to given point
/// Generated from a method of class `MR::Mesh` named `getClosestEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_Mesh_getClosestEdge_MR_PointOnFace(const MR_Mesh *_this, const MR_PointOnFace *p);

/// returns one of three face edges, closest to given point
/// Generated from a method of class `MR::Mesh` named `getClosestEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_Mesh_getClosestEdge_MR_MeshTriPoint(const MR_Mesh *_this, const MR_MeshTriPoint *p);

/// returns Euclidean length of the edge
/// Generated from a method of class `MR::Mesh` named `edgeLength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Mesh_edgeLength(const MR_Mesh *_this, MR_UndirectedEdgeId e);

/// computes and returns the lengths of all edges in the mesh
/// Generated from a method of class `MR::Mesh` named `edgeLengths`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeScalars_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeScalars *MR_Mesh_edgeLengths(const MR_Mesh *_this);

/// returns squared Euclidean length of the edge (faster to compute than length)
/// Generated from a method of class `MR::Mesh` named `edgeLengthSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Mesh_edgeLengthSq(const MR_Mesh *_this, MR_UndirectedEdgeId e);

/// computes directed double area of left triangular face of given edge
/// Generated from a method of class `MR::Mesh` named `leftDirDblArea`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Mesh_leftDirDblArea(const MR_Mesh *_this, MR_EdgeId e);

/// computes directed double area for a triangular face from its vertices
/// Generated from a method of class `MR::Mesh` named `dirDblArea`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Mesh_dirDblArea_MR_FaceId(const MR_Mesh *_this, MR_FaceId f);

/// returns twice the area of given face
/// Generated from a method of class `MR::Mesh` named `dblArea`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Mesh_dblArea_MR_FaceId(const MR_Mesh *_this, MR_FaceId f);

/// returns the area of given face
/// Generated from a method of class `MR::Mesh` named `area`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Mesh_area_MR_FaceId(const MR_Mesh *_this, MR_FaceId f);

/// computes the area of given face-region
/// Generated from a method of class `MR::Mesh` named `area`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `fs` can not be null. It is a single object.
MRC_API double MR_Mesh_area_MR_FaceBitSet(const MR_Mesh *_this, const MR_FaceBitSet *fs);

/// computes the area of given face-region (or whole mesh)
/// Generated from a method of class `MR::Mesh` named `area`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `fs` defaults to a null pointer in C++.
MRC_API double MR_Mesh_area_const_MR_FaceBitSet_ptr(const MR_Mesh *_this, const MR_FaceBitSet *fs);

/// computes the sum of directed areas for faces from given region
/// Generated from a method of class `MR::Mesh` named `dirArea`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `fs` can not be null. It is a single object.
MRC_API MR_Vector3d MR_Mesh_dirArea_MR_FaceBitSet(const MR_Mesh *_this, const MR_FaceBitSet *fs);

/// computes the sum of directed areas for faces from given region (or whole mesh)
/// Generated from a method of class `MR::Mesh` named `dirArea`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `fs` defaults to a null pointer in C++.
MRC_API MR_Vector3d MR_Mesh_dirArea_const_MR_FaceBitSet_ptr(const MR_Mesh *_this, const MR_FaceBitSet *fs);

/// computes the sum of absolute projected area of faces from given region as visible if look from given direction
/// Generated from a method of class `MR::Mesh` named `projArea`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `dir` can not be null. It is a single object.
/// Parameter `fs` can not be null. It is a single object.
MRC_API double MR_Mesh_projArea_MR_FaceBitSet(const MR_Mesh *_this, const MR_Vector3f *dir, const MR_FaceBitSet *fs);

/// computes the sum of absolute projected area of faces from given region (or whole mesh) as visible if look from given direction
/// Generated from a method of class `MR::Mesh` named `projArea`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `dir` can not be null. It is a single object.
/// Parameter `fs` defaults to a null pointer in C++.
MRC_API double MR_Mesh_projArea_const_MR_FaceBitSet_ptr(const MR_Mesh *_this, const MR_Vector3f *dir, const MR_FaceBitSet *fs);

/// returns volume of the object surrounded by given region (or whole mesh if (region) is nullptr);
/// if the region has holes then each hole will be virtually filled by adding triangles for each edge and the hole's geometrical center
/// Generated from a method of class `MR::Mesh` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API double MR_Mesh_volume(const MR_Mesh *_this, const MR_FaceBitSet *region);

/// computes the perimeter of the hole specified by one of its edges with no valid left face (left is hole)
/// Generated from a method of class `MR::Mesh` named `holePerimiter`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Mesh_holePerimiter(const MR_Mesh *_this, MR_EdgeId e);

/// computes directed area of the hole specified by one of its edges with no valid left face (left is hole);
/// if the hole is planar then returned vector is orthogonal to the plane pointing outside and its magnitude is equal to hole area
/// Generated from a method of class `MR::Mesh` named `holeDirArea`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3d MR_Mesh_holeDirArea(const MR_Mesh *_this, MR_EdgeId e);

/// computes unit vector that is both orthogonal to given edge and to the normal of its left triangle, the vector is directed inside left triangle
/// Generated from a method of class `MR::Mesh` named `leftTangent`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Mesh_leftTangent(const MR_Mesh *_this, MR_EdgeId e);

/// computes triangular face normal from its vertices
/// Generated from a method of class `MR::Mesh` named `leftNormal`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Mesh_leftNormal(const MR_Mesh *_this, MR_EdgeId e);

/// computes triangular face normal from its vertices
/// Generated from a method of class `MR::Mesh` named `normal`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Mesh_normal_MR_FaceId(const MR_Mesh *_this, MR_FaceId f);

/// returns the plane containing given triangular face with normal looking outwards
/// Generated from a method of class `MR::Mesh` named `getPlane3f`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Plane3f_Destroy()` to free it when you're done using it.
MRC_API MR_Plane3f *MR_Mesh_getPlane3f(const MR_Mesh *_this, MR_FaceId f);

/// Generated from a method of class `MR::Mesh` named `getPlane3d`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Plane3d_Destroy()` to free it when you're done using it.
MRC_API MR_Plane3d *MR_Mesh_getPlane3d(const MR_Mesh *_this, MR_FaceId f);

/// computes sum of directed double areas of all triangles around given vertex
/// Generated from a method of class `MR::Mesh` named `dirDblArea`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Mesh_dirDblArea_MR_VertId(const MR_Mesh *_this, MR_VertId v);

/// computes the length of summed directed double areas of all triangles around given vertex
/// Generated from a method of class `MR::Mesh` named `dblArea`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Mesh_dblArea_MR_VertId(const MR_Mesh *_this, MR_VertId v);

/// computes normal in a vertex using sum of directed areas of neighboring triangles
/// Generated from a method of class `MR::Mesh` named `normal`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Mesh_normal_MR_VertId(const MR_Mesh *_this, MR_VertId v);

/// computes normal in three vertices of p's triangle, then interpolates them using barycentric coordinates and normalizes again;
/// this is the same normal as in rendering with smooth shading
/// Generated from a method of class `MR::Mesh` named `normal`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Mesh_normal_MR_MeshTriPoint(const MR_Mesh *_this, const MR_MeshTriPoint *p);

/// computes angle-weighted sum of normals of incident faces of given vertex (only (region) faces will be considered);
/// the sum is normalized before returning
/// Generated from a method of class `MR::Mesh` named `pseudonormal`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API MR_Vector3f MR_Mesh_pseudonormal_MR_VertId(const MR_Mesh *_this, MR_VertId v, const MR_FaceBitSet *region);

/// computes normalized half sum of face normals sharing given edge (only (region) faces will be considered);
/// Generated from a method of class `MR::Mesh` named `pseudonormal`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API MR_Vector3f MR_Mesh_pseudonormal_MR_UndirectedEdgeId(const MR_Mesh *_this, MR_UndirectedEdgeId e, const MR_FaceBitSet *region);

/// returns pseudonormal in corresponding face/edge/vertex for signed distance calculation
/// as suggested in the article "Signed Distance Computation Using the Angle Weighted Pseudonormal" by J. Andreas Baerentzen and Henrik Aanaes,
/// https://backend.orbit.dtu.dk/ws/portalfiles/portal/3977815/B_rentzen.pdf
/// unlike normal( const MeshTriPoint & p ), this is not a smooth function
/// Generated from a method of class `MR::Mesh` named `pseudonormal`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API MR_Vector3f MR_Mesh_pseudonormal_MR_MeshTriPoint(const MR_Mesh *_this, const MR_MeshTriPoint *p, const MR_FaceBitSet *region);

/// given a point (pt) in 3D and the closest point to in on mesh (proj),
/// \return signed distance from pt to mesh: positive value - outside mesh, negative - inside mesh;
/// this method can return wrong sign if the closest point is located on self-intersecting part of the mesh
/// Generated from a method of class `MR::Mesh` named `signedDistance`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
/// Parameter `proj` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API float MR_Mesh_signedDistance_3_MR_MeshProjectionResult(const MR_Mesh *_this, const MR_Vector3f *pt, const MR_MeshProjectionResult *proj, const MR_FaceBitSet *region);

/// given a point (pt) in 3D, computes the closest point on mesh, and
/// \return signed distance from pt to mesh: positive value - outside mesh, negative - inside mesh;
/// this method can return wrong sign if the closest point is located on self-intersecting part of the mesh
/// Generated from a method of class `MR::Mesh` named `signedDistance`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API float MR_Mesh_signedDistance_1(const MR_Mesh *_this, const MR_Vector3f *pt);

/// given a point (pt) in 3D, computes the closest point on mesh, and
/// \return signed distance from pt to mesh: positive value - outside mesh, negative - inside mesh;
///   or std::nullopt if the projection point is not within maxDist;
/// this method can return wrong sign if the closest point is located on self-intersecting part of the mesh
/// Generated from a method of class `MR::Mesh` named `signedDistance`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_float_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_float *MR_Mesh_signedDistance_3_float(const MR_Mesh *_this, const MR_Vector3f *pt, float maxDistSq, const MR_FaceBitSet *region);

/// computes generalized winding number in a point (pt), which is
/// * for closed mesh with normals outside: 1 inside, 0 outside;
/// * for planar mesh: 0.5 inside, -0.5 outside;
/// and in general is equal to (portion of solid angle where inside part of mesh is observable) minus (portion of solid angle where outside part of mesh is observable)
/// \param beta determines the precision of fast approximation: the more the better, recommended value 2 or more
/// Generated from a method of class `MR::Mesh` named `calcFastWindingNumber`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
/// Parameter `beta` has a default argument: `2`, pass a null pointer to use it.
MRC_API float MR_Mesh_calcFastWindingNumber(const MR_Mesh *_this, const MR_Vector3f *pt, const float *beta);

/// computes whether a point (pt) is located outside the object surrounded by this mesh using generalized winding number
/// \param beta determines the precision of winding number computation: the more the better, recommended value 2 or more
/// Generated from a method of class `MR::Mesh` named `isOutside`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
/// Parameter `windingNumberThreshold` has a default argument: `0.5F`, pass a null pointer to use it.
/// Parameter `beta` has a default argument: `2`, pass a null pointer to use it.
MRC_API bool MR_Mesh_isOutside(const MR_Mesh *_this, const MR_Vector3f *pt, const float *windingNumberThreshold, const float *beta);

/// computes whether a point (pt) is located outside the object surrounded by this mesh
/// using pseudonormal at the closest point to in on mesh (proj);
/// this method works much faster than \ref isOutside but can return wrong sign if the closest point is located on self-intersecting part of the mesh
/// Generated from a method of class `MR::Mesh` named `isOutsideByProjNorm`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
/// Parameter `proj` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API bool MR_Mesh_isOutsideByProjNorm(const MR_Mesh *_this, const MR_Vector3f *pt, const MR_MeshProjectionResult *proj, const MR_FaceBitSet *region);

/// computes the sum of triangle angles at given vertex; optionally returns whether the vertex is on boundary
/// Generated from a method of class `MR::Mesh` named `sumAngles`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `outBoundaryVert` defaults to a null pointer in C++.
MRC_API float MR_Mesh_sumAngles(const MR_Mesh *_this, MR_VertId v, bool *outBoundaryVert);

/// returns vertices where the sum of triangle angles is below given threshold
/// Generated from a method of class `MR::Mesh` named `findSpikeVertices`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VertBitSet_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VertBitSet_std_string *MR_Mesh_findSpikeVertices(const MR_Mesh *_this, float minSumAngle, const MR_VertBitSet *region, const MR_std_function_bool_from_float *cb);

/// given an edge between two triangular faces, computes sine of dihedral angle between them:
/// 0 if both faces are in the same plane,
/// positive if the faces form convex surface,
/// negative if the faces form concave surface
/// Generated from a method of class `MR::Mesh` named `dihedralAngleSin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Mesh_dihedralAngleSin(const MR_Mesh *_this, MR_UndirectedEdgeId e);

/// given an edge between two triangular faces, computes cosine of dihedral angle between them:
/// 1 if both faces are in the same plane,
/// 0 if the surface makes right angle turn at the edge,
/// -1 if the faces overlap one another
/// Generated from a method of class `MR::Mesh` named `dihedralAngleCos`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Mesh_dihedralAngleCos(const MR_Mesh *_this, MR_UndirectedEdgeId e);

/// given an edge between two triangular faces, computes the dihedral angle between them:
/// 0 if both faces are in the same plane,
/// positive if the faces form convex surface,
/// negative if the faces form concave surface;
/// please consider the usage of faster dihedralAngleSin(e) and dihedralAngleCos(e)
/// Generated from a method of class `MR::Mesh` named `dihedralAngle`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Mesh_dihedralAngle(const MR_Mesh *_this, MR_UndirectedEdgeId e);

/// computes discrete mean curvature in given vertex, measures in length^-1;
/// 0 for planar regions, positive for convex surface, negative for concave surface
/// Generated from a method of class `MR::Mesh` named `discreteMeanCurvature`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Mesh_discreteMeanCurvature_MR_VertId(const MR_Mesh *_this, MR_VertId v);

/// computes discrete mean curvature in given edge, measures in length^-1;
/// 0 for planar regions, positive for convex surface, negative for concave surface
/// Generated from a method of class `MR::Mesh` named `discreteMeanCurvature`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Mesh_discreteMeanCurvature_MR_UndirectedEdgeId(const MR_Mesh *_this, MR_UndirectedEdgeId e);

/// computes discrete Gaussian curvature (or angle defect) at given vertex,
/// which 0 in inner vertices on planar mesh parts and reaches 2*pi on needle's tip, see http://math.uchicago.edu/~may/REU2015/REUPapers/Upadhyay.pdf
/// optionally returns whether the vertex is on boundary
/// Generated from a method of class `MR::Mesh` named `discreteGaussianCurvature`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `outBoundaryVert` defaults to a null pointer in C++.
MRC_API float MR_Mesh_discreteGaussianCurvature(const MR_Mesh *_this, MR_VertId v, bool *outBoundaryVert);

/// finds all mesh edges where dihedral angle is distinct from planar PI angle on at least given value
/// Generated from a method of class `MR::Mesh` named `findCreaseEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_Mesh_findCreaseEdges(const MR_Mesh *_this, float angleFromPlanar);

/// computes cotangent of the angle in the left( e ) triangle opposite to e,
/// and returns 0 if left face does not exist
/// Generated from a method of class `MR::Mesh` named `leftCotan`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Mesh_leftCotan(const MR_Mesh *_this, MR_EdgeId e);

/// computes sum of cotangents of the angle in the left and right triangles opposite to given edge,
/// consider cotangents zero for not existing triangles
/// Generated from a method of class `MR::Mesh` named `cotan`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Mesh_cotan(const MR_Mesh *_this, MR_UndirectedEdgeId ue);

/// computes quadratic form in the vertex as the sum of squared distances from
/// 1) planes of adjacent triangles, with the weight equal to the angle of adjacent triangle at this vertex divided on PI in case of angleWeigted=true;
/// 2) lines of adjacent boundary and crease edges
/// Generated from a method of class `MR::Mesh` named `quadraticForm`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `creases` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_QuadraticForm3f_Destroy()` to free it when you're done using it.
MRC_API MR_QuadraticForm3f *MR_Mesh_quadraticForm(const MR_Mesh *_this, MR_VertId v, bool angleWeigted, const MR_FaceBitSet *region, const MR_UndirectedEdgeBitSet *creases);

/// returns the bounding box containing all valid vertices (implemented via getAABBTree())
/// this bounding box is insignificantly bigger that minimal box due to AABB algorithms precision
/// Generated from a method of class `MR::Mesh` named `getBoundingBox`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Box3f MR_Mesh_getBoundingBox(const MR_Mesh *_this);

/// passes through all valid vertices and finds the minimal bounding box containing all of them;
/// if toWorld transformation is given then returns minimal bounding box in world space
/// Generated from a method of class `MR::Mesh` named `computeBoundingBox`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `toWorld` defaults to a null pointer in C++.
MRC_API MR_Box3f MR_Mesh_computeBoundingBox_1(const MR_Mesh *_this, const MR_AffineXf3f *toWorld);

/// passes through all given faces (or whole mesh if region == null) and finds the minimal bounding box containing all of them
/// if toWorld transformation is given then returns minimal bounding box in world space
/// Generated from a method of class `MR::Mesh` named `computeBoundingBox`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `toWorld` defaults to a null pointer in C++.
MRC_API MR_Box3f MR_Mesh_computeBoundingBox_2(const MR_Mesh *_this, const MR_FaceBitSet *region, const MR_AffineXf3f *toWorld);

/// computes average length of an edge in this mesh
/// Generated from a method of class `MR::Mesh` named `averageEdgeLength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Mesh_averageEdgeLength(const MR_Mesh *_this);

/// computes average position of all valid mesh vertices
/// Generated from a method of class `MR::Mesh` named `findCenterFromPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Mesh_findCenterFromPoints(const MR_Mesh *_this);

/// computes center of mass considering that density of all triangles is the same
/// Generated from a method of class `MR::Mesh` named `findCenterFromFaces`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Mesh_findCenterFromFaces(const MR_Mesh *_this);

/// computes bounding box and returns its center
/// Generated from a method of class `MR::Mesh` named `findCenterFromBBox`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Mesh_findCenterFromBBox(const MR_Mesh *_this);

/// for all points not in topology.getValidVerts() sets coordinates to (0,0,0)
/// Generated from a method of class `MR::Mesh` named `zeroUnusedPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Mesh_zeroUnusedPoints(MR_Mesh *_this);

/// applies given transformation to specified vertices
/// if region is nullptr, all valid mesh vertices are used
/// \snippet cpp-examples/MeshModification.dox.cpp MeshTransform
/// Generated from a method of class `MR::Mesh` named `transform`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `xf` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API void MR_Mesh_transform(MR_Mesh *_this, const MR_AffineXf3f *xf, const MR_VertBitSet *region);

/// creates new point and assigns given position to it
/// Generated from a method of class `MR::Mesh` named `addPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API MR_VertId MR_Mesh_addPoint(MR_Mesh *_this, const MR_Vector3f *pos);

/// append points to mesh and connect them as closed edge loop
/// returns first EdgeId of new edges
/// Generated from a method of class `MR::Mesh` named `addSeparateEdgeLoop`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `contourPoints` can not be null. It is a single object.
MRC_API MR_EdgeId MR_Mesh_addSeparateEdgeLoop(MR_Mesh *_this, const MR_std_vector_MR_Vector3f *contourPoints);

/// append points to mesh and connect them
/// returns first EdgeId of new edges
/// Generated from a method of class `MR::Mesh` named `addSeparateContours`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `contours` can not be null. It is a single object.
/// Parameter `xf` defaults to a null pointer in C++.
MRC_API MR_EdgeId MR_Mesh_addSeparateContours(MR_Mesh *_this, const MR_std_vector_std_vector_MR_Vector3f *contours, const MR_AffineXf3f *xf);

/// append points to mesh and connect them to given edges making edge loop
/// first point connects with first edge dest
/// last point connects with last edge org
/// note that first and last edge should have no left face
/// Generated from a method of class `MR::Mesh` named `attachEdgeLoopPart`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `contourPoints` can not be null. It is a single object.
MRC_API void MR_Mesh_attachEdgeLoopPart(MR_Mesh *_this, MR_EdgeId first, MR_EdgeId last, const MR_std_vector_MR_Vector3f *contourPoints);

/// split given edge on two parts:
/// dest(returned-edge) = org(e) - newly created vertex,
/// org(returned-edge) = org(e-before-split),
/// dest(e) = dest(e-before-split)
/// \details left and right faces of given edge if valid are also subdivided on two parts each;
/// the split edge will keep both face IDs and their degrees, and the new edge will have new face IDs and new faces are triangular;
/// if left or right faces of the original edge were in the region, then include new parts of these faces in the region
/// \param new2Old receive mapping from newly appeared triangle to its original triangle (part to full)
/// Generated from a method of class `MR::Mesh` named `splitEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `newVertPos` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `new2Old` defaults to a null pointer in C++.
MRC_API MR_EdgeId MR_Mesh_splitEdge_4(MR_Mesh *_this, MR_EdgeId e, const MR_Vector3f *newVertPos, MR_FaceBitSet *region, MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId *new2Old);

// same, but split given edge on two equal parts
/// Generated from a method of class `MR::Mesh` named `splitEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `new2Old` defaults to a null pointer in C++.
MRC_API MR_EdgeId MR_Mesh_splitEdge_3(MR_Mesh *_this, MR_EdgeId e, MR_FaceBitSet *region, MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId *new2Old);

/// split given triangle on three triangles, introducing new vertex with given coordinates and connecting it to original triangle vertices;
/// if region is given, then it must include (f) and new faces will be added there as well
/// \param new2Old receive mapping from newly appeared triangle to its original triangle (part to full)
/// Generated from a method of class `MR::Mesh` named `splitFace`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `newVertPos` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `new2Old` defaults to a null pointer in C++.
MRC_API MR_VertId MR_Mesh_splitFace_4(MR_Mesh *_this, MR_FaceId f, const MR_Vector3f *newVertPos, MR_FaceBitSet *region, MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId *new2Old);

// same, putting new vertex in the centroid of original triangle
/// Generated from a method of class `MR::Mesh` named `splitFace`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `new2Old` defaults to a null pointer in C++.
MRC_API MR_VertId MR_Mesh_splitFace_3(MR_Mesh *_this, MR_FaceId f, MR_FaceBitSet *region, MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId *new2Old);

/// appends another mesh as separate connected component(s) to this
/// Generated from a method of class `MR::Mesh` named `addMesh`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `map` is a single object.
/// Parameter `map` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `rearrangeTriangles` has a default argument: `false`, pass a null pointer to use it.
MRC_API void MR_Mesh_addMesh_3(MR_Mesh *_this, const MR_Mesh *from, const MR_PartMapping *map, const bool *rearrangeTriangles);

/// Generated from a method of class `MR::Mesh` named `addMesh`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `outVmap` defaults to a null pointer in C++.
/// Parameter `outEmap` defaults to a null pointer in C++.
/// Parameter `rearrangeTriangles` has a default argument: `false`, pass a null pointer to use it.
MRC_API void MR_Mesh_addMesh_5(MR_Mesh *_this, const MR_Mesh *from, MR_FaceMap *outFmap, MR_VertMap *outVmap, MR_WholeEdgeMap *outEmap, const bool *rearrangeTriangles);

/// appends whole or part of another mesh as separate connected component(s) to this
/// Generated from a method of class `MR::Mesh` named `addMeshPart`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
MRC_API void MR_Mesh_addMeshPart_2(MR_Mesh *_this, const MR_MeshPart *from, const MR_PartMapping *map);

/// appends whole or part of another mesh to this joining added faces with existed ones along given contours
/// \param flipOrientation true means that every (from) triangle is inverted before adding
/// Generated from a method of class `MR::Mesh` named `addMeshPart`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `flipOrientation` has a default argument: `false`, pass a null pointer to use it.
/// Parameter `thisContours` is a single object.
/// Parameter `thisContours` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `fromContours` is a single object.
/// Parameter `fromContours` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `map` is a single object.
/// Parameter `map` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_Mesh_addMeshPart_5(MR_Mesh *_this, const MR_MeshPart *from, const bool *flipOrientation, const MR_std_vector_std_vector_MR_EdgeId *thisContours, const MR_std_vector_std_vector_MR_EdgeId *fromContours, const MR_PartMapping *map);

/// creates new mesh from given triangles of this mesh
/// Generated from a method of class `MR::Mesh` named `cloneRegion`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `flipOrientation` has a default argument: `false`, pass a null pointer to use it.
/// Parameter `map` is a single object.
/// Parameter `map` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_Mesh_cloneRegion(const MR_Mesh *_this, const MR_FaceBitSet *region, const bool *flipOrientation, const MR_PartMapping *map);

/// tightly packs all arrays eliminating lone edges and invalid faces, vertices and points
/// Generated from a method of class `MR::Mesh` named `pack`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` is a single object.
/// Parameter `map` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `rearrangeTriangles` has a default argument: `false`, pass a null pointer to use it.
MRC_API void MR_Mesh_pack_2_MR_PartMapping(MR_Mesh *_this, const MR_PartMapping *map, const bool *rearrangeTriangles);

/// Generated from a method of class `MR::Mesh` named `pack`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `outVmap` defaults to a null pointer in C++.
/// Parameter `outEmap` defaults to a null pointer in C++.
/// Parameter `rearrangeTriangles` has a default argument: `false`, pass a null pointer to use it.
MRC_API void MR_Mesh_pack_4(MR_Mesh *_this, MR_FaceMap *outFmap, MR_VertMap *outVmap, MR_WholeEdgeMap *outEmap, const bool *rearrangeTriangles);

/// tightly packs all arrays eliminating lone edges and invalid faces, vertices and points,
/// reorder all faces, vertices and edges according to given maps, each containing old id -> new id mapping
/// Generated from a method of class `MR::Mesh` named `pack`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_Mesh_pack_2_MR_PackMapping(MR_Mesh *_this, const MR_PackMapping *map, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// packs tightly and rearranges vertices, triangles and edges to put close in space elements in close indices
/// \param preserveAABBTree whether to keep valid mesh's AABB tree after return (it will take longer to compute and it will occupy more memory)
/// Generated from a method of class `MR::Mesh` named `packOptimally`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `preserveAABBTree` has a default argument: `true`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PackMapping_Destroy()` to free it when you're done using it.
MRC_API MR_PackMapping *MR_Mesh_packOptimally_1(MR_Mesh *_this, const bool *preserveAABBTree);

/// Generated from a method of class `MR::Mesh` named `packOptimally`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_PackMapping_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_PackMapping_std_string *MR_Mesh_packOptimally_2(MR_Mesh *_this, bool preserveAABBTree, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// deletes multiple given faces, also deletes adjacent edges and vertices if they were not shared by remaining faces and not in \param keepFaces
/// Generated from a method of class `MR::Mesh` named `deleteFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `fs` can not be null. It is a single object.
/// Parameter `keepEdges` defaults to a null pointer in C++.
MRC_API void MR_Mesh_deleteFaces(MR_Mesh *_this, const MR_FaceBitSet *fs, const MR_UndirectedEdgeBitSet *keepEdges);

/// finds the closest mesh point on this mesh (or its region) to given point;
/// \param point source location to look the closest to
/// \param res found closest point including Euclidean coordinates and FaceId
/// \param maxDistSq search only in the ball with sqrt(maxDistSq) radius around given point, smaller value here increases performance
/// \param xf is mesh-to-point transformation, if not specified then identity transformation is assumed and works much faster;
/// \return false if no mesh point is found in the ball with sqrt(maxDistSq) radius around given point
/// Generated from a method of class `MR::Mesh` named `projectPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
/// Parameter `res` can not be null. It is a single object.
/// Parameter `maxDistSq` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `xf` defaults to a null pointer in C++.
MRC_API bool MR_Mesh_projectPoint_5_MR_PointOnFace(const MR_Mesh *_this, const MR_Vector3f *point, MR_PointOnFace *res, const float *maxDistSq, const MR_FaceBitSet *region, const MR_AffineXf3f *xf);

/// finds the closest mesh point on this mesh (or its region) to given point;
/// \param point source location to look the closest to
/// \param res found closest point including Euclidean coordinates, barycentric coordinates, FaceId and squared distance to point
/// \param maxDistSq search only in the ball with sqrt(maxDistSq) radius around given point, smaller value here increases performance
/// \param xf is mesh-to-point transformation, if not specified then identity transformation is assumed and works much faster;
/// \return false if no mesh point is found in the ball with sqrt(maxDistSq) radius around given point
/// Generated from a method of class `MR::Mesh` named `projectPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
/// Parameter `res` can not be null. It is a single object.
/// Parameter `maxDistSq` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `xf` defaults to a null pointer in C++.
MRC_API bool MR_Mesh_projectPoint_5_MR_MeshProjectionResult(const MR_Mesh *_this, const MR_Vector3f *point, MR_MeshProjectionResult *res, const float *maxDistSq, const MR_FaceBitSet *region, const MR_AffineXf3f *xf);

/// Generated from a method of class `MR::Mesh` named `findClosestPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
/// Parameter `res` can not be null. It is a single object.
/// Parameter `maxDistSq` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `xf` defaults to a null pointer in C++.
MRC_API bool MR_Mesh_findClosestPoint_5(const MR_Mesh *_this, const MR_Vector3f *point, MR_MeshProjectionResult *res, const float *maxDistSq, const MR_FaceBitSet *region, const MR_AffineXf3f *xf);

/// finds the closest mesh point on this mesh (or its region) to given point;
/// \param point source location to look the closest to
/// \param maxDistSq search only in the ball with sqrt(maxDistSq) radius around given point, smaller value here increases performance
/// \param xf is mesh-to-point transformation, if not specified then identity transformation is assumed and works much faster;
/// \return found closest point including Euclidean coordinates, barycentric coordinates, FaceId and squared distance to point
///         or std::nullopt if no mesh point is found in the ball with sqrt(maxDistSq) radius around given point
/// Generated from a method of class `MR::Mesh` named `projectPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
/// Parameter `maxDistSq` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `xf` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshProjectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshProjectionResult *MR_Mesh_projectPoint_4(const MR_Mesh *_this, const MR_Vector3f *point, const float *maxDistSq, const MR_FaceBitSet *region, const MR_AffineXf3f *xf);

/// Generated from a method of class `MR::Mesh` named `findClosestPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
/// Parameter `maxDistSq` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `xf` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshProjectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshProjectionResult *MR_Mesh_findClosestPoint_4(const MR_Mesh *_this, const MR_Vector3f *point, const float *maxDistSq, const MR_FaceBitSet *region, const MR_AffineXf3f *xf);

/// returns cached aabb-tree for this mesh, creating it if it did not exist in a thread-safe manner
/// Generated from a method of class `MR::Mesh` named `getAABBTree`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AABBTree *MR_Mesh_getAABBTree(const MR_Mesh *_this);

/// returns cached aabb-tree for this mesh, but does not create it if it did not exist
/// Generated from a method of class `MR::Mesh` named `getAABBTreeNotCreate`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_AABBTree *MR_Mesh_getAABBTreeNotCreate(const MR_Mesh *_this);

/// returns cached aabb-tree for points of this mesh, creating it if it did not exist in a thread-safe manner
/// Generated from a method of class `MR::Mesh` named `getAABBTreePoints`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AABBTreePoints *MR_Mesh_getAABBTreePoints(const MR_Mesh *_this);

/// returns cached aabb-tree for points of this mesh, but does not create it if it did not exist
/// Generated from a method of class `MR::Mesh` named `getAABBTreePointsNotCreate`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_AABBTreePoints *MR_Mesh_getAABBTreePointsNotCreate(const MR_Mesh *_this);

/// returns cached dipoles of aabb-tree nodes for this mesh, creating it if it did not exist in a thread-safe manner
/// Generated from a method of class `MR::Mesh` named `getDipoles`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Dipoles *MR_Mesh_getDipoles(const MR_Mesh *_this);

/// returns cached dipoles of aabb-tree nodes for this mesh, but does not create it if it did not exist
/// Generated from a method of class `MR::Mesh` named `getDipolesNotCreate`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_Dipoles *MR_Mesh_getDipolesNotCreate(const MR_Mesh *_this);

/// invalidates caches (aabb-trees) after any change in mesh geometry or topology
/// \param pointsChanged specifies whether points have changed (otherwise only topology has changed)
/// Generated from a method of class `MR::Mesh` named `invalidateCaches`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pointsChanged` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_Mesh_invalidateCaches(MR_Mesh *_this, const bool *pointsChanged);

/// updates existing caches in case of few vertices were changed insignificantly,
/// and topology remained unchanged;
/// it shall be considered as a faster alternative to invalidateCaches() and following rebuild of trees
/// Generated from a method of class `MR::Mesh` named `updateCaches`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `changedVerts` can not be null. It is a single object.
MRC_API void MR_Mesh_updateCaches(MR_Mesh *_this, const MR_VertBitSet *changedVerts);

// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::Mesh` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Mesh_heapBytes(const MR_Mesh *_this);

/// requests the removal of unused capacity
/// Generated from a method of class `MR::Mesh` named `shrinkToFit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Mesh_shrinkToFit(MR_Mesh *_this);

/// reflects the mesh from a given plane
/// Generated from a method of class `MR::Mesh` named `mirror`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `plane` can not be null. It is a single object.
MRC_API void MR_Mesh_mirror(MR_Mesh *_this, const MR_Plane3f *plane);

#ifdef __cplusplus
} // extern "C"
#endif
