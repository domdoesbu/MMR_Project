// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_UnionFind_MR_VertId MR_UnionFind_MR_VertId; // Defined in `#include <MRCMesh/MRUnionFind.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_expected_MR_UnionFind_MR_VertId_std_string MR_expected_MR_UnionFind_MR_VertId_std_string; // Defined in `#include <MRCMisc/expected_MR_UnionFind_MR_VertId_std_string.h>`.
typedef struct MR_expected_MR_VertBitSet_std_string MR_expected_MR_VertBitSet_std_string; // Defined in `#include <MRCMisc/expected_MR_VertBitSet_std_string.h>`.
typedef struct MR_expected_std_pair_std_vector_MR_VertBitSet_int32_t_std_string MR_expected_std_pair_std_vector_MR_VertBitSet_int32_t_std_string; // Defined in `#include <MRCMisc/expected_std_pair_std_vector_MR_VertBitSet_int32_t_std_string.h>`.
typedef struct MR_expected_std_vector_MR_VertBitSet_std_string MR_expected_std_vector_MR_VertBitSet_std_string; // Defined in `#include <MRCMisc/expected_std_vector_MR_VertBitSet_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


/// returns the union of point cloud components containing at least minSize points and connected by a distance no greater than \param maxDist
/// \param minSize must be more than 1
/// Generated from function `MR::PointCloudComponents::getLargeComponentsUnion`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `pc` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VertBitSet_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VertBitSet_std_string *MR_PointCloudComponents_getLargeComponentsUnion_MR_PointCloud(const MR_PointCloud *pointCloud, float maxDist, int32_t minSize, MR_PassBy pc_pass_by, MR_std_function_bool_from_float *pc);

/// returns the union of vertices components containing at least minSize points
/// \param unionStructs prepared point union structure
/// \note have side effect: call unionStructs.roots() that change unionStructs
/// Generated from function `MR::PointCloudComponents::getLargeComponentsUnion`.
/// Parameter `unionStructs` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `pc` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VertBitSet_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VertBitSet_std_string *MR_PointCloudComponents_getLargeComponentsUnion_MR_UnionFind_MR_VertId(MR_UnionFind_MR_VertId *unionStructs, const MR_VertBitSet *region, int32_t minSize, MR_PassBy pc_pass_by, MR_std_function_bool_from_float *pc);

/// returns vector of point cloud components containing at least minSize points and connected by a distance no greater than \param maxDist
/// \param minSize must be more than 1
/// Generated from function `MR::PointCloudComponents::getLargeComponents`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `pc` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_MR_VertBitSet_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_MR_VertBitSet_std_string *MR_PointCloudComponents_getLargeComponents(const MR_PointCloud *pointCloud, float maxDist, int32_t minSize, MR_PassBy pc_pass_by, MR_std_function_bool_from_float *pc);

/// gets all components of point cloud connected by a distance no greater than \param maxDist
/// \detail if components number more than the maxComponentCount, they will be combined into groups of the same size 
/// \note be careful, if point cloud is large enough and has many components, the memory overflow will occur
/// \param maxComponentCount should be more then 1
/// \return pair components bitsets vector and number components in one group if components number more than maxComponentCount
/// Generated from function `MR::PointCloudComponents::getAllComponents`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `maxComponentCount` has a default argument: `2147483647`, pass a null pointer to use it.
/// Parameter `pc` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_pair_std_vector_MR_VertBitSet_int32_t_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_pair_std_vector_MR_VertBitSet_int32_t_std_string *MR_PointCloudComponents_getAllComponents(const MR_PointCloud *pointCloud, float maxDist, const int32_t *maxComponentCount, MR_PassBy pc_pass_by, MR_std_function_bool_from_float *pc);

/// gets union - find structure for vertices in \param region connected by a distance no greater than \param maxDist 
/// Generated from function `MR::PointCloudComponents::getUnionFindStructureVerts`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `pc` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_UnionFind_MR_VertId_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_UnionFind_MR_VertId_std_string *MR_PointCloudComponents_getUnionFindStructureVerts(const MR_PointCloud *pointCloud, float maxDist, const MR_VertBitSet *region, MR_PassBy pc_pass_by, MR_std_function_bool_from_float *pc);

#ifdef __cplusplus
} // extern "C"
#endif
