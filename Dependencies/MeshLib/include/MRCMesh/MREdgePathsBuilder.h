// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_MeshTriPoint MR_MeshTriPoint; // Defined in `#include <MRCMesh/MRMeshTriPoint.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_phmap_flat_hash_map_MR_VertId_MR_VertPathInfo MR_phmap_flat_hash_map_MR_VertId_MR_VertPathInfo; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_VertId_MR_VertPathInfo.h>`.
typedef struct MR_std_function_float_from_MR_EdgeId MR_std_function_float_from_MR_EdgeId; // Defined in `#include <MRCMisc/std_function_float_from_MR_EdgeId.h>`.
typedef struct MR_std_vector_MR_EdgeId MR_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_MR_EdgeId.h>`.


/// information associated with each vertex by the paths builder
/// Generated from class `MR::VertPathInfo`.
typedef struct MR_VertPathInfo MR_VertPathInfo;

/// the class is responsible for finding smallest metric edge paths on a mesh
/// Generated from class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>`.
typedef struct MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty;

/// information about just reached vertex (with final metric value)
/// Generated from class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>::ReachedVert`.
typedef struct MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert;

/// the class is responsible for finding smallest metric edge paths on a mesh
/// Generated from class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::EdgePathsAStarBuilder`
typedef struct MR_EdgePathsBuilderT_MR_MetricToAStarPenalty MR_EdgePathsBuilderT_MR_MetricToAStarPenalty;

/// information about just reached vertex (with final metric value)
/// Generated from class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>::ReachedVert`.
typedef struct MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert;

/// the vertices in the queue are ordered by their metric from a start location
/// Generated from class `MR::TrivialMetricToPenalty`.
typedef struct MR_TrivialMetricToPenalty MR_TrivialMetricToPenalty;

/// the vertices in the queue are ordered by the sum of their metric from a start location and the
/// lower bound of a path till target point (A* heuristic)
/// Generated from class `MR::MetricToAStarPenalty`.
typedef struct MR_MetricToAStarPenalty MR_MetricToAStarPenalty;

/// the class is responsible for finding shortest edge paths on a mesh in Euclidean metric
/// using A* heuristics
/// Generated from class `MR::EdgePathsAStarBuilder`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>`
typedef struct MR_EdgePathsAStarBuilder MR_EdgePathsAStarBuilder;

// edge from this vertex to its predecessor in the forest
/// Returns a pointer to a member variable of class `MR::VertPathInfo` named `back`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_EdgeId *MR_VertPathInfo_Get_back(const MR_VertPathInfo *_this);

// edge from this vertex to its predecessor in the forest
/// Modifies a member variable of class `MR::VertPathInfo` named `back`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VertPathInfo_Set_back(MR_VertPathInfo *_this, MR_EdgeId value);

// edge from this vertex to its predecessor in the forest
/// Returns a mutable pointer to a member variable of class `MR::VertPathInfo` named `back`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeId *MR_VertPathInfo_GetMutable_back(MR_VertPathInfo *_this);

// best summed metric to reach this vertex
/// Returns a pointer to a member variable of class `MR::VertPathInfo` named `metric`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_VertPathInfo_Get_metric(const MR_VertPathInfo *_this);

// best summed metric to reach this vertex
/// Modifies a member variable of class `MR::VertPathInfo` named `metric`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VertPathInfo_Set_metric(MR_VertPathInfo *_this, float value);

// best summed metric to reach this vertex
/// Returns a mutable pointer to a member variable of class `MR::VertPathInfo` named `metric`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_VertPathInfo_GetMutable_metric(MR_VertPathInfo *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertPathInfo_Destroy()` to free it when you're done using it.
MRC_API MR_VertPathInfo *MR_VertPathInfo_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VertPathInfo_DestroyArray()`.
/// Use `MR_VertPathInfo_OffsetMutablePtr()` and `MR_VertPathInfo_OffsetPtr()` to access the array elements.
MRC_API MR_VertPathInfo *MR_VertPathInfo_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::VertPathInfo` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertPathInfo_Destroy()` to free it when you're done using it.
MRC_API MR_VertPathInfo *MR_VertPathInfo_ConstructFrom(MR_EdgeId back, float metric);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VertPathInfo *MR_VertPathInfo_OffsetPtr(const MR_VertPathInfo *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VertPathInfo *MR_VertPathInfo_OffsetMutablePtr(MR_VertPathInfo *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VertPathInfo`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertPathInfo_Destroy()` to free it when you're done using it.
MRC_API MR_VertPathInfo *MR_VertPathInfo_ConstructFromAnother(const MR_VertPathInfo *_other);

/// Destroys a heap-allocated instance of `MR_VertPathInfo`. Does nothing if the pointer is null.
MRC_API void MR_VertPathInfo_Destroy(const MR_VertPathInfo *_this);

/// Destroys a heap-allocated array of `MR_VertPathInfo`. Does nothing if the pointer is null.
MRC_API void MR_VertPathInfo_DestroyArray(const MR_VertPathInfo *_this);

/// Generated from a method of class `MR::VertPathInfo` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertPathInfo *MR_VertPathInfo_AssignFromAnother(MR_VertPathInfo *_this, const MR_VertPathInfo *_other);

/// Generated from a method of class `MR::VertPathInfo` named `isStart`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_VertPathInfo_isStart(const MR_VertPathInfo *_this);

/// Generated from a constructor of class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty *MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ConstructFromAnother(MR_PassBy _other_pass_by, MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty *MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_OffsetPtr(const MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty *MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_OffsetMutablePtr(MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `metric` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty *MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_Construct(const MR_MeshTopology *topology, const MR_std_function_float_from_MR_EdgeId *metric);

/// Destroys a heap-allocated instance of `MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty`. Does nothing if the pointer is null.
MRC_API void MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_Destroy(const MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty *_this);

/// Destroys a heap-allocated array of `MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty`. Does nothing if the pointer is null.
MRC_API void MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_DestroyArray(const MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty *_this);

/// compares proposed metric with best value known for startVert;
/// if proposed metric is smaller then adds it in the queue and returns true
/// Generated from a method of class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>` named `addStart`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_addStart(MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty *_this, MR_VertId startVert, float startMetric);

/// include one more vertex in the final forest, returning vertex-info for the newly reached vertex;
/// returns invalid VertId in v-field if no more vertices left
/// Generated from a method of class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>` named `reachNext`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_reachNext(MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty *_this);

/// adds steps for all origin ring edges of the reached vertex;
/// returns true if at least one step was added
/// Generated from a method of class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>` named `addOrgRingSteps`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rv` can not be null. It is a single object.
MRC_API bool MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_addOrgRingSteps(MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty *_this, const MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *rv);

/// the same as reachNext() + addOrgRingSteps()
/// Generated from a method of class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>` named `growOneEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_growOneEdge(MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty *_this);

/// returns true if further edge forest growth is impossible
/// Generated from a method of class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>` named `done`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_done(const MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty *_this);

/// returns path length till the next candidate vertex or maximum float value if all vertices have been reached
/// Generated from a method of class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>` named `doneDistance`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_doneDistance(const MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty *_this);

/// gives read access to the map from vertex to path to it
/// Generated from a method of class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>` named `vertPathInfoMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_phmap_flat_hash_map_MR_VertId_MR_VertPathInfo *MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_vertPathInfoMap(const MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty *_this);

/// returns one element from the map (or nullptr if the element is missing)
/// Generated from a method of class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>` named `getVertInfo`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_VertPathInfo *MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_getVertInfo(const MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty *_this, MR_VertId v);

/// returns the path in the forest from given vertex to one of start vertices
/// Generated from a method of class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>` named `getPathBack`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeId *MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_getPathBack(const MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty *_this, MR_VertId backpathStart);

/// Returns a pointer to a member variable of class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>::ReachedVert` named `v`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_Get_v(const MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *_this);

/// Modifies a member variable of class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>::ReachedVert` named `v`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_Set_v(MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *_this, MR_VertId value);

/// Returns a mutable pointer to a member variable of class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>::ReachedVert` named `v`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_GetMutable_v(MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *_this);

/// edge from this vertex to its predecessor in the forest (if this vertex is not start)
/// Returns a pointer to a member variable of class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>::ReachedVert` named `backward`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_EdgeId *MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_Get_backward(const MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *_this);

/// edge from this vertex to its predecessor in the forest (if this vertex is not start)
/// Modifies a member variable of class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>::ReachedVert` named `backward`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_Set_backward(MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *_this, MR_EdgeId value);

/// edge from this vertex to its predecessor in the forest (if this vertex is not start)
/// Returns a mutable pointer to a member variable of class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>::ReachedVert` named `backward`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeId *MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_GetMutable_backward(MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *_this);

/// not reached vertices are ordered in priority queue by their penalty (with the smallest value on top);
/// penalty is equal to metric in ordinary Dijkstra, or equal to (metric + target distance lower bound) in A*
/// Returns a pointer to a member variable of class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>::ReachedVert` named `penalty`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_Get_penalty(const MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *_this);

/// not reached vertices are ordered in priority queue by their penalty (with the smallest value on top);
/// penalty is equal to metric in ordinary Dijkstra, or equal to (metric + target distance lower bound) in A*
/// Modifies a member variable of class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>::ReachedVert` named `penalty`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_Set_penalty(MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *_this, float value);

/// not reached vertices are ordered in priority queue by their penalty (with the smallest value on top);
/// penalty is equal to metric in ordinary Dijkstra, or equal to (metric + target distance lower bound) in A*
/// Returns a mutable pointer to a member variable of class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>::ReachedVert` named `penalty`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_GetMutable_penalty(MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *_this);

/// summed metric to reach this vertex
/// Returns a pointer to a member variable of class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>::ReachedVert` named `metric`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_Get_metric(const MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *_this);

/// summed metric to reach this vertex
/// Modifies a member variable of class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>::ReachedVert` named `metric`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_Set_metric(MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *_this, float value);

/// summed metric to reach this vertex
/// Returns a mutable pointer to a member variable of class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>::ReachedVert` named `metric`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_GetMutable_metric(MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_DestroyArray()`.
/// Use `MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_OffsetMutablePtr()` and `MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_OffsetPtr()` to access the array elements.
MRC_API MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>::ReachedVert` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_ConstructFrom(MR_VertId v, MR_EdgeId backward, float penalty, float metric);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_OffsetPtr(const MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_OffsetMutablePtr(MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>::ReachedVert`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_ConstructFromAnother(const MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *_other);

/// Destroys a heap-allocated instance of `MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert`. Does nothing if the pointer is null.
MRC_API void MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_Destroy(const MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *_this);

/// Destroys a heap-allocated array of `MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert`. Does nothing if the pointer is null.
MRC_API void MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_DestroyArray(const MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *_this);

/// Generated from a method of class `MR::EdgePathsBuilderT<MR::TrivialMetricToPenalty>::ReachedVert` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert_AssignFromAnother(MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *_this, const MR_EdgePathsBuilderT_MR_TrivialMetricToPenalty_ReachedVert *_other);

/// Generated from a constructor of class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePathsBuilderT_MR_MetricToAStarPenalty *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ConstructFromAnother(MR_PassBy _other_pass_by, MR_EdgePathsBuilderT_MR_MetricToAStarPenalty *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_EdgePathsBuilderT_MR_MetricToAStarPenalty *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_OffsetPtr(const MR_EdgePathsBuilderT_MR_MetricToAStarPenalty *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_EdgePathsBuilderT_MR_MetricToAStarPenalty *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_OffsetMutablePtr(MR_EdgePathsBuilderT_MR_MetricToAStarPenalty *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>` to a derived class `MR::EdgePathsAStarBuilder`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_EdgePathsAStarBuilder *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_StaticDowncastTo_MR_EdgePathsAStarBuilder(const MR_EdgePathsBuilderT_MR_MetricToAStarPenalty *object);

/// Downcasts an instance of `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>` to a derived class `MR::EdgePathsAStarBuilder`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_EdgePathsAStarBuilder *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_MutableStaticDowncastTo_MR_EdgePathsAStarBuilder(MR_EdgePathsBuilderT_MR_MetricToAStarPenalty *object);

/// Generated from a constructor of class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `metric` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePathsBuilderT_MR_MetricToAStarPenalty *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_Construct(const MR_MeshTopology *topology, const MR_std_function_float_from_MR_EdgeId *metric);

/// Destroys a heap-allocated instance of `MR_EdgePathsBuilderT_MR_MetricToAStarPenalty`. Does nothing if the pointer is null.
MRC_API void MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_Destroy(const MR_EdgePathsBuilderT_MR_MetricToAStarPenalty *_this);

/// Destroys a heap-allocated array of `MR_EdgePathsBuilderT_MR_MetricToAStarPenalty`. Does nothing if the pointer is null.
MRC_API void MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_DestroyArray(const MR_EdgePathsBuilderT_MR_MetricToAStarPenalty *_this);

/// compares proposed metric with best value known for startVert;
/// if proposed metric is smaller then adds it in the queue and returns true
/// Generated from a method of class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>` named `addStart`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_addStart(MR_EdgePathsBuilderT_MR_MetricToAStarPenalty *_this, MR_VertId startVert, float startMetric);

/// include one more vertex in the final forest, returning vertex-info for the newly reached vertex;
/// returns invalid VertId in v-field if no more vertices left
/// Generated from a method of class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>` named `reachNext`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_reachNext(MR_EdgePathsBuilderT_MR_MetricToAStarPenalty *_this);

/// adds steps for all origin ring edges of the reached vertex;
/// returns true if at least one step was added
/// Generated from a method of class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>` named `addOrgRingSteps`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rv` can not be null. It is a single object.
MRC_API bool MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_addOrgRingSteps(MR_EdgePathsBuilderT_MR_MetricToAStarPenalty *_this, const MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *rv);

/// the same as reachNext() + addOrgRingSteps()
/// Generated from a method of class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>` named `growOneEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_growOneEdge(MR_EdgePathsBuilderT_MR_MetricToAStarPenalty *_this);

/// returns true if further edge forest growth is impossible
/// Generated from a method of class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>` named `done`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_done(const MR_EdgePathsBuilderT_MR_MetricToAStarPenalty *_this);

/// returns path length till the next candidate vertex or maximum float value if all vertices have been reached
/// Generated from a method of class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>` named `doneDistance`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_doneDistance(const MR_EdgePathsBuilderT_MR_MetricToAStarPenalty *_this);

/// gives read access to the map from vertex to path to it
/// Generated from a method of class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>` named `vertPathInfoMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_phmap_flat_hash_map_MR_VertId_MR_VertPathInfo *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_vertPathInfoMap(const MR_EdgePathsBuilderT_MR_MetricToAStarPenalty *_this);

/// returns one element from the map (or nullptr if the element is missing)
/// Generated from a method of class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>` named `getVertInfo`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_VertPathInfo *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_getVertInfo(const MR_EdgePathsBuilderT_MR_MetricToAStarPenalty *_this, MR_VertId v);

/// returns the path in the forest from given vertex to one of start vertices
/// Generated from a method of class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>` named `getPathBack`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeId *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_getPathBack(const MR_EdgePathsBuilderT_MR_MetricToAStarPenalty *_this, MR_VertId backpathStart);

/// Returns a pointer to a member variable of class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>::ReachedVert` named `v`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_Get_v(const MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *_this);

/// Modifies a member variable of class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>::ReachedVert` named `v`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_Set_v(MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *_this, MR_VertId value);

/// Returns a mutable pointer to a member variable of class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>::ReachedVert` named `v`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_GetMutable_v(MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *_this);

/// edge from this vertex to its predecessor in the forest (if this vertex is not start)
/// Returns a pointer to a member variable of class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>::ReachedVert` named `backward`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_EdgeId *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_Get_backward(const MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *_this);

/// edge from this vertex to its predecessor in the forest (if this vertex is not start)
/// Modifies a member variable of class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>::ReachedVert` named `backward`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_Set_backward(MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *_this, MR_EdgeId value);

/// edge from this vertex to its predecessor in the forest (if this vertex is not start)
/// Returns a mutable pointer to a member variable of class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>::ReachedVert` named `backward`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeId *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_GetMutable_backward(MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *_this);

/// not reached vertices are ordered in priority queue by their penalty (with the smallest value on top);
/// penalty is equal to metric in ordinary Dijkstra, or equal to (metric + target distance lower bound) in A*
/// Returns a pointer to a member variable of class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>::ReachedVert` named `penalty`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_Get_penalty(const MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *_this);

/// not reached vertices are ordered in priority queue by their penalty (with the smallest value on top);
/// penalty is equal to metric in ordinary Dijkstra, or equal to (metric + target distance lower bound) in A*
/// Modifies a member variable of class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>::ReachedVert` named `penalty`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_Set_penalty(MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *_this, float value);

/// not reached vertices are ordered in priority queue by their penalty (with the smallest value on top);
/// penalty is equal to metric in ordinary Dijkstra, or equal to (metric + target distance lower bound) in A*
/// Returns a mutable pointer to a member variable of class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>::ReachedVert` named `penalty`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_GetMutable_penalty(MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *_this);

/// summed metric to reach this vertex
/// Returns a pointer to a member variable of class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>::ReachedVert` named `metric`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_Get_metric(const MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *_this);

/// summed metric to reach this vertex
/// Modifies a member variable of class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>::ReachedVert` named `metric`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_Set_metric(MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *_this, float value);

/// summed metric to reach this vertex
/// Returns a mutable pointer to a member variable of class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>::ReachedVert` named `metric`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_GetMutable_metric(MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_DestroyArray()`.
/// Use `MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_OffsetMutablePtr()` and `MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_OffsetPtr()` to access the array elements.
MRC_API MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>::ReachedVert` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_ConstructFrom(MR_VertId v, MR_EdgeId backward, float penalty, float metric);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_OffsetPtr(const MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_OffsetMutablePtr(MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>::ReachedVert`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_ConstructFromAnother(const MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *_other);

/// Destroys a heap-allocated instance of `MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert`. Does nothing if the pointer is null.
MRC_API void MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_Destroy(const MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *_this);

/// Destroys a heap-allocated array of `MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert`. Does nothing if the pointer is null.
MRC_API void MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_DestroyArray(const MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *_this);

/// Generated from a method of class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>::ReachedVert` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert_AssignFromAnother(MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *_this, const MR_EdgePathsBuilderT_MR_MetricToAStarPenalty_ReachedVert *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TrivialMetricToPenalty_Destroy()` to free it when you're done using it.
MRC_API MR_TrivialMetricToPenalty *MR_TrivialMetricToPenalty_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_TrivialMetricToPenalty_DestroyArray()`.
/// Use `MR_TrivialMetricToPenalty_OffsetMutablePtr()` and `MR_TrivialMetricToPenalty_OffsetPtr()` to access the array elements.
MRC_API MR_TrivialMetricToPenalty *MR_TrivialMetricToPenalty_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_TrivialMetricToPenalty *MR_TrivialMetricToPenalty_OffsetPtr(const MR_TrivialMetricToPenalty *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_TrivialMetricToPenalty *MR_TrivialMetricToPenalty_OffsetMutablePtr(MR_TrivialMetricToPenalty *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::TrivialMetricToPenalty`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TrivialMetricToPenalty_Destroy()` to free it when you're done using it.
MRC_API MR_TrivialMetricToPenalty *MR_TrivialMetricToPenalty_ConstructFromAnother(const MR_TrivialMetricToPenalty *_other);

/// Destroys a heap-allocated instance of `MR_TrivialMetricToPenalty`. Does nothing if the pointer is null.
MRC_API void MR_TrivialMetricToPenalty_Destroy(const MR_TrivialMetricToPenalty *_this);

/// Destroys a heap-allocated array of `MR_TrivialMetricToPenalty`. Does nothing if the pointer is null.
MRC_API void MR_TrivialMetricToPenalty_DestroyArray(const MR_TrivialMetricToPenalty *_this);

/// Generated from a method of class `MR::TrivialMetricToPenalty` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TrivialMetricToPenalty *MR_TrivialMetricToPenalty_AssignFromAnother(MR_TrivialMetricToPenalty *_this, const MR_TrivialMetricToPenalty *_other);

/// Generated from a method of class `MR::TrivialMetricToPenalty` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_TrivialMetricToPenalty_call(const MR_TrivialMetricToPenalty *_this, float metric, MR_VertId _2);

/// Returns a pointer to a member variable of class `MR::MetricToAStarPenalty` named `points`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords *const *MR_MetricToAStarPenalty_Get_points(const MR_MetricToAStarPenalty *_this);

/// Modifies a member variable of class `MR::MetricToAStarPenalty` named `points`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MetricToAStarPenalty_Set_points(MR_MetricToAStarPenalty *_this, const MR_VertCoords *value);

/// Returns a mutable pointer to a member variable of class `MR::MetricToAStarPenalty` named `points`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords **MR_MetricToAStarPenalty_GetMutable_points(MR_MetricToAStarPenalty *_this);

/// Returns a pointer to a member variable of class `MR::MetricToAStarPenalty` named `target`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_MetricToAStarPenalty_Get_target(const MR_MetricToAStarPenalty *_this);

/// Modifies a member variable of class `MR::MetricToAStarPenalty` named `target`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MetricToAStarPenalty_Set_target(MR_MetricToAStarPenalty *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::MetricToAStarPenalty` named `target`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_MetricToAStarPenalty_GetMutable_target(MR_MetricToAStarPenalty *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MetricToAStarPenalty_Destroy()` to free it when you're done using it.
MRC_API MR_MetricToAStarPenalty *MR_MetricToAStarPenalty_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MetricToAStarPenalty_DestroyArray()`.
/// Use `MR_MetricToAStarPenalty_OffsetMutablePtr()` and `MR_MetricToAStarPenalty_OffsetPtr()` to access the array elements.
MRC_API MR_MetricToAStarPenalty *MR_MetricToAStarPenalty_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MetricToAStarPenalty` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MetricToAStarPenalty_Destroy()` to free it when you're done using it.
MRC_API MR_MetricToAStarPenalty *MR_MetricToAStarPenalty_ConstructFrom(const MR_VertCoords *points, MR_Vector3f target);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MetricToAStarPenalty *MR_MetricToAStarPenalty_OffsetPtr(const MR_MetricToAStarPenalty *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MetricToAStarPenalty *MR_MetricToAStarPenalty_OffsetMutablePtr(MR_MetricToAStarPenalty *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MetricToAStarPenalty`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MetricToAStarPenalty_Destroy()` to free it when you're done using it.
MRC_API MR_MetricToAStarPenalty *MR_MetricToAStarPenalty_ConstructFromAnother(const MR_MetricToAStarPenalty *_other);

/// Destroys a heap-allocated instance of `MR_MetricToAStarPenalty`. Does nothing if the pointer is null.
MRC_API void MR_MetricToAStarPenalty_Destroy(const MR_MetricToAStarPenalty *_this);

/// Destroys a heap-allocated array of `MR_MetricToAStarPenalty`. Does nothing if the pointer is null.
MRC_API void MR_MetricToAStarPenalty_DestroyArray(const MR_MetricToAStarPenalty *_this);

/// Generated from a method of class `MR::MetricToAStarPenalty` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MetricToAStarPenalty *MR_MetricToAStarPenalty_AssignFromAnother(MR_MetricToAStarPenalty *_this, const MR_MetricToAStarPenalty *_other);

/// Generated from a method of class `MR::MetricToAStarPenalty` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_MetricToAStarPenalty_call(const MR_MetricToAStarPenalty *_this, float metric, MR_VertId v);

/// Generated from a constructor of class `MR::EdgePathsAStarBuilder`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePathsAStarBuilder_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePathsAStarBuilder *MR_EdgePathsAStarBuilder_ConstructFromAnother(MR_PassBy _other_pass_by, MR_EdgePathsAStarBuilder *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_EdgePathsAStarBuilder *MR_EdgePathsAStarBuilder_OffsetPtr(const MR_EdgePathsAStarBuilder *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_EdgePathsAStarBuilder *MR_EdgePathsAStarBuilder_OffsetMutablePtr(MR_EdgePathsAStarBuilder *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::EdgePathsAStarBuilder` to its base class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>`.
/// This version is acting on mutable pointers.
MRC_API const MR_EdgePathsBuilderT_MR_MetricToAStarPenalty *MR_EdgePathsAStarBuilder_UpcastTo_MR_EdgePathsBuilderT_MR_MetricToAStarPenalty(const MR_EdgePathsAStarBuilder *object);

/// Upcasts an instance of `MR::EdgePathsAStarBuilder` to its base class `MR::EdgePathsBuilderT<MR::MetricToAStarPenalty>`.
MRC_API MR_EdgePathsBuilderT_MR_MetricToAStarPenalty *MR_EdgePathsAStarBuilder_MutableUpcastTo_MR_EdgePathsBuilderT_MR_MetricToAStarPenalty(MR_EdgePathsAStarBuilder *object);

/// Generated from a constructor of class `MR::EdgePathsAStarBuilder`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePathsAStarBuilder_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePathsAStarBuilder *MR_EdgePathsAStarBuilder_Construct_MR_VertId(const MR_Mesh *mesh, MR_VertId target, MR_VertId start);

/// Generated from a constructor of class `MR::EdgePathsAStarBuilder`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `target` can not be null. It is a single object.
/// Parameter `start` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePathsAStarBuilder_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePathsAStarBuilder *MR_EdgePathsAStarBuilder_Construct_MR_MeshTriPoint(const MR_Mesh *mesh, const MR_MeshTriPoint *target, const MR_MeshTriPoint *start);

/// Destroys a heap-allocated instance of `MR_EdgePathsAStarBuilder`. Does nothing if the pointer is null.
MRC_API void MR_EdgePathsAStarBuilder_Destroy(const MR_EdgePathsAStarBuilder *_this);

/// Destroys a heap-allocated array of `MR_EdgePathsAStarBuilder`. Does nothing if the pointer is null.
MRC_API void MR_EdgePathsAStarBuilder_DestroyArray(const MR_EdgePathsAStarBuilder *_this);

#ifdef __cplusplus
} // extern "C"
#endif
