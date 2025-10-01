// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRBox.h>
#include <MRCMesh/MRId.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from class `MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>`.
typedef struct MR_AABBTreeTraits_MR_FaceTag_MR_Box3f MR_AABBTreeTraits_MR_FaceTag_MR_Box3f;

/// Generated from class `MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>`.
typedef struct MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f;

/// Generated from class `MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>`.
typedef struct MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f;

/// Generated from class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>`.
typedef struct MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f;

/// Generated from class `MR::AABBTreeNode<MR::ObjTreeTraits>`.
typedef struct MR_AABBTreeNode_MR_ObjTreeTraits MR_AABBTreeNode_MR_ObjTreeTraits;

/// Generated from class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>`.
typedef struct MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f;

/// Generated from class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>`.
typedef struct MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f;

/// Generated from class `MR::NodeNode`.
typedef struct MR_NodeNode MR_NodeNode;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_DestroyArray()`.
/// Use `MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_OffsetMutablePtr()` and `MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_OffsetPtr()` to access the array elements.
MRC_API MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_OffsetPtr(const MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_OffsetMutablePtr(MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_ConstructFromAnother(const MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_other);

/// Destroys a heap-allocated instance of `MR_AABBTreeTraits_MR_FaceTag_MR_Box3f`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_Destroy(const MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this);

/// Destroys a heap-allocated array of `MR_AABBTreeTraits_MR_FaceTag_MR_Box3f`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_DestroyArray(const MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this);

/// Generated from a method of class `MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_AssignFromAnother(MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this, const MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_DestroyArray()`.
/// Use `MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_OffsetMutablePtr()` and `MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_OffsetPtr()` to access the array elements.
MRC_API MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_OffsetPtr(const MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_OffsetMutablePtr(MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_ConstructFromAnother(const MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_other);

/// Destroys a heap-allocated instance of `MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_Destroy(const MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this);

/// Destroys a heap-allocated array of `MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_DestroyArray(const MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this);

/// Generated from a method of class `MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_AssignFromAnother(MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this, const MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_DestroyArray()`.
/// Use `MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_OffsetMutablePtr()` and `MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_OffsetPtr()` to access the array elements.
MRC_API MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_OffsetPtr(const MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_OffsetMutablePtr(MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_ConstructFromAnother(const MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_other);

/// Destroys a heap-allocated instance of `MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_Destroy(const MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this);

/// Destroys a heap-allocated array of `MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_DestroyArray(const MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this);

/// Generated from a method of class `MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_AssignFromAnother(MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this, const MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_other);

///< bounding box of whole subtree
/// Returns a pointer to a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` named `box`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Box3f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_Get_box(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this);

///< bounding box of whole subtree
/// Modifies a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` named `box`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_Set_box(MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this, MR_Box3f value);

///< bounding box of whole subtree
/// Returns a mutable pointer to a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` named `box`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Box3f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_GetMutable_box(MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this);

///< two children
/// Returns a pointer to a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` named `l`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NodeId *MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_Get_l(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this);

///< two children
/// Modifies a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` named `l`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_Set_l(MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this, MR_NodeId value);

///< two children
/// Returns a mutable pointer to a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` named `l`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeId *MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_GetMutable_l(MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this);

///< two children
/// Returns a pointer to a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` named `r`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NodeId *MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_Get_r(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this);

///< two children
/// Modifies a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` named `r`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_Set_r(MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this, MR_NodeId value);

///< two children
/// Returns a mutable pointer to a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` named `r`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeId *MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_GetMutable_r(MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_DestroyArray()`.
/// Use `MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_OffsetMutablePtr()` and `MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_OffsetPtr()` to access the array elements.
MRC_API MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::AABBTreeNode<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_ConstructFrom(MR_Box3f box, MR_NodeId l, MR_NodeId r);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_OffsetPtr(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_OffsetMutablePtr(MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_ConstructFromAnother(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_other);

/// Destroys a heap-allocated instance of `MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_Destroy(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this);

/// Destroys a heap-allocated array of `MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_DestroyArray(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this);

/// Generated from a method of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_AssignFromAnother(MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this, const MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_other);

/// returns true if this is a leaf node without children nodes but with a LeafId reference
/// Generated from a method of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` named `leaf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_leaf(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this);

/// returns face (for the leaf node only)
/// Generated from a method of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` named `leafId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_FaceId MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_leafId(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this);

/// Generated from a method of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>` named `setLeafId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f_setLeafId(MR_AABBTreeNode_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *_this, MR_FaceId id);

///< bounding box of whole subtree
/// Returns a pointer to a member variable of class `MR::AABBTreeNode<MR::ObjTreeTraits>` named `box`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Box3f *MR_AABBTreeNode_MR_ObjTreeTraits_Get_box(const MR_AABBTreeNode_MR_ObjTreeTraits *_this);

///< bounding box of whole subtree
/// Modifies a member variable of class `MR::AABBTreeNode<MR::ObjTreeTraits>` named `box`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AABBTreeNode_MR_ObjTreeTraits_Set_box(MR_AABBTreeNode_MR_ObjTreeTraits *_this, MR_Box3f value);

///< bounding box of whole subtree
/// Returns a mutable pointer to a member variable of class `MR::AABBTreeNode<MR::ObjTreeTraits>` named `box`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Box3f *MR_AABBTreeNode_MR_ObjTreeTraits_GetMutable_box(MR_AABBTreeNode_MR_ObjTreeTraits *_this);

///< two children
/// Returns a pointer to a member variable of class `MR::AABBTreeNode<MR::ObjTreeTraits>` named `l`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NodeId *MR_AABBTreeNode_MR_ObjTreeTraits_Get_l(const MR_AABBTreeNode_MR_ObjTreeTraits *_this);

///< two children
/// Modifies a member variable of class `MR::AABBTreeNode<MR::ObjTreeTraits>` named `l`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AABBTreeNode_MR_ObjTreeTraits_Set_l(MR_AABBTreeNode_MR_ObjTreeTraits *_this, MR_NodeId value);

///< two children
/// Returns a mutable pointer to a member variable of class `MR::AABBTreeNode<MR::ObjTreeTraits>` named `l`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeId *MR_AABBTreeNode_MR_ObjTreeTraits_GetMutable_l(MR_AABBTreeNode_MR_ObjTreeTraits *_this);

///< two children
/// Returns a pointer to a member variable of class `MR::AABBTreeNode<MR::ObjTreeTraits>` named `r`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NodeId *MR_AABBTreeNode_MR_ObjTreeTraits_Get_r(const MR_AABBTreeNode_MR_ObjTreeTraits *_this);

///< two children
/// Modifies a member variable of class `MR::AABBTreeNode<MR::ObjTreeTraits>` named `r`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AABBTreeNode_MR_ObjTreeTraits_Set_r(MR_AABBTreeNode_MR_ObjTreeTraits *_this, MR_NodeId value);

///< two children
/// Returns a mutable pointer to a member variable of class `MR::AABBTreeNode<MR::ObjTreeTraits>` named `r`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeId *MR_AABBTreeNode_MR_ObjTreeTraits_GetMutable_r(MR_AABBTreeNode_MR_ObjTreeTraits *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeNode_MR_ObjTreeTraits_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeNode_MR_ObjTreeTraits *MR_AABBTreeNode_MR_ObjTreeTraits_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_AABBTreeNode_MR_ObjTreeTraits_DestroyArray()`.
/// Use `MR_AABBTreeNode_MR_ObjTreeTraits_OffsetMutablePtr()` and `MR_AABBTreeNode_MR_ObjTreeTraits_OffsetPtr()` to access the array elements.
MRC_API MR_AABBTreeNode_MR_ObjTreeTraits *MR_AABBTreeNode_MR_ObjTreeTraits_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::AABBTreeNode<MR::ObjTreeTraits>` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeNode_MR_ObjTreeTraits_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeNode_MR_ObjTreeTraits *MR_AABBTreeNode_MR_ObjTreeTraits_ConstructFrom(MR_Box3f box, MR_NodeId l, MR_NodeId r);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_AABBTreeNode_MR_ObjTreeTraits *MR_AABBTreeNode_MR_ObjTreeTraits_OffsetPtr(const MR_AABBTreeNode_MR_ObjTreeTraits *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_AABBTreeNode_MR_ObjTreeTraits *MR_AABBTreeNode_MR_ObjTreeTraits_OffsetMutablePtr(MR_AABBTreeNode_MR_ObjTreeTraits *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::AABBTreeNode<MR::ObjTreeTraits>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeNode_MR_ObjTreeTraits_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeNode_MR_ObjTreeTraits *MR_AABBTreeNode_MR_ObjTreeTraits_ConstructFromAnother(const MR_AABBTreeNode_MR_ObjTreeTraits *_other);

/// Destroys a heap-allocated instance of `MR_AABBTreeNode_MR_ObjTreeTraits`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreeNode_MR_ObjTreeTraits_Destroy(const MR_AABBTreeNode_MR_ObjTreeTraits *_this);

/// Destroys a heap-allocated array of `MR_AABBTreeNode_MR_ObjTreeTraits`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreeNode_MR_ObjTreeTraits_DestroyArray(const MR_AABBTreeNode_MR_ObjTreeTraits *_this);

/// Generated from a method of class `MR::AABBTreeNode<MR::ObjTreeTraits>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AABBTreeNode_MR_ObjTreeTraits *MR_AABBTreeNode_MR_ObjTreeTraits_AssignFromAnother(MR_AABBTreeNode_MR_ObjTreeTraits *_this, const MR_AABBTreeNode_MR_ObjTreeTraits *_other);

/// returns true if this is a leaf node without children nodes but with a LeafId reference
/// Generated from a method of class `MR::AABBTreeNode<MR::ObjTreeTraits>` named `leaf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_AABBTreeNode_MR_ObjTreeTraits_leaf(const MR_AABBTreeNode_MR_ObjTreeTraits *_this);

/// returns face (for the leaf node only)
/// Generated from a method of class `MR::AABBTreeNode<MR::ObjTreeTraits>` named `leafId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_ObjId MR_AABBTreeNode_MR_ObjTreeTraits_leafId(const MR_AABBTreeNode_MR_ObjTreeTraits *_this);

/// Generated from a method of class `MR::AABBTreeNode<MR::ObjTreeTraits>` named `setLeafId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AABBTreeNode_MR_ObjTreeTraits_setLeafId(MR_AABBTreeNode_MR_ObjTreeTraits *_this, MR_ObjId id);

///< bounding box of whole subtree
/// Returns a pointer to a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` named `box`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Box2f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_Get_box(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this);

///< bounding box of whole subtree
/// Modifies a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` named `box`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_Set_box(MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this, MR_Box2f value);

///< bounding box of whole subtree
/// Returns a mutable pointer to a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` named `box`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Box2f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_GetMutable_box(MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this);

///< two children
/// Returns a pointer to a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` named `l`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NodeId *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_Get_l(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this);

///< two children
/// Modifies a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` named `l`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_Set_l(MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this, MR_NodeId value);

///< two children
/// Returns a mutable pointer to a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` named `l`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeId *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_GetMutable_l(MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this);

///< two children
/// Returns a pointer to a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` named `r`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NodeId *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_Get_r(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this);

///< two children
/// Modifies a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` named `r`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_Set_r(MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this, MR_NodeId value);

///< two children
/// Returns a mutable pointer to a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` named `r`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeId *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_GetMutable_r(MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_DestroyArray()`.
/// Use `MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_OffsetMutablePtr()` and `MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_OffsetPtr()` to access the array elements.
MRC_API MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_ConstructFrom(MR_Box2f box, MR_NodeId l, MR_NodeId r);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_OffsetPtr(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_OffsetMutablePtr(MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_ConstructFromAnother(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_other);

/// Destroys a heap-allocated instance of `MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_Destroy(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this);

/// Destroys a heap-allocated array of `MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_DestroyArray(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this);

/// Generated from a method of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_AssignFromAnother(MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this, const MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_other);

/// returns true if this is a leaf node without children nodes but with a LeafId reference
/// Generated from a method of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` named `leaf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_leaf(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this);

/// returns face (for the leaf node only)
/// Generated from a method of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` named `leafId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_leafId(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this);

/// Generated from a method of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>` named `setLeafId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f_setLeafId(MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *_this, MR_UndirectedEdgeId id);

///< bounding box of whole subtree
/// Returns a pointer to a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` named `box`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Box3f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_Get_box(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this);

///< bounding box of whole subtree
/// Modifies a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` named `box`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_Set_box(MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this, MR_Box3f value);

///< bounding box of whole subtree
/// Returns a mutable pointer to a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` named `box`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Box3f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_GetMutable_box(MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this);

///< two children
/// Returns a pointer to a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` named `l`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NodeId *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_Get_l(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this);

///< two children
/// Modifies a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` named `l`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_Set_l(MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this, MR_NodeId value);

///< two children
/// Returns a mutable pointer to a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` named `l`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeId *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_GetMutable_l(MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this);

///< two children
/// Returns a pointer to a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` named `r`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NodeId *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_Get_r(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this);

///< two children
/// Modifies a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` named `r`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_Set_r(MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this, MR_NodeId value);

///< two children
/// Returns a mutable pointer to a member variable of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` named `r`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeId *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_GetMutable_r(MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_DestroyArray()`.
/// Use `MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_OffsetMutablePtr()` and `MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_OffsetPtr()` to access the array elements.
MRC_API MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_ConstructFrom(MR_Box3f box, MR_NodeId l, MR_NodeId r);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_OffsetPtr(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_OffsetMutablePtr(MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_ConstructFromAnother(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_other);

/// Destroys a heap-allocated instance of `MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_Destroy(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this);

/// Destroys a heap-allocated array of `MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_DestroyArray(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this);

/// Generated from a method of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_AssignFromAnother(MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this, const MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_other);

/// returns true if this is a leaf node without children nodes but with a LeafId reference
/// Generated from a method of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` named `leaf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_leaf(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this);

/// returns face (for the leaf node only)
/// Generated from a method of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` named `leafId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_leafId(const MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this);

/// Generated from a method of class `MR::AABBTreeNode<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>` named `setLeafId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f_setLeafId(MR_AABBTreeNode_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *_this, MR_UndirectedEdgeId id);

/// Returns a pointer to a member variable of class `MR::NodeNode` named `aNode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NodeId *MR_NodeNode_Get_aNode(const MR_NodeNode *_this);

/// Modifies a member variable of class `MR::NodeNode` named `aNode`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_NodeNode_Set_aNode(MR_NodeNode *_this, MR_NodeId value);

/// Returns a mutable pointer to a member variable of class `MR::NodeNode` named `aNode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeId *MR_NodeNode_GetMutable_aNode(MR_NodeNode *_this);

/// Returns a pointer to a member variable of class `MR::NodeNode` named `bNode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NodeId *MR_NodeNode_Get_bNode(const MR_NodeNode *_this);

/// Modifies a member variable of class `MR::NodeNode` named `bNode`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_NodeNode_Set_bNode(MR_NodeNode *_this, MR_NodeId value);

/// Returns a mutable pointer to a member variable of class `MR::NodeNode` named `bNode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeId *MR_NodeNode_GetMutable_bNode(MR_NodeNode *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NodeNode_Destroy()` to free it when you're done using it.
MRC_API MR_NodeNode *MR_NodeNode_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NodeNode_DestroyArray()`.
/// Use `MR_NodeNode_OffsetMutablePtr()` and `MR_NodeNode_OffsetPtr()` to access the array elements.
MRC_API MR_NodeNode *MR_NodeNode_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::NodeNode` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NodeNode_Destroy()` to free it when you're done using it.
MRC_API MR_NodeNode *MR_NodeNode_ConstructFrom(MR_NodeId aNode, MR_NodeId bNode);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NodeNode *MR_NodeNode_OffsetPtr(const MR_NodeNode *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NodeNode *MR_NodeNode_OffsetMutablePtr(MR_NodeNode *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::NodeNode`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NodeNode_Destroy()` to free it when you're done using it.
MRC_API MR_NodeNode *MR_NodeNode_ConstructFromAnother(const MR_NodeNode *_other);

/// Destroys a heap-allocated instance of `MR_NodeNode`. Does nothing if the pointer is null.
MRC_API void MR_NodeNode_Destroy(const MR_NodeNode *_this);

/// Destroys a heap-allocated array of `MR_NodeNode`. Does nothing if the pointer is null.
MRC_API void MR_NodeNode_DestroyArray(const MR_NodeNode *_this);

/// Generated from a method of class `MR::NodeNode` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeNode *MR_NodeNode_AssignFromAnother(MR_NodeNode *_this, const MR_NodeNode *_other);

#ifdef __cplusplus
} // extern "C"
#endif
