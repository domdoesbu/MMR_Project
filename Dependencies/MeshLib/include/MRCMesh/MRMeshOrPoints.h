// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRAffineXf.h>
#include <MRCMesh/MRBox.h>
#include <MRCMesh/MRId.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AABBTreeObjects MR_AABBTreeObjects; // Defined in `#include <MRCMesh/MRAABBTreeObjects.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_PointAccumulator MR_PointAccumulator; // Defined in `#include <MRCMesh/MRBestFit.h>`.
typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_PointCloudPart MR_PointCloudPart; // Defined in `#include <MRCMesh/MRPointCloudPart.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VisualObject MR_VisualObject; // Defined in `#include <MRCMesh/MRVisualObject.h>`.
typedef struct MR_std_function_MR_MeshOrPoints_ProjectionResult_from_const_MR_Vector3f_ref MR_std_function_MR_MeshOrPoints_ProjectionResult_from_const_MR_Vector3f_ref; // Defined in `#include <MRCMisc/std_function_MR_MeshOrPoints_ProjectionResult_from_const_MR_Vector3f_ref.h>`.
typedef struct MR_std_function_MR_Vector3f_from_MR_VertId MR_std_function_MR_Vector3f_from_MR_VertId; // Defined in `#include <MRCMisc/std_function_MR_Vector3f_from_MR_VertId.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_function_float_from_MR_VertId MR_std_function_float_from_MR_VertId; // Defined in `#include <MRCMisc/std_function_float_from_MR_VertId.h>`.
typedef struct MR_std_function_void_from_MR_ObjId_MR_MeshOrPoints_ProjectionResult MR_std_function_void_from_MR_ObjId_MR_MeshOrPoints_ProjectionResult; // Defined in `#include <MRCMisc/std_function_void_from_MR_ObjId_MR_MeshOrPoints_ProjectionResult.h>`.
typedef struct MR_std_function_void_from_const_MR_Vector3f_ref_MR_MeshOrPoints_ProjectionResult_ref MR_std_function_void_from_const_MR_Vector3f_ref_MR_MeshOrPoints_ProjectionResult_ref; // Defined in `#include <MRCMisc/std_function_void_from_const_MR_Vector3f_ref_MR_MeshOrPoints_ProjectionResult_ref.h>`.
typedef struct MR_std_optional_MR_MeshOrPoints MR_std_optional_MR_MeshOrPoints; // Defined in `#include <MRCMisc/std_optional_MR_MeshOrPoints.h>`.
typedef struct MR_std_optional_MR_Vector3f MR_std_optional_MR_Vector3f; // Defined in `#include <MRCMisc/std_optional_MR_Vector3f.h>`.
typedef struct MR_std_optional_MR_VertBitSet MR_std_optional_MR_VertBitSet; // Defined in `#include <MRCMisc/std_optional_MR_VertBitSet.h>`.


/// This class can hold either mesh part or point cloud.
/// It is used for generic algorithms operating with either of them
/// Generated from class `MR::MeshOrPoints`.
typedef struct MR_MeshOrPoints MR_MeshOrPoints;

/// Generated from class `MR::MeshOrPoints::ProjectionResult`.
typedef struct MR_MeshOrPoints_ProjectionResult MR_MeshOrPoints_ProjectionResult;

/// an object and its transformation to global space with other objects
/// Generated from class `MR::MeshOrPointsXf`.
typedef struct MR_MeshOrPointsXf MR_MeshOrPointsXf;

/// Generated from a constructor of class `MR::MeshOrPoints`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshOrPoints_Destroy()` to free it when you're done using it.
MRC_API MR_MeshOrPoints *MR_MeshOrPoints_ConstructFromAnother(const MR_MeshOrPoints *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshOrPoints *MR_MeshOrPoints_OffsetPtr(const MR_MeshOrPoints *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshOrPoints *MR_MeshOrPoints_OffsetMutablePtr(MR_MeshOrPoints *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshOrPoints`.
/// Parameter `mp` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshOrPoints_Destroy()` to free it when you're done using it.
MRC_API MR_MeshOrPoints *MR_MeshOrPoints_Construct_MR_MeshPart(const MR_MeshPart *mp);

/// Generated from a constructor of class `MR::MeshOrPoints`.
/// Parameter `pcp` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshOrPoints_Destroy()` to free it when you're done using it.
MRC_API MR_MeshOrPoints *MR_MeshOrPoints_Construct_MR_PointCloudPart(const MR_PointCloudPart *pcp);

// these constructors are redundant for C++, but important for python bindings
/// Generated from a constructor of class `MR::MeshOrPoints`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshOrPoints_Destroy()` to free it when you're done using it.
MRC_API MR_MeshOrPoints *MR_MeshOrPoints_Construct_MR_Mesh(const MR_Mesh *mesh);

/// Generated from a constructor of class `MR::MeshOrPoints`.
/// Parameter `pc` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshOrPoints_Destroy()` to free it when you're done using it.
MRC_API MR_MeshOrPoints *MR_MeshOrPoints_Construct_MR_PointCloud(const MR_PointCloud *pc);

/// Destroys a heap-allocated instance of `MR_MeshOrPoints`. Does nothing if the pointer is null.
MRC_API void MR_MeshOrPoints_Destroy(const MR_MeshOrPoints *_this);

/// Destroys a heap-allocated array of `MR_MeshOrPoints`. Does nothing if the pointer is null.
MRC_API void MR_MeshOrPoints_DestroyArray(const MR_MeshOrPoints *_this);

/// Generated from a method of class `MR::MeshOrPoints` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshOrPoints *MR_MeshOrPoints_AssignFromAnother(MR_MeshOrPoints *_this, const MR_MeshOrPoints *_other);

/// if this object holds a mesh part then returns pointer on it, otherwise returns nullptr
/// Generated from a method of class `MR::MeshOrPoints` named `asMeshPart`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_MeshPart *MR_MeshOrPoints_asMeshPart(const MR_MeshOrPoints *_this);

/// if this object holds a point cloud part then returns pointer on it, otherwise returns nullptr
/// Generated from a method of class `MR::MeshOrPoints` named `asPointCloudPart`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_PointCloudPart *MR_MeshOrPoints_asPointCloudPart(const MR_MeshOrPoints *_this);

/// returns the minimal bounding box containing all valid vertices of the object (and not only part of mesh);
/// implemented via obj.getAABBTree()
/// Generated from a method of class `MR::MeshOrPoints` named `getObjBoundingBox`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Box3f MR_MeshOrPoints_getObjBoundingBox(const MR_MeshOrPoints *_this);

/// if AABBTree is already built does nothing otherwise builds and caches it
/// Generated from a method of class `MR::MeshOrPoints` named `cacheAABBTree`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshOrPoints_cacheAABBTree(const MR_MeshOrPoints *_this);

/// passes through all valid vertices and finds the minimal bounding box containing all of them;
/// if toWorld transformation is given then returns minimal bounding box in world space
/// Generated from a method of class `MR::MeshOrPoints` named `computeBoundingBox`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `toWorld` defaults to a null pointer in C++.
MRC_API MR_Box3f MR_MeshOrPoints_computeBoundingBox(const MR_MeshOrPoints *_this, const MR_AffineXf3f *toWorld);

/// Adds in existing PointAccumulator the elements of the contained object
/// Generated from a method of class `MR::MeshOrPoints` named `accumulate`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `accum` can not be null. It is a single object.
/// Parameter `xf` defaults to a null pointer in C++.
MRC_API void MR_MeshOrPoints_accumulate(const MR_MeshOrPoints *_this, MR_PointAccumulator *accum, const MR_AffineXf3f *xf);

/// performs sampling of vertices or points;
/// subdivides bounding box of the object on voxels of approximately given size and returns at most one vertex per voxel;
/// voxelSize is automatically increased to avoid more voxels than \param maxVoxels;
/// returns std::nullopt if it was terminated by the callback
/// Generated from a method of class `MR::MeshOrPoints` named `pointsGridSampling`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `maxVoxels` has a default argument: `500000`, pass a null pointer to use it.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_VertBitSet *MR_MeshOrPoints_pointsGridSampling(const MR_MeshOrPoints *_this, float voxelSize, const MR_uint64_t *maxVoxels, const MR_std_function_bool_from_float *cb);

/// gives access to points-vector (which can include invalid points as well)
/// Generated from a method of class `MR::MeshOrPoints` named `points`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords *MR_MeshOrPoints_points(const MR_MeshOrPoints *_this);

/// gives access to bit set of valid points
/// Generated from a method of class `MR::MeshOrPoints` named `validPoints`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *MR_MeshOrPoints_validPoints(const MR_MeshOrPoints *_this);

/// returns normals generating function: VertId->normal (or empty for point cloud without normals)
/// Generated from a method of class `MR::MeshOrPoints` named `normals`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_MR_Vector3f_from_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_MR_Vector3f_from_MR_VertId *MR_MeshOrPoints_normals(const MR_MeshOrPoints *_this);

/// returns weights generating function: VertId->float:
/// for mesh it is double area of surrounding triangles, and for point cloud - nothing
/// Generated from a method of class `MR::MeshOrPoints` named `weights`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_float_from_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_float_from_MR_VertId *MR_MeshOrPoints_weights(const MR_MeshOrPoints *_this);

/// returns a function that finds projection (closest) points on this: Vector3f->ProjectionResult
/// Generated from a method of class `MR::MeshOrPoints` named `projector`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_MR_MeshOrPoints_ProjectionResult_from_const_MR_Vector3f_ref_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_MR_MeshOrPoints_ProjectionResult_from_const_MR_Vector3f_ref *MR_MeshOrPoints_projector(const MR_MeshOrPoints *_this);

/// returns a function that updates previously known projection (closest) points on this,
/// the update takes place only if newly found closest point is closer to p than sqrt(res.distSq) given on input
/// Generated from a method of class `MR::MeshOrPoints` named `limitedProjector`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_void_from_const_MR_Vector3f_ref_MR_MeshOrPoints_ProjectionResult_ref_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_void_from_const_MR_Vector3f_ref_MR_MeshOrPoints_ProjectionResult_ref *MR_MeshOrPoints_limitedProjector(const MR_MeshOrPoints *_this);

/// found closest point
/// Returns a pointer to a member variable of class `MR::MeshOrPoints::ProjectionResult` named `point`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_MeshOrPoints_ProjectionResult_Get_point(const MR_MeshOrPoints_ProjectionResult *_this);

/// found closest point
/// Modifies a member variable of class `MR::MeshOrPoints::ProjectionResult` named `point`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshOrPoints_ProjectionResult_Set_point(MR_MeshOrPoints_ProjectionResult *_this, MR_Vector3f value);

/// found closest point
/// Returns a mutable pointer to a member variable of class `MR::MeshOrPoints::ProjectionResult` named `point`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_MeshOrPoints_ProjectionResult_GetMutable_point(MR_MeshOrPoints_ProjectionResult *_this);

/// normal at the closest point;
/// for meshes it will be pseudonormal with the differentiation depending on closest point location (face/edge/vertex)
/// Returns a pointer to a member variable of class `MR::MeshOrPoints::ProjectionResult` named `normal`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_optional_MR_Vector3f *MR_MeshOrPoints_ProjectionResult_Get_normal(const MR_MeshOrPoints_ProjectionResult *_this);

/// normal at the closest point;
/// for meshes it will be pseudonormal with the differentiation depending on closest point location (face/edge/vertex)
/// Modifies a member variable of class `MR::MeshOrPoints::ProjectionResult` named `normal`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` is optional. To keep it empty, pass a null pointer.
MRC_API void MR_MeshOrPoints_ProjectionResult_Set_normal(MR_MeshOrPoints_ProjectionResult *_this, const MR_Vector3f *value);

/// normal at the closest point;
/// for meshes it will be pseudonormal with the differentiation depending on closest point location (face/edge/vertex)
/// Returns a mutable pointer to a member variable of class `MR::MeshOrPoints::ProjectionResult` named `normal`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_optional_MR_Vector3f *MR_MeshOrPoints_ProjectionResult_GetMutable_normal(MR_MeshOrPoints_ProjectionResult *_this);

/// can be true only for meshes, if the closest point is located on the boundary of the mesh (or the current region)
/// Returns a pointer to a member variable of class `MR::MeshOrPoints::ProjectionResult` named `isBd`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_MeshOrPoints_ProjectionResult_Get_isBd(const MR_MeshOrPoints_ProjectionResult *_this);

/// can be true only for meshes, if the closest point is located on the boundary of the mesh (or the current region)
/// Modifies a member variable of class `MR::MeshOrPoints::ProjectionResult` named `isBd`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshOrPoints_ProjectionResult_Set_isBd(MR_MeshOrPoints_ProjectionResult *_this, bool value);

/// can be true only for meshes, if the closest point is located on the boundary of the mesh (or the current region)
/// Returns a mutable pointer to a member variable of class `MR::MeshOrPoints::ProjectionResult` named `isBd`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_MeshOrPoints_ProjectionResult_GetMutable_isBd(MR_MeshOrPoints_ProjectionResult *_this);

/// squared distance from query point to the closest point
/// Returns a pointer to a member variable of class `MR::MeshOrPoints::ProjectionResult` named `distSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MeshOrPoints_ProjectionResult_Get_distSq(const MR_MeshOrPoints_ProjectionResult *_this);

/// squared distance from query point to the closest point
/// Modifies a member variable of class `MR::MeshOrPoints::ProjectionResult` named `distSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshOrPoints_ProjectionResult_Set_distSq(MR_MeshOrPoints_ProjectionResult *_this, float value);

/// squared distance from query point to the closest point
/// Returns a mutable pointer to a member variable of class `MR::MeshOrPoints::ProjectionResult` named `distSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MeshOrPoints_ProjectionResult_GetMutable_distSq(MR_MeshOrPoints_ProjectionResult *_this);

/// for point clouds it is the closest vertex,
/// for meshes it is the closest vertex of the triangle with the closest point
/// Returns a pointer to a member variable of class `MR::MeshOrPoints::ProjectionResult` named `closestVert`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_MeshOrPoints_ProjectionResult_Get_closestVert(const MR_MeshOrPoints_ProjectionResult *_this);

/// for point clouds it is the closest vertex,
/// for meshes it is the closest vertex of the triangle with the closest point
/// Modifies a member variable of class `MR::MeshOrPoints::ProjectionResult` named `closestVert`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshOrPoints_ProjectionResult_Set_closestVert(MR_MeshOrPoints_ProjectionResult *_this, MR_VertId value);

/// for point clouds it is the closest vertex,
/// for meshes it is the closest vertex of the triangle with the closest point
/// Returns a mutable pointer to a member variable of class `MR::MeshOrPoints::ProjectionResult` named `closestVert`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_MeshOrPoints_ProjectionResult_GetMutable_closestVert(MR_MeshOrPoints_ProjectionResult *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshOrPoints_ProjectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshOrPoints_ProjectionResult *MR_MeshOrPoints_ProjectionResult_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshOrPoints_ProjectionResult_DestroyArray()`.
/// Use `MR_MeshOrPoints_ProjectionResult_OffsetMutablePtr()` and `MR_MeshOrPoints_ProjectionResult_OffsetPtr()` to access the array elements.
MRC_API MR_MeshOrPoints_ProjectionResult *MR_MeshOrPoints_ProjectionResult_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshOrPoints::ProjectionResult` elementwise.
/// Parameter `normal` is optional. To keep it empty, pass a null pointer.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshOrPoints_ProjectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshOrPoints_ProjectionResult *MR_MeshOrPoints_ProjectionResult_ConstructFrom(MR_Vector3f point, const MR_Vector3f *normal, bool isBd, float distSq, MR_VertId closestVert);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshOrPoints_ProjectionResult *MR_MeshOrPoints_ProjectionResult_OffsetPtr(const MR_MeshOrPoints_ProjectionResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshOrPoints_ProjectionResult *MR_MeshOrPoints_ProjectionResult_OffsetMutablePtr(MR_MeshOrPoints_ProjectionResult *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshOrPoints::ProjectionResult`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshOrPoints_ProjectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshOrPoints_ProjectionResult *MR_MeshOrPoints_ProjectionResult_ConstructFromAnother(const MR_MeshOrPoints_ProjectionResult *_other);

/// Destroys a heap-allocated instance of `MR_MeshOrPoints_ProjectionResult`. Does nothing if the pointer is null.
MRC_API void MR_MeshOrPoints_ProjectionResult_Destroy(const MR_MeshOrPoints_ProjectionResult *_this);

/// Destroys a heap-allocated array of `MR_MeshOrPoints_ProjectionResult`. Does nothing if the pointer is null.
MRC_API void MR_MeshOrPoints_ProjectionResult_DestroyArray(const MR_MeshOrPoints_ProjectionResult *_this);

/// Generated from a method of class `MR::MeshOrPoints::ProjectionResult` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshOrPoints_ProjectionResult *MR_MeshOrPoints_ProjectionResult_AssignFromAnother(MR_MeshOrPoints_ProjectionResult *_this, const MR_MeshOrPoints_ProjectionResult *_other);

/// Returns a pointer to a member variable of class `MR::MeshOrPointsXf` named `obj`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshOrPoints *MR_MeshOrPointsXf_Get_obj(const MR_MeshOrPointsXf *_this);

/// Modifies a member variable of class `MR::MeshOrPointsXf` named `obj`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_MeshOrPointsXf_Set_obj(MR_MeshOrPointsXf *_this, const MR_MeshOrPoints *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshOrPointsXf` named `obj`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshOrPoints *MR_MeshOrPointsXf_GetMutable_obj(MR_MeshOrPointsXf *_this);

/// Returns a pointer to a member variable of class `MR::MeshOrPointsXf` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *MR_MeshOrPointsXf_Get_xf(const MR_MeshOrPointsXf *_this);

/// Modifies a member variable of class `MR::MeshOrPointsXf` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshOrPointsXf_Set_xf(MR_MeshOrPointsXf *_this, MR_AffineXf3f value);

/// Returns a mutable pointer to a member variable of class `MR::MeshOrPointsXf` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AffineXf3f *MR_MeshOrPointsXf_GetMutable_xf(MR_MeshOrPointsXf *_this);

/// Generated from a constructor of class `MR::MeshOrPointsXf`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshOrPointsXf_Destroy()` to free it when you're done using it.
MRC_API MR_MeshOrPointsXf *MR_MeshOrPointsXf_ConstructFromAnother(const MR_MeshOrPointsXf *_other);

/// Constructs `MR::MeshOrPointsXf` elementwise.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshOrPointsXf_Destroy()` to free it when you're done using it.
MRC_API MR_MeshOrPointsXf *MR_MeshOrPointsXf_ConstructFrom(const MR_MeshOrPoints *obj, MR_AffineXf3f xf);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshOrPointsXf *MR_MeshOrPointsXf_OffsetPtr(const MR_MeshOrPointsXf *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshOrPointsXf *MR_MeshOrPointsXf_OffsetMutablePtr(MR_MeshOrPointsXf *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_MeshOrPointsXf`. Does nothing if the pointer is null.
MRC_API void MR_MeshOrPointsXf_Destroy(const MR_MeshOrPointsXf *_this);

/// Destroys a heap-allocated array of `MR_MeshOrPointsXf`. Does nothing if the pointer is null.
MRC_API void MR_MeshOrPointsXf_DestroyArray(const MR_MeshOrPointsXf *_this);

/// Generated from a method of class `MR::MeshOrPointsXf` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshOrPointsXf *MR_MeshOrPointsXf_AssignFromAnother(MR_MeshOrPointsXf *_this, const MR_MeshOrPointsXf *_other);

/// constructs MeshOrPoints from ObjectMesh or ObjectPoints, otherwise returns nullopt
/// Generated from function `MR::getMeshOrPoints`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_MeshOrPoints_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_MeshOrPoints *MR_getMeshOrPoints(const MR_VisualObject *obj);

/// finds closest point on every object within given distance
/// Generated from function `MR::projectOnAll`.
/// Parameter `pt` can not be null. It is a single object.
/// Parameter `tree` can not be null. It is a single object.
/// Parameter `callback` can not be null. It is a single object.
/// Parameter `skipObjId` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_projectOnAll(const MR_Vector3f *pt, const MR_AABBTreeObjects *tree, float upDistLimitSq, const MR_std_function_void_from_MR_ObjId_MR_MeshOrPoints_ProjectionResult *callback, const MR_ObjId *skipObjId);

#ifdef __cplusplus
} // extern "C"
#endif
