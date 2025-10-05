// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FunctionVolume MR_FunctionVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_expected_MR_Mesh_std_string MR_expected_MR_Mesh_std_string; // Defined in `#include <MRCMisc/expected_MR_Mesh_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_vector_std_string MR_std_vector_std_string; // Defined in `#include <MRCMisc/std_vector_std_string.h>`.


/// Supported types of TPMS (Triply Periodic Minimal Surfaces)
typedef int32_t MR_TPMS_Type;
enum // MR_TPMS_Type
{
    MR_TPMS_Type_SchwartzP = 0,
    MR_TPMS_Type_DoubleSchwartzP = 1,
    MR_TPMS_Type_Gyroid = 2,
    MR_TPMS_Type_DoubleGyroid = 3,
    MR_TPMS_Type_Count = 4,
};

/// Generated from function `MR::TPMS::getTypeNames`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_string *MR_TPMS_getTypeNames(void);

/// Construct TPMS using implicit function (https://www.researchgate.net/publication/350658078_Computational_method_and_program_for_generating_a_porous_scaffold_based_on_implicit_surfaces)
/// @param type Type of the surface
/// @param size Size of the cube with the surface
/// @param frequency Frequency of oscillations (determines size of the "cells" in the "grid")
/// @param resolution Ratio `n / T`, between the number of voxels and period of oscillations
/// @return Distance-volume starting at (0, 0, 0) and having specified @p size
/// Generated from function `MR::TPMS::buildVolume`.
/// Parameter `size` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FunctionVolume_Destroy()` to free it when you're done using it.
MRC_API MR_FunctionVolume *MR_TPMS_buildVolume(MR_TPMS_Type type, const MR_Vector3f *size, float frequency, float resolution);

/// Constructs TPMS level-set and then convert it to mesh
/// Generated from function `MR::TPMS::build`.
/// Parameter `size` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_TPMS_build(MR_TPMS_Type type, const MR_Vector3f *size, float frequency, float resolution, float iso, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Constructs TPMS-filling for the given @p mesh
/// Generated from function `MR::TPMS::fill`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_TPMS_fill(MR_TPMS_Type type, const MR_Mesh *mesh, float frequency, float resolution, float iso, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Returns number of voxels that would be used to perform \ref fillWithTPMS
/// Generated from function `MR::TPMS::getNumberOfVoxels`.
/// Parameter `mesh` can not be null. It is a single object.
MRC_API MR_uint64_t MR_TPMS_getNumberOfVoxels_MR_Mesh(const MR_Mesh *mesh, float frequency, float resolution);

/// Returns number of voxels that would be used to perform \ref buildTPMS or \ref buildTPMSVolume
/// Generated from function `MR::TPMS::getNumberOfVoxels`.
/// Parameter `size` can not be null. It is a single object.
MRC_API MR_uint64_t MR_TPMS_getNumberOfVoxels_MR_Vector3f(const MR_Vector3f *size, float frequency, float resolution);

/// Returns approximated ISO value corresponding to the given density
/// @param targetDensity value in [0; 1]
/// @return Value in [-1; 1]
/// Generated from function `MR::TPMS::estimateIso`.
MRC_API float MR_TPMS_estimateIso(MR_TPMS_Type type, float targetDensity);

/// Returns approximate density corresponding to the given ISO value
/// @param targetIso value in [-1; 1]
/// @return Value in [0; 1]
/// Generated from function `MR::TPMS::estimateDensity`.
MRC_API float MR_TPMS_estimateDensity(MR_TPMS_Type type, float targetIso);

#ifdef __cplusplus
} // extern "C"
#endif
