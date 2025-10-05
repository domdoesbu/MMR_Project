// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_expected_std_vector_std_vector_MR_Vector3f_std_string MR_expected_std_vector_std_vector_MR_Vector3f_std_string; // Defined in `#include <MRCMisc/expected_std_vector_std_vector_MR_Vector3f_std_string.h>`.
typedef struct MR_std_function_float_from_int32_t MR_std_function_float_from_int32_t; // Defined in `#include <MRCMisc/std_function_float_from_int32_t.h>`.
typedef struct MR_std_vector_MR_MeshTriPoint MR_std_vector_MR_MeshTriPoint; // Defined in `#include <MRCMisc/std_vector_MR_MeshTriPoint.h>`.


/// <summary>
/// Returns contours in \p mesh space that are offset from \p surfaceLine on \p offset amount in all directions
/// </summary>
/// <param name="mesh">mesh to perform offset on</param>
/// <param name="surfaceLine">surface line to perofrm offset from</param>
/// <param name="offset">amount of offset, note that absolute value is used</param>
/// <returns>resulting offset contours or error if something goes wrong</returns>
/// Generated from function `MR::offsetSurfaceLine`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `surfaceLine` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_std_vector_MR_Vector3f_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_std_vector_MR_Vector3f_std_string *MR_offsetSurfaceLine_float(const MR_Mesh *mesh, const MR_std_vector_MR_MeshTriPoint *surfaceLine, float offset);

/// <summary>
/// Returns contours in \p mesh space that are offset from \p surfaceLine on \p offsetAtPoint amount in all directions
/// </summary>
/// <param name="mesh">mesh to perform offset on</param>
/// <param name="surfaceLine">surface line to perofrm offset from</param>
/// <param name="offsetAtPoint">function that can return different amount of offset in different point (argument is index of point in \p surfaceLine), note that absolute value is used</param>
/// <returns>resulting offset contours or error if something goes wrong</returns>
/// Generated from function `MR::offsetSurfaceLine`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `surfaceLine` can not be null. It is a single object.
/// Parameter `offsetAtPoint` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_std_vector_MR_Vector3f_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_std_vector_MR_Vector3f_std_string *MR_offsetSurfaceLine_std_function_float_func_from_int32_t(const MR_Mesh *mesh, const MR_std_vector_MR_MeshTriPoint *surfaceLine, const MR_std_function_float_from_int32_t *offsetAtPoint);

#ifdef __cplusplus
} // extern "C"
#endif
