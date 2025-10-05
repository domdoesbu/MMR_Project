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

typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_optional_MR_Mesh MR_std_optional_MR_Mesh; // Defined in `#include <MRCMisc/std_optional_MR_Mesh.h>`.


/**
* \brief Parameters of point cloud triangulation
*
*
* \sa \ref triangulatePointCloud
*/
/// Generated from class `MR::TriangulationParameters`.
typedef struct MR_TriangulationParameters MR_TriangulationParameters;

/**
* \brief The number of nearest neighbor points to use for building of local triangulation
* \note Too small value can make not optimal triangulation and additional holes\n
* Too big value increases difficulty of optimization and decreases performance
*
<table border=0>
<caption id="TriangulationParameters::numNeighbours_examples"></caption>
<tr>
<td> \image html triangulate/triangulate_3.png "Good" width = 350cm </td>
<td> \image html triangulate/triangulate_2.png "Too small value" width = 350cm </td>
</tr>
</table>
*/
/// Returns a pointer to a member variable of class `MR::TriangulationParameters` named `numNeighbours`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_TriangulationParameters_Get_numNeighbours(const MR_TriangulationParameters *_this);

/**
* \brief The number of nearest neighbor points to use for building of local triangulation
* \note Too small value can make not optimal triangulation and additional holes\n
* Too big value increases difficulty of optimization and decreases performance
*
<table border=0>
<caption id="TriangulationParameters::numNeighbours_examples"></caption>
<tr>
<td> \image html triangulate/triangulate_3.png "Good" width = 350cm </td>
<td> \image html triangulate/triangulate_2.png "Too small value" width = 350cm </td>
</tr>
</table>
*/
/// Modifies a member variable of class `MR::TriangulationParameters` named `numNeighbours`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationParameters_Set_numNeighbours(MR_TriangulationParameters *_this, int32_t value);

/**
* \brief The number of nearest neighbor points to use for building of local triangulation
* \note Too small value can make not optimal triangulation and additional holes\n
* Too big value increases difficulty of optimization and decreases performance
*
<table border=0>
<caption id="TriangulationParameters::numNeighbours_examples"></caption>
<tr>
<td> \image html triangulate/triangulate_3.png "Good" width = 350cm </td>
<td> \image html triangulate/triangulate_2.png "Too small value" width = 350cm </td>
</tr>
</table>
*/
/// Returns a mutable pointer to a member variable of class `MR::TriangulationParameters` named `numNeighbours`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_TriangulationParameters_GetMutable_numNeighbours(MR_TriangulationParameters *_this);

/**
* Radius of neighborhood around each point to consider for building local triangulation.
* This is an alternative to numNeighbours parameter.
* Please set to positive value only one of them.
*/
/// Returns a pointer to a member variable of class `MR::TriangulationParameters` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_TriangulationParameters_Get_radius(const MR_TriangulationParameters *_this);

/**
* Radius of neighborhood around each point to consider for building local triangulation.
* This is an alternative to numNeighbours parameter.
* Please set to positive value only one of them.
*/
/// Modifies a member variable of class `MR::TriangulationParameters` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationParameters_Set_radius(MR_TriangulationParameters *_this, float value);

/**
* Radius of neighborhood around each point to consider for building local triangulation.
* This is an alternative to numNeighbours parameter.
* Please set to positive value only one of them.
*/
/// Returns a mutable pointer to a member variable of class `MR::TriangulationParameters` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_TriangulationParameters_GetMutable_radius(MR_TriangulationParameters *_this);

/**
* \brief Critical angle of triangles in local triangulation (angle between triangles in fan should be less then this value)
*
<table border=0>
<caption id="TriangulationParameters::critAngle_examples"></caption>
<tr>
<td> \image html triangulate/triangulate_3.png "Good" width = 350cm </td>
<td> \image html triangulate/triangulate_4.png "Too small value" width = 350cm </td>
</tr>
</table>
*/
/// Returns a pointer to a member variable of class `MR::TriangulationParameters` named `critAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_TriangulationParameters_Get_critAngle(const MR_TriangulationParameters *_this);

/**
* \brief Critical angle of triangles in local triangulation (angle between triangles in fan should be less then this value)
*
<table border=0>
<caption id="TriangulationParameters::critAngle_examples"></caption>
<tr>
<td> \image html triangulate/triangulate_3.png "Good" width = 350cm </td>
<td> \image html triangulate/triangulate_4.png "Too small value" width = 350cm </td>
</tr>
</table>
*/
/// Modifies a member variable of class `MR::TriangulationParameters` named `critAngle`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationParameters_Set_critAngle(MR_TriangulationParameters *_this, float value);

/**
* \brief Critical angle of triangles in local triangulation (angle between triangles in fan should be less then this value)
*
<table border=0>
<caption id="TriangulationParameters::critAngle_examples"></caption>
<tr>
<td> \image html triangulate/triangulate_3.png "Good" width = 350cm </td>
<td> \image html triangulate/triangulate_4.png "Too small value" width = 350cm </td>
</tr>
</table>
*/
/// Returns a mutable pointer to a member variable of class `MR::TriangulationParameters` named `critAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_TriangulationParameters_GetMutable_critAngle(MR_TriangulationParameters *_this);

/// the vertex is considered as boundary if its neighbor ring has angle more than this value
/// Returns a pointer to a member variable of class `MR::TriangulationParameters` named `boundaryAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_TriangulationParameters_Get_boundaryAngle(const MR_TriangulationParameters *_this);

/// the vertex is considered as boundary if its neighbor ring has angle more than this value
/// Modifies a member variable of class `MR::TriangulationParameters` named `boundaryAngle`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationParameters_Set_boundaryAngle(MR_TriangulationParameters *_this, float value);

/// the vertex is considered as boundary if its neighbor ring has angle more than this value
/// Returns a mutable pointer to a member variable of class `MR::TriangulationParameters` named `boundaryAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_TriangulationParameters_GetMutable_boundaryAngle(MR_TriangulationParameters *_this);

/**
* \brief Critical length of hole (all holes with length less then this value will be filled)
* \details If value is subzero it is set automaticly to 0.7*bbox.diagonal()
*/
/// Returns a pointer to a member variable of class `MR::TriangulationParameters` named `critHoleLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_TriangulationParameters_Get_critHoleLength(const MR_TriangulationParameters *_this);

/**
* \brief Critical length of hole (all holes with length less then this value will be filled)
* \details If value is subzero it is set automaticly to 0.7*bbox.diagonal()
*/
/// Modifies a member variable of class `MR::TriangulationParameters` named `critHoleLength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationParameters_Set_critHoleLength(MR_TriangulationParameters *_this, float value);

/**
* \brief Critical length of hole (all holes with length less then this value will be filled)
* \details If value is subzero it is set automaticly to 0.7*bbox.diagonal()
*/
/// Returns a mutable pointer to a member variable of class `MR::TriangulationParameters` named `critHoleLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_TriangulationParameters_GetMutable_critHoleLength(MR_TriangulationParameters *_this);

/// automatic increase of the radius if points outside can make triangles from original radius not-Delone
/// Returns a pointer to a member variable of class `MR::TriangulationParameters` named `automaticRadiusIncrease`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_TriangulationParameters_Get_automaticRadiusIncrease(const MR_TriangulationParameters *_this);

/// automatic increase of the radius if points outside can make triangles from original radius not-Delone
/// Modifies a member variable of class `MR::TriangulationParameters` named `automaticRadiusIncrease`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationParameters_Set_automaticRadiusIncrease(MR_TriangulationParameters *_this, bool value);

/// automatic increase of the radius if points outside can make triangles from original radius not-Delone
/// Returns a mutable pointer to a member variable of class `MR::TriangulationParameters` named `automaticRadiusIncrease`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_TriangulationParameters_GetMutable_automaticRadiusIncrease(MR_TriangulationParameters *_this);

/// optional: if provided this cloud will be used for searching of neighbors (so it must have same validPoints)
/// Returns a pointer to a member variable of class `MR::TriangulationParameters` named `searchNeighbors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PointCloud *const *MR_TriangulationParameters_Get_searchNeighbors(const MR_TriangulationParameters *_this);

/// optional: if provided this cloud will be used for searching of neighbors (so it must have same validPoints)
/// Modifies a member variable of class `MR::TriangulationParameters` named `searchNeighbors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangulationParameters_Set_searchNeighbors(MR_TriangulationParameters *_this, const MR_PointCloud *value);

/// optional: if provided this cloud will be used for searching of neighbors (so it must have same validPoints)
/// Returns a mutable pointer to a member variable of class `MR::TriangulationParameters` named `searchNeighbors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PointCloud **MR_TriangulationParameters_GetMutable_searchNeighbors(MR_TriangulationParameters *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriangulationParameters_Destroy()` to free it when you're done using it.
MRC_API MR_TriangulationParameters *MR_TriangulationParameters_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_TriangulationParameters_DestroyArray()`.
/// Use `MR_TriangulationParameters_OffsetMutablePtr()` and `MR_TriangulationParameters_OffsetPtr()` to access the array elements.
MRC_API MR_TriangulationParameters *MR_TriangulationParameters_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::TriangulationParameters` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriangulationParameters_Destroy()` to free it when you're done using it.
MRC_API MR_TriangulationParameters *MR_TriangulationParameters_ConstructFrom(int32_t numNeighbours, float radius, float critAngle, float boundaryAngle, float critHoleLength, bool automaticRadiusIncrease, const MR_PointCloud *searchNeighbors);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_TriangulationParameters *MR_TriangulationParameters_OffsetPtr(const MR_TriangulationParameters *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_TriangulationParameters *MR_TriangulationParameters_OffsetMutablePtr(MR_TriangulationParameters *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::TriangulationParameters`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriangulationParameters_Destroy()` to free it when you're done using it.
MRC_API MR_TriangulationParameters *MR_TriangulationParameters_ConstructFromAnother(const MR_TriangulationParameters *_other);

/// Destroys a heap-allocated instance of `MR_TriangulationParameters`. Does nothing if the pointer is null.
MRC_API void MR_TriangulationParameters_Destroy(const MR_TriangulationParameters *_this);

/// Destroys a heap-allocated array of `MR_TriangulationParameters`. Does nothing if the pointer is null.
MRC_API void MR_TriangulationParameters_DestroyArray(const MR_TriangulationParameters *_this);

/// Generated from a method of class `MR::TriangulationParameters` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TriangulationParameters *MR_TriangulationParameters_AssignFromAnother(MR_TriangulationParameters *_this, const MR_TriangulationParameters *_other);

/**
* \brief Creates mesh from given point cloud according params
* Returns empty optional if was interrupted by progress bar
*
<table border=0>
<caption id="triangulatePointCloud_examples"></caption>
<tr>
<td> \image html triangulate/triangulate_0.png "Before" width = 350cm </td>
<td> \image html triangulate/triangulate_3.png "After" width = 350cm </td>
</tr>
</table>
*/
/// Generated from function `MR::triangulatePointCloud`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `progressCb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_Mesh *MR_triangulatePointCloud(const MR_PointCloud *pointCloud, const MR_TriangulationParameters *params, MR_PassBy progressCb_pass_by, MR_std_function_bool_from_float *progressCb);

#ifdef __cplusplus
} // extern "C"
#endif
