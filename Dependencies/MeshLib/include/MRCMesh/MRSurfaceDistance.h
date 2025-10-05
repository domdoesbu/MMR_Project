// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshTriPoint MR_MeshTriPoint; // Defined in `#include <MRCMesh/MRMeshTriPoint.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertScalars MR_VertScalars; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_phmap_flat_hash_map_MR_VertId_float MR_phmap_flat_hash_map_MR_VertId_float; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_VertId_float.h>`.
typedef struct MR_std_vector_MR_MeshTriPoint MR_std_vector_MR_MeshTriPoint; // Defined in `#include <MRCMisc/std_vector_MR_MeshTriPoint.h>`.


/// computes path distances in mesh vertices from given start vertices, stopping when maxDist is reached;
/// considered paths can go either along edges or straightly within triangles
/// Generated from function `MR::computeSurfaceDistances`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `startVertices` can not be null. It is a single object.
/// Parameter `maxDist` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `maxVertUpdates` has a default argument: `3`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertScalars_Destroy()` to free it when you're done using it.
MRC_API MR_VertScalars *MR_computeSurfaceDistances_5_MR_VertBitSet(const MR_Mesh *mesh, const MR_VertBitSet *startVertices, const float *maxDist, const MR_VertBitSet *region, const int32_t *maxVertUpdates);

/// computes path distances in mesh vertices from given start vertices, stopping when all targetVertices or maxDist is reached;
/// considered paths can go either along edges or straightly within triangles
/// Generated from function `MR::computeSurfaceDistances`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `startVertices` can not be null. It is a single object.
/// Parameter `targetVertices` can not be null. It is a single object.
/// Parameter `maxDist` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `maxVertUpdates` has a default argument: `3`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertScalars_Destroy()` to free it when you're done using it.
MRC_API MR_VertScalars *MR_computeSurfaceDistances_6_MR_VertBitSet(const MR_Mesh *mesh, const MR_VertBitSet *startVertices, const MR_VertBitSet *targetVertices, const float *maxDist, const MR_VertBitSet *region, const int32_t *maxVertUpdates);

/// computes path distances in mesh vertices from given start vertices with values in them, stopping when maxDist is reached;
/// considered paths can go either along edges or straightly within triangles
/// Generated from function `MR::computeSurfaceDistances`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `startVertices` can not be null. It is a single object.
/// Parameter `maxDist` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `maxVertUpdates` has a default argument: `3`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertScalars_Destroy()` to free it when you're done using it.
MRC_API MR_VertScalars *MR_computeSurfaceDistances_5_phmap_flat_hash_map_MR_VertId_float(const MR_Mesh *mesh, const MR_phmap_flat_hash_map_MR_VertId_float *startVertices, const float *maxDist, const MR_VertBitSet *region, const int32_t *maxVertUpdates);

/// computes path distance in mesh vertices from given start point, stopping when all vertices in the face where end is located are reached;
/// \details considered paths can go either along edges or straightly within triangles
/// \param endReached if pointer provided it will receive where a path from start to end exists
/// Generated from function `MR::computeSurfaceDistances`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `start` can not be null. It is a single object.
/// Parameter `end` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `endReached` defaults to a null pointer in C++.
/// Parameter `maxVertUpdates` has a default argument: `3`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertScalars_Destroy()` to free it when you're done using it.
MRC_API MR_VertScalars *MR_computeSurfaceDistances_6_MR_MeshTriPoint(const MR_Mesh *mesh, const MR_MeshTriPoint *start, const MR_MeshTriPoint *end, const MR_VertBitSet *region, bool *endReached, const int32_t *maxVertUpdates);

/// computes path distances in mesh vertices from given start point, stopping when maxDist is reached;
/// considered paths can go either along edges or straightly within triangles
/// Generated from function `MR::computeSurfaceDistances`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `start` can not be null. It is a single object.
/// Parameter `maxDist` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `maxVertUpdates` has a default argument: `3`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertScalars_Destroy()` to free it when you're done using it.
MRC_API MR_VertScalars *MR_computeSurfaceDistances_5_MR_MeshTriPoint(const MR_Mesh *mesh, const MR_MeshTriPoint *start, const float *maxDist, const MR_VertBitSet *region, const int32_t *maxVertUpdates);

/// computes path distances in mesh vertices from given start points, stopping when maxDist is reached;
/// considered paths can go either along edges or straightly within triangles
/// Generated from function `MR::computeSurfaceDistances`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `starts` can not be null. It is a single object.
/// Parameter `maxDist` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `maxVertUpdates` has a default argument: `3`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertScalars_Destroy()` to free it when you're done using it.
MRC_API MR_VertScalars *MR_computeSurfaceDistances_5_std_vector_MR_MeshTriPoint(const MR_Mesh *mesh, const MR_std_vector_MR_MeshTriPoint *starts, const float *maxDist, const MR_VertBitSet *region, const int32_t *maxVertUpdates);

#ifdef __cplusplus
} // extern "C"
#endif
