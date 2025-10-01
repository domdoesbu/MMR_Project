// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRBox.h>
#include <MRCMesh/MRId.h>
#include <MRCMesh/MRVector2.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AABBTreePolyline2 MR_AABBTreePolyline2; // Defined in `#include <MRCMesh/MRAABBTreePolyline.h>`.
typedef struct MR_AABBTreePolyline3 MR_AABBTreePolyline3; // Defined in `#include <MRCMesh/MRAABBTreePolyline.h>`.
typedef struct MR_AffineXf2f MR_AffineXf2f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_EdgeMap MR_EdgeMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_EdgePoint MR_EdgePoint; // Defined in `#include <MRCMesh/MREdgePoint.h>`.
typedef struct MR_LineSegm2f MR_LineSegm2f; // Defined in `#include <MRCMesh/MRLineSegm.h>`.
typedef struct MR_LineSegm3f MR_LineSegm3f; // Defined in `#include <MRCMesh/MRLineSegm.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshTriPoint MR_MeshTriPoint; // Defined in `#include <MRCMesh/MRMeshTriPoint.h>`.
typedef struct MR_Plane3f MR_Plane3f; // Defined in `#include <MRCMesh/MRPlane3.h>`.
typedef struct MR_PolylineTopology MR_PolylineTopology; // Defined in `#include <MRCMesh/MRPolylineTopology.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertCoords2 MR_VertCoords2; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertMap MR_VertMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_WholeEdgeMap MR_WholeEdgeMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_vector_MR_EdgeId MR_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_MR_EdgeId.h>`.
typedef struct MR_std_vector_MR_EdgePoint MR_std_vector_MR_EdgePoint; // Defined in `#include <MRCMisc/std_vector_MR_EdgePoint.h>`.
typedef struct MR_std_vector_MR_Vector2f MR_std_vector_MR_Vector2f; // Defined in `#include <MRCMisc/std_vector_MR_Vector2f.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.
typedef struct MR_std_vector_MR_VertId MR_std_vector_MR_VertId; // Defined in `#include <MRCMisc/std_vector_MR_VertId.h>`.
typedef struct MR_std_vector_std_vector_MR_Vector2f MR_std_vector_std_vector_MR_Vector2f; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_Vector2f.h>`.
typedef struct MR_std_vector_std_vector_MR_Vector3f MR_std_vector_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_Vector3f.h>`.
typedef struct MR_std_vector_std_vector_MR_VertId MR_std_vector_std_vector_MR_VertId; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_VertId.h>`.


/// polyline that stores points of type V
/// Generated from class `MR::Polyline2`.
typedef struct MR_Polyline2 MR_Polyline2;

/// polyline that stores points of type V
/// Generated from class `MR::Polyline3`.
typedef struct MR_Polyline3 MR_Polyline3;

/// Returns a pointer to a member variable of class `MR::Polyline2` named `topology`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PolylineTopology *MR_Polyline2_Get_topology(const MR_Polyline2 *_this);

/// Modifies a member variable of class `MR::Polyline2` named `topology`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Polyline2_Set_topology(MR_Polyline2 *_this, MR_PassBy value_pass_by, MR_PolylineTopology *value);

/// Returns a mutable pointer to a member variable of class `MR::Polyline2` named `topology`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PolylineTopology *MR_Polyline2_GetMutable_topology(MR_Polyline2 *_this);

/// Returns a pointer to a member variable of class `MR::Polyline2` named `points`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords2 *MR_Polyline2_Get_points(const MR_Polyline2 *_this);

/// Modifies a member variable of class `MR::Polyline2` named `points`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Polyline2_Set_points(MR_Polyline2 *_this, MR_PassBy value_pass_by, MR_VertCoords2 *value);

/// Returns a mutable pointer to a member variable of class `MR::Polyline2` named `points`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertCoords2 *MR_Polyline2_GetMutable_points(MR_Polyline2 *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polyline2_Destroy()` to free it when you're done using it.
MRC_API MR_Polyline2 *MR_Polyline2_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Polyline2_DestroyArray()`.
/// Use `MR_Polyline2_OffsetMutablePtr()` and `MR_Polyline2_OffsetPtr()` to access the array elements.
MRC_API MR_Polyline2 *MR_Polyline2_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Polyline2 *MR_Polyline2_OffsetPtr(const MR_Polyline2 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Polyline2 *MR_Polyline2_OffsetMutablePtr(MR_Polyline2 *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Polyline2`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polyline2_Destroy()` to free it when you're done using it.
MRC_API MR_Polyline2 *MR_Polyline2_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Polyline2 *_other);

/// creates polyline from one contour (open or closed)
/// Generated from a constructor of class `MR::Polyline2`.
/// Parameter `contour` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polyline2_Destroy()` to free it when you're done using it.
MRC_API MR_Polyline2 *MR_Polyline2_Construct_1_std_vector_MR_Vector2f(const MR_std_vector_MR_Vector2f *contour);

/// creates polyline from several contours (each can be open or closed)
/// Generated from a constructor of class `MR::Polyline2`.
/// Parameter `contours` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polyline2_Destroy()` to free it when you're done using it.
MRC_API MR_Polyline2 *MR_Polyline2_Construct_1_std_vector_std_vector_MR_Vector2f(const MR_std_vector_std_vector_MR_Vector2f *contours);

/// creates comp2firstVert.size()-1 not-closed polylines
/// each pair (a,b) of indices in \param comp2firstVert defines vertex range of a polyline [a,b)
/// \param ps point coordinates
/// Generated from a constructor of class `MR::Polyline2`.
/// Parameter `comp2firstVert` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polyline2_Destroy()` to free it when you're done using it.
MRC_API MR_Polyline2 *MR_Polyline2_Construct_2(const MR_std_vector_MR_VertId *comp2firstVert, MR_PassBy ps_pass_by, MR_VertCoords2 *ps);

/// Destroys a heap-allocated instance of `MR_Polyline2`. Does nothing if the pointer is null.
MRC_API void MR_Polyline2_Destroy(const MR_Polyline2 *_this);

/// Destroys a heap-allocated array of `MR_Polyline2`. Does nothing if the pointer is null.
MRC_API void MR_Polyline2_DestroyArray(const MR_Polyline2 *_this);

/// Generated from a method of class `MR::Polyline2` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Polyline2 *MR_Polyline2_AssignFromAnother(MR_Polyline2 *_this, MR_PassBy _other_pass_by, MR_Polyline2 *_other);

/// adds connected line in this, passing progressively via points *[vs, vs+num)
/// \details if closed argument is true then the last and the first points will be additionally connected
/// \return the edge from first new to second new vertex    
/// Generated from a method of class `MR::Polyline2` named `addFromPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_Polyline2_addFromPoints_3(MR_Polyline2 *_this, const MR_Vector2f *vs, MR_uint64_t num, bool closed);

/// adds connected line in this, passing progressively via points *[vs, vs+num)
/// \details if num > 2 && vs[0] == vs[num-1] then a closed line is created
/// \return the edge from first new to second new vertex
/// Generated from a method of class `MR::Polyline2` named `addFromPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_Polyline2_addFromPoints_2(MR_Polyline2 *_this, const MR_Vector2f *vs, MR_uint64_t num);

/// appends polyline (from) in addition to this polyline: creates new edges, verts and points;
/// \param outVmap,outEmap (optionally) returns mappings: from.id -> this.id
/// Generated from a method of class `MR::Polyline2` named `addPart`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `outVmap` defaults to a null pointer in C++.
/// Parameter `outEmap` defaults to a null pointer in C++.
MRC_API void MR_Polyline2_addPart(MR_Polyline2 *_this, const MR_Polyline2 *from, MR_VertMap *outVmap, MR_WholeEdgeMap *outEmap);

/// appends polyline (from) in addition to this polyline: creates new edges, verts and points
/// Generated from a method of class `MR::Polyline2` named `addPartByMask`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `mask` can not be null. It is a single object.
/// Parameter `outVmap` defaults to a null pointer in C++.
/// Parameter `outEmap` defaults to a null pointer in C++.
MRC_API void MR_Polyline2_addPartByMask(MR_Polyline2 *_this, const MR_Polyline2 *from, const MR_UndirectedEdgeBitSet *mask, MR_VertMap *outVmap, MR_EdgeMap *outEmap);

/// tightly packs all arrays eliminating lone edges and invalid verts and points,
/// optionally returns mappings: old.id -> new.id
/// Generated from a method of class `MR::Polyline2` named `pack`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `outVmap` defaults to a null pointer in C++.
/// Parameter `outEmap` defaults to a null pointer in C++.
MRC_API void MR_Polyline2_pack(MR_Polyline2 *_this, MR_VertMap *outVmap, MR_WholeEdgeMap *outEmap);

/// returns coordinates of the edge origin
/// Generated from a method of class `MR::Polyline2` named `orgPnt`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2f MR_Polyline2_orgPnt(const MR_Polyline2 *_this, MR_EdgeId e);

/// returns coordinates of the edge destination
/// Generated from a method of class `MR::Polyline2` named `destPnt`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2f MR_Polyline2_destPnt(const MR_Polyline2 *_this, MR_EdgeId e);

/// returns a point on the edge: origin point for f=0 and destination point for f=1
/// Generated from a method of class `MR::Polyline2` named `edgePoint`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2f MR_Polyline2_edgePoint_2(const MR_Polyline2 *_this, MR_EdgeId e, float f);

/// computes coordinates of point given as edge and relative position on it
/// Generated from a method of class `MR::Polyline2` named `edgePoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `ep` can not be null. It is a single object.
MRC_API MR_Vector2f MR_Polyline2_edgePoint_1(const MR_Polyline2 *_this, const MR_EdgePoint *ep);

/// returns edge's centroid
/// Generated from a method of class `MR::Polyline2` named `edgeCenter`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2f MR_Polyline2_edgeCenter(const MR_Polyline2 *_this, MR_EdgeId e);

/// returns vector equal to edge destination point minus edge origin point
/// Generated from a method of class `MR::Polyline2` named `edgeVector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2f MR_Polyline2_edgeVector(const MR_Polyline2 *_this, MR_EdgeId e);

/// returns line segment of given edge
/// Generated from a method of class `MR::Polyline2` named `edgeSegment`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LineSegm2f_Destroy()` to free it when you're done using it.
MRC_API MR_LineSegm2f *MR_Polyline2_edgeSegment(const MR_Polyline2 *_this, MR_EdgeId e);

/// converts vertex into edge-point representation
/// Generated from a method of class `MR::Polyline2` named `toEdgePoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePoint *MR_Polyline2_toEdgePoint_1(const MR_Polyline2 *_this, MR_VertId v);

/// converts edge and point's coordinates into edge-point representation
/// Generated from a method of class `MR::Polyline2` named `toEdgePoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePoint *MR_Polyline2_toEdgePoint_2(const MR_Polyline2 *_this, MR_EdgeId e, const MR_Vector2f *p);

/// returns Euclidean length of the edge
/// Generated from a method of class `MR::Polyline2` named `edgeLength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Polyline2_edgeLength(const MR_Polyline2 *_this, MR_EdgeId e);

/// returns squared Euclidean length of the edge (faster to compute than length)
/// Generated from a method of class `MR::Polyline2` named `edgeLengthSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Polyline2_edgeLengthSq(const MR_Polyline2 *_this, MR_EdgeId e);

/// calculates directed loop area if iterating in `e` direction
/// .z = FLT_MAX if `e` does not represent a loop
/// Generated from a method of class `MR::Polyline2` named `loopDirArea`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Polyline2_loopDirArea(const MR_Polyline2 *_this, MR_EdgeId e);

/// returns total length of the polyline
/// Generated from a method of class `MR::Polyline2` named `totalLength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Polyline2_totalLength(const MR_Polyline2 *_this);

/// returns average edge length in the polyline
/// Generated from a method of class `MR::Polyline2` named `averageEdgeLength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Polyline2_averageEdgeLength(const MR_Polyline2 *_this);

/// returns cached aabb-tree for this polyline, creating it if it did not exist in a thread-safe manner
/// Generated from a method of class `MR::Polyline2` named `getAABBTree`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AABBTreePolyline2 *MR_Polyline2_getAABBTree(const MR_Polyline2 *_this);

/// returns cached aabb-tree for this polyline, but does not create it if it did not exist
/// Generated from a method of class `MR::Polyline2` named `getAABBTreeNotCreate`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_AABBTreePolyline2 *MR_Polyline2_getAABBTreeNotCreate(const MR_Polyline2 *_this);

/// returns the minimal bounding box containing all valid vertices (implemented via getAABBTree())
/// Generated from a method of class `MR::Polyline2` named `getBoundingBox`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Box2f MR_Polyline2_getBoundingBox(const MR_Polyline2 *_this);

/// passes through all valid points and finds the minimal bounding box containing all of them
/// \details if toWorld transformation is given then returns minimal bounding box in world space
/// Generated from a method of class `MR::Polyline2` named `computeBoundingBox`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `toWorld` defaults to a null pointer in C++.
MRC_API MR_Box2f MR_Polyline2_computeBoundingBox(const MR_Polyline2 *_this, const MR_AffineXf2f *toWorld);

// computes average position of all valid polyline vertices
/// Generated from a method of class `MR::Polyline2` named `findCenterFromPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2f MR_Polyline2_findCenterFromPoints(const MR_Polyline2 *_this);

/// applies given transformation to all valid polyline vertices
/// Generated from a method of class `MR::Polyline2` named `transform`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `xf` can not be null. It is a single object.
MRC_API void MR_Polyline2_transform(MR_Polyline2 *_this, const MR_AffineXf2f *xf);

/// split given edge on two parts:
/// dest(returned-edge) = org(e) - newly created vertex,
/// org(returned-edge) = org(e-before-split),
/// dest(e) = dest(e-before-split)
/// Generated from a method of class `MR::Polyline2` named `splitEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `newVertPos` can not be null. It is a single object.
MRC_API MR_EdgeId MR_Polyline2_splitEdge_2(MR_Polyline2 *_this, MR_EdgeId e, const MR_Vector2f *newVertPos);

// same, but split given edge on two equal parts
/// Generated from a method of class `MR::Polyline2` named `splitEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_Polyline2_splitEdge_1(MR_Polyline2 *_this, MR_EdgeId e);

/// Invalidates caches (e.g. aabb-tree) after a change in polyline
/// Generated from a method of class `MR::Polyline2` named `invalidateCaches`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Polyline2_invalidateCaches(MR_Polyline2 *_this);

/// convert Polyline to simple contour structures with vector of points inside
/// \details if all even edges are consistently oriented, then the output contours will be oriented the same
/// \param vertMap optional output map for for each contour point to corresponding VertId
/// Generated from a method of class `MR::Polyline2` named `contours`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `vertMap` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector2f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector2f *MR_Polyline2_contours(const MR_Polyline2 *_this, MR_std_vector_std_vector_MR_VertId *vertMap);

/// adds path to this polyline
/// \return the edge from first new to second new vertex
/// Generated from a method of class `MR::Polyline2` named `addFromEdgePath`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `path` can not be null. It is a single object.
MRC_API MR_EdgeId MR_Polyline2_addFromEdgePath(MR_Polyline2 *_this, const MR_Mesh *mesh, const MR_std_vector_MR_EdgeId *path);

/// adds path to this polyline
/// \return the edge from first new to second new vertex
/// Generated from a method of class `MR::Polyline2` named `addFromSurfacePath`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `path` can not be null. It is a single object.
MRC_API MR_EdgeId MR_Polyline2_addFromSurfacePath(MR_Polyline2 *_this, const MR_Mesh *mesh, const MR_std_vector_MR_EdgePoint *path);

/// adds general path = start-path-end (where both start and end are optional) to this polyline
/// \return the edge from first new to second new vertex
/// Generated from a method of class `MR::Polyline2` named `addFromGeneralSurfacePath`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `start` can not be null. It is a single object.
/// Parameter `path` can not be null. It is a single object.
/// Parameter `end` can not be null. It is a single object.
MRC_API MR_EdgeId MR_Polyline2_addFromGeneralSurfacePath(MR_Polyline2 *_this, const MR_Mesh *mesh, const MR_MeshTriPoint *start, const MR_std_vector_MR_EdgePoint *path, const MR_MeshTriPoint *end);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::Polyline2` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Polyline2_heapBytes(const MR_Polyline2 *_this);

/// Returns a pointer to a member variable of class `MR::Polyline3` named `topology`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PolylineTopology *MR_Polyline3_Get_topology(const MR_Polyline3 *_this);

/// Modifies a member variable of class `MR::Polyline3` named `topology`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Polyline3_Set_topology(MR_Polyline3 *_this, MR_PassBy value_pass_by, MR_PolylineTopology *value);

/// Returns a mutable pointer to a member variable of class `MR::Polyline3` named `topology`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PolylineTopology *MR_Polyline3_GetMutable_topology(MR_Polyline3 *_this);

/// Returns a pointer to a member variable of class `MR::Polyline3` named `points`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords *MR_Polyline3_Get_points(const MR_Polyline3 *_this);

/// Modifies a member variable of class `MR::Polyline3` named `points`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Polyline3_Set_points(MR_Polyline3 *_this, MR_PassBy value_pass_by, MR_VertCoords *value);

/// Returns a mutable pointer to a member variable of class `MR::Polyline3` named `points`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertCoords *MR_Polyline3_GetMutable_points(MR_Polyline3 *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polyline3_Destroy()` to free it when you're done using it.
MRC_API MR_Polyline3 *MR_Polyline3_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Polyline3_DestroyArray()`.
/// Use `MR_Polyline3_OffsetMutablePtr()` and `MR_Polyline3_OffsetPtr()` to access the array elements.
MRC_API MR_Polyline3 *MR_Polyline3_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Polyline3 *MR_Polyline3_OffsetPtr(const MR_Polyline3 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Polyline3 *MR_Polyline3_OffsetMutablePtr(MR_Polyline3 *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Polyline3`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polyline3_Destroy()` to free it when you're done using it.
MRC_API MR_Polyline3 *MR_Polyline3_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Polyline3 *_other);

/// creates polyline from one contour (open or closed)
/// Generated from a constructor of class `MR::Polyline3`.
/// Parameter `contour` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polyline3_Destroy()` to free it when you're done using it.
MRC_API MR_Polyline3 *MR_Polyline3_Construct_1_std_vector_MR_Vector3f(const MR_std_vector_MR_Vector3f *contour);

/// creates polyline from several contours (each can be open or closed)
/// Generated from a constructor of class `MR::Polyline3`.
/// Parameter `contours` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polyline3_Destroy()` to free it when you're done using it.
MRC_API MR_Polyline3 *MR_Polyline3_Construct_1_std_vector_std_vector_MR_Vector3f(const MR_std_vector_std_vector_MR_Vector3f *contours);

/// creates comp2firstVert.size()-1 not-closed polylines
/// each pair (a,b) of indices in \param comp2firstVert defines vertex range of a polyline [a,b)
/// \param ps point coordinates
/// Generated from a constructor of class `MR::Polyline3`.
/// Parameter `comp2firstVert` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polyline3_Destroy()` to free it when you're done using it.
MRC_API MR_Polyline3 *MR_Polyline3_Construct_2(const MR_std_vector_MR_VertId *comp2firstVert, MR_PassBy ps_pass_by, MR_VertCoords *ps);

/// Destroys a heap-allocated instance of `MR_Polyline3`. Does nothing if the pointer is null.
MRC_API void MR_Polyline3_Destroy(const MR_Polyline3 *_this);

/// Destroys a heap-allocated array of `MR_Polyline3`. Does nothing if the pointer is null.
MRC_API void MR_Polyline3_DestroyArray(const MR_Polyline3 *_this);

/// Generated from a method of class `MR::Polyline3` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Polyline3 *MR_Polyline3_AssignFromAnother(MR_Polyline3 *_this, MR_PassBy _other_pass_by, MR_Polyline3 *_other);

/// adds connected line in this, passing progressively via points *[vs, vs+num)
/// \details if closed argument is true then the last and the first points will be additionally connected
/// \return the edge from first new to second new vertex    
/// Generated from a method of class `MR::Polyline3` named `addFromPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_Polyline3_addFromPoints_3(MR_Polyline3 *_this, const MR_Vector3f *vs, MR_uint64_t num, bool closed);

/// adds connected line in this, passing progressively via points *[vs, vs+num)
/// \details if num > 2 && vs[0] == vs[num-1] then a closed line is created
/// \return the edge from first new to second new vertex
/// Generated from a method of class `MR::Polyline3` named `addFromPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_Polyline3_addFromPoints_2(MR_Polyline3 *_this, const MR_Vector3f *vs, MR_uint64_t num);

/// appends polyline (from) in addition to this polyline: creates new edges, verts and points;
/// \param outVmap,outEmap (optionally) returns mappings: from.id -> this.id
/// Generated from a method of class `MR::Polyline3` named `addPart`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `outVmap` defaults to a null pointer in C++.
/// Parameter `outEmap` defaults to a null pointer in C++.
MRC_API void MR_Polyline3_addPart(MR_Polyline3 *_this, const MR_Polyline3 *from, MR_VertMap *outVmap, MR_WholeEdgeMap *outEmap);

/// appends polyline (from) in addition to this polyline: creates new edges, verts and points
/// Generated from a method of class `MR::Polyline3` named `addPartByMask`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `mask` can not be null. It is a single object.
/// Parameter `outVmap` defaults to a null pointer in C++.
/// Parameter `outEmap` defaults to a null pointer in C++.
MRC_API void MR_Polyline3_addPartByMask(MR_Polyline3 *_this, const MR_Polyline3 *from, const MR_UndirectedEdgeBitSet *mask, MR_VertMap *outVmap, MR_EdgeMap *outEmap);

/// tightly packs all arrays eliminating lone edges and invalid verts and points,
/// optionally returns mappings: old.id -> new.id
/// Generated from a method of class `MR::Polyline3` named `pack`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `outVmap` defaults to a null pointer in C++.
/// Parameter `outEmap` defaults to a null pointer in C++.
MRC_API void MR_Polyline3_pack(MR_Polyline3 *_this, MR_VertMap *outVmap, MR_WholeEdgeMap *outEmap);

/// returns coordinates of the edge origin
/// Generated from a method of class `MR::Polyline3` named `orgPnt`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Polyline3_orgPnt(const MR_Polyline3 *_this, MR_EdgeId e);

/// returns coordinates of the edge destination
/// Generated from a method of class `MR::Polyline3` named `destPnt`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Polyline3_destPnt(const MR_Polyline3 *_this, MR_EdgeId e);

/// returns a point on the edge: origin point for f=0 and destination point for f=1
/// Generated from a method of class `MR::Polyline3` named `edgePoint`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Polyline3_edgePoint_2(const MR_Polyline3 *_this, MR_EdgeId e, float f);

/// computes coordinates of point given as edge and relative position on it
/// Generated from a method of class `MR::Polyline3` named `edgePoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `ep` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Polyline3_edgePoint_1(const MR_Polyline3 *_this, const MR_EdgePoint *ep);

/// returns edge's centroid
/// Generated from a method of class `MR::Polyline3` named `edgeCenter`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Polyline3_edgeCenter(const MR_Polyline3 *_this, MR_EdgeId e);

/// returns vector equal to edge destination point minus edge origin point
/// Generated from a method of class `MR::Polyline3` named `edgeVector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Polyline3_edgeVector(const MR_Polyline3 *_this, MR_EdgeId e);

/// returns line segment of given edge
/// Generated from a method of class `MR::Polyline3` named `edgeSegment`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LineSegm3f_Destroy()` to free it when you're done using it.
MRC_API MR_LineSegm3f *MR_Polyline3_edgeSegment(const MR_Polyline3 *_this, MR_EdgeId e);

/// converts vertex into edge-point representation
/// Generated from a method of class `MR::Polyline3` named `toEdgePoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePoint *MR_Polyline3_toEdgePoint_1(const MR_Polyline3 *_this, MR_VertId v);

/// converts edge and point's coordinates into edge-point representation
/// Generated from a method of class `MR::Polyline3` named `toEdgePoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePoint *MR_Polyline3_toEdgePoint_2(const MR_Polyline3 *_this, MR_EdgeId e, const MR_Vector3f *p);

/// returns Euclidean length of the edge
/// Generated from a method of class `MR::Polyline3` named `edgeLength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Polyline3_edgeLength(const MR_Polyline3 *_this, MR_EdgeId e);

/// returns squared Euclidean length of the edge (faster to compute than length)
/// Generated from a method of class `MR::Polyline3` named `edgeLengthSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Polyline3_edgeLengthSq(const MR_Polyline3 *_this, MR_EdgeId e);

/// calculates directed loop area if iterating in `e` direction
/// .z = FLT_MAX if `e` does not represent a loop
/// Generated from a method of class `MR::Polyline3` named `loopDirArea`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Polyline3_loopDirArea(const MR_Polyline3 *_this, MR_EdgeId e);

/// returns total length of the polyline
/// Generated from a method of class `MR::Polyline3` named `totalLength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Polyline3_totalLength(const MR_Polyline3 *_this);

/// returns average edge length in the polyline
/// Generated from a method of class `MR::Polyline3` named `averageEdgeLength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Polyline3_averageEdgeLength(const MR_Polyline3 *_this);

/// returns cached aabb-tree for this polyline, creating it if it did not exist in a thread-safe manner
/// Generated from a method of class `MR::Polyline3` named `getAABBTree`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AABBTreePolyline3 *MR_Polyline3_getAABBTree(const MR_Polyline3 *_this);

/// returns cached aabb-tree for this polyline, but does not create it if it did not exist
/// Generated from a method of class `MR::Polyline3` named `getAABBTreeNotCreate`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_AABBTreePolyline3 *MR_Polyline3_getAABBTreeNotCreate(const MR_Polyline3 *_this);

/// returns the minimal bounding box containing all valid vertices (implemented via getAABBTree())
/// Generated from a method of class `MR::Polyline3` named `getBoundingBox`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Box3f MR_Polyline3_getBoundingBox(const MR_Polyline3 *_this);

/// passes through all valid points and finds the minimal bounding box containing all of them
/// \details if toWorld transformation is given then returns minimal bounding box in world space
/// Generated from a method of class `MR::Polyline3` named `computeBoundingBox`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `toWorld` defaults to a null pointer in C++.
MRC_API MR_Box3f MR_Polyline3_computeBoundingBox(const MR_Polyline3 *_this, const MR_AffineXf3f *toWorld);

// computes average position of all valid polyline vertices
/// Generated from a method of class `MR::Polyline3` named `findCenterFromPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Polyline3_findCenterFromPoints(const MR_Polyline3 *_this);

/// applies given transformation to all valid polyline vertices
/// Generated from a method of class `MR::Polyline3` named `transform`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `xf` can not be null. It is a single object.
MRC_API void MR_Polyline3_transform(MR_Polyline3 *_this, const MR_AffineXf3f *xf);

/// split given edge on two parts:
/// dest(returned-edge) = org(e) - newly created vertex,
/// org(returned-edge) = org(e-before-split),
/// dest(e) = dest(e-before-split)
/// Generated from a method of class `MR::Polyline3` named `splitEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `newVertPos` can not be null. It is a single object.
MRC_API MR_EdgeId MR_Polyline3_splitEdge_2(MR_Polyline3 *_this, MR_EdgeId e, const MR_Vector3f *newVertPos);

// same, but split given edge on two equal parts
/// Generated from a method of class `MR::Polyline3` named `splitEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_Polyline3_splitEdge_1(MR_Polyline3 *_this, MR_EdgeId e);

/// Invalidates caches (e.g. aabb-tree) after a change in polyline
/// Generated from a method of class `MR::Polyline3` named `invalidateCaches`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Polyline3_invalidateCaches(MR_Polyline3 *_this);

/// convert Polyline to simple contour structures with vector of points inside
/// \details if all even edges are consistently oriented, then the output contours will be oriented the same
/// \param vertMap optional output map for for each contour point to corresponding VertId
/// Generated from a method of class `MR::Polyline3` named `contours`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `vertMap` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector3f *MR_Polyline3_contours(const MR_Polyline3 *_this, MR_std_vector_std_vector_MR_VertId *vertMap);

/// adds path to this polyline
/// \return the edge from first new to second new vertex
/// Generated from a method of class `MR::Polyline3` named `addFromEdgePath`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `path` can not be null. It is a single object.
MRC_API MR_EdgeId MR_Polyline3_addFromEdgePath(MR_Polyline3 *_this, const MR_Mesh *mesh, const MR_std_vector_MR_EdgeId *path);

/// adds path to this polyline
/// \return the edge from first new to second new vertex
/// Generated from a method of class `MR::Polyline3` named `addFromSurfacePath`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `path` can not be null. It is a single object.
MRC_API MR_EdgeId MR_Polyline3_addFromSurfacePath(MR_Polyline3 *_this, const MR_Mesh *mesh, const MR_std_vector_MR_EdgePoint *path);

/// adds general path = start-path-end (where both start and end are optional) to this polyline
/// \return the edge from first new to second new vertex
/// Generated from a method of class `MR::Polyline3` named `addFromGeneralSurfacePath`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `start` can not be null. It is a single object.
/// Parameter `path` can not be null. It is a single object.
/// Parameter `end` can not be null. It is a single object.
MRC_API MR_EdgeId MR_Polyline3_addFromGeneralSurfacePath(MR_Polyline3 *_this, const MR_Mesh *mesh, const MR_MeshTriPoint *start, const MR_std_vector_MR_EdgePoint *path, const MR_MeshTriPoint *end);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::Polyline3` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Polyline3_heapBytes(const MR_Polyline3 *_this);

/// reflects the polyline from a given plane. Enabled only for Polyline3f
/// Generated from a method of class `MR::Polyline3` named `mirror<MR::Vector3f>`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `plane` can not be null. It is a single object.
MRC_API void MR_Polyline3_mirror(MR_Polyline3 *_this, const MR_Plane3f *plane);

#ifdef __cplusplus
} // extern "C"
#endif
