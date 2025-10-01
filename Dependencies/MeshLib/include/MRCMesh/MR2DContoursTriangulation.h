// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_std_optional_MR_Mesh MR_std_optional_MR_Mesh; // Defined in `#include <MRCMisc/std_optional_MR_Mesh.h>`.
typedef struct MR_std_vector_MR_PlanarTriangulation_IntersectionInfo MR_std_vector_MR_PlanarTriangulation_IntersectionInfo; // Defined in `#include <MRCMisc/std_vector_MR_PlanarTriangulation_IntersectionInfo.h>`.
typedef struct MR_std_vector_std_vector_MR_EdgeId MR_std_vector_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_EdgeId.h>`.
typedef struct MR_std_vector_std_vector_MR_PlanarTriangulation_IntersectionInfo MR_std_vector_std_vector_MR_PlanarTriangulation_IntersectionInfo; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_PlanarTriangulation_IntersectionInfo.h>`.
typedef struct MR_std_vector_std_vector_MR_Vector2d MR_std_vector_std_vector_MR_Vector2d; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_Vector2d.h>`.
typedef struct MR_std_vector_std_vector_MR_Vector2f MR_std_vector_std_vector_MR_Vector2f; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_Vector2f.h>`.
typedef struct MR_std_vector_std_vector_MR_VertId MR_std_vector_std_vector_MR_VertId; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_VertId.h>`.


/// Specify mode of detecting inside and outside parts of triangulation
typedef int32_t MR_PlanarTriangulation_WindingMode;
enum // MR_PlanarTriangulation_WindingMode
{
    MR_PlanarTriangulation_WindingMode_NonZero = 0,
    MR_PlanarTriangulation_WindingMode_Positive = 1,
    MR_PlanarTriangulation_WindingMode_Negative = 2,
};

/// Info about intersection point for mapping
/// Generated from class `MR::PlanarTriangulation::IntersectionInfo`.
typedef struct MR_PlanarTriangulation_IntersectionInfo MR_PlanarTriangulation_IntersectionInfo;

/// struct to map new vertices (only appear on intersections) of the outline to it's edges
/// Generated from class `MR::PlanarTriangulation::IntersectionsMap`.
typedef struct MR_PlanarTriangulation_IntersectionsMap MR_PlanarTriangulation_IntersectionsMap;

/// Generated from class `MR::PlanarTriangulation::BaseOutlineParameters`.
typedef struct MR_PlanarTriangulation_BaseOutlineParameters MR_PlanarTriangulation_BaseOutlineParameters;

/// Generated from class `MR::PlanarTriangulation::OutlineParameters`.
typedef struct MR_PlanarTriangulation_OutlineParameters MR_PlanarTriangulation_OutlineParameters;

/// return vertices of holes that correspond internal contours representation of PlanarTriangulation
/// Generated from function `MR::PlanarTriangulation::findHoleVertIdsByHoleEdges`.
/// Parameter `tp` can not be null. It is a single object.
/// Parameter `holePaths` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_VertId *MR_PlanarTriangulation_findHoleVertIdsByHoleEdges(const MR_MeshTopology *tp, const MR_std_vector_std_vector_MR_EdgeId *holePaths);

/// if lDest is invalid then lOrg is id of input vertex
/// ids of lower intersection edge vertices
/// Returns a pointer to a member variable of class `MR::PlanarTriangulation::IntersectionInfo` named `lOrg`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_PlanarTriangulation_IntersectionInfo_Get_lOrg(const MR_PlanarTriangulation_IntersectionInfo *_this);

/// if lDest is invalid then lOrg is id of input vertex
/// ids of lower intersection edge vertices
/// Modifies a member variable of class `MR::PlanarTriangulation::IntersectionInfo` named `lOrg`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PlanarTriangulation_IntersectionInfo_Set_lOrg(MR_PlanarTriangulation_IntersectionInfo *_this, MR_VertId value);

/// if lDest is invalid then lOrg is id of input vertex
/// ids of lower intersection edge vertices
/// Returns a mutable pointer to a member variable of class `MR::PlanarTriangulation::IntersectionInfo` named `lOrg`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_PlanarTriangulation_IntersectionInfo_GetMutable_lOrg(MR_PlanarTriangulation_IntersectionInfo *_this);

/// if lDest is invalid then lOrg is id of input vertex
/// ids of lower intersection edge vertices
/// Returns a pointer to a member variable of class `MR::PlanarTriangulation::IntersectionInfo` named `lDest`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_PlanarTriangulation_IntersectionInfo_Get_lDest(const MR_PlanarTriangulation_IntersectionInfo *_this);

/// if lDest is invalid then lOrg is id of input vertex
/// ids of lower intersection edge vertices
/// Modifies a member variable of class `MR::PlanarTriangulation::IntersectionInfo` named `lDest`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PlanarTriangulation_IntersectionInfo_Set_lDest(MR_PlanarTriangulation_IntersectionInfo *_this, MR_VertId value);

/// if lDest is invalid then lOrg is id of input vertex
/// ids of lower intersection edge vertices
/// Returns a mutable pointer to a member variable of class `MR::PlanarTriangulation::IntersectionInfo` named `lDest`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_PlanarTriangulation_IntersectionInfo_GetMutable_lDest(MR_PlanarTriangulation_IntersectionInfo *_this);

/// ids of upper intersection edge vertices
/// Returns a pointer to a member variable of class `MR::PlanarTriangulation::IntersectionInfo` named `uOrg`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_PlanarTriangulation_IntersectionInfo_Get_uOrg(const MR_PlanarTriangulation_IntersectionInfo *_this);

/// ids of upper intersection edge vertices
/// Modifies a member variable of class `MR::PlanarTriangulation::IntersectionInfo` named `uOrg`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PlanarTriangulation_IntersectionInfo_Set_uOrg(MR_PlanarTriangulation_IntersectionInfo *_this, MR_VertId value);

/// ids of upper intersection edge vertices
/// Returns a mutable pointer to a member variable of class `MR::PlanarTriangulation::IntersectionInfo` named `uOrg`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_PlanarTriangulation_IntersectionInfo_GetMutable_uOrg(MR_PlanarTriangulation_IntersectionInfo *_this);

/// ids of upper intersection edge vertices
/// Returns a pointer to a member variable of class `MR::PlanarTriangulation::IntersectionInfo` named `uDest`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_PlanarTriangulation_IntersectionInfo_Get_uDest(const MR_PlanarTriangulation_IntersectionInfo *_this);

/// ids of upper intersection edge vertices
/// Modifies a member variable of class `MR::PlanarTriangulation::IntersectionInfo` named `uDest`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PlanarTriangulation_IntersectionInfo_Set_uDest(MR_PlanarTriangulation_IntersectionInfo *_this, MR_VertId value);

/// ids of upper intersection edge vertices
/// Returns a mutable pointer to a member variable of class `MR::PlanarTriangulation::IntersectionInfo` named `uDest`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_PlanarTriangulation_IntersectionInfo_GetMutable_uDest(MR_PlanarTriangulation_IntersectionInfo *_this);

// ratio of intersection
// 0.0 -> point is lOrg
// 1.0 -> point is lDest
/// Returns a pointer to a member variable of class `MR::PlanarTriangulation::IntersectionInfo` named `lRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_PlanarTriangulation_IntersectionInfo_Get_lRatio(const MR_PlanarTriangulation_IntersectionInfo *_this);

// ratio of intersection
// 0.0 -> point is lOrg
// 1.0 -> point is lDest
/// Modifies a member variable of class `MR::PlanarTriangulation::IntersectionInfo` named `lRatio`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PlanarTriangulation_IntersectionInfo_Set_lRatio(MR_PlanarTriangulation_IntersectionInfo *_this, float value);

// ratio of intersection
// 0.0 -> point is lOrg
// 1.0 -> point is lDest
/// Returns a mutable pointer to a member variable of class `MR::PlanarTriangulation::IntersectionInfo` named `lRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_PlanarTriangulation_IntersectionInfo_GetMutable_lRatio(MR_PlanarTriangulation_IntersectionInfo *_this);

// 0.0 -> point is uOrg
// 1.0 -> point is uDest
/// Returns a pointer to a member variable of class `MR::PlanarTriangulation::IntersectionInfo` named `uRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_PlanarTriangulation_IntersectionInfo_Get_uRatio(const MR_PlanarTriangulation_IntersectionInfo *_this);

// 0.0 -> point is uOrg
// 1.0 -> point is uDest
/// Modifies a member variable of class `MR::PlanarTriangulation::IntersectionInfo` named `uRatio`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PlanarTriangulation_IntersectionInfo_Set_uRatio(MR_PlanarTriangulation_IntersectionInfo *_this, float value);

// 0.0 -> point is uOrg
// 1.0 -> point is uDest
/// Returns a mutable pointer to a member variable of class `MR::PlanarTriangulation::IntersectionInfo` named `uRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_PlanarTriangulation_IntersectionInfo_GetMutable_uRatio(MR_PlanarTriangulation_IntersectionInfo *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PlanarTriangulation_IntersectionInfo_Destroy()` to free it when you're done using it.
MRC_API MR_PlanarTriangulation_IntersectionInfo *MR_PlanarTriangulation_IntersectionInfo_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PlanarTriangulation_IntersectionInfo_DestroyArray()`.
/// Use `MR_PlanarTriangulation_IntersectionInfo_OffsetMutablePtr()` and `MR_PlanarTriangulation_IntersectionInfo_OffsetPtr()` to access the array elements.
MRC_API MR_PlanarTriangulation_IntersectionInfo *MR_PlanarTriangulation_IntersectionInfo_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::PlanarTriangulation::IntersectionInfo` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PlanarTriangulation_IntersectionInfo_Destroy()` to free it when you're done using it.
MRC_API MR_PlanarTriangulation_IntersectionInfo *MR_PlanarTriangulation_IntersectionInfo_ConstructFrom(MR_VertId lOrg, MR_VertId lDest, MR_VertId uOrg, MR_VertId uDest, float lRatio, float uRatio);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PlanarTriangulation_IntersectionInfo *MR_PlanarTriangulation_IntersectionInfo_OffsetPtr(const MR_PlanarTriangulation_IntersectionInfo *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PlanarTriangulation_IntersectionInfo *MR_PlanarTriangulation_IntersectionInfo_OffsetMutablePtr(MR_PlanarTriangulation_IntersectionInfo *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PlanarTriangulation::IntersectionInfo`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PlanarTriangulation_IntersectionInfo_Destroy()` to free it when you're done using it.
MRC_API MR_PlanarTriangulation_IntersectionInfo *MR_PlanarTriangulation_IntersectionInfo_ConstructFromAnother(const MR_PlanarTriangulation_IntersectionInfo *_other);

/// Destroys a heap-allocated instance of `MR_PlanarTriangulation_IntersectionInfo`. Does nothing if the pointer is null.
MRC_API void MR_PlanarTriangulation_IntersectionInfo_Destroy(const MR_PlanarTriangulation_IntersectionInfo *_this);

/// Destroys a heap-allocated array of `MR_PlanarTriangulation_IntersectionInfo`. Does nothing if the pointer is null.
MRC_API void MR_PlanarTriangulation_IntersectionInfo_DestroyArray(const MR_PlanarTriangulation_IntersectionInfo *_this);

/// Generated from a method of class `MR::PlanarTriangulation::IntersectionInfo` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PlanarTriangulation_IntersectionInfo *MR_PlanarTriangulation_IntersectionInfo_AssignFromAnother(MR_PlanarTriangulation_IntersectionInfo *_this, const MR_PlanarTriangulation_IntersectionInfo *_other);

/// Generated from a method of class `MR::PlanarTriangulation::IntersectionInfo` named `isIntersection`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_PlanarTriangulation_IntersectionInfo_isIntersection(const MR_PlanarTriangulation_IntersectionInfo *_this);

/// shift of index
/// Returns a pointer to a member variable of class `MR::PlanarTriangulation::IntersectionsMap` named `shift`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_PlanarTriangulation_IntersectionsMap_Get_shift(const MR_PlanarTriangulation_IntersectionsMap *_this);

/// shift of index
/// Modifies a member variable of class `MR::PlanarTriangulation::IntersectionsMap` named `shift`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PlanarTriangulation_IntersectionsMap_Set_shift(MR_PlanarTriangulation_IntersectionsMap *_this, MR_uint64_t value);

/// shift of index
/// Returns a mutable pointer to a member variable of class `MR::PlanarTriangulation::IntersectionsMap` named `shift`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_PlanarTriangulation_IntersectionsMap_GetMutable_shift(MR_PlanarTriangulation_IntersectionsMap *_this);

/// map[id-shift] = {lower intersection edge, upper intersection edge}
/// Returns a pointer to a member variable of class `MR::PlanarTriangulation::IntersectionsMap` named `map`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_PlanarTriangulation_IntersectionInfo *MR_PlanarTriangulation_IntersectionsMap_Get_map(const MR_PlanarTriangulation_IntersectionsMap *_this);

/// map[id-shift] = {lower intersection edge, upper intersection edge}
/// Modifies a member variable of class `MR::PlanarTriangulation::IntersectionsMap` named `map`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PlanarTriangulation_IntersectionsMap_Set_map(MR_PlanarTriangulation_IntersectionsMap *_this, MR_PassBy value_pass_by, MR_std_vector_MR_PlanarTriangulation_IntersectionInfo *value);

/// map[id-shift] = {lower intersection edge, upper intersection edge}
/// Returns a mutable pointer to a member variable of class `MR::PlanarTriangulation::IntersectionsMap` named `map`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_PlanarTriangulation_IntersectionInfo *MR_PlanarTriangulation_IntersectionsMap_GetMutable_map(MR_PlanarTriangulation_IntersectionsMap *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PlanarTriangulation_IntersectionsMap_Destroy()` to free it when you're done using it.
MRC_API MR_PlanarTriangulation_IntersectionsMap *MR_PlanarTriangulation_IntersectionsMap_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PlanarTriangulation_IntersectionsMap_DestroyArray()`.
/// Use `MR_PlanarTriangulation_IntersectionsMap_OffsetMutablePtr()` and `MR_PlanarTriangulation_IntersectionsMap_OffsetPtr()` to access the array elements.
MRC_API MR_PlanarTriangulation_IntersectionsMap *MR_PlanarTriangulation_IntersectionsMap_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::PlanarTriangulation::IntersectionsMap` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PlanarTriangulation_IntersectionsMap_Destroy()` to free it when you're done using it.
MRC_API MR_PlanarTriangulation_IntersectionsMap *MR_PlanarTriangulation_IntersectionsMap_ConstructFrom(MR_uint64_t shift, MR_PassBy map_pass_by, MR_std_vector_MR_PlanarTriangulation_IntersectionInfo *map);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PlanarTriangulation_IntersectionsMap *MR_PlanarTriangulation_IntersectionsMap_OffsetPtr(const MR_PlanarTriangulation_IntersectionsMap *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PlanarTriangulation_IntersectionsMap *MR_PlanarTriangulation_IntersectionsMap_OffsetMutablePtr(MR_PlanarTriangulation_IntersectionsMap *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PlanarTriangulation::IntersectionsMap`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PlanarTriangulation_IntersectionsMap_Destroy()` to free it when you're done using it.
MRC_API MR_PlanarTriangulation_IntersectionsMap *MR_PlanarTriangulation_IntersectionsMap_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PlanarTriangulation_IntersectionsMap *_other);

/// Destroys a heap-allocated instance of `MR_PlanarTriangulation_IntersectionsMap`. Does nothing if the pointer is null.
MRC_API void MR_PlanarTriangulation_IntersectionsMap_Destroy(const MR_PlanarTriangulation_IntersectionsMap *_this);

/// Destroys a heap-allocated array of `MR_PlanarTriangulation_IntersectionsMap`. Does nothing if the pointer is null.
MRC_API void MR_PlanarTriangulation_IntersectionsMap_DestroyArray(const MR_PlanarTriangulation_IntersectionsMap *_this);

/// Generated from a method of class `MR::PlanarTriangulation::IntersectionsMap` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PlanarTriangulation_IntersectionsMap *MR_PlanarTriangulation_IntersectionsMap_AssignFromAnother(MR_PlanarTriangulation_IntersectionsMap *_this, MR_PassBy _other_pass_by, MR_PlanarTriangulation_IntersectionsMap *_other);

///< allow to merge vertices with same coordinates
/// Returns a pointer to a member variable of class `MR::PlanarTriangulation::BaseOutlineParameters` named `allowMerge`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_PlanarTriangulation_BaseOutlineParameters_Get_allowMerge(const MR_PlanarTriangulation_BaseOutlineParameters *_this);

///< allow to merge vertices with same coordinates
/// Modifies a member variable of class `MR::PlanarTriangulation::BaseOutlineParameters` named `allowMerge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PlanarTriangulation_BaseOutlineParameters_Set_allowMerge(MR_PlanarTriangulation_BaseOutlineParameters *_this, bool value);

///< allow to merge vertices with same coordinates
/// Returns a mutable pointer to a member variable of class `MR::PlanarTriangulation::BaseOutlineParameters` named `allowMerge`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_PlanarTriangulation_BaseOutlineParameters_GetMutable_allowMerge(MR_PlanarTriangulation_BaseOutlineParameters *_this);

///< what to mark as inner part
/// Returns a pointer to a member variable of class `MR::PlanarTriangulation::BaseOutlineParameters` named `innerType`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PlanarTriangulation_WindingMode *MR_PlanarTriangulation_BaseOutlineParameters_Get_innerType(const MR_PlanarTriangulation_BaseOutlineParameters *_this);

///< what to mark as inner part
/// Modifies a member variable of class `MR::PlanarTriangulation::BaseOutlineParameters` named `innerType`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PlanarTriangulation_BaseOutlineParameters_Set_innerType(MR_PlanarTriangulation_BaseOutlineParameters *_this, MR_PlanarTriangulation_WindingMode value);

///< what to mark as inner part
/// Returns a mutable pointer to a member variable of class `MR::PlanarTriangulation::BaseOutlineParameters` named `innerType`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PlanarTriangulation_WindingMode *MR_PlanarTriangulation_BaseOutlineParameters_GetMutable_innerType(MR_PlanarTriangulation_BaseOutlineParameters *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PlanarTriangulation_BaseOutlineParameters_Destroy()` to free it when you're done using it.
MRC_API MR_PlanarTriangulation_BaseOutlineParameters *MR_PlanarTriangulation_BaseOutlineParameters_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PlanarTriangulation_BaseOutlineParameters_DestroyArray()`.
/// Use `MR_PlanarTriangulation_BaseOutlineParameters_OffsetMutablePtr()` and `MR_PlanarTriangulation_BaseOutlineParameters_OffsetPtr()` to access the array elements.
MRC_API MR_PlanarTriangulation_BaseOutlineParameters *MR_PlanarTriangulation_BaseOutlineParameters_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::PlanarTriangulation::BaseOutlineParameters` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PlanarTriangulation_BaseOutlineParameters_Destroy()` to free it when you're done using it.
MRC_API MR_PlanarTriangulation_BaseOutlineParameters *MR_PlanarTriangulation_BaseOutlineParameters_ConstructFrom(bool allowMerge, MR_PlanarTriangulation_WindingMode innerType);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PlanarTriangulation_BaseOutlineParameters *MR_PlanarTriangulation_BaseOutlineParameters_OffsetPtr(const MR_PlanarTriangulation_BaseOutlineParameters *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PlanarTriangulation_BaseOutlineParameters *MR_PlanarTriangulation_BaseOutlineParameters_OffsetMutablePtr(MR_PlanarTriangulation_BaseOutlineParameters *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PlanarTriangulation::BaseOutlineParameters`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PlanarTriangulation_BaseOutlineParameters_Destroy()` to free it when you're done using it.
MRC_API MR_PlanarTriangulation_BaseOutlineParameters *MR_PlanarTriangulation_BaseOutlineParameters_ConstructFromAnother(const MR_PlanarTriangulation_BaseOutlineParameters *_other);

/// Destroys a heap-allocated instance of `MR_PlanarTriangulation_BaseOutlineParameters`. Does nothing if the pointer is null.
MRC_API void MR_PlanarTriangulation_BaseOutlineParameters_Destroy(const MR_PlanarTriangulation_BaseOutlineParameters *_this);

/// Destroys a heap-allocated array of `MR_PlanarTriangulation_BaseOutlineParameters`. Does nothing if the pointer is null.
MRC_API void MR_PlanarTriangulation_BaseOutlineParameters_DestroyArray(const MR_PlanarTriangulation_BaseOutlineParameters *_this);

/// Generated from a method of class `MR::PlanarTriangulation::BaseOutlineParameters` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PlanarTriangulation_BaseOutlineParameters *MR_PlanarTriangulation_BaseOutlineParameters_AssignFromAnother(MR_PlanarTriangulation_BaseOutlineParameters *_this, const MR_PlanarTriangulation_BaseOutlineParameters *_other);

/// returns Mesh with boundaries representing outline if input contours
/// interMap optional output intersection map
/// Generated from function `MR::PlanarTriangulation::getOutlineMesh`.
/// Parameter `contours` can not be null. It is a single object.
/// Parameter `interMap` defaults to a null pointer in C++.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_PlanarTriangulation_getOutlineMesh_std_vector_std_vector_MR_Vector2f(const MR_std_vector_std_vector_MR_Vector2f *contours, MR_PlanarTriangulation_IntersectionsMap *interMap, const MR_PlanarTriangulation_BaseOutlineParameters *params);

/// Generated from function `MR::PlanarTriangulation::getOutlineMesh`.
/// Parameter `contours` can not be null. It is a single object.
/// Parameter `interMap` defaults to a null pointer in C++.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_PlanarTriangulation_getOutlineMesh_std_vector_std_vector_MR_Vector2d(const MR_std_vector_std_vector_MR_Vector2d *contours, MR_PlanarTriangulation_IntersectionsMap *interMap, const MR_PlanarTriangulation_BaseOutlineParameters *params);

///< optional output from result contour ids to input ones
/// Returns a pointer to a member variable of class `MR::PlanarTriangulation::OutlineParameters` named `indicesMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_std_vector_MR_PlanarTriangulation_IntersectionInfo *const *MR_PlanarTriangulation_OutlineParameters_Get_indicesMap(const MR_PlanarTriangulation_OutlineParameters *_this);

///< optional output from result contour ids to input ones
/// Modifies a member variable of class `MR::PlanarTriangulation::OutlineParameters` named `indicesMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PlanarTriangulation_OutlineParameters_Set_indicesMap(MR_PlanarTriangulation_OutlineParameters *_this, MR_std_vector_std_vector_MR_PlanarTriangulation_IntersectionInfo *value);

///< optional output from result contour ids to input ones
/// Returns a mutable pointer to a member variable of class `MR::PlanarTriangulation::OutlineParameters` named `indicesMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_std_vector_MR_PlanarTriangulation_IntersectionInfo **MR_PlanarTriangulation_OutlineParameters_GetMutable_indicesMap(MR_PlanarTriangulation_OutlineParameters *_this);

/// Returns a pointer to a member variable of class `MR::PlanarTriangulation::OutlineParameters` named `baseParams`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PlanarTriangulation_BaseOutlineParameters *MR_PlanarTriangulation_OutlineParameters_Get_baseParams(const MR_PlanarTriangulation_OutlineParameters *_this);

/// Modifies a member variable of class `MR::PlanarTriangulation::OutlineParameters` named `baseParams`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_PlanarTriangulation_OutlineParameters_Set_baseParams(MR_PlanarTriangulation_OutlineParameters *_this, const MR_PlanarTriangulation_BaseOutlineParameters *value);

/// Returns a mutable pointer to a member variable of class `MR::PlanarTriangulation::OutlineParameters` named `baseParams`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PlanarTriangulation_BaseOutlineParameters *MR_PlanarTriangulation_OutlineParameters_GetMutable_baseParams(MR_PlanarTriangulation_OutlineParameters *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PlanarTriangulation_OutlineParameters_Destroy()` to free it when you're done using it.
MRC_API MR_PlanarTriangulation_OutlineParameters *MR_PlanarTriangulation_OutlineParameters_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PlanarTriangulation_OutlineParameters_DestroyArray()`.
/// Use `MR_PlanarTriangulation_OutlineParameters_OffsetMutablePtr()` and `MR_PlanarTriangulation_OutlineParameters_OffsetPtr()` to access the array elements.
MRC_API MR_PlanarTriangulation_OutlineParameters *MR_PlanarTriangulation_OutlineParameters_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::PlanarTriangulation::OutlineParameters` elementwise.
/// Parameter `baseParams` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PlanarTriangulation_OutlineParameters_Destroy()` to free it when you're done using it.
MRC_API MR_PlanarTriangulation_OutlineParameters *MR_PlanarTriangulation_OutlineParameters_ConstructFrom(MR_std_vector_std_vector_MR_PlanarTriangulation_IntersectionInfo *indicesMap, const MR_PlanarTriangulation_BaseOutlineParameters *baseParams);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PlanarTriangulation_OutlineParameters *MR_PlanarTriangulation_OutlineParameters_OffsetPtr(const MR_PlanarTriangulation_OutlineParameters *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PlanarTriangulation_OutlineParameters *MR_PlanarTriangulation_OutlineParameters_OffsetMutablePtr(MR_PlanarTriangulation_OutlineParameters *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PlanarTriangulation::OutlineParameters`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PlanarTriangulation_OutlineParameters_Destroy()` to free it when you're done using it.
MRC_API MR_PlanarTriangulation_OutlineParameters *MR_PlanarTriangulation_OutlineParameters_ConstructFromAnother(const MR_PlanarTriangulation_OutlineParameters *_other);

/// Destroys a heap-allocated instance of `MR_PlanarTriangulation_OutlineParameters`. Does nothing if the pointer is null.
MRC_API void MR_PlanarTriangulation_OutlineParameters_Destroy(const MR_PlanarTriangulation_OutlineParameters *_this);

/// Destroys a heap-allocated array of `MR_PlanarTriangulation_OutlineParameters`. Does nothing if the pointer is null.
MRC_API void MR_PlanarTriangulation_OutlineParameters_DestroyArray(const MR_PlanarTriangulation_OutlineParameters *_this);

/// Generated from a method of class `MR::PlanarTriangulation::OutlineParameters` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PlanarTriangulation_OutlineParameters *MR_PlanarTriangulation_OutlineParameters_AssignFromAnother(MR_PlanarTriangulation_OutlineParameters *_this, const MR_PlanarTriangulation_OutlineParameters *_other);

/// returns Contour representing outline if input contours
/// Generated from function `MR::PlanarTriangulation::getOutline`.
/// Parameter `contours` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector2f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector2f *MR_PlanarTriangulation_getOutline_std_vector_std_vector_MR_Vector2f(const MR_std_vector_std_vector_MR_Vector2f *contours, const MR_PlanarTriangulation_OutlineParameters *params);

/// Generated from function `MR::PlanarTriangulation::getOutline`.
/// Parameter `contours` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector2f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector2f *MR_PlanarTriangulation_getOutline_std_vector_std_vector_MR_Vector2d(const MR_std_vector_std_vector_MR_Vector2d *contours, const MR_PlanarTriangulation_OutlineParameters *params);

/**
* @brief triangulate 2d contours
* only closed contours are allowed (first point of each contour should be the same as last point of the contour)
* @param holeVertsIds if set merge only points with same vertex id, otherwise merge all points with same coordinates
* @return return created mesh
*/
/// Generated from function `MR::PlanarTriangulation::triangulateContours`.
/// Parameter `contours` can not be null. It is a single object.
/// Parameter `holeVertsIds` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_PlanarTriangulation_triangulateContours_std_vector_std_vector_MR_Vector2d(const MR_std_vector_std_vector_MR_Vector2d *contours, const MR_std_vector_std_vector_MR_VertId *holeVertsIds);

/// Generated from function `MR::PlanarTriangulation::triangulateContours`.
/// Parameter `contours` can not be null. It is a single object.
/// Parameter `holeVertsIds` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_PlanarTriangulation_triangulateContours_std_vector_std_vector_MR_Vector2f(const MR_std_vector_std_vector_MR_Vector2f *contours, const MR_std_vector_std_vector_MR_VertId *holeVertsIds);

/**
* @brief triangulate 2d contours
* only closed contours are allowed (first point of each contour should be the same as last point of the contour)
* @param holeVertsIds if set merge only points with same vertex id, otherwise merge all points with same coordinates
* @param outBoundaries optional output EdgePaths that correspond to initial contours
* @return std::optional<Mesh> : if some contours intersect return false, otherwise return created mesh
*/
/// Generated from function `MR::PlanarTriangulation::triangulateDisjointContours`.
/// Parameter `contours` can not be null. It is a single object.
/// Parameter `holeVertsIds` defaults to a null pointer in C++.
/// Parameter `outBoundaries` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_Mesh *MR_PlanarTriangulation_triangulateDisjointContours_std_vector_std_vector_MR_Vector2d(const MR_std_vector_std_vector_MR_Vector2d *contours, const MR_std_vector_std_vector_MR_VertId *holeVertsIds, MR_std_vector_std_vector_MR_EdgeId *outBoundaries);

/// Generated from function `MR::PlanarTriangulation::triangulateDisjointContours`.
/// Parameter `contours` can not be null. It is a single object.
/// Parameter `holeVertsIds` defaults to a null pointer in C++.
/// Parameter `outBoundaries` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_Mesh *MR_PlanarTriangulation_triangulateDisjointContours_std_vector_std_vector_MR_Vector2f(const MR_std_vector_std_vector_MR_Vector2f *contours, const MR_std_vector_std_vector_MR_VertId *holeVertsIds, MR_std_vector_std_vector_MR_EdgeId *outBoundaries);

#ifdef __cplusplus
} // extern "C"
#endif
