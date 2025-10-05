// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRBox.h>
#include <MRCMesh/MREnums.h>
#include <MRCMesh/MRObjectDimensionsEnum.h>
#include <MRCMesh/MRObjectMeshHolder.h>
#include <MRCMesh/MRViewportId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter; // Defined in `#include <MRCMesh/MRAddVisualPropertiesMixin.h>`.
typedef struct MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length; // Defined in `#include <MRCMesh/MRAddVisualPropertiesMixin.h>`.
typedef struct MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length; // Defined in `#include <MRCMesh/MRAddVisualPropertiesMixin.h>`.
typedef struct MR_AngleMeasurementObject MR_AngleMeasurementObject; // Defined in `#include <MRCMesh/MRAngleMeasurementObject.h>`.
typedef struct MR_CircleObject MR_CircleObject; // Defined in `#include <MRCMesh/MRCircleObject.h>`.
typedef struct MR_Color MR_Color; // Defined in `#include <MRCMesh/MRColor.h>`.
typedef struct MR_ConeObject MR_ConeObject; // Defined in `#include <MRCMesh/MRConeObject.h>`.
typedef struct MR_CylinderObject MR_CylinderObject; // Defined in `#include <MRCMesh/MRCylinderObject.h>`.
typedef struct MR_DistanceMeasurementObject MR_DistanceMeasurementObject; // Defined in `#include <MRCMesh/MRDistanceMeasurementObject.h>`.
typedef struct MR_FeatureObject MR_FeatureObject; // Defined in `#include <MRCMesh/MRFeatureObject.h>`.
typedef struct MR_LineObject MR_LineObject; // Defined in `#include <MRCMesh/MRLineObject.h>`.
typedef struct MR_MeasurementObject MR_MeasurementObject; // Defined in `#include <MRCMesh/MRMeasurementObject.h>`.
typedef struct MR_ModelBaseRenderParams MR_ModelBaseRenderParams; // Defined in `#include <MRCMesh/MRIRenderObject.h>`.
typedef struct MR_ModelRenderParams MR_ModelRenderParams; // Defined in `#include <MRCMesh/MRIRenderObject.h>`.
typedef struct MR_Object MR_Object; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectChildrenHolder MR_ObjectChildrenHolder; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectDistanceMap MR_ObjectDistanceMap; // Defined in `#include <MRCMesh/MRObjectDistanceMap.h>`.
typedef struct MR_ObjectGcode MR_ObjectGcode; // Defined in `#include <MRCMesh/MRObjectGcode.h>`.
typedef struct MR_ObjectLabel MR_ObjectLabel; // Defined in `#include <MRCSymbolMesh/MRObjectLabel.h>`.
typedef struct MR_ObjectLines MR_ObjectLines; // Defined in `#include <MRCMesh/MRObjectLines.h>`.
typedef struct MR_ObjectLinesHolder MR_ObjectLinesHolder; // Defined in `#include <MRCMesh/MRObjectLinesHolder.h>`.
typedef struct MR_ObjectMesh MR_ObjectMesh; // Defined in `#include <MRCMesh/MRObjectMesh.h>`.
typedef struct MR_ObjectMeshHolder MR_ObjectMeshHolder; // Defined in `#include <MRCMesh/MRObjectMeshHolder.h>`.
typedef struct MR_ObjectPoints MR_ObjectPoints; // Defined in `#include <MRCMesh/MRObjectPoints.h>`.
typedef struct MR_ObjectPointsHolder MR_ObjectPointsHolder; // Defined in `#include <MRCMesh/MRObjectPointsHolder.h>`.
typedef struct MR_ObjectVoxels MR_ObjectVoxels; // Defined in `#include <MRCVoxels/MRObjectVoxels.h>`.
typedef struct MR_PlaneObject MR_PlaneObject; // Defined in `#include <MRCMesh/MRPlaneObject.h>`.
typedef struct MR_PointObject MR_PointObject; // Defined in `#include <MRCMesh/MRPointObject.h>`.
typedef struct MR_RadiusMeasurementObject MR_RadiusMeasurementObject; // Defined in `#include <MRCMesh/MRRadiusMeasurementObject.h>`.
typedef struct MR_SphereObject MR_SphereObject; // Defined in `#include <MRCMesh/MRSphereObject.h>`.
typedef struct MR_UiRenderParams MR_UiRenderParams; // Defined in `#include <MRCMesh/MRIRenderObject.h>`.
typedef struct MR_ViewportMask MR_ViewportMask; // Defined in `#include <MRCMesh/MRViewportId.h>`.
typedef struct MR_ViewportProperty_MR_Color MR_ViewportProperty_MR_Color; // Defined in `#include <MRCMesh/MRViewportProperty.h>`.
typedef struct MR_ViewportProperty_uint8_t MR_ViewportProperty_uint8_t; // Defined in `#include <MRCMesh/MRViewportProperty.h>`.
typedef struct MR_std_optional_MR_DimensionsVisualizePropertyType MR_std_optional_MR_DimensionsVisualizePropertyType; // Defined in `#include <MRCMisc/std_optional_MR_DimensionsVisualizePropertyType.h>`.
typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_MR_ViewportMask MR_std_vector_MR_ViewportMask; // Defined in `#include <MRCMisc/std_vector_MR_ViewportMask.h>`.
typedef struct MR_std_vector_std_string MR_std_vector_std_string; // Defined in `#include <MRCMisc/std_vector_std_string.h>`.


// Note! Must use `MRMESH_CLASS` on this enum and all enums that extend this one,
// otherwise you'll get silent wrong behavior on Mac.
typedef int32_t MR_VisualizeMaskType;
enum // MR_VisualizeMaskType
{
    MR_VisualizeMaskType_Visibility = 0,
    MR_VisualizeMaskType_InvertedNormals = 1,
    MR_VisualizeMaskType_Name = 2,
    MR_VisualizeMaskType_Labels = 3,
    MR_VisualizeMaskType_CropLabelsByViewportRect = 4,
    MR_VisualizeMaskType_ClippedByPlane = 5,
    MR_VisualizeMaskType_DepthTest = 6,
    MR_VisualizeMaskType__count = 7,
};

// If a type derived from `VisualObject` wants to extend `VisualizeMaskType`, it must create a separate enum and specialize this to `true` for it.
// NOTE! All those enums can start from 0, don't worry about collisions.
/// Generated from class `MR::IsVisualizeMaskEnum<MR::AnyVisualizeMaskEnum>`.
typedef struct MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum;

/// Generated from class `MR::IsVisualizeMaskEnum<MR::VisualizeMaskType>`.
typedef struct MR_IsVisualizeMaskEnum_MR_VisualizeMaskType MR_IsVisualizeMaskEnum_MR_VisualizeMaskType;

// Stores a `VisualizeMaskType` or any other enum that extends it (i.e. which specializes `IsVisualizeMaskEnum`).
// To extract the value, do this:
//     if ( auto value = x.tryGet<MyEnum>() )
//     {
//         switch ( *value )
//         {
//             case MyEnum::foo: ...
//             case MyEnum::bar: ...
//         }
//     }
//     else // forward to the parent class
/// Generated from class `MR::AnyVisualizeMaskEnum`.
typedef struct MR_AnyVisualizeMaskEnum MR_AnyVisualizeMaskEnum;

typedef enum MR_DirtyFlags
{
    MR_DirtyFlags_DIRTY_NONE = 0,
    MR_DirtyFlags_DIRTY_POSITION = 1,
    MR_DirtyFlags_DIRTY_UV = 2,
    //< gl normals
    MR_DirtyFlags_DIRTY_VERTS_RENDER_NORMAL = 4,
    ///< gl normals
    MR_DirtyFlags_DIRTY_FACES_RENDER_NORMAL = 8,
    ///< gl normals
    MR_DirtyFlags_DIRTY_CORNERS_RENDER_NORMAL = 16,
    MR_DirtyFlags_DIRTY_RENDER_NORMALS = 28,
    MR_DirtyFlags_DIRTY_SELECTION = 32,
    MR_DirtyFlags_DIRTY_TEXTURE = 64,
    MR_DirtyFlags_DIRTY_PRIMITIVES = 128,
    MR_DirtyFlags_DIRTY_FACE = 128,
    MR_DirtyFlags_DIRTY_VERTS_COLORMAP = 256,
    MR_DirtyFlags_DIRTY_PRIMITIVE_COLORMAP = 512,
    MR_DirtyFlags_DIRTY_FACES_COLORMAP = 512,
    MR_DirtyFlags_DIRTY_TEXTURE_PER_FACE = 1024,
    MR_DirtyFlags_DIRTY_MESH = 2047,
    MR_DirtyFlags_DIRTY_BOUNDING_BOX = 2048,
    MR_DirtyFlags_DIRTY_BORDER_LINES = 4096,
    MR_DirtyFlags_DIRTY_EDGES_SELECTION = 8192,
    MR_DirtyFlags_DIRTY_CACHES = 2048,
    MR_DirtyFlags_DIRTY_VOLUME = 16384,
    MR_DirtyFlags_DIRTY_ALL = 32767,
} MR_DirtyFlags;

/// Marks dirty buffers that need to be uploaded to OpenGL.
/// Dirty flags must be moved together with renderObj_,
/// but not copied since renderObj_ is not copied as well
/// Generated from class `MR::Dirty`.
typedef struct MR_Dirty MR_Dirty;

/// Visual Object
/// Generated from class `MR::VisualObject`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::Object`
///   Indirect: (non-virtual)
///     `MR::ObjectChildrenHolder`
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::FeatureObject`
///     `MR::MeasurementObject`
///     `MR::ObjectLabel`
///     `MR::ObjectLinesHolder`
///     `MR::ObjectMeshHolder`
///     `MR::ObjectPointsHolder`
///   Indirect: (non-virtual)
///     `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`
///     `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`
///     `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`
///     `MR::AngleMeasurementObject`
///     `MR::CircleObject`
///     `MR::ConeObject`
///     `MR::CylinderObject`
///     `MR::DistanceMeasurementObject`
///     `MR::LineObject`
///     `MR::ObjectDistanceMap`
///     `MR::ObjectGcode`
///     `MR::ObjectLines`
///     `MR::ObjectMesh`
///     `MR::ObjectPoints`
///     `MR::ObjectVoxels`
///     `MR::PlaneObject`
///     `MR::PointObject`
///     `MR::RadiusMeasurementObject`
///     `MR::SphereObject`
typedef struct MR_VisualObject MR_VisualObject;

/// Generated from class `MR::IsVisualizeMaskEnum<MR::MeshVisualizePropertyType>`.
typedef struct MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType;

/// Generated from class `MR::IsVisualizeMaskEnum<MR::LinesVisualizePropertyType>`.
typedef struct MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType;

/// Generated from class `MR::IsVisualizeMaskEnum<MR::PointsVisualizePropertyType>`.
typedef struct MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType;

/// Generated from class `MR::IsVisualizeMaskEnum<MR::DimensionsVisualizePropertyType>`.
typedef struct MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType;

/// Generated from class `MR::IsVisualizeMaskEnum<MR::FeatureVisualizePropertyType>`.
typedef struct MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType;

/// Generated from class `MR::IsVisualizeMaskEnum<MR::LabelVisualizePropertyType>`.
typedef struct MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum_Destroy()` to free it when you're done using it.
MRC_API MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum *MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum_DestroyArray()`.
/// Use `MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum_OffsetMutablePtr()` and `MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum_OffsetPtr()` to access the array elements.
MRC_API MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum *MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum *MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum_OffsetPtr(const MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum *MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum_OffsetMutablePtr(MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::IsVisualizeMaskEnum<MR::AnyVisualizeMaskEnum>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum_Destroy()` to free it when you're done using it.
MRC_API MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum *MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum_ConstructFromAnother(const MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum *_other);

/// Destroys a heap-allocated instance of `MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum`. Does nothing if the pointer is null.
MRC_API void MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum_Destroy(const MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum *_this);

/// Destroys a heap-allocated array of `MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum`. Does nothing if the pointer is null.
MRC_API void MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum_DestroyArray(const MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum *_this);

/// Generated from a method of class `MR::IsVisualizeMaskEnum<MR::AnyVisualizeMaskEnum>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum *MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum_AssignFromAnother(MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum *_this, const MR_IsVisualizeMaskEnum_MR_AnyVisualizeMaskEnum *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IsVisualizeMaskEnum_MR_VisualizeMaskType_Destroy()` to free it when you're done using it.
MRC_API MR_IsVisualizeMaskEnum_MR_VisualizeMaskType *MR_IsVisualizeMaskEnum_MR_VisualizeMaskType_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_IsVisualizeMaskEnum_MR_VisualizeMaskType_DestroyArray()`.
/// Use `MR_IsVisualizeMaskEnum_MR_VisualizeMaskType_OffsetMutablePtr()` and `MR_IsVisualizeMaskEnum_MR_VisualizeMaskType_OffsetPtr()` to access the array elements.
MRC_API MR_IsVisualizeMaskEnum_MR_VisualizeMaskType *MR_IsVisualizeMaskEnum_MR_VisualizeMaskType_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IsVisualizeMaskEnum_MR_VisualizeMaskType *MR_IsVisualizeMaskEnum_MR_VisualizeMaskType_OffsetPtr(const MR_IsVisualizeMaskEnum_MR_VisualizeMaskType *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IsVisualizeMaskEnum_MR_VisualizeMaskType *MR_IsVisualizeMaskEnum_MR_VisualizeMaskType_OffsetMutablePtr(MR_IsVisualizeMaskEnum_MR_VisualizeMaskType *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::IsVisualizeMaskEnum<MR::VisualizeMaskType>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IsVisualizeMaskEnum_MR_VisualizeMaskType_Destroy()` to free it when you're done using it.
MRC_API MR_IsVisualizeMaskEnum_MR_VisualizeMaskType *MR_IsVisualizeMaskEnum_MR_VisualizeMaskType_ConstructFromAnother(const MR_IsVisualizeMaskEnum_MR_VisualizeMaskType *_other);

/// Destroys a heap-allocated instance of `MR_IsVisualizeMaskEnum_MR_VisualizeMaskType`. Does nothing if the pointer is null.
MRC_API void MR_IsVisualizeMaskEnum_MR_VisualizeMaskType_Destroy(const MR_IsVisualizeMaskEnum_MR_VisualizeMaskType *_this);

/// Destroys a heap-allocated array of `MR_IsVisualizeMaskEnum_MR_VisualizeMaskType`. Does nothing if the pointer is null.
MRC_API void MR_IsVisualizeMaskEnum_MR_VisualizeMaskType_DestroyArray(const MR_IsVisualizeMaskEnum_MR_VisualizeMaskType *_this);

/// Generated from a method of class `MR::IsVisualizeMaskEnum<MR::VisualizeMaskType>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_IsVisualizeMaskEnum_MR_VisualizeMaskType *MR_IsVisualizeMaskEnum_MR_VisualizeMaskType_AssignFromAnother(MR_IsVisualizeMaskEnum_MR_VisualizeMaskType *_this, const MR_IsVisualizeMaskEnum_MR_VisualizeMaskType *_other);

/// Generated from a constructor of class `MR::AnyVisualizeMaskEnum`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AnyVisualizeMaskEnum_Destroy()` to free it when you're done using it.
MRC_API MR_AnyVisualizeMaskEnum *MR_AnyVisualizeMaskEnum_ConstructFromAnother(const MR_AnyVisualizeMaskEnum *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_AnyVisualizeMaskEnum *MR_AnyVisualizeMaskEnum_OffsetPtr(const MR_AnyVisualizeMaskEnum *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_AnyVisualizeMaskEnum *MR_AnyVisualizeMaskEnum_OffsetMutablePtr(MR_AnyVisualizeMaskEnum *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::AnyVisualizeMaskEnum`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AnyVisualizeMaskEnum_Destroy()` to free it when you're done using it.
MRC_API MR_AnyVisualizeMaskEnum *MR_AnyVisualizeMaskEnum_Construct_MR_VisualizeMaskType(MR_VisualizeMaskType value);

/// Generated from a constructor of class `MR::AnyVisualizeMaskEnum`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AnyVisualizeMaskEnum_Destroy()` to free it when you're done using it.
MRC_API MR_AnyVisualizeMaskEnum *MR_AnyVisualizeMaskEnum_Construct_MR_MeshVisualizePropertyType(MR_MeshVisualizePropertyType value);

/// Generated from a constructor of class `MR::AnyVisualizeMaskEnum`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AnyVisualizeMaskEnum_Destroy()` to free it when you're done using it.
MRC_API MR_AnyVisualizeMaskEnum *MR_AnyVisualizeMaskEnum_Construct_MR_DimensionsVisualizePropertyType(MR_DimensionsVisualizePropertyType value);

/// Destroys a heap-allocated instance of `MR_AnyVisualizeMaskEnum`. Does nothing if the pointer is null.
MRC_API void MR_AnyVisualizeMaskEnum_Destroy(const MR_AnyVisualizeMaskEnum *_this);

/// Destroys a heap-allocated array of `MR_AnyVisualizeMaskEnum`. Does nothing if the pointer is null.
MRC_API void MR_AnyVisualizeMaskEnum_DestroyArray(const MR_AnyVisualizeMaskEnum *_this);

/// Generated from a method of class `MR::AnyVisualizeMaskEnum` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AnyVisualizeMaskEnum *MR_AnyVisualizeMaskEnum_AssignFromAnother(MR_AnyVisualizeMaskEnum *_this, const MR_AnyVisualizeMaskEnum *_other);

/// Generated from a method of class `MR::AnyVisualizeMaskEnum` named `tryGet<MR::DimensionsVisualizePropertyType>`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_DimensionsVisualizePropertyType_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_DimensionsVisualizePropertyType *MR_AnyVisualizeMaskEnum_tryGet(const MR_AnyVisualizeMaskEnum *_this);

/// Returns a pointer to a member variable of class `MR::Dirty` named `f`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const uint32_t *MR_Dirty_Get_f(const MR_Dirty *_this);

/// Modifies a member variable of class `MR::Dirty` named `f`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Dirty_Set_f(MR_Dirty *_this, uint32_t value);

/// Returns a mutable pointer to a member variable of class `MR::Dirty` named `f`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API uint32_t *MR_Dirty_GetMutable_f(MR_Dirty *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Dirty_Destroy()` to free it when you're done using it.
MRC_API MR_Dirty *MR_Dirty_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Dirty_DestroyArray()`.
/// Use `MR_Dirty_OffsetMutablePtr()` and `MR_Dirty_OffsetPtr()` to access the array elements.
MRC_API MR_Dirty *MR_Dirty_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Dirty *MR_Dirty_OffsetPtr(const MR_Dirty *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Dirty *MR_Dirty_OffsetMutablePtr(MR_Dirty *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Dirty`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Dirty_Destroy()` to free it when you're done using it.
MRC_API MR_Dirty *MR_Dirty_ConstructFromAnother(const MR_Dirty *_other);

/// Destroys a heap-allocated instance of `MR_Dirty`. Does nothing if the pointer is null.
MRC_API void MR_Dirty_Destroy(const MR_Dirty *_this);

/// Destroys a heap-allocated array of `MR_Dirty`. Does nothing if the pointer is null.
MRC_API void MR_Dirty_DestroyArray(const MR_Dirty *_this);

/// Generated from a conversion operator of class `MR::Dirty` to type `uint32_t &`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API uint32_t *MR_Dirty_ConvertTo_uint32_t_ref(MR_Dirty *_this);

/// Generated from a conversion operator of class `MR::Dirty` to type `uint32_t`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API uint32_t MR_Dirty_ConvertTo_uint32_t(const MR_Dirty *_this);

/// Generated from a method of class `MR::Dirty` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Dirty *MR_Dirty_AssignFromAnother(MR_Dirty *_this, const MR_Dirty *_other);

/// Generated from a method of class `MR::Dirty` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Dirty *MR_Dirty_assign(MR_Dirty *_this, uint32_t b);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VisualObject_Destroy()` to free it when you're done using it.
MRC_API MR_VisualObject *MR_VisualObject_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VisualObject_DestroyArray()`.
/// Use `MR_VisualObject_OffsetMutablePtr()` and `MR_VisualObject_OffsetPtr()` to access the array elements.
MRC_API MR_VisualObject *MR_VisualObject_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VisualObject *MR_VisualObject_OffsetPtr(const MR_VisualObject *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VisualObject *MR_VisualObject_OffsetMutablePtr(MR_VisualObject *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::VisualObject` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_VisualObject_UpcastTo_MR_Object(const MR_VisualObject *object);

/// Upcasts an instance of `MR::VisualObject` to its base class `MR::Object`.
MRC_API MR_Object *MR_VisualObject_MutableUpcastTo_MR_Object(MR_VisualObject *object);

/// Upcasts an instance of `MR::VisualObject` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_VisualObject_UpcastTo_MR_ObjectChildrenHolder(const MR_VisualObject *object);

/// Upcasts an instance of `MR::VisualObject` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_VisualObject_MutableUpcastTo_MR_ObjectChildrenHolder(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *MR_VisualObject_StaticDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *MR_VisualObject_MutableStaticDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *MR_VisualObject_DynamicDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *MR_VisualObject_MutableDynamicDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *MR_VisualObject_DynamicDowncastToOrFail_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *MR_VisualObject_MutableDynamicDowncastToOrFail_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *MR_VisualObject_StaticDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *MR_VisualObject_MutableStaticDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *MR_VisualObject_DynamicDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *MR_VisualObject_MutableDynamicDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *MR_VisualObject_DynamicDowncastToOrFail_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *MR_VisualObject_MutableDynamicDowncastToOrFail_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_VisualObject_StaticDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_VisualObject_MutableStaticDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_VisualObject_DynamicDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_VisualObject_MutableDynamicDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_VisualObject_DynamicDowncastToOrFail_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_VisualObject_MutableDynamicDowncastToOrFail_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::AngleMeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_AngleMeasurementObject *MR_VisualObject_StaticDowncastTo_MR_AngleMeasurementObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::AngleMeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_AngleMeasurementObject *MR_VisualObject_MutableStaticDowncastTo_MR_AngleMeasurementObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::AngleMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_AngleMeasurementObject *MR_VisualObject_DynamicDowncastTo_MR_AngleMeasurementObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::AngleMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_AngleMeasurementObject *MR_VisualObject_MutableDynamicDowncastTo_MR_AngleMeasurementObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::AngleMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AngleMeasurementObject *MR_VisualObject_DynamicDowncastToOrFail_MR_AngleMeasurementObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::AngleMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AngleMeasurementObject *MR_VisualObject_MutableDynamicDowncastToOrFail_MR_AngleMeasurementObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::CircleObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_CircleObject *MR_VisualObject_StaticDowncastTo_MR_CircleObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::CircleObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_CircleObject *MR_VisualObject_MutableStaticDowncastTo_MR_CircleObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::CircleObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_CircleObject *MR_VisualObject_DynamicDowncastTo_MR_CircleObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::CircleObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_CircleObject *MR_VisualObject_MutableDynamicDowncastTo_MR_CircleObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::CircleObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_CircleObject *MR_VisualObject_DynamicDowncastToOrFail_MR_CircleObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::CircleObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_CircleObject *MR_VisualObject_MutableDynamicDowncastToOrFail_MR_CircleObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ConeObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ConeObject *MR_VisualObject_StaticDowncastTo_MR_ConeObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ConeObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ConeObject *MR_VisualObject_MutableStaticDowncastTo_MR_ConeObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ConeObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ConeObject *MR_VisualObject_DynamicDowncastTo_MR_ConeObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ConeObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ConeObject *MR_VisualObject_MutableDynamicDowncastTo_MR_ConeObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ConeObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ConeObject *MR_VisualObject_DynamicDowncastToOrFail_MR_ConeObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ConeObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ConeObject *MR_VisualObject_MutableDynamicDowncastToOrFail_MR_ConeObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::CylinderObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_CylinderObject *MR_VisualObject_StaticDowncastTo_MR_CylinderObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::CylinderObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_CylinderObject *MR_VisualObject_MutableStaticDowncastTo_MR_CylinderObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::CylinderObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_CylinderObject *MR_VisualObject_DynamicDowncastTo_MR_CylinderObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::CylinderObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_CylinderObject *MR_VisualObject_MutableDynamicDowncastTo_MR_CylinderObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::CylinderObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_CylinderObject *MR_VisualObject_DynamicDowncastToOrFail_MR_CylinderObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::CylinderObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_CylinderObject *MR_VisualObject_MutableDynamicDowncastToOrFail_MR_CylinderObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::DistanceMeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_DistanceMeasurementObject *MR_VisualObject_StaticDowncastTo_MR_DistanceMeasurementObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::DistanceMeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_DistanceMeasurementObject *MR_VisualObject_MutableStaticDowncastTo_MR_DistanceMeasurementObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::DistanceMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_DistanceMeasurementObject *MR_VisualObject_DynamicDowncastTo_MR_DistanceMeasurementObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::DistanceMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_DistanceMeasurementObject *MR_VisualObject_MutableDynamicDowncastTo_MR_DistanceMeasurementObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::DistanceMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_DistanceMeasurementObject *MR_VisualObject_DynamicDowncastToOrFail_MR_DistanceMeasurementObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::DistanceMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DistanceMeasurementObject *MR_VisualObject_MutableDynamicDowncastToOrFail_MR_DistanceMeasurementObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::FeatureObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_FeatureObject *MR_VisualObject_StaticDowncastTo_MR_FeatureObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::FeatureObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_FeatureObject *MR_VisualObject_MutableStaticDowncastTo_MR_FeatureObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::FeatureObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_FeatureObject *MR_VisualObject_DynamicDowncastTo_MR_FeatureObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::FeatureObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_FeatureObject *MR_VisualObject_MutableDynamicDowncastTo_MR_FeatureObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::FeatureObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FeatureObject *MR_VisualObject_DynamicDowncastToOrFail_MR_FeatureObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::FeatureObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FeatureObject *MR_VisualObject_MutableDynamicDowncastToOrFail_MR_FeatureObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::LineObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_LineObject *MR_VisualObject_StaticDowncastTo_MR_LineObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::LineObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_LineObject *MR_VisualObject_MutableStaticDowncastTo_MR_LineObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::LineObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_LineObject *MR_VisualObject_DynamicDowncastTo_MR_LineObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::LineObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_LineObject *MR_VisualObject_MutableDynamicDowncastTo_MR_LineObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::LineObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_LineObject *MR_VisualObject_DynamicDowncastToOrFail_MR_LineObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::LineObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_LineObject *MR_VisualObject_MutableDynamicDowncastToOrFail_MR_LineObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::MeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_MeasurementObject *MR_VisualObject_StaticDowncastTo_MR_MeasurementObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::MeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_MeasurementObject *MR_VisualObject_MutableStaticDowncastTo_MR_MeasurementObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::MeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_MeasurementObject *MR_VisualObject_DynamicDowncastTo_MR_MeasurementObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::MeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_MeasurementObject *MR_VisualObject_MutableDynamicDowncastTo_MR_MeasurementObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::MeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeasurementObject *MR_VisualObject_DynamicDowncastToOrFail_MR_MeasurementObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::MeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeasurementObject *MR_VisualObject_MutableDynamicDowncastToOrFail_MR_MeasurementObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectDistanceMap`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectDistanceMap *MR_VisualObject_StaticDowncastTo_MR_ObjectDistanceMap(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectDistanceMap`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectDistanceMap *MR_VisualObject_MutableStaticDowncastTo_MR_ObjectDistanceMap(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectDistanceMap`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectDistanceMap *MR_VisualObject_DynamicDowncastTo_MR_ObjectDistanceMap(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectDistanceMap`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectDistanceMap *MR_VisualObject_MutableDynamicDowncastTo_MR_ObjectDistanceMap(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectDistanceMap`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectDistanceMap *MR_VisualObject_DynamicDowncastToOrFail_MR_ObjectDistanceMap(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectDistanceMap`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectDistanceMap *MR_VisualObject_MutableDynamicDowncastToOrFail_MR_ObjectDistanceMap(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectGcode`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectGcode *MR_VisualObject_StaticDowncastTo_MR_ObjectGcode(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectGcode`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectGcode *MR_VisualObject_MutableStaticDowncastTo_MR_ObjectGcode(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectGcode`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectGcode *MR_VisualObject_DynamicDowncastTo_MR_ObjectGcode(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectGcode`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectGcode *MR_VisualObject_MutableDynamicDowncastTo_MR_ObjectGcode(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectGcode`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectGcode *MR_VisualObject_DynamicDowncastToOrFail_MR_ObjectGcode(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectGcode`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectGcode *MR_VisualObject_MutableDynamicDowncastToOrFail_MR_ObjectGcode(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectLabel`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectLabel *MR_VisualObject_StaticDowncastTo_MR_ObjectLabel(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectLabel`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectLabel *MR_VisualObject_MutableStaticDowncastTo_MR_ObjectLabel(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectLabel`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectLabel *MR_VisualObject_DynamicDowncastTo_MR_ObjectLabel(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectLabel`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectLabel *MR_VisualObject_MutableDynamicDowncastTo_MR_ObjectLabel(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectLabel`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectLabel *MR_VisualObject_DynamicDowncastToOrFail_MR_ObjectLabel(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectLabel`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectLabel *MR_VisualObject_MutableDynamicDowncastToOrFail_MR_ObjectLabel(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectLines`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectLines *MR_VisualObject_StaticDowncastTo_MR_ObjectLines(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectLines`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectLines *MR_VisualObject_MutableStaticDowncastTo_MR_ObjectLines(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectLines`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectLines *MR_VisualObject_DynamicDowncastTo_MR_ObjectLines(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectLines`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectLines *MR_VisualObject_MutableDynamicDowncastTo_MR_ObjectLines(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectLines`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectLines *MR_VisualObject_DynamicDowncastToOrFail_MR_ObjectLines(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectLines`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectLines *MR_VisualObject_MutableDynamicDowncastToOrFail_MR_ObjectLines(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectLinesHolder`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectLinesHolder *MR_VisualObject_StaticDowncastTo_MR_ObjectLinesHolder(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectLinesHolder`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectLinesHolder *MR_VisualObject_MutableStaticDowncastTo_MR_ObjectLinesHolder(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectLinesHolder`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectLinesHolder *MR_VisualObject_DynamicDowncastTo_MR_ObjectLinesHolder(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectLinesHolder`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectLinesHolder *MR_VisualObject_MutableDynamicDowncastTo_MR_ObjectLinesHolder(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectLinesHolder`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectLinesHolder *MR_VisualObject_DynamicDowncastToOrFail_MR_ObjectLinesHolder(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectLinesHolder`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectLinesHolder *MR_VisualObject_MutableDynamicDowncastToOrFail_MR_ObjectLinesHolder(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectMesh`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectMesh *MR_VisualObject_StaticDowncastTo_MR_ObjectMesh(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectMesh`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectMesh *MR_VisualObject_MutableStaticDowncastTo_MR_ObjectMesh(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectMesh`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectMesh *MR_VisualObject_DynamicDowncastTo_MR_ObjectMesh(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectMesh`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectMesh *MR_VisualObject_MutableDynamicDowncastTo_MR_ObjectMesh(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectMesh`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectMesh *MR_VisualObject_DynamicDowncastToOrFail_MR_ObjectMesh(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectMesh`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectMesh *MR_VisualObject_MutableDynamicDowncastToOrFail_MR_ObjectMesh(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectMeshHolder`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectMeshHolder *MR_VisualObject_StaticDowncastTo_MR_ObjectMeshHolder(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectMeshHolder`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectMeshHolder *MR_VisualObject_MutableStaticDowncastTo_MR_ObjectMeshHolder(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectMeshHolder`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectMeshHolder *MR_VisualObject_DynamicDowncastTo_MR_ObjectMeshHolder(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectMeshHolder`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectMeshHolder *MR_VisualObject_MutableDynamicDowncastTo_MR_ObjectMeshHolder(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectMeshHolder`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectMeshHolder *MR_VisualObject_DynamicDowncastToOrFail_MR_ObjectMeshHolder(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectMeshHolder`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectMeshHolder *MR_VisualObject_MutableDynamicDowncastToOrFail_MR_ObjectMeshHolder(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectPoints`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectPoints *MR_VisualObject_StaticDowncastTo_MR_ObjectPoints(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectPoints`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectPoints *MR_VisualObject_MutableStaticDowncastTo_MR_ObjectPoints(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectPoints`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectPoints *MR_VisualObject_DynamicDowncastTo_MR_ObjectPoints(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectPoints`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectPoints *MR_VisualObject_MutableDynamicDowncastTo_MR_ObjectPoints(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectPoints`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectPoints *MR_VisualObject_DynamicDowncastToOrFail_MR_ObjectPoints(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectPoints`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectPoints *MR_VisualObject_MutableDynamicDowncastToOrFail_MR_ObjectPoints(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectPointsHolder`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectPointsHolder *MR_VisualObject_StaticDowncastTo_MR_ObjectPointsHolder(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectPointsHolder`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectPointsHolder *MR_VisualObject_MutableStaticDowncastTo_MR_ObjectPointsHolder(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectPointsHolder`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectPointsHolder *MR_VisualObject_DynamicDowncastTo_MR_ObjectPointsHolder(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectPointsHolder`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectPointsHolder *MR_VisualObject_MutableDynamicDowncastTo_MR_ObjectPointsHolder(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectPointsHolder`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectPointsHolder *MR_VisualObject_DynamicDowncastToOrFail_MR_ObjectPointsHolder(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectPointsHolder`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectPointsHolder *MR_VisualObject_MutableDynamicDowncastToOrFail_MR_ObjectPointsHolder(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectVoxels`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectVoxels *MR_VisualObject_StaticDowncastTo_MR_ObjectVoxels(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectVoxels`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectVoxels *MR_VisualObject_MutableStaticDowncastTo_MR_ObjectVoxels(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectVoxels`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectVoxels *MR_VisualObject_DynamicDowncastTo_MR_ObjectVoxels(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectVoxels`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectVoxels *MR_VisualObject_MutableDynamicDowncastTo_MR_ObjectVoxels(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectVoxels`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectVoxels *MR_VisualObject_DynamicDowncastToOrFail_MR_ObjectVoxels(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::ObjectVoxels`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectVoxels *MR_VisualObject_MutableDynamicDowncastToOrFail_MR_ObjectVoxels(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::PlaneObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_PlaneObject *MR_VisualObject_StaticDowncastTo_MR_PlaneObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::PlaneObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_PlaneObject *MR_VisualObject_MutableStaticDowncastTo_MR_PlaneObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::PlaneObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_PlaneObject *MR_VisualObject_DynamicDowncastTo_MR_PlaneObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::PlaneObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_PlaneObject *MR_VisualObject_MutableDynamicDowncastTo_MR_PlaneObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::PlaneObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PlaneObject *MR_VisualObject_DynamicDowncastToOrFail_MR_PlaneObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::PlaneObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PlaneObject *MR_VisualObject_MutableDynamicDowncastToOrFail_MR_PlaneObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::PointObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_PointObject *MR_VisualObject_StaticDowncastTo_MR_PointObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::PointObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_PointObject *MR_VisualObject_MutableStaticDowncastTo_MR_PointObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::PointObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_PointObject *MR_VisualObject_DynamicDowncastTo_MR_PointObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::PointObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_PointObject *MR_VisualObject_MutableDynamicDowncastTo_MR_PointObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::PointObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PointObject *MR_VisualObject_DynamicDowncastToOrFail_MR_PointObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::PointObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointObject *MR_VisualObject_MutableDynamicDowncastToOrFail_MR_PointObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::RadiusMeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_RadiusMeasurementObject *MR_VisualObject_StaticDowncastTo_MR_RadiusMeasurementObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::RadiusMeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_RadiusMeasurementObject *MR_VisualObject_MutableStaticDowncastTo_MR_RadiusMeasurementObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::RadiusMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_RadiusMeasurementObject *MR_VisualObject_DynamicDowncastTo_MR_RadiusMeasurementObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::RadiusMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_RadiusMeasurementObject *MR_VisualObject_MutableDynamicDowncastTo_MR_RadiusMeasurementObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::RadiusMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_RadiusMeasurementObject *MR_VisualObject_DynamicDowncastToOrFail_MR_RadiusMeasurementObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::RadiusMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RadiusMeasurementObject *MR_VisualObject_MutableDynamicDowncastToOrFail_MR_RadiusMeasurementObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::SphereObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_SphereObject *MR_VisualObject_StaticDowncastTo_MR_SphereObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::SphereObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_SphereObject *MR_VisualObject_MutableStaticDowncastTo_MR_SphereObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::SphereObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_SphereObject *MR_VisualObject_DynamicDowncastTo_MR_SphereObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::SphereObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_SphereObject *MR_VisualObject_MutableDynamicDowncastTo_MR_SphereObject(MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::SphereObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_SphereObject *MR_VisualObject_DynamicDowncastToOrFail_MR_SphereObject(const MR_VisualObject *object);

/// Downcasts an instance of `MR::VisualObject` to a derived class `MR::SphereObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SphereObject *MR_VisualObject_MutableDynamicDowncastToOrFail_MR_SphereObject(MR_VisualObject *object);

/// Generated from a constructor of class `MR::VisualObject`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VisualObject_Destroy()` to free it when you're done using it.
MRC_API MR_VisualObject *MR_VisualObject_ConstructFromAnother(MR_PassBy _other_pass_by, MR_VisualObject *_other);

/// Destroys a heap-allocated instance of `MR_VisualObject`. Does nothing if the pointer is null.
MRC_API void MR_VisualObject_Destroy(const MR_VisualObject *_this);

/// Destroys a heap-allocated array of `MR_VisualObject`. Does nothing if the pointer is null.
MRC_API void MR_VisualObject_DestroyArray(const MR_VisualObject *_this);

/// Generated from a method of class `MR::VisualObject` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VisualObject *MR_VisualObject_AssignFromAnother(MR_VisualObject *_this, MR_PassBy _other_pass_by, MR_VisualObject *_other);

/// Generated from a method of class `MR::VisualObject` named `TypeName`.
MRC_API const char *MR_VisualObject_TypeName(void);

/// Generated from a method of class `MR::VisualObject` named `typeName`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_VisualObject_typeName(const MR_VisualObject *_this);

/// Generated from a method of class `MR::VisualObject` named `getClassName`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_VisualObject_getClassName(const MR_VisualObject *_this);

/// Generated from a method of class `MR::VisualObject` named `getClassNameInPlural`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_VisualObject_getClassNameInPlural(const MR_VisualObject *_this);

/// Returns true if this class supports the property `type`. Otherwise passing it to the functions below is illegal.
/// Generated from a method of class `MR::VisualObject` named `supportsVisualizeProperty`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `type` can not be null. It is a single object.
MRC_API bool MR_VisualObject_supportsVisualizeProperty(const MR_VisualObject *_this, const MR_AnyVisualizeMaskEnum *type);

/// set visual property in all viewports specified by the mask
/// Generated from a method of class `MR::VisualObject` named `setVisualizeProperty`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `type` can not be null. It is a single object.
/// Parameter `viewportMask` can not be null. It is a single object.
MRC_API void MR_VisualObject_setVisualizeProperty(MR_VisualObject *_this, bool value, const MR_AnyVisualizeMaskEnum *type, const MR_ViewportMask *viewportMask);

/// set visual property mask
/// Generated from a method of class `MR::VisualObject` named `setVisualizePropertyMask`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `type` can not be null. It is a single object.
/// Parameter `viewportMask` can not be null. It is a single object.
MRC_API void MR_VisualObject_setVisualizePropertyMask(MR_VisualObject *_this, const MR_AnyVisualizeMaskEnum *type, const MR_ViewportMask *viewportMask);

/// returns true if the property is set at least in one viewport specified by the mask
/// Generated from a method of class `MR::VisualObject` named `getVisualizeProperty`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `type` can not be null. It is a single object.
/// Parameter `viewportMask` can not be null. It is a single object.
MRC_API bool MR_VisualObject_getVisualizeProperty(const MR_VisualObject *_this, const MR_AnyVisualizeMaskEnum *type, const MR_ViewportMask *viewportMask);

/// returns mask of viewports where given property is set
/// Generated from a method of class `MR::VisualObject` named `getVisualizePropertyMask`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `type` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ViewportMask *MR_VisualObject_getVisualizePropertyMask(const MR_VisualObject *_this, const MR_AnyVisualizeMaskEnum *type);

/// toggle visual property in all viewports specified by the mask
/// Generated from a method of class `MR::VisualObject` named `toggleVisualizeProperty`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `type` can not be null. It is a single object.
/// Parameter `viewportMask` can not be null. It is a single object.
MRC_API void MR_VisualObject_toggleVisualizeProperty(MR_VisualObject *_this, const MR_AnyVisualizeMaskEnum *type, const MR_ViewportMask *viewportMask);

/// get all visualize properties masks
/// Generated from a method of class `MR::VisualObject` named `getAllVisualizeProperties`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_ViewportMask_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_ViewportMask *MR_VisualObject_getAllVisualizeProperties(const MR_VisualObject *_this);

/// set all visualize properties masks
/// Generated from a method of class `MR::VisualObject` named `setAllVisualizeProperties`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `properties` can not be null. It is a single object.
MRC_API void MR_VisualObject_setAllVisualizeProperties(MR_VisualObject *_this, const MR_std_vector_MR_ViewportMask *properties);

/// shows/hides object name in all viewports
/// Generated from a method of class `MR::VisualObject` named `showName`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VisualObject_showName(MR_VisualObject *_this, bool on);

/// returns whether object name is shown in any viewport
/// Generated from a method of class `MR::VisualObject` named `showName`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_VisualObject_showName_const(const MR_VisualObject *_this);

/// returns color of object when it is selected/not-selected (depending on argument) in given viewport
/// Generated from a method of class `MR::VisualObject` named `getFrontColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `selected` has a default argument: `true`, pass a null pointer to use it.
/// Parameter `viewportId` has a default argument: `{}`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Color *MR_VisualObject_getFrontColor(const MR_VisualObject *_this, const bool *selected, const MR_ViewportId *viewportId);

/// sets color of object when it is selected/not-selected (depending on argument) in given viewport
/// Generated from a method of class `MR::VisualObject` named `setFrontColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `color` can not be null. It is a single object.
/// Parameter `viewportId` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_VisualObject_setFrontColor(MR_VisualObject *_this, const MR_Color *color, bool selected, const MR_ViewportId *viewportId);

/// returns color of object when it is selected/not-selected (depending on argument) in all viewports
/// Generated from a method of class `MR::VisualObject` named `getFrontColorsForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `selected` has a default argument: `true`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ViewportProperty_MR_Color *MR_VisualObject_getFrontColorsForAllViewports(const MR_VisualObject *_this, const bool *selected);

/// sets color of object when it is selected/not-selected (depending on argument) in all viewports
/// Generated from a method of class `MR::VisualObject` named `setFrontColorsForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `selected` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_VisualObject_setFrontColorsForAllViewports(MR_VisualObject *_this, MR_PassBy val_pass_by, MR_ViewportProperty_MR_Color *val, const bool *selected);

/// returns backward color of object in all viewports
/// Generated from a method of class `MR::VisualObject` named `getBackColorsForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ViewportProperty_MR_Color *MR_VisualObject_getBackColorsForAllViewports(const MR_VisualObject *_this);

/// sets backward color of object in all viewports
/// Generated from a method of class `MR::VisualObject` named `setBackColorsForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VisualObject_setBackColorsForAllViewports(MR_VisualObject *_this, MR_PassBy val_pass_by, MR_ViewportProperty_MR_Color *val);

/// returns backward color of object in given viewport
/// Generated from a method of class `MR::VisualObject` named `getBackColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `viewportId` has a default argument: `{}`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Color *MR_VisualObject_getBackColor(const MR_VisualObject *_this, const MR_ViewportId *viewportId);

/// sets backward color of object in given viewport
/// Generated from a method of class `MR::VisualObject` named `setBackColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `color` can not be null. It is a single object.
/// Parameter `viewportId` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_VisualObject_setBackColor(MR_VisualObject *_this, const MR_Color *color, const MR_ViewportId *viewportId);

/// returns global transparency alpha of object in given viewport
/// Generated from a method of class `MR::VisualObject` named `getGlobalAlpha`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `viewportId` has a default argument: `{}`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const uint8_t *MR_VisualObject_getGlobalAlpha(const MR_VisualObject *_this, const MR_ViewportId *viewportId);

/// sets global transparency alpha of object in given viewport
/// Generated from a method of class `MR::VisualObject` named `setGlobalAlpha`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `viewportId` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_VisualObject_setGlobalAlpha(MR_VisualObject *_this, uint8_t alpha, const MR_ViewportId *viewportId);

/// returns global transparency alpha of object in all viewports
/// Generated from a method of class `MR::VisualObject` named `getGlobalAlphaForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ViewportProperty_uint8_t *MR_VisualObject_getGlobalAlphaForAllViewports(const MR_VisualObject *_this);

/// sets global transparency alpha of object in all viewports
/// Generated from a method of class `MR::VisualObject` named `setGlobalAlphaForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VisualObject_setGlobalAlphaForAllViewports(MR_VisualObject *_this, MR_PassBy val_pass_by, MR_ViewportProperty_uint8_t *val);

/// sets some dirty flags for the object (to force its visual update)
/// \param mask is a union of DirtyFlags flags
/// \param invalidateCaches whether to automatically invalidate model caches (pass false here if you manually update the caches)
/// Generated from a method of class `MR::VisualObject` named `setDirtyFlags`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `invalidateCaches` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_VisualObject_setDirtyFlags(MR_VisualObject *_this, uint32_t mask, const bool *invalidateCaches);

/// returns current dirty flags for the object
/// Generated from a method of class `MR::VisualObject` named `getDirtyFlags`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API uint32_t MR_VisualObject_getDirtyFlags(const MR_VisualObject *_this);

/// resets all dirty flags (except for cache flags that will be reset automatically on cache update)
/// Generated from a method of class `MR::VisualObject` named `resetDirty`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VisualObject_resetDirty(const MR_VisualObject *_this);

/// reset dirty flags without some specific bits (useful for lazy normals update)
/// Generated from a method of class `MR::VisualObject` named `resetDirtyExceptMask`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VisualObject_resetDirtyExceptMask(const MR_VisualObject *_this, uint32_t mask);

/// returns cached bounding box of this object in local coordinates
/// Generated from a method of class `MR::VisualObject` named `getBoundingBox`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Box3f MR_VisualObject_getBoundingBox(const MR_VisualObject *_this);

/// returns bounding box of this object in given viewport in world coordinates,
/// to get world bounding box of the object with all child objects, please call Object::getWorldTreeBox method
/// Generated from a method of class `MR::VisualObject` named `getWorldBox`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Box3f MR_VisualObject_getWorldBox(const MR_VisualObject *_this, const MR_ViewportId *_1);

/// returns true if the object must be redrawn (due to dirty flags) in one of specified viewports
/// Generated from a method of class `MR::VisualObject` named `getRedrawFlag`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `viewportMask` can not be null. It is a single object.
MRC_API bool MR_VisualObject_getRedrawFlag(const MR_VisualObject *_this, const MR_ViewportMask *viewportMask);

/// whether the object can be picked (by mouse) in any of given viewports
/// Generated from a method of class `MR::VisualObject` named `isPickable`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `viewportMask` is a single object.
/// Parameter `viewportMask` has a default argument: `ViewportMask::any()`, pass a null pointer to use it.
MRC_API bool MR_VisualObject_isPickable(const MR_VisualObject *_this, const MR_ViewportMask *viewportMask);

/// sets the object as can/cannot be picked (by mouse) in all of given viewports
/// Generated from a method of class `MR::VisualObject` named `setPickable`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `viewportMask` is a single object.
/// Parameter `viewportMask` has a default argument: `ViewportMask::all()`, pass a null pointer to use it.
MRC_API void MR_VisualObject_setPickable(MR_VisualObject *_this, bool on, const MR_ViewportMask *viewportMask);

/// returns the current coloring mode of the object
/// Generated from a method of class `MR::VisualObject` named `getColoringType`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_ColoringType MR_VisualObject_getColoringType(const MR_VisualObject *_this);

/// sets coloring mode of the object with given argument
/// Generated from a method of class `MR::VisualObject` named `setColoringType`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VisualObject_setColoringType(MR_VisualObject *_this, MR_ColoringType coloringType);

/// returns the current shininess visual value
/// Generated from a method of class `MR::VisualObject` named `getShininess`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_VisualObject_getShininess(const MR_VisualObject *_this);

/// sets shininess visual value of the object with given argument
/// Generated from a method of class `MR::VisualObject` named `setShininess`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VisualObject_setShininess(MR_VisualObject *_this, float shininess);

/// returns intensity of reflections
/// Generated from a method of class `MR::VisualObject` named `getSpecularStrength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_VisualObject_getSpecularStrength(const MR_VisualObject *_this);

/// sets intensity of reflections
/// Generated from a method of class `MR::VisualObject` named `setSpecularStrength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VisualObject_setSpecularStrength(MR_VisualObject *_this, float specularStrength);

/// returns intensity of non-directional light
/// Generated from a method of class `MR::VisualObject` named `getAmbientStrength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_VisualObject_getAmbientStrength(const MR_VisualObject *_this);

/// sets intensity of non-directional light
/// Generated from a method of class `MR::VisualObject` named `setAmbientStrength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VisualObject_setAmbientStrength(MR_VisualObject *_this, float ambientStrength);

/// clones this object only, without its children,
/// making new object the owner of all copied resources
/// Generated from a method of class `MR::VisualObject` named `clone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_VisualObject_clone(const MR_VisualObject *_this);

/// clones this object only, without its children,
/// making new object to share resources with this object
/// Generated from a method of class `MR::VisualObject` named `shallowClone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_VisualObject_shallowClone(const MR_VisualObject *_this);

/// draws this object for visualization
/// Returns true if something was drawn.
/// Generated from a method of class `MR::VisualObject` named `render`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MRC_API bool MR_VisualObject_render(const MR_VisualObject *_this, const MR_ModelRenderParams *_1);

/// draws this object for picking
/// Generated from a method of class `MR::VisualObject` named `renderForPicker`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MRC_API void MR_VisualObject_renderForPicker(const MR_VisualObject *_this, const MR_ModelBaseRenderParams *_1, uint32_t _2);

/// draws this object for 2d UI
/// Generated from a method of class `MR::VisualObject` named `renderUi`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
MRC_API void MR_VisualObject_renderUi(const MR_VisualObject *_this, const MR_UiRenderParams *params);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::VisualObject` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_VisualObject_heapBytes(const MR_VisualObject *_this);

/// return several info lines that can better describe the object in the UI
/// Generated from a method of class `MR::VisualObject` named `getInfoLines`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_string *MR_VisualObject_getInfoLines(const MR_VisualObject *_this);

/// whether the scene-related properties should get their values from SceneColors and SceneSettings instances
/// rather than from the input data on deserialization
/// Generated from a method of class `MR::VisualObject` named `useDefaultScenePropertiesOnDeserialization`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_VisualObject_useDefaultScenePropertiesOnDeserialization(const MR_VisualObject *_this);

/// set whether the scene-related properties should get their values from SceneColors and SceneSettings instances
/// rather than from the input data on deserialization
/// Generated from a method of class `MR::VisualObject` named `setUseDefaultScenePropertiesOnDeserialization`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VisualObject_setUseDefaultScenePropertiesOnDeserialization(MR_VisualObject *_this, bool useDefaultScenePropertiesOnDeserialization);

/// reset basic object colors to their default values from the current theme
/// Generated from a method of class `MR::VisualObject` named `resetFrontColor`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VisualObject_resetFrontColor(MR_VisualObject *_this);

/// reset all object colors to their default values from the current theme
/// Generated from a method of class `MR::VisualObject` named `resetColors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VisualObject_resetColors(MR_VisualObject *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType_Destroy()` to free it when you're done using it.
MRC_API MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType_DestroyArray()`.
/// Use `MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType_OffsetMutablePtr()` and `MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType_OffsetPtr()` to access the array elements.
MRC_API MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType_OffsetPtr(const MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType_OffsetMutablePtr(MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::IsVisualizeMaskEnum<MR::MeshVisualizePropertyType>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType_Destroy()` to free it when you're done using it.
MRC_API MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType_ConstructFromAnother(const MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType *_other);

/// Destroys a heap-allocated instance of `MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType`. Does nothing if the pointer is null.
MRC_API void MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType_Destroy(const MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType *_this);

/// Destroys a heap-allocated array of `MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType`. Does nothing if the pointer is null.
MRC_API void MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType_DestroyArray(const MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType *_this);

/// Generated from a method of class `MR::IsVisualizeMaskEnum<MR::MeshVisualizePropertyType>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType_AssignFromAnother(MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType *_this, const MR_IsVisualizeMaskEnum_MR_MeshVisualizePropertyType *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType_Destroy()` to free it when you're done using it.
MRC_API MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType_DestroyArray()`.
/// Use `MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType_OffsetMutablePtr()` and `MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType_OffsetPtr()` to access the array elements.
MRC_API MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType_OffsetPtr(const MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType_OffsetMutablePtr(MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::IsVisualizeMaskEnum<MR::LinesVisualizePropertyType>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType_Destroy()` to free it when you're done using it.
MRC_API MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType_ConstructFromAnother(const MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType *_other);

/// Destroys a heap-allocated instance of `MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType`. Does nothing if the pointer is null.
MRC_API void MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType_Destroy(const MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType *_this);

/// Destroys a heap-allocated array of `MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType`. Does nothing if the pointer is null.
MRC_API void MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType_DestroyArray(const MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType *_this);

/// Generated from a method of class `MR::IsVisualizeMaskEnum<MR::LinesVisualizePropertyType>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType_AssignFromAnother(MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType *_this, const MR_IsVisualizeMaskEnum_MR_LinesVisualizePropertyType *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType_Destroy()` to free it when you're done using it.
MRC_API MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType_DestroyArray()`.
/// Use `MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType_OffsetMutablePtr()` and `MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType_OffsetPtr()` to access the array elements.
MRC_API MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType_OffsetPtr(const MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType_OffsetMutablePtr(MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::IsVisualizeMaskEnum<MR::PointsVisualizePropertyType>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType_Destroy()` to free it when you're done using it.
MRC_API MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType_ConstructFromAnother(const MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType *_other);

/// Destroys a heap-allocated instance of `MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType`. Does nothing if the pointer is null.
MRC_API void MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType_Destroy(const MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType *_this);

/// Destroys a heap-allocated array of `MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType`. Does nothing if the pointer is null.
MRC_API void MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType_DestroyArray(const MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType *_this);

/// Generated from a method of class `MR::IsVisualizeMaskEnum<MR::PointsVisualizePropertyType>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType_AssignFromAnother(MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType *_this, const MR_IsVisualizeMaskEnum_MR_PointsVisualizePropertyType *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType_Destroy()` to free it when you're done using it.
MRC_API MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType_DestroyArray()`.
/// Use `MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType_OffsetMutablePtr()` and `MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType_OffsetPtr()` to access the array elements.
MRC_API MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType_OffsetPtr(const MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType_OffsetMutablePtr(MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::IsVisualizeMaskEnum<MR::DimensionsVisualizePropertyType>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType_Destroy()` to free it when you're done using it.
MRC_API MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType_ConstructFromAnother(const MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType *_other);

/// Destroys a heap-allocated instance of `MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType`. Does nothing if the pointer is null.
MRC_API void MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType_Destroy(const MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType *_this);

/// Destroys a heap-allocated array of `MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType`. Does nothing if the pointer is null.
MRC_API void MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType_DestroyArray(const MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType *_this);

/// Generated from a method of class `MR::IsVisualizeMaskEnum<MR::DimensionsVisualizePropertyType>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType_AssignFromAnother(MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType *_this, const MR_IsVisualizeMaskEnum_MR_DimensionsVisualizePropertyType *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType_Destroy()` to free it when you're done using it.
MRC_API MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType_DestroyArray()`.
/// Use `MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType_OffsetMutablePtr()` and `MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType_OffsetPtr()` to access the array elements.
MRC_API MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType_OffsetPtr(const MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType_OffsetMutablePtr(MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::IsVisualizeMaskEnum<MR::FeatureVisualizePropertyType>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType_Destroy()` to free it when you're done using it.
MRC_API MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType_ConstructFromAnother(const MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType *_other);

/// Destroys a heap-allocated instance of `MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType`. Does nothing if the pointer is null.
MRC_API void MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType_Destroy(const MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType *_this);

/// Destroys a heap-allocated array of `MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType`. Does nothing if the pointer is null.
MRC_API void MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType_DestroyArray(const MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType *_this);

/// Generated from a method of class `MR::IsVisualizeMaskEnum<MR::FeatureVisualizePropertyType>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType_AssignFromAnother(MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType *_this, const MR_IsVisualizeMaskEnum_MR_FeatureVisualizePropertyType *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType_Destroy()` to free it when you're done using it.
MRC_API MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType_DestroyArray()`.
/// Use `MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType_OffsetMutablePtr()` and `MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType_OffsetPtr()` to access the array elements.
MRC_API MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType_OffsetPtr(const MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType_OffsetMutablePtr(MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::IsVisualizeMaskEnum<MR::LabelVisualizePropertyType>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType_Destroy()` to free it when you're done using it.
MRC_API MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType_ConstructFromAnother(const MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType *_other);

/// Destroys a heap-allocated instance of `MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType`. Does nothing if the pointer is null.
MRC_API void MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType_Destroy(const MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType *_this);

/// Destroys a heap-allocated array of `MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType`. Does nothing if the pointer is null.
MRC_API void MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType_DestroyArray(const MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType *_this);

/// Generated from a method of class `MR::IsVisualizeMaskEnum<MR::LabelVisualizePropertyType>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType *MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType_AssignFromAnother(MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType *_this, const MR_IsVisualizeMaskEnum_MR_LabelVisualizePropertyType *_other);

#ifdef __cplusplus
} // extern "C"
#endif
