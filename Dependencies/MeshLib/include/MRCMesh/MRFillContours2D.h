// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRAffineXf.h>
#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_ObjectMeshData MR_ObjectMeshData; // Defined in `#include <MRCMesh/MRObjectMeshData.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_vector_MR_EdgeId MR_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_MR_EdgeId.h>`.
typedef struct MR_std_vector_std_vector_MR_EdgeId MR_std_vector_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_EdgeId.h>`.
typedef struct MR_std_vector_std_vector_MR_Vector3f MR_std_vector_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_Vector3f.h>`.


/**
* @brief fill holes with border in same plane (i.e. after cut by plane)
* @param mesh - mesh with holes
* @param holeRepresentativeEdges - each edge here represents a hole borders that should be filled
* should be not empty
* edges should have invalid left face (FaceId == -1)
* @return Expected with has_value()=true if holes filled, otherwise - string error
*/
/// Generated from function `MR::fillContours2D`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `holeRepresentativeEdges` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_fillContours2D(MR_Mesh *mesh, const MR_std_vector_MR_EdgeId *holeRepresentativeEdges);

/// computes the transformation that maps
/// O into center mass of contours' points
/// OXY into best plane containing the points
/// Generated from function `MR::getXfFromOxyPlane`.
/// Parameter `contours` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_getXfFromOxyPlane_1(const MR_std_vector_std_vector_MR_Vector3f *contours);

/// Generated from function `MR::getXfFromOxyPlane`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `paths` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_getXfFromOxyPlane_2(const MR_Mesh *mesh, const MR_std_vector_std_vector_MR_EdgeId *paths);

/// given an ObjectMeshData and the contours of a planar hole in it,
/// fills the hole using fillContours2D function and updates all per-element attributes;
/// if some contours were not closed on input, then it closes them by adding a bridge edge in each
/// Generated from function `MR::fillPlanarHole`.
/// Parameter `data` can not be null. It is a single object.
/// Parameter `holeContours` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_fillPlanarHole(MR_ObjectMeshData *data, MR_std_vector_std_vector_MR_EdgeId *holeContours);

#ifdef __cplusplus
} // extern "C"
#endif
