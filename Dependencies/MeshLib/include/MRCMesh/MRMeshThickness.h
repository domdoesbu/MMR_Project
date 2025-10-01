// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshIntersectionResult MR_MeshIntersectionResult; // Defined in `#include <MRCMesh/MRMeshIntersect.h>`.
typedef struct MR_MeshProjectionResult MR_MeshProjectionResult; // Defined in `#include <MRCMesh/MRMeshProject.h>`.
typedef struct MR_MeshTriPoint MR_MeshTriPoint; // Defined in `#include <MRCMesh/MRMeshTriPoint.h>`.
typedef struct MR_std_function_bool_from_MR_FaceId MR_std_function_bool_from_MR_FaceId; // Defined in `#include <MRCMisc/std_function_bool_from_MR_FaceId.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_optional_MR_VertScalars MR_std_optional_MR_VertScalars; // Defined in `#include <MRCMisc/std_optional_MR_VertScalars.h>`.


/// describes the point of measurement on mesh
/// Generated from class `MR::MeshPoint`.
typedef struct MR_MeshPoint MR_MeshPoint;

/// controls the finding of maximal inscribed sphere in mesh
/// Generated from class `MR::InSphereSearchSettings`.
typedef struct MR_InSphereSearchSettings MR_InSphereSearchSettings;

/// found maximal inscribed sphere touching input point with center along given direction
/// Generated from class `MR::InSphere`.
typedef struct MR_InSphere MR_InSphere;

/// returns the distance from each vertex along minus normal to the nearest mesh intersection (or FLT_MAX if no intersection found)
/// Generated from function `MR::computeRayThicknessAtVertices`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `progress` is a single object.
/// Parameter `progress` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_VertScalars_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_VertScalars *MR_computeRayThicknessAtVertices(const MR_Mesh *mesh, const MR_std_function_bool_from_float *progress);

///< relative position on mesh
/// Returns a pointer to a member variable of class `MR::MeshPoint` named `triPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshTriPoint *MR_MeshPoint_Get_triPoint(const MR_MeshPoint *_this);

///< relative position on mesh
/// Modifies a member variable of class `MR::MeshPoint` named `triPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_MeshPoint_Set_triPoint(MR_MeshPoint *_this, const MR_MeshTriPoint *value);

///< relative position on mesh
/// Returns a mutable pointer to a member variable of class `MR::MeshPoint` named `triPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshTriPoint *MR_MeshPoint_GetMutable_triPoint(MR_MeshPoint *_this);

///< 3d coordinates
/// Returns a pointer to a member variable of class `MR::MeshPoint` named `pt`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_MeshPoint_Get_pt(const MR_MeshPoint *_this);

///< 3d coordinates
/// Modifies a member variable of class `MR::MeshPoint` named `pt`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshPoint_Set_pt(MR_MeshPoint *_this, MR_Vector3f value);

///< 3d coordinates
/// Returns a mutable pointer to a member variable of class `MR::MeshPoint` named `pt`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_MeshPoint_GetMutable_pt(MR_MeshPoint *_this);

///< unit direction inside the mesh = minus normal
/// Returns a pointer to a member variable of class `MR::MeshPoint` named `inDir`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_MeshPoint_Get_inDir(const MR_MeshPoint *_this);

///< unit direction inside the mesh = minus normal
/// Modifies a member variable of class `MR::MeshPoint` named `inDir`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshPoint_Set_inDir(MR_MeshPoint *_this, MR_Vector3f value);

///< unit direction inside the mesh = minus normal
/// Returns a mutable pointer to a member variable of class `MR::MeshPoint` named `inDir`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_MeshPoint_GetMutable_inDir(MR_MeshPoint *_this);

///< predicate that returns true for mesh faces not-incident to the point
/// Returns a pointer to a member variable of class `MR::MeshPoint` named `notIncidentFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_MR_FaceId *MR_MeshPoint_Get_notIncidentFaces(const MR_MeshPoint *_this);

///< predicate that returns true for mesh faces not-incident to the point
/// Modifies a member variable of class `MR::MeshPoint` named `notIncidentFaces`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshPoint_Set_notIncidentFaces(MR_MeshPoint *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_MR_FaceId *value);

///< predicate that returns true for mesh faces not-incident to the point
/// Returns a mutable pointer to a member variable of class `MR::MeshPoint` named `notIncidentFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_MR_FaceId *MR_MeshPoint_GetMutable_notIncidentFaces(MR_MeshPoint *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshPoint_Destroy()` to free it when you're done using it.
MRC_API MR_MeshPoint *MR_MeshPoint_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshPoint_DestroyArray()`.
/// Use `MR_MeshPoint_OffsetMutablePtr()` and `MR_MeshPoint_OffsetPtr()` to access the array elements.
MRC_API MR_MeshPoint *MR_MeshPoint_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshPoint` elementwise.
/// Parameter `triPoint` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshPoint_Destroy()` to free it when you're done using it.
MRC_API MR_MeshPoint *MR_MeshPoint_ConstructFrom(const MR_MeshTriPoint *triPoint, MR_Vector3f pt, MR_Vector3f inDir, MR_PassBy notIncidentFaces_pass_by, MR_std_function_bool_from_MR_FaceId *notIncidentFaces);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshPoint *MR_MeshPoint_OffsetPtr(const MR_MeshPoint *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshPoint *MR_MeshPoint_OffsetMutablePtr(MR_MeshPoint *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshPoint`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshPoint_Destroy()` to free it when you're done using it.
MRC_API MR_MeshPoint *MR_MeshPoint_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MeshPoint *_other);

/// Destroys a heap-allocated instance of `MR_MeshPoint`. Does nothing if the pointer is null.
MRC_API void MR_MeshPoint_Destroy(const MR_MeshPoint *_this);

/// Destroys a heap-allocated array of `MR_MeshPoint`. Does nothing if the pointer is null.
MRC_API void MR_MeshPoint_DestroyArray(const MR_MeshPoint *_this);

/// Generated from a method of class `MR::MeshPoint` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshPoint *MR_MeshPoint_AssignFromAnother(MR_MeshPoint *_this, MR_PassBy _other_pass_by, MR_MeshPoint *_other);

/// Generated from a method of class `MR::MeshPoint` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
MRC_API void MR_MeshPoint_set(MR_MeshPoint *_this, const MR_Mesh *mesh, const MR_MeshTriPoint *p);

/// returns the nearest intersection between the mesh and the ray from given point along minus normal (inside the mesh)
/// Generated from function `MR::rayInsideIntersect`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `m` can not be null. It is a single object.
/// Parameter `rayEnd` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshIntersectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshIntersectionResult *MR_rayInsideIntersect_MR_MeshPoint(const MR_Mesh *mesh, const MR_MeshPoint *m, const float *rayEnd);

/// Generated from function `MR::rayInsideIntersect`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `rayEnd` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshIntersectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshIntersectionResult *MR_rayInsideIntersect_MR_VertId(const MR_Mesh *mesh, MR_VertId v, const float *rayEnd);

/// if false then searches for the maximal inscribed sphere in mesh;
/// if true then searches for both a) maximal inscribed sphere, and b) maximal sphere outside the mesh touching it at two points;
///              and returns the smaller of two, and if it is b) then with minus sign
/// Returns a pointer to a member variable of class `MR::InSphereSearchSettings` named `insideAndOutside`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_InSphereSearchSettings_Get_insideAndOutside(const MR_InSphereSearchSettings *_this);

/// if false then searches for the maximal inscribed sphere in mesh;
/// if true then searches for both a) maximal inscribed sphere, and b) maximal sphere outside the mesh touching it at two points;
///              and returns the smaller of two, and if it is b) then with minus sign
/// Modifies a member variable of class `MR::InSphereSearchSettings` named `insideAndOutside`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_InSphereSearchSettings_Set_insideAndOutside(MR_InSphereSearchSettings *_this, bool value);

/// if false then searches for the maximal inscribed sphere in mesh;
/// if true then searches for both a) maximal inscribed sphere, and b) maximal sphere outside the mesh touching it at two points;
///              and returns the smaller of two, and if it is b) then with minus sign
/// Returns a mutable pointer to a member variable of class `MR::InSphereSearchSettings` named `insideAndOutside`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_InSphereSearchSettings_GetMutable_insideAndOutside(MR_InSphereSearchSettings *_this);

/// maximum allowed radius of the sphere;
/// for almost closed meshes the article recommends maxRadius = 0.5f * std::min( { boxSize.x, boxSize.y, boxSize.z } )
/// Returns a pointer to a member variable of class `MR::InSphereSearchSettings` named `maxRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_InSphereSearchSettings_Get_maxRadius(const MR_InSphereSearchSettings *_this);

/// maximum allowed radius of the sphere;
/// for almost closed meshes the article recommends maxRadius = 0.5f * std::min( { boxSize.x, boxSize.y, boxSize.z } )
/// Modifies a member variable of class `MR::InSphereSearchSettings` named `maxRadius`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_InSphereSearchSettings_Set_maxRadius(MR_InSphereSearchSettings *_this, float value);

/// maximum allowed radius of the sphere;
/// for almost closed meshes the article recommends maxRadius = 0.5f * std::min( { boxSize.x, boxSize.y, boxSize.z } )
/// Returns a mutable pointer to a member variable of class `MR::InSphereSearchSettings` named `maxRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_InSphereSearchSettings_GetMutable_maxRadius(MR_InSphereSearchSettings *_this);

/// maximum number of shrinking iterations for one triangle
/// Returns a pointer to a member variable of class `MR::InSphereSearchSettings` named `maxIters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_InSphereSearchSettings_Get_maxIters(const MR_InSphereSearchSettings *_this);

/// maximum number of shrinking iterations for one triangle
/// Modifies a member variable of class `MR::InSphereSearchSettings` named `maxIters`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_InSphereSearchSettings_Set_maxIters(MR_InSphereSearchSettings *_this, int32_t value);

/// maximum number of shrinking iterations for one triangle
/// Returns a mutable pointer to a member variable of class `MR::InSphereSearchSettings` named `maxIters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_InSphereSearchSettings_GetMutable_maxIters(MR_InSphereSearchSettings *_this);

/// iterations stop if next radius is larger than minShrinkage times previous radius
/// Returns a pointer to a member variable of class `MR::InSphereSearchSettings` named `minShrinkage`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_InSphereSearchSettings_Get_minShrinkage(const MR_InSphereSearchSettings *_this);

/// iterations stop if next radius is larger than minShrinkage times previous radius
/// Modifies a member variable of class `MR::InSphereSearchSettings` named `minShrinkage`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_InSphereSearchSettings_Set_minShrinkage(MR_InSphereSearchSettings *_this, float value);

/// iterations stop if next radius is larger than minShrinkage times previous radius
/// Returns a mutable pointer to a member variable of class `MR::InSphereSearchSettings` named `minShrinkage`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_InSphereSearchSettings_GetMutable_minShrinkage(MR_InSphereSearchSettings *_this);

/// minimum cosine of the angle between two unit directions:
/// 1) search unit direction (m.inDir),
/// 2) unit direction from sphere's center to the other found touch point;
/// -1 value means no filtering by this angle;
/// the increase of this value helps avoiding too small spheres on noisy surfaces
/// Returns a pointer to a member variable of class `MR::InSphereSearchSettings` named `minAngleCos`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_InSphereSearchSettings_Get_minAngleCos(const MR_InSphereSearchSettings *_this);

/// minimum cosine of the angle between two unit directions:
/// 1) search unit direction (m.inDir),
/// 2) unit direction from sphere's center to the other found touch point;
/// -1 value means no filtering by this angle;
/// the increase of this value helps avoiding too small spheres on noisy surfaces
/// Modifies a member variable of class `MR::InSphereSearchSettings` named `minAngleCos`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_InSphereSearchSettings_Set_minAngleCos(MR_InSphereSearchSettings *_this, float value);

/// minimum cosine of the angle between two unit directions:
/// 1) search unit direction (m.inDir),
/// 2) unit direction from sphere's center to the other found touch point;
/// -1 value means no filtering by this angle;
/// the increase of this value helps avoiding too small spheres on noisy surfaces
/// Returns a mutable pointer to a member variable of class `MR::InSphereSearchSettings` named `minAngleCos`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_InSphereSearchSettings_GetMutable_minAngleCos(MR_InSphereSearchSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_InSphereSearchSettings_Destroy()` to free it when you're done using it.
MRC_API MR_InSphereSearchSettings *MR_InSphereSearchSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_InSphereSearchSettings_DestroyArray()`.
/// Use `MR_InSphereSearchSettings_OffsetMutablePtr()` and `MR_InSphereSearchSettings_OffsetPtr()` to access the array elements.
MRC_API MR_InSphereSearchSettings *MR_InSphereSearchSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::InSphereSearchSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_InSphereSearchSettings_Destroy()` to free it when you're done using it.
MRC_API MR_InSphereSearchSettings *MR_InSphereSearchSettings_ConstructFrom(bool insideAndOutside, float maxRadius, int32_t maxIters, float minShrinkage, float minAngleCos);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_InSphereSearchSettings *MR_InSphereSearchSettings_OffsetPtr(const MR_InSphereSearchSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_InSphereSearchSettings *MR_InSphereSearchSettings_OffsetMutablePtr(MR_InSphereSearchSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::InSphereSearchSettings`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_InSphereSearchSettings_Destroy()` to free it when you're done using it.
MRC_API MR_InSphereSearchSettings *MR_InSphereSearchSettings_ConstructFromAnother(const MR_InSphereSearchSettings *_other);

/// Destroys a heap-allocated instance of `MR_InSphereSearchSettings`. Does nothing if the pointer is null.
MRC_API void MR_InSphereSearchSettings_Destroy(const MR_InSphereSearchSettings *_this);

/// Destroys a heap-allocated array of `MR_InSphereSearchSettings`. Does nothing if the pointer is null.
MRC_API void MR_InSphereSearchSettings_DestroyArray(const MR_InSphereSearchSettings *_this);

/// Generated from a method of class `MR::InSphereSearchSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_InSphereSearchSettings *MR_InSphereSearchSettings_AssignFromAnother(MR_InSphereSearchSettings *_this, const MR_InSphereSearchSettings *_other);

/// Returns a pointer to a member variable of class `MR::InSphere` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_InSphere_Get_center(const MR_InSphere *_this);

/// Modifies a member variable of class `MR::InSphere` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_InSphere_Set_center(MR_InSphere *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::InSphere` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_InSphere_GetMutable_center(MR_InSphere *_this);

/// Returns a pointer to a member variable of class `MR::InSphere` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_InSphere_Get_radius(const MR_InSphere *_this);

/// Modifies a member variable of class `MR::InSphere` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_InSphere_Set_radius(MR_InSphere *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::InSphere` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_InSphere_GetMutable_radius(MR_InSphere *_this);

///< excluding input point and incident triangles, distSq - squared distance to sphere's center
/// Returns a pointer to a member variable of class `MR::InSphere` named `oppositeTouchPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshProjectionResult *MR_InSphere_Get_oppositeTouchPoint(const MR_InSphere *_this);

///< excluding input point and incident triangles, distSq - squared distance to sphere's center
/// Modifies a member variable of class `MR::InSphere` named `oppositeTouchPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_InSphere_Set_oppositeTouchPoint(MR_InSphere *_this, const MR_MeshProjectionResult *value);

///< excluding input point and incident triangles, distSq - squared distance to sphere's center
/// Returns a mutable pointer to a member variable of class `MR::InSphere` named `oppositeTouchPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshProjectionResult *MR_InSphere_GetMutable_oppositeTouchPoint(MR_InSphere *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_InSphere_Destroy()` to free it when you're done using it.
MRC_API MR_InSphere *MR_InSphere_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_InSphere_DestroyArray()`.
/// Use `MR_InSphere_OffsetMutablePtr()` and `MR_InSphere_OffsetPtr()` to access the array elements.
MRC_API MR_InSphere *MR_InSphere_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::InSphere` elementwise.
/// Parameter `oppositeTouchPoint` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_InSphere_Destroy()` to free it when you're done using it.
MRC_API MR_InSphere *MR_InSphere_ConstructFrom(MR_Vector3f center, float radius, const MR_MeshProjectionResult *oppositeTouchPoint);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_InSphere *MR_InSphere_OffsetPtr(const MR_InSphere *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_InSphere *MR_InSphere_OffsetMutablePtr(MR_InSphere *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::InSphere`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_InSphere_Destroy()` to free it when you're done using it.
MRC_API MR_InSphere *MR_InSphere_ConstructFromAnother(const MR_InSphere *_other);

/// Destroys a heap-allocated instance of `MR_InSphere`. Does nothing if the pointer is null.
MRC_API void MR_InSphere_Destroy(const MR_InSphere *_this);

/// Destroys a heap-allocated array of `MR_InSphere`. Does nothing if the pointer is null.
MRC_API void MR_InSphere_DestroyArray(const MR_InSphere *_this);

/// Generated from a method of class `MR::InSphere` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_InSphere *MR_InSphere_AssignFromAnother(MR_InSphere *_this, const MR_InSphere *_other);

/// finds maximal sphere inscribed in the mesh touching point (p) with center along the normal at (p)
/// Generated from function `MR::findInSphere`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `m` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_InSphere_Destroy()` to free it when you're done using it.
MRC_API MR_InSphere *MR_findInSphere_MR_MeshPoint(const MR_Mesh *mesh, const MR_MeshPoint *m, const MR_InSphereSearchSettings *settings);

/// Generated from function `MR::findInSphere`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_InSphere_Destroy()` to free it when you're done using it.
MRC_API MR_InSphere *MR_findInSphere_MR_VertId(const MR_Mesh *mesh, MR_VertId v, const MR_InSphereSearchSettings *settings);

/// returns the thickness at each vertex as the diameter of the maximal inscribed sphere
/// Generated from function `MR::computeInSphereThicknessAtVertices`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Parameter `progress` is a single object.
/// Parameter `progress` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_VertScalars_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_VertScalars *MR_computeInSphereThicknessAtVertices(const MR_Mesh *mesh, const MR_InSphereSearchSettings *settings, const MR_std_function_bool_from_float *progress);

#ifdef __cplusplus
} // extern "C"
#endif
