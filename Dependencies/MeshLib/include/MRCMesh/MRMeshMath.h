// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRBox.h>
#include <MRCMesh/MRId.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>
#include <MRCMisc/std_array_MR_Vector3f_3.h>

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_EdgePoint MR_EdgePoint; // Defined in `#include <MRCMesh/MREdgePoint.h>`.
typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_LineSegm3f MR_LineSegm3f; // Defined in `#include <MRCMesh/MRLineSegm.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_MeshTriPoint MR_MeshTriPoint; // Defined in `#include <MRCMesh/MRMeshTriPoint.h>`.
typedef struct MR_Plane3d MR_Plane3d; // Defined in `#include <MRCMesh/MRPlane3.h>`.
typedef struct MR_Plane3f MR_Plane3f; // Defined in `#include <MRCMesh/MRPlane3.h>`.
typedef struct MR_PointOnFace MR_PointOnFace; // Defined in `#include <MRCMesh/MRPointOnFace.h>`.
typedef struct MR_QuadraticForm3f MR_QuadraticForm3f; // Defined in `#include <MRCMesh/MRQuadraticForm.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_UndirectedEdgeScalars MR_UndirectedEdgeScalars; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_expected_MR_VertBitSet_std_string MR_expected_MR_VertBitSet_std_string; // Defined in `#include <MRCMisc/expected_MR_VertBitSet_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


/// returns coordinates of the edge origin
/// Generated from function `MR::orgPnt`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API MR_Vector3f MR_orgPnt(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_EdgeId e);

/// returns coordinates of the edge destination
/// Generated from function `MR::destPnt`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API MR_Vector3f MR_destPnt(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_EdgeId e);

/// returns vector equal to edge destination point minus edge origin point
/// Generated from function `MR::edgeVector`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API MR_Vector3f MR_edgeVector(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_EdgeId e);

/// returns line segment of given edge
/// Generated from function `MR::edgeSegment`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LineSegm3f_Destroy()` to free it when you're done using it.
MRC_API MR_LineSegm3f *MR_edgeSegment(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_EdgeId e);

/// returns a point on the edge: origin point for f=0 and destination point for f=1
/// Generated from function `MR::edgePoint`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API MR_Vector3f MR_edgePoint_4(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_EdgeId e, float f);

/// computes coordinates of point given as edge and relative position on it
/// Generated from function `MR::edgePoint`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `ep` can not be null. It is a single object.
MRC_API MR_Vector3f MR_edgePoint_3(const MR_MeshTopology *topology, const MR_VertCoords *points, const MR_EdgePoint *ep);

/// computes the center of given edge
/// Generated from function `MR::edgeCenter`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API MR_Vector3f MR_edgeCenter(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_UndirectedEdgeId e);

/// returns three points of left face of e: v0 = orgPnt( e ), v1 = destPnt( e )
/// Generated from function `MR::getLeftTriPoints`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `v0` can not be null. It is a single object.
/// Parameter `v1` can not be null. It is a single object.
/// Parameter `v2` can not be null. It is a single object.
MRC_API void MR_getLeftTriPoints_6(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_EdgeId e, MR_Vector3f *v0, MR_Vector3f *v1, MR_Vector3f *v2);

/// returns three points of left face of e: res[0] = orgPnt( e ), res[1] = destPnt( e )
/// Generated from function `MR::getLeftTriPoints`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API MR_std_array_MR_Vector3f_3 MR_getLeftTriPoints_3(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_EdgeId e);

/// returns three points of given face
/// Generated from function `MR::getTriPoints`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `v0` can not be null. It is a single object.
/// Parameter `v1` can not be null. It is a single object.
/// Parameter `v2` can not be null. It is a single object.
MRC_API void MR_getTriPoints_6(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_FaceId f, MR_Vector3f *v0, MR_Vector3f *v1, MR_Vector3f *v2);

/// returns three points of given face
/// Generated from function `MR::getTriPoints`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API MR_std_array_MR_Vector3f_3 MR_getTriPoints_3(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_FaceId f);

/// computes coordinates of point given as face and barycentric representation
/// Generated from function `MR::triPoint`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
MRC_API MR_Vector3f MR_triPoint(const MR_MeshTopology *topology, const MR_VertCoords *points, const MR_MeshTriPoint *p);

/// returns the centroid of given triangle
/// Generated from function `MR::triCenter`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API MR_Vector3f MR_triCenter(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_FaceId f);

/// returns aspect ratio of given mesh triangle equal to the ratio of the circum-radius to twice its in-radius
/// Generated from function `MR::triangleAspectRatio`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API float MR_triangleAspectRatio(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_FaceId f);

/// returns squared circumcircle diameter of given mesh triangle
/// Generated from function `MR::circumcircleDiameterSq`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API float MR_circumcircleDiameterSq(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_FaceId f);

/// returns circumcircle diameter of given mesh triangle
/// Generated from function `MR::circumcircleDiameter`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API float MR_circumcircleDiameter(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_FaceId f);

/// converts face id and 3d point into barycentric representation
/// Generated from function `MR::toTriPoint`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTriPoint_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTriPoint *MR_toTriPoint_4(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_FaceId f, const MR_Vector3f *p);

/// converts face id and 3d point into barycentric representation
/// Generated from function `MR::toTriPoint`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTriPoint_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTriPoint *MR_toTriPoint_3(const MR_MeshTopology *topology, const MR_VertCoords *points, const MR_PointOnFace *p);

/// converts edge and 3d point into edge-point representation
/// Generated from function `MR::toEdgePoint`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePoint *MR_toEdgePoint(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_EdgeId e, const MR_Vector3f *p);

/// returns one of three face vertices, closest to given point
/// Generated from function `MR::getClosestVertex`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
MRC_API MR_VertId MR_getClosestVertex_MR_PointOnFace(const MR_MeshTopology *topology, const MR_VertCoords *points, const MR_PointOnFace *p);

/// returns one of three face vertices, closest to given point
/// Generated from function `MR::getClosestVertex`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
MRC_API MR_VertId MR_getClosestVertex_MR_MeshTriPoint(const MR_MeshTopology *topology, const MR_VertCoords *points, const MR_MeshTriPoint *p);

/// returns one of three face edges, closest to given point
/// Generated from function `MR::getClosestEdge`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_getClosestEdge_MR_PointOnFace(const MR_MeshTopology *topology, const MR_VertCoords *points, const MR_PointOnFace *p);

/// returns one of three face edges, closest to given point
/// Generated from function `MR::getClosestEdge`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_getClosestEdge_MR_MeshTriPoint(const MR_MeshTopology *topology, const MR_VertCoords *points, const MR_MeshTriPoint *p);

/// returns Euclidean length of the edge
/// Generated from function `MR::edgeLength`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API float MR_edgeLength(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_UndirectedEdgeId e);

/// computes and returns the lengths of all edges in the mesh
/// Generated from function `MR::edgeLengths`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeScalars_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeScalars *MR_edgeLengths(const MR_MeshTopology *topology, const MR_VertCoords *points);

/// returns squared Euclidean length of the edge (faster to compute than length)
/// Generated from function `MR::edgeLengthSq`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API float MR_edgeLengthSq(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_UndirectedEdgeId e);

/// computes directed double area of left triangular face of given edge
/// Generated from function `MR::leftDirDblArea`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API MR_Vector3f MR_leftDirDblArea(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_EdgeId e);

/// computes directed double area for a triangular face from its vertices
/// Generated from function `MR::dirDblArea`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API MR_Vector3f MR_dirDblArea_MR_FaceId(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_FaceId f);

/// computes and returns the directed double area for every (region) vertex in the mesh
/// Generated from function `MR::dirDblAreas`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertCoords_Destroy()` to free it when you're done using it.
MRC_API MR_VertCoords *MR_dirDblAreas(const MR_MeshTopology *topology, const MR_VertCoords *points, const MR_VertBitSet *region);

/// returns twice the area of given face
/// Generated from function `MR::dblArea`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API float MR_dblArea_MR_FaceId(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_FaceId f);

/// returns the area of given face
/// Generated from function `MR::area`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API float MR_area_MR_FaceId(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_FaceId f);

/// computes the area of given face-region
/// Generated from function `MR::area`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `fs` can not be null. It is a single object.
MRC_API double MR_area_MR_FaceBitSet(const MR_MeshTopology *topology, const MR_VertCoords *points, const MR_FaceBitSet *fs);

/// computes the area of given face-region (or whole mesh)
/// Generated from function `MR::area`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `fs` defaults to a null pointer in C++.
MRC_API double MR_area_const_MR_FaceBitSet_ptr(const MR_MeshTopology *topology, const MR_VertCoords *points, const MR_FaceBitSet *fs);

/// computes the sum of directed areas for faces from given region
/// Generated from function `MR::dirArea`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `fs` can not be null. It is a single object.
MRC_API MR_Vector3d MR_dirArea_MR_FaceBitSet(const MR_MeshTopology *topology, const MR_VertCoords *points, const MR_FaceBitSet *fs);

/// computes the sum of directed areas for faces from given region (or whole mesh)
/// Generated from function `MR::dirArea`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `fs` defaults to a null pointer in C++.
MRC_API MR_Vector3d MR_dirArea_const_MR_FaceBitSet_ptr(const MR_MeshTopology *topology, const MR_VertCoords *points, const MR_FaceBitSet *fs);

/// computes the sum of absolute projected area of faces from given region as visible if look from given direction
/// Generated from function `MR::projArea`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `dir` can not be null. It is a single object.
/// Parameter `fs` can not be null. It is a single object.
MRC_API double MR_projArea_MR_FaceBitSet(const MR_MeshTopology *topology, const MR_VertCoords *points, const MR_Vector3f *dir, const MR_FaceBitSet *fs);

/// computes the sum of absolute projected area of faces from given region (or whole mesh) as visible if look from given direction
/// Generated from function `MR::projArea`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `dir` can not be null. It is a single object.
/// Parameter `fs` defaults to a null pointer in C++.
MRC_API double MR_projArea_const_MR_FaceBitSet_ptr(const MR_MeshTopology *topology, const MR_VertCoords *points, const MR_Vector3f *dir, const MR_FaceBitSet *fs);

/// returns volume of the object surrounded by given region (or whole mesh if (region) is nullptr);
/// if the region has holes then each hole will be virtually filled by adding triangles for each edge and the hole's geometrical center
/// Generated from function `MR::volume`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API double MR_volume(const MR_MeshTopology *topology, const MR_VertCoords *points, const MR_FaceBitSet *region);

/// computes the perimeter of the hole specified by one of its edges with no valid left face (left is hole)
/// Generated from function `MR::holePerimiter`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API double MR_holePerimiter(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_EdgeId e);

/// computes directed area of the hole specified by one of its edges with no valid left face (left is hole);
/// if the hole is planar then returned vector is orthogonal to the plane pointing outside and its magnitude is equal to hole area
/// Generated from function `MR::holeDirArea`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API MR_Vector3d MR_holeDirArea(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_EdgeId e);

/// computes unit vector that is both orthogonal to given edge and to the normal of its left triangle, the vector is directed inside left triangle
/// Generated from function `MR::leftTangent`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API MR_Vector3f MR_leftTangent(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_EdgeId e);

/// computes triangular face normal from its vertices
/// Generated from function `MR::leftNormal`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API MR_Vector3f MR_leftNormal(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_EdgeId e);

/// computes triangular face normal from its vertices
/// Generated from function `MR::normal`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API MR_Vector3f MR_normal_MR_FaceId(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_FaceId f);

/// returns the plane containing given triangular face with normal looking outwards
/// Generated from function `MR::getPlane3f`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Plane3f_Destroy()` to free it when you're done using it.
MRC_API MR_Plane3f *MR_getPlane3f(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_FaceId f);

/// Generated from function `MR::getPlane3d`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Plane3d_Destroy()` to free it when you're done using it.
MRC_API MR_Plane3d *MR_getPlane3d(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_FaceId f);

/// computes sum of directed double areas of all triangles around given vertex
/// Generated from function `MR::dirDblArea`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API MR_Vector3f MR_dirDblArea_MR_VertId(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_VertId v);

/// computes the length of summed directed double areas of all triangles around given vertex
/// Generated from function `MR::dblArea`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API float MR_dblArea_MR_VertId(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_VertId v);

/// computes normal in a vertex using sum of directed areas of neighboring triangles
/// Generated from function `MR::normal`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API MR_Vector3f MR_normal_MR_VertId(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_VertId v);

/// computes normal in three vertices of p's triangle, then interpolates them using barycentric coordinates and normalizes again;
/// this is the same normal as in rendering with smooth shading
/// Generated from function `MR::normal`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
MRC_API MR_Vector3f MR_normal_MR_MeshTriPoint(const MR_MeshTopology *topology, const MR_VertCoords *points, const MR_MeshTriPoint *p);

/// computes angle-weighted sum of normals of incident faces of given vertex (only (region) faces will be considered);
/// the sum is normalized before returning
/// Generated from function `MR::pseudonormal`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API MR_Vector3f MR_pseudonormal_MR_VertId(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_VertId v, const MR_FaceBitSet *region);

/// computes normalized half sum of face normals sharing given edge (only (region) faces will be considered);
/// Generated from function `MR::pseudonormal`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API MR_Vector3f MR_pseudonormal_MR_UndirectedEdgeId(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_UndirectedEdgeId e, const MR_FaceBitSet *region);

/// returns pseudonormal in corresponding face/edge/vertex for signed distance calculation
/// as suggested in the article "Signed Distance Computation Using the Angle Weighted Pseudonormal" by J. Andreas Baerentzen and Henrik Aanaes,
/// https://backend.orbit.dtu.dk/ws/portalfiles/portal/3977815/B_rentzen.pdf
/// unlike normal( const MeshTriPoint & p ), this is not a smooth function
/// Generated from function `MR::pseudonormal`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API MR_Vector3f MR_pseudonormal_MR_MeshTriPoint(const MR_MeshTopology *topology, const MR_VertCoords *points, const MR_MeshTriPoint *p, const MR_FaceBitSet *region);

/// computes the sum of triangle angles at given vertex; optionally returns whether the vertex is on boundary
/// Generated from function `MR::sumAngles`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `outBoundaryVert` defaults to a null pointer in C++.
MRC_API float MR_sumAngles(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_VertId v, bool *outBoundaryVert);

/// returns vertices where the sum of triangle angles is below given threshold
/// Generated from function `MR::findSpikeVertices`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VertBitSet_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VertBitSet_std_string *MR_findSpikeVertices(const MR_MeshTopology *topology, const MR_VertCoords *points, float minSumAngle, const MR_VertBitSet *region, const MR_std_function_bool_from_float *cb);

/// given an edge between two triangular faces, computes sine of dihedral angle between them:
/// 0 if both faces are in the same plane,
/// positive if the faces form convex surface,
/// negative if the faces form concave surface
/// Generated from function `MR::dihedralAngleSin`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API float MR_dihedralAngleSin(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_UndirectedEdgeId e);

/// given an edge between two triangular faces, computes cosine of dihedral angle between them:
/// 1 if both faces are in the same plane,
/// 0 if the surface makes right angle turn at the edge,
/// -1 if the faces overlap one another
/// Generated from function `MR::dihedralAngleCos`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API float MR_dihedralAngleCos(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_UndirectedEdgeId e);

/// given an edge between two triangular faces, computes the dihedral angle between them:
/// 0 if both faces are in the same plane,
/// positive if the faces form convex surface,
/// negative if the faces form concave surface;
/// please consider the usage of faster dihedralAngleSin(e) and dihedralAngleCos(e)
/// Generated from function `MR::dihedralAngle`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API float MR_dihedralAngle(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_UndirectedEdgeId e);

/// computes discrete mean curvature in given vertex, measures in length^-1;
/// 0 for planar regions, positive for convex surface, negative for concave surface
/// Generated from function `MR::discreteMeanCurvature`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API float MR_discreteMeanCurvature_MR_VertId(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_VertId v);

/// computes discrete mean curvature in given edge, measures in length^-1;
/// 0 for planar regions, positive for convex surface, negative for concave surface
/// Generated from function `MR::discreteMeanCurvature`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API float MR_discreteMeanCurvature_MR_UndirectedEdgeId(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_UndirectedEdgeId e);

/// computes discrete Gaussian curvature (or angle defect) at given vertex,
/// which 0 in inner vertices on planar mesh parts and reaches 2*pi on needle's tip, see http://math.uchicago.edu/~may/REU2015/REUPapers/Upadhyay.pdf
/// optionally returns whether the vertex is on boundary
/// Generated from function `MR::discreteGaussianCurvature`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `outBoundaryVert` defaults to a null pointer in C++.
MRC_API float MR_discreteGaussianCurvature(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_VertId v, bool *outBoundaryVert);

/// finds all mesh edges where dihedral angle is distinct from planar PI angle on at least given value
/// Generated from function `MR::findCreaseEdges`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_findCreaseEdges(const MR_MeshTopology *topology, const MR_VertCoords *points, float angleFromPlanar);

/// computes cotangent of the angle in the left( e ) triangle opposite to e,
/// and returns 0 if left face does not exist
/// Generated from function `MR::leftCotan`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API float MR_leftCotan(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_EdgeId e);

/// computes sum of cotangents of the angle in the left and right triangles opposite to given edge,
/// consider cotangents zero for not existing triangles
/// Generated from function `MR::cotan`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API float MR_cotan(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_UndirectedEdgeId ue);

/// computes quadratic form in the vertex as the sum of squared distances from
/// 1) planes of adjacent triangles, with the weight equal to the angle of adjacent triangle at this vertex divided on PI in case of angleWeigted=true;
/// 2) lines of adjacent boundary and crease edges
/// Generated from function `MR::quadraticForm`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `creases` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_QuadraticForm3f_Destroy()` to free it when you're done using it.
MRC_API MR_QuadraticForm3f *MR_quadraticForm(const MR_MeshTopology *topology, const MR_VertCoords *points, MR_VertId v, bool angleWeigted, const MR_FaceBitSet *region, const MR_UndirectedEdgeBitSet *creases);

/// passes through all given faces (or whole mesh if region == null) and finds the minimal bounding box containing all of them
/// if toWorld transformation is given then returns minimal bounding box in world space
/// Generated from function `MR::computeBoundingBox`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `toWorld` defaults to a null pointer in C++.
MRC_API MR_Box3f MR_computeBoundingBox(const MR_MeshTopology *topology, const MR_VertCoords *points, const MR_FaceBitSet *region, const MR_AffineXf3f *toWorld);

/// computes average length of an edge in the mesh given by (topology, points)
/// Generated from function `MR::averageEdgeLength`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API float MR_averageEdgeLength(const MR_MeshTopology *topology, const MR_VertCoords *points);

/// computes average position of all valid mesh vertices
/// Generated from function `MR::findCenterFromPoints`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API MR_Vector3f MR_findCenterFromPoints(const MR_MeshTopology *topology, const MR_VertCoords *points);

/// computes center of mass considering that density of all triangles is the same
/// Generated from function `MR::findCenterFromFaces`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API MR_Vector3f MR_findCenterFromFaces(const MR_MeshTopology *topology, const MR_VertCoords *points);

/// computes bounding box and returns its center
/// Generated from function `MR::findCenterFromBBox`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API MR_Vector3f MR_findCenterFromBBox(const MR_MeshTopology *topology, const MR_VertCoords *points);

#ifdef __cplusplus
} // extern "C"
#endif
