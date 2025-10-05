// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AABBTreeBase_MR_ObjTreeTraits MR_AABBTreeBase_MR_ObjTreeTraits; // Defined in `#include <MRCMesh/MRAABBTreeBase.h>`.
typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_MeshOrPoints MR_MeshOrPoints; // Defined in `#include <MRCMesh/MRMeshOrPoints.h>`.
typedef struct MR_Vector_MR_AffineXf3f_MR_ObjId MR_Vector_MR_AffineXf3f_MR_ObjId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_MR_MeshOrPointsXf_MR_ObjId MR_Vector_MR_MeshOrPointsXf_MR_ObjId; // Defined in `#include <MRCMesh/MRVector.h>`.


/// Generated from class `MR::ObjTreeTraits`.
typedef struct MR_ObjTreeTraits MR_ObjTreeTraits;

/// tree containing world bounding boxes of individual objects having individual local-to-world transformations
/// Generated from class `MR::AABBTreeObjects`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::AABBTreeBase<MR::ObjTreeTraits>`
typedef struct MR_AABBTreeObjects MR_AABBTreeObjects;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjTreeTraits_Destroy()` to free it when you're done using it.
MRC_API MR_ObjTreeTraits *MR_ObjTreeTraits_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ObjTreeTraits_DestroyArray()`.
/// Use `MR_ObjTreeTraits_OffsetMutablePtr()` and `MR_ObjTreeTraits_OffsetPtr()` to access the array elements.
MRC_API MR_ObjTreeTraits *MR_ObjTreeTraits_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ObjTreeTraits *MR_ObjTreeTraits_OffsetPtr(const MR_ObjTreeTraits *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ObjTreeTraits *MR_ObjTreeTraits_OffsetMutablePtr(MR_ObjTreeTraits *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ObjTreeTraits`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjTreeTraits_Destroy()` to free it when you're done using it.
MRC_API MR_ObjTreeTraits *MR_ObjTreeTraits_ConstructFromAnother(const MR_ObjTreeTraits *_other);

/// Destroys a heap-allocated instance of `MR_ObjTreeTraits`. Does nothing if the pointer is null.
MRC_API void MR_ObjTreeTraits_Destroy(const MR_ObjTreeTraits *_this);

/// Destroys a heap-allocated array of `MR_ObjTreeTraits`. Does nothing if the pointer is null.
MRC_API void MR_ObjTreeTraits_DestroyArray(const MR_ObjTreeTraits *_this);

/// Generated from a method of class `MR::ObjTreeTraits` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjTreeTraits *MR_ObjTreeTraits_AssignFromAnother(MR_ObjTreeTraits *_this, const MR_ObjTreeTraits *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeObjects_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeObjects *MR_AABBTreeObjects_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_AABBTreeObjects_DestroyArray()`.
/// Use `MR_AABBTreeObjects_OffsetMutablePtr()` and `MR_AABBTreeObjects_OffsetPtr()` to access the array elements.
MRC_API MR_AABBTreeObjects *MR_AABBTreeObjects_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_AABBTreeObjects *MR_AABBTreeObjects_OffsetPtr(const MR_AABBTreeObjects *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_AABBTreeObjects *MR_AABBTreeObjects_OffsetMutablePtr(MR_AABBTreeObjects *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::AABBTreeObjects` to its base class `MR::AABBTreeBase<MR::ObjTreeTraits>`.
/// This version is acting on mutable pointers.
MRC_API const MR_AABBTreeBase_MR_ObjTreeTraits *MR_AABBTreeObjects_UpcastTo_MR_AABBTreeBase_MR_ObjTreeTraits(const MR_AABBTreeObjects *object);

/// Upcasts an instance of `MR::AABBTreeObjects` to its base class `MR::AABBTreeBase<MR::ObjTreeTraits>`.
MRC_API MR_AABBTreeBase_MR_ObjTreeTraits *MR_AABBTreeObjects_MutableUpcastTo_MR_AABBTreeBase_MR_ObjTreeTraits(MR_AABBTreeObjects *object);

/// Generated from a constructor of class `MR::AABBTreeObjects`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeObjects_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeObjects *MR_AABBTreeObjects_ConstructFromAnother(MR_PassBy _other_pass_by, MR_AABBTreeObjects *_other);

/// creates tree for given set of objects each with its own transformation
/// Generated from a constructor of class `MR::AABBTreeObjects`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AABBTreeObjects_Destroy()` to free it when you're done using it.
MRC_API MR_AABBTreeObjects *MR_AABBTreeObjects_Construct(MR_PassBy objs_pass_by, MR_Vector_MR_MeshOrPointsXf_MR_ObjId *objs);

/// Destroys a heap-allocated instance of `MR_AABBTreeObjects`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreeObjects_Destroy(const MR_AABBTreeObjects *_this);

/// Destroys a heap-allocated array of `MR_AABBTreeObjects`. Does nothing if the pointer is null.
MRC_API void MR_AABBTreeObjects_DestroyArray(const MR_AABBTreeObjects *_this);

/// Generated from a method of class `MR::AABBTreeObjects` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AABBTreeObjects *MR_AABBTreeObjects_AssignFromAnother(MR_AABBTreeObjects *_this, MR_PassBy _other_pass_by, MR_AABBTreeObjects *_other);

/// gets object by its id
/// Generated from a method of class `MR::AABBTreeObjects` named `obj`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshOrPoints *MR_AABBTreeObjects_obj(const MR_AABBTreeObjects *_this, MR_ObjId oi);

/// gets transformation from local space of given object to world space
/// Generated from a method of class `MR::AABBTreeObjects` named `toWorld`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *MR_AABBTreeObjects_toWorld(const MR_AABBTreeObjects *_this, MR_ObjId oi);

/// gets transformation from world space to local space of given object
/// Generated from a method of class `MR::AABBTreeObjects` named `toLocal`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *MR_AABBTreeObjects_toLocal_1(const MR_AABBTreeObjects *_this, MR_ObjId oi);

/// gets mapping: objId -> its transformation from world space to local space
/// Generated from a method of class `MR::AABBTreeObjects` named `toLocal`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector_MR_AffineXf3f_MR_ObjId *MR_AABBTreeObjects_toLocal_0(const MR_AABBTreeObjects *_this);

#ifdef __cplusplus
} // extern "C"
#endif
