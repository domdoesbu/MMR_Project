// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRBox.h>
#include <MRCMesh/MRId.h>
#include <MRCMesh/MRMeshFwd.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AABBTreePoints MR_AABBTreePoints; // Defined in `#include <MRCMesh/MRAABBTreePoints.h>`.
typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_CloudPartMapping MR_CloudPartMapping; // Defined in `#include <MRCMesh/MRCloudPartMapping.h>`.
typedef struct MR_Plane3f MR_Plane3f; // Defined in `#include <MRCMesh/MRPlane3.h>`.
typedef struct MR_VertBMap MR_VertBMap; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertMap MR_VertMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_vector_MR_VertId MR_std_vector_MR_VertId; // Defined in `#include <MRCMisc/std_vector_MR_VertId.h>`.


/// Generated from class `MR::PointCloud`.
typedef struct MR_PointCloud MR_PointCloud;

/// coordinates of points
/// Returns a pointer to a member variable of class `MR::PointCloud` named `points`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords *MR_PointCloud_Get_points(const MR_PointCloud *_this);

/// coordinates of points
/// Modifies a member variable of class `MR::PointCloud` named `points`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointCloud_Set_points(MR_PointCloud *_this, MR_PassBy value_pass_by, MR_VertCoords *value);

/// coordinates of points
/// Returns a mutable pointer to a member variable of class `MR::PointCloud` named `points`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertCoords *MR_PointCloud_GetMutable_points(MR_PointCloud *_this);

/// unit normal directions of points (can be empty if no normals are known)
/// Returns a pointer to a member variable of class `MR::PointCloud` named `normals`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords *MR_PointCloud_Get_normals(const MR_PointCloud *_this);

/// unit normal directions of points (can be empty if no normals are known)
/// Modifies a member variable of class `MR::PointCloud` named `normals`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointCloud_Set_normals(MR_PointCloud *_this, MR_PassBy value_pass_by, MR_VertCoords *value);

/// unit normal directions of points (can be empty if no normals are known)
/// Returns a mutable pointer to a member variable of class `MR::PointCloud` named `normals`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertCoords *MR_PointCloud_GetMutable_normals(MR_PointCloud *_this);

/// only points and normals corresponding to set bits here are valid
/// Returns a pointer to a member variable of class `MR::PointCloud` named `validPoints`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *MR_PointCloud_Get_validPoints(const MR_PointCloud *_this);

/// only points and normals corresponding to set bits here are valid
/// Modifies a member variable of class `MR::PointCloud` named `validPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointCloud_Set_validPoints(MR_PointCloud *_this, MR_PassBy value_pass_by, MR_VertBitSet *value);

/// only points and normals corresponding to set bits here are valid
/// Returns a mutable pointer to a member variable of class `MR::PointCloud` named `validPoints`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *MR_PointCloud_GetMutable_validPoints(MR_PointCloud *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointCloud_Destroy()` to free it when you're done using it.
MRC_API MR_PointCloud *MR_PointCloud_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PointCloud_DestroyArray()`.
/// Use `MR_PointCloud_OffsetMutablePtr()` and `MR_PointCloud_OffsetPtr()` to access the array elements.
MRC_API MR_PointCloud *MR_PointCloud_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PointCloud *MR_PointCloud_OffsetPtr(const MR_PointCloud *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PointCloud *MR_PointCloud_OffsetMutablePtr(MR_PointCloud *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PointCloud`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointCloud_Destroy()` to free it when you're done using it.
MRC_API MR_PointCloud *MR_PointCloud_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PointCloud *_other);

/// Destroys a heap-allocated instance of `MR_PointCloud`. Does nothing if the pointer is null.
MRC_API void MR_PointCloud_Destroy(const MR_PointCloud *_this);

/// Destroys a heap-allocated array of `MR_PointCloud`. Does nothing if the pointer is null.
MRC_API void MR_PointCloud_DestroyArray(const MR_PointCloud *_this);

/// Generated from a method of class `MR::PointCloud` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointCloud *MR_PointCloud_AssignFromAnother(MR_PointCloud *_this, MR_PassBy _other_pass_by, MR_PointCloud *_other);

/// computes the total number of valid points in the cloud
/// Generated from a method of class `MR::PointCloud` named `calcNumValidPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_PointCloud_calcNumValidPoints(const MR_PointCloud *_this);

/// returns true if there is a normal for each point
/// Generated from a method of class `MR::PointCloud` named `hasNormals`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_PointCloud_hasNormals(const MR_PointCloud *_this);

/// if region pointer is not null then converts it in reference, otherwise returns all valid points in the cloud
/// Generated from a method of class `MR::PointCloud` named `getVertIds`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *MR_PointCloud_getVertIds(const MR_PointCloud *_this, const MR_VertBitSet *region);

/// returns cached aabb-tree for this point cloud, creating it if it did not exist in a thread-safe manner
/// Generated from a method of class `MR::PointCloud` named `getAABBTree`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AABBTreePoints *MR_PointCloud_getAABBTree(const MR_PointCloud *_this);

/// returns cached aabb-tree for this point cloud, but does not create it if it did not exist
/// Generated from a method of class `MR::PointCloud` named `getAABBTreeNotCreate`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_AABBTreePoints *MR_PointCloud_getAABBTreeNotCreate(const MR_PointCloud *_this);

/// returns the minimal bounding box containing all valid vertices (implemented via getAABBTree())
/// Generated from a method of class `MR::PointCloud` named `getBoundingBox`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Box3f MR_PointCloud_getBoundingBox(const MR_PointCloud *_this);

/// passes through all valid points and finds the minimal bounding box containing all of them;
/// if toWorld transformation is given then returns minimal bounding box in world space
/// Generated from a method of class `MR::PointCloud` named `computeBoundingBox`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `toWorld` defaults to a null pointer in C++.
MRC_API MR_Box3f MR_PointCloud_computeBoundingBox_1(const MR_PointCloud *_this, const MR_AffineXf3f *toWorld);

/// passes through all given vertices (or all valid vertices if region == null) and finds the minimal bounding box containing all of them
/// if toWorld transformation is given then returns minimal bounding box in world space
/// Generated from a method of class `MR::PointCloud` named `computeBoundingBox`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `toWorld` defaults to a null pointer in C++.
MRC_API MR_Box3f MR_PointCloud_computeBoundingBox_2(const MR_PointCloud *_this, const MR_VertBitSet *region, const MR_AffineXf3f *toWorld);

/// computes average position of all valid points
/// Generated from a method of class `MR::PointCloud` named `findCenterFromPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_PointCloud_findCenterFromPoints(const MR_PointCloud *_this);

/// computes bounding box and returns its center
/// Generated from a method of class `MR::PointCloud` named `findCenterFromBBox`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_PointCloud_findCenterFromBBox(const MR_PointCloud *_this);

/// returns all valid point ids sorted lexicographically by their coordinates (optimal for uniform sampling)
/// Generated from a method of class `MR::PointCloud` named `getLexicographicalOrder`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_VertId *MR_PointCloud_getLexicographicalOrder(const MR_PointCloud *_this);

/// appends points (and normals if it possible) (from) in addition to this points
/// if this obj have normals and from obj has not it then don't do anything
/// \param extNormals if given then they will be copied instead of from.normals
/// Generated from a method of class `MR::PointCloud` named `addPartByMask`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `fromVerts` can not be null. It is a single object.
/// Parameter `outMap` is a single object.
/// Parameter `outMap` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `extNormals` defaults to a null pointer in C++.
MRC_API void MR_PointCloud_addPartByMask(MR_PointCloud *_this, const MR_PointCloud *from, const MR_VertBitSet *fromVerts, const MR_CloudPartMapping *outMap, const MR_VertCoords *extNormals);

/// appends a point and returns its VertId
/// Generated from a method of class `MR::PointCloud` named `addPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
MRC_API MR_VertId MR_PointCloud_addPoint_1(MR_PointCloud *_this, const MR_Vector3f *point);

/// appends a point with normal and returns its VertId
/// Generated from a method of class `MR::PointCloud` named `addPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
/// Parameter `normal` can not be null. It is a single object.
MRC_API MR_VertId MR_PointCloud_addPoint_2(MR_PointCloud *_this, const MR_Vector3f *point, const MR_Vector3f *normal);

/// reflects the points from a given plane
/// Generated from a method of class `MR::PointCloud` named `mirror`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `plane` can not be null. It is a single object.
MRC_API void MR_PointCloud_mirror(MR_PointCloud *_this, const MR_Plane3f *plane);

/// flip orientation (normals) of given points (or all valid points is nullptr)
/// Generated from a method of class `MR::PointCloud` named `flipOrientation`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API void MR_PointCloud_flipOrientation(MR_PointCloud *_this, const MR_VertBitSet *region);

/// tightly packs all arrays eliminating invalid points, but relative order of valid points is preserved;
/// returns false if the cloud was packed before the call and nothing has been changed;
/// if pack is done optionally returns mappings: new.id -> old.id
/// Generated from a method of class `MR::PointCloud` named `pack`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `outNew2Old` defaults to a null pointer in C++.
MRC_API bool MR_PointCloud_pack_MR_VertMap_ptr(MR_PointCloud *_this, MR_VertMap *outNew2Old);

/// tightly packs all arrays eliminating invalid points, reorders valid points according to given strategy;
/// \return points mapping: old -> new
/// Generated from a method of class `MR::PointCloud` named `pack`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBMap_Destroy()` to free it when you're done using it.
MRC_API MR_VertBMap *MR_PointCloud_pack_MR_Reorder(MR_PointCloud *_this, MR_Reorder reoder);

/// Invalidates caches (e.g. aabb-tree) after a change in point cloud
/// Generated from a method of class `MR::PointCloud` named `invalidateCaches`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointCloud_invalidateCaches(MR_PointCloud *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::PointCloud` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_PointCloud_heapBytes(const MR_PointCloud *_this);

#ifdef __cplusplus
} // extern "C"
#endif
