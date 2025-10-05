// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_phmap_flat_hash_map_MR_VertId_MR_VertId MR_phmap_flat_hash_map_MR_VertId_MR_VertId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_VertId_MR_VertId.h>`.


// holds together settings for makeDegenerateBandAroundRegion
/// Generated from class `MR::MakeDegenerateBandAroundRegionParams`.
typedef struct MR_MakeDegenerateBandAroundRegionParams MR_MakeDegenerateBandAroundRegionParams;

// (optional) output newly generated faces
/// Returns a pointer to a member variable of class `MR::MakeDegenerateBandAroundRegionParams` named `outNewFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *const *MR_MakeDegenerateBandAroundRegionParams_Get_outNewFaces(const MR_MakeDegenerateBandAroundRegionParams *_this);

// (optional) output newly generated faces
/// Modifies a member variable of class `MR::MakeDegenerateBandAroundRegionParams` named `outNewFaces`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MakeDegenerateBandAroundRegionParams_Set_outNewFaces(MR_MakeDegenerateBandAroundRegionParams *_this, MR_FaceBitSet *value);

// (optional) output newly generated faces
/// Returns a mutable pointer to a member variable of class `MR::MakeDegenerateBandAroundRegionParams` named `outNewFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet **MR_MakeDegenerateBandAroundRegionParams_GetMutable_outNewFaces(MR_MakeDegenerateBandAroundRegionParams *_this);

// (optional) output edges orthogonal to the boundary
/// Returns a pointer to a member variable of class `MR::MakeDegenerateBandAroundRegionParams` named `outExtrudedEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *const *MR_MakeDegenerateBandAroundRegionParams_Get_outExtrudedEdges(const MR_MakeDegenerateBandAroundRegionParams *_this);

// (optional) output edges orthogonal to the boundary
/// Modifies a member variable of class `MR::MakeDegenerateBandAroundRegionParams` named `outExtrudedEdges`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MakeDegenerateBandAroundRegionParams_Set_outExtrudedEdges(MR_MakeDegenerateBandAroundRegionParams *_this, MR_UndirectedEdgeBitSet *value);

// (optional) output edges orthogonal to the boundary
/// Returns a mutable pointer to a member variable of class `MR::MakeDegenerateBandAroundRegionParams` named `outExtrudedEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet **MR_MakeDegenerateBandAroundRegionParams_GetMutable_outExtrudedEdges(MR_MakeDegenerateBandAroundRegionParams *_this);

// (optional) return legth of the longest edges from the boundary of the region
/// Returns a pointer to a member variable of class `MR::MakeDegenerateBandAroundRegionParams` named `maxEdgeLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *const *MR_MakeDegenerateBandAroundRegionParams_Get_maxEdgeLength(const MR_MakeDegenerateBandAroundRegionParams *_this);

// (optional) return legth of the longest edges from the boundary of the region
/// Modifies a member variable of class `MR::MakeDegenerateBandAroundRegionParams` named `maxEdgeLength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MakeDegenerateBandAroundRegionParams_Set_maxEdgeLength(MR_MakeDegenerateBandAroundRegionParams *_this, float *value);

// (optional) return legth of the longest edges from the boundary of the region
/// Returns a mutable pointer to a member variable of class `MR::MakeDegenerateBandAroundRegionParams` named `maxEdgeLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float **MR_MakeDegenerateBandAroundRegionParams_GetMutable_maxEdgeLength(MR_MakeDegenerateBandAroundRegionParams *_this);

// (optional) map of new vertices to old ones
/// Returns a pointer to a member variable of class `MR::MakeDegenerateBandAroundRegionParams` named `new2OldMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_VertId *const *MR_MakeDegenerateBandAroundRegionParams_Get_new2OldMap(const MR_MakeDegenerateBandAroundRegionParams *_this);

// (optional) map of new vertices to old ones
/// Modifies a member variable of class `MR::MakeDegenerateBandAroundRegionParams` named `new2OldMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MakeDegenerateBandAroundRegionParams_Set_new2OldMap(MR_MakeDegenerateBandAroundRegionParams *_this, MR_phmap_flat_hash_map_MR_VertId_MR_VertId *value);

// (optional) map of new vertices to old ones
/// Returns a mutable pointer to a member variable of class `MR::MakeDegenerateBandAroundRegionParams` named `new2OldMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_VertId **MR_MakeDegenerateBandAroundRegionParams_GetMutable_new2OldMap(MR_MakeDegenerateBandAroundRegionParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MakeDegenerateBandAroundRegionParams_Destroy()` to free it when you're done using it.
MRC_API MR_MakeDegenerateBandAroundRegionParams *MR_MakeDegenerateBandAroundRegionParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MakeDegenerateBandAroundRegionParams_DestroyArray()`.
/// Use `MR_MakeDegenerateBandAroundRegionParams_OffsetMutablePtr()` and `MR_MakeDegenerateBandAroundRegionParams_OffsetPtr()` to access the array elements.
MRC_API MR_MakeDegenerateBandAroundRegionParams *MR_MakeDegenerateBandAroundRegionParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MakeDegenerateBandAroundRegionParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MakeDegenerateBandAroundRegionParams_Destroy()` to free it when you're done using it.
MRC_API MR_MakeDegenerateBandAroundRegionParams *MR_MakeDegenerateBandAroundRegionParams_ConstructFrom(MR_FaceBitSet *outNewFaces, MR_UndirectedEdgeBitSet *outExtrudedEdges, float *maxEdgeLength, MR_phmap_flat_hash_map_MR_VertId_MR_VertId *new2OldMap);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MakeDegenerateBandAroundRegionParams *MR_MakeDegenerateBandAroundRegionParams_OffsetPtr(const MR_MakeDegenerateBandAroundRegionParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MakeDegenerateBandAroundRegionParams *MR_MakeDegenerateBandAroundRegionParams_OffsetMutablePtr(MR_MakeDegenerateBandAroundRegionParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MakeDegenerateBandAroundRegionParams`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MakeDegenerateBandAroundRegionParams_Destroy()` to free it when you're done using it.
MRC_API MR_MakeDegenerateBandAroundRegionParams *MR_MakeDegenerateBandAroundRegionParams_ConstructFromAnother(const MR_MakeDegenerateBandAroundRegionParams *_other);

/// Destroys a heap-allocated instance of `MR_MakeDegenerateBandAroundRegionParams`. Does nothing if the pointer is null.
MRC_API void MR_MakeDegenerateBandAroundRegionParams_Destroy(const MR_MakeDegenerateBandAroundRegionParams *_this);

/// Destroys a heap-allocated array of `MR_MakeDegenerateBandAroundRegionParams`. Does nothing if the pointer is null.
MRC_API void MR_MakeDegenerateBandAroundRegionParams_DestroyArray(const MR_MakeDegenerateBandAroundRegionParams *_this);

/// Generated from a method of class `MR::MakeDegenerateBandAroundRegionParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MakeDegenerateBandAroundRegionParams *MR_MakeDegenerateBandAroundRegionParams_AssignFromAnother(MR_MakeDegenerateBandAroundRegionParams *_this, const MR_MakeDegenerateBandAroundRegionParams *_other);

/**
* \brief Create a band of degenerate faces along the border of the specified region and the rest of the mesh
* \details The function is useful for extruding the region without changing the existing faces and creating holes
*
* @param mesh - the target mesh
* @param region - the region required to be separated by a band of degenerate faces
* @param params - optional output parameters
*/
/// Generated from function `MR::makeDegenerateBandAroundRegion`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_makeDegenerateBandAroundRegion(MR_Mesh *mesh, const MR_FaceBitSet *region, const MR_MakeDegenerateBandAroundRegionParams *params);

#ifdef __cplusplus
} // extern "C"
#endif
