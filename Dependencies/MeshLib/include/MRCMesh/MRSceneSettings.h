// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_CNCMachineSettings MR_CNCMachineSettings; // Defined in `#include <MRCMesh/MRCNCMachineSettings.h>`.


/// This singleton struct contains default settings for scene objects
/// Generated from class `MR::SceneSettings`.
typedef struct MR_SceneSettings MR_SceneSettings;

typedef int32_t MR_SceneSettings_BoolType;
enum // MR_SceneSettings_BoolType
{
    /// on deserialization replace object properties with default values from SceneSettings and SceneColors
    MR_SceneSettings_BoolType_UseDefaultScenePropertiesOnDeserialization = 0,
    /// total count
    MR_SceneSettings_BoolType_Count = 1,
};

typedef int32_t MR_SceneSettings_FloatType;
enum // MR_SceneSettings_FloatType
{
    MR_SceneSettings_FloatType_FeaturePointsAlpha = 0,
    MR_SceneSettings_FloatType_FeatureLinesAlpha = 1,
    MR_SceneSettings_FloatType_FeatureMeshAlpha = 2,
    MR_SceneSettings_FloatType_FeatureSubPointsAlpha = 3,
    MR_SceneSettings_FloatType_FeatureSubLinesAlpha = 4,
    MR_SceneSettings_FloatType_FeatureSubMeshAlpha = 5,
    // Line width of line features (line, circle, ...).
    MR_SceneSettings_FloatType_FeatureLineWidth = 6,
    // Line width of line subfeatures (axes, base circles, ...).
    MR_SceneSettings_FloatType_FeatureSubLineWidth = 7,
    // Size of the point feature.
    MR_SceneSettings_FloatType_FeaturePointSize = 8,
    // Size of point subfeatures (various centers).
    MR_SceneSettings_FloatType_FeatureSubPointSize = 9,
    // Ambient multiplication coefficient for ambientStrength for selected objects
    MR_SceneSettings_FloatType_AmbientCoefSelectedObj = 10,
    // Ambient multiplication coefficient for ambientStrength for selected objects
    MR_SceneSettings_FloatType_Count = 11,
};

/// Mesh faces shading mode
typedef int32_t MR_SceneSettings_ShadingMode;
enum // MR_SceneSettings_ShadingMode
{
    MR_SceneSettings_ShadingMode_AutoDetect = 0,
    MR_SceneSettings_ShadingMode_Smooth = 1,
    MR_SceneSettings_ShadingMode_Flat = 2,
};

// Reset all scene settings to default values
/// Generated from a method of class `MR::SceneSettings` named `reset`.
MRC_API void MR_SceneSettings_reset(void);

/// Generated from a method of class `MR::SceneSettings` named `get`.
MRC_API bool MR_SceneSettings_get_MR_SceneSettings_BoolType(MR_SceneSettings_BoolType type);

/// Generated from a method of class `MR::SceneSettings` named `get`.
MRC_API float MR_SceneSettings_get_MR_SceneSettings_FloatType(MR_SceneSettings_FloatType type);

/// Generated from a method of class `MR::SceneSettings` named `set`.
MRC_API void MR_SceneSettings_set_MR_SceneSettings_BoolType(MR_SceneSettings_BoolType type, bool value);

/// Generated from a method of class `MR::SceneSettings` named `set`.
MRC_API void MR_SceneSettings_set_MR_SceneSettings_FloatType(MR_SceneSettings_FloatType type, float value);

/// Default shading mode for new mesh objects, or imported form files
/// Tools may consider this setting when creating new meshes
/// `AutoDetect`: choose depending of file format and mesh shape, fallback to smooth
/// Generated from a method of class `MR::SceneSettings` named `getDefaultShadingMode`.
MRC_API MR_SceneSettings_ShadingMode MR_SceneSettings_getDefaultShadingMode(void);

/// Generated from a method of class `MR::SceneSettings` named `setDefaultShadingMode`.
MRC_API void MR_SceneSettings_setDefaultShadingMode(MR_SceneSettings_ShadingMode mode);

/// Generated from a method of class `MR::SceneSettings` named `getCNCMachineSettings`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_CNCMachineSettings *MR_SceneSettings_getCNCMachineSettings(void);

/// Generated from a method of class `MR::SceneSettings` named `setCNCMachineSettings`.
/// Parameter `settings` can not be null. It is a single object.
MRC_API void MR_SceneSettings_setCNCMachineSettings(const MR_CNCMachineSettings *settings);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SceneSettings *MR_SceneSettings_OffsetPtr(const MR_SceneSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SceneSettings *MR_SceneSettings_OffsetMutablePtr(MR_SceneSettings *ptr, ptrdiff_t i);

#ifdef __cplusplus
} // extern "C"
#endif
