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
typedef struct MR_NoInit MR_NoInit; // Defined in `#include <MRCMesh/MRMeshFwd.h>`.


// stores index of some element, it is made as template class to avoid mixing faces, edges and vertices
/// Generated from class `MR::UndirectedEdgeId`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::NoDefInit<MR::UndirectedEdgeId>`
typedef struct MR_UndirectedEdgeId
{
    int32_t id_;
} MR_UndirectedEdgeId;

// stores index of some element, it is made as template class to avoid mixing faces, edges and vertices
/// Generated from class `MR::FaceId`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::NoDefInit<MR::FaceId>`
typedef struct MR_FaceId
{
    int32_t id_;
} MR_FaceId;

// stores index of some element, it is made as template class to avoid mixing faces, edges and vertices
/// Generated from class `MR::VertId`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::NoDefInit<MR::VertId>`
typedef struct MR_VertId
{
    int32_t id_;
} MR_VertId;

// stores index of some element, it is made as template class to avoid mixing faces, edges and vertices
/// Generated from class `MR::PixelId`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::NoDefInit<MR::PixelId>`
typedef struct MR_PixelId
{
    int32_t id_;
} MR_PixelId;

// stores index of some element, it is made as template class to avoid mixing faces, edges and vertices
/// Generated from class `MR::RegionId`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::NoDefInit<MR::RegionId>`
typedef struct MR_RegionId
{
    int32_t id_;
} MR_RegionId;

// stores index of some element, it is made as template class to avoid mixing faces, edges and vertices
/// Generated from class `MR::NodeId`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::NoDefInit<MR::NodeId>`
///     `MR::NoInitNodeId`
typedef struct MR_NodeId
{
    int32_t id_;
} MR_NodeId;

// stores index of some element, it is made as template class to avoid mixing faces, edges and vertices
/// Generated from class `MR::ObjId`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::NoDefInit<MR::ObjId>`
typedef struct MR_ObjId
{
    int32_t id_;
} MR_ObjId;

// stores index of some element, it is made as template class to avoid mixing faces, edges and vertices
/// Generated from class `MR::TextureId`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::NoDefInit<MR::TextureId>`
typedef struct MR_TextureId
{
    int32_t id_;
} MR_TextureId;

// stores index of some element, it is made as template class to avoid mixing faces, edges and vertices
/// Generated from class `MR::GraphVertId`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::NoDefInit<MR::GraphVertId>`
typedef struct MR_GraphVertId
{
    int32_t id_;
} MR_GraphVertId;

// stores index of some element, it is made as template class to avoid mixing faces, edges and vertices
/// Generated from class `MR::GraphEdgeId`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::NoDefInit<MR::GraphEdgeId>`
typedef struct MR_GraphEdgeId
{
    int32_t id_;
} MR_GraphEdgeId;

// stores index of some element, it is made as template class to avoid mixing faces, edges and vertices
/// Generated from class `MR::Id<MR::ICPElemtTag>`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::NoDefInit<MR::Id<MR::ICPElemtTag>>`
typedef struct MR_Id_MR_ICPElemtTag MR_Id_MR_ICPElemtTag;

// Variant of Id<T> with omitted initialization by default. Useful for containers.
/// Generated from class `MR::NoInitNodeId`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::NodeId`
typedef struct MR_NoInitNodeId MR_NoInitNodeId;

// Those are full specializations in `MRId.h`, so `MR_CANONICAL_TYPEDEFS` doesn't work on them.
// Have to add this too.
/// Generated from class `MR::EdgeId`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::NoDefInit<MR::EdgeId>`
typedef struct MR_EdgeId
{
    int32_t id_;
} MR_EdgeId;

/// Generated from class `MR::VoxelId`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::NoDefInit<MR::VoxelId>`
typedef struct MR_VoxelId
{
    MR_uint64_t id_;
} MR_VoxelId;

/// Constructs an empty (default-constructed) instance.
MRC_API MR_UndirectedEdgeId MR_UndirectedEdgeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_UndirectedEdgeId_DestroyArray()`.
/// Use `MR_UndirectedEdgeId_OffsetMutablePtr()` and `MR_UndirectedEdgeId_OffsetPtr()` to access the array elements.
MRC_API MR_UndirectedEdgeId *MR_UndirectedEdgeId_DefaultConstructArray(size_t num_elems);

/// Downcasts an instance of `MR::UndirectedEdgeId` to a derived class `MR::NoDefInit<MR::UndirectedEdgeId>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_NoDefInit_MR_UndirectedEdgeId *MR_UndirectedEdgeId_StaticDowncastTo_MR_NoDefInit_MR_UndirectedEdgeId(const MR_UndirectedEdgeId *object);

/// Downcasts an instance of `MR::UndirectedEdgeId` to a derived class `MR::NoDefInit<MR::UndirectedEdgeId>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_NoDefInit_MR_UndirectedEdgeId *MR_UndirectedEdgeId_MutableStaticDowncastTo_MR_NoDefInit_MR_UndirectedEdgeId(MR_UndirectedEdgeId *object);

/// Generated from a constructor of class `MR::UndirectedEdgeId`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_UndirectedEdgeId_Construct(const MR_NoInit *_1);

// Allow constructing from `int` and other integral types.
// This constructor is written like this instead of a plain `Id(int)`, because we also wish to disable construction
//   from other unrelated `Id<U>` specializations, which themselves have implicit conversions to `int`.
// We could also achieve that using `template <typename U> Id(Id<U>) = delete;`, but it turns out that that causes issues
//   for the `EdgeId::operator UndirectedEdgeId` below. There, while `UndirectedEdgeId x = EdgeId{};` compiles with this approach,
//   but `UndirectedEdgeId x(EdgeId{});` doesn't. So to allow both forms, this constructor must be written this way, as a template.
/// Generated from a constructor of class `MR::UndirectedEdgeId`.
MRC_API MR_UndirectedEdgeId MR_UndirectedEdgeId_Construct_int32_t_nullptr(int32_t i);

// Allow constructing from `int` and other integral types.
// This constructor is written like this instead of a plain `Id(int)`, because we also wish to disable construction
//   from other unrelated `Id<U>` specializations, which themselves have implicit conversions to `int`.
// We could also achieve that using `template <typename U> Id(Id<U>) = delete;`, but it turns out that that causes issues
//   for the `EdgeId::operator UndirectedEdgeId` below. There, while `UndirectedEdgeId x = EdgeId{};` compiles with this approach,
//   but `UndirectedEdgeId x(EdgeId{});` doesn't. So to allow both forms, this constructor must be written this way, as a template.
/// Generated from a constructor of class `MR::UndirectedEdgeId`.
MRC_API MR_UndirectedEdgeId MR_UndirectedEdgeId_Construct_uint64_t_nullptr(MR_uint64_t i);

/// Generated from a conversion operator of class `MR::UndirectedEdgeId` to type `int32_t`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_UndirectedEdgeId_ConvertTo_int32_t(const MR_UndirectedEdgeId *_this);

/// Generated from a conversion operator of class `MR::UndirectedEdgeId` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_UndirectedEdgeId_ConvertTo_bool(const MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::UndirectedEdgeId` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_UndirectedEdgeId_valid(const MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::UndirectedEdgeId` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_UndirectedEdgeId_get(MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::UndirectedEdgeId` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_equal_MR_UndirectedEdgeId(const MR_UndirectedEdgeId *_this, MR_UndirectedEdgeId b);

/// Generated from a method of class `MR::UndirectedEdgeId` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_UndirectedEdgeId(const MR_UndirectedEdgeId *_this, MR_UndirectedEdgeId b);

/// Generated from a method of class `MR::UndirectedEdgeId` named `operator<`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_less_MR_UndirectedEdgeId(const MR_UndirectedEdgeId *_this, MR_UndirectedEdgeId b);

/// Generated from a method of class `MR::UndirectedEdgeId` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeId *MR_decr_MR_UndirectedEdgeId(MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::UndirectedEdgeId` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeId *MR_incr_MR_UndirectedEdgeId(MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::UndirectedEdgeId` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_post_decr_MR_UndirectedEdgeId(MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::UndirectedEdgeId` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_post_incr_MR_UndirectedEdgeId(MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::UndirectedEdgeId` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeId *MR_UndirectedEdgeId_sub_assign(MR_UndirectedEdgeId *_this, int32_t a);

/// Generated from a method of class `MR::UndirectedEdgeId` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeId *MR_UndirectedEdgeId_add_assign(MR_UndirectedEdgeId *_this, int32_t a);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_FaceId MR_FaceId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FaceId_DestroyArray()`.
/// Use `MR_FaceId_OffsetMutablePtr()` and `MR_FaceId_OffsetPtr()` to access the array elements.
MRC_API MR_FaceId *MR_FaceId_DefaultConstructArray(size_t num_elems);

/// Downcasts an instance of `MR::FaceId` to a derived class `MR::NoDefInit<MR::FaceId>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_NoDefInit_MR_FaceId *MR_FaceId_StaticDowncastTo_MR_NoDefInit_MR_FaceId(const MR_FaceId *object);

/// Downcasts an instance of `MR::FaceId` to a derived class `MR::NoDefInit<MR::FaceId>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_NoDefInit_MR_FaceId *MR_FaceId_MutableStaticDowncastTo_MR_NoDefInit_MR_FaceId(MR_FaceId *object);

/// Generated from a constructor of class `MR::FaceId`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_FaceId MR_FaceId_Construct(const MR_NoInit *_1);

// Allow constructing from `int` and other integral types.
// This constructor is written like this instead of a plain `Id(int)`, because we also wish to disable construction
//   from other unrelated `Id<U>` specializations, which themselves have implicit conversions to `int`.
// We could also achieve that using `template <typename U> Id(Id<U>) = delete;`, but it turns out that that causes issues
//   for the `EdgeId::operator UndirectedEdgeId` below. There, while `UndirectedEdgeId x = EdgeId{};` compiles with this approach,
//   but `UndirectedEdgeId x(EdgeId{});` doesn't. So to allow both forms, this constructor must be written this way, as a template.
/// Generated from a constructor of class `MR::FaceId`.
MRC_API MR_FaceId MR_FaceId_Construct_int32_t_nullptr(int32_t i);

// Allow constructing from `int` and other integral types.
// This constructor is written like this instead of a plain `Id(int)`, because we also wish to disable construction
//   from other unrelated `Id<U>` specializations, which themselves have implicit conversions to `int`.
// We could also achieve that using `template <typename U> Id(Id<U>) = delete;`, but it turns out that that causes issues
//   for the `EdgeId::operator UndirectedEdgeId` below. There, while `UndirectedEdgeId x = EdgeId{};` compiles with this approach,
//   but `UndirectedEdgeId x(EdgeId{});` doesn't. So to allow both forms, this constructor must be written this way, as a template.
/// Generated from a constructor of class `MR::FaceId`.
MRC_API MR_FaceId MR_FaceId_Construct_uint32_t_nullptr(uint32_t i);

// Allow constructing from `int` and other integral types.
// This constructor is written like this instead of a plain `Id(int)`, because we also wish to disable construction
//   from other unrelated `Id<U>` specializations, which themselves have implicit conversions to `int`.
// We could also achieve that using `template <typename U> Id(Id<U>) = delete;`, but it turns out that that causes issues
//   for the `EdgeId::operator UndirectedEdgeId` below. There, while `UndirectedEdgeId x = EdgeId{};` compiles with this approach,
//   but `UndirectedEdgeId x(EdgeId{});` doesn't. So to allow both forms, this constructor must be written this way, as a template.
/// Generated from a constructor of class `MR::FaceId`.
MRC_API MR_FaceId MR_FaceId_Construct_uint64_t_nullptr(MR_uint64_t i);

/// Generated from a conversion operator of class `MR::FaceId` to type `int32_t`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_FaceId_ConvertTo_int32_t(const MR_FaceId *_this);

/// Generated from a conversion operator of class `MR::FaceId` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_FaceId_ConvertTo_bool(const MR_FaceId *_this);

/// Generated from a method of class `MR::FaceId` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_FaceId_valid(const MR_FaceId *_this);

/// Generated from a method of class `MR::FaceId` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_FaceId_get(MR_FaceId *_this);

/// Generated from a method of class `MR::FaceId` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_equal_MR_FaceId(const MR_FaceId *_this, MR_FaceId b);

/// Generated from a method of class `MR::FaceId` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_FaceId(const MR_FaceId *_this, MR_FaceId b);

/// Generated from a method of class `MR::FaceId` named `operator<`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_less_MR_FaceId(const MR_FaceId *_this, MR_FaceId b);

/// Generated from a method of class `MR::FaceId` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceId *MR_decr_MR_FaceId(MR_FaceId *_this);

/// Generated from a method of class `MR::FaceId` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceId *MR_incr_MR_FaceId(MR_FaceId *_this);

/// Generated from a method of class `MR::FaceId` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_FaceId MR_post_decr_MR_FaceId(MR_FaceId *_this);

/// Generated from a method of class `MR::FaceId` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_FaceId MR_post_incr_MR_FaceId(MR_FaceId *_this);

/// Generated from a method of class `MR::FaceId` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceId *MR_FaceId_sub_assign(MR_FaceId *_this, int32_t a);

/// Generated from a method of class `MR::FaceId` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceId *MR_FaceId_add_assign(MR_FaceId *_this, int32_t a);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_VertId MR_VertId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VertId_DestroyArray()`.
/// Use `MR_VertId_OffsetMutablePtr()` and `MR_VertId_OffsetPtr()` to access the array elements.
MRC_API MR_VertId *MR_VertId_DefaultConstructArray(size_t num_elems);

/// Downcasts an instance of `MR::VertId` to a derived class `MR::NoDefInit<MR::VertId>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_NoDefInit_MR_VertId *MR_VertId_StaticDowncastTo_MR_NoDefInit_MR_VertId(const MR_VertId *object);

/// Downcasts an instance of `MR::VertId` to a derived class `MR::NoDefInit<MR::VertId>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_NoDefInit_MR_VertId *MR_VertId_MutableStaticDowncastTo_MR_NoDefInit_MR_VertId(MR_VertId *object);

/// Generated from a constructor of class `MR::VertId`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_VertId MR_VertId_Construct(const MR_NoInit *_1);

// Allow constructing from `int` and other integral types.
// This constructor is written like this instead of a plain `Id(int)`, because we also wish to disable construction
//   from other unrelated `Id<U>` specializations, which themselves have implicit conversions to `int`.
// We could also achieve that using `template <typename U> Id(Id<U>) = delete;`, but it turns out that that causes issues
//   for the `EdgeId::operator UndirectedEdgeId` below. There, while `UndirectedEdgeId x = EdgeId{};` compiles with this approach,
//   but `UndirectedEdgeId x(EdgeId{});` doesn't. So to allow both forms, this constructor must be written this way, as a template.
/// Generated from a constructor of class `MR::VertId`.
MRC_API MR_VertId MR_VertId_Construct_int32_t_nullptr(int32_t i);

// Allow constructing from `int` and other integral types.
// This constructor is written like this instead of a plain `Id(int)`, because we also wish to disable construction
//   from other unrelated `Id<U>` specializations, which themselves have implicit conversions to `int`.
// We could also achieve that using `template <typename U> Id(Id<U>) = delete;`, but it turns out that that causes issues
//   for the `EdgeId::operator UndirectedEdgeId` below. There, while `UndirectedEdgeId x = EdgeId{};` compiles with this approach,
//   but `UndirectedEdgeId x(EdgeId{});` doesn't. So to allow both forms, this constructor must be written this way, as a template.
/// Generated from a constructor of class `MR::VertId`.
MRC_API MR_VertId MR_VertId_Construct_uint64_t_nullptr(MR_uint64_t i);

/// Generated from a conversion operator of class `MR::VertId` to type `int32_t`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_VertId_ConvertTo_int32_t(const MR_VertId *_this);

/// Generated from a conversion operator of class `MR::VertId` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_VertId_ConvertTo_bool(const MR_VertId *_this);

/// Generated from a method of class `MR::VertId` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_VertId_valid(const MR_VertId *_this);

/// Generated from a method of class `MR::VertId` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_VertId_get(MR_VertId *_this);

/// Generated from a method of class `MR::VertId` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_equal_MR_VertId(const MR_VertId *_this, MR_VertId b);

/// Generated from a method of class `MR::VertId` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_VertId(const MR_VertId *_this, MR_VertId b);

/// Generated from a method of class `MR::VertId` named `operator<`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_less_MR_VertId(const MR_VertId *_this, MR_VertId b);

/// Generated from a method of class `MR::VertId` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_decr_MR_VertId(MR_VertId *_this);

/// Generated from a method of class `MR::VertId` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_incr_MR_VertId(MR_VertId *_this);

/// Generated from a method of class `MR::VertId` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertId MR_post_decr_MR_VertId(MR_VertId *_this);

/// Generated from a method of class `MR::VertId` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertId MR_post_incr_MR_VertId(MR_VertId *_this);

/// Generated from a method of class `MR::VertId` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_VertId_sub_assign(MR_VertId *_this, int32_t a);

/// Generated from a method of class `MR::VertId` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_VertId_add_assign(MR_VertId *_this, int32_t a);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_PixelId MR_PixelId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PixelId_DestroyArray()`.
/// Use `MR_PixelId_OffsetMutablePtr()` and `MR_PixelId_OffsetPtr()` to access the array elements.
MRC_API MR_PixelId *MR_PixelId_DefaultConstructArray(size_t num_elems);

/// Downcasts an instance of `MR::PixelId` to a derived class `MR::NoDefInit<MR::PixelId>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_NoDefInit_MR_PixelId *MR_PixelId_StaticDowncastTo_MR_NoDefInit_MR_PixelId(const MR_PixelId *object);

/// Downcasts an instance of `MR::PixelId` to a derived class `MR::NoDefInit<MR::PixelId>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_NoDefInit_MR_PixelId *MR_PixelId_MutableStaticDowncastTo_MR_NoDefInit_MR_PixelId(MR_PixelId *object);

/// Generated from a constructor of class `MR::PixelId`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_PixelId MR_PixelId_Construct(const MR_NoInit *_1);

// Allow constructing from `int` and other integral types.
// This constructor is written like this instead of a plain `Id(int)`, because we also wish to disable construction
//   from other unrelated `Id<U>` specializations, which themselves have implicit conversions to `int`.
// We could also achieve that using `template <typename U> Id(Id<U>) = delete;`, but it turns out that that causes issues
//   for the `EdgeId::operator UndirectedEdgeId` below. There, while `UndirectedEdgeId x = EdgeId{};` compiles with this approach,
//   but `UndirectedEdgeId x(EdgeId{});` doesn't. So to allow both forms, this constructor must be written this way, as a template.
/// Generated from a constructor of class `MR::PixelId`.
MRC_API MR_PixelId MR_PixelId_Construct_int32_t_nullptr(int32_t i);

/// Generated from a conversion operator of class `MR::PixelId` to type `int32_t`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_PixelId_ConvertTo_int32_t(const MR_PixelId *_this);

/// Generated from a conversion operator of class `MR::PixelId` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_PixelId_ConvertTo_bool(const MR_PixelId *_this);

/// Generated from a method of class `MR::PixelId` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_PixelId_valid(const MR_PixelId *_this);

/// Generated from a method of class `MR::PixelId` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_PixelId_get(MR_PixelId *_this);

/// Generated from a method of class `MR::PixelId` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_equal_MR_PixelId(const MR_PixelId *_this, MR_PixelId b);

/// Generated from a method of class `MR::PixelId` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_PixelId(const MR_PixelId *_this, MR_PixelId b);

/// Generated from a method of class `MR::PixelId` named `operator<`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_less_MR_PixelId(const MR_PixelId *_this, MR_PixelId b);

/// Generated from a method of class `MR::PixelId` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PixelId *MR_decr_MR_PixelId(MR_PixelId *_this);

/// Generated from a method of class `MR::PixelId` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PixelId *MR_incr_MR_PixelId(MR_PixelId *_this);

/// Generated from a method of class `MR::PixelId` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_PixelId MR_post_decr_MR_PixelId(MR_PixelId *_this);

/// Generated from a method of class `MR::PixelId` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_PixelId MR_post_incr_MR_PixelId(MR_PixelId *_this);

/// Generated from a method of class `MR::PixelId` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PixelId *MR_PixelId_sub_assign(MR_PixelId *_this, int32_t a);

/// Generated from a method of class `MR::PixelId` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PixelId *MR_PixelId_add_assign(MR_PixelId *_this, int32_t a);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_RegionId MR_RegionId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_RegionId_DestroyArray()`.
/// Use `MR_RegionId_OffsetMutablePtr()` and `MR_RegionId_OffsetPtr()` to access the array elements.
MRC_API MR_RegionId *MR_RegionId_DefaultConstructArray(size_t num_elems);

/// Downcasts an instance of `MR::RegionId` to a derived class `MR::NoDefInit<MR::RegionId>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_NoDefInit_MR_RegionId *MR_RegionId_StaticDowncastTo_MR_NoDefInit_MR_RegionId(const MR_RegionId *object);

/// Downcasts an instance of `MR::RegionId` to a derived class `MR::NoDefInit<MR::RegionId>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_NoDefInit_MR_RegionId *MR_RegionId_MutableStaticDowncastTo_MR_NoDefInit_MR_RegionId(MR_RegionId *object);

/// Generated from a constructor of class `MR::RegionId`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_RegionId MR_RegionId_Construct(const MR_NoInit *_1);

/// Generated from a conversion operator of class `MR::RegionId` to type `int32_t`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_RegionId_ConvertTo_int32_t(const MR_RegionId *_this);

/// Generated from a conversion operator of class `MR::RegionId` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_RegionId_ConvertTo_bool(const MR_RegionId *_this);

/// Generated from a method of class `MR::RegionId` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_RegionId_valid(const MR_RegionId *_this);

/// Generated from a method of class `MR::RegionId` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_RegionId_get(MR_RegionId *_this);

/// Generated from a method of class `MR::RegionId` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_equal_MR_RegionId(const MR_RegionId *_this, MR_RegionId b);

/// Generated from a method of class `MR::RegionId` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_RegionId(const MR_RegionId *_this, MR_RegionId b);

/// Generated from a method of class `MR::RegionId` named `operator<`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_less_MR_RegionId(const MR_RegionId *_this, MR_RegionId b);

/// Generated from a method of class `MR::RegionId` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RegionId *MR_decr_MR_RegionId(MR_RegionId *_this);

/// Generated from a method of class `MR::RegionId` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RegionId *MR_incr_MR_RegionId(MR_RegionId *_this);

/// Generated from a method of class `MR::RegionId` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_RegionId MR_post_decr_MR_RegionId(MR_RegionId *_this);

/// Generated from a method of class `MR::RegionId` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_RegionId MR_post_incr_MR_RegionId(MR_RegionId *_this);

/// Generated from a method of class `MR::RegionId` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RegionId *MR_RegionId_sub_assign(MR_RegionId *_this, int32_t a);

/// Generated from a method of class `MR::RegionId` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RegionId *MR_RegionId_add_assign(MR_RegionId *_this, int32_t a);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_NodeId MR_NodeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NodeId_DestroyArray()`.
/// Use `MR_NodeId_OffsetMutablePtr()` and `MR_NodeId_OffsetPtr()` to access the array elements.
MRC_API MR_NodeId *MR_NodeId_DefaultConstructArray(size_t num_elems);

/// Downcasts an instance of `MR::NodeId` to a derived class `MR::NoDefInit<MR::NodeId>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_NoDefInit_MR_NodeId *MR_NodeId_StaticDowncastTo_MR_NoDefInit_MR_NodeId(const MR_NodeId *object);

/// Downcasts an instance of `MR::NodeId` to a derived class `MR::NoDefInit<MR::NodeId>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_NoDefInit_MR_NodeId *MR_NodeId_MutableStaticDowncastTo_MR_NoDefInit_MR_NodeId(MR_NodeId *object);

/// Downcasts an instance of `MR::NodeId` to a derived class `MR::NoInitNodeId`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_NoInitNodeId *MR_NodeId_StaticDowncastTo_MR_NoInitNodeId(const MR_NodeId *object);

/// Downcasts an instance of `MR::NodeId` to a derived class `MR::NoInitNodeId`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_NoInitNodeId *MR_NodeId_MutableStaticDowncastTo_MR_NoInitNodeId(MR_NodeId *object);

/// Generated from a constructor of class `MR::NodeId`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_NodeId MR_NodeId_Construct(const MR_NoInit *_1);

// Allow constructing from `int` and other integral types.
// This constructor is written like this instead of a plain `Id(int)`, because we also wish to disable construction
//   from other unrelated `Id<U>` specializations, which themselves have implicit conversions to `int`.
// We could also achieve that using `template <typename U> Id(Id<U>) = delete;`, but it turns out that that causes issues
//   for the `EdgeId::operator UndirectedEdgeId` below. There, while `UndirectedEdgeId x = EdgeId{};` compiles with this approach,
//   but `UndirectedEdgeId x(EdgeId{});` doesn't. So to allow both forms, this constructor must be written this way, as a template.
/// Generated from a constructor of class `MR::NodeId`.
MRC_API MR_NodeId MR_NodeId_Construct_int32_t_nullptr(int32_t i);

/// Generated from a conversion operator of class `MR::NodeId` to type `int32_t`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_NodeId_ConvertTo_int32_t(const MR_NodeId *_this);

/// Generated from a conversion operator of class `MR::NodeId` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_NodeId_ConvertTo_bool(const MR_NodeId *_this);

/// Generated from a method of class `MR::NodeId` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_NodeId_valid(const MR_NodeId *_this);

/// Generated from a method of class `MR::NodeId` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_NodeId_get(MR_NodeId *_this);

/// Generated from a method of class `MR::NodeId` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_equal_MR_NodeId(const MR_NodeId *_this, MR_NodeId b);

/// Generated from a method of class `MR::NodeId` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_NodeId(const MR_NodeId *_this, MR_NodeId b);

/// Generated from a method of class `MR::NodeId` named `operator<`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_less_MR_NodeId(const MR_NodeId *_this, MR_NodeId b);

/// Generated from a method of class `MR::NodeId` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeId *MR_decr_MR_NodeId(MR_NodeId *_this);

/// Generated from a method of class `MR::NodeId` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeId *MR_incr_MR_NodeId(MR_NodeId *_this);

/// Generated from a method of class `MR::NodeId` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NodeId MR_post_decr_MR_NodeId(MR_NodeId *_this);

/// Generated from a method of class `MR::NodeId` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_NodeId MR_post_incr_MR_NodeId(MR_NodeId *_this);

/// Generated from a method of class `MR::NodeId` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeId *MR_NodeId_sub_assign(MR_NodeId *_this, int32_t a);

/// Generated from a method of class `MR::NodeId` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NodeId *MR_NodeId_add_assign(MR_NodeId *_this, int32_t a);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_ObjId MR_ObjId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ObjId_DestroyArray()`.
/// Use `MR_ObjId_OffsetMutablePtr()` and `MR_ObjId_OffsetPtr()` to access the array elements.
MRC_API MR_ObjId *MR_ObjId_DefaultConstructArray(size_t num_elems);

/// Downcasts an instance of `MR::ObjId` to a derived class `MR::NoDefInit<MR::ObjId>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_NoDefInit_MR_ObjId *MR_ObjId_StaticDowncastTo_MR_NoDefInit_MR_ObjId(const MR_ObjId *object);

/// Downcasts an instance of `MR::ObjId` to a derived class `MR::NoDefInit<MR::ObjId>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_NoDefInit_MR_ObjId *MR_ObjId_MutableStaticDowncastTo_MR_NoDefInit_MR_ObjId(MR_ObjId *object);

/// Generated from a constructor of class `MR::ObjId`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_ObjId MR_ObjId_Construct(const MR_NoInit *_1);

/// Generated from a conversion operator of class `MR::ObjId` to type `int32_t`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_ObjId_ConvertTo_int32_t(const MR_ObjId *_this);

/// Generated from a conversion operator of class `MR::ObjId` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ObjId_ConvertTo_bool(const MR_ObjId *_this);

/// Generated from a method of class `MR::ObjId` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ObjId_valid(const MR_ObjId *_this);

/// Generated from a method of class `MR::ObjId` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_ObjId_get(MR_ObjId *_this);

/// Generated from a method of class `MR::ObjId` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_equal_MR_ObjId(const MR_ObjId *_this, MR_ObjId b);

/// Generated from a method of class `MR::ObjId` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_ObjId(const MR_ObjId *_this, MR_ObjId b);

/// Generated from a method of class `MR::ObjId` named `operator<`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_less_MR_ObjId(const MR_ObjId *_this, MR_ObjId b);

/// Generated from a method of class `MR::ObjId` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjId *MR_decr_MR_ObjId(MR_ObjId *_this);

/// Generated from a method of class `MR::ObjId` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjId *MR_incr_MR_ObjId(MR_ObjId *_this);

/// Generated from a method of class `MR::ObjId` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_ObjId MR_post_decr_MR_ObjId(MR_ObjId *_this);

/// Generated from a method of class `MR::ObjId` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_ObjId MR_post_incr_MR_ObjId(MR_ObjId *_this);

/// Generated from a method of class `MR::ObjId` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjId *MR_ObjId_sub_assign(MR_ObjId *_this, int32_t a);

/// Generated from a method of class `MR::ObjId` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjId *MR_ObjId_add_assign(MR_ObjId *_this, int32_t a);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_TextureId MR_TextureId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_TextureId_DestroyArray()`.
/// Use `MR_TextureId_OffsetMutablePtr()` and `MR_TextureId_OffsetPtr()` to access the array elements.
MRC_API MR_TextureId *MR_TextureId_DefaultConstructArray(size_t num_elems);

/// Downcasts an instance of `MR::TextureId` to a derived class `MR::NoDefInit<MR::TextureId>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_NoDefInit_MR_TextureId *MR_TextureId_StaticDowncastTo_MR_NoDefInit_MR_TextureId(const MR_TextureId *object);

/// Downcasts an instance of `MR::TextureId` to a derived class `MR::NoDefInit<MR::TextureId>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_NoDefInit_MR_TextureId *MR_TextureId_MutableStaticDowncastTo_MR_NoDefInit_MR_TextureId(MR_TextureId *object);

/// Generated from a constructor of class `MR::TextureId`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_TextureId MR_TextureId_Construct(const MR_NoInit *_1);

/// Generated from a conversion operator of class `MR::TextureId` to type `int32_t`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_TextureId_ConvertTo_int32_t(const MR_TextureId *_this);

/// Generated from a conversion operator of class `MR::TextureId` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_TextureId_ConvertTo_bool(const MR_TextureId *_this);

/// Generated from a method of class `MR::TextureId` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_TextureId_valid(const MR_TextureId *_this);

/// Generated from a method of class `MR::TextureId` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_TextureId_get(MR_TextureId *_this);

/// Generated from a method of class `MR::TextureId` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_equal_MR_TextureId(const MR_TextureId *_this, MR_TextureId b);

/// Generated from a method of class `MR::TextureId` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_TextureId(const MR_TextureId *_this, MR_TextureId b);

/// Generated from a method of class `MR::TextureId` named `operator<`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_less_MR_TextureId(const MR_TextureId *_this, MR_TextureId b);

/// Generated from a method of class `MR::TextureId` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TextureId *MR_decr_MR_TextureId(MR_TextureId *_this);

/// Generated from a method of class `MR::TextureId` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TextureId *MR_incr_MR_TextureId(MR_TextureId *_this);

/// Generated from a method of class `MR::TextureId` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_TextureId MR_post_decr_MR_TextureId(MR_TextureId *_this);

/// Generated from a method of class `MR::TextureId` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_TextureId MR_post_incr_MR_TextureId(MR_TextureId *_this);

/// Generated from a method of class `MR::TextureId` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TextureId *MR_TextureId_sub_assign(MR_TextureId *_this, int32_t a);

/// Generated from a method of class `MR::TextureId` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TextureId *MR_TextureId_add_assign(MR_TextureId *_this, int32_t a);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_GraphVertId MR_GraphVertId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_GraphVertId_DestroyArray()`.
/// Use `MR_GraphVertId_OffsetMutablePtr()` and `MR_GraphVertId_OffsetPtr()` to access the array elements.
MRC_API MR_GraphVertId *MR_GraphVertId_DefaultConstructArray(size_t num_elems);

/// Downcasts an instance of `MR::GraphVertId` to a derived class `MR::NoDefInit<MR::GraphVertId>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_NoDefInit_MR_GraphVertId *MR_GraphVertId_StaticDowncastTo_MR_NoDefInit_MR_GraphVertId(const MR_GraphVertId *object);

/// Downcasts an instance of `MR::GraphVertId` to a derived class `MR::NoDefInit<MR::GraphVertId>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_NoDefInit_MR_GraphVertId *MR_GraphVertId_MutableStaticDowncastTo_MR_NoDefInit_MR_GraphVertId(MR_GraphVertId *object);

/// Generated from a constructor of class `MR::GraphVertId`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_GraphVertId MR_GraphVertId_Construct(const MR_NoInit *_1);

/// Generated from a conversion operator of class `MR::GraphVertId` to type `int32_t`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_GraphVertId_ConvertTo_int32_t(const MR_GraphVertId *_this);

/// Generated from a conversion operator of class `MR::GraphVertId` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_GraphVertId_ConvertTo_bool(const MR_GraphVertId *_this);

/// Generated from a method of class `MR::GraphVertId` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_GraphVertId_valid(const MR_GraphVertId *_this);

/// Generated from a method of class `MR::GraphVertId` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_GraphVertId_get(MR_GraphVertId *_this);

/// Generated from a method of class `MR::GraphVertId` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_equal_MR_GraphVertId(const MR_GraphVertId *_this, MR_GraphVertId b);

/// Generated from a method of class `MR::GraphVertId` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_GraphVertId(const MR_GraphVertId *_this, MR_GraphVertId b);

/// Generated from a method of class `MR::GraphVertId` named `operator<`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_less_MR_GraphVertId(const MR_GraphVertId *_this, MR_GraphVertId b);

/// Generated from a method of class `MR::GraphVertId` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertId *MR_decr_MR_GraphVertId(MR_GraphVertId *_this);

/// Generated from a method of class `MR::GraphVertId` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertId *MR_incr_MR_GraphVertId(MR_GraphVertId *_this);

/// Generated from a method of class `MR::GraphVertId` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphVertId MR_post_decr_MR_GraphVertId(MR_GraphVertId *_this);

/// Generated from a method of class `MR::GraphVertId` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphVertId MR_post_incr_MR_GraphVertId(MR_GraphVertId *_this);

/// Generated from a method of class `MR::GraphVertId` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertId *MR_GraphVertId_sub_assign(MR_GraphVertId *_this, int32_t a);

/// Generated from a method of class `MR::GraphVertId` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertId *MR_GraphVertId_add_assign(MR_GraphVertId *_this, int32_t a);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_GraphEdgeId MR_GraphEdgeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_GraphEdgeId_DestroyArray()`.
/// Use `MR_GraphEdgeId_OffsetMutablePtr()` and `MR_GraphEdgeId_OffsetPtr()` to access the array elements.
MRC_API MR_GraphEdgeId *MR_GraphEdgeId_DefaultConstructArray(size_t num_elems);

/// Downcasts an instance of `MR::GraphEdgeId` to a derived class `MR::NoDefInit<MR::GraphEdgeId>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_NoDefInit_MR_GraphEdgeId *MR_GraphEdgeId_StaticDowncastTo_MR_NoDefInit_MR_GraphEdgeId(const MR_GraphEdgeId *object);

/// Downcasts an instance of `MR::GraphEdgeId` to a derived class `MR::NoDefInit<MR::GraphEdgeId>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_NoDefInit_MR_GraphEdgeId *MR_GraphEdgeId_MutableStaticDowncastTo_MR_NoDefInit_MR_GraphEdgeId(MR_GraphEdgeId *object);

/// Generated from a constructor of class `MR::GraphEdgeId`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_GraphEdgeId MR_GraphEdgeId_Construct(const MR_NoInit *_1);

/// Generated from a conversion operator of class `MR::GraphEdgeId` to type `int32_t`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_GraphEdgeId_ConvertTo_int32_t(const MR_GraphEdgeId *_this);

/// Generated from a conversion operator of class `MR::GraphEdgeId` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_GraphEdgeId_ConvertTo_bool(const MR_GraphEdgeId *_this);

/// Generated from a method of class `MR::GraphEdgeId` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_GraphEdgeId_valid(const MR_GraphEdgeId *_this);

/// Generated from a method of class `MR::GraphEdgeId` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_GraphEdgeId_get(MR_GraphEdgeId *_this);

/// Generated from a method of class `MR::GraphEdgeId` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_equal_MR_GraphEdgeId(const MR_GraphEdgeId *_this, MR_GraphEdgeId b);

/// Generated from a method of class `MR::GraphEdgeId` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_GraphEdgeId(const MR_GraphEdgeId *_this, MR_GraphEdgeId b);

/// Generated from a method of class `MR::GraphEdgeId` named `operator<`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_less_MR_GraphEdgeId(const MR_GraphEdgeId *_this, MR_GraphEdgeId b);

/// Generated from a method of class `MR::GraphEdgeId` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphEdgeId *MR_decr_MR_GraphEdgeId(MR_GraphEdgeId *_this);

/// Generated from a method of class `MR::GraphEdgeId` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphEdgeId *MR_incr_MR_GraphEdgeId(MR_GraphEdgeId *_this);

/// Generated from a method of class `MR::GraphEdgeId` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphEdgeId MR_post_decr_MR_GraphEdgeId(MR_GraphEdgeId *_this);

/// Generated from a method of class `MR::GraphEdgeId` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphEdgeId MR_post_incr_MR_GraphEdgeId(MR_GraphEdgeId *_this);

/// Generated from a method of class `MR::GraphEdgeId` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphEdgeId *MR_GraphEdgeId_sub_assign(MR_GraphEdgeId *_this, int32_t a);

/// Generated from a method of class `MR::GraphEdgeId` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphEdgeId *MR_GraphEdgeId_add_assign(MR_GraphEdgeId *_this, int32_t a);

/// Returns a pointer to a member variable of class `MR::Id<MR::ICPElemtTag>` named `id_`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Id_MR_ICPElemtTag_Get_id_(const MR_Id_MR_ICPElemtTag *_this);

/// Modifies a member variable of class `MR::Id<MR::ICPElemtTag>` named `id_`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Id_MR_ICPElemtTag_Set_id_(MR_Id_MR_ICPElemtTag *_this, int32_t value);

/// Returns a mutable pointer to a member variable of class `MR::Id<MR::ICPElemtTag>` named `id_`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_Id_MR_ICPElemtTag_GetMutable_id_(MR_Id_MR_ICPElemtTag *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_Id_MR_ICPElemtTag *MR_Id_MR_ICPElemtTag_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Id_MR_ICPElemtTag_DestroyArray()`.
/// Use `MR_Id_MR_ICPElemtTag_OffsetMutablePtr()` and `MR_Id_MR_ICPElemtTag_OffsetPtr()` to access the array elements.
MRC_API MR_Id_MR_ICPElemtTag *MR_Id_MR_ICPElemtTag_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Id_MR_ICPElemtTag *MR_Id_MR_ICPElemtTag_OffsetPtr(const MR_Id_MR_ICPElemtTag *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Id_MR_ICPElemtTag *MR_Id_MR_ICPElemtTag_OffsetMutablePtr(MR_Id_MR_ICPElemtTag *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::Id<MR::ICPElemtTag>` to a derived class `MR::NoDefInit<MR::Id<MR::ICPElemtTag>>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_NoDefInit_MR_Id_MR_ICPElemtTag *MR_Id_MR_ICPElemtTag_StaticDowncastTo_MR_NoDefInit_MR_Id_MR_ICPElemtTag(const MR_Id_MR_ICPElemtTag *object);

/// Downcasts an instance of `MR::Id<MR::ICPElemtTag>` to a derived class `MR::NoDefInit<MR::Id<MR::ICPElemtTag>>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_NoDefInit_MR_Id_MR_ICPElemtTag *MR_Id_MR_ICPElemtTag_MutableStaticDowncastTo_MR_NoDefInit_MR_Id_MR_ICPElemtTag(MR_Id_MR_ICPElemtTag *object);

/// Generated from a constructor of class `MR::Id<MR::ICPElemtTag>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_Id_MR_ICPElemtTag *MR_Id_MR_ICPElemtTag_ConstructFromAnother(const MR_Id_MR_ICPElemtTag *_other);

/// Generated from a constructor of class `MR::Id<MR::ICPElemtTag>`.
/// Parameter `_1` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_Id_MR_ICPElemtTag *MR_Id_MR_ICPElemtTag_Construct(const MR_NoInit *_1);

/// Destroys a heap-allocated instance of `MR_Id_MR_ICPElemtTag`. Does nothing if the pointer is null.
MRC_API void MR_Id_MR_ICPElemtTag_Destroy(const MR_Id_MR_ICPElemtTag *_this);

/// Destroys a heap-allocated array of `MR_Id_MR_ICPElemtTag`. Does nothing if the pointer is null.
MRC_API void MR_Id_MR_ICPElemtTag_DestroyArray(const MR_Id_MR_ICPElemtTag *_this);

/// Generated from a conversion operator of class `MR::Id<MR::ICPElemtTag>` to type `int32_t`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_Id_MR_ICPElemtTag_ConvertTo_int32_t(const MR_Id_MR_ICPElemtTag *_this);

/// Generated from a conversion operator of class `MR::Id<MR::ICPElemtTag>` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Id_MR_ICPElemtTag_ConvertTo_bool(const MR_Id_MR_ICPElemtTag *_this);

/// Generated from a method of class `MR::Id<MR::ICPElemtTag>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Id_MR_ICPElemtTag *MR_Id_MR_ICPElemtTag_AssignFromAnother(MR_Id_MR_ICPElemtTag *_this, const MR_Id_MR_ICPElemtTag *_other);

/// Generated from a method of class `MR::Id<MR::ICPElemtTag>` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Id_MR_ICPElemtTag_valid(const MR_Id_MR_ICPElemtTag *_this);

/// Generated from a method of class `MR::Id<MR::ICPElemtTag>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_Id_MR_ICPElemtTag_get(MR_Id_MR_ICPElemtTag *_this);

/// Generated from a method of class `MR::Id<MR::ICPElemtTag>` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Id_MR_ICPElemtTag(const MR_Id_MR_ICPElemtTag *_this, const MR_Id_MR_ICPElemtTag *b);

/// Generated from a method of class `MR::Id<MR::ICPElemtTag>` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Id_MR_ICPElemtTag(const MR_Id_MR_ICPElemtTag *_this, const MR_Id_MR_ICPElemtTag *b);

/// Generated from a method of class `MR::Id<MR::ICPElemtTag>` named `operator<`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_less_MR_Id_MR_ICPElemtTag(const MR_Id_MR_ICPElemtTag *_this, const MR_Id_MR_ICPElemtTag *b);

/// Generated from a method of class `MR::Id<MR::ICPElemtTag>` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Id_MR_ICPElemtTag *MR_decr_MR_Id_MR_ICPElemtTag(MR_Id_MR_ICPElemtTag *_this);

/// Generated from a method of class `MR::Id<MR::ICPElemtTag>` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Id_MR_ICPElemtTag *MR_incr_MR_Id_MR_ICPElemtTag(MR_Id_MR_ICPElemtTag *_this);

/// Generated from a method of class `MR::Id<MR::ICPElemtTag>` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_Id_MR_ICPElemtTag *MR_post_decr_MR_Id_MR_ICPElemtTag(MR_Id_MR_ICPElemtTag *_this);

/// Generated from a method of class `MR::Id<MR::ICPElemtTag>` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Id_MR_ICPElemtTag_Destroy()` to free it when you're done using it.
MRC_API MR_Id_MR_ICPElemtTag *MR_post_incr_MR_Id_MR_ICPElemtTag(MR_Id_MR_ICPElemtTag *_this);

/// Generated from a method of class `MR::Id<MR::ICPElemtTag>` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Id_MR_ICPElemtTag *MR_Id_MR_ICPElemtTag_sub_assign(MR_Id_MR_ICPElemtTag *_this, int32_t a);

/// Generated from a method of class `MR::Id<MR::ICPElemtTag>` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Id_MR_ICPElemtTag *MR_Id_MR_ICPElemtTag_add_assign(MR_Id_MR_ICPElemtTag *_this, int32_t a);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoInitNodeId_Destroy()` to free it when you're done using it.
MRC_API MR_NoInitNodeId *MR_NoInitNodeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoInitNodeId_DestroyArray()`.
/// Use `MR_NoInitNodeId_OffsetMutablePtr()` and `MR_NoInitNodeId_OffsetPtr()` to access the array elements.
MRC_API MR_NoInitNodeId *MR_NoInitNodeId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoInitNodeId *MR_NoInitNodeId_OffsetPtr(const MR_NoInitNodeId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoInitNodeId *MR_NoInitNodeId_OffsetMutablePtr(MR_NoInitNodeId *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::NoInitNodeId` to its base class `MR::NodeId`.
/// This version is acting on mutable pointers.
MRC_API const MR_NodeId *MR_NoInitNodeId_UpcastTo_MR_NodeId(const MR_NoInitNodeId *object);

/// Upcasts an instance of `MR::NoInitNodeId` to its base class `MR::NodeId`.
MRC_API MR_NodeId *MR_NoInitNodeId_MutableUpcastTo_MR_NodeId(MR_NoInitNodeId *object);

/// Generated from a constructor of class `MR::NoInitNodeId`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoInitNodeId_Destroy()` to free it when you're done using it.
MRC_API MR_NoInitNodeId *MR_NoInitNodeId_ConstructFromAnother(const MR_NoInitNodeId *_other);

/// Generated from a constructor of class `MR::NoInitNodeId`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoInitNodeId_Destroy()` to free it when you're done using it.
MRC_API MR_NoInitNodeId *MR_NoInitNodeId_Construct(MR_NodeId id);

/// Destroys a heap-allocated instance of `MR_NoInitNodeId`. Does nothing if the pointer is null.
MRC_API void MR_NoInitNodeId_Destroy(const MR_NoInitNodeId *_this);

/// Destroys a heap-allocated array of `MR_NoInitNodeId`. Does nothing if the pointer is null.
MRC_API void MR_NoInitNodeId_DestroyArray(const MR_NoInitNodeId *_this);

/// Generated from a method of class `MR::NoInitNodeId` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoInitNodeId *MR_NoInitNodeId_AssignFromAnother(MR_NoInitNodeId *_this, const MR_NoInitNodeId *_other);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_EdgeId MR_EdgeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_EdgeId_DestroyArray()`.
/// Use `MR_EdgeId_OffsetMutablePtr()` and `MR_EdgeId_OffsetPtr()` to access the array elements.
MRC_API MR_EdgeId *MR_EdgeId_DefaultConstructArray(size_t num_elems);

/// Downcasts an instance of `MR::EdgeId` to a derived class `MR::NoDefInit<MR::EdgeId>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_NoDefInit_MR_EdgeId *MR_EdgeId_StaticDowncastTo_MR_NoDefInit_MR_EdgeId(const MR_EdgeId *object);

/// Downcasts an instance of `MR::EdgeId` to a derived class `MR::NoDefInit<MR::EdgeId>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_NoDefInit_MR_EdgeId *MR_EdgeId_MutableStaticDowncastTo_MR_NoDefInit_MR_EdgeId(MR_EdgeId *object);

/// Generated from a constructor of class `MR::EdgeId`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_EdgeId MR_EdgeId_Construct_MR_NoInit(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::EdgeId`.
MRC_API MR_EdgeId MR_EdgeId_Construct_MR_UndirectedEdgeId(MR_UndirectedEdgeId u);

/// Generated from a constructor of class `MR::EdgeId`.
MRC_API MR_EdgeId MR_EdgeId_Construct_int32_t(int32_t i);

/// Generated from a constructor of class `MR::EdgeId`.
MRC_API MR_EdgeId MR_EdgeId_Construct_uint32_t(uint32_t i);

/// Generated from a constructor of class `MR::EdgeId`.
MRC_API MR_EdgeId MR_EdgeId_Construct_uint64_t(MR_uint64_t i);

/// Generated from a conversion operator of class `MR::EdgeId` to type `int32_t`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_EdgeId_ConvertTo_int32_t(const MR_EdgeId *_this);

/// Generated from a conversion operator of class `MR::EdgeId` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_EdgeId_ConvertTo_bool(const MR_EdgeId *_this);

/// Generated from a conversion operator of class `MR::EdgeId` to type `MR::UndirectedEdgeId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_EdgeId_ConvertTo_MR_UndirectedEdgeId(const MR_EdgeId *_this);

/// Generated from a method of class `MR::EdgeId` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_EdgeId_valid(const MR_EdgeId *_this);

/// Generated from a method of class `MR::EdgeId` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_EdgeId_get(MR_EdgeId *_this);

// returns identifier of the edge with same ends but opposite orientation
/// Generated from a method of class `MR::EdgeId` named `sym`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_EdgeId_sym(const MR_EdgeId *_this);

// among each pair of sym-edges: one is always even and the other is odd
/// Generated from a method of class `MR::EdgeId` named `even`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_EdgeId_even(const MR_EdgeId *_this);

/// Generated from a method of class `MR::EdgeId` named `odd`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_EdgeId_odd(const MR_EdgeId *_this);

// returns unique identifier of the edge ignoring its direction
/// Generated from a method of class `MR::EdgeId` named `undirected`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_EdgeId_undirected(const MR_EdgeId *_this);

/// Generated from a method of class `MR::EdgeId` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_equal_MR_EdgeId(const MR_EdgeId *_this, MR_EdgeId b);

/// Generated from a method of class `MR::EdgeId` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_EdgeId(const MR_EdgeId *_this, MR_EdgeId b);

/// Generated from a method of class `MR::EdgeId` named `operator<`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_less_MR_EdgeId(const MR_EdgeId *_this, MR_EdgeId b);

/// Generated from a method of class `MR::EdgeId` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeId *MR_decr_MR_EdgeId(MR_EdgeId *_this);

/// Generated from a method of class `MR::EdgeId` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeId *MR_incr_MR_EdgeId(MR_EdgeId *_this);

/// Generated from a method of class `MR::EdgeId` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_post_decr_MR_EdgeId(MR_EdgeId *_this);

/// Generated from a method of class `MR::EdgeId` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_post_incr_MR_EdgeId(MR_EdgeId *_this);

/// Generated from a method of class `MR::EdgeId` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeId *MR_EdgeId_sub_assign(MR_EdgeId *_this, int32_t a);

/// Generated from a method of class `MR::EdgeId` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeId *MR_EdgeId_add_assign(MR_EdgeId *_this, int32_t a);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_VoxelId MR_VoxelId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VoxelId_DestroyArray()`.
/// Use `MR_VoxelId_OffsetMutablePtr()` and `MR_VoxelId_OffsetPtr()` to access the array elements.
MRC_API MR_VoxelId *MR_VoxelId_DefaultConstructArray(size_t num_elems);

/// Downcasts an instance of `MR::VoxelId` to a derived class `MR::NoDefInit<MR::VoxelId>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_NoDefInit_MR_VoxelId *MR_VoxelId_StaticDowncastTo_MR_NoDefInit_MR_VoxelId(const MR_VoxelId *object);

/// Downcasts an instance of `MR::VoxelId` to a derived class `MR::NoDefInit<MR::VoxelId>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_NoDefInit_MR_VoxelId *MR_VoxelId_MutableStaticDowncastTo_MR_NoDefInit_MR_VoxelId(MR_VoxelId *object);

/// Generated from a constructor of class `MR::VoxelId`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_VoxelId MR_VoxelId_Construct_MR_NoInit(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::VoxelId`.
MRC_API MR_VoxelId MR_VoxelId_Construct_uint64_t(MR_uint64_t i);

/// Generated from a conversion operator of class `MR::VoxelId` to type `MR_uint64_t`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_VoxelId_ConvertTo_uint64_t(const MR_VoxelId *_this);

/// Generated from a conversion operator of class `MR::VoxelId` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_VoxelId_ConvertTo_bool(const MR_VoxelId *_this);

/// Generated from a method of class `MR::VoxelId` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_VoxelId_valid(const MR_VoxelId *_this);

/// Generated from a method of class `MR::VoxelId` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_VoxelId_get(MR_VoxelId *_this);

/// Generated from a method of class `MR::VoxelId` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_equal_MR_VoxelId(const MR_VoxelId *_this, MR_VoxelId b);

/// Generated from a method of class `MR::VoxelId` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_VoxelId(const MR_VoxelId *_this, MR_VoxelId b);

/// Generated from a method of class `MR::VoxelId` named `operator<`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_less_MR_VoxelId(const MR_VoxelId *_this, MR_VoxelId b);

/// Generated from a method of class `MR::VoxelId` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelId *MR_decr_MR_VoxelId(MR_VoxelId *_this);

/// Generated from a method of class `MR::VoxelId` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelId *MR_incr_MR_VoxelId(MR_VoxelId *_this);

/// Generated from a method of class `MR::VoxelId` named `operator--`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VoxelId MR_post_decr_MR_VoxelId(MR_VoxelId *_this);

/// Generated from a method of class `MR::VoxelId` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VoxelId MR_post_incr_MR_VoxelId(MR_VoxelId *_this);

/// Generated from a method of class `MR::VoxelId` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelId *MR_VoxelId_sub_assign(MR_VoxelId *_this, MR_uint64_t a);

/// Generated from a method of class `MR::VoxelId` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelId *MR_VoxelId_add_assign(MR_VoxelId *_this, MR_uint64_t a);

/// Generated from function `MR::operator+<MR::NodeTag>`.
MRC_API MR_NodeId MR_add_MR_NodeId_int32_t(MR_NodeId id, int32_t a);

/// Generated from function `MR::operator+<MR::EdgeTag>`.
MRC_API MR_EdgeId MR_add_MR_EdgeId_int32_t(MR_EdgeId id, int32_t a);

/// Generated from function `MR::operator+<MR::VoxelTag>`.
MRC_API MR_VoxelId MR_add_MR_VoxelId_int32_t(MR_VoxelId id, int32_t a);

/// Generated from function `MR::operator+<MR::NodeTag>`.
MRC_API MR_NodeId MR_add_MR_NodeId_uint32_t(MR_NodeId id, uint32_t a);

/// Generated from function `MR::operator+<MR::EdgeTag>`.
MRC_API MR_EdgeId MR_add_MR_EdgeId_uint32_t(MR_EdgeId id, uint32_t a);

/// Generated from function `MR::operator+<MR::VoxelTag>`.
MRC_API MR_VoxelId MR_add_MR_VoxelId_uint32_t(MR_VoxelId id, uint32_t a);

/// Generated from function `MR::operator+<MR::NodeTag>`.
MRC_API MR_NodeId MR_add_MR_NodeId_uint64_t(MR_NodeId id, MR_uint64_t a);

/// Generated from function `MR::operator+<MR::EdgeTag>`.
MRC_API MR_EdgeId MR_add_MR_EdgeId_uint64_t(MR_EdgeId id, MR_uint64_t a);

/// Generated from function `MR::operator+<MR::VoxelTag>`.
MRC_API MR_VoxelId MR_add_MR_VoxelId_uint64_t(MR_VoxelId id, MR_uint64_t a);

/// Generated from function `MR::operator-<MR::VoxelTag>`.
MRC_API MR_VoxelId MR_sub_MR_VoxelId_int32_t(MR_VoxelId id, int32_t a);

/// Generated from function `MR::operator-<MR::VoxelTag>`.
MRC_API MR_VoxelId MR_sub_MR_VoxelId_uint32_t(MR_VoxelId id, uint32_t a);

/// Generated from function `MR::operator-<MR::VoxelTag>`.
MRC_API MR_VoxelId MR_sub_MR_VoxelId_uint64_t(MR_VoxelId id, MR_uint64_t a);

#ifdef __cplusplus
} // extern "C"
#endif
