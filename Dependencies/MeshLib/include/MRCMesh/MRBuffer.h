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

typedef struct MR_Id_MR_ICPElemtTag MR_Id_MR_ICPElemtTag; // Defined in `#include <MRCMesh/MRId.h>`.
typedef struct MR_NoDefInit_MR_EdgeId MR_NoDefInit_MR_EdgeId; // Defined in `#include <MRCMesh/MRNoDefInit.h>`.
typedef struct MR_NoDefInit_MR_FaceId MR_NoDefInit_MR_FaceId; // Defined in `#include <MRCMesh/MRNoDefInit.h>`.
typedef struct MR_NoDefInit_MR_GraphEdgeId MR_NoDefInit_MR_GraphEdgeId; // Defined in `#include <MRCMesh/MRNoDefInit.h>`.
typedef struct MR_NoDefInit_MR_GraphVertId MR_NoDefInit_MR_GraphVertId; // Defined in `#include <MRCMesh/MRNoDefInit.h>`.
typedef struct MR_NoDefInit_MR_Id_MR_ICPElemtTag MR_NoDefInit_MR_Id_MR_ICPElemtTag; // Defined in `#include <MRCMesh/MRNoDefInit.h>`.
typedef struct MR_NoDefInit_MR_NodeId MR_NoDefInit_MR_NodeId; // Defined in `#include <MRCMesh/MRNoDefInit.h>`.
typedef struct MR_NoDefInit_MR_ObjId MR_NoDefInit_MR_ObjId; // Defined in `#include <MRCMesh/MRNoDefInit.h>`.
typedef struct MR_NoDefInit_MR_PixelId MR_NoDefInit_MR_PixelId; // Defined in `#include <MRCMesh/MRNoDefInit.h>`.
typedef struct MR_NoDefInit_MR_RegionId MR_NoDefInit_MR_RegionId; // Defined in `#include <MRCMesh/MRNoDefInit.h>`.
typedef struct MR_NoDefInit_MR_TextureId MR_NoDefInit_MR_TextureId; // Defined in `#include <MRCMesh/MRNoDefInit.h>`.
typedef struct MR_NoDefInit_MR_UndirectedEdgeId MR_NoDefInit_MR_UndirectedEdgeId; // Defined in `#include <MRCMesh/MRNoDefInit.h>`.
typedef struct MR_NoDefInit_MR_VertId MR_NoDefInit_MR_VertId; // Defined in `#include <MRCMesh/MRNoDefInit.h>`.
typedef struct MR_NoDefInit_MR_VoxelId MR_NoDefInit_MR_VoxelId; // Defined in `#include <MRCMesh/MRNoDefInit.h>`.


/**
* \brief std::vector<V>-like container that is
*  1) resized without initialization of its elements,
*  2) much simplified: no push_back and many other methods
* \tparam V type of stored elements
* \tparam I type of index (shall be convertible to size_t)
*
*/
/// Generated from class `MR::Buffer<MR::UndirectedEdgeId, MR::UndirectedEdgeId>`.
typedef struct MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId;

/**
* \brief std::vector<V>-like container that is
*  1) resized without initialization of its elements,
*  2) much simplified: no push_back and many other methods
* \tparam V type of stored elements
* \tparam I type of index (shall be convertible to size_t)
*
*/
/// Generated from class `MR::Buffer<MR::FaceId, MR::FaceId>`.
typedef struct MR_Buffer_MR_FaceId_MR_FaceId MR_Buffer_MR_FaceId_MR_FaceId;

/**
* \brief std::vector<V>-like container that is
*  1) resized without initialization of its elements,
*  2) much simplified: no push_back and many other methods
* \tparam V type of stored elements
* \tparam I type of index (shall be convertible to size_t)
*
*/
/// Generated from class `MR::Buffer<MR::VertId, MR::VertId>`.
typedef struct MR_Buffer_MR_VertId_MR_VertId MR_Buffer_MR_VertId_MR_VertId;

/**
* \brief std::vector<V>-like container that is
*  1) resized without initialization of its elements,
*  2) much simplified: no push_back and many other methods
* \tparam V type of stored elements
* \tparam I type of index (shall be convertible to size_t)
*
*/
/// Generated from class `MR::Buffer<uint8_t>`.
typedef struct MR_Buffer_uint8_t MR_Buffer_uint8_t;

/**
* \brief std::vector<V>-like container that is
*  1) resized without initialization of its elements,
*  2) much simplified: no push_back and many other methods
* \tparam V type of stored elements
* \tparam I type of index (shall be convertible to size_t)
*
*/
/// Generated from class `MR::Buffer<MR::VertId>`.
typedef struct MR_Buffer_MR_VertId MR_Buffer_MR_VertId;

/**
* \brief std::vector<V>-like container that is
*  1) resized without initialization of its elements,
*  2) much simplified: no push_back and many other methods
* \tparam V type of stored elements
* \tparam I type of index (shall be convertible to size_t)
*
*/
/// Generated from class `MR::Buffer<MR::UndirectedEdgeId>`.
typedef struct MR_Buffer_MR_UndirectedEdgeId MR_Buffer_MR_UndirectedEdgeId;

/**
* \brief std::vector<V>-like container that is
*  1) resized without initialization of its elements,
*  2) much simplified: no push_back and many other methods
* \tparam V type of stored elements
* \tparam I type of index (shall be convertible to size_t)
*
*/
/// Generated from class `MR::Buffer<MR::FaceId>`.
typedef struct MR_Buffer_MR_FaceId MR_Buffer_MR_FaceId;

/**
* \brief std::vector<V>-like container that is
*  1) resized without initialization of its elements,
*  2) much simplified: no push_back and many other methods
* \tparam V type of stored elements
* \tparam I type of index (shall be convertible to size_t)
*
*/
/// Generated from class `MR::Buffer<char>`.
typedef struct MR_Buffer_char MR_Buffer_char;

/**
* \brief std::vector<V>-like container that is
*  1) resized without initialization of its elements,
*  2) much simplified: no push_back and many other methods
* \tparam V type of stored elements
* \tparam I type of index (shall be convertible to size_t)
*
*/
/// Generated from class `MR::Buffer<MR::EdgeId, MR::EdgeId>`.
typedef struct MR_Buffer_MR_EdgeId_MR_EdgeId MR_Buffer_MR_EdgeId_MR_EdgeId;

/**
* \brief std::vector<V>-like container that is
*  1) resized without initialization of its elements,
*  2) much simplified: no push_back and many other methods
* \tparam V type of stored elements
* \tparam I type of index (shall be convertible to size_t)
*
*/
/// Generated from class `MR::Buffer<MR::EdgeId, MR::UndirectedEdgeId>`.
typedef struct MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId;

/**
* \brief std::vector<V>-like container that is
*  1) resized without initialization of its elements,
*  2) much simplified: no push_back and many other methods
* \tparam V type of stored elements
* \tparam I type of index (shall be convertible to size_t)
*
*/
/// Generated from class `MR::Buffer<MR::ObjId, MR::ObjId>`.
typedef struct MR_Buffer_MR_ObjId_MR_ObjId MR_Buffer_MR_ObjId_MR_ObjId;

/**
* \brief std::vector<V>-like container that is
*  1) resized without initialization of its elements,
*  2) much simplified: no push_back and many other methods
* \tparam V type of stored elements
* \tparam I type of index (shall be convertible to size_t)
*
*/
/// Generated from class `MR::Buffer<MR::GraphVertId, MR::GraphVertId>`.
typedef struct MR_Buffer_MR_GraphVertId_MR_GraphVertId MR_Buffer_MR_GraphVertId_MR_GraphVertId;

/**
* \brief std::vector<V>-like container that is
*  1) resized without initialization of its elements,
*  2) much simplified: no push_back and many other methods
* \tparam V type of stored elements
* \tparam I type of index (shall be convertible to size_t)
*
*/
/// Generated from class `MR::Buffer<MR::GraphEdgeId, MR::GraphEdgeId>`.
typedef struct MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId;

/**
* \brief std::vector<V>-like container that is
*  1) resized without initialization of its elements,
*  2) much simplified: no push_back and many other methods
* \tparam V type of stored elements
* \tparam I type of index (shall be convertible to size_t)
*
*/
/// Generated from class `MR::Buffer<MR::VoxelId, MR::VoxelId>`.
typedef struct MR_Buffer_MR_VoxelId_MR_VoxelId MR_Buffer_MR_VoxelId_MR_VoxelId;

/**
* \brief std::vector<V>-like container that is
*  1) resized without initialization of its elements,
*  2) much simplified: no push_back and many other methods
* \tparam V type of stored elements
* \tparam I type of index (shall be convertible to size_t)
*
*/
/// Generated from class `MR::Buffer<MR::PixelId, MR::PixelId>`.
typedef struct MR_Buffer_MR_PixelId_MR_PixelId MR_Buffer_MR_PixelId_MR_PixelId;

/**
* \brief std::vector<V>-like container that is
*  1) resized without initialization of its elements,
*  2) much simplified: no push_back and many other methods
* \tparam V type of stored elements
* \tparam I type of index (shall be convertible to size_t)
*
*/
/// Generated from class `MR::Buffer<MR::RegionId, MR::RegionId>`.
typedef struct MR_Buffer_MR_RegionId_MR_RegionId MR_Buffer_MR_RegionId_MR_RegionId;

/**
* \brief std::vector<V>-like container that is
*  1) resized without initialization of its elements,
*  2) much simplified: no push_back and many other methods
* \tparam V type of stored elements
* \tparam I type of index (shall be convertible to size_t)
*
*/
/// Generated from class `MR::Buffer<MR::NodeId, MR::NodeId>`.
typedef struct MR_Buffer_MR_NodeId_MR_NodeId MR_Buffer_MR_NodeId_MR_NodeId;

/**
* \brief std::vector<V>-like container that is
*  1) resized without initialization of its elements,
*  2) much simplified: no push_back and many other methods
* \tparam V type of stored elements
* \tparam I type of index (shall be convertible to size_t)
*
*/
/// Generated from class `MR::Buffer<MR::TextureId, MR::TextureId>`.
typedef struct MR_Buffer_MR_TextureId_MR_TextureId MR_Buffer_MR_TextureId_MR_TextureId;

/**
* \brief std::vector<V>-like container that is
*  1) resized without initialization of its elements,
*  2) much simplified: no push_back and many other methods
* \tparam V type of stored elements
* \tparam I type of index (shall be convertible to size_t)
*
*/
/// Generated from class `MR::Buffer<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>`.
typedef struct MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag;

/// flat map: I -> T
/// Generated from class `MR::FaceBMap`.
typedef struct MR_FaceBMap MR_FaceBMap;

/// flat map: I -> T
/// Generated from class `MR::VertBMap`.
typedef struct MR_VertBMap MR_VertBMap;

/// flat map: I -> T
/// Generated from class `MR::EdgeBMap`.
typedef struct MR_EdgeBMap MR_EdgeBMap;

/// flat map: I -> T
/// Generated from class `MR::UndirectedEdgeBMap`.
typedef struct MR_UndirectedEdgeBMap MR_UndirectedEdgeBMap;

/// flat map: I -> T
/// Generated from class `MR::WholeEdgeBMap`.
typedef struct MR_WholeEdgeBMap MR_WholeEdgeBMap;

/// flat map: I -> T
/// Generated from class `MR::BMap<MR::ObjId, MR::ObjId>`.
typedef struct MR_BMap_MR_ObjId_MR_ObjId MR_BMap_MR_ObjId_MR_ObjId;

/// flat map: I -> T
/// Generated from class `MR::BMap<MR::GraphVertId, MR::GraphVertId>`.
typedef struct MR_BMap_MR_GraphVertId_MR_GraphVertId MR_BMap_MR_GraphVertId_MR_GraphVertId;

/// flat map: I -> T
/// Generated from class `MR::BMap<MR::GraphEdgeId, MR::GraphEdgeId>`.
typedef struct MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId;

/// flat map: I -> T
/// Generated from class `MR::BMap<MR::VertId, MR_uint64_t>`.
typedef struct MR_BMap_MR_VertId_uint64_t MR_BMap_MR_VertId_uint64_t;

/// flat map: I -> T
/// Generated from class `MR::BMap<MR::UndirectedEdgeId, MR_uint64_t>`.
typedef struct MR_BMap_MR_UndirectedEdgeId_uint64_t MR_BMap_MR_UndirectedEdgeId_uint64_t;

/// flat map: I -> T
/// Generated from class `MR::BMap<MR::FaceId, MR_uint64_t>`.
typedef struct MR_BMap_MR_FaceId_uint64_t MR_BMap_MR_FaceId_uint64_t;

/// flat map: I -> T
/// Generated from class `MR::BMap<MR::VoxelId, MR::VoxelId>`.
typedef struct MR_BMap_MR_VoxelId_MR_VoxelId MR_BMap_MR_VoxelId_MR_VoxelId;

/// flat map: I -> T
/// Generated from class `MR::BMap<MR::PixelId, MR::PixelId>`.
typedef struct MR_BMap_MR_PixelId_MR_PixelId MR_BMap_MR_PixelId_MR_PixelId;

/// flat map: I -> T
/// Generated from class `MR::BMap<MR::RegionId, MR::RegionId>`.
typedef struct MR_BMap_MR_RegionId_MR_RegionId MR_BMap_MR_RegionId_MR_RegionId;

/// flat map: I -> T
/// Generated from class `MR::BMap<MR::NodeId, MR::NodeId>`.
typedef struct MR_BMap_MR_NodeId_MR_NodeId MR_BMap_MR_NodeId_MR_NodeId;

/// flat map: I -> T
/// Generated from class `MR::BMap<MR::TextureId, MR::TextureId>`.
typedef struct MR_BMap_MR_TextureId_MR_TextureId MR_BMap_MR_TextureId_MR_TextureId;

/// flat map: I -> T
/// Generated from class `MR::BMap<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>`.
typedef struct MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag;

/// Generated from class `MR::ZeroOnMove<MR_uint64_t>`.
typedef struct MR_ZeroOnMove_uint64_t MR_ZeroOnMove_uint64_t;

// for our complex types, return wrapped type with default constructor doing nothing
/// Generated from class `MR::NoCtor<MR::UndirectedEdgeId>`.
typedef struct MR_NoCtor_MR_UndirectedEdgeId MR_NoCtor_MR_UndirectedEdgeId;

// for our complex types, return wrapped type with default constructor doing nothing
/// Generated from class `MR::NoCtor<MR::FaceId>`.
typedef struct MR_NoCtor_MR_FaceId MR_NoCtor_MR_FaceId;

// for our complex types, return wrapped type with default constructor doing nothing
/// Generated from class `MR::NoCtor<MR::VertId>`.
typedef struct MR_NoCtor_MR_VertId MR_NoCtor_MR_VertId;

// for trivial types, return the type itself
/// Generated from class `MR::NoCtor<uint8_t>`.
typedef struct MR_NoCtor_uint8_t MR_NoCtor_uint8_t;

// for trivial types, return the type itself
/// Generated from class `MR::NoCtor<char>`.
typedef struct MR_NoCtor_char MR_NoCtor_char;

// for our complex types, return wrapped type with default constructor doing nothing
/// Generated from class `MR::NoCtor<MR::EdgeId>`.
typedef struct MR_NoCtor_MR_EdgeId MR_NoCtor_MR_EdgeId;

// for our complex types, return wrapped type with default constructor doing nothing
/// Generated from class `MR::NoCtor<MR::ObjId>`.
typedef struct MR_NoCtor_MR_ObjId MR_NoCtor_MR_ObjId;

// for our complex types, return wrapped type with default constructor doing nothing
/// Generated from class `MR::NoCtor<MR::GraphVertId>`.
typedef struct MR_NoCtor_MR_GraphVertId MR_NoCtor_MR_GraphVertId;

// for our complex types, return wrapped type with default constructor doing nothing
/// Generated from class `MR::NoCtor<MR::GraphEdgeId>`.
typedef struct MR_NoCtor_MR_GraphEdgeId MR_NoCtor_MR_GraphEdgeId;

// for our complex types, return wrapped type with default constructor doing nothing
/// Generated from class `MR::NoCtor<MR::VoxelId>`.
typedef struct MR_NoCtor_MR_VoxelId MR_NoCtor_MR_VoxelId;

// for our complex types, return wrapped type with default constructor doing nothing
/// Generated from class `MR::NoCtor<MR::PixelId>`.
typedef struct MR_NoCtor_MR_PixelId MR_NoCtor_MR_PixelId;

// for our complex types, return wrapped type with default constructor doing nothing
/// Generated from class `MR::NoCtor<MR::RegionId>`.
typedef struct MR_NoCtor_MR_RegionId MR_NoCtor_MR_RegionId;

// for our complex types, return wrapped type with default constructor doing nothing
/// Generated from class `MR::NoCtor<MR::NodeId>`.
typedef struct MR_NoCtor_MR_NodeId MR_NoCtor_MR_NodeId;

// for our complex types, return wrapped type with default constructor doing nothing
/// Generated from class `MR::NoCtor<MR::TextureId>`.
typedef struct MR_NoCtor_MR_TextureId MR_NoCtor_MR_TextureId;

// for our complex types, return wrapped type with default constructor doing nothing
/// Generated from class `MR::NoCtor<MR::Id<MR::ICPElemtTag>>`.
typedef struct MR_NoCtor_MR_Id_MR_ICPElemtTag MR_NoCtor_MR_Id_MR_ICPElemtTag;

/// mapping of mesh elements: old -> new,
/// the mapping is tight (or packing) in the sense that there are no unused new elements within [0, (e/f/v).tsize)
/// Generated from class `MR::PackMapping`.
typedef struct MR_PackMapping MR_PackMapping;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_DestroyArray()`.
/// Use `MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_OffsetMutablePtr()` and `MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_OffsetPtr()` to access the array elements.
MRC_API MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_OffsetPtr(const MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_OffsetMutablePtr(MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Buffer<MR::UndirectedEdgeId, MR::UndirectedEdgeId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_other);

/// Generated from a constructor of class `MR::Buffer<MR::UndirectedEdgeId, MR::UndirectedEdgeId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_Construct(MR_uint64_t size);

/// Destroys a heap-allocated instance of `MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_Destroy(const MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

/// Destroys a heap-allocated array of `MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_DestroyArray(const MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_AssignFromAnother(MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this, MR_PassBy _other_pass_by, MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_other);

/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `capacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_capacity(const MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_size(const MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `empty`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_empty(const MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_clear(MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `resize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_resize(MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this, MR_uint64_t newSize);

/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NoDefInit_MR_UndirectedEdgeId *MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_index_const(const MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this, MR_UndirectedEdgeId i);

/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_UndirectedEdgeId *MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_index(MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this, MR_UndirectedEdgeId i);

/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_UndirectedEdgeId *MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_data(MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_UndirectedEdgeId *MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_data_const(const MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

/// returns the identifier of the first element
/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `beginId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_beginId(const MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_backId(const MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

/// returns backId() + 1
/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_endId(const MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId, MR::UndirectedEdgeId>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId_heapBytes(const MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_FaceId_MR_FaceId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_FaceId_MR_FaceId *MR_Buffer_MR_FaceId_MR_FaceId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Buffer_MR_FaceId_MR_FaceId_DestroyArray()`.
/// Use `MR_Buffer_MR_FaceId_MR_FaceId_OffsetMutablePtr()` and `MR_Buffer_MR_FaceId_MR_FaceId_OffsetPtr()` to access the array elements.
MRC_API MR_Buffer_MR_FaceId_MR_FaceId *MR_Buffer_MR_FaceId_MR_FaceId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Buffer_MR_FaceId_MR_FaceId *MR_Buffer_MR_FaceId_MR_FaceId_OffsetPtr(const MR_Buffer_MR_FaceId_MR_FaceId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Buffer_MR_FaceId_MR_FaceId *MR_Buffer_MR_FaceId_MR_FaceId_OffsetMutablePtr(MR_Buffer_MR_FaceId_MR_FaceId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Buffer<MR::FaceId, MR::FaceId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_FaceId_MR_FaceId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_FaceId_MR_FaceId *MR_Buffer_MR_FaceId_MR_FaceId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Buffer_MR_FaceId_MR_FaceId *_other);

/// Generated from a constructor of class `MR::Buffer<MR::FaceId, MR::FaceId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_FaceId_MR_FaceId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_FaceId_MR_FaceId *MR_Buffer_MR_FaceId_MR_FaceId_Construct(MR_uint64_t size);

/// Destroys a heap-allocated instance of `MR_Buffer_MR_FaceId_MR_FaceId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_FaceId_MR_FaceId_Destroy(const MR_Buffer_MR_FaceId_MR_FaceId *_this);

/// Destroys a heap-allocated array of `MR_Buffer_MR_FaceId_MR_FaceId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_FaceId_MR_FaceId_DestroyArray(const MR_Buffer_MR_FaceId_MR_FaceId *_this);

/// Generated from a method of class `MR::Buffer<MR::FaceId, MR::FaceId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_FaceId_MR_FaceId *MR_Buffer_MR_FaceId_MR_FaceId_AssignFromAnother(MR_Buffer_MR_FaceId_MR_FaceId *_this, MR_PassBy _other_pass_by, MR_Buffer_MR_FaceId_MR_FaceId *_other);

/// Generated from a method of class `MR::Buffer<MR::FaceId, MR::FaceId>` named `capacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_FaceId_MR_FaceId_capacity(const MR_Buffer_MR_FaceId_MR_FaceId *_this);

/// Generated from a method of class `MR::Buffer<MR::FaceId, MR::FaceId>` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_FaceId_MR_FaceId_size(const MR_Buffer_MR_FaceId_MR_FaceId *_this);

/// Generated from a method of class `MR::Buffer<MR::FaceId, MR::FaceId>` named `empty`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Buffer_MR_FaceId_MR_FaceId_empty(const MR_Buffer_MR_FaceId_MR_FaceId *_this);

/// Generated from a method of class `MR::Buffer<MR::FaceId, MR::FaceId>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_FaceId_MR_FaceId_clear(MR_Buffer_MR_FaceId_MR_FaceId *_this);

/// Generated from a method of class `MR::Buffer<MR::FaceId, MR::FaceId>` named `resize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_FaceId_MR_FaceId_resize(MR_Buffer_MR_FaceId_MR_FaceId *_this, MR_uint64_t newSize);

/// Generated from a method of class `MR::Buffer<MR::FaceId, MR::FaceId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NoDefInit_MR_FaceId *MR_Buffer_MR_FaceId_MR_FaceId_index_const(const MR_Buffer_MR_FaceId_MR_FaceId *_this, MR_FaceId i);

/// Generated from a method of class `MR::Buffer<MR::FaceId, MR::FaceId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_FaceId *MR_Buffer_MR_FaceId_MR_FaceId_index(MR_Buffer_MR_FaceId_MR_FaceId *_this, MR_FaceId i);

/// Generated from a method of class `MR::Buffer<MR::FaceId, MR::FaceId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_FaceId *MR_Buffer_MR_FaceId_MR_FaceId_data(MR_Buffer_MR_FaceId_MR_FaceId *_this);

/// Generated from a method of class `MR::Buffer<MR::FaceId, MR::FaceId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_FaceId *MR_Buffer_MR_FaceId_MR_FaceId_data_const(const MR_Buffer_MR_FaceId_MR_FaceId *_this);

/// returns the identifier of the first element
/// Generated from a method of class `MR::Buffer<MR::FaceId, MR::FaceId>` named `beginId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_FaceId MR_Buffer_MR_FaceId_MR_FaceId_beginId(const MR_Buffer_MR_FaceId_MR_FaceId *_this);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::Buffer<MR::FaceId, MR::FaceId>` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_FaceId MR_Buffer_MR_FaceId_MR_FaceId_backId(const MR_Buffer_MR_FaceId_MR_FaceId *_this);

/// returns backId() + 1
/// Generated from a method of class `MR::Buffer<MR::FaceId, MR::FaceId>` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_FaceId MR_Buffer_MR_FaceId_MR_FaceId_endId(const MR_Buffer_MR_FaceId_MR_FaceId *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::Buffer<MR::FaceId, MR::FaceId>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_FaceId_MR_FaceId_heapBytes(const MR_Buffer_MR_FaceId_MR_FaceId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_VertId_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_VertId_MR_VertId *MR_Buffer_MR_VertId_MR_VertId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Buffer_MR_VertId_MR_VertId_DestroyArray()`.
/// Use `MR_Buffer_MR_VertId_MR_VertId_OffsetMutablePtr()` and `MR_Buffer_MR_VertId_MR_VertId_OffsetPtr()` to access the array elements.
MRC_API MR_Buffer_MR_VertId_MR_VertId *MR_Buffer_MR_VertId_MR_VertId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Buffer_MR_VertId_MR_VertId *MR_Buffer_MR_VertId_MR_VertId_OffsetPtr(const MR_Buffer_MR_VertId_MR_VertId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Buffer_MR_VertId_MR_VertId *MR_Buffer_MR_VertId_MR_VertId_OffsetMutablePtr(MR_Buffer_MR_VertId_MR_VertId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Buffer<MR::VertId, MR::VertId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_VertId_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_VertId_MR_VertId *MR_Buffer_MR_VertId_MR_VertId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Buffer_MR_VertId_MR_VertId *_other);

/// Generated from a constructor of class `MR::Buffer<MR::VertId, MR::VertId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_VertId_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_VertId_MR_VertId *MR_Buffer_MR_VertId_MR_VertId_Construct(MR_uint64_t size);

/// Destroys a heap-allocated instance of `MR_Buffer_MR_VertId_MR_VertId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_VertId_MR_VertId_Destroy(const MR_Buffer_MR_VertId_MR_VertId *_this);

/// Destroys a heap-allocated array of `MR_Buffer_MR_VertId_MR_VertId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_VertId_MR_VertId_DestroyArray(const MR_Buffer_MR_VertId_MR_VertId *_this);

/// Generated from a method of class `MR::Buffer<MR::VertId, MR::VertId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_VertId_MR_VertId *MR_Buffer_MR_VertId_MR_VertId_AssignFromAnother(MR_Buffer_MR_VertId_MR_VertId *_this, MR_PassBy _other_pass_by, MR_Buffer_MR_VertId_MR_VertId *_other);

/// Generated from a method of class `MR::Buffer<MR::VertId, MR::VertId>` named `capacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_VertId_MR_VertId_capacity(const MR_Buffer_MR_VertId_MR_VertId *_this);

/// Generated from a method of class `MR::Buffer<MR::VertId, MR::VertId>` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_VertId_MR_VertId_size(const MR_Buffer_MR_VertId_MR_VertId *_this);

/// Generated from a method of class `MR::Buffer<MR::VertId, MR::VertId>` named `empty`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Buffer_MR_VertId_MR_VertId_empty(const MR_Buffer_MR_VertId_MR_VertId *_this);

/// Generated from a method of class `MR::Buffer<MR::VertId, MR::VertId>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_VertId_MR_VertId_clear(MR_Buffer_MR_VertId_MR_VertId *_this);

/// Generated from a method of class `MR::Buffer<MR::VertId, MR::VertId>` named `resize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_VertId_MR_VertId_resize(MR_Buffer_MR_VertId_MR_VertId *_this, MR_uint64_t newSize);

/// Generated from a method of class `MR::Buffer<MR::VertId, MR::VertId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NoDefInit_MR_VertId *MR_Buffer_MR_VertId_MR_VertId_index_const(const MR_Buffer_MR_VertId_MR_VertId *_this, MR_VertId i);

/// Generated from a method of class `MR::Buffer<MR::VertId, MR::VertId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_VertId *MR_Buffer_MR_VertId_MR_VertId_index(MR_Buffer_MR_VertId_MR_VertId *_this, MR_VertId i);

/// Generated from a method of class `MR::Buffer<MR::VertId, MR::VertId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_VertId *MR_Buffer_MR_VertId_MR_VertId_data(MR_Buffer_MR_VertId_MR_VertId *_this);

/// Generated from a method of class `MR::Buffer<MR::VertId, MR::VertId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_VertId *MR_Buffer_MR_VertId_MR_VertId_data_const(const MR_Buffer_MR_VertId_MR_VertId *_this);

/// returns the identifier of the first element
/// Generated from a method of class `MR::Buffer<MR::VertId, MR::VertId>` named `beginId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertId MR_Buffer_MR_VertId_MR_VertId_beginId(const MR_Buffer_MR_VertId_MR_VertId *_this);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::Buffer<MR::VertId, MR::VertId>` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertId MR_Buffer_MR_VertId_MR_VertId_backId(const MR_Buffer_MR_VertId_MR_VertId *_this);

/// returns backId() + 1
/// Generated from a method of class `MR::Buffer<MR::VertId, MR::VertId>` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertId MR_Buffer_MR_VertId_MR_VertId_endId(const MR_Buffer_MR_VertId_MR_VertId *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::Buffer<MR::VertId, MR::VertId>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_VertId_MR_VertId_heapBytes(const MR_Buffer_MR_VertId_MR_VertId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_uint8_t_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_uint8_t *MR_Buffer_uint8_t_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Buffer_uint8_t_DestroyArray()`.
/// Use `MR_Buffer_uint8_t_OffsetMutablePtr()` and `MR_Buffer_uint8_t_OffsetPtr()` to access the array elements.
MRC_API MR_Buffer_uint8_t *MR_Buffer_uint8_t_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Buffer_uint8_t *MR_Buffer_uint8_t_OffsetPtr(const MR_Buffer_uint8_t *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Buffer_uint8_t *MR_Buffer_uint8_t_OffsetMutablePtr(MR_Buffer_uint8_t *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Buffer<uint8_t>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_uint8_t_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_uint8_t *MR_Buffer_uint8_t_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Buffer_uint8_t *_other);

/// Generated from a constructor of class `MR::Buffer<uint8_t>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_uint8_t_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_uint8_t *MR_Buffer_uint8_t_Construct(MR_uint64_t size);

/// Destroys a heap-allocated instance of `MR_Buffer_uint8_t`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_uint8_t_Destroy(const MR_Buffer_uint8_t *_this);

/// Destroys a heap-allocated array of `MR_Buffer_uint8_t`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_uint8_t_DestroyArray(const MR_Buffer_uint8_t *_this);

/// Generated from a method of class `MR::Buffer<uint8_t>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_uint8_t *MR_Buffer_uint8_t_AssignFromAnother(MR_Buffer_uint8_t *_this, MR_PassBy _other_pass_by, MR_Buffer_uint8_t *_other);

/// Generated from a method of class `MR::Buffer<uint8_t>` named `capacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_uint8_t_capacity(const MR_Buffer_uint8_t *_this);

/// Generated from a method of class `MR::Buffer<uint8_t>` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_uint8_t_size(const MR_Buffer_uint8_t *_this);

/// Generated from a method of class `MR::Buffer<uint8_t>` named `empty`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Buffer_uint8_t_empty(const MR_Buffer_uint8_t *_this);

/// Generated from a method of class `MR::Buffer<uint8_t>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_uint8_t_clear(MR_Buffer_uint8_t *_this);

/// Generated from a method of class `MR::Buffer<uint8_t>` named `resize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_uint8_t_resize(MR_Buffer_uint8_t *_this, MR_uint64_t newSize);

/// Generated from a method of class `MR::Buffer<uint8_t>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const uint8_t *MR_Buffer_uint8_t_index_const(const MR_Buffer_uint8_t *_this, MR_uint64_t i);

/// Generated from a method of class `MR::Buffer<uint8_t>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API uint8_t *MR_Buffer_uint8_t_index(MR_Buffer_uint8_t *_this, MR_uint64_t i);

/// Generated from a method of class `MR::Buffer<uint8_t>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API uint8_t *MR_Buffer_uint8_t_data(MR_Buffer_uint8_t *_this);

/// Generated from a method of class `MR::Buffer<uint8_t>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API uint8_t *MR_Buffer_uint8_t_data_const(const MR_Buffer_uint8_t *_this);

/// returns the identifier of the first element
/// Generated from a method of class `MR::Buffer<uint8_t>` named `beginId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_uint8_t_beginId(const MR_Buffer_uint8_t *_this);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::Buffer<uint8_t>` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_uint8_t_backId(const MR_Buffer_uint8_t *_this);

/// returns backId() + 1
/// Generated from a method of class `MR::Buffer<uint8_t>` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_uint8_t_endId(const MR_Buffer_uint8_t *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::Buffer<uint8_t>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_uint8_t_heapBytes(const MR_Buffer_uint8_t *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_VertId *MR_Buffer_MR_VertId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Buffer_MR_VertId_DestroyArray()`.
/// Use `MR_Buffer_MR_VertId_OffsetMutablePtr()` and `MR_Buffer_MR_VertId_OffsetPtr()` to access the array elements.
MRC_API MR_Buffer_MR_VertId *MR_Buffer_MR_VertId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Buffer_MR_VertId *MR_Buffer_MR_VertId_OffsetPtr(const MR_Buffer_MR_VertId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Buffer_MR_VertId *MR_Buffer_MR_VertId_OffsetMutablePtr(MR_Buffer_MR_VertId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Buffer<MR::VertId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_VertId *MR_Buffer_MR_VertId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Buffer_MR_VertId *_other);

/// Generated from a constructor of class `MR::Buffer<MR::VertId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_VertId *MR_Buffer_MR_VertId_Construct(MR_uint64_t size);

/// Destroys a heap-allocated instance of `MR_Buffer_MR_VertId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_VertId_Destroy(const MR_Buffer_MR_VertId *_this);

/// Destroys a heap-allocated array of `MR_Buffer_MR_VertId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_VertId_DestroyArray(const MR_Buffer_MR_VertId *_this);

/// Generated from a method of class `MR::Buffer<MR::VertId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_VertId *MR_Buffer_MR_VertId_AssignFromAnother(MR_Buffer_MR_VertId *_this, MR_PassBy _other_pass_by, MR_Buffer_MR_VertId *_other);

/// Generated from a method of class `MR::Buffer<MR::VertId>` named `capacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_VertId_capacity(const MR_Buffer_MR_VertId *_this);

/// Generated from a method of class `MR::Buffer<MR::VertId>` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_VertId_size(const MR_Buffer_MR_VertId *_this);

/// Generated from a method of class `MR::Buffer<MR::VertId>` named `empty`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Buffer_MR_VertId_empty(const MR_Buffer_MR_VertId *_this);

/// Generated from a method of class `MR::Buffer<MR::VertId>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_VertId_clear(MR_Buffer_MR_VertId *_this);

/// Generated from a method of class `MR::Buffer<MR::VertId>` named `resize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_VertId_resize(MR_Buffer_MR_VertId *_this, MR_uint64_t newSize);

/// Generated from a method of class `MR::Buffer<MR::VertId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NoDefInit_MR_VertId *MR_Buffer_MR_VertId_index_const(const MR_Buffer_MR_VertId *_this, MR_uint64_t i);

/// Generated from a method of class `MR::Buffer<MR::VertId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_VertId *MR_Buffer_MR_VertId_index(MR_Buffer_MR_VertId *_this, MR_uint64_t i);

/// Generated from a method of class `MR::Buffer<MR::VertId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_VertId *MR_Buffer_MR_VertId_data(MR_Buffer_MR_VertId *_this);

/// Generated from a method of class `MR::Buffer<MR::VertId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_VertId *MR_Buffer_MR_VertId_data_const(const MR_Buffer_MR_VertId *_this);

/// returns the identifier of the first element
/// Generated from a method of class `MR::Buffer<MR::VertId>` named `beginId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_VertId_beginId(const MR_Buffer_MR_VertId *_this);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::Buffer<MR::VertId>` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_VertId_backId(const MR_Buffer_MR_VertId *_this);

/// returns backId() + 1
/// Generated from a method of class `MR::Buffer<MR::VertId>` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_VertId_endId(const MR_Buffer_MR_VertId *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::Buffer<MR::VertId>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_VertId_heapBytes(const MR_Buffer_MR_VertId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_UndirectedEdgeId *MR_Buffer_MR_UndirectedEdgeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Buffer_MR_UndirectedEdgeId_DestroyArray()`.
/// Use `MR_Buffer_MR_UndirectedEdgeId_OffsetMutablePtr()` and `MR_Buffer_MR_UndirectedEdgeId_OffsetPtr()` to access the array elements.
MRC_API MR_Buffer_MR_UndirectedEdgeId *MR_Buffer_MR_UndirectedEdgeId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Buffer_MR_UndirectedEdgeId *MR_Buffer_MR_UndirectedEdgeId_OffsetPtr(const MR_Buffer_MR_UndirectedEdgeId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Buffer_MR_UndirectedEdgeId *MR_Buffer_MR_UndirectedEdgeId_OffsetMutablePtr(MR_Buffer_MR_UndirectedEdgeId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Buffer<MR::UndirectedEdgeId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_UndirectedEdgeId *MR_Buffer_MR_UndirectedEdgeId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Buffer_MR_UndirectedEdgeId *_other);

/// Generated from a constructor of class `MR::Buffer<MR::UndirectedEdgeId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_UndirectedEdgeId *MR_Buffer_MR_UndirectedEdgeId_Construct(MR_uint64_t size);

/// Destroys a heap-allocated instance of `MR_Buffer_MR_UndirectedEdgeId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_UndirectedEdgeId_Destroy(const MR_Buffer_MR_UndirectedEdgeId *_this);

/// Destroys a heap-allocated array of `MR_Buffer_MR_UndirectedEdgeId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_UndirectedEdgeId_DestroyArray(const MR_Buffer_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_UndirectedEdgeId *MR_Buffer_MR_UndirectedEdgeId_AssignFromAnother(MR_Buffer_MR_UndirectedEdgeId *_this, MR_PassBy _other_pass_by, MR_Buffer_MR_UndirectedEdgeId *_other);

/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId>` named `capacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_UndirectedEdgeId_capacity(const MR_Buffer_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId>` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_UndirectedEdgeId_size(const MR_Buffer_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId>` named `empty`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Buffer_MR_UndirectedEdgeId_empty(const MR_Buffer_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_UndirectedEdgeId_clear(MR_Buffer_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId>` named `resize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_UndirectedEdgeId_resize(MR_Buffer_MR_UndirectedEdgeId *_this, MR_uint64_t newSize);

/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NoDefInit_MR_UndirectedEdgeId *MR_Buffer_MR_UndirectedEdgeId_index_const(const MR_Buffer_MR_UndirectedEdgeId *_this, MR_uint64_t i);

/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_UndirectedEdgeId *MR_Buffer_MR_UndirectedEdgeId_index(MR_Buffer_MR_UndirectedEdgeId *_this, MR_uint64_t i);

/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_UndirectedEdgeId *MR_Buffer_MR_UndirectedEdgeId_data(MR_Buffer_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_UndirectedEdgeId *MR_Buffer_MR_UndirectedEdgeId_data_const(const MR_Buffer_MR_UndirectedEdgeId *_this);

/// returns the identifier of the first element
/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId>` named `beginId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_UndirectedEdgeId_beginId(const MR_Buffer_MR_UndirectedEdgeId *_this);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId>` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_UndirectedEdgeId_backId(const MR_Buffer_MR_UndirectedEdgeId *_this);

/// returns backId() + 1
/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId>` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_UndirectedEdgeId_endId(const MR_Buffer_MR_UndirectedEdgeId *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::Buffer<MR::UndirectedEdgeId>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_UndirectedEdgeId_heapBytes(const MR_Buffer_MR_UndirectedEdgeId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_FaceId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_FaceId *MR_Buffer_MR_FaceId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Buffer_MR_FaceId_DestroyArray()`.
/// Use `MR_Buffer_MR_FaceId_OffsetMutablePtr()` and `MR_Buffer_MR_FaceId_OffsetPtr()` to access the array elements.
MRC_API MR_Buffer_MR_FaceId *MR_Buffer_MR_FaceId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Buffer_MR_FaceId *MR_Buffer_MR_FaceId_OffsetPtr(const MR_Buffer_MR_FaceId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Buffer_MR_FaceId *MR_Buffer_MR_FaceId_OffsetMutablePtr(MR_Buffer_MR_FaceId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Buffer<MR::FaceId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_FaceId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_FaceId *MR_Buffer_MR_FaceId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Buffer_MR_FaceId *_other);

/// Generated from a constructor of class `MR::Buffer<MR::FaceId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_FaceId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_FaceId *MR_Buffer_MR_FaceId_Construct(MR_uint64_t size);

/// Destroys a heap-allocated instance of `MR_Buffer_MR_FaceId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_FaceId_Destroy(const MR_Buffer_MR_FaceId *_this);

/// Destroys a heap-allocated array of `MR_Buffer_MR_FaceId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_FaceId_DestroyArray(const MR_Buffer_MR_FaceId *_this);

/// Generated from a method of class `MR::Buffer<MR::FaceId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_FaceId *MR_Buffer_MR_FaceId_AssignFromAnother(MR_Buffer_MR_FaceId *_this, MR_PassBy _other_pass_by, MR_Buffer_MR_FaceId *_other);

/// Generated from a method of class `MR::Buffer<MR::FaceId>` named `capacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_FaceId_capacity(const MR_Buffer_MR_FaceId *_this);

/// Generated from a method of class `MR::Buffer<MR::FaceId>` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_FaceId_size(const MR_Buffer_MR_FaceId *_this);

/// Generated from a method of class `MR::Buffer<MR::FaceId>` named `empty`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Buffer_MR_FaceId_empty(const MR_Buffer_MR_FaceId *_this);

/// Generated from a method of class `MR::Buffer<MR::FaceId>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_FaceId_clear(MR_Buffer_MR_FaceId *_this);

/// Generated from a method of class `MR::Buffer<MR::FaceId>` named `resize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_FaceId_resize(MR_Buffer_MR_FaceId *_this, MR_uint64_t newSize);

/// Generated from a method of class `MR::Buffer<MR::FaceId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NoDefInit_MR_FaceId *MR_Buffer_MR_FaceId_index_const(const MR_Buffer_MR_FaceId *_this, MR_uint64_t i);

/// Generated from a method of class `MR::Buffer<MR::FaceId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_FaceId *MR_Buffer_MR_FaceId_index(MR_Buffer_MR_FaceId *_this, MR_uint64_t i);

/// Generated from a method of class `MR::Buffer<MR::FaceId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_FaceId *MR_Buffer_MR_FaceId_data(MR_Buffer_MR_FaceId *_this);

/// Generated from a method of class `MR::Buffer<MR::FaceId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_FaceId *MR_Buffer_MR_FaceId_data_const(const MR_Buffer_MR_FaceId *_this);

/// returns the identifier of the first element
/// Generated from a method of class `MR::Buffer<MR::FaceId>` named `beginId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_FaceId_beginId(const MR_Buffer_MR_FaceId *_this);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::Buffer<MR::FaceId>` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_FaceId_backId(const MR_Buffer_MR_FaceId *_this);

/// returns backId() + 1
/// Generated from a method of class `MR::Buffer<MR::FaceId>` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_FaceId_endId(const MR_Buffer_MR_FaceId *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::Buffer<MR::FaceId>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_FaceId_heapBytes(const MR_Buffer_MR_FaceId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_char_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_char *MR_Buffer_char_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Buffer_char_DestroyArray()`.
/// Use `MR_Buffer_char_OffsetMutablePtr()` and `MR_Buffer_char_OffsetPtr()` to access the array elements.
MRC_API MR_Buffer_char *MR_Buffer_char_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Buffer_char *MR_Buffer_char_OffsetPtr(const MR_Buffer_char *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Buffer_char *MR_Buffer_char_OffsetMutablePtr(MR_Buffer_char *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Buffer<char>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_char_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_char *MR_Buffer_char_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Buffer_char *_other);

/// Generated from a constructor of class `MR::Buffer<char>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_char_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_char *MR_Buffer_char_Construct(MR_uint64_t size);

/// Destroys a heap-allocated instance of `MR_Buffer_char`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_char_Destroy(const MR_Buffer_char *_this);

/// Destroys a heap-allocated array of `MR_Buffer_char`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_char_DestroyArray(const MR_Buffer_char *_this);

/// Generated from a method of class `MR::Buffer<char>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_char *MR_Buffer_char_AssignFromAnother(MR_Buffer_char *_this, MR_PassBy _other_pass_by, MR_Buffer_char *_other);

/// Generated from a method of class `MR::Buffer<char>` named `capacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_char_capacity(const MR_Buffer_char *_this);

/// Generated from a method of class `MR::Buffer<char>` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_char_size(const MR_Buffer_char *_this);

/// Generated from a method of class `MR::Buffer<char>` named `empty`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Buffer_char_empty(const MR_Buffer_char *_this);

/// Generated from a method of class `MR::Buffer<char>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_char_clear(MR_Buffer_char *_this);

/// Generated from a method of class `MR::Buffer<char>` named `resize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_char_resize(MR_Buffer_char *_this, MR_uint64_t newSize);

/// Generated from a method of class `MR::Buffer<char>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const char *MR_Buffer_char_index_const(const MR_Buffer_char *_this, MR_uint64_t i);

/// Generated from a method of class `MR::Buffer<char>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API char *MR_Buffer_char_index(MR_Buffer_char *_this, MR_uint64_t i);

/// Generated from a method of class `MR::Buffer<char>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API char *MR_Buffer_char_data(MR_Buffer_char *_this);

/// Generated from a method of class `MR::Buffer<char>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API char *MR_Buffer_char_data_const(const MR_Buffer_char *_this);

/// returns the identifier of the first element
/// Generated from a method of class `MR::Buffer<char>` named `beginId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_char_beginId(const MR_Buffer_char *_this);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::Buffer<char>` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_char_backId(const MR_Buffer_char *_this);

/// returns backId() + 1
/// Generated from a method of class `MR::Buffer<char>` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_char_endId(const MR_Buffer_char *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::Buffer<char>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_char_heapBytes(const MR_Buffer_char *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_EdgeId_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_EdgeId_MR_EdgeId *MR_Buffer_MR_EdgeId_MR_EdgeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Buffer_MR_EdgeId_MR_EdgeId_DestroyArray()`.
/// Use `MR_Buffer_MR_EdgeId_MR_EdgeId_OffsetMutablePtr()` and `MR_Buffer_MR_EdgeId_MR_EdgeId_OffsetPtr()` to access the array elements.
MRC_API MR_Buffer_MR_EdgeId_MR_EdgeId *MR_Buffer_MR_EdgeId_MR_EdgeId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Buffer_MR_EdgeId_MR_EdgeId *MR_Buffer_MR_EdgeId_MR_EdgeId_OffsetPtr(const MR_Buffer_MR_EdgeId_MR_EdgeId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Buffer_MR_EdgeId_MR_EdgeId *MR_Buffer_MR_EdgeId_MR_EdgeId_OffsetMutablePtr(MR_Buffer_MR_EdgeId_MR_EdgeId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Buffer<MR::EdgeId, MR::EdgeId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_EdgeId_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_EdgeId_MR_EdgeId *MR_Buffer_MR_EdgeId_MR_EdgeId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Buffer_MR_EdgeId_MR_EdgeId *_other);

/// Generated from a constructor of class `MR::Buffer<MR::EdgeId, MR::EdgeId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_EdgeId_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_EdgeId_MR_EdgeId *MR_Buffer_MR_EdgeId_MR_EdgeId_Construct(MR_uint64_t size);

/// Destroys a heap-allocated instance of `MR_Buffer_MR_EdgeId_MR_EdgeId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_EdgeId_MR_EdgeId_Destroy(const MR_Buffer_MR_EdgeId_MR_EdgeId *_this);

/// Destroys a heap-allocated array of `MR_Buffer_MR_EdgeId_MR_EdgeId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_EdgeId_MR_EdgeId_DestroyArray(const MR_Buffer_MR_EdgeId_MR_EdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::EdgeId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_EdgeId_MR_EdgeId *MR_Buffer_MR_EdgeId_MR_EdgeId_AssignFromAnother(MR_Buffer_MR_EdgeId_MR_EdgeId *_this, MR_PassBy _other_pass_by, MR_Buffer_MR_EdgeId_MR_EdgeId *_other);

/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::EdgeId>` named `capacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_EdgeId_MR_EdgeId_capacity(const MR_Buffer_MR_EdgeId_MR_EdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::EdgeId>` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_EdgeId_MR_EdgeId_size(const MR_Buffer_MR_EdgeId_MR_EdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::EdgeId>` named `empty`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Buffer_MR_EdgeId_MR_EdgeId_empty(const MR_Buffer_MR_EdgeId_MR_EdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::EdgeId>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_EdgeId_MR_EdgeId_clear(MR_Buffer_MR_EdgeId_MR_EdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::EdgeId>` named `resize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_EdgeId_MR_EdgeId_resize(MR_Buffer_MR_EdgeId_MR_EdgeId *_this, MR_uint64_t newSize);

/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::EdgeId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NoDefInit_MR_EdgeId *MR_Buffer_MR_EdgeId_MR_EdgeId_index_const(const MR_Buffer_MR_EdgeId_MR_EdgeId *_this, MR_EdgeId i);

/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::EdgeId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_EdgeId *MR_Buffer_MR_EdgeId_MR_EdgeId_index(MR_Buffer_MR_EdgeId_MR_EdgeId *_this, MR_EdgeId i);

/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::EdgeId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_EdgeId *MR_Buffer_MR_EdgeId_MR_EdgeId_data(MR_Buffer_MR_EdgeId_MR_EdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::EdgeId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_EdgeId *MR_Buffer_MR_EdgeId_MR_EdgeId_data_const(const MR_Buffer_MR_EdgeId_MR_EdgeId *_this);

/// returns the identifier of the first element
/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::EdgeId>` named `beginId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_Buffer_MR_EdgeId_MR_EdgeId_beginId(const MR_Buffer_MR_EdgeId_MR_EdgeId *_this);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::EdgeId>` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_Buffer_MR_EdgeId_MR_EdgeId_backId(const MR_Buffer_MR_EdgeId_MR_EdgeId *_this);

/// returns backId() + 1
/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::EdgeId>` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_Buffer_MR_EdgeId_MR_EdgeId_endId(const MR_Buffer_MR_EdgeId_MR_EdgeId *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::EdgeId>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_EdgeId_MR_EdgeId_heapBytes(const MR_Buffer_MR_EdgeId_MR_EdgeId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_DestroyArray()`.
/// Use `MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_OffsetMutablePtr()` and `MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_OffsetPtr()` to access the array elements.
MRC_API MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_OffsetPtr(const MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_OffsetMutablePtr(MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Buffer<MR::EdgeId, MR::UndirectedEdgeId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *_other);

/// Generated from a constructor of class `MR::Buffer<MR::EdgeId, MR::UndirectedEdgeId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_Construct(MR_uint64_t size);

/// Destroys a heap-allocated instance of `MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_Destroy(const MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *_this);

/// Destroys a heap-allocated array of `MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_DestroyArray(const MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::UndirectedEdgeId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_AssignFromAnother(MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *_this, MR_PassBy _other_pass_by, MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *_other);

/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::UndirectedEdgeId>` named `capacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_capacity(const MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::UndirectedEdgeId>` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_size(const MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::UndirectedEdgeId>` named `empty`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_empty(const MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::UndirectedEdgeId>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_clear(MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::UndirectedEdgeId>` named `resize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_resize(MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *_this, MR_uint64_t newSize);

/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::UndirectedEdgeId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NoDefInit_MR_EdgeId *MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_index_const(const MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *_this, MR_UndirectedEdgeId i);

/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::UndirectedEdgeId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_EdgeId *MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_index(MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *_this, MR_UndirectedEdgeId i);

/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::UndirectedEdgeId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_EdgeId *MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_data(MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::UndirectedEdgeId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_EdgeId *MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_data_const(const MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *_this);

/// returns the identifier of the first element
/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::UndirectedEdgeId>` named `beginId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_beginId(const MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *_this);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::UndirectedEdgeId>` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_backId(const MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *_this);

/// returns backId() + 1
/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::UndirectedEdgeId>` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_endId(const MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::Buffer<MR::EdgeId, MR::UndirectedEdgeId>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId_heapBytes(const MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_ObjId_MR_ObjId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_ObjId_MR_ObjId *MR_Buffer_MR_ObjId_MR_ObjId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Buffer_MR_ObjId_MR_ObjId_DestroyArray()`.
/// Use `MR_Buffer_MR_ObjId_MR_ObjId_OffsetMutablePtr()` and `MR_Buffer_MR_ObjId_MR_ObjId_OffsetPtr()` to access the array elements.
MRC_API MR_Buffer_MR_ObjId_MR_ObjId *MR_Buffer_MR_ObjId_MR_ObjId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Buffer_MR_ObjId_MR_ObjId *MR_Buffer_MR_ObjId_MR_ObjId_OffsetPtr(const MR_Buffer_MR_ObjId_MR_ObjId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Buffer_MR_ObjId_MR_ObjId *MR_Buffer_MR_ObjId_MR_ObjId_OffsetMutablePtr(MR_Buffer_MR_ObjId_MR_ObjId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Buffer<MR::ObjId, MR::ObjId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_ObjId_MR_ObjId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_ObjId_MR_ObjId *MR_Buffer_MR_ObjId_MR_ObjId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Buffer_MR_ObjId_MR_ObjId *_other);

/// Generated from a constructor of class `MR::Buffer<MR::ObjId, MR::ObjId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_ObjId_MR_ObjId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_ObjId_MR_ObjId *MR_Buffer_MR_ObjId_MR_ObjId_Construct(MR_uint64_t size);

/// Destroys a heap-allocated instance of `MR_Buffer_MR_ObjId_MR_ObjId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_ObjId_MR_ObjId_Destroy(const MR_Buffer_MR_ObjId_MR_ObjId *_this);

/// Destroys a heap-allocated array of `MR_Buffer_MR_ObjId_MR_ObjId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_ObjId_MR_ObjId_DestroyArray(const MR_Buffer_MR_ObjId_MR_ObjId *_this);

/// Generated from a method of class `MR::Buffer<MR::ObjId, MR::ObjId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_ObjId_MR_ObjId *MR_Buffer_MR_ObjId_MR_ObjId_AssignFromAnother(MR_Buffer_MR_ObjId_MR_ObjId *_this, MR_PassBy _other_pass_by, MR_Buffer_MR_ObjId_MR_ObjId *_other);

/// Generated from a method of class `MR::Buffer<MR::ObjId, MR::ObjId>` named `capacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_ObjId_MR_ObjId_capacity(const MR_Buffer_MR_ObjId_MR_ObjId *_this);

/// Generated from a method of class `MR::Buffer<MR::ObjId, MR::ObjId>` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_ObjId_MR_ObjId_size(const MR_Buffer_MR_ObjId_MR_ObjId *_this);

/// Generated from a method of class `MR::Buffer<MR::ObjId, MR::ObjId>` named `empty`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Buffer_MR_ObjId_MR_ObjId_empty(const MR_Buffer_MR_ObjId_MR_ObjId *_this);

/// Generated from a method of class `MR::Buffer<MR::ObjId, MR::ObjId>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_ObjId_MR_ObjId_clear(MR_Buffer_MR_ObjId_MR_ObjId *_this);

/// Generated from a method of class `MR::Buffer<MR::ObjId, MR::ObjId>` named `resize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_ObjId_MR_ObjId_resize(MR_Buffer_MR_ObjId_MR_ObjId *_this, MR_uint64_t newSize);

/// Generated from a method of class `MR::Buffer<MR::ObjId, MR::ObjId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NoDefInit_MR_ObjId *MR_Buffer_MR_ObjId_MR_ObjId_index_const(const MR_Buffer_MR_ObjId_MR_ObjId *_this, MR_ObjId i);

/// Generated from a method of class `MR::Buffer<MR::ObjId, MR::ObjId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_ObjId *MR_Buffer_MR_ObjId_MR_ObjId_index(MR_Buffer_MR_ObjId_MR_ObjId *_this, MR_ObjId i);

/// Generated from a method of class `MR::Buffer<MR::ObjId, MR::ObjId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_ObjId *MR_Buffer_MR_ObjId_MR_ObjId_data(MR_Buffer_MR_ObjId_MR_ObjId *_this);

/// Generated from a method of class `MR::Buffer<MR::ObjId, MR::ObjId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_ObjId *MR_Buffer_MR_ObjId_MR_ObjId_data_const(const MR_Buffer_MR_ObjId_MR_ObjId *_this);

/// returns the identifier of the first element
/// Generated from a method of class `MR::Buffer<MR::ObjId, MR::ObjId>` named `beginId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_ObjId MR_Buffer_MR_ObjId_MR_ObjId_beginId(const MR_Buffer_MR_ObjId_MR_ObjId *_this);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::Buffer<MR::ObjId, MR::ObjId>` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_ObjId MR_Buffer_MR_ObjId_MR_ObjId_backId(const MR_Buffer_MR_ObjId_MR_ObjId *_this);

/// returns backId() + 1
/// Generated from a method of class `MR::Buffer<MR::ObjId, MR::ObjId>` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_ObjId MR_Buffer_MR_ObjId_MR_ObjId_endId(const MR_Buffer_MR_ObjId_MR_ObjId *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::Buffer<MR::ObjId, MR::ObjId>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_ObjId_MR_ObjId_heapBytes(const MR_Buffer_MR_ObjId_MR_ObjId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_GraphVertId_MR_GraphVertId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_GraphVertId_MR_GraphVertId *MR_Buffer_MR_GraphVertId_MR_GraphVertId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Buffer_MR_GraphVertId_MR_GraphVertId_DestroyArray()`.
/// Use `MR_Buffer_MR_GraphVertId_MR_GraphVertId_OffsetMutablePtr()` and `MR_Buffer_MR_GraphVertId_MR_GraphVertId_OffsetPtr()` to access the array elements.
MRC_API MR_Buffer_MR_GraphVertId_MR_GraphVertId *MR_Buffer_MR_GraphVertId_MR_GraphVertId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Buffer_MR_GraphVertId_MR_GraphVertId *MR_Buffer_MR_GraphVertId_MR_GraphVertId_OffsetPtr(const MR_Buffer_MR_GraphVertId_MR_GraphVertId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Buffer_MR_GraphVertId_MR_GraphVertId *MR_Buffer_MR_GraphVertId_MR_GraphVertId_OffsetMutablePtr(MR_Buffer_MR_GraphVertId_MR_GraphVertId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Buffer<MR::GraphVertId, MR::GraphVertId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_GraphVertId_MR_GraphVertId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_GraphVertId_MR_GraphVertId *MR_Buffer_MR_GraphVertId_MR_GraphVertId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Buffer_MR_GraphVertId_MR_GraphVertId *_other);

/// Generated from a constructor of class `MR::Buffer<MR::GraphVertId, MR::GraphVertId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_GraphVertId_MR_GraphVertId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_GraphVertId_MR_GraphVertId *MR_Buffer_MR_GraphVertId_MR_GraphVertId_Construct(MR_uint64_t size);

/// Destroys a heap-allocated instance of `MR_Buffer_MR_GraphVertId_MR_GraphVertId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_GraphVertId_MR_GraphVertId_Destroy(const MR_Buffer_MR_GraphVertId_MR_GraphVertId *_this);

/// Destroys a heap-allocated array of `MR_Buffer_MR_GraphVertId_MR_GraphVertId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_GraphVertId_MR_GraphVertId_DestroyArray(const MR_Buffer_MR_GraphVertId_MR_GraphVertId *_this);

/// Generated from a method of class `MR::Buffer<MR::GraphVertId, MR::GraphVertId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_GraphVertId_MR_GraphVertId *MR_Buffer_MR_GraphVertId_MR_GraphVertId_AssignFromAnother(MR_Buffer_MR_GraphVertId_MR_GraphVertId *_this, MR_PassBy _other_pass_by, MR_Buffer_MR_GraphVertId_MR_GraphVertId *_other);

/// Generated from a method of class `MR::Buffer<MR::GraphVertId, MR::GraphVertId>` named `capacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_GraphVertId_MR_GraphVertId_capacity(const MR_Buffer_MR_GraphVertId_MR_GraphVertId *_this);

/// Generated from a method of class `MR::Buffer<MR::GraphVertId, MR::GraphVertId>` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_GraphVertId_MR_GraphVertId_size(const MR_Buffer_MR_GraphVertId_MR_GraphVertId *_this);

/// Generated from a method of class `MR::Buffer<MR::GraphVertId, MR::GraphVertId>` named `empty`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Buffer_MR_GraphVertId_MR_GraphVertId_empty(const MR_Buffer_MR_GraphVertId_MR_GraphVertId *_this);

/// Generated from a method of class `MR::Buffer<MR::GraphVertId, MR::GraphVertId>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_GraphVertId_MR_GraphVertId_clear(MR_Buffer_MR_GraphVertId_MR_GraphVertId *_this);

/// Generated from a method of class `MR::Buffer<MR::GraphVertId, MR::GraphVertId>` named `resize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_GraphVertId_MR_GraphVertId_resize(MR_Buffer_MR_GraphVertId_MR_GraphVertId *_this, MR_uint64_t newSize);

/// Generated from a method of class `MR::Buffer<MR::GraphVertId, MR::GraphVertId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NoDefInit_MR_GraphVertId *MR_Buffer_MR_GraphVertId_MR_GraphVertId_index_const(const MR_Buffer_MR_GraphVertId_MR_GraphVertId *_this, MR_GraphVertId i);

/// Generated from a method of class `MR::Buffer<MR::GraphVertId, MR::GraphVertId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_GraphVertId *MR_Buffer_MR_GraphVertId_MR_GraphVertId_index(MR_Buffer_MR_GraphVertId_MR_GraphVertId *_this, MR_GraphVertId i);

/// Generated from a method of class `MR::Buffer<MR::GraphVertId, MR::GraphVertId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_GraphVertId *MR_Buffer_MR_GraphVertId_MR_GraphVertId_data(MR_Buffer_MR_GraphVertId_MR_GraphVertId *_this);

/// Generated from a method of class `MR::Buffer<MR::GraphVertId, MR::GraphVertId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_GraphVertId *MR_Buffer_MR_GraphVertId_MR_GraphVertId_data_const(const MR_Buffer_MR_GraphVertId_MR_GraphVertId *_this);

/// returns the identifier of the first element
/// Generated from a method of class `MR::Buffer<MR::GraphVertId, MR::GraphVertId>` named `beginId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphVertId MR_Buffer_MR_GraphVertId_MR_GraphVertId_beginId(const MR_Buffer_MR_GraphVertId_MR_GraphVertId *_this);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::Buffer<MR::GraphVertId, MR::GraphVertId>` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphVertId MR_Buffer_MR_GraphVertId_MR_GraphVertId_backId(const MR_Buffer_MR_GraphVertId_MR_GraphVertId *_this);

/// returns backId() + 1
/// Generated from a method of class `MR::Buffer<MR::GraphVertId, MR::GraphVertId>` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphVertId MR_Buffer_MR_GraphVertId_MR_GraphVertId_endId(const MR_Buffer_MR_GraphVertId_MR_GraphVertId *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::Buffer<MR::GraphVertId, MR::GraphVertId>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_GraphVertId_MR_GraphVertId_heapBytes(const MR_Buffer_MR_GraphVertId_MR_GraphVertId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_DestroyArray()`.
/// Use `MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_OffsetMutablePtr()` and `MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_OffsetPtr()` to access the array elements.
MRC_API MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_OffsetPtr(const MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_OffsetMutablePtr(MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Buffer<MR::GraphEdgeId, MR::GraphEdgeId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *_other);

/// Generated from a constructor of class `MR::Buffer<MR::GraphEdgeId, MR::GraphEdgeId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_Construct(MR_uint64_t size);

/// Destroys a heap-allocated instance of `MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_Destroy(const MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *_this);

/// Destroys a heap-allocated array of `MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_DestroyArray(const MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::GraphEdgeId, MR::GraphEdgeId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_AssignFromAnother(MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *_this, MR_PassBy _other_pass_by, MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *_other);

/// Generated from a method of class `MR::Buffer<MR::GraphEdgeId, MR::GraphEdgeId>` named `capacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_capacity(const MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::GraphEdgeId, MR::GraphEdgeId>` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_size(const MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::GraphEdgeId, MR::GraphEdgeId>` named `empty`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_empty(const MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::GraphEdgeId, MR::GraphEdgeId>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_clear(MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::GraphEdgeId, MR::GraphEdgeId>` named `resize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_resize(MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *_this, MR_uint64_t newSize);

/// Generated from a method of class `MR::Buffer<MR::GraphEdgeId, MR::GraphEdgeId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NoDefInit_MR_GraphEdgeId *MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_index_const(const MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *_this, MR_GraphEdgeId i);

/// Generated from a method of class `MR::Buffer<MR::GraphEdgeId, MR::GraphEdgeId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_GraphEdgeId *MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_index(MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *_this, MR_GraphEdgeId i);

/// Generated from a method of class `MR::Buffer<MR::GraphEdgeId, MR::GraphEdgeId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_GraphEdgeId *MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_data(MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *_this);

/// Generated from a method of class `MR::Buffer<MR::GraphEdgeId, MR::GraphEdgeId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_GraphEdgeId *MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_data_const(const MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *_this);

/// returns the identifier of the first element
/// Generated from a method of class `MR::Buffer<MR::GraphEdgeId, MR::GraphEdgeId>` named `beginId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphEdgeId MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_beginId(const MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *_this);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::Buffer<MR::GraphEdgeId, MR::GraphEdgeId>` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphEdgeId MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_backId(const MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *_this);

/// returns backId() + 1
/// Generated from a method of class `MR::Buffer<MR::GraphEdgeId, MR::GraphEdgeId>` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphEdgeId MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_endId(const MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::Buffer<MR::GraphEdgeId, MR::GraphEdgeId>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId_heapBytes(const MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_VoxelId_MR_VoxelId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_VoxelId_MR_VoxelId *MR_Buffer_MR_VoxelId_MR_VoxelId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Buffer_MR_VoxelId_MR_VoxelId_DestroyArray()`.
/// Use `MR_Buffer_MR_VoxelId_MR_VoxelId_OffsetMutablePtr()` and `MR_Buffer_MR_VoxelId_MR_VoxelId_OffsetPtr()` to access the array elements.
MRC_API MR_Buffer_MR_VoxelId_MR_VoxelId *MR_Buffer_MR_VoxelId_MR_VoxelId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Buffer_MR_VoxelId_MR_VoxelId *MR_Buffer_MR_VoxelId_MR_VoxelId_OffsetPtr(const MR_Buffer_MR_VoxelId_MR_VoxelId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Buffer_MR_VoxelId_MR_VoxelId *MR_Buffer_MR_VoxelId_MR_VoxelId_OffsetMutablePtr(MR_Buffer_MR_VoxelId_MR_VoxelId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Buffer<MR::VoxelId, MR::VoxelId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_VoxelId_MR_VoxelId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_VoxelId_MR_VoxelId *MR_Buffer_MR_VoxelId_MR_VoxelId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Buffer_MR_VoxelId_MR_VoxelId *_other);

/// Generated from a constructor of class `MR::Buffer<MR::VoxelId, MR::VoxelId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_VoxelId_MR_VoxelId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_VoxelId_MR_VoxelId *MR_Buffer_MR_VoxelId_MR_VoxelId_Construct(MR_uint64_t size);

/// Destroys a heap-allocated instance of `MR_Buffer_MR_VoxelId_MR_VoxelId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_VoxelId_MR_VoxelId_Destroy(const MR_Buffer_MR_VoxelId_MR_VoxelId *_this);

/// Destroys a heap-allocated array of `MR_Buffer_MR_VoxelId_MR_VoxelId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_VoxelId_MR_VoxelId_DestroyArray(const MR_Buffer_MR_VoxelId_MR_VoxelId *_this);

/// Generated from a method of class `MR::Buffer<MR::VoxelId, MR::VoxelId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_VoxelId_MR_VoxelId *MR_Buffer_MR_VoxelId_MR_VoxelId_AssignFromAnother(MR_Buffer_MR_VoxelId_MR_VoxelId *_this, MR_PassBy _other_pass_by, MR_Buffer_MR_VoxelId_MR_VoxelId *_other);

/// Generated from a method of class `MR::Buffer<MR::VoxelId, MR::VoxelId>` named `capacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_VoxelId_MR_VoxelId_capacity(const MR_Buffer_MR_VoxelId_MR_VoxelId *_this);

/// Generated from a method of class `MR::Buffer<MR::VoxelId, MR::VoxelId>` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_VoxelId_MR_VoxelId_size(const MR_Buffer_MR_VoxelId_MR_VoxelId *_this);

/// Generated from a method of class `MR::Buffer<MR::VoxelId, MR::VoxelId>` named `empty`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Buffer_MR_VoxelId_MR_VoxelId_empty(const MR_Buffer_MR_VoxelId_MR_VoxelId *_this);

/// Generated from a method of class `MR::Buffer<MR::VoxelId, MR::VoxelId>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_VoxelId_MR_VoxelId_clear(MR_Buffer_MR_VoxelId_MR_VoxelId *_this);

/// Generated from a method of class `MR::Buffer<MR::VoxelId, MR::VoxelId>` named `resize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_VoxelId_MR_VoxelId_resize(MR_Buffer_MR_VoxelId_MR_VoxelId *_this, MR_uint64_t newSize);

/// Generated from a method of class `MR::Buffer<MR::VoxelId, MR::VoxelId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NoDefInit_MR_VoxelId *MR_Buffer_MR_VoxelId_MR_VoxelId_index_const(const MR_Buffer_MR_VoxelId_MR_VoxelId *_this, MR_VoxelId i);

/// Generated from a method of class `MR::Buffer<MR::VoxelId, MR::VoxelId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_VoxelId *MR_Buffer_MR_VoxelId_MR_VoxelId_index(MR_Buffer_MR_VoxelId_MR_VoxelId *_this, MR_VoxelId i);

/// Generated from a method of class `MR::Buffer<MR::VoxelId, MR::VoxelId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_VoxelId *MR_Buffer_MR_VoxelId_MR_VoxelId_data(MR_Buffer_MR_VoxelId_MR_VoxelId *_this);

/// Generated from a method of class `MR::Buffer<MR::VoxelId, MR::VoxelId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_VoxelId *MR_Buffer_MR_VoxelId_MR_VoxelId_data_const(const MR_Buffer_MR_VoxelId_MR_VoxelId *_this);

/// returns the identifier of the first element
/// Generated from a method of class `MR::Buffer<MR::VoxelId, MR::VoxelId>` named `beginId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VoxelId MR_Buffer_MR_VoxelId_MR_VoxelId_beginId(const MR_Buffer_MR_VoxelId_MR_VoxelId *_this);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::Buffer<MR::VoxelId, MR::VoxelId>` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VoxelId MR_Buffer_MR_VoxelId_MR_VoxelId_backId(const MR_Buffer_MR_VoxelId_MR_VoxelId *_this);

/// returns backId() + 1
/// Generated from a method of class `MR::Buffer<MR::VoxelId, MR::VoxelId>` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VoxelId MR_Buffer_MR_VoxelId_MR_VoxelId_endId(const MR_Buffer_MR_VoxelId_MR_VoxelId *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::Buffer<MR::VoxelId, MR::VoxelId>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_VoxelId_MR_VoxelId_heapBytes(const MR_Buffer_MR_VoxelId_MR_VoxelId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_PixelId_MR_PixelId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_PixelId_MR_PixelId *MR_Buffer_MR_PixelId_MR_PixelId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Buffer_MR_PixelId_MR_PixelId_DestroyArray()`.
/// Use `MR_Buffer_MR_PixelId_MR_PixelId_OffsetMutablePtr()` and `MR_Buffer_MR_PixelId_MR_PixelId_OffsetPtr()` to access the array elements.
MRC_API MR_Buffer_MR_PixelId_MR_PixelId *MR_Buffer_MR_PixelId_MR_PixelId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Buffer_MR_PixelId_MR_PixelId *MR_Buffer_MR_PixelId_MR_PixelId_OffsetPtr(const MR_Buffer_MR_PixelId_MR_PixelId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Buffer_MR_PixelId_MR_PixelId *MR_Buffer_MR_PixelId_MR_PixelId_OffsetMutablePtr(MR_Buffer_MR_PixelId_MR_PixelId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Buffer<MR::PixelId, MR::PixelId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_PixelId_MR_PixelId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_PixelId_MR_PixelId *MR_Buffer_MR_PixelId_MR_PixelId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Buffer_MR_PixelId_MR_PixelId *_other);

/// Generated from a constructor of class `MR::Buffer<MR::PixelId, MR::PixelId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_PixelId_MR_PixelId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_PixelId_MR_PixelId *MR_Buffer_MR_PixelId_MR_PixelId_Construct(MR_uint64_t size);

/// Destroys a heap-allocated instance of `MR_Buffer_MR_PixelId_MR_PixelId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_PixelId_MR_PixelId_Destroy(const MR_Buffer_MR_PixelId_MR_PixelId *_this);

/// Destroys a heap-allocated array of `MR_Buffer_MR_PixelId_MR_PixelId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_PixelId_MR_PixelId_DestroyArray(const MR_Buffer_MR_PixelId_MR_PixelId *_this);

/// Generated from a method of class `MR::Buffer<MR::PixelId, MR::PixelId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_PixelId_MR_PixelId *MR_Buffer_MR_PixelId_MR_PixelId_AssignFromAnother(MR_Buffer_MR_PixelId_MR_PixelId *_this, MR_PassBy _other_pass_by, MR_Buffer_MR_PixelId_MR_PixelId *_other);

/// Generated from a method of class `MR::Buffer<MR::PixelId, MR::PixelId>` named `capacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_PixelId_MR_PixelId_capacity(const MR_Buffer_MR_PixelId_MR_PixelId *_this);

/// Generated from a method of class `MR::Buffer<MR::PixelId, MR::PixelId>` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_PixelId_MR_PixelId_size(const MR_Buffer_MR_PixelId_MR_PixelId *_this);

/// Generated from a method of class `MR::Buffer<MR::PixelId, MR::PixelId>` named `empty`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Buffer_MR_PixelId_MR_PixelId_empty(const MR_Buffer_MR_PixelId_MR_PixelId *_this);

/// Generated from a method of class `MR::Buffer<MR::PixelId, MR::PixelId>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_PixelId_MR_PixelId_clear(MR_Buffer_MR_PixelId_MR_PixelId *_this);

/// Generated from a method of class `MR::Buffer<MR::PixelId, MR::PixelId>` named `resize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_PixelId_MR_PixelId_resize(MR_Buffer_MR_PixelId_MR_PixelId *_this, MR_uint64_t newSize);

/// Generated from a method of class `MR::Buffer<MR::PixelId, MR::PixelId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NoDefInit_MR_PixelId *MR_Buffer_MR_PixelId_MR_PixelId_index_const(const MR_Buffer_MR_PixelId_MR_PixelId *_this, MR_PixelId i);

/// Generated from a method of class `MR::Buffer<MR::PixelId, MR::PixelId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_PixelId *MR_Buffer_MR_PixelId_MR_PixelId_index(MR_Buffer_MR_PixelId_MR_PixelId *_this, MR_PixelId i);

/// Generated from a method of class `MR::Buffer<MR::PixelId, MR::PixelId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_PixelId *MR_Buffer_MR_PixelId_MR_PixelId_data(MR_Buffer_MR_PixelId_MR_PixelId *_this);

/// Generated from a method of class `MR::Buffer<MR::PixelId, MR::PixelId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_PixelId *MR_Buffer_MR_PixelId_MR_PixelId_data_const(const MR_Buffer_MR_PixelId_MR_PixelId *_this);

/// returns the identifier of the first element
/// Generated from a method of class `MR::Buffer<MR::PixelId, MR::PixelId>` named `beginId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_PixelId MR_Buffer_MR_PixelId_MR_PixelId_beginId(const MR_Buffer_MR_PixelId_MR_PixelId *_this);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::Buffer<MR::PixelId, MR::PixelId>` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_PixelId MR_Buffer_MR_PixelId_MR_PixelId_backId(const MR_Buffer_MR_PixelId_MR_PixelId *_this);

/// returns backId() + 1
/// Generated from a method of class `MR::Buffer<MR::PixelId, MR::PixelId>` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_PixelId MR_Buffer_MR_PixelId_MR_PixelId_endId(const MR_Buffer_MR_PixelId_MR_PixelId *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::Buffer<MR::PixelId, MR::PixelId>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_PixelId_MR_PixelId_heapBytes(const MR_Buffer_MR_PixelId_MR_PixelId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_RegionId_MR_RegionId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_RegionId_MR_RegionId *MR_Buffer_MR_RegionId_MR_RegionId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Buffer_MR_RegionId_MR_RegionId_DestroyArray()`.
/// Use `MR_Buffer_MR_RegionId_MR_RegionId_OffsetMutablePtr()` and `MR_Buffer_MR_RegionId_MR_RegionId_OffsetPtr()` to access the array elements.
MRC_API MR_Buffer_MR_RegionId_MR_RegionId *MR_Buffer_MR_RegionId_MR_RegionId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Buffer_MR_RegionId_MR_RegionId *MR_Buffer_MR_RegionId_MR_RegionId_OffsetPtr(const MR_Buffer_MR_RegionId_MR_RegionId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Buffer_MR_RegionId_MR_RegionId *MR_Buffer_MR_RegionId_MR_RegionId_OffsetMutablePtr(MR_Buffer_MR_RegionId_MR_RegionId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Buffer<MR::RegionId, MR::RegionId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_RegionId_MR_RegionId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_RegionId_MR_RegionId *MR_Buffer_MR_RegionId_MR_RegionId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Buffer_MR_RegionId_MR_RegionId *_other);

/// Generated from a constructor of class `MR::Buffer<MR::RegionId, MR::RegionId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_RegionId_MR_RegionId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_RegionId_MR_RegionId *MR_Buffer_MR_RegionId_MR_RegionId_Construct(MR_uint64_t size);

/// Destroys a heap-allocated instance of `MR_Buffer_MR_RegionId_MR_RegionId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_RegionId_MR_RegionId_Destroy(const MR_Buffer_MR_RegionId_MR_RegionId *_this);

/// Destroys a heap-allocated array of `MR_Buffer_MR_RegionId_MR_RegionId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_RegionId_MR_RegionId_DestroyArray(const MR_Buffer_MR_RegionId_MR_RegionId *_this);

/// Generated from a method of class `MR::Buffer<MR::RegionId, MR::RegionId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_RegionId_MR_RegionId *MR_Buffer_MR_RegionId_MR_RegionId_AssignFromAnother(MR_Buffer_MR_RegionId_MR_RegionId *_this, MR_PassBy _other_pass_by, MR_Buffer_MR_RegionId_MR_RegionId *_other);

/// Generated from a method of class `MR::Buffer<MR::RegionId, MR::RegionId>` named `capacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_RegionId_MR_RegionId_capacity(const MR_Buffer_MR_RegionId_MR_RegionId *_this);

/// Generated from a method of class `MR::Buffer<MR::RegionId, MR::RegionId>` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_RegionId_MR_RegionId_size(const MR_Buffer_MR_RegionId_MR_RegionId *_this);

/// Generated from a method of class `MR::Buffer<MR::RegionId, MR::RegionId>` named `empty`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Buffer_MR_RegionId_MR_RegionId_empty(const MR_Buffer_MR_RegionId_MR_RegionId *_this);

/// Generated from a method of class `MR::Buffer<MR::RegionId, MR::RegionId>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_RegionId_MR_RegionId_clear(MR_Buffer_MR_RegionId_MR_RegionId *_this);

/// Generated from a method of class `MR::Buffer<MR::RegionId, MR::RegionId>` named `resize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_RegionId_MR_RegionId_resize(MR_Buffer_MR_RegionId_MR_RegionId *_this, MR_uint64_t newSize);

/// Generated from a method of class `MR::Buffer<MR::RegionId, MR::RegionId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NoDefInit_MR_RegionId *MR_Buffer_MR_RegionId_MR_RegionId_index_const(const MR_Buffer_MR_RegionId_MR_RegionId *_this, MR_RegionId i);

/// Generated from a method of class `MR::Buffer<MR::RegionId, MR::RegionId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_RegionId *MR_Buffer_MR_RegionId_MR_RegionId_index(MR_Buffer_MR_RegionId_MR_RegionId *_this, MR_RegionId i);

/// Generated from a method of class `MR::Buffer<MR::RegionId, MR::RegionId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_RegionId *MR_Buffer_MR_RegionId_MR_RegionId_data(MR_Buffer_MR_RegionId_MR_RegionId *_this);

/// Generated from a method of class `MR::Buffer<MR::RegionId, MR::RegionId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_RegionId *MR_Buffer_MR_RegionId_MR_RegionId_data_const(const MR_Buffer_MR_RegionId_MR_RegionId *_this);

/// returns the identifier of the first element
/// Generated from a method of class `MR::Buffer<MR::RegionId, MR::RegionId>` named `beginId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_RegionId MR_Buffer_MR_RegionId_MR_RegionId_beginId(const MR_Buffer_MR_RegionId_MR_RegionId *_this);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::Buffer<MR::RegionId, MR::RegionId>` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_RegionId MR_Buffer_MR_RegionId_MR_RegionId_backId(const MR_Buffer_MR_RegionId_MR_RegionId *_this);

/// returns backId() + 1
/// Generated from a method of class `MR::Buffer<MR::RegionId, MR::RegionId>` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_RegionId MR_Buffer_MR_RegionId_MR_RegionId_endId(const MR_Buffer_MR_RegionId_MR_RegionId *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::Buffer<MR::RegionId, MR::RegionId>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_RegionId_MR_RegionId_heapBytes(const MR_Buffer_MR_RegionId_MR_RegionId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_NodeId_MR_NodeId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_NodeId_MR_NodeId *MR_Buffer_MR_NodeId_MR_NodeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Buffer_MR_NodeId_MR_NodeId_DestroyArray()`.
/// Use `MR_Buffer_MR_NodeId_MR_NodeId_OffsetMutablePtr()` and `MR_Buffer_MR_NodeId_MR_NodeId_OffsetPtr()` to access the array elements.
MRC_API MR_Buffer_MR_NodeId_MR_NodeId *MR_Buffer_MR_NodeId_MR_NodeId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Buffer_MR_NodeId_MR_NodeId *MR_Buffer_MR_NodeId_MR_NodeId_OffsetPtr(const MR_Buffer_MR_NodeId_MR_NodeId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Buffer_MR_NodeId_MR_NodeId *MR_Buffer_MR_NodeId_MR_NodeId_OffsetMutablePtr(MR_Buffer_MR_NodeId_MR_NodeId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Buffer<MR::NodeId, MR::NodeId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_NodeId_MR_NodeId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_NodeId_MR_NodeId *MR_Buffer_MR_NodeId_MR_NodeId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Buffer_MR_NodeId_MR_NodeId *_other);

/// Generated from a constructor of class `MR::Buffer<MR::NodeId, MR::NodeId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_NodeId_MR_NodeId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_NodeId_MR_NodeId *MR_Buffer_MR_NodeId_MR_NodeId_Construct(MR_uint64_t size);

/// Destroys a heap-allocated instance of `MR_Buffer_MR_NodeId_MR_NodeId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_NodeId_MR_NodeId_Destroy(const MR_Buffer_MR_NodeId_MR_NodeId *_this);

/// Destroys a heap-allocated array of `MR_Buffer_MR_NodeId_MR_NodeId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_NodeId_MR_NodeId_DestroyArray(const MR_Buffer_MR_NodeId_MR_NodeId *_this);

/// Generated from a method of class `MR::Buffer<MR::NodeId, MR::NodeId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_NodeId_MR_NodeId *MR_Buffer_MR_NodeId_MR_NodeId_AssignFromAnother(MR_Buffer_MR_NodeId_MR_NodeId *_this, MR_PassBy _other_pass_by, MR_Buffer_MR_NodeId_MR_NodeId *_other);

/// Generated from a method of class `MR::Buffer<MR::NodeId, MR::NodeId>` named `capacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_NodeId_MR_NodeId_capacity(const MR_Buffer_MR_NodeId_MR_NodeId *_this);

/// Generated from a method of class `MR::Buffer<MR::NodeId, MR::NodeId>` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_NodeId_MR_NodeId_size(const MR_Buffer_MR_NodeId_MR_NodeId *_this);

/// Generated from a method of class `MR::Buffer<MR::NodeId, MR::NodeId>` named `empty`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Buffer_MR_NodeId_MR_NodeId_empty(const MR_Buffer_MR_NodeId_MR_NodeId *_this);

/// Generated from a method of class `MR::Buffer<MR::NodeId, MR::NodeId>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_NodeId_MR_NodeId_clear(MR_Buffer_MR_NodeId_MR_NodeId *_this);

/// Generated from a method of class `MR::Buffer<MR::NodeId, MR::NodeId>` named `resize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_NodeId_MR_NodeId_resize(MR_Buffer_MR_NodeId_MR_NodeId *_this, MR_uint64_t newSize);

/// Generated from a method of class `MR::Buffer<MR::NodeId, MR::NodeId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NoDefInit_MR_NodeId *MR_Buffer_MR_NodeId_MR_NodeId_index_const(const MR_Buffer_MR_NodeId_MR_NodeId *_this, MR_NodeId i);

/// Generated from a method of class `MR::Buffer<MR::NodeId, MR::NodeId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_NodeId *MR_Buffer_MR_NodeId_MR_NodeId_index(MR_Buffer_MR_NodeId_MR_NodeId *_this, MR_NodeId i);

/// Generated from a method of class `MR::Buffer<MR::NodeId, MR::NodeId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_NodeId *MR_Buffer_MR_NodeId_MR_NodeId_data(MR_Buffer_MR_NodeId_MR_NodeId *_this);

/// Generated from a method of class `MR::Buffer<MR::NodeId, MR::NodeId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_NodeId *MR_Buffer_MR_NodeId_MR_NodeId_data_const(const MR_Buffer_MR_NodeId_MR_NodeId *_this);

/// returns the identifier of the first element
/// Generated from a method of class `MR::Buffer<MR::NodeId, MR::NodeId>` named `beginId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NodeId MR_Buffer_MR_NodeId_MR_NodeId_beginId(const MR_Buffer_MR_NodeId_MR_NodeId *_this);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::Buffer<MR::NodeId, MR::NodeId>` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NodeId MR_Buffer_MR_NodeId_MR_NodeId_backId(const MR_Buffer_MR_NodeId_MR_NodeId *_this);

/// returns backId() + 1
/// Generated from a method of class `MR::Buffer<MR::NodeId, MR::NodeId>` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NodeId MR_Buffer_MR_NodeId_MR_NodeId_endId(const MR_Buffer_MR_NodeId_MR_NodeId *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::Buffer<MR::NodeId, MR::NodeId>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_NodeId_MR_NodeId_heapBytes(const MR_Buffer_MR_NodeId_MR_NodeId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_TextureId_MR_TextureId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_TextureId_MR_TextureId *MR_Buffer_MR_TextureId_MR_TextureId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Buffer_MR_TextureId_MR_TextureId_DestroyArray()`.
/// Use `MR_Buffer_MR_TextureId_MR_TextureId_OffsetMutablePtr()` and `MR_Buffer_MR_TextureId_MR_TextureId_OffsetPtr()` to access the array elements.
MRC_API MR_Buffer_MR_TextureId_MR_TextureId *MR_Buffer_MR_TextureId_MR_TextureId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Buffer_MR_TextureId_MR_TextureId *MR_Buffer_MR_TextureId_MR_TextureId_OffsetPtr(const MR_Buffer_MR_TextureId_MR_TextureId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Buffer_MR_TextureId_MR_TextureId *MR_Buffer_MR_TextureId_MR_TextureId_OffsetMutablePtr(MR_Buffer_MR_TextureId_MR_TextureId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Buffer<MR::TextureId, MR::TextureId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_TextureId_MR_TextureId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_TextureId_MR_TextureId *MR_Buffer_MR_TextureId_MR_TextureId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Buffer_MR_TextureId_MR_TextureId *_other);

/// Generated from a constructor of class `MR::Buffer<MR::TextureId, MR::TextureId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_TextureId_MR_TextureId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_TextureId_MR_TextureId *MR_Buffer_MR_TextureId_MR_TextureId_Construct(MR_uint64_t size);

/// Destroys a heap-allocated instance of `MR_Buffer_MR_TextureId_MR_TextureId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_TextureId_MR_TextureId_Destroy(const MR_Buffer_MR_TextureId_MR_TextureId *_this);

/// Destroys a heap-allocated array of `MR_Buffer_MR_TextureId_MR_TextureId`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_TextureId_MR_TextureId_DestroyArray(const MR_Buffer_MR_TextureId_MR_TextureId *_this);

/// Generated from a method of class `MR::Buffer<MR::TextureId, MR::TextureId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_TextureId_MR_TextureId *MR_Buffer_MR_TextureId_MR_TextureId_AssignFromAnother(MR_Buffer_MR_TextureId_MR_TextureId *_this, MR_PassBy _other_pass_by, MR_Buffer_MR_TextureId_MR_TextureId *_other);

/// Generated from a method of class `MR::Buffer<MR::TextureId, MR::TextureId>` named `capacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_TextureId_MR_TextureId_capacity(const MR_Buffer_MR_TextureId_MR_TextureId *_this);

/// Generated from a method of class `MR::Buffer<MR::TextureId, MR::TextureId>` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_TextureId_MR_TextureId_size(const MR_Buffer_MR_TextureId_MR_TextureId *_this);

/// Generated from a method of class `MR::Buffer<MR::TextureId, MR::TextureId>` named `empty`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Buffer_MR_TextureId_MR_TextureId_empty(const MR_Buffer_MR_TextureId_MR_TextureId *_this);

/// Generated from a method of class `MR::Buffer<MR::TextureId, MR::TextureId>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_TextureId_MR_TextureId_clear(MR_Buffer_MR_TextureId_MR_TextureId *_this);

/// Generated from a method of class `MR::Buffer<MR::TextureId, MR::TextureId>` named `resize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_TextureId_MR_TextureId_resize(MR_Buffer_MR_TextureId_MR_TextureId *_this, MR_uint64_t newSize);

/// Generated from a method of class `MR::Buffer<MR::TextureId, MR::TextureId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NoDefInit_MR_TextureId *MR_Buffer_MR_TextureId_MR_TextureId_index_const(const MR_Buffer_MR_TextureId_MR_TextureId *_this, MR_TextureId i);

/// Generated from a method of class `MR::Buffer<MR::TextureId, MR::TextureId>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_TextureId *MR_Buffer_MR_TextureId_MR_TextureId_index(MR_Buffer_MR_TextureId_MR_TextureId *_this, MR_TextureId i);

/// Generated from a method of class `MR::Buffer<MR::TextureId, MR::TextureId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_TextureId *MR_Buffer_MR_TextureId_MR_TextureId_data(MR_Buffer_MR_TextureId_MR_TextureId *_this);

/// Generated from a method of class `MR::Buffer<MR::TextureId, MR::TextureId>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_TextureId *MR_Buffer_MR_TextureId_MR_TextureId_data_const(const MR_Buffer_MR_TextureId_MR_TextureId *_this);

/// returns the identifier of the first element
/// Generated from a method of class `MR::Buffer<MR::TextureId, MR::TextureId>` named `beginId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_TextureId MR_Buffer_MR_TextureId_MR_TextureId_beginId(const MR_Buffer_MR_TextureId_MR_TextureId *_this);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::Buffer<MR::TextureId, MR::TextureId>` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_TextureId MR_Buffer_MR_TextureId_MR_TextureId_backId(const MR_Buffer_MR_TextureId_MR_TextureId *_this);

/// returns backId() + 1
/// Generated from a method of class `MR::Buffer<MR::TextureId, MR::TextureId>` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_TextureId MR_Buffer_MR_TextureId_MR_TextureId_endId(const MR_Buffer_MR_TextureId_MR_TextureId *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::Buffer<MR::TextureId, MR::TextureId>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_TextureId_MR_TextureId_heapBytes(const MR_Buffer_MR_TextureId_MR_TextureId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_DestroyArray()`.
/// Use `MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_OffsetMutablePtr()` and `MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_OffsetPtr()` to access the array elements.
MRC_API MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_OffsetPtr(const MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_OffsetMutablePtr(MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Buffer<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_other);

/// Generated from a constructor of class `MR::Buffer<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_Construct(MR_uint64_t size);

/// Destroys a heap-allocated instance of `MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_Destroy(const MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_this);

/// Destroys a heap-allocated array of `MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag`. Does nothing if the pointer is null.
MRC_API void MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_DestroyArray(const MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_this);

/// Generated from a method of class `MR::Buffer<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_AssignFromAnother(MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_this, MR_PassBy _other_pass_by, MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_other);

/// Generated from a method of class `MR::Buffer<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>` named `capacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_capacity(const MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_this);

/// Generated from a method of class `MR::Buffer<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_size(const MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_this);

/// Generated from a method of class `MR::Buffer<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>` named `empty`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_empty(const MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_this);

/// Generated from a method of class `MR::Buffer<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_clear(MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_this);

/// Generated from a method of class `MR::Buffer<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>` named `resize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_resize(MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_this, MR_uint64_t newSize);

/// Generated from a method of class `MR::Buffer<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `i` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NoDefInit_MR_Id_MR_ICPElemtTag *MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_index_const(const MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_this, const MR_Id_MR_ICPElemtTag *i);

/// Generated from a method of class `MR::Buffer<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `i` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoDefInit_MR_Id_MR_ICPElemtTag *MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_index(MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_this, const MR_Id_MR_ICPElemtTag *i);

/// Generated from a method of class `MR::Buffer<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_Id_MR_ICPElemtTag *MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_data(MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_this);

/// Generated from a method of class `MR::Buffer<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NoDefInit_MR_Id_MR_ICPElemtTag *MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_data_const(const MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_this);

/// returns the identifier of the first element
/// Generated from a method of class `MR::Buffer<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>` named `beginId`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_Id_MR_ICPElemtTag *MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_beginId(const MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_this);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::Buffer<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_Id_MR_ICPElemtTag *MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_backId(const MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_this);

/// returns backId() + 1
/// Generated from a method of class `MR::Buffer<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_Id_MR_ICPElemtTag *MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_endId(const MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::Buffer<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_heapBytes(const MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_this);

/// Returns a pointer to a member variable of class `MR::FaceBMap` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Buffer_MR_FaceId_MR_FaceId *MR_FaceBMap_Get_b(const MR_FaceBMap *_this);

/// Modifies a member variable of class `MR::FaceBMap` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FaceBMap_Set_b(MR_FaceBMap *_this, MR_PassBy value_pass_by, MR_Buffer_MR_FaceId_MR_FaceId *value);

/// Returns a mutable pointer to a member variable of class `MR::FaceBMap` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_FaceId_MR_FaceId *MR_FaceBMap_GetMutable_b(MR_FaceBMap *_this);

///< target size, all values inside b must be less than this value
/// Returns a pointer to a member variable of class `MR::FaceBMap` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_FaceBMap_Get_tsize(const MR_FaceBMap *_this);

///< target size, all values inside b must be less than this value
/// Modifies a member variable of class `MR::FaceBMap` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FaceBMap_Set_tsize(MR_FaceBMap *_this, MR_uint64_t value);

///< target size, all values inside b must be less than this value
/// Returns a mutable pointer to a member variable of class `MR::FaceBMap` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_FaceBMap_GetMutable_tsize(MR_FaceBMap *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBMap_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBMap *MR_FaceBMap_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FaceBMap_DestroyArray()`.
/// Use `MR_FaceBMap_OffsetMutablePtr()` and `MR_FaceBMap_OffsetPtr()` to access the array elements.
MRC_API MR_FaceBMap *MR_FaceBMap_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::FaceBMap` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBMap_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBMap *MR_FaceBMap_ConstructFrom(MR_PassBy b_pass_by, MR_Buffer_MR_FaceId_MR_FaceId *b, MR_uint64_t tsize);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FaceBMap *MR_FaceBMap_OffsetPtr(const MR_FaceBMap *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FaceBMap *MR_FaceBMap_OffsetMutablePtr(MR_FaceBMap *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FaceBMap`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBMap_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBMap *MR_FaceBMap_ConstructFromAnother(MR_PassBy _other_pass_by, MR_FaceBMap *_other);

/// Destroys a heap-allocated instance of `MR_FaceBMap`. Does nothing if the pointer is null.
MRC_API void MR_FaceBMap_Destroy(const MR_FaceBMap *_this);

/// Destroys a heap-allocated array of `MR_FaceBMap`. Does nothing if the pointer is null.
MRC_API void MR_FaceBMap_DestroyArray(const MR_FaceBMap *_this);

/// Generated from a method of class `MR::FaceBMap` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBMap *MR_FaceBMap_AssignFromAnother(MR_FaceBMap *_this, MR_PassBy _other_pass_by, MR_FaceBMap *_other);

/// Returns a pointer to a member variable of class `MR::VertBMap` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Buffer_MR_VertId_MR_VertId *MR_VertBMap_Get_b(const MR_VertBMap *_this);

/// Modifies a member variable of class `MR::VertBMap` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VertBMap_Set_b(MR_VertBMap *_this, MR_PassBy value_pass_by, MR_Buffer_MR_VertId_MR_VertId *value);

/// Returns a mutable pointer to a member variable of class `MR::VertBMap` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_VertId_MR_VertId *MR_VertBMap_GetMutable_b(MR_VertBMap *_this);

///< target size, all values inside b must be less than this value
/// Returns a pointer to a member variable of class `MR::VertBMap` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_VertBMap_Get_tsize(const MR_VertBMap *_this);

///< target size, all values inside b must be less than this value
/// Modifies a member variable of class `MR::VertBMap` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VertBMap_Set_tsize(MR_VertBMap *_this, MR_uint64_t value);

///< target size, all values inside b must be less than this value
/// Returns a mutable pointer to a member variable of class `MR::VertBMap` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_VertBMap_GetMutable_tsize(MR_VertBMap *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBMap_Destroy()` to free it when you're done using it.
MRC_API MR_VertBMap *MR_VertBMap_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VertBMap_DestroyArray()`.
/// Use `MR_VertBMap_OffsetMutablePtr()` and `MR_VertBMap_OffsetPtr()` to access the array elements.
MRC_API MR_VertBMap *MR_VertBMap_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::VertBMap` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBMap_Destroy()` to free it when you're done using it.
MRC_API MR_VertBMap *MR_VertBMap_ConstructFrom(MR_PassBy b_pass_by, MR_Buffer_MR_VertId_MR_VertId *b, MR_uint64_t tsize);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VertBMap *MR_VertBMap_OffsetPtr(const MR_VertBMap *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VertBMap *MR_VertBMap_OffsetMutablePtr(MR_VertBMap *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VertBMap`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBMap_Destroy()` to free it when you're done using it.
MRC_API MR_VertBMap *MR_VertBMap_ConstructFromAnother(MR_PassBy _other_pass_by, MR_VertBMap *_other);

/// Destroys a heap-allocated instance of `MR_VertBMap`. Does nothing if the pointer is null.
MRC_API void MR_VertBMap_Destroy(const MR_VertBMap *_this);

/// Destroys a heap-allocated array of `MR_VertBMap`. Does nothing if the pointer is null.
MRC_API void MR_VertBMap_DestroyArray(const MR_VertBMap *_this);

/// Generated from a method of class `MR::VertBMap` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBMap *MR_VertBMap_AssignFromAnother(MR_VertBMap *_this, MR_PassBy _other_pass_by, MR_VertBMap *_other);

/// Returns a pointer to a member variable of class `MR::EdgeBMap` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Buffer_MR_EdgeId_MR_EdgeId *MR_EdgeBMap_Get_b(const MR_EdgeBMap *_this);

/// Modifies a member variable of class `MR::EdgeBMap` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EdgeBMap_Set_b(MR_EdgeBMap *_this, MR_PassBy value_pass_by, MR_Buffer_MR_EdgeId_MR_EdgeId *value);

/// Returns a mutable pointer to a member variable of class `MR::EdgeBMap` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_EdgeId_MR_EdgeId *MR_EdgeBMap_GetMutable_b(MR_EdgeBMap *_this);

///< target size, all values inside b must be less than this value
/// Returns a pointer to a member variable of class `MR::EdgeBMap` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_EdgeBMap_Get_tsize(const MR_EdgeBMap *_this);

///< target size, all values inside b must be less than this value
/// Modifies a member variable of class `MR::EdgeBMap` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EdgeBMap_Set_tsize(MR_EdgeBMap *_this, MR_uint64_t value);

///< target size, all values inside b must be less than this value
/// Returns a mutable pointer to a member variable of class `MR::EdgeBMap` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_EdgeBMap_GetMutable_tsize(MR_EdgeBMap *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeBMap_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeBMap *MR_EdgeBMap_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_EdgeBMap_DestroyArray()`.
/// Use `MR_EdgeBMap_OffsetMutablePtr()` and `MR_EdgeBMap_OffsetPtr()` to access the array elements.
MRC_API MR_EdgeBMap *MR_EdgeBMap_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::EdgeBMap` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeBMap_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeBMap *MR_EdgeBMap_ConstructFrom(MR_PassBy b_pass_by, MR_Buffer_MR_EdgeId_MR_EdgeId *b, MR_uint64_t tsize);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_EdgeBMap *MR_EdgeBMap_OffsetPtr(const MR_EdgeBMap *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_EdgeBMap *MR_EdgeBMap_OffsetMutablePtr(MR_EdgeBMap *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::EdgeBMap`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeBMap_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeBMap *MR_EdgeBMap_ConstructFromAnother(MR_PassBy _other_pass_by, MR_EdgeBMap *_other);

/// Destroys a heap-allocated instance of `MR_EdgeBMap`. Does nothing if the pointer is null.
MRC_API void MR_EdgeBMap_Destroy(const MR_EdgeBMap *_this);

/// Destroys a heap-allocated array of `MR_EdgeBMap`. Does nothing if the pointer is null.
MRC_API void MR_EdgeBMap_DestroyArray(const MR_EdgeBMap *_this);

/// Generated from a method of class `MR::EdgeBMap` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeBMap *MR_EdgeBMap_AssignFromAnother(MR_EdgeBMap *_this, MR_PassBy _other_pass_by, MR_EdgeBMap *_other);

/// Returns a pointer to a member variable of class `MR::UndirectedEdgeBMap` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_UndirectedEdgeBMap_Get_b(const MR_UndirectedEdgeBMap *_this);

/// Modifies a member variable of class `MR::UndirectedEdgeBMap` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UndirectedEdgeBMap_Set_b(MR_UndirectedEdgeBMap *_this, MR_PassBy value_pass_by, MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *value);

/// Returns a mutable pointer to a member variable of class `MR::UndirectedEdgeBMap` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *MR_UndirectedEdgeBMap_GetMutable_b(MR_UndirectedEdgeBMap *_this);

///< target size, all values inside b must be less than this value
/// Returns a pointer to a member variable of class `MR::UndirectedEdgeBMap` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_UndirectedEdgeBMap_Get_tsize(const MR_UndirectedEdgeBMap *_this);

///< target size, all values inside b must be less than this value
/// Modifies a member variable of class `MR::UndirectedEdgeBMap` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UndirectedEdgeBMap_Set_tsize(MR_UndirectedEdgeBMap *_this, MR_uint64_t value);

///< target size, all values inside b must be less than this value
/// Returns a mutable pointer to a member variable of class `MR::UndirectedEdgeBMap` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_UndirectedEdgeBMap_GetMutable_tsize(MR_UndirectedEdgeBMap *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBMap_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBMap *MR_UndirectedEdgeBMap_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_UndirectedEdgeBMap_DestroyArray()`.
/// Use `MR_UndirectedEdgeBMap_OffsetMutablePtr()` and `MR_UndirectedEdgeBMap_OffsetPtr()` to access the array elements.
MRC_API MR_UndirectedEdgeBMap *MR_UndirectedEdgeBMap_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::UndirectedEdgeBMap` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBMap_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBMap *MR_UndirectedEdgeBMap_ConstructFrom(MR_PassBy b_pass_by, MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *b, MR_uint64_t tsize);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_UndirectedEdgeBMap *MR_UndirectedEdgeBMap_OffsetPtr(const MR_UndirectedEdgeBMap *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_UndirectedEdgeBMap *MR_UndirectedEdgeBMap_OffsetMutablePtr(MR_UndirectedEdgeBMap *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::UndirectedEdgeBMap`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBMap_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBMap *MR_UndirectedEdgeBMap_ConstructFromAnother(MR_PassBy _other_pass_by, MR_UndirectedEdgeBMap *_other);

/// Destroys a heap-allocated instance of `MR_UndirectedEdgeBMap`. Does nothing if the pointer is null.
MRC_API void MR_UndirectedEdgeBMap_Destroy(const MR_UndirectedEdgeBMap *_this);

/// Destroys a heap-allocated array of `MR_UndirectedEdgeBMap`. Does nothing if the pointer is null.
MRC_API void MR_UndirectedEdgeBMap_DestroyArray(const MR_UndirectedEdgeBMap *_this);

/// Generated from a method of class `MR::UndirectedEdgeBMap` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBMap *MR_UndirectedEdgeBMap_AssignFromAnother(MR_UndirectedEdgeBMap *_this, MR_PassBy _other_pass_by, MR_UndirectedEdgeBMap *_other);

/// Returns a pointer to a member variable of class `MR::WholeEdgeBMap` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *MR_WholeEdgeBMap_Get_b(const MR_WholeEdgeBMap *_this);

/// Modifies a member variable of class `MR::WholeEdgeBMap` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WholeEdgeBMap_Set_b(MR_WholeEdgeBMap *_this, MR_PassBy value_pass_by, MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *value);

/// Returns a mutable pointer to a member variable of class `MR::WholeEdgeBMap` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *MR_WholeEdgeBMap_GetMutable_b(MR_WholeEdgeBMap *_this);

///< target size, all values inside b must be less than this value
/// Returns a pointer to a member variable of class `MR::WholeEdgeBMap` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_WholeEdgeBMap_Get_tsize(const MR_WholeEdgeBMap *_this);

///< target size, all values inside b must be less than this value
/// Modifies a member variable of class `MR::WholeEdgeBMap` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WholeEdgeBMap_Set_tsize(MR_WholeEdgeBMap *_this, MR_uint64_t value);

///< target size, all values inside b must be less than this value
/// Returns a mutable pointer to a member variable of class `MR::WholeEdgeBMap` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_WholeEdgeBMap_GetMutable_tsize(MR_WholeEdgeBMap *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WholeEdgeBMap_Destroy()` to free it when you're done using it.
MRC_API MR_WholeEdgeBMap *MR_WholeEdgeBMap_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_WholeEdgeBMap_DestroyArray()`.
/// Use `MR_WholeEdgeBMap_OffsetMutablePtr()` and `MR_WholeEdgeBMap_OffsetPtr()` to access the array elements.
MRC_API MR_WholeEdgeBMap *MR_WholeEdgeBMap_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::WholeEdgeBMap` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WholeEdgeBMap_Destroy()` to free it when you're done using it.
MRC_API MR_WholeEdgeBMap *MR_WholeEdgeBMap_ConstructFrom(MR_PassBy b_pass_by, MR_Buffer_MR_EdgeId_MR_UndirectedEdgeId *b, MR_uint64_t tsize);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_WholeEdgeBMap *MR_WholeEdgeBMap_OffsetPtr(const MR_WholeEdgeBMap *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_WholeEdgeBMap *MR_WholeEdgeBMap_OffsetMutablePtr(MR_WholeEdgeBMap *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::WholeEdgeBMap`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WholeEdgeBMap_Destroy()` to free it when you're done using it.
MRC_API MR_WholeEdgeBMap *MR_WholeEdgeBMap_ConstructFromAnother(MR_PassBy _other_pass_by, MR_WholeEdgeBMap *_other);

/// Destroys a heap-allocated instance of `MR_WholeEdgeBMap`. Does nothing if the pointer is null.
MRC_API void MR_WholeEdgeBMap_Destroy(const MR_WholeEdgeBMap *_this);

/// Destroys a heap-allocated array of `MR_WholeEdgeBMap`. Does nothing if the pointer is null.
MRC_API void MR_WholeEdgeBMap_DestroyArray(const MR_WholeEdgeBMap *_this);

/// Generated from a method of class `MR::WholeEdgeBMap` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_WholeEdgeBMap *MR_WholeEdgeBMap_AssignFromAnother(MR_WholeEdgeBMap *_this, MR_PassBy _other_pass_by, MR_WholeEdgeBMap *_other);

/// Returns a pointer to a member variable of class `MR::BMap<MR::ObjId, MR::ObjId>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Buffer_MR_ObjId_MR_ObjId *MR_BMap_MR_ObjId_MR_ObjId_Get_b(const MR_BMap_MR_ObjId_MR_ObjId *_this);

/// Modifies a member variable of class `MR::BMap<MR::ObjId, MR::ObjId>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BMap_MR_ObjId_MR_ObjId_Set_b(MR_BMap_MR_ObjId_MR_ObjId *_this, MR_PassBy value_pass_by, MR_Buffer_MR_ObjId_MR_ObjId *value);

/// Returns a mutable pointer to a member variable of class `MR::BMap<MR::ObjId, MR::ObjId>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_ObjId_MR_ObjId *MR_BMap_MR_ObjId_MR_ObjId_GetMutable_b(MR_BMap_MR_ObjId_MR_ObjId *_this);

///< target size, all values inside b must be less than this value
/// Returns a pointer to a member variable of class `MR::BMap<MR::ObjId, MR::ObjId>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_BMap_MR_ObjId_MR_ObjId_Get_tsize(const MR_BMap_MR_ObjId_MR_ObjId *_this);

///< target size, all values inside b must be less than this value
/// Modifies a member variable of class `MR::BMap<MR::ObjId, MR::ObjId>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BMap_MR_ObjId_MR_ObjId_Set_tsize(MR_BMap_MR_ObjId_MR_ObjId *_this, MR_uint64_t value);

///< target size, all values inside b must be less than this value
/// Returns a mutable pointer to a member variable of class `MR::BMap<MR::ObjId, MR::ObjId>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_BMap_MR_ObjId_MR_ObjId_GetMutable_tsize(MR_BMap_MR_ObjId_MR_ObjId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_ObjId_MR_ObjId_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_ObjId_MR_ObjId *MR_BMap_MR_ObjId_MR_ObjId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BMap_MR_ObjId_MR_ObjId_DestroyArray()`.
/// Use `MR_BMap_MR_ObjId_MR_ObjId_OffsetMutablePtr()` and `MR_BMap_MR_ObjId_MR_ObjId_OffsetPtr()` to access the array elements.
MRC_API MR_BMap_MR_ObjId_MR_ObjId *MR_BMap_MR_ObjId_MR_ObjId_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::BMap<MR::ObjId, MR::ObjId>` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_ObjId_MR_ObjId_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_ObjId_MR_ObjId *MR_BMap_MR_ObjId_MR_ObjId_ConstructFrom(MR_PassBy b_pass_by, MR_Buffer_MR_ObjId_MR_ObjId *b, MR_uint64_t tsize);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BMap_MR_ObjId_MR_ObjId *MR_BMap_MR_ObjId_MR_ObjId_OffsetPtr(const MR_BMap_MR_ObjId_MR_ObjId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BMap_MR_ObjId_MR_ObjId *MR_BMap_MR_ObjId_MR_ObjId_OffsetMutablePtr(MR_BMap_MR_ObjId_MR_ObjId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::BMap<MR::ObjId, MR::ObjId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_ObjId_MR_ObjId_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_ObjId_MR_ObjId *MR_BMap_MR_ObjId_MR_ObjId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_BMap_MR_ObjId_MR_ObjId *_other);

/// Destroys a heap-allocated instance of `MR_BMap_MR_ObjId_MR_ObjId`. Does nothing if the pointer is null.
MRC_API void MR_BMap_MR_ObjId_MR_ObjId_Destroy(const MR_BMap_MR_ObjId_MR_ObjId *_this);

/// Destroys a heap-allocated array of `MR_BMap_MR_ObjId_MR_ObjId`. Does nothing if the pointer is null.
MRC_API void MR_BMap_MR_ObjId_MR_ObjId_DestroyArray(const MR_BMap_MR_ObjId_MR_ObjId *_this);

/// Generated from a method of class `MR::BMap<MR::ObjId, MR::ObjId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BMap_MR_ObjId_MR_ObjId *MR_BMap_MR_ObjId_MR_ObjId_AssignFromAnother(MR_BMap_MR_ObjId_MR_ObjId *_this, MR_PassBy _other_pass_by, MR_BMap_MR_ObjId_MR_ObjId *_other);

/// Returns a pointer to a member variable of class `MR::BMap<MR::GraphVertId, MR::GraphVertId>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Buffer_MR_GraphVertId_MR_GraphVertId *MR_BMap_MR_GraphVertId_MR_GraphVertId_Get_b(const MR_BMap_MR_GraphVertId_MR_GraphVertId *_this);

/// Modifies a member variable of class `MR::BMap<MR::GraphVertId, MR::GraphVertId>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BMap_MR_GraphVertId_MR_GraphVertId_Set_b(MR_BMap_MR_GraphVertId_MR_GraphVertId *_this, MR_PassBy value_pass_by, MR_Buffer_MR_GraphVertId_MR_GraphVertId *value);

/// Returns a mutable pointer to a member variable of class `MR::BMap<MR::GraphVertId, MR::GraphVertId>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_GraphVertId_MR_GraphVertId *MR_BMap_MR_GraphVertId_MR_GraphVertId_GetMutable_b(MR_BMap_MR_GraphVertId_MR_GraphVertId *_this);

///< target size, all values inside b must be less than this value
/// Returns a pointer to a member variable of class `MR::BMap<MR::GraphVertId, MR::GraphVertId>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_BMap_MR_GraphVertId_MR_GraphVertId_Get_tsize(const MR_BMap_MR_GraphVertId_MR_GraphVertId *_this);

///< target size, all values inside b must be less than this value
/// Modifies a member variable of class `MR::BMap<MR::GraphVertId, MR::GraphVertId>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BMap_MR_GraphVertId_MR_GraphVertId_Set_tsize(MR_BMap_MR_GraphVertId_MR_GraphVertId *_this, MR_uint64_t value);

///< target size, all values inside b must be less than this value
/// Returns a mutable pointer to a member variable of class `MR::BMap<MR::GraphVertId, MR::GraphVertId>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_BMap_MR_GraphVertId_MR_GraphVertId_GetMutable_tsize(MR_BMap_MR_GraphVertId_MR_GraphVertId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_GraphVertId_MR_GraphVertId_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_GraphVertId_MR_GraphVertId *MR_BMap_MR_GraphVertId_MR_GraphVertId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BMap_MR_GraphVertId_MR_GraphVertId_DestroyArray()`.
/// Use `MR_BMap_MR_GraphVertId_MR_GraphVertId_OffsetMutablePtr()` and `MR_BMap_MR_GraphVertId_MR_GraphVertId_OffsetPtr()` to access the array elements.
MRC_API MR_BMap_MR_GraphVertId_MR_GraphVertId *MR_BMap_MR_GraphVertId_MR_GraphVertId_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::BMap<MR::GraphVertId, MR::GraphVertId>` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_GraphVertId_MR_GraphVertId_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_GraphVertId_MR_GraphVertId *MR_BMap_MR_GraphVertId_MR_GraphVertId_ConstructFrom(MR_PassBy b_pass_by, MR_Buffer_MR_GraphVertId_MR_GraphVertId *b, MR_uint64_t tsize);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BMap_MR_GraphVertId_MR_GraphVertId *MR_BMap_MR_GraphVertId_MR_GraphVertId_OffsetPtr(const MR_BMap_MR_GraphVertId_MR_GraphVertId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BMap_MR_GraphVertId_MR_GraphVertId *MR_BMap_MR_GraphVertId_MR_GraphVertId_OffsetMutablePtr(MR_BMap_MR_GraphVertId_MR_GraphVertId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::BMap<MR::GraphVertId, MR::GraphVertId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_GraphVertId_MR_GraphVertId_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_GraphVertId_MR_GraphVertId *MR_BMap_MR_GraphVertId_MR_GraphVertId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_BMap_MR_GraphVertId_MR_GraphVertId *_other);

/// Destroys a heap-allocated instance of `MR_BMap_MR_GraphVertId_MR_GraphVertId`. Does nothing if the pointer is null.
MRC_API void MR_BMap_MR_GraphVertId_MR_GraphVertId_Destroy(const MR_BMap_MR_GraphVertId_MR_GraphVertId *_this);

/// Destroys a heap-allocated array of `MR_BMap_MR_GraphVertId_MR_GraphVertId`. Does nothing if the pointer is null.
MRC_API void MR_BMap_MR_GraphVertId_MR_GraphVertId_DestroyArray(const MR_BMap_MR_GraphVertId_MR_GraphVertId *_this);

/// Generated from a method of class `MR::BMap<MR::GraphVertId, MR::GraphVertId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BMap_MR_GraphVertId_MR_GraphVertId *MR_BMap_MR_GraphVertId_MR_GraphVertId_AssignFromAnother(MR_BMap_MR_GraphVertId_MR_GraphVertId *_this, MR_PassBy _other_pass_by, MR_BMap_MR_GraphVertId_MR_GraphVertId *_other);

/// Returns a pointer to a member variable of class `MR::BMap<MR::GraphEdgeId, MR::GraphEdgeId>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId_Get_b(const MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId *_this);

/// Modifies a member variable of class `MR::BMap<MR::GraphEdgeId, MR::GraphEdgeId>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId_Set_b(MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId *_this, MR_PassBy value_pass_by, MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *value);

/// Returns a mutable pointer to a member variable of class `MR::BMap<MR::GraphEdgeId, MR::GraphEdgeId>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId_GetMutable_b(MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId *_this);

///< target size, all values inside b must be less than this value
/// Returns a pointer to a member variable of class `MR::BMap<MR::GraphEdgeId, MR::GraphEdgeId>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId_Get_tsize(const MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId *_this);

///< target size, all values inside b must be less than this value
/// Modifies a member variable of class `MR::BMap<MR::GraphEdgeId, MR::GraphEdgeId>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId_Set_tsize(MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId *_this, MR_uint64_t value);

///< target size, all values inside b must be less than this value
/// Returns a mutable pointer to a member variable of class `MR::BMap<MR::GraphEdgeId, MR::GraphEdgeId>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId_GetMutable_tsize(MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId *MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId_DestroyArray()`.
/// Use `MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId_OffsetMutablePtr()` and `MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId_OffsetPtr()` to access the array elements.
MRC_API MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId *MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::BMap<MR::GraphEdgeId, MR::GraphEdgeId>` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId *MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId_ConstructFrom(MR_PassBy b_pass_by, MR_Buffer_MR_GraphEdgeId_MR_GraphEdgeId *b, MR_uint64_t tsize);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId *MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId_OffsetPtr(const MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId *MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId_OffsetMutablePtr(MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::BMap<MR::GraphEdgeId, MR::GraphEdgeId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId *MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId *_other);

/// Destroys a heap-allocated instance of `MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId`. Does nothing if the pointer is null.
MRC_API void MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId_Destroy(const MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId *_this);

/// Destroys a heap-allocated array of `MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId`. Does nothing if the pointer is null.
MRC_API void MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId_DestroyArray(const MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId *_this);

/// Generated from a method of class `MR::BMap<MR::GraphEdgeId, MR::GraphEdgeId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId *MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId_AssignFromAnother(MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId *_this, MR_PassBy _other_pass_by, MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId *_other);

/// Returns a pointer to a member variable of class `MR::BMap<MR::VertId, MR_uint64_t>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Buffer_MR_VertId *MR_BMap_MR_VertId_uint64_t_Get_b(const MR_BMap_MR_VertId_uint64_t *_this);

/// Modifies a member variable of class `MR::BMap<MR::VertId, MR_uint64_t>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BMap_MR_VertId_uint64_t_Set_b(MR_BMap_MR_VertId_uint64_t *_this, MR_PassBy value_pass_by, MR_Buffer_MR_VertId *value);

/// Returns a mutable pointer to a member variable of class `MR::BMap<MR::VertId, MR_uint64_t>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_VertId *MR_BMap_MR_VertId_uint64_t_GetMutable_b(MR_BMap_MR_VertId_uint64_t *_this);

///< target size, all values inside b must be less than this value
/// Returns a pointer to a member variable of class `MR::BMap<MR::VertId, MR_uint64_t>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_BMap_MR_VertId_uint64_t_Get_tsize(const MR_BMap_MR_VertId_uint64_t *_this);

///< target size, all values inside b must be less than this value
/// Modifies a member variable of class `MR::BMap<MR::VertId, MR_uint64_t>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BMap_MR_VertId_uint64_t_Set_tsize(MR_BMap_MR_VertId_uint64_t *_this, MR_uint64_t value);

///< target size, all values inside b must be less than this value
/// Returns a mutable pointer to a member variable of class `MR::BMap<MR::VertId, MR_uint64_t>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_BMap_MR_VertId_uint64_t_GetMutable_tsize(MR_BMap_MR_VertId_uint64_t *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_VertId_uint64_t_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_VertId_uint64_t *MR_BMap_MR_VertId_uint64_t_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BMap_MR_VertId_uint64_t_DestroyArray()`.
/// Use `MR_BMap_MR_VertId_uint64_t_OffsetMutablePtr()` and `MR_BMap_MR_VertId_uint64_t_OffsetPtr()` to access the array elements.
MRC_API MR_BMap_MR_VertId_uint64_t *MR_BMap_MR_VertId_uint64_t_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::BMap<MR::VertId, MR_uint64_t>` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_VertId_uint64_t_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_VertId_uint64_t *MR_BMap_MR_VertId_uint64_t_ConstructFrom(MR_PassBy b_pass_by, MR_Buffer_MR_VertId *b, MR_uint64_t tsize);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BMap_MR_VertId_uint64_t *MR_BMap_MR_VertId_uint64_t_OffsetPtr(const MR_BMap_MR_VertId_uint64_t *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BMap_MR_VertId_uint64_t *MR_BMap_MR_VertId_uint64_t_OffsetMutablePtr(MR_BMap_MR_VertId_uint64_t *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::BMap<MR::VertId, MR_uint64_t>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_VertId_uint64_t_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_VertId_uint64_t *MR_BMap_MR_VertId_uint64_t_ConstructFromAnother(MR_PassBy _other_pass_by, MR_BMap_MR_VertId_uint64_t *_other);

/// Destroys a heap-allocated instance of `MR_BMap_MR_VertId_uint64_t`. Does nothing if the pointer is null.
MRC_API void MR_BMap_MR_VertId_uint64_t_Destroy(const MR_BMap_MR_VertId_uint64_t *_this);

/// Destroys a heap-allocated array of `MR_BMap_MR_VertId_uint64_t`. Does nothing if the pointer is null.
MRC_API void MR_BMap_MR_VertId_uint64_t_DestroyArray(const MR_BMap_MR_VertId_uint64_t *_this);

/// Generated from a method of class `MR::BMap<MR::VertId, MR_uint64_t>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BMap_MR_VertId_uint64_t *MR_BMap_MR_VertId_uint64_t_AssignFromAnother(MR_BMap_MR_VertId_uint64_t *_this, MR_PassBy _other_pass_by, MR_BMap_MR_VertId_uint64_t *_other);

/// Returns a pointer to a member variable of class `MR::BMap<MR::UndirectedEdgeId, MR_uint64_t>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Buffer_MR_UndirectedEdgeId *MR_BMap_MR_UndirectedEdgeId_uint64_t_Get_b(const MR_BMap_MR_UndirectedEdgeId_uint64_t *_this);

/// Modifies a member variable of class `MR::BMap<MR::UndirectedEdgeId, MR_uint64_t>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BMap_MR_UndirectedEdgeId_uint64_t_Set_b(MR_BMap_MR_UndirectedEdgeId_uint64_t *_this, MR_PassBy value_pass_by, MR_Buffer_MR_UndirectedEdgeId *value);

/// Returns a mutable pointer to a member variable of class `MR::BMap<MR::UndirectedEdgeId, MR_uint64_t>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_UndirectedEdgeId *MR_BMap_MR_UndirectedEdgeId_uint64_t_GetMutable_b(MR_BMap_MR_UndirectedEdgeId_uint64_t *_this);

///< target size, all values inside b must be less than this value
/// Returns a pointer to a member variable of class `MR::BMap<MR::UndirectedEdgeId, MR_uint64_t>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_BMap_MR_UndirectedEdgeId_uint64_t_Get_tsize(const MR_BMap_MR_UndirectedEdgeId_uint64_t *_this);

///< target size, all values inside b must be less than this value
/// Modifies a member variable of class `MR::BMap<MR::UndirectedEdgeId, MR_uint64_t>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BMap_MR_UndirectedEdgeId_uint64_t_Set_tsize(MR_BMap_MR_UndirectedEdgeId_uint64_t *_this, MR_uint64_t value);

///< target size, all values inside b must be less than this value
/// Returns a mutable pointer to a member variable of class `MR::BMap<MR::UndirectedEdgeId, MR_uint64_t>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_BMap_MR_UndirectedEdgeId_uint64_t_GetMutable_tsize(MR_BMap_MR_UndirectedEdgeId_uint64_t *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_UndirectedEdgeId_uint64_t_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_UndirectedEdgeId_uint64_t *MR_BMap_MR_UndirectedEdgeId_uint64_t_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BMap_MR_UndirectedEdgeId_uint64_t_DestroyArray()`.
/// Use `MR_BMap_MR_UndirectedEdgeId_uint64_t_OffsetMutablePtr()` and `MR_BMap_MR_UndirectedEdgeId_uint64_t_OffsetPtr()` to access the array elements.
MRC_API MR_BMap_MR_UndirectedEdgeId_uint64_t *MR_BMap_MR_UndirectedEdgeId_uint64_t_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::BMap<MR::UndirectedEdgeId, MR_uint64_t>` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_UndirectedEdgeId_uint64_t_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_UndirectedEdgeId_uint64_t *MR_BMap_MR_UndirectedEdgeId_uint64_t_ConstructFrom(MR_PassBy b_pass_by, MR_Buffer_MR_UndirectedEdgeId *b, MR_uint64_t tsize);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BMap_MR_UndirectedEdgeId_uint64_t *MR_BMap_MR_UndirectedEdgeId_uint64_t_OffsetPtr(const MR_BMap_MR_UndirectedEdgeId_uint64_t *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BMap_MR_UndirectedEdgeId_uint64_t *MR_BMap_MR_UndirectedEdgeId_uint64_t_OffsetMutablePtr(MR_BMap_MR_UndirectedEdgeId_uint64_t *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::BMap<MR::UndirectedEdgeId, MR_uint64_t>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_UndirectedEdgeId_uint64_t_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_UndirectedEdgeId_uint64_t *MR_BMap_MR_UndirectedEdgeId_uint64_t_ConstructFromAnother(MR_PassBy _other_pass_by, MR_BMap_MR_UndirectedEdgeId_uint64_t *_other);

/// Destroys a heap-allocated instance of `MR_BMap_MR_UndirectedEdgeId_uint64_t`. Does nothing if the pointer is null.
MRC_API void MR_BMap_MR_UndirectedEdgeId_uint64_t_Destroy(const MR_BMap_MR_UndirectedEdgeId_uint64_t *_this);

/// Destroys a heap-allocated array of `MR_BMap_MR_UndirectedEdgeId_uint64_t`. Does nothing if the pointer is null.
MRC_API void MR_BMap_MR_UndirectedEdgeId_uint64_t_DestroyArray(const MR_BMap_MR_UndirectedEdgeId_uint64_t *_this);

/// Generated from a method of class `MR::BMap<MR::UndirectedEdgeId, MR_uint64_t>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BMap_MR_UndirectedEdgeId_uint64_t *MR_BMap_MR_UndirectedEdgeId_uint64_t_AssignFromAnother(MR_BMap_MR_UndirectedEdgeId_uint64_t *_this, MR_PassBy _other_pass_by, MR_BMap_MR_UndirectedEdgeId_uint64_t *_other);

/// Returns a pointer to a member variable of class `MR::BMap<MR::FaceId, MR_uint64_t>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Buffer_MR_FaceId *MR_BMap_MR_FaceId_uint64_t_Get_b(const MR_BMap_MR_FaceId_uint64_t *_this);

/// Modifies a member variable of class `MR::BMap<MR::FaceId, MR_uint64_t>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BMap_MR_FaceId_uint64_t_Set_b(MR_BMap_MR_FaceId_uint64_t *_this, MR_PassBy value_pass_by, MR_Buffer_MR_FaceId *value);

/// Returns a mutable pointer to a member variable of class `MR::BMap<MR::FaceId, MR_uint64_t>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_FaceId *MR_BMap_MR_FaceId_uint64_t_GetMutable_b(MR_BMap_MR_FaceId_uint64_t *_this);

///< target size, all values inside b must be less than this value
/// Returns a pointer to a member variable of class `MR::BMap<MR::FaceId, MR_uint64_t>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_BMap_MR_FaceId_uint64_t_Get_tsize(const MR_BMap_MR_FaceId_uint64_t *_this);

///< target size, all values inside b must be less than this value
/// Modifies a member variable of class `MR::BMap<MR::FaceId, MR_uint64_t>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BMap_MR_FaceId_uint64_t_Set_tsize(MR_BMap_MR_FaceId_uint64_t *_this, MR_uint64_t value);

///< target size, all values inside b must be less than this value
/// Returns a mutable pointer to a member variable of class `MR::BMap<MR::FaceId, MR_uint64_t>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_BMap_MR_FaceId_uint64_t_GetMutable_tsize(MR_BMap_MR_FaceId_uint64_t *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_FaceId_uint64_t_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_FaceId_uint64_t *MR_BMap_MR_FaceId_uint64_t_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BMap_MR_FaceId_uint64_t_DestroyArray()`.
/// Use `MR_BMap_MR_FaceId_uint64_t_OffsetMutablePtr()` and `MR_BMap_MR_FaceId_uint64_t_OffsetPtr()` to access the array elements.
MRC_API MR_BMap_MR_FaceId_uint64_t *MR_BMap_MR_FaceId_uint64_t_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::BMap<MR::FaceId, MR_uint64_t>` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_FaceId_uint64_t_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_FaceId_uint64_t *MR_BMap_MR_FaceId_uint64_t_ConstructFrom(MR_PassBy b_pass_by, MR_Buffer_MR_FaceId *b, MR_uint64_t tsize);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BMap_MR_FaceId_uint64_t *MR_BMap_MR_FaceId_uint64_t_OffsetPtr(const MR_BMap_MR_FaceId_uint64_t *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BMap_MR_FaceId_uint64_t *MR_BMap_MR_FaceId_uint64_t_OffsetMutablePtr(MR_BMap_MR_FaceId_uint64_t *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::BMap<MR::FaceId, MR_uint64_t>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_FaceId_uint64_t_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_FaceId_uint64_t *MR_BMap_MR_FaceId_uint64_t_ConstructFromAnother(MR_PassBy _other_pass_by, MR_BMap_MR_FaceId_uint64_t *_other);

/// Destroys a heap-allocated instance of `MR_BMap_MR_FaceId_uint64_t`. Does nothing if the pointer is null.
MRC_API void MR_BMap_MR_FaceId_uint64_t_Destroy(const MR_BMap_MR_FaceId_uint64_t *_this);

/// Destroys a heap-allocated array of `MR_BMap_MR_FaceId_uint64_t`. Does nothing if the pointer is null.
MRC_API void MR_BMap_MR_FaceId_uint64_t_DestroyArray(const MR_BMap_MR_FaceId_uint64_t *_this);

/// Generated from a method of class `MR::BMap<MR::FaceId, MR_uint64_t>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BMap_MR_FaceId_uint64_t *MR_BMap_MR_FaceId_uint64_t_AssignFromAnother(MR_BMap_MR_FaceId_uint64_t *_this, MR_PassBy _other_pass_by, MR_BMap_MR_FaceId_uint64_t *_other);

/// Returns a pointer to a member variable of class `MR::BMap<MR::VoxelId, MR::VoxelId>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Buffer_MR_VoxelId_MR_VoxelId *MR_BMap_MR_VoxelId_MR_VoxelId_Get_b(const MR_BMap_MR_VoxelId_MR_VoxelId *_this);

/// Modifies a member variable of class `MR::BMap<MR::VoxelId, MR::VoxelId>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BMap_MR_VoxelId_MR_VoxelId_Set_b(MR_BMap_MR_VoxelId_MR_VoxelId *_this, MR_PassBy value_pass_by, MR_Buffer_MR_VoxelId_MR_VoxelId *value);

/// Returns a mutable pointer to a member variable of class `MR::BMap<MR::VoxelId, MR::VoxelId>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_VoxelId_MR_VoxelId *MR_BMap_MR_VoxelId_MR_VoxelId_GetMutable_b(MR_BMap_MR_VoxelId_MR_VoxelId *_this);

///< target size, all values inside b must be less than this value
/// Returns a pointer to a member variable of class `MR::BMap<MR::VoxelId, MR::VoxelId>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_BMap_MR_VoxelId_MR_VoxelId_Get_tsize(const MR_BMap_MR_VoxelId_MR_VoxelId *_this);

///< target size, all values inside b must be less than this value
/// Modifies a member variable of class `MR::BMap<MR::VoxelId, MR::VoxelId>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BMap_MR_VoxelId_MR_VoxelId_Set_tsize(MR_BMap_MR_VoxelId_MR_VoxelId *_this, MR_uint64_t value);

///< target size, all values inside b must be less than this value
/// Returns a mutable pointer to a member variable of class `MR::BMap<MR::VoxelId, MR::VoxelId>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_BMap_MR_VoxelId_MR_VoxelId_GetMutable_tsize(MR_BMap_MR_VoxelId_MR_VoxelId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_VoxelId_MR_VoxelId_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_VoxelId_MR_VoxelId *MR_BMap_MR_VoxelId_MR_VoxelId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BMap_MR_VoxelId_MR_VoxelId_DestroyArray()`.
/// Use `MR_BMap_MR_VoxelId_MR_VoxelId_OffsetMutablePtr()` and `MR_BMap_MR_VoxelId_MR_VoxelId_OffsetPtr()` to access the array elements.
MRC_API MR_BMap_MR_VoxelId_MR_VoxelId *MR_BMap_MR_VoxelId_MR_VoxelId_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::BMap<MR::VoxelId, MR::VoxelId>` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_VoxelId_MR_VoxelId_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_VoxelId_MR_VoxelId *MR_BMap_MR_VoxelId_MR_VoxelId_ConstructFrom(MR_PassBy b_pass_by, MR_Buffer_MR_VoxelId_MR_VoxelId *b, MR_uint64_t tsize);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BMap_MR_VoxelId_MR_VoxelId *MR_BMap_MR_VoxelId_MR_VoxelId_OffsetPtr(const MR_BMap_MR_VoxelId_MR_VoxelId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BMap_MR_VoxelId_MR_VoxelId *MR_BMap_MR_VoxelId_MR_VoxelId_OffsetMutablePtr(MR_BMap_MR_VoxelId_MR_VoxelId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::BMap<MR::VoxelId, MR::VoxelId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_VoxelId_MR_VoxelId_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_VoxelId_MR_VoxelId *MR_BMap_MR_VoxelId_MR_VoxelId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_BMap_MR_VoxelId_MR_VoxelId *_other);

/// Destroys a heap-allocated instance of `MR_BMap_MR_VoxelId_MR_VoxelId`. Does nothing if the pointer is null.
MRC_API void MR_BMap_MR_VoxelId_MR_VoxelId_Destroy(const MR_BMap_MR_VoxelId_MR_VoxelId *_this);

/// Destroys a heap-allocated array of `MR_BMap_MR_VoxelId_MR_VoxelId`. Does nothing if the pointer is null.
MRC_API void MR_BMap_MR_VoxelId_MR_VoxelId_DestroyArray(const MR_BMap_MR_VoxelId_MR_VoxelId *_this);

/// Generated from a method of class `MR::BMap<MR::VoxelId, MR::VoxelId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BMap_MR_VoxelId_MR_VoxelId *MR_BMap_MR_VoxelId_MR_VoxelId_AssignFromAnother(MR_BMap_MR_VoxelId_MR_VoxelId *_this, MR_PassBy _other_pass_by, MR_BMap_MR_VoxelId_MR_VoxelId *_other);

/// Returns a pointer to a member variable of class `MR::BMap<MR::PixelId, MR::PixelId>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Buffer_MR_PixelId_MR_PixelId *MR_BMap_MR_PixelId_MR_PixelId_Get_b(const MR_BMap_MR_PixelId_MR_PixelId *_this);

/// Modifies a member variable of class `MR::BMap<MR::PixelId, MR::PixelId>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BMap_MR_PixelId_MR_PixelId_Set_b(MR_BMap_MR_PixelId_MR_PixelId *_this, MR_PassBy value_pass_by, MR_Buffer_MR_PixelId_MR_PixelId *value);

/// Returns a mutable pointer to a member variable of class `MR::BMap<MR::PixelId, MR::PixelId>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_PixelId_MR_PixelId *MR_BMap_MR_PixelId_MR_PixelId_GetMutable_b(MR_BMap_MR_PixelId_MR_PixelId *_this);

///< target size, all values inside b must be less than this value
/// Returns a pointer to a member variable of class `MR::BMap<MR::PixelId, MR::PixelId>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_BMap_MR_PixelId_MR_PixelId_Get_tsize(const MR_BMap_MR_PixelId_MR_PixelId *_this);

///< target size, all values inside b must be less than this value
/// Modifies a member variable of class `MR::BMap<MR::PixelId, MR::PixelId>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BMap_MR_PixelId_MR_PixelId_Set_tsize(MR_BMap_MR_PixelId_MR_PixelId *_this, MR_uint64_t value);

///< target size, all values inside b must be less than this value
/// Returns a mutable pointer to a member variable of class `MR::BMap<MR::PixelId, MR::PixelId>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_BMap_MR_PixelId_MR_PixelId_GetMutable_tsize(MR_BMap_MR_PixelId_MR_PixelId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_PixelId_MR_PixelId_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_PixelId_MR_PixelId *MR_BMap_MR_PixelId_MR_PixelId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BMap_MR_PixelId_MR_PixelId_DestroyArray()`.
/// Use `MR_BMap_MR_PixelId_MR_PixelId_OffsetMutablePtr()` and `MR_BMap_MR_PixelId_MR_PixelId_OffsetPtr()` to access the array elements.
MRC_API MR_BMap_MR_PixelId_MR_PixelId *MR_BMap_MR_PixelId_MR_PixelId_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::BMap<MR::PixelId, MR::PixelId>` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_PixelId_MR_PixelId_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_PixelId_MR_PixelId *MR_BMap_MR_PixelId_MR_PixelId_ConstructFrom(MR_PassBy b_pass_by, MR_Buffer_MR_PixelId_MR_PixelId *b, MR_uint64_t tsize);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BMap_MR_PixelId_MR_PixelId *MR_BMap_MR_PixelId_MR_PixelId_OffsetPtr(const MR_BMap_MR_PixelId_MR_PixelId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BMap_MR_PixelId_MR_PixelId *MR_BMap_MR_PixelId_MR_PixelId_OffsetMutablePtr(MR_BMap_MR_PixelId_MR_PixelId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::BMap<MR::PixelId, MR::PixelId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_PixelId_MR_PixelId_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_PixelId_MR_PixelId *MR_BMap_MR_PixelId_MR_PixelId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_BMap_MR_PixelId_MR_PixelId *_other);

/// Destroys a heap-allocated instance of `MR_BMap_MR_PixelId_MR_PixelId`. Does nothing if the pointer is null.
MRC_API void MR_BMap_MR_PixelId_MR_PixelId_Destroy(const MR_BMap_MR_PixelId_MR_PixelId *_this);

/// Destroys a heap-allocated array of `MR_BMap_MR_PixelId_MR_PixelId`. Does nothing if the pointer is null.
MRC_API void MR_BMap_MR_PixelId_MR_PixelId_DestroyArray(const MR_BMap_MR_PixelId_MR_PixelId *_this);

/// Generated from a method of class `MR::BMap<MR::PixelId, MR::PixelId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BMap_MR_PixelId_MR_PixelId *MR_BMap_MR_PixelId_MR_PixelId_AssignFromAnother(MR_BMap_MR_PixelId_MR_PixelId *_this, MR_PassBy _other_pass_by, MR_BMap_MR_PixelId_MR_PixelId *_other);

/// Returns a pointer to a member variable of class `MR::BMap<MR::RegionId, MR::RegionId>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Buffer_MR_RegionId_MR_RegionId *MR_BMap_MR_RegionId_MR_RegionId_Get_b(const MR_BMap_MR_RegionId_MR_RegionId *_this);

/// Modifies a member variable of class `MR::BMap<MR::RegionId, MR::RegionId>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BMap_MR_RegionId_MR_RegionId_Set_b(MR_BMap_MR_RegionId_MR_RegionId *_this, MR_PassBy value_pass_by, MR_Buffer_MR_RegionId_MR_RegionId *value);

/// Returns a mutable pointer to a member variable of class `MR::BMap<MR::RegionId, MR::RegionId>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_RegionId_MR_RegionId *MR_BMap_MR_RegionId_MR_RegionId_GetMutable_b(MR_BMap_MR_RegionId_MR_RegionId *_this);

///< target size, all values inside b must be less than this value
/// Returns a pointer to a member variable of class `MR::BMap<MR::RegionId, MR::RegionId>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_BMap_MR_RegionId_MR_RegionId_Get_tsize(const MR_BMap_MR_RegionId_MR_RegionId *_this);

///< target size, all values inside b must be less than this value
/// Modifies a member variable of class `MR::BMap<MR::RegionId, MR::RegionId>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BMap_MR_RegionId_MR_RegionId_Set_tsize(MR_BMap_MR_RegionId_MR_RegionId *_this, MR_uint64_t value);

///< target size, all values inside b must be less than this value
/// Returns a mutable pointer to a member variable of class `MR::BMap<MR::RegionId, MR::RegionId>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_BMap_MR_RegionId_MR_RegionId_GetMutable_tsize(MR_BMap_MR_RegionId_MR_RegionId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_RegionId_MR_RegionId_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_RegionId_MR_RegionId *MR_BMap_MR_RegionId_MR_RegionId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BMap_MR_RegionId_MR_RegionId_DestroyArray()`.
/// Use `MR_BMap_MR_RegionId_MR_RegionId_OffsetMutablePtr()` and `MR_BMap_MR_RegionId_MR_RegionId_OffsetPtr()` to access the array elements.
MRC_API MR_BMap_MR_RegionId_MR_RegionId *MR_BMap_MR_RegionId_MR_RegionId_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::BMap<MR::RegionId, MR::RegionId>` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_RegionId_MR_RegionId_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_RegionId_MR_RegionId *MR_BMap_MR_RegionId_MR_RegionId_ConstructFrom(MR_PassBy b_pass_by, MR_Buffer_MR_RegionId_MR_RegionId *b, MR_uint64_t tsize);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BMap_MR_RegionId_MR_RegionId *MR_BMap_MR_RegionId_MR_RegionId_OffsetPtr(const MR_BMap_MR_RegionId_MR_RegionId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BMap_MR_RegionId_MR_RegionId *MR_BMap_MR_RegionId_MR_RegionId_OffsetMutablePtr(MR_BMap_MR_RegionId_MR_RegionId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::BMap<MR::RegionId, MR::RegionId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_RegionId_MR_RegionId_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_RegionId_MR_RegionId *MR_BMap_MR_RegionId_MR_RegionId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_BMap_MR_RegionId_MR_RegionId *_other);

/// Destroys a heap-allocated instance of `MR_BMap_MR_RegionId_MR_RegionId`. Does nothing if the pointer is null.
MRC_API void MR_BMap_MR_RegionId_MR_RegionId_Destroy(const MR_BMap_MR_RegionId_MR_RegionId *_this);

/// Destroys a heap-allocated array of `MR_BMap_MR_RegionId_MR_RegionId`. Does nothing if the pointer is null.
MRC_API void MR_BMap_MR_RegionId_MR_RegionId_DestroyArray(const MR_BMap_MR_RegionId_MR_RegionId *_this);

/// Generated from a method of class `MR::BMap<MR::RegionId, MR::RegionId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BMap_MR_RegionId_MR_RegionId *MR_BMap_MR_RegionId_MR_RegionId_AssignFromAnother(MR_BMap_MR_RegionId_MR_RegionId *_this, MR_PassBy _other_pass_by, MR_BMap_MR_RegionId_MR_RegionId *_other);

/// Returns a pointer to a member variable of class `MR::BMap<MR::NodeId, MR::NodeId>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Buffer_MR_NodeId_MR_NodeId *MR_BMap_MR_NodeId_MR_NodeId_Get_b(const MR_BMap_MR_NodeId_MR_NodeId *_this);

/// Modifies a member variable of class `MR::BMap<MR::NodeId, MR::NodeId>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BMap_MR_NodeId_MR_NodeId_Set_b(MR_BMap_MR_NodeId_MR_NodeId *_this, MR_PassBy value_pass_by, MR_Buffer_MR_NodeId_MR_NodeId *value);

/// Returns a mutable pointer to a member variable of class `MR::BMap<MR::NodeId, MR::NodeId>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_NodeId_MR_NodeId *MR_BMap_MR_NodeId_MR_NodeId_GetMutable_b(MR_BMap_MR_NodeId_MR_NodeId *_this);

///< target size, all values inside b must be less than this value
/// Returns a pointer to a member variable of class `MR::BMap<MR::NodeId, MR::NodeId>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_BMap_MR_NodeId_MR_NodeId_Get_tsize(const MR_BMap_MR_NodeId_MR_NodeId *_this);

///< target size, all values inside b must be less than this value
/// Modifies a member variable of class `MR::BMap<MR::NodeId, MR::NodeId>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BMap_MR_NodeId_MR_NodeId_Set_tsize(MR_BMap_MR_NodeId_MR_NodeId *_this, MR_uint64_t value);

///< target size, all values inside b must be less than this value
/// Returns a mutable pointer to a member variable of class `MR::BMap<MR::NodeId, MR::NodeId>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_BMap_MR_NodeId_MR_NodeId_GetMutable_tsize(MR_BMap_MR_NodeId_MR_NodeId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_NodeId_MR_NodeId_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_NodeId_MR_NodeId *MR_BMap_MR_NodeId_MR_NodeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BMap_MR_NodeId_MR_NodeId_DestroyArray()`.
/// Use `MR_BMap_MR_NodeId_MR_NodeId_OffsetMutablePtr()` and `MR_BMap_MR_NodeId_MR_NodeId_OffsetPtr()` to access the array elements.
MRC_API MR_BMap_MR_NodeId_MR_NodeId *MR_BMap_MR_NodeId_MR_NodeId_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::BMap<MR::NodeId, MR::NodeId>` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_NodeId_MR_NodeId_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_NodeId_MR_NodeId *MR_BMap_MR_NodeId_MR_NodeId_ConstructFrom(MR_PassBy b_pass_by, MR_Buffer_MR_NodeId_MR_NodeId *b, MR_uint64_t tsize);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BMap_MR_NodeId_MR_NodeId *MR_BMap_MR_NodeId_MR_NodeId_OffsetPtr(const MR_BMap_MR_NodeId_MR_NodeId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BMap_MR_NodeId_MR_NodeId *MR_BMap_MR_NodeId_MR_NodeId_OffsetMutablePtr(MR_BMap_MR_NodeId_MR_NodeId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::BMap<MR::NodeId, MR::NodeId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_NodeId_MR_NodeId_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_NodeId_MR_NodeId *MR_BMap_MR_NodeId_MR_NodeId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_BMap_MR_NodeId_MR_NodeId *_other);

/// Destroys a heap-allocated instance of `MR_BMap_MR_NodeId_MR_NodeId`. Does nothing if the pointer is null.
MRC_API void MR_BMap_MR_NodeId_MR_NodeId_Destroy(const MR_BMap_MR_NodeId_MR_NodeId *_this);

/// Destroys a heap-allocated array of `MR_BMap_MR_NodeId_MR_NodeId`. Does nothing if the pointer is null.
MRC_API void MR_BMap_MR_NodeId_MR_NodeId_DestroyArray(const MR_BMap_MR_NodeId_MR_NodeId *_this);

/// Generated from a method of class `MR::BMap<MR::NodeId, MR::NodeId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BMap_MR_NodeId_MR_NodeId *MR_BMap_MR_NodeId_MR_NodeId_AssignFromAnother(MR_BMap_MR_NodeId_MR_NodeId *_this, MR_PassBy _other_pass_by, MR_BMap_MR_NodeId_MR_NodeId *_other);

/// Returns a pointer to a member variable of class `MR::BMap<MR::TextureId, MR::TextureId>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Buffer_MR_TextureId_MR_TextureId *MR_BMap_MR_TextureId_MR_TextureId_Get_b(const MR_BMap_MR_TextureId_MR_TextureId *_this);

/// Modifies a member variable of class `MR::BMap<MR::TextureId, MR::TextureId>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BMap_MR_TextureId_MR_TextureId_Set_b(MR_BMap_MR_TextureId_MR_TextureId *_this, MR_PassBy value_pass_by, MR_Buffer_MR_TextureId_MR_TextureId *value);

/// Returns a mutable pointer to a member variable of class `MR::BMap<MR::TextureId, MR::TextureId>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_TextureId_MR_TextureId *MR_BMap_MR_TextureId_MR_TextureId_GetMutable_b(MR_BMap_MR_TextureId_MR_TextureId *_this);

///< target size, all values inside b must be less than this value
/// Returns a pointer to a member variable of class `MR::BMap<MR::TextureId, MR::TextureId>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_BMap_MR_TextureId_MR_TextureId_Get_tsize(const MR_BMap_MR_TextureId_MR_TextureId *_this);

///< target size, all values inside b must be less than this value
/// Modifies a member variable of class `MR::BMap<MR::TextureId, MR::TextureId>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BMap_MR_TextureId_MR_TextureId_Set_tsize(MR_BMap_MR_TextureId_MR_TextureId *_this, MR_uint64_t value);

///< target size, all values inside b must be less than this value
/// Returns a mutable pointer to a member variable of class `MR::BMap<MR::TextureId, MR::TextureId>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_BMap_MR_TextureId_MR_TextureId_GetMutable_tsize(MR_BMap_MR_TextureId_MR_TextureId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_TextureId_MR_TextureId_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_TextureId_MR_TextureId *MR_BMap_MR_TextureId_MR_TextureId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BMap_MR_TextureId_MR_TextureId_DestroyArray()`.
/// Use `MR_BMap_MR_TextureId_MR_TextureId_OffsetMutablePtr()` and `MR_BMap_MR_TextureId_MR_TextureId_OffsetPtr()` to access the array elements.
MRC_API MR_BMap_MR_TextureId_MR_TextureId *MR_BMap_MR_TextureId_MR_TextureId_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::BMap<MR::TextureId, MR::TextureId>` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_TextureId_MR_TextureId_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_TextureId_MR_TextureId *MR_BMap_MR_TextureId_MR_TextureId_ConstructFrom(MR_PassBy b_pass_by, MR_Buffer_MR_TextureId_MR_TextureId *b, MR_uint64_t tsize);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BMap_MR_TextureId_MR_TextureId *MR_BMap_MR_TextureId_MR_TextureId_OffsetPtr(const MR_BMap_MR_TextureId_MR_TextureId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BMap_MR_TextureId_MR_TextureId *MR_BMap_MR_TextureId_MR_TextureId_OffsetMutablePtr(MR_BMap_MR_TextureId_MR_TextureId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::BMap<MR::TextureId, MR::TextureId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_TextureId_MR_TextureId_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_TextureId_MR_TextureId *MR_BMap_MR_TextureId_MR_TextureId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_BMap_MR_TextureId_MR_TextureId *_other);

/// Destroys a heap-allocated instance of `MR_BMap_MR_TextureId_MR_TextureId`. Does nothing if the pointer is null.
MRC_API void MR_BMap_MR_TextureId_MR_TextureId_Destroy(const MR_BMap_MR_TextureId_MR_TextureId *_this);

/// Destroys a heap-allocated array of `MR_BMap_MR_TextureId_MR_TextureId`. Does nothing if the pointer is null.
MRC_API void MR_BMap_MR_TextureId_MR_TextureId_DestroyArray(const MR_BMap_MR_TextureId_MR_TextureId *_this);

/// Generated from a method of class `MR::BMap<MR::TextureId, MR::TextureId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BMap_MR_TextureId_MR_TextureId *MR_BMap_MR_TextureId_MR_TextureId_AssignFromAnother(MR_BMap_MR_TextureId_MR_TextureId *_this, MR_PassBy _other_pass_by, MR_BMap_MR_TextureId_MR_TextureId *_other);

/// Returns a pointer to a member variable of class `MR::BMap<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_Get_b(const MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_this);

/// Modifies a member variable of class `MR::BMap<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_Set_b(MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_this, MR_PassBy value_pass_by, MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *value);

/// Returns a mutable pointer to a member variable of class `MR::BMap<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_GetMutable_b(MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_this);

///< target size, all values inside b must be less than this value
/// Returns a pointer to a member variable of class `MR::BMap<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_Get_tsize(const MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_this);

///< target size, all values inside b must be less than this value
/// Modifies a member variable of class `MR::BMap<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_Set_tsize(MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_this, MR_uint64_t value);

///< target size, all values inside b must be less than this value
/// Returns a mutable pointer to a member variable of class `MR::BMap<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>` named `tsize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_GetMutable_tsize(MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_DestroyArray()`.
/// Use `MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_OffsetMutablePtr()` and `MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_OffsetPtr()` to access the array elements.
MRC_API MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::BMap<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_ConstructFrom(MR_PassBy b_pass_by, MR_Buffer_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *b, MR_uint64_t tsize);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_OffsetPtr(const MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_OffsetMutablePtr(MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::BMap<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_ConstructFromAnother(MR_PassBy _other_pass_by, MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_other);

/// Destroys a heap-allocated instance of `MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag`. Does nothing if the pointer is null.
MRC_API void MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_Destroy(const MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_this);

/// Destroys a heap-allocated array of `MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag`. Does nothing if the pointer is null.
MRC_API void MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_DestroyArray(const MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_this);

/// Generated from a method of class `MR::BMap<MR::Id<MR::ICPElemtTag>, MR::Id<MR::ICPElemtTag>>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag_AssignFromAnother(MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_this, MR_PassBy _other_pass_by, MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *_other);

/// Returns a pointer to a member variable of class `MR::ZeroOnMove<MR_uint64_t>` named `val`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_ZeroOnMove_uint64_t_Get_val(const MR_ZeroOnMove_uint64_t *_this);

/// Modifies a member variable of class `MR::ZeroOnMove<MR_uint64_t>` named `val`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ZeroOnMove_uint64_t_Set_val(MR_ZeroOnMove_uint64_t *_this, MR_uint64_t value);

/// Returns a mutable pointer to a member variable of class `MR::ZeroOnMove<MR_uint64_t>` named `val`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_ZeroOnMove_uint64_t_GetMutable_val(MR_ZeroOnMove_uint64_t *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ZeroOnMove_uint64_t_Destroy()` to free it when you're done using it.
MRC_API MR_ZeroOnMove_uint64_t *MR_ZeroOnMove_uint64_t_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ZeroOnMove_uint64_t_DestroyArray()`.
/// Use `MR_ZeroOnMove_uint64_t_OffsetMutablePtr()` and `MR_ZeroOnMove_uint64_t_OffsetPtr()` to access the array elements.
MRC_API MR_ZeroOnMove_uint64_t *MR_ZeroOnMove_uint64_t_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ZeroOnMove_uint64_t *MR_ZeroOnMove_uint64_t_OffsetPtr(const MR_ZeroOnMove_uint64_t *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ZeroOnMove_uint64_t *MR_ZeroOnMove_uint64_t_OffsetMutablePtr(MR_ZeroOnMove_uint64_t *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ZeroOnMove<MR_uint64_t>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ZeroOnMove_uint64_t_Destroy()` to free it when you're done using it.
MRC_API MR_ZeroOnMove_uint64_t *MR_ZeroOnMove_uint64_t_ConstructFromAnother(MR_PassBy z_pass_by, MR_ZeroOnMove_uint64_t *z);

/// Destroys a heap-allocated instance of `MR_ZeroOnMove_uint64_t`. Does nothing if the pointer is null.
MRC_API void MR_ZeroOnMove_uint64_t_Destroy(const MR_ZeroOnMove_uint64_t *_this);

/// Destroys a heap-allocated array of `MR_ZeroOnMove_uint64_t`. Does nothing if the pointer is null.
MRC_API void MR_ZeroOnMove_uint64_t_DestroyArray(const MR_ZeroOnMove_uint64_t *_this);

/// Generated from a method of class `MR::ZeroOnMove<MR_uint64_t>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ZeroOnMove_uint64_t *MR_ZeroOnMove_uint64_t_AssignFromAnother(MR_ZeroOnMove_uint64_t *_this, MR_PassBy z_pass_by, MR_ZeroOnMove_uint64_t *z);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_UndirectedEdgeId *MR_NoCtor_MR_UndirectedEdgeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoCtor_MR_UndirectedEdgeId_DestroyArray()`.
/// Use `MR_NoCtor_MR_UndirectedEdgeId_OffsetMutablePtr()` and `MR_NoCtor_MR_UndirectedEdgeId_OffsetPtr()` to access the array elements.
MRC_API MR_NoCtor_MR_UndirectedEdgeId *MR_NoCtor_MR_UndirectedEdgeId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoCtor_MR_UndirectedEdgeId *MR_NoCtor_MR_UndirectedEdgeId_OffsetPtr(const MR_NoCtor_MR_UndirectedEdgeId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoCtor_MR_UndirectedEdgeId *MR_NoCtor_MR_UndirectedEdgeId_OffsetMutablePtr(MR_NoCtor_MR_UndirectedEdgeId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::NoCtor<MR::UndirectedEdgeId>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_UndirectedEdgeId *MR_NoCtor_MR_UndirectedEdgeId_ConstructFromAnother(const MR_NoCtor_MR_UndirectedEdgeId *_other);

/// Destroys a heap-allocated instance of `MR_NoCtor_MR_UndirectedEdgeId`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_UndirectedEdgeId_Destroy(const MR_NoCtor_MR_UndirectedEdgeId *_this);

/// Destroys a heap-allocated array of `MR_NoCtor_MR_UndirectedEdgeId`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_UndirectedEdgeId_DestroyArray(const MR_NoCtor_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::NoCtor<MR::UndirectedEdgeId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoCtor_MR_UndirectedEdgeId *MR_NoCtor_MR_UndirectedEdgeId_AssignFromAnother(MR_NoCtor_MR_UndirectedEdgeId *_this, const MR_NoCtor_MR_UndirectedEdgeId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_FaceId_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_FaceId *MR_NoCtor_MR_FaceId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoCtor_MR_FaceId_DestroyArray()`.
/// Use `MR_NoCtor_MR_FaceId_OffsetMutablePtr()` and `MR_NoCtor_MR_FaceId_OffsetPtr()` to access the array elements.
MRC_API MR_NoCtor_MR_FaceId *MR_NoCtor_MR_FaceId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoCtor_MR_FaceId *MR_NoCtor_MR_FaceId_OffsetPtr(const MR_NoCtor_MR_FaceId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoCtor_MR_FaceId *MR_NoCtor_MR_FaceId_OffsetMutablePtr(MR_NoCtor_MR_FaceId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::NoCtor<MR::FaceId>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_FaceId_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_FaceId *MR_NoCtor_MR_FaceId_ConstructFromAnother(const MR_NoCtor_MR_FaceId *_other);

/// Destroys a heap-allocated instance of `MR_NoCtor_MR_FaceId`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_FaceId_Destroy(const MR_NoCtor_MR_FaceId *_this);

/// Destroys a heap-allocated array of `MR_NoCtor_MR_FaceId`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_FaceId_DestroyArray(const MR_NoCtor_MR_FaceId *_this);

/// Generated from a method of class `MR::NoCtor<MR::FaceId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoCtor_MR_FaceId *MR_NoCtor_MR_FaceId_AssignFromAnother(MR_NoCtor_MR_FaceId *_this, const MR_NoCtor_MR_FaceId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_VertId *MR_NoCtor_MR_VertId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoCtor_MR_VertId_DestroyArray()`.
/// Use `MR_NoCtor_MR_VertId_OffsetMutablePtr()` and `MR_NoCtor_MR_VertId_OffsetPtr()` to access the array elements.
MRC_API MR_NoCtor_MR_VertId *MR_NoCtor_MR_VertId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoCtor_MR_VertId *MR_NoCtor_MR_VertId_OffsetPtr(const MR_NoCtor_MR_VertId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoCtor_MR_VertId *MR_NoCtor_MR_VertId_OffsetMutablePtr(MR_NoCtor_MR_VertId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::NoCtor<MR::VertId>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_VertId *MR_NoCtor_MR_VertId_ConstructFromAnother(const MR_NoCtor_MR_VertId *_other);

/// Destroys a heap-allocated instance of `MR_NoCtor_MR_VertId`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_VertId_Destroy(const MR_NoCtor_MR_VertId *_this);

/// Destroys a heap-allocated array of `MR_NoCtor_MR_VertId`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_VertId_DestroyArray(const MR_NoCtor_MR_VertId *_this);

/// Generated from a method of class `MR::NoCtor<MR::VertId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoCtor_MR_VertId *MR_NoCtor_MR_VertId_AssignFromAnother(MR_NoCtor_MR_VertId *_this, const MR_NoCtor_MR_VertId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_uint8_t_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_uint8_t *MR_NoCtor_uint8_t_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoCtor_uint8_t_DestroyArray()`.
/// Use `MR_NoCtor_uint8_t_OffsetMutablePtr()` and `MR_NoCtor_uint8_t_OffsetPtr()` to access the array elements.
MRC_API MR_NoCtor_uint8_t *MR_NoCtor_uint8_t_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoCtor_uint8_t *MR_NoCtor_uint8_t_OffsetPtr(const MR_NoCtor_uint8_t *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoCtor_uint8_t *MR_NoCtor_uint8_t_OffsetMutablePtr(MR_NoCtor_uint8_t *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::NoCtor<uint8_t>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_uint8_t_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_uint8_t *MR_NoCtor_uint8_t_ConstructFromAnother(const MR_NoCtor_uint8_t *_other);

/// Destroys a heap-allocated instance of `MR_NoCtor_uint8_t`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_uint8_t_Destroy(const MR_NoCtor_uint8_t *_this);

/// Destroys a heap-allocated array of `MR_NoCtor_uint8_t`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_uint8_t_DestroyArray(const MR_NoCtor_uint8_t *_this);

/// Generated from a method of class `MR::NoCtor<uint8_t>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoCtor_uint8_t *MR_NoCtor_uint8_t_AssignFromAnother(MR_NoCtor_uint8_t *_this, const MR_NoCtor_uint8_t *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_char_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_char *MR_NoCtor_char_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoCtor_char_DestroyArray()`.
/// Use `MR_NoCtor_char_OffsetMutablePtr()` and `MR_NoCtor_char_OffsetPtr()` to access the array elements.
MRC_API MR_NoCtor_char *MR_NoCtor_char_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoCtor_char *MR_NoCtor_char_OffsetPtr(const MR_NoCtor_char *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoCtor_char *MR_NoCtor_char_OffsetMutablePtr(MR_NoCtor_char *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::NoCtor<char>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_char_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_char *MR_NoCtor_char_ConstructFromAnother(const MR_NoCtor_char *_other);

/// Destroys a heap-allocated instance of `MR_NoCtor_char`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_char_Destroy(const MR_NoCtor_char *_this);

/// Destroys a heap-allocated array of `MR_NoCtor_char`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_char_DestroyArray(const MR_NoCtor_char *_this);

/// Generated from a method of class `MR::NoCtor<char>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoCtor_char *MR_NoCtor_char_AssignFromAnother(MR_NoCtor_char *_this, const MR_NoCtor_char *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_EdgeId *MR_NoCtor_MR_EdgeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoCtor_MR_EdgeId_DestroyArray()`.
/// Use `MR_NoCtor_MR_EdgeId_OffsetMutablePtr()` and `MR_NoCtor_MR_EdgeId_OffsetPtr()` to access the array elements.
MRC_API MR_NoCtor_MR_EdgeId *MR_NoCtor_MR_EdgeId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoCtor_MR_EdgeId *MR_NoCtor_MR_EdgeId_OffsetPtr(const MR_NoCtor_MR_EdgeId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoCtor_MR_EdgeId *MR_NoCtor_MR_EdgeId_OffsetMutablePtr(MR_NoCtor_MR_EdgeId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::NoCtor<MR::EdgeId>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_EdgeId *MR_NoCtor_MR_EdgeId_ConstructFromAnother(const MR_NoCtor_MR_EdgeId *_other);

/// Destroys a heap-allocated instance of `MR_NoCtor_MR_EdgeId`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_EdgeId_Destroy(const MR_NoCtor_MR_EdgeId *_this);

/// Destroys a heap-allocated array of `MR_NoCtor_MR_EdgeId`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_EdgeId_DestroyArray(const MR_NoCtor_MR_EdgeId *_this);

/// Generated from a method of class `MR::NoCtor<MR::EdgeId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoCtor_MR_EdgeId *MR_NoCtor_MR_EdgeId_AssignFromAnother(MR_NoCtor_MR_EdgeId *_this, const MR_NoCtor_MR_EdgeId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_ObjId_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_ObjId *MR_NoCtor_MR_ObjId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoCtor_MR_ObjId_DestroyArray()`.
/// Use `MR_NoCtor_MR_ObjId_OffsetMutablePtr()` and `MR_NoCtor_MR_ObjId_OffsetPtr()` to access the array elements.
MRC_API MR_NoCtor_MR_ObjId *MR_NoCtor_MR_ObjId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoCtor_MR_ObjId *MR_NoCtor_MR_ObjId_OffsetPtr(const MR_NoCtor_MR_ObjId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoCtor_MR_ObjId *MR_NoCtor_MR_ObjId_OffsetMutablePtr(MR_NoCtor_MR_ObjId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::NoCtor<MR::ObjId>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_ObjId_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_ObjId *MR_NoCtor_MR_ObjId_ConstructFromAnother(const MR_NoCtor_MR_ObjId *_other);

/// Destroys a heap-allocated instance of `MR_NoCtor_MR_ObjId`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_ObjId_Destroy(const MR_NoCtor_MR_ObjId *_this);

/// Destroys a heap-allocated array of `MR_NoCtor_MR_ObjId`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_ObjId_DestroyArray(const MR_NoCtor_MR_ObjId *_this);

/// Generated from a method of class `MR::NoCtor<MR::ObjId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoCtor_MR_ObjId *MR_NoCtor_MR_ObjId_AssignFromAnother(MR_NoCtor_MR_ObjId *_this, const MR_NoCtor_MR_ObjId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_GraphVertId_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_GraphVertId *MR_NoCtor_MR_GraphVertId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoCtor_MR_GraphVertId_DestroyArray()`.
/// Use `MR_NoCtor_MR_GraphVertId_OffsetMutablePtr()` and `MR_NoCtor_MR_GraphVertId_OffsetPtr()` to access the array elements.
MRC_API MR_NoCtor_MR_GraphVertId *MR_NoCtor_MR_GraphVertId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoCtor_MR_GraphVertId *MR_NoCtor_MR_GraphVertId_OffsetPtr(const MR_NoCtor_MR_GraphVertId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoCtor_MR_GraphVertId *MR_NoCtor_MR_GraphVertId_OffsetMutablePtr(MR_NoCtor_MR_GraphVertId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::NoCtor<MR::GraphVertId>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_GraphVertId_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_GraphVertId *MR_NoCtor_MR_GraphVertId_ConstructFromAnother(const MR_NoCtor_MR_GraphVertId *_other);

/// Destroys a heap-allocated instance of `MR_NoCtor_MR_GraphVertId`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_GraphVertId_Destroy(const MR_NoCtor_MR_GraphVertId *_this);

/// Destroys a heap-allocated array of `MR_NoCtor_MR_GraphVertId`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_GraphVertId_DestroyArray(const MR_NoCtor_MR_GraphVertId *_this);

/// Generated from a method of class `MR::NoCtor<MR::GraphVertId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoCtor_MR_GraphVertId *MR_NoCtor_MR_GraphVertId_AssignFromAnother(MR_NoCtor_MR_GraphVertId *_this, const MR_NoCtor_MR_GraphVertId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_GraphEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_GraphEdgeId *MR_NoCtor_MR_GraphEdgeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoCtor_MR_GraphEdgeId_DestroyArray()`.
/// Use `MR_NoCtor_MR_GraphEdgeId_OffsetMutablePtr()` and `MR_NoCtor_MR_GraphEdgeId_OffsetPtr()` to access the array elements.
MRC_API MR_NoCtor_MR_GraphEdgeId *MR_NoCtor_MR_GraphEdgeId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoCtor_MR_GraphEdgeId *MR_NoCtor_MR_GraphEdgeId_OffsetPtr(const MR_NoCtor_MR_GraphEdgeId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoCtor_MR_GraphEdgeId *MR_NoCtor_MR_GraphEdgeId_OffsetMutablePtr(MR_NoCtor_MR_GraphEdgeId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::NoCtor<MR::GraphEdgeId>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_GraphEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_GraphEdgeId *MR_NoCtor_MR_GraphEdgeId_ConstructFromAnother(const MR_NoCtor_MR_GraphEdgeId *_other);

/// Destroys a heap-allocated instance of `MR_NoCtor_MR_GraphEdgeId`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_GraphEdgeId_Destroy(const MR_NoCtor_MR_GraphEdgeId *_this);

/// Destroys a heap-allocated array of `MR_NoCtor_MR_GraphEdgeId`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_GraphEdgeId_DestroyArray(const MR_NoCtor_MR_GraphEdgeId *_this);

/// Generated from a method of class `MR::NoCtor<MR::GraphEdgeId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoCtor_MR_GraphEdgeId *MR_NoCtor_MR_GraphEdgeId_AssignFromAnother(MR_NoCtor_MR_GraphEdgeId *_this, const MR_NoCtor_MR_GraphEdgeId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_VoxelId_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_VoxelId *MR_NoCtor_MR_VoxelId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoCtor_MR_VoxelId_DestroyArray()`.
/// Use `MR_NoCtor_MR_VoxelId_OffsetMutablePtr()` and `MR_NoCtor_MR_VoxelId_OffsetPtr()` to access the array elements.
MRC_API MR_NoCtor_MR_VoxelId *MR_NoCtor_MR_VoxelId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoCtor_MR_VoxelId *MR_NoCtor_MR_VoxelId_OffsetPtr(const MR_NoCtor_MR_VoxelId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoCtor_MR_VoxelId *MR_NoCtor_MR_VoxelId_OffsetMutablePtr(MR_NoCtor_MR_VoxelId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::NoCtor<MR::VoxelId>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_VoxelId_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_VoxelId *MR_NoCtor_MR_VoxelId_ConstructFromAnother(const MR_NoCtor_MR_VoxelId *_other);

/// Destroys a heap-allocated instance of `MR_NoCtor_MR_VoxelId`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_VoxelId_Destroy(const MR_NoCtor_MR_VoxelId *_this);

/// Destroys a heap-allocated array of `MR_NoCtor_MR_VoxelId`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_VoxelId_DestroyArray(const MR_NoCtor_MR_VoxelId *_this);

/// Generated from a method of class `MR::NoCtor<MR::VoxelId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoCtor_MR_VoxelId *MR_NoCtor_MR_VoxelId_AssignFromAnother(MR_NoCtor_MR_VoxelId *_this, const MR_NoCtor_MR_VoxelId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_PixelId_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_PixelId *MR_NoCtor_MR_PixelId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoCtor_MR_PixelId_DestroyArray()`.
/// Use `MR_NoCtor_MR_PixelId_OffsetMutablePtr()` and `MR_NoCtor_MR_PixelId_OffsetPtr()` to access the array elements.
MRC_API MR_NoCtor_MR_PixelId *MR_NoCtor_MR_PixelId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoCtor_MR_PixelId *MR_NoCtor_MR_PixelId_OffsetPtr(const MR_NoCtor_MR_PixelId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoCtor_MR_PixelId *MR_NoCtor_MR_PixelId_OffsetMutablePtr(MR_NoCtor_MR_PixelId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::NoCtor<MR::PixelId>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_PixelId_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_PixelId *MR_NoCtor_MR_PixelId_ConstructFromAnother(const MR_NoCtor_MR_PixelId *_other);

/// Destroys a heap-allocated instance of `MR_NoCtor_MR_PixelId`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_PixelId_Destroy(const MR_NoCtor_MR_PixelId *_this);

/// Destroys a heap-allocated array of `MR_NoCtor_MR_PixelId`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_PixelId_DestroyArray(const MR_NoCtor_MR_PixelId *_this);

/// Generated from a method of class `MR::NoCtor<MR::PixelId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoCtor_MR_PixelId *MR_NoCtor_MR_PixelId_AssignFromAnother(MR_NoCtor_MR_PixelId *_this, const MR_NoCtor_MR_PixelId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_RegionId_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_RegionId *MR_NoCtor_MR_RegionId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoCtor_MR_RegionId_DestroyArray()`.
/// Use `MR_NoCtor_MR_RegionId_OffsetMutablePtr()` and `MR_NoCtor_MR_RegionId_OffsetPtr()` to access the array elements.
MRC_API MR_NoCtor_MR_RegionId *MR_NoCtor_MR_RegionId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoCtor_MR_RegionId *MR_NoCtor_MR_RegionId_OffsetPtr(const MR_NoCtor_MR_RegionId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoCtor_MR_RegionId *MR_NoCtor_MR_RegionId_OffsetMutablePtr(MR_NoCtor_MR_RegionId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::NoCtor<MR::RegionId>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_RegionId_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_RegionId *MR_NoCtor_MR_RegionId_ConstructFromAnother(const MR_NoCtor_MR_RegionId *_other);

/// Destroys a heap-allocated instance of `MR_NoCtor_MR_RegionId`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_RegionId_Destroy(const MR_NoCtor_MR_RegionId *_this);

/// Destroys a heap-allocated array of `MR_NoCtor_MR_RegionId`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_RegionId_DestroyArray(const MR_NoCtor_MR_RegionId *_this);

/// Generated from a method of class `MR::NoCtor<MR::RegionId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoCtor_MR_RegionId *MR_NoCtor_MR_RegionId_AssignFromAnother(MR_NoCtor_MR_RegionId *_this, const MR_NoCtor_MR_RegionId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_NodeId_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_NodeId *MR_NoCtor_MR_NodeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoCtor_MR_NodeId_DestroyArray()`.
/// Use `MR_NoCtor_MR_NodeId_OffsetMutablePtr()` and `MR_NoCtor_MR_NodeId_OffsetPtr()` to access the array elements.
MRC_API MR_NoCtor_MR_NodeId *MR_NoCtor_MR_NodeId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoCtor_MR_NodeId *MR_NoCtor_MR_NodeId_OffsetPtr(const MR_NoCtor_MR_NodeId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoCtor_MR_NodeId *MR_NoCtor_MR_NodeId_OffsetMutablePtr(MR_NoCtor_MR_NodeId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::NoCtor<MR::NodeId>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_NodeId_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_NodeId *MR_NoCtor_MR_NodeId_ConstructFromAnother(const MR_NoCtor_MR_NodeId *_other);

/// Destroys a heap-allocated instance of `MR_NoCtor_MR_NodeId`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_NodeId_Destroy(const MR_NoCtor_MR_NodeId *_this);

/// Destroys a heap-allocated array of `MR_NoCtor_MR_NodeId`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_NodeId_DestroyArray(const MR_NoCtor_MR_NodeId *_this);

/// Generated from a method of class `MR::NoCtor<MR::NodeId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoCtor_MR_NodeId *MR_NoCtor_MR_NodeId_AssignFromAnother(MR_NoCtor_MR_NodeId *_this, const MR_NoCtor_MR_NodeId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_TextureId_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_TextureId *MR_NoCtor_MR_TextureId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoCtor_MR_TextureId_DestroyArray()`.
/// Use `MR_NoCtor_MR_TextureId_OffsetMutablePtr()` and `MR_NoCtor_MR_TextureId_OffsetPtr()` to access the array elements.
MRC_API MR_NoCtor_MR_TextureId *MR_NoCtor_MR_TextureId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoCtor_MR_TextureId *MR_NoCtor_MR_TextureId_OffsetPtr(const MR_NoCtor_MR_TextureId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoCtor_MR_TextureId *MR_NoCtor_MR_TextureId_OffsetMutablePtr(MR_NoCtor_MR_TextureId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::NoCtor<MR::TextureId>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_TextureId_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_TextureId *MR_NoCtor_MR_TextureId_ConstructFromAnother(const MR_NoCtor_MR_TextureId *_other);

/// Destroys a heap-allocated instance of `MR_NoCtor_MR_TextureId`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_TextureId_Destroy(const MR_NoCtor_MR_TextureId *_this);

/// Destroys a heap-allocated array of `MR_NoCtor_MR_TextureId`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_TextureId_DestroyArray(const MR_NoCtor_MR_TextureId *_this);

/// Generated from a method of class `MR::NoCtor<MR::TextureId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoCtor_MR_TextureId *MR_NoCtor_MR_TextureId_AssignFromAnother(MR_NoCtor_MR_TextureId *_this, const MR_NoCtor_MR_TextureId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_Id_MR_ICPElemtTag *MR_NoCtor_MR_Id_MR_ICPElemtTag_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoCtor_MR_Id_MR_ICPElemtTag_DestroyArray()`.
/// Use `MR_NoCtor_MR_Id_MR_ICPElemtTag_OffsetMutablePtr()` and `MR_NoCtor_MR_Id_MR_ICPElemtTag_OffsetPtr()` to access the array elements.
MRC_API MR_NoCtor_MR_Id_MR_ICPElemtTag *MR_NoCtor_MR_Id_MR_ICPElemtTag_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoCtor_MR_Id_MR_ICPElemtTag *MR_NoCtor_MR_Id_MR_ICPElemtTag_OffsetPtr(const MR_NoCtor_MR_Id_MR_ICPElemtTag *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoCtor_MR_Id_MR_ICPElemtTag *MR_NoCtor_MR_Id_MR_ICPElemtTag_OffsetMutablePtr(MR_NoCtor_MR_Id_MR_ICPElemtTag *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::NoCtor<MR::Id<MR::ICPElemtTag>>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoCtor_MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_NoCtor_MR_Id_MR_ICPElemtTag *MR_NoCtor_MR_Id_MR_ICPElemtTag_ConstructFromAnother(const MR_NoCtor_MR_Id_MR_ICPElemtTag *_other);

/// Destroys a heap-allocated instance of `MR_NoCtor_MR_Id_MR_ICPElemtTag`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_Id_MR_ICPElemtTag_Destroy(const MR_NoCtor_MR_Id_MR_ICPElemtTag *_this);

/// Destroys a heap-allocated array of `MR_NoCtor_MR_Id_MR_ICPElemtTag`. Does nothing if the pointer is null.
MRC_API void MR_NoCtor_MR_Id_MR_ICPElemtTag_DestroyArray(const MR_NoCtor_MR_Id_MR_ICPElemtTag *_this);

/// Generated from a method of class `MR::NoCtor<MR::Id<MR::ICPElemtTag>>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoCtor_MR_Id_MR_ICPElemtTag *MR_NoCtor_MR_Id_MR_ICPElemtTag_AssignFromAnother(MR_NoCtor_MR_Id_MR_ICPElemtTag *_this, const MR_NoCtor_MR_Id_MR_ICPElemtTag *_other);

/// given some buffer map and a key, returns the value associated with the key, or default value if key is invalid
/// Generated from function `MR::getAt<MR::UndirectedEdgeId, MR::UndirectedEdgeId>`.
/// Parameter `bmap` can not be null. It is a single object.
/// Parameter `def` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_UndirectedEdgeId MR_getAt(const MR_Buffer_MR_UndirectedEdgeId_MR_UndirectedEdgeId *bmap, MR_UndirectedEdgeId key, const MR_UndirectedEdgeId *def);

/// Returns a pointer to a member variable of class `MR::PackMapping` named `e`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeBMap *MR_PackMapping_Get_e(const MR_PackMapping *_this);

/// Modifies a member variable of class `MR::PackMapping` named `e`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PackMapping_Set_e(MR_PackMapping *_this, MR_PassBy value_pass_by, MR_UndirectedEdgeBMap *value);

/// Returns a mutable pointer to a member variable of class `MR::PackMapping` named `e`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBMap *MR_PackMapping_GetMutable_e(MR_PackMapping *_this);

/// Returns a pointer to a member variable of class `MR::PackMapping` named `f`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBMap *MR_PackMapping_Get_f(const MR_PackMapping *_this);

/// Modifies a member variable of class `MR::PackMapping` named `f`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PackMapping_Set_f(MR_PackMapping *_this, MR_PassBy value_pass_by, MR_FaceBMap *value);

/// Returns a mutable pointer to a member variable of class `MR::PackMapping` named `f`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBMap *MR_PackMapping_GetMutable_f(MR_PackMapping *_this);

/// Returns a pointer to a member variable of class `MR::PackMapping` named `v`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBMap *MR_PackMapping_Get_v(const MR_PackMapping *_this);

/// Modifies a member variable of class `MR::PackMapping` named `v`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PackMapping_Set_v(MR_PackMapping *_this, MR_PassBy value_pass_by, MR_VertBMap *value);

/// Returns a mutable pointer to a member variable of class `MR::PackMapping` named `v`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBMap *MR_PackMapping_GetMutable_v(MR_PackMapping *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PackMapping_Destroy()` to free it when you're done using it.
MRC_API MR_PackMapping *MR_PackMapping_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PackMapping_DestroyArray()`.
/// Use `MR_PackMapping_OffsetMutablePtr()` and `MR_PackMapping_OffsetPtr()` to access the array elements.
MRC_API MR_PackMapping *MR_PackMapping_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::PackMapping` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PackMapping_Destroy()` to free it when you're done using it.
MRC_API MR_PackMapping *MR_PackMapping_ConstructFrom(MR_PassBy e_pass_by, MR_UndirectedEdgeBMap *e, MR_PassBy f_pass_by, MR_FaceBMap *f, MR_PassBy v_pass_by, MR_VertBMap *v);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PackMapping *MR_PackMapping_OffsetPtr(const MR_PackMapping *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PackMapping *MR_PackMapping_OffsetMutablePtr(MR_PackMapping *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PackMapping`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PackMapping_Destroy()` to free it when you're done using it.
MRC_API MR_PackMapping *MR_PackMapping_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PackMapping *_other);

/// Destroys a heap-allocated instance of `MR_PackMapping`. Does nothing if the pointer is null.
MRC_API void MR_PackMapping_Destroy(const MR_PackMapping *_this);

/// Destroys a heap-allocated array of `MR_PackMapping`. Does nothing if the pointer is null.
MRC_API void MR_PackMapping_DestroyArray(const MR_PackMapping *_this);

/// Generated from a method of class `MR::PackMapping` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PackMapping *MR_PackMapping_AssignFromAnother(MR_PackMapping *_this, MR_PassBy _other_pass_by, MR_PackMapping *_other);

#ifdef __cplusplus
} // extern "C"
#endif
