// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Plane3f MR_Plane3f; // Defined in `#include <MRCMesh/MRPlane3.h>`.
typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertMap MR_VertMap; // Defined in `#include <MRCMesh/MRVector.h>`.


/// Generated from class `MR::DividePointCloudOptionalOutput`.
typedef struct MR_DividePointCloudOptionalOutput MR_DividePointCloudOptionalOutput;

/// \return All vertices on the positive side of the plane
/// \param pc Input point cloud that will be cut by the plane
/// \param plane Input plane to cut point cloud with
/// Generated from function `MR::findHalfSpacePoints`.
/// Parameter `pc` can not be null. It is a single object.
/// Parameter `plane` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_findHalfSpacePoints(const MR_PointCloud *pc, const MR_Plane3f *plane);

/// optional out map from input points to output
/// Returns a pointer to a member variable of class `MR::DividePointCloudOptionalOutput` named `outVmap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertMap *const *MR_DividePointCloudOptionalOutput_Get_outVmap(const MR_DividePointCloudOptionalOutput *_this);

/// optional out map from input points to output
/// Modifies a member variable of class `MR::DividePointCloudOptionalOutput` named `outVmap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DividePointCloudOptionalOutput_Set_outVmap(MR_DividePointCloudOptionalOutput *_this, MR_VertMap *value);

/// optional out map from input points to output
/// Returns a mutable pointer to a member variable of class `MR::DividePointCloudOptionalOutput` named `outVmap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertMap **MR_DividePointCloudOptionalOutput_GetMutable_outVmap(MR_DividePointCloudOptionalOutput *_this);

/// optional out other part of the point cloud
/// Returns a pointer to a member variable of class `MR::DividePointCloudOptionalOutput` named `otherPart`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointCloud *const *MR_DividePointCloudOptionalOutput_Get_otherPart(const MR_DividePointCloudOptionalOutput *_this);

/// optional out other part of the point cloud
/// Modifies a member variable of class `MR::DividePointCloudOptionalOutput` named `otherPart`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DividePointCloudOptionalOutput_Set_otherPart(MR_DividePointCloudOptionalOutput *_this, MR_PointCloud *value);

/// optional out other part of the point cloud
/// Returns a mutable pointer to a member variable of class `MR::DividePointCloudOptionalOutput` named `otherPart`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointCloud **MR_DividePointCloudOptionalOutput_GetMutable_otherPart(MR_DividePointCloudOptionalOutput *_this);

/// optional out map from input points to other part output
/// Returns a pointer to a member variable of class `MR::DividePointCloudOptionalOutput` named `otherOutVmap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertMap *const *MR_DividePointCloudOptionalOutput_Get_otherOutVmap(const MR_DividePointCloudOptionalOutput *_this);

/// optional out map from input points to other part output
/// Modifies a member variable of class `MR::DividePointCloudOptionalOutput` named `otherOutVmap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DividePointCloudOptionalOutput_Set_otherOutVmap(MR_DividePointCloudOptionalOutput *_this, MR_VertMap *value);

/// optional out map from input points to other part output
/// Returns a mutable pointer to a member variable of class `MR::DividePointCloudOptionalOutput` named `otherOutVmap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertMap **MR_DividePointCloudOptionalOutput_GetMutable_otherOutVmap(MR_DividePointCloudOptionalOutput *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DividePointCloudOptionalOutput_Destroy()` to free it when you're done using it.
MRC_API MR_DividePointCloudOptionalOutput *MR_DividePointCloudOptionalOutput_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_DividePointCloudOptionalOutput_DestroyArray()`.
/// Use `MR_DividePointCloudOptionalOutput_OffsetMutablePtr()` and `MR_DividePointCloudOptionalOutput_OffsetPtr()` to access the array elements.
MRC_API MR_DividePointCloudOptionalOutput *MR_DividePointCloudOptionalOutput_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::DividePointCloudOptionalOutput` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DividePointCloudOptionalOutput_Destroy()` to free it when you're done using it.
MRC_API MR_DividePointCloudOptionalOutput *MR_DividePointCloudOptionalOutput_ConstructFrom(MR_VertMap *outVmap, MR_PointCloud *otherPart, MR_VertMap *otherOutVmap);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_DividePointCloudOptionalOutput *MR_DividePointCloudOptionalOutput_OffsetPtr(const MR_DividePointCloudOptionalOutput *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_DividePointCloudOptionalOutput *MR_DividePointCloudOptionalOutput_OffsetMutablePtr(MR_DividePointCloudOptionalOutput *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::DividePointCloudOptionalOutput`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DividePointCloudOptionalOutput_Destroy()` to free it when you're done using it.
MRC_API MR_DividePointCloudOptionalOutput *MR_DividePointCloudOptionalOutput_ConstructFromAnother(const MR_DividePointCloudOptionalOutput *_other);

/// Destroys a heap-allocated instance of `MR_DividePointCloudOptionalOutput`. Does nothing if the pointer is null.
MRC_API void MR_DividePointCloudOptionalOutput_Destroy(const MR_DividePointCloudOptionalOutput *_this);

/// Destroys a heap-allocated array of `MR_DividePointCloudOptionalOutput`. Does nothing if the pointer is null.
MRC_API void MR_DividePointCloudOptionalOutput_DestroyArray(const MR_DividePointCloudOptionalOutput *_this);

/// Generated from a method of class `MR::DividePointCloudOptionalOutput` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DividePointCloudOptionalOutput *MR_DividePointCloudOptionalOutput_AssignFromAnother(MR_DividePointCloudOptionalOutput *_this, const MR_DividePointCloudOptionalOutput *_other);

/// This function cuts a point cloud with a plane, leaving only the part of mesh that lay in positive direction of normal
/// \return Point cloud object with vertices on the positive side of the plane
/// \param pc Input point cloud that will be cut by the plane
/// \param plane Input plane to cut point cloud with
/// \param optOut optional output of the function
/// Generated from function `MR::divideWithPlane`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `plane` can not be null. It is a single object.
/// Parameter `optOut` is a single object.
/// Parameter `optOut` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointCloud_Destroy()` to free it when you're done using it.
MRC_API MR_PointCloud *MR_divideWithPlane(const MR_PointCloud *points, const MR_Plane3f *plane, const MR_DividePointCloudOptionalOutput *optOut);

#ifdef __cplusplus
} // extern "C"
#endif
