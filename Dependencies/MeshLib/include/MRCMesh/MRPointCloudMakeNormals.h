// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MREnums.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AllLocalTriangulations MR_AllLocalTriangulations; // Defined in `#include <MRCMesh/MRLocalTriangulations.h>`.
typedef struct MR_Buffer_MR_VertId MR_Buffer_MR_VertId; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_optional_MR_VertCoords MR_std_optional_MR_VertCoords; // Defined in `#include <MRCMisc/std_optional_MR_VertCoords.h>`.


/// \brief Makes normals for valid points of given point cloud by directing them along the normal of best plane through the neighbours
/// \param radius of neighborhood to consider
/// \param orient OrientNormals::Smart here means orientation from best fit plane
/// \return nullopt if progress returned false
/// Generated from function `MR::makeUnorientedNormals`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `progress` is a single object.
/// Parameter `progress` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `orient` has a default argument: `OrientNormals::Smart`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_VertCoords_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_VertCoords *MR_makeUnorientedNormals_4_float(const MR_PointCloud *pointCloud, float radius, const MR_std_function_bool_from_float *progress, const MR_OrientNormals *orient);

/// \brief Makes normals for valid points of given point cloud by averaging neighbor triangle normals weighted by triangle's angle
/// \triangs triangulation neighbours of each point
/// \param orient OrientNormals::Smart here means orientation from normals of neigbour triangles
/// \return nullopt if progress returned false
/// Generated from function `MR::makeUnorientedNormals`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `triangs` can not be null. It is a single object.
/// Parameter `progress` is a single object.
/// Parameter `progress` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `orient` has a default argument: `OrientNormals::Smart`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_VertCoords_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_VertCoords *MR_makeUnorientedNormals_4_MR_AllLocalTriangulations(const MR_PointCloud *pointCloud, const MR_AllLocalTriangulations *triangs, const MR_std_function_bool_from_float *progress, const MR_OrientNormals *orient);

/// \brief Makes normals for valid points of given point cloud by directing them along the normal of best plane through the neighbours
/// \param closeVerts a buffer where for every valid point #i its neighbours are stored at indices [i*numNei; (i+1)*numNei)
/// \param orient OrientNormals::Smart here means orientation from best fit plane
/// \return nullopt if progress returned false
/// Generated from function `MR::makeUnorientedNormals`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `closeVerts` can not be null. It is a single object.
/// Parameter `progress` is a single object.
/// Parameter `progress` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `orient` has a default argument: `OrientNormals::Smart`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_VertCoords_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_VertCoords *MR_makeUnorientedNormals_5(const MR_PointCloud *pointCloud, const MR_Buffer_MR_VertId *closeVerts, int32_t numNei, const MR_std_function_bool_from_float *progress, const MR_OrientNormals *orient);

/// \brief Select orientation of given normals to make directions of close points consistent;
/// \param radius of neighborhood to consider
/// \return false if progress returned false
/// Generated from function `MR::orientNormals`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `normals` can not be null. It is a single object.
/// Parameter `progress` is a single object.
/// Parameter `progress` has a default argument: `{}`, pass a null pointer to use it.
MRC_API bool MR_orientNormals_4_float(const MR_PointCloud *pointCloud, MR_VertCoords *normals, float radius, const MR_std_function_bool_from_float *progress);

/// \brief Select orientation of given normals to make directions of close points consistent;
/// \param radius of neighborhood to consider
/// \return false if progress returned false
/// Unlike simple orientNormals this method constructs local triangulations around each point
/// (with most neighbours within given radius and all neighbours within 2*radius)
/// and considers all triangulation neighbors and not other points from the ball around each point.
/// Generated from function `MR::orientNormals`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `normals` can not be null. It is a single object.
/// Parameter `triangs` can not be null. It is a single object.
/// Parameter `progress` is a single object.
/// Parameter `progress` has a default argument: `{}`, pass a null pointer to use it.
MRC_API bool MR_orientNormals_4_MR_AllLocalTriangulations(const MR_PointCloud *pointCloud, MR_VertCoords *normals, const MR_AllLocalTriangulations *triangs, const MR_std_function_bool_from_float *progress);

/// \brief Select orientation of given normals to make directions of close points consistent;
/// \param closeVerts a buffer where for every valid point #i its neighbours are stored at indices [i*numNei; (i+1)*numNei)
/// \return false if progress returned false
/// Generated from function `MR::orientNormals`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `normals` can not be null. It is a single object.
/// Parameter `closeVerts` can not be null. It is a single object.
/// Parameter `progress` is a single object.
/// Parameter `progress` has a default argument: `{}`, pass a null pointer to use it.
MRC_API bool MR_orientNormals_5(const MR_PointCloud *pointCloud, MR_VertCoords *normals, const MR_Buffer_MR_VertId *closeVerts, int32_t numNei, const MR_std_function_bool_from_float *progress);

/// \brief Makes normals for valid points of given point cloud; directions of close points are selected to be consistent;
/// \param radius of neighborhood to consider
/// \return nullopt if progress returned false
/// Generated from function `MR::makeOrientedNormals`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `progress` is a single object.
/// Parameter `progress` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_VertCoords_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_VertCoords *MR_makeOrientedNormals_float(const MR_PointCloud *pointCloud, float radius, const MR_std_function_bool_from_float *progress);

/// \brief Makes normals for valid points of given point cloud; directions of close points are selected to be consistent;
/// \triangs triangulation neighbours of each point, which are oriented during the call as well
/// \return nullopt if progress returned false
/// Generated from function `MR::makeOrientedNormals`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `triangs` can not be null. It is a single object.
/// Parameter `progress` is a single object.
/// Parameter `progress` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_VertCoords_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_VertCoords *MR_makeOrientedNormals_MR_AllLocalTriangulations(const MR_PointCloud *pointCloud, MR_AllLocalTriangulations *triangs, const MR_std_function_bool_from_float *progress);

/// \brief Makes consistent normals for valid points of given point cloud
/// \param avgNeighborhoodSize avg num of neighbors of each individual point

//[[deprecated( "use makeOrientedNormals(...) instead" )]]
/// Generated from function `MR::makeNormals`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `avgNeighborhoodSize` has a default argument: `48`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertCoords_Destroy()` to free it when you're done using it.
MRC_API MR_VertCoords *MR_makeNormals(const MR_PointCloud *pointCloud, const int32_t *avgNeighborhoodSize);

#ifdef __cplusplus
} // extern "C"
#endif
