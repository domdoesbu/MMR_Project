// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRBox.h>
#include <MRCMesh/MRViewportId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AnyVisualizeMaskEnum MR_AnyVisualizeMaskEnum; // Defined in `#include <MRCMesh/MRVisualObject.h>`.
typedef struct MR_Color MR_Color; // Defined in `#include <MRCMesh/MRColor.h>`.
typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_FaceColors MR_FaceColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_FaceMap MR_FaceMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_MeshTexture MR_MeshTexture; // Defined in `#include <MRCMesh/MRMeshTexture.h>`.
typedef struct MR_Object MR_Object; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectChildrenHolder MR_ObjectChildrenHolder; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectDistanceMap MR_ObjectDistanceMap; // Defined in `#include <MRCMesh/MRObjectDistanceMap.h>`.
typedef struct MR_ObjectMesh MR_ObjectMesh; // Defined in `#include <MRCMesh/MRObjectMesh.h>`.
typedef struct MR_ObjectMeshData MR_ObjectMeshData; // Defined in `#include <MRCMesh/MRObjectMeshData.h>`.
typedef struct MR_ObjectVoxels MR_ObjectVoxels; // Defined in `#include <MRCVoxels/MRObjectVoxels.h>`.
typedef struct MR_TexturePerFace MR_TexturePerFace; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Vector_MR_MeshTexture_MR_TextureId MR_Vector_MR_MeshTexture_MR_TextureId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertColors MR_VertColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertCoords2 MR_VertCoords2; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertMap MR_VertMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_ViewportMask MR_ViewportMask; // Defined in `#include <MRCMesh/MRViewportId.h>`.
typedef struct MR_ViewportProperty_MR_Color MR_ViewportProperty_MR_Color; // Defined in `#include <MRCMesh/MRViewportProperty.h>`.
typedef struct MR_VisualObject MR_VisualObject; // Defined in `#include <MRCMesh/MRVisualObject.h>`.
typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_shared_ptr_const_MR_Mesh MR_std_shared_ptr_const_MR_Mesh; // Defined in `#include <MRCMisc/std_shared_ptr_const_MR_Mesh.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_MR_ViewportMask MR_std_vector_MR_ViewportMask; // Defined in `#include <MRCMisc/std_vector_MR_ViewportMask.h>`.


typedef int32_t MR_MeshVisualizePropertyType;
enum // MR_MeshVisualizePropertyType
{
    MR_MeshVisualizePropertyType_Faces = 0,
    MR_MeshVisualizePropertyType_Texture = 1,
    MR_MeshVisualizePropertyType_Edges = 2,
    MR_MeshVisualizePropertyType_Points = 3,
    MR_MeshVisualizePropertyType_SelectedFaces = 4,
    MR_MeshVisualizePropertyType_SelectedEdges = 5,
    MR_MeshVisualizePropertyType_EnableShading = 6,
    MR_MeshVisualizePropertyType_FlatShading = 7,
    MR_MeshVisualizePropertyType_OnlyOddFragments = 8,
    MR_MeshVisualizePropertyType_BordersHighlight = 9,
    // recommended for drawing edges on top of mesh
    MR_MeshVisualizePropertyType_PolygonOffsetFromCamera = 10,
    MR_MeshVisualizePropertyType__count = 11,
};

/// an object that stores a mesh
/// Generated from class `MR::ObjectMeshHolder`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::VisualObject`
///   Indirect: (non-virtual)
///     `MR::Object`
///     `MR::ObjectChildrenHolder`
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::ObjectDistanceMap`
///     `MR::ObjectMesh`
///     `MR::ObjectVoxels`
typedef struct MR_ObjectMeshHolder MR_ObjectMeshHolder;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectMeshHolder_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectMeshHolder *MR_ObjectMeshHolder_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ObjectMeshHolder_DestroyArray()`.
/// Use `MR_ObjectMeshHolder_OffsetMutablePtr()` and `MR_ObjectMeshHolder_OffsetPtr()` to access the array elements.
MRC_API MR_ObjectMeshHolder *MR_ObjectMeshHolder_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ObjectMeshHolder *MR_ObjectMeshHolder_OffsetPtr(const MR_ObjectMeshHolder *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ObjectMeshHolder *MR_ObjectMeshHolder_OffsetMutablePtr(MR_ObjectMeshHolder *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ObjectMeshHolder` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_ObjectMeshHolder_UpcastTo_MR_Object(const MR_ObjectMeshHolder *object);

/// Upcasts an instance of `MR::ObjectMeshHolder` to its base class `MR::Object`.
MRC_API MR_Object *MR_ObjectMeshHolder_MutableUpcastTo_MR_Object(MR_ObjectMeshHolder *object);

/// Upcasts an instance of `MR::ObjectMeshHolder` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_ObjectMeshHolder_UpcastTo_MR_ObjectChildrenHolder(const MR_ObjectMeshHolder *object);

/// Upcasts an instance of `MR::ObjectMeshHolder` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_ObjectMeshHolder_MutableUpcastTo_MR_ObjectChildrenHolder(MR_ObjectMeshHolder *object);

/// Upcasts an instance of `MR::ObjectMeshHolder` to its base class `MR::VisualObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_ObjectMeshHolder_UpcastTo_MR_VisualObject(const MR_ObjectMeshHolder *object);

/// Upcasts an instance of `MR::ObjectMeshHolder` to its base class `MR::VisualObject`.
MRC_API MR_VisualObject *MR_ObjectMeshHolder_MutableUpcastTo_MR_VisualObject(MR_ObjectMeshHolder *object);

/// Downcasts an instance of `MR::ObjectMeshHolder` to a derived class `MR::ObjectDistanceMap`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectDistanceMap *MR_ObjectMeshHolder_StaticDowncastTo_MR_ObjectDistanceMap(const MR_ObjectMeshHolder *object);

/// Downcasts an instance of `MR::ObjectMeshHolder` to a derived class `MR::ObjectDistanceMap`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectDistanceMap *MR_ObjectMeshHolder_MutableStaticDowncastTo_MR_ObjectDistanceMap(MR_ObjectMeshHolder *object);

/// Downcasts an instance of `MR::ObjectMeshHolder` to a derived class `MR::ObjectDistanceMap`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectDistanceMap *MR_ObjectMeshHolder_DynamicDowncastTo_MR_ObjectDistanceMap(const MR_ObjectMeshHolder *object);

/// Downcasts an instance of `MR::ObjectMeshHolder` to a derived class `MR::ObjectDistanceMap`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectDistanceMap *MR_ObjectMeshHolder_MutableDynamicDowncastTo_MR_ObjectDistanceMap(MR_ObjectMeshHolder *object);

/// Downcasts an instance of `MR::ObjectMeshHolder` to a derived class `MR::ObjectDistanceMap`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectDistanceMap *MR_ObjectMeshHolder_DynamicDowncastToOrFail_MR_ObjectDistanceMap(const MR_ObjectMeshHolder *object);

/// Downcasts an instance of `MR::ObjectMeshHolder` to a derived class `MR::ObjectDistanceMap`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectDistanceMap *MR_ObjectMeshHolder_MutableDynamicDowncastToOrFail_MR_ObjectDistanceMap(MR_ObjectMeshHolder *object);

/// Downcasts an instance of `MR::ObjectMeshHolder` to a derived class `MR::ObjectMesh`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectMesh *MR_ObjectMeshHolder_StaticDowncastTo_MR_ObjectMesh(const MR_ObjectMeshHolder *object);

/// Downcasts an instance of `MR::ObjectMeshHolder` to a derived class `MR::ObjectMesh`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectMesh *MR_ObjectMeshHolder_MutableStaticDowncastTo_MR_ObjectMesh(MR_ObjectMeshHolder *object);

/// Downcasts an instance of `MR::ObjectMeshHolder` to a derived class `MR::ObjectMesh`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectMesh *MR_ObjectMeshHolder_DynamicDowncastTo_MR_ObjectMesh(const MR_ObjectMeshHolder *object);

/// Downcasts an instance of `MR::ObjectMeshHolder` to a derived class `MR::ObjectMesh`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectMesh *MR_ObjectMeshHolder_MutableDynamicDowncastTo_MR_ObjectMesh(MR_ObjectMeshHolder *object);

/// Downcasts an instance of `MR::ObjectMeshHolder` to a derived class `MR::ObjectMesh`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectMesh *MR_ObjectMeshHolder_DynamicDowncastToOrFail_MR_ObjectMesh(const MR_ObjectMeshHolder *object);

/// Downcasts an instance of `MR::ObjectMeshHolder` to a derived class `MR::ObjectMesh`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectMesh *MR_ObjectMeshHolder_MutableDynamicDowncastToOrFail_MR_ObjectMesh(MR_ObjectMeshHolder *object);

/// Downcasts an instance of `MR::ObjectMeshHolder` to a derived class `MR::ObjectVoxels`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectVoxels *MR_ObjectMeshHolder_StaticDowncastTo_MR_ObjectVoxels(const MR_ObjectMeshHolder *object);

/// Downcasts an instance of `MR::ObjectMeshHolder` to a derived class `MR::ObjectVoxels`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectVoxels *MR_ObjectMeshHolder_MutableStaticDowncastTo_MR_ObjectVoxels(MR_ObjectMeshHolder *object);

/// Downcasts an instance of `MR::ObjectMeshHolder` to a derived class `MR::ObjectVoxels`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectVoxels *MR_ObjectMeshHolder_DynamicDowncastTo_MR_ObjectVoxels(const MR_ObjectMeshHolder *object);

/// Downcasts an instance of `MR::ObjectMeshHolder` to a derived class `MR::ObjectVoxels`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectVoxels *MR_ObjectMeshHolder_MutableDynamicDowncastTo_MR_ObjectVoxels(MR_ObjectMeshHolder *object);

/// Downcasts an instance of `MR::ObjectMeshHolder` to a derived class `MR::ObjectVoxels`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectVoxels *MR_ObjectMeshHolder_DynamicDowncastToOrFail_MR_ObjectVoxels(const MR_ObjectMeshHolder *object);

/// Downcasts an instance of `MR::ObjectMeshHolder` to a derived class `MR::ObjectVoxels`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectVoxels *MR_ObjectMeshHolder_MutableDynamicDowncastToOrFail_MR_ObjectVoxels(MR_ObjectMeshHolder *object);

/// Generated from a constructor of class `MR::ObjectMeshHolder`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectMeshHolder_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectMeshHolder *MR_ObjectMeshHolder_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ObjectMeshHolder *_other);

/// Destroys a heap-allocated instance of `MR_ObjectMeshHolder`. Does nothing if the pointer is null.
MRC_API void MR_ObjectMeshHolder_Destroy(const MR_ObjectMeshHolder *_this);

/// Destroys a heap-allocated array of `MR_ObjectMeshHolder`. Does nothing if the pointer is null.
MRC_API void MR_ObjectMeshHolder_DestroyArray(const MR_ObjectMeshHolder *_this);

/// Generated from a method of class `MR::ObjectMeshHolder` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectMeshHolder *MR_ObjectMeshHolder_AssignFromAnother(MR_ObjectMeshHolder *_this, MR_PassBy _other_pass_by, MR_ObjectMeshHolder *_other);

/// Generated from a method of class `MR::ObjectMeshHolder` named `TypeName`.
MRC_API const char *MR_ObjectMeshHolder_TypeName(void);

/// Generated from a method of class `MR::ObjectMeshHolder` named `typeName`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_ObjectMeshHolder_typeName(const MR_ObjectMeshHolder *_this);

/// Generated from a method of class `MR::ObjectMeshHolder` named `applyScale`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_applyScale(MR_ObjectMeshHolder *_this, float scaleFactor);

/// mesh object can be seen if the mesh has at least one edge
/// Generated from a method of class `MR::ObjectMeshHolder` named `hasVisualRepresentation`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ObjectMeshHolder_hasVisualRepresentation(const MR_ObjectMeshHolder *_this);

/// Generated from a method of class `MR::ObjectMeshHolder` named `hasModel`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ObjectMeshHolder_hasModel(const MR_ObjectMeshHolder *_this);

/// Generated from a method of class `MR::ObjectMeshHolder` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_const_MR_Mesh *MR_ObjectMeshHolder_mesh(const MR_ObjectMeshHolder *_this);

/// \return the pair ( mesh, selected triangles ) if any triangle is selected or whole mesh otherwise
/// Generated from a method of class `MR::ObjectMeshHolder` named `meshPart`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshPart_Destroy()` to free it when you're done using it.
MRC_API MR_MeshPart *MR_ObjectMeshHolder_meshPart(const MR_ObjectMeshHolder *_this);

/// Generated from a method of class `MR::ObjectMeshHolder` named `clone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_ObjectMeshHolder_clone(const MR_ObjectMeshHolder *_this);

/// Generated from a method of class `MR::ObjectMeshHolder` named `shallowClone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_ObjectMeshHolder_shallowClone(const MR_ObjectMeshHolder *_this);

/// Generated from a method of class `MR::ObjectMeshHolder` named `setDirtyFlags`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `invalidateCaches` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_ObjectMeshHolder_setDirtyFlags(MR_ObjectMeshHolder *_this, uint32_t mask, const bool *invalidateCaches);

/// Generated from a method of class `MR::ObjectMeshHolder` named `getSelectedFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet *MR_ObjectMeshHolder_getSelectedFaces(const MR_ObjectMeshHolder *_this);

/// Generated from a method of class `MR::ObjectMeshHolder` named `selectFaces`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_selectFaces(MR_ObjectMeshHolder *_this, MR_PassBy newSelection_pass_by, MR_FaceBitSet *newSelection);

/// returns colors of selected triangles
/// Generated from a method of class `MR::ObjectMeshHolder` named `getSelectedFacesColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Color *MR_ObjectMeshHolder_getSelectedFacesColor(const MR_ObjectMeshHolder *_this, const MR_ViewportId *id);

/// sets colors of selected triangles
/// Generated from a method of class `MR::ObjectMeshHolder` named `setSelectedFacesColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `color` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_ObjectMeshHolder_setSelectedFacesColor(MR_ObjectMeshHolder *_this, const MR_Color *color, const MR_ViewportId *id);

/// Generated from a method of class `MR::ObjectMeshHolder` named `getSelectedEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeBitSet *MR_ObjectMeshHolder_getSelectedEdges(const MR_ObjectMeshHolder *_this);

/// Generated from a method of class `MR::ObjectMeshHolder` named `selectEdges`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_selectEdges(MR_ObjectMeshHolder *_this, MR_PassBy newSelection_pass_by, MR_UndirectedEdgeBitSet *newSelection);

/// returns colors of selected edges
/// Generated from a method of class `MR::ObjectMeshHolder` named `getSelectedEdgesColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Color *MR_ObjectMeshHolder_getSelectedEdgesColor(const MR_ObjectMeshHolder *_this, const MR_ViewportId *id);

/// sets colors of selected edges
/// Generated from a method of class `MR::ObjectMeshHolder` named `setSelectedEdgesColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `color` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_ObjectMeshHolder_setSelectedEdgesColor(MR_ObjectMeshHolder *_this, const MR_Color *color, const MR_ViewportId *id);

/// Generated from a method of class `MR::ObjectMeshHolder` named `getSelectedEdgesColorsForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ViewportProperty_MR_Color *MR_ObjectMeshHolder_getSelectedEdgesColorsForAllViewports(const MR_ObjectMeshHolder *_this);

/// Generated from a method of class `MR::ObjectMeshHolder` named `setSelectedEdgesColorsForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_setSelectedEdgesColorsForAllViewports(MR_ObjectMeshHolder *_this, MR_PassBy val_pass_by, MR_ViewportProperty_MR_Color *val);

/// Generated from a method of class `MR::ObjectMeshHolder` named `getSelectedFacesColorsForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ViewportProperty_MR_Color *MR_ObjectMeshHolder_getSelectedFacesColorsForAllViewports(const MR_ObjectMeshHolder *_this);

/// Generated from a method of class `MR::ObjectMeshHolder` named `setSelectedFacesColorsForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_setSelectedFacesColorsForAllViewports(MR_ObjectMeshHolder *_this, MR_PassBy val_pass_by, MR_ViewportProperty_MR_Color *val);

/// Generated from a method of class `MR::ObjectMeshHolder` named `getEdgesColorsForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ViewportProperty_MR_Color *MR_ObjectMeshHolder_getEdgesColorsForAllViewports(const MR_ObjectMeshHolder *_this);

/// Generated from a method of class `MR::ObjectMeshHolder` named `setEdgesColorsForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_setEdgesColorsForAllViewports(MR_ObjectMeshHolder *_this, MR_PassBy val_pass_by, MR_ViewportProperty_MR_Color *val);

/// Generated from a method of class `MR::ObjectMeshHolder` named `getBordersColorsForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ViewportProperty_MR_Color *MR_ObjectMeshHolder_getBordersColorsForAllViewports(const MR_ObjectMeshHolder *_this);

/// Generated from a method of class `MR::ObjectMeshHolder` named `setBordersColorsForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_setBordersColorsForAllViewports(MR_ObjectMeshHolder *_this, MR_PassBy val_pass_by, MR_ViewportProperty_MR_Color *val);

/// Edges on mesh, that will have sharp visualization even with smooth shading
/// Generated from a method of class `MR::ObjectMeshHolder` named `creases`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeBitSet *MR_ObjectMeshHolder_creases(const MR_ObjectMeshHolder *_this);

/// Generated from a method of class `MR::ObjectMeshHolder` named `setCreases`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_setCreases(MR_ObjectMeshHolder *_this, MR_PassBy creases_pass_by, MR_UndirectedEdgeBitSet *creases);

/// sets flat (true) or smooth (false) shading
/// Generated from a method of class `MR::ObjectMeshHolder` named `setFlatShading`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_setFlatShading(MR_ObjectMeshHolder *_this, bool on);

/// Generated from a method of class `MR::ObjectMeshHolder` named `flatShading`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ObjectMeshHolder_flatShading(const MR_ObjectMeshHolder *_this);

/// Generated from a method of class `MR::ObjectMeshHolder` named `supportsVisualizeProperty`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `type` can not be null. It is a single object.
MRC_API bool MR_ObjectMeshHolder_supportsVisualizeProperty(const MR_ObjectMeshHolder *_this, const MR_AnyVisualizeMaskEnum *type);

/// get all visualize properties masks
/// Generated from a method of class `MR::ObjectMeshHolder` named `getAllVisualizeProperties`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_ViewportMask_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_ViewportMask *MR_ObjectMeshHolder_getAllVisualizeProperties(const MR_ObjectMeshHolder *_this);

/// returns mask of viewports where given property is set
/// Generated from a method of class `MR::ObjectMeshHolder` named `getVisualizePropertyMask`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `type` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ViewportMask *MR_ObjectMeshHolder_getVisualizePropertyMask(const MR_ObjectMeshHolder *_this, const MR_AnyVisualizeMaskEnum *type);

/// provides read-only access to whole ObjectMeshData
/// Generated from a method of class `MR::ObjectMeshHolder` named `data`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectMeshData *MR_ObjectMeshHolder_data(const MR_ObjectMeshHolder *_this);

/// sets whole new ObjectMeshData
/// Generated from a method of class `MR::ObjectMeshHolder` named `setData`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `data` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MRC_API void MR_ObjectMeshHolder_setData(MR_ObjectMeshHolder *_this, MR_ObjectMeshData *data);

/// swaps whole ObjectMeshData with given argument
/// Generated from a method of class `MR::ObjectMeshHolder` named `updateData`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `data` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_updateData(MR_ObjectMeshHolder *_this, MR_ObjectMeshData *data);

/// returns per-vertex colors of the object
/// Generated from a method of class `MR::ObjectMeshHolder` named `getVertsColorMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertColors *MR_ObjectMeshHolder_getVertsColorMap(const MR_ObjectMeshHolder *_this);

/// sets per-vertex colors of the object
/// Generated from a method of class `MR::ObjectMeshHolder` named `setVertsColorMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_setVertsColorMap(MR_ObjectMeshHolder *_this, MR_PassBy vertsColorMap_pass_by, MR_VertColors *vertsColorMap);

/// swaps per-vertex colors of the object with given argument
/// Generated from a method of class `MR::ObjectMeshHolder` named `updateVertsColorMap`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `vertsColorMap` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_updateVertsColorMap(MR_ObjectMeshHolder *_this, MR_VertColors *vertsColorMap);

/// Generated from a method of class `MR::ObjectMeshHolder` named `getFacesColorMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceColors *MR_ObjectMeshHolder_getFacesColorMap(const MR_ObjectMeshHolder *_this);

/// Generated from a method of class `MR::ObjectMeshHolder` named `setFacesColorMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_setFacesColorMap(MR_ObjectMeshHolder *_this, MR_PassBy facesColorMap_pass_by, MR_FaceColors *facesColorMap);

/// Generated from a method of class `MR::ObjectMeshHolder` named `updateFacesColorMap`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `updated` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_updateFacesColorMap(MR_ObjectMeshHolder *_this, MR_FaceColors *updated);

/// Generated from a method of class `MR::ObjectMeshHolder` named `setEdgeWidth`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_setEdgeWidth(MR_ObjectMeshHolder *_this, float edgeWidth);

/// Generated from a method of class `MR::ObjectMeshHolder` named `getEdgeWidth`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_ObjectMeshHolder_getEdgeWidth(const MR_ObjectMeshHolder *_this);

/// Generated from a method of class `MR::ObjectMeshHolder` named `setPointSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_setPointSize(MR_ObjectMeshHolder *_this, float size);

/// Generated from a method of class `MR::ObjectMeshHolder` named `getPointSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_ObjectMeshHolder_getPointSize(const MR_ObjectMeshHolder *_this);

/// Generated from a method of class `MR::ObjectMeshHolder` named `getEdgesColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Color *MR_ObjectMeshHolder_getEdgesColor(const MR_ObjectMeshHolder *_this, const MR_ViewportId *id);

/// Generated from a method of class `MR::ObjectMeshHolder` named `setEdgesColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `color` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_ObjectMeshHolder_setEdgesColor(MR_ObjectMeshHolder *_this, const MR_Color *color, const MR_ViewportId *id);

/// Generated from a method of class `MR::ObjectMeshHolder` named `getPointsColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Color *MR_ObjectMeshHolder_getPointsColor(const MR_ObjectMeshHolder *_this, const MR_ViewportId *id);

/// Generated from a method of class `MR::ObjectMeshHolder` named `setPointsColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `color` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_ObjectMeshHolder_setPointsColor(MR_ObjectMeshHolder *_this, const MR_Color *color, const MR_ViewportId *id);

/// Generated from a method of class `MR::ObjectMeshHolder` named `getBordersColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Color *MR_ObjectMeshHolder_getBordersColor(const MR_ObjectMeshHolder *_this, const MR_ViewportId *id);

/// Generated from a method of class `MR::ObjectMeshHolder` named `setBordersColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `color` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_ObjectMeshHolder_setBordersColor(MR_ObjectMeshHolder *_this, const MR_Color *color, const MR_ViewportId *id);

/// returns first texture in the vector. If there is no textures, returns empty texture
/// Generated from a method of class `MR::ObjectMeshHolder` named `getTexture`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshTexture *MR_ObjectMeshHolder_getTexture(const MR_ObjectMeshHolder *_this);

/// Generated from a method of class `MR::ObjectMeshHolder` named `getTextures`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector_MR_MeshTexture_MR_TextureId *MR_ObjectMeshHolder_getTextures(const MR_ObjectMeshHolder *_this);

/// Generated from a method of class `MR::ObjectMeshHolder` named `setTextures`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_setTextures(MR_ObjectMeshHolder *_this, MR_PassBy texture_pass_by, MR_Vector_MR_MeshTexture_MR_TextureId *texture);

/// Generated from a method of class `MR::ObjectMeshHolder` named `updateTextures`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `updated` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_updateTextures(MR_ObjectMeshHolder *_this, MR_Vector_MR_MeshTexture_MR_TextureId *updated);

/// the texture ids for the faces if more than one texture is used to texture the object
/// texture coordinates (data_.uvCoordinates) at a point can belong to different textures, depending on which face the point belongs to
/// Generated from a method of class `MR::ObjectMeshHolder` named `setTexturePerFace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_setTexturePerFace(MR_ObjectMeshHolder *_this, MR_PassBy texturePerFace_pass_by, MR_TexturePerFace *texturePerFace);

/// Generated from a method of class `MR::ObjectMeshHolder` named `updateTexturePerFace`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `texturePerFace` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_updateTexturePerFace(MR_ObjectMeshHolder *_this, MR_TexturePerFace *texturePerFace);

/// Generated from a method of class `MR::ObjectMeshHolder` named `addTexture`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_addTexture(MR_ObjectMeshHolder *_this, MR_PassBy texture_pass_by, MR_MeshTexture *texture);

/// Generated from a method of class `MR::ObjectMeshHolder` named `getTexturePerFace`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_TexturePerFace *MR_ObjectMeshHolder_getTexturePerFace(const MR_ObjectMeshHolder *_this);

/// Generated from a method of class `MR::ObjectMeshHolder` named `getUVCoords`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords2 *MR_ObjectMeshHolder_getUVCoords(const MR_ObjectMeshHolder *_this);

/// Generated from a method of class `MR::ObjectMeshHolder` named `setUVCoords`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_setUVCoords(MR_ObjectMeshHolder *_this, MR_PassBy uvCoordinates_pass_by, MR_VertCoords2 *uvCoordinates);

/// Generated from a method of class `MR::ObjectMeshHolder` named `updateUVCoords`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `updated` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_updateUVCoords(MR_ObjectMeshHolder *_this, MR_VertCoords2 *updated);

/// copies texture, UV-coordinates and vertex colors from given source object \param src using given map \param thisToSrc
/// Generated from a method of class `MR::ObjectMeshHolder` named `copyTextureAndColors`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `src` can not be null. It is a single object.
/// Parameter `thisToSrc` can not be null. It is a single object.
/// Parameter `thisToSrcFaces` is a single object.
/// Parameter `thisToSrcFaces` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_ObjectMeshHolder_copyTextureAndColors(MR_ObjectMeshHolder *_this, const MR_ObjectMeshHolder *src, const MR_VertMap *thisToSrc, const MR_FaceMap *thisToSrcFaces);

/// copies vertex colors from given source object \param src using given map \param thisToSrc
/// Generated from a method of class `MR::ObjectMeshHolder` named `copyColors`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `src` can not be null. It is a single object.
/// Parameter `thisToSrc` can not be null. It is a single object.
/// Parameter `thisToSrcFaces` is a single object.
/// Parameter `thisToSrcFaces` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_ObjectMeshHolder_copyColors(MR_ObjectMeshHolder *_this, const MR_ObjectMeshHolder *src, const MR_VertMap *thisToSrc, const MR_FaceMap *thisToSrcFaces);

// ancillary texture can be used to have custom features visualization without affecting real one
/// Generated from a method of class `MR::ObjectMeshHolder` named `getAncillaryTexture`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshTexture *MR_ObjectMeshHolder_getAncillaryTexture(const MR_ObjectMeshHolder *_this);

/// Generated from a method of class `MR::ObjectMeshHolder` named `setAncillaryTexture`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_setAncillaryTexture(MR_ObjectMeshHolder *_this, MR_PassBy texture_pass_by, MR_MeshTexture *texture);

/// Generated from a method of class `MR::ObjectMeshHolder` named `getAncillaryUVCoords`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords2 *MR_ObjectMeshHolder_getAncillaryUVCoords(const MR_ObjectMeshHolder *_this);

/// Generated from a method of class `MR::ObjectMeshHolder` named `setAncillaryUVCoords`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_setAncillaryUVCoords(MR_ObjectMeshHolder *_this, MR_PassBy uvCoordinates_pass_by, MR_VertCoords2 *uvCoordinates);

/// Generated from a method of class `MR::ObjectMeshHolder` named `updateAncillaryUVCoords`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `updated` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_updateAncillaryUVCoords(MR_ObjectMeshHolder *_this, MR_VertCoords2 *updated);

/// Generated from a method of class `MR::ObjectMeshHolder` named `hasAncillaryTexture`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ObjectMeshHolder_hasAncillaryTexture(const MR_ObjectMeshHolder *_this);

/// Generated from a method of class `MR::ObjectMeshHolder` named `clearAncillaryTexture`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_clearAncillaryTexture(MR_ObjectMeshHolder *_this);

/// returns dirty flag of currently using normal type if they are dirty in render representation
/// Generated from a method of class `MR::ObjectMeshHolder` named `getNeededNormalsRenderDirtyValue`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `viewportMask` can not be null. It is a single object.
MRC_API uint32_t MR_ObjectMeshHolder_getNeededNormalsRenderDirtyValue(const MR_ObjectMeshHolder *_this, const MR_ViewportMask *viewportMask);

/// Generated from a method of class `MR::ObjectMeshHolder` named `getRedrawFlag`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `viewportMask` can not be null. It is a single object.
MRC_API bool MR_ObjectMeshHolder_getRedrawFlag(const MR_ObjectMeshHolder *_this, const MR_ViewportMask *viewportMask);

/// returns cached information whether the mesh is closed
/// Generated from a method of class `MR::ObjectMeshHolder` named `isMeshClosed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ObjectMeshHolder_isMeshClosed(const MR_ObjectMeshHolder *_this);

/// returns cached bounding box of this mesh object in world coordinates;
/// if you need bounding box in local coordinates please call getBoundingBox()
/// Generated from a method of class `MR::ObjectMeshHolder` named `getWorldBox`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Box3f MR_ObjectMeshHolder_getWorldBox(const MR_ObjectMeshHolder *_this, const MR_ViewportId *_1);

/// returns cached information about the number of selected faces in the mesh
/// Generated from a method of class `MR::ObjectMeshHolder` named `numSelectedFaces`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ObjectMeshHolder_numSelectedFaces(const MR_ObjectMeshHolder *_this);

/// returns cached information about the number of selected undirected edges in the mesh
/// Generated from a method of class `MR::ObjectMeshHolder` named `numSelectedEdges`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ObjectMeshHolder_numSelectedEdges(const MR_ObjectMeshHolder *_this);

/// returns cached information about the number of crease undirected edges in the mesh
/// Generated from a method of class `MR::ObjectMeshHolder` named `numCreaseEdges`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ObjectMeshHolder_numCreaseEdges(const MR_ObjectMeshHolder *_this);

/// returns cached summed area of mesh triangles
/// Generated from a method of class `MR::ObjectMeshHolder` named `totalArea`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_ObjectMeshHolder_totalArea(const MR_ObjectMeshHolder *_this);

/// returns cached area of selected triangles
/// Generated from a method of class `MR::ObjectMeshHolder` named `selectedArea`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_ObjectMeshHolder_selectedArea(const MR_ObjectMeshHolder *_this);

/// returns cached volume of space surrounded by the mesh, which is valid only if mesh is closed
/// Generated from a method of class `MR::ObjectMeshHolder` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_ObjectMeshHolder_volume(const MR_ObjectMeshHolder *_this);

/// returns cached average edge length
/// Generated from a method of class `MR::ObjectMeshHolder` named `avgEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_ObjectMeshHolder_avgEdgeLen(const MR_ObjectMeshHolder *_this);

/// returns cached information about the number of undirected edges in the mesh
/// Generated from a method of class `MR::ObjectMeshHolder` named `numUndirectedEdges`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ObjectMeshHolder_numUndirectedEdges(const MR_ObjectMeshHolder *_this);

/// returns cached information about the number of holes in the mesh
/// Generated from a method of class `MR::ObjectMeshHolder` named `numHoles`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ObjectMeshHolder_numHoles(const MR_ObjectMeshHolder *_this);

/// returns cached information about the number of components in the mesh
/// Generated from a method of class `MR::ObjectMeshHolder` named `numComponents`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ObjectMeshHolder_numComponents(const MR_ObjectMeshHolder *_this);

/// returns cached information about the number of handles in the mesh
/// Generated from a method of class `MR::ObjectMeshHolder` named `numHandles`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ObjectMeshHolder_numHandles(const MR_ObjectMeshHolder *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::ObjectMeshHolder` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ObjectMeshHolder_heapBytes(const MR_ObjectMeshHolder *_this);

/// returns overriden file extension used to serialize mesh inside this object, nullptr means defaultSerializeMeshFormat()
/// Generated from a method of class `MR::ObjectMeshHolder` named `serializeFormat`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_ObjectMeshHolder_serializeFormat(const MR_ObjectMeshHolder *_this);

/// returns overriden file extension used to serialize mesh inside this object if set, or defaultSerializeMeshFormat().c_str() otherwise; never returns nullptr
/// Generated from a method of class `MR::ObjectMeshHolder` named `actualSerializeFormat`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_ObjectMeshHolder_actualSerializeFormat(const MR_ObjectMeshHolder *_this);

/// overrides file extension used to serialize mesh inside this object: must start from '.',
/// nullptr means serialize in defaultSerializeMeshFormat()
/// Generated from a method of class `MR::ObjectMeshHolder` named `setSerializeFormat`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_setSerializeFormat(MR_ObjectMeshHolder *_this, const char *newFormat);

/// reset basic object colors to their default values from the current theme
/// Generated from a method of class `MR::ObjectMeshHolder` named `resetFrontColor`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_resetFrontColor(MR_ObjectMeshHolder *_this);

/// reset all object colors to their default values from the current theme
/// Generated from a method of class `MR::ObjectMeshHolder` named `resetColors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMeshHolder_resetColors(MR_ObjectMeshHolder *_this);

/// returns file extension used to serialize ObjectMeshHolder by default (if not overridden in specific object),
/// the string starts with '.'
/// Generated from function `MR::defaultSerializeMeshFormat`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_defaultSerializeMeshFormat(void);

/// sets file extension used to serialize serialize ObjectMeshHolder by default (if not overridden in specific object),
/// the string must start from '.';
// serialization falls back to the PLY format if given format support is available
// NOTE: CTM format support is available in the MRIOExtras library; make sure to load it if you prefer CTM
/// Generated from function `MR::setDefaultSerializeMeshFormat`.
/// Parameter `newFormat` can not be null.
/// If `newFormat_end` is null, then `newFormat` is assumed to be null-terminated.
MRC_API void MR_setDefaultSerializeMeshFormat(const char *newFormat, const char *newFormat_end);

#ifdef __cplusplus
} // extern "C"
#endif
