// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshTriPoint MR_MeshTriPoint; // Defined in `#include <MRCMesh/MRMeshTriPoint.h>`.
typedef struct MR_Polyline3 MR_Polyline3; // Defined in `#include <MRCMesh/MRPolyline.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_UndirectedEdgeScalars MR_UndirectedEdgeScalars; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertScalars MR_VertScalars; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_phmap_flat_hash_map_MR_VertId_MR_FlowAggregator_Flows MR_phmap_flat_hash_map_MR_VertId_MR_FlowAggregator_Flows; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_VertId_MR_FlowAggregator_Flows.h>`.
typedef struct MR_std_function_MR_MeshTriPoint_from_uint64_t MR_std_function_MR_MeshTriPoint_from_uint64_t; // Defined in `#include <MRCMisc/std_function_MR_MeshTriPoint_from_uint64_t.h>`.
typedef struct MR_std_function_const_MR_FaceBitSet_ptr_from_uint64_t MR_std_function_const_MR_FaceBitSet_ptr_from_uint64_t; // Defined in `#include <MRCMisc/std_function_const_MR_FaceBitSet_ptr_from_uint64_t.h>`.
typedef struct MR_std_function_float_from_uint64_t MR_std_function_float_from_uint64_t; // Defined in `#include <MRCMisc/std_function_float_from_uint64_t.h>`.
typedef struct MR_std_vector_MR_FlowOrigin MR_std_vector_MR_FlowOrigin; // Defined in `#include <MRCMisc/std_vector_MR_FlowOrigin.h>`.
typedef struct MR_std_vector_MR_MeshTriPoint MR_std_vector_MR_MeshTriPoint; // Defined in `#include <MRCMisc/std_vector_MR_MeshTriPoint.h>`.


/// Generated from class `MR::FlowOrigin`.
typedef struct MR_FlowOrigin MR_FlowOrigin;

/// Generated from class `MR::OutputFlows`.
typedef struct MR_OutputFlows MR_OutputFlows;

/// this class can track multiple flows and find in each mesh vertex the amount of water reached it
/// Generated from class `MR::FlowAggregator`.
typedef struct MR_FlowAggregator MR_FlowAggregator;

/// Generated from class `MR::FlowAggregator::Flows`.
typedef struct MR_FlowAggregator_Flows MR_FlowAggregator_Flows;

/// point on the mesh, where this flow starts
/// Returns a pointer to a member variable of class `MR::FlowOrigin` named `point`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshTriPoint *MR_FlowOrigin_Get_point(const MR_FlowOrigin *_this);

/// point on the mesh, where this flow starts
/// Modifies a member variable of class `MR::FlowOrigin` named `point`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_FlowOrigin_Set_point(MR_FlowOrigin *_this, const MR_MeshTriPoint *value);

/// point on the mesh, where this flow starts
/// Returns a mutable pointer to a member variable of class `MR::FlowOrigin` named `point`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshTriPoint *MR_FlowOrigin_GetMutable_point(MR_FlowOrigin *_this);

/// amount of flow, e.g. can be proportional to the horizontal area associated with the start point
/// Returns a pointer to a member variable of class `MR::FlowOrigin` named `amount`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FlowOrigin_Get_amount(const MR_FlowOrigin *_this);

/// amount of flow, e.g. can be proportional to the horizontal area associated with the start point
/// Modifies a member variable of class `MR::FlowOrigin` named `amount`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FlowOrigin_Set_amount(MR_FlowOrigin *_this, float value);

/// amount of flow, e.g. can be proportional to the horizontal area associated with the start point
/// Returns a mutable pointer to a member variable of class `MR::FlowOrigin` named `amount`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FlowOrigin_GetMutable_amount(MR_FlowOrigin *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FlowOrigin_Destroy()` to free it when you're done using it.
MRC_API MR_FlowOrigin *MR_FlowOrigin_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FlowOrigin_DestroyArray()`.
/// Use `MR_FlowOrigin_OffsetMutablePtr()` and `MR_FlowOrigin_OffsetPtr()` to access the array elements.
MRC_API MR_FlowOrigin *MR_FlowOrigin_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::FlowOrigin` elementwise.
/// Parameter `point` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FlowOrigin_Destroy()` to free it when you're done using it.
MRC_API MR_FlowOrigin *MR_FlowOrigin_ConstructFrom(const MR_MeshTriPoint *point, float amount);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FlowOrigin *MR_FlowOrigin_OffsetPtr(const MR_FlowOrigin *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FlowOrigin *MR_FlowOrigin_OffsetMutablePtr(MR_FlowOrigin *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FlowOrigin`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FlowOrigin_Destroy()` to free it when you're done using it.
MRC_API MR_FlowOrigin *MR_FlowOrigin_ConstructFromAnother(const MR_FlowOrigin *_other);

/// Destroys a heap-allocated instance of `MR_FlowOrigin`. Does nothing if the pointer is null.
MRC_API void MR_FlowOrigin_Destroy(const MR_FlowOrigin *_this);

/// Destroys a heap-allocated array of `MR_FlowOrigin`. Does nothing if the pointer is null.
MRC_API void MR_FlowOrigin_DestroyArray(const MR_FlowOrigin *_this);

/// Generated from a method of class `MR::FlowOrigin` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FlowOrigin *MR_FlowOrigin_AssignFromAnother(MR_FlowOrigin *_this, const MR_FlowOrigin *_other);

/// optional output: lines of all flows
/// Returns a pointer to a member variable of class `MR::OutputFlows` named `pPolyline`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Polyline3 *const *MR_OutputFlows_Get_pPolyline(const MR_OutputFlows *_this);

/// optional output: lines of all flows
/// Modifies a member variable of class `MR::OutputFlows` named `pPolyline`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OutputFlows_Set_pPolyline(MR_OutputFlows *_this, MR_Polyline3 *value);

/// optional output: lines of all flows
/// Returns a mutable pointer to a member variable of class `MR::OutputFlows` named `pPolyline`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Polyline3 **MR_OutputFlows_GetMutable_pPolyline(MR_OutputFlows *_this);

/// optional output: flow in each line of outPolyline
/// Returns a pointer to a member variable of class `MR::OutputFlows` named `pFlowPerEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeScalars *const *MR_OutputFlows_Get_pFlowPerEdge(const MR_OutputFlows *_this);

/// optional output: flow in each line of outPolyline
/// Modifies a member variable of class `MR::OutputFlows` named `pFlowPerEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OutputFlows_Set_pFlowPerEdge(MR_OutputFlows *_this, MR_UndirectedEdgeScalars *value);

/// optional output: flow in each line of outPolyline
/// Returns a mutable pointer to a member variable of class `MR::OutputFlows` named `pFlowPerEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeScalars **MR_OutputFlows_GetMutable_pFlowPerEdge(MR_OutputFlows *_this);

/// output in outPolyline only the flows with the amount greater than
/// Returns a pointer to a member variable of class `MR::OutputFlows` named `amountGreaterThan`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_OutputFlows_Get_amountGreaterThan(const MR_OutputFlows *_this);

/// output in outPolyline only the flows with the amount greater than
/// Modifies a member variable of class `MR::OutputFlows` named `amountGreaterThan`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OutputFlows_Set_amountGreaterThan(MR_OutputFlows *_this, float value);

/// output in outPolyline only the flows with the amount greater than
/// Returns a mutable pointer to a member variable of class `MR::OutputFlows` named `amountGreaterThan`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_OutputFlows_GetMutable_amountGreaterThan(MR_OutputFlows *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OutputFlows_Destroy()` to free it when you're done using it.
MRC_API MR_OutputFlows *MR_OutputFlows_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_OutputFlows_DestroyArray()`.
/// Use `MR_OutputFlows_OffsetMutablePtr()` and `MR_OutputFlows_OffsetPtr()` to access the array elements.
MRC_API MR_OutputFlows *MR_OutputFlows_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::OutputFlows` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OutputFlows_Destroy()` to free it when you're done using it.
MRC_API MR_OutputFlows *MR_OutputFlows_ConstructFrom(MR_Polyline3 *pPolyline, MR_UndirectedEdgeScalars *pFlowPerEdge, float amountGreaterThan);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_OutputFlows *MR_OutputFlows_OffsetPtr(const MR_OutputFlows *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_OutputFlows *MR_OutputFlows_OffsetMutablePtr(MR_OutputFlows *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::OutputFlows`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OutputFlows_Destroy()` to free it when you're done using it.
MRC_API MR_OutputFlows *MR_OutputFlows_ConstructFromAnother(const MR_OutputFlows *_other);

/// Destroys a heap-allocated instance of `MR_OutputFlows`. Does nothing if the pointer is null.
MRC_API void MR_OutputFlows_Destroy(const MR_OutputFlows *_this);

/// Destroys a heap-allocated array of `MR_OutputFlows`. Does nothing if the pointer is null.
MRC_API void MR_OutputFlows_DestroyArray(const MR_OutputFlows *_this);

/// Generated from a method of class `MR::OutputFlows` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OutputFlows *MR_OutputFlows_AssignFromAnother(MR_OutputFlows *_this, const MR_OutputFlows *_other);

/// Generated from a constructor of class `MR::FlowAggregator`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FlowAggregator_Destroy()` to free it when you're done using it.
MRC_API MR_FlowAggregator *MR_FlowAggregator_ConstructFromAnother(MR_PassBy _other_pass_by, MR_FlowAggregator *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FlowAggregator *MR_FlowAggregator_OffsetPtr(const MR_FlowAggregator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FlowAggregator *MR_FlowAggregator_OffsetMutablePtr(MR_FlowAggregator *ptr, ptrdiff_t i);

/// prepares the processing of given mesh with given height in each vertex
/// Generated from a constructor of class `MR::FlowAggregator`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `heights` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FlowAggregator_Destroy()` to free it when you're done using it.
MRC_API MR_FlowAggregator *MR_FlowAggregator_Construct(const MR_Mesh *mesh, const MR_VertScalars *heights);

/// Destroys a heap-allocated instance of `MR_FlowAggregator`. Does nothing if the pointer is null.
MRC_API void MR_FlowAggregator_Destroy(const MR_FlowAggregator *_this);

/// Destroys a heap-allocated array of `MR_FlowAggregator`. Does nothing if the pointer is null.
MRC_API void MR_FlowAggregator_DestroyArray(const MR_FlowAggregator *_this);

/// tracks multiple flows
/// \param starts the origin of each flow (should be uniformly sampled over the terrain)
/// \return the flow reached each mesh vertex
/// Generated from a method of class `MR::FlowAggregator` named `computeFlow`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `starts` can not be null. It is a single object.
/// Parameter `out` is a single object.
/// Parameter `out` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertScalars_Destroy()` to free it when you're done using it.
MRC_API MR_VertScalars *MR_FlowAggregator_computeFlow_2_std_vector_MR_FlowOrigin(const MR_FlowAggregator *_this, const MR_std_vector_MR_FlowOrigin *starts, const MR_OutputFlows *out);

// same with all amounts equal to 1
/// Generated from a method of class `MR::FlowAggregator` named `computeFlow`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `starts` can not be null. It is a single object.
/// Parameter `out` is a single object.
/// Parameter `out` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertScalars_Destroy()` to free it when you're done using it.
MRC_API MR_VertScalars *MR_FlowAggregator_computeFlow_2_std_vector_MR_MeshTriPoint(const MR_FlowAggregator *_this, const MR_std_vector_MR_MeshTriPoint *starts, const MR_OutputFlows *out);

// general version that supplies starts in a functional way
/// Generated from a method of class `MR::FlowAggregator` named `computeFlow`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `startById` can not be null. It is a single object.
/// Parameter `amountById` can not be null. It is a single object.
/// Parameter `regionById` can not be null. It is a single object.
/// Parameter `out` is a single object.
/// Parameter `out` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertScalars_Destroy()` to free it when you're done using it.
MRC_API MR_VertScalars *MR_FlowAggregator_computeFlow_5(const MR_FlowAggregator *_this, MR_uint64_t numStarts, const MR_std_function_MR_MeshTriPoint_from_uint64_t *startById, const MR_std_function_float_from_uint64_t *amountById, const MR_std_function_const_MR_FaceBitSet_ptr_from_uint64_t *regionById, const MR_OutputFlows *out);

/// tracks multiple flows
/// \param starts the origin of each flow (should be uniformly sampled over the terrain)
/// \return the flows grouped by the final destination vertex
/// Generated from a method of class `MR::FlowAggregator` named `computeFlowsPerBasin`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `starts` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_phmap_flat_hash_map_MR_VertId_MR_FlowAggregator_Flows_Destroy()` to free it when you're done using it.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_FlowAggregator_Flows *MR_FlowAggregator_computeFlowsPerBasin_1_std_vector_MR_FlowOrigin(const MR_FlowAggregator *_this, const MR_std_vector_MR_FlowOrigin *starts);

// same with all amounts equal to 1
/// Generated from a method of class `MR::FlowAggregator` named `computeFlowsPerBasin`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `starts` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_phmap_flat_hash_map_MR_VertId_MR_FlowAggregator_Flows_Destroy()` to free it when you're done using it.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_FlowAggregator_Flows *MR_FlowAggregator_computeFlowsPerBasin_1_std_vector_MR_MeshTriPoint(const MR_FlowAggregator *_this, const MR_std_vector_MR_MeshTriPoint *starts);

// general version that supplies starts in a functional way
/// Generated from a method of class `MR::FlowAggregator` named `computeFlowsPerBasin`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `startById` can not be null. It is a single object.
/// Parameter `amountById` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_phmap_flat_hash_map_MR_VertId_MR_FlowAggregator_Flows_Destroy()` to free it when you're done using it.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_FlowAggregator_Flows *MR_FlowAggregator_computeFlowsPerBasin_3(const MR_FlowAggregator *_this, MR_uint64_t numStarts, const MR_std_function_MR_MeshTriPoint_from_uint64_t *startById, const MR_std_function_float_from_uint64_t *amountById);

/// finds the edges on the mesh that divides catchment basin
/// (every triangle is attributed to the final destination point based on the path originated from its centroid)
/// Generated from a method of class `MR::FlowAggregator` named `computeCatchmentDelineation`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_FlowAggregator_computeCatchmentDelineation(const MR_FlowAggregator *_this);

/// Returns a pointer to a member variable of class `MR::FlowAggregator::Flows` named `polyline`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Polyline3 *MR_FlowAggregator_Flows_Get_polyline(const MR_FlowAggregator_Flows *_this);

/// Modifies a member variable of class `MR::FlowAggregator::Flows` named `polyline`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FlowAggregator_Flows_Set_polyline(MR_FlowAggregator_Flows *_this, MR_PassBy value_pass_by, MR_Polyline3 *value);

/// Returns a mutable pointer to a member variable of class `MR::FlowAggregator::Flows` named `polyline`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Polyline3 *MR_FlowAggregator_Flows_GetMutable_polyline(MR_FlowAggregator_Flows *_this);

/// Returns a pointer to a member variable of class `MR::FlowAggregator::Flows` named `flowPerEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeScalars *MR_FlowAggregator_Flows_Get_flowPerEdge(const MR_FlowAggregator_Flows *_this);

/// Modifies a member variable of class `MR::FlowAggregator::Flows` named `flowPerEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FlowAggregator_Flows_Set_flowPerEdge(MR_FlowAggregator_Flows *_this, MR_PassBy value_pass_by, MR_UndirectedEdgeScalars *value);

/// Returns a mutable pointer to a member variable of class `MR::FlowAggregator::Flows` named `flowPerEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeScalars *MR_FlowAggregator_Flows_GetMutable_flowPerEdge(MR_FlowAggregator_Flows *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FlowAggregator_Flows_Destroy()` to free it when you're done using it.
MRC_API MR_FlowAggregator_Flows *MR_FlowAggregator_Flows_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FlowAggregator_Flows_DestroyArray()`.
/// Use `MR_FlowAggregator_Flows_OffsetMutablePtr()` and `MR_FlowAggregator_Flows_OffsetPtr()` to access the array elements.
MRC_API MR_FlowAggregator_Flows *MR_FlowAggregator_Flows_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::FlowAggregator::Flows` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FlowAggregator_Flows_Destroy()` to free it when you're done using it.
MRC_API MR_FlowAggregator_Flows *MR_FlowAggregator_Flows_ConstructFrom(MR_PassBy polyline_pass_by, MR_Polyline3 *polyline, MR_PassBy flowPerEdge_pass_by, MR_UndirectedEdgeScalars *flowPerEdge);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FlowAggregator_Flows *MR_FlowAggregator_Flows_OffsetPtr(const MR_FlowAggregator_Flows *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FlowAggregator_Flows *MR_FlowAggregator_Flows_OffsetMutablePtr(MR_FlowAggregator_Flows *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FlowAggregator::Flows`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FlowAggregator_Flows_Destroy()` to free it when you're done using it.
MRC_API MR_FlowAggregator_Flows *MR_FlowAggregator_Flows_ConstructFromAnother(MR_PassBy _other_pass_by, MR_FlowAggregator_Flows *_other);

/// Destroys a heap-allocated instance of `MR_FlowAggregator_Flows`. Does nothing if the pointer is null.
MRC_API void MR_FlowAggregator_Flows_Destroy(const MR_FlowAggregator_Flows *_this);

/// Destroys a heap-allocated array of `MR_FlowAggregator_Flows`. Does nothing if the pointer is null.
MRC_API void MR_FlowAggregator_Flows_DestroyArray(const MR_FlowAggregator_Flows *_this);

/// Generated from a method of class `MR::FlowAggregator::Flows` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FlowAggregator_Flows *MR_FlowAggregator_Flows_AssignFromAnother(MR_FlowAggregator_Flows *_this, MR_PassBy _other_pass_by, MR_FlowAggregator_Flows *_other);

#ifdef __cplusplus
} // extern "C"
#endif
