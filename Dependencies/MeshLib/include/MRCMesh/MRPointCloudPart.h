// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.


/// represents full point cloud (if region is nullptr) or some portion of point cloud (if region pointer is valid)
/// Generated from class `MR::PointCloudPart`.
typedef struct MR_PointCloudPart MR_PointCloudPart;

/// Returns a pointer to a member variable of class `MR::PointCloudPart` named `cloud`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PointCloud *MR_PointCloudPart_Get_cloud(const MR_PointCloudPart *_this);

// nullptr here means all valid points of point cloud
/// Returns a pointer to a member variable of class `MR::PointCloudPart` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *const *MR_PointCloudPart_Get_region(const MR_PointCloudPart *_this);

// nullptr here means all valid points of point cloud
/// Modifies a member variable of class `MR::PointCloudPart` named `region`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointCloudPart_Set_region(MR_PointCloudPart *_this, const MR_VertBitSet *value);

// nullptr here means all valid points of point cloud
/// Returns a mutable pointer to a member variable of class `MR::PointCloudPart` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet **MR_PointCloudPart_GetMutable_region(MR_PointCloudPart *_this);

/// Generated from a constructor of class `MR::PointCloudPart`.
/// Parameter `c` can not be null. It is a single object.
/// Parameter `bs` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointCloudPart_Destroy()` to free it when you're done using it.
MRC_API MR_PointCloudPart *MR_PointCloudPart_Construct(const MR_PointCloud *c, const MR_VertBitSet *bs);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PointCloudPart *MR_PointCloudPart_OffsetPtr(const MR_PointCloudPart *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PointCloudPart *MR_PointCloudPart_OffsetMutablePtr(MR_PointCloudPart *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_PointCloudPart`. Does nothing if the pointer is null.
MRC_API void MR_PointCloudPart_Destroy(const MR_PointCloudPart *_this);

/// Destroys a heap-allocated array of `MR_PointCloudPart`. Does nothing if the pointer is null.
MRC_API void MR_PointCloudPart_DestroyArray(const MR_PointCloudPart *_this);

#ifdef __cplusplus
} // extern "C"
#endif
