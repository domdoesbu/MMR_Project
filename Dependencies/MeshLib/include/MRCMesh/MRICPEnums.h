// (C) 2024, AMV Consulting
#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


/// The method how to update transformation from point pairs
typedef int32_t MR_ICPMethod;
enum // MR_ICPMethod
{
    ///< PointToPoint for the first 2 iterations, and PointToPlane for the remaining iterations
    MR_ICPMethod_Combined = 0,
    ///< select transformation that minimizes mean squared distance between two points in each pair,
    ///< it is the safest approach but can converge slowly
    MR_ICPMethod_PointToPoint = 1,
    ///< select transformation that minimizes mean squared distance between a point and a plane via the other point in each pair,
    ///< converge much faster than PointToPoint in case of many good (with not all points/normals in one plane) pairs
    ///< This mode only works correctly if the object that points are being projected onto has normals information (is not a point clouds without normals).
    ///< By default both objects are projected onto each other, so at least one of them must have normals, unless you change the settings
    ///< to only project one way (using `MR::ICP::setFltSamples()` or `MR::ICP::setRefSamples()`), in which case the object being projected onto
    ///< must have normals.
    MR_ICPMethod_PointToPlane = 2,
};

/// The group of transformations, each with its own degrees of freedom
typedef int32_t MR_ICPMode;
enum // MR_ICPMode
{
    ///< rigid body transformation with uniform scaling (7 degrees of freedom)
    MR_ICPMode_RigidScale = 0,
    ///< rigid body transformation (6 degrees of freedom)
    MR_ICPMode_AnyRigidXf = 1,
    ///< rigid body transformation with rotation except argument axis (5 degrees of freedom)
    MR_ICPMode_OrthogonalAxis = 2,
    ///< rigid body transformation with rotation around given axis only (4 degrees of freedom)
    MR_ICPMode_FixedAxis = 3,
    ///< only translation (3 degrees of freedom)
    MR_ICPMode_TranslationOnly = 4,
};

// types of exit conditions in calculation
typedef int32_t MR_ICPExitType;
enum // MR_ICPExitType
{
    // calculation is not started yet
    MR_ICPExitType_NotStarted = 0,
    // solution not found in some iteration
    MR_ICPExitType_NotFoundSolution = 1,
    // iteration limit reached
    MR_ICPExitType_MaxIterations = 2,
    // limit of non-improvement iterations in a row reached
    MR_ICPExitType_MaxBadIterations = 3,
    // stop mean square deviation reached
    MR_ICPExitType_StopMsdReached = 4,
};

#ifdef __cplusplus
} // extern "C"
#endif
