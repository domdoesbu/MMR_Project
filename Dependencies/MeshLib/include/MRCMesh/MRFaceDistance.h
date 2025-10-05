// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_function_float_from_MR_EdgeId MR_std_function_float_from_MR_EdgeId; // Defined in `#include <MRCMisc/std_function_float_from_MR_EdgeId.h>`.
typedef struct MR_std_optional_MR_FaceScalars MR_std_optional_MR_FaceScalars; // Defined in `#include <MRCMisc/std_optional_MR_FaceScalars.h>`.


/// Generated from class `MR::FaceDistancesSettings`.
typedef struct MR_FaceDistancesSettings MR_FaceDistancesSettings;

typedef int32_t MR_FaceDistancesSettings_OutputFaceValues;
enum // MR_FaceDistancesSettings_OutputFaceValues
{
    ///< each face will get its distance from start in the result
    MR_FaceDistancesSettings_OutputFaceValues_Distances = 0,
    ///< each face will get its sequential order (1,2,...) from start in the result
    MR_FaceDistancesSettings_OutputFaceValues_SeqOrder = 1,
};

/// Returns a pointer to a member variable of class `MR::FaceDistancesSettings` named `out`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceDistancesSettings_OutputFaceValues *MR_FaceDistancesSettings_Get_out(const MR_FaceDistancesSettings *_this);

/// Modifies a member variable of class `MR::FaceDistancesSettings` named `out`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FaceDistancesSettings_Set_out(MR_FaceDistancesSettings *_this, MR_FaceDistancesSettings_OutputFaceValues value);

/// Returns a mutable pointer to a member variable of class `MR::FaceDistancesSettings` named `out`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceDistancesSettings_OutputFaceValues *MR_FaceDistancesSettings_GetMutable_out(MR_FaceDistancesSettings *_this);

/// optional output of the maximal distance to the most distant face
/// Returns a pointer to a member variable of class `MR::FaceDistancesSettings` named `maxDist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *const *MR_FaceDistancesSettings_Get_maxDist(const MR_FaceDistancesSettings *_this);

/// optional output of the maximal distance to the most distant face
/// Modifies a member variable of class `MR::FaceDistancesSettings` named `maxDist`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FaceDistancesSettings_Set_maxDist(MR_FaceDistancesSettings *_this, float *value);

/// optional output of the maximal distance to the most distant face
/// Returns a mutable pointer to a member variable of class `MR::FaceDistancesSettings` named `maxDist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float **MR_FaceDistancesSettings_GetMutable_maxDist(MR_FaceDistancesSettings *_this);

/// for progress reporting and cancellation
/// Returns a pointer to a member variable of class `MR::FaceDistancesSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_FaceDistancesSettings_Get_progress(const MR_FaceDistancesSettings *_this);

/// for progress reporting and cancellation
/// Modifies a member variable of class `MR::FaceDistancesSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FaceDistancesSettings_Set_progress(MR_FaceDistancesSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// for progress reporting and cancellation
/// Returns a mutable pointer to a member variable of class `MR::FaceDistancesSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_FaceDistancesSettings_GetMutable_progress(MR_FaceDistancesSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceDistancesSettings_Destroy()` to free it when you're done using it.
MRC_API MR_FaceDistancesSettings *MR_FaceDistancesSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FaceDistancesSettings_DestroyArray()`.
/// Use `MR_FaceDistancesSettings_OffsetMutablePtr()` and `MR_FaceDistancesSettings_OffsetPtr()` to access the array elements.
MRC_API MR_FaceDistancesSettings *MR_FaceDistancesSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::FaceDistancesSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceDistancesSettings_Destroy()` to free it when you're done using it.
MRC_API MR_FaceDistancesSettings *MR_FaceDistancesSettings_ConstructFrom(MR_FaceDistancesSettings_OutputFaceValues out, float *maxDist, MR_PassBy progress_pass_by, MR_std_function_bool_from_float *progress);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FaceDistancesSettings *MR_FaceDistancesSettings_OffsetPtr(const MR_FaceDistancesSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FaceDistancesSettings *MR_FaceDistancesSettings_OffsetMutablePtr(MR_FaceDistancesSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FaceDistancesSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceDistancesSettings_Destroy()` to free it when you're done using it.
MRC_API MR_FaceDistancesSettings *MR_FaceDistancesSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_FaceDistancesSettings *_other);

/// Destroys a heap-allocated instance of `MR_FaceDistancesSettings`. Does nothing if the pointer is null.
MRC_API void MR_FaceDistancesSettings_Destroy(const MR_FaceDistancesSettings *_this);

/// Destroys a heap-allocated array of `MR_FaceDistancesSettings`. Does nothing if the pointer is null.
MRC_API void MR_FaceDistancesSettings_DestroyArray(const MR_FaceDistancesSettings *_this);

/// Generated from a method of class `MR::FaceDistancesSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceDistancesSettings *MR_FaceDistancesSettings_AssignFromAnother(MR_FaceDistancesSettings *_this, MR_PassBy _other_pass_by, MR_FaceDistancesSettings *_other);

/// computes and returns the distance of traveling from one of start faces to all other reachable faces on the mesh;
/// all unreachable faces will get FLT_MAX value;
/// \param starts all start faces will get value 0 in the result;
/// \param metric metric(e) says the distance of traveling from left(e) to right(e)
/// Generated from function `MR::calcFaceDistances`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `metric` can not be null. It is a single object.
/// Parameter `starts` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_FaceScalars_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_FaceScalars *MR_calcFaceDistances(const MR_MeshTopology *topology, const MR_std_function_float_from_MR_EdgeId *metric, const MR_FaceBitSet *starts, const MR_FaceDistancesSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
