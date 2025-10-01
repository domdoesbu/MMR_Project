// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_EdgeId MR_EdgeId; // Defined in `#include <MRCMesh/MRId.h>`.
typedef struct MR_FaceId MR_FaceId; // Defined in `#include <MRCMesh/MRId.h>`.
typedef struct MR_GraphEdgeId MR_GraphEdgeId; // Defined in `#include <MRCMesh/MRId.h>`.
typedef struct MR_GraphVertId MR_GraphVertId; // Defined in `#include <MRCMesh/MRId.h>`.
typedef struct MR_Id_MR_ICPElemtTag MR_Id_MR_ICPElemtTag; // Defined in `#include <MRCMesh/MRId.h>`.
typedef struct MR_NodeId MR_NodeId; // Defined in `#include <MRCMesh/MRId.h>`.
typedef struct MR_ObjId MR_ObjId; // Defined in `#include <MRCMesh/MRId.h>`.
typedef struct MR_PixelId MR_PixelId; // Defined in `#include <MRCMesh/MRId.h>`.
typedef struct MR_RegionId MR_RegionId; // Defined in `#include <MRCMesh/MRId.h>`.
typedef struct MR_TextureId MR_TextureId; // Defined in `#include <MRCMesh/MRId.h>`.
typedef struct MR_UndirectedEdgeId MR_UndirectedEdgeId; // Defined in `#include <MRCMesh/MRId.h>`.
typedef struct MR_VertId MR_VertId; // Defined in `#include <MRCMesh/MRId.h>`.
typedef struct MR_VoxelId MR_VoxelId; // Defined in `#include <MRCMesh/MRId.h>`.


// this class is similar to T, but does not make default initialization of the fields for best performance
/// Generated from class `MR::NoDefInit<MR::UndirectedEdgeId>`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::UndirectedEdgeId`
typedef struct MR_NoDefInit_MR_UndirectedEdgeId MR_NoDefInit_MR_UndirectedEdgeId;

// this class is similar to T, but does not make default initialization of the fields for best performance
/// Generated from class `MR::NoDefInit<MR::FaceId>`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::FaceId`
typedef struct MR_NoDefInit_MR_FaceId MR_NoDefInit_MR_FaceId;

// this class is similar to T, but does not make default initialization of the fields for best performance
/// Generated from class `MR::NoDefInit<MR::VertId>`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::VertId`
typedef struct MR_NoDefInit_MR_VertId MR_NoDefInit_MR_VertId;

// this class is similar to T, but does not make default initialization of the fields for best performance
/// Generated from class `MR::NoDefInit<MR::EdgeId>`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::EdgeId`
typedef struct MR_NoDefInit_MR_EdgeId MR_NoDefInit_MR_EdgeId;

// this class is similar to T, but does not make default initialization of the fields for best performance
/// Generated from class `MR::NoDefInit<MR::ObjId>`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::ObjId`
typedef struct MR_NoDefInit_MR_ObjId MR_NoDefInit_MR_ObjId;

// this class is similar to T, but does not make default initialization of the fields for best performance
/// Generated from class `MR::NoDefInit<MR::GraphVertId>`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::GraphVertId`
typedef struct MR_NoDefInit_MR_GraphVertId MR_NoDefInit_MR_GraphVertId;

// this class is similar to T, but does not make default initialization of the fields for best performance
/// Generated from class `MR::NoDefInit<MR::GraphEdgeId>`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::GraphEdgeId`
typedef struct MR_NoDefInit_MR_GraphEdgeId MR_NoDefInit_MR_GraphEdgeId;

// this class is similar to T, but does not make default initialization of the fields for best performance
/// Generated from class `MR::NoDefInit<MR::VoxelId>`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::VoxelId`
typedef struct MR_NoDefInit_MR_VoxelId MR_NoDefInit_MR_VoxelId;

// this class is similar to T, but does not make default initialization of the fields for best performance
/// Generated from class `MR::NoDefInit<MR::PixelId>`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::PixelId`
typedef struct MR_NoDefInit_MR_PixelId MR_NoDefInit_MR_PixelId;

// this class is similar to T, but does not make default initialization of the fields for best performance
/// Generated from class `MR::NoDefInit<MR::RegionId>`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::RegionId`
typedef struct MR_NoDefInit_MR_RegionId MR_NoDefInit_MR_RegionId;

// this class is similar to T, but does not make default initialization of the fields for best performance
/// Generated from class `MR::NoDefInit<MR::NodeId>`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::NodeId`
typedef struct MR_NoDefInit_MR_NodeId MR_NoDefInit_MR_NodeId;

// this class is similar to T, but does not make default initialization of the fields for best performance
/// Generated from class `MR::NoDefInit<MR::TextureId>`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::TextureId`
typedef struct MR_NoDefInit_MR_TextureId MR_NoDefInit_MR_TextureId;

// this class is similar to T, but does not make default initialization of the fields for best performance
/// Generated from class `MR::NoDefInit<MR::Id<MR::ICPElemtTag>>`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::Id<MR::ICPElemtTag>`
typedef struct MR_NoDefInit_MR_Id_MR_ICPElemtTag MR_NoDefInit_MR_Id_MR_ICPElemtTag;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_UndirectedEdgeId *MR_NoDefInit_MR_UndirectedEdgeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoDefInit_MR_UndirectedEdgeId_DestroyArray()`.
/// Use `MR_NoDefInit_MR_UndirectedEdgeId_OffsetMutablePtr()` and `MR_NoDefInit_MR_UndirectedEdgeId_OffsetPtr()` to access the array elements.
MRC_API MR_NoDefInit_MR_UndirectedEdgeId *MR_NoDefInit_MR_UndirectedEdgeId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoDefInit_MR_UndirectedEdgeId *MR_NoDefInit_MR_UndirectedEdgeId_OffsetPtr(const MR_NoDefInit_MR_UndirectedEdgeId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoDefInit_MR_UndirectedEdgeId *MR_NoDefInit_MR_UndirectedEdgeId_OffsetMutablePtr(MR_NoDefInit_MR_UndirectedEdgeId *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::NoDefInit<MR::UndirectedEdgeId>` to its base class `MR::UndirectedEdgeId`.
/// This version is acting on mutable pointers.
MRC_API const MR_UndirectedEdgeId *MR_NoDefInit_MR_UndirectedEdgeId_UpcastTo_MR_UndirectedEdgeId(const MR_NoDefInit_MR_UndirectedEdgeId *object);

/// Upcasts an instance of `MR::NoDefInit<MR::UndirectedEdgeId>` to its base class `MR::UndirectedEdgeId`.
MRC_API MR_UndirectedEdgeId *MR_NoDefInit_MR_UndirectedEdgeId_MutableUpcastTo_MR_UndirectedEdgeId(MR_NoDefInit_MR_UndirectedEdgeId *object);

/// Generated from a constructor of class `MR::NoDefInit<MR::UndirectedEdgeId>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_UndirectedEdgeId *MR_NoDefInit_MR_UndirectedEdgeId_ConstructFromAnother(const MR_NoDefInit_MR_UndirectedEdgeId *_other);

/// Destroys a heap-allocated instance of `MR_NoDefInit_MR_UndirectedEdgeId`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_UndirectedEdgeId_Destroy(const MR_NoDefInit_MR_UndirectedEdgeId *_this);

/// Destroys a heap-allocated array of `MR_NoDefInit_MR_UndirectedEdgeId`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_UndirectedEdgeId_DestroyArray(const MR_NoDefInit_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::NoDefInit<MR::UndirectedEdgeId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_UndirectedEdgeId *MR_NoDefInit_MR_UndirectedEdgeId_AssignFromAnother(MR_NoDefInit_MR_UndirectedEdgeId *_this, const MR_NoDefInit_MR_UndirectedEdgeId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_FaceId_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_FaceId *MR_NoDefInit_MR_FaceId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoDefInit_MR_FaceId_DestroyArray()`.
/// Use `MR_NoDefInit_MR_FaceId_OffsetMutablePtr()` and `MR_NoDefInit_MR_FaceId_OffsetPtr()` to access the array elements.
MRC_API MR_NoDefInit_MR_FaceId *MR_NoDefInit_MR_FaceId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoDefInit_MR_FaceId *MR_NoDefInit_MR_FaceId_OffsetPtr(const MR_NoDefInit_MR_FaceId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoDefInit_MR_FaceId *MR_NoDefInit_MR_FaceId_OffsetMutablePtr(MR_NoDefInit_MR_FaceId *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::NoDefInit<MR::FaceId>` to its base class `MR::FaceId`.
/// This version is acting on mutable pointers.
MRC_API const MR_FaceId *MR_NoDefInit_MR_FaceId_UpcastTo_MR_FaceId(const MR_NoDefInit_MR_FaceId *object);

/// Upcasts an instance of `MR::NoDefInit<MR::FaceId>` to its base class `MR::FaceId`.
MRC_API MR_FaceId *MR_NoDefInit_MR_FaceId_MutableUpcastTo_MR_FaceId(MR_NoDefInit_MR_FaceId *object);

/// Generated from a constructor of class `MR::NoDefInit<MR::FaceId>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_FaceId_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_FaceId *MR_NoDefInit_MR_FaceId_ConstructFromAnother(const MR_NoDefInit_MR_FaceId *_other);

/// Destroys a heap-allocated instance of `MR_NoDefInit_MR_FaceId`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_FaceId_Destroy(const MR_NoDefInit_MR_FaceId *_this);

/// Destroys a heap-allocated array of `MR_NoDefInit_MR_FaceId`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_FaceId_DestroyArray(const MR_NoDefInit_MR_FaceId *_this);

/// Generated from a method of class `MR::NoDefInit<MR::FaceId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_FaceId *MR_NoDefInit_MR_FaceId_AssignFromAnother(MR_NoDefInit_MR_FaceId *_this, const MR_NoDefInit_MR_FaceId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_VertId *MR_NoDefInit_MR_VertId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoDefInit_MR_VertId_DestroyArray()`.
/// Use `MR_NoDefInit_MR_VertId_OffsetMutablePtr()` and `MR_NoDefInit_MR_VertId_OffsetPtr()` to access the array elements.
MRC_API MR_NoDefInit_MR_VertId *MR_NoDefInit_MR_VertId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoDefInit_MR_VertId *MR_NoDefInit_MR_VertId_OffsetPtr(const MR_NoDefInit_MR_VertId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoDefInit_MR_VertId *MR_NoDefInit_MR_VertId_OffsetMutablePtr(MR_NoDefInit_MR_VertId *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::NoDefInit<MR::VertId>` to its base class `MR::VertId`.
/// This version is acting on mutable pointers.
MRC_API const MR_VertId *MR_NoDefInit_MR_VertId_UpcastTo_MR_VertId(const MR_NoDefInit_MR_VertId *object);

/// Upcasts an instance of `MR::NoDefInit<MR::VertId>` to its base class `MR::VertId`.
MRC_API MR_VertId *MR_NoDefInit_MR_VertId_MutableUpcastTo_MR_VertId(MR_NoDefInit_MR_VertId *object);

/// Generated from a constructor of class `MR::NoDefInit<MR::VertId>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_VertId *MR_NoDefInit_MR_VertId_ConstructFromAnother(const MR_NoDefInit_MR_VertId *_other);

/// Destroys a heap-allocated instance of `MR_NoDefInit_MR_VertId`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_VertId_Destroy(const MR_NoDefInit_MR_VertId *_this);

/// Destroys a heap-allocated array of `MR_NoDefInit_MR_VertId`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_VertId_DestroyArray(const MR_NoDefInit_MR_VertId *_this);

/// Generated from a method of class `MR::NoDefInit<MR::VertId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_VertId *MR_NoDefInit_MR_VertId_AssignFromAnother(MR_NoDefInit_MR_VertId *_this, const MR_NoDefInit_MR_VertId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_EdgeId *MR_NoDefInit_MR_EdgeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoDefInit_MR_EdgeId_DestroyArray()`.
/// Use `MR_NoDefInit_MR_EdgeId_OffsetMutablePtr()` and `MR_NoDefInit_MR_EdgeId_OffsetPtr()` to access the array elements.
MRC_API MR_NoDefInit_MR_EdgeId *MR_NoDefInit_MR_EdgeId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoDefInit_MR_EdgeId *MR_NoDefInit_MR_EdgeId_OffsetPtr(const MR_NoDefInit_MR_EdgeId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoDefInit_MR_EdgeId *MR_NoDefInit_MR_EdgeId_OffsetMutablePtr(MR_NoDefInit_MR_EdgeId *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::NoDefInit<MR::EdgeId>` to its base class `MR::EdgeId`.
/// This version is acting on mutable pointers.
MRC_API const MR_EdgeId *MR_NoDefInit_MR_EdgeId_UpcastTo_MR_EdgeId(const MR_NoDefInit_MR_EdgeId *object);

/// Upcasts an instance of `MR::NoDefInit<MR::EdgeId>` to its base class `MR::EdgeId`.
MRC_API MR_EdgeId *MR_NoDefInit_MR_EdgeId_MutableUpcastTo_MR_EdgeId(MR_NoDefInit_MR_EdgeId *object);

/// Generated from a constructor of class `MR::NoDefInit<MR::EdgeId>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_EdgeId *MR_NoDefInit_MR_EdgeId_ConstructFromAnother(const MR_NoDefInit_MR_EdgeId *_other);

/// Destroys a heap-allocated instance of `MR_NoDefInit_MR_EdgeId`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_EdgeId_Destroy(const MR_NoDefInit_MR_EdgeId *_this);

/// Destroys a heap-allocated array of `MR_NoDefInit_MR_EdgeId`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_EdgeId_DestroyArray(const MR_NoDefInit_MR_EdgeId *_this);

/// Generated from a method of class `MR::NoDefInit<MR::EdgeId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_EdgeId *MR_NoDefInit_MR_EdgeId_AssignFromAnother(MR_NoDefInit_MR_EdgeId *_this, const MR_NoDefInit_MR_EdgeId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_ObjId_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_ObjId *MR_NoDefInit_MR_ObjId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoDefInit_MR_ObjId_DestroyArray()`.
/// Use `MR_NoDefInit_MR_ObjId_OffsetMutablePtr()` and `MR_NoDefInit_MR_ObjId_OffsetPtr()` to access the array elements.
MRC_API MR_NoDefInit_MR_ObjId *MR_NoDefInit_MR_ObjId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoDefInit_MR_ObjId *MR_NoDefInit_MR_ObjId_OffsetPtr(const MR_NoDefInit_MR_ObjId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoDefInit_MR_ObjId *MR_NoDefInit_MR_ObjId_OffsetMutablePtr(MR_NoDefInit_MR_ObjId *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::NoDefInit<MR::ObjId>` to its base class `MR::ObjId`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjId *MR_NoDefInit_MR_ObjId_UpcastTo_MR_ObjId(const MR_NoDefInit_MR_ObjId *object);

/// Upcasts an instance of `MR::NoDefInit<MR::ObjId>` to its base class `MR::ObjId`.
MRC_API MR_ObjId *MR_NoDefInit_MR_ObjId_MutableUpcastTo_MR_ObjId(MR_NoDefInit_MR_ObjId *object);

/// Generated from a constructor of class `MR::NoDefInit<MR::ObjId>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_ObjId_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_ObjId *MR_NoDefInit_MR_ObjId_ConstructFromAnother(const MR_NoDefInit_MR_ObjId *_other);

/// Destroys a heap-allocated instance of `MR_NoDefInit_MR_ObjId`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_ObjId_Destroy(const MR_NoDefInit_MR_ObjId *_this);

/// Destroys a heap-allocated array of `MR_NoDefInit_MR_ObjId`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_ObjId_DestroyArray(const MR_NoDefInit_MR_ObjId *_this);

/// Generated from a method of class `MR::NoDefInit<MR::ObjId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_ObjId *MR_NoDefInit_MR_ObjId_AssignFromAnother(MR_NoDefInit_MR_ObjId *_this, const MR_NoDefInit_MR_ObjId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_GraphVertId_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_GraphVertId *MR_NoDefInit_MR_GraphVertId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoDefInit_MR_GraphVertId_DestroyArray()`.
/// Use `MR_NoDefInit_MR_GraphVertId_OffsetMutablePtr()` and `MR_NoDefInit_MR_GraphVertId_OffsetPtr()` to access the array elements.
MRC_API MR_NoDefInit_MR_GraphVertId *MR_NoDefInit_MR_GraphVertId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoDefInit_MR_GraphVertId *MR_NoDefInit_MR_GraphVertId_OffsetPtr(const MR_NoDefInit_MR_GraphVertId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoDefInit_MR_GraphVertId *MR_NoDefInit_MR_GraphVertId_OffsetMutablePtr(MR_NoDefInit_MR_GraphVertId *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::NoDefInit<MR::GraphVertId>` to its base class `MR::GraphVertId`.
/// This version is acting on mutable pointers.
MRC_API const MR_GraphVertId *MR_NoDefInit_MR_GraphVertId_UpcastTo_MR_GraphVertId(const MR_NoDefInit_MR_GraphVertId *object);

/// Upcasts an instance of `MR::NoDefInit<MR::GraphVertId>` to its base class `MR::GraphVertId`.
MRC_API MR_GraphVertId *MR_NoDefInit_MR_GraphVertId_MutableUpcastTo_MR_GraphVertId(MR_NoDefInit_MR_GraphVertId *object);

/// Generated from a constructor of class `MR::NoDefInit<MR::GraphVertId>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_GraphVertId_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_GraphVertId *MR_NoDefInit_MR_GraphVertId_ConstructFromAnother(const MR_NoDefInit_MR_GraphVertId *_other);

/// Destroys a heap-allocated instance of `MR_NoDefInit_MR_GraphVertId`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_GraphVertId_Destroy(const MR_NoDefInit_MR_GraphVertId *_this);

/// Destroys a heap-allocated array of `MR_NoDefInit_MR_GraphVertId`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_GraphVertId_DestroyArray(const MR_NoDefInit_MR_GraphVertId *_this);

/// Generated from a method of class `MR::NoDefInit<MR::GraphVertId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_GraphVertId *MR_NoDefInit_MR_GraphVertId_AssignFromAnother(MR_NoDefInit_MR_GraphVertId *_this, const MR_NoDefInit_MR_GraphVertId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_GraphEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_GraphEdgeId *MR_NoDefInit_MR_GraphEdgeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoDefInit_MR_GraphEdgeId_DestroyArray()`.
/// Use `MR_NoDefInit_MR_GraphEdgeId_OffsetMutablePtr()` and `MR_NoDefInit_MR_GraphEdgeId_OffsetPtr()` to access the array elements.
MRC_API MR_NoDefInit_MR_GraphEdgeId *MR_NoDefInit_MR_GraphEdgeId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoDefInit_MR_GraphEdgeId *MR_NoDefInit_MR_GraphEdgeId_OffsetPtr(const MR_NoDefInit_MR_GraphEdgeId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoDefInit_MR_GraphEdgeId *MR_NoDefInit_MR_GraphEdgeId_OffsetMutablePtr(MR_NoDefInit_MR_GraphEdgeId *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::NoDefInit<MR::GraphEdgeId>` to its base class `MR::GraphEdgeId`.
/// This version is acting on mutable pointers.
MRC_API const MR_GraphEdgeId *MR_NoDefInit_MR_GraphEdgeId_UpcastTo_MR_GraphEdgeId(const MR_NoDefInit_MR_GraphEdgeId *object);

/// Upcasts an instance of `MR::NoDefInit<MR::GraphEdgeId>` to its base class `MR::GraphEdgeId`.
MRC_API MR_GraphEdgeId *MR_NoDefInit_MR_GraphEdgeId_MutableUpcastTo_MR_GraphEdgeId(MR_NoDefInit_MR_GraphEdgeId *object);

/// Generated from a constructor of class `MR::NoDefInit<MR::GraphEdgeId>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_GraphEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_GraphEdgeId *MR_NoDefInit_MR_GraphEdgeId_ConstructFromAnother(const MR_NoDefInit_MR_GraphEdgeId *_other);

/// Destroys a heap-allocated instance of `MR_NoDefInit_MR_GraphEdgeId`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_GraphEdgeId_Destroy(const MR_NoDefInit_MR_GraphEdgeId *_this);

/// Destroys a heap-allocated array of `MR_NoDefInit_MR_GraphEdgeId`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_GraphEdgeId_DestroyArray(const MR_NoDefInit_MR_GraphEdgeId *_this);

/// Generated from a method of class `MR::NoDefInit<MR::GraphEdgeId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_GraphEdgeId *MR_NoDefInit_MR_GraphEdgeId_AssignFromAnother(MR_NoDefInit_MR_GraphEdgeId *_this, const MR_NoDefInit_MR_GraphEdgeId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_VoxelId_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_VoxelId *MR_NoDefInit_MR_VoxelId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoDefInit_MR_VoxelId_DestroyArray()`.
/// Use `MR_NoDefInit_MR_VoxelId_OffsetMutablePtr()` and `MR_NoDefInit_MR_VoxelId_OffsetPtr()` to access the array elements.
MRC_API MR_NoDefInit_MR_VoxelId *MR_NoDefInit_MR_VoxelId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoDefInit_MR_VoxelId *MR_NoDefInit_MR_VoxelId_OffsetPtr(const MR_NoDefInit_MR_VoxelId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoDefInit_MR_VoxelId *MR_NoDefInit_MR_VoxelId_OffsetMutablePtr(MR_NoDefInit_MR_VoxelId *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::NoDefInit<MR::VoxelId>` to its base class `MR::VoxelId`.
/// This version is acting on mutable pointers.
MRC_API const MR_VoxelId *MR_NoDefInit_MR_VoxelId_UpcastTo_MR_VoxelId(const MR_NoDefInit_MR_VoxelId *object);

/// Upcasts an instance of `MR::NoDefInit<MR::VoxelId>` to its base class `MR::VoxelId`.
MRC_API MR_VoxelId *MR_NoDefInit_MR_VoxelId_MutableUpcastTo_MR_VoxelId(MR_NoDefInit_MR_VoxelId *object);

/// Generated from a constructor of class `MR::NoDefInit<MR::VoxelId>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_VoxelId_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_VoxelId *MR_NoDefInit_MR_VoxelId_ConstructFromAnother(const MR_NoDefInit_MR_VoxelId *_other);

/// Destroys a heap-allocated instance of `MR_NoDefInit_MR_VoxelId`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_VoxelId_Destroy(const MR_NoDefInit_MR_VoxelId *_this);

/// Destroys a heap-allocated array of `MR_NoDefInit_MR_VoxelId`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_VoxelId_DestroyArray(const MR_NoDefInit_MR_VoxelId *_this);

/// Generated from a method of class `MR::NoDefInit<MR::VoxelId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_VoxelId *MR_NoDefInit_MR_VoxelId_AssignFromAnother(MR_NoDefInit_MR_VoxelId *_this, const MR_NoDefInit_MR_VoxelId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_PixelId_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_PixelId *MR_NoDefInit_MR_PixelId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoDefInit_MR_PixelId_DestroyArray()`.
/// Use `MR_NoDefInit_MR_PixelId_OffsetMutablePtr()` and `MR_NoDefInit_MR_PixelId_OffsetPtr()` to access the array elements.
MRC_API MR_NoDefInit_MR_PixelId *MR_NoDefInit_MR_PixelId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoDefInit_MR_PixelId *MR_NoDefInit_MR_PixelId_OffsetPtr(const MR_NoDefInit_MR_PixelId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoDefInit_MR_PixelId *MR_NoDefInit_MR_PixelId_OffsetMutablePtr(MR_NoDefInit_MR_PixelId *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::NoDefInit<MR::PixelId>` to its base class `MR::PixelId`.
/// This version is acting on mutable pointers.
MRC_API const MR_PixelId *MR_NoDefInit_MR_PixelId_UpcastTo_MR_PixelId(const MR_NoDefInit_MR_PixelId *object);

/// Upcasts an instance of `MR::NoDefInit<MR::PixelId>` to its base class `MR::PixelId`.
MRC_API MR_PixelId *MR_NoDefInit_MR_PixelId_MutableUpcastTo_MR_PixelId(MR_NoDefInit_MR_PixelId *object);

/// Generated from a constructor of class `MR::NoDefInit<MR::PixelId>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_PixelId_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_PixelId *MR_NoDefInit_MR_PixelId_ConstructFromAnother(const MR_NoDefInit_MR_PixelId *_other);

/// Destroys a heap-allocated instance of `MR_NoDefInit_MR_PixelId`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_PixelId_Destroy(const MR_NoDefInit_MR_PixelId *_this);

/// Destroys a heap-allocated array of `MR_NoDefInit_MR_PixelId`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_PixelId_DestroyArray(const MR_NoDefInit_MR_PixelId *_this);

/// Generated from a method of class `MR::NoDefInit<MR::PixelId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_PixelId *MR_NoDefInit_MR_PixelId_AssignFromAnother(MR_NoDefInit_MR_PixelId *_this, const MR_NoDefInit_MR_PixelId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_RegionId_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_RegionId *MR_NoDefInit_MR_RegionId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoDefInit_MR_RegionId_DestroyArray()`.
/// Use `MR_NoDefInit_MR_RegionId_OffsetMutablePtr()` and `MR_NoDefInit_MR_RegionId_OffsetPtr()` to access the array elements.
MRC_API MR_NoDefInit_MR_RegionId *MR_NoDefInit_MR_RegionId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoDefInit_MR_RegionId *MR_NoDefInit_MR_RegionId_OffsetPtr(const MR_NoDefInit_MR_RegionId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoDefInit_MR_RegionId *MR_NoDefInit_MR_RegionId_OffsetMutablePtr(MR_NoDefInit_MR_RegionId *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::NoDefInit<MR::RegionId>` to its base class `MR::RegionId`.
/// This version is acting on mutable pointers.
MRC_API const MR_RegionId *MR_NoDefInit_MR_RegionId_UpcastTo_MR_RegionId(const MR_NoDefInit_MR_RegionId *object);

/// Upcasts an instance of `MR::NoDefInit<MR::RegionId>` to its base class `MR::RegionId`.
MRC_API MR_RegionId *MR_NoDefInit_MR_RegionId_MutableUpcastTo_MR_RegionId(MR_NoDefInit_MR_RegionId *object);

/// Generated from a constructor of class `MR::NoDefInit<MR::RegionId>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_RegionId_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_RegionId *MR_NoDefInit_MR_RegionId_ConstructFromAnother(const MR_NoDefInit_MR_RegionId *_other);

/// Destroys a heap-allocated instance of `MR_NoDefInit_MR_RegionId`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_RegionId_Destroy(const MR_NoDefInit_MR_RegionId *_this);

/// Destroys a heap-allocated array of `MR_NoDefInit_MR_RegionId`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_RegionId_DestroyArray(const MR_NoDefInit_MR_RegionId *_this);

/// Generated from a method of class `MR::NoDefInit<MR::RegionId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_RegionId *MR_NoDefInit_MR_RegionId_AssignFromAnother(MR_NoDefInit_MR_RegionId *_this, const MR_NoDefInit_MR_RegionId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_NodeId_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_NodeId *MR_NoDefInit_MR_NodeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoDefInit_MR_NodeId_DestroyArray()`.
/// Use `MR_NoDefInit_MR_NodeId_OffsetMutablePtr()` and `MR_NoDefInit_MR_NodeId_OffsetPtr()` to access the array elements.
MRC_API MR_NoDefInit_MR_NodeId *MR_NoDefInit_MR_NodeId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoDefInit_MR_NodeId *MR_NoDefInit_MR_NodeId_OffsetPtr(const MR_NoDefInit_MR_NodeId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoDefInit_MR_NodeId *MR_NoDefInit_MR_NodeId_OffsetMutablePtr(MR_NoDefInit_MR_NodeId *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::NoDefInit<MR::NodeId>` to its base class `MR::NodeId`.
/// This version is acting on mutable pointers.
MRC_API const MR_NodeId *MR_NoDefInit_MR_NodeId_UpcastTo_MR_NodeId(const MR_NoDefInit_MR_NodeId *object);

/// Upcasts an instance of `MR::NoDefInit<MR::NodeId>` to its base class `MR::NodeId`.
MRC_API MR_NodeId *MR_NoDefInit_MR_NodeId_MutableUpcastTo_MR_NodeId(MR_NoDefInit_MR_NodeId *object);

/// Generated from a constructor of class `MR::NoDefInit<MR::NodeId>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_NodeId_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_NodeId *MR_NoDefInit_MR_NodeId_ConstructFromAnother(const MR_NoDefInit_MR_NodeId *_other);

/// Destroys a heap-allocated instance of `MR_NoDefInit_MR_NodeId`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_NodeId_Destroy(const MR_NoDefInit_MR_NodeId *_this);

/// Destroys a heap-allocated array of `MR_NoDefInit_MR_NodeId`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_NodeId_DestroyArray(const MR_NoDefInit_MR_NodeId *_this);

/// Generated from a method of class `MR::NoDefInit<MR::NodeId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_NodeId *MR_NoDefInit_MR_NodeId_AssignFromAnother(MR_NoDefInit_MR_NodeId *_this, const MR_NoDefInit_MR_NodeId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_TextureId_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_TextureId *MR_NoDefInit_MR_TextureId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoDefInit_MR_TextureId_DestroyArray()`.
/// Use `MR_NoDefInit_MR_TextureId_OffsetMutablePtr()` and `MR_NoDefInit_MR_TextureId_OffsetPtr()` to access the array elements.
MRC_API MR_NoDefInit_MR_TextureId *MR_NoDefInit_MR_TextureId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoDefInit_MR_TextureId *MR_NoDefInit_MR_TextureId_OffsetPtr(const MR_NoDefInit_MR_TextureId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoDefInit_MR_TextureId *MR_NoDefInit_MR_TextureId_OffsetMutablePtr(MR_NoDefInit_MR_TextureId *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::NoDefInit<MR::TextureId>` to its base class `MR::TextureId`.
/// This version is acting on mutable pointers.
MRC_API const MR_TextureId *MR_NoDefInit_MR_TextureId_UpcastTo_MR_TextureId(const MR_NoDefInit_MR_TextureId *object);

/// Upcasts an instance of `MR::NoDefInit<MR::TextureId>` to its base class `MR::TextureId`.
MRC_API MR_TextureId *MR_NoDefInit_MR_TextureId_MutableUpcastTo_MR_TextureId(MR_NoDefInit_MR_TextureId *object);

/// Generated from a constructor of class `MR::NoDefInit<MR::TextureId>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_TextureId_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_TextureId *MR_NoDefInit_MR_TextureId_ConstructFromAnother(const MR_NoDefInit_MR_TextureId *_other);

/// Destroys a heap-allocated instance of `MR_NoDefInit_MR_TextureId`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_TextureId_Destroy(const MR_NoDefInit_MR_TextureId *_this);

/// Destroys a heap-allocated array of `MR_NoDefInit_MR_TextureId`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_TextureId_DestroyArray(const MR_NoDefInit_MR_TextureId *_this);

/// Generated from a method of class `MR::NoDefInit<MR::TextureId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_TextureId *MR_NoDefInit_MR_TextureId_AssignFromAnother(MR_NoDefInit_MR_TextureId *_this, const MR_NoDefInit_MR_TextureId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_Id_MR_ICPElemtTag *MR_NoDefInit_MR_Id_MR_ICPElemtTag_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoDefInit_MR_Id_MR_ICPElemtTag_DestroyArray()`.
/// Use `MR_NoDefInit_MR_Id_MR_ICPElemtTag_OffsetMutablePtr()` and `MR_NoDefInit_MR_Id_MR_ICPElemtTag_OffsetPtr()` to access the array elements.
MRC_API MR_NoDefInit_MR_Id_MR_ICPElemtTag *MR_NoDefInit_MR_Id_MR_ICPElemtTag_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoDefInit_MR_Id_MR_ICPElemtTag *MR_NoDefInit_MR_Id_MR_ICPElemtTag_OffsetPtr(const MR_NoDefInit_MR_Id_MR_ICPElemtTag *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoDefInit_MR_Id_MR_ICPElemtTag *MR_NoDefInit_MR_Id_MR_ICPElemtTag_OffsetMutablePtr(MR_NoDefInit_MR_Id_MR_ICPElemtTag *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::NoDefInit<MR::Id<MR::ICPElemtTag>>` to its base class `MR::Id<MR::ICPElemtTag>`.
/// This version is acting on mutable pointers.
MRC_API const MR_Id_MR_ICPElemtTag *MR_NoDefInit_MR_Id_MR_ICPElemtTag_UpcastTo_MR_Id_MR_ICPElemtTag(const MR_NoDefInit_MR_Id_MR_ICPElemtTag *object);

/// Upcasts an instance of `MR::NoDefInit<MR::Id<MR::ICPElemtTag>>` to its base class `MR::Id<MR::ICPElemtTag>`.
MRC_API MR_Id_MR_ICPElemtTag *MR_NoDefInit_MR_Id_MR_ICPElemtTag_MutableUpcastTo_MR_Id_MR_ICPElemtTag(MR_NoDefInit_MR_Id_MR_ICPElemtTag *object);

/// Generated from a constructor of class `MR::NoDefInit<MR::Id<MR::ICPElemtTag>>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoDefInit_MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_NoDefInit_MR_Id_MR_ICPElemtTag *MR_NoDefInit_MR_Id_MR_ICPElemtTag_ConstructFromAnother(const MR_NoDefInit_MR_Id_MR_ICPElemtTag *_other);

/// Destroys a heap-allocated instance of `MR_NoDefInit_MR_Id_MR_ICPElemtTag`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_Id_MR_ICPElemtTag_Destroy(const MR_NoDefInit_MR_Id_MR_ICPElemtTag *_this);

/// Destroys a heap-allocated array of `MR_NoDefInit_MR_Id_MR_ICPElemtTag`. Does nothing if the pointer is null.
MRC_API void MR_NoDefInit_MR_Id_MR_ICPElemtTag_DestroyArray(const MR_NoDefInit_MR_Id_MR_ICPElemtTag *_this);

/// Generated from a method of class `MR::NoDefInit<MR::Id<MR::ICPElemtTag>>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_Id_MR_ICPElemtTag *MR_NoDefInit_MR_Id_MR_ICPElemtTag_AssignFromAnother(MR_NoDefInit_MR_Id_MR_ICPElemtTag *_this, const MR_NoDefInit_MR_Id_MR_ICPElemtTag *_other);

#ifdef __cplusplus
} // extern "C"
#endif
