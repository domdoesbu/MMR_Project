// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.


/// filters given edges using the following criteria:
/// if \param filterComponents is true then connected components with summary length of their edges less than \param critLength will be excluded
/// if \param filterBranches is true then branches shorter than \param critLength will be excluded
/// Generated from function `MR::filterCreaseEdges`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `creaseEdges` can not be null. It is a single object.
/// Parameter `filterComponents` has a default argument: `true`, pass a null pointer to use it.
/// Parameter `filterBranches` has a default argument: `false`, pass a null pointer to use it.
MRC_API void MR_filterCreaseEdges(const MR_Mesh *mesh, MR_UndirectedEdgeBitSet *creaseEdges, float critLength, const bool *filterComponents, const bool *filterBranches);

#ifdef __cplusplus
} // extern "C"
#endif
