// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Polyline2 MR_Polyline2; // Defined in `#include <MRCMesh/MRPolyline.h>`.
typedef struct MR_Polyline3 MR_Polyline3; // Defined in `#include <MRCMesh/MRPolyline.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_function_void_from_MR_EdgeId_MR_EdgeId MR_std_function_void_from_MR_EdgeId_MR_EdgeId; // Defined in `#include <MRCMisc/std_function_void_from_MR_EdgeId_MR_EdgeId.h>`.
typedef struct MR_std_function_void_from_MR_VertId MR_std_function_void_from_MR_VertId; // Defined in `#include <MRCMisc/std_function_void_from_MR_VertId.h>`.


/// Generated from class `MR::PolylineSubdivideSettings`.
typedef struct MR_PolylineSubdivideSettings MR_PolylineSubdivideSettings;

/// Subdivision is stopped when all edges are not longer than this value
/// Returns a pointer to a member variable of class `MR::PolylineSubdivideSettings` named `maxEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_PolylineSubdivideSettings_Get_maxEdgeLen(const MR_PolylineSubdivideSettings *_this);

/// Subdivision is stopped when all edges are not longer than this value
/// Modifies a member variable of class `MR::PolylineSubdivideSettings` named `maxEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineSubdivideSettings_Set_maxEdgeLen(MR_PolylineSubdivideSettings *_this, float value);

/// Subdivision is stopped when all edges are not longer than this value
/// Returns a mutable pointer to a member variable of class `MR::PolylineSubdivideSettings` named `maxEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_PolylineSubdivideSettings_GetMutable_maxEdgeLen(MR_PolylineSubdivideSettings *_this);

/// Maximum number of edge splits allowed
/// Returns a pointer to a member variable of class `MR::PolylineSubdivideSettings` named `maxEdgeSplits`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_PolylineSubdivideSettings_Get_maxEdgeSplits(const MR_PolylineSubdivideSettings *_this);

/// Maximum number of edge splits allowed
/// Modifies a member variable of class `MR::PolylineSubdivideSettings` named `maxEdgeSplits`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineSubdivideSettings_Set_maxEdgeSplits(MR_PolylineSubdivideSettings *_this, int32_t value);

/// Maximum number of edge splits allowed
/// Returns a mutable pointer to a member variable of class `MR::PolylineSubdivideSettings` named `maxEdgeSplits`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_PolylineSubdivideSettings_GetMutable_maxEdgeSplits(MR_PolylineSubdivideSettings *_this);

/// Region on polyline to be subdivided: both edge vertices must be there to allow spitting,
/// it is updated during the operation
/// Returns a pointer to a member variable of class `MR::PolylineSubdivideSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *const *MR_PolylineSubdivideSettings_Get_region(const MR_PolylineSubdivideSettings *_this);

/// Region on polyline to be subdivided: both edge vertices must be there to allow spitting,
/// it is updated during the operation
/// Modifies a member variable of class `MR::PolylineSubdivideSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineSubdivideSettings_Set_region(MR_PolylineSubdivideSettings *_this, MR_VertBitSet *value);

/// Region on polyline to be subdivided: both edge vertices must be there to allow spitting,
/// it is updated during the operation
/// Returns a mutable pointer to a member variable of class `MR::PolylineSubdivideSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet **MR_PolylineSubdivideSettings_GetMutable_region(MR_PolylineSubdivideSettings *_this);

/// New vertices appeared during subdivision will be added here
/// Returns a pointer to a member variable of class `MR::PolylineSubdivideSettings` named `newVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *const *MR_PolylineSubdivideSettings_Get_newVerts(const MR_PolylineSubdivideSettings *_this);

/// New vertices appeared during subdivision will be added here
/// Modifies a member variable of class `MR::PolylineSubdivideSettings` named `newVerts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineSubdivideSettings_Set_newVerts(MR_PolylineSubdivideSettings *_this, MR_VertBitSet *value);

/// New vertices appeared during subdivision will be added here
/// Returns a mutable pointer to a member variable of class `MR::PolylineSubdivideSettings` named `newVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet **MR_PolylineSubdivideSettings_GetMutable_newVerts(MR_PolylineSubdivideSettings *_this);

/// This option works best for natural lines, where all segments have similar size,
/// and no sharp angles in between
/// Returns a pointer to a member variable of class `MR::PolylineSubdivideSettings` named `useCurvature`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_PolylineSubdivideSettings_Get_useCurvature(const MR_PolylineSubdivideSettings *_this);

/// This option works best for natural lines, where all segments have similar size,
/// and no sharp angles in between
/// Modifies a member variable of class `MR::PolylineSubdivideSettings` named `useCurvature`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineSubdivideSettings_Set_useCurvature(MR_PolylineSubdivideSettings *_this, bool value);

/// This option works best for natural lines, where all segments have similar size,
/// and no sharp angles in between
/// Returns a mutable pointer to a member variable of class `MR::PolylineSubdivideSettings` named `useCurvature`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_PolylineSubdivideSettings_GetMutable_useCurvature(MR_PolylineSubdivideSettings *_this);

/// this function is called each time a new vertex has been created
/// Returns a pointer to a member variable of class `MR::PolylineSubdivideSettings` named `onVertCreated`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_void_from_MR_VertId *MR_PolylineSubdivideSettings_Get_onVertCreated(const MR_PolylineSubdivideSettings *_this);

/// this function is called each time a new vertex has been created
/// Modifies a member variable of class `MR::PolylineSubdivideSettings` named `onVertCreated`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineSubdivideSettings_Set_onVertCreated(MR_PolylineSubdivideSettings *_this, MR_PassBy value_pass_by, MR_std_function_void_from_MR_VertId *value);

/// this function is called each time a new vertex has been created
/// Returns a mutable pointer to a member variable of class `MR::PolylineSubdivideSettings` named `onVertCreated`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_void_from_MR_VertId *MR_PolylineSubdivideSettings_GetMutable_onVertCreated(MR_PolylineSubdivideSettings *_this);

/// this function is called each time edge (e) is split into (e1->e)
/// Returns a pointer to a member variable of class `MR::PolylineSubdivideSettings` named `onEdgeSplit`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_void_from_MR_EdgeId_MR_EdgeId *MR_PolylineSubdivideSettings_Get_onEdgeSplit(const MR_PolylineSubdivideSettings *_this);

/// this function is called each time edge (e) is split into (e1->e)
/// Modifies a member variable of class `MR::PolylineSubdivideSettings` named `onEdgeSplit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineSubdivideSettings_Set_onEdgeSplit(MR_PolylineSubdivideSettings *_this, MR_PassBy value_pass_by, MR_std_function_void_from_MR_EdgeId_MR_EdgeId *value);

/// this function is called each time edge (e) is split into (e1->e)
/// Returns a mutable pointer to a member variable of class `MR::PolylineSubdivideSettings` named `onEdgeSplit`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_void_from_MR_EdgeId_MR_EdgeId *MR_PolylineSubdivideSettings_GetMutable_onEdgeSplit(MR_PolylineSubdivideSettings *_this);

/// callback to report algorithm progress and cancel it by user request
/// Returns a pointer to a member variable of class `MR::PolylineSubdivideSettings` named `progressCallback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_PolylineSubdivideSettings_Get_progressCallback(const MR_PolylineSubdivideSettings *_this);

/// callback to report algorithm progress and cancel it by user request
/// Modifies a member variable of class `MR::PolylineSubdivideSettings` named `progressCallback`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineSubdivideSettings_Set_progressCallback(MR_PolylineSubdivideSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// callback to report algorithm progress and cancel it by user request
/// Returns a mutable pointer to a member variable of class `MR::PolylineSubdivideSettings` named `progressCallback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_PolylineSubdivideSettings_GetMutable_progressCallback(MR_PolylineSubdivideSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineSubdivideSettings_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineSubdivideSettings *MR_PolylineSubdivideSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PolylineSubdivideSettings_DestroyArray()`.
/// Use `MR_PolylineSubdivideSettings_OffsetMutablePtr()` and `MR_PolylineSubdivideSettings_OffsetPtr()` to access the array elements.
MRC_API MR_PolylineSubdivideSettings *MR_PolylineSubdivideSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::PolylineSubdivideSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineSubdivideSettings_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineSubdivideSettings *MR_PolylineSubdivideSettings_ConstructFrom(float maxEdgeLen, int32_t maxEdgeSplits, MR_VertBitSet *region, MR_VertBitSet *newVerts, bool useCurvature, MR_PassBy onVertCreated_pass_by, MR_std_function_void_from_MR_VertId *onVertCreated, MR_PassBy onEdgeSplit_pass_by, MR_std_function_void_from_MR_EdgeId_MR_EdgeId *onEdgeSplit, MR_PassBy progressCallback_pass_by, MR_std_function_bool_from_float *progressCallback);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PolylineSubdivideSettings *MR_PolylineSubdivideSettings_OffsetPtr(const MR_PolylineSubdivideSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PolylineSubdivideSettings *MR_PolylineSubdivideSettings_OffsetMutablePtr(MR_PolylineSubdivideSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PolylineSubdivideSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineSubdivideSettings_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineSubdivideSettings *MR_PolylineSubdivideSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PolylineSubdivideSettings *_other);

/// Destroys a heap-allocated instance of `MR_PolylineSubdivideSettings`. Does nothing if the pointer is null.
MRC_API void MR_PolylineSubdivideSettings_Destroy(const MR_PolylineSubdivideSettings *_this);

/// Destroys a heap-allocated array of `MR_PolylineSubdivideSettings`. Does nothing if the pointer is null.
MRC_API void MR_PolylineSubdivideSettings_DestroyArray(const MR_PolylineSubdivideSettings *_this);

/// Generated from a method of class `MR::PolylineSubdivideSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PolylineSubdivideSettings *MR_PolylineSubdivideSettings_AssignFromAnother(MR_PolylineSubdivideSettings *_this, MR_PassBy _other_pass_by, MR_PolylineSubdivideSettings *_other);

/// Split edges in polyline according to the settings;\n
/// \return The total number of edge splits performed
/// Generated from function `MR::subdividePolyline`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
MRC_API int32_t MR_subdividePolyline_MR_Polyline2(MR_Polyline2 *polyline, const MR_PolylineSubdivideSettings *settings);

/// Generated from function `MR::subdividePolyline`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
MRC_API int32_t MR_subdividePolyline_MR_Polyline3(MR_Polyline3 *polyline, const MR_PolylineSubdivideSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
