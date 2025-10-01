// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f; // Defined in `#include <MRCMesh/MRAABBTreeBase.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.


/// bounding volume hierarchy
/// Generated from class `MR::AABBTree`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::AABBTreeBase<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>`
typedef struct MR_AABBTree MR_AABBTree;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTree_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTree *MR_AABBTree_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_AABBTree_DestroyArray()`.
/// Use `MR_AABBTree_OffsetMutablePtr()` and `MR_AABBTree_OffsetPtr()` to access the array elements.
MRC_API MR_AABBTree *MR_AABBTree_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_AABBTree *MR_AABBTree_OffsetPtr(const MR_AABBTree *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_AABBTree *MR_AABBTree_OffsetMutablePtr(MR_AABBTree *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::AABBTree` to its base class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>`.
/// This version is acting on mutable pointers.
MRC_API const MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *MR_AABBTree_UpcastTo_MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f(const MR_AABBTree *object);

/// Upcasts an instance of `MR::AABBTree` to its base class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::FaceTag, MR::Box3f>>`.
MRC_API MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f *MR_AABBTree_MutableUpcastTo_MR_AABBTreeBase_MR_AABBTreeTraits_MR_FaceTag_MR_Box3f(MR_AABBTree *object);

/// Generated from a constructor of class `MR::AABBTree`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTree_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTree *MR_AABBTree_ConstructFromAnother(MR_PassBy _other_pass_by, MR_AABBTree *_other);

/// creates tree for given mesh or its part
/// Generated from a constructor of class `MR::AABBTree`.
/// Parameter `mp` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTree_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTree *MR_AABBTree_Construct(const MR_MeshPart *mp);

/// Destroys a heap-allocated instance of `MR_AABBTree`. Does nothing if the pointer is null.
MRC_API void MR_AABBTree_Destroy(const MR_AABBTree *_this);

/// Destroys a heap-allocated array of `MR_AABBTree`. Does nothing if the pointer is null.
MRC_API void MR_AABBTree_DestroyArray(const MR_AABBTree *_this);

/// Generated from a method of class `MR::AABBTree` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AABBTree *MR_AABBTree_AssignFromAnother(MR_AABBTree *_this, MR_PassBy _other_pass_by, MR_AABBTree *_other);

/// updates bounding boxes of the nodes containing changed vertices;
/// this is a faster alternative to full tree rebuild (but the tree after refit might be less efficient)
/// \param mesh same mesh for which this tree was constructed but with updated coordinates;
/// \param changedVerts vertex ids with modified coordinates (since tree construction or last refit)
/// Generated from a method of class `MR::AABBTree` named `refit`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `changedVerts` can not be null. It is a single object.
MRC_API void MR_AABBTree_refit(MR_AABBTree *_this, const MR_Mesh *mesh, const MR_VertBitSet *changedVerts);

#ifdef __cplusplus
} // extern "C"
#endif
