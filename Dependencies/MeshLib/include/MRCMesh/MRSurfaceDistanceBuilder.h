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
typedef struct MR_MeshTriPoint MR_MeshTriPoint; // Defined in `#include <MRCMesh/MRMeshTriPoint.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertScalars MR_VertScalars; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_phmap_flat_hash_map_MR_VertId_float MR_phmap_flat_hash_map_MR_VertId_float; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_VertId_float.h>`.


/// Generated from class `MR::VertDistance`.
typedef struct MR_VertDistance MR_VertDistance;

/// this class is responsible for iterative construction of distance map along the surface
/// Generated from class `MR::SurfaceDistanceBuilder`.
typedef struct MR_SurfaceDistanceBuilder MR_SurfaceDistanceBuilder;

/// vertex in question
/// Returns a pointer to a member variable of class `MR::VertDistance` named `vert`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_VertDistance_Get_vert(const MR_VertDistance *_this);

/// vertex in question
/// Modifies a member variable of class `MR::VertDistance` named `vert`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VertDistance_Set_vert(MR_VertDistance *_this, MR_VertId value);

/// vertex in question
/// Returns a mutable pointer to a member variable of class `MR::VertDistance` named `vert`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_VertDistance_GetMutable_vert(MR_VertDistance *_this);

/// best known distance to reach this vertex
/// Returns a pointer to a member variable of class `MR::VertDistance` named `distance`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_VertDistance_Get_distance(const MR_VertDistance *_this);

/// best known distance to reach this vertex
/// Modifies a member variable of class `MR::VertDistance` named `distance`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VertDistance_Set_distance(MR_VertDistance *_this, float value);

/// best known distance to reach this vertex
/// Returns a mutable pointer to a member variable of class `MR::VertDistance` named `distance`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_VertDistance_GetMutable_distance(MR_VertDistance *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertDistance_Destroy()` to free it when you're done using it.
MRC_API MR_VertDistance *MR_VertDistance_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VertDistance_DestroyArray()`.
/// Use `MR_VertDistance_OffsetMutablePtr()` and `MR_VertDistance_OffsetPtr()` to access the array elements.
MRC_API MR_VertDistance *MR_VertDistance_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VertDistance *MR_VertDistance_OffsetPtr(const MR_VertDistance *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VertDistance *MR_VertDistance_OffsetMutablePtr(MR_VertDistance *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VertDistance`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertDistance_Destroy()` to free it when you're done using it.
MRC_API MR_VertDistance *MR_VertDistance_ConstructFromAnother(const MR_VertDistance *_other);

/// Generated from a constructor of class `MR::VertDistance`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertDistance_Destroy()` to free it when you're done using it.
MRC_API MR_VertDistance *MR_VertDistance_Construct(MR_VertId v, float d);

/// Destroys a heap-allocated instance of `MR_VertDistance`. Does nothing if the pointer is null.
MRC_API void MR_VertDistance_Destroy(const MR_VertDistance *_this);

/// Destroys a heap-allocated array of `MR_VertDistance`. Does nothing if the pointer is null.
MRC_API void MR_VertDistance_DestroyArray(const MR_VertDistance *_this);

/// Generated from a method of class `MR::VertDistance` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertDistance *MR_VertDistance_AssignFromAnother(MR_VertDistance *_this, const MR_VertDistance *_other);

/// smaller distance to be the first
/// Generated from function `MR::operator<`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_less_MR_VertDistance(const MR_VertDistance *a, const MR_VertDistance *b);

/// Generated from a constructor of class `MR::SurfaceDistanceBuilder`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SurfaceDistanceBuilder_Destroy()` to free it when you're done using it.
MRC_API MR_SurfaceDistanceBuilder *MR_SurfaceDistanceBuilder_ConstructFromAnother(MR_PassBy _other_pass_by, MR_SurfaceDistanceBuilder *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SurfaceDistanceBuilder *MR_SurfaceDistanceBuilder_OffsetPtr(const MR_SurfaceDistanceBuilder *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SurfaceDistanceBuilder *MR_SurfaceDistanceBuilder_OffsetMutablePtr(MR_SurfaceDistanceBuilder *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SurfaceDistanceBuilder`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SurfaceDistanceBuilder_Destroy()` to free it when you're done using it.
MRC_API MR_SurfaceDistanceBuilder *MR_SurfaceDistanceBuilder_Construct_2(const MR_Mesh *mesh, const MR_VertBitSet *region);

/// Generated from a constructor of class `MR::SurfaceDistanceBuilder`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `target` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SurfaceDistanceBuilder_Destroy()` to free it when you're done using it.
MRC_API MR_SurfaceDistanceBuilder *MR_SurfaceDistanceBuilder_Construct_3(const MR_Mesh *mesh, const MR_Vector3f *target, const MR_VertBitSet *region);

/// Destroys a heap-allocated instance of `MR_SurfaceDistanceBuilder`. Does nothing if the pointer is null.
MRC_API void MR_SurfaceDistanceBuilder_Destroy(const MR_SurfaceDistanceBuilder *_this);

/// Destroys a heap-allocated array of `MR_SurfaceDistanceBuilder`. Does nothing if the pointer is null.
MRC_API void MR_SurfaceDistanceBuilder_DestroyArray(const MR_SurfaceDistanceBuilder *_this);

/// initiates distance construction from given vertices with known start distance in all of them (region vertices will NOT be returned by growOne)
/// Generated from a method of class `MR::SurfaceDistanceBuilder` named `addStartRegion`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
MRC_API void MR_SurfaceDistanceBuilder_addStartRegion(MR_SurfaceDistanceBuilder *_this, const MR_VertBitSet *region, float startDistance);

/// initiates distance construction from given start vertices with values in them (these vertices will NOT be returned by growOne if values in them are not decreased)
/// Generated from a method of class `MR::SurfaceDistanceBuilder` named `addStartVertices`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `startVertices` can not be null. It is a single object.
MRC_API void MR_SurfaceDistanceBuilder_addStartVertices(MR_SurfaceDistanceBuilder *_this, const MR_phmap_flat_hash_map_MR_VertId_float *startVertices);

/// initiates distance construction from triangle vertices surrounding given start point (they all will be returned by growOne)
/// Generated from a method of class `MR::SurfaceDistanceBuilder` named `addStart`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `start` can not be null. It is a single object.
MRC_API void MR_SurfaceDistanceBuilder_addStart(MR_SurfaceDistanceBuilder *_this, const MR_MeshTriPoint *start);

/// the maximum amount of times vertex distance can be updated in [1,255], 3 by default;
/// the more the better obtuse triangles are handled
/// Generated from a method of class `MR::SurfaceDistanceBuilder` named `setMaxVertUpdates`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SurfaceDistanceBuilder_setMaxVertUpdates(MR_SurfaceDistanceBuilder *_this, int32_t v);

/// processes one more candidate vertex, which is returned
/// Generated from a method of class `MR::SurfaceDistanceBuilder` named `growOne`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertId MR_SurfaceDistanceBuilder_growOne(MR_SurfaceDistanceBuilder *_this);

/// takes ownership over constructed distance map
/// Generated from a method of class `MR::SurfaceDistanceBuilder` named `takeDistanceMap`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertScalars_Destroy()` to free it when you're done using it.
MRC_API MR_VertScalars *MR_SurfaceDistanceBuilder_takeDistanceMap(MR_SurfaceDistanceBuilder *_this);

/// returns true if further growth is impossible
/// Generated from a method of class `MR::SurfaceDistanceBuilder` named `done`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_SurfaceDistanceBuilder_done(const MR_SurfaceDistanceBuilder *_this);

/// returns path length till the next candidate vertex or maximum float value if all vertices have been reached
/// Generated from a method of class `MR::SurfaceDistanceBuilder` named `doneDistance`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_SurfaceDistanceBuilder_doneDistance(const MR_SurfaceDistanceBuilder *_this);

#ifdef __cplusplus
} // extern "C"
#endif
