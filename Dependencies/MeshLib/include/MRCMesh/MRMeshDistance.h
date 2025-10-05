// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_SignedDistanceToMeshOptions MR_SignedDistanceToMeshOptions; // Defined in `#include <MRCMesh/MRDistanceToMeshOptions.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_std_array_MR_Vector3f_3 MR_std_array_MR_Vector3f_3; // Defined in `#include <MRCMisc/std_array_MR_Vector3f_3.h>`.
typedef struct MR_std_function_MR_ProcessOneResult_from_const_MR_Vector3f_ref_MR_FaceId_const_MR_Vector3f_ref_float MR_std_function_MR_ProcessOneResult_from_const_MR_Vector3f_ref_MR_FaceId_const_MR_Vector3f_ref_float; // Defined in `#include <MRCMisc/std_function_MR_ProcessOneResult_from_const_MR_Vector3f_ref_MR_FaceId_const_MR_Vector3f_ref___9fe8.h>`.
typedef struct MR_std_optional_float MR_std_optional_float; // Defined in `#include <MRCMisc/std_optional_float.h>`.


typedef bool MR_ProcessOneResult;
enum // MR_ProcessOneResult
{
    MR_ProcessOneResult_StopProcessing = 0,
    MR_ProcessOneResult_ContinueProcessing = 1,
};

/// invokes given callback for all triangles from given mesh part located not further than
/// given squared distance from t-triangle
/// Generated from function `MR::processCloseTriangles`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `t` can not be null. It is a single object.
/// Parameter `call` can not be null. It is a single object.
MRC_API void MR_processCloseTriangles(const MR_MeshPart *mp, const MR_std_array_MR_Vector3f_3 *t, float rangeSq, const MR_std_function_MR_ProcessOneResult_from_const_MR_Vector3f_ref_MR_FaceId_const_MR_Vector3f_ref_float *call);

/// computes signed distance from point (p) to mesh part (mp) following options (op);
/// returns std::nullopt if distance is smaller than op.minDist or larger than op.maxDist (except for op.signMode == HoleWindingRule)
/// Generated from function `MR::signedDistanceToMesh`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
/// Parameter `op` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_float_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_float *MR_signedDistanceToMesh(const MR_MeshPart *mp, const MR_Vector3f *p, const MR_SignedDistanceToMeshOptions *op);

#ifdef __cplusplus
} // extern "C"
#endif
