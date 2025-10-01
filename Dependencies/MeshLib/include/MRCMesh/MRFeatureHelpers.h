// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FeatureObject MR_FeatureObject; // Defined in `#include <MRCMesh/MRFeatureObject.h>`.
typedef struct MR_std_optional_MR_Vector3f MR_std_optional_MR_Vector3f; // Defined in `#include <MRCMisc/std_optional_MR_Vector3f.h>`.
typedef struct MR_std_shared_ptr_MR_VisualObject MR_std_shared_ptr_MR_VisualObject; // Defined in `#include <MRCMisc/std_shared_ptr_MR_VisualObject.h>`.
typedef struct MR_std_string_view MR_std_string_view; // Defined in `#include <MRCMisc/std_string_view.h>`.
typedef struct MR_std_unordered_set_std_string MR_std_unordered_set_std_string; // Defined in `#include <MRCMisc/std_unordered_set_std_string.h>`.


//! Which object type we're adding.
//! Update `ObjKindTraits` if you change this enum.
typedef int32_t MR_FeaturesObjectKind;
enum // MR_FeaturesObjectKind
{
    MR_FeaturesObjectKind_Point = 0,
    MR_FeaturesObjectKind_Line = 1,
    MR_FeaturesObjectKind_Plane = 2,
    MR_FeaturesObjectKind_Circle = 3,
    MR_FeaturesObjectKind_Sphere = 4,
    MR_FeaturesObjectKind_Cylinder = 5,
    MR_FeaturesObjectKind_Cone = 6,
    MR_FeaturesObjectKind__count = 7,
};

/// Generated from class `MR::ObjKindTraits<MR::FeaturesObjectKind::Point>`.
typedef struct MR_ObjKindTraits_MR_FeaturesObjectKind_Point MR_ObjKindTraits_MR_FeaturesObjectKind_Point;

/// Generated from class `MR::ObjKindTraits<MR::FeaturesObjectKind::Line>`.
typedef struct MR_ObjKindTraits_MR_FeaturesObjectKind_Line MR_ObjKindTraits_MR_FeaturesObjectKind_Line;

/// Generated from class `MR::ObjKindTraits<MR::FeaturesObjectKind::Plane>`.
typedef struct MR_ObjKindTraits_MR_FeaturesObjectKind_Plane MR_ObjKindTraits_MR_FeaturesObjectKind_Plane;

/// Generated from class `MR::ObjKindTraits<MR::FeaturesObjectKind::Circle>`.
typedef struct MR_ObjKindTraits_MR_FeaturesObjectKind_Circle MR_ObjKindTraits_MR_FeaturesObjectKind_Circle;

/// Generated from class `MR::ObjKindTraits<MR::FeaturesObjectKind::Sphere>`.
typedef struct MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere;

/// Generated from class `MR::ObjKindTraits<MR::FeaturesObjectKind::Cylinder>`.
typedef struct MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder;

/// Generated from class `MR::ObjKindTraits<MR::FeaturesObjectKind::Cone>`.
typedef struct MR_ObjKindTraits_MR_FeaturesObjectKind_Cone MR_ObjKindTraits_MR_FeaturesObjectKind_Cone;

/// Returns a pointer to a member variable of class `MR::ObjKindTraits<MR::FeaturesObjectKind::Point>` named `name`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string_view *MR_ObjKindTraits_MR_FeaturesObjectKind_Point_Get_name(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjKindTraits_MR_FeaturesObjectKind_Point_Destroy()` to free it when you're done using it.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Point *MR_ObjKindTraits_MR_FeaturesObjectKind_Point_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ObjKindTraits_MR_FeaturesObjectKind_Point_DestroyArray()`.
/// Use `MR_ObjKindTraits_MR_FeaturesObjectKind_Point_OffsetMutablePtr()` and `MR_ObjKindTraits_MR_FeaturesObjectKind_Point_OffsetPtr()` to access the array elements.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Point *MR_ObjKindTraits_MR_FeaturesObjectKind_Point_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ObjKindTraits_MR_FeaturesObjectKind_Point *MR_ObjKindTraits_MR_FeaturesObjectKind_Point_OffsetPtr(const MR_ObjKindTraits_MR_FeaturesObjectKind_Point *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Point *MR_ObjKindTraits_MR_FeaturesObjectKind_Point_OffsetMutablePtr(MR_ObjKindTraits_MR_FeaturesObjectKind_Point *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ObjKindTraits<MR::FeaturesObjectKind::Point>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjKindTraits_MR_FeaturesObjectKind_Point_Destroy()` to free it when you're done using it.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Point *MR_ObjKindTraits_MR_FeaturesObjectKind_Point_ConstructFromAnother(const MR_ObjKindTraits_MR_FeaturesObjectKind_Point *_other);

/// Destroys a heap-allocated instance of `MR_ObjKindTraits_MR_FeaturesObjectKind_Point`. Does nothing if the pointer is null.
MRC_API void MR_ObjKindTraits_MR_FeaturesObjectKind_Point_Destroy(const MR_ObjKindTraits_MR_FeaturesObjectKind_Point *_this);

/// Destroys a heap-allocated array of `MR_ObjKindTraits_MR_FeaturesObjectKind_Point`. Does nothing if the pointer is null.
MRC_API void MR_ObjKindTraits_MR_FeaturesObjectKind_Point_DestroyArray(const MR_ObjKindTraits_MR_FeaturesObjectKind_Point *_this);

/// Generated from a method of class `MR::ObjKindTraits<MR::FeaturesObjectKind::Point>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Point *MR_ObjKindTraits_MR_FeaturesObjectKind_Point_AssignFromAnother(MR_ObjKindTraits_MR_FeaturesObjectKind_Point *_this, const MR_ObjKindTraits_MR_FeaturesObjectKind_Point *_other);

/// Returns a pointer to a member variable of class `MR::ObjKindTraits<MR::FeaturesObjectKind::Line>` named `name`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string_view *MR_ObjKindTraits_MR_FeaturesObjectKind_Line_Get_name(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjKindTraits_MR_FeaturesObjectKind_Line_Destroy()` to free it when you're done using it.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Line *MR_ObjKindTraits_MR_FeaturesObjectKind_Line_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ObjKindTraits_MR_FeaturesObjectKind_Line_DestroyArray()`.
/// Use `MR_ObjKindTraits_MR_FeaturesObjectKind_Line_OffsetMutablePtr()` and `MR_ObjKindTraits_MR_FeaturesObjectKind_Line_OffsetPtr()` to access the array elements.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Line *MR_ObjKindTraits_MR_FeaturesObjectKind_Line_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ObjKindTraits_MR_FeaturesObjectKind_Line *MR_ObjKindTraits_MR_FeaturesObjectKind_Line_OffsetPtr(const MR_ObjKindTraits_MR_FeaturesObjectKind_Line *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Line *MR_ObjKindTraits_MR_FeaturesObjectKind_Line_OffsetMutablePtr(MR_ObjKindTraits_MR_FeaturesObjectKind_Line *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ObjKindTraits<MR::FeaturesObjectKind::Line>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjKindTraits_MR_FeaturesObjectKind_Line_Destroy()` to free it when you're done using it.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Line *MR_ObjKindTraits_MR_FeaturesObjectKind_Line_ConstructFromAnother(const MR_ObjKindTraits_MR_FeaturesObjectKind_Line *_other);

/// Destroys a heap-allocated instance of `MR_ObjKindTraits_MR_FeaturesObjectKind_Line`. Does nothing if the pointer is null.
MRC_API void MR_ObjKindTraits_MR_FeaturesObjectKind_Line_Destroy(const MR_ObjKindTraits_MR_FeaturesObjectKind_Line *_this);

/// Destroys a heap-allocated array of `MR_ObjKindTraits_MR_FeaturesObjectKind_Line`. Does nothing if the pointer is null.
MRC_API void MR_ObjKindTraits_MR_FeaturesObjectKind_Line_DestroyArray(const MR_ObjKindTraits_MR_FeaturesObjectKind_Line *_this);

/// Generated from a method of class `MR::ObjKindTraits<MR::FeaturesObjectKind::Line>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Line *MR_ObjKindTraits_MR_FeaturesObjectKind_Line_AssignFromAnother(MR_ObjKindTraits_MR_FeaturesObjectKind_Line *_this, const MR_ObjKindTraits_MR_FeaturesObjectKind_Line *_other);

/// Returns a pointer to a member variable of class `MR::ObjKindTraits<MR::FeaturesObjectKind::Plane>` named `name`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string_view *MR_ObjKindTraits_MR_FeaturesObjectKind_Plane_Get_name(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjKindTraits_MR_FeaturesObjectKind_Plane_Destroy()` to free it when you're done using it.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Plane *MR_ObjKindTraits_MR_FeaturesObjectKind_Plane_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ObjKindTraits_MR_FeaturesObjectKind_Plane_DestroyArray()`.
/// Use `MR_ObjKindTraits_MR_FeaturesObjectKind_Plane_OffsetMutablePtr()` and `MR_ObjKindTraits_MR_FeaturesObjectKind_Plane_OffsetPtr()` to access the array elements.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Plane *MR_ObjKindTraits_MR_FeaturesObjectKind_Plane_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ObjKindTraits_MR_FeaturesObjectKind_Plane *MR_ObjKindTraits_MR_FeaturesObjectKind_Plane_OffsetPtr(const MR_ObjKindTraits_MR_FeaturesObjectKind_Plane *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Plane *MR_ObjKindTraits_MR_FeaturesObjectKind_Plane_OffsetMutablePtr(MR_ObjKindTraits_MR_FeaturesObjectKind_Plane *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ObjKindTraits<MR::FeaturesObjectKind::Plane>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjKindTraits_MR_FeaturesObjectKind_Plane_Destroy()` to free it when you're done using it.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Plane *MR_ObjKindTraits_MR_FeaturesObjectKind_Plane_ConstructFromAnother(const MR_ObjKindTraits_MR_FeaturesObjectKind_Plane *_other);

/// Destroys a heap-allocated instance of `MR_ObjKindTraits_MR_FeaturesObjectKind_Plane`. Does nothing if the pointer is null.
MRC_API void MR_ObjKindTraits_MR_FeaturesObjectKind_Plane_Destroy(const MR_ObjKindTraits_MR_FeaturesObjectKind_Plane *_this);

/// Destroys a heap-allocated array of `MR_ObjKindTraits_MR_FeaturesObjectKind_Plane`. Does nothing if the pointer is null.
MRC_API void MR_ObjKindTraits_MR_FeaturesObjectKind_Plane_DestroyArray(const MR_ObjKindTraits_MR_FeaturesObjectKind_Plane *_this);

/// Generated from a method of class `MR::ObjKindTraits<MR::FeaturesObjectKind::Plane>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Plane *MR_ObjKindTraits_MR_FeaturesObjectKind_Plane_AssignFromAnother(MR_ObjKindTraits_MR_FeaturesObjectKind_Plane *_this, const MR_ObjKindTraits_MR_FeaturesObjectKind_Plane *_other);

/// Returns a pointer to a member variable of class `MR::ObjKindTraits<MR::FeaturesObjectKind::Circle>` named `name`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string_view *MR_ObjKindTraits_MR_FeaturesObjectKind_Circle_Get_name(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjKindTraits_MR_FeaturesObjectKind_Circle_Destroy()` to free it when you're done using it.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Circle *MR_ObjKindTraits_MR_FeaturesObjectKind_Circle_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ObjKindTraits_MR_FeaturesObjectKind_Circle_DestroyArray()`.
/// Use `MR_ObjKindTraits_MR_FeaturesObjectKind_Circle_OffsetMutablePtr()` and `MR_ObjKindTraits_MR_FeaturesObjectKind_Circle_OffsetPtr()` to access the array elements.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Circle *MR_ObjKindTraits_MR_FeaturesObjectKind_Circle_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ObjKindTraits_MR_FeaturesObjectKind_Circle *MR_ObjKindTraits_MR_FeaturesObjectKind_Circle_OffsetPtr(const MR_ObjKindTraits_MR_FeaturesObjectKind_Circle *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Circle *MR_ObjKindTraits_MR_FeaturesObjectKind_Circle_OffsetMutablePtr(MR_ObjKindTraits_MR_FeaturesObjectKind_Circle *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ObjKindTraits<MR::FeaturesObjectKind::Circle>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjKindTraits_MR_FeaturesObjectKind_Circle_Destroy()` to free it when you're done using it.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Circle *MR_ObjKindTraits_MR_FeaturesObjectKind_Circle_ConstructFromAnother(const MR_ObjKindTraits_MR_FeaturesObjectKind_Circle *_other);

/// Destroys a heap-allocated instance of `MR_ObjKindTraits_MR_FeaturesObjectKind_Circle`. Does nothing if the pointer is null.
MRC_API void MR_ObjKindTraits_MR_FeaturesObjectKind_Circle_Destroy(const MR_ObjKindTraits_MR_FeaturesObjectKind_Circle *_this);

/// Destroys a heap-allocated array of `MR_ObjKindTraits_MR_FeaturesObjectKind_Circle`. Does nothing if the pointer is null.
MRC_API void MR_ObjKindTraits_MR_FeaturesObjectKind_Circle_DestroyArray(const MR_ObjKindTraits_MR_FeaturesObjectKind_Circle *_this);

/// Generated from a method of class `MR::ObjKindTraits<MR::FeaturesObjectKind::Circle>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Circle *MR_ObjKindTraits_MR_FeaturesObjectKind_Circle_AssignFromAnother(MR_ObjKindTraits_MR_FeaturesObjectKind_Circle *_this, const MR_ObjKindTraits_MR_FeaturesObjectKind_Circle *_other);

/// Returns a pointer to a member variable of class `MR::ObjKindTraits<MR::FeaturesObjectKind::Sphere>` named `name`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string_view *MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere_Get_name(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere_Destroy()` to free it when you're done using it.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere *MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere_DestroyArray()`.
/// Use `MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere_OffsetMutablePtr()` and `MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere_OffsetPtr()` to access the array elements.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere *MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere *MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere_OffsetPtr(const MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere *MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere_OffsetMutablePtr(MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ObjKindTraits<MR::FeaturesObjectKind::Sphere>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere_Destroy()` to free it when you're done using it.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere *MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere_ConstructFromAnother(const MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere *_other);

/// Destroys a heap-allocated instance of `MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere`. Does nothing if the pointer is null.
MRC_API void MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere_Destroy(const MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere *_this);

/// Destroys a heap-allocated array of `MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere`. Does nothing if the pointer is null.
MRC_API void MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere_DestroyArray(const MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere *_this);

/// Generated from a method of class `MR::ObjKindTraits<MR::FeaturesObjectKind::Sphere>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere *MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere_AssignFromAnother(MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere *_this, const MR_ObjKindTraits_MR_FeaturesObjectKind_Sphere *_other);

/// Returns a pointer to a member variable of class `MR::ObjKindTraits<MR::FeaturesObjectKind::Cylinder>` named `name`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string_view *MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder_Get_name(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder_Destroy()` to free it when you're done using it.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder *MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder_DestroyArray()`.
/// Use `MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder_OffsetMutablePtr()` and `MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder_OffsetPtr()` to access the array elements.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder *MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder *MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder_OffsetPtr(const MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder *MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder_OffsetMutablePtr(MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ObjKindTraits<MR::FeaturesObjectKind::Cylinder>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder_Destroy()` to free it when you're done using it.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder *MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder_ConstructFromAnother(const MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder *_other);

/// Destroys a heap-allocated instance of `MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder`. Does nothing if the pointer is null.
MRC_API void MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder_Destroy(const MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder *_this);

/// Destroys a heap-allocated array of `MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder`. Does nothing if the pointer is null.
MRC_API void MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder_DestroyArray(const MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder *_this);

/// Generated from a method of class `MR::ObjKindTraits<MR::FeaturesObjectKind::Cylinder>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder *MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder_AssignFromAnother(MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder *_this, const MR_ObjKindTraits_MR_FeaturesObjectKind_Cylinder *_other);

/// Returns a pointer to a member variable of class `MR::ObjKindTraits<MR::FeaturesObjectKind::Cone>` named `name`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string_view *MR_ObjKindTraits_MR_FeaturesObjectKind_Cone_Get_name(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjKindTraits_MR_FeaturesObjectKind_Cone_Destroy()` to free it when you're done using it.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Cone *MR_ObjKindTraits_MR_FeaturesObjectKind_Cone_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ObjKindTraits_MR_FeaturesObjectKind_Cone_DestroyArray()`.
/// Use `MR_ObjKindTraits_MR_FeaturesObjectKind_Cone_OffsetMutablePtr()` and `MR_ObjKindTraits_MR_FeaturesObjectKind_Cone_OffsetPtr()` to access the array elements.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Cone *MR_ObjKindTraits_MR_FeaturesObjectKind_Cone_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ObjKindTraits_MR_FeaturesObjectKind_Cone *MR_ObjKindTraits_MR_FeaturesObjectKind_Cone_OffsetPtr(const MR_ObjKindTraits_MR_FeaturesObjectKind_Cone *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Cone *MR_ObjKindTraits_MR_FeaturesObjectKind_Cone_OffsetMutablePtr(MR_ObjKindTraits_MR_FeaturesObjectKind_Cone *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ObjKindTraits<MR::FeaturesObjectKind::Cone>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjKindTraits_MR_FeaturesObjectKind_Cone_Destroy()` to free it when you're done using it.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Cone *MR_ObjKindTraits_MR_FeaturesObjectKind_Cone_ConstructFromAnother(const MR_ObjKindTraits_MR_FeaturesObjectKind_Cone *_other);

/// Destroys a heap-allocated instance of `MR_ObjKindTraits_MR_FeaturesObjectKind_Cone`. Does nothing if the pointer is null.
MRC_API void MR_ObjKindTraits_MR_FeaturesObjectKind_Cone_Destroy(const MR_ObjKindTraits_MR_FeaturesObjectKind_Cone *_this);

/// Destroys a heap-allocated array of `MR_ObjKindTraits_MR_FeaturesObjectKind_Cone`. Does nothing if the pointer is null.
MRC_API void MR_ObjKindTraits_MR_FeaturesObjectKind_Cone_DestroyArray(const MR_ObjKindTraits_MR_FeaturesObjectKind_Cone *_this);

/// Generated from a method of class `MR::ObjKindTraits<MR::FeaturesObjectKind::Cone>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjKindTraits_MR_FeaturesObjectKind_Cone *MR_ObjKindTraits_MR_FeaturesObjectKind_Cone_AssignFromAnother(MR_ObjKindTraits_MR_FeaturesObjectKind_Cone *_this, const MR_ObjKindTraits_MR_FeaturesObjectKind_Cone *_other);

//! Allocates an object of type `kind`, passing `params...` to its constructor.
/// Generated from function `MR::makeObjectFromEnum<>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_VisualObject_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_VisualObject *MR_makeObjectFromEnum(MR_FeaturesObjectKind kind);

//! Allocates an object of type `kind`, passing `params...` to its constructor.
/// Generated from function `MR::makeObjectFromClassName<>`.
/// Parameter `className` can not be null.
/// If `className_end` is null, then `className` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_VisualObject_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_VisualObject *MR_makeObjectFromClassName(const char *className, const char *className_end);

// Using forEachObjectKind the template collects a list of features for which the method ...->getNormal() is available
/// Generated from function `MR::getFeatureNormal`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_Vector3f *MR_getFeatureNormal(MR_FeatureObject *feature);

// Using forEachObjectKind the template collects a list of features for which the method ...->getDirection() is available
/// Generated from function `MR::getFeatureDirection`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_Vector3f *MR_getFeatureDirection(MR_FeatureObject *feature);

// Try to getNormal from specific feature using forEachObjectKind template. Returns nullopt is ...->getNormal() is not available for given feature type.
/// Generated from function `MR::getFeaturesTypeWithNormals`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_unordered_set_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_unordered_set_std_string *MR_getFeaturesTypeWithNormals(void);

// Try to getDirection from specific feature using forEachObjectKind template. Returns nullopt is ...->getDirection() is not available for given feature type.
/// Generated from function `MR::getFeaturesTypeWithDirections`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_unordered_set_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_unordered_set_std_string *MR_getFeaturesTypeWithDirections(void);

#ifdef __cplusplus
} // extern "C"
#endif
