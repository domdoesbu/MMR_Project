// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_expected_MR_Mesh_std_string MR_expected_MR_Mesh_std_string; // Defined in `#include <MRCMisc/expected_MR_Mesh_std_string.h>`.
typedef struct MR_std_function_MR_Vector3f_from_uint64_t_uint64_t MR_std_function_MR_Vector3f_from_uint64_t_uint64_t; // Defined in `#include <MRCMisc/std_function_MR_Vector3f_from_uint64_t_uint64_t.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_function_bool_from_uint64_t_uint64_t MR_std_function_bool_from_uint64_t_uint64_t; // Defined in `#include <MRCMisc/std_function_bool_from_uint64_t_uint64_t.h>`.
typedef struct MR_std_function_bool_from_uint64_t_uint64_t_uint64_t_uint64_t_uint64_t_uint64_t MR_std_function_bool_from_uint64_t_uint64_t_uint64_t_uint64_t_uint64_t_uint64_t; // Defined in `#include <MRCMisc/std_function_bool_from_uint64_t_uint64_t_uint64_t_uint64_t_uint64_t_uint64_t.h>`.


// Creates regular mesh with points in valid grid lattice
/// Generated from function `MR::makeRegularGridMesh`.
/// Parameter `validator` can not be null. It is a single object.
/// Parameter `positioner` can not be null. It is a single object.
/// Parameter `faceValidator` is a single object.
/// Parameter `faceValidator` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_makeRegularGridMesh_6(MR_uint64_t width, MR_uint64_t height, const MR_std_function_bool_from_uint64_t_uint64_t *validator, const MR_std_function_MR_Vector3f_from_uint64_t_uint64_t *positioner, const MR_std_function_bool_from_uint64_t_uint64_t_uint64_t_uint64_t_uint64_t_uint64_t *faceValidator, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

// Creates regular mesh from monotone (connects point with closed x, y neighbors) points
/// Generated from function `MR::makeRegularGridMesh`.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_makeRegularGridMesh_2(MR_PassBy pc_pass_by, MR_VertCoords *pc, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

#ifdef __cplusplus
} // extern "C"
#endif
