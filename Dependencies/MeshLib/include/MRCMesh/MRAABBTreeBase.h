// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRBox.h>
#include <MRCMesh/MRId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AABBTree MR_AABBTree; // Defined in `#include <MRCMesh/MRAABBTree.h>`.
typedef struct MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f; // Defined in `#include <MRCMesh/MRAABBTreeNode.h>`.
typedef struct MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f; // Defined in `#include <MRCMesh/MRAABBTreeNode.h>`.
typedef struct MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f; // Defined in `#include <MRCMesh/MRAABBTreeNode.h>`.
typedef struct MR_AABBTreeNode_MR_ObjTreeTraits MR_AABBTreeNode_MR_ObjTreeTraits; // Defined in `#include <MRCMesh/MRAABBTreeNode.h>`.
typedef struct MR_AABBTreeObjects MR_AABBTreeObjects; // Defined in `#include <MRCMesh/MRAABBTreeObjects.h>`.
typedef struct MR_AABBTreePolyline2 MR_AABBTreePolyline2; // Defined in `#include <MRCMesh/MRAABBTreePolyline.h>`.
typedef struct MR_AABBTreePolyline3 MR_AABBTreePolyline3; // Defined in `#include <MRCMesh/MRAABBTreePolyline.h>`.
typedef struct MR_BMap_MR_ObjId_MR_ObjId MR_BMap_MR_ObjId_MR_ObjId; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_FaceBMap MR_FaceBMap; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_NodeBitSet MR_NodeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_ObjBitSet MR_ObjBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_UndirectedEdgeBMap MR_UndirectedEdgeBMap; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Vector_MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_MR_NodeId MR_Vector_MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_MR_NodeId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_MR_NodeId MR_Vector_MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_MR_NodeId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_MR_NodeId MR_Vector_MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_MR_NodeId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_MR_AABBTreeNode_MR_ObjTreeTraits_MR_NodeId MR_Vector_MR_AABBTreeNode_MR_ObjTreeTraits_MR_NodeId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_vector_MR_NodeId MR_std_vector_MR_NodeId; // Defined in `#include <MRCMisc/std_vector_MR_NodeId.h>`.


/// base class for most AABB-trees (except for AABBTreePoints)
/// Generated from class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::AABBTree`
typedef struct MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f;

/// base class for most AABB-trees (except for AABBTreePoints)
/// Generated from class `MR::AABBTreeBase<MR::ObjTreeTraits>`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::AABBTreeObjects`
typedef struct MR_AABBTreeBase_MR_ObjTreeTraits MR_AABBTreeBase_MR_ObjTreeTraits;

/// base class for most AABB-trees (except for AABBTreePoints)
/// Generated from class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::AABBTreePolyline2`
typedef struct MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f;

/// base class for most AABB-trees (except for AABBTreePoints)
/// Generated from class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::AABBTreePolyline3`
typedef struct MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_DestroyArray()`.
/// Use `MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_OffsetMutablePtr()` and `MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_OffsetPtr()` to access the array elements.
MRC_API MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_OffsetPtr(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_OffsetMutablePtr(MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::AABBTreeBase<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` to a derived class `MR::AABBTree`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_AABBTree *MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_StaticDowncastTo_MR_AABBTree(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *object);

/// Downcasts an instance of `MR::AABBTreeBase<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` to a derived class `MR::AABBTree`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_AABBTree *MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_MutableStaticDowncastTo_MR_AABBTree(MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *object);

/// Generated from a constructor of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_ConstructFromAnother(MR_PassBy _other_pass_by, MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_other);

/// Destroys a heap-allocated instance of `MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_Destroy(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this);

/// Destroys a heap-allocated array of `MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_DestroyArray(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this);

/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_AssignFromAnother(MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this, MR_PassBy _other_pass_by, MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_other);

/// const-access to all nodes
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` named `nodes`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector_MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_MR_NodeId *MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_nodes(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this);

/// const-access to any node
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_index(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this, MR_NodeId nid);

/// returns root node id
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` named `rootNodeId`.
MRC_API MR_NodeId MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_rootNodeId(void);

/// returns the root node bounding box
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` named `getBoundingBox`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Box3f MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_getBoundingBox(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_heapBytes(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this);

/// returns the number of leaves in whole tree
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` named `numLeaves`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_numLeaves(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this);

/// returns at least given number of top-level not-intersecting subtrees, union of which contain all tree leaves
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` named `getSubtrees`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_NodeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_NodeId *MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_getSubtrees(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this, int32_t minNum);

/// returns all leaves in the subtree with given root
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` named `getSubtreeLeaves`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_getSubtreeLeaves(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this, MR_NodeId subtreeRoot);

/// returns set of nodes containing among direct or indirect children given leaves
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` named `getNodesFromLeaves`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `leaves` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NodeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_NodeBitSet *MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_getNodesFromLeaves(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this, const MR_FaceBitSet *leaves);

/// fills map: LeafId -> leaf#;
/// buffer in leafMap must be resized before the call, and caller is responsible for filling missing leaf elements
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` named `getLeafOrder`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `leafMap` can not be null. It is a single object.
MRC_API void MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_getLeafOrder(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this, MR_FaceBMap *leafMap);

/// fills map: LeafId -> leaf#, then resets leaf order to 0,1,2,...;
/// buffer in leafMap must be resized before the call, and caller is responsible for filling missing leaf elements
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` named `getLeafOrderAndReset`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `leafMap` can not be null. It is a single object.
MRC_API void MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_getLeafOrderAndReset(MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this, MR_FaceBMap *leafMap);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeBase_MR_ObjTreeTraits_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeBase_MR_ObjTreeTraits *MR_AABBTreeBase_MR_ObjTreeTraits_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_AABBTreeBase_MR_ObjTreeTraits_DestroyArray()`.
/// Use `MR_AABBTreeBase_MR_ObjTreeTraits_OffsetMutablePtr()` and `MR_AABBTreeBase_MR_ObjTreeTraits_OffsetPtr()` to access the array elements.
MRC_API MR_AABBTreeBase_MR_ObjTreeTraits *MR_AABBTreeBase_MR_ObjTreeTraits_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_AABBTreeBase_MR_ObjTreeTraits *MR_AABBTreeBase_MR_ObjTreeTraits_OffsetPtr(const MR_AABBTreeBase_MR_ObjTreeTraits *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_AABBTreeBase_MR_ObjTreeTraits *MR_AABBTreeBase_MR_ObjTreeTraits_OffsetMutablePtr(MR_AABBTreeBase_MR_ObjTreeTraits *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::AABBTreeBase<MR::ObjTreeTraits>` to a derived class `MR::AABBTreeObjects`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_AABBTreeObjects *MR_AABBTreeBase_MR_ObjTreeTraits_StaticDowncastTo_MR_AABBTreeObjects(const MR_AABBTreeBase_MR_ObjTreeTraits *object);

/// Downcasts an instance of `MR::AABBTreeBase<MR::ObjTreeTraits>` to a derived class `MR::AABBTreeObjects`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_AABBTreeObjects *MR_AABBTreeBase_MR_ObjTreeTraits_MutableStaticDowncastTo_MR_AABBTreeObjects(MR_AABBTreeBase_MR_ObjTreeTraits *object);

/// Generated from a constructor of class `MR::AABBTreeBase<MR::ObjTreeTraits>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeBase_MR_ObjTreeTraits_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeBase_MR_ObjTreeTraits *MR_AABBTreeBase_MR_ObjTreeTraits_ConstructFromAnother(MR_PassBy _other_pass_by, MR_AABBTreeBase_MR_ObjTreeTraits *_other);

/// Destroys a heap-allocated instance of `MR_AABBTreeBase_MR_ObjTreeTraits`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreeBase_MR_ObjTreeTraits_Destroy(const MR_AABBTreeBase_MR_ObjTreeTraits *_this);

/// Destroys a heap-allocated array of `MR_AABBTreeBase_MR_ObjTreeTraits`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreeBase_MR_ObjTreeTraits_DestroyArray(const MR_AABBTreeBase_MR_ObjTreeTraits *_this);

/// Generated from a method of class `MR::AABBTreeBase<MR::ObjTreeTraits>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AABBTreeBase_MR_ObjTreeTraits *MR_AABBTreeBase_MR_ObjTreeTraits_AssignFromAnother(MR_AABBTreeBase_MR_ObjTreeTraits *_this, MR_PassBy _other_pass_by, MR_AABBTreeBase_MR_ObjTreeTraits *_other);

/// const-access to all nodes
/// Generated from a method of class `MR::AABBTreeBase<MR::ObjTreeTraits>` named `nodes`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector_MR_AABBTreeNode_MR_ObjTreeTraits_MR_NodeId *MR_AABBTreeBase_MR_ObjTreeTraits_nodes(const MR_AABBTreeBase_MR_ObjTreeTraits *_this);

/// const-access to any node
/// Generated from a method of class `MR::AABBTreeBase<MR::ObjTreeTraits>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AABBTreeNode_MR_ObjTreeTraits *MR_AABBTreeBase_MR_ObjTreeTraits_index(const MR_AABBTreeBase_MR_ObjTreeTraits *_this, MR_NodeId nid);

/// returns root node id
/// Generated from a method of class `MR::AABBTreeBase<MR::ObjTreeTraits>` named `rootNodeId`.
MRC_API MR_NodeId MR_AABBTreeBase_MR_ObjTreeTraits_rootNodeId(void);

/// returns the root node bounding box
/// Generated from a method of class `MR::AABBTreeBase<MR::ObjTreeTraits>` named `getBoundingBox`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Box3f MR_AABBTreeBase_MR_ObjTreeTraits_getBoundingBox(const MR_AABBTreeBase_MR_ObjTreeTraits *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::AABBTreeBase<MR::ObjTreeTraits>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_AABBTreeBase_MR_ObjTreeTraits_heapBytes(const MR_AABBTreeBase_MR_ObjTreeTraits *_this);

/// returns the number of leaves in whole tree
/// Generated from a method of class `MR::AABBTreeBase<MR::ObjTreeTraits>` named `numLeaves`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_AABBTreeBase_MR_ObjTreeTraits_numLeaves(const MR_AABBTreeBase_MR_ObjTreeTraits *_this);

/// returns at least given number of top-level not-intersecting subtrees, union of which contain all tree leaves
/// Generated from a method of class `MR::AABBTreeBase<MR::ObjTreeTraits>` named `getSubtrees`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_NodeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_NodeId *MR_AABBTreeBase_MR_ObjTreeTraits_getSubtrees(const MR_AABBTreeBase_MR_ObjTreeTraits *_this, int32_t minNum);

/// returns all leaves in the subtree with given root
/// Generated from a method of class `MR::AABBTreeBase<MR::ObjTreeTraits>` named `getSubtreeLeaves`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_ObjBitSet *MR_AABBTreeBase_MR_ObjTreeTraits_getSubtreeLeaves(const MR_AABBTreeBase_MR_ObjTreeTraits *_this, MR_NodeId subtreeRoot);

/// returns set of nodes containing among direct or indirect children given leaves
/// Generated from a method of class `MR::AABBTreeBase<MR::ObjTreeTraits>` named `getNodesFromLeaves`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `leaves` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NodeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_NodeBitSet *MR_AABBTreeBase_MR_ObjTreeTraits_getNodesFromLeaves(const MR_AABBTreeBase_MR_ObjTreeTraits *_this, const MR_ObjBitSet *leaves);

/// fills map: LeafId -> leaf#;
/// buffer in leafMap must be resized before the call, and caller is responsible for filling missing leaf elements
/// Generated from a method of class `MR::AABBTreeBase<MR::ObjTreeTraits>` named `getLeafOrder`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `leafMap` can not be null. It is a single object.
MRC_API void MR_AABBTreeBase_MR_ObjTreeTraits_getLeafOrder(const MR_AABBTreeBase_MR_ObjTreeTraits *_this, MR_BMap_MR_ObjId_MR_ObjId *leafMap);

/// fills map: LeafId -> leaf#, then resets leaf order to 0,1,2,...;
/// buffer in leafMap must be resized before the call, and caller is responsible for filling missing leaf elements
/// Generated from a method of class `MR::AABBTreeBase<MR::ObjTreeTraits>` named `getLeafOrderAndReset`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `leafMap` can not be null. It is a single object.
MRC_API void MR_AABBTreeBase_MR_ObjTreeTraits_getLeafOrderAndReset(MR_AABBTreeBase_MR_ObjTreeTraits *_this, MR_BMap_MR_ObjId_MR_ObjId *leafMap);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_DestroyArray()`.
/// Use `MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_OffsetMutablePtr()` and `MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_OffsetPtr()` to access the array elements.
MRC_API MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_OffsetPtr(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_OffsetMutablePtr(MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` to a derived class `MR::AABBTreePolyline2`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_AABBTreePolyline2 *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_StaticDowncastTo_MR_AABBTreePolyline2(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *object);

/// Downcasts an instance of `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` to a derived class `MR::AABBTreePolyline2`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_AABBTreePolyline2 *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_MutableStaticDowncastTo_MR_AABBTreePolyline2(MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *object);

/// Generated from a constructor of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_ConstructFromAnother(MR_PassBy _other_pass_by, MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_other);

/// Destroys a heap-allocated instance of `MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_Destroy(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this);

/// Destroys a heap-allocated array of `MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_DestroyArray(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this);

/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_AssignFromAnother(MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this, MR_PassBy _other_pass_by, MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_other);

/// const-access to all nodes
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` named `nodes`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector_MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_MR_NodeId *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_nodes(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this);

/// const-access to any node
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_index(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this, MR_NodeId nid);

/// returns root node id
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` named `rootNodeId`.
MRC_API MR_NodeId MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_rootNodeId(void);

/// returns the root node bounding box
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` named `getBoundingBox`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Box2f MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_getBoundingBox(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_heapBytes(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this);

/// returns the number of leaves in whole tree
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` named `numLeaves`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_numLeaves(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this);

/// returns at least given number of top-level not-intersecting subtrees, union of which contain all tree leaves
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` named `getSubtrees`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_NodeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_NodeId *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_getSubtrees(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this, int32_t minNum);

/// returns all leaves in the subtree with given root
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` named `getSubtreeLeaves`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_getSubtreeLeaves(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this, MR_NodeId subtreeRoot);

/// returns set of nodes containing among direct or indirect children given leaves
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` named `getNodesFromLeaves`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `leaves` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NodeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_NodeBitSet *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_getNodesFromLeaves(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this, const MR_UndirectedEdgeBitSet *leaves);

/// fills map: LeafId -> leaf#;
/// buffer in leafMap must be resized before the call, and caller is responsible for filling missing leaf elements
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` named `getLeafOrder`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `leafMap` can not be null. It is a single object.
MRC_API void MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_getLeafOrder(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this, MR_UndirectedEdgeBMap *leafMap);

/// fills map: LeafId -> leaf#, then resets leaf order to 0,1,2,...;
/// buffer in leafMap must be resized before the call, and caller is responsible for filling missing leaf elements
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` named `getLeafOrderAndReset`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `leafMap` can not be null. It is a single object.
MRC_API void MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_getLeafOrderAndReset(MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this, MR_UndirectedEdgeBMap *leafMap);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_DestroyArray()`.
/// Use `MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_OffsetMutablePtr()` and `MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_OffsetPtr()` to access the array elements.
MRC_API MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_OffsetPtr(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_OffsetMutablePtr(MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` to a derived class `MR::AABBTreePolyline3`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_AABBTreePolyline3 *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_StaticDowncastTo_MR_AABBTreePolyline3(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *object);

/// Downcasts an instance of `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` to a derived class `MR::AABBTreePolyline3`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_AABBTreePolyline3 *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_MutableStaticDowncastTo_MR_AABBTreePolyline3(MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *object);

/// Generated from a constructor of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_ConstructFromAnother(MR_PassBy _other_pass_by, MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_other);

/// Destroys a heap-allocated instance of `MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_Destroy(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this);

/// Destroys a heap-allocated array of `MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_DestroyArray(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this);

/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_AssignFromAnother(MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this, MR_PassBy _other_pass_by, MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_other);

/// const-access to all nodes
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` named `nodes`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector_MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_MR_NodeId *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_nodes(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this);

/// const-access to any node
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_index(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this, MR_NodeId nid);

/// returns root node id
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` named `rootNodeId`.
MRC_API MR_NodeId MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_rootNodeId(void);

/// returns the root node bounding box
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` named `getBoundingBox`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Box3f MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_getBoundingBox(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_heapBytes(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this);

/// returns the number of leaves in whole tree
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` named `numLeaves`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_numLeaves(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this);

/// returns at least given number of top-level not-intersecting subtrees, union of which contain all tree leaves
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` named `getSubtrees`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_NodeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_NodeId *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_getSubtrees(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this, int32_t minNum);

/// returns all leaves in the subtree with given root
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` named `getSubtreeLeaves`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_getSubtreeLeaves(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this, MR_NodeId subtreeRoot);

/// returns set of nodes containing among direct or indirect children given leaves
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` named `getNodesFromLeaves`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `leaves` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NodeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_NodeBitSet *MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_getNodesFromLeaves(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this, const MR_UndirectedEdgeBitSet *leaves);

/// fills map: LeafId -> leaf#;
/// buffer in leafMap must be resized before the call, and caller is responsible for filling missing leaf elements
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` named `getLeafOrder`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `leafMap` can not be null. It is a single object.
MRC_API void MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_getLeafOrder(const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this, MR_UndirectedEdgeBMap *leafMap);

/// fills map: LeafId -> leaf#, then resets leaf order to 0,1,2,...;
/// buffer in leafMap must be resized before the call, and caller is responsible for filling missing leaf elements
/// Generated from a method of class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` named `getLeafOrderAndReset`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `leafMap` can not be null. It is a single object.
MRC_API void MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_getLeafOrderAndReset(MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this, MR_UndirectedEdgeBMap *leafMap);

#ifdef __cplusplus
} // extern "C"
#endif
