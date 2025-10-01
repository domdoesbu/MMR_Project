// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRGridSampling.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_ICPPairData MR_ICPPairData; // Defined in `#include <MRCMesh/MRICP.h>`.
typedef struct MR_ICPProperties MR_ICPProperties; // Defined in `#include <MRCMesh/MRICP.h>`.
typedef struct MR_IPointPairs MR_IPointPairs; // Defined in `#include <MRCMesh/MRICP.h>`.
typedef struct MR_Id_MR_ICPElemtTag MR_Id_MR_ICPElemtTag; // Defined in `#include <MRCMesh/MRId.h>`.
typedef struct MR_ObjBitSet MR_ObjBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_TypedBitSet_MR_Id_MR_ICPElemtTag MR_TypedBitSet_MR_Id_MR_ICPElemtTag; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Vector_MR_AffineXf3f_MR_ObjId MR_Vector_MR_AffineXf3f_MR_ObjId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_MR_MeshOrPointsXf_MR_ObjId MR_Vector_MR_MeshOrPointsXf_MR_ObjId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_MR_Vector_MR_Vector_MR_ICPGroupPairs_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_int32_t MR_Vector_MR_Vector_MR_Vector_MR_ICPGroupPairs_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_int32_t; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_function_void_from_const_MR_Vector3f_ref_MR_MeshOrPoints_ProjectionResult_ref_MR_ObjId_ref MR_std_function_void_from_const_MR_Vector3f_ref_MR_MeshOrPoints_ProjectionResult_ref_MR_ObjId_ref; // Defined in `#include <MRCMisc/std_function_void_from_const_MR_Vector3f_ref_MR_MeshOrPoints_ProjectionResult_ref_MR_ObjId_r__f9dd.h>`.
typedef struct MR_std_function_void_from_int32_t MR_std_function_void_from_int32_t; // Defined in `#include <MRCMisc/std_function_void_from_int32_t.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_MR_ICPGroupPair MR_std_vector_MR_ICPGroupPair; // Defined in `#include <MRCMisc/std_vector_MR_ICPGroupPair.h>`.


/// Generated from class `MR::ICPGroupPair`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::ICPPairData`
typedef struct MR_ICPGroupPair MR_ICPGroupPair;

/// Generated from class `MR::ICPGroupPairs`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::IPointPairs`
typedef struct MR_ICPGroupPairs MR_ICPGroupPairs;

/// structure to find leafs and groups of each in cascade mode
/// Generated from class `MR::IICPTreeIndexer`.
typedef struct MR_IICPTreeIndexer MR_IICPTreeIndexer;

/// Parameters that are used for sampling of the MultiwayICP objects
/// Generated from class `MR::MultiwayICPSamplingParameters`.
typedef struct MR_MultiwayICPSamplingParameters MR_MultiwayICPSamplingParameters;

typedef int32_t MR_MultiwayICPSamplingParameters_CascadeMode;
enum // MR_MultiwayICPSamplingParameters_CascadeMode
{
    MR_MultiwayICPSamplingParameters_CascadeMode_Sequential = 0,
    /// separates objects on groups based on their index in ICPObjects (good if all objects about the size of all objects together)
    MR_MultiwayICPSamplingParameters_CascadeMode_AABBTreeBased = 1,
};

/// This class allows you to register many objects having similar parts
/// and known initial approximations of orientations/locations using
/// Iterative Closest Points (ICP) point-to-point or point-to-plane algorithms
/// \snippet cpp-samples/GlobalRegistration.cpp 0
/// Generated from class `MR::MultiwayICP`.
typedef struct MR_MultiwayICP MR_MultiwayICP;

/// Returns a pointer to a member variable of class `MR::ICPGroupPair` named `srcId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjVertId *MR_ICPGroupPair_Get_srcId(const MR_ICPGroupPair *_this);

/// Modifies a member variable of class `MR::ICPGroupPair` named `srcId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICPGroupPair_Set_srcId(MR_ICPGroupPair *_this, MR_ObjVertId value);

/// Returns a mutable pointer to a member variable of class `MR::ICPGroupPair` named `srcId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjVertId *MR_ICPGroupPair_GetMutable_srcId(MR_ICPGroupPair *_this);

/// Returns a pointer to a member variable of class `MR::ICPGroupPair` named `tgtClosestId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjVertId *MR_ICPGroupPair_Get_tgtClosestId(const MR_ICPGroupPair *_this);

/// Modifies a member variable of class `MR::ICPGroupPair` named `tgtClosestId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICPGroupPair_Set_tgtClosestId(MR_ICPGroupPair *_this, MR_ObjVertId value);

/// Returns a mutable pointer to a member variable of class `MR::ICPGroupPair` named `tgtClosestId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjVertId *MR_ICPGroupPair_GetMutable_tgtClosestId(MR_ICPGroupPair *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ICPGroupPair_Destroy()` to free it when you're done using it.
MRC_API MR_ICPGroupPair *MR_ICPGroupPair_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ICPGroupPair_DestroyArray()`.
/// Use `MR_ICPGroupPair_OffsetMutablePtr()` and `MR_ICPGroupPair_OffsetPtr()` to access the array elements.
MRC_API MR_ICPGroupPair *MR_ICPGroupPair_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ICPGroupPair *MR_ICPGroupPair_OffsetPtr(const MR_ICPGroupPair *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ICPGroupPair *MR_ICPGroupPair_OffsetMutablePtr(MR_ICPGroupPair *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ICPGroupPair` to its base class `MR::ICPPairData`.
/// This version is acting on mutable pointers.
MRC_API const MR_ICPPairData *MR_ICPGroupPair_UpcastTo_MR_ICPPairData(const MR_ICPGroupPair *object);

/// Upcasts an instance of `MR::ICPGroupPair` to its base class `MR::ICPPairData`.
MRC_API MR_ICPPairData *MR_ICPGroupPair_MutableUpcastTo_MR_ICPPairData(MR_ICPGroupPair *object);

/// Generated from a constructor of class `MR::ICPGroupPair`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ICPGroupPair_Destroy()` to free it when you're done using it.
MRC_API MR_ICPGroupPair *MR_ICPGroupPair_ConstructFromAnother(const MR_ICPGroupPair *_other);

/// Destroys a heap-allocated instance of `MR_ICPGroupPair`. Does nothing if the pointer is null.
MRC_API void MR_ICPGroupPair_Destroy(const MR_ICPGroupPair *_this);

/// Destroys a heap-allocated array of `MR_ICPGroupPair`. Does nothing if the pointer is null.
MRC_API void MR_ICPGroupPair_DestroyArray(const MR_ICPGroupPair *_this);

/// Generated from a method of class `MR::ICPGroupPair` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ICPGroupPair *MR_ICPGroupPair_AssignFromAnother(MR_ICPGroupPair *_this, const MR_ICPGroupPair *_other);

/// Returns a pointer to a member variable of class `MR::ICPGroupPairs` named `vec`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_ICPGroupPair *MR_ICPGroupPairs_Get_vec(const MR_ICPGroupPairs *_this);

/// Modifies a member variable of class `MR::ICPGroupPairs` named `vec`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICPGroupPairs_Set_vec(MR_ICPGroupPairs *_this, MR_PassBy value_pass_by, MR_std_vector_MR_ICPGroupPair *value);

/// Returns a mutable pointer to a member variable of class `MR::ICPGroupPairs` named `vec`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_ICPGroupPair *MR_ICPGroupPairs_GetMutable_vec(MR_ICPGroupPairs *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ICPGroupPairs_Destroy()` to free it when you're done using it.
MRC_API MR_ICPGroupPairs *MR_ICPGroupPairs_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ICPGroupPairs_DestroyArray()`.
/// Use `MR_ICPGroupPairs_OffsetMutablePtr()` and `MR_ICPGroupPairs_OffsetPtr()` to access the array elements.
MRC_API MR_ICPGroupPairs *MR_ICPGroupPairs_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ICPGroupPairs *MR_ICPGroupPairs_OffsetPtr(const MR_ICPGroupPairs *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ICPGroupPairs *MR_ICPGroupPairs_OffsetMutablePtr(MR_ICPGroupPairs *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ICPGroupPairs` to its base class `MR::IPointPairs`.
/// This version is acting on mutable pointers.
MRC_API const MR_IPointPairs *MR_ICPGroupPairs_UpcastTo_MR_IPointPairs(const MR_ICPGroupPairs *object);

/// Upcasts an instance of `MR::ICPGroupPairs` to its base class `MR::IPointPairs`.
MRC_API MR_IPointPairs *MR_ICPGroupPairs_MutableUpcastTo_MR_IPointPairs(MR_ICPGroupPairs *object);

/// Generated from a constructor of class `MR::ICPGroupPairs`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ICPGroupPairs_Destroy()` to free it when you're done using it.
MRC_API MR_ICPGroupPairs *MR_ICPGroupPairs_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ICPGroupPairs *_other);

/// Destroys a heap-allocated instance of `MR_ICPGroupPairs`. Does nothing if the pointer is null.
MRC_API void MR_ICPGroupPairs_Destroy(const MR_ICPGroupPairs *_this);

/// Destroys a heap-allocated array of `MR_ICPGroupPairs`. Does nothing if the pointer is null.
MRC_API void MR_ICPGroupPairs_DestroyArray(const MR_ICPGroupPairs *_this);

/// Generated from a method of class `MR::ICPGroupPairs` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ICPGroupPairs *MR_ICPGroupPairs_AssignFromAnother(MR_ICPGroupPairs *_this, MR_PassBy _other_pass_by, MR_ICPGroupPairs *_other);

/// Generated from a method of class `MR::ICPGroupPairs` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ICPPairData *MR_ICPGroupPairs_index_const(const MR_ICPGroupPairs *_this, MR_uint64_t idx);

/// Generated from a method of class `MR::ICPGroupPairs` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ICPPairData *MR_ICPGroupPairs_index(MR_ICPGroupPairs *_this, MR_uint64_t idx);

/// Generated from a method of class `MR::ICPGroupPairs` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ICPGroupPairs_size(const MR_ICPGroupPairs *_this);

/// in each pair updates the target data and performs basic filtering (activation)
/// Generated from function `MR::updateGroupPairs`.
/// Parameter `pairs` can not be null. It is a single object.
/// Parameter `objs` can not be null. It is a single object.
MRC_API void MR_updateGroupPairs(MR_ICPGroupPairs *pairs, const MR_Vector_MR_MeshOrPointsXf_MR_ObjId *objs, MR_PassBy srcProjector_pass_by, MR_std_function_void_from_const_MR_Vector3f_ref_MR_MeshOrPoints_ProjectionResult_ref_MR_ObjId_ref *srcProjector, MR_PassBy tgtProjector_pass_by, MR_std_function_void_from_const_MR_Vector3f_ref_MR_MeshOrPoints_ProjectionResult_ref_MR_ObjId_ref *tgtProjector, float cosThreshold, float distThresholdSq, bool mutualClosest);

/// Destroys a heap-allocated instance of `MR_IICPTreeIndexer`. Does nothing if the pointer is null.
MRC_API void MR_IICPTreeIndexer_Destroy(const MR_IICPTreeIndexer *_this);

/// Destroys a heap-allocated array of `MR_IICPTreeIndexer`. Does nothing if the pointer is null.
MRC_API void MR_IICPTreeIndexer_DestroyArray(const MR_IICPTreeIndexer *_this);

/// returns true if eI and eJ are from same node
/// Generated from a method of class `MR::IICPTreeIndexer` named `fromSameNode`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `eI` can not be null. It is a single object.
/// Parameter `eJ` can not be null. It is a single object.
MRC_API bool MR_IICPTreeIndexer_fromSameNode(const MR_IICPTreeIndexer *_this, int32_t l, const MR_Id_MR_ICPElemtTag *eI, const MR_Id_MR_ICPElemtTag *eJ);

/// returns bitset of leaves of given node
/// Generated from a method of class `MR::IICPTreeIndexer` named `getElementLeaves`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `eId` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_ObjBitSet *MR_IICPTreeIndexer_getElementLeaves(const MR_IICPTreeIndexer *_this, int32_t l, const MR_Id_MR_ICPElemtTag *eId);

/// valid for l > 0, returns bitset of subnodes that is associated with eId
/// should be valid for l == `getNumLayers`
/// Generated from a method of class `MR::IICPTreeIndexer` named `getElementNodes`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `eId` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedBitSet_MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_IICPTreeIndexer_getElementNodes(const MR_IICPTreeIndexer *_this, int32_t l, const MR_Id_MR_ICPElemtTag *eId);

/// l == 0 - objs_.size()
/// l == 1 - number of nodes one layer above objects
/// l == 2 - number of nodes one layer above nodes lvl1
/// ...
/// l == `getNumLayers` - 1
/// Generated from a method of class `MR::IICPTreeIndexer` named `getNumElements`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_IICPTreeIndexer_getNumElements(const MR_IICPTreeIndexer *_this, int32_t l);

/// Generated from a method of class `MR::IICPTreeIndexer` named `getNumLayers`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_IICPTreeIndexer_getNumLayers(const MR_IICPTreeIndexer *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IICPTreeIndexer *MR_IICPTreeIndexer_OffsetPtr(const MR_IICPTreeIndexer *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IICPTreeIndexer *MR_IICPTreeIndexer_OffsetMutablePtr(MR_IICPTreeIndexer *ptr, ptrdiff_t i);

/// sampling size of each object
/// Returns a pointer to a member variable of class `MR::MultiwayICPSamplingParameters` named `samplingVoxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MultiwayICPSamplingParameters_Get_samplingVoxelSize(const MR_MultiwayICPSamplingParameters *_this);

/// sampling size of each object
/// Modifies a member variable of class `MR::MultiwayICPSamplingParameters` named `samplingVoxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MultiwayICPSamplingParameters_Set_samplingVoxelSize(MR_MultiwayICPSamplingParameters *_this, float value);

/// sampling size of each object
/// Returns a mutable pointer to a member variable of class `MR::MultiwayICPSamplingParameters` named `samplingVoxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MultiwayICPSamplingParameters_GetMutable_samplingVoxelSize(MR_MultiwayICPSamplingParameters *_this);

/// size of maximum icp group to work with
/// if number of objects exceeds this value, icp is applied in cascade mode
/// Returns a pointer to a member variable of class `MR::MultiwayICPSamplingParameters` named `maxGroupSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_MultiwayICPSamplingParameters_Get_maxGroupSize(const MR_MultiwayICPSamplingParameters *_this);

/// size of maximum icp group to work with
/// if number of objects exceeds this value, icp is applied in cascade mode
/// Modifies a member variable of class `MR::MultiwayICPSamplingParameters` named `maxGroupSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MultiwayICPSamplingParameters_Set_maxGroupSize(MR_MultiwayICPSamplingParameters *_this, int32_t value);

/// size of maximum icp group to work with
/// if number of objects exceeds this value, icp is applied in cascade mode
/// Returns a mutable pointer to a member variable of class `MR::MultiwayICPSamplingParameters` named `maxGroupSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_MultiwayICPSamplingParameters_GetMutable_maxGroupSize(MR_MultiwayICPSamplingParameters *_this);

/// Returns a pointer to a member variable of class `MR::MultiwayICPSamplingParameters` named `cascadeMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MultiwayICPSamplingParameters_CascadeMode *MR_MultiwayICPSamplingParameters_Get_cascadeMode(const MR_MultiwayICPSamplingParameters *_this);

/// Modifies a member variable of class `MR::MultiwayICPSamplingParameters` named `cascadeMode`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MultiwayICPSamplingParameters_Set_cascadeMode(MR_MultiwayICPSamplingParameters *_this, MR_MultiwayICPSamplingParameters_CascadeMode value);

/// Returns a mutable pointer to a member variable of class `MR::MultiwayICPSamplingParameters` named `cascadeMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MultiwayICPSamplingParameters_CascadeMode *MR_MultiwayICPSamplingParameters_GetMutable_cascadeMode(MR_MultiwayICPSamplingParameters *_this);

/// callback for progress reports
/// Returns a pointer to a member variable of class `MR::MultiwayICPSamplingParameters` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_MultiwayICPSamplingParameters_Get_cb(const MR_MultiwayICPSamplingParameters *_this);

/// callback for progress reports
/// Modifies a member variable of class `MR::MultiwayICPSamplingParameters` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MultiwayICPSamplingParameters_Set_cb(MR_MultiwayICPSamplingParameters *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// callback for progress reports
/// Returns a mutable pointer to a member variable of class `MR::MultiwayICPSamplingParameters` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_MultiwayICPSamplingParameters_GetMutable_cb(MR_MultiwayICPSamplingParameters *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MultiwayICPSamplingParameters_Destroy()` to free it when you're done using it.
MRC_API MR_MultiwayICPSamplingParameters *MR_MultiwayICPSamplingParameters_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MultiwayICPSamplingParameters_DestroyArray()`.
/// Use `MR_MultiwayICPSamplingParameters_OffsetMutablePtr()` and `MR_MultiwayICPSamplingParameters_OffsetPtr()` to access the array elements.
MRC_API MR_MultiwayICPSamplingParameters *MR_MultiwayICPSamplingParameters_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MultiwayICPSamplingParameters` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MultiwayICPSamplingParameters_Destroy()` to free it when you're done using it.
MRC_API MR_MultiwayICPSamplingParameters *MR_MultiwayICPSamplingParameters_ConstructFrom(float samplingVoxelSize, int32_t maxGroupSize, MR_MultiwayICPSamplingParameters_CascadeMode cascadeMode, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MultiwayICPSamplingParameters *MR_MultiwayICPSamplingParameters_OffsetPtr(const MR_MultiwayICPSamplingParameters *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MultiwayICPSamplingParameters *MR_MultiwayICPSamplingParameters_OffsetMutablePtr(MR_MultiwayICPSamplingParameters *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MultiwayICPSamplingParameters`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MultiwayICPSamplingParameters_Destroy()` to free it when you're done using it.
MRC_API MR_MultiwayICPSamplingParameters *MR_MultiwayICPSamplingParameters_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MultiwayICPSamplingParameters *_other);

/// Destroys a heap-allocated instance of `MR_MultiwayICPSamplingParameters`. Does nothing if the pointer is null.
MRC_API void MR_MultiwayICPSamplingParameters_Destroy(const MR_MultiwayICPSamplingParameters *_this);

/// Destroys a heap-allocated array of `MR_MultiwayICPSamplingParameters`. Does nothing if the pointer is null.
MRC_API void MR_MultiwayICPSamplingParameters_DestroyArray(const MR_MultiwayICPSamplingParameters *_this);

/// Generated from a method of class `MR::MultiwayICPSamplingParameters` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MultiwayICPSamplingParameters *MR_MultiwayICPSamplingParameters_AssignFromAnother(MR_MultiwayICPSamplingParameters *_this, MR_PassBy _other_pass_by, MR_MultiwayICPSamplingParameters *_other);

/// Generated from a constructor of class `MR::MultiwayICP`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MultiwayICP_Destroy()` to free it when you're done using it.
MRC_API MR_MultiwayICP *MR_MultiwayICP_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MultiwayICP *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MultiwayICP *MR_MultiwayICP_OffsetPtr(const MR_MultiwayICP *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MultiwayICP *MR_MultiwayICP_OffsetMutablePtr(MR_MultiwayICP *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MultiwayICP`.
/// Parameter `objects` can not be null. It is a single object.
/// Parameter `samplingParams` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MultiwayICP_Destroy()` to free it when you're done using it.
MRC_API MR_MultiwayICP *MR_MultiwayICP_Construct(const MR_Vector_MR_MeshOrPointsXf_MR_ObjId *objects, const MR_MultiwayICPSamplingParameters *samplingParams);

/// Destroys a heap-allocated instance of `MR_MultiwayICP`. Does nothing if the pointer is null.
MRC_API void MR_MultiwayICP_Destroy(const MR_MultiwayICP *_this);

/// Destroys a heap-allocated array of `MR_MultiwayICP`. Does nothing if the pointer is null.
MRC_API void MR_MultiwayICP_DestroyArray(const MR_MultiwayICP *_this);

/// Generated from a method of class `MR::MultiwayICP` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MultiwayICP *MR_MultiwayICP_AssignFromAnother(MR_MultiwayICP *_this, MR_PassBy _other_pass_by, MR_MultiwayICP *_other);

/// runs ICP algorithm given input objects, transformations, and parameters;
/// \return adjusted transformations of all objects to reach registered state
/// the transformation of the last object is fixed and does not change here
/// Generated from a method of class `MR::MultiwayICP` named `calculateTransformations`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Vector_MR_AffineXf3f_MR_ObjId_Destroy()` to free it when you're done using it.
MRC_API MR_Vector_MR_AffineXf3f_MR_ObjId *MR_MultiwayICP_calculateTransformations(MR_MultiwayICP *_this, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// runs ICP algorithm given input objects, transformations, and parameters;
/// \return adjusted transformations of all objects to reach registered state
/// the transformation of the first object is fixed and does not change here
/// Generated from a method of class `MR::MultiwayICP` named `calculateTransformationsFixFirst`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Vector_MR_AffineXf3f_MR_ObjId_Destroy()` to free it when you're done using it.
MRC_API MR_Vector_MR_AffineXf3f_MR_ObjId *MR_MultiwayICP_calculateTransformationsFixFirst(MR_MultiwayICP *_this, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// select pairs with origin samples on all objects
/// Generated from a method of class `MR::MultiwayICP` named `resamplePoints`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `samplingParams` can not be null. It is a single object.
MRC_API bool MR_MultiwayICP_resamplePoints(MR_MultiwayICP *_this, const MR_MultiwayICPSamplingParameters *samplingParams);

/// in each pair updates the target data and performs basic filtering (activation)
/// in cascade mode only useful for stats update
/// Generated from a method of class `MR::MultiwayICP` named `updateAllPointPairs`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_MultiwayICP_updateAllPointPairs(MR_MultiwayICP *_this, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// tune algorithm params before run calculateTransformations()
/// Generated from a method of class `MR::MultiwayICP` named `setParams`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `prop` can not be null. It is a single object.
MRC_API void MR_MultiwayICP_setParams(MR_MultiwayICP *_this, const MR_ICPProperties *prop);

/// Generated from a method of class `MR::MultiwayICP` named `getParams`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ICPProperties *MR_MultiwayICP_getParams(const MR_MultiwayICP *_this);

/// computes root-mean-square deviation between points
/// or the standard deviation from given value if present
/// Generated from a method of class `MR::MultiwayICP` named `getMeanSqDistToPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` is optional. To keep it empty, pass a null pointer.
/// Parameter `value` defaults to empty in C++.
MRC_API float MR_MultiwayICP_getMeanSqDistToPoint(const MR_MultiwayICP *_this, const double *value);

/// computes root-mean-square deviation from points to target planes
/// or the standard deviation from given value if present
/// Generated from a method of class `MR::MultiwayICP` named `getMeanSqDistToPlane`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` is optional. To keep it empty, pass a null pointer.
/// Parameter `value` defaults to empty in C++.
MRC_API float MR_MultiwayICP_getMeanSqDistToPlane(const MR_MultiwayICP *_this, const double *value);

/// computes the number of samples able to form pairs
/// Generated from a method of class `MR::MultiwayICP` named `getNumSamples`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_MultiwayICP_getNumSamples(const MR_MultiwayICP *_this);

/// computes the number of active point pairs
/// Generated from a method of class `MR::MultiwayICP` named `getNumActivePairs`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_MultiwayICP_getNumActivePairs(const MR_MultiwayICP *_this);

/// sets callback that will be called for each iteration
/// Generated from a method of class `MR::MultiwayICP` named `setPerIterationCallback`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MultiwayICP_setPerIterationCallback(MR_MultiwayICP *_this, MR_PassBy callback_pass_by, MR_std_function_void_from_int32_t *callback);

/// if in independent equations mode - creates separate equation system for each object
/// otherwise creates single large equation system for all objects
/// Generated from a method of class `MR::MultiwayICP` named `devIndependentEquationsModeEnabled`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_MultiwayICP_devIndependentEquationsModeEnabled(const MR_MultiwayICP *_this);

/// Generated from a method of class `MR::MultiwayICP` named `devEnableIndependentEquationsMode`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MultiwayICP_devEnableIndependentEquationsMode(MR_MultiwayICP *_this, bool on);

/// returns status info string
/// Generated from a method of class `MR::MultiwayICP` named `getStatusInfo`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_MultiwayICP_getStatusInfo(const MR_MultiwayICP *_this);

/// returns all pairs of all layers
/// Generated from a method of class `MR::MultiwayICP` named `getPairsPerLayer`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector_MR_Vector_MR_Vector_MR_ICPGroupPairs_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_int32_t *MR_MultiwayICP_getPairsPerLayer(const MR_MultiwayICP *_this);

/// returns pointer to class that is used to navigate among layers of cascade registration
/// if nullptr - cascade mode is not used
/// Generated from a method of class `MR::MultiwayICP` named `getCascadeIndexer`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_IICPTreeIndexer *MR_MultiwayICP_getCascadeIndexer(const MR_MultiwayICP *_this);

#ifdef __cplusplus
} // extern "C"
#endif
