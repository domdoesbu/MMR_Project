// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector2.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_BMap_MR_FaceId_uint64_t MR_BMap_MR_FaceId_uint64_t; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_BMap_MR_UndirectedEdgeId_uint64_t MR_BMap_MR_UndirectedEdgeId_uint64_t; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_BMap_MR_VertId_uint64_t MR_BMap_MR_VertId_uint64_t; // Defined in `#include <MRCMesh/MRBuffer.h>`.


/// settings defining regular grid, where each quadrangular cell is split on two triangles in one of two ways
/// Generated from class `MR::GridSettings`.
typedef struct MR_GridSettings MR_GridSettings;

typedef int32_t MR_GridSettings_EdgeType;
enum // MR_GridSettings_EdgeType
{
    // (x,y) - (x+1,y)
    MR_GridSettings_EdgeType_Horizontal = 0,
    // (x,y) - (x,y+1)
    MR_GridSettings_EdgeType_Vertical = 1,
    // (x,y) - (x+1,y+1)
    MR_GridSettings_EdgeType_DiagonalA = 2,
    // (x+1,y) - (x,y+1)
    MR_GridSettings_EdgeType_DiagonalB = 3,
};

typedef int32_t MR_GridSettings_TriType;
enum // MR_GridSettings_TriType
{
    // (x,y), (x+1,y), (x+1,y+1) if DiagonalA or (x,y), (x+1,y), (x,y+1) if DiagonalB
    MR_GridSettings_TriType_Lower = 0,
    // (x,y), (x+1,y+1), (x,y+1) if DiagonalA or (x+1,y), (x+1,y+1), (x,y+1) if DiagonalB
    MR_GridSettings_TriType_Upper = 1,
};

/// the number of cells in X and Y dimensions;
/// the number of vertices will be at most (X+1)*(Y+1)
/// Returns a pointer to a member variable of class `MR::GridSettings` named `dim`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2i *MR_GridSettings_Get_dim(const MR_GridSettings *_this);

/// the number of cells in X and Y dimensions;
/// the number of vertices will be at most (X+1)*(Y+1)
/// Modifies a member variable of class `MR::GridSettings` named `dim`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GridSettings_Set_dim(MR_GridSettings *_this, MR_Vector2i value);

/// the number of cells in X and Y dimensions;
/// the number of vertices will be at most (X+1)*(Y+1)
/// Returns a mutable pointer to a member variable of class `MR::GridSettings` named `dim`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2i *MR_GridSettings_GetMutable_dim(MR_GridSettings *_this);

/// grid coordinates to vertex Id; invalid vertex Id means that this vertex is missing in grid;
/// index is x + y * ( settings.dim.x + 1 )
/// Returns a pointer to a member variable of class `MR::GridSettings` named `vertIds`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_BMap_MR_VertId_uint64_t *MR_GridSettings_Get_vertIds(const MR_GridSettings *_this);

/// grid coordinates to vertex Id; invalid vertex Id means that this vertex is missing in grid;
/// index is x + y * ( settings.dim.x + 1 )
/// Modifies a member variable of class `MR::GridSettings` named `vertIds`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GridSettings_Set_vertIds(MR_GridSettings *_this, MR_PassBy value_pass_by, MR_BMap_MR_VertId_uint64_t *value);

/// grid coordinates to vertex Id; invalid vertex Id means that this vertex is missing in grid;
/// index is x + y * ( settings.dim.x + 1 )
/// Returns a mutable pointer to a member variable of class `MR::GridSettings` named `vertIds`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BMap_MR_VertId_uint64_t *MR_GridSettings_GetMutable_vertIds(MR_GridSettings *_this);

/// grid coordinates of lower-left vertex and edge-type to edgeId with the origin in this vertex;
/// both vertices of valid edge must be valid as well;
/// index is 4 * ( x + y * ( settings.dim.x + 1 ) ) + edgeType
/// Returns a pointer to a member variable of class `MR::GridSettings` named `uedgeIds`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_BMap_MR_UndirectedEdgeId_uint64_t *MR_GridSettings_Get_uedgeIds(const MR_GridSettings *_this);

/// grid coordinates of lower-left vertex and edge-type to edgeId with the origin in this vertex;
/// both vertices of valid edge must be valid as well;
/// index is 4 * ( x + y * ( settings.dim.x + 1 ) ) + edgeType
/// Modifies a member variable of class `MR::GridSettings` named `uedgeIds`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GridSettings_Set_uedgeIds(MR_GridSettings *_this, MR_PassBy value_pass_by, MR_BMap_MR_UndirectedEdgeId_uint64_t *value);

/// grid coordinates of lower-left vertex and edge-type to edgeId with the origin in this vertex;
/// both vertices of valid edge must be valid as well;
/// index is 4 * ( x + y * ( settings.dim.x + 1 ) ) + edgeType
/// Returns a mutable pointer to a member variable of class `MR::GridSettings` named `uedgeIds`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BMap_MR_UndirectedEdgeId_uint64_t *MR_GridSettings_GetMutable_uedgeIds(MR_GridSettings *_this);

/// grid coordinates of lower-left vertex and triangle-type to faceId;
/// all 3 vertices and all 3 edges of valid face must be valid as well;
/// index is 2 * ( x + y * settings.dim.x ) + triType
/// Returns a pointer to a member variable of class `MR::GridSettings` named `faceIds`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_BMap_MR_FaceId_uint64_t *MR_GridSettings_Get_faceIds(const MR_GridSettings *_this);

/// grid coordinates of lower-left vertex and triangle-type to faceId;
/// all 3 vertices and all 3 edges of valid face must be valid as well;
/// index is 2 * ( x + y * settings.dim.x ) + triType
/// Modifies a member variable of class `MR::GridSettings` named `faceIds`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GridSettings_Set_faceIds(MR_GridSettings *_this, MR_PassBy value_pass_by, MR_BMap_MR_FaceId_uint64_t *value);

/// grid coordinates of lower-left vertex and triangle-type to faceId;
/// all 3 vertices and all 3 edges of valid face must be valid as well;
/// index is 2 * ( x + y * settings.dim.x ) + triType
/// Returns a mutable pointer to a member variable of class `MR::GridSettings` named `faceIds`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BMap_MR_FaceId_uint64_t *MR_GridSettings_GetMutable_faceIds(MR_GridSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GridSettings_Destroy()` to free it when you're done using it.
MRC_API MR_GridSettings *MR_GridSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_GridSettings_DestroyArray()`.
/// Use `MR_GridSettings_OffsetMutablePtr()` and `MR_GridSettings_OffsetPtr()` to access the array elements.
MRC_API MR_GridSettings *MR_GridSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::GridSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GridSettings_Destroy()` to free it when you're done using it.
MRC_API MR_GridSettings *MR_GridSettings_ConstructFrom(MR_Vector2i dim, MR_PassBy vertIds_pass_by, MR_BMap_MR_VertId_uint64_t *vertIds, MR_PassBy uedgeIds_pass_by, MR_BMap_MR_UndirectedEdgeId_uint64_t *uedgeIds, MR_PassBy faceIds_pass_by, MR_BMap_MR_FaceId_uint64_t *faceIds);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_GridSettings *MR_GridSettings_OffsetPtr(const MR_GridSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_GridSettings *MR_GridSettings_OffsetMutablePtr(MR_GridSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::GridSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GridSettings_Destroy()` to free it when you're done using it.
MRC_API MR_GridSettings *MR_GridSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_GridSettings *_other);

/// Destroys a heap-allocated instance of `MR_GridSettings`. Does nothing if the pointer is null.
MRC_API void MR_GridSettings_Destroy(const MR_GridSettings *_this);

/// Destroys a heap-allocated array of `MR_GridSettings`. Does nothing if the pointer is null.
MRC_API void MR_GridSettings_DestroyArray(const MR_GridSettings *_this);

/// Generated from a method of class `MR::GridSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GridSettings *MR_GridSettings_AssignFromAnother(MR_GridSettings *_this, MR_PassBy _other_pass_by, MR_GridSettings *_other);

#ifdef __cplusplus
} // extern "C"
#endif
