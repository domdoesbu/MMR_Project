// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRColor.h>
#include <MRCMesh/MRMeshFwd.h>
#include <MRCMesh/MRVector2.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_MeshTexture MR_MeshTexture; // Defined in `#include <MRCMesh/MRMeshTexture.h>`.
typedef struct MR_Vector2f MR_Vector2f; // Defined in `#include <MRCMesh/MRVector2.h>`.
typedef struct MR_std_vector_MR_Color MR_std_vector_MR_Color; // Defined in `#include <MRCMisc/std_vector_MR_Color.h>`.


/// struct to hold Image data
/// Generated from class `MR::Image`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::MeshTexture`
typedef struct MR_Image MR_Image;

/// Returns a pointer to a member variable of class `MR::Image` named `pixels`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_Color *MR_Image_Get_pixels(const MR_Image *_this);

/// Modifies a member variable of class `MR::Image` named `pixels`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Image_Set_pixels(MR_Image *_this, MR_PassBy value_pass_by, MR_std_vector_MR_Color *value);

/// Returns a mutable pointer to a member variable of class `MR::Image` named `pixels`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_Color *MR_Image_GetMutable_pixels(MR_Image *_this);

/// Returns a pointer to a member variable of class `MR::Image` named `resolution`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2i *MR_Image_Get_resolution(const MR_Image *_this);

/// Modifies a member variable of class `MR::Image` named `resolution`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Image_Set_resolution(MR_Image *_this, MR_Vector2i value);

/// Returns a mutable pointer to a member variable of class `MR::Image` named `resolution`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2i *MR_Image_GetMutable_resolution(MR_Image *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Image_Destroy()` to free it when you're done using it.
MRC_API MR_Image *MR_Image_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Image_DestroyArray()`.
/// Use `MR_Image_OffsetMutablePtr()` and `MR_Image_OffsetPtr()` to access the array elements.
MRC_API MR_Image *MR_Image_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Image` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Image_Destroy()` to free it when you're done using it.
MRC_API MR_Image *MR_Image_ConstructFrom(MR_PassBy pixels_pass_by, MR_std_vector_MR_Color *pixels, MR_Vector2i resolution);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Image *MR_Image_OffsetPtr(const MR_Image *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Image *MR_Image_OffsetMutablePtr(MR_Image *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::Image` to a derived class `MR::MeshTexture`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_MeshTexture *MR_Image_StaticDowncastTo_MR_MeshTexture(const MR_Image *object);

/// Downcasts an instance of `MR::Image` to a derived class `MR::MeshTexture`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_MeshTexture *MR_Image_MutableStaticDowncastTo_MR_MeshTexture(MR_Image *object);

/// Generated from a constructor of class `MR::Image`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Image_Destroy()` to free it when you're done using it.
MRC_API MR_Image *MR_Image_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Image *_other);

/// Destroys a heap-allocated instance of `MR_Image`. Does nothing if the pointer is null.
MRC_API void MR_Image_Destroy(const MR_Image *_this);

/// Destroys a heap-allocated array of `MR_Image`. Does nothing if the pointer is null.
MRC_API void MR_Image_DestroyArray(const MR_Image *_this);

/// Generated from a method of class `MR::Image` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Image *MR_Image_AssignFromAnother(MR_Image *_this, MR_PassBy _other_pass_by, MR_Image *_other);

/// fetches some texture element specified by integer coordinates
/// Generated from a method of class `MR::Image` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Color *MR_Image_index(MR_Image *_this, const MR_Vector2i *p);

/// Generated from a method of class `MR::Image` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
MRC_API MR_Color MR_Image_index_const(const MR_Image *_this, const MR_Vector2i *p);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::Image` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Image_heapBytes(const MR_Image *_this);

/// Given texture position in [0,1]x[0,1] (which is clamped if necessary),
/// returns the color of the closest pixel
/// Generated from a method of class `MR::Image` named `sampleDiscrete`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API MR_Color MR_Image_sampleDiscrete(const MR_Image *_this, const MR_Vector2f *pos);

/// Given texture position in [0,1]x[0,1] (which is clamped if necessary),
/// returns bilinear interpolated color at it
/// Generated from a method of class `MR::Image` named `sampleBilinear`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API MR_Color MR_Image_sampleBilinear(const MR_Image *_this, const MR_Vector2f *pos);

/// Given texture position in [0,1]x[0,1] (which is clamped if necessary),
/// returns sampled color at it according to given filter
/// Generated from a method of class `MR::Image` named `sample`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API MR_Color MR_Image_sample(const MR_Image *_this, MR_FilterType filter, const MR_Vector2f *pos);

#ifdef __cplusplus
} // extern "C"
#endif
