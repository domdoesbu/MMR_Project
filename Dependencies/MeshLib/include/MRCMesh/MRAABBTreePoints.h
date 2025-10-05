// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRBox.h>
#include <MRCMesh/MRId.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_Vector_MR_AABBTreePoints_Node_MR_NodeId MR_Vector_MR_AABBTreePoints_Node_MR_NodeId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertBMap MR_VertBMap; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_pair_int32_t_int32_t MR_std_pair_int32_t_int32_t; // Defined in `#include <MRCMisc/std_pair_int32_t_int32_t.h>`.
typedef struct MR_std_vector_MR_AABBTreePoints_Point MR_std_vector_MR_AABBTreePoints_Point; // Defined in `#include <MRCMisc/std_vector_MR_AABBTreePoints_Point.h>`.


/// bounding volume hierarchy for point cloud structure
/// Generated from class `MR::AABBTreePoints`.
typedef struct MR_AABBTreePoints MR_AABBTreePoints;

/// Generated from class `MR::AABBTreePoints::Node`.
typedef struct MR_AABBTreePoints_Node MR_AABBTreePoints_Node;

/// Generated from class `MR::AABBTreePoints::Point`.
typedef struct MR_AABBTreePoints_Point MR_AABBTreePoints_Point;

/// maximum number of points in leaf node of tree (all of leafs should have this number of points except last one)
/// Returns a pointer to a member variable of class `MR::AABBTreePoints` named `MaxNumPointsInLeaf`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_AABBTreePoints_Get_MaxNumPointsInLeaf(void);

/// Generated from a constructor of class `MR::AABBTreePoints`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreePoints_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreePoints *MR_AABBTreePoints_ConstructFromAnother(MR_PassBy _other_pass_by, MR_AABBTreePoints *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_AABBTreePoints *MR_AABBTreePoints_OffsetPtr(const MR_AABBTreePoints *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_AABBTreePoints *MR_AABBTreePoints_OffsetMutablePtr(MR_AABBTreePoints *ptr, ptrdiff_t i);

/// creates tree for given point cloud
/// Generated from a constructor of class `MR::AABBTreePoints`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreePoints_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreePoints *MR_AABBTreePoints_Construct_1_MR_PointCloud(const MR_PointCloud *pointCloud);

/// creates tree for vertices of given mesh
/// Generated from a constructor of class `MR::AABBTreePoints`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreePoints_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreePoints *MR_AABBTreePoints_Construct_1_MR_Mesh(const MR_Mesh *mesh);

/// creates tree from given valid points
/// Generated from a constructor of class `MR::AABBTreePoints`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `validPoints` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreePoints_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreePoints *MR_AABBTreePoints_Construct_2_const_MR_VertBitSet_ptr(const MR_VertCoords *points, const MR_VertBitSet *validPoints);

/// creates tree from given valid points
/// Generated from a constructor of class `MR::AABBTreePoints`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `validPoints` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreePoints_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreePoints *MR_AABBTreePoints_Construct_2_MR_VertBitSet(const MR_VertCoords *points, const MR_VertBitSet *validPoints);

/// Destroys a heap-allocated instance of `MR_AABBTreePoints`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreePoints_Destroy(const MR_AABBTreePoints *_this);

/// Destroys a heap-allocated array of `MR_AABBTreePoints`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreePoints_DestroyArray(const MR_AABBTreePoints *_this);

/// Generated from a method of class `MR::AABBTreePoints` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AABBTreePoints *MR_AABBTreePoints_AssignFromAnother(MR_AABBTreePoints *_this, MR_PassBy _other_pass_by, MR_AABBTreePoints *_other);

/// Generated from a method of class `MR::AABBTreePoints` named `nodes`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector_MR_AABBTreePoints_Node_MR_NodeId *MR_AABBTreePoints_nodes(const MR_AABBTreePoints *_this);

/// Generated from a method of class `MR::AABBTreePoints` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AABBTreePoints_Node *MR_AABBTreePoints_index(const MR_AABBTreePoints *_this, MR_NodeId nid);

/// Generated from a method of class `MR::AABBTreePoints` named `rootNodeId`.
MRC_API MR_NodeId MR_AABBTreePoints_rootNodeId(void);

/// returns the root node bounding box
/// Generated from a method of class `MR::AABBTreePoints` named `getBoundingBox`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Box3f MR_AABBTreePoints_getBoundingBox(const MR_AABBTreePoints *_this);

/// Generated from a method of class `MR::AABBTreePoints` named `orderedPoints`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_AABBTreePoints_Point *MR_AABBTreePoints_orderedPoints(const MR_AABBTreePoints *_this);

/// returns the mapping original VertId to new id following the points order in the tree;
/// buffer in vertMap must be resized before the call, and caller is responsible for filling missing vertex elements
/// Generated from a method of class `MR::AABBTreePoints` named `getLeafOrder`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `vertMap` can not be null. It is a single object.
MRC_API void MR_AABBTreePoints_getLeafOrder(const MR_AABBTreePoints *_this, MR_VertBMap *vertMap);

/// returns the mapping original VertId to new id following the points order in the tree;
/// then resets leaf order as if the points were renumberd following the mapping;
/// buffer in vertMap must be resized before the call, and caller is responsible for filling missing vertex elements
/// Generated from a method of class `MR::AABBTreePoints` named `getLeafOrderAndReset`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `vertMap` can not be null. It is a single object.
MRC_API void MR_AABBTreePoints_getLeafOrderAndReset(MR_AABBTreePoints *_this, MR_VertBMap *vertMap);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::AABBTreePoints` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_AABBTreePoints_heapBytes(const MR_AABBTreePoints *_this);

/// updates bounding boxes of the nodes containing changed vertices;
/// this is a faster alternative to full tree rebuild (but the tree after refit might be less efficient)
/// \param newCoords coordinates of all vertices including changed ones;
/// \param changedVerts vertex ids with modified coordinates (since tree construction or last refit)
/// Generated from a method of class `MR::AABBTreePoints` named `refit`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `newCoords` can not be null. It is a single object.
/// Parameter `changedVerts` can not be null. It is a single object.
MRC_API void MR_AABBTreePoints_refit(MR_AABBTreePoints *_this, const MR_VertCoords *newCoords, const MR_VertBitSet *changedVerts);

///< bounding box of whole subtree
/// Returns a pointer to a member variable of class `MR::AABBTreePoints::Node` named `box`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Box3f *MR_AABBTreePoints_Node_Get_box(const MR_AABBTreePoints_Node *_this);

///< bounding box of whole subtree
/// Modifies a member variable of class `MR::AABBTreePoints::Node` named `box`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AABBTreePoints_Node_Set_box(MR_AABBTreePoints_Node *_this, MR_Box3f value);

///< bounding box of whole subtree
/// Returns a mutable pointer to a member variable of class `MR::AABBTreePoints::Node` named `box`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Box3f *MR_AABBTreePoints_Node_GetMutable_box(MR_AABBTreePoints_Node *_this);

///< left child node for an inner node, or -(l+1) is the index of the first point in a leaf node
/// Returns a pointer to a member variable of class `MR::AABBTreePoints::Node` named `l`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NodeId *MR_AABBTreePoints_Node_Get_l(const MR_AABBTreePoints_Node *_this);

///< left child node for an inner node, or -(l+1) is the index of the first point in a leaf node
/// Modifies a member variable of class `MR::AABBTreePoints::Node` named `l`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AABBTreePoints_Node_Set_l(MR_AABBTreePoints_Node *_this, MR_NodeId value);

///< left child node for an inner node, or -(l+1) is the index of the first point in a leaf node
/// Returns a mutable pointer to a member variable of class `MR::AABBTreePoints::Node` named `l`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeId *MR_AABBTreePoints_Node_GetMutable_l(MR_AABBTreePoints_Node *_this);

///< right child node for an inner node, or -(r+1) is the index of the last point in a leaf node
/// Returns a pointer to a member variable of class `MR::AABBTreePoints::Node` named `r`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NodeId *MR_AABBTreePoints_Node_Get_r(const MR_AABBTreePoints_Node *_this);

///< right child node for an inner node, or -(r+1) is the index of the last point in a leaf node
/// Modifies a member variable of class `MR::AABBTreePoints::Node` named `r`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AABBTreePoints_Node_Set_r(MR_AABBTreePoints_Node *_this, MR_NodeId value);

///< right child node for an inner node, or -(r+1) is the index of the last point in a leaf node
/// Returns a mutable pointer to a member variable of class `MR::AABBTreePoints::Node` named `r`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeId *MR_AABBTreePoints_Node_GetMutable_r(MR_AABBTreePoints_Node *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreePoints_Node_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreePoints_Node *MR_AABBTreePoints_Node_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_AABBTreePoints_Node_DestroyArray()`.
/// Use `MR_AABBTreePoints_Node_OffsetMutablePtr()` and `MR_AABBTreePoints_Node_OffsetPtr()` to access the array elements.
MRC_API MR_AABBTreePoints_Node *MR_AABBTreePoints_Node_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::AABBTreePoints::Node` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreePoints_Node_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreePoints_Node *MR_AABBTreePoints_Node_ConstructFrom(MR_Box3f box, MR_NodeId l, MR_NodeId r);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_AABBTreePoints_Node *MR_AABBTreePoints_Node_OffsetPtr(const MR_AABBTreePoints_Node *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_AABBTreePoints_Node *MR_AABBTreePoints_Node_OffsetMutablePtr(MR_AABBTreePoints_Node *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::AABBTreePoints::Node`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreePoints_Node_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreePoints_Node *MR_AABBTreePoints_Node_ConstructFromAnother(const MR_AABBTreePoints_Node *_other);

/// Destroys a heap-allocated instance of `MR_AABBTreePoints_Node`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreePoints_Node_Destroy(const MR_AABBTreePoints_Node *_this);

/// Destroys a heap-allocated array of `MR_AABBTreePoints_Node`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreePoints_Node_DestroyArray(const MR_AABBTreePoints_Node *_this);

/// Generated from a method of class `MR::AABBTreePoints::Node` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AABBTreePoints_Node *MR_AABBTreePoints_Node_AssignFromAnother(MR_AABBTreePoints_Node *_this, const MR_AABBTreePoints_Node *_other);

/// returns true if node represent real points, false if it has child nodes
/// Generated from a method of class `MR::AABBTreePoints::Node` named `leaf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_AABBTreePoints_Node_leaf(const MR_AABBTreePoints_Node *_this);

/// returns [first,last) indices of leaf points
/// Generated from a method of class `MR::AABBTreePoints::Node` named `getLeafPointRange`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_int32_t_int32_t_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_int32_t_int32_t *MR_AABBTreePoints_Node_getLeafPointRange(const MR_AABBTreePoints_Node *_this);

/// sets [first,last) to this node (leaf)
/// Generated from a method of class `MR::AABBTreePoints::Node` named `setLeafPointRange`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AABBTreePoints_Node_setLeafPointRange(MR_AABBTreePoints_Node *_this, int32_t first, int32_t last);

/// Returns a pointer to a member variable of class `MR::AABBTreePoints::Point` named `coord`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_AABBTreePoints_Point_Get_coord(const MR_AABBTreePoints_Point *_this);

/// Modifies a member variable of class `MR::AABBTreePoints::Point` named `coord`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AABBTreePoints_Point_Set_coord(MR_AABBTreePoints_Point *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::AABBTreePoints::Point` named `coord`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_AABBTreePoints_Point_GetMutable_coord(MR_AABBTreePoints_Point *_this);

/// Returns a pointer to a member variable of class `MR::AABBTreePoints::Point` named `id`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_AABBTreePoints_Point_Get_id(const MR_AABBTreePoints_Point *_this);

/// Modifies a member variable of class `MR::AABBTreePoints::Point` named `id`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AABBTreePoints_Point_Set_id(MR_AABBTreePoints_Point *_this, MR_VertId value);

/// Returns a mutable pointer to a member variable of class `MR::AABBTreePoints::Point` named `id`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_AABBTreePoints_Point_GetMutable_id(MR_AABBTreePoints_Point *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreePoints_Point_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreePoints_Point *MR_AABBTreePoints_Point_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_AABBTreePoints_Point_DestroyArray()`.
/// Use `MR_AABBTreePoints_Point_OffsetMutablePtr()` and `MR_AABBTreePoints_Point_OffsetPtr()` to access the array elements.
MRC_API MR_AABBTreePoints_Point *MR_AABBTreePoints_Point_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::AABBTreePoints::Point` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreePoints_Point_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreePoints_Point *MR_AABBTreePoints_Point_ConstructFrom(MR_Vector3f coord, MR_VertId id);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_AABBTreePoints_Point *MR_AABBTreePoints_Point_OffsetPtr(const MR_AABBTreePoints_Point *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_AABBTreePoints_Point *MR_AABBTreePoints_Point_OffsetMutablePtr(MR_AABBTreePoints_Point *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::AABBTreePoints::Point`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreePoints_Point_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreePoints_Point *MR_AABBTreePoints_Point_ConstructFromAnother(const MR_AABBTreePoints_Point *_other);

/// Destroys a heap-allocated instance of `MR_AABBTreePoints_Point`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreePoints_Point_Destroy(const MR_AABBTreePoints_Point *_this);

/// Destroys a heap-allocated array of `MR_AABBTreePoints_Point`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreePoints_Point_DestroyArray(const MR_AABBTreePoints_Point *_this);

/// Generated from a method of class `MR::AABBTreePoints::Point` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AABBTreePoints_Point *MR_AABBTreePoints_Point_AssignFromAnother(MR_AABBTreePoints_Point *_this, const MR_AABBTreePoints_Point *_other);

// returns the number of nodes in the binary tree with given number of points
/// Generated from function `MR::getNumNodesPoints`.
MRC_API int32_t MR_getNumNodesPoints(int32_t numPoints);

#ifdef __cplusplus
} // extern "C"
#endif
