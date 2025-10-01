// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f; // Defined in `#include <MRCMesh/MRAABBTreeBase.h>`.
typedef struct MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f; // Defined in `#include <MRCMesh/MRAABBTreeBase.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_Polyline2 MR_Polyline2; // Defined in `#include <MRCMesh/MRPolyline.h>`.
typedef struct MR_Polyline3 MR_Polyline3; // Defined in `#include <MRCMesh/MRPolyline.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.


/// bounding volume hierarchy for line segments
/// Generated from class `MR::AABBTreePolyline2`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>`
typedef struct MR_AABBTreePolyline2 MR_AABBTreePolyline2;

/// bounding volume hierarchy for line segments
/// Generated from class `MR::AABBTreePolyline3`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>`
typedef struct MR_AABBTreePolyline3 MR_AABBTreePolyline3;

/// Generated from class `MR::PolylineTraits<MR::Vector2f>`.
typedef struct MR_PolylineTraits_MR_Vector2f MR_PolylineTraits_MR_Vector2f;

/// Generated from class `MR::PolylineTraits<MR::Vector3f>`.
typedef struct MR_PolylineTraits_MR_Vector3f MR_PolylineTraits_MR_Vector3f;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreePolyline2_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreePolyline2 *MR_AABBTreePolyline2_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_AABBTreePolyline2_DestroyArray()`.
/// Use `MR_AABBTreePolyline2_OffsetMutablePtr()` and `MR_AABBTreePolyline2_OffsetPtr()` to access the array elements.
MRC_API MR_AABBTreePolyline2 *MR_AABBTreePolyline2_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_AABBTreePolyline2 *MR_AABBTreePolyline2_OffsetPtr(const MR_AABBTreePolyline2 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_AABBTreePolyline2 *MR_AABBTreePolyline2_OffsetMutablePtr(MR_AABBTreePolyline2 *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::AABBTreePolyline2` to its base class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>`.
/// This version is acting on mutable pointers.
MRC_API const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *MR_AABBTreePolyline2_UpcastTo_MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f(const MR_AABBTreePolyline2 *object);

/// Upcasts an instance of `MR::AABBTreePolyline2` to its base class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box2f>>`.
MRC_API MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f *MR_AABBTreePolyline2_MutableUpcastTo_MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box2f(MR_AABBTreePolyline2 *object);

/// Generated from a constructor of class `MR::AABBTreePolyline2`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreePolyline2_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreePolyline2 *MR_AABBTreePolyline2_ConstructFromAnother(MR_PassBy _other_pass_by, MR_AABBTreePolyline2 *_other);

/// creates tree for given polyline
/// Generated from a constructor of class `MR::AABBTreePolyline2`.
/// Parameter `polyline` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreePolyline2_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreePolyline2 *MR_AABBTreePolyline2_Construct(const MR_Polyline2 *polyline);

/// Destroys a heap-allocated instance of `MR_AABBTreePolyline2`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreePolyline2_Destroy(const MR_AABBTreePolyline2 *_this);

/// Destroys a heap-allocated array of `MR_AABBTreePolyline2`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreePolyline2_DestroyArray(const MR_AABBTreePolyline2 *_this);

/// Generated from a method of class `MR::AABBTreePolyline2` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AABBTreePolyline2 *MR_AABBTreePolyline2_AssignFromAnother(MR_AABBTreePolyline2 *_this, MR_PassBy _other_pass_by, MR_AABBTreePolyline2 *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreePolyline3_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreePolyline3 *MR_AABBTreePolyline3_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_AABBTreePolyline3_DestroyArray()`.
/// Use `MR_AABBTreePolyline3_OffsetMutablePtr()` and `MR_AABBTreePolyline3_OffsetPtr()` to access the array elements.
MRC_API MR_AABBTreePolyline3 *MR_AABBTreePolyline3_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_AABBTreePolyline3 *MR_AABBTreePolyline3_OffsetPtr(const MR_AABBTreePolyline3 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_AABBTreePolyline3 *MR_AABBTreePolyline3_OffsetMutablePtr(MR_AABBTreePolyline3 *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::AABBTreePolyline3` to its base class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>`.
/// This version is acting on mutable pointers.
MRC_API const MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *MR_AABBTreePolyline3_UpcastTo_MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f(const MR_AABBTreePolyline3 *object);

/// Upcasts an instance of `MR::AABBTreePolyline3` to its base class `MR::AABBTreeBase<MR::AABBTreeTraits<MR::UndirectedEdgeTag, MR::Box3f>>`.
MRC_API MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f *MR_AABBTreePolyline3_MutableUpcastTo_MR_AABBTreeBase_MR_AABBTreeTraits_MR_UndirectedEdgeTag_MR_Box3f(MR_AABBTreePolyline3 *object);

/// Generated from a constructor of class `MR::AABBTreePolyline3`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreePolyline3_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreePolyline3 *MR_AABBTreePolyline3_ConstructFromAnother(MR_PassBy _other_pass_by, MR_AABBTreePolyline3 *_other);

/// creates tree for given polyline
/// Generated from a constructor of class `MR::AABBTreePolyline3`.
/// Parameter `polyline` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreePolyline3_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreePolyline3 *MR_AABBTreePolyline3_Construct_1(const MR_Polyline3 *polyline);

/// creates tree for selected edges on the mesh (only for 3d tree)
/// Generated from a constructor of class `MR::AABBTreePolyline3`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `edgeSet` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreePolyline3_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreePolyline3 *MR_AABBTreePolyline3_Construct_2(const MR_Mesh *mesh, const MR_UndirectedEdgeBitSet *edgeSet);

/// Destroys a heap-allocated instance of `MR_AABBTreePolyline3`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreePolyline3_Destroy(const MR_AABBTreePolyline3 *_this);

/// Destroys a heap-allocated array of `MR_AABBTreePolyline3`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreePolyline3_DestroyArray(const MR_AABBTreePolyline3 *_this);

/// Generated from a method of class `MR::AABBTreePolyline3` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AABBTreePolyline3 *MR_AABBTreePolyline3_AssignFromAnother(MR_AABBTreePolyline3 *_this, MR_PassBy _other_pass_by, MR_AABBTreePolyline3 *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineTraits_MR_Vector2f_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineTraits_MR_Vector2f *MR_PolylineTraits_MR_Vector2f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PolylineTraits_MR_Vector2f_DestroyArray()`.
/// Use `MR_PolylineTraits_MR_Vector2f_OffsetMutablePtr()` and `MR_PolylineTraits_MR_Vector2f_OffsetPtr()` to access the array elements.
MRC_API MR_PolylineTraits_MR_Vector2f *MR_PolylineTraits_MR_Vector2f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PolylineTraits_MR_Vector2f *MR_PolylineTraits_MR_Vector2f_OffsetPtr(const MR_PolylineTraits_MR_Vector2f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PolylineTraits_MR_Vector2f *MR_PolylineTraits_MR_Vector2f_OffsetMutablePtr(MR_PolylineTraits_MR_Vector2f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PolylineTraits<MR::Vector2f>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineTraits_MR_Vector2f_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineTraits_MR_Vector2f *MR_PolylineTraits_MR_Vector2f_ConstructFromAnother(const MR_PolylineTraits_MR_Vector2f *_other);

/// Destroys a heap-allocated instance of `MR_PolylineTraits_MR_Vector2f`. Does nothing if the pointer is null.
MRC_API void MR_PolylineTraits_MR_Vector2f_Destroy(const MR_PolylineTraits_MR_Vector2f *_this);

/// Destroys a heap-allocated array of `MR_PolylineTraits_MR_Vector2f`. Does nothing if the pointer is null.
MRC_API void MR_PolylineTraits_MR_Vector2f_DestroyArray(const MR_PolylineTraits_MR_Vector2f *_this);

/// Generated from a method of class `MR::PolylineTraits<MR::Vector2f>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PolylineTraits_MR_Vector2f *MR_PolylineTraits_MR_Vector2f_AssignFromAnother(MR_PolylineTraits_MR_Vector2f *_this, const MR_PolylineTraits_MR_Vector2f *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineTraits_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineTraits_MR_Vector3f *MR_PolylineTraits_MR_Vector3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PolylineTraits_MR_Vector3f_DestroyArray()`.
/// Use `MR_PolylineTraits_MR_Vector3f_OffsetMutablePtr()` and `MR_PolylineTraits_MR_Vector3f_OffsetPtr()` to access the array elements.
MRC_API MR_PolylineTraits_MR_Vector3f *MR_PolylineTraits_MR_Vector3f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PolylineTraits_MR_Vector3f *MR_PolylineTraits_MR_Vector3f_OffsetPtr(const MR_PolylineTraits_MR_Vector3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PolylineTraits_MR_Vector3f *MR_PolylineTraits_MR_Vector3f_OffsetMutablePtr(MR_PolylineTraits_MR_Vector3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PolylineTraits<MR::Vector3f>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineTraits_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineTraits_MR_Vector3f *MR_PolylineTraits_MR_Vector3f_ConstructFromAnother(const MR_PolylineTraits_MR_Vector3f *_other);

/// Destroys a heap-allocated instance of `MR_PolylineTraits_MR_Vector3f`. Does nothing if the pointer is null.
MRC_API void MR_PolylineTraits_MR_Vector3f_Destroy(const MR_PolylineTraits_MR_Vector3f *_this);

/// Destroys a heap-allocated array of `MR_PolylineTraits_MR_Vector3f`. Does nothing if the pointer is null.
MRC_API void MR_PolylineTraits_MR_Vector3f_DestroyArray(const MR_PolylineTraits_MR_Vector3f *_this);

/// Generated from a method of class `MR::PolylineTraits<MR::Vector3f>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PolylineTraits_MR_Vector3f *MR_PolylineTraits_MR_Vector3f_AssignFromAnother(MR_PolylineTraits_MR_Vector3f *_this, const MR_PolylineTraits_MR_Vector3f *_other);

#ifdef __cplusplus
} // extern "C"
#endif
