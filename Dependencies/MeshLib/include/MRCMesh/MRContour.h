// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_vector_MR_Vector2d MR_std_vector_MR_Vector2d; // Defined in `#include <MRCMisc/std_vector_MR_Vector2d.h>`.
typedef struct MR_std_vector_MR_Vector2f MR_std_vector_MR_Vector2f; // Defined in `#include <MRCMisc/std_vector_MR_Vector2f.h>`.
typedef struct MR_std_vector_MR_Vector3d MR_std_vector_MR_Vector3d; // Defined in `#include <MRCMisc/std_vector_MR_Vector3d.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.
typedef struct MR_std_vector_std_vector_MR_Vector2d MR_std_vector_std_vector_MR_Vector2d; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_Vector2d.h>`.
typedef struct MR_std_vector_std_vector_MR_Vector2f MR_std_vector_std_vector_MR_Vector2f; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_Vector2f.h>`.
typedef struct MR_std_vector_std_vector_MR_Vector3d MR_std_vector_std_vector_MR_Vector3d; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_Vector3d.h>`.
typedef struct MR_std_vector_std_vector_MR_Vector3f MR_std_vector_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_Vector3f.h>`.


/// >0 for clockwise loop, < 0 for CCW loop
/// \tparam R is the type for the accumulation and for result
/// Generated from function `MR::calcOrientedArea<float, float>`.
/// Parameter `contour` can not be null. It is a single object.
MRC_API float MR_calcOrientedArea_float_float_std_vector_MR_Vector2f(const MR_std_vector_MR_Vector2f *contour);

/// >0 for clockwise loop, < 0 for CCW loop
/// \tparam R is the type for the accumulation and for result
/// Generated from function `MR::calcOrientedArea<double, double>`.
/// Parameter `contour` can not be null. It is a single object.
MRC_API double MR_calcOrientedArea_double_double_std_vector_MR_Vector2d(const MR_std_vector_MR_Vector2d *contour);

/// returns the vector with the magnitude equal to contour area, and directed to see the contour
/// in ccw order from the vector tip
/// \tparam R is the type for the accumulation and for result
/// Generated from function `MR::calcOrientedArea<float, float>`.
/// Parameter `contour` can not be null. It is a single object.
MRC_API MR_Vector3f MR_calcOrientedArea_float_float_std_vector_MR_Vector3f(const MR_std_vector_MR_Vector3f *contour);

/// returns the vector with the magnitude equal to contour area, and directed to see the contour
/// in ccw order from the vector tip
/// \tparam R is the type for the accumulation and for result
/// Generated from function `MR::calcOrientedArea<double, double>`.
/// Parameter `contour` can not be null. It is a single object.
MRC_API MR_Vector3d MR_calcOrientedArea_double_double_std_vector_MR_Vector3d(const MR_std_vector_MR_Vector3d *contour);

/// returns sum length of the given contour
/// \tparam R is the type for the accumulation and for result
/// Generated from function `MR::calcLength<MR::Vector2f, float>`.
/// Parameter `contour` can not be null. It is a single object.
MRC_API float MR_calcLength_MR_Vector2f_float(const MR_std_vector_MR_Vector2f *contour);

/// returns sum length of the given contour
/// \tparam R is the type for the accumulation and for result
/// Generated from function `MR::calcLength<MR::Vector2d, double>`.
/// Parameter `contour` can not be null. It is a single object.
MRC_API double MR_calcLength_MR_Vector2d_double(const MR_std_vector_MR_Vector2d *contour);

/// returns sum length of the given contour
/// \tparam R is the type for the accumulation and for result
/// Generated from function `MR::calcLength<MR::Vector3f, float>`.
/// Parameter `contour` can not be null. It is a single object.
MRC_API float MR_calcLength_MR_Vector3f_float(const MR_std_vector_MR_Vector3f *contour);

/// returns sum length of the given contour
/// \tparam R is the type for the accumulation and for result
/// Generated from function `MR::calcLength<MR::Vector3d, double>`.
/// Parameter `contour` can not be null. It is a single object.
MRC_API double MR_calcLength_MR_Vector3d_double(const MR_std_vector_MR_Vector3d *contour);

// Instantiate the templates when generating bindings.
/// Generated from function `MR::convertContourTo2f<std::vector<MR::Vector2f>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_Vector2f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_Vector2f *MR_convertContourTo2f_std_vector_MR_Vector2f(const MR_std_vector_MR_Vector2f *from);

// Instantiate the templates when generating bindings.
/// Generated from function `MR::convertContourTo2f<std::vector<MR::Vector2d>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_Vector2f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_Vector2f *MR_convertContourTo2f_std_vector_MR_Vector2d(const MR_std_vector_MR_Vector2d *from);

// Instantiate the templates when generating bindings.
/// Generated from function `MR::convertContourTo2f<std::vector<MR::Vector3f>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_Vector2f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_Vector2f *MR_convertContourTo2f_std_vector_MR_Vector3f(const MR_std_vector_MR_Vector3f *from);

// Instantiate the templates when generating bindings.
/// Generated from function `MR::convertContourTo2f<std::vector<MR::Vector3d>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_Vector2f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_Vector2f *MR_convertContourTo2f_std_vector_MR_Vector3d(const MR_std_vector_MR_Vector3d *from);

/// Generated from function `MR::convertContourTo3f<std::vector<MR::Vector2f>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_Vector3f *MR_convertContourTo3f_std_vector_MR_Vector2f(const MR_std_vector_MR_Vector2f *from);

/// Generated from function `MR::convertContourTo3f<std::vector<MR::Vector2d>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_Vector3f *MR_convertContourTo3f_std_vector_MR_Vector2d(const MR_std_vector_MR_Vector2d *from);

/// Generated from function `MR::convertContourTo3f<std::vector<MR::Vector3f>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_Vector3f *MR_convertContourTo3f_std_vector_MR_Vector3f(const MR_std_vector_MR_Vector3f *from);

/// Generated from function `MR::convertContourTo3f<std::vector<MR::Vector3d>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_Vector3f *MR_convertContourTo3f_std_vector_MR_Vector3d(const MR_std_vector_MR_Vector3d *from);

/// Generated from function `MR::convertContourTo2d<std::vector<MR::Vector2f>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_Vector2d_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_Vector2d *MR_convertContourTo2d_std_vector_MR_Vector2f(const MR_std_vector_MR_Vector2f *from);

/// Generated from function `MR::convertContourTo2d<std::vector<MR::Vector2d>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_Vector2d_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_Vector2d *MR_convertContourTo2d_std_vector_MR_Vector2d(const MR_std_vector_MR_Vector2d *from);

/// Generated from function `MR::convertContourTo2d<std::vector<MR::Vector3f>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_Vector2d_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_Vector2d *MR_convertContourTo2d_std_vector_MR_Vector3f(const MR_std_vector_MR_Vector3f *from);

/// Generated from function `MR::convertContourTo2d<std::vector<MR::Vector3d>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_Vector2d_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_Vector2d *MR_convertContourTo2d_std_vector_MR_Vector3d(const MR_std_vector_MR_Vector3d *from);

/// Generated from function `MR::convertContourTo3d<std::vector<MR::Vector2f>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_Vector3d_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_Vector3d *MR_convertContourTo3d_std_vector_MR_Vector2f(const MR_std_vector_MR_Vector2f *from);

/// Generated from function `MR::convertContourTo3d<std::vector<MR::Vector2d>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_Vector3d_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_Vector3d *MR_convertContourTo3d_std_vector_MR_Vector2d(const MR_std_vector_MR_Vector2d *from);

/// Generated from function `MR::convertContourTo3d<std::vector<MR::Vector3f>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_Vector3d_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_Vector3d *MR_convertContourTo3d_std_vector_MR_Vector3f(const MR_std_vector_MR_Vector3f *from);

/// Generated from function `MR::convertContourTo3d<std::vector<MR::Vector3d>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_Vector3d_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_Vector3d *MR_convertContourTo3d_std_vector_MR_Vector3d(const MR_std_vector_MR_Vector3d *from);

/// Generated from function `MR::convertContoursTo2f<std::vector<std::vector<MR::Vector2f>>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector2f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector2f *MR_convertContoursTo2f_std_vector_std_vector_MR_Vector2f(const MR_std_vector_std_vector_MR_Vector2f *from);

/// Generated from function `MR::convertContoursTo2f<std::vector<std::vector<MR::Vector2d>>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector2f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector2f *MR_convertContoursTo2f_std_vector_std_vector_MR_Vector2d(const MR_std_vector_std_vector_MR_Vector2d *from);

/// Generated from function `MR::convertContoursTo2f<std::vector<std::vector<MR::Vector3f>>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector2f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector2f *MR_convertContoursTo2f_std_vector_std_vector_MR_Vector3f(const MR_std_vector_std_vector_MR_Vector3f *from);

/// Generated from function `MR::convertContoursTo2f<std::vector<std::vector<MR::Vector3d>>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector2f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector2f *MR_convertContoursTo2f_std_vector_std_vector_MR_Vector3d(const MR_std_vector_std_vector_MR_Vector3d *from);

/// Generated from function `MR::convertContoursTo3f<std::vector<std::vector<MR::Vector2f>>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector3f *MR_convertContoursTo3f_std_vector_std_vector_MR_Vector2f(const MR_std_vector_std_vector_MR_Vector2f *from);

/// Generated from function `MR::convertContoursTo3f<std::vector<std::vector<MR::Vector2d>>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector3f *MR_convertContoursTo3f_std_vector_std_vector_MR_Vector2d(const MR_std_vector_std_vector_MR_Vector2d *from);

/// Generated from function `MR::convertContoursTo3f<std::vector<std::vector<MR::Vector3f>>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector3f *MR_convertContoursTo3f_std_vector_std_vector_MR_Vector3f(const MR_std_vector_std_vector_MR_Vector3f *from);

/// Generated from function `MR::convertContoursTo3f<std::vector<std::vector<MR::Vector3d>>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector3f *MR_convertContoursTo3f_std_vector_std_vector_MR_Vector3d(const MR_std_vector_std_vector_MR_Vector3d *from);

/// Generated from function `MR::convertContoursTo2d<std::vector<std::vector<MR::Vector2f>>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector2d_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector2d *MR_convertContoursTo2d_std_vector_std_vector_MR_Vector2f(const MR_std_vector_std_vector_MR_Vector2f *from);

/// Generated from function `MR::convertContoursTo2d<std::vector<std::vector<MR::Vector2d>>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector2d_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector2d *MR_convertContoursTo2d_std_vector_std_vector_MR_Vector2d(const MR_std_vector_std_vector_MR_Vector2d *from);

/// Generated from function `MR::convertContoursTo2d<std::vector<std::vector<MR::Vector3f>>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector2d_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector2d *MR_convertContoursTo2d_std_vector_std_vector_MR_Vector3f(const MR_std_vector_std_vector_MR_Vector3f *from);

/// Generated from function `MR::convertContoursTo2d<std::vector<std::vector<MR::Vector3d>>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector2d_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector2d *MR_convertContoursTo2d_std_vector_std_vector_MR_Vector3d(const MR_std_vector_std_vector_MR_Vector3d *from);

/// Generated from function `MR::convertContoursTo3d<std::vector<std::vector<MR::Vector2f>>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector3d_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector3d *MR_convertContoursTo3d_std_vector_std_vector_MR_Vector2f(const MR_std_vector_std_vector_MR_Vector2f *from);

/// Generated from function `MR::convertContoursTo3d<std::vector<std::vector<MR::Vector2d>>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector3d_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector3d *MR_convertContoursTo3d_std_vector_std_vector_MR_Vector2d(const MR_std_vector_std_vector_MR_Vector2d *from);

/// Generated from function `MR::convertContoursTo3d<std::vector<std::vector<MR::Vector3f>>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector3d_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector3d *MR_convertContoursTo3d_std_vector_std_vector_MR_Vector3f(const MR_std_vector_std_vector_MR_Vector3f *from);

/// Generated from function `MR::convertContoursTo3d<std::vector<std::vector<MR::Vector3d>>>`.
/// Parameter `from` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector3d_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector3d *MR_convertContoursTo3d_std_vector_std_vector_MR_Vector3d(const MR_std_vector_std_vector_MR_Vector3d *from);

#ifdef __cplusplus
} // extern "C"
#endif
