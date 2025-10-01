// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshAttributesToUpdate MR_MeshAttributesToUpdate; // Defined in `#include <MRCMesh/MRMeshAttributesToUpdate.h>`.
typedef struct MR_std_function_void_from_MR_EdgeId_MR_EdgeId MR_std_function_void_from_MR_EdgeId_MR_EdgeId; // Defined in `#include <MRCMisc/std_function_void_from_MR_EdgeId_MR_EdgeId.h>`.


/**
* auto uvCoords = obj_->getUVCoords();
* auto texturePerFace = obj_->getTexturePerFace();
* MeshAttributesToUpdate meshParams;
* if ( !uvCoords.empty() )
*     meshParams.uvCoords = &uvCoords;
* if ( !texturePerFace.empty() )
*     meshParams.texturePerFace = &texturePerFace;
* subs.onEdgeSplit = meshOnEdgeSplitAttribute( *obj_->varMesh(), meshParams );
* subdivideMesh( *obj_->varMesh(), subs );
*/
/// Generated from function `MR::meshOnEdgeSplitAttribute`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_void_from_MR_EdgeId_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_void_from_MR_EdgeId_MR_EdgeId *MR_meshOnEdgeSplitAttribute(const MR_Mesh *mesh, const MR_MeshAttributesToUpdate *params);

/// Generated from function `MR::meshOnEdgeSplitVertAttribute`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_void_from_MR_EdgeId_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_void_from_MR_EdgeId_MR_EdgeId *MR_meshOnEdgeSplitVertAttribute(const MR_Mesh *mesh, const MR_MeshAttributesToUpdate *params);

/// Generated from function `MR::meshOnEdgeSplitFaceAttribute`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_void_from_MR_EdgeId_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_void_from_MR_EdgeId_MR_EdgeId *MR_meshOnEdgeSplitFaceAttribute(const MR_Mesh *mesh, const MR_MeshAttributesToUpdate *params);

#ifdef __cplusplus
} // extern "C"
#endif
