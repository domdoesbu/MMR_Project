// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_EdgeBitSet MR_EdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Face2RegionMap MR_Face2RegionMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_UnionFind_MR_FaceId MR_UnionFind_MR_FaceId; // Defined in `#include <MRCMesh/MRUnionFind.h>`.
typedef struct MR_UnionFind_MR_UndirectedEdgeId MR_UnionFind_MR_UndirectedEdgeId; // Defined in `#include <MRCMesh/MRUnionFind.h>`.
typedef struct MR_UnionFind_MR_VertId MR_UnionFind_MR_VertId; // Defined in `#include <MRCMesh/MRUnionFind.h>`.
typedef struct MR_Vector_double_MR_RegionId MR_Vector_double_MR_RegionId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_expected_MR_FaceBitSet_std_string MR_expected_MR_FaceBitSet_std_string; // Defined in `#include <MRCMisc/expected_MR_FaceBitSet_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_pair_MR_Face2RegionMap_int32_t MR_std_pair_MR_Face2RegionMap_int32_t; // Defined in `#include <MRCMisc/std_pair_MR_Face2RegionMap_int32_t.h>`.
typedef struct MR_std_pair_MR_FaceBitSet_int32_t MR_std_pair_MR_FaceBitSet_int32_t; // Defined in `#include <MRCMisc/std_pair_MR_FaceBitSet_int32_t.h>`.
typedef struct MR_std_pair_std_vector_MR_FaceBitSet_int32_t MR_std_pair_std_vector_MR_FaceBitSet_int32_t; // Defined in `#include <MRCMisc/std_pair_std_vector_MR_FaceBitSet_int32_t.h>`.
typedef struct MR_std_vector_MR_EdgeBitSet MR_std_vector_MR_EdgeBitSet; // Defined in `#include <MRCMisc/std_vector_MR_EdgeBitSet.h>`.
typedef struct MR_std_vector_MR_EdgePoint MR_std_vector_MR_EdgePoint; // Defined in `#include <MRCMisc/std_vector_MR_EdgePoint.h>`.
typedef struct MR_std_vector_MR_FaceBitSet MR_std_vector_MR_FaceBitSet; // Defined in `#include <MRCMisc/std_vector_MR_FaceBitSet.h>`.
typedef struct MR_std_vector_MR_UndirectedEdgeBitSet MR_std_vector_MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMisc/std_vector_MR_UndirectedEdgeBitSet.h>`.
typedef struct MR_std_vector_MR_VertBitSet MR_std_vector_MR_VertBitSet; // Defined in `#include <MRCMisc/std_vector_MR_VertBitSet.h>`.
typedef struct MR_std_vector_std_vector_MR_EdgePoint MR_std_vector_std_vector_MR_EdgePoint; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_EdgePoint.h>`.


/// Face incidence type
typedef enum MR_MeshComponents_FaceIncidence
{
    ///< face can have neighbor only via edge
    MR_MeshComponents_FaceIncidence_PerEdge = 0,
    ///< face can have neighbor via vertex
    MR_MeshComponents_FaceIncidence_PerVertex = 1,
} MR_MeshComponents_FaceIncidence;

/// Generated from class `MR::MeshComponents::ExpandToComponentsParams`.
typedef struct MR_MeshComponents_ExpandToComponentsParams MR_MeshComponents_ExpandToComponentsParams;

/// Generated from class `MR::MeshComponents::LargeByAreaComponentsSettings`.
typedef struct MR_MeshComponents_LargeByAreaComponentsSettings MR_MeshComponents_LargeByAreaComponentsSettings;

/// returns one connected component containing given face, 
/// not effective to call more than once, if several components are needed use getAllComponents
/// Generated from function `MR::MeshComponents::getComponent`.
/// Parameter `meshPart` can not be null. It is a single object.
/// Parameter `incidence` has a default argument: `FaceIncidence::PerEdge`, pass a null pointer to use it.
/// Parameter `isCompBd` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_MeshComponents_getComponent(const MR_MeshPart *meshPart, MR_FaceId id, const MR_MeshComponents_FaceIncidence *incidence, const MR_UndirectedEdgeBitSet *isCompBd);

/// returns one connected component containing given vertex, 
/// not effective to call more than once, if several components are needed use getAllComponentsVerts
/// Generated from function `MR::MeshComponents::getComponentVerts`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_MeshComponents_getComponentVerts(const MR_Mesh *mesh, MR_VertId id, const MR_VertBitSet *region);

/// returns the largest by number of elements component
/// Generated from function `MR::MeshComponents::getLargestComponentVerts`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_MeshComponents_getLargestComponentVerts(const MR_Mesh *mesh, const MR_VertBitSet *region);

/// returns the union of vertex connected components, each having at least \param minVerts vertices
/// Generated from function `MR::MeshComponents::getLargeComponentVerts`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_MeshComponents_getLargeComponentVerts(const MR_Mesh *mesh, int32_t minVerts, const MR_VertBitSet *region);

/// returns the largest by surface area component or empty set if its area is smaller than \param minArea
/// Generated from function `MR::MeshComponents::getLargestComponent`.
/// Parameter `meshPart` can not be null. It is a single object.
/// Parameter `incidence` has a default argument: `FaceIncidence::PerEdge`, pass a null pointer to use it.
/// Parameter `isCompBd` defaults to a null pointer in C++.
/// Parameter `minArea` has a default argument: `0`, pass a null pointer to use it.
/// Parameter `numSmallerComponents` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_MeshComponents_getLargestComponent(const MR_MeshPart *meshPart, const MR_MeshComponents_FaceIncidence *incidence, const MR_UndirectedEdgeBitSet *isCompBd, const float *minArea, int32_t *numSmallerComponents);

/// returns union of connected components, each of which contains at least one seed face
/// Generated from function `MR::MeshComponents::getComponents`.
/// Parameter `meshPart` can not be null. It is a single object.
/// Parameter `seeds` can not be null. It is a single object.
/// Parameter `incidence` has a default argument: `FaceIncidence::PerEdge`, pass a null pointer to use it.
/// Parameter `isCompBd` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_MeshComponents_getComponents(const MR_MeshPart *meshPart, const MR_FaceBitSet *seeds, const MR_MeshComponents_FaceIncidence *incidence, const MR_UndirectedEdgeBitSet *isCompBd);

/// returns the union of connected components, each having at least given area
/// Generated from function `MR::MeshComponents::getLargeByAreaComponents`.
/// Parameter `meshPart` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_MeshComponents_getLargeByAreaComponents_3(const MR_MeshPart *meshPart, float minArea, const MR_UndirectedEdgeBitSet *isCompBd);

/// given prepared union-find structure returns the union of connected components, each having at least given area
/// Generated from function `MR::MeshComponents::getLargeByAreaComponents`.
/// Parameter `meshPart` can not be null. It is a single object.
/// Parameter `unionFind` can not be null. It is a single object.
/// Parameter `outBdEdgesBetweenLargeComps` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_MeshComponents_getLargeByAreaComponents_4(const MR_MeshPart *meshPart, MR_UnionFind_MR_FaceId *unionFind, float minArea, MR_UndirectedEdgeBitSet *outBdEdgesBetweenLargeComps);

/// expands only if seeds cover at least this ratio of the component area
/// <=0 - expands all seeds
/// > 1 - none
/// Returns a pointer to a member variable of class `MR::MeshComponents::ExpandToComponentsParams` named `coverRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MeshComponents_ExpandToComponentsParams_Get_coverRatio(const MR_MeshComponents_ExpandToComponentsParams *_this);

/// expands only if seeds cover at least this ratio of the component area
/// <=0 - expands all seeds
/// > 1 - none
/// Modifies a member variable of class `MR::MeshComponents::ExpandToComponentsParams` named `coverRatio`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshComponents_ExpandToComponentsParams_Set_coverRatio(MR_MeshComponents_ExpandToComponentsParams *_this, float value);

/// expands only if seeds cover at least this ratio of the component area
/// <=0 - expands all seeds
/// > 1 - none
/// Returns a mutable pointer to a member variable of class `MR::MeshComponents::ExpandToComponentsParams` named `coverRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MeshComponents_ExpandToComponentsParams_GetMutable_coverRatio(MR_MeshComponents_ExpandToComponentsParams *_this);

/// Returns a pointer to a member variable of class `MR::MeshComponents::ExpandToComponentsParams` named `incidence`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshComponents_FaceIncidence *MR_MeshComponents_ExpandToComponentsParams_Get_incidence(const MR_MeshComponents_ExpandToComponentsParams *_this);

/// Modifies a member variable of class `MR::MeshComponents::ExpandToComponentsParams` named `incidence`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshComponents_ExpandToComponentsParams_Set_incidence(MR_MeshComponents_ExpandToComponentsParams *_this, MR_MeshComponents_FaceIncidence value);

/// Returns a mutable pointer to a member variable of class `MR::MeshComponents::ExpandToComponentsParams` named `incidence`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshComponents_FaceIncidence *MR_MeshComponents_ExpandToComponentsParams_GetMutable_incidence(MR_MeshComponents_ExpandToComponentsParams *_this);

/// optional predicate of boundaries between components
/// Returns a pointer to a member variable of class `MR::MeshComponents::ExpandToComponentsParams` named `isCompBd`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeBitSet *const *MR_MeshComponents_ExpandToComponentsParams_Get_isCompBd(const MR_MeshComponents_ExpandToComponentsParams *_this);

/// optional predicate of boundaries between components
/// Modifies a member variable of class `MR::MeshComponents::ExpandToComponentsParams` named `isCompBd`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshComponents_ExpandToComponentsParams_Set_isCompBd(MR_MeshComponents_ExpandToComponentsParams *_this, const MR_UndirectedEdgeBitSet *value);

/// optional predicate of boundaries between components
/// Returns a mutable pointer to a member variable of class `MR::MeshComponents::ExpandToComponentsParams` named `isCompBd`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeBitSet **MR_MeshComponents_ExpandToComponentsParams_GetMutable_isCompBd(MR_MeshComponents_ExpandToComponentsParams *_this);

/// optional output number of components
/// Returns a pointer to a member variable of class `MR::MeshComponents::ExpandToComponentsParams` named `optOutNumComponents`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *const *MR_MeshComponents_ExpandToComponentsParams_Get_optOutNumComponents(const MR_MeshComponents_ExpandToComponentsParams *_this);

/// optional output number of components
/// Modifies a member variable of class `MR::MeshComponents::ExpandToComponentsParams` named `optOutNumComponents`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshComponents_ExpandToComponentsParams_Set_optOutNumComponents(MR_MeshComponents_ExpandToComponentsParams *_this, int32_t *value);

/// optional output number of components
/// Returns a mutable pointer to a member variable of class `MR::MeshComponents::ExpandToComponentsParams` named `optOutNumComponents`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t **MR_MeshComponents_ExpandToComponentsParams_GetMutable_optOutNumComponents(MR_MeshComponents_ExpandToComponentsParams *_this);

/// Returns a pointer to a member variable of class `MR::MeshComponents::ExpandToComponentsParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_MeshComponents_ExpandToComponentsParams_Get_cb(const MR_MeshComponents_ExpandToComponentsParams *_this);

/// Modifies a member variable of class `MR::MeshComponents::ExpandToComponentsParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshComponents_ExpandToComponentsParams_Set_cb(MR_MeshComponents_ExpandToComponentsParams *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshComponents::ExpandToComponentsParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_MeshComponents_ExpandToComponentsParams_GetMutable_cb(MR_MeshComponents_ExpandToComponentsParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshComponents_ExpandToComponentsParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshComponents_ExpandToComponentsParams *MR_MeshComponents_ExpandToComponentsParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshComponents_ExpandToComponentsParams_DestroyArray()`.
/// Use `MR_MeshComponents_ExpandToComponentsParams_OffsetMutablePtr()` and `MR_MeshComponents_ExpandToComponentsParams_OffsetPtr()` to access the array elements.
MRC_API MR_MeshComponents_ExpandToComponentsParams *MR_MeshComponents_ExpandToComponentsParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshComponents::ExpandToComponentsParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshComponents_ExpandToComponentsParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshComponents_ExpandToComponentsParams *MR_MeshComponents_ExpandToComponentsParams_ConstructFrom(float coverRatio, MR_MeshComponents_FaceIncidence incidence, const MR_UndirectedEdgeBitSet *isCompBd, int32_t *optOutNumComponents, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshComponents_ExpandToComponentsParams *MR_MeshComponents_ExpandToComponentsParams_OffsetPtr(const MR_MeshComponents_ExpandToComponentsParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshComponents_ExpandToComponentsParams *MR_MeshComponents_ExpandToComponentsParams_OffsetMutablePtr(MR_MeshComponents_ExpandToComponentsParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshComponents::ExpandToComponentsParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshComponents_ExpandToComponentsParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshComponents_ExpandToComponentsParams *MR_MeshComponents_ExpandToComponentsParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MeshComponents_ExpandToComponentsParams *_other);

/// Destroys a heap-allocated instance of `MR_MeshComponents_ExpandToComponentsParams`. Does nothing if the pointer is null.
MRC_API void MR_MeshComponents_ExpandToComponentsParams_Destroy(const MR_MeshComponents_ExpandToComponentsParams *_this);

/// Destroys a heap-allocated array of `MR_MeshComponents_ExpandToComponentsParams`. Does nothing if the pointer is null.
MRC_API void MR_MeshComponents_ExpandToComponentsParams_DestroyArray(const MR_MeshComponents_ExpandToComponentsParams *_this);

/// Generated from a method of class `MR::MeshComponents::ExpandToComponentsParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshComponents_ExpandToComponentsParams *MR_MeshComponents_ExpandToComponentsParams_AssignFromAnother(MR_MeshComponents_ExpandToComponentsParams *_this, MR_PassBy _other_pass_by, MR_MeshComponents_ExpandToComponentsParams *_other);

/// expands given seeds to whole components
/// Generated from function `MR::MeshComponents::expandToComponents`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `seeds` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_FaceBitSet_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_FaceBitSet_std_string *MR_MeshComponents_expandToComponents(const MR_MeshPart *mp, const MR_FaceBitSet *seeds, const MR_MeshComponents_ExpandToComponentsParams *params);

/// return at most given number of largest by area connected components
/// Returns a pointer to a member variable of class `MR::MeshComponents::LargeByAreaComponentsSettings` named `maxLargeComponents`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_MeshComponents_LargeByAreaComponentsSettings_Get_maxLargeComponents(const MR_MeshComponents_LargeByAreaComponentsSettings *_this);

/// return at most given number of largest by area connected components
/// Modifies a member variable of class `MR::MeshComponents::LargeByAreaComponentsSettings` named `maxLargeComponents`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshComponents_LargeByAreaComponentsSettings_Set_maxLargeComponents(MR_MeshComponents_LargeByAreaComponentsSettings *_this, int32_t value);

/// return at most given number of largest by area connected components
/// Returns a mutable pointer to a member variable of class `MR::MeshComponents::LargeByAreaComponentsSettings` named `maxLargeComponents`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_MeshComponents_LargeByAreaComponentsSettings_GetMutable_maxLargeComponents(MR_MeshComponents_LargeByAreaComponentsSettings *_this);

/// optional output: the number of components in addition to returned ones
/// Returns a pointer to a member variable of class `MR::MeshComponents::LargeByAreaComponentsSettings` named `numSmallerComponents`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *const *MR_MeshComponents_LargeByAreaComponentsSettings_Get_numSmallerComponents(const MR_MeshComponents_LargeByAreaComponentsSettings *_this);

/// optional output: the number of components in addition to returned ones
/// Modifies a member variable of class `MR::MeshComponents::LargeByAreaComponentsSettings` named `numSmallerComponents`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshComponents_LargeByAreaComponentsSettings_Set_numSmallerComponents(MR_MeshComponents_LargeByAreaComponentsSettings *_this, int32_t *value);

/// optional output: the number of components in addition to returned ones
/// Returns a mutable pointer to a member variable of class `MR::MeshComponents::LargeByAreaComponentsSettings` named `numSmallerComponents`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t **MR_MeshComponents_LargeByAreaComponentsSettings_GetMutable_numSmallerComponents(MR_MeshComponents_LargeByAreaComponentsSettings *_this);

/// do not consider a component large if its area is below this value
/// Returns a pointer to a member variable of class `MR::MeshComponents::LargeByAreaComponentsSettings` named `minArea`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MeshComponents_LargeByAreaComponentsSettings_Get_minArea(const MR_MeshComponents_LargeByAreaComponentsSettings *_this);

/// do not consider a component large if its area is below this value
/// Modifies a member variable of class `MR::MeshComponents::LargeByAreaComponentsSettings` named `minArea`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshComponents_LargeByAreaComponentsSettings_Set_minArea(MR_MeshComponents_LargeByAreaComponentsSettings *_this, float value);

/// do not consider a component large if its area is below this value
/// Returns a mutable pointer to a member variable of class `MR::MeshComponents::LargeByAreaComponentsSettings` named `minArea`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MeshComponents_LargeByAreaComponentsSettings_GetMutable_minArea(MR_MeshComponents_LargeByAreaComponentsSettings *_this);

/// optional predicate of boundaries between components
/// Returns a pointer to a member variable of class `MR::MeshComponents::LargeByAreaComponentsSettings` named `isCompBd`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeBitSet *const *MR_MeshComponents_LargeByAreaComponentsSettings_Get_isCompBd(const MR_MeshComponents_LargeByAreaComponentsSettings *_this);

/// optional predicate of boundaries between components
/// Modifies a member variable of class `MR::MeshComponents::LargeByAreaComponentsSettings` named `isCompBd`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshComponents_LargeByAreaComponentsSettings_Set_isCompBd(MR_MeshComponents_LargeByAreaComponentsSettings *_this, const MR_UndirectedEdgeBitSet *value);

/// optional predicate of boundaries between components
/// Returns a mutable pointer to a member variable of class `MR::MeshComponents::LargeByAreaComponentsSettings` named `isCompBd`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeBitSet **MR_MeshComponents_LargeByAreaComponentsSettings_GetMutable_isCompBd(MR_MeshComponents_LargeByAreaComponentsSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshComponents_LargeByAreaComponentsSettings_Destroy()` to free it when you're done using it.
MRC_API MR_MeshComponents_LargeByAreaComponentsSettings *MR_MeshComponents_LargeByAreaComponentsSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshComponents_LargeByAreaComponentsSettings_DestroyArray()`.
/// Use `MR_MeshComponents_LargeByAreaComponentsSettings_OffsetMutablePtr()` and `MR_MeshComponents_LargeByAreaComponentsSettings_OffsetPtr()` to access the array elements.
MRC_API MR_MeshComponents_LargeByAreaComponentsSettings *MR_MeshComponents_LargeByAreaComponentsSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshComponents::LargeByAreaComponentsSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshComponents_LargeByAreaComponentsSettings_Destroy()` to free it when you're done using it.
MRC_API MR_MeshComponents_LargeByAreaComponentsSettings *MR_MeshComponents_LargeByAreaComponentsSettings_ConstructFrom(int32_t maxLargeComponents, int32_t *numSmallerComponents, float minArea, const MR_UndirectedEdgeBitSet *isCompBd);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshComponents_LargeByAreaComponentsSettings *MR_MeshComponents_LargeByAreaComponentsSettings_OffsetPtr(const MR_MeshComponents_LargeByAreaComponentsSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshComponents_LargeByAreaComponentsSettings *MR_MeshComponents_LargeByAreaComponentsSettings_OffsetMutablePtr(MR_MeshComponents_LargeByAreaComponentsSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshComponents::LargeByAreaComponentsSettings`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshComponents_LargeByAreaComponentsSettings_Destroy()` to free it when you're done using it.
MRC_API MR_MeshComponents_LargeByAreaComponentsSettings *MR_MeshComponents_LargeByAreaComponentsSettings_ConstructFromAnother(const MR_MeshComponents_LargeByAreaComponentsSettings *_other);

/// Destroys a heap-allocated instance of `MR_MeshComponents_LargeByAreaComponentsSettings`. Does nothing if the pointer is null.
MRC_API void MR_MeshComponents_LargeByAreaComponentsSettings_Destroy(const MR_MeshComponents_LargeByAreaComponentsSettings *_this);

/// Destroys a heap-allocated array of `MR_MeshComponents_LargeByAreaComponentsSettings`. Does nothing if the pointer is null.
MRC_API void MR_MeshComponents_LargeByAreaComponentsSettings_DestroyArray(const MR_MeshComponents_LargeByAreaComponentsSettings *_this);

/// Generated from a method of class `MR::MeshComponents::LargeByAreaComponentsSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshComponents_LargeByAreaComponentsSettings *MR_MeshComponents_LargeByAreaComponentsSettings_AssignFromAnother(MR_MeshComponents_LargeByAreaComponentsSettings *_this, const MR_MeshComponents_LargeByAreaComponentsSettings *_other);

/// returns requested number of largest by area connected components in descending by area order
/// Generated from function `MR::MeshComponents::getNLargeByAreaComponents`.
/// Parameter `meshPart` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_FaceBitSet *MR_MeshComponents_getNLargeByAreaComponents(const MR_MeshPart *meshPart, const MR_MeshComponents_LargeByAreaComponentsSettings *settings);

/// returns the union of connected components, each having at least given area,
/// and any two faces in a connected component have a path along the surface across the edges, where surface does not deviate from plane more than on given angle
/// Generated from function `MR::MeshComponents::getLargeByAreaSmoothComponents`.
/// Parameter `meshPart` can not be null. It is a single object.
/// Parameter `outBdEdgesBetweenLargeComps` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_MeshComponents_getLargeByAreaSmoothComponents(const MR_MeshPart *meshPart, float minArea, float angleFromPlanar, MR_UndirectedEdgeBitSet *outBdEdgesBetweenLargeComps);

/// returns union of connected components, each of which contains at least one seed vert
/// Generated from function `MR::MeshComponents::getComponentsVerts`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `seeds` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_MeshComponents_getComponentsVerts(const MR_Mesh *mesh, const MR_VertBitSet *seeds, const MR_VertBitSet *region);

/// returns the number of connected components in mesh part
/// Generated from function `MR::MeshComponents::getNumComponents`.
/// Parameter `meshPart` can not be null. It is a single object.
/// Parameter `incidence` has a default argument: `FaceIncidence::PerEdge`, pass a null pointer to use it.
/// Parameter `isCompBd` defaults to a null pointer in C++.
MRC_API MR_uint64_t MR_MeshComponents_getNumComponents(const MR_MeshPart *meshPart, const MR_MeshComponents_FaceIncidence *incidence, const MR_UndirectedEdgeBitSet *isCompBd);

/// gets all connected components of mesh part
/// \note be careful, if mesh is large enough and has many components, the memory overflow will occur
/// Generated from function `MR::MeshComponents::getAllComponents`.
/// Parameter `meshPart` can not be null. It is a single object.
/// Parameter `incidence` has a default argument: `FaceIncidence::PerEdge`, pass a null pointer to use it.
/// Parameter `isCompBd` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_FaceBitSet *MR_MeshComponents_getAllComponents_3(const MR_MeshPart *meshPart, const MR_MeshComponents_FaceIncidence *incidence, const MR_UndirectedEdgeBitSet *isCompBd);

/// gets all connected components of mesh part
/// \detail if components  number more than the maxComponentCount, they will be combined into groups of the same size
/// \param maxComponentCount should be more then 1
/// \return pair components bitsets vector and number components in one group if components number more than maxComponentCount
/// Generated from function `MR::MeshComponents::getAllComponents`.
/// Parameter `meshPart` can not be null. It is a single object.
/// Parameter `incidence` has a default argument: `FaceIncidence::PerEdge`, pass a null pointer to use it.
/// Parameter `isCompBd` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_std_vector_MR_FaceBitSet_int32_t_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_std_vector_MR_FaceBitSet_int32_t *MR_MeshComponents_getAllComponents_4_MR_MeshPart(const MR_MeshPart *meshPart, int32_t maxComponentCount, const MR_MeshComponents_FaceIncidence *incidence, const MR_UndirectedEdgeBitSet *isCompBd);

/// gets all connected components from components map ( FaceId => RegionId )
/// \detail if components  number more than the maxComponentCount, they will be combined into groups of the same size (this similarly changes componentsMap)
/// \param maxComponentCount should be more then 1
/// \return components bitsets vector
/// Generated from function `MR::MeshComponents::getAllComponents`.
/// Parameter `componentsMap` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_FaceBitSet *MR_MeshComponents_getAllComponents_4_MR_Face2RegionMap(MR_Face2RegionMap *componentsMap, int32_t componentsCount, const MR_FaceBitSet *region, int32_t maxComponentCount);

/// gets all connected components of mesh part as
/// 1. the mapping: FaceId -> Component ID in [0, 1, 2, ...)
/// 2. the total number of components
/// Generated from function `MR::MeshComponents::getAllComponentsMap`.
/// Parameter `meshPart` can not be null. It is a single object.
/// Parameter `incidence` has a default argument: `FaceIncidence::PerEdge`, pass a null pointer to use it.
/// Parameter `isCompBd` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_MR_Face2RegionMap_int32_t_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_MR_Face2RegionMap_int32_t *MR_MeshComponents_getAllComponentsMap(const MR_MeshPart *meshPart, const MR_MeshComponents_FaceIncidence *incidence, const MR_UndirectedEdgeBitSet *isCompBd);

/// computes the area of each region given via the map
/// Generated from function `MR::MeshComponents::getRegionAreas`.
/// Parameter `meshPart` can not be null. It is a single object.
/// Parameter `regionMap` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Vector_double_MR_RegionId_Destroy()` to free it when you're done using it.
MRC_API MR_Vector_double_MR_RegionId *MR_MeshComponents_getRegionAreas(const MR_MeshPart *meshPart, const MR_Face2RegionMap *regionMap, int32_t numRegions);

/// returns
/// 1. the union of all regions with area >= minArea
/// 2. the number of such regions
/// Generated from function `MR::MeshComponents::getLargeByAreaRegions`.
/// Parameter `meshPart` can not be null. It is a single object.
/// Parameter `regionMap` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_MR_FaceBitSet_int32_t_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_MR_FaceBitSet_int32_t *MR_MeshComponents_getLargeByAreaRegions(const MR_MeshPart *meshPart, const MR_Face2RegionMap *regionMap, int32_t numRegions, float minArea);

/// gets all connected components of mesh part
/// Generated from function `MR::MeshComponents::getAllComponentsVerts`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_VertBitSet *MR_MeshComponents_getAllComponentsVerts(const MR_Mesh *mesh, const MR_VertBitSet *region);

/// gets all connected components, separating vertices by given path (either closed or from boundary to boundary)
/// Generated from function `MR::MeshComponents::getAllComponentsVertsSeparatedByPath`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `path` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_VertBitSet *MR_MeshComponents_getAllComponentsVertsSeparatedByPath(const MR_Mesh *mesh, const MR_std_vector_MR_EdgePoint *path);

/// gets all connected components, separating vertices by given paths (either closed or from boundary to boundary)
/// Generated from function `MR::MeshComponents::getAllComponentsVertsSeparatedByPaths`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `paths` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_VertBitSet *MR_MeshComponents_getAllComponentsVertsSeparatedByPaths(const MR_Mesh *mesh, const MR_std_vector_std_vector_MR_EdgePoint *paths);

/// subdivides given edges on connected components
/// Generated from function `MR::MeshComponents::getAllComponentsEdges`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `edges` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeBitSet *MR_MeshComponents_getAllComponentsEdges(const MR_Mesh *mesh, const MR_EdgeBitSet *edges);

/// subdivides given edges on connected components
/// Generated from function `MR::MeshComponents::getAllComponentsUndirectedEdges`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `edges` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_UndirectedEdgeBitSet *MR_MeshComponents_getAllComponentsUndirectedEdges(const MR_Mesh *mesh, const MR_UndirectedEdgeBitSet *edges);

/// returns true if all vertices of a mesh connected component are present in selection
/// Generated from function `MR::MeshComponents::hasFullySelectedComponent`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `selection` can not be null. It is a single object.
MRC_API bool MR_MeshComponents_hasFullySelectedComponent_MR_Mesh(const MR_Mesh *mesh, const MR_VertBitSet *selection);

/// Generated from function `MR::MeshComponents::hasFullySelectedComponent`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `selection` can not be null. It is a single object.
MRC_API bool MR_MeshComponents_hasFullySelectedComponent_MR_MeshTopology(const MR_MeshTopology *topology, const MR_VertBitSet *selection);

/// if all vertices of a mesh connected component are present in selection, excludes these vertices
/// Generated from function `MR::MeshComponents::excludeFullySelectedComponents`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `selection` can not be null. It is a single object.
MRC_API void MR_MeshComponents_excludeFullySelectedComponents(const MR_Mesh *mesh, MR_VertBitSet *selection);

/// gets union-find structure for faces with different options of face-connectivity
/// Generated from function `MR::MeshComponents::getUnionFindStructureFaces`.
/// Parameter `meshPart` can not be null. It is a single object.
/// Parameter `incidence` has a default argument: `FaceIncidence::PerEdge`, pass a null pointer to use it.
/// Parameter `isCompBd` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UnionFind_MR_FaceId_Destroy()` to free it when you're done using it.
MRC_API MR_UnionFind_MR_FaceId *MR_MeshComponents_getUnionFindStructureFaces(const MR_MeshPart *meshPart, const MR_MeshComponents_FaceIncidence *incidence, const MR_UndirectedEdgeBitSet *isCompBd);

/// gets union-find structure for faces with connectivity by shared edge, and optional edge predicate whether to skip uniting components over it
/// it is guaranteed that isCompBd is invoked in a thread-safe manner (that left and right face are always processed by one thread)
/// Generated from function `MR::MeshComponents::getUnionFindStructureFacesPerEdge`.
/// Parameter `meshPart` can not be null. It is a single object.
/// Parameter `isCompBd` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UnionFind_MR_FaceId_Destroy()` to free it when you're done using it.
MRC_API MR_UnionFind_MR_FaceId *MR_MeshComponents_getUnionFindStructureFacesPerEdge(const MR_MeshPart *meshPart, const MR_UndirectedEdgeBitSet *isCompBd);

/// gets union-find structure for vertices
/// Generated from function `MR::MeshComponents::getUnionFindStructureVerts`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UnionFind_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_UnionFind_MR_VertId *MR_MeshComponents_getUnionFindStructureVerts_const_MR_Mesh_ref_const_MR_VertBitSet_ptr(const MR_Mesh *mesh, const MR_VertBitSet *region);

/// Generated from function `MR::MeshComponents::getUnionFindStructureVerts`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UnionFind_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_UnionFind_MR_VertId *MR_MeshComponents_getUnionFindStructureVerts_const_MR_MeshTopology_ref(const MR_MeshTopology *topology, const MR_VertBitSet *region);

/// gets union-find structure for vertices, considering connections by given edges only
/// Generated from function `MR::MeshComponents::getUnionFindStructureVerts`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `edges` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UnionFind_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_UnionFind_MR_VertId *MR_MeshComponents_getUnionFindStructureVerts_const_MR_Mesh_ref_MR_EdgeBitSet(const MR_Mesh *mesh, const MR_EdgeBitSet *edges);

/// gets union-find structure for vertices, considering connections by given undirected edges only
/// Generated from function `MR::MeshComponents::getUnionFindStructureVerts`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `edges` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UnionFind_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_UnionFind_MR_VertId *MR_MeshComponents_getUnionFindStructureVerts_const_MR_Mesh_ref_MR_UndirectedEdgeBitSet(const MR_Mesh *mesh, const MR_UndirectedEdgeBitSet *edges);

/// gets union-find structure for vertices, considering connections by all edges excluding given ones
/// Generated from function `MR::MeshComponents::getUnionFindStructureVertsEx`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `ignoreEdges` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UnionFind_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_UnionFind_MR_VertId *MR_MeshComponents_getUnionFindStructureVertsEx(const MR_Mesh *mesh, const MR_UndirectedEdgeBitSet *ignoreEdges);

/**
* \brief gets union-find structure for vertices, separating vertices by given path (either closed or from boundary to boundary)
* \param outPathVerts this set receives all vertices passed by the path
*/
/// Generated from function `MR::MeshComponents::getUnionFindStructureVertsSeparatedByPath`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `path` can not be null. It is a single object.
/// Parameter `outPathVerts` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UnionFind_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_UnionFind_MR_VertId *MR_MeshComponents_getUnionFindStructureVertsSeparatedByPath(const MR_Mesh *mesh, const MR_std_vector_MR_EdgePoint *path, MR_VertBitSet *outPathVerts);

/// Generated from function `MR::MeshComponents::getUnionFindStructureVertsSeparatedByPaths`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `paths` can not be null. It is a single object.
/// Parameter `outPathVerts` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UnionFind_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_UnionFind_MR_VertId *MR_MeshComponents_getUnionFindStructureVertsSeparatedByPaths(const MR_Mesh *mesh, const MR_std_vector_std_vector_MR_EdgePoint *paths, MR_VertBitSet *outPathVerts);

/// gets union-find structure for all undirected edges in \param mesh
/// \param allPointToRoots if true, then every element in the structure will point directly to the root of its respective component
/// Generated from function `MR::MeshComponents::getUnionFindStructureUndirectedEdges`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `allPointToRoots` has a default argument: `false`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UnionFind_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_UnionFind_MR_UndirectedEdgeId *MR_MeshComponents_getUnionFindStructureUndirectedEdges(const MR_Mesh *mesh, const bool *allPointToRoots);

/// returns union of connected components, each of which contains at least one seed edge
/// Generated from function `MR::MeshComponents::getComponentsUndirectedEdges`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `seeds` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_MeshComponents_getComponentsUndirectedEdges(const MR_Mesh *mesh, const MR_UndirectedEdgeBitSet *seeds);

#ifdef __cplusplus
} // extern "C"
#endif
