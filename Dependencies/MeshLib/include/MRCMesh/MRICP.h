// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRAffineXf.h>
#include <MRCMesh/MRICPEnums.h>
#include <MRCMesh/MRId.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_BitSet MR_BitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_ICPGroupPair MR_ICPGroupPair; // Defined in `#include <MRCMesh/MRMultiwayICP.h>`.
typedef struct MR_ICPGroupPairs MR_ICPGroupPairs; // Defined in `#include <MRCMesh/MRMultiwayICP.h>`.
typedef struct MR_MeshOrPoints MR_MeshOrPoints; // Defined in `#include <MRCMesh/MRMeshOrPoints.h>`.
typedef struct MR_MeshOrPointsXf MR_MeshOrPointsXf; // Defined in `#include <MRCMesh/MRMeshOrPoints.h>`.
typedef struct MR_PointToPlaneAligningTransform MR_PointToPlaneAligningTransform; // Defined in `#include <MRCMesh/MRPointToPlaneAligningTransform.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_MR_PointPair MR_std_vector_MR_PointPair; // Defined in `#include <MRCMisc/std_vector_MR_PointPair.h>`.


/// Generated from class `MR::ICPPairData`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::ICPGroupPair`
///     `MR::PointPair`
typedef struct MR_ICPPairData MR_ICPPairData;

/// Stores a pair of points: one samples on the source and the closest to it on the target
/// Generated from class `MR::PointPair`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::ICPPairData`
typedef struct MR_PointPair MR_PointPair;

/// Simple interface for pairs holder
/// Generated from class `MR::IPointPairs`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::ICPGroupPairs`
///     `MR::PointPairs`
typedef struct MR_IPointPairs MR_IPointPairs;

/// Generated from class `MR::PointPairs`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::IPointPairs`
typedef struct MR_PointPairs MR_PointPairs;

/// Generated from class `MR::NumSum`.
typedef struct MR_NumSum MR_NumSum;

/// Generated from class `MR::ICPProperties`.
typedef struct MR_ICPProperties MR_ICPProperties;

/// This class allows you to register two object with similar shape using
/// Iterative Closest Points (ICP) point-to-point or point-to-plane algorithms
/// \snippet cpp-examples/MeshICP.dox.cpp 0
/// Generated from class `MR::ICP`.
typedef struct MR_ICP MR_ICP;

/// coordinates of the source point after transforming in world space
/// Returns a pointer to a member variable of class `MR::ICPPairData` named `srcPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_ICPPairData_Get_srcPoint(const MR_ICPPairData *_this);

/// coordinates of the source point after transforming in world space
/// Modifies a member variable of class `MR::ICPPairData` named `srcPoint`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICPPairData_Set_srcPoint(MR_ICPPairData *_this, MR_Vector3f value);

/// coordinates of the source point after transforming in world space
/// Returns a mutable pointer to a member variable of class `MR::ICPPairData` named `srcPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_ICPPairData_GetMutable_srcPoint(MR_ICPPairData *_this);

/// normal in source point after transforming in world space
/// Returns a pointer to a member variable of class `MR::ICPPairData` named `srcNorm`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_ICPPairData_Get_srcNorm(const MR_ICPPairData *_this);

/// normal in source point after transforming in world space
/// Modifies a member variable of class `MR::ICPPairData` named `srcNorm`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICPPairData_Set_srcNorm(MR_ICPPairData *_this, MR_Vector3f value);

/// normal in source point after transforming in world space
/// Returns a mutable pointer to a member variable of class `MR::ICPPairData` named `srcNorm`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_ICPPairData_GetMutable_srcNorm(MR_ICPPairData *_this);

/// coordinates of the closest point on target after transforming in world space
/// Returns a pointer to a member variable of class `MR::ICPPairData` named `tgtPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_ICPPairData_Get_tgtPoint(const MR_ICPPairData *_this);

/// coordinates of the closest point on target after transforming in world space
/// Modifies a member variable of class `MR::ICPPairData` named `tgtPoint`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICPPairData_Set_tgtPoint(MR_ICPPairData *_this, MR_Vector3f value);

/// coordinates of the closest point on target after transforming in world space
/// Returns a mutable pointer to a member variable of class `MR::ICPPairData` named `tgtPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_ICPPairData_GetMutable_tgtPoint(MR_ICPPairData *_this);

/// normal in the target point after transforming in world space
/// Returns a pointer to a member variable of class `MR::ICPPairData` named `tgtNorm`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_ICPPairData_Get_tgtNorm(const MR_ICPPairData *_this);

/// normal in the target point after transforming in world space
/// Modifies a member variable of class `MR::ICPPairData` named `tgtNorm`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICPPairData_Set_tgtNorm(MR_ICPPairData *_this, MR_Vector3f value);

/// normal in the target point after transforming in world space
/// Returns a mutable pointer to a member variable of class `MR::ICPPairData` named `tgtNorm`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_ICPPairData_GetMutable_tgtNorm(MR_ICPPairData *_this);

/// squared distance between source and target points
/// Returns a pointer to a member variable of class `MR::ICPPairData` named `distSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ICPPairData_Get_distSq(const MR_ICPPairData *_this);

/// squared distance between source and target points
/// Modifies a member variable of class `MR::ICPPairData` named `distSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICPPairData_Set_distSq(MR_ICPPairData *_this, float value);

/// squared distance between source and target points
/// Returns a mutable pointer to a member variable of class `MR::ICPPairData` named `distSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ICPPairData_GetMutable_distSq(MR_ICPPairData *_this);

/// weight of the pair (to prioritize over other pairs)
/// Returns a pointer to a member variable of class `MR::ICPPairData` named `weight`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ICPPairData_Get_weight(const MR_ICPPairData *_this);

/// weight of the pair (to prioritize over other pairs)
/// Modifies a member variable of class `MR::ICPPairData` named `weight`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICPPairData_Set_weight(MR_ICPPairData *_this, float value);

/// weight of the pair (to prioritize over other pairs)
/// Returns a mutable pointer to a member variable of class `MR::ICPPairData` named `weight`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ICPPairData_GetMutable_weight(MR_ICPPairData *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ICPPairData_Destroy()` to free it when you're done using it.
MRC_API MR_ICPPairData *MR_ICPPairData_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ICPPairData_DestroyArray()`.
/// Use `MR_ICPPairData_OffsetMutablePtr()` and `MR_ICPPairData_OffsetPtr()` to access the array elements.
MRC_API MR_ICPPairData *MR_ICPPairData_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::ICPPairData` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ICPPairData_Destroy()` to free it when you're done using it.
MRC_API MR_ICPPairData *MR_ICPPairData_ConstructFrom(MR_Vector3f srcPoint, MR_Vector3f srcNorm, MR_Vector3f tgtPoint, MR_Vector3f tgtNorm, float distSq, float weight);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ICPPairData *MR_ICPPairData_OffsetPtr(const MR_ICPPairData *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ICPPairData *MR_ICPPairData_OffsetMutablePtr(MR_ICPPairData *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::ICPPairData` to a derived class `MR::ICPGroupPair`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ICPGroupPair *MR_ICPPairData_StaticDowncastTo_MR_ICPGroupPair(const MR_ICPPairData *object);

/// Downcasts an instance of `MR::ICPPairData` to a derived class `MR::ICPGroupPair`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ICPGroupPair *MR_ICPPairData_MutableStaticDowncastTo_MR_ICPGroupPair(MR_ICPPairData *object);

/// Downcasts an instance of `MR::ICPPairData` to a derived class `MR::PointPair`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_PointPair *MR_ICPPairData_StaticDowncastTo_MR_PointPair(const MR_ICPPairData *object);

/// Downcasts an instance of `MR::ICPPairData` to a derived class `MR::PointPair`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_PointPair *MR_ICPPairData_MutableStaticDowncastTo_MR_PointPair(MR_ICPPairData *object);

/// Generated from a constructor of class `MR::ICPPairData`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ICPPairData_Destroy()` to free it when you're done using it.
MRC_API MR_ICPPairData *MR_ICPPairData_ConstructFromAnother(const MR_ICPPairData *_other);

/// Destroys a heap-allocated instance of `MR_ICPPairData`. Does nothing if the pointer is null.
MRC_API void MR_ICPPairData_Destroy(const MR_ICPPairData *_this);

/// Destroys a heap-allocated array of `MR_ICPPairData`. Does nothing if the pointer is null.
MRC_API void MR_ICPPairData_DestroyArray(const MR_ICPPairData *_this);

/// Generated from a method of class `MR::ICPPairData` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ICPPairData *MR_ICPPairData_AssignFromAnother(MR_ICPPairData *_this, const MR_ICPPairData *_other);

/// Generated from function `MR::operator==`.
/// Parameter `_1` can not be null. It is a single object.
/// Parameter `_2` can not be null. It is a single object.
MRC_API bool MR_equal_MR_ICPPairData(const MR_ICPPairData *_1, const MR_ICPPairData *_2);

/// id of the source point
/// Returns a pointer to a member variable of class `MR::PointPair` named `srcVertId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_PointPair_Get_srcVertId(const MR_PointPair *_this);

/// id of the source point
/// Modifies a member variable of class `MR::PointPair` named `srcVertId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointPair_Set_srcVertId(MR_PointPair *_this, MR_VertId value);

/// id of the source point
/// Returns a mutable pointer to a member variable of class `MR::PointPair` named `srcVertId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_PointPair_GetMutable_srcVertId(MR_PointPair *_this);

/// for point clouds it is the closest vertex on target,
/// for meshes it is the closest vertex of the triangle with the closest point on target
/// Returns a pointer to a member variable of class `MR::PointPair` named `tgtCloseVert`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_PointPair_Get_tgtCloseVert(const MR_PointPair *_this);

/// for point clouds it is the closest vertex on target,
/// for meshes it is the closest vertex of the triangle with the closest point on target
/// Modifies a member variable of class `MR::PointPair` named `tgtCloseVert`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointPair_Set_tgtCloseVert(MR_PointPair *_this, MR_VertId value);

/// for point clouds it is the closest vertex on target,
/// for meshes it is the closest vertex of the triangle with the closest point on target
/// Returns a mutable pointer to a member variable of class `MR::PointPair` named `tgtCloseVert`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_PointPair_GetMutable_tgtCloseVert(MR_PointPair *_this);

/// cosine between normals in source and target points
/// Returns a pointer to a member variable of class `MR::PointPair` named `normalsAngleCos`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_PointPair_Get_normalsAngleCos(const MR_PointPair *_this);

/// cosine between normals in source and target points
/// Modifies a member variable of class `MR::PointPair` named `normalsAngleCos`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointPair_Set_normalsAngleCos(MR_PointPair *_this, float value);

/// cosine between normals in source and target points
/// Returns a mutable pointer to a member variable of class `MR::PointPair` named `normalsAngleCos`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_PointPair_GetMutable_normalsAngleCos(MR_PointPair *_this);

/// true if if the closest point on target is located on the boundary (only for meshes)
/// Returns a pointer to a member variable of class `MR::PointPair` named `tgtOnBd`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_PointPair_Get_tgtOnBd(const MR_PointPair *_this);

/// true if if the closest point on target is located on the boundary (only for meshes)
/// Modifies a member variable of class `MR::PointPair` named `tgtOnBd`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointPair_Set_tgtOnBd(MR_PointPair *_this, bool value);

/// true if if the closest point on target is located on the boundary (only for meshes)
/// Returns a mutable pointer to a member variable of class `MR::PointPair` named `tgtOnBd`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_PointPair_GetMutable_tgtOnBd(MR_PointPair *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointPair_Destroy()` to free it when you're done using it.
MRC_API MR_PointPair *MR_PointPair_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PointPair_DestroyArray()`.
/// Use `MR_PointPair_OffsetMutablePtr()` and `MR_PointPair_OffsetPtr()` to access the array elements.
MRC_API MR_PointPair *MR_PointPair_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PointPair *MR_PointPair_OffsetPtr(const MR_PointPair *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PointPair *MR_PointPair_OffsetMutablePtr(MR_PointPair *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::PointPair` to its base class `MR::ICPPairData`.
/// This version is acting on mutable pointers.
MRC_API const MR_ICPPairData *MR_PointPair_UpcastTo_MR_ICPPairData(const MR_PointPair *object);

/// Upcasts an instance of `MR::PointPair` to its base class `MR::ICPPairData`.
MRC_API MR_ICPPairData *MR_PointPair_MutableUpcastTo_MR_ICPPairData(MR_PointPair *object);

/// Generated from a constructor of class `MR::PointPair`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointPair_Destroy()` to free it when you're done using it.
MRC_API MR_PointPair *MR_PointPair_ConstructFromAnother(const MR_PointPair *_other);

/// Destroys a heap-allocated instance of `MR_PointPair`. Does nothing if the pointer is null.
MRC_API void MR_PointPair_Destroy(const MR_PointPair *_this);

/// Destroys a heap-allocated array of `MR_PointPair`. Does nothing if the pointer is null.
MRC_API void MR_PointPair_DestroyArray(const MR_PointPair *_this);

/// Generated from a method of class `MR::PointPair` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointPair *MR_PointPair_AssignFromAnother(MR_PointPair *_this, const MR_PointPair *_other);

/// Generated from function `MR::operator==`.
/// Parameter `_1` can not be null. It is a single object.
/// Parameter `_2` can not be null. It is a single object.
MRC_API bool MR_equal_MR_PointPair(const MR_PointPair *_1, const MR_PointPair *_2);

///< whether corresponding pair from vec must be considered during minimization
/// Returns a pointer to a member variable of class `MR::IPointPairs` named `active`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_BitSet *MR_IPointPairs_Get_active(const MR_IPointPairs *_this);

///< whether corresponding pair from vec must be considered during minimization
/// Modifies a member variable of class `MR::IPointPairs` named `active`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IPointPairs_Set_active(MR_IPointPairs *_this, MR_PassBy value_pass_by, MR_BitSet *value);

///< whether corresponding pair from vec must be considered during minimization
/// Returns a mutable pointer to a member variable of class `MR::IPointPairs` named `active`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BitSet *MR_IPointPairs_GetMutable_active(MR_IPointPairs *_this);

/// Destroys a heap-allocated instance of `MR_IPointPairs`. Does nothing if the pointer is null.
MRC_API void MR_IPointPairs_Destroy(const MR_IPointPairs *_this);

/// Destroys a heap-allocated array of `MR_IPointPairs`. Does nothing if the pointer is null.
MRC_API void MR_IPointPairs_DestroyArray(const MR_IPointPairs *_this);

/// Generated from a method of class `MR::IPointPairs` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ICPPairData *MR_IPointPairs_index_const(const MR_IPointPairs *_this, MR_uint64_t _1);

/// Generated from a method of class `MR::IPointPairs` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ICPPairData *MR_IPointPairs_index(MR_IPointPairs *_this, MR_uint64_t _1);

/// Generated from a method of class `MR::IPointPairs` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_IPointPairs_size(const MR_IPointPairs *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IPointPairs *MR_IPointPairs_OffsetPtr(const MR_IPointPairs *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IPointPairs *MR_IPointPairs_OffsetMutablePtr(MR_IPointPairs *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::IPointPairs` to a derived class `MR::ICPGroupPairs`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ICPGroupPairs *MR_IPointPairs_StaticDowncastTo_MR_ICPGroupPairs(const MR_IPointPairs *object);

/// Downcasts an instance of `MR::IPointPairs` to a derived class `MR::ICPGroupPairs`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ICPGroupPairs *MR_IPointPairs_MutableStaticDowncastTo_MR_ICPGroupPairs(MR_IPointPairs *object);

/// Downcasts an instance of `MR::IPointPairs` to a derived class `MR::ICPGroupPairs`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ICPGroupPairs *MR_IPointPairs_DynamicDowncastTo_MR_ICPGroupPairs(const MR_IPointPairs *object);

/// Downcasts an instance of `MR::IPointPairs` to a derived class `MR::ICPGroupPairs`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ICPGroupPairs *MR_IPointPairs_MutableDynamicDowncastTo_MR_ICPGroupPairs(MR_IPointPairs *object);

/// Downcasts an instance of `MR::IPointPairs` to a derived class `MR::ICPGroupPairs`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ICPGroupPairs *MR_IPointPairs_DynamicDowncastToOrFail_MR_ICPGroupPairs(const MR_IPointPairs *object);

/// Downcasts an instance of `MR::IPointPairs` to a derived class `MR::ICPGroupPairs`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ICPGroupPairs *MR_IPointPairs_MutableDynamicDowncastToOrFail_MR_ICPGroupPairs(MR_IPointPairs *object);

/// Downcasts an instance of `MR::IPointPairs` to a derived class `MR::PointPairs`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_PointPairs *MR_IPointPairs_StaticDowncastTo_MR_PointPairs(const MR_IPointPairs *object);

/// Downcasts an instance of `MR::IPointPairs` to a derived class `MR::PointPairs`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_PointPairs *MR_IPointPairs_MutableStaticDowncastTo_MR_PointPairs(MR_IPointPairs *object);

/// Downcasts an instance of `MR::IPointPairs` to a derived class `MR::PointPairs`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_PointPairs *MR_IPointPairs_DynamicDowncastTo_MR_PointPairs(const MR_IPointPairs *object);

/// Downcasts an instance of `MR::IPointPairs` to a derived class `MR::PointPairs`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_PointPairs *MR_IPointPairs_MutableDynamicDowncastTo_MR_PointPairs(MR_IPointPairs *object);

/// Downcasts an instance of `MR::IPointPairs` to a derived class `MR::PointPairs`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PointPairs *MR_IPointPairs_DynamicDowncastToOrFail_MR_PointPairs(const MR_IPointPairs *object);

/// Downcasts an instance of `MR::IPointPairs` to a derived class `MR::PointPairs`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointPairs *MR_IPointPairs_MutableDynamicDowncastToOrFail_MR_PointPairs(MR_IPointPairs *object);

///< vector of all point pairs both active and not
/// Returns a pointer to a member variable of class `MR::PointPairs` named `vec`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_PointPair *MR_PointPairs_Get_vec(const MR_PointPairs *_this);

///< vector of all point pairs both active and not
/// Modifies a member variable of class `MR::PointPairs` named `vec`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointPairs_Set_vec(MR_PointPairs *_this, MR_PassBy value_pass_by, MR_std_vector_MR_PointPair *value);

///< vector of all point pairs both active and not
/// Returns a mutable pointer to a member variable of class `MR::PointPairs` named `vec`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_PointPair *MR_PointPairs_GetMutable_vec(MR_PointPairs *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointPairs_Destroy()` to free it when you're done using it.
MRC_API MR_PointPairs *MR_PointPairs_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PointPairs_DestroyArray()`.
/// Use `MR_PointPairs_OffsetMutablePtr()` and `MR_PointPairs_OffsetPtr()` to access the array elements.
MRC_API MR_PointPairs *MR_PointPairs_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PointPairs *MR_PointPairs_OffsetPtr(const MR_PointPairs *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PointPairs *MR_PointPairs_OffsetMutablePtr(MR_PointPairs *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::PointPairs` to its base class `MR::IPointPairs`.
/// This version is acting on mutable pointers.
MRC_API const MR_IPointPairs *MR_PointPairs_UpcastTo_MR_IPointPairs(const MR_PointPairs *object);

/// Upcasts an instance of `MR::PointPairs` to its base class `MR::IPointPairs`.
MRC_API MR_IPointPairs *MR_PointPairs_MutableUpcastTo_MR_IPointPairs(MR_PointPairs *object);

/// Generated from a constructor of class `MR::PointPairs`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointPairs_Destroy()` to free it when you're done using it.
MRC_API MR_PointPairs *MR_PointPairs_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PointPairs *_other);

/// Destroys a heap-allocated instance of `MR_PointPairs`. Does nothing if the pointer is null.
MRC_API void MR_PointPairs_Destroy(const MR_PointPairs *_this);

/// Destroys a heap-allocated array of `MR_PointPairs`. Does nothing if the pointer is null.
MRC_API void MR_PointPairs_DestroyArray(const MR_PointPairs *_this);

/// Generated from a method of class `MR::PointPairs` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointPairs *MR_PointPairs_AssignFromAnother(MR_PointPairs *_this, MR_PassBy _other_pass_by, MR_PointPairs *_other);

/// Generated from a method of class `MR::PointPairs` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ICPPairData *MR_PointPairs_index_const(const MR_PointPairs *_this, MR_uint64_t idx);

/// Generated from a method of class `MR::PointPairs` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ICPPairData *MR_PointPairs_index(MR_PointPairs *_this, MR_uint64_t idx);

/// Generated from a method of class `MR::PointPairs` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_PointPairs_size(const MR_PointPairs *_this);

/// returns the number of samples able to form pairs
/// Generated from function `MR::getNumSamples`.
/// Parameter `pairs` can not be null. It is a single object.
MRC_API MR_uint64_t MR_getNumSamples(const MR_IPointPairs *pairs);

/// computes the number of active pairs
/// Generated from function `MR::getNumActivePairs`.
/// Parameter `pairs` can not be null. It is a single object.
MRC_API MR_uint64_t MR_getNumActivePairs(const MR_IPointPairs *pairs);

/// Returns a pointer to a member variable of class `MR::NumSum` named `num`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_NumSum_Get_num(const MR_NumSum *_this);

/// Modifies a member variable of class `MR::NumSum` named `num`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_NumSum_Set_num(MR_NumSum *_this, int32_t value);

/// Returns a mutable pointer to a member variable of class `MR::NumSum` named `num`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_NumSum_GetMutable_num(MR_NumSum *_this);

/// Returns a pointer to a member variable of class `MR::NumSum` named `sum`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_NumSum_Get_sum(const MR_NumSum *_this);

/// Modifies a member variable of class `MR::NumSum` named `sum`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_NumSum_Set_sum(MR_NumSum *_this, double value);

/// Returns a mutable pointer to a member variable of class `MR::NumSum` named `sum`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_NumSum_GetMutable_sum(MR_NumSum *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NumSum_Destroy()` to free it when you're done using it.
MRC_API MR_NumSum *MR_NumSum_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NumSum_DestroyArray()`.
/// Use `MR_NumSum_OffsetMutablePtr()` and `MR_NumSum_OffsetPtr()` to access the array elements.
MRC_API MR_NumSum *MR_NumSum_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::NumSum` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NumSum_Destroy()` to free it when you're done using it.
MRC_API MR_NumSum *MR_NumSum_ConstructFrom(int32_t num, double sum);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NumSum *MR_NumSum_OffsetPtr(const MR_NumSum *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NumSum *MR_NumSum_OffsetMutablePtr(MR_NumSum *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::NumSum`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NumSum_Destroy()` to free it when you're done using it.
MRC_API MR_NumSum *MR_NumSum_ConstructFromAnother(const MR_NumSum *_other);

/// Destroys a heap-allocated instance of `MR_NumSum`. Does nothing if the pointer is null.
MRC_API void MR_NumSum_Destroy(const MR_NumSum *_this);

/// Destroys a heap-allocated array of `MR_NumSum`. Does nothing if the pointer is null.
MRC_API void MR_NumSum_DestroyArray(const MR_NumSum *_this);

/// Generated from a method of class `MR::NumSum` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NumSum *MR_NumSum_AssignFromAnother(MR_NumSum *_this, const MR_NumSum *_other);

/// Generated from a method of class `MR::NumSum` named `rootMeanSqF`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_NumSum_rootMeanSqF(const MR_NumSum *_this);

/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NumSum_Destroy()` to free it when you're done using it.
MRC_API MR_NumSum *MR_add_MR_NumSum(const MR_NumSum *a, const MR_NumSum *b);

/// computes the number of active pairs and the sum of squared distances between points
/// or the difference between the squared distances between points and inaccuracy
/// Generated from function `MR::getSumSqDistToPoint`.
/// Parameter `pairs` can not be null. It is a single object.
/// Parameter `inaccuracy` is optional. To keep it empty, pass a null pointer.
/// Parameter `inaccuracy` defaults to empty in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NumSum_Destroy()` to free it when you're done using it.
MRC_API MR_NumSum *MR_getSumSqDistToPoint(const MR_IPointPairs *pairs, const double *inaccuracy);

/// computes the number of active pairs and the sum of squared deviation from points to target planes
/// or the difference between the squared distances between points to target planes and inaccuracy
/// Generated from function `MR::getSumSqDistToPlane`.
/// Parameter `pairs` can not be null. It is a single object.
/// Parameter `inaccuracy` is optional. To keep it empty, pass a null pointer.
/// Parameter `inaccuracy` defaults to empty in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NumSum_Destroy()` to free it when you're done using it.
MRC_API MR_NumSum *MR_getSumSqDistToPlane(const MR_IPointPairs *pairs, const double *inaccuracy);

/// computes root-mean-square deviation between points
/// Generated from function `MR::getMeanSqDistToPoint`.
/// Parameter `pairs` can not be null. It is a single object.
MRC_API float MR_getMeanSqDistToPoint(const MR_IPointPairs *pairs);

/// computes root-mean-square deviation from points to target planes
/// Generated from function `MR::getMeanSqDistToPlane`.
/// Parameter `pairs` can not be null. It is a single object.
MRC_API float MR_getMeanSqDistToPlane(const MR_IPointPairs *pairs);

/// returns status info string
/// Generated from function `MR::getICPStatusInfo`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_getICPStatusInfo(int32_t iterations, MR_ICPExitType exitType);

/// given prepared (p2pl) object, finds the best transformation from it of given type with given limitations on rotation angle and global scale
/// Generated from function `MR::getAligningXf`.
/// Parameter `p2pl` can not be null. It is a single object.
/// Parameter `fixedRotationAxis` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_getAligningXf(const MR_PointToPlaneAligningTransform *p2pl, MR_ICPMode mode, float angleLimit, float scaleLimit, const MR_Vector3f *fixedRotationAxis);

/// The method how to update transformation from point pairs
/// Returns a pointer to a member variable of class `MR::ICPProperties` named `method`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ICPMethod *MR_ICPProperties_Get_method(const MR_ICPProperties *_this);

/// The method how to update transformation from point pairs
/// Modifies a member variable of class `MR::ICPProperties` named `method`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICPProperties_Set_method(MR_ICPProperties *_this, MR_ICPMethod value);

/// The method how to update transformation from point pairs
/// Returns a mutable pointer to a member variable of class `MR::ICPProperties` named `method`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ICPMethod *MR_ICPProperties_GetMutable_method(MR_ICPProperties *_this);

// [radians]
/// Returns a pointer to a member variable of class `MR::ICPProperties` named `p2plAngleLimit`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ICPProperties_Get_p2plAngleLimit(const MR_ICPProperties *_this);

// [radians]
/// Modifies a member variable of class `MR::ICPProperties` named `p2plAngleLimit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICPProperties_Set_p2plAngleLimit(MR_ICPProperties *_this, float value);

// [radians]
/// Returns a mutable pointer to a member variable of class `MR::ICPProperties` named `p2plAngleLimit`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ICPProperties_GetMutable_p2plAngleLimit(MR_ICPProperties *_this);

/// Scaling during one iteration of PointToPlane will be limited by this value
/// Returns a pointer to a member variable of class `MR::ICPProperties` named `p2plScaleLimit`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ICPProperties_Get_p2plScaleLimit(const MR_ICPProperties *_this);

/// Scaling during one iteration of PointToPlane will be limited by this value
/// Modifies a member variable of class `MR::ICPProperties` named `p2plScaleLimit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICPProperties_Set_p2plScaleLimit(MR_ICPProperties *_this, float value);

/// Scaling during one iteration of PointToPlane will be limited by this value
/// Returns a mutable pointer to a member variable of class `MR::ICPProperties` named `p2plScaleLimit`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ICPProperties_GetMutable_p2plScaleLimit(MR_ICPProperties *_this);

// in [-1,1]
/// Returns a pointer to a member variable of class `MR::ICPProperties` named `cosThreshold`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ICPProperties_Get_cosThreshold(const MR_ICPProperties *_this);

// in [-1,1]
/// Modifies a member variable of class `MR::ICPProperties` named `cosThreshold`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICPProperties_Set_cosThreshold(MR_ICPProperties *_this, float value);

// in [-1,1]
/// Returns a mutable pointer to a member variable of class `MR::ICPProperties` named `cosThreshold`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ICPProperties_GetMutable_cosThreshold(MR_ICPProperties *_this);

// [distance^2]
/// Returns a pointer to a member variable of class `MR::ICPProperties` named `distThresholdSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ICPProperties_Get_distThresholdSq(const MR_ICPProperties *_this);

// [distance^2]
/// Modifies a member variable of class `MR::ICPProperties` named `distThresholdSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICPProperties_Set_distThresholdSq(MR_ICPProperties *_this, float value);

// [distance^2]
/// Returns a mutable pointer to a member variable of class `MR::ICPProperties` named `distThresholdSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ICPProperties_GetMutable_distThresholdSq(MR_ICPProperties *_this);

// dimensionless
/// Returns a pointer to a member variable of class `MR::ICPProperties` named `farDistFactor`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ICPProperties_Get_farDistFactor(const MR_ICPProperties *_this);

// dimensionless
/// Modifies a member variable of class `MR::ICPProperties` named `farDistFactor`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICPProperties_Set_farDistFactor(MR_ICPProperties *_this, float value);

// dimensionless
/// Returns a mutable pointer to a member variable of class `MR::ICPProperties` named `farDistFactor`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ICPProperties_GetMutable_farDistFactor(MR_ICPProperties *_this);

/// Finds only translation. Rotation part is identity matrix
/// Returns a pointer to a member variable of class `MR::ICPProperties` named `icpMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ICPMode *MR_ICPProperties_Get_icpMode(const MR_ICPProperties *_this);

/// Finds only translation. Rotation part is identity matrix
/// Modifies a member variable of class `MR::ICPProperties` named `icpMode`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICPProperties_Set_icpMode(MR_ICPProperties *_this, MR_ICPMode value);

/// Finds only translation. Rotation part is identity matrix
/// Returns a mutable pointer to a member variable of class `MR::ICPProperties` named `icpMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ICPMode *MR_ICPProperties_GetMutable_icpMode(MR_ICPProperties *_this);

/// If this vector is not zero then rotation is allowed relative to this axis only
/// Returns a pointer to a member variable of class `MR::ICPProperties` named `fixedRotationAxis`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_ICPProperties_Get_fixedRotationAxis(const MR_ICPProperties *_this);

/// If this vector is not zero then rotation is allowed relative to this axis only
/// Modifies a member variable of class `MR::ICPProperties` named `fixedRotationAxis`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICPProperties_Set_fixedRotationAxis(MR_ICPProperties *_this, MR_Vector3f value);

/// If this vector is not zero then rotation is allowed relative to this axis only
/// Returns a mutable pointer to a member variable of class `MR::ICPProperties` named `fixedRotationAxis`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_ICPProperties_GetMutable_fixedRotationAxis(MR_ICPProperties *_this);

/// maximum iterations
/// Returns a pointer to a member variable of class `MR::ICPProperties` named `iterLimit`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_ICPProperties_Get_iterLimit(const MR_ICPProperties *_this);

/// maximum iterations
/// Modifies a member variable of class `MR::ICPProperties` named `iterLimit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICPProperties_Set_iterLimit(MR_ICPProperties *_this, int32_t value);

/// maximum iterations
/// Returns a mutable pointer to a member variable of class `MR::ICPProperties` named `iterLimit`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_ICPProperties_GetMutable_iterLimit(MR_ICPProperties *_this);

/// maximum iterations without improvements
/// Returns a pointer to a member variable of class `MR::ICPProperties` named `badIterStopCount`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_ICPProperties_Get_badIterStopCount(const MR_ICPProperties *_this);

/// maximum iterations without improvements
/// Modifies a member variable of class `MR::ICPProperties` named `badIterStopCount`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICPProperties_Set_badIterStopCount(MR_ICPProperties *_this, int32_t value);

/// maximum iterations without improvements
/// Returns a mutable pointer to a member variable of class `MR::ICPProperties` named `badIterStopCount`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_ICPProperties_GetMutable_badIterStopCount(MR_ICPProperties *_this);

// [distance]
/// Returns a pointer to a member variable of class `MR::ICPProperties` named `exitVal`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ICPProperties_Get_exitVal(const MR_ICPProperties *_this);

// [distance]
/// Modifies a member variable of class `MR::ICPProperties` named `exitVal`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICPProperties_Set_exitVal(MR_ICPProperties *_this, float value);

// [distance]
/// Returns a mutable pointer to a member variable of class `MR::ICPProperties` named `exitVal`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ICPProperties_GetMutable_exitVal(MR_ICPProperties *_this);

/// a pair of points is formed only if both points in the pair are mutually closest (reciprocity test passed)
/// Returns a pointer to a member variable of class `MR::ICPProperties` named `mutualClosest`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_ICPProperties_Get_mutualClosest(const MR_ICPProperties *_this);

/// a pair of points is formed only if both points in the pair are mutually closest (reciprocity test passed)
/// Modifies a member variable of class `MR::ICPProperties` named `mutualClosest`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICPProperties_Set_mutualClosest(MR_ICPProperties *_this, bool value);

/// a pair of points is formed only if both points in the pair are mutually closest (reciprocity test passed)
/// Returns a mutable pointer to a member variable of class `MR::ICPProperties` named `mutualClosest`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_ICPProperties_GetMutable_mutualClosest(MR_ICPProperties *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ICPProperties_Destroy()` to free it when you're done using it.
MRC_API MR_ICPProperties *MR_ICPProperties_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ICPProperties_DestroyArray()`.
/// Use `MR_ICPProperties_OffsetMutablePtr()` and `MR_ICPProperties_OffsetPtr()` to access the array elements.
MRC_API MR_ICPProperties *MR_ICPProperties_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::ICPProperties` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ICPProperties_Destroy()` to free it when you're done using it.
MRC_API MR_ICPProperties *MR_ICPProperties_ConstructFrom(MR_ICPMethod method, float p2plAngleLimit, float p2plScaleLimit, float cosThreshold, float distThresholdSq, float farDistFactor, MR_ICPMode icpMode, MR_Vector3f fixedRotationAxis, int32_t iterLimit, int32_t badIterStopCount, float exitVal, bool mutualClosest);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ICPProperties *MR_ICPProperties_OffsetPtr(const MR_ICPProperties *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ICPProperties *MR_ICPProperties_OffsetMutablePtr(MR_ICPProperties *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ICPProperties`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ICPProperties_Destroy()` to free it when you're done using it.
MRC_API MR_ICPProperties *MR_ICPProperties_ConstructFromAnother(const MR_ICPProperties *_other);

/// Destroys a heap-allocated instance of `MR_ICPProperties`. Does nothing if the pointer is null.
MRC_API void MR_ICPProperties_Destroy(const MR_ICPProperties *_this);

/// Destroys a heap-allocated array of `MR_ICPProperties`. Does nothing if the pointer is null.
MRC_API void MR_ICPProperties_DestroyArray(const MR_ICPProperties *_this);

/// Generated from a method of class `MR::ICPProperties` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ICPProperties *MR_ICPProperties_AssignFromAnother(MR_ICPProperties *_this, const MR_ICPProperties *_other);

/// reset active bit if pair distance is further than maxDistSq
/// Generated from function `MR::deactivateFarPairs`.
/// Parameter `pairs` can not be null. It is a single object.
MRC_API MR_uint64_t MR_deactivateFarPairs(MR_IPointPairs *pairs, float maxDistSq);

/// in each pair updates the target data and performs basic filtering (activation)
/// Generated from function `MR::updatePointPairs`.
/// Parameter `pairs` can not be null. It is a single object.
/// Parameter `src` can not be null. It is a single object.
/// Parameter `tgt` can not be null. It is a single object.
MRC_API void MR_updatePointPairs(MR_PointPairs *pairs, const MR_MeshOrPointsXf *src, const MR_MeshOrPointsXf *tgt, float cosThreshold, float distThresholdSq, bool mutualClosest);

/// Generated from a constructor of class `MR::ICP`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ICP_Destroy()` to free it when you're done using it.
MRC_API MR_ICP *MR_ICP_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ICP *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ICP *MR_ICP_OffsetPtr(const MR_ICP *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ICP *MR_ICP_OffsetMutablePtr(MR_ICP *ptr, ptrdiff_t i);

/// Constructs ICP framework with given sample points on both objects
/// \param flt floating object
/// \param ref reference object
/// \param fltXf transformation from floating object space to global space
/// \param refXf transformation from reference object space to global space
/// \param fltSamples samples on floating object to find projections on the reference object during the algorithm
/// \param refSamples samples on reference object to find projections on the floating object during the algorithm
/// Generated from a constructor of class `MR::ICP`.
/// Parameter `flt` can not be null. It is a single object.
/// Parameter `ref` can not be null. It is a single object.
/// Parameter `fltXf` can not be null. It is a single object.
/// Parameter `refXf` can not be null. It is a single object.
/// Parameter `fltSamples` is a single object.
/// Parameter `fltSamples` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `refSamples` is a single object.
/// Parameter `refSamples` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ICP_Destroy()` to free it when you're done using it.
MRC_API MR_ICP *MR_ICP_Construct_6(const MR_MeshOrPoints *flt, const MR_MeshOrPoints *ref, const MR_AffineXf3f *fltXf, const MR_AffineXf3f *refXf, const MR_VertBitSet *fltSamples, const MR_VertBitSet *refSamples);

/// Generated from a constructor of class `MR::ICP`.
/// Parameter `flt` can not be null. It is a single object.
/// Parameter `ref` can not be null. It is a single object.
/// Parameter `fltSamples` is a single object.
/// Parameter `fltSamples` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `refSamples` is a single object.
/// Parameter `refSamples` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ICP_Destroy()` to free it when you're done using it.
MRC_API MR_ICP *MR_ICP_Construct_4(const MR_MeshOrPointsXf *flt, const MR_MeshOrPointsXf *ref, const MR_VertBitSet *fltSamples, const MR_VertBitSet *refSamples);

/// Constructs ICP framework with automatic points sampling on both objects
/// \param flt floating object
/// \param ref reference object
/// \param fltXf transformation from floating object space to global space
/// \param refXf transformation from reference object space to global space
/// \param samplingVoxelSize approximate distance between samples on each of two objects
/// Generated from a constructor of class `MR::ICP`.
/// Parameter `flt` can not be null. It is a single object.
/// Parameter `ref` can not be null. It is a single object.
/// Parameter `fltXf` can not be null. It is a single object.
/// Parameter `refXf` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ICP_Destroy()` to free it when you're done using it.
MRC_API MR_ICP *MR_ICP_Construct_5(const MR_MeshOrPoints *flt, const MR_MeshOrPoints *ref, const MR_AffineXf3f *fltXf, const MR_AffineXf3f *refXf, float samplingVoxelSize);

/// Generated from a constructor of class `MR::ICP`.
/// Parameter `flt` can not be null. It is a single object.
/// Parameter `ref` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ICP_Destroy()` to free it when you're done using it.
MRC_API MR_ICP *MR_ICP_Construct_3(const MR_MeshOrPointsXf *flt, const MR_MeshOrPointsXf *ref, float samplingVoxelSize);

/// Destroys a heap-allocated instance of `MR_ICP`. Does nothing if the pointer is null.
MRC_API void MR_ICP_Destroy(const MR_ICP *_this);

/// Destroys a heap-allocated array of `MR_ICP`. Does nothing if the pointer is null.
MRC_API void MR_ICP_DestroyArray(const MR_ICP *_this);

/// Generated from a method of class `MR::ICP` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ICP *MR_ICP_AssignFromAnother(MR_ICP *_this, MR_PassBy _other_pass_by, MR_ICP *_other);

/// tune algorithm params before run calculateTransformation()
/// Generated from a method of class `MR::ICP` named `setParams`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `prop` can not be null. It is a single object.
MRC_API void MR_ICP_setParams(MR_ICP *_this, const MR_ICPProperties *prop);

/// Generated from a method of class `MR::ICP` named `setCosineLimit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICP_setCosineLimit(MR_ICP *_this, float cos);

/// Generated from a method of class `MR::ICP` named `setDistanceLimit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICP_setDistanceLimit(MR_ICP *_this, float dist);

/// Generated from a method of class `MR::ICP` named `setBadIterCount`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICP_setBadIterCount(MR_ICP *_this, int32_t iter);

/// Generated from a method of class `MR::ICP` named `setFarDistFactor`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICP_setFarDistFactor(MR_ICP *_this, float factor);

/// select pairs with origin samples on floating object
/// Generated from a method of class `MR::ICP` named `setFltSamples`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `fltSamples` can not be null. It is a single object.
MRC_API void MR_ICP_setFltSamples(MR_ICP *_this, const MR_VertBitSet *fltSamples);

/// Generated from a method of class `MR::ICP` named `sampleFltPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICP_sampleFltPoints(MR_ICP *_this, float samplingVoxelSize);

/// select pairs with origin samples on reference object
/// Generated from a method of class `MR::ICP` named `setRefSamples`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `refSamples` can not be null. It is a single object.
MRC_API void MR_ICP_setRefSamples(MR_ICP *_this, const MR_VertBitSet *refSamples);

/// Generated from a method of class `MR::ICP` named `sampleRefPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICP_sampleRefPoints(MR_ICP *_this, float samplingVoxelSize);

/// select pairs with origin samples on both objects
/// Generated from a method of class `MR::ICP` named `samplePoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICP_samplePoints(MR_ICP *_this, float samplingVoxelSize);

/// sets to-world transformations both for floating and reference objects
/// Generated from a method of class `MR::ICP` named `setXfs`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `fltXf` can not be null. It is a single object.
/// Parameter `refXf` can not be null. It is a single object.
MRC_API void MR_ICP_setXfs(MR_ICP *_this, const MR_AffineXf3f *fltXf, const MR_AffineXf3f *refXf);

/// sets to-world transformation for the floating object
/// Generated from a method of class `MR::ICP` named `setFloatXf`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `fltXf` can not be null. It is a single object.
MRC_API void MR_ICP_setFloatXf(MR_ICP *_this, const MR_AffineXf3f *fltXf);

/// automatically selects initial transformation for the floating object
/// based on covariance matrices of both floating and reference objects;
/// applies the transformation to the floating object and returns it
/// Generated from a method of class `MR::ICP` named `autoSelectFloatXf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_ICP_autoSelectFloatXf(MR_ICP *_this);

/// recompute point pairs after manual change of transformations or parameters
/// Generated from a method of class `MR::ICP` named `updatePointPairs`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ICP_updatePointPairs(MR_ICP *_this);

/// Generated from a method of class `MR::ICP` named `getParams`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ICPProperties *MR_ICP_getParams(const MR_ICP *_this);

/// Generated from a method of class `MR::ICP` named `getStatusInfo`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ICP_getStatusInfo(const MR_ICP *_this);

/// computes the number of samples able to form pairs
/// Generated from a method of class `MR::ICP` named `getNumSamples`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ICP_getNumSamples(const MR_ICP *_this);

/// computes the number of active point pairs
/// Generated from a method of class `MR::ICP` named `getNumActivePairs`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ICP_getNumActivePairs(const MR_ICP *_this);

/// computes root-mean-square deviation between points
/// Generated from a method of class `MR::ICP` named `getMeanSqDistToPoint`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_ICP_getMeanSqDistToPoint(const MR_ICP *_this);

/// computes root-mean-square deviation from points to target planes
/// Generated from a method of class `MR::ICP` named `getMeanSqDistToPlane`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_ICP_getMeanSqDistToPlane(const MR_ICP *_this);

/// returns current pairs formed from samples on floating object and projections on reference object
/// Generated from a method of class `MR::ICP` named `getFlt2RefPairs`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PointPairs *MR_ICP_getFlt2RefPairs(const MR_ICP *_this);

/// returns current pairs formed from samples on reference object and projections on floating object
/// Generated from a method of class `MR::ICP` named `getRef2FltPairs`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PointPairs *MR_ICP_getRef2FltPairs(const MR_ICP *_this);

/// runs ICP algorithm given input objects, transformations, and parameters;
/// \return adjusted transformation of the floating object to match reference object
/// Generated from a method of class `MR::ICP` named `calculateTransformation`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_ICP_calculateTransformation(MR_ICP *_this);

#ifdef __cplusplus
} // extern "C"
#endif
