// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_std_function_void_from_const_MR_EdgePoint_ref MR_std_function_void_from_const_MR_EdgePoint_ref; // Defined in `#include <MRCMisc/std_function_void_from_const_MR_EdgePoint_ref.h>`.
typedef struct MR_std_vector_MR_FaceBitSet MR_std_vector_MR_FaceBitSet; // Defined in `#include <MRCMisc/std_vector_MR_FaceBitSet.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.


// Separates mesh into disconnected by contour components (independent components are not returned),
// faces that are intersected by contour does not belong to any component.
// Calls callback for each MeshEdgePoint in contour respecting order, 
// ignoring MeshTriPoints (if projection of input point lay inside face)
/// Generated from function `MR::separateClosedContour`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `contour` can not be null. It is a single object.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_FaceBitSet *MR_separateClosedContour(const MR_Mesh *mesh, const MR_std_vector_MR_Vector3f *contour, const MR_std_function_void_from_const_MR_EdgePoint_ref *cb);

#ifdef __cplusplus
} // extern "C"
#endif
