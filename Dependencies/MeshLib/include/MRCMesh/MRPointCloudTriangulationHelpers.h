// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FewSmallest_MR_PointsProjectionResult MR_FewSmallest_MR_PointsProjectionResult; // Defined in `#include <MRCMesh/MRFewSmallest.h>`.
typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_optional_MR_AllLocalTriangulations MR_std_optional_MR_AllLocalTriangulations; // Defined in `#include <MRCMisc/std_optional_MR_AllLocalTriangulations.h>`.
typedef struct MR_std_optional_MR_VertBitSet MR_std_optional_MR_VertBitSet; // Defined in `#include <MRCMisc/std_optional_MR_VertBitSet.h>`.
typedef struct MR_std_optional_std_vector_MR_SomeLocalTriangulations MR_std_optional_std_vector_MR_SomeLocalTriangulations; // Defined in `#include <MRCMisc/std_optional_std_vector_MR_SomeLocalTriangulations.h>`.
typedef struct MR_std_vector_MR_VertId MR_std_vector_MR_VertId; // Defined in `#include <MRCMisc/std_vector_MR_VertId.h>`.
typedef struct MR_std_vector_std_pair_double_int32_t MR_std_vector_std_pair_double_int32_t; // Defined in `#include <MRCMisc/std_vector_std_pair_double_int32_t.h>`.


/// Generated from class `MR::TriangulationHelpers::FanOptimizerQueueElement`.
typedef struct MR_TriangulationHelpers_FanOptimizerQueueElement MR_TriangulationHelpers_FanOptimizerQueueElement;

/**
* \brief Data with caches for optimizing fan triangulation
*
*/
/// Generated from class `MR::TriangulationHelpers::TriangulatedFanData`.
typedef struct MR_TriangulationHelpers_TriangulatedFanData MR_TriangulationHelpers_TriangulatedFanData;

/// Generated from class `MR::TriangulationHelpers::Settings`.
typedef struct MR_TriangulationHelpers_Settings MR_TriangulationHelpers_Settings;

/**
* \brief Finds max radius of neighbors search, for possible better local triangulation
* \param borderV first boundary vertex in \param fan (next VertId in fan is also boundary but first is enough)
*
*/
/// Generated from function `MR::TriangulationHelpers::updateNeighborsRadius`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `fan` can not be null. It is a single object.
MRC_API float MR_TriangulationHelpers_updateNeighborsRadius(const MR_VertCoords *points, MR_VertId v, MR_VertId boundaryV, const MR_std_vector_MR_VertId *fan, float baseRadius);

/**
* \brief Finds all neighbors of v in given radius (v excluded)
*
*/
/// Generated from function `MR::TriangulationHelpers::findNeighborsInBall`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `neighbors` can not be null. It is a single object.
MRC_API void MR_TriangulationHelpers_findNeighborsInBall(const MR_PointCloud *pointCloud, MR_VertId v, float radius, MR_std_vector_MR_VertId *neighbors);

/**
* \brief Finds at most given number of neighbors of v (v excluded)
* \param tmp temporary storage to avoid its allocation
* \param upDistLimitSq upper limit on the distance in question, points with larger distance than it will not be returned
* \return maxDistSq to the furthest returned neighbor (or 0 if no neighbours are returned)
*
*/
/// Generated from function `MR::TriangulationHelpers::findNumNeighbors`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `neighbors` can not be null. It is a single object.
/// Parameter `tmp` can not be null. It is a single object.
/// Parameter `upDistLimitSq` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
MRC_API float MR_TriangulationHelpers_findNumNeighbors(const MR_PointCloud *pointCloud, MR_VertId v, int32_t numNeis, MR_std_vector_MR_VertId *neighbors, MR_FewSmallest_MR_PointsProjectionResult *tmp, const float *upDistLimitSq);

/**
* \brief Filter neighbors with crossing normals
*
*/
/// Generated from function `MR::TriangulationHelpers::filterNeighbors`.
/// Parameter `normals` can not be null. It is a single object.
/// Parameter `neighbors` can not be null. It is a single object.
MRC_API void MR_TriangulationHelpers_filterNeighbors(const MR_VertCoords *normals, MR_VertId v, MR_std_vector_MR_VertId *neighbors);

// profit of flipping this edge
/// Returns a pointer to a member variable of class `MR::TriangulationHelpers::FanOptimizerQueueElement` named `weight`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_TriangulationHelpers_FanOptimizerQueueElement_Get_weight(const MR_TriangulationHelpers_FanOptimizerQueueElement *_this);

// profit of flipping this edge
/// Modifies a member variable of class `MR::TriangulationHelpers::FanOptimizerQueueElement` named `weight`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationHelpers_FanOptimizerQueueElement_Set_weight(MR_TriangulationHelpers_FanOptimizerQueueElement *_this, float value);

// profit of flipping this edge
/// Returns a mutable pointer to a member variable of class `MR::TriangulationHelpers::FanOptimizerQueueElement` named `weight`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_TriangulationHelpers_FanOptimizerQueueElement_GetMutable_weight(MR_TriangulationHelpers_FanOptimizerQueueElement *_this);

// index
/// Returns a pointer to a member variable of class `MR::TriangulationHelpers::FanOptimizerQueueElement` named `id`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_TriangulationHelpers_FanOptimizerQueueElement_Get_id(const MR_TriangulationHelpers_FanOptimizerQueueElement *_this);

// index
/// Modifies a member variable of class `MR::TriangulationHelpers::FanOptimizerQueueElement` named `id`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationHelpers_FanOptimizerQueueElement_Set_id(MR_TriangulationHelpers_FanOptimizerQueueElement *_this, int32_t value);

// index
/// Returns a mutable pointer to a member variable of class `MR::TriangulationHelpers::FanOptimizerQueueElement` named `id`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_TriangulationHelpers_FanOptimizerQueueElement_GetMutable_id(MR_TriangulationHelpers_FanOptimizerQueueElement *_this);

// id of prev neighbor
/// Returns a pointer to a member variable of class `MR::TriangulationHelpers::FanOptimizerQueueElement` named `prevId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_TriangulationHelpers_FanOptimizerQueueElement_Get_prevId(const MR_TriangulationHelpers_FanOptimizerQueueElement *_this);

// id of prev neighbor
/// Modifies a member variable of class `MR::TriangulationHelpers::FanOptimizerQueueElement` named `prevId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationHelpers_FanOptimizerQueueElement_Set_prevId(MR_TriangulationHelpers_FanOptimizerQueueElement *_this, int32_t value);

// id of prev neighbor
/// Returns a mutable pointer to a member variable of class `MR::TriangulationHelpers::FanOptimizerQueueElement` named `prevId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_TriangulationHelpers_FanOptimizerQueueElement_GetMutable_prevId(MR_TriangulationHelpers_FanOptimizerQueueElement *_this);

// id of next neighbor
/// Returns a pointer to a member variable of class `MR::TriangulationHelpers::FanOptimizerQueueElement` named `nextId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_TriangulationHelpers_FanOptimizerQueueElement_Get_nextId(const MR_TriangulationHelpers_FanOptimizerQueueElement *_this);

// id of next neighbor
/// Modifies a member variable of class `MR::TriangulationHelpers::FanOptimizerQueueElement` named `nextId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationHelpers_FanOptimizerQueueElement_Set_nextId(MR_TriangulationHelpers_FanOptimizerQueueElement *_this, int32_t value);

// id of next neighbor
/// Returns a mutable pointer to a member variable of class `MR::TriangulationHelpers::FanOptimizerQueueElement` named `nextId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_TriangulationHelpers_FanOptimizerQueueElement_GetMutable_nextId(MR_TriangulationHelpers_FanOptimizerQueueElement *_this);

// if this flag is true, edge cannot be flipped
/// Returns a pointer to a member variable of class `MR::TriangulationHelpers::FanOptimizerQueueElement` named `stable`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_TriangulationHelpers_FanOptimizerQueueElement_Get_stable(const MR_TriangulationHelpers_FanOptimizerQueueElement *_this);

// if this flag is true, edge cannot be flipped
/// Modifies a member variable of class `MR::TriangulationHelpers::FanOptimizerQueueElement` named `stable`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationHelpers_FanOptimizerQueueElement_Set_stable(MR_TriangulationHelpers_FanOptimizerQueueElement *_this, bool value);

// if this flag is true, edge cannot be flipped
/// Returns a mutable pointer to a member variable of class `MR::TriangulationHelpers::FanOptimizerQueueElement` named `stable`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_TriangulationHelpers_FanOptimizerQueueElement_GetMutable_stable(MR_TriangulationHelpers_FanOptimizerQueueElement *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriangulationHelpers_FanOptimizerQueueElement_Destroy()` to free it when you're done using it.
MRC_API MR_TriangulationHelpers_FanOptimizerQueueElement *MR_TriangulationHelpers_FanOptimizerQueueElement_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_TriangulationHelpers_FanOptimizerQueueElement_DestroyArray()`.
/// Use `MR_TriangulationHelpers_FanOptimizerQueueElement_OffsetMutablePtr()` and `MR_TriangulationHelpers_FanOptimizerQueueElement_OffsetPtr()` to access the array elements.
MRC_API MR_TriangulationHelpers_FanOptimizerQueueElement *MR_TriangulationHelpers_FanOptimizerQueueElement_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::TriangulationHelpers::FanOptimizerQueueElement` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriangulationHelpers_FanOptimizerQueueElement_Destroy()` to free it when you're done using it.
MRC_API MR_TriangulationHelpers_FanOptimizerQueueElement *MR_TriangulationHelpers_FanOptimizerQueueElement_ConstructFrom(float weight, int32_t id, int32_t prevId, int32_t nextId, bool stable);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_TriangulationHelpers_FanOptimizerQueueElement *MR_TriangulationHelpers_FanOptimizerQueueElement_OffsetPtr(const MR_TriangulationHelpers_FanOptimizerQueueElement *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_TriangulationHelpers_FanOptimizerQueueElement *MR_TriangulationHelpers_FanOptimizerQueueElement_OffsetMutablePtr(MR_TriangulationHelpers_FanOptimizerQueueElement *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::TriangulationHelpers::FanOptimizerQueueElement`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriangulationHelpers_FanOptimizerQueueElement_Destroy()` to free it when you're done using it.
MRC_API MR_TriangulationHelpers_FanOptimizerQueueElement *MR_TriangulationHelpers_FanOptimizerQueueElement_ConstructFromAnother(const MR_TriangulationHelpers_FanOptimizerQueueElement *_other);

/// Destroys a heap-allocated instance of `MR_TriangulationHelpers_FanOptimizerQueueElement`. Does nothing if the pointer is null.
MRC_API void MR_TriangulationHelpers_FanOptimizerQueueElement_Destroy(const MR_TriangulationHelpers_FanOptimizerQueueElement *_this);

/// Destroys a heap-allocated array of `MR_TriangulationHelpers_FanOptimizerQueueElement`. Does nothing if the pointer is null.
MRC_API void MR_TriangulationHelpers_FanOptimizerQueueElement_DestroyArray(const MR_TriangulationHelpers_FanOptimizerQueueElement *_this);

/// Generated from a method of class `MR::TriangulationHelpers::FanOptimizerQueueElement` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TriangulationHelpers_FanOptimizerQueueElement *MR_TriangulationHelpers_FanOptimizerQueueElement_AssignFromAnother(MR_TriangulationHelpers_FanOptimizerQueueElement *_this, const MR_TriangulationHelpers_FanOptimizerQueueElement *_other);

/// Generated from a method of class `MR::TriangulationHelpers::FanOptimizerQueueElement` named `operator<`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API bool MR_less_MR_TriangulationHelpers_FanOptimizerQueueElement(const MR_TriangulationHelpers_FanOptimizerQueueElement *_this, const MR_TriangulationHelpers_FanOptimizerQueueElement *other);

/// Generated from a method of class `MR::TriangulationHelpers::FanOptimizerQueueElement` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API bool MR_equal_MR_TriangulationHelpers_FanOptimizerQueueElement(const MR_TriangulationHelpers_FanOptimizerQueueElement *_this, const MR_TriangulationHelpers_FanOptimizerQueueElement *other);

/// Generated from a method of class `MR::TriangulationHelpers::FanOptimizerQueueElement` named `isOutdated`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `neighbors` can not be null. It is a single object.
MRC_API bool MR_TriangulationHelpers_FanOptimizerQueueElement_isOutdated(const MR_TriangulationHelpers_FanOptimizerQueueElement *_this, const MR_std_vector_MR_VertId *neighbors);

/// clockwise points around center point in (optimized) triangle fan,
/// each pair of points (as well as back()-front() pair) together with the center form a fan triangle
/// Returns a pointer to a member variable of class `MR::TriangulationHelpers::TriangulatedFanData` named `neighbors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_VertId *MR_TriangulationHelpers_TriangulatedFanData_Get_neighbors(const MR_TriangulationHelpers_TriangulatedFanData *_this);

/// clockwise points around center point in (optimized) triangle fan,
/// each pair of points (as well as back()-front() pair) together with the center form a fan triangle
/// Modifies a member variable of class `MR::TriangulationHelpers::TriangulatedFanData` named `neighbors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationHelpers_TriangulatedFanData_Set_neighbors(MR_TriangulationHelpers_TriangulatedFanData *_this, MR_PassBy value_pass_by, MR_std_vector_MR_VertId *value);

/// clockwise points around center point in (optimized) triangle fan,
/// each pair of points (as well as back()-front() pair) together with the center form a fan triangle
/// Returns a mutable pointer to a member variable of class `MR::TriangulationHelpers::TriangulatedFanData` named `neighbors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_VertId *MR_TriangulationHelpers_TriangulatedFanData_GetMutable_neighbors(MR_TriangulationHelpers_TriangulatedFanData *_this);

/// temporary reusable storage to avoid allocations for each point
/// Returns a pointer to a member variable of class `MR::TriangulationHelpers::TriangulatedFanData` named `cacheAngleOrder`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_std_pair_double_int32_t *MR_TriangulationHelpers_TriangulatedFanData_Get_cacheAngleOrder(const MR_TriangulationHelpers_TriangulatedFanData *_this);

/// temporary reusable storage to avoid allocations for each point
/// Modifies a member variable of class `MR::TriangulationHelpers::TriangulatedFanData` named `cacheAngleOrder`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationHelpers_TriangulatedFanData_Set_cacheAngleOrder(MR_TriangulationHelpers_TriangulatedFanData *_this, MR_PassBy value_pass_by, MR_std_vector_std_pair_double_int32_t *value);

/// temporary reusable storage to avoid allocations for each point
/// Returns a mutable pointer to a member variable of class `MR::TriangulationHelpers::TriangulatedFanData` named `cacheAngleOrder`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_std_pair_double_int32_t *MR_TriangulationHelpers_TriangulatedFanData_GetMutable_cacheAngleOrder(MR_TriangulationHelpers_TriangulatedFanData *_this);

/// first border edge (invalid if the center point is not on the boundary)
/// triangle associated with this point is absent
/// Returns a pointer to a member variable of class `MR::TriangulationHelpers::TriangulatedFanData` named `border`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_TriangulationHelpers_TriangulatedFanData_Get_border(const MR_TriangulationHelpers_TriangulatedFanData *_this);

/// first border edge (invalid if the center point is not on the boundary)
/// triangle associated with this point is absent
/// Modifies a member variable of class `MR::TriangulationHelpers::TriangulatedFanData` named `border`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationHelpers_TriangulatedFanData_Set_border(MR_TriangulationHelpers_TriangulatedFanData *_this, MR_VertId value);

/// first border edge (invalid if the center point is not on the boundary)
/// triangle associated with this point is absent
/// Returns a mutable pointer to a member variable of class `MR::TriangulationHelpers::TriangulatedFanData` named `border`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_TriangulationHelpers_TriangulatedFanData_GetMutable_border(MR_TriangulationHelpers_TriangulatedFanData *_this);

/// the storage to collect n-nearest neighbours, here to avoid allocations for each point
/// Returns a pointer to a member variable of class `MR::TriangulationHelpers::TriangulatedFanData` named `nearesetPoints`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FewSmallest_MR_PointsProjectionResult *MR_TriangulationHelpers_TriangulatedFanData_Get_nearesetPoints(const MR_TriangulationHelpers_TriangulatedFanData *_this);

/// the storage to collect n-nearest neighbours, here to avoid allocations for each point
/// Modifies a member variable of class `MR::TriangulationHelpers::TriangulatedFanData` named `nearesetPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationHelpers_TriangulatedFanData_Set_nearesetPoints(MR_TriangulationHelpers_TriangulatedFanData *_this, MR_PassBy value_pass_by, MR_FewSmallest_MR_PointsProjectionResult *value);

/// the storage to collect n-nearest neighbours, here to avoid allocations for each point
/// Returns a mutable pointer to a member variable of class `MR::TriangulationHelpers::TriangulatedFanData` named `nearesetPoints`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FewSmallest_MR_PointsProjectionResult *MR_TriangulationHelpers_TriangulatedFanData_GetMutable_nearesetPoints(MR_TriangulationHelpers_TriangulatedFanData *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriangulationHelpers_TriangulatedFanData_Destroy()` to free it when you're done using it.
MRC_API MR_TriangulationHelpers_TriangulatedFanData *MR_TriangulationHelpers_TriangulatedFanData_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_TriangulationHelpers_TriangulatedFanData_DestroyArray()`.
/// Use `MR_TriangulationHelpers_TriangulatedFanData_OffsetMutablePtr()` and `MR_TriangulationHelpers_TriangulatedFanData_OffsetPtr()` to access the array elements.
MRC_API MR_TriangulationHelpers_TriangulatedFanData *MR_TriangulationHelpers_TriangulatedFanData_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_TriangulationHelpers_TriangulatedFanData *MR_TriangulationHelpers_TriangulatedFanData_OffsetPtr(const MR_TriangulationHelpers_TriangulatedFanData *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_TriangulationHelpers_TriangulatedFanData *MR_TriangulationHelpers_TriangulatedFanData_OffsetMutablePtr(MR_TriangulationHelpers_TriangulatedFanData *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::TriangulationHelpers::TriangulatedFanData`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriangulationHelpers_TriangulatedFanData_Destroy()` to free it when you're done using it.
MRC_API MR_TriangulationHelpers_TriangulatedFanData *MR_TriangulationHelpers_TriangulatedFanData_ConstructFromAnother(MR_PassBy _other_pass_by, MR_TriangulationHelpers_TriangulatedFanData *_other);

/// Destroys a heap-allocated instance of `MR_TriangulationHelpers_TriangulatedFanData`. Does nothing if the pointer is null.
MRC_API void MR_TriangulationHelpers_TriangulatedFanData_Destroy(const MR_TriangulationHelpers_TriangulatedFanData *_this);

/// Destroys a heap-allocated array of `MR_TriangulationHelpers_TriangulatedFanData`. Does nothing if the pointer is null.
MRC_API void MR_TriangulationHelpers_TriangulatedFanData_DestroyArray(const MR_TriangulationHelpers_TriangulatedFanData *_this);

/// Generated from a method of class `MR::TriangulationHelpers::TriangulatedFanData` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TriangulationHelpers_TriangulatedFanData *MR_TriangulationHelpers_TriangulatedFanData_AssignFromAnother(MR_TriangulationHelpers_TriangulatedFanData *_this, MR_PassBy _other_pass_by, MR_TriangulationHelpers_TriangulatedFanData *_other);

/// initial radius of search for neighbours, it can be increased automatically;
/// if radius is positive then numNeis must be zero
/// Returns a pointer to a member variable of class `MR::TriangulationHelpers::Settings` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_TriangulationHelpers_Settings_Get_radius(const MR_TriangulationHelpers_Settings *_this);

/// initial radius of search for neighbours, it can be increased automatically;
/// if radius is positive then numNeis must be zero
/// Modifies a member variable of class `MR::TriangulationHelpers::Settings` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationHelpers_Settings_Set_radius(MR_TriangulationHelpers_Settings *_this, float value);

/// initial radius of search for neighbours, it can be increased automatically;
/// if radius is positive then numNeis must be zero
/// Returns a mutable pointer to a member variable of class `MR::TriangulationHelpers::Settings` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_TriangulationHelpers_Settings_GetMutable_radius(MR_TriangulationHelpers_Settings *_this);

/// initially selects given number of nearest neighbours;
/// if numNeis is positive then radius must be zero
/// Returns a pointer to a member variable of class `MR::TriangulationHelpers::Settings` named `numNeis`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_TriangulationHelpers_Settings_Get_numNeis(const MR_TriangulationHelpers_Settings *_this);

/// initially selects given number of nearest neighbours;
/// if numNeis is positive then radius must be zero
/// Modifies a member variable of class `MR::TriangulationHelpers::Settings` named `numNeis`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationHelpers_Settings_Set_numNeis(MR_TriangulationHelpers_Settings *_this, int32_t value);

/// initially selects given number of nearest neighbours;
/// if numNeis is positive then radius must be zero
/// Returns a mutable pointer to a member variable of class `MR::TriangulationHelpers::Settings` named `numNeis`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_TriangulationHelpers_Settings_GetMutable_numNeis(MR_TriangulationHelpers_Settings *_this);

/// max allowed angle for triangles in fan
/// Returns a pointer to a member variable of class `MR::TriangulationHelpers::Settings` named `critAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_TriangulationHelpers_Settings_Get_critAngle(const MR_TriangulationHelpers_Settings *_this);

/// max allowed angle for triangles in fan
/// Modifies a member variable of class `MR::TriangulationHelpers::Settings` named `critAngle`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationHelpers_Settings_Set_critAngle(MR_TriangulationHelpers_Settings *_this, float value);

/// max allowed angle for triangles in fan
/// Returns a mutable pointer to a member variable of class `MR::TriangulationHelpers::Settings` named `critAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_TriangulationHelpers_Settings_GetMutable_critAngle(MR_TriangulationHelpers_Settings *_this);

/// the vertex is considered as boundary if its neighbor ring has angle more than this value
/// Returns a pointer to a member variable of class `MR::TriangulationHelpers::Settings` named `boundaryAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_TriangulationHelpers_Settings_Get_boundaryAngle(const MR_TriangulationHelpers_Settings *_this);

/// the vertex is considered as boundary if its neighbor ring has angle more than this value
/// Modifies a member variable of class `MR::TriangulationHelpers::Settings` named `boundaryAngle`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationHelpers_Settings_Set_boundaryAngle(MR_TriangulationHelpers_Settings *_this, float value);

/// the vertex is considered as boundary if its neighbor ring has angle more than this value
/// Returns a mutable pointer to a member variable of class `MR::TriangulationHelpers::Settings` named `boundaryAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_TriangulationHelpers_Settings_GetMutable_boundaryAngle(MR_TriangulationHelpers_Settings *_this);

/// if oriented normals are known, they will be used for neighbor points selection
/// Returns a pointer to a member variable of class `MR::TriangulationHelpers::Settings` named `trustedNormals`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords *const *MR_TriangulationHelpers_Settings_Get_trustedNormals(const MR_TriangulationHelpers_Settings *_this);

/// if oriented normals are known, they will be used for neighbor points selection
/// Modifies a member variable of class `MR::TriangulationHelpers::Settings` named `trustedNormals`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationHelpers_Settings_Set_trustedNormals(MR_TriangulationHelpers_Settings *_this, const MR_VertCoords *value);

/// if oriented normals are known, they will be used for neighbor points selection
/// Returns a mutable pointer to a member variable of class `MR::TriangulationHelpers::Settings` named `trustedNormals`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords **MR_TriangulationHelpers_Settings_GetMutable_trustedNormals(MR_TriangulationHelpers_Settings *_this);

/// automatic increase of the radius if points outside can make triangles from original radius not-Delone
/// Returns a pointer to a member variable of class `MR::TriangulationHelpers::Settings` named `automaticRadiusIncrease`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_TriangulationHelpers_Settings_Get_automaticRadiusIncrease(const MR_TriangulationHelpers_Settings *_this);

/// automatic increase of the radius if points outside can make triangles from original radius not-Delone
/// Modifies a member variable of class `MR::TriangulationHelpers::Settings` named `automaticRadiusIncrease`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationHelpers_Settings_Set_automaticRadiusIncrease(MR_TriangulationHelpers_Settings *_this, bool value);

/// automatic increase of the radius if points outside can make triangles from original radius not-Delone
/// Returns a mutable pointer to a member variable of class `MR::TriangulationHelpers::Settings` named `automaticRadiusIncrease`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_TriangulationHelpers_Settings_GetMutable_automaticRadiusIncrease(MR_TriangulationHelpers_Settings *_this);

/// the maximum number of optimization steps (removals) in local triangulation
/// Returns a pointer to a member variable of class `MR::TriangulationHelpers::Settings` named `maxRemoves`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_TriangulationHelpers_Settings_Get_maxRemoves(const MR_TriangulationHelpers_Settings *_this);

/// the maximum number of optimization steps (removals) in local triangulation
/// Modifies a member variable of class `MR::TriangulationHelpers::Settings` named `maxRemoves`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationHelpers_Settings_Set_maxRemoves(MR_TriangulationHelpers_Settings *_this, int32_t value);

/// the maximum number of optimization steps (removals) in local triangulation
/// Returns a mutable pointer to a member variable of class `MR::TriangulationHelpers::Settings` named `maxRemoves`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_TriangulationHelpers_Settings_GetMutable_maxRemoves(MR_TriangulationHelpers_Settings *_this);

/// optional output of considered neighbor points after filtering but before triangulation/optimization
/// Returns a pointer to a member variable of class `MR::TriangulationHelpers::Settings` named `allNeighbors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_VertId *const *MR_TriangulationHelpers_Settings_Get_allNeighbors(const MR_TriangulationHelpers_Settings *_this);

/// optional output of considered neighbor points after filtering but before triangulation/optimization
/// Modifies a member variable of class `MR::TriangulationHelpers::Settings` named `allNeighbors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationHelpers_Settings_Set_allNeighbors(MR_TriangulationHelpers_Settings *_this, MR_std_vector_MR_VertId *value);

/// optional output of considered neighbor points after filtering but before triangulation/optimization
/// Returns a mutable pointer to a member variable of class `MR::TriangulationHelpers::Settings` named `allNeighbors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_VertId **MR_TriangulationHelpers_Settings_GetMutable_allNeighbors(MR_TriangulationHelpers_Settings *_this);

/// optional output: actual radius of neighbor search (after increase if any)
/// Returns a pointer to a member variable of class `MR::TriangulationHelpers::Settings` named `actualRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *const *MR_TriangulationHelpers_Settings_Get_actualRadius(const MR_TriangulationHelpers_Settings *_this);

/// optional output: actual radius of neighbor search (after increase if any)
/// Modifies a member variable of class `MR::TriangulationHelpers::Settings` named `actualRadius`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationHelpers_Settings_Set_actualRadius(MR_TriangulationHelpers_Settings *_this, float *value);

/// optional output: actual radius of neighbor search (after increase if any)
/// Returns a mutable pointer to a member variable of class `MR::TriangulationHelpers::Settings` named `actualRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float **MR_TriangulationHelpers_Settings_GetMutable_actualRadius(MR_TriangulationHelpers_Settings *_this);

/// optional: if provided this cloud will be used for searching of neighbors (so it must have same validPoints)
/// Returns a pointer to a member variable of class `MR::TriangulationHelpers::Settings` named `searchNeighbors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PointCloud *const *MR_TriangulationHelpers_Settings_Get_searchNeighbors(const MR_TriangulationHelpers_Settings *_this);

/// optional: if provided this cloud will be used for searching of neighbors (so it must have same validPoints)
/// Modifies a member variable of class `MR::TriangulationHelpers::Settings` named `searchNeighbors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationHelpers_Settings_Set_searchNeighbors(MR_TriangulationHelpers_Settings *_this, const MR_PointCloud *value);

/// optional: if provided this cloud will be used for searching of neighbors (so it must have same validPoints)
/// Returns a mutable pointer to a member variable of class `MR::TriangulationHelpers::Settings` named `searchNeighbors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PointCloud **MR_TriangulationHelpers_Settings_GetMutable_searchNeighbors(MR_TriangulationHelpers_Settings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriangulationHelpers_Settings_Destroy()` to free it when you're done using it.
MRC_API MR_TriangulationHelpers_Settings *MR_TriangulationHelpers_Settings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_TriangulationHelpers_Settings_DestroyArray()`.
/// Use `MR_TriangulationHelpers_Settings_OffsetMutablePtr()` and `MR_TriangulationHelpers_Settings_OffsetPtr()` to access the array elements.
MRC_API MR_TriangulationHelpers_Settings *MR_TriangulationHelpers_Settings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::TriangulationHelpers::Settings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriangulationHelpers_Settings_Destroy()` to free it when you're done using it.
MRC_API MR_TriangulationHelpers_Settings *MR_TriangulationHelpers_Settings_ConstructFrom(float radius, int32_t numNeis, float critAngle, float boundaryAngle, const MR_VertCoords *trustedNormals, bool automaticRadiusIncrease, int32_t maxRemoves, MR_std_vector_MR_VertId *allNeighbors, float *actualRadius, const MR_PointCloud *searchNeighbors);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_TriangulationHelpers_Settings *MR_TriangulationHelpers_Settings_OffsetPtr(const MR_TriangulationHelpers_Settings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_TriangulationHelpers_Settings *MR_TriangulationHelpers_Settings_OffsetMutablePtr(MR_TriangulationHelpers_Settings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::TriangulationHelpers::Settings`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriangulationHelpers_Settings_Destroy()` to free it when you're done using it.
MRC_API MR_TriangulationHelpers_Settings *MR_TriangulationHelpers_Settings_ConstructFromAnother(const MR_TriangulationHelpers_Settings *_other);

/// Destroys a heap-allocated instance of `MR_TriangulationHelpers_Settings`. Does nothing if the pointer is null.
MRC_API void MR_TriangulationHelpers_Settings_Destroy(const MR_TriangulationHelpers_Settings *_this);

/// Destroys a heap-allocated array of `MR_TriangulationHelpers_Settings`. Does nothing if the pointer is null.
MRC_API void MR_TriangulationHelpers_Settings_DestroyArray(const MR_TriangulationHelpers_Settings *_this);

/// Generated from a method of class `MR::TriangulationHelpers::Settings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TriangulationHelpers_Settings *MR_TriangulationHelpers_Settings_AssignFromAnother(MR_TriangulationHelpers_Settings *_this, const MR_TriangulationHelpers_Settings *_other);

/// constructs local triangulation around given point
/// Generated from function `MR::TriangulationHelpers::buildLocalTriangulation`.
/// Parameter `cloud` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Parameter `fanData` can not be null. It is a single object.
MRC_API void MR_TriangulationHelpers_buildLocalTriangulation(const MR_PointCloud *cloud, MR_VertId v, const MR_TriangulationHelpers_Settings *settings, MR_TriangulationHelpers_TriangulatedFanData *fanData);

/// computes all local triangulations of all points in the cloud, and returns them distributed among
/// a set of SomeLocalTriangulations objects
/// Generated from function `MR::TriangulationHelpers::buildLocalTriangulations`.
/// Parameter `cloud` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Parameter `progress` is a single object.
/// Parameter `progress` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_std_vector_MR_SomeLocalTriangulations_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_std_vector_MR_SomeLocalTriangulations *MR_TriangulationHelpers_buildLocalTriangulations(const MR_PointCloud *cloud, const MR_TriangulationHelpers_Settings *settings, const MR_std_function_bool_from_float *progress);

//// computes local triangulations of all points in the cloud united in one struct
/// Generated from function `MR::TriangulationHelpers::buildUnitedLocalTriangulations`.
/// Parameter `cloud` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Parameter `progress` is a single object.
/// Parameter `progress` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_AllLocalTriangulations_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_AllLocalTriangulations *MR_TriangulationHelpers_buildUnitedLocalTriangulations(const MR_PointCloud *cloud, const MR_TriangulationHelpers_Settings *settings, const MR_std_function_bool_from_float *progress);

/**
* \brief Checks if given vertex is on boundary of the point cloud, by constructing local triangulation around it
*
* \param cloud input point cloud
* \param v vertex id to check
* \param settings all parameters of the computation
* \param fanData cache structure for neighbors, not to allocate for multiple calls
* \returns true if vertex is boundary, false otherwise
*/
/// Generated from function `MR::TriangulationHelpers::isBoundaryPoint`.
/// Parameter `cloud` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Parameter `fanData` can not be null. It is a single object.
MRC_API bool MR_TriangulationHelpers_isBoundaryPoint(const MR_PointCloud *cloud, MR_VertId v, const MR_TriangulationHelpers_Settings *settings, MR_TriangulationHelpers_TriangulatedFanData *fanData);

/// Returns bit set of points that are considered as boundary by calling isBoundaryPoint in each
/// Generated from function `MR::TriangulationHelpers::findBoundaryPoints`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_VertBitSet *MR_TriangulationHelpers_findBoundaryPoints(const MR_PointCloud *pointCloud, const MR_TriangulationHelpers_Settings *settings, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

#ifdef __cplusplus
} // extern "C"
#endif
