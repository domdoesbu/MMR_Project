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

typedef struct MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_BMap_MR_GraphVertId_MR_GraphVertId MR_BMap_MR_GraphVertId_MR_GraphVertId; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_BMap_MR_NodeId_MR_NodeId MR_BMap_MR_NodeId_MR_NodeId; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_BMap_MR_ObjId_MR_ObjId MR_BMap_MR_ObjId_MR_ObjId; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_BMap_MR_PixelId_MR_PixelId MR_BMap_MR_PixelId_MR_PixelId; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_BMap_MR_RegionId_MR_RegionId MR_BMap_MR_RegionId_MR_RegionId; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_BMap_MR_TextureId_MR_TextureId MR_BMap_MR_TextureId_MR_TextureId; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_BMap_MR_VoxelId_MR_VoxelId MR_BMap_MR_VoxelId_MR_VoxelId; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_EdgeBMap MR_EdgeBMap; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_EdgeMap MR_EdgeMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_FaceBMap MR_FaceBMap; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_FaceMap MR_FaceMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Id_MR_ICPElemtTag MR_Id_MR_ICPElemtTag; // Defined in `#include <MRCMesh/MRId.h>`.
typedef struct MR_ObjMap MR_ObjMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_UndirectedEdgeBMap MR_UndirectedEdgeBMap; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_UndirectedEdgeMap MR_UndirectedEdgeMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_MR_GraphEdgeId_MR_GraphEdgeId MR_Vector_MR_GraphEdgeId_MR_GraphEdgeId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_MR_GraphVertId_MR_GraphVertId MR_Vector_MR_GraphVertId_MR_GraphVertId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag MR_Vector_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_MR_NodeId_MR_NodeId MR_Vector_MR_NodeId_MR_NodeId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_MR_PixelId_MR_PixelId MR_Vector_MR_PixelId_MR_PixelId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_MR_RegionId_MR_RegionId MR_Vector_MR_RegionId_MR_RegionId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_MR_TextureId_MR_TextureId MR_Vector_MR_TextureId_MR_TextureId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_MR_VoxelId_MR_VoxelId MR_Vector_MR_VoxelId_MR_VoxelId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertBMap MR_VertBMap; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_VertMap MR_VertMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId MR_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_EdgeId_MR_EdgeId.h>`.
typedef struct MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_FaceId_MR_FaceId.h>`.
typedef struct MR_phmap_flat_hash_map_MR_GraphEdgeId_MR_GraphEdgeId MR_phmap_flat_hash_map_MR_GraphEdgeId_MR_GraphEdgeId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_GraphEdgeId_MR_GraphEdgeId.h>`.
typedef struct MR_phmap_flat_hash_map_MR_GraphVertId_MR_GraphVertId MR_phmap_flat_hash_map_MR_GraphVertId_MR_GraphVertId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_GraphVertId_MR_GraphVertId.h>`.
typedef struct MR_phmap_flat_hash_map_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag MR_phmap_flat_hash_map_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag.h>`.
typedef struct MR_phmap_flat_hash_map_MR_NodeId_MR_NodeId MR_phmap_flat_hash_map_MR_NodeId_MR_NodeId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_NodeId_MR_NodeId.h>`.
typedef struct MR_phmap_flat_hash_map_MR_ObjId_MR_ObjId MR_phmap_flat_hash_map_MR_ObjId_MR_ObjId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_ObjId_MR_ObjId.h>`.
typedef struct MR_phmap_flat_hash_map_MR_PixelId_MR_PixelId MR_phmap_flat_hash_map_MR_PixelId_MR_PixelId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_PixelId_MR_PixelId.h>`.
typedef struct MR_phmap_flat_hash_map_MR_RegionId_MR_RegionId MR_phmap_flat_hash_map_MR_RegionId_MR_RegionId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_RegionId_MR_RegionId.h>`.
typedef struct MR_phmap_flat_hash_map_MR_TextureId_MR_TextureId MR_phmap_flat_hash_map_MR_TextureId_MR_TextureId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_TextureId_MR_TextureId.h>`.
typedef struct MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId.h>`.
typedef struct MR_phmap_flat_hash_map_MR_VertId_MR_VertId MR_phmap_flat_hash_map_MR_VertId_MR_VertId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_VertId_MR_VertId.h>`.
typedef struct MR_phmap_flat_hash_map_MR_VoxelId_MR_VoxelId MR_phmap_flat_hash_map_MR_VoxelId_MR_VoxelId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_VoxelId_MR_VoxelId.h>`.


/// Vector<bool, I> like container (random-access, I - index type, bool - value type)
/// with all bits after size() considered off during testing
/// Generated from class `MR::FaceBitSet`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::BitSet`
typedef struct MR_FaceBitSet MR_FaceBitSet;

/// Vector<bool, I> like container (random-access, I - index type, bool - value type)
/// with all bits after size() considered off during testing
/// Generated from class `MR::VertBitSet`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::BitSet`
typedef struct MR_VertBitSet MR_VertBitSet;

/// Vector<bool, I> like container (random-access, I - index type, bool - value type)
/// with all bits after size() considered off during testing
/// Generated from class `MR::EdgeBitSet`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::BitSet`
typedef struct MR_EdgeBitSet MR_EdgeBitSet;

/// Vector<bool, I> like container (random-access, I - index type, bool - value type)
/// with all bits after size() considered off during testing
/// Generated from class `MR::UndirectedEdgeBitSet`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::BitSet`
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet;

/// Vector<bool, I> like container (random-access, I - index type, bool - value type)
/// with all bits after size() considered off during testing
/// Generated from class `MR::PixelBitSet`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::BitSet`
typedef struct MR_PixelBitSet MR_PixelBitSet;

/// Vector<bool, I> like container (random-access, I - index type, bool - value type)
/// with all bits after size() considered off during testing
/// Generated from class `MR::VoxelBitSet`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::BitSet`
typedef struct MR_VoxelBitSet MR_VoxelBitSet;

/// Vector<bool, I> like container (random-access, I - index type, bool - value type)
/// with all bits after size() considered off during testing
/// Generated from class `MR::RegionBitSet`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::BitSet`
typedef struct MR_RegionBitSet MR_RegionBitSet;

/// Vector<bool, I> like container (random-access, I - index type, bool - value type)
/// with all bits after size() considered off during testing
/// Generated from class `MR::NodeBitSet`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::BitSet`
typedef struct MR_NodeBitSet MR_NodeBitSet;

/// Vector<bool, I> like container (random-access, I - index type, bool - value type)
/// with all bits after size() considered off during testing
/// Generated from class `MR::ObjBitSet`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::BitSet`
typedef struct MR_ObjBitSet MR_ObjBitSet;

/// Vector<bool, I> like container (random-access, I - index type, bool - value type)
/// with all bits after size() considered off during testing
/// Generated from class `MR::TextureBitSet`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::BitSet`
typedef struct MR_TextureBitSet MR_TextureBitSet;

/// Vector<bool, I> like container (random-access, I - index type, bool - value type)
/// with all bits after size() considered off during testing
/// Generated from class `MR::GraphVertBitSet`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::BitSet`
typedef struct MR_GraphVertBitSet MR_GraphVertBitSet;

/// Vector<bool, I> like container (random-access, I - index type, bool - value type)
/// with all bits after size() considered off during testing
/// Generated from class `MR::GraphEdgeBitSet`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::BitSet`
typedef struct MR_GraphEdgeBitSet MR_GraphEdgeBitSet;

/// Vector<bool, I> like container (random-access, I - index type, bool - value type)
/// with all bits after size() considered off during testing
/// Generated from class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::BitSet`
typedef struct MR_TypedBitSet_MR_Id_MR_ICPElemtTag MR_TypedBitSet_MR_Id_MR_ICPElemtTag;

/// std::vector<bool> like container  (random-access, size_t - index type, bool - value type)
/// with all bits after size() considered off during testing
/// Generated from class `MR::BitSet`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::EdgeBitSet`
///     `MR::FaceBitSet`
///     `MR::GraphEdgeBitSet`
///     `MR::GraphVertBitSet`
///     `MR::NodeBitSet`
///     `MR::ObjBitSet`
///     `MR::PixelBitSet`
///     `MR::RegionBitSet`
///     `MR::TextureBitSet`
///     `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>`
///     `MR::UndirectedEdgeBitSet`
///     `MR::VertBitSet`
///     `MR::VoxelBitSet`
typedef struct MR_BitSet MR_BitSet;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_FaceBitSet_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FaceBitSet_DestroyArray()`.
/// Use `MR_FaceBitSet_OffsetMutablePtr()` and `MR_FaceBitSet_OffsetPtr()` to access the array elements.
MRC_API MR_FaceBitSet *MR_FaceBitSet_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FaceBitSet *MR_FaceBitSet_OffsetPtr(const MR_FaceBitSet *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FaceBitSet *MR_FaceBitSet_OffsetMutablePtr(MR_FaceBitSet *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::FaceBitSet` to its base class `MR::BitSet`.
/// This version is acting on mutable pointers.
MRC_API const MR_BitSet *MR_FaceBitSet_UpcastTo_MR_BitSet(const MR_FaceBitSet *object);

/// Upcasts an instance of `MR::FaceBitSet` to its base class `MR::BitSet`.
MRC_API MR_BitSet *MR_FaceBitSet_MutableUpcastTo_MR_BitSet(MR_FaceBitSet *object);

/// Generated from a constructor of class `MR::FaceBitSet`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_FaceBitSet_ConstructFromAnother(MR_PassBy _other_pass_by, MR_FaceBitSet *_other);

/// copies all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::FaceBitSet`.
/// Parameter `src` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_FaceBitSet_Construct_const_MR_BitSet_ref(const MR_BitSet *src);

/// moves all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::FaceBitSet`.
/// Parameter `src` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_FaceBitSet_Construct_MR_BitSet_rvalue_ref(MR_BitSet *src);

/// Destroys a heap-allocated instance of `MR_FaceBitSet`. Does nothing if the pointer is null.
MRC_API void MR_FaceBitSet_Destroy(const MR_FaceBitSet *_this);

/// Destroys a heap-allocated array of `MR_FaceBitSet`. Does nothing if the pointer is null.
MRC_API void MR_FaceBitSet_DestroyArray(const MR_FaceBitSet *_this);

/// Generated from a method of class `MR::FaceBitSet` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *MR_FaceBitSet_AssignFromAnother(MR_FaceBitSet *_this, MR_PassBy _other_pass_by, MR_FaceBitSet *_other);

/// Generated from a method of class `MR::FaceBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *MR_FaceBitSet_set_3(MR_FaceBitSet *_this, MR_FaceId n, MR_uint64_t len, bool val);

/// Generated from a method of class `MR::FaceBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *MR_FaceBitSet_set_2(MR_FaceBitSet *_this, MR_FaceId n, bool val);

/// Generated from a method of class `MR::FaceBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *MR_FaceBitSet_set_1(MR_FaceBitSet *_this, MR_FaceId n);

/// Generated from a method of class `MR::FaceBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *MR_FaceBitSet_set_0(MR_FaceBitSet *_this);

/// Generated from a method of class `MR::FaceBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *MR_FaceBitSet_reset_2(MR_FaceBitSet *_this, MR_FaceId n, MR_uint64_t len);

/// Generated from a method of class `MR::FaceBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *MR_FaceBitSet_reset_1(MR_FaceBitSet *_this, MR_FaceId n);

/// Generated from a method of class `MR::FaceBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *MR_FaceBitSet_reset_0(MR_FaceBitSet *_this);

/// Generated from a method of class `MR::FaceBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *MR_FaceBitSet_flip_2(MR_FaceBitSet *_this, MR_FaceId n, MR_uint64_t len);

/// Generated from a method of class `MR::FaceBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *MR_FaceBitSet_flip_1(MR_FaceBitSet *_this, MR_FaceId n);

/// Generated from a method of class `MR::FaceBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *MR_FaceBitSet_flip_0(MR_FaceBitSet *_this);

/// Generated from a method of class `MR::FaceBitSet` named `test`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_FaceBitSet_test(const MR_FaceBitSet *_this, MR_FaceId n);

/// Generated from a method of class `MR::FaceBitSet` named `test_set`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_FaceBitSet_test_set(MR_FaceBitSet *_this, MR_FaceId n, const bool *val);

/// Generated from a method of class `MR::FaceBitSet` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_FaceBitSet_index(const MR_FaceBitSet *_this, MR_FaceId pos);

/// Generated from a method of class `MR::FaceBitSet` named `find_first`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_FaceId MR_FaceBitSet_find_first(const MR_FaceBitSet *_this);

/// Generated from a method of class `MR::FaceBitSet` named `find_next`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_FaceId MR_FaceBitSet_find_next(const MR_FaceBitSet *_this, MR_FaceId pos);

/// Generated from a method of class `MR::FaceBitSet` named `find_last`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_FaceId MR_FaceBitSet_find_last(const MR_FaceBitSet *_this);

/// returns the location of nth set bit (where the first bit corresponds to n=0) or IndexType(npos) if there are less bit set
/// Generated from a method of class `MR::FaceBitSet` named `nthSetBit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_FaceId MR_FaceBitSet_nthSetBit(const MR_FaceBitSet *_this, MR_uint64_t n);

/// Generated from a method of class `MR::FaceBitSet` named `operator&=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *MR_FaceBitSet_bitand_assign(MR_FaceBitSet *_this, const MR_FaceBitSet *b);

/// Generated from a method of class `MR::FaceBitSet` named `operator|=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *MR_FaceBitSet_bitor_assign(MR_FaceBitSet *_this, const MR_FaceBitSet *b);

/// Generated from a method of class `MR::FaceBitSet` named `operator^=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *MR_FaceBitSet_xor_assign(MR_FaceBitSet *_this, const MR_FaceBitSet *b);

/// Generated from a method of class `MR::FaceBitSet` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *MR_FaceBitSet_sub_assign(MR_FaceBitSet *_this, const MR_FaceBitSet *b);

/// subtracts b from this, considering that bits in b are shifted right on bShiftInBlocks*bits_per_block
/// Generated from a method of class `MR::FaceBitSet` named `subtract`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *MR_FaceBitSet_subtract(MR_FaceBitSet *_this, const MR_FaceBitSet *b, int32_t bShiftInBlocks);

/// returns true if, for every bit that is set in this bitset, the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::FaceBitSet` named `is_subset_of`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_FaceBitSet_is_subset_of(const MR_FaceBitSet *_this, const MR_FaceBitSet *a);

/// returns true if, there is a bit which is set in this bitset, such that the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::FaceBitSet` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_FaceBitSet_intersects(const MR_FaceBitSet *_this, const MR_FaceBitSet *a);

/// Generated from a method of class `MR::FaceBitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_FaceBitSet_autoResizeSet_3(MR_FaceBitSet *_this, MR_FaceId pos, MR_uint64_t len, const bool *val);

/// Generated from a method of class `MR::FaceBitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_FaceBitSet_autoResizeSet_2(MR_FaceBitSet *_this, MR_FaceId pos, const bool *val);

/// Generated from a method of class `MR::FaceBitSet` named `autoResizeTestSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_FaceBitSet_autoResizeTestSet(MR_FaceBitSet *_this, MR_FaceId pos, const bool *val);

/// Generated from a method of class `MR::FaceBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_FaceBitSet_getMapping_1_MR_FaceMap(const MR_FaceBitSet *_this, const MR_FaceMap *map);

/// Generated from a method of class `MR::FaceBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_FaceBitSet_getMapping_1_MR_FaceBMap(const MR_FaceBitSet *_this, const MR_FaceBMap *map);

/// Generated from a method of class `MR::FaceBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_FaceBitSet_getMapping_1_phmap_flat_hash_map_MR_FaceId_MR_FaceId(const MR_FaceBitSet *_this, const MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId *map);

/// Generated from a method of class `MR::FaceBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_FaceBitSet_getMapping_2_MR_FaceMap(const MR_FaceBitSet *_this, const MR_FaceMap *map, MR_uint64_t resSize);

/// Generated from a method of class `MR::FaceBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_FaceBitSet_getMapping_2_phmap_flat_hash_map_MR_FaceId_MR_FaceId(const MR_FaceBitSet *_this, const MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId *map, MR_uint64_t resSize);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::FaceBitSet` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_FaceId MR_FaceBitSet_backId(const MR_FaceBitSet *_this);

/// [beginId(), endId()) is the range of all bits in the set
/// Generated from a method of class `MR::FaceBitSet` named `beginId`.
MRC_API MR_FaceId MR_FaceBitSet_beginId(void);

/// Generated from a method of class `MR::FaceBitSet` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_FaceId MR_FaceBitSet_endId(const MR_FaceBitSet *_this);

/// Generated from function `MR::operator&`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_bitand_MR_FaceBitSet(const MR_FaceBitSet *a, const MR_FaceBitSet *b);

/// Generated from function `MR::operator|`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_bitor_MR_FaceBitSet(const MR_FaceBitSet *a, const MR_FaceBitSet *b);

/// Generated from function `MR::operator^`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_xor_MR_FaceBitSet(const MR_FaceBitSet *a, const MR_FaceBitSet *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_sub_MR_FaceBitSet(const MR_FaceBitSet *a, const MR_FaceBitSet *b);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_VertBitSet_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VertBitSet_DestroyArray()`.
/// Use `MR_VertBitSet_OffsetMutablePtr()` and `MR_VertBitSet_OffsetPtr()` to access the array elements.
MRC_API MR_VertBitSet *MR_VertBitSet_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VertBitSet *MR_VertBitSet_OffsetPtr(const MR_VertBitSet *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VertBitSet *MR_VertBitSet_OffsetMutablePtr(MR_VertBitSet *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::VertBitSet` to its base class `MR::BitSet`.
/// This version is acting on mutable pointers.
MRC_API const MR_BitSet *MR_VertBitSet_UpcastTo_MR_BitSet(const MR_VertBitSet *object);

/// Upcasts an instance of `MR::VertBitSet` to its base class `MR::BitSet`.
MRC_API MR_BitSet *MR_VertBitSet_MutableUpcastTo_MR_BitSet(MR_VertBitSet *object);

/// Generated from a constructor of class `MR::VertBitSet`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_VertBitSet_ConstructFromAnother(MR_PassBy _other_pass_by, MR_VertBitSet *_other);

/// copies all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::VertBitSet`.
/// Parameter `src` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_VertBitSet_Construct_const_MR_BitSet_ref(const MR_BitSet *src);

/// moves all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::VertBitSet`.
/// Parameter `src` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_VertBitSet_Construct_MR_BitSet_rvalue_ref(MR_BitSet *src);

/// Destroys a heap-allocated instance of `MR_VertBitSet`. Does nothing if the pointer is null.
MRC_API void MR_VertBitSet_Destroy(const MR_VertBitSet *_this);

/// Destroys a heap-allocated array of `MR_VertBitSet`. Does nothing if the pointer is null.
MRC_API void MR_VertBitSet_DestroyArray(const MR_VertBitSet *_this);

/// Generated from a method of class `MR::VertBitSet` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *MR_VertBitSet_AssignFromAnother(MR_VertBitSet *_this, MR_PassBy _other_pass_by, MR_VertBitSet *_other);

/// Generated from a method of class `MR::VertBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *MR_VertBitSet_set_3(MR_VertBitSet *_this, MR_VertId n, MR_uint64_t len, bool val);

/// Generated from a method of class `MR::VertBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *MR_VertBitSet_set_2(MR_VertBitSet *_this, MR_VertId n, bool val);

/// Generated from a method of class `MR::VertBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *MR_VertBitSet_set_1(MR_VertBitSet *_this, MR_VertId n);

/// Generated from a method of class `MR::VertBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *MR_VertBitSet_set_0(MR_VertBitSet *_this);

/// Generated from a method of class `MR::VertBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *MR_VertBitSet_reset_2(MR_VertBitSet *_this, MR_VertId n, MR_uint64_t len);

/// Generated from a method of class `MR::VertBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *MR_VertBitSet_reset_1(MR_VertBitSet *_this, MR_VertId n);

/// Generated from a method of class `MR::VertBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *MR_VertBitSet_reset_0(MR_VertBitSet *_this);

/// Generated from a method of class `MR::VertBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *MR_VertBitSet_flip_2(MR_VertBitSet *_this, MR_VertId n, MR_uint64_t len);

/// Generated from a method of class `MR::VertBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *MR_VertBitSet_flip_1(MR_VertBitSet *_this, MR_VertId n);

/// Generated from a method of class `MR::VertBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *MR_VertBitSet_flip_0(MR_VertBitSet *_this);

/// Generated from a method of class `MR::VertBitSet` named `test`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_VertBitSet_test(const MR_VertBitSet *_this, MR_VertId n);

/// Generated from a method of class `MR::VertBitSet` named `test_set`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_VertBitSet_test_set(MR_VertBitSet *_this, MR_VertId n, const bool *val);

/// Generated from a method of class `MR::VertBitSet` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_VertBitSet_index(const MR_VertBitSet *_this, MR_VertId pos);

/// Generated from a method of class `MR::VertBitSet` named `find_first`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertId MR_VertBitSet_find_first(const MR_VertBitSet *_this);

/// Generated from a method of class `MR::VertBitSet` named `find_next`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertId MR_VertBitSet_find_next(const MR_VertBitSet *_this, MR_VertId pos);

/// Generated from a method of class `MR::VertBitSet` named `find_last`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertId MR_VertBitSet_find_last(const MR_VertBitSet *_this);

/// returns the location of nth set bit (where the first bit corresponds to n=0) or IndexType(npos) if there are less bit set
/// Generated from a method of class `MR::VertBitSet` named `nthSetBit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertId MR_VertBitSet_nthSetBit(const MR_VertBitSet *_this, MR_uint64_t n);

/// Generated from a method of class `MR::VertBitSet` named `operator&=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *MR_VertBitSet_bitand_assign(MR_VertBitSet *_this, const MR_VertBitSet *b);

/// Generated from a method of class `MR::VertBitSet` named `operator|=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *MR_VertBitSet_bitor_assign(MR_VertBitSet *_this, const MR_VertBitSet *b);

/// Generated from a method of class `MR::VertBitSet` named `operator^=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *MR_VertBitSet_xor_assign(MR_VertBitSet *_this, const MR_VertBitSet *b);

/// Generated from a method of class `MR::VertBitSet` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *MR_VertBitSet_sub_assign(MR_VertBitSet *_this, const MR_VertBitSet *b);

/// subtracts b from this, considering that bits in b are shifted right on bShiftInBlocks*bits_per_block
/// Generated from a method of class `MR::VertBitSet` named `subtract`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *MR_VertBitSet_subtract(MR_VertBitSet *_this, const MR_VertBitSet *b, int32_t bShiftInBlocks);

/// returns true if, for every bit that is set in this bitset, the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::VertBitSet` named `is_subset_of`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_VertBitSet_is_subset_of(const MR_VertBitSet *_this, const MR_VertBitSet *a);

/// returns true if, there is a bit which is set in this bitset, such that the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::VertBitSet` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_VertBitSet_intersects(const MR_VertBitSet *_this, const MR_VertBitSet *a);

/// Generated from a method of class `MR::VertBitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_VertBitSet_autoResizeSet_3(MR_VertBitSet *_this, MR_VertId pos, MR_uint64_t len, const bool *val);

/// Generated from a method of class `MR::VertBitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_VertBitSet_autoResizeSet_2(MR_VertBitSet *_this, MR_VertId pos, const bool *val);

/// Generated from a method of class `MR::VertBitSet` named `autoResizeTestSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_VertBitSet_autoResizeTestSet(MR_VertBitSet *_this, MR_VertId pos, const bool *val);

/// Generated from a method of class `MR::VertBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_VertBitSet_getMapping_1_MR_VertMap(const MR_VertBitSet *_this, const MR_VertMap *map);

/// Generated from a method of class `MR::VertBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_VertBitSet_getMapping_1_MR_VertBMap(const MR_VertBitSet *_this, const MR_VertBMap *map);

/// Generated from a method of class `MR::VertBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_VertBitSet_getMapping_1_phmap_flat_hash_map_MR_VertId_MR_VertId(const MR_VertBitSet *_this, const MR_phmap_flat_hash_map_MR_VertId_MR_VertId *map);

/// Generated from a method of class `MR::VertBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_VertBitSet_getMapping_2_MR_VertMap(const MR_VertBitSet *_this, const MR_VertMap *map, MR_uint64_t resSize);

/// Generated from a method of class `MR::VertBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_VertBitSet_getMapping_2_phmap_flat_hash_map_MR_VertId_MR_VertId(const MR_VertBitSet *_this, const MR_phmap_flat_hash_map_MR_VertId_MR_VertId *map, MR_uint64_t resSize);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::VertBitSet` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertId MR_VertBitSet_backId(const MR_VertBitSet *_this);

/// [beginId(), endId()) is the range of all bits in the set
/// Generated from a method of class `MR::VertBitSet` named `beginId`.
MRC_API MR_VertId MR_VertBitSet_beginId(void);

/// Generated from a method of class `MR::VertBitSet` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertId MR_VertBitSet_endId(const MR_VertBitSet *_this);

/// Generated from function `MR::operator&`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_bitand_MR_VertBitSet(const MR_VertBitSet *a, const MR_VertBitSet *b);

/// Generated from function `MR::operator|`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_bitor_MR_VertBitSet(const MR_VertBitSet *a, const MR_VertBitSet *b);

/// Generated from function `MR::operator^`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_xor_MR_VertBitSet(const MR_VertBitSet *a, const MR_VertBitSet *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_sub_MR_VertBitSet(const MR_VertBitSet *a, const MR_VertBitSet *b);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_EdgeBitSet_DestroyArray()`.
/// Use `MR_EdgeBitSet_OffsetMutablePtr()` and `MR_EdgeBitSet_OffsetPtr()` to access the array elements.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_EdgeBitSet *MR_EdgeBitSet_OffsetPtr(const MR_EdgeBitSet *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_OffsetMutablePtr(MR_EdgeBitSet *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::EdgeBitSet` to its base class `MR::BitSet`.
/// This version is acting on mutable pointers.
MRC_API const MR_BitSet *MR_EdgeBitSet_UpcastTo_MR_BitSet(const MR_EdgeBitSet *object);

/// Upcasts an instance of `MR::EdgeBitSet` to its base class `MR::BitSet`.
MRC_API MR_BitSet *MR_EdgeBitSet_MutableUpcastTo_MR_BitSet(MR_EdgeBitSet *object);

/// Generated from a constructor of class `MR::EdgeBitSet`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_ConstructFromAnother(MR_PassBy _other_pass_by, MR_EdgeBitSet *_other);

/// copies all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::EdgeBitSet`.
/// Parameter `src` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_Construct_const_MR_BitSet_ref(const MR_BitSet *src);

/// moves all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::EdgeBitSet`.
/// Parameter `src` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_Construct_MR_BitSet_rvalue_ref(MR_BitSet *src);

/// Destroys a heap-allocated instance of `MR_EdgeBitSet`. Does nothing if the pointer is null.
MRC_API void MR_EdgeBitSet_Destroy(const MR_EdgeBitSet *_this);

/// Destroys a heap-allocated array of `MR_EdgeBitSet`. Does nothing if the pointer is null.
MRC_API void MR_EdgeBitSet_DestroyArray(const MR_EdgeBitSet *_this);

/// Generated from a method of class `MR::EdgeBitSet` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_AssignFromAnother(MR_EdgeBitSet *_this, MR_PassBy _other_pass_by, MR_EdgeBitSet *_other);

/// Generated from a method of class `MR::EdgeBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_set_3(MR_EdgeBitSet *_this, MR_EdgeId n, MR_uint64_t len, bool val);

/// Generated from a method of class `MR::EdgeBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_set_2(MR_EdgeBitSet *_this, MR_EdgeId n, bool val);

/// Generated from a method of class `MR::EdgeBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_set_1(MR_EdgeBitSet *_this, MR_EdgeId n);

/// Generated from a method of class `MR::EdgeBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_set_0(MR_EdgeBitSet *_this);

/// Generated from a method of class `MR::EdgeBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_reset_2(MR_EdgeBitSet *_this, MR_EdgeId n, MR_uint64_t len);

/// Generated from a method of class `MR::EdgeBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_reset_1(MR_EdgeBitSet *_this, MR_EdgeId n);

/// Generated from a method of class `MR::EdgeBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_reset_0(MR_EdgeBitSet *_this);

/// Generated from a method of class `MR::EdgeBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_flip_2(MR_EdgeBitSet *_this, MR_EdgeId n, MR_uint64_t len);

/// Generated from a method of class `MR::EdgeBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_flip_1(MR_EdgeBitSet *_this, MR_EdgeId n);

/// Generated from a method of class `MR::EdgeBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_flip_0(MR_EdgeBitSet *_this);

/// Generated from a method of class `MR::EdgeBitSet` named `test`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_EdgeBitSet_test(const MR_EdgeBitSet *_this, MR_EdgeId n);

/// Generated from a method of class `MR::EdgeBitSet` named `test_set`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_EdgeBitSet_test_set(MR_EdgeBitSet *_this, MR_EdgeId n, const bool *val);

/// Generated from a method of class `MR::EdgeBitSet` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_EdgeBitSet_index(const MR_EdgeBitSet *_this, MR_EdgeId pos);

/// Generated from a method of class `MR::EdgeBitSet` named `find_first`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_EdgeBitSet_find_first(const MR_EdgeBitSet *_this);

/// Generated from a method of class `MR::EdgeBitSet` named `find_next`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_EdgeBitSet_find_next(const MR_EdgeBitSet *_this, MR_EdgeId pos);

/// Generated from a method of class `MR::EdgeBitSet` named `find_last`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_EdgeBitSet_find_last(const MR_EdgeBitSet *_this);

/// returns the location of nth set bit (where the first bit corresponds to n=0) or IndexType(npos) if there are less bit set
/// Generated from a method of class `MR::EdgeBitSet` named `nthSetBit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_EdgeBitSet_nthSetBit(const MR_EdgeBitSet *_this, MR_uint64_t n);

/// Generated from a method of class `MR::EdgeBitSet` named `operator&=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_bitand_assign(MR_EdgeBitSet *_this, const MR_EdgeBitSet *b);

/// Generated from a method of class `MR::EdgeBitSet` named `operator|=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_bitor_assign(MR_EdgeBitSet *_this, const MR_EdgeBitSet *b);

/// Generated from a method of class `MR::EdgeBitSet` named `operator^=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_xor_assign(MR_EdgeBitSet *_this, const MR_EdgeBitSet *b);

/// Generated from a method of class `MR::EdgeBitSet` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_sub_assign(MR_EdgeBitSet *_this, const MR_EdgeBitSet *b);

/// subtracts b from this, considering that bits in b are shifted right on bShiftInBlocks*bits_per_block
/// Generated from a method of class `MR::EdgeBitSet` named `subtract`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_subtract(MR_EdgeBitSet *_this, const MR_EdgeBitSet *b, int32_t bShiftInBlocks);

/// returns true if, for every bit that is set in this bitset, the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::EdgeBitSet` named `is_subset_of`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_EdgeBitSet_is_subset_of(const MR_EdgeBitSet *_this, const MR_EdgeBitSet *a);

/// returns true if, there is a bit which is set in this bitset, such that the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::EdgeBitSet` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_EdgeBitSet_intersects(const MR_EdgeBitSet *_this, const MR_EdgeBitSet *a);

/// Generated from a method of class `MR::EdgeBitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_EdgeBitSet_autoResizeSet_3(MR_EdgeBitSet *_this, MR_EdgeId pos, MR_uint64_t len, const bool *val);

/// Generated from a method of class `MR::EdgeBitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_EdgeBitSet_autoResizeSet_2(MR_EdgeBitSet *_this, MR_EdgeId pos, const bool *val);

/// Generated from a method of class `MR::EdgeBitSet` named `autoResizeTestSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_EdgeBitSet_autoResizeTestSet(MR_EdgeBitSet *_this, MR_EdgeId pos, const bool *val);

/// Generated from a method of class `MR::EdgeBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_getMapping_1_MR_EdgeMap(const MR_EdgeBitSet *_this, const MR_EdgeMap *map);

/// Generated from a method of class `MR::EdgeBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_getMapping_1_MR_EdgeBMap(const MR_EdgeBitSet *_this, const MR_EdgeBMap *map);

/// Generated from a method of class `MR::EdgeBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_getMapping_1_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId(const MR_EdgeBitSet *_this, const MR_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *map);

/// Generated from a method of class `MR::EdgeBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_getMapping_2_MR_EdgeMap(const MR_EdgeBitSet *_this, const MR_EdgeMap *map, MR_uint64_t resSize);

/// Generated from a method of class `MR::EdgeBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeBitSet *MR_EdgeBitSet_getMapping_2_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId(const MR_EdgeBitSet *_this, const MR_phmap_flat_hash_map_MR_EdgeId_MR_EdgeId *map, MR_uint64_t resSize);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::EdgeBitSet` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_EdgeBitSet_backId(const MR_EdgeBitSet *_this);

/// [beginId(), endId()) is the range of all bits in the set
/// Generated from a method of class `MR::EdgeBitSet` named `beginId`.
MRC_API MR_EdgeId MR_EdgeBitSet_beginId(void);

/// Generated from a method of class `MR::EdgeBitSet` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_EdgeBitSet_endId(const MR_EdgeBitSet *_this);

/// Generated from function `MR::operator&`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeBitSet *MR_bitand_MR_EdgeBitSet(const MR_EdgeBitSet *a, const MR_EdgeBitSet *b);

/// Generated from function `MR::operator|`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeBitSet *MR_bitor_MR_EdgeBitSet(const MR_EdgeBitSet *a, const MR_EdgeBitSet *b);

/// Generated from function `MR::operator^`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeBitSet *MR_xor_MR_EdgeBitSet(const MR_EdgeBitSet *a, const MR_EdgeBitSet *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeBitSet *MR_sub_MR_EdgeBitSet(const MR_EdgeBitSet *a, const MR_EdgeBitSet *b);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_UndirectedEdgeBitSet_DestroyArray()`.
/// Use `MR_UndirectedEdgeBitSet_OffsetMutablePtr()` and `MR_UndirectedEdgeBitSet_OffsetPtr()` to access the array elements.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_OffsetPtr(const MR_UndirectedEdgeBitSet *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_OffsetMutablePtr(MR_UndirectedEdgeBitSet *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::UndirectedEdgeBitSet` to its base class `MR::BitSet`.
/// This version is acting on mutable pointers.
MRC_API const MR_BitSet *MR_UndirectedEdgeBitSet_UpcastTo_MR_BitSet(const MR_UndirectedEdgeBitSet *object);

/// Upcasts an instance of `MR::UndirectedEdgeBitSet` to its base class `MR::BitSet`.
MRC_API MR_BitSet *MR_UndirectedEdgeBitSet_MutableUpcastTo_MR_BitSet(MR_UndirectedEdgeBitSet *object);

/// Generated from a constructor of class `MR::UndirectedEdgeBitSet`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_ConstructFromAnother(MR_PassBy _other_pass_by, MR_UndirectedEdgeBitSet *_other);

/// copies all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::UndirectedEdgeBitSet`.
/// Parameter `src` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_Construct_const_MR_BitSet_ref(const MR_BitSet *src);

/// moves all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::UndirectedEdgeBitSet`.
/// Parameter `src` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_Construct_MR_BitSet_rvalue_ref(MR_BitSet *src);

/// Destroys a heap-allocated instance of `MR_UndirectedEdgeBitSet`. Does nothing if the pointer is null.
MRC_API void MR_UndirectedEdgeBitSet_Destroy(const MR_UndirectedEdgeBitSet *_this);

/// Destroys a heap-allocated array of `MR_UndirectedEdgeBitSet`. Does nothing if the pointer is null.
MRC_API void MR_UndirectedEdgeBitSet_DestroyArray(const MR_UndirectedEdgeBitSet *_this);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_AssignFromAnother(MR_UndirectedEdgeBitSet *_this, MR_PassBy _other_pass_by, MR_UndirectedEdgeBitSet *_other);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_set_3(MR_UndirectedEdgeBitSet *_this, MR_UndirectedEdgeId n, MR_uint64_t len, bool val);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_set_2(MR_UndirectedEdgeBitSet *_this, MR_UndirectedEdgeId n, bool val);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_set_1(MR_UndirectedEdgeBitSet *_this, MR_UndirectedEdgeId n);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_set_0(MR_UndirectedEdgeBitSet *_this);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_reset_2(MR_UndirectedEdgeBitSet *_this, MR_UndirectedEdgeId n, MR_uint64_t len);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_reset_1(MR_UndirectedEdgeBitSet *_this, MR_UndirectedEdgeId n);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_reset_0(MR_UndirectedEdgeBitSet *_this);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_flip_2(MR_UndirectedEdgeBitSet *_this, MR_UndirectedEdgeId n, MR_uint64_t len);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_flip_1(MR_UndirectedEdgeBitSet *_this, MR_UndirectedEdgeId n);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_flip_0(MR_UndirectedEdgeBitSet *_this);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `test`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_UndirectedEdgeBitSet_test(const MR_UndirectedEdgeBitSet *_this, MR_UndirectedEdgeId n);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `test_set`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_UndirectedEdgeBitSet_test_set(MR_UndirectedEdgeBitSet *_this, MR_UndirectedEdgeId n, const bool *val);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_UndirectedEdgeBitSet_index(const MR_UndirectedEdgeBitSet *_this, MR_UndirectedEdgeId pos);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `find_first`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_UndirectedEdgeBitSet_find_first(const MR_UndirectedEdgeBitSet *_this);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `find_next`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_UndirectedEdgeBitSet_find_next(const MR_UndirectedEdgeBitSet *_this, MR_UndirectedEdgeId pos);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `find_last`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_UndirectedEdgeBitSet_find_last(const MR_UndirectedEdgeBitSet *_this);

/// returns the location of nth set bit (where the first bit corresponds to n=0) or IndexType(npos) if there are less bit set
/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `nthSetBit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_UndirectedEdgeBitSet_nthSetBit(const MR_UndirectedEdgeBitSet *_this, MR_uint64_t n);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `operator&=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_bitand_assign(MR_UndirectedEdgeBitSet *_this, const MR_UndirectedEdgeBitSet *b);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `operator|=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_bitor_assign(MR_UndirectedEdgeBitSet *_this, const MR_UndirectedEdgeBitSet *b);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `operator^=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_xor_assign(MR_UndirectedEdgeBitSet *_this, const MR_UndirectedEdgeBitSet *b);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_sub_assign(MR_UndirectedEdgeBitSet *_this, const MR_UndirectedEdgeBitSet *b);

/// subtracts b from this, considering that bits in b are shifted right on bShiftInBlocks*bits_per_block
/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `subtract`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_subtract(MR_UndirectedEdgeBitSet *_this, const MR_UndirectedEdgeBitSet *b, int32_t bShiftInBlocks);

/// returns true if, for every bit that is set in this bitset, the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `is_subset_of`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_UndirectedEdgeBitSet_is_subset_of(const MR_UndirectedEdgeBitSet *_this, const MR_UndirectedEdgeBitSet *a);

/// returns true if, there is a bit which is set in this bitset, such that the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_UndirectedEdgeBitSet_intersects(const MR_UndirectedEdgeBitSet *_this, const MR_UndirectedEdgeBitSet *a);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_UndirectedEdgeBitSet_autoResizeSet_3(MR_UndirectedEdgeBitSet *_this, MR_UndirectedEdgeId pos, MR_uint64_t len, const bool *val);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_UndirectedEdgeBitSet_autoResizeSet_2(MR_UndirectedEdgeBitSet *_this, MR_UndirectedEdgeId pos, const bool *val);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `autoResizeTestSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_UndirectedEdgeBitSet_autoResizeTestSet(MR_UndirectedEdgeBitSet *_this, MR_UndirectedEdgeId pos, const bool *val);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_getMapping_1_MR_UndirectedEdgeMap(const MR_UndirectedEdgeBitSet *_this, const MR_UndirectedEdgeMap *map);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_getMapping_1_MR_UndirectedEdgeBMap(const MR_UndirectedEdgeBitSet *_this, const MR_UndirectedEdgeBMap *map);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_getMapping_1_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId(const MR_UndirectedEdgeBitSet *_this, const MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *map);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_getMapping_2_MR_UndirectedEdgeMap(const MR_UndirectedEdgeBitSet *_this, const MR_UndirectedEdgeMap *map, MR_uint64_t resSize);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_UndirectedEdgeBitSet_getMapping_2_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId(const MR_UndirectedEdgeBitSet *_this, const MR_phmap_flat_hash_map_MR_UndirectedEdgeId_MR_UndirectedEdgeId *map, MR_uint64_t resSize);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_UndirectedEdgeBitSet_backId(const MR_UndirectedEdgeBitSet *_this);

/// [beginId(), endId()) is the range of all bits in the set
/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `beginId`.
MRC_API MR_UndirectedEdgeId MR_UndirectedEdgeBitSet_beginId(void);

/// Generated from a method of class `MR::UndirectedEdgeBitSet` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_UndirectedEdgeBitSet_endId(const MR_UndirectedEdgeBitSet *_this);

/// Generated from function `MR::operator&`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_bitand_MR_UndirectedEdgeBitSet(const MR_UndirectedEdgeBitSet *a, const MR_UndirectedEdgeBitSet *b);

/// Generated from function `MR::operator|`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_bitor_MR_UndirectedEdgeBitSet(const MR_UndirectedEdgeBitSet *a, const MR_UndirectedEdgeBitSet *b);

/// Generated from function `MR::operator^`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_xor_MR_UndirectedEdgeBitSet(const MR_UndirectedEdgeBitSet *a, const MR_UndirectedEdgeBitSet *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_sub_MR_UndirectedEdgeBitSet(const MR_UndirectedEdgeBitSet *a, const MR_UndirectedEdgeBitSet *b);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PixelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_PixelBitSet *MR_PixelBitSet_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PixelBitSet_DestroyArray()`.
/// Use `MR_PixelBitSet_OffsetMutablePtr()` and `MR_PixelBitSet_OffsetPtr()` to access the array elements.
MRC_API MR_PixelBitSet *MR_PixelBitSet_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PixelBitSet *MR_PixelBitSet_OffsetPtr(const MR_PixelBitSet *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PixelBitSet *MR_PixelBitSet_OffsetMutablePtr(MR_PixelBitSet *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::PixelBitSet` to its base class `MR::BitSet`.
/// This version is acting on mutable pointers.
MRC_API const MR_BitSet *MR_PixelBitSet_UpcastTo_MR_BitSet(const MR_PixelBitSet *object);

/// Upcasts an instance of `MR::PixelBitSet` to its base class `MR::BitSet`.
MRC_API MR_BitSet *MR_PixelBitSet_MutableUpcastTo_MR_BitSet(MR_PixelBitSet *object);

/// Generated from a constructor of class `MR::PixelBitSet`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PixelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_PixelBitSet *MR_PixelBitSet_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PixelBitSet *_other);

/// copies all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::PixelBitSet`.
/// Parameter `src` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PixelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_PixelBitSet *MR_PixelBitSet_Construct_const_MR_BitSet_ref(const MR_BitSet *src);

/// moves all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::PixelBitSet`.
/// Parameter `src` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PixelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_PixelBitSet *MR_PixelBitSet_Construct_MR_BitSet_rvalue_ref(MR_BitSet *src);

/// Destroys a heap-allocated instance of `MR_PixelBitSet`. Does nothing if the pointer is null.
MRC_API void MR_PixelBitSet_Destroy(const MR_PixelBitSet *_this);

/// Destroys a heap-allocated array of `MR_PixelBitSet`. Does nothing if the pointer is null.
MRC_API void MR_PixelBitSet_DestroyArray(const MR_PixelBitSet *_this);

/// Generated from a method of class `MR::PixelBitSet` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PixelBitSet *MR_PixelBitSet_AssignFromAnother(MR_PixelBitSet *_this, MR_PassBy _other_pass_by, MR_PixelBitSet *_other);

/// Generated from a method of class `MR::PixelBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PixelBitSet *MR_PixelBitSet_set_3(MR_PixelBitSet *_this, MR_PixelId n, MR_uint64_t len, bool val);

/// Generated from a method of class `MR::PixelBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PixelBitSet *MR_PixelBitSet_set_2(MR_PixelBitSet *_this, MR_PixelId n, bool val);

/// Generated from a method of class `MR::PixelBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PixelBitSet *MR_PixelBitSet_set_1(MR_PixelBitSet *_this, MR_PixelId n);

/// Generated from a method of class `MR::PixelBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PixelBitSet *MR_PixelBitSet_set_0(MR_PixelBitSet *_this);

/// Generated from a method of class `MR::PixelBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PixelBitSet *MR_PixelBitSet_reset_2(MR_PixelBitSet *_this, MR_PixelId n, MR_uint64_t len);

/// Generated from a method of class `MR::PixelBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PixelBitSet *MR_PixelBitSet_reset_1(MR_PixelBitSet *_this, MR_PixelId n);

/// Generated from a method of class `MR::PixelBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PixelBitSet *MR_PixelBitSet_reset_0(MR_PixelBitSet *_this);

/// Generated from a method of class `MR::PixelBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PixelBitSet *MR_PixelBitSet_flip_2(MR_PixelBitSet *_this, MR_PixelId n, MR_uint64_t len);

/// Generated from a method of class `MR::PixelBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PixelBitSet *MR_PixelBitSet_flip_1(MR_PixelBitSet *_this, MR_PixelId n);

/// Generated from a method of class `MR::PixelBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PixelBitSet *MR_PixelBitSet_flip_0(MR_PixelBitSet *_this);

/// Generated from a method of class `MR::PixelBitSet` named `test`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_PixelBitSet_test(const MR_PixelBitSet *_this, MR_PixelId n);

/// Generated from a method of class `MR::PixelBitSet` named `test_set`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_PixelBitSet_test_set(MR_PixelBitSet *_this, MR_PixelId n, const bool *val);

/// Generated from a method of class `MR::PixelBitSet` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_PixelBitSet_index(const MR_PixelBitSet *_this, MR_PixelId pos);

/// Generated from a method of class `MR::PixelBitSet` named `find_first`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_PixelId MR_PixelBitSet_find_first(const MR_PixelBitSet *_this);

/// Generated from a method of class `MR::PixelBitSet` named `find_next`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_PixelId MR_PixelBitSet_find_next(const MR_PixelBitSet *_this, MR_PixelId pos);

/// Generated from a method of class `MR::PixelBitSet` named `find_last`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_PixelId MR_PixelBitSet_find_last(const MR_PixelBitSet *_this);

/// returns the location of nth set bit (where the first bit corresponds to n=0) or IndexType(npos) if there are less bit set
/// Generated from a method of class `MR::PixelBitSet` named `nthSetBit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_PixelId MR_PixelBitSet_nthSetBit(const MR_PixelBitSet *_this, MR_uint64_t n);

/// Generated from a method of class `MR::PixelBitSet` named `operator&=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PixelBitSet *MR_PixelBitSet_bitand_assign(MR_PixelBitSet *_this, const MR_PixelBitSet *b);

/// Generated from a method of class `MR::PixelBitSet` named `operator|=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PixelBitSet *MR_PixelBitSet_bitor_assign(MR_PixelBitSet *_this, const MR_PixelBitSet *b);

/// Generated from a method of class `MR::PixelBitSet` named `operator^=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PixelBitSet *MR_PixelBitSet_xor_assign(MR_PixelBitSet *_this, const MR_PixelBitSet *b);

/// Generated from a method of class `MR::PixelBitSet` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PixelBitSet *MR_PixelBitSet_sub_assign(MR_PixelBitSet *_this, const MR_PixelBitSet *b);

/// subtracts b from this, considering that bits in b are shifted right on bShiftInBlocks*bits_per_block
/// Generated from a method of class `MR::PixelBitSet` named `subtract`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PixelBitSet *MR_PixelBitSet_subtract(MR_PixelBitSet *_this, const MR_PixelBitSet *b, int32_t bShiftInBlocks);

/// returns true if, for every bit that is set in this bitset, the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::PixelBitSet` named `is_subset_of`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_PixelBitSet_is_subset_of(const MR_PixelBitSet *_this, const MR_PixelBitSet *a);

/// returns true if, there is a bit which is set in this bitset, such that the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::PixelBitSet` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_PixelBitSet_intersects(const MR_PixelBitSet *_this, const MR_PixelBitSet *a);

/// Generated from a method of class `MR::PixelBitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_PixelBitSet_autoResizeSet_3(MR_PixelBitSet *_this, MR_PixelId pos, MR_uint64_t len, const bool *val);

/// Generated from a method of class `MR::PixelBitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_PixelBitSet_autoResizeSet_2(MR_PixelBitSet *_this, MR_PixelId pos, const bool *val);

/// Generated from a method of class `MR::PixelBitSet` named `autoResizeTestSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_PixelBitSet_autoResizeTestSet(MR_PixelBitSet *_this, MR_PixelId pos, const bool *val);

/// Generated from a method of class `MR::PixelBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PixelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_PixelBitSet *MR_PixelBitSet_getMapping_1_MR_Vector_MR_PixelId_MR_PixelId(const MR_PixelBitSet *_this, const MR_Vector_MR_PixelId_MR_PixelId *map);

/// Generated from a method of class `MR::PixelBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PixelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_PixelBitSet *MR_PixelBitSet_getMapping_1_MR_BMap_MR_PixelId_MR_PixelId(const MR_PixelBitSet *_this, const MR_BMap_MR_PixelId_MR_PixelId *map);

/// Generated from a method of class `MR::PixelBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PixelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_PixelBitSet *MR_PixelBitSet_getMapping_1_phmap_flat_hash_map_MR_PixelId_MR_PixelId(const MR_PixelBitSet *_this, const MR_phmap_flat_hash_map_MR_PixelId_MR_PixelId *map);

/// Generated from a method of class `MR::PixelBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PixelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_PixelBitSet *MR_PixelBitSet_getMapping_2_MR_Vector_MR_PixelId_MR_PixelId(const MR_PixelBitSet *_this, const MR_Vector_MR_PixelId_MR_PixelId *map, MR_uint64_t resSize);

/// Generated from a method of class `MR::PixelBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PixelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_PixelBitSet *MR_PixelBitSet_getMapping_2_phmap_flat_hash_map_MR_PixelId_MR_PixelId(const MR_PixelBitSet *_this, const MR_phmap_flat_hash_map_MR_PixelId_MR_PixelId *map, MR_uint64_t resSize);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::PixelBitSet` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_PixelId MR_PixelBitSet_backId(const MR_PixelBitSet *_this);

/// [beginId(), endId()) is the range of all bits in the set
/// Generated from a method of class `MR::PixelBitSet` named `beginId`.
MRC_API MR_PixelId MR_PixelBitSet_beginId(void);

/// Generated from a method of class `MR::PixelBitSet` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_PixelId MR_PixelBitSet_endId(const MR_PixelBitSet *_this);

/// Generated from function `MR::operator&`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PixelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_PixelBitSet *MR_bitand_MR_PixelBitSet(const MR_PixelBitSet *a, const MR_PixelBitSet *b);

/// Generated from function `MR::operator|`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PixelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_PixelBitSet *MR_bitor_MR_PixelBitSet(const MR_PixelBitSet *a, const MR_PixelBitSet *b);

/// Generated from function `MR::operator^`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PixelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_PixelBitSet *MR_xor_MR_PixelBitSet(const MR_PixelBitSet *a, const MR_PixelBitSet *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PixelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_PixelBitSet *MR_sub_MR_PixelBitSet(const MR_PixelBitSet *a, const MR_PixelBitSet *b);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VoxelBitSet_DestroyArray()`.
/// Use `MR_VoxelBitSet_OffsetMutablePtr()` and `MR_VoxelBitSet_OffsetPtr()` to access the array elements.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VoxelBitSet *MR_VoxelBitSet_OffsetPtr(const MR_VoxelBitSet *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_OffsetMutablePtr(MR_VoxelBitSet *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::VoxelBitSet` to its base class `MR::BitSet`.
/// This version is acting on mutable pointers.
MRC_API const MR_BitSet *MR_VoxelBitSet_UpcastTo_MR_BitSet(const MR_VoxelBitSet *object);

/// Upcasts an instance of `MR::VoxelBitSet` to its base class `MR::BitSet`.
MRC_API MR_BitSet *MR_VoxelBitSet_MutableUpcastTo_MR_BitSet(MR_VoxelBitSet *object);

/// Generated from a constructor of class `MR::VoxelBitSet`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_ConstructFromAnother(MR_PassBy _other_pass_by, MR_VoxelBitSet *_other);

/// copies all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::VoxelBitSet`.
/// Parameter `src` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_Construct_const_MR_BitSet_ref(const MR_BitSet *src);

/// moves all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::VoxelBitSet`.
/// Parameter `src` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_Construct_MR_BitSet_rvalue_ref(MR_BitSet *src);

/// Destroys a heap-allocated instance of `MR_VoxelBitSet`. Does nothing if the pointer is null.
MRC_API void MR_VoxelBitSet_Destroy(const MR_VoxelBitSet *_this);

/// Destroys a heap-allocated array of `MR_VoxelBitSet`. Does nothing if the pointer is null.
MRC_API void MR_VoxelBitSet_DestroyArray(const MR_VoxelBitSet *_this);

/// Generated from a method of class `MR::VoxelBitSet` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_AssignFromAnother(MR_VoxelBitSet *_this, MR_PassBy _other_pass_by, MR_VoxelBitSet *_other);

/// Generated from a method of class `MR::VoxelBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_set_3(MR_VoxelBitSet *_this, MR_VoxelId n, MR_uint64_t len, bool val);

/// Generated from a method of class `MR::VoxelBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_set_2(MR_VoxelBitSet *_this, MR_VoxelId n, bool val);

/// Generated from a method of class `MR::VoxelBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_set_1(MR_VoxelBitSet *_this, MR_VoxelId n);

/// Generated from a method of class `MR::VoxelBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_set_0(MR_VoxelBitSet *_this);

/// Generated from a method of class `MR::VoxelBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_reset_2(MR_VoxelBitSet *_this, MR_VoxelId n, MR_uint64_t len);

/// Generated from a method of class `MR::VoxelBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_reset_1(MR_VoxelBitSet *_this, MR_VoxelId n);

/// Generated from a method of class `MR::VoxelBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_reset_0(MR_VoxelBitSet *_this);

/// Generated from a method of class `MR::VoxelBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_flip_2(MR_VoxelBitSet *_this, MR_VoxelId n, MR_uint64_t len);

/// Generated from a method of class `MR::VoxelBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_flip_1(MR_VoxelBitSet *_this, MR_VoxelId n);

/// Generated from a method of class `MR::VoxelBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_flip_0(MR_VoxelBitSet *_this);

/// Generated from a method of class `MR::VoxelBitSet` named `test`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_VoxelBitSet_test(const MR_VoxelBitSet *_this, MR_VoxelId n);

/// Generated from a method of class `MR::VoxelBitSet` named `test_set`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_VoxelBitSet_test_set(MR_VoxelBitSet *_this, MR_VoxelId n, const bool *val);

/// Generated from a method of class `MR::VoxelBitSet` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_VoxelBitSet_index(const MR_VoxelBitSet *_this, MR_VoxelId pos);

/// Generated from a method of class `MR::VoxelBitSet` named `find_first`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VoxelId MR_VoxelBitSet_find_first(const MR_VoxelBitSet *_this);

/// Generated from a method of class `MR::VoxelBitSet` named `find_next`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VoxelId MR_VoxelBitSet_find_next(const MR_VoxelBitSet *_this, MR_VoxelId pos);

/// Generated from a method of class `MR::VoxelBitSet` named `find_last`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VoxelId MR_VoxelBitSet_find_last(const MR_VoxelBitSet *_this);

/// returns the location of nth set bit (where the first bit corresponds to n=0) or IndexType(npos) if there are less bit set
/// Generated from a method of class `MR::VoxelBitSet` named `nthSetBit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VoxelId MR_VoxelBitSet_nthSetBit(const MR_VoxelBitSet *_this, MR_uint64_t n);

/// Generated from a method of class `MR::VoxelBitSet` named `operator&=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_bitand_assign(MR_VoxelBitSet *_this, const MR_VoxelBitSet *b);

/// Generated from a method of class `MR::VoxelBitSet` named `operator|=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_bitor_assign(MR_VoxelBitSet *_this, const MR_VoxelBitSet *b);

/// Generated from a method of class `MR::VoxelBitSet` named `operator^=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_xor_assign(MR_VoxelBitSet *_this, const MR_VoxelBitSet *b);

/// Generated from a method of class `MR::VoxelBitSet` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_sub_assign(MR_VoxelBitSet *_this, const MR_VoxelBitSet *b);

/// subtracts b from this, considering that bits in b are shifted right on bShiftInBlocks*bits_per_block
/// Generated from a method of class `MR::VoxelBitSet` named `subtract`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_subtract(MR_VoxelBitSet *_this, const MR_VoxelBitSet *b, int32_t bShiftInBlocks);

/// returns true if, for every bit that is set in this bitset, the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::VoxelBitSet` named `is_subset_of`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_VoxelBitSet_is_subset_of(const MR_VoxelBitSet *_this, const MR_VoxelBitSet *a);

/// returns true if, there is a bit which is set in this bitset, such that the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::VoxelBitSet` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_VoxelBitSet_intersects(const MR_VoxelBitSet *_this, const MR_VoxelBitSet *a);

/// Generated from a method of class `MR::VoxelBitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_VoxelBitSet_autoResizeSet_3(MR_VoxelBitSet *_this, MR_VoxelId pos, MR_uint64_t len, const bool *val);

/// Generated from a method of class `MR::VoxelBitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_VoxelBitSet_autoResizeSet_2(MR_VoxelBitSet *_this, MR_VoxelId pos, const bool *val);

/// Generated from a method of class `MR::VoxelBitSet` named `autoResizeTestSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_VoxelBitSet_autoResizeTestSet(MR_VoxelBitSet *_this, MR_VoxelId pos, const bool *val);

/// Generated from a method of class `MR::VoxelBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_getMapping_1_MR_Vector_MR_VoxelId_MR_VoxelId(const MR_VoxelBitSet *_this, const MR_Vector_MR_VoxelId_MR_VoxelId *map);

/// Generated from a method of class `MR::VoxelBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_getMapping_1_MR_BMap_MR_VoxelId_MR_VoxelId(const MR_VoxelBitSet *_this, const MR_BMap_MR_VoxelId_MR_VoxelId *map);

/// Generated from a method of class `MR::VoxelBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_getMapping_1_phmap_flat_hash_map_MR_VoxelId_MR_VoxelId(const MR_VoxelBitSet *_this, const MR_phmap_flat_hash_map_MR_VoxelId_MR_VoxelId *map);

/// Generated from a method of class `MR::VoxelBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_getMapping_2_MR_Vector_MR_VoxelId_MR_VoxelId(const MR_VoxelBitSet *_this, const MR_Vector_MR_VoxelId_MR_VoxelId *map, MR_uint64_t resSize);

/// Generated from a method of class `MR::VoxelBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelBitSet *MR_VoxelBitSet_getMapping_2_phmap_flat_hash_map_MR_VoxelId_MR_VoxelId(const MR_VoxelBitSet *_this, const MR_phmap_flat_hash_map_MR_VoxelId_MR_VoxelId *map, MR_uint64_t resSize);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::VoxelBitSet` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VoxelId MR_VoxelBitSet_backId(const MR_VoxelBitSet *_this);

/// [beginId(), endId()) is the range of all bits in the set
/// Generated from a method of class `MR::VoxelBitSet` named `beginId`.
MRC_API MR_VoxelId MR_VoxelBitSet_beginId(void);

/// Generated from a method of class `MR::VoxelBitSet` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VoxelId MR_VoxelBitSet_endId(const MR_VoxelBitSet *_this);

/// Generated from function `MR::operator&`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelBitSet *MR_bitand_MR_VoxelBitSet(const MR_VoxelBitSet *a, const MR_VoxelBitSet *b);

/// Generated from function `MR::operator|`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelBitSet *MR_bitor_MR_VoxelBitSet(const MR_VoxelBitSet *a, const MR_VoxelBitSet *b);

/// Generated from function `MR::operator^`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelBitSet *MR_xor_MR_VoxelBitSet(const MR_VoxelBitSet *a, const MR_VoxelBitSet *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelBitSet *MR_sub_MR_VoxelBitSet(const MR_VoxelBitSet *a, const MR_VoxelBitSet *b);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RegionBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_RegionBitSet *MR_RegionBitSet_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_RegionBitSet_DestroyArray()`.
/// Use `MR_RegionBitSet_OffsetMutablePtr()` and `MR_RegionBitSet_OffsetPtr()` to access the array elements.
MRC_API MR_RegionBitSet *MR_RegionBitSet_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_RegionBitSet *MR_RegionBitSet_OffsetPtr(const MR_RegionBitSet *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_RegionBitSet *MR_RegionBitSet_OffsetMutablePtr(MR_RegionBitSet *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::RegionBitSet` to its base class `MR::BitSet`.
/// This version is acting on mutable pointers.
MRC_API const MR_BitSet *MR_RegionBitSet_UpcastTo_MR_BitSet(const MR_RegionBitSet *object);

/// Upcasts an instance of `MR::RegionBitSet` to its base class `MR::BitSet`.
MRC_API MR_BitSet *MR_RegionBitSet_MutableUpcastTo_MR_BitSet(MR_RegionBitSet *object);

/// Generated from a constructor of class `MR::RegionBitSet`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RegionBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_RegionBitSet *MR_RegionBitSet_ConstructFromAnother(MR_PassBy _other_pass_by, MR_RegionBitSet *_other);

/// copies all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::RegionBitSet`.
/// Parameter `src` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RegionBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_RegionBitSet *MR_RegionBitSet_Construct_const_MR_BitSet_ref(const MR_BitSet *src);

/// moves all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::RegionBitSet`.
/// Parameter `src` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RegionBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_RegionBitSet *MR_RegionBitSet_Construct_MR_BitSet_rvalue_ref(MR_BitSet *src);

/// Destroys a heap-allocated instance of `MR_RegionBitSet`. Does nothing if the pointer is null.
MRC_API void MR_RegionBitSet_Destroy(const MR_RegionBitSet *_this);

/// Destroys a heap-allocated array of `MR_RegionBitSet`. Does nothing if the pointer is null.
MRC_API void MR_RegionBitSet_DestroyArray(const MR_RegionBitSet *_this);

/// Generated from a method of class `MR::RegionBitSet` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RegionBitSet *MR_RegionBitSet_AssignFromAnother(MR_RegionBitSet *_this, MR_PassBy _other_pass_by, MR_RegionBitSet *_other);

/// Generated from a method of class `MR::RegionBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RegionBitSet *MR_RegionBitSet_set_3(MR_RegionBitSet *_this, MR_RegionId n, MR_uint64_t len, bool val);

/// Generated from a method of class `MR::RegionBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RegionBitSet *MR_RegionBitSet_set_2(MR_RegionBitSet *_this, MR_RegionId n, bool val);

/// Generated from a method of class `MR::RegionBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RegionBitSet *MR_RegionBitSet_set_1(MR_RegionBitSet *_this, MR_RegionId n);

/// Generated from a method of class `MR::RegionBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RegionBitSet *MR_RegionBitSet_set_0(MR_RegionBitSet *_this);

/// Generated from a method of class `MR::RegionBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RegionBitSet *MR_RegionBitSet_reset_2(MR_RegionBitSet *_this, MR_RegionId n, MR_uint64_t len);

/// Generated from a method of class `MR::RegionBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RegionBitSet *MR_RegionBitSet_reset_1(MR_RegionBitSet *_this, MR_RegionId n);

/// Generated from a method of class `MR::RegionBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RegionBitSet *MR_RegionBitSet_reset_0(MR_RegionBitSet *_this);

/// Generated from a method of class `MR::RegionBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RegionBitSet *MR_RegionBitSet_flip_2(MR_RegionBitSet *_this, MR_RegionId n, MR_uint64_t len);

/// Generated from a method of class `MR::RegionBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RegionBitSet *MR_RegionBitSet_flip_1(MR_RegionBitSet *_this, MR_RegionId n);

/// Generated from a method of class `MR::RegionBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RegionBitSet *MR_RegionBitSet_flip_0(MR_RegionBitSet *_this);

/// Generated from a method of class `MR::RegionBitSet` named `test`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_RegionBitSet_test(const MR_RegionBitSet *_this, MR_RegionId n);

/// Generated from a method of class `MR::RegionBitSet` named `test_set`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_RegionBitSet_test_set(MR_RegionBitSet *_this, MR_RegionId n, const bool *val);

/// Generated from a method of class `MR::RegionBitSet` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_RegionBitSet_index(const MR_RegionBitSet *_this, MR_RegionId pos);

/// Generated from a method of class `MR::RegionBitSet` named `find_first`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_RegionId MR_RegionBitSet_find_first(const MR_RegionBitSet *_this);

/// Generated from a method of class `MR::RegionBitSet` named `find_next`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_RegionId MR_RegionBitSet_find_next(const MR_RegionBitSet *_this, MR_RegionId pos);

/// Generated from a method of class `MR::RegionBitSet` named `find_last`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_RegionId MR_RegionBitSet_find_last(const MR_RegionBitSet *_this);

/// returns the location of nth set bit (where the first bit corresponds to n=0) or IndexType(npos) if there are less bit set
/// Generated from a method of class `MR::RegionBitSet` named `nthSetBit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_RegionId MR_RegionBitSet_nthSetBit(const MR_RegionBitSet *_this, MR_uint64_t n);

/// Generated from a method of class `MR::RegionBitSet` named `operator&=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RegionBitSet *MR_RegionBitSet_bitand_assign(MR_RegionBitSet *_this, const MR_RegionBitSet *b);

/// Generated from a method of class `MR::RegionBitSet` named `operator|=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RegionBitSet *MR_RegionBitSet_bitor_assign(MR_RegionBitSet *_this, const MR_RegionBitSet *b);

/// Generated from a method of class `MR::RegionBitSet` named `operator^=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RegionBitSet *MR_RegionBitSet_xor_assign(MR_RegionBitSet *_this, const MR_RegionBitSet *b);

/// Generated from a method of class `MR::RegionBitSet` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RegionBitSet *MR_RegionBitSet_sub_assign(MR_RegionBitSet *_this, const MR_RegionBitSet *b);

/// subtracts b from this, considering that bits in b are shifted right on bShiftInBlocks*bits_per_block
/// Generated from a method of class `MR::RegionBitSet` named `subtract`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RegionBitSet *MR_RegionBitSet_subtract(MR_RegionBitSet *_this, const MR_RegionBitSet *b, int32_t bShiftInBlocks);

/// returns true if, for every bit that is set in this bitset, the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::RegionBitSet` named `is_subset_of`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_RegionBitSet_is_subset_of(const MR_RegionBitSet *_this, const MR_RegionBitSet *a);

/// returns true if, there is a bit which is set in this bitset, such that the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::RegionBitSet` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_RegionBitSet_intersects(const MR_RegionBitSet *_this, const MR_RegionBitSet *a);

/// Generated from a method of class `MR::RegionBitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_RegionBitSet_autoResizeSet_3(MR_RegionBitSet *_this, MR_RegionId pos, MR_uint64_t len, const bool *val);

/// Generated from a method of class `MR::RegionBitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_RegionBitSet_autoResizeSet_2(MR_RegionBitSet *_this, MR_RegionId pos, const bool *val);

/// Generated from a method of class `MR::RegionBitSet` named `autoResizeTestSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_RegionBitSet_autoResizeTestSet(MR_RegionBitSet *_this, MR_RegionId pos, const bool *val);

/// Generated from a method of class `MR::RegionBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RegionBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_RegionBitSet *MR_RegionBitSet_getMapping_1_MR_Vector_MR_RegionId_MR_RegionId(const MR_RegionBitSet *_this, const MR_Vector_MR_RegionId_MR_RegionId *map);

/// Generated from a method of class `MR::RegionBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RegionBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_RegionBitSet *MR_RegionBitSet_getMapping_1_MR_BMap_MR_RegionId_MR_RegionId(const MR_RegionBitSet *_this, const MR_BMap_MR_RegionId_MR_RegionId *map);

/// Generated from a method of class `MR::RegionBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RegionBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_RegionBitSet *MR_RegionBitSet_getMapping_1_phmap_flat_hash_map_MR_RegionId_MR_RegionId(const MR_RegionBitSet *_this, const MR_phmap_flat_hash_map_MR_RegionId_MR_RegionId *map);

/// Generated from a method of class `MR::RegionBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RegionBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_RegionBitSet *MR_RegionBitSet_getMapping_2_MR_Vector_MR_RegionId_MR_RegionId(const MR_RegionBitSet *_this, const MR_Vector_MR_RegionId_MR_RegionId *map, MR_uint64_t resSize);

/// Generated from a method of class `MR::RegionBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RegionBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_RegionBitSet *MR_RegionBitSet_getMapping_2_phmap_flat_hash_map_MR_RegionId_MR_RegionId(const MR_RegionBitSet *_this, const MR_phmap_flat_hash_map_MR_RegionId_MR_RegionId *map, MR_uint64_t resSize);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::RegionBitSet` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_RegionId MR_RegionBitSet_backId(const MR_RegionBitSet *_this);

/// [beginId(), endId()) is the range of all bits in the set
/// Generated from a method of class `MR::RegionBitSet` named `beginId`.
MRC_API MR_RegionId MR_RegionBitSet_beginId(void);

/// Generated from a method of class `MR::RegionBitSet` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_RegionId MR_RegionBitSet_endId(const MR_RegionBitSet *_this);

/// Generated from function `MR::operator&`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RegionBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_RegionBitSet *MR_bitand_MR_RegionBitSet(const MR_RegionBitSet *a, const MR_RegionBitSet *b);

/// Generated from function `MR::operator|`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RegionBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_RegionBitSet *MR_bitor_MR_RegionBitSet(const MR_RegionBitSet *a, const MR_RegionBitSet *b);

/// Generated from function `MR::operator^`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RegionBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_RegionBitSet *MR_xor_MR_RegionBitSet(const MR_RegionBitSet *a, const MR_RegionBitSet *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RegionBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_RegionBitSet *MR_sub_MR_RegionBitSet(const MR_RegionBitSet *a, const MR_RegionBitSet *b);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NodeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_NodeBitSet *MR_NodeBitSet_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NodeBitSet_DestroyArray()`.
/// Use `MR_NodeBitSet_OffsetMutablePtr()` and `MR_NodeBitSet_OffsetPtr()` to access the array elements.
MRC_API MR_NodeBitSet *MR_NodeBitSet_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NodeBitSet *MR_NodeBitSet_OffsetPtr(const MR_NodeBitSet *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NodeBitSet *MR_NodeBitSet_OffsetMutablePtr(MR_NodeBitSet *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::NodeBitSet` to its base class `MR::BitSet`.
/// This version is acting on mutable pointers.
MRC_API const MR_BitSet *MR_NodeBitSet_UpcastTo_MR_BitSet(const MR_NodeBitSet *object);

/// Upcasts an instance of `MR::NodeBitSet` to its base class `MR::BitSet`.
MRC_API MR_BitSet *MR_NodeBitSet_MutableUpcastTo_MR_BitSet(MR_NodeBitSet *object);

/// Generated from a constructor of class `MR::NodeBitSet`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NodeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_NodeBitSet *MR_NodeBitSet_ConstructFromAnother(MR_PassBy _other_pass_by, MR_NodeBitSet *_other);

/// copies all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::NodeBitSet`.
/// Parameter `src` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NodeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_NodeBitSet *MR_NodeBitSet_Construct_const_MR_BitSet_ref(const MR_BitSet *src);

/// moves all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::NodeBitSet`.
/// Parameter `src` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NodeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_NodeBitSet *MR_NodeBitSet_Construct_MR_BitSet_rvalue_ref(MR_BitSet *src);

/// Destroys a heap-allocated instance of `MR_NodeBitSet`. Does nothing if the pointer is null.
MRC_API void MR_NodeBitSet_Destroy(const MR_NodeBitSet *_this);

/// Destroys a heap-allocated array of `MR_NodeBitSet`. Does nothing if the pointer is null.
MRC_API void MR_NodeBitSet_DestroyArray(const MR_NodeBitSet *_this);

/// Generated from a method of class `MR::NodeBitSet` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeBitSet *MR_NodeBitSet_AssignFromAnother(MR_NodeBitSet *_this, MR_PassBy _other_pass_by, MR_NodeBitSet *_other);

/// Generated from a method of class `MR::NodeBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeBitSet *MR_NodeBitSet_set_3(MR_NodeBitSet *_this, MR_NodeId n, MR_uint64_t len, bool val);

/// Generated from a method of class `MR::NodeBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeBitSet *MR_NodeBitSet_set_2(MR_NodeBitSet *_this, MR_NodeId n, bool val);

/// Generated from a method of class `MR::NodeBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeBitSet *MR_NodeBitSet_set_1(MR_NodeBitSet *_this, MR_NodeId n);

/// Generated from a method of class `MR::NodeBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeBitSet *MR_NodeBitSet_set_0(MR_NodeBitSet *_this);

/// Generated from a method of class `MR::NodeBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeBitSet *MR_NodeBitSet_reset_2(MR_NodeBitSet *_this, MR_NodeId n, MR_uint64_t len);

/// Generated from a method of class `MR::NodeBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeBitSet *MR_NodeBitSet_reset_1(MR_NodeBitSet *_this, MR_NodeId n);

/// Generated from a method of class `MR::NodeBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeBitSet *MR_NodeBitSet_reset_0(MR_NodeBitSet *_this);

/// Generated from a method of class `MR::NodeBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeBitSet *MR_NodeBitSet_flip_2(MR_NodeBitSet *_this, MR_NodeId n, MR_uint64_t len);

/// Generated from a method of class `MR::NodeBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeBitSet *MR_NodeBitSet_flip_1(MR_NodeBitSet *_this, MR_NodeId n);

/// Generated from a method of class `MR::NodeBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeBitSet *MR_NodeBitSet_flip_0(MR_NodeBitSet *_this);

/// Generated from a method of class `MR::NodeBitSet` named `test`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_NodeBitSet_test(const MR_NodeBitSet *_this, MR_NodeId n);

/// Generated from a method of class `MR::NodeBitSet` named `test_set`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_NodeBitSet_test_set(MR_NodeBitSet *_this, MR_NodeId n, const bool *val);

/// Generated from a method of class `MR::NodeBitSet` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_NodeBitSet_index(const MR_NodeBitSet *_this, MR_NodeId pos);

/// Generated from a method of class `MR::NodeBitSet` named `find_first`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NodeId MR_NodeBitSet_find_first(const MR_NodeBitSet *_this);

/// Generated from a method of class `MR::NodeBitSet` named `find_next`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NodeId MR_NodeBitSet_find_next(const MR_NodeBitSet *_this, MR_NodeId pos);

/// Generated from a method of class `MR::NodeBitSet` named `find_last`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NodeId MR_NodeBitSet_find_last(const MR_NodeBitSet *_this);

/// returns the location of nth set bit (where the first bit corresponds to n=0) or IndexType(npos) if there are less bit set
/// Generated from a method of class `MR::NodeBitSet` named `nthSetBit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NodeId MR_NodeBitSet_nthSetBit(const MR_NodeBitSet *_this, MR_uint64_t n);

/// Generated from a method of class `MR::NodeBitSet` named `operator&=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeBitSet *MR_NodeBitSet_bitand_assign(MR_NodeBitSet *_this, const MR_NodeBitSet *b);

/// Generated from a method of class `MR::NodeBitSet` named `operator|=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeBitSet *MR_NodeBitSet_bitor_assign(MR_NodeBitSet *_this, const MR_NodeBitSet *b);

/// Generated from a method of class `MR::NodeBitSet` named `operator^=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeBitSet *MR_NodeBitSet_xor_assign(MR_NodeBitSet *_this, const MR_NodeBitSet *b);

/// Generated from a method of class `MR::NodeBitSet` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeBitSet *MR_NodeBitSet_sub_assign(MR_NodeBitSet *_this, const MR_NodeBitSet *b);

/// subtracts b from this, considering that bits in b are shifted right on bShiftInBlocks*bits_per_block
/// Generated from a method of class `MR::NodeBitSet` named `subtract`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeBitSet *MR_NodeBitSet_subtract(MR_NodeBitSet *_this, const MR_NodeBitSet *b, int32_t bShiftInBlocks);

/// returns true if, for every bit that is set in this bitset, the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::NodeBitSet` named `is_subset_of`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_NodeBitSet_is_subset_of(const MR_NodeBitSet *_this, const MR_NodeBitSet *a);

/// returns true if, there is a bit which is set in this bitset, such that the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::NodeBitSet` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_NodeBitSet_intersects(const MR_NodeBitSet *_this, const MR_NodeBitSet *a);

/// Generated from a method of class `MR::NodeBitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_NodeBitSet_autoResizeSet_3(MR_NodeBitSet *_this, MR_NodeId pos, MR_uint64_t len, const bool *val);

/// Generated from a method of class `MR::NodeBitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_NodeBitSet_autoResizeSet_2(MR_NodeBitSet *_this, MR_NodeId pos, const bool *val);

/// Generated from a method of class `MR::NodeBitSet` named `autoResizeTestSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_NodeBitSet_autoResizeTestSet(MR_NodeBitSet *_this, MR_NodeId pos, const bool *val);

/// Generated from a method of class `MR::NodeBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NodeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_NodeBitSet *MR_NodeBitSet_getMapping_1_MR_Vector_MR_NodeId_MR_NodeId(const MR_NodeBitSet *_this, const MR_Vector_MR_NodeId_MR_NodeId *map);

/// Generated from a method of class `MR::NodeBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NodeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_NodeBitSet *MR_NodeBitSet_getMapping_1_MR_BMap_MR_NodeId_MR_NodeId(const MR_NodeBitSet *_this, const MR_BMap_MR_NodeId_MR_NodeId *map);

/// Generated from a method of class `MR::NodeBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NodeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_NodeBitSet *MR_NodeBitSet_getMapping_1_phmap_flat_hash_map_MR_NodeId_MR_NodeId(const MR_NodeBitSet *_this, const MR_phmap_flat_hash_map_MR_NodeId_MR_NodeId *map);

/// Generated from a method of class `MR::NodeBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NodeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_NodeBitSet *MR_NodeBitSet_getMapping_2_MR_Vector_MR_NodeId_MR_NodeId(const MR_NodeBitSet *_this, const MR_Vector_MR_NodeId_MR_NodeId *map, MR_uint64_t resSize);

/// Generated from a method of class `MR::NodeBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NodeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_NodeBitSet *MR_NodeBitSet_getMapping_2_phmap_flat_hash_map_MR_NodeId_MR_NodeId(const MR_NodeBitSet *_this, const MR_phmap_flat_hash_map_MR_NodeId_MR_NodeId *map, MR_uint64_t resSize);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::NodeBitSet` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NodeId MR_NodeBitSet_backId(const MR_NodeBitSet *_this);

/// [beginId(), endId()) is the range of all bits in the set
/// Generated from a method of class `MR::NodeBitSet` named `beginId`.
MRC_API MR_NodeId MR_NodeBitSet_beginId(void);

/// Generated from a method of class `MR::NodeBitSet` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NodeId MR_NodeBitSet_endId(const MR_NodeBitSet *_this);

/// Generated from function `MR::operator&`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NodeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_NodeBitSet *MR_bitand_MR_NodeBitSet(const MR_NodeBitSet *a, const MR_NodeBitSet *b);

/// Generated from function `MR::operator|`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NodeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_NodeBitSet *MR_bitor_MR_NodeBitSet(const MR_NodeBitSet *a, const MR_NodeBitSet *b);

/// Generated from function `MR::operator^`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NodeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_NodeBitSet *MR_xor_MR_NodeBitSet(const MR_NodeBitSet *a, const MR_NodeBitSet *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NodeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_NodeBitSet *MR_sub_MR_NodeBitSet(const MR_NodeBitSet *a, const MR_NodeBitSet *b);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_ObjBitSet *MR_ObjBitSet_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ObjBitSet_DestroyArray()`.
/// Use `MR_ObjBitSet_OffsetMutablePtr()` and `MR_ObjBitSet_OffsetPtr()` to access the array elements.
MRC_API MR_ObjBitSet *MR_ObjBitSet_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ObjBitSet *MR_ObjBitSet_OffsetPtr(const MR_ObjBitSet *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ObjBitSet *MR_ObjBitSet_OffsetMutablePtr(MR_ObjBitSet *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ObjBitSet` to its base class `MR::BitSet`.
/// This version is acting on mutable pointers.
MRC_API const MR_BitSet *MR_ObjBitSet_UpcastTo_MR_BitSet(const MR_ObjBitSet *object);

/// Upcasts an instance of `MR::ObjBitSet` to its base class `MR::BitSet`.
MRC_API MR_BitSet *MR_ObjBitSet_MutableUpcastTo_MR_BitSet(MR_ObjBitSet *object);

/// Generated from a constructor of class `MR::ObjBitSet`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_ObjBitSet *MR_ObjBitSet_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ObjBitSet *_other);

/// copies all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::ObjBitSet`.
/// Parameter `src` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_ObjBitSet *MR_ObjBitSet_Construct_const_MR_BitSet_ref(const MR_BitSet *src);

/// moves all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::ObjBitSet`.
/// Parameter `src` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_ObjBitSet *MR_ObjBitSet_Construct_MR_BitSet_rvalue_ref(MR_BitSet *src);

/// Destroys a heap-allocated instance of `MR_ObjBitSet`. Does nothing if the pointer is null.
MRC_API void MR_ObjBitSet_Destroy(const MR_ObjBitSet *_this);

/// Destroys a heap-allocated array of `MR_ObjBitSet`. Does nothing if the pointer is null.
MRC_API void MR_ObjBitSet_DestroyArray(const MR_ObjBitSet *_this);

/// Generated from a method of class `MR::ObjBitSet` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjBitSet *MR_ObjBitSet_AssignFromAnother(MR_ObjBitSet *_this, MR_PassBy _other_pass_by, MR_ObjBitSet *_other);

/// Generated from a method of class `MR::ObjBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjBitSet *MR_ObjBitSet_set_3(MR_ObjBitSet *_this, MR_ObjId n, MR_uint64_t len, bool val);

/// Generated from a method of class `MR::ObjBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjBitSet *MR_ObjBitSet_set_2(MR_ObjBitSet *_this, MR_ObjId n, bool val);

/// Generated from a method of class `MR::ObjBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjBitSet *MR_ObjBitSet_set_1(MR_ObjBitSet *_this, MR_ObjId n);

/// Generated from a method of class `MR::ObjBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjBitSet *MR_ObjBitSet_set_0(MR_ObjBitSet *_this);

/// Generated from a method of class `MR::ObjBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjBitSet *MR_ObjBitSet_reset_2(MR_ObjBitSet *_this, MR_ObjId n, MR_uint64_t len);

/// Generated from a method of class `MR::ObjBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjBitSet *MR_ObjBitSet_reset_1(MR_ObjBitSet *_this, MR_ObjId n);

/// Generated from a method of class `MR::ObjBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjBitSet *MR_ObjBitSet_reset_0(MR_ObjBitSet *_this);

/// Generated from a method of class `MR::ObjBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjBitSet *MR_ObjBitSet_flip_2(MR_ObjBitSet *_this, MR_ObjId n, MR_uint64_t len);

/// Generated from a method of class `MR::ObjBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjBitSet *MR_ObjBitSet_flip_1(MR_ObjBitSet *_this, MR_ObjId n);

/// Generated from a method of class `MR::ObjBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjBitSet *MR_ObjBitSet_flip_0(MR_ObjBitSet *_this);

/// Generated from a method of class `MR::ObjBitSet` named `test`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ObjBitSet_test(const MR_ObjBitSet *_this, MR_ObjId n);

/// Generated from a method of class `MR::ObjBitSet` named `test_set`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_ObjBitSet_test_set(MR_ObjBitSet *_this, MR_ObjId n, const bool *val);

/// Generated from a method of class `MR::ObjBitSet` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ObjBitSet_index(const MR_ObjBitSet *_this, MR_ObjId pos);

/// Generated from a method of class `MR::ObjBitSet` named `find_first`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_ObjId MR_ObjBitSet_find_first(const MR_ObjBitSet *_this);

/// Generated from a method of class `MR::ObjBitSet` named `find_next`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_ObjId MR_ObjBitSet_find_next(const MR_ObjBitSet *_this, MR_ObjId pos);

/// Generated from a method of class `MR::ObjBitSet` named `find_last`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_ObjId MR_ObjBitSet_find_last(const MR_ObjBitSet *_this);

/// returns the location of nth set bit (where the first bit corresponds to n=0) or IndexType(npos) if there are less bit set
/// Generated from a method of class `MR::ObjBitSet` named `nthSetBit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_ObjId MR_ObjBitSet_nthSetBit(const MR_ObjBitSet *_this, MR_uint64_t n);

/// Generated from a method of class `MR::ObjBitSet` named `operator&=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjBitSet *MR_ObjBitSet_bitand_assign(MR_ObjBitSet *_this, const MR_ObjBitSet *b);

/// Generated from a method of class `MR::ObjBitSet` named `operator|=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjBitSet *MR_ObjBitSet_bitor_assign(MR_ObjBitSet *_this, const MR_ObjBitSet *b);

/// Generated from a method of class `MR::ObjBitSet` named `operator^=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjBitSet *MR_ObjBitSet_xor_assign(MR_ObjBitSet *_this, const MR_ObjBitSet *b);

/// Generated from a method of class `MR::ObjBitSet` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjBitSet *MR_ObjBitSet_sub_assign(MR_ObjBitSet *_this, const MR_ObjBitSet *b);

/// subtracts b from this, considering that bits in b are shifted right on bShiftInBlocks*bits_per_block
/// Generated from a method of class `MR::ObjBitSet` named `subtract`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjBitSet *MR_ObjBitSet_subtract(MR_ObjBitSet *_this, const MR_ObjBitSet *b, int32_t bShiftInBlocks);

/// returns true if, for every bit that is set in this bitset, the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::ObjBitSet` named `is_subset_of`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_ObjBitSet_is_subset_of(const MR_ObjBitSet *_this, const MR_ObjBitSet *a);

/// returns true if, there is a bit which is set in this bitset, such that the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::ObjBitSet` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_ObjBitSet_intersects(const MR_ObjBitSet *_this, const MR_ObjBitSet *a);

/// Generated from a method of class `MR::ObjBitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_ObjBitSet_autoResizeSet_3(MR_ObjBitSet *_this, MR_ObjId pos, MR_uint64_t len, const bool *val);

/// Generated from a method of class `MR::ObjBitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_ObjBitSet_autoResizeSet_2(MR_ObjBitSet *_this, MR_ObjId pos, const bool *val);

/// Generated from a method of class `MR::ObjBitSet` named `autoResizeTestSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_ObjBitSet_autoResizeTestSet(MR_ObjBitSet *_this, MR_ObjId pos, const bool *val);

/// Generated from a method of class `MR::ObjBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_ObjBitSet *MR_ObjBitSet_getMapping_1_MR_ObjMap(const MR_ObjBitSet *_this, const MR_ObjMap *map);

/// Generated from a method of class `MR::ObjBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_ObjBitSet *MR_ObjBitSet_getMapping_1_MR_BMap_MR_ObjId_MR_ObjId(const MR_ObjBitSet *_this, const MR_BMap_MR_ObjId_MR_ObjId *map);

/// Generated from a method of class `MR::ObjBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_ObjBitSet *MR_ObjBitSet_getMapping_1_phmap_flat_hash_map_MR_ObjId_MR_ObjId(const MR_ObjBitSet *_this, const MR_phmap_flat_hash_map_MR_ObjId_MR_ObjId *map);

/// Generated from a method of class `MR::ObjBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_ObjBitSet *MR_ObjBitSet_getMapping_2_MR_ObjMap(const MR_ObjBitSet *_this, const MR_ObjMap *map, MR_uint64_t resSize);

/// Generated from a method of class `MR::ObjBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_ObjBitSet *MR_ObjBitSet_getMapping_2_phmap_flat_hash_map_MR_ObjId_MR_ObjId(const MR_ObjBitSet *_this, const MR_phmap_flat_hash_map_MR_ObjId_MR_ObjId *map, MR_uint64_t resSize);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::ObjBitSet` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_ObjId MR_ObjBitSet_backId(const MR_ObjBitSet *_this);

/// [beginId(), endId()) is the range of all bits in the set
/// Generated from a method of class `MR::ObjBitSet` named `beginId`.
MRC_API MR_ObjId MR_ObjBitSet_beginId(void);

/// Generated from a method of class `MR::ObjBitSet` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_ObjId MR_ObjBitSet_endId(const MR_ObjBitSet *_this);

/// Generated from function `MR::operator&`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_ObjBitSet *MR_bitand_MR_ObjBitSet(const MR_ObjBitSet *a, const MR_ObjBitSet *b);

/// Generated from function `MR::operator|`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_ObjBitSet *MR_bitor_MR_ObjBitSet(const MR_ObjBitSet *a, const MR_ObjBitSet *b);

/// Generated from function `MR::operator^`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_ObjBitSet *MR_xor_MR_ObjBitSet(const MR_ObjBitSet *a, const MR_ObjBitSet *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_ObjBitSet *MR_sub_MR_ObjBitSet(const MR_ObjBitSet *a, const MR_ObjBitSet *b);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TextureBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_TextureBitSet *MR_TextureBitSet_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_TextureBitSet_DestroyArray()`.
/// Use `MR_TextureBitSet_OffsetMutablePtr()` and `MR_TextureBitSet_OffsetPtr()` to access the array elements.
MRC_API MR_TextureBitSet *MR_TextureBitSet_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_TextureBitSet *MR_TextureBitSet_OffsetPtr(const MR_TextureBitSet *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_TextureBitSet *MR_TextureBitSet_OffsetMutablePtr(MR_TextureBitSet *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::TextureBitSet` to its base class `MR::BitSet`.
/// This version is acting on mutable pointers.
MRC_API const MR_BitSet *MR_TextureBitSet_UpcastTo_MR_BitSet(const MR_TextureBitSet *object);

/// Upcasts an instance of `MR::TextureBitSet` to its base class `MR::BitSet`.
MRC_API MR_BitSet *MR_TextureBitSet_MutableUpcastTo_MR_BitSet(MR_TextureBitSet *object);

/// Generated from a constructor of class `MR::TextureBitSet`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TextureBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_TextureBitSet *MR_TextureBitSet_ConstructFromAnother(MR_PassBy _other_pass_by, MR_TextureBitSet *_other);

/// copies all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::TextureBitSet`.
/// Parameter `src` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TextureBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_TextureBitSet *MR_TextureBitSet_Construct_const_MR_BitSet_ref(const MR_BitSet *src);

/// moves all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::TextureBitSet`.
/// Parameter `src` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TextureBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_TextureBitSet *MR_TextureBitSet_Construct_MR_BitSet_rvalue_ref(MR_BitSet *src);

/// Destroys a heap-allocated instance of `MR_TextureBitSet`. Does nothing if the pointer is null.
MRC_API void MR_TextureBitSet_Destroy(const MR_TextureBitSet *_this);

/// Destroys a heap-allocated array of `MR_TextureBitSet`. Does nothing if the pointer is null.
MRC_API void MR_TextureBitSet_DestroyArray(const MR_TextureBitSet *_this);

/// Generated from a method of class `MR::TextureBitSet` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TextureBitSet *MR_TextureBitSet_AssignFromAnother(MR_TextureBitSet *_this, MR_PassBy _other_pass_by, MR_TextureBitSet *_other);

/// Generated from a method of class `MR::TextureBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TextureBitSet *MR_TextureBitSet_set_3(MR_TextureBitSet *_this, MR_TextureId n, MR_uint64_t len, bool val);

/// Generated from a method of class `MR::TextureBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TextureBitSet *MR_TextureBitSet_set_2(MR_TextureBitSet *_this, MR_TextureId n, bool val);

/// Generated from a method of class `MR::TextureBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TextureBitSet *MR_TextureBitSet_set_1(MR_TextureBitSet *_this, MR_TextureId n);

/// Generated from a method of class `MR::TextureBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TextureBitSet *MR_TextureBitSet_set_0(MR_TextureBitSet *_this);

/// Generated from a method of class `MR::TextureBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TextureBitSet *MR_TextureBitSet_reset_2(MR_TextureBitSet *_this, MR_TextureId n, MR_uint64_t len);

/// Generated from a method of class `MR::TextureBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TextureBitSet *MR_TextureBitSet_reset_1(MR_TextureBitSet *_this, MR_TextureId n);

/// Generated from a method of class `MR::TextureBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TextureBitSet *MR_TextureBitSet_reset_0(MR_TextureBitSet *_this);

/// Generated from a method of class `MR::TextureBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TextureBitSet *MR_TextureBitSet_flip_2(MR_TextureBitSet *_this, MR_TextureId n, MR_uint64_t len);

/// Generated from a method of class `MR::TextureBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TextureBitSet *MR_TextureBitSet_flip_1(MR_TextureBitSet *_this, MR_TextureId n);

/// Generated from a method of class `MR::TextureBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TextureBitSet *MR_TextureBitSet_flip_0(MR_TextureBitSet *_this);

/// Generated from a method of class `MR::TextureBitSet` named `test`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_TextureBitSet_test(const MR_TextureBitSet *_this, MR_TextureId n);

/// Generated from a method of class `MR::TextureBitSet` named `test_set`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_TextureBitSet_test_set(MR_TextureBitSet *_this, MR_TextureId n, const bool *val);

/// Generated from a method of class `MR::TextureBitSet` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_TextureBitSet_index(const MR_TextureBitSet *_this, MR_TextureId pos);

/// Generated from a method of class `MR::TextureBitSet` named `find_first`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_TextureId MR_TextureBitSet_find_first(const MR_TextureBitSet *_this);

/// Generated from a method of class `MR::TextureBitSet` named `find_next`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_TextureId MR_TextureBitSet_find_next(const MR_TextureBitSet *_this, MR_TextureId pos);

/// Generated from a method of class `MR::TextureBitSet` named `find_last`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_TextureId MR_TextureBitSet_find_last(const MR_TextureBitSet *_this);

/// returns the location of nth set bit (where the first bit corresponds to n=0) or IndexType(npos) if there are less bit set
/// Generated from a method of class `MR::TextureBitSet` named `nthSetBit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_TextureId MR_TextureBitSet_nthSetBit(const MR_TextureBitSet *_this, MR_uint64_t n);

/// Generated from a method of class `MR::TextureBitSet` named `operator&=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TextureBitSet *MR_TextureBitSet_bitand_assign(MR_TextureBitSet *_this, const MR_TextureBitSet *b);

/// Generated from a method of class `MR::TextureBitSet` named `operator|=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TextureBitSet *MR_TextureBitSet_bitor_assign(MR_TextureBitSet *_this, const MR_TextureBitSet *b);

/// Generated from a method of class `MR::TextureBitSet` named `operator^=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TextureBitSet *MR_TextureBitSet_xor_assign(MR_TextureBitSet *_this, const MR_TextureBitSet *b);

/// Generated from a method of class `MR::TextureBitSet` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TextureBitSet *MR_TextureBitSet_sub_assign(MR_TextureBitSet *_this, const MR_TextureBitSet *b);

/// subtracts b from this, considering that bits in b are shifted right on bShiftInBlocks*bits_per_block
/// Generated from a method of class `MR::TextureBitSet` named `subtract`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TextureBitSet *MR_TextureBitSet_subtract(MR_TextureBitSet *_this, const MR_TextureBitSet *b, int32_t bShiftInBlocks);

/// returns true if, for every bit that is set in this bitset, the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::TextureBitSet` named `is_subset_of`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_TextureBitSet_is_subset_of(const MR_TextureBitSet *_this, const MR_TextureBitSet *a);

/// returns true if, there is a bit which is set in this bitset, such that the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::TextureBitSet` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_TextureBitSet_intersects(const MR_TextureBitSet *_this, const MR_TextureBitSet *a);

/// Generated from a method of class `MR::TextureBitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_TextureBitSet_autoResizeSet_3(MR_TextureBitSet *_this, MR_TextureId pos, MR_uint64_t len, const bool *val);

/// Generated from a method of class `MR::TextureBitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_TextureBitSet_autoResizeSet_2(MR_TextureBitSet *_this, MR_TextureId pos, const bool *val);

/// Generated from a method of class `MR::TextureBitSet` named `autoResizeTestSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_TextureBitSet_autoResizeTestSet(MR_TextureBitSet *_this, MR_TextureId pos, const bool *val);

/// Generated from a method of class `MR::TextureBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TextureBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_TextureBitSet *MR_TextureBitSet_getMapping_1_MR_Vector_MR_TextureId_MR_TextureId(const MR_TextureBitSet *_this, const MR_Vector_MR_TextureId_MR_TextureId *map);

/// Generated from a method of class `MR::TextureBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TextureBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_TextureBitSet *MR_TextureBitSet_getMapping_1_MR_BMap_MR_TextureId_MR_TextureId(const MR_TextureBitSet *_this, const MR_BMap_MR_TextureId_MR_TextureId *map);

/// Generated from a method of class `MR::TextureBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TextureBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_TextureBitSet *MR_TextureBitSet_getMapping_1_phmap_flat_hash_map_MR_TextureId_MR_TextureId(const MR_TextureBitSet *_this, const MR_phmap_flat_hash_map_MR_TextureId_MR_TextureId *map);

/// Generated from a method of class `MR::TextureBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TextureBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_TextureBitSet *MR_TextureBitSet_getMapping_2_MR_Vector_MR_TextureId_MR_TextureId(const MR_TextureBitSet *_this, const MR_Vector_MR_TextureId_MR_TextureId *map, MR_uint64_t resSize);

/// Generated from a method of class `MR::TextureBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TextureBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_TextureBitSet *MR_TextureBitSet_getMapping_2_phmap_flat_hash_map_MR_TextureId_MR_TextureId(const MR_TextureBitSet *_this, const MR_phmap_flat_hash_map_MR_TextureId_MR_TextureId *map, MR_uint64_t resSize);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::TextureBitSet` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_TextureId MR_TextureBitSet_backId(const MR_TextureBitSet *_this);

/// [beginId(), endId()) is the range of all bits in the set
/// Generated from a method of class `MR::TextureBitSet` named `beginId`.
MRC_API MR_TextureId MR_TextureBitSet_beginId(void);

/// Generated from a method of class `MR::TextureBitSet` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_TextureId MR_TextureBitSet_endId(const MR_TextureBitSet *_this);

/// Generated from function `MR::operator&`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TextureBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_TextureBitSet *MR_bitand_MR_TextureBitSet(const MR_TextureBitSet *a, const MR_TextureBitSet *b);

/// Generated from function `MR::operator|`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TextureBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_TextureBitSet *MR_bitor_MR_TextureBitSet(const MR_TextureBitSet *a, const MR_TextureBitSet *b);

/// Generated from function `MR::operator^`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TextureBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_TextureBitSet *MR_xor_MR_TextureBitSet(const MR_TextureBitSet *a, const MR_TextureBitSet *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TextureBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_TextureBitSet *MR_sub_MR_TextureBitSet(const MR_TextureBitSet *a, const MR_TextureBitSet *b);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphVertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_GraphVertBitSet_DestroyArray()`.
/// Use `MR_GraphVertBitSet_OffsetMutablePtr()` and `MR_GraphVertBitSet_OffsetPtr()` to access the array elements.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_GraphVertBitSet *MR_GraphVertBitSet_OffsetPtr(const MR_GraphVertBitSet *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_OffsetMutablePtr(MR_GraphVertBitSet *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::GraphVertBitSet` to its base class `MR::BitSet`.
/// This version is acting on mutable pointers.
MRC_API const MR_BitSet *MR_GraphVertBitSet_UpcastTo_MR_BitSet(const MR_GraphVertBitSet *object);

/// Upcasts an instance of `MR::GraphVertBitSet` to its base class `MR::BitSet`.
MRC_API MR_BitSet *MR_GraphVertBitSet_MutableUpcastTo_MR_BitSet(MR_GraphVertBitSet *object);

/// Generated from a constructor of class `MR::GraphVertBitSet`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphVertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_ConstructFromAnother(MR_PassBy _other_pass_by, MR_GraphVertBitSet *_other);

/// copies all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::GraphVertBitSet`.
/// Parameter `src` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphVertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_Construct_const_MR_BitSet_ref(const MR_BitSet *src);

/// moves all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::GraphVertBitSet`.
/// Parameter `src` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphVertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_Construct_MR_BitSet_rvalue_ref(MR_BitSet *src);

/// Destroys a heap-allocated instance of `MR_GraphVertBitSet`. Does nothing if the pointer is null.
MRC_API void MR_GraphVertBitSet_Destroy(const MR_GraphVertBitSet *_this);

/// Destroys a heap-allocated array of `MR_GraphVertBitSet`. Does nothing if the pointer is null.
MRC_API void MR_GraphVertBitSet_DestroyArray(const MR_GraphVertBitSet *_this);

/// Generated from a method of class `MR::GraphVertBitSet` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_AssignFromAnother(MR_GraphVertBitSet *_this, MR_PassBy _other_pass_by, MR_GraphVertBitSet *_other);

/// Generated from a method of class `MR::GraphVertBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_set_3(MR_GraphVertBitSet *_this, MR_GraphVertId n, MR_uint64_t len, bool val);

/// Generated from a method of class `MR::GraphVertBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_set_2(MR_GraphVertBitSet *_this, MR_GraphVertId n, bool val);

/// Generated from a method of class `MR::GraphVertBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_set_1(MR_GraphVertBitSet *_this, MR_GraphVertId n);

/// Generated from a method of class `MR::GraphVertBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_set_0(MR_GraphVertBitSet *_this);

/// Generated from a method of class `MR::GraphVertBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_reset_2(MR_GraphVertBitSet *_this, MR_GraphVertId n, MR_uint64_t len);

/// Generated from a method of class `MR::GraphVertBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_reset_1(MR_GraphVertBitSet *_this, MR_GraphVertId n);

/// Generated from a method of class `MR::GraphVertBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_reset_0(MR_GraphVertBitSet *_this);

/// Generated from a method of class `MR::GraphVertBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_flip_2(MR_GraphVertBitSet *_this, MR_GraphVertId n, MR_uint64_t len);

/// Generated from a method of class `MR::GraphVertBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_flip_1(MR_GraphVertBitSet *_this, MR_GraphVertId n);

/// Generated from a method of class `MR::GraphVertBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_flip_0(MR_GraphVertBitSet *_this);

/// Generated from a method of class `MR::GraphVertBitSet` named `test`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_GraphVertBitSet_test(const MR_GraphVertBitSet *_this, MR_GraphVertId n);

/// Generated from a method of class `MR::GraphVertBitSet` named `test_set`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_GraphVertBitSet_test_set(MR_GraphVertBitSet *_this, MR_GraphVertId n, const bool *val);

/// Generated from a method of class `MR::GraphVertBitSet` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_GraphVertBitSet_index(const MR_GraphVertBitSet *_this, MR_GraphVertId pos);

/// Generated from a method of class `MR::GraphVertBitSet` named `find_first`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphVertId MR_GraphVertBitSet_find_first(const MR_GraphVertBitSet *_this);

/// Generated from a method of class `MR::GraphVertBitSet` named `find_next`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphVertId MR_GraphVertBitSet_find_next(const MR_GraphVertBitSet *_this, MR_GraphVertId pos);

/// Generated from a method of class `MR::GraphVertBitSet` named `find_last`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphVertId MR_GraphVertBitSet_find_last(const MR_GraphVertBitSet *_this);

/// returns the location of nth set bit (where the first bit corresponds to n=0) or IndexType(npos) if there are less bit set
/// Generated from a method of class `MR::GraphVertBitSet` named `nthSetBit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphVertId MR_GraphVertBitSet_nthSetBit(const MR_GraphVertBitSet *_this, MR_uint64_t n);

/// Generated from a method of class `MR::GraphVertBitSet` named `operator&=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_bitand_assign(MR_GraphVertBitSet *_this, const MR_GraphVertBitSet *b);

/// Generated from a method of class `MR::GraphVertBitSet` named `operator|=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_bitor_assign(MR_GraphVertBitSet *_this, const MR_GraphVertBitSet *b);

/// Generated from a method of class `MR::GraphVertBitSet` named `operator^=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_xor_assign(MR_GraphVertBitSet *_this, const MR_GraphVertBitSet *b);

/// Generated from a method of class `MR::GraphVertBitSet` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_sub_assign(MR_GraphVertBitSet *_this, const MR_GraphVertBitSet *b);

/// subtracts b from this, considering that bits in b are shifted right on bShiftInBlocks*bits_per_block
/// Generated from a method of class `MR::GraphVertBitSet` named `subtract`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_subtract(MR_GraphVertBitSet *_this, const MR_GraphVertBitSet *b, int32_t bShiftInBlocks);

/// returns true if, for every bit that is set in this bitset, the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::GraphVertBitSet` named `is_subset_of`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_GraphVertBitSet_is_subset_of(const MR_GraphVertBitSet *_this, const MR_GraphVertBitSet *a);

/// returns true if, there is a bit which is set in this bitset, such that the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::GraphVertBitSet` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_GraphVertBitSet_intersects(const MR_GraphVertBitSet *_this, const MR_GraphVertBitSet *a);

/// Generated from a method of class `MR::GraphVertBitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_GraphVertBitSet_autoResizeSet_3(MR_GraphVertBitSet *_this, MR_GraphVertId pos, MR_uint64_t len, const bool *val);

/// Generated from a method of class `MR::GraphVertBitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_GraphVertBitSet_autoResizeSet_2(MR_GraphVertBitSet *_this, MR_GraphVertId pos, const bool *val);

/// Generated from a method of class `MR::GraphVertBitSet` named `autoResizeTestSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_GraphVertBitSet_autoResizeTestSet(MR_GraphVertBitSet *_this, MR_GraphVertId pos, const bool *val);

/// Generated from a method of class `MR::GraphVertBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphVertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_getMapping_1_MR_Vector_MR_GraphVertId_MR_GraphVertId(const MR_GraphVertBitSet *_this, const MR_Vector_MR_GraphVertId_MR_GraphVertId *map);

/// Generated from a method of class `MR::GraphVertBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphVertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_getMapping_1_MR_BMap_MR_GraphVertId_MR_GraphVertId(const MR_GraphVertBitSet *_this, const MR_BMap_MR_GraphVertId_MR_GraphVertId *map);

/// Generated from a method of class `MR::GraphVertBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphVertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_getMapping_1_phmap_flat_hash_map_MR_GraphVertId_MR_GraphVertId(const MR_GraphVertBitSet *_this, const MR_phmap_flat_hash_map_MR_GraphVertId_MR_GraphVertId *map);

/// Generated from a method of class `MR::GraphVertBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphVertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_getMapping_2_MR_Vector_MR_GraphVertId_MR_GraphVertId(const MR_GraphVertBitSet *_this, const MR_Vector_MR_GraphVertId_MR_GraphVertId *map, MR_uint64_t resSize);

/// Generated from a method of class `MR::GraphVertBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphVertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphVertBitSet *MR_GraphVertBitSet_getMapping_2_phmap_flat_hash_map_MR_GraphVertId_MR_GraphVertId(const MR_GraphVertBitSet *_this, const MR_phmap_flat_hash_map_MR_GraphVertId_MR_GraphVertId *map, MR_uint64_t resSize);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::GraphVertBitSet` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphVertId MR_GraphVertBitSet_backId(const MR_GraphVertBitSet *_this);

/// [beginId(), endId()) is the range of all bits in the set
/// Generated from a method of class `MR::GraphVertBitSet` named `beginId`.
MRC_API MR_GraphVertId MR_GraphVertBitSet_beginId(void);

/// Generated from a method of class `MR::GraphVertBitSet` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphVertId MR_GraphVertBitSet_endId(const MR_GraphVertBitSet *_this);

/// Generated from function `MR::operator&`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphVertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphVertBitSet *MR_bitand_MR_GraphVertBitSet(const MR_GraphVertBitSet *a, const MR_GraphVertBitSet *b);

/// Generated from function `MR::operator|`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphVertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphVertBitSet *MR_bitor_MR_GraphVertBitSet(const MR_GraphVertBitSet *a, const MR_GraphVertBitSet *b);

/// Generated from function `MR::operator^`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphVertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphVertBitSet *MR_xor_MR_GraphVertBitSet(const MR_GraphVertBitSet *a, const MR_GraphVertBitSet *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphVertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphVertBitSet *MR_sub_MR_GraphVertBitSet(const MR_GraphVertBitSet *a, const MR_GraphVertBitSet *b);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_GraphEdgeBitSet_DestroyArray()`.
/// Use `MR_GraphEdgeBitSet_OffsetMutablePtr()` and `MR_GraphEdgeBitSet_OffsetPtr()` to access the array elements.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_OffsetPtr(const MR_GraphEdgeBitSet *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_OffsetMutablePtr(MR_GraphEdgeBitSet *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::GraphEdgeBitSet` to its base class `MR::BitSet`.
/// This version is acting on mutable pointers.
MRC_API const MR_BitSet *MR_GraphEdgeBitSet_UpcastTo_MR_BitSet(const MR_GraphEdgeBitSet *object);

/// Upcasts an instance of `MR::GraphEdgeBitSet` to its base class `MR::BitSet`.
MRC_API MR_BitSet *MR_GraphEdgeBitSet_MutableUpcastTo_MR_BitSet(MR_GraphEdgeBitSet *object);

/// Generated from a constructor of class `MR::GraphEdgeBitSet`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_ConstructFromAnother(MR_PassBy _other_pass_by, MR_GraphEdgeBitSet *_other);

/// copies all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::GraphEdgeBitSet`.
/// Parameter `src` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_Construct_const_MR_BitSet_ref(const MR_BitSet *src);

/// moves all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::GraphEdgeBitSet`.
/// Parameter `src` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_Construct_MR_BitSet_rvalue_ref(MR_BitSet *src);

/// Destroys a heap-allocated instance of `MR_GraphEdgeBitSet`. Does nothing if the pointer is null.
MRC_API void MR_GraphEdgeBitSet_Destroy(const MR_GraphEdgeBitSet *_this);

/// Destroys a heap-allocated array of `MR_GraphEdgeBitSet`. Does nothing if the pointer is null.
MRC_API void MR_GraphEdgeBitSet_DestroyArray(const MR_GraphEdgeBitSet *_this);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_AssignFromAnother(MR_GraphEdgeBitSet *_this, MR_PassBy _other_pass_by, MR_GraphEdgeBitSet *_other);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_set_3(MR_GraphEdgeBitSet *_this, MR_GraphEdgeId n, MR_uint64_t len, bool val);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_set_2(MR_GraphEdgeBitSet *_this, MR_GraphEdgeId n, bool val);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_set_1(MR_GraphEdgeBitSet *_this, MR_GraphEdgeId n);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_set_0(MR_GraphEdgeBitSet *_this);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_reset_2(MR_GraphEdgeBitSet *_this, MR_GraphEdgeId n, MR_uint64_t len);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_reset_1(MR_GraphEdgeBitSet *_this, MR_GraphEdgeId n);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_reset_0(MR_GraphEdgeBitSet *_this);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_flip_2(MR_GraphEdgeBitSet *_this, MR_GraphEdgeId n, MR_uint64_t len);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_flip_1(MR_GraphEdgeBitSet *_this, MR_GraphEdgeId n);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_flip_0(MR_GraphEdgeBitSet *_this);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `test`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_GraphEdgeBitSet_test(const MR_GraphEdgeBitSet *_this, MR_GraphEdgeId n);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `test_set`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_GraphEdgeBitSet_test_set(MR_GraphEdgeBitSet *_this, MR_GraphEdgeId n, const bool *val);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_GraphEdgeBitSet_index(const MR_GraphEdgeBitSet *_this, MR_GraphEdgeId pos);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `find_first`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphEdgeId MR_GraphEdgeBitSet_find_first(const MR_GraphEdgeBitSet *_this);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `find_next`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphEdgeId MR_GraphEdgeBitSet_find_next(const MR_GraphEdgeBitSet *_this, MR_GraphEdgeId pos);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `find_last`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphEdgeId MR_GraphEdgeBitSet_find_last(const MR_GraphEdgeBitSet *_this);

/// returns the location of nth set bit (where the first bit corresponds to n=0) or IndexType(npos) if there are less bit set
/// Generated from a method of class `MR::GraphEdgeBitSet` named `nthSetBit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphEdgeId MR_GraphEdgeBitSet_nthSetBit(const MR_GraphEdgeBitSet *_this, MR_uint64_t n);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `operator&=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_bitand_assign(MR_GraphEdgeBitSet *_this, const MR_GraphEdgeBitSet *b);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `operator|=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_bitor_assign(MR_GraphEdgeBitSet *_this, const MR_GraphEdgeBitSet *b);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `operator^=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_xor_assign(MR_GraphEdgeBitSet *_this, const MR_GraphEdgeBitSet *b);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_sub_assign(MR_GraphEdgeBitSet *_this, const MR_GraphEdgeBitSet *b);

/// subtracts b from this, considering that bits in b are shifted right on bShiftInBlocks*bits_per_block
/// Generated from a method of class `MR::GraphEdgeBitSet` named `subtract`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_subtract(MR_GraphEdgeBitSet *_this, const MR_GraphEdgeBitSet *b, int32_t bShiftInBlocks);

/// returns true if, for every bit that is set in this bitset, the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::GraphEdgeBitSet` named `is_subset_of`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_GraphEdgeBitSet_is_subset_of(const MR_GraphEdgeBitSet *_this, const MR_GraphEdgeBitSet *a);

/// returns true if, there is a bit which is set in this bitset, such that the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::GraphEdgeBitSet` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_GraphEdgeBitSet_intersects(const MR_GraphEdgeBitSet *_this, const MR_GraphEdgeBitSet *a);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_GraphEdgeBitSet_autoResizeSet_3(MR_GraphEdgeBitSet *_this, MR_GraphEdgeId pos, MR_uint64_t len, const bool *val);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_GraphEdgeBitSet_autoResizeSet_2(MR_GraphEdgeBitSet *_this, MR_GraphEdgeId pos, const bool *val);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `autoResizeTestSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_GraphEdgeBitSet_autoResizeTestSet(MR_GraphEdgeBitSet *_this, MR_GraphEdgeId pos, const bool *val);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_getMapping_1_MR_Vector_MR_GraphEdgeId_MR_GraphEdgeId(const MR_GraphEdgeBitSet *_this, const MR_Vector_MR_GraphEdgeId_MR_GraphEdgeId *map);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_getMapping_1_MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId(const MR_GraphEdgeBitSet *_this, const MR_BMap_MR_GraphEdgeId_MR_GraphEdgeId *map);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_getMapping_1_phmap_flat_hash_map_MR_GraphEdgeId_MR_GraphEdgeId(const MR_GraphEdgeBitSet *_this, const MR_phmap_flat_hash_map_MR_GraphEdgeId_MR_GraphEdgeId *map);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_getMapping_2_MR_Vector_MR_GraphEdgeId_MR_GraphEdgeId(const MR_GraphEdgeBitSet *_this, const MR_Vector_MR_GraphEdgeId_MR_GraphEdgeId *map, MR_uint64_t resSize);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphEdgeBitSet *MR_GraphEdgeBitSet_getMapping_2_phmap_flat_hash_map_MR_GraphEdgeId_MR_GraphEdgeId(const MR_GraphEdgeBitSet *_this, const MR_phmap_flat_hash_map_MR_GraphEdgeId_MR_GraphEdgeId *map, MR_uint64_t resSize);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::GraphEdgeBitSet` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphEdgeId MR_GraphEdgeBitSet_backId(const MR_GraphEdgeBitSet *_this);

/// [beginId(), endId()) is the range of all bits in the set
/// Generated from a method of class `MR::GraphEdgeBitSet` named `beginId`.
MRC_API MR_GraphEdgeId MR_GraphEdgeBitSet_beginId(void);

/// Generated from a method of class `MR::GraphEdgeBitSet` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphEdgeId MR_GraphEdgeBitSet_endId(const MR_GraphEdgeBitSet *_this);

/// Generated from function `MR::operator&`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphEdgeBitSet *MR_bitand_MR_GraphEdgeBitSet(const MR_GraphEdgeBitSet *a, const MR_GraphEdgeBitSet *b);

/// Generated from function `MR::operator|`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphEdgeBitSet *MR_bitor_MR_GraphEdgeBitSet(const MR_GraphEdgeBitSet *a, const MR_GraphEdgeBitSet *b);

/// Generated from function `MR::operator^`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphEdgeBitSet *MR_xor_MR_GraphEdgeBitSet(const MR_GraphEdgeBitSet *a, const MR_GraphEdgeBitSet *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GraphEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_GraphEdgeBitSet *MR_sub_MR_GraphEdgeBitSet(const MR_GraphEdgeBitSet *a, const MR_GraphEdgeBitSet *b);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedBitSet_MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_TypedBitSet_MR_Id_MR_ICPElemtTag_DestroyArray()`.
/// Use `MR_TypedBitSet_MR_Id_MR_ICPElemtTag_OffsetMutablePtr()` and `MR_TypedBitSet_MR_Id_MR_ICPElemtTag_OffsetPtr()` to access the array elements.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_OffsetPtr(const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_OffsetMutablePtr(MR_TypedBitSet_MR_Id_MR_ICPElemtTag *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` to its base class `MR::BitSet`.
/// This version is acting on mutable pointers.
MRC_API const MR_BitSet *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_UpcastTo_MR_BitSet(const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *object);

/// Upcasts an instance of `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` to its base class `MR::BitSet`.
MRC_API MR_BitSet *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_MutableUpcastTo_MR_BitSet(MR_TypedBitSet_MR_Id_MR_ICPElemtTag *object);

/// Generated from a constructor of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedBitSet_MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_ConstructFromAnother(MR_PassBy _other_pass_by, MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_other);

/// copies all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>`.
/// Parameter `src` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedBitSet_MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_Construct_const_MR_BitSet_ref(const MR_BitSet *src);

/// moves all bits from another BitSet (or a descending class, e.g. TypedBitSet<U>)
/// Generated from a constructor of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>`.
/// Parameter `src` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedBitSet_MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_Construct_MR_BitSet_rvalue_ref(MR_BitSet *src);

/// Destroys a heap-allocated instance of `MR_TypedBitSet_MR_Id_MR_ICPElemtTag`. Does nothing if the pointer is null.
MRC_API void MR_TypedBitSet_MR_Id_MR_ICPElemtTag_Destroy(const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this);

/// Destroys a heap-allocated array of `MR_TypedBitSet_MR_Id_MR_ICPElemtTag`. Does nothing if the pointer is null.
MRC_API void MR_TypedBitSet_MR_Id_MR_ICPElemtTag_DestroyArray(const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_AssignFromAnother(MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, MR_PassBy _other_pass_by, MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_other);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `n` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_set_3(MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_Id_MR_ICPElemtTag *n, MR_uint64_t len, bool val);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `n` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_set_2(MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_Id_MR_ICPElemtTag *n, bool val);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `n` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_set_1(MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_Id_MR_ICPElemtTag *n);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_set_0(MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `n` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_reset_2(MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_Id_MR_ICPElemtTag *n, MR_uint64_t len);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `n` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_reset_1(MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_Id_MR_ICPElemtTag *n);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_reset_0(MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `n` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_flip_2(MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_Id_MR_ICPElemtTag *n, MR_uint64_t len);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `n` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_flip_1(MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_Id_MR_ICPElemtTag *n);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_flip_0(MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `test`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `n` can not be null. It is a single object.
MRC_API bool MR_TypedBitSet_MR_Id_MR_ICPElemtTag_test(const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_Id_MR_ICPElemtTag *n);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `test_set`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `n` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_TypedBitSet_MR_Id_MR_ICPElemtTag_test_set(MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_Id_MR_ICPElemtTag *n, const bool *val);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API bool MR_TypedBitSet_MR_Id_MR_ICPElemtTag_index(const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_Id_MR_ICPElemtTag *pos);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `find_first`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_find_first(const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `find_next`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_find_next(const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_Id_MR_ICPElemtTag *pos);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `find_last`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_find_last(const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this);

/// returns the location of nth set bit (where the first bit corresponds to n=0) or IndexType(npos) if there are less bit set
/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `nthSetBit`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_nthSetBit(const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, MR_uint64_t n);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `operator&=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_bitand_assign(MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *b);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `operator|=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_bitor_assign(MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *b);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `operator^=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_xor_assign(MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *b);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_sub_assign(MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *b);

/// subtracts b from this, considering that bits in b are shifted right on bShiftInBlocks*bits_per_block
/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `subtract`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_subtract(MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *b, int32_t bShiftInBlocks);

/// returns true if, for every bit that is set in this bitset, the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `is_subset_of`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_TypedBitSet_MR_Id_MR_ICPElemtTag_is_subset_of(const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *a);

/// returns true if, there is a bit which is set in this bitset, such that the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_TypedBitSet_MR_Id_MR_ICPElemtTag_intersects(const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *a);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_TypedBitSet_MR_Id_MR_ICPElemtTag_autoResizeSet_3(MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_Id_MR_ICPElemtTag *pos, MR_uint64_t len, const bool *val);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_TypedBitSet_MR_Id_MR_ICPElemtTag_autoResizeSet_2(MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_Id_MR_ICPElemtTag *pos, const bool *val);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `autoResizeTestSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_TypedBitSet_MR_Id_MR_ICPElemtTag_autoResizeTestSet(MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_Id_MR_ICPElemtTag *pos, const bool *val);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedBitSet_MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_getMapping_1_MR_Vector_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag(const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_Vector_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *map);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedBitSet_MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_getMapping_1_MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag(const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_BMap_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *map);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedBitSet_MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_getMapping_1_phmap_flat_hash_map_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag(const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_phmap_flat_hash_map_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *map);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedBitSet_MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_getMapping_2_MR_Vector_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag(const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_Vector_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *map, MR_uint64_t resSize);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `getMapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedBitSet_MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_getMapping_2_phmap_flat_hash_map_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag(const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this, const MR_phmap_flat_hash_map_MR_Id_MR_ICPElemtTag_MR_Id_MR_ICPElemtTag *map, MR_uint64_t resSize);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_backId(const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this);

/// [beginId(), endId()) is the range of all bits in the set
/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `beginId`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_beginId(void);

/// Generated from a method of class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_Id_MR_ICPElemtTag *MR_TypedBitSet_MR_Id_MR_ICPElemtTag_endId(const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *_this);

/// Generated from function `MR::operator&`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedBitSet_MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_bitand_MR_TypedBitSet_MR_Id_MR_ICPElemtTag(const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *a, const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *b);

/// Generated from function `MR::operator|`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedBitSet_MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_bitor_MR_TypedBitSet_MR_Id_MR_ICPElemtTag(const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *a, const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *b);

/// Generated from function `MR::operator^`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedBitSet_MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_xor_MR_TypedBitSet_MR_Id_MR_ICPElemtTag(const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *a, const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedBitSet_MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_sub_MR_TypedBitSet_MR_Id_MR_ICPElemtTag(const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *a, const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *b);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BitSet_Destroy()` to free it when you're done using it.
MRC_API MR_BitSet *MR_BitSet_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BitSet_DestroyArray()`.
/// Use `MR_BitSet_OffsetMutablePtr()` and `MR_BitSet_OffsetPtr()` to access the array elements.
MRC_API MR_BitSet *MR_BitSet_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BitSet *MR_BitSet_OffsetPtr(const MR_BitSet *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BitSet *MR_BitSet_OffsetMutablePtr(MR_BitSet *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::EdgeBitSet`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_EdgeBitSet *MR_BitSet_StaticDowncastTo_MR_EdgeBitSet(const MR_BitSet *object);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::EdgeBitSet`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_EdgeBitSet *MR_BitSet_MutableStaticDowncastTo_MR_EdgeBitSet(MR_BitSet *object);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::FaceBitSet`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_FaceBitSet *MR_BitSet_StaticDowncastTo_MR_FaceBitSet(const MR_BitSet *object);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::FaceBitSet`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_FaceBitSet *MR_BitSet_MutableStaticDowncastTo_MR_FaceBitSet(MR_BitSet *object);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::GraphEdgeBitSet`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_GraphEdgeBitSet *MR_BitSet_StaticDowncastTo_MR_GraphEdgeBitSet(const MR_BitSet *object);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::GraphEdgeBitSet`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_GraphEdgeBitSet *MR_BitSet_MutableStaticDowncastTo_MR_GraphEdgeBitSet(MR_BitSet *object);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::GraphVertBitSet`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_GraphVertBitSet *MR_BitSet_StaticDowncastTo_MR_GraphVertBitSet(const MR_BitSet *object);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::GraphVertBitSet`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_GraphVertBitSet *MR_BitSet_MutableStaticDowncastTo_MR_GraphVertBitSet(MR_BitSet *object);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::NodeBitSet`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_NodeBitSet *MR_BitSet_StaticDowncastTo_MR_NodeBitSet(const MR_BitSet *object);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::NodeBitSet`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_NodeBitSet *MR_BitSet_MutableStaticDowncastTo_MR_NodeBitSet(MR_BitSet *object);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::ObjBitSet`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjBitSet *MR_BitSet_StaticDowncastTo_MR_ObjBitSet(const MR_BitSet *object);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::ObjBitSet`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjBitSet *MR_BitSet_MutableStaticDowncastTo_MR_ObjBitSet(MR_BitSet *object);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::PixelBitSet`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_PixelBitSet *MR_BitSet_StaticDowncastTo_MR_PixelBitSet(const MR_BitSet *object);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::PixelBitSet`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_PixelBitSet *MR_BitSet_MutableStaticDowncastTo_MR_PixelBitSet(MR_BitSet *object);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::RegionBitSet`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_RegionBitSet *MR_BitSet_StaticDowncastTo_MR_RegionBitSet(const MR_BitSet *object);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::RegionBitSet`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_RegionBitSet *MR_BitSet_MutableStaticDowncastTo_MR_RegionBitSet(MR_BitSet *object);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::TextureBitSet`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_TextureBitSet *MR_BitSet_StaticDowncastTo_MR_TextureBitSet(const MR_BitSet *object);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::TextureBitSet`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_TextureBitSet *MR_BitSet_MutableStaticDowncastTo_MR_TextureBitSet(MR_BitSet *object);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_BitSet_StaticDowncastTo_MR_TypedBitSet_MR_Id_MR_ICPElemtTag(const MR_BitSet *object);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::TypedBitSet<MR::Id<MR::ICPElemtTag>>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_TypedBitSet_MR_Id_MR_ICPElemtTag *MR_BitSet_MutableStaticDowncastTo_MR_TypedBitSet_MR_Id_MR_ICPElemtTag(MR_BitSet *object);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::UndirectedEdgeBitSet`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_UndirectedEdgeBitSet *MR_BitSet_StaticDowncastTo_MR_UndirectedEdgeBitSet(const MR_BitSet *object);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::UndirectedEdgeBitSet`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_UndirectedEdgeBitSet *MR_BitSet_MutableStaticDowncastTo_MR_UndirectedEdgeBitSet(MR_BitSet *object);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::VertBitSet`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_VertBitSet *MR_BitSet_StaticDowncastTo_MR_VertBitSet(const MR_BitSet *object);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::VertBitSet`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_VertBitSet *MR_BitSet_MutableStaticDowncastTo_MR_VertBitSet(MR_BitSet *object);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::VoxelBitSet`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_VoxelBitSet *MR_BitSet_StaticDowncastTo_MR_VoxelBitSet(const MR_BitSet *object);

/// Downcasts an instance of `MR::BitSet` to a derived class `MR::VoxelBitSet`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_VoxelBitSet *MR_BitSet_MutableStaticDowncastTo_MR_VoxelBitSet(MR_BitSet *object);

/// Generated from a constructor of class `MR::BitSet`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BitSet_Destroy()` to free it when you're done using it.
MRC_API MR_BitSet *MR_BitSet_ConstructFromAnother(MR_PassBy _other_pass_by, MR_BitSet *_other);

/// creates bitset of given size filled with given value
/// Generated from a constructor of class `MR::BitSet`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BitSet_Destroy()` to free it when you're done using it.
MRC_API MR_BitSet *MR_BitSet_Construct(MR_uint64_t numBits, bool fillValue);

/// Destroys a heap-allocated instance of `MR_BitSet`. Does nothing if the pointer is null.
MRC_API void MR_BitSet_Destroy(const MR_BitSet *_this);

/// Destroys a heap-allocated array of `MR_BitSet`. Does nothing if the pointer is null.
MRC_API void MR_BitSet_DestroyArray(const MR_BitSet *_this);

/// Generated from a method of class `MR::BitSet` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BitSet *MR_BitSet_AssignFromAnother(MR_BitSet *_this, MR_PassBy _other_pass_by, MR_BitSet *_other);

// all bits after size() we silently consider as not-set
/// Generated from a method of class `MR::BitSet` named `test`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_BitSet_test(const MR_BitSet *_this, MR_uint64_t n);

/// Generated from a method of class `MR::BitSet` named `test_set`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_BitSet_test_set(MR_BitSet *_this, MR_uint64_t n, const bool *val);

/// Generated from a method of class `MR::BitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BitSet *MR_BitSet_set_3(MR_BitSet *_this, MR_uint64_t n, MR_uint64_t len, bool val);

/// Generated from a method of class `MR::BitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BitSet *MR_BitSet_set_2(MR_BitSet *_this, MR_uint64_t n, bool val);

/// Generated from a method of class `MR::BitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BitSet *MR_BitSet_set_1(MR_BitSet *_this, MR_uint64_t n);

/// Generated from a method of class `MR::BitSet` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BitSet *MR_BitSet_set_0(MR_BitSet *_this);

/// Generated from a method of class `MR::BitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BitSet *MR_BitSet_reset_2(MR_BitSet *_this, MR_uint64_t n, MR_uint64_t len);

/// Generated from a method of class `MR::BitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BitSet *MR_BitSet_reset_1(MR_BitSet *_this, MR_uint64_t n);

/// Generated from a method of class `MR::BitSet` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BitSet *MR_BitSet_reset_0(MR_BitSet *_this);

/// Generated from a method of class `MR::BitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BitSet *MR_BitSet_flip_2(MR_BitSet *_this, MR_uint64_t n, MR_uint64_t len);

/// Generated from a method of class `MR::BitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BitSet *MR_BitSet_flip_1(MR_BitSet *_this, MR_uint64_t n);

/// Generated from a method of class `MR::BitSet` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BitSet *MR_BitSet_flip_0(MR_BitSet *_this);

/// Generated from a method of class `MR::BitSet` named `operator&=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BitSet *MR_BitSet_bitand_assign(MR_BitSet *_this, const MR_BitSet *b);

/// Generated from a method of class `MR::BitSet` named `operator|=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BitSet *MR_BitSet_bitor_assign(MR_BitSet *_this, const MR_BitSet *b);

/// Generated from a method of class `MR::BitSet` named `operator^=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BitSet *MR_BitSet_xor_assign(MR_BitSet *_this, const MR_BitSet *b);

/// Generated from a method of class `MR::BitSet` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BitSet *MR_BitSet_sub_assign(MR_BitSet *_this, const MR_BitSet *b);

/// subtracts b from this, considering that bits in b are shifted right on bShiftInBlocks*bits_per_block
/// Generated from a method of class `MR::BitSet` named `subtract`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BitSet *MR_BitSet_subtract(MR_BitSet *_this, const MR_BitSet *b, int32_t bShiftInBlocks);

/// return the highest index i such as bit i is set, or npos if *this has no on bits.
/// Generated from a method of class `MR::BitSet` named `find_last`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_BitSet_find_last(const MR_BitSet *_this);

/// returns the location of nth set bit (where the first bit corresponds to n=0) or npos if there are less bit set
/// Generated from a method of class `MR::BitSet` named `nthSetBit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_BitSet_nthSetBit(const MR_BitSet *_this, MR_uint64_t n);

/// returns true if, for every bit that is set in this bitset, the corresponding bit in bitset a is also set. Otherwise this function returns false.
/// Generated from a method of class `MR::BitSet` named `is_subset_of`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_BitSet_is_subset_of(const MR_BitSet *_this, const MR_BitSet *a);

/// doubles reserved memory until resize(newSize) can be done without reallocation
/// Generated from a method of class `MR::BitSet` named `resizeWithReserve`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BitSet_resizeWithReserve(MR_BitSet *_this, MR_uint64_t newSize);

/// sets elements [pos, pos+len) to given value, adjusting the size of the set to include new elements
/// Generated from a method of class `MR::BitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_BitSet_autoResizeSet_3(MR_BitSet *_this, MR_uint64_t pos, MR_uint64_t len, const bool *val);

/// Generated from a method of class `MR::BitSet` named `autoResizeSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_BitSet_autoResizeSet_2(MR_BitSet *_this, MR_uint64_t pos, const bool *val);

/// same as \ref autoResizeSet and returns previous value of pos-bit
/// Generated from a method of class `MR::BitSet` named `autoResizeTestSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `val` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_BitSet_autoResizeTestSet(MR_BitSet *_this, MR_uint64_t pos, const bool *val);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::BitSet` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_BitSet_heapBytes(const MR_BitSet *_this);

/// returns the identifier of the back() element
/// Generated from a method of class `MR::BitSet` named `backId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_BitSet_backId(const MR_BitSet *_this);

/// [beginId(), endId()) is the range of all bits in the set
/// Generated from a method of class `MR::BitSet` named `beginId`.
MRC_API MR_uint64_t MR_BitSet_beginId(void);

/// Generated from a method of class `MR::BitSet` named `endId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_BitSet_endId(const MR_BitSet *_this);

/// Generated from a method of class `MR::BitSet` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_BitSet_size(const MR_BitSet *_this);

/// Generated from a method of class `MR::BitSet` named `count`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_BitSet_count(const MR_BitSet *_this);

/// Generated from a method of class `MR::BitSet` named `resize`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` has a default argument: `false`, pass a null pointer to use it.
MRC_API void MR_BitSet_resize(MR_BitSet *_this, MR_uint64_t num_bits, const bool *value);

/// Generated from a method of class `MR::BitSet` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BitSet_clear(MR_BitSet *_this);

/// Generated from a method of class `MR::BitSet` named `push_back`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BitSet_push_back(MR_BitSet *_this, bool bit);

/// Generated from a method of class `MR::BitSet` named `pop_back`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BitSet_pop_back(MR_BitSet *_this);

/// returns the amount of memory given BitSet occupies on heap
/// Generated from function `MR::heapBytes`.
/// Parameter `bs` can not be null. It is a single object.
MRC_API MR_uint64_t MR_heapBytes_MR_BitSet(const MR_BitSet *bs);

/// compare that two bit sets have the same set bits (they can be equal even if sizes are distinct but last bits are off)
/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_BitSet(const MR_BitSet *a, const MR_BitSet *b);

/// Generated from function `MR::operator==<MR::VertId>`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_VertBitSet(const MR_VertBitSet *a, const MR_VertBitSet *b);

/// Generated from function `MR::operator==<MR::FaceId>`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_FaceBitSet(const MR_FaceBitSet *a, const MR_FaceBitSet *b);

/// Generated from function `MR::contains<MR::FaceId>`.
MRC_API bool MR_contains(const MR_FaceBitSet *bitset, MR_FaceId id);

/// Generated from function `MR::operator&`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BitSet_Destroy()` to free it when you're done using it.
MRC_API MR_BitSet *MR_bitand_MR_BitSet(const MR_BitSet *a, const MR_BitSet *b);

/// Generated from function `MR::operator|`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BitSet_Destroy()` to free it when you're done using it.
MRC_API MR_BitSet *MR_bitor_MR_BitSet(const MR_BitSet *a, const MR_BitSet *b);

/// Generated from function `MR::operator^`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BitSet_Destroy()` to free it when you're done using it.
MRC_API MR_BitSet *MR_xor_MR_BitSet(const MR_BitSet *a, const MR_BitSet *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BitSet_Destroy()` to free it when you're done using it.
MRC_API MR_BitSet *MR_sub_MR_BitSet(const MR_BitSet *a, const MR_BitSet *b);

#ifdef __cplusplus
} // extern "C"
#endif
