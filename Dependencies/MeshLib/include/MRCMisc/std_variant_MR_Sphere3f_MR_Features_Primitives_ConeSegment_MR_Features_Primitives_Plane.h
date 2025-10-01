// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Features_Primitives_ConeSegment MR_Features_Primitives_ConeSegment; // Defined in `#include <MRCMesh/MRFeatures.h>`.
typedef struct MR_Features_Primitives_Plane MR_Features_Primitives_Plane; // Defined in `#include <MRCMesh/MRFeatures.h>`.
typedef struct MR_Sphere3f MR_Sphere3f; // Defined in `#include <MRCMesh/MRSphere.h>`.


/// Stores one of 3 objects: `MR::Sphere3f`, `MR::Features::Primitives::ConeSegment`, `MR::Features::Primitives::Plane`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_DestroyArray()`.
/// Use `MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_OffsetMutablePtr()` and `MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_OffsetPtr()` to access the array elements.
MRC_API MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_ConstructFromAnother(const MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API void MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_AssignFromAnother(MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *_this, const MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *other);

/// Destroys a heap-allocated instance of `MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane`. Does nothing if the pointer is null.
MRC_API void MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_Destroy(const MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *_this);

/// Destroys a heap-allocated array of `MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane`. Does nothing if the pointer is null.
MRC_API void MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_DestroyArray(const MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_OffsetPtr(const MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_OffsetMutablePtr(MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *ptr, ptrdiff_t i);

/// Returns the index of the stored element type. In rare cases may return -1 if this variant is "valueless by exception".
/// Parameter `_this` can not be null. It is a single object.
MRC_API size_t MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_Index(const MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *_this);

/// Constructs the variant storing the element 0, of type `MR::Sphere3f`.
/// Parameter `value` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_ConstructAs_MR_Sphere3f(const MR_Sphere3f *value);

/// Constructs the variant storing the element 1, of type `MR::Features::Primitives::ConeSegment`.
/// Parameter `value` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_ConstructAs_MR_Features_Primitives_ConeSegment(const MR_Features_Primitives_ConeSegment *value);

/// Constructs the variant storing the element 2, of type `MR::Features::Primitives::Plane`.
/// Parameter `value` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_Destroy()` to free it when you're done using it.
MRC_API MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_ConstructAs_MR_Features_Primitives_Plane(const MR_Features_Primitives_Plane *value);

/// Assigns to the variant, making it store the element 0, of type `MR::Sphere3f`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_AssignAs_MR_Sphere3f(MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *_this, const MR_Sphere3f *value);

/// Assigns to the variant, making it store the element 1, of type `MR::Features::Primitives::ConeSegment`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_AssignAs_MR_Features_Primitives_ConeSegment(MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *_this, const MR_Features_Primitives_ConeSegment *value);

/// Assigns to the variant, making it store the element 2, of type `MR::Features::Primitives::Plane`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_AssignAs_MR_Features_Primitives_Plane(MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *_this, const MR_Features_Primitives_Plane *value);

/// Returns the element 0, of type `MR::Sphere3f`, read-only. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_Sphere3f *MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_Get_MR_Sphere3f(const MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *_this);

/// Returns the element 0, of type `MR::Sphere3f`, mutable. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Sphere3f *MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_GetMutable_MR_Sphere3f(MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *_this);

/// Returns the element 1, of type `MR::Features::Primitives::ConeSegment`, read-only. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_Features_Primitives_ConeSegment *MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_Get_MR_Features_Primitives_ConeSegment(const MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *_this);

/// Returns the element 1, of type `MR::Features::Primitives::ConeSegment`, mutable. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Features_Primitives_ConeSegment *MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_GetMutable_MR_Features_Primitives_ConeSegment(MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *_this);

/// Returns the element 2, of type `MR::Features::Primitives::Plane`, read-only. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_Features_Primitives_Plane *MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_Get_MR_Features_Primitives_Plane(const MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *_this);

/// Returns the element 2, of type `MR::Features::Primitives::Plane`, mutable. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Features_Primitives_Plane *MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane_GetMutable_MR_Features_Primitives_Plane(MR_std_variant_MR_Sphere3f_MR_Features_Primitives_ConeSegment_MR_Features_Primitives_Plane *_this);

#ifdef __cplusplus
} // extern "C"
#endif
