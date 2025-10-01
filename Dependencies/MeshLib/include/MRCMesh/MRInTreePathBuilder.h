// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_std_vector_MR_EdgeId MR_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_MR_EdgeId.h>`.


/// given a spanning tree of edges in the mesh (or forest in case of several connected components),
/// prepares to build quickly a path along tree edges between any two vertices
/// Generated from class `MR::InTreePathBuilder`.
typedef struct MR_InTreePathBuilder MR_InTreePathBuilder;

/// Generated from a constructor of class `MR::InTreePathBuilder`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_InTreePathBuilder_Destroy()` to free it when you're done using it.
MRC_API MR_InTreePathBuilder *MR_InTreePathBuilder_ConstructFromAnother(MR_PassBy _other_pass_by, MR_InTreePathBuilder *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_InTreePathBuilder *MR_InTreePathBuilder_OffsetPtr(const MR_InTreePathBuilder *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_InTreePathBuilder *MR_InTreePathBuilder_OffsetMutablePtr(MR_InTreePathBuilder *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::InTreePathBuilder`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `treeEdges` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_InTreePathBuilder_Destroy()` to free it when you're done using it.
MRC_API MR_InTreePathBuilder *MR_InTreePathBuilder_Construct(const MR_MeshTopology *topology, const MR_UndirectedEdgeBitSet *treeEdges);

/// Destroys a heap-allocated instance of `MR_InTreePathBuilder`. Does nothing if the pointer is null.
MRC_API void MR_InTreePathBuilder_Destroy(const MR_InTreePathBuilder *_this);

/// Destroys a heap-allocated array of `MR_InTreePathBuilder`. Does nothing if the pointer is null.
MRC_API void MR_InTreePathBuilder_DestroyArray(const MR_InTreePathBuilder *_this);

/// finds the path in tree from start vertex to finish vertex
/// Generated from a method of class `MR::InTreePathBuilder` named `build`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeId *MR_InTreePathBuilder_build(const MR_InTreePathBuilder *_this, MR_VertId start, MR_VertId finish);

#ifdef __cplusplus
} // extern "C"
#endif
