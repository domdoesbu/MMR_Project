// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRAffineXf.h>
#include <MRCMesh/MRBox.h>
#include <MRCMesh/MRViewportId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter; // Defined in `#include <MRCMesh/MRAddVisualPropertiesMixin.h>`.
typedef struct MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length; // Defined in `#include <MRCMesh/MRAddVisualPropertiesMixin.h>`.
typedef struct MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length; // Defined in `#include <MRCMesh/MRAddVisualPropertiesMixin.h>`.
typedef struct MR_AngleMeasurementObject MR_AngleMeasurementObject; // Defined in `#include <MRCMesh/MRAngleMeasurementObject.h>`.
typedef struct MR_CircleObject MR_CircleObject; // Defined in `#include <MRCMesh/MRCircleObject.h>`.
typedef struct MR_ConeObject MR_ConeObject; // Defined in `#include <MRCMesh/MRConeObject.h>`.
typedef struct MR_CylinderObject MR_CylinderObject; // Defined in `#include <MRCMesh/MRCylinderObject.h>`.
typedef struct MR_DistanceMeasurementObject MR_DistanceMeasurementObject; // Defined in `#include <MRCMesh/MRDistanceMeasurementObject.h>`.
typedef struct MR_FeatureObject MR_FeatureObject; // Defined in `#include <MRCMesh/MRFeatureObject.h>`.
typedef struct MR_LineObject MR_LineObject; // Defined in `#include <MRCMesh/MRLineObject.h>`.
typedef struct MR_MeasurementObject MR_MeasurementObject; // Defined in `#include <MRCMesh/MRMeasurementObject.h>`.
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
typedef struct MR_SceneRootObject MR_SceneRootObject; // Defined in `#include <MRCMesh/MRSceneRoot.h>`.
typedef struct MR_SphereObject MR_SphereObject; // Defined in `#include <MRCMesh/MRSphereObject.h>`.
typedef struct MR_ViewportMask MR_ViewportMask; // Defined in `#include <MRCMesh/MRViewportId.h>`.
typedef struct MR_ViewportProperty_MR_AffineXf3f MR_ViewportProperty_MR_AffineXf3f; // Defined in `#include <MRCMesh/MRViewportProperty.h>`.
typedef struct MR_VisualObject MR_VisualObject; // Defined in `#include <MRCMesh/MRVisualObject.h>`.
typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_shared_ptr_const_MR_Object MR_std_shared_ptr_const_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_const_MR_Object.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_unordered_set_std_string MR_std_unordered_set_std_string; // Defined in `#include <MRCMisc/std_unordered_set_std_string.h>`.
typedef struct MR_std_vector_std_shared_ptr_MR_Object MR_std_vector_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_vector_std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_vector_std_shared_ptr_const_MR_Object MR_std_vector_std_shared_ptr_const_MR_Object; // Defined in `#include <MRCMisc/std_vector_std_shared_ptr_const_MR_Object.h>`.
typedef struct MR_std_vector_std_string MR_std_vector_std_string; // Defined in `#include <MRCMisc/std_vector_std_string.h>`.


/// the main purpose of this class is to avoid copy and move constructor and assignment operator
/// implementation in Object class, which has too many fields for that;
/// since every object stores a pointer on its parent,
/// copying of this object does not copy the children and moving is taken with care
/// Generated from class `MR::ObjectChildrenHolder`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::Object`
///   Indirect: (non-virtual)
///     `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`
///     `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`
///     `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`
///     `MR::AngleMeasurementObject`
///     `MR::CircleObject`
///     `MR::ConeObject`
///     `MR::CylinderObject`
///     `MR::DistanceMeasurementObject`
///     `MR::FeatureObject`
///     `MR::LineObject`
///     `MR::MeasurementObject`
///     `MR::ObjectDistanceMap`
///     `MR::ObjectGcode`
///     `MR::ObjectLabel`
///     `MR::ObjectLines`
///     `MR::ObjectLinesHolder`
///     `MR::ObjectMesh`
///     `MR::ObjectMeshHolder`
///     `MR::ObjectPoints`
///     `MR::ObjectPointsHolder`
///     `MR::ObjectVoxels`
///     `MR::PlaneObject`
///     `MR::PointObject`
///     `MR::RadiusMeasurementObject`
///     `MR::SceneRootObject`
///     `MR::SphereObject`
///     `MR::VisualObject`
typedef struct MR_ObjectChildrenHolder MR_ObjectChildrenHolder;

/// named object in the data model
/// Generated from class `MR::Object`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::ObjectChildrenHolder`
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::SceneRootObject`
///     `MR::VisualObject`
///   Indirect: (non-virtual)
///     `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`
///     `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`
///     `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`
///     `MR::AngleMeasurementObject`
///     `MR::CircleObject`
///     `MR::ConeObject`
///     `MR::CylinderObject`
///     `MR::DistanceMeasurementObject`
///     `MR::FeatureObject`
///     `MR::LineObject`
///     `MR::MeasurementObject`
///     `MR::ObjectDistanceMap`
///     `MR::ObjectGcode`
///     `MR::ObjectLabel`
///     `MR::ObjectLines`
///     `MR::ObjectLinesHolder`
///     `MR::ObjectMesh`
///     `MR::ObjectMeshHolder`
///     `MR::ObjectPoints`
///     `MR::ObjectPointsHolder`
///     `MR::ObjectVoxels`
///     `MR::PlaneObject`
///     `MR::PointObject`
///     `MR::RadiusMeasurementObject`
///     `MR::SphereObject`
typedef struct MR_Object MR_Object;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectChildrenHolder_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectChildrenHolder *MR_ObjectChildrenHolder_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ObjectChildrenHolder_DestroyArray()`.
/// Use `MR_ObjectChildrenHolder_OffsetMutablePtr()` and `MR_ObjectChildrenHolder_OffsetPtr()` to access the array elements.
MRC_API MR_ObjectChildrenHolder *MR_ObjectChildrenHolder_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ObjectChildrenHolder *MR_ObjectChildrenHolder_OffsetPtr(const MR_ObjectChildrenHolder *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ObjectChildrenHolder *MR_ObjectChildrenHolder_OffsetMutablePtr(MR_ObjectChildrenHolder *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *MR_ObjectChildrenHolder_StaticDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *MR_ObjectChildrenHolder_StaticDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_ObjectChildrenHolder_StaticDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::AngleMeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_AngleMeasurementObject *MR_ObjectChildrenHolder_StaticDowncastTo_MR_AngleMeasurementObject(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::AngleMeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_AngleMeasurementObject *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_AngleMeasurementObject(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::CircleObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_CircleObject *MR_ObjectChildrenHolder_StaticDowncastTo_MR_CircleObject(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::CircleObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_CircleObject *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_CircleObject(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::ConeObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ConeObject *MR_ObjectChildrenHolder_StaticDowncastTo_MR_ConeObject(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::ConeObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ConeObject *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_ConeObject(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::CylinderObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_CylinderObject *MR_ObjectChildrenHolder_StaticDowncastTo_MR_CylinderObject(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::CylinderObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_CylinderObject *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_CylinderObject(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::DistanceMeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_DistanceMeasurementObject *MR_ObjectChildrenHolder_StaticDowncastTo_MR_DistanceMeasurementObject(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::DistanceMeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_DistanceMeasurementObject *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_DistanceMeasurementObject(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::FeatureObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_FeatureObject *MR_ObjectChildrenHolder_StaticDowncastTo_MR_FeatureObject(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::FeatureObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_FeatureObject *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_FeatureObject(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::LineObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_LineObject *MR_ObjectChildrenHolder_StaticDowncastTo_MR_LineObject(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::LineObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_LineObject *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_LineObject(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::MeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_MeasurementObject *MR_ObjectChildrenHolder_StaticDowncastTo_MR_MeasurementObject(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::MeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_MeasurementObject *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_MeasurementObject(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::Object`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_ObjectChildrenHolder_StaticDowncastTo_MR_Object(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::Object`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_Object *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_Object(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::ObjectDistanceMap`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectDistanceMap *MR_ObjectChildrenHolder_StaticDowncastTo_MR_ObjectDistanceMap(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::ObjectDistanceMap`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectDistanceMap *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_ObjectDistanceMap(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::ObjectGcode`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectGcode *MR_ObjectChildrenHolder_StaticDowncastTo_MR_ObjectGcode(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::ObjectGcode`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectGcode *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_ObjectGcode(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::ObjectLabel`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectLabel *MR_ObjectChildrenHolder_StaticDowncastTo_MR_ObjectLabel(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::ObjectLabel`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectLabel *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_ObjectLabel(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::ObjectLines`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectLines *MR_ObjectChildrenHolder_StaticDowncastTo_MR_ObjectLines(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::ObjectLines`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectLines *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_ObjectLines(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::ObjectLinesHolder`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectLinesHolder *MR_ObjectChildrenHolder_StaticDowncastTo_MR_ObjectLinesHolder(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::ObjectLinesHolder`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectLinesHolder *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_ObjectLinesHolder(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::ObjectMesh`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectMesh *MR_ObjectChildrenHolder_StaticDowncastTo_MR_ObjectMesh(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::ObjectMesh`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectMesh *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_ObjectMesh(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::ObjectMeshHolder`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectMeshHolder *MR_ObjectChildrenHolder_StaticDowncastTo_MR_ObjectMeshHolder(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::ObjectMeshHolder`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectMeshHolder *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_ObjectMeshHolder(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::ObjectPoints`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectPoints *MR_ObjectChildrenHolder_StaticDowncastTo_MR_ObjectPoints(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::ObjectPoints`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectPoints *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_ObjectPoints(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::ObjectPointsHolder`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectPointsHolder *MR_ObjectChildrenHolder_StaticDowncastTo_MR_ObjectPointsHolder(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::ObjectPointsHolder`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectPointsHolder *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_ObjectPointsHolder(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::ObjectVoxels`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectVoxels *MR_ObjectChildrenHolder_StaticDowncastTo_MR_ObjectVoxels(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::ObjectVoxels`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectVoxels *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_ObjectVoxels(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::PlaneObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_PlaneObject *MR_ObjectChildrenHolder_StaticDowncastTo_MR_PlaneObject(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::PlaneObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_PlaneObject *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_PlaneObject(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::PointObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_PointObject *MR_ObjectChildrenHolder_StaticDowncastTo_MR_PointObject(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::PointObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_PointObject *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_PointObject(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::RadiusMeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_RadiusMeasurementObject *MR_ObjectChildrenHolder_StaticDowncastTo_MR_RadiusMeasurementObject(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::RadiusMeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_RadiusMeasurementObject *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_RadiusMeasurementObject(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::SceneRootObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_SceneRootObject *MR_ObjectChildrenHolder_StaticDowncastTo_MR_SceneRootObject(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::SceneRootObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_SceneRootObject *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_SceneRootObject(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::SphereObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_SphereObject *MR_ObjectChildrenHolder_StaticDowncastTo_MR_SphereObject(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::SphereObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_SphereObject *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_SphereObject(MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::VisualObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_ObjectChildrenHolder_StaticDowncastTo_MR_VisualObject(const MR_ObjectChildrenHolder *object);

/// Downcasts an instance of `MR::ObjectChildrenHolder` to a derived class `MR::VisualObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_VisualObject *MR_ObjectChildrenHolder_MutableStaticDowncastTo_MR_VisualObject(MR_ObjectChildrenHolder *object);

/// Generated from a constructor of class `MR::ObjectChildrenHolder`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectChildrenHolder_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectChildrenHolder *MR_ObjectChildrenHolder_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ObjectChildrenHolder *_other);

/// Destroys a heap-allocated instance of `MR_ObjectChildrenHolder`. Does nothing if the pointer is null.
MRC_API void MR_ObjectChildrenHolder_Destroy(const MR_ObjectChildrenHolder *_this);

/// Destroys a heap-allocated array of `MR_ObjectChildrenHolder`. Does nothing if the pointer is null.
MRC_API void MR_ObjectChildrenHolder_DestroyArray(const MR_ObjectChildrenHolder *_this);

/// Generated from a method of class `MR::ObjectChildrenHolder` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectChildrenHolder *MR_ObjectChildrenHolder_AssignFromAnother(MR_ObjectChildrenHolder *_this, MR_PassBy _other_pass_by, MR_ObjectChildrenHolder *_other);

// returns this Object as shared_ptr
// finds it among its parent's recognized children
/// Generated from a method of class `MR::ObjectChildrenHolder` named `getSharedPtr`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_ObjectChildrenHolder_getSharedPtr(const MR_ObjectChildrenHolder *_this);

/// returns the amount of memory this object occupies on heap,
/// including the memory of all recognized children
/// Generated from a method of class `MR::ObjectChildrenHolder` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ObjectChildrenHolder_heapBytes(const MR_ObjectChildrenHolder *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_Object *MR_Object_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Object_DestroyArray()`.
/// Use `MR_Object_OffsetMutablePtr()` and `MR_Object_OffsetPtr()` to access the array elements.
MRC_API MR_Object *MR_Object_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Object *MR_Object_OffsetPtr(const MR_Object *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Object *MR_Object_OffsetMutablePtr(MR_Object *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::Object` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_Object_UpcastTo_MR_ObjectChildrenHolder(const MR_Object *object);

/// Upcasts an instance of `MR::Object` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_Object_MutableUpcastTo_MR_ObjectChildrenHolder(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *MR_Object_StaticDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *MR_Object_MutableStaticDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *MR_Object_DynamicDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *MR_Object_MutableDynamicDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *MR_Object_DynamicDowncastToOrFail_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *MR_Object_MutableDynamicDowncastToOrFail_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *MR_Object_StaticDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *MR_Object_MutableStaticDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *MR_Object_DynamicDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *MR_Object_MutableDynamicDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *MR_Object_DynamicDowncastToOrFail_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *MR_Object_MutableDynamicDowncastToOrFail_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_Object_StaticDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_Object_MutableStaticDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_Object_DynamicDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_Object_MutableDynamicDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_Object_DynamicDowncastToOrFail_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_Object_MutableDynamicDowncastToOrFail_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::AngleMeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_AngleMeasurementObject *MR_Object_StaticDowncastTo_MR_AngleMeasurementObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::AngleMeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_AngleMeasurementObject *MR_Object_MutableStaticDowncastTo_MR_AngleMeasurementObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::AngleMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_AngleMeasurementObject *MR_Object_DynamicDowncastTo_MR_AngleMeasurementObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::AngleMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_AngleMeasurementObject *MR_Object_MutableDynamicDowncastTo_MR_AngleMeasurementObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::AngleMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AngleMeasurementObject *MR_Object_DynamicDowncastToOrFail_MR_AngleMeasurementObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::AngleMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AngleMeasurementObject *MR_Object_MutableDynamicDowncastToOrFail_MR_AngleMeasurementObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::CircleObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_CircleObject *MR_Object_StaticDowncastTo_MR_CircleObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::CircleObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_CircleObject *MR_Object_MutableStaticDowncastTo_MR_CircleObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::CircleObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_CircleObject *MR_Object_DynamicDowncastTo_MR_CircleObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::CircleObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_CircleObject *MR_Object_MutableDynamicDowncastTo_MR_CircleObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::CircleObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_CircleObject *MR_Object_DynamicDowncastToOrFail_MR_CircleObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::CircleObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_CircleObject *MR_Object_MutableDynamicDowncastToOrFail_MR_CircleObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ConeObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ConeObject *MR_Object_StaticDowncastTo_MR_ConeObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ConeObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ConeObject *MR_Object_MutableStaticDowncastTo_MR_ConeObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ConeObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ConeObject *MR_Object_DynamicDowncastTo_MR_ConeObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ConeObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ConeObject *MR_Object_MutableDynamicDowncastTo_MR_ConeObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ConeObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ConeObject *MR_Object_DynamicDowncastToOrFail_MR_ConeObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ConeObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ConeObject *MR_Object_MutableDynamicDowncastToOrFail_MR_ConeObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::CylinderObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_CylinderObject *MR_Object_StaticDowncastTo_MR_CylinderObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::CylinderObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_CylinderObject *MR_Object_MutableStaticDowncastTo_MR_CylinderObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::CylinderObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_CylinderObject *MR_Object_DynamicDowncastTo_MR_CylinderObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::CylinderObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_CylinderObject *MR_Object_MutableDynamicDowncastTo_MR_CylinderObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::CylinderObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_CylinderObject *MR_Object_DynamicDowncastToOrFail_MR_CylinderObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::CylinderObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_CylinderObject *MR_Object_MutableDynamicDowncastToOrFail_MR_CylinderObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::DistanceMeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_DistanceMeasurementObject *MR_Object_StaticDowncastTo_MR_DistanceMeasurementObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::DistanceMeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_DistanceMeasurementObject *MR_Object_MutableStaticDowncastTo_MR_DistanceMeasurementObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::DistanceMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_DistanceMeasurementObject *MR_Object_DynamicDowncastTo_MR_DistanceMeasurementObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::DistanceMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_DistanceMeasurementObject *MR_Object_MutableDynamicDowncastTo_MR_DistanceMeasurementObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::DistanceMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_DistanceMeasurementObject *MR_Object_DynamicDowncastToOrFail_MR_DistanceMeasurementObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::DistanceMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DistanceMeasurementObject *MR_Object_MutableDynamicDowncastToOrFail_MR_DistanceMeasurementObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::FeatureObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_FeatureObject *MR_Object_StaticDowncastTo_MR_FeatureObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::FeatureObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_FeatureObject *MR_Object_MutableStaticDowncastTo_MR_FeatureObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::FeatureObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_FeatureObject *MR_Object_DynamicDowncastTo_MR_FeatureObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::FeatureObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_FeatureObject *MR_Object_MutableDynamicDowncastTo_MR_FeatureObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::FeatureObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FeatureObject *MR_Object_DynamicDowncastToOrFail_MR_FeatureObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::FeatureObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FeatureObject *MR_Object_MutableDynamicDowncastToOrFail_MR_FeatureObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::LineObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_LineObject *MR_Object_StaticDowncastTo_MR_LineObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::LineObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_LineObject *MR_Object_MutableStaticDowncastTo_MR_LineObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::LineObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_LineObject *MR_Object_DynamicDowncastTo_MR_LineObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::LineObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_LineObject *MR_Object_MutableDynamicDowncastTo_MR_LineObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::LineObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_LineObject *MR_Object_DynamicDowncastToOrFail_MR_LineObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::LineObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_LineObject *MR_Object_MutableDynamicDowncastToOrFail_MR_LineObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::MeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_MeasurementObject *MR_Object_StaticDowncastTo_MR_MeasurementObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::MeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_MeasurementObject *MR_Object_MutableStaticDowncastTo_MR_MeasurementObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::MeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_MeasurementObject *MR_Object_DynamicDowncastTo_MR_MeasurementObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::MeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_MeasurementObject *MR_Object_MutableDynamicDowncastTo_MR_MeasurementObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::MeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeasurementObject *MR_Object_DynamicDowncastToOrFail_MR_MeasurementObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::MeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeasurementObject *MR_Object_MutableDynamicDowncastToOrFail_MR_MeasurementObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectDistanceMap`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectDistanceMap *MR_Object_StaticDowncastTo_MR_ObjectDistanceMap(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectDistanceMap`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectDistanceMap *MR_Object_MutableStaticDowncastTo_MR_ObjectDistanceMap(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectDistanceMap`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectDistanceMap *MR_Object_DynamicDowncastTo_MR_ObjectDistanceMap(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectDistanceMap`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectDistanceMap *MR_Object_MutableDynamicDowncastTo_MR_ObjectDistanceMap(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectDistanceMap`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectDistanceMap *MR_Object_DynamicDowncastToOrFail_MR_ObjectDistanceMap(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectDistanceMap`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectDistanceMap *MR_Object_MutableDynamicDowncastToOrFail_MR_ObjectDistanceMap(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectGcode`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectGcode *MR_Object_StaticDowncastTo_MR_ObjectGcode(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectGcode`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectGcode *MR_Object_MutableStaticDowncastTo_MR_ObjectGcode(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectGcode`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectGcode *MR_Object_DynamicDowncastTo_MR_ObjectGcode(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectGcode`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectGcode *MR_Object_MutableDynamicDowncastTo_MR_ObjectGcode(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectGcode`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectGcode *MR_Object_DynamicDowncastToOrFail_MR_ObjectGcode(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectGcode`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectGcode *MR_Object_MutableDynamicDowncastToOrFail_MR_ObjectGcode(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectLabel`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectLabel *MR_Object_StaticDowncastTo_MR_ObjectLabel(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectLabel`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectLabel *MR_Object_MutableStaticDowncastTo_MR_ObjectLabel(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectLabel`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectLabel *MR_Object_DynamicDowncastTo_MR_ObjectLabel(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectLabel`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectLabel *MR_Object_MutableDynamicDowncastTo_MR_ObjectLabel(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectLabel`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectLabel *MR_Object_DynamicDowncastToOrFail_MR_ObjectLabel(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectLabel`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectLabel *MR_Object_MutableDynamicDowncastToOrFail_MR_ObjectLabel(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectLines`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectLines *MR_Object_StaticDowncastTo_MR_ObjectLines(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectLines`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectLines *MR_Object_MutableStaticDowncastTo_MR_ObjectLines(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectLines`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectLines *MR_Object_DynamicDowncastTo_MR_ObjectLines(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectLines`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectLines *MR_Object_MutableDynamicDowncastTo_MR_ObjectLines(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectLines`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectLines *MR_Object_DynamicDowncastToOrFail_MR_ObjectLines(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectLines`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectLines *MR_Object_MutableDynamicDowncastToOrFail_MR_ObjectLines(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectLinesHolder`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectLinesHolder *MR_Object_StaticDowncastTo_MR_ObjectLinesHolder(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectLinesHolder`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectLinesHolder *MR_Object_MutableStaticDowncastTo_MR_ObjectLinesHolder(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectLinesHolder`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectLinesHolder *MR_Object_DynamicDowncastTo_MR_ObjectLinesHolder(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectLinesHolder`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectLinesHolder *MR_Object_MutableDynamicDowncastTo_MR_ObjectLinesHolder(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectLinesHolder`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectLinesHolder *MR_Object_DynamicDowncastToOrFail_MR_ObjectLinesHolder(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectLinesHolder`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectLinesHolder *MR_Object_MutableDynamicDowncastToOrFail_MR_ObjectLinesHolder(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectMesh`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectMesh *MR_Object_StaticDowncastTo_MR_ObjectMesh(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectMesh`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectMesh *MR_Object_MutableStaticDowncastTo_MR_ObjectMesh(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectMesh`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectMesh *MR_Object_DynamicDowncastTo_MR_ObjectMesh(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectMesh`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectMesh *MR_Object_MutableDynamicDowncastTo_MR_ObjectMesh(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectMesh`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectMesh *MR_Object_DynamicDowncastToOrFail_MR_ObjectMesh(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectMesh`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectMesh *MR_Object_MutableDynamicDowncastToOrFail_MR_ObjectMesh(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectMeshHolder`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectMeshHolder *MR_Object_StaticDowncastTo_MR_ObjectMeshHolder(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectMeshHolder`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectMeshHolder *MR_Object_MutableStaticDowncastTo_MR_ObjectMeshHolder(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectMeshHolder`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectMeshHolder *MR_Object_DynamicDowncastTo_MR_ObjectMeshHolder(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectMeshHolder`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectMeshHolder *MR_Object_MutableDynamicDowncastTo_MR_ObjectMeshHolder(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectMeshHolder`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectMeshHolder *MR_Object_DynamicDowncastToOrFail_MR_ObjectMeshHolder(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectMeshHolder`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectMeshHolder *MR_Object_MutableDynamicDowncastToOrFail_MR_ObjectMeshHolder(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectPoints`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectPoints *MR_Object_StaticDowncastTo_MR_ObjectPoints(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectPoints`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectPoints *MR_Object_MutableStaticDowncastTo_MR_ObjectPoints(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectPoints`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectPoints *MR_Object_DynamicDowncastTo_MR_ObjectPoints(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectPoints`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectPoints *MR_Object_MutableDynamicDowncastTo_MR_ObjectPoints(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectPoints`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectPoints *MR_Object_DynamicDowncastToOrFail_MR_ObjectPoints(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectPoints`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectPoints *MR_Object_MutableDynamicDowncastToOrFail_MR_ObjectPoints(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectPointsHolder`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectPointsHolder *MR_Object_StaticDowncastTo_MR_ObjectPointsHolder(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectPointsHolder`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectPointsHolder *MR_Object_MutableStaticDowncastTo_MR_ObjectPointsHolder(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectPointsHolder`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectPointsHolder *MR_Object_DynamicDowncastTo_MR_ObjectPointsHolder(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectPointsHolder`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectPointsHolder *MR_Object_MutableDynamicDowncastTo_MR_ObjectPointsHolder(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectPointsHolder`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectPointsHolder *MR_Object_DynamicDowncastToOrFail_MR_ObjectPointsHolder(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectPointsHolder`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectPointsHolder *MR_Object_MutableDynamicDowncastToOrFail_MR_ObjectPointsHolder(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectVoxels`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectVoxels *MR_Object_StaticDowncastTo_MR_ObjectVoxels(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectVoxels`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectVoxels *MR_Object_MutableStaticDowncastTo_MR_ObjectVoxels(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectVoxels`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectVoxels *MR_Object_DynamicDowncastTo_MR_ObjectVoxels(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectVoxels`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectVoxels *MR_Object_MutableDynamicDowncastTo_MR_ObjectVoxels(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectVoxels`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectVoxels *MR_Object_DynamicDowncastToOrFail_MR_ObjectVoxels(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::ObjectVoxels`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectVoxels *MR_Object_MutableDynamicDowncastToOrFail_MR_ObjectVoxels(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::PlaneObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_PlaneObject *MR_Object_StaticDowncastTo_MR_PlaneObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::PlaneObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_PlaneObject *MR_Object_MutableStaticDowncastTo_MR_PlaneObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::PlaneObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_PlaneObject *MR_Object_DynamicDowncastTo_MR_PlaneObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::PlaneObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_PlaneObject *MR_Object_MutableDynamicDowncastTo_MR_PlaneObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::PlaneObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PlaneObject *MR_Object_DynamicDowncastToOrFail_MR_PlaneObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::PlaneObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PlaneObject *MR_Object_MutableDynamicDowncastToOrFail_MR_PlaneObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::PointObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_PointObject *MR_Object_StaticDowncastTo_MR_PointObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::PointObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_PointObject *MR_Object_MutableStaticDowncastTo_MR_PointObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::PointObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_PointObject *MR_Object_DynamicDowncastTo_MR_PointObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::PointObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_PointObject *MR_Object_MutableDynamicDowncastTo_MR_PointObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::PointObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PointObject *MR_Object_DynamicDowncastToOrFail_MR_PointObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::PointObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointObject *MR_Object_MutableDynamicDowncastToOrFail_MR_PointObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::RadiusMeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_RadiusMeasurementObject *MR_Object_StaticDowncastTo_MR_RadiusMeasurementObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::RadiusMeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_RadiusMeasurementObject *MR_Object_MutableStaticDowncastTo_MR_RadiusMeasurementObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::RadiusMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_RadiusMeasurementObject *MR_Object_DynamicDowncastTo_MR_RadiusMeasurementObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::RadiusMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_RadiusMeasurementObject *MR_Object_MutableDynamicDowncastTo_MR_RadiusMeasurementObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::RadiusMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_RadiusMeasurementObject *MR_Object_DynamicDowncastToOrFail_MR_RadiusMeasurementObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::RadiusMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RadiusMeasurementObject *MR_Object_MutableDynamicDowncastToOrFail_MR_RadiusMeasurementObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::SceneRootObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_SceneRootObject *MR_Object_StaticDowncastTo_MR_SceneRootObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::SceneRootObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_SceneRootObject *MR_Object_MutableStaticDowncastTo_MR_SceneRootObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::SceneRootObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_SceneRootObject *MR_Object_DynamicDowncastTo_MR_SceneRootObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::SceneRootObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_SceneRootObject *MR_Object_MutableDynamicDowncastTo_MR_SceneRootObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::SceneRootObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_SceneRootObject *MR_Object_DynamicDowncastToOrFail_MR_SceneRootObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::SceneRootObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SceneRootObject *MR_Object_MutableDynamicDowncastToOrFail_MR_SceneRootObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::SphereObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_SphereObject *MR_Object_StaticDowncastTo_MR_SphereObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::SphereObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_SphereObject *MR_Object_MutableStaticDowncastTo_MR_SphereObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::SphereObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_SphereObject *MR_Object_DynamicDowncastTo_MR_SphereObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::SphereObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_SphereObject *MR_Object_MutableDynamicDowncastTo_MR_SphereObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::SphereObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_SphereObject *MR_Object_DynamicDowncastToOrFail_MR_SphereObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::SphereObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SphereObject *MR_Object_MutableDynamicDowncastToOrFail_MR_SphereObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::VisualObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_Object_StaticDowncastTo_MR_VisualObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::VisualObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_VisualObject *MR_Object_MutableStaticDowncastTo_MR_VisualObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::VisualObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_Object_DynamicDowncastTo_MR_VisualObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::VisualObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_VisualObject *MR_Object_MutableDynamicDowncastTo_MR_VisualObject(MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::VisualObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VisualObject *MR_Object_DynamicDowncastToOrFail_MR_VisualObject(const MR_Object *object);

/// Downcasts an instance of `MR::Object` to a derived class `MR::VisualObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VisualObject *MR_Object_MutableDynamicDowncastToOrFail_MR_VisualObject(MR_Object *object);

/// Generated from a constructor of class `MR::Object`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_Object *MR_Object_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Object *_other);

/// Destroys a heap-allocated instance of `MR_Object`. Does nothing if the pointer is null.
MRC_API void MR_Object_Destroy(const MR_Object *_this);

/// Destroys a heap-allocated array of `MR_Object`. Does nothing if the pointer is null.
MRC_API void MR_Object_DestroyArray(const MR_Object *_this);

/// Generated from a method of class `MR::Object` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Object *MR_Object_AssignFromAnother(MR_Object *_this, MR_PassBy _other_pass_by, MR_Object *_other);

// return name of subtype for serialization purposes
/// Generated from a method of class `MR::Object` named `TypeName`.
MRC_API const char *MR_Object_TypeName(void);

/// Generated from a method of class `MR::Object` named `typeName`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_Object_typeName(const MR_Object *_this);

/// Generated from a method of class `MR::Object` named `asType<MR::VisualObject>`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VisualObject *MR_Object_asType(MR_Object *_this);

/// Generated from a method of class `MR::Object` named `asType<MR::VisualObject>`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_VisualObject *MR_Object_asType_const(const MR_Object *_this);

/// Generated from a method of class `MR::Object` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_Object_name(const MR_Object *_this);

/// Generated from a method of class `MR::Object` named `setName`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
MRC_API void MR_Object_setName(MR_Object *_this, const char *name, const char *name_end);

/// finds a direct child by name
/// Generated from a method of class `MR::Object` named `find`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_const_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_const_MR_Object *MR_Object_find_const(const MR_Object *_this, const char *name, const char *name_end);

/// Generated from a method of class `MR::Object` named `find`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_Object_find(MR_Object *_this, const char *name, const char *name_end);

/// this space to parent space transformation (to world space if no parent) for default or given viewport
/// \param isDef receives true if the object has default transformation in this viewport (same as xf() returns)
/// Generated from a method of class `MR::Object` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `isDef` defaults to a null pointer in C++.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *MR_Object_xf(const MR_Object *_this, const MR_ViewportId *id, bool *isDef);

/// Generated from a method of class `MR::Object` named `setXf`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `xf` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_Object_setXf(MR_Object *_this, const MR_AffineXf3f *xf, const MR_ViewportId *id);

/// forgets specific transform in given viewport (or forgets all specific transforms for {} input)
/// Generated from a method of class `MR::Object` named `resetXf`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_Object_resetXf(MR_Object *_this, const MR_ViewportId *id);

/// returns xfs for all viewports, combined into a single object
/// Generated from a method of class `MR::Object` named `xfsForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ViewportProperty_MR_AffineXf3f *MR_Object_xfsForAllViewports(const MR_Object *_this);

/// modifies xfs for all viewports at once
/// Generated from a method of class `MR::Object` named `setXfsForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Object_setXfsForAllViewports(MR_Object *_this, MR_PassBy xf_pass_by, MR_ViewportProperty_MR_AffineXf3f *xf);

/// this space to world space transformation for default or specific viewport
/// \param isDef receives true if the object has default transformation in this viewport (same as worldXf() returns)
/// Generated from a method of class `MR::Object` named `worldXf`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `isDef` defaults to a null pointer in C++.
MRC_API MR_AffineXf3f MR_Object_worldXf(const MR_Object *_this, const MR_ViewportId *id, bool *isDef);

/// Generated from a method of class `MR::Object` named `setWorldXf`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `xf` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_Object_setWorldXf(MR_Object *_this, const MR_AffineXf3f *xf, const MR_ViewportId *id);

/// scale object size (all point positions)
/// Generated from a method of class `MR::Object` named `applyScale`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Object_applyScale(MR_Object *_this, float scaleFactor);

/// returns all viewports where this object is visible together with all its parents
/// Generated from a method of class `MR::Object` named `globalVisibilityMask`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportMask_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportMask *MR_Object_globalVisibilityMask(const MR_Object *_this);

/// returns true if this object is visible together with all its parents in any of given viewports
/// Generated from a method of class `MR::Object` named `globalVisibility`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `viewportMask` is a single object.
/// Parameter `viewportMask` has a default argument: `ViewportMask::any()`, pass a null pointer to use it.
MRC_API bool MR_Object_globalVisibility(const MR_Object *_this, const MR_ViewportMask *viewportMask);

/// if true sets all predecessors visible, otherwise sets this object invisible
/// Generated from a method of class `MR::Object` named `setGlobalVisibility`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `viewportMask` is a single object.
/// Parameter `viewportMask` has a default argument: `ViewportMask::any()`, pass a null pointer to use it.
MRC_API void MR_Object_setGlobalVisibility(MR_Object *_this, bool on, const MR_ViewportMask *viewportMask);

/// object properties lock for UI
/// Generated from a method of class `MR::Object` named `isLocked`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Object_isLocked(const MR_Object *_this);

/// Generated from a method of class `MR::Object` named `setLocked`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Object_setLocked(MR_Object *_this, bool on);

/// If true, the scene tree GUI doesn't allow you to drag'n'drop this object into a different parent.
/// Defaults to false.
/// Generated from a method of class `MR::Object` named `isParentLocked`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Object_isParentLocked(const MR_Object *_this);

/// Generated from a method of class `MR::Object` named `setParentLocked`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Object_setParentLocked(MR_Object *_this, bool lock);

/// returns parent object in the tree
/// Generated from a method of class `MR::Object` named `parent`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_Object *MR_Object_parent_const(const MR_Object *_this);

/// Generated from a method of class `MR::Object` named `parent`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Object *MR_Object_parent(MR_Object *_this);

/// return true if given object is ancestor of this one, false otherwise
/// Generated from a method of class `MR::Object` named `isAncestor`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Object_isAncestor(const MR_Object *_this, const MR_Object *ancestor);

/// Find a common ancestor between this object and the other one.
/// Returns null on failure (which is impossible if both are children of the scene root).
/// Will return `this` if `other` matches `this`.
/// Generated from a method of class `MR::Object` named `findCommonAncestor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API MR_Object *MR_Object_findCommonAncestor(MR_Object *_this, MR_Object *other);

/// Generated from a method of class `MR::Object` named `findCommonAncestor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API const MR_Object *MR_Object_findCommonAncestor_const(const MR_Object *_this, const MR_Object *other);

/// removes this from its parent children list
/// returns false if it was already orphan
/// Generated from a method of class `MR::Object` named `detachFromParent`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Object_detachFromParent(MR_Object *_this);

/// an object can hold other sub-objects
/// Generated from a method of class `MR::Object` named `children`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_std_shared_ptr_MR_Object *MR_Object_children(MR_Object *_this);

/// Generated from a method of class `MR::Object` named `children`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_std_shared_ptr_const_MR_Object *MR_Object_children_const(const MR_Object *_this);

/// adds given object at the end of children (recognized or not);
/// returns false if it was already child of this, of if given pointer is empty;
/// child object will always report this as parent after the call;
/// \param recognizedChild if set to false then child object will be excluded from children() and it will be stored by weak_ptr
/// Generated from a method of class `MR::Object` named `addChild`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `recognizedChild` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_Object_addChild(MR_Object *_this, MR_PassBy child_pass_by, MR_std_shared_ptr_MR_Object *child, const bool *recognizedChild);

/// adds given object in the recognized children before existingChild;
/// if newChild was already among this children then moves it just before existingChild keeping the order of other children intact;
/// returns false if newChild is nullptr, or existingChild is not a child of this
/// Generated from a method of class `MR::Object` named `addChildBefore`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `existingChild` can not be null. It is a single object.
MRC_API bool MR_Object_addChildBefore(MR_Object *_this, MR_PassBy newChild_pass_by, MR_std_shared_ptr_MR_Object *newChild, const MR_std_shared_ptr_MR_Object *existingChild);

/// returns false if it was not child of this
/// Generated from a method of class `MR::Object` named `removeChild`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `child` can not be null. It is a single object.
MRC_API bool MR_Object_removeChild_std_shared_ptr_MR_Object(MR_Object *_this, const MR_std_shared_ptr_MR_Object *child);

/// Generated from a method of class `MR::Object` named `removeChild`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Object_removeChild_MR_Object_ptr(MR_Object *_this, MR_Object *child);

/// detaches all recognized children from this, keeping all unrecognized ones
/// Generated from a method of class `MR::Object` named `removeAllChildren`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Object_removeAllChildren(MR_Object *_this);

/// sort recognized children by name
/// Generated from a method of class `MR::Object` named `sortChildren`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Object_sortChildren(MR_Object *_this);

/// selects the object, returns true if value changed, otherwise returns false
/// Generated from a method of class `MR::Object` named `select`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Object_select(MR_Object *_this, bool on);

/// Generated from a method of class `MR::Object` named `isSelected`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Object_isSelected(const MR_Object *_this);

/// ancillary object is an object hidden (in scene menu) from a regular user
/// such objects cannot be selected, and if it has been selected, it is unselected when turn ancillary
/// Generated from a method of class `MR::Object` named `setAncillary`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Object_setAncillary(MR_Object *_this, bool ancillary);

/// Generated from a method of class `MR::Object` named `isAncillary`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Object_isAncillary(const MR_Object *_this);

/// sets the object visible in the viewports specified by the mask (by default in all viewports)
/// Generated from a method of class `MR::Object` named `setVisible`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `viewportMask` is a single object.
/// Parameter `viewportMask` has a default argument: `ViewportMask::all()`, pass a null pointer to use it.
MRC_API void MR_Object_setVisible(MR_Object *_this, bool on, const MR_ViewportMask *viewportMask);

/// checks whether the object is visible in any of the viewports specified by the mask (by default in any viewport)
/// Generated from a method of class `MR::Object` named `isVisible`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `viewportMask` is a single object.
/// Parameter `viewportMask` has a default argument: `ViewportMask::any()`, pass a null pointer to use it.
MRC_API bool MR_Object_isVisible(const MR_Object *_this, const MR_ViewportMask *viewportMask);

/// specifies object visibility as bitmask of viewports
/// Generated from a method of class `MR::Object` named `setVisibilityMask`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `viewportMask` can not be null. It is a single object.
MRC_API void MR_Object_setVisibilityMask(MR_Object *_this, const MR_ViewportMask *viewportMask);

/// gets object visibility as bitmask of viewports
/// Generated from a method of class `MR::Object` named `visibilityMask`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportMask_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportMask *MR_Object_visibilityMask(const MR_Object *_this);

/// this method virtual because others data model types could have dirty flags or something
/// Generated from a method of class `MR::Object` named `getRedrawFlag`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MRC_API bool MR_Object_getRedrawFlag(const MR_Object *_this, const MR_ViewportMask *_1);

/// Generated from a method of class `MR::Object` named `resetRedrawFlag`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Object_resetRedrawFlag(const MR_Object *_this);

/// clones all tree of this object (except ancillary and unrecognized children)
/// Generated from a method of class `MR::Object` named `cloneTree`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_Object_cloneTree(const MR_Object *_this);

/// clones current object only, without parent and/or children
/// Generated from a method of class `MR::Object` named `clone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_Object_clone(const MR_Object *_this);

/// clones all tree of this object (except ancillary and unrecognied children)
/// clones only pointers to mesh, points or voxels
/// Generated from a method of class `MR::Object` named `shallowCloneTree`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_Object_shallowCloneTree(const MR_Object *_this);

/// clones current object only, without parent and/or children
/// clones only pointers to mesh, points or voxels
/// Generated from a method of class `MR::Object` named `shallowClone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_Object_shallowClone(const MR_Object *_this);

/// return several info lines that can better describe object in the UI
/// Generated from a method of class `MR::Object` named `getInfoLines`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_string *MR_Object_getInfoLines(const MR_Object *_this);

/// return human readable name of subclass
/// Generated from a method of class `MR::Object` named `getClassName`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_Object_getClassName(const MR_Object *_this);

/// return human readable name of subclass in plural form
/// Generated from a method of class `MR::Object` named `getClassNameInPlural`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_Object_getClassNameInPlural(const MR_Object *_this);

/// swaps this object with other
/// note: do not swap object signals, so listeners will get notifications from swapped object
/// requires implementation of `swapBase_` and `swapSignals_` (if type has signals)
/// Generated from a method of class `MR::Object` named `swap`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API void MR_Object_swap(MR_Object *_this, MR_Object *other);

/// returns bounding box of this object in world coordinates for default or specific viewport
/// Generated from a method of class `MR::Object` named `getWorldBox`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Box3f MR_Object_getWorldBox(const MR_Object *_this, const MR_ViewportId *_1);

///empty box
/// returns bounding box of this object and all children visible in given (or default) viewport in world coordinates
/// Generated from a method of class `MR::Object` named `getWorldTreeBox`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Box3f MR_Object_getWorldTreeBox(const MR_Object *_this, const MR_ViewportId *_1);

/// does the object have any visual representation (visible points, triangles, edges, etc.), no considering child objects
/// Generated from a method of class `MR::Object` named `hasVisualRepresentation`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Object_hasVisualRepresentation(const MR_Object *_this);

/// does the object have any model available (but possibly empty),
/// e.g. ObjectMesh has valid mesh() or ObjectPoints has valid pointCloud()
/// Generated from a method of class `MR::Object` named `hasModel`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Object_hasModel(const MR_Object *_this);

/// provides read-only access to the tag storage
/// the storage is a set of unique strings
/// Generated from a method of class `MR::Object` named `tags`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_unordered_set_std_string *MR_Object_tags(const MR_Object *_this);

/// adds tag to the object's tag storage
/// additionally calls ObjectTagManager::tagAddedSignal
/// Generated from a method of class `MR::Object` named `addTag`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `tag` can not be null.
/// If `tag_end` is null, then `tag` is assumed to be null-terminated.
MRC_API bool MR_Object_addTag(MR_Object *_this, const char *tag, const char *tag_end);

/// removes tag from the object's tag storage
/// additionally calls ObjectTagManager::tagRemovedSignal
/// Generated from a method of class `MR::Object` named `removeTag`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `tag` can not be null. It is a single object.
MRC_API bool MR_Object_removeTag(MR_Object *_this, const MR_std_string *tag);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::Object` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Object_heapBytes(const MR_Object *_this);

#ifdef __cplusplus
} // extern "C"
#endif
