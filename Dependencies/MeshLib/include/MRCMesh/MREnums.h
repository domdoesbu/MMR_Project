// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


/// determines the weight or mass of each vertex in applications like Laplacian
typedef int32_t MR_VertexMass;
enum // MR_VertexMass
{
    /// all vertices have same mass=1
    MR_VertexMass_Unit = 0,
    /// vertex mass depends on local geometry and proportional to the area of first-ring triangles
    MR_VertexMass_NeiArea = 1,
};

/// determines the weight of each edge in applications like Laplacian
typedef int32_t MR_EdgeWeights;
enum // MR_EdgeWeights
{
    /// all edges have same weight=1
    MR_EdgeWeights_Unit = 0,
    /// edge weight depends on local geometry and uses cotangent values
    MR_EdgeWeights_Cotan = 1,
};

/// typically returned from callbacks to control the behavior of main algorithm
typedef bool MR_Processing;
enum // MR_Processing
{
    MR_Processing_Continue = 0,
    MR_Processing_Stop = 1,
};

/// the method how to choose between two opposite normal orientations
typedef int32_t MR_OrientNormals;
enum // MR_OrientNormals
{
    MR_OrientNormals_TowardOrigin = 0,
    MR_OrientNormals_AwayFromOrigin = 1,
    MR_OrientNormals_Smart = 2,
};

typedef int32_t MR_OffsetMode;
enum // MR_OffsetMode
{
    ///< create mesh using dual marching cubes from OpenVDB library
    MR_OffsetMode_Smooth = 0,
    ///< create mesh using standard marching cubes implemented in MeshLib
    MR_OffsetMode_Standard = 1,
    ///< create mesh using standard marching cubes with additional sharpening implemented in MeshLib
    MR_OffsetMode_Sharpening = 2,
};

/// Type of object coloring,
/// \note that texture are applied over main coloring
typedef int32_t MR_ColoringType;
enum // MR_ColoringType
{
    ///< Use one color for whole object
    MR_ColoringType_SolidColor = 0,
    ///< Use different color (taken from faces colormap) for each primitive
    MR_ColoringType_PrimitivesColorMap = 1,
    ///< Use different color (taken from faces colormap) for each face (primitive for object mesh)
    MR_ColoringType_FacesColorMap = 1,
    ///< Use different color (taken from faces colormap) for each line (primitive for object lines)
    MR_ColoringType_LinesColorMap = 1,
    ///< Use different color (taken from verts colormap) for each vertex
    MR_ColoringType_VertsColorMap = 2,
};

typedef char MR_UseAABBTree;
enum // MR_UseAABBTree
{
    // AABB-tree of the mesh will not be used, even if it is available
    MR_UseAABBTree_No = 0,
    // AABB-tree of the mesh will be used even if it has to be constructed
    MR_UseAABBTree_Yes = 1,
    // AABB-tree of the mesh will be used if it was previously constructed and available, and will not be used otherwise
    MR_UseAABBTree_YesIfAlreadyConstructed = 2,
};

/// the algorithm to compute approximately geodesic path
typedef char MR_GeodesicPathApprox;
enum // MR_GeodesicPathApprox
{
    /// compute edge-only path by building it from start and end simultaneously
    MR_GeodesicPathApprox_DijkstraBiDir = 0,
    /// compute edge-only path using A*-search algorithm
    MR_GeodesicPathApprox_DijkstraAStar = 1,
    /// use Fast Marching algorithm
    MR_GeodesicPathApprox_FastMarching = 2,
};

/// returns string representation of enum values
/// Generated from function `MR::asString`.
MRC_API const char *MR_asString_MR_ColoringType(MR_ColoringType ct);

#ifdef __cplusplus
} // extern "C"
#endif
