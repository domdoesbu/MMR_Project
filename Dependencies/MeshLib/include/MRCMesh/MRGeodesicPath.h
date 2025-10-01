// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshTriPoint MR_MeshTriPoint; // Defined in `#include <MRCMesh/MRMeshTriPoint.h>`.
typedef struct MR_std_vector_MR_EdgePoint MR_std_vector_MR_EdgePoint; // Defined in `#include <MRCMisc/std_vector_MR_EdgePoint.h>`.
typedef struct MR_std_vector_MR_Vector2f MR_std_vector_MR_Vector2f; // Defined in `#include <MRCMisc/std_vector_MR_Vector2f.h>`.


/// given path s-v-e, tries to decrease its length by moving away from v
/// \param outPath intermediate locations between s and e will be added here
/// \param tmp elements will be temporary allocated here
/// \param cachePath as far as we need two sides unfold, cache one to reduce allocations
/// Generated from function `MR::reducePathViaVertex`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `start` can not be null. It is a single object.
/// Parameter `end` can not be null. It is a single object.
/// Parameter `outPath` can not be null. It is a single object.
/// Parameter `tmp` can not be null. It is a single object.
/// Parameter `cachePath` can not be null. It is a single object.
MRC_API bool MR_reducePathViaVertex(const MR_Mesh *mesh, const MR_MeshTriPoint *start, MR_VertId v, const MR_MeshTriPoint *end, MR_std_vector_MR_EdgePoint *outPath, MR_std_vector_MR_Vector2f *tmp, MR_std_vector_MR_EdgePoint *cachePath);

/// converts any input surface path into geodesic path (so reduces its length): start-path-end;
/// returns actual number of iterations performed
/// Generated from function `MR::reducePath`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `start` can not be null. It is a single object.
/// Parameter `path` can not be null. It is a single object.
/// Parameter `end` can not be null. It is a single object.
/// Parameter `maxIter` has a default argument: `5`, pass a null pointer to use it.
MRC_API int32_t MR_reducePath(const MR_Mesh *mesh, const MR_MeshTriPoint *start, MR_std_vector_MR_EdgePoint *path, const MR_MeshTriPoint *end, const int32_t *maxIter);

#ifdef __cplusplus
} // extern "C"
#endif
