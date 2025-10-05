// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_function_float_from_MR_VertId MR_std_function_float_from_MR_VertId; // Defined in `#include <MRCMisc/std_function_float_from_MR_VertId.h>`.


/// Modifies \p mesh shifting each vertex by the corresponding \p offset
/// @return false if cancelled.
/// Generated from function `MR::offsetVerts`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `offset` can not be null. It is a single object.
MRC_API bool MR_offsetVerts(MR_Mesh *mesh, const MR_std_function_float_from_MR_VertId *offset, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

#ifdef __cplusplus
} // extern "C"
#endif
