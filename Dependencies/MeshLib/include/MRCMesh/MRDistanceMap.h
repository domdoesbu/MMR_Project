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

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_ContourToDistanceMapParams MR_ContourToDistanceMapParams; // Defined in `#include <MRCMesh/MRDistanceMapParams.h>`.
typedef struct MR_Image MR_Image; // Defined in `#include <MRCMesh/MRImage.h>`.
typedef struct MR_Matrix_float MR_Matrix_float; // Defined in `#include <MRCMesh/MRMatrix.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_MeshToDistanceMapParams MR_MeshToDistanceMapParams; // Defined in `#include <MRCMesh/MRDistanceMapParams.h>`.
typedef struct MR_PixelBitSet MR_PixelBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Polyline2 MR_Polyline2; // Defined in `#include <MRCMesh/MRPolyline.h>`.
typedef struct MR_RectIndexer MR_RectIndexer; // Defined in `#include <MRCMesh/MRRectIndexer.h>`.
typedef struct MR_UndirectedEdgeScalars MR_UndirectedEdgeScalars; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_expected_MR_DistanceMap_std_string MR_expected_MR_DistanceMap_std_string; // Defined in `#include <MRCMisc/expected_MR_DistanceMap_std_string.h>`.
typedef struct MR_expected_MR_Mesh_std_string MR_expected_MR_Mesh_std_string; // Defined in `#include <MRCMisc/expected_MR_Mesh_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_optional_MR_Vector3f MR_std_optional_MR_Vector3f; // Defined in `#include <MRCMisc/std_optional_MR_Vector3f.h>`.
typedef struct MR_std_optional_float MR_std_optional_float; // Defined in `#include <MRCMisc/std_optional_float.h>`.
typedef struct MR_std_pair_MR_DistanceMap_MR_DistanceMap MR_std_pair_MR_DistanceMap_MR_DistanceMap; // Defined in `#include <MRCMisc/std_pair_MR_DistanceMap_MR_DistanceMap.h>`.
typedef struct MR_std_pair_MR_Polyline2_MR_AffineXf3f MR_std_pair_MR_Polyline2_MR_AffineXf3f; // Defined in `#include <MRCMisc/std_pair_MR_Polyline2_MR_AffineXf3f.h>`.
typedef struct MR_std_pair_float_float MR_std_pair_float_float; // Defined in `#include <MRCMisc/std_pair_float_float.h>`.
typedef struct MR_std_pair_uint64_t_uint64_t MR_std_pair_uint64_t_uint64_t; // Defined in `#include <MRCMisc/std_pair_uint64_t_uint64_t.h>`.
typedef struct MR_std_vector_MR_MeshTriPoint MR_std_vector_MR_MeshTriPoint; // Defined in `#include <MRCMisc/std_vector_MR_MeshTriPoint.h>`.
typedef struct MR_std_vector_MR_UndirectedEdgeId MR_std_vector_MR_UndirectedEdgeId; // Defined in `#include <MRCMisc/std_vector_MR_UndirectedEdgeId.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.
typedef struct MR_std_vector_float MR_std_vector_float; // Defined in `#include <MRCMisc/std_vector_float.h>`.
typedef struct MR_std_vector_std_pair_uint64_t_uint64_t MR_std_vector_std_pair_uint64_t_uint64_t; // Defined in `#include <MRCMisc/std_vector_std_pair_uint64_t_uint64_t.h>`.


/// this class allows to store distances from the plane in particular pixels
/// validVerts keeps only pixels with mesh-intersecting rays from them
/// Generated from class `MR::DistanceMap`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::RectIndexer`
typedef struct MR_DistanceMap MR_DistanceMap;

/// Structure with parameters for optional offset in `distanceMapFromContours` function
/// Generated from class `MR::ContoursDistanceMapOffset`.
typedef struct MR_ContoursDistanceMapOffset MR_ContoursDistanceMapOffset;

typedef int32_t MR_ContoursDistanceMapOffset_OffsetType;
enum // MR_ContoursDistanceMapOffset_OffsetType
{
    ///< distance map from given polyline with values offset
    MR_ContoursDistanceMapOffset_OffsetType_Normal = 0,
    ///< distance map from shell of given polyline (perEdgeOffset should not have negative values )
    MR_ContoursDistanceMapOffset_OffsetType_Shell = 1,
};

/// Generated from class `MR::ContoursDistanceMapOptions`.
typedef struct MR_ContoursDistanceMapOptions MR_ContoursDistanceMapOptions;

/// method to calculate sign
typedef enum MR_ContoursDistanceMapOptions_SignedDetectionMethod
{
    /// detect sign of distance based on closest contour's edge turn\n
    /// (recommended for good contours with no self-intersections)
    /// \note that polyline topology should be consistently oriented \n
    MR_ContoursDistanceMapOptions_SignedDetectionMethod_ContourOrientation = 0,
    /// detect sign of distance based on number of ray intersections with contours\n
    /// (recommended for contours with self-intersections)
    MR_ContoursDistanceMapOptions_SignedDetectionMethod_WindingRule = 1,
} MR_ContoursDistanceMapOptions_SignedDetectionMethod;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceMap_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceMap *MR_DistanceMap_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_DistanceMap_DestroyArray()`.
/// Use `MR_DistanceMap_OffsetMutablePtr()` and `MR_DistanceMap_OffsetPtr()` to access the array elements.
MRC_API MR_DistanceMap *MR_DistanceMap_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_DistanceMap *MR_DistanceMap_OffsetPtr(const MR_DistanceMap *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_DistanceMap *MR_DistanceMap_OffsetMutablePtr(MR_DistanceMap *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::DistanceMap` to its base class `MR::RectIndexer`.
/// This version is acting on mutable pointers.
MRC_API const MR_RectIndexer *MR_DistanceMap_UpcastTo_MR_RectIndexer(const MR_DistanceMap *object);

/// Upcasts an instance of `MR::DistanceMap` to its base class `MR::RectIndexer`.
MRC_API MR_RectIndexer *MR_DistanceMap_MutableUpcastTo_MR_RectIndexer(MR_DistanceMap *object);

/// Generated from a constructor of class `MR::DistanceMap`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceMap_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceMap *MR_DistanceMap_ConstructFromAnother(MR_PassBy _other_pass_by, MR_DistanceMap *_other);

/// Preferable constructor with resolution arguments
/// Access by the index (i) is equal to (y*resX + x)
/// Generated from a constructor of class `MR::DistanceMap`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceMap_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceMap *MR_DistanceMap_Construct_2(MR_uint64_t resX, MR_uint64_t resY);

/// make from 2d array
/// Generated from a constructor of class `MR::DistanceMap`.
/// Parameter `m` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceMap_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceMap *MR_DistanceMap_Construct_1(const MR_Matrix_float *m);

/// Destroys a heap-allocated instance of `MR_DistanceMap`. Does nothing if the pointer is null.
MRC_API void MR_DistanceMap_Destroy(const MR_DistanceMap *_this);

/// Destroys a heap-allocated array of `MR_DistanceMap`. Does nothing if the pointer is null.
MRC_API void MR_DistanceMap_DestroyArray(const MR_DistanceMap *_this);

/// Generated from a method of class `MR::DistanceMap` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DistanceMap *MR_DistanceMap_AssignFromAnother(MR_DistanceMap *_this, MR_PassBy _other_pass_by, MR_DistanceMap *_other);

/// checks if X,Y element is valid (i.e. not `std::numeric_limits<float>::lowest()`; passing invalid coords to this is UB)
/// Generated from a method of class `MR::DistanceMap` named `isValid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_DistanceMap_isValid_2(const MR_DistanceMap *_this, MR_uint64_t x, MR_uint64_t y);

/// checks if index element is valid (i.e. not `std::numeric_limits<float>::lowest()`; passing an invalid coord to this is UB)
/// Generated from a method of class `MR::DistanceMap` named `isValid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_DistanceMap_isValid_1(const MR_DistanceMap *_this, MR_uint64_t i);

/// Returns true if (X,Y) coordinates are in bounds.
/// Generated from a method of class `MR::DistanceMap` named `isInBounds`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_DistanceMap_isInBounds_2(const MR_DistanceMap *_this, MR_uint64_t x, MR_uint64_t y);

/// Returns true if a flattened coordinate is in bounds.
/// Generated from a method of class `MR::DistanceMap` named `isInBounds`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_DistanceMap_isInBounds_1(const MR_DistanceMap *_this, MR_uint64_t i);

/// returns value in (X,Y) element, returns nullopt if not valid (see `isValid()`), UB if out of bounds.
/// Generated from a method of class `MR::DistanceMap` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_float_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_float *MR_DistanceMap_get_2(const MR_DistanceMap *_this, MR_uint64_t x, MR_uint64_t y);

/// returns value of index element, returns nullopt if not valid (see `isValid()`), UB if out of bounds.
/// Generated from a method of class `MR::DistanceMap` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_float_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_float *MR_DistanceMap_get_1(const MR_DistanceMap *_this, MR_uint64_t i);

/// returns value in (X,Y) element without check on valid
/// use this only if you sure that distance map has no invalid values or for serialization
/// Generated from a method of class `MR::DistanceMap` named `getValue`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DistanceMap_getValue_2(MR_DistanceMap *_this, MR_uint64_t x, MR_uint64_t y);

/// Generated from a method of class `MR::DistanceMap` named `getValue`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_DistanceMap_getValue_const_2(const MR_DistanceMap *_this, MR_uint64_t x, MR_uint64_t y);

/// Generated from a method of class `MR::DistanceMap` named `getValue`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DistanceMap_getValue_1(MR_DistanceMap *_this, MR_uint64_t i);

/// Generated from a method of class `MR::DistanceMap` named `getValue`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_DistanceMap_getValue_const_1(const MR_DistanceMap *_this, MR_uint64_t i);

/// Generated from a method of class `MR::DistanceMap` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float *MR_DistanceMap_data(MR_DistanceMap *_this);

/// Generated from a method of class `MR::DistanceMap` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const float *MR_DistanceMap_data_const(const MR_DistanceMap *_this);

/**
* \brief finds interpolated value.
* \details https://en.wikipedia.org/wiki/Bilinear_interpolation
* getInterpolated( 0.5f, 0.5f ) == get( 0, 0 )
* see https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-coordinates for details
* all 4 elements around this point should be valid, returns nullopt if at least one is not valid
* \param x,y should be in resolution range [0;resX][0;resY].
* If x,y are out of bounds, returns nullopt.
*/
/// Generated from a method of class `MR::DistanceMap` named `getInterpolated`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_float_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_float *MR_DistanceMap_getInterpolated(const MR_DistanceMap *_this, float x, float y);

/// finds 3d coordinates of the Point on the model surface for the (x,y) pixel
/// Use the same params with distance map creation
/// (x,y) must be in bounds, the behavior is undefined otherwise.
/// Generated from a method of class `MR::DistanceMap` named `unproject`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `toWorld` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_Vector3f *MR_DistanceMap_unproject(const MR_DistanceMap *_this, MR_uint64_t x, MR_uint64_t y, const MR_AffineXf3f *toWorld);

/**
* \brief finds 3d coordinates of the Point on the model surface for the (x,y) interpolated value
* \param x,y should be in resolution range [0;resX][0;resY].
* \details getInterpolated( 0.5f, 0.5f ) == get( 0, 0 )
* see https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-coordinates for details
* all 4 elements around this point should be valid, returns nullopt if at least one is not valid
* If x,y are out of bounds, returns nullopt.
*/
/// Generated from a method of class `MR::DistanceMap` named `unprojectInterpolated`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `toWorld` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_Vector3f *MR_DistanceMap_unprojectInterpolated(const MR_DistanceMap *_this, float x, float y, const MR_AffineXf3f *toWorld);

/// replaces every valid element in the map with its negative value
/// Generated from a method of class `MR::DistanceMap` named `negate`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceMap_negate(MR_DistanceMap *_this);

/// boolean operators
/// returns new Distance Map with cell-wise maximum values. Invalid values remain only if both corresponding cells are invalid
/// Generated from a method of class `MR::DistanceMap` named `max`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rhs` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceMap_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceMap *MR_DistanceMap_max(const MR_DistanceMap *_this, const MR_DistanceMap *rhs);

/// replaces values with cell-wise maximum values. Invalid values remain only if both corresponding cells are invalid
/// Generated from a method of class `MR::DistanceMap` named `mergeMax`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rhs` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_DistanceMap *MR_DistanceMap_mergeMax(MR_DistanceMap *_this, const MR_DistanceMap *rhs);

/// returns new Distance Map with cell-wise minimum values. Invalid values remain only if both corresponding cells are invalid
/// Generated from a method of class `MR::DistanceMap` named `min`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rhs` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceMap_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceMap *MR_DistanceMap_min(const MR_DistanceMap *_this, const MR_DistanceMap *rhs);

/// replaces values with cell-wise minimum values. Invalid values remain only if both corresponding cells are invalid
/// Generated from a method of class `MR::DistanceMap` named `mergeMin`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rhs` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_DistanceMap *MR_DistanceMap_mergeMin(MR_DistanceMap *_this, const MR_DistanceMap *rhs);

/// returns new Distance Map with cell-wise subtracted values. Invalid values remain only if both corresponding cells are invalid
/// Generated from a method of class `MR::DistanceMap` named `operator-`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rhs` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceMap_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceMap *MR_sub_MR_DistanceMap(const MR_DistanceMap *_this, const MR_DistanceMap *rhs);

/// replaces values with cell-wise subtracted values. Invalid values remain only if both corresponding cells are invalid
/// Generated from a method of class `MR::DistanceMap` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rhs` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_DistanceMap *MR_DistanceMap_sub_assign(MR_DistanceMap *_this, const MR_DistanceMap *rhs);

/// sets value in (X,Y) element (the coords must be valid, UB otherwise)
/// Generated from a method of class `MR::DistanceMap` named `set`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceMap_set_3(MR_DistanceMap *_this, MR_uint64_t x, MR_uint64_t y, float val);

/// sets value in index element (the coord must be valid, UB otherwise)
/// Generated from a method of class `MR::DistanceMap` named `set`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceMap_set_2(MR_DistanceMap *_this, MR_uint64_t i, float val);

/// sets all values at one time
/// Generated from a method of class `MR::DistanceMap` named `set`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceMap_set_1(MR_DistanceMap *_this, MR_PassBy data_pass_by, MR_std_vector_float *data);

/// invalidates value in (X,Y) element (the coords must be valid, UB otherwise)
/// Generated from a method of class `MR::DistanceMap` named `unset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceMap_unset_2(MR_DistanceMap *_this, MR_uint64_t x, MR_uint64_t y);

/// invalidates value in index element (the coord must be valid, UB otherwise)
/// Generated from a method of class `MR::DistanceMap` named `unset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceMap_unset_1(MR_DistanceMap *_this, MR_uint64_t i);

/// invalidates all elements
/// Generated from a method of class `MR::DistanceMap` named `invalidateAll`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceMap_invalidateAll(MR_DistanceMap *_this);

/// clears data, sets resolutions to zero
/// Generated from a method of class `MR::DistanceMap` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceMap_clear(MR_DistanceMap *_this);

/// returns new derivatives map without directions
/// Generated from a method of class `MR::DistanceMap` named `getDerivativeMap`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceMap_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceMap *MR_DistanceMap_getDerivativeMap(const MR_DistanceMap *_this);

/// returns new derivative maps with X and Y axes direction
/// Generated from a method of class `MR::DistanceMap` named `getXYDerivativeMaps`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_MR_DistanceMap_MR_DistanceMap_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_MR_DistanceMap_MR_DistanceMap *MR_DistanceMap_getXYDerivativeMaps(const MR_DistanceMap *_this);

/// computes single derivative map from XY spaces combined. Returns local maximums then
/// Generated from a method of class `MR::DistanceMap` named `getLocalMaximums`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_pair_uint64_t_uint64_t_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_pair_uint64_t_uint64_t *MR_DistanceMap_getLocalMaximums(const MR_DistanceMap *_this);

///returns X resolution
/// Generated from a method of class `MR::DistanceMap` named `resX`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_DistanceMap_resX(const MR_DistanceMap *_this);

///returns Y resolution
/// Generated from a method of class `MR::DistanceMap` named `resY`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_DistanceMap_resY(const MR_DistanceMap *_this);

///returns the number of pixels
/// Generated from a method of class `MR::DistanceMap` named `numPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_DistanceMap_numPoints(const MR_DistanceMap *_this);

/// finds minimum and maximum values
/// returns min_float and max_float if all values are invalid
/// Generated from a method of class `MR::DistanceMap` named `getMinMaxValues`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_float_float_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_float_float *MR_DistanceMap_getMinMaxValues(const MR_DistanceMap *_this);

/// finds minimum value X,Y
/// returns [-1.-1] if all values are invalid
/// Generated from a method of class `MR::DistanceMap` named `getMinIndex`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_uint64_t_uint64_t_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_uint64_t_uint64_t *MR_DistanceMap_getMinIndex(const MR_DistanceMap *_this);

/// finds maximum value X,Y
/// returns [-1.-1] if all values are invalid
/// Generated from a method of class `MR::DistanceMap` named `getMaxIndex`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_uint64_t_uint64_t_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_uint64_t_uint64_t *MR_DistanceMap_getMaxIndex(const MR_DistanceMap *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::DistanceMap` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_DistanceMap_heapBytes(const MR_DistanceMap *_this);

/// fill another distance map pair with gradients across X and Y axes of the argument map
/// Generated from function `MR::combineXYderivativeMaps`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceMap_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceMap *MR_combineXYderivativeMaps(MR_PassBy XYderivativeMaps_pass_by, MR_std_pair_MR_DistanceMap_MR_DistanceMap *XYderivativeMaps);

/// computes distance (height) map for given projection parameters
/// using float-precision for finding ray-mesh intersections, which is faster but less reliable
/// Generated from function `MR::computeDistanceMap`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Parameter `outSamples` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceMap_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceMap *MR_computeDistanceMap(const MR_MeshPart *mp, const MR_MeshToDistanceMapParams *params, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb, MR_std_vector_MR_MeshTriPoint *outSamples);

/// computes distance (height) map for given projection parameters
/// using double-precision for finding ray-mesh intersections, which is slower but more reliable
/// Generated from function `MR::computeDistanceMapD`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Parameter `outSamples` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceMap_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceMap *MR_computeDistanceMapD(const MR_MeshPart *mp, const MR_MeshToDistanceMapParams *params, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb, MR_std_vector_MR_MeshTriPoint *outSamples);

/// offset values for each undirected edge of given polyline
/// Returns a pointer to a member variable of class `MR::ContoursDistanceMapOffset` named `perEdgeOffset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeScalars *MR_ContoursDistanceMapOffset_Get_perEdgeOffset(const MR_ContoursDistanceMapOffset *_this);

/// Returns a pointer to a member variable of class `MR::ContoursDistanceMapOffset` named `type`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ContoursDistanceMapOffset_OffsetType *MR_ContoursDistanceMapOffset_Get_type(const MR_ContoursDistanceMapOffset *_this);

/// Modifies a member variable of class `MR::ContoursDistanceMapOffset` named `type`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ContoursDistanceMapOffset_Set_type(MR_ContoursDistanceMapOffset *_this, MR_ContoursDistanceMapOffset_OffsetType value);

/// Returns a mutable pointer to a member variable of class `MR::ContoursDistanceMapOffset` named `type`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ContoursDistanceMapOffset_OffsetType *MR_ContoursDistanceMapOffset_GetMutable_type(MR_ContoursDistanceMapOffset *_this);

/// Generated from a constructor of class `MR::ContoursDistanceMapOffset`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ContoursDistanceMapOffset_Destroy()` to free it when you're done using it.
MRC_API MR_ContoursDistanceMapOffset *MR_ContoursDistanceMapOffset_ConstructFromAnother(const MR_ContoursDistanceMapOffset *_other);

/// Constructs `MR::ContoursDistanceMapOffset` elementwise.
/// Parameter `perEdgeOffset` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ContoursDistanceMapOffset_Destroy()` to free it when you're done using it.
MRC_API MR_ContoursDistanceMapOffset *MR_ContoursDistanceMapOffset_ConstructFrom(const MR_UndirectedEdgeScalars *perEdgeOffset, MR_ContoursDistanceMapOffset_OffsetType type);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ContoursDistanceMapOffset *MR_ContoursDistanceMapOffset_OffsetPtr(const MR_ContoursDistanceMapOffset *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ContoursDistanceMapOffset *MR_ContoursDistanceMapOffset_OffsetMutablePtr(MR_ContoursDistanceMapOffset *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_ContoursDistanceMapOffset`. Does nothing if the pointer is null.
MRC_API void MR_ContoursDistanceMapOffset_Destroy(const MR_ContoursDistanceMapOffset *_this);

/// Destroys a heap-allocated array of `MR_ContoursDistanceMapOffset`. Does nothing if the pointer is null.
MRC_API void MR_ContoursDistanceMapOffset_DestroyArray(const MR_ContoursDistanceMapOffset *_this);

/// Returns a pointer to a member variable of class `MR::ContoursDistanceMapOptions` named `signMethod`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ContoursDistanceMapOptions_SignedDetectionMethod *MR_ContoursDistanceMapOptions_Get_signMethod(const MR_ContoursDistanceMapOptions *_this);

/// Modifies a member variable of class `MR::ContoursDistanceMapOptions` named `signMethod`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ContoursDistanceMapOptions_Set_signMethod(MR_ContoursDistanceMapOptions *_this, MR_ContoursDistanceMapOptions_SignedDetectionMethod value);

/// Returns a mutable pointer to a member variable of class `MR::ContoursDistanceMapOptions` named `signMethod`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ContoursDistanceMapOptions_SignedDetectionMethod *MR_ContoursDistanceMapOptions_GetMutable_signMethod(MR_ContoursDistanceMapOptions *_this);

/// optional input offset for each edges of polyline, find more on `ContoursDistanceMapOffset` structure description
/// Returns a pointer to a member variable of class `MR::ContoursDistanceMapOptions` named `offsetParameters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ContoursDistanceMapOffset *const *MR_ContoursDistanceMapOptions_Get_offsetParameters(const MR_ContoursDistanceMapOptions *_this);

/// optional input offset for each edges of polyline, find more on `ContoursDistanceMapOffset` structure description
/// Modifies a member variable of class `MR::ContoursDistanceMapOptions` named `offsetParameters`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ContoursDistanceMapOptions_Set_offsetParameters(MR_ContoursDistanceMapOptions *_this, const MR_ContoursDistanceMapOffset *value);

/// optional input offset for each edges of polyline, find more on `ContoursDistanceMapOffset` structure description
/// Returns a mutable pointer to a member variable of class `MR::ContoursDistanceMapOptions` named `offsetParameters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ContoursDistanceMapOffset **MR_ContoursDistanceMapOptions_GetMutable_offsetParameters(MR_ContoursDistanceMapOptions *_this);

/// if pointer is valid, then only these pixels will be filled
/// Returns a pointer to a member variable of class `MR::ContoursDistanceMapOptions` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PixelBitSet *const *MR_ContoursDistanceMapOptions_Get_region(const MR_ContoursDistanceMapOptions *_this);

/// if pointer is valid, then only these pixels will be filled
/// Modifies a member variable of class `MR::ContoursDistanceMapOptions` named `region`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ContoursDistanceMapOptions_Set_region(MR_ContoursDistanceMapOptions *_this, const MR_PixelBitSet *value);

/// if pointer is valid, then only these pixels will be filled
/// Returns a mutable pointer to a member variable of class `MR::ContoursDistanceMapOptions` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PixelBitSet **MR_ContoursDistanceMapOptions_GetMutable_region(MR_ContoursDistanceMapOptions *_this);

/// optional output vector of closest polyline edge per each pixel of distance map
/// Returns a pointer to a member variable of class `MR::ContoursDistanceMapOptions` named `outClosestEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_UndirectedEdgeId *const *MR_ContoursDistanceMapOptions_Get_outClosestEdges(const MR_ContoursDistanceMapOptions *_this);

/// optional output vector of closest polyline edge per each pixel of distance map
/// Modifies a member variable of class `MR::ContoursDistanceMapOptions` named `outClosestEdges`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ContoursDistanceMapOptions_Set_outClosestEdges(MR_ContoursDistanceMapOptions *_this, MR_std_vector_MR_UndirectedEdgeId *value);

/// optional output vector of closest polyline edge per each pixel of distance map
/// Returns a mutable pointer to a member variable of class `MR::ContoursDistanceMapOptions` named `outClosestEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_UndirectedEdgeId **MR_ContoursDistanceMapOptions_GetMutable_outClosestEdges(MR_ContoursDistanceMapOptions *_this);

/// minimum value (or absolute value if offsetParameters == nullptr) in a pixel of distance map (lower values can be present but they are not precise)
/// Returns a pointer to a member variable of class `MR::ContoursDistanceMapOptions` named `minDist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ContoursDistanceMapOptions_Get_minDist(const MR_ContoursDistanceMapOptions *_this);

/// minimum value (or absolute value if offsetParameters == nullptr) in a pixel of distance map (lower values can be present but they are not precise)
/// Modifies a member variable of class `MR::ContoursDistanceMapOptions` named `minDist`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ContoursDistanceMapOptions_Set_minDist(MR_ContoursDistanceMapOptions *_this, float value);

/// minimum value (or absolute value if offsetParameters == nullptr) in a pixel of distance map (lower values can be present but they are not precise)
/// Returns a mutable pointer to a member variable of class `MR::ContoursDistanceMapOptions` named `minDist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ContoursDistanceMapOptions_GetMutable_minDist(MR_ContoursDistanceMapOptions *_this);

/// maximum value (or absolute value if offsetParameters == nullptr) in a pixel of distance map (larger values cannot be present)
/// Returns a pointer to a member variable of class `MR::ContoursDistanceMapOptions` named `maxDist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ContoursDistanceMapOptions_Get_maxDist(const MR_ContoursDistanceMapOptions *_this);

/// maximum value (or absolute value if offsetParameters == nullptr) in a pixel of distance map (larger values cannot be present)
/// Modifies a member variable of class `MR::ContoursDistanceMapOptions` named `maxDist`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ContoursDistanceMapOptions_Set_maxDist(MR_ContoursDistanceMapOptions *_this, float value);

/// maximum value (or absolute value if offsetParameters == nullptr) in a pixel of distance map (larger values cannot be present)
/// Returns a mutable pointer to a member variable of class `MR::ContoursDistanceMapOptions` named `maxDist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ContoursDistanceMapOptions_GetMutable_maxDist(MR_ContoursDistanceMapOptions *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ContoursDistanceMapOptions_Destroy()` to free it when you're done using it.
MRC_API MR_ContoursDistanceMapOptions *MR_ContoursDistanceMapOptions_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ContoursDistanceMapOptions_DestroyArray()`.
/// Use `MR_ContoursDistanceMapOptions_OffsetMutablePtr()` and `MR_ContoursDistanceMapOptions_OffsetPtr()` to access the array elements.
MRC_API MR_ContoursDistanceMapOptions *MR_ContoursDistanceMapOptions_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::ContoursDistanceMapOptions` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ContoursDistanceMapOptions_Destroy()` to free it when you're done using it.
MRC_API MR_ContoursDistanceMapOptions *MR_ContoursDistanceMapOptions_ConstructFrom(MR_ContoursDistanceMapOptions_SignedDetectionMethod signMethod, const MR_ContoursDistanceMapOffset *offsetParameters, const MR_PixelBitSet *region, MR_std_vector_MR_UndirectedEdgeId *outClosestEdges, float minDist, float maxDist);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ContoursDistanceMapOptions *MR_ContoursDistanceMapOptions_OffsetPtr(const MR_ContoursDistanceMapOptions *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ContoursDistanceMapOptions *MR_ContoursDistanceMapOptions_OffsetMutablePtr(MR_ContoursDistanceMapOptions *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ContoursDistanceMapOptions`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ContoursDistanceMapOptions_Destroy()` to free it when you're done using it.
MRC_API MR_ContoursDistanceMapOptions *MR_ContoursDistanceMapOptions_ConstructFromAnother(const MR_ContoursDistanceMapOptions *_other);

/// Destroys a heap-allocated instance of `MR_ContoursDistanceMapOptions`. Does nothing if the pointer is null.
MRC_API void MR_ContoursDistanceMapOptions_Destroy(const MR_ContoursDistanceMapOptions *_this);

/// Destroys a heap-allocated array of `MR_ContoursDistanceMapOptions`. Does nothing if the pointer is null.
MRC_API void MR_ContoursDistanceMapOptions_DestroyArray(const MR_ContoursDistanceMapOptions *_this);

/// Generated from a method of class `MR::ContoursDistanceMapOptions` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ContoursDistanceMapOptions *MR_ContoursDistanceMapOptions_AssignFromAnother(MR_ContoursDistanceMapOptions *_this, const MR_ContoursDistanceMapOptions *_other);

/**
* \brief Computes distance of 2d contours according ContourToDistanceMapParams
* \param options - optional input and output options for distance map calculation, find more \ref ContoursDistanceMapOptions
*/
/// Generated from function `MR::distanceMapFromContours`.
/// Parameter `contours` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Parameter `options` is a single object.
/// Parameter `options` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceMap_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceMap *MR_distanceMapFromContours_3(const MR_Polyline2 *contours, const MR_ContourToDistanceMapParams *params, const MR_ContoursDistanceMapOptions *options);

/**
* \brief Computes distance of 2d contours according ContourToDistanceMapParams
* \param distMap - preallocated distance map
* \param options - optional input and output options for distance map calculation, find more \ref ContoursDistanceMapOptions
*/
/// Generated from function `MR::distanceMapFromContours`.
/// Parameter `distMap` can not be null. It is a single object.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Parameter `options` is a single object.
/// Parameter `options` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_distanceMapFromContours_4(MR_DistanceMap *distMap, const MR_Polyline2 *polyline, const MR_ContourToDistanceMapParams *params, const MR_ContoursDistanceMapOptions *options);

/// Makes distance map and filter out pixels with large (>threshold) distance between closest points on contour in neighbor pixels
/// Converts such points back in 3d space and return
/// \note that polyline topology should be consistently oriented
/// Generated from function `MR::edgePointsFromContours`.
/// Parameter `polyline` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_Vector3f *MR_edgePointsFromContours(const MR_Polyline2 *polyline, float pixelSize, float threshold);

/// converts distance map to 2d iso-lines:
/// iso-lines are created in space DistanceMap ( plane OXY with pixelSize = (1, 1) )
/// Generated from function `MR::distanceMapTo2DIsoPolyline`.
/// Parameter `distMap` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polyline2_Destroy()` to free it when you're done using it.
MRC_API MR_Polyline2 *MR_distanceMapTo2DIsoPolyline_2(const MR_DistanceMap *distMap, float isoValue);

/// iso-lines are created in real space ( plane OXY with parameters according ContourToDistanceMapParams )
/// Generated from function `MR::distanceMapTo2DIsoPolyline`.
/// Parameter `distMap` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polyline2_Destroy()` to free it when you're done using it.
MRC_API MR_Polyline2 *MR_distanceMapTo2DIsoPolyline_3_MR_ContourToDistanceMapParams(const MR_DistanceMap *distMap, const MR_ContourToDistanceMapParams *params, float isoValue);

/// computes iso-lines of distance map corresponding to given iso-value;
/// in second returns the transformation from 0XY plane to world;
/// \param useDepth true - the isolines will be located on distance map surface, false - isolines for any iso-value will be located on the common plane xf(0XY)
/// Generated from function `MR::distanceMapTo2DIsoPolyline`.
/// Parameter `distMap` can not be null. It is a single object.
/// Parameter `xf` can not be null. It is a single object.
/// Parameter `useDepth` has a default argument: `false`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_MR_Polyline2_MR_AffineXf3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_MR_Polyline2_MR_AffineXf3f *MR_distanceMapTo2DIsoPolyline_4(const MR_DistanceMap *distMap, const MR_AffineXf3f *xf, float isoValue, const bool *useDepth);

/// Generated from function `MR::distanceMapTo2DIsoPolyline`.
/// Parameter `distMap` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polyline2_Destroy()` to free it when you're done using it.
MRC_API MR_Polyline2 *MR_distanceMapTo2DIsoPolyline_3_float(const MR_DistanceMap *distMap, float pixelSize, float isoValue);

/// constructs an offset contour for given polyline
/// Generated from function `MR::polylineOffset`.
/// Parameter `polyline` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polyline2_Destroy()` to free it when you're done using it.
MRC_API MR_Polyline2 *MR_polylineOffset(const MR_Polyline2 *polyline, float pixelSize, float offset);

/**
* \brief computes the union of the shapes bounded by input 2d contours
* \return the boundary of the union
* \details input contours must be closed within the area of distance map and be consistently oriented (clockwise, that is leaving the bounded shapes from the left).
* the value of params.withSign must be true (checked with assert() inside the function)
* \note that polyline topology should be consistently oriented
*/
/// Generated from function `MR::contourUnion`.
/// Parameter `contoursA` can not be null. It is a single object.
/// Parameter `contoursB` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Parameter `offsetInside` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polyline2_Destroy()` to free it when you're done using it.
MRC_API MR_Polyline2 *MR_contourUnion(const MR_Polyline2 *contoursA, const MR_Polyline2 *contoursB, const MR_ContourToDistanceMapParams *params, const float *offsetInside);

/**
* \brief computes the intersection of the shapes bounded by input 2d contours
* \return the boundary of the intersection
* \details input contours must be closed within the area of distance map and be consistently oriented (clockwise, that is leaving the bounded shapes from the left).
* the value of params.withSign must be true (checked with assert() inside the function)
* \note that polyline topology should be consistently oriented
*/
/// Generated from function `MR::contourIntersection`.
/// Parameter `contoursA` can not be null. It is a single object.
/// Parameter `contoursB` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Parameter `offsetInside` has a default argument: `0.F`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polyline2_Destroy()` to free it when you're done using it.
MRC_API MR_Polyline2 *MR_contourIntersection(const MR_Polyline2 *contoursA, const MR_Polyline2 *contoursB, const MR_ContourToDistanceMapParams *params, const float *offsetInside);

/**
* \brief computes the difference between the shapes bounded by contoursA and the shapes bounded by contoursB
* \return the boundary of the difference
* \details input contours must be closed within the area of distance map and be consistently oriented (clockwise, that is leaving the bounded shapes from the left).
* the value of params.withSign must be true (checked with assert() inside the function)
* \note that polyline topology should be consistently oriented
*/
/// Generated from function `MR::contourSubtract`.
/// Parameter `contoursA` can not be null. It is a single object.
/// Parameter `contoursB` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Parameter `offsetInside` has a default argument: `0.F`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polyline2_Destroy()` to free it when you're done using it.
MRC_API MR_Polyline2 *MR_contourSubtract(const MR_Polyline2 *contoursA, const MR_Polyline2 *contoursB, const MR_ContourToDistanceMapParams *params, const float *offsetInside);

/// converts distance map into mesh and applies a transformation to all points
/// Generated from function `MR::distanceMapToMesh`.
/// Parameter `distMap` can not be null. It is a single object.
/// Parameter `toWorld` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_distanceMapToMesh(const MR_DistanceMap *distMap, const MR_AffineXf3f *toWorld, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// export distance map to a grayscale image
/// \param threshold - threshold of valid values [0.; 1.]. pixel with color less then threshold set invalid
/// Generated from function `MR::convertDistanceMapToImage`.
/// Parameter `distMap` can not be null. It is a single object.
/// Parameter `threshold` has a default argument: `1.F / 255`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Image_Destroy()` to free it when you're done using it.
MRC_API MR_Image *MR_convertDistanceMapToImage(const MR_DistanceMap *distMap, const float *threshold);

/// load distance map from a grayscale image:
/// \param threshold - threshold of valid values [0.; 1.]. pixel with color less then threshold set invalid
/// \param invert - whether to invert values (min is white) or leave them as is (min is block)
/// Generated from function `MR::convertImageToDistanceMap`.
/// Parameter `image` can not be null. It is a single object.
/// Parameter `threshold` has a default argument: `1.F / 255`, pass a null pointer to use it.
/// Parameter `invert` has a default argument: `true`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_DistanceMap_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_DistanceMap_std_string *MR_convertImageToDistanceMap(const MR_Image *image, const float *threshold, const bool *invert);

#ifdef __cplusplus
} // extern "C"
#endif
