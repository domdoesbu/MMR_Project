// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Color MR_Color; // Defined in `#include <MRCMesh/MRColor.h>`.


/// This singleton struct contains default colors for scene objects
/// Generated from class `MR::SceneColors`.
typedef struct MR_SceneColors MR_SceneColors;

typedef enum MR_SceneColors_Type
{
    MR_SceneColors_Type_SelectedObjectMesh = 0,
    MR_SceneColors_Type_UnselectedObjectMesh = 1,
    MR_SceneColors_Type_SelectedObjectPoints = 2,
    MR_SceneColors_Type_UnselectedObjectPoints = 3,
    MR_SceneColors_Type_SelectedObjectLines = 4,
    MR_SceneColors_Type_UnselectedObjectLines = 5,
    MR_SceneColors_Type_SelectedObjectVoxels = 6,
    MR_SceneColors_Type_UnselectedObjectVoxels = 7,
    MR_SceneColors_Type_SelectedObjectDistanceMap = 8,
    MR_SceneColors_Type_UnselectedObjectDistanceMap = 9,
    MR_SceneColors_Type_BackFaces = 10,
    MR_SceneColors_Type_Labels = 11,
    MR_SceneColors_Type_Edges = 12,
    MR_SceneColors_Type_Points = 13,
    MR_SceneColors_Type_SelectedFaces = 14,
    MR_SceneColors_Type_SelectedEdges = 15,
    MR_SceneColors_Type_SelectedPoints = 16,
    MR_SceneColors_Type_SelectedFeatures = 17,
    MR_SceneColors_Type_UnselectedFeatures = 18,
    MR_SceneColors_Type_FeatureBackFaces = 19,
    MR_SceneColors_Type_SelectedFeatureDecorations = 20,
    MR_SceneColors_Type_UnselectedFeatureDecorations = 21,
    MR_SceneColors_Type_SelectedMeasurements = 22,
    MR_SceneColors_Type_UnselectedMeasurements = 23,
    MR_SceneColors_Type_SelectedTemporaryMeasurements = 24,
    MR_SceneColors_Type_UnselectedTemporaryMeasurements = 25,
    MR_SceneColors_Type_Count = 26,
} MR_SceneColors_Type;

/// Generated from a method of class `MR::SceneColors` named `get`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Color *MR_SceneColors_get(MR_SceneColors_Type type);

/// Generated from a method of class `MR::SceneColors` named `set`.
/// Parameter `color` can not be null. It is a single object.
MRC_API void MR_SceneColors_set(MR_SceneColors_Type type, const MR_Color *color);

/// Generated from a method of class `MR::SceneColors` named `getName`.
MRC_API const char *MR_SceneColors_getName(MR_SceneColors_Type type);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SceneColors *MR_SceneColors_OffsetPtr(const MR_SceneColors *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SceneColors *MR_SceneColors_OffsetMutablePtr(MR_SceneColors *ptr, ptrdiff_t i);

#ifdef __cplusplus
} // extern "C"
#endif
