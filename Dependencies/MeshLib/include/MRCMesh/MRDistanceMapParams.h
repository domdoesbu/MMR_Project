// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRAffineXf.h>
#include <MRCMesh/MRVector2.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Box2f MR_Box2f; // Defined in `#include <MRCMesh/MRBox.h>`.
typedef struct MR_Matrix3f MR_Matrix3f; // Defined in `#include <MRCMesh/MRMatrix3.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_vector_std_vector_MR_Vector2f MR_std_vector_std_vector_MR_Vector2f; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_Vector2f.h>`.


/// Generated from class `MR::MeshToDistanceMapParams`.
typedef struct MR_MeshToDistanceMapParams MR_MeshToDistanceMapParams;

/// Structure with parameters to generate DistanceMap by Contours
/// Generated from class `MR::ContourToDistanceMapParams`.
typedef struct MR_ContourToDistanceMapParams MR_ContourToDistanceMapParams;

/// This structure store data to transform distance map to world coordinates
/// Generated from class `MR::DistanceMapToWorld`.
typedef struct MR_DistanceMapToWorld MR_DistanceMapToWorld;

/// settings for loading distance maps from external formats
/// Generated from class `MR::DistanceMapLoadSettings`.
typedef struct MR_DistanceMapLoadSettings MR_DistanceMapLoadSettings;

/// determines how to save distance maps
/// Generated from class `MR::DistanceMapSaveSettings`.
typedef struct MR_DistanceMapSaveSettings MR_DistanceMapSaveSettings;

///< Cartesian range vector between distance map borders in X direction
/// Returns a pointer to a member variable of class `MR::MeshToDistanceMapParams` named `xRange`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_MeshToDistanceMapParams_Get_xRange(const MR_MeshToDistanceMapParams *_this);

///< Cartesian range vector between distance map borders in X direction
/// Modifies a member variable of class `MR::MeshToDistanceMapParams` named `xRange`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshToDistanceMapParams_Set_xRange(MR_MeshToDistanceMapParams *_this, MR_Vector3f value);

///< Cartesian range vector between distance map borders in X direction
/// Returns a mutable pointer to a member variable of class `MR::MeshToDistanceMapParams` named `xRange`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_MeshToDistanceMapParams_GetMutable_xRange(MR_MeshToDistanceMapParams *_this);

///< Cartesian range vector between distance map borders in Y direction
/// Returns a pointer to a member variable of class `MR::MeshToDistanceMapParams` named `yRange`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_MeshToDistanceMapParams_Get_yRange(const MR_MeshToDistanceMapParams *_this);

///< Cartesian range vector between distance map borders in Y direction
/// Modifies a member variable of class `MR::MeshToDistanceMapParams` named `yRange`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshToDistanceMapParams_Set_yRange(MR_MeshToDistanceMapParams *_this, MR_Vector3f value);

///< Cartesian range vector between distance map borders in Y direction
/// Returns a mutable pointer to a member variable of class `MR::MeshToDistanceMapParams` named `yRange`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_MeshToDistanceMapParams_GetMutable_yRange(MR_MeshToDistanceMapParams *_this);

///< direction of intersection ray
/// Returns a pointer to a member variable of class `MR::MeshToDistanceMapParams` named `direction`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_MeshToDistanceMapParams_Get_direction(const MR_MeshToDistanceMapParams *_this);

///< direction of intersection ray
/// Modifies a member variable of class `MR::MeshToDistanceMapParams` named `direction`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshToDistanceMapParams_Set_direction(MR_MeshToDistanceMapParams *_this, MR_Vector3f value);

///< direction of intersection ray
/// Returns a mutable pointer to a member variable of class `MR::MeshToDistanceMapParams` named `direction`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_MeshToDistanceMapParams_GetMutable_direction(MR_MeshToDistanceMapParams *_this);

///< location of (0,0) pixel with value 0.f
/// Returns a pointer to a member variable of class `MR::MeshToDistanceMapParams` named `orgPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_MeshToDistanceMapParams_Get_orgPoint(const MR_MeshToDistanceMapParams *_this);

///< location of (0,0) pixel with value 0.f
/// Modifies a member variable of class `MR::MeshToDistanceMapParams` named `orgPoint`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshToDistanceMapParams_Set_orgPoint(MR_MeshToDistanceMapParams *_this, MR_Vector3f value);

///< location of (0,0) pixel with value 0.f
/// Returns a mutable pointer to a member variable of class `MR::MeshToDistanceMapParams` named `orgPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_MeshToDistanceMapParams_GetMutable_orgPoint(MR_MeshToDistanceMapParams *_this);

///< out of limits intersections will be set to non-valid
/// Returns a pointer to a member variable of class `MR::MeshToDistanceMapParams` named `useDistanceLimits`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_MeshToDistanceMapParams_Get_useDistanceLimits(const MR_MeshToDistanceMapParams *_this);

///< out of limits intersections will be set to non-valid
/// Modifies a member variable of class `MR::MeshToDistanceMapParams` named `useDistanceLimits`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshToDistanceMapParams_Set_useDistanceLimits(MR_MeshToDistanceMapParams *_this, bool value);

///< out of limits intersections will be set to non-valid
/// Returns a mutable pointer to a member variable of class `MR::MeshToDistanceMapParams` named `useDistanceLimits`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_MeshToDistanceMapParams_GetMutable_useDistanceLimits(MR_MeshToDistanceMapParams *_this);

///< allows to find intersections in backward to direction vector with negative values
/// Returns a pointer to a member variable of class `MR::MeshToDistanceMapParams` named `allowNegativeValues`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_MeshToDistanceMapParams_Get_allowNegativeValues(const MR_MeshToDistanceMapParams *_this);

///< allows to find intersections in backward to direction vector with negative values
/// Modifies a member variable of class `MR::MeshToDistanceMapParams` named `allowNegativeValues`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshToDistanceMapParams_Set_allowNegativeValues(MR_MeshToDistanceMapParams *_this, bool value);

///< allows to find intersections in backward to direction vector with negative values
/// Returns a mutable pointer to a member variable of class `MR::MeshToDistanceMapParams` named `allowNegativeValues`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_MeshToDistanceMapParams_GetMutable_allowNegativeValues(MR_MeshToDistanceMapParams *_this);

///< Using of this parameter depends on useDistanceLimits
/// Returns a pointer to a member variable of class `MR::MeshToDistanceMapParams` named `minValue`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MeshToDistanceMapParams_Get_minValue(const MR_MeshToDistanceMapParams *_this);

///< Using of this parameter depends on useDistanceLimits
/// Modifies a member variable of class `MR::MeshToDistanceMapParams` named `minValue`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshToDistanceMapParams_Set_minValue(MR_MeshToDistanceMapParams *_this, float value);

///< Using of this parameter depends on useDistanceLimits
/// Returns a mutable pointer to a member variable of class `MR::MeshToDistanceMapParams` named `minValue`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MeshToDistanceMapParams_GetMutable_minValue(MR_MeshToDistanceMapParams *_this);

///< Using of this parameter depends on useDistanceLimits
/// Returns a pointer to a member variable of class `MR::MeshToDistanceMapParams` named `maxValue`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MeshToDistanceMapParams_Get_maxValue(const MR_MeshToDistanceMapParams *_this);

///< Using of this parameter depends on useDistanceLimits
/// Modifies a member variable of class `MR::MeshToDistanceMapParams` named `maxValue`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshToDistanceMapParams_Set_maxValue(MR_MeshToDistanceMapParams *_this, float value);

///< Using of this parameter depends on useDistanceLimits
/// Returns a mutable pointer to a member variable of class `MR::MeshToDistanceMapParams` named `maxValue`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MeshToDistanceMapParams_GetMutable_maxValue(MR_MeshToDistanceMapParams *_this);

///< resolution of distance map
/// Returns a pointer to a member variable of class `MR::MeshToDistanceMapParams` named `resolution`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2i *MR_MeshToDistanceMapParams_Get_resolution(const MR_MeshToDistanceMapParams *_this);

///< resolution of distance map
/// Modifies a member variable of class `MR::MeshToDistanceMapParams` named `resolution`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshToDistanceMapParams_Set_resolution(MR_MeshToDistanceMapParams *_this, MR_Vector2i value);

///< resolution of distance map
/// Returns a mutable pointer to a member variable of class `MR::MeshToDistanceMapParams` named `resolution`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2i *MR_MeshToDistanceMapParams_GetMutable_resolution(MR_MeshToDistanceMapParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshToDistanceMapParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshToDistanceMapParams *MR_MeshToDistanceMapParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshToDistanceMapParams_DestroyArray()`.
/// Use `MR_MeshToDistanceMapParams_OffsetMutablePtr()` and `MR_MeshToDistanceMapParams_OffsetPtr()` to access the array elements.
MRC_API MR_MeshToDistanceMapParams *MR_MeshToDistanceMapParams_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshToDistanceMapParams *MR_MeshToDistanceMapParams_OffsetPtr(const MR_MeshToDistanceMapParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshToDistanceMapParams *MR_MeshToDistanceMapParams_OffsetMutablePtr(MR_MeshToDistanceMapParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshToDistanceMapParams`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshToDistanceMapParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshToDistanceMapParams *MR_MeshToDistanceMapParams_ConstructFromAnother(const MR_MeshToDistanceMapParams *_other);

/// direction vector shows the projections vector to the distance map for points on model
/// yRange and xRange directions make orthonormal basis with direction
/// see Vector3<T>::perpendicular() for more details
/// All Output Distance map values will be positive
/// usePreciseBoundingBox false (fast): use general (cached) bounding box with applied rotation
/// usePreciseBoundingBox true (slow): compute bounding box from points with respect to rotation
/// Generated from a constructor of class `MR::MeshToDistanceMapParams`.
/// Parameter `direction` can not be null. It is a single object.
/// Parameter `resolution` can not be null. It is a single object.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `usePreciseBoundingBox` has a default argument: `false`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshToDistanceMapParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshToDistanceMapParams *MR_MeshToDistanceMapParams_Construct_4_const_MR_Vector3f_ref_MR_Vector2i(const MR_Vector3f *direction, const MR_Vector2i *resolution, const MR_MeshPart *mp, const bool *usePreciseBoundingBox);

/// Generated from a constructor of class `MR::MeshToDistanceMapParams`.
/// Parameter `direction` can not be null. It is a single object.
/// Parameter `pixelSize` can not be null. It is a single object.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `usePreciseBoundingBox` has a default argument: `false`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshToDistanceMapParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshToDistanceMapParams *MR_MeshToDistanceMapParams_Construct_4_const_MR_Vector3f_ref_MR_Vector2f(const MR_Vector3f *direction, const MR_Vector2f *pixelSize, const MR_MeshPart *mp, const bool *usePreciseBoundingBox);

/// input matrix should be orthonormal!
/// rotation.z - direction
/// rotation.x * (box X length) - xRange
/// rotation.y * (box Y length) - yRange
/// All Output Distance map values will be positive
/// Generated from a constructor of class `MR::MeshToDistanceMapParams`.
/// Parameter `rotation` can not be null. It is a single object.
/// Parameter `origin` can not be null. It is a single object.
/// Parameter `resolution` can not be null. It is a single object.
/// Parameter `size` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshToDistanceMapParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshToDistanceMapParams *MR_MeshToDistanceMapParams_Construct_4_const_MR_Matrix3f_ref_const_MR_Vector3f_ref_MR_Vector2i(const MR_Matrix3f *rotation, const MR_Vector3f *origin, const MR_Vector2i *resolution, const MR_Vector2f *size);

/// Generated from a constructor of class `MR::MeshToDistanceMapParams`.
/// Parameter `rotation` can not be null. It is a single object.
/// Parameter `origin` can not be null. It is a single object.
/// Parameter `pixelSize` can not be null. It is a single object.
/// Parameter `resolution` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshToDistanceMapParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshToDistanceMapParams *MR_MeshToDistanceMapParams_Construct_4_const_MR_Matrix3f_ref_const_MR_Vector3f_ref_MR_Vector2f(const MR_Matrix3f *rotation, const MR_Vector3f *origin, const MR_Vector2f *pixelSize, const MR_Vector2i *resolution);

/// input matrix should be orthonormal!
/// rotation.z - direction
/// rotation.x * (box X length) - xRange
/// rotation.y * (box Y length) - yRange
/// All Output Distance map values will be positive
/// usePreciseBoundingBox false (fast): use general (cached) bounding box with applied rotation
/// usePreciseBoundingBox true (slow): compute bounding box from points with respect to rotation
/// Generated from a constructor of class `MR::MeshToDistanceMapParams`.
/// Parameter `rotation` can not be null. It is a single object.
/// Parameter `resolution` can not be null. It is a single object.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `usePreciseBoundingBox` has a default argument: `false`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshToDistanceMapParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshToDistanceMapParams *MR_MeshToDistanceMapParams_Construct_4_const_MR_Matrix3f_ref_const_MR_Vector2i_ref(const MR_Matrix3f *rotation, const MR_Vector2i *resolution, const MR_MeshPart *mp, const bool *usePreciseBoundingBox);

/// The most general constructor. Use it if you have to find special view, resolution,
/// distance map with visual the part of the model etc.
/// All params match is in the user responsibility
/// xf.b - origin point: pixel(0,0) with value 0.
/// xf.A.z - direction
/// xf.A.x - xRange
/// xf.A.y - yRange
/// All Output Distance map values could be positive and negative by default. Set allowNegativeValues to false if negative values are not required
/// Generated from a constructor of class `MR::MeshToDistanceMapParams`.
/// Parameter `xf` can not be null. It is a single object.
/// Parameter `resolution` can not be null. It is a single object.
/// Parameter `size` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshToDistanceMapParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshToDistanceMapParams *MR_MeshToDistanceMapParams_Construct_3_MR_Vector2i(const MR_AffineXf3f *xf, const MR_Vector2i *resolution, const MR_Vector2f *size);

/// Generated from a constructor of class `MR::MeshToDistanceMapParams`.
/// Parameter `xf` can not be null. It is a single object.
/// Parameter `pixelSize` can not be null. It is a single object.
/// Parameter `resolution` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshToDistanceMapParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshToDistanceMapParams *MR_MeshToDistanceMapParams_Construct_3_MR_Vector2f(const MR_AffineXf3f *xf, const MR_Vector2f *pixelSize, const MR_Vector2i *resolution);

/// Destroys a heap-allocated instance of `MR_MeshToDistanceMapParams`. Does nothing if the pointer is null.
MRC_API void MR_MeshToDistanceMapParams_Destroy(const MR_MeshToDistanceMapParams *_this);

/// Destroys a heap-allocated array of `MR_MeshToDistanceMapParams`. Does nothing if the pointer is null.
MRC_API void MR_MeshToDistanceMapParams_DestroyArray(const MR_MeshToDistanceMapParams *_this);

/// converts in transformation
/// Generated from a conversion operator of class `MR::MeshToDistanceMapParams` to type `MR::AffineXf3f`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_MeshToDistanceMapParams_ConvertTo_MR_AffineXf3f(const MR_MeshToDistanceMapParams *_this);

/// Generated from a method of class `MR::MeshToDistanceMapParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshToDistanceMapParams *MR_MeshToDistanceMapParams_AssignFromAnother(MR_MeshToDistanceMapParams *_this, const MR_MeshToDistanceMapParams *_other);

/// Generated from a method of class `MR::MeshToDistanceMapParams` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_MeshToDistanceMapParams_xf(const MR_MeshToDistanceMapParams *_this);

/// if distance is not in set range, pixel became invalid
/// default value: false. Any distance will be applied (include negative)
/// Generated from a method of class `MR::MeshToDistanceMapParams` named `setDistanceLimits`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshToDistanceMapParams_setDistanceLimits(MR_MeshToDistanceMapParams *_this, float min, float max);

///< pixel size
/// Returns a pointer to a member variable of class `MR::ContourToDistanceMapParams` named `pixelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2f *MR_ContourToDistanceMapParams_Get_pixelSize(const MR_ContourToDistanceMapParams *_this);

///< pixel size
/// Modifies a member variable of class `MR::ContourToDistanceMapParams` named `pixelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ContourToDistanceMapParams_Set_pixelSize(MR_ContourToDistanceMapParams *_this, MR_Vector2f value);

///< pixel size
/// Returns a mutable pointer to a member variable of class `MR::ContourToDistanceMapParams` named `pixelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2f *MR_ContourToDistanceMapParams_GetMutable_pixelSize(MR_ContourToDistanceMapParams *_this);

///< distance map size
/// Returns a pointer to a member variable of class `MR::ContourToDistanceMapParams` named `resolution`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2i *MR_ContourToDistanceMapParams_Get_resolution(const MR_ContourToDistanceMapParams *_this);

///< distance map size
/// Modifies a member variable of class `MR::ContourToDistanceMapParams` named `resolution`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ContourToDistanceMapParams_Set_resolution(MR_ContourToDistanceMapParams *_this, MR_Vector2i value);

///< distance map size
/// Returns a mutable pointer to a member variable of class `MR::ContourToDistanceMapParams` named `resolution`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2i *MR_ContourToDistanceMapParams_GetMutable_resolution(MR_ContourToDistanceMapParams *_this);

///< coordinates of origin area corner
/// Returns a pointer to a member variable of class `MR::ContourToDistanceMapParams` named `orgPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2f *MR_ContourToDistanceMapParams_Get_orgPoint(const MR_ContourToDistanceMapParams *_this);

///< coordinates of origin area corner
/// Modifies a member variable of class `MR::ContourToDistanceMapParams` named `orgPoint`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ContourToDistanceMapParams_Set_orgPoint(MR_ContourToDistanceMapParams *_this, MR_Vector2f value);

///< coordinates of origin area corner
/// Returns a mutable pointer to a member variable of class `MR::ContourToDistanceMapParams` named `orgPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2f *MR_ContourToDistanceMapParams_GetMutable_orgPoint(MR_ContourToDistanceMapParams *_this);

///< allows calculate negative values of distance (inside closed and correctly oriented (CW) contours)
/// Returns a pointer to a member variable of class `MR::ContourToDistanceMapParams` named `withSign`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_ContourToDistanceMapParams_Get_withSign(const MR_ContourToDistanceMapParams *_this);

///< allows calculate negative values of distance (inside closed and correctly oriented (CW) contours)
/// Modifies a member variable of class `MR::ContourToDistanceMapParams` named `withSign`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ContourToDistanceMapParams_Set_withSign(MR_ContourToDistanceMapParams *_this, bool value);

///< allows calculate negative values of distance (inside closed and correctly oriented (CW) contours)
/// Returns a mutable pointer to a member variable of class `MR::ContourToDistanceMapParams` named `withSign`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_ContourToDistanceMapParams_GetMutable_withSign(MR_ContourToDistanceMapParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ContourToDistanceMapParams_Destroy()` to free it when you're done using it.
MRC_API MR_ContourToDistanceMapParams *MR_ContourToDistanceMapParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ContourToDistanceMapParams_DestroyArray()`.
/// Use `MR_ContourToDistanceMapParams_OffsetMutablePtr()` and `MR_ContourToDistanceMapParams_OffsetPtr()` to access the array elements.
MRC_API MR_ContourToDistanceMapParams *MR_ContourToDistanceMapParams_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ContourToDistanceMapParams *MR_ContourToDistanceMapParams_OffsetPtr(const MR_ContourToDistanceMapParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ContourToDistanceMapParams *MR_ContourToDistanceMapParams_OffsetMutablePtr(MR_ContourToDistanceMapParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ContourToDistanceMapParams`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ContourToDistanceMapParams_Destroy()` to free it when you're done using it.
MRC_API MR_ContourToDistanceMapParams *MR_ContourToDistanceMapParams_ConstructFromAnother(const MR_ContourToDistanceMapParams *_other);

/// Ctor, calculating pixelSize by areaSize & dmapSize
/// Generated from a constructor of class `MR::ContourToDistanceMapParams`.
/// Parameter `resolution` can not be null. It is a single object.
/// Parameter `oriPoint` can not be null. It is a single object.
/// Parameter `areaSize` can not be null. It is a single object.
/// Parameter `withSign` has a default argument: `false`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ContourToDistanceMapParams_Destroy()` to free it when you're done using it.
MRC_API MR_ContourToDistanceMapParams *MR_ContourToDistanceMapParams_Construct_4_const_MR_Vector2i_ref_MR_Vector2f(const MR_Vector2i *resolution, const MR_Vector2f *oriPoint, const MR_Vector2f *areaSize, const bool *withSign);

/// Ctor, calculating pixelSize & oriPoint by box parameters
/// Generated from a constructor of class `MR::ContourToDistanceMapParams`.
/// Parameter `resolution` can not be null. It is a single object.
/// Parameter `box` can not be null. It is a single object.
/// Parameter `withSign` has a default argument: `false`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ContourToDistanceMapParams_Destroy()` to free it when you're done using it.
MRC_API MR_ContourToDistanceMapParams *MR_ContourToDistanceMapParams_Construct_3(const MR_Vector2i *resolution, const MR_Box2f *box, const bool *withSign);

/// Ctor, calculating pixelSize & oriPoint by contours box + offset
/// Generated from a constructor of class `MR::ContourToDistanceMapParams`.
/// Parameter `resolution` can not be null. It is a single object.
/// Parameter `contours` can not be null. It is a single object.
/// Parameter `withSign` has a default argument: `false`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ContourToDistanceMapParams_Destroy()` to free it when you're done using it.
MRC_API MR_ContourToDistanceMapParams *MR_ContourToDistanceMapParams_Construct_4_const_MR_Vector2i_ref_std_vector_std_vector_MR_Vector2f(const MR_Vector2i *resolution, const MR_std_vector_std_vector_MR_Vector2f *contours, float offset, const bool *withSign);

/// Ctor, calculating resolution & oriPoint by contours box + offset
/// Generated from a constructor of class `MR::ContourToDistanceMapParams`.
/// Parameter `contours` can not be null. It is a single object.
/// Parameter `withSign` has a default argument: `false`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ContourToDistanceMapParams_Destroy()` to free it when you're done using it.
MRC_API MR_ContourToDistanceMapParams *MR_ContourToDistanceMapParams_Construct_4_float(float pixelSize, const MR_std_vector_std_vector_MR_Vector2f *contours, float offset, const bool *withSign);

/// Generated from a constructor of class `MR::ContourToDistanceMapParams`.
/// Parameter `toWorld` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ContourToDistanceMapParams_Destroy()` to free it when you're done using it.
MRC_API MR_ContourToDistanceMapParams *MR_ContourToDistanceMapParams_Construct_1(const MR_DistanceMapToWorld *toWorld);

/// Destroys a heap-allocated instance of `MR_ContourToDistanceMapParams`. Does nothing if the pointer is null.
MRC_API void MR_ContourToDistanceMapParams_Destroy(const MR_ContourToDistanceMapParams *_this);

/// Destroys a heap-allocated array of `MR_ContourToDistanceMapParams`. Does nothing if the pointer is null.
MRC_API void MR_ContourToDistanceMapParams_DestroyArray(const MR_ContourToDistanceMapParams *_this);

/// converts in transformation
/// Generated from a conversion operator of class `MR::ContourToDistanceMapParams` to type `MR::AffineXf3f`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_ContourToDistanceMapParams_ConvertTo_MR_AffineXf3f(const MR_ContourToDistanceMapParams *_this);

/// Generated from a method of class `MR::ContourToDistanceMapParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ContourToDistanceMapParams *MR_ContourToDistanceMapParams_AssignFromAnother(MR_ContourToDistanceMapParams *_this, const MR_ContourToDistanceMapParams *_other);

/// get world 2d coordinate (respects origin point and pixel size)
/// point - coordinate on distance map
/// Generated from a method of class `MR::ContourToDistanceMapParams` named `toWorld`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2f MR_ContourToDistanceMapParams_toWorld(const MR_ContourToDistanceMapParams *_this, MR_Vector2f point);

/// Generated from a method of class `MR::ContourToDistanceMapParams` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_ContourToDistanceMapParams_xf(const MR_ContourToDistanceMapParams *_this);

/// world coordinates of distance map origin corner
/// Returns a pointer to a member variable of class `MR::DistanceMapToWorld` named `orgPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_DistanceMapToWorld_Get_orgPoint(const MR_DistanceMapToWorld *_this);

/// world coordinates of distance map origin corner
/// Modifies a member variable of class `MR::DistanceMapToWorld` named `orgPoint`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceMapToWorld_Set_orgPoint(MR_DistanceMapToWorld *_this, MR_Vector3f value);

/// world coordinates of distance map origin corner
/// Returns a mutable pointer to a member variable of class `MR::DistanceMapToWorld` named `orgPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_DistanceMapToWorld_GetMutable_orgPoint(MR_DistanceMapToWorld *_this);

/// vector in world space of pixel x positive direction
/// length is equal to pixel size
/// \note typically it should be orthogonal to `pixelYVec`
/// Returns a pointer to a member variable of class `MR::DistanceMapToWorld` named `pixelXVec`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_DistanceMapToWorld_Get_pixelXVec(const MR_DistanceMapToWorld *_this);

/// vector in world space of pixel x positive direction
/// length is equal to pixel size
/// \note typically it should be orthogonal to `pixelYVec`
/// Modifies a member variable of class `MR::DistanceMapToWorld` named `pixelXVec`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceMapToWorld_Set_pixelXVec(MR_DistanceMapToWorld *_this, MR_Vector3f value);

/// vector in world space of pixel x positive direction
/// length is equal to pixel size
/// \note typically it should be orthogonal to `pixelYVec`
/// Returns a mutable pointer to a member variable of class `MR::DistanceMapToWorld` named `pixelXVec`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_DistanceMapToWorld_GetMutable_pixelXVec(MR_DistanceMapToWorld *_this);

/// vector in world space of pixel y positive direction
/// length is equal to pixel size
/// \note typically it should be orthogonal to `pixelXVec`
/// Returns a pointer to a member variable of class `MR::DistanceMapToWorld` named `pixelYVec`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_DistanceMapToWorld_Get_pixelYVec(const MR_DistanceMapToWorld *_this);

/// vector in world space of pixel y positive direction
/// length is equal to pixel size
/// \note typically it should be orthogonal to `pixelXVec`
/// Modifies a member variable of class `MR::DistanceMapToWorld` named `pixelYVec`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceMapToWorld_Set_pixelYVec(MR_DistanceMapToWorld *_this, MR_Vector3f value);

/// vector in world space of pixel y positive direction
/// length is equal to pixel size
/// \note typically it should be orthogonal to `pixelXVec`
/// Returns a mutable pointer to a member variable of class `MR::DistanceMapToWorld` named `pixelYVec`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_DistanceMapToWorld_GetMutable_pixelYVec(MR_DistanceMapToWorld *_this);

/// vector of depth direction
/// \note typically it should be normalized and orthogonal to `pixelXVec` `pixelYVec` plane
/// Returns a pointer to a member variable of class `MR::DistanceMapToWorld` named `direction`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_DistanceMapToWorld_Get_direction(const MR_DistanceMapToWorld *_this);

/// vector of depth direction
/// \note typically it should be normalized and orthogonal to `pixelXVec` `pixelYVec` plane
/// Modifies a member variable of class `MR::DistanceMapToWorld` named `direction`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceMapToWorld_Set_direction(MR_DistanceMapToWorld *_this, MR_Vector3f value);

/// vector of depth direction
/// \note typically it should be normalized and orthogonal to `pixelXVec` `pixelYVec` plane
/// Returns a mutable pointer to a member variable of class `MR::DistanceMapToWorld` named `direction`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_DistanceMapToWorld_GetMutable_direction(MR_DistanceMapToWorld *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceMapToWorld_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceMapToWorld *MR_DistanceMapToWorld_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_DistanceMapToWorld_DestroyArray()`.
/// Use `MR_DistanceMapToWorld_OffsetMutablePtr()` and `MR_DistanceMapToWorld_OffsetPtr()` to access the array elements.
MRC_API MR_DistanceMapToWorld *MR_DistanceMapToWorld_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_DistanceMapToWorld *MR_DistanceMapToWorld_OffsetPtr(const MR_DistanceMapToWorld *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_DistanceMapToWorld *MR_DistanceMapToWorld_OffsetMutablePtr(MR_DistanceMapToWorld *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::DistanceMapToWorld`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceMapToWorld_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceMapToWorld *MR_DistanceMapToWorld_ConstructFromAnother(const MR_DistanceMapToWorld *_other);

/// Init fields by `MeshToDistanceMapParams` struct
/// Generated from a constructor of class `MR::DistanceMapToWorld`.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceMapToWorld_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceMapToWorld *MR_DistanceMapToWorld_Construct_MR_MeshToDistanceMapParams(const MR_MeshToDistanceMapParams *params);

/// Init fields by `ContourToDistanceMapParams` struct
/// Generated from a constructor of class `MR::DistanceMapToWorld`.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceMapToWorld_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceMapToWorld *MR_DistanceMapToWorld_Construct_MR_ContourToDistanceMapParams(const MR_ContourToDistanceMapParams *params);

/// Converts from AffineXf3f
/// Generated from a constructor of class `MR::DistanceMapToWorld`.
/// Parameter `xf` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceMapToWorld_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceMapToWorld *MR_DistanceMapToWorld_Construct_MR_AffineXf3f(const MR_AffineXf3f *xf);

/// Destroys a heap-allocated instance of `MR_DistanceMapToWorld`. Does nothing if the pointer is null.
MRC_API void MR_DistanceMapToWorld_Destroy(const MR_DistanceMapToWorld *_this);

/// Destroys a heap-allocated array of `MR_DistanceMapToWorld`. Does nothing if the pointer is null.
MRC_API void MR_DistanceMapToWorld_DestroyArray(const MR_DistanceMapToWorld *_this);

/// converts in transformation X: X(p) == toWorld( p.x, p.y, p.z )
/// Generated from a conversion operator of class `MR::DistanceMapToWorld` to type `MR::AffineXf3f`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_DistanceMapToWorld_ConvertTo_MR_AffineXf3f(const MR_DistanceMapToWorld *_this);

/// Generated from a method of class `MR::DistanceMapToWorld` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DistanceMapToWorld *MR_DistanceMapToWorld_AssignFromAnother(MR_DistanceMapToWorld *_this, const MR_DistanceMapToWorld *_other);

/// get world coordinate by depth map info
/// x - float X coordinate of depth map: (0.0f - left corner of pixel 0, 1.0 - right corner of pixel 0 and left corner of pixel 1)
/// y - float Y coordinate of depth map: (0.0f - left corner of pixel 0, 1.0 - right corner of pixel 0 and left corner of pixel 1)
/// float depth value (value in distance map, represent depth in world)
/// Generated from a method of class `MR::DistanceMapToWorld` named `toWorld`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_DistanceMapToWorld_toWorld(const MR_DistanceMapToWorld *_this, float x, float y, float depth);

/// Generated from a method of class `MR::DistanceMapToWorld` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_DistanceMapToWorld_xf(const MR_DistanceMapToWorld *_this);

/// optional output: distance map to world transform
/// Returns a pointer to a member variable of class `MR::DistanceMapLoadSettings` named `distanceMapToWorld`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DistanceMapToWorld *const *MR_DistanceMapLoadSettings_Get_distanceMapToWorld(const MR_DistanceMapLoadSettings *_this);

/// optional output: distance map to world transform
/// Modifies a member variable of class `MR::DistanceMapLoadSettings` named `distanceMapToWorld`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceMapLoadSettings_Set_distanceMapToWorld(MR_DistanceMapLoadSettings *_this, MR_DistanceMapToWorld *value);

/// optional output: distance map to world transform
/// Returns a mutable pointer to a member variable of class `MR::DistanceMapLoadSettings` named `distanceMapToWorld`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DistanceMapToWorld **MR_DistanceMapLoadSettings_GetMutable_distanceMapToWorld(MR_DistanceMapLoadSettings *_this);

/// to report load progress and cancel loading if user desires
/// Returns a pointer to a member variable of class `MR::DistanceMapLoadSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_DistanceMapLoadSettings_Get_progress(const MR_DistanceMapLoadSettings *_this);

/// to report load progress and cancel loading if user desires
/// Modifies a member variable of class `MR::DistanceMapLoadSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceMapLoadSettings_Set_progress(MR_DistanceMapLoadSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// to report load progress and cancel loading if user desires
/// Returns a mutable pointer to a member variable of class `MR::DistanceMapLoadSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_DistanceMapLoadSettings_GetMutable_progress(MR_DistanceMapLoadSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceMapLoadSettings_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceMapLoadSettings *MR_DistanceMapLoadSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_DistanceMapLoadSettings_DestroyArray()`.
/// Use `MR_DistanceMapLoadSettings_OffsetMutablePtr()` and `MR_DistanceMapLoadSettings_OffsetPtr()` to access the array elements.
MRC_API MR_DistanceMapLoadSettings *MR_DistanceMapLoadSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::DistanceMapLoadSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceMapLoadSettings_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceMapLoadSettings *MR_DistanceMapLoadSettings_ConstructFrom(MR_DistanceMapToWorld *distanceMapToWorld, MR_PassBy progress_pass_by, MR_std_function_bool_from_float *progress);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_DistanceMapLoadSettings *MR_DistanceMapLoadSettings_OffsetPtr(const MR_DistanceMapLoadSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_DistanceMapLoadSettings *MR_DistanceMapLoadSettings_OffsetMutablePtr(MR_DistanceMapLoadSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::DistanceMapLoadSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceMapLoadSettings_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceMapLoadSettings *MR_DistanceMapLoadSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_DistanceMapLoadSettings *_other);

/// Destroys a heap-allocated instance of `MR_DistanceMapLoadSettings`. Does nothing if the pointer is null.
MRC_API void MR_DistanceMapLoadSettings_Destroy(const MR_DistanceMapLoadSettings *_this);

/// Destroys a heap-allocated array of `MR_DistanceMapLoadSettings`. Does nothing if the pointer is null.
MRC_API void MR_DistanceMapLoadSettings_DestroyArray(const MR_DistanceMapLoadSettings *_this);

/// Generated from a method of class `MR::DistanceMapLoadSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DistanceMapLoadSettings *MR_DistanceMapLoadSettings_AssignFromAnother(MR_DistanceMapLoadSettings *_this, MR_PassBy _other_pass_by, MR_DistanceMapLoadSettings *_other);

/// optional distance map to world transform
/// Returns a pointer to a member variable of class `MR::DistanceMapSaveSettings` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *const *MR_DistanceMapSaveSettings_Get_xf(const MR_DistanceMapSaveSettings *_this);

/// optional distance map to world transform
/// Modifies a member variable of class `MR::DistanceMapSaveSettings` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceMapSaveSettings_Set_xf(MR_DistanceMapSaveSettings *_this, const MR_AffineXf3f *value);

/// optional distance map to world transform
/// Returns a mutable pointer to a member variable of class `MR::DistanceMapSaveSettings` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f **MR_DistanceMapSaveSettings_GetMutable_xf(MR_DistanceMapSaveSettings *_this);

/// to report save progress and cancel saving if user desires
/// Returns a pointer to a member variable of class `MR::DistanceMapSaveSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_DistanceMapSaveSettings_Get_progress(const MR_DistanceMapSaveSettings *_this);

/// to report save progress and cancel saving if user desires
/// Modifies a member variable of class `MR::DistanceMapSaveSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceMapSaveSettings_Set_progress(MR_DistanceMapSaveSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// to report save progress and cancel saving if user desires
/// Returns a mutable pointer to a member variable of class `MR::DistanceMapSaveSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_DistanceMapSaveSettings_GetMutable_progress(MR_DistanceMapSaveSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceMapSaveSettings_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceMapSaveSettings *MR_DistanceMapSaveSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_DistanceMapSaveSettings_DestroyArray()`.
/// Use `MR_DistanceMapSaveSettings_OffsetMutablePtr()` and `MR_DistanceMapSaveSettings_OffsetPtr()` to access the array elements.
MRC_API MR_DistanceMapSaveSettings *MR_DistanceMapSaveSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::DistanceMapSaveSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceMapSaveSettings_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceMapSaveSettings *MR_DistanceMapSaveSettings_ConstructFrom(const MR_AffineXf3f *xf, MR_PassBy progress_pass_by, MR_std_function_bool_from_float *progress);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_DistanceMapSaveSettings *MR_DistanceMapSaveSettings_OffsetPtr(const MR_DistanceMapSaveSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_DistanceMapSaveSettings *MR_DistanceMapSaveSettings_OffsetMutablePtr(MR_DistanceMapSaveSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::DistanceMapSaveSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceMapSaveSettings_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceMapSaveSettings *MR_DistanceMapSaveSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_DistanceMapSaveSettings *_other);

/// Destroys a heap-allocated instance of `MR_DistanceMapSaveSettings`. Does nothing if the pointer is null.
MRC_API void MR_DistanceMapSaveSettings_Destroy(const MR_DistanceMapSaveSettings *_this);

/// Destroys a heap-allocated array of `MR_DistanceMapSaveSettings`. Does nothing if the pointer is null.
MRC_API void MR_DistanceMapSaveSettings_DestroyArray(const MR_DistanceMapSaveSettings *_this);

/// Generated from a method of class `MR::DistanceMapSaveSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DistanceMapSaveSettings *MR_DistanceMapSaveSettings_AssignFromAnother(MR_DistanceMapSaveSettings *_this, MR_PassBy _other_pass_by, MR_DistanceMapSaveSettings *_other);

#ifdef __cplusplus
} // extern "C"
#endif
