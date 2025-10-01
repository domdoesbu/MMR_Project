// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId; // Defined in `#include <MRCMesh/MRMapOrHashMap.h>`.
typedef struct MR_UndirectedEdgeBMap MR_UndirectedEdgeBMap; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_WholeEdgeMap MR_WholeEdgeMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_EdgeId MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_EdgeId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_UndirectedEdgeId_MR_EdgeId.h>`.


/// given input edge (src), converts its id using given map
/// Generated from function `MR::mapEdge`.
/// Parameter `map` can not be null. It is a single object.
MRC_API MR_EdgeId MR_mapEdge_MR_WholeEdgeMap(const MR_WholeEdgeMap *map, MR_EdgeId src);

/// given input edge (src), converts its id using given map
/// Generated from function `MR::mapEdge`.
/// Parameter `map` can not be null. It is a single object.
MRC_API MR_EdgeId MR_mapEdge_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_EdgeId(const MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_EdgeId *map, MR_EdgeId src);

/// given input edge (src), converts its id using given map
/// Generated from function `MR::mapEdge`.
/// Parameter `m` can not be null. It is a single object.
MRC_API MR_EdgeId MR_mapEdge_MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId(const MR_MapOrHashMap_MR_UndirectedEdgeId_MR_EdgeId *m, MR_EdgeId src);

/// given input edge (src), converts its id using given map
/// Generated from function `MR::mapEdge`.
/// Parameter `map` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_mapEdge_MR_UndirectedEdgeBMap(const MR_UndirectedEdgeBMap *map, MR_UndirectedEdgeId src);

/// given input bit-set (src), converts each id corresponding to set bit using given map, and sets its bit in the resulting bit set
/// Generated from function `MR::mapEdges`.
/// Parameter `map` can not be null. It is a single object.
/// Parameter `src` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_mapEdges_MR_WholeEdgeMap(const MR_WholeEdgeMap *map, const MR_UndirectedEdgeBitSet *src);

/// given input bit-set (src), converts each id corresponding to set bit using given map, and sets its bit in the resulting bit set
/// Generated from function `MR::mapEdges`.
/// Parameter `map` can not be null. It is a single object.
/// Parameter `src` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_mapEdges_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_EdgeId(const MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_EdgeId *map, const MR_UndirectedEdgeBitSet *src);

/// given input bit-set (src), converts each id corresponding to set bit using given map, and sets its bit in the resulting bit set
/// Generated from function `MR::mapEdges`.
/// Parameter `map` can not be null. It is a single object.
/// Parameter `src` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_mapEdges_MR_UndirectedEdgeBMap(const MR_UndirectedEdgeBMap *map, const MR_UndirectedEdgeBitSet *src);

#ifdef __cplusplus
} // extern "C"
#endif
