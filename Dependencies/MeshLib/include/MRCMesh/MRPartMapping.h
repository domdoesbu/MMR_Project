// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceMap MR_FaceMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_MapOrHashMap_MR_FaceId_MR_FaceId MR_MapOrHashMap_MR_FaceId_MR_FaceId; // Defined in `#include <MRCMesh/MRMapOrHashMap.h>`.
typedef struct MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId; // Defined in `#include <MRCMesh/MRMapOrHashMap.h>`.
typedef struct MR_MapOrHashMap_MR_VertId_MR_VertId MR_MapOrHashMap_MR_VertId_MR_VertId; // Defined in `#include <MRCMesh/MRMapOrHashMap.h>`.
typedef struct MR_VertMap MR_VertMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_WholeEdgeMap MR_WholeEdgeMap; // Defined in `#include <MRCMesh/MRVector.h>`.


/// mapping among elements of source mesh, from which a part is taken, and target mesh
/// Generated from class `MR::PartMapping`.
typedef struct MR_PartMapping MR_PartMapping;

/// use this adapter to call functions expecting PartMapping parameter to receive src2tgt dense maps
/// Generated from class `MR::Src2TgtMaps`.
typedef struct MR_Src2TgtMaps MR_Src2TgtMaps;

/// use this adapter to call functions expecting PartMapping parameter to receive tgt2src dense maps
/// Generated from class `MR::Tgt2SrcMaps`.
typedef struct MR_Tgt2SrcMaps MR_Tgt2SrcMaps;

// source.id -> target.id
// each map here can be either dense vector or hash map, the type is set by the user and preserved by mesh copying functions;
// dense maps are better by speed and memory when source mesh is packed and must be copied entirely;
// hash maps minimize memory consumption when only a small portion of source mesh is copied
/// Returns a pointer to a member variable of class `MR::PartMapping` named `src2tgtFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MapOrHashMap_MR_FaceId_MR_FaceId *const *MR_PartMapping_Get_src2tgtFaces(const MR_PartMapping *_this);

// source.id -> target.id
// each map here can be either dense vector or hash map, the type is set by the user and preserved by mesh copying functions;
// dense maps are better by speed and memory when source mesh is packed and must be copied entirely;
// hash maps minimize memory consumption when only a small portion of source mesh is copied
/// Modifies a member variable of class `MR::PartMapping` named `src2tgtFaces`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PartMapping_Set_src2tgtFaces(MR_PartMapping *_this, MR_MapOrHashMap_MR_FaceId_MR_FaceId *value);

// source.id -> target.id
// each map here can be either dense vector or hash map, the type is set by the user and preserved by mesh copying functions;
// dense maps are better by speed and memory when source mesh is packed and must be copied entirely;
// hash maps minimize memory consumption when only a small portion of source mesh is copied
/// Returns a mutable pointer to a member variable of class `MR::PartMapping` named `src2tgtFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MapOrHashMap_MR_FaceId_MR_FaceId **MR_PartMapping_GetMutable_src2tgtFaces(MR_PartMapping *_this);

/// Returns a pointer to a member variable of class `MR::PartMapping` named `src2tgtVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MapOrHashMap_MR_VertId_MR_VertId *const *MR_PartMapping_Get_src2tgtVerts(const MR_PartMapping *_this);

/// Modifies a member variable of class `MR::PartMapping` named `src2tgtVerts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PartMapping_Set_src2tgtVerts(MR_PartMapping *_this, MR_MapOrHashMap_MR_VertId_MR_VertId *value);

/// Returns a mutable pointer to a member variable of class `MR::PartMapping` named `src2tgtVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MapOrHashMap_MR_VertId_MR_VertId **MR_PartMapping_GetMutable_src2tgtVerts(MR_PartMapping *_this);

/// Returns a pointer to a member variable of class `MR::PartMapping` named `src2tgtEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *const *MR_PartMapping_Get_src2tgtEdges(const MR_PartMapping *_this);

/// Modifies a member variable of class `MR::PartMapping` named `src2tgtEdges`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PartMapping_Set_src2tgtEdges(MR_PartMapping *_this, MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *value);

/// Returns a mutable pointer to a member variable of class `MR::PartMapping` named `src2tgtEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId **MR_PartMapping_GetMutable_src2tgtEdges(MR_PartMapping *_this);

// target.id -> source.id
// dense vectors are better by speed and memory when target mesh was empty before copying
/// Returns a pointer to a member variable of class `MR::PartMapping` named `tgt2srcFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MapOrHashMap_MR_FaceId_MR_FaceId *const *MR_PartMapping_Get_tgt2srcFaces(const MR_PartMapping *_this);

// target.id -> source.id
// dense vectors are better by speed and memory when target mesh was empty before copying
/// Modifies a member variable of class `MR::PartMapping` named `tgt2srcFaces`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PartMapping_Set_tgt2srcFaces(MR_PartMapping *_this, MR_MapOrHashMap_MR_FaceId_MR_FaceId *value);

// target.id -> source.id
// dense vectors are better by speed and memory when target mesh was empty before copying
/// Returns a mutable pointer to a member variable of class `MR::PartMapping` named `tgt2srcFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MapOrHashMap_MR_FaceId_MR_FaceId **MR_PartMapping_GetMutable_tgt2srcFaces(MR_PartMapping *_this);

/// Returns a pointer to a member variable of class `MR::PartMapping` named `tgt2srcVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MapOrHashMap_MR_VertId_MR_VertId *const *MR_PartMapping_Get_tgt2srcVerts(const MR_PartMapping *_this);

/// Modifies a member variable of class `MR::PartMapping` named `tgt2srcVerts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PartMapping_Set_tgt2srcVerts(MR_PartMapping *_this, MR_MapOrHashMap_MR_VertId_MR_VertId *value);

/// Returns a mutable pointer to a member variable of class `MR::PartMapping` named `tgt2srcVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MapOrHashMap_MR_VertId_MR_VertId **MR_PartMapping_GetMutable_tgt2srcVerts(MR_PartMapping *_this);

/// Returns a pointer to a member variable of class `MR::PartMapping` named `tgt2srcEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *const *MR_PartMapping_Get_tgt2srcEdges(const MR_PartMapping *_this);

/// Modifies a member variable of class `MR::PartMapping` named `tgt2srcEdges`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PartMapping_Set_tgt2srcEdges(MR_PartMapping *_this, MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *value);

/// Returns a mutable pointer to a member variable of class `MR::PartMapping` named `tgt2srcEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId **MR_PartMapping_GetMutable_tgt2srcEdges(MR_PartMapping *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PartMapping_Destroy()` to free it when you're done using it.
MRC_API MR_PartMapping *MR_PartMapping_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PartMapping_DestroyArray()`.
/// Use `MR_PartMapping_OffsetMutablePtr()` and `MR_PartMapping_OffsetPtr()` to access the array elements.
MRC_API MR_PartMapping *MR_PartMapping_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::PartMapping` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PartMapping_Destroy()` to free it when you're done using it.
MRC_API MR_PartMapping *MR_PartMapping_ConstructFrom(MR_MapOrHashMap_MR_FaceId_MR_FaceId *src2tgtFaces, MR_MapOrHashMap_MR_VertId_MR_VertId *src2tgtVerts, MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *src2tgtEdges, MR_MapOrHashMap_MR_FaceId_MR_FaceId *tgt2srcFaces, MR_MapOrHashMap_MR_VertId_MR_VertId *tgt2srcVerts, MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *tgt2srcEdges);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PartMapping *MR_PartMapping_OffsetPtr(const MR_PartMapping *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PartMapping *MR_PartMapping_OffsetMutablePtr(MR_PartMapping *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PartMapping`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PartMapping_Destroy()` to free it when you're done using it.
MRC_API MR_PartMapping *MR_PartMapping_ConstructFromAnother(const MR_PartMapping *_other);

/// Destroys a heap-allocated instance of `MR_PartMapping`. Does nothing if the pointer is null.
MRC_API void MR_PartMapping_Destroy(const MR_PartMapping *_this);

/// Destroys a heap-allocated array of `MR_PartMapping`. Does nothing if the pointer is null.
MRC_API void MR_PartMapping_DestroyArray(const MR_PartMapping *_this);

/// Generated from a method of class `MR::PartMapping` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PartMapping *MR_PartMapping_AssignFromAnother(MR_PartMapping *_this, const MR_PartMapping *_other);

/// clears all member maps
/// Generated from a method of class `MR::PartMapping` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PartMapping_clear(MR_PartMapping *_this);

/// Generated from a constructor of class `MR::Src2TgtMaps`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Src2TgtMaps_Destroy()` to free it when you're done using it.
MRC_API MR_Src2TgtMaps *MR_Src2TgtMaps_Construct(MR_FaceMap *outFmap, MR_VertMap *outVmap, MR_WholeEdgeMap *outEmap);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Src2TgtMaps *MR_Src2TgtMaps_OffsetPtr(const MR_Src2TgtMaps *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Src2TgtMaps *MR_Src2TgtMaps_OffsetMutablePtr(MR_Src2TgtMaps *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_Src2TgtMaps`. Does nothing if the pointer is null.
MRC_API void MR_Src2TgtMaps_Destroy(const MR_Src2TgtMaps *_this);

/// Destroys a heap-allocated array of `MR_Src2TgtMaps`. Does nothing if the pointer is null.
MRC_API void MR_Src2TgtMaps_DestroyArray(const MR_Src2TgtMaps *_this);

/// Generated from a conversion operator of class `MR::Src2TgtMaps` to type `const MR::PartMapping &`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PartMapping *MR_Src2TgtMaps_ConvertTo_const_MR_PartMapping_ref(const MR_Src2TgtMaps *_this);

/// Generated from a method of class `MR::Src2TgtMaps` named `getPartMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PartMapping *MR_Src2TgtMaps_getPartMapping(const MR_Src2TgtMaps *_this);

/// Generated from a constructor of class `MR::Tgt2SrcMaps`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Tgt2SrcMaps_Destroy()` to free it when you're done using it.
MRC_API MR_Tgt2SrcMaps *MR_Tgt2SrcMaps_Construct(MR_FaceMap *outFmap, MR_VertMap *outVmap, MR_WholeEdgeMap *outEmap);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Tgt2SrcMaps *MR_Tgt2SrcMaps_OffsetPtr(const MR_Tgt2SrcMaps *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Tgt2SrcMaps *MR_Tgt2SrcMaps_OffsetMutablePtr(MR_Tgt2SrcMaps *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_Tgt2SrcMaps`. Does nothing if the pointer is null.
MRC_API void MR_Tgt2SrcMaps_Destroy(const MR_Tgt2SrcMaps *_this);

/// Destroys a heap-allocated array of `MR_Tgt2SrcMaps`. Does nothing if the pointer is null.
MRC_API void MR_Tgt2SrcMaps_DestroyArray(const MR_Tgt2SrcMaps *_this);

/// Generated from a conversion operator of class `MR::Tgt2SrcMaps` to type `const MR::PartMapping &`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PartMapping *MR_Tgt2SrcMaps_ConvertTo_const_MR_PartMapping_ref(const MR_Tgt2SrcMaps *_this);

/// Generated from a method of class `MR::Tgt2SrcMaps` named `getPartMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PartMapping *MR_Tgt2SrcMaps_getPartMapping(const MR_Tgt2SrcMaps *_this);

#ifdef __cplusplus
} // extern "C"
#endif
