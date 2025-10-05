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

typedef struct MR_BitSet MR_BitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.


/// Generated from class `MR::MarkedContour3f`.
typedef struct MR_MarkedContour3f MR_MarkedContour3f;

/// Generated from class `MR::SplineSettings`.
typedef struct MR_SplineSettings MR_SplineSettings;

/// Returns a pointer to a member variable of class `MR::MarkedContour3f` named `contour`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_Vector3f *MR_MarkedContour3f_Get_contour(const MR_MarkedContour3f *_this);

/// Modifies a member variable of class `MR::MarkedContour3f` named `contour`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MarkedContour3f_Set_contour(MR_MarkedContour3f *_this, MR_PassBy value_pass_by, MR_std_vector_MR_Vector3f *value);

/// Returns a mutable pointer to a member variable of class `MR::MarkedContour3f` named `contour`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_Vector3f *MR_MarkedContour3f_GetMutable_contour(MR_MarkedContour3f *_this);

///< indices of control (marked) points
/// Returns a pointer to a member variable of class `MR::MarkedContour3f` named `marks`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_BitSet *MR_MarkedContour3f_Get_marks(const MR_MarkedContour3f *_this);

///< indices of control (marked) points
/// Modifies a member variable of class `MR::MarkedContour3f` named `marks`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MarkedContour3f_Set_marks(MR_MarkedContour3f *_this, MR_PassBy value_pass_by, MR_BitSet *value);

///< indices of control (marked) points
/// Returns a mutable pointer to a member variable of class `MR::MarkedContour3f` named `marks`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BitSet *MR_MarkedContour3f_GetMutable_marks(MR_MarkedContour3f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MarkedContour3f_Destroy()` to free it when you're done using it.
MRC_API MR_MarkedContour3f *MR_MarkedContour3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MarkedContour3f_DestroyArray()`.
/// Use `MR_MarkedContour3f_OffsetMutablePtr()` and `MR_MarkedContour3f_OffsetPtr()` to access the array elements.
MRC_API MR_MarkedContour3f *MR_MarkedContour3f_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MarkedContour3f` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MarkedContour3f_Destroy()` to free it when you're done using it.
MRC_API MR_MarkedContour3f *MR_MarkedContour3f_ConstructFrom(MR_PassBy contour_pass_by, MR_std_vector_MR_Vector3f *contour, MR_PassBy marks_pass_by, MR_BitSet *marks);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MarkedContour3f *MR_MarkedContour3f_OffsetPtr(const MR_MarkedContour3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MarkedContour3f *MR_MarkedContour3f_OffsetMutablePtr(MR_MarkedContour3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MarkedContour3f`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MarkedContour3f_Destroy()` to free it when you're done using it.
MRC_API MR_MarkedContour3f *MR_MarkedContour3f_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MarkedContour3f *_other);

/// Destroys a heap-allocated instance of `MR_MarkedContour3f`. Does nothing if the pointer is null.
MRC_API void MR_MarkedContour3f_Destroy(const MR_MarkedContour3f *_this);

/// Destroys a heap-allocated array of `MR_MarkedContour3f`. Does nothing if the pointer is null.
MRC_API void MR_MarkedContour3f_DestroyArray(const MR_MarkedContour3f *_this);

/// Generated from a method of class `MR::MarkedContour3f` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MarkedContour3f *MR_MarkedContour3f_AssignFromAnother(MR_MarkedContour3f *_this, MR_PassBy _other_pass_by, MR_MarkedContour3f *_other);

/// Generated from function `MR::isClosed`.
/// Parameter `c` can not be null. It is a single object.
MRC_API bool MR_isClosed_std_vector_MR_Vector3f(const MR_std_vector_MR_Vector3f *c);

/// \return marked contour with all points from (in) marked
/// Generated from function `MR::markedContour`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MarkedContour3f_Destroy()` to free it when you're done using it.
MRC_API MR_MarkedContour3f *MR_markedContour(MR_PassBy in_pass_by, MR_std_vector_MR_Vector3f *in);

/// \return marked contour with only first and last points from (in) marked
/// Generated from function `MR::markedFirstLast`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MarkedContour3f_Destroy()` to free it when you're done using it.
MRC_API MR_MarkedContour3f *MR_markedFirstLast(MR_PassBy in_pass_by, MR_std_vector_MR_Vector3f *in);

/// keeps all marked points from input contour and adds/removes other points to have them as many as possible,
/// but at the distance along the input line not shorter than (minStep) from their neighbor points
/// \param normals optional parameter with the normals of input points that will be resampled to become normals of output points
/// Generated from function `MR::resample`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `normals` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MarkedContour3f_Destroy()` to free it when you're done using it.
MRC_API MR_MarkedContour3f *MR_resample(const MR_MarkedContour3f *in, float minStep, MR_std_vector_MR_Vector3f *normals);

/// \param in input marked contour
/// \param markStability a positive value, the more the value the closer marked points will be to their original positions
/// \param normals if provided the curve at marked points will try to be orthogonal to given normal there
/// \return contour with same number of points and same marked, where each return point tries to be on a smooth curve
/// Generated from function `MR::makeSpline`.
/// Parameter `markStability` has a default argument: `1`, pass a null pointer to use it.
/// Parameter `normals` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MarkedContour3f_Destroy()` to free it when you're done using it.
MRC_API MR_MarkedContour3f *MR_makeSpline_3_float(MR_PassBy in_pass_by, MR_MarkedContour3f *in, const float *markStability, const MR_std_vector_MR_Vector3f *normals);

/// \param in input marked contour
/// \param normals the curve at marked points will try to be orthogonal to given normal there
/// \param markStability a positive value, the more the value the closer marked points will be to their original positions
/// \return contour with same number of points and same marked, where each return point tries to be on a smooth curve
/// Generated from function `MR::makeSpline`.
/// Parameter `normals` can not be null. It is a single object.
/// Parameter `markStability` has a default argument: `1`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MarkedContour3f_Destroy()` to free it when you're done using it.
MRC_API MR_MarkedContour3f *MR_makeSpline_3_std_vector_MR_Vector3f(MR_PassBy in_pass_by, MR_MarkedContour3f *in, const MR_std_vector_MR_Vector3f *normals, const float *markStability);

/// additional points will be added between each pair of control points,
/// until the distance between neighbor points becomes less than this distance
/// Returns a pointer to a member variable of class `MR::SplineSettings` named `samplingStep`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SplineSettings_Get_samplingStep(const MR_SplineSettings *_this);

/// additional points will be added between each pair of control points,
/// until the distance between neighbor points becomes less than this distance
/// Modifies a member variable of class `MR::SplineSettings` named `samplingStep`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SplineSettings_Set_samplingStep(MR_SplineSettings *_this, float value);

/// additional points will be added between each pair of control points,
/// until the distance between neighbor points becomes less than this distance
/// Returns a mutable pointer to a member variable of class `MR::SplineSettings` named `samplingStep`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SplineSettings_GetMutable_samplingStep(MR_SplineSettings *_this);

/// a positive value, the more the value the closer resulting spline will be to given control points
/// Returns a pointer to a member variable of class `MR::SplineSettings` named `controlStability`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SplineSettings_Get_controlStability(const MR_SplineSettings *_this);

/// a positive value, the more the value the closer resulting spline will be to given control points
/// Modifies a member variable of class `MR::SplineSettings` named `controlStability`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SplineSettings_Set_controlStability(MR_SplineSettings *_this, float value);

/// a positive value, the more the value the closer resulting spline will be to given control points
/// Returns a mutable pointer to a member variable of class `MR::SplineSettings` named `controlStability`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SplineSettings_GetMutable_controlStability(MR_SplineSettings *_this);

/// the shape of resulting spline depends on the total number of points in the contour,
/// which in turn depends on the length of input contour being sampled;
/// setting iterations greater than one allows you to pass a constructed spline as a better input contour to the next run of the algorithm
/// Returns a pointer to a member variable of class `MR::SplineSettings` named `iterations`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SplineSettings_Get_iterations(const MR_SplineSettings *_this);

/// the shape of resulting spline depends on the total number of points in the contour,
/// which in turn depends on the length of input contour being sampled;
/// setting iterations greater than one allows you to pass a constructed spline as a better input contour to the next run of the algorithm
/// Modifies a member variable of class `MR::SplineSettings` named `iterations`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SplineSettings_Set_iterations(MR_SplineSettings *_this, int32_t value);

/// the shape of resulting spline depends on the total number of points in the contour,
/// which in turn depends on the length of input contour being sampled;
/// setting iterations greater than one allows you to pass a constructed spline as a better input contour to the next run of the algorithm
/// Returns a mutable pointer to a member variable of class `MR::SplineSettings` named `iterations`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SplineSettings_GetMutable_iterations(MR_SplineSettings *_this);

/// optional parameter with the normals of input points that will be resampled to become normals of output points
/// Returns a pointer to a member variable of class `MR::SplineSettings` named `normals`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_Vector3f *const *MR_SplineSettings_Get_normals(const MR_SplineSettings *_this);

/// optional parameter with the normals of input points that will be resampled to become normals of output points
/// Modifies a member variable of class `MR::SplineSettings` named `normals`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SplineSettings_Set_normals(MR_SplineSettings *_this, MR_std_vector_MR_Vector3f *value);

/// optional parameter with the normals of input points that will be resampled to become normals of output points
/// Returns a mutable pointer to a member variable of class `MR::SplineSettings` named `normals`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_Vector3f **MR_SplineSettings_GetMutable_normals(MR_SplineSettings *_this);

/// if true and normals are provided, then the curve at marked points will try to be orthogonal to given normal there
/// Returns a pointer to a member variable of class `MR::SplineSettings` named `normalsAffectShape`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SplineSettings_Get_normalsAffectShape(const MR_SplineSettings *_this);

/// if true and normals are provided, then the curve at marked points will try to be orthogonal to given normal there
/// Modifies a member variable of class `MR::SplineSettings` named `normalsAffectShape`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SplineSettings_Set_normalsAffectShape(MR_SplineSettings *_this, bool value);

/// if true and normals are provided, then the curve at marked points will try to be orthogonal to given normal there
/// Returns a mutable pointer to a member variable of class `MR::SplineSettings` named `normalsAffectShape`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SplineSettings_GetMutable_normalsAffectShape(MR_SplineSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SplineSettings_Destroy()` to free it when you're done using it.
MRC_API MR_SplineSettings *MR_SplineSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SplineSettings_DestroyArray()`.
/// Use `MR_SplineSettings_OffsetMutablePtr()` and `MR_SplineSettings_OffsetPtr()` to access the array elements.
MRC_API MR_SplineSettings *MR_SplineSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::SplineSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SplineSettings_Destroy()` to free it when you're done using it.
MRC_API MR_SplineSettings *MR_SplineSettings_ConstructFrom(float samplingStep, float controlStability, int32_t iterations, MR_std_vector_MR_Vector3f *normals, bool normalsAffectShape);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SplineSettings *MR_SplineSettings_OffsetPtr(const MR_SplineSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SplineSettings *MR_SplineSettings_OffsetMutablePtr(MR_SplineSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SplineSettings`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SplineSettings_Destroy()` to free it when you're done using it.
MRC_API MR_SplineSettings *MR_SplineSettings_ConstructFromAnother(const MR_SplineSettings *_other);

/// Destroys a heap-allocated instance of `MR_SplineSettings`. Does nothing if the pointer is null.
MRC_API void MR_SplineSettings_Destroy(const MR_SplineSettings *_this);

/// Destroys a heap-allocated array of `MR_SplineSettings`. Does nothing if the pointer is null.
MRC_API void MR_SplineSettings_DestroyArray(const MR_SplineSettings *_this);

/// Generated from a method of class `MR::SplineSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SplineSettings *MR_SplineSettings_AssignFromAnother(MR_SplineSettings *_this, const MR_SplineSettings *_other);

/// \param controlPoints ordered point the spline to interpolate
/// \return spline contour with same or more points than initially given, marks field highlights the points corresponding to input ones
/// Generated from function `MR::makeSpline`.
/// Parameter `controlPoints` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MarkedContour3f_Destroy()` to free it when you're done using it.
MRC_API MR_MarkedContour3f *MR_makeSpline_2(const MR_std_vector_MR_Vector3f *controlPoints, const MR_SplineSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
