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

typedef struct MR_ChangVoxelSelectionAction MR_ChangVoxelSelectionAction; // Defined in `#include <MRCVoxels/MRChangeVoxelSelectionAction.h>`.
typedef struct MR_ChangeActiveBoxAction MR_ChangeActiveBoxAction; // Defined in `#include <MRCVoxels/MRChangeVoxelsAction.h>`.
typedef struct MR_ChangeColoringType MR_ChangeColoringType; // Defined in `#include <MRCMesh/MRChangeColoringType.h>`.
typedef struct MR_ChangeDualMarchingCubesAction MR_ChangeDualMarchingCubesAction; // Defined in `#include <MRCVoxels/MRChangeVoxelsAction.h>`.
typedef struct MR_ChangeFacesColorMapAction MR_ChangeFacesColorMapAction; // Defined in `#include <MRCMesh/MRChangeColoringActions.h>`.
typedef struct MR_ChangeGridAction MR_ChangeGridAction; // Defined in `#include <MRCVoxels/MRChangeVoxelsAction.h>`.
typedef struct MR_ChangeIsoAction MR_ChangeIsoAction; // Defined in `#include <MRCVoxels/MRChangeVoxelsAction.h>`.
typedef struct MR_ChangeLabelAction MR_ChangeLabelAction; // Defined in `#include <MRCSymbolMesh/MRChangeLabelAction.h>`.
typedef struct MR_ChangeLinesColorMapAction MR_ChangeLinesColorMapAction; // Defined in `#include <MRCMesh/MRChangeColoringActions.h>`.
typedef struct MR_ChangeMeshAction MR_ChangeMeshAction; // Defined in `#include <MRCMesh/MRChangeMeshAction.h>`.
typedef struct MR_ChangeMeshCreasesAction MR_ChangeMeshCreasesAction; // Defined in `#include <MRCMesh/MRChangeSelectionAction.h>`.
typedef struct MR_ChangeMeshDataAction MR_ChangeMeshDataAction; // Defined in `#include <MRCMesh/MRChangeMeshDataAction.h>`.
typedef struct MR_ChangeMeshEdgeSelectionAction MR_ChangeMeshEdgeSelectionAction; // Defined in `#include <MRCMesh/MRChangeSelectionAction.h>`.
typedef struct MR_ChangeMeshFaceSelectionAction MR_ChangeMeshFaceSelectionAction; // Defined in `#include <MRCMesh/MRChangeSelectionAction.h>`.
typedef struct MR_ChangeMeshPointsAction MR_ChangeMeshPointsAction; // Defined in `#include <MRCMesh/MRChangeMeshAction.h>`.
typedef struct MR_ChangeMeshTexturePerFaceAction MR_ChangeMeshTexturePerFaceAction; // Defined in `#include <MRCMesh/MRChangeMeshAction.h>`.
typedef struct MR_ChangeMeshTopologyAction MR_ChangeMeshTopologyAction; // Defined in `#include <MRCMesh/MRChangeMeshAction.h>`.
typedef struct MR_ChangeMeshUVCoordsAction MR_ChangeMeshUVCoordsAction; // Defined in `#include <MRCMesh/MRChangeMeshAction.h>`.
typedef struct MR_ChangeNameAction MR_ChangeNameAction; // Defined in `#include <MRCMesh/MRChangeNameAction.h>`.
typedef struct MR_ChangeObjectAction MR_ChangeObjectAction; // Defined in `#include <MRCMesh/MRChangeObjectAction.h>`.
typedef struct MR_ChangeObjectColorAction MR_ChangeObjectColorAction; // Defined in `#include <MRCMesh/MRChangeColoringActions.h>`.
typedef struct MR_ChangeObjectSelectedAction MR_ChangeObjectSelectedAction; // Defined in `#include <MRCMesh/MRChangeObjectFields.h>`.
typedef struct MR_ChangeObjectVisibilityAction MR_ChangeObjectVisibilityAction; // Defined in `#include <MRCMesh/MRChangeObjectFields.h>`.
typedef struct MR_ChangeOneNormalInCloudAction MR_ChangeOneNormalInCloudAction; // Defined in `#include <MRCMesh/MRChangePointCloudNormalsAction.h>`.
typedef struct MR_ChangeOnePointInCloudAction MR_ChangeOnePointInCloudAction; // Defined in `#include <MRCMesh/MRChangePointCloudAction.h>`.
typedef struct MR_ChangePointCloudAction MR_ChangePointCloudAction; // Defined in `#include <MRCMesh/MRChangePointCloudAction.h>`.
typedef struct MR_ChangePointCloudNormalsAction MR_ChangePointCloudNormalsAction; // Defined in `#include <MRCMesh/MRChangePointCloudNormalsAction.h>`.
typedef struct MR_ChangePointCloudPointsAction MR_ChangePointCloudPointsAction; // Defined in `#include <MRCMesh/MRChangePointCloudAction.h>`.
typedef struct MR_ChangePointPointSelectionAction MR_ChangePointPointSelectionAction; // Defined in `#include <MRCMesh/MRChangeSelectionAction.h>`.
typedef struct MR_ChangePolylineAction MR_ChangePolylineAction; // Defined in `#include <MRCMesh/MRChangePolylineAction.h>`.
typedef struct MR_ChangePolylinePointsAction MR_ChangePolylinePointsAction; // Defined in `#include <MRCMesh/MRChangePolylineAction.h>`.
typedef struct MR_ChangePolylineTopologyAction MR_ChangePolylineTopologyAction; // Defined in `#include <MRCMesh/MRChangePolylineAction.h>`.
typedef struct MR_ChangeScaleAction MR_ChangeScaleAction; // Defined in `#include <MRCMesh/MRChangeScaleAction.h>`.
typedef struct MR_ChangeSceneAction MR_ChangeSceneAction; // Defined in `#include <MRCMesh/MRChangeSceneAction.h>`.
typedef struct MR_ChangeSceneObjectsOrder MR_ChangeSceneObjectsOrder; // Defined in `#include <MRCMesh/MRChangeSceneObjectsOrder.h>`.
typedef struct MR_ChangeSurfaceAction MR_ChangeSurfaceAction; // Defined in `#include <MRCVoxels/MRChangeVoxelsAction.h>`.
typedef struct MR_ChangeTextureAction MR_ChangeTextureAction; // Defined in `#include <MRCMesh/MRChangeMeshAction.h>`.
typedef struct MR_ChangeVisualizePropertyAction MR_ChangeVisualizePropertyAction; // Defined in `#include <MRCMesh/MRChangeObjectFields.h>`.
typedef struct MR_ChangeXfAction MR_ChangeXfAction; // Defined in `#include <MRCMesh/MRChangeXfAction.h>`.
typedef struct MR_CombinedHistoryAction MR_CombinedHistoryAction; // Defined in `#include <MRCMesh/MRCombinedHistoryAction.h>`.
typedef struct MR_PartialChangeMeshAction MR_PartialChangeMeshAction; // Defined in `#include <MRCMesh/MRPartialChangeMeshAction.h>`.
typedef struct MR_PartialChangeMeshPointsAction MR_PartialChangeMeshPointsAction; // Defined in `#include <MRCMesh/MRPartialChangeMeshAction.h>`.
typedef struct MR_PartialChangeMeshTopologyAction MR_PartialChangeMeshTopologyAction; // Defined in `#include <MRCMesh/MRPartialChangeMeshAction.h>`.
typedef struct MR_std_function_bool_from_const_std_shared_ptr_MR_HistoryAction_ref MR_std_function_bool_from_const_std_shared_ptr_MR_HistoryAction_ref; // Defined in `#include <MRCMisc/std_function_bool_from_const_std_shared_ptr_MR_HistoryAction_ref.h>`.
typedef struct MR_std_pair_bool_int32_t MR_std_pair_bool_int32_t; // Defined in `#include <MRCMisc/std_pair_bool_int32_t.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_std_shared_ptr_MR_HistoryAction MR_std_vector_std_shared_ptr_MR_HistoryAction; // Defined in `#include <MRCMisc/std_vector_std_shared_ptr_MR_HistoryAction.h>`.


/// Abstract class for history actions
/// Generated from class `MR::HistoryAction`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::ChangVoxelSelectionAction`
///     `MR::ChangeActiveBoxAction`
///     `MR::ChangeColoringType`
///     `MR::ChangeDualMarchingCubesAction`
///     `MR::ChangeFacesColorMapAction`
///     `MR::ChangeGridAction`
///     `MR::ChangeIsoAction`
///     `MR::ChangeLabelAction`
///     `MR::ChangeLinesColorMapAction`
///     `MR::ChangeMeshAction`
///     `MR::ChangeMeshCreasesAction`
///     `MR::ChangeMeshDataAction`
///     `MR::ChangeMeshEdgeSelectionAction`
///     `MR::ChangeMeshFaceSelectionAction`
///     `MR::ChangeMeshPointsAction`
///     `MR::ChangeMeshTexturePerFaceAction`
///     `MR::ChangeMeshTopologyAction`
///     `MR::ChangeMeshUVCoordsAction`
///     `MR::ChangeNameAction`
///     `MR::ChangeObjectAction`
///     `MR::ChangeObjectColorAction`
///     `MR::ChangeObjectSelectedAction`
///     `MR::ChangeObjectVisibilityAction`
///     `MR::ChangeOneNormalInCloudAction`
///     `MR::ChangeOnePointInCloudAction`
///     `MR::ChangePointCloudAction`
///     `MR::ChangePointCloudNormalsAction`
///     `MR::ChangePointCloudPointsAction`
///     `MR::ChangePointPointSelectionAction`
///     `MR::ChangePolylineAction`
///     `MR::ChangePolylinePointsAction`
///     `MR::ChangePolylineTopologyAction`
///     `MR::ChangeScaleAction`
///     `MR::ChangeSceneAction`
///     `MR::ChangeSceneObjectsOrder`
///     `MR::ChangeSurfaceAction`
///     `MR::ChangeTextureAction`
///     `MR::ChangeVisualizePropertyAction`
///     `MR::ChangeXfAction`
///     `MR::CombinedHistoryAction`
///     `MR::PartialChangeMeshAction`
///     `MR::PartialChangeMeshPointsAction`
///     `MR::PartialChangeMeshTopologyAction`
typedef struct MR_HistoryAction MR_HistoryAction;

typedef int32_t MR_HistoryAction_Type;
enum // MR_HistoryAction_Type
{
    MR_HistoryAction_Type_Undo = 0,
    MR_HistoryAction_Type_Redo = 1,
};

/// Destroys a heap-allocated instance of `MR_HistoryAction`. Does nothing if the pointer is null.
MRC_API void MR_HistoryAction_Destroy(const MR_HistoryAction *_this);

/// Destroys a heap-allocated array of `MR_HistoryAction`. Does nothing if the pointer is null.
MRC_API void MR_HistoryAction_DestroyArray(const MR_HistoryAction *_this);

/// Generated from a method of class `MR::HistoryAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_HistoryAction_name(const MR_HistoryAction *_this);

/// This function is called on history action (undo, redo, etc.)
/// Generated from a method of class `MR::HistoryAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_HistoryAction_action(MR_HistoryAction *_this, MR_HistoryAction_Type actionType);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::HistoryAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_HistoryAction_heapBytes(const MR_HistoryAction *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_HistoryAction *MR_HistoryAction_OffsetPtr(const MR_HistoryAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_HistoryAction *MR_HistoryAction_OffsetMutablePtr(MR_HistoryAction *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangVoxelSelectionAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangVoxelSelectionAction *MR_HistoryAction_StaticDowncastTo_MR_ChangVoxelSelectionAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangVoxelSelectionAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangVoxelSelectionAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangVoxelSelectionAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangVoxelSelectionAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangVoxelSelectionAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangVoxelSelectionAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangVoxelSelectionAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangVoxelSelectionAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangVoxelSelectionAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangVoxelSelectionAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangVoxelSelectionAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangVoxelSelectionAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangVoxelSelectionAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangVoxelSelectionAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangVoxelSelectionAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeActiveBoxAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeActiveBoxAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeActiveBoxAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeActiveBoxAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeActiveBoxAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeActiveBoxAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeActiveBoxAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeActiveBoxAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeActiveBoxAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeActiveBoxAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeActiveBoxAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeActiveBoxAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeActiveBoxAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeActiveBoxAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeActiveBoxAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeActiveBoxAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeActiveBoxAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeActiveBoxAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeColoringType`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeColoringType *MR_HistoryAction_StaticDowncastTo_MR_ChangeColoringType(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeColoringType`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeColoringType *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeColoringType(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeColoringType`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeColoringType *MR_HistoryAction_DynamicDowncastTo_MR_ChangeColoringType(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeColoringType`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeColoringType *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeColoringType(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeColoringType`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeColoringType *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeColoringType(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeColoringType`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeColoringType *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeColoringType(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeDualMarchingCubesAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeDualMarchingCubesAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeDualMarchingCubesAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeDualMarchingCubesAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeDualMarchingCubesAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeDualMarchingCubesAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeDualMarchingCubesAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeDualMarchingCubesAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeDualMarchingCubesAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeDualMarchingCubesAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeDualMarchingCubesAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeDualMarchingCubesAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeDualMarchingCubesAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeDualMarchingCubesAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeDualMarchingCubesAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeDualMarchingCubesAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeDualMarchingCubesAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeDualMarchingCubesAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeFacesColorMapAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeFacesColorMapAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeFacesColorMapAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeFacesColorMapAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeFacesColorMapAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeFacesColorMapAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeFacesColorMapAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeFacesColorMapAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeFacesColorMapAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeFacesColorMapAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeFacesColorMapAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeFacesColorMapAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeFacesColorMapAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeFacesColorMapAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeFacesColorMapAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeFacesColorMapAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeFacesColorMapAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeFacesColorMapAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeGridAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeGridAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeGridAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeGridAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeGridAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeGridAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeGridAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeGridAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeGridAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeGridAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeGridAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeGridAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeGridAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeGridAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeGridAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeGridAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeGridAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeGridAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeIsoAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeIsoAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeIsoAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeIsoAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeIsoAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeIsoAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeIsoAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeIsoAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeIsoAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeIsoAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeIsoAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeIsoAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeIsoAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeIsoAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeIsoAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeIsoAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeIsoAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeIsoAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeLabelAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeLabelAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeLabelAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeLabelAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeLabelAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeLabelAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeLabelAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeLabelAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeLabelAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeLabelAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeLabelAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeLabelAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeLabelAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeLabelAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeLabelAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeLabelAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeLabelAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeLabelAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeLinesColorMapAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeLinesColorMapAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeLinesColorMapAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeLinesColorMapAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeLinesColorMapAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeLinesColorMapAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeLinesColorMapAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeLinesColorMapAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeLinesColorMapAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeLinesColorMapAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeLinesColorMapAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeLinesColorMapAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeLinesColorMapAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeLinesColorMapAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeLinesColorMapAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeLinesColorMapAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeLinesColorMapAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeLinesColorMapAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeMeshAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeMeshAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeMeshAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeMeshAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeMeshAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeMeshAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeMeshAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeMeshAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeMeshAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeMeshAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeMeshAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeMeshAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshCreasesAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeMeshCreasesAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeMeshCreasesAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshCreasesAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeMeshCreasesAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeMeshCreasesAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshCreasesAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeMeshCreasesAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeMeshCreasesAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshCreasesAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeMeshCreasesAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeMeshCreasesAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshCreasesAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeMeshCreasesAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeMeshCreasesAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshCreasesAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeMeshCreasesAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeMeshCreasesAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshDataAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeMeshDataAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeMeshDataAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshDataAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeMeshDataAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeMeshDataAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshDataAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeMeshDataAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeMeshDataAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshDataAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeMeshDataAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeMeshDataAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshDataAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeMeshDataAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeMeshDataAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshDataAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeMeshDataAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeMeshDataAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshEdgeSelectionAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeMeshEdgeSelectionAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeMeshEdgeSelectionAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshEdgeSelectionAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeMeshEdgeSelectionAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeMeshEdgeSelectionAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshEdgeSelectionAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeMeshEdgeSelectionAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeMeshEdgeSelectionAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshEdgeSelectionAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeMeshEdgeSelectionAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeMeshEdgeSelectionAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshEdgeSelectionAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeMeshEdgeSelectionAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeMeshEdgeSelectionAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshEdgeSelectionAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeMeshEdgeSelectionAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeMeshEdgeSelectionAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshFaceSelectionAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeMeshFaceSelectionAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeMeshFaceSelectionAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshFaceSelectionAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeMeshFaceSelectionAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeMeshFaceSelectionAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshFaceSelectionAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeMeshFaceSelectionAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeMeshFaceSelectionAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshFaceSelectionAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeMeshFaceSelectionAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeMeshFaceSelectionAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshFaceSelectionAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeMeshFaceSelectionAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeMeshFaceSelectionAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshFaceSelectionAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeMeshFaceSelectionAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeMeshFaceSelectionAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshPointsAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeMeshPointsAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeMeshPointsAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshPointsAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeMeshPointsAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeMeshPointsAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshPointsAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeMeshPointsAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeMeshPointsAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshPointsAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeMeshPointsAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeMeshPointsAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshPointsAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeMeshPointsAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeMeshPointsAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshPointsAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeMeshPointsAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeMeshPointsAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshTexturePerFaceAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeMeshTexturePerFaceAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeMeshTexturePerFaceAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshTexturePerFaceAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeMeshTexturePerFaceAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeMeshTexturePerFaceAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshTexturePerFaceAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeMeshTexturePerFaceAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeMeshTexturePerFaceAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshTexturePerFaceAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeMeshTexturePerFaceAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeMeshTexturePerFaceAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshTexturePerFaceAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeMeshTexturePerFaceAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeMeshTexturePerFaceAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshTexturePerFaceAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeMeshTexturePerFaceAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeMeshTexturePerFaceAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshTopologyAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeMeshTopologyAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeMeshTopologyAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshTopologyAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeMeshTopologyAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeMeshTopologyAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshTopologyAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeMeshTopologyAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeMeshTopologyAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshTopologyAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeMeshTopologyAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeMeshTopologyAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshTopologyAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeMeshTopologyAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeMeshTopologyAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshTopologyAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeMeshTopologyAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeMeshTopologyAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshUVCoordsAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeMeshUVCoordsAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeMeshUVCoordsAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshUVCoordsAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeMeshUVCoordsAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeMeshUVCoordsAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshUVCoordsAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeMeshUVCoordsAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeMeshUVCoordsAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshUVCoordsAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeMeshUVCoordsAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeMeshUVCoordsAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshUVCoordsAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeMeshUVCoordsAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeMeshUVCoordsAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeMeshUVCoordsAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeMeshUVCoordsAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeMeshUVCoordsAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeNameAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeNameAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeNameAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeNameAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeNameAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeNameAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeNameAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeNameAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeNameAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeNameAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeNameAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeNameAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeNameAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeNameAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeNameAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeNameAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeNameAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeNameAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeObjectAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeObjectAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeObjectAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeObjectAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeObjectAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeObjectAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeObjectAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeObjectAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeObjectAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeObjectAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeObjectAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeObjectAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeObjectAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeObjectAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeObjectAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeObjectAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeObjectAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeObjectAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeObjectColorAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeObjectColorAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeObjectColorAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeObjectColorAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeObjectColorAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeObjectColorAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeObjectColorAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeObjectColorAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeObjectColorAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeObjectColorAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeObjectColorAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeObjectColorAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeObjectColorAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeObjectColorAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeObjectColorAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeObjectColorAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeObjectColorAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeObjectColorAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeObjectSelectedAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeObjectSelectedAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeObjectSelectedAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeObjectSelectedAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeObjectSelectedAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeObjectSelectedAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeObjectSelectedAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeObjectSelectedAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeObjectSelectedAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeObjectSelectedAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeObjectSelectedAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeObjectSelectedAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeObjectSelectedAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeObjectSelectedAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeObjectSelectedAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeObjectSelectedAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeObjectSelectedAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeObjectSelectedAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeObjectVisibilityAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeObjectVisibilityAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeObjectVisibilityAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeObjectVisibilityAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeObjectVisibilityAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeObjectVisibilityAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeObjectVisibilityAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeObjectVisibilityAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeObjectVisibilityAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeObjectVisibilityAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeObjectVisibilityAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeObjectVisibilityAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeObjectVisibilityAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeObjectVisibilityAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeObjectVisibilityAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeObjectVisibilityAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeObjectVisibilityAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeObjectVisibilityAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeOneNormalInCloudAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeOneNormalInCloudAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeOneNormalInCloudAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeOneNormalInCloudAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeOneNormalInCloudAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeOneNormalInCloudAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeOneNormalInCloudAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeOneNormalInCloudAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeOneNormalInCloudAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeOneNormalInCloudAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeOneNormalInCloudAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeOneNormalInCloudAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeOneNormalInCloudAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeOneNormalInCloudAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeOneNormalInCloudAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeOneNormalInCloudAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeOneNormalInCloudAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeOneNormalInCloudAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeOnePointInCloudAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeOnePointInCloudAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeOnePointInCloudAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeOnePointInCloudAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeOnePointInCloudAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeOnePointInCloudAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeOnePointInCloudAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeOnePointInCloudAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeOnePointInCloudAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeOnePointInCloudAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeOnePointInCloudAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeOnePointInCloudAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeOnePointInCloudAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeOnePointInCloudAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeOnePointInCloudAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeOnePointInCloudAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeOnePointInCloudAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeOnePointInCloudAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePointCloudAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangePointCloudAction *MR_HistoryAction_StaticDowncastTo_MR_ChangePointCloudAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePointCloudAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangePointCloudAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangePointCloudAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePointCloudAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangePointCloudAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangePointCloudAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePointCloudAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangePointCloudAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangePointCloudAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePointCloudAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangePointCloudAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangePointCloudAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePointCloudAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangePointCloudAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangePointCloudAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePointCloudNormalsAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangePointCloudNormalsAction *MR_HistoryAction_StaticDowncastTo_MR_ChangePointCloudNormalsAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePointCloudNormalsAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangePointCloudNormalsAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangePointCloudNormalsAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePointCloudNormalsAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangePointCloudNormalsAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangePointCloudNormalsAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePointCloudNormalsAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangePointCloudNormalsAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangePointCloudNormalsAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePointCloudNormalsAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangePointCloudNormalsAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangePointCloudNormalsAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePointCloudNormalsAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangePointCloudNormalsAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangePointCloudNormalsAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePointCloudPointsAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangePointCloudPointsAction *MR_HistoryAction_StaticDowncastTo_MR_ChangePointCloudPointsAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePointCloudPointsAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangePointCloudPointsAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangePointCloudPointsAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePointCloudPointsAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangePointCloudPointsAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangePointCloudPointsAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePointCloudPointsAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangePointCloudPointsAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangePointCloudPointsAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePointCloudPointsAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangePointCloudPointsAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangePointCloudPointsAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePointCloudPointsAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangePointCloudPointsAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangePointCloudPointsAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePointPointSelectionAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangePointPointSelectionAction *MR_HistoryAction_StaticDowncastTo_MR_ChangePointPointSelectionAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePointPointSelectionAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangePointPointSelectionAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangePointPointSelectionAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePointPointSelectionAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangePointPointSelectionAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangePointPointSelectionAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePointPointSelectionAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangePointPointSelectionAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangePointPointSelectionAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePointPointSelectionAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangePointPointSelectionAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangePointPointSelectionAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePointPointSelectionAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangePointPointSelectionAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangePointPointSelectionAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePolylineAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangePolylineAction *MR_HistoryAction_StaticDowncastTo_MR_ChangePolylineAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePolylineAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangePolylineAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangePolylineAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePolylineAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangePolylineAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangePolylineAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePolylineAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangePolylineAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangePolylineAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePolylineAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangePolylineAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangePolylineAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePolylineAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangePolylineAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangePolylineAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePolylinePointsAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangePolylinePointsAction *MR_HistoryAction_StaticDowncastTo_MR_ChangePolylinePointsAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePolylinePointsAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangePolylinePointsAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangePolylinePointsAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePolylinePointsAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangePolylinePointsAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangePolylinePointsAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePolylinePointsAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangePolylinePointsAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangePolylinePointsAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePolylinePointsAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangePolylinePointsAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangePolylinePointsAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePolylinePointsAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangePolylinePointsAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangePolylinePointsAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePolylineTopologyAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangePolylineTopologyAction *MR_HistoryAction_StaticDowncastTo_MR_ChangePolylineTopologyAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePolylineTopologyAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangePolylineTopologyAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangePolylineTopologyAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePolylineTopologyAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangePolylineTopologyAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangePolylineTopologyAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePolylineTopologyAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangePolylineTopologyAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangePolylineTopologyAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePolylineTopologyAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangePolylineTopologyAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangePolylineTopologyAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangePolylineTopologyAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangePolylineTopologyAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangePolylineTopologyAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeScaleAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeScaleAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeScaleAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeScaleAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeScaleAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeScaleAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeScaleAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeScaleAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeScaleAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeScaleAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeScaleAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeScaleAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeScaleAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeScaleAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeScaleAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeScaleAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeScaleAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeScaleAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeSceneAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeSceneAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeSceneAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeSceneAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeSceneAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeSceneAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeSceneAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeSceneAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeSceneAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeSceneAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeSceneAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeSceneAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeSceneAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeSceneAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeSceneAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeSceneAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeSceneAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeSceneAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeSceneObjectsOrder`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeSceneObjectsOrder *MR_HistoryAction_StaticDowncastTo_MR_ChangeSceneObjectsOrder(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeSceneObjectsOrder`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeSceneObjectsOrder *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeSceneObjectsOrder(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeSceneObjectsOrder`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeSceneObjectsOrder *MR_HistoryAction_DynamicDowncastTo_MR_ChangeSceneObjectsOrder(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeSceneObjectsOrder`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeSceneObjectsOrder *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeSceneObjectsOrder(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeSceneObjectsOrder`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeSceneObjectsOrder *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeSceneObjectsOrder(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeSceneObjectsOrder`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeSceneObjectsOrder *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeSceneObjectsOrder(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeSurfaceAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeSurfaceAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeSurfaceAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeSurfaceAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeSurfaceAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeSurfaceAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeSurfaceAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeSurfaceAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeSurfaceAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeSurfaceAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeSurfaceAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeSurfaceAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeSurfaceAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeSurfaceAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeSurfaceAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeSurfaceAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeSurfaceAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeSurfaceAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeTextureAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeTextureAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeTextureAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeTextureAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeTextureAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeTextureAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeTextureAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeTextureAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeTextureAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeTextureAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeTextureAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeTextureAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeTextureAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeTextureAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeTextureAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeTextureAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeTextureAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeTextureAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeVisualizePropertyAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeVisualizePropertyAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeVisualizePropertyAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeVisualizePropertyAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeVisualizePropertyAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeVisualizePropertyAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeVisualizePropertyAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeVisualizePropertyAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeVisualizePropertyAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeVisualizePropertyAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeVisualizePropertyAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeVisualizePropertyAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeVisualizePropertyAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeVisualizePropertyAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeVisualizePropertyAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeVisualizePropertyAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeVisualizePropertyAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeVisualizePropertyAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeXfAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeXfAction *MR_HistoryAction_StaticDowncastTo_MR_ChangeXfAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeXfAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ChangeXfAction *MR_HistoryAction_MutableStaticDowncastTo_MR_ChangeXfAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeXfAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ChangeXfAction *MR_HistoryAction_DynamicDowncastTo_MR_ChangeXfAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeXfAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ChangeXfAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_ChangeXfAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeXfAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChangeXfAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_ChangeXfAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::ChangeXfAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeXfAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_ChangeXfAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::CombinedHistoryAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_CombinedHistoryAction *MR_HistoryAction_StaticDowncastTo_MR_CombinedHistoryAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::CombinedHistoryAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_CombinedHistoryAction *MR_HistoryAction_MutableStaticDowncastTo_MR_CombinedHistoryAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::CombinedHistoryAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_CombinedHistoryAction *MR_HistoryAction_DynamicDowncastTo_MR_CombinedHistoryAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::CombinedHistoryAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_CombinedHistoryAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_CombinedHistoryAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::CombinedHistoryAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_CombinedHistoryAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_CombinedHistoryAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::CombinedHistoryAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_CombinedHistoryAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_CombinedHistoryAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::PartialChangeMeshAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_PartialChangeMeshAction *MR_HistoryAction_StaticDowncastTo_MR_PartialChangeMeshAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::PartialChangeMeshAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_PartialChangeMeshAction *MR_HistoryAction_MutableStaticDowncastTo_MR_PartialChangeMeshAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::PartialChangeMeshAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_PartialChangeMeshAction *MR_HistoryAction_DynamicDowncastTo_MR_PartialChangeMeshAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::PartialChangeMeshAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_PartialChangeMeshAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_PartialChangeMeshAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::PartialChangeMeshAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PartialChangeMeshAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_PartialChangeMeshAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::PartialChangeMeshAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PartialChangeMeshAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_PartialChangeMeshAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::PartialChangeMeshPointsAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_PartialChangeMeshPointsAction *MR_HistoryAction_StaticDowncastTo_MR_PartialChangeMeshPointsAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::PartialChangeMeshPointsAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_PartialChangeMeshPointsAction *MR_HistoryAction_MutableStaticDowncastTo_MR_PartialChangeMeshPointsAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::PartialChangeMeshPointsAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_PartialChangeMeshPointsAction *MR_HistoryAction_DynamicDowncastTo_MR_PartialChangeMeshPointsAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::PartialChangeMeshPointsAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_PartialChangeMeshPointsAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_PartialChangeMeshPointsAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::PartialChangeMeshPointsAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PartialChangeMeshPointsAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_PartialChangeMeshPointsAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::PartialChangeMeshPointsAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PartialChangeMeshPointsAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_PartialChangeMeshPointsAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::PartialChangeMeshTopologyAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_PartialChangeMeshTopologyAction *MR_HistoryAction_StaticDowncastTo_MR_PartialChangeMeshTopologyAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::PartialChangeMeshTopologyAction`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_PartialChangeMeshTopologyAction *MR_HistoryAction_MutableStaticDowncastTo_MR_PartialChangeMeshTopologyAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::PartialChangeMeshTopologyAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_PartialChangeMeshTopologyAction *MR_HistoryAction_DynamicDowncastTo_MR_PartialChangeMeshTopologyAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::PartialChangeMeshTopologyAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_PartialChangeMeshTopologyAction *MR_HistoryAction_MutableDynamicDowncastTo_MR_PartialChangeMeshTopologyAction(MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::PartialChangeMeshTopologyAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PartialChangeMeshTopologyAction *MR_HistoryAction_DynamicDowncastToOrFail_MR_PartialChangeMeshTopologyAction(const MR_HistoryAction *object);

/// Downcasts an instance of `MR::HistoryAction` to a derived class `MR::PartialChangeMeshTopologyAction`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PartialChangeMeshTopologyAction *MR_HistoryAction_MutableDynamicDowncastToOrFail_MR_PartialChangeMeshTopologyAction(MR_HistoryAction *object);

/**
* \brief Remove actions from history actions vector that match the condition
* \param firstRedoIndex - set redo index for calculate how many actions removed before it
* \param deepFiltering - filter actions into combined actions
* \return pair (anything removed, how many removed before firstRedoIndex)
*/
/// Generated from function `MR::filterHistoryActionsVector`.
/// Parameter `historyVector` can not be null. It is a single object.
/// Parameter `firstRedoIndex` has a default argument: `0`, pass a null pointer to use it.
/// Parameter `deepFiltering` has a default argument: `true`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_bool_int32_t_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_bool_int32_t *MR_filterHistoryActionsVector(MR_std_vector_std_shared_ptr_MR_HistoryAction *historyVector, MR_PassBy filteringCondition_pass_by, MR_std_function_bool_from_const_std_shared_ptr_MR_HistoryAction_ref *filteringCondition, const MR_uint64_t *firstRedoIndex, const bool *deepFiltering);

#ifdef __cplusplus
} // extern "C"
#endif
