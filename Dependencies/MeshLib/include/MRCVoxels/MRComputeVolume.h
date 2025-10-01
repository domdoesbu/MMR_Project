// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_std_vector_std_shared_ptr_MR_Mesh MR_std_vector_std_shared_ptr_MR_Mesh; // Defined in `#include <MRCMisc/std_vector_std_shared_ptr_MR_Mesh.h>`.


// Computes summary volume of given meshes converting it to voxels of given size
// note that each mesh should have closed topology
// speed and precision depends on voxelSize (smaller voxel - faster, less precise; bigger voxel - slower, more precise)
/// Generated from function `MR::voxelizeAndComputeVolume`.
/// Parameter `meshes` can not be null. It is a single object.
/// Parameter `xf` can not be null. It is a single object.
/// Parameter `voxelSize` can not be null. It is a single object.
MRC_API float MR_voxelizeAndComputeVolume(const MR_std_vector_std_shared_ptr_MR_Mesh *meshes, const MR_AffineXf3f *xf, const MR_Vector3f *voxelSize);

#ifdef __cplusplus
} // extern "C"
#endif
