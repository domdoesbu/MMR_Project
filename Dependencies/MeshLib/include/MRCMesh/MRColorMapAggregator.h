// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Color MR_Color; // Defined in `#include <MRCMesh/MRColor.h>`.
typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_FaceColors MR_FaceColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_UndirectedEdgeColors MR_UndirectedEdgeColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertColors MR_VertColors; // Defined in `#include <MRCMesh/MRVector.h>`.


/**
* @brief Class for aggregate several color map in one
* Color maps are aggregated according order
*/
/// Generated from class `MR::VertColorMapAggregator`.
typedef struct MR_VertColorMapAggregator MR_VertColorMapAggregator;

/// partial color map
/// Generated from class `MR::ColorMapAggregator<MR::VertTag>::PartialColorMap`.
typedef struct MR_ColorMapAggregator_MR_VertTag_PartialColorMap MR_ColorMapAggregator_MR_VertTag_PartialColorMap;

/// color map aggregating mode
typedef int32_t MR_ColorMapAggregator_MR_VertTag_AggregateMode;
enum // MR_ColorMapAggregator_MR_VertTag_AggregateMode
{
    MR_ColorMapAggregator_MR_VertTag_AggregateMode_Overlay = 0,
    /// result element color is element color of more priority color map (or default color, if there isn't color map for this element)
    MR_ColorMapAggregator_MR_VertTag_AggregateMode_Blending = 1,
};

/**
* @brief Class for aggregate several color map in one
* Color maps are aggregated according order
*/
/// Generated from class `MR::UndirEdgeColorMapAggregator`.
typedef struct MR_UndirEdgeColorMapAggregator MR_UndirEdgeColorMapAggregator;

/// partial color map
/// Generated from class `MR::ColorMapAggregator<MR::UndirectedEdgeTag>::PartialColorMap`.
typedef struct MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap;

/// color map aggregating mode
typedef int32_t MR_ColorMapAggregator_MR_UndirectedEdgeTag_AggregateMode;
enum // MR_ColorMapAggregator_MR_UndirectedEdgeTag_AggregateMode
{
    MR_ColorMapAggregator_MR_UndirectedEdgeTag_AggregateMode_Overlay = 0,
    /// result element color is element color of more priority color map (or default color, if there isn't color map for this element)
    MR_ColorMapAggregator_MR_UndirectedEdgeTag_AggregateMode_Blending = 1,
};

/**
* @brief Class for aggregate several color map in one
* Color maps are aggregated according order
*/
/// Generated from class `MR::FaceColorMapAggregator`.
typedef struct MR_FaceColorMapAggregator MR_FaceColorMapAggregator;

/// partial color map
/// Generated from class `MR::ColorMapAggregator<MR::FaceTag>::PartialColorMap`.
typedef struct MR_ColorMapAggregator_MR_FaceTag_PartialColorMap MR_ColorMapAggregator_MR_FaceTag_PartialColorMap;

/// color map aggregating mode
typedef int32_t MR_ColorMapAggregator_MR_FaceTag_AggregateMode;
enum // MR_ColorMapAggregator_MR_FaceTag_AggregateMode
{
    MR_ColorMapAggregator_MR_FaceTag_AggregateMode_Overlay = 0,
    /// result element color is element color of more priority color map (or default color, if there isn't color map for this element)
    MR_ColorMapAggregator_MR_FaceTag_AggregateMode_Blending = 1,
};

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertColorMapAggregator_Destroy()` to free it when you're done using it.
MRC_API MR_VertColorMapAggregator *MR_VertColorMapAggregator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VertColorMapAggregator_DestroyArray()`.
/// Use `MR_VertColorMapAggregator_OffsetMutablePtr()` and `MR_VertColorMapAggregator_OffsetPtr()` to access the array elements.
MRC_API MR_VertColorMapAggregator *MR_VertColorMapAggregator_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VertColorMapAggregator *MR_VertColorMapAggregator_OffsetPtr(const MR_VertColorMapAggregator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VertColorMapAggregator *MR_VertColorMapAggregator_OffsetMutablePtr(MR_VertColorMapAggregator *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VertColorMapAggregator`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertColorMapAggregator_Destroy()` to free it when you're done using it.
MRC_API MR_VertColorMapAggregator *MR_VertColorMapAggregator_ConstructFromAnother(MR_PassBy _other_pass_by, MR_VertColorMapAggregator *_other);

/// Destroys a heap-allocated instance of `MR_VertColorMapAggregator`. Does nothing if the pointer is null.
MRC_API void MR_VertColorMapAggregator_Destroy(const MR_VertColorMapAggregator *_this);

/// Destroys a heap-allocated array of `MR_VertColorMapAggregator`. Does nothing if the pointer is null.
MRC_API void MR_VertColorMapAggregator_DestroyArray(const MR_VertColorMapAggregator *_this);

/// Generated from a method of class `MR::VertColorMapAggregator` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertColorMapAggregator *MR_VertColorMapAggregator_AssignFromAnother(MR_VertColorMapAggregator *_this, MR_PassBy _other_pass_by, MR_VertColorMapAggregator *_other);

/// set default (background) color
/// Generated from a method of class `MR::VertColorMapAggregator` named `setDefaultColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `color` can not be null. It is a single object.
MRC_API void MR_VertColorMapAggregator_setDefaultColor(MR_VertColorMapAggregator *_this, const MR_Color *color);

/// add color map after all (more priority)
/// Generated from a method of class `MR::VertColorMapAggregator` named `pushBack`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `partitialColorMap` can not be null. It is a single object.
MRC_API void MR_VertColorMapAggregator_pushBack(MR_VertColorMapAggregator *_this, const MR_ColorMapAggregator_MR_VertTag_PartialColorMap *partitialColorMap);

/// insert color map before element #i (0 - minimum priority)
/// Generated from a method of class `MR::VertColorMapAggregator` named `insert`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `partitialColorMap` can not be null. It is a single object.
MRC_API void MR_VertColorMapAggregator_insert(MR_VertColorMapAggregator *_this, int32_t i, const MR_ColorMapAggregator_MR_VertTag_PartialColorMap *partitialColorMap);

/// replace color map in #i position
/// Generated from a method of class `MR::VertColorMapAggregator` named `replace`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `partitialColorMap` can not be null. It is a single object.
MRC_API void MR_VertColorMapAggregator_replace(MR_VertColorMapAggregator *_this, int32_t i, const MR_ColorMapAggregator_MR_VertTag_PartialColorMap *partitialColorMap);

/// reset all accumulated color map
/// Generated from a method of class `MR::VertColorMapAggregator` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VertColorMapAggregator_reset(MR_VertColorMapAggregator *_this);

/// get number of accumulated color maps
/// Generated from a method of class `MR::VertColorMapAggregator` named `getColorMapNumber`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_VertColorMapAggregator_getColorMapNumber(MR_VertColorMapAggregator *_this);

/// get partial color map map by index
/// Generated from a method of class `MR::VertColorMapAggregator` named `getPartialColorMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ColorMapAggregator_MR_VertTag_PartialColorMap *MR_VertColorMapAggregator_getPartialColorMap(MR_VertColorMapAggregator *_this, int32_t i);

/// erase n color map from #i 
/// Generated from a method of class `MR::VertColorMapAggregator` named `erase`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `n` has a default argument: `1`, pass a null pointer to use it.
MRC_API void MR_VertColorMapAggregator_erase(MR_VertColorMapAggregator *_this, int32_t i, const int32_t *n);

/// set color map aggregating mode
/// Generated from a method of class `MR::VertColorMapAggregator` named `setMode`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VertColorMapAggregator_setMode(MR_VertColorMapAggregator *_this, MR_ColorMapAggregator_MR_VertTag_AggregateMode mode);

/// get aggregated color map for active elements
/// Generated from a method of class `MR::VertColorMapAggregator` named `aggregate`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `elementBitSet` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertColors_Destroy()` to free it when you're done using it.
MRC_API MR_VertColors *MR_VertColorMapAggregator_aggregate(MR_VertColorMapAggregator *_this, const MR_VertBitSet *elementBitSet);

// color map
/// Returns a pointer to a member variable of class `MR::ColorMapAggregator<MR::VertTag>::PartialColorMap` named `colorMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertColors *MR_ColorMapAggregator_MR_VertTag_PartialColorMap_Get_colorMap(const MR_ColorMapAggregator_MR_VertTag_PartialColorMap *_this);

// color map
/// Modifies a member variable of class `MR::ColorMapAggregator<MR::VertTag>::PartialColorMap` named `colorMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ColorMapAggregator_MR_VertTag_PartialColorMap_Set_colorMap(MR_ColorMapAggregator_MR_VertTag_PartialColorMap *_this, MR_PassBy value_pass_by, MR_VertColors *value);

// color map
/// Returns a mutable pointer to a member variable of class `MR::ColorMapAggregator<MR::VertTag>::PartialColorMap` named `colorMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertColors *MR_ColorMapAggregator_MR_VertTag_PartialColorMap_GetMutable_colorMap(MR_ColorMapAggregator_MR_VertTag_PartialColorMap *_this);

// bitset of elements for which the color map is applied
/// Returns a pointer to a member variable of class `MR::ColorMapAggregator<MR::VertTag>::PartialColorMap` named `elements`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *MR_ColorMapAggregator_MR_VertTag_PartialColorMap_Get_elements(const MR_ColorMapAggregator_MR_VertTag_PartialColorMap *_this);

// bitset of elements for which the color map is applied
/// Modifies a member variable of class `MR::ColorMapAggregator<MR::VertTag>::PartialColorMap` named `elements`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ColorMapAggregator_MR_VertTag_PartialColorMap_Set_elements(MR_ColorMapAggregator_MR_VertTag_PartialColorMap *_this, MR_PassBy value_pass_by, MR_VertBitSet *value);

// bitset of elements for which the color map is applied
/// Returns a mutable pointer to a member variable of class `MR::ColorMapAggregator<MR::VertTag>::PartialColorMap` named `elements`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *MR_ColorMapAggregator_MR_VertTag_PartialColorMap_GetMutable_elements(MR_ColorMapAggregator_MR_VertTag_PartialColorMap *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ColorMapAggregator_MR_VertTag_PartialColorMap_Destroy()` to free it when you're done using it.
MRC_API MR_ColorMapAggregator_MR_VertTag_PartialColorMap *MR_ColorMapAggregator_MR_VertTag_PartialColorMap_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ColorMapAggregator_MR_VertTag_PartialColorMap_DestroyArray()`.
/// Use `MR_ColorMapAggregator_MR_VertTag_PartialColorMap_OffsetMutablePtr()` and `MR_ColorMapAggregator_MR_VertTag_PartialColorMap_OffsetPtr()` to access the array elements.
MRC_API MR_ColorMapAggregator_MR_VertTag_PartialColorMap *MR_ColorMapAggregator_MR_VertTag_PartialColorMap_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::ColorMapAggregator<MR::VertTag>::PartialColorMap` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ColorMapAggregator_MR_VertTag_PartialColorMap_Destroy()` to free it when you're done using it.
MRC_API MR_ColorMapAggregator_MR_VertTag_PartialColorMap *MR_ColorMapAggregator_MR_VertTag_PartialColorMap_ConstructFrom(MR_PassBy colorMap_pass_by, MR_VertColors *colorMap, MR_PassBy elements_pass_by, MR_VertBitSet *elements);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ColorMapAggregator_MR_VertTag_PartialColorMap *MR_ColorMapAggregator_MR_VertTag_PartialColorMap_OffsetPtr(const MR_ColorMapAggregator_MR_VertTag_PartialColorMap *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ColorMapAggregator_MR_VertTag_PartialColorMap *MR_ColorMapAggregator_MR_VertTag_PartialColorMap_OffsetMutablePtr(MR_ColorMapAggregator_MR_VertTag_PartialColorMap *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ColorMapAggregator<MR::VertTag>::PartialColorMap`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ColorMapAggregator_MR_VertTag_PartialColorMap_Destroy()` to free it when you're done using it.
MRC_API MR_ColorMapAggregator_MR_VertTag_PartialColorMap *MR_ColorMapAggregator_MR_VertTag_PartialColorMap_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ColorMapAggregator_MR_VertTag_PartialColorMap *_other);

/// Destroys a heap-allocated instance of `MR_ColorMapAggregator_MR_VertTag_PartialColorMap`. Does nothing if the pointer is null.
MRC_API void MR_ColorMapAggregator_MR_VertTag_PartialColorMap_Destroy(const MR_ColorMapAggregator_MR_VertTag_PartialColorMap *_this);

/// Destroys a heap-allocated array of `MR_ColorMapAggregator_MR_VertTag_PartialColorMap`. Does nothing if the pointer is null.
MRC_API void MR_ColorMapAggregator_MR_VertTag_PartialColorMap_DestroyArray(const MR_ColorMapAggregator_MR_VertTag_PartialColorMap *_this);

/// Generated from a method of class `MR::ColorMapAggregator<MR::VertTag>::PartialColorMap` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ColorMapAggregator_MR_VertTag_PartialColorMap *MR_ColorMapAggregator_MR_VertTag_PartialColorMap_AssignFromAnother(MR_ColorMapAggregator_MR_VertTag_PartialColorMap *_this, MR_PassBy _other_pass_by, MR_ColorMapAggregator_MR_VertTag_PartialColorMap *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirEdgeColorMapAggregator_Destroy()` to free it when you're done using it.
MRC_API MR_UndirEdgeColorMapAggregator *MR_UndirEdgeColorMapAggregator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_UndirEdgeColorMapAggregator_DestroyArray()`.
/// Use `MR_UndirEdgeColorMapAggregator_OffsetMutablePtr()` and `MR_UndirEdgeColorMapAggregator_OffsetPtr()` to access the array elements.
MRC_API MR_UndirEdgeColorMapAggregator *MR_UndirEdgeColorMapAggregator_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_UndirEdgeColorMapAggregator *MR_UndirEdgeColorMapAggregator_OffsetPtr(const MR_UndirEdgeColorMapAggregator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_UndirEdgeColorMapAggregator *MR_UndirEdgeColorMapAggregator_OffsetMutablePtr(MR_UndirEdgeColorMapAggregator *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::UndirEdgeColorMapAggregator`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirEdgeColorMapAggregator_Destroy()` to free it when you're done using it.
MRC_API MR_UndirEdgeColorMapAggregator *MR_UndirEdgeColorMapAggregator_ConstructFromAnother(MR_PassBy _other_pass_by, MR_UndirEdgeColorMapAggregator *_other);

/// Destroys a heap-allocated instance of `MR_UndirEdgeColorMapAggregator`. Does nothing if the pointer is null.
MRC_API void MR_UndirEdgeColorMapAggregator_Destroy(const MR_UndirEdgeColorMapAggregator *_this);

/// Destroys a heap-allocated array of `MR_UndirEdgeColorMapAggregator`. Does nothing if the pointer is null.
MRC_API void MR_UndirEdgeColorMapAggregator_DestroyArray(const MR_UndirEdgeColorMapAggregator *_this);

/// Generated from a method of class `MR::UndirEdgeColorMapAggregator` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirEdgeColorMapAggregator *MR_UndirEdgeColorMapAggregator_AssignFromAnother(MR_UndirEdgeColorMapAggregator *_this, MR_PassBy _other_pass_by, MR_UndirEdgeColorMapAggregator *_other);

/// set default (background) color
/// Generated from a method of class `MR::UndirEdgeColorMapAggregator` named `setDefaultColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `color` can not be null. It is a single object.
MRC_API void MR_UndirEdgeColorMapAggregator_setDefaultColor(MR_UndirEdgeColorMapAggregator *_this, const MR_Color *color);

/// add color map after all (more priority)
/// Generated from a method of class `MR::UndirEdgeColorMapAggregator` named `pushBack`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `partitialColorMap` can not be null. It is a single object.
MRC_API void MR_UndirEdgeColorMapAggregator_pushBack(MR_UndirEdgeColorMapAggregator *_this, const MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap *partitialColorMap);

/// insert color map before element #i (0 - minimum priority)
/// Generated from a method of class `MR::UndirEdgeColorMapAggregator` named `insert`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `partitialColorMap` can not be null. It is a single object.
MRC_API void MR_UndirEdgeColorMapAggregator_insert(MR_UndirEdgeColorMapAggregator *_this, int32_t i, const MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap *partitialColorMap);

/// replace color map in #i position
/// Generated from a method of class `MR::UndirEdgeColorMapAggregator` named `replace`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `partitialColorMap` can not be null. It is a single object.
MRC_API void MR_UndirEdgeColorMapAggregator_replace(MR_UndirEdgeColorMapAggregator *_this, int32_t i, const MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap *partitialColorMap);

/// reset all accumulated color map
/// Generated from a method of class `MR::UndirEdgeColorMapAggregator` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UndirEdgeColorMapAggregator_reset(MR_UndirEdgeColorMapAggregator *_this);

/// get number of accumulated color maps
/// Generated from a method of class `MR::UndirEdgeColorMapAggregator` named `getColorMapNumber`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_UndirEdgeColorMapAggregator_getColorMapNumber(MR_UndirEdgeColorMapAggregator *_this);

/// get partial color map map by index
/// Generated from a method of class `MR::UndirEdgeColorMapAggregator` named `getPartialColorMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap *MR_UndirEdgeColorMapAggregator_getPartialColorMap(MR_UndirEdgeColorMapAggregator *_this, int32_t i);

/// erase n color map from #i 
/// Generated from a method of class `MR::UndirEdgeColorMapAggregator` named `erase`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `n` has a default argument: `1`, pass a null pointer to use it.
MRC_API void MR_UndirEdgeColorMapAggregator_erase(MR_UndirEdgeColorMapAggregator *_this, int32_t i, const int32_t *n);

/// set color map aggregating mode
/// Generated from a method of class `MR::UndirEdgeColorMapAggregator` named `setMode`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UndirEdgeColorMapAggregator_setMode(MR_UndirEdgeColorMapAggregator *_this, MR_ColorMapAggregator_MR_UndirectedEdgeTag_AggregateMode mode);

/// get aggregated color map for active elements
/// Generated from a method of class `MR::UndirEdgeColorMapAggregator` named `aggregate`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `elementBitSet` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeColors_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeColors *MR_UndirEdgeColorMapAggregator_aggregate(MR_UndirEdgeColorMapAggregator *_this, const MR_UndirectedEdgeBitSet *elementBitSet);

// color map
/// Returns a pointer to a member variable of class `MR::ColorMapAggregator<MR::UndirectedEdgeTag>::PartialColorMap` named `colorMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeColors *MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap_Get_colorMap(const MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap *_this);

// color map
/// Modifies a member variable of class `MR::ColorMapAggregator<MR::UndirectedEdgeTag>::PartialColorMap` named `colorMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap_Set_colorMap(MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap *_this, MR_PassBy value_pass_by, MR_UndirectedEdgeColors *value);

// color map
/// Returns a mutable pointer to a member variable of class `MR::ColorMapAggregator<MR::UndirectedEdgeTag>::PartialColorMap` named `colorMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeColors *MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap_GetMutable_colorMap(MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap *_this);

// bitset of elements for which the color map is applied
/// Returns a pointer to a member variable of class `MR::ColorMapAggregator<MR::UndirectedEdgeTag>::PartialColorMap` named `elements`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeBitSet *MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap_Get_elements(const MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap *_this);

// bitset of elements for which the color map is applied
/// Modifies a member variable of class `MR::ColorMapAggregator<MR::UndirectedEdgeTag>::PartialColorMap` named `elements`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap_Set_elements(MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap *_this, MR_PassBy value_pass_by, MR_UndirectedEdgeBitSet *value);

// bitset of elements for which the color map is applied
/// Returns a mutable pointer to a member variable of class `MR::ColorMapAggregator<MR::UndirectedEdgeTag>::PartialColorMap` named `elements`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap_GetMutable_elements(MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap_Destroy()` to free it when you're done using it.
MRC_API MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap *MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap_DestroyArray()`.
/// Use `MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap_OffsetMutablePtr()` and `MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap_OffsetPtr()` to access the array elements.
MRC_API MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap *MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::ColorMapAggregator<MR::UndirectedEdgeTag>::PartialColorMap` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap_Destroy()` to free it when you're done using it.
MRC_API MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap *MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap_ConstructFrom(MR_PassBy colorMap_pass_by, MR_UndirectedEdgeColors *colorMap, MR_PassBy elements_pass_by, MR_UndirectedEdgeBitSet *elements);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap *MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap_OffsetPtr(const MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap *MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap_OffsetMutablePtr(MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ColorMapAggregator<MR::UndirectedEdgeTag>::PartialColorMap`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap_Destroy()` to free it when you're done using it.
MRC_API MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap *MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap *_other);

/// Destroys a heap-allocated instance of `MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap`. Does nothing if the pointer is null.
MRC_API void MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap_Destroy(const MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap *_this);

/// Destroys a heap-allocated array of `MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap`. Does nothing if the pointer is null.
MRC_API void MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap_DestroyArray(const MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap *_this);

/// Generated from a method of class `MR::ColorMapAggregator<MR::UndirectedEdgeTag>::PartialColorMap` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap *MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap_AssignFromAnother(MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap *_this, MR_PassBy _other_pass_by, MR_ColorMapAggregator_MR_UndirectedEdgeTag_PartialColorMap *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceColorMapAggregator_Destroy()` to free it when you're done using it.
MRC_API MR_FaceColorMapAggregator *MR_FaceColorMapAggregator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FaceColorMapAggregator_DestroyArray()`.
/// Use `MR_FaceColorMapAggregator_OffsetMutablePtr()` and `MR_FaceColorMapAggregator_OffsetPtr()` to access the array elements.
MRC_API MR_FaceColorMapAggregator *MR_FaceColorMapAggregator_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FaceColorMapAggregator *MR_FaceColorMapAggregator_OffsetPtr(const MR_FaceColorMapAggregator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FaceColorMapAggregator *MR_FaceColorMapAggregator_OffsetMutablePtr(MR_FaceColorMapAggregator *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FaceColorMapAggregator`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceColorMapAggregator_Destroy()` to free it when you're done using it.
MRC_API MR_FaceColorMapAggregator *MR_FaceColorMapAggregator_ConstructFromAnother(MR_PassBy _other_pass_by, MR_FaceColorMapAggregator *_other);

/// Destroys a heap-allocated instance of `MR_FaceColorMapAggregator`. Does nothing if the pointer is null.
MRC_API void MR_FaceColorMapAggregator_Destroy(const MR_FaceColorMapAggregator *_this);

/// Destroys a heap-allocated array of `MR_FaceColorMapAggregator`. Does nothing if the pointer is null.
MRC_API void MR_FaceColorMapAggregator_DestroyArray(const MR_FaceColorMapAggregator *_this);

/// Generated from a method of class `MR::FaceColorMapAggregator` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceColorMapAggregator *MR_FaceColorMapAggregator_AssignFromAnother(MR_FaceColorMapAggregator *_this, MR_PassBy _other_pass_by, MR_FaceColorMapAggregator *_other);

/// set default (background) color
/// Generated from a method of class `MR::FaceColorMapAggregator` named `setDefaultColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `color` can not be null. It is a single object.
MRC_API void MR_FaceColorMapAggregator_setDefaultColor(MR_FaceColorMapAggregator *_this, const MR_Color *color);

/// add color map after all (more priority)
/// Generated from a method of class `MR::FaceColorMapAggregator` named `pushBack`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `partitialColorMap` can not be null. It is a single object.
MRC_API void MR_FaceColorMapAggregator_pushBack(MR_FaceColorMapAggregator *_this, const MR_ColorMapAggregator_MR_FaceTag_PartialColorMap *partitialColorMap);

/// insert color map before element #i (0 - minimum priority)
/// Generated from a method of class `MR::FaceColorMapAggregator` named `insert`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `partitialColorMap` can not be null. It is a single object.
MRC_API void MR_FaceColorMapAggregator_insert(MR_FaceColorMapAggregator *_this, int32_t i, const MR_ColorMapAggregator_MR_FaceTag_PartialColorMap *partitialColorMap);

/// replace color map in #i position
/// Generated from a method of class `MR::FaceColorMapAggregator` named `replace`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `partitialColorMap` can not be null. It is a single object.
MRC_API void MR_FaceColorMapAggregator_replace(MR_FaceColorMapAggregator *_this, int32_t i, const MR_ColorMapAggregator_MR_FaceTag_PartialColorMap *partitialColorMap);

/// reset all accumulated color map
/// Generated from a method of class `MR::FaceColorMapAggregator` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FaceColorMapAggregator_reset(MR_FaceColorMapAggregator *_this);

/// get number of accumulated color maps
/// Generated from a method of class `MR::FaceColorMapAggregator` named `getColorMapNumber`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_FaceColorMapAggregator_getColorMapNumber(MR_FaceColorMapAggregator *_this);

/// get partial color map map by index
/// Generated from a method of class `MR::FaceColorMapAggregator` named `getPartialColorMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ColorMapAggregator_MR_FaceTag_PartialColorMap *MR_FaceColorMapAggregator_getPartialColorMap(MR_FaceColorMapAggregator *_this, int32_t i);

/// erase n color map from #i 
/// Generated from a method of class `MR::FaceColorMapAggregator` named `erase`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `n` has a default argument: `1`, pass a null pointer to use it.
MRC_API void MR_FaceColorMapAggregator_erase(MR_FaceColorMapAggregator *_this, int32_t i, const int32_t *n);

/// set color map aggregating mode
/// Generated from a method of class `MR::FaceColorMapAggregator` named `setMode`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FaceColorMapAggregator_setMode(MR_FaceColorMapAggregator *_this, MR_ColorMapAggregator_MR_FaceTag_AggregateMode mode);

/// get aggregated color map for active elements
/// Generated from a method of class `MR::FaceColorMapAggregator` named `aggregate`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `elementBitSet` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceColors_Destroy()` to free it when you're done using it.
MRC_API MR_FaceColors *MR_FaceColorMapAggregator_aggregate(MR_FaceColorMapAggregator *_this, const MR_FaceBitSet *elementBitSet);

// color map
/// Returns a pointer to a member variable of class `MR::ColorMapAggregator<MR::FaceTag>::PartialColorMap` named `colorMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceColors *MR_ColorMapAggregator_MR_FaceTag_PartialColorMap_Get_colorMap(const MR_ColorMapAggregator_MR_FaceTag_PartialColorMap *_this);

// color map
/// Modifies a member variable of class `MR::ColorMapAggregator<MR::FaceTag>::PartialColorMap` named `colorMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ColorMapAggregator_MR_FaceTag_PartialColorMap_Set_colorMap(MR_ColorMapAggregator_MR_FaceTag_PartialColorMap *_this, MR_PassBy value_pass_by, MR_FaceColors *value);

// color map
/// Returns a mutable pointer to a member variable of class `MR::ColorMapAggregator<MR::FaceTag>::PartialColorMap` named `colorMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceColors *MR_ColorMapAggregator_MR_FaceTag_PartialColorMap_GetMutable_colorMap(MR_ColorMapAggregator_MR_FaceTag_PartialColorMap *_this);

// bitset of elements for which the color map is applied
/// Returns a pointer to a member variable of class `MR::ColorMapAggregator<MR::FaceTag>::PartialColorMap` named `elements`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet *MR_ColorMapAggregator_MR_FaceTag_PartialColorMap_Get_elements(const MR_ColorMapAggregator_MR_FaceTag_PartialColorMap *_this);

// bitset of elements for which the color map is applied
/// Modifies a member variable of class `MR::ColorMapAggregator<MR::FaceTag>::PartialColorMap` named `elements`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ColorMapAggregator_MR_FaceTag_PartialColorMap_Set_elements(MR_ColorMapAggregator_MR_FaceTag_PartialColorMap *_this, MR_PassBy value_pass_by, MR_FaceBitSet *value);

// bitset of elements for which the color map is applied
/// Returns a mutable pointer to a member variable of class `MR::ColorMapAggregator<MR::FaceTag>::PartialColorMap` named `elements`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *MR_ColorMapAggregator_MR_FaceTag_PartialColorMap_GetMutable_elements(MR_ColorMapAggregator_MR_FaceTag_PartialColorMap *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ColorMapAggregator_MR_FaceTag_PartialColorMap_Destroy()` to free it when you're done using it.
MRC_API MR_ColorMapAggregator_MR_FaceTag_PartialColorMap *MR_ColorMapAggregator_MR_FaceTag_PartialColorMap_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ColorMapAggregator_MR_FaceTag_PartialColorMap_DestroyArray()`.
/// Use `MR_ColorMapAggregator_MR_FaceTag_PartialColorMap_OffsetMutablePtr()` and `MR_ColorMapAggregator_MR_FaceTag_PartialColorMap_OffsetPtr()` to access the array elements.
MRC_API MR_ColorMapAggregator_MR_FaceTag_PartialColorMap *MR_ColorMapAggregator_MR_FaceTag_PartialColorMap_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::ColorMapAggregator<MR::FaceTag>::PartialColorMap` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ColorMapAggregator_MR_FaceTag_PartialColorMap_Destroy()` to free it when you're done using it.
MRC_API MR_ColorMapAggregator_MR_FaceTag_PartialColorMap *MR_ColorMapAggregator_MR_FaceTag_PartialColorMap_ConstructFrom(MR_PassBy colorMap_pass_by, MR_FaceColors *colorMap, MR_PassBy elements_pass_by, MR_FaceBitSet *elements);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ColorMapAggregator_MR_FaceTag_PartialColorMap *MR_ColorMapAggregator_MR_FaceTag_PartialColorMap_OffsetPtr(const MR_ColorMapAggregator_MR_FaceTag_PartialColorMap *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ColorMapAggregator_MR_FaceTag_PartialColorMap *MR_ColorMapAggregator_MR_FaceTag_PartialColorMap_OffsetMutablePtr(MR_ColorMapAggregator_MR_FaceTag_PartialColorMap *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ColorMapAggregator<MR::FaceTag>::PartialColorMap`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ColorMapAggregator_MR_FaceTag_PartialColorMap_Destroy()` to free it when you're done using it.
MRC_API MR_ColorMapAggregator_MR_FaceTag_PartialColorMap *MR_ColorMapAggregator_MR_FaceTag_PartialColorMap_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ColorMapAggregator_MR_FaceTag_PartialColorMap *_other);

/// Destroys a heap-allocated instance of `MR_ColorMapAggregator_MR_FaceTag_PartialColorMap`. Does nothing if the pointer is null.
MRC_API void MR_ColorMapAggregator_MR_FaceTag_PartialColorMap_Destroy(const MR_ColorMapAggregator_MR_FaceTag_PartialColorMap *_this);

/// Destroys a heap-allocated array of `MR_ColorMapAggregator_MR_FaceTag_PartialColorMap`. Does nothing if the pointer is null.
MRC_API void MR_ColorMapAggregator_MR_FaceTag_PartialColorMap_DestroyArray(const MR_ColorMapAggregator_MR_FaceTag_PartialColorMap *_this);

/// Generated from a method of class `MR::ColorMapAggregator<MR::FaceTag>::PartialColorMap` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ColorMapAggregator_MR_FaceTag_PartialColorMap *MR_ColorMapAggregator_MR_FaceTag_PartialColorMap_AssignFromAnother(MR_ColorMapAggregator_MR_FaceTag_PartialColorMap *_this, MR_PassBy _other_pass_by, MR_ColorMapAggregator_MR_FaceTag_PartialColorMap *_other);

#ifdef __cplusplus
} // extern "C"
#endif
