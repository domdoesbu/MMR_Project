// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshAttributesToUpdate MR_MeshAttributesToUpdate; // Defined in `#include <MRCMesh/MRMeshAttributesToUpdate.h>`.
typedef struct MR_std_function_bool_from_MR_EdgeId_const_MR_Vector3f_ref MR_std_function_bool_from_MR_EdgeId_const_MR_Vector3f_ref; // Defined in `#include <MRCMisc/std_function_bool_from_MR_EdgeId_const_MR_Vector3f_ref.h>`.


/**
* Please use this callback when you decimate a mesh with associated data with each vertex
* recalculate texture coordinates and mesh vertex colors for vertices moved during decimation
* usage example
*   MeshAttributesToUpdate meshParams;
*   auto uvCoords = obj->getUVCoords();
*   auto colorMap = obj->getVertsColorMap();
*   if ( needUpdateUV )
*       meshParams.uvCoords = &uvCoords;
*   if ( needUpdateColorMap )
*       meshParams.colorMap = &colorMap;
*   auto preCollapse = meshPreCollapseVertAttribute( mesh, meshParams );
*   decimateMesh( mesh, DecimateSettings{ .preCollapse = preCollapse } );
*/
/// Generated from function `MR::meshPreCollapseVertAttribute`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_bool_from_MR_EdgeId_const_MR_Vector3f_ref_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_bool_from_MR_EdgeId_const_MR_Vector3f_ref *MR_meshPreCollapseVertAttribute(const MR_Mesh *mesh, const MR_MeshAttributesToUpdate *params);

#ifdef __cplusplus
} // extern "C"
#endif
