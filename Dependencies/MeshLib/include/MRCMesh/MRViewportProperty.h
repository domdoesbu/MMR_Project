// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRAffineXf.h>
#include <MRCMesh/MRColor.h>
#include <MRCMesh/MRMatrix3.h>
#include <MRCMesh/MRViewportId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_XfBasedCache_MR_Box3f MR_XfBasedCache_MR_Box3f; // Defined in `#include <MRCMesh/MRXfBasedCache.h>`.


/// storage of some viewport-dependent property,
/// which has some default value for all viewports and special values for some specific viewports
/// Generated from class `MR::ViewportProperty<MR::AffineXf3f>`.
typedef struct MR_ViewportProperty_MR_AffineXf3f MR_ViewportProperty_MR_AffineXf3f;

/// storage of some viewport-dependent property,
/// which has some default value for all viewports and special values for some specific viewports
/// Generated from class `MR::ViewportProperty<MR::Color>`.
typedef struct MR_ViewportProperty_MR_Color MR_ViewportProperty_MR_Color;

/// storage of some viewport-dependent property,
/// which has some default value for all viewports and special values for some specific viewports
/// Generated from class `MR::ViewportProperty<uint8_t>`.
typedef struct MR_ViewportProperty_uint8_t MR_ViewportProperty_uint8_t;

/// storage of some viewport-dependent property,
/// which has some default value for all viewports and special values for some specific viewports
/// Generated from class `MR::ViewportProperty<MR::XfBasedCache<MR::Box3f>>`.
typedef struct MR_ViewportProperty_MR_XfBasedCache_MR_Box3f MR_ViewportProperty_MR_XfBasedCache_MR_Box3f;

/// storage of some viewport-dependent property,
/// which has some default value for all viewports and special values for some specific viewports
/// Generated from class `MR::ViewportProperty<MR::Matrix3f>`.
typedef struct MR_ViewportProperty_MR_Matrix3f MR_ViewportProperty_MR_Matrix3f;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportProperty_MR_AffineXf3f_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportProperty_MR_AffineXf3f *MR_ViewportProperty_MR_AffineXf3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ViewportProperty_MR_AffineXf3f_DestroyArray()`.
/// Use `MR_ViewportProperty_MR_AffineXf3f_OffsetMutablePtr()` and `MR_ViewportProperty_MR_AffineXf3f_OffsetPtr()` to access the array elements.
MRC_API MR_ViewportProperty_MR_AffineXf3f *MR_ViewportProperty_MR_AffineXf3f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ViewportProperty_MR_AffineXf3f *MR_ViewportProperty_MR_AffineXf3f_OffsetPtr(const MR_ViewportProperty_MR_AffineXf3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ViewportProperty_MR_AffineXf3f *MR_ViewportProperty_MR_AffineXf3f_OffsetMutablePtr(MR_ViewportProperty_MR_AffineXf3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ViewportProperty<MR::AffineXf3f>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportProperty_MR_AffineXf3f_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportProperty_MR_AffineXf3f *MR_ViewportProperty_MR_AffineXf3f_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ViewportProperty_MR_AffineXf3f *_other);

/// Generated from a constructor of class `MR::ViewportProperty<MR::AffineXf3f>`.
/// Parameter `def` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportProperty_MR_AffineXf3f_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportProperty_MR_AffineXf3f *MR_ViewportProperty_MR_AffineXf3f_Construct(const MR_AffineXf3f *def);

/// Destroys a heap-allocated instance of `MR_ViewportProperty_MR_AffineXf3f`. Does nothing if the pointer is null.
MRC_API void MR_ViewportProperty_MR_AffineXf3f_Destroy(const MR_ViewportProperty_MR_AffineXf3f *_this);

/// Destroys a heap-allocated array of `MR_ViewportProperty_MR_AffineXf3f`. Does nothing if the pointer is null.
MRC_API void MR_ViewportProperty_MR_AffineXf3f_DestroyArray(const MR_ViewportProperty_MR_AffineXf3f *_this);

/// Generated from a method of class `MR::ViewportProperty<MR::AffineXf3f>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ViewportProperty_MR_AffineXf3f *MR_ViewportProperty_MR_AffineXf3f_AssignFromAnother(MR_ViewportProperty_MR_AffineXf3f *_this, MR_PassBy _other_pass_by, MR_ViewportProperty_MR_AffineXf3f *_other);

/// sets default property value
/// Generated from a method of class `MR::ViewportProperty<MR::AffineXf3f>` named `set`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ViewportProperty_MR_AffineXf3f_set_1(MR_ViewportProperty_MR_AffineXf3f *_this, MR_AffineXf3f def);

/// gets default property value
/// Generated from a method of class `MR::ViewportProperty<MR::AffineXf3f>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *MR_ViewportProperty_MR_AffineXf3f_get_const_0(const MR_ViewportProperty_MR_AffineXf3f *_this);

/// Generated from a method of class `MR::ViewportProperty<MR::AffineXf3f>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AffineXf3f *MR_ViewportProperty_MR_AffineXf3f_get(MR_ViewportProperty_MR_AffineXf3f *_this);

/// returns direct access to value associated with given viewport (or default value if !id)
/// Generated from a method of class `MR::ViewportProperty<MR::AffineXf3f>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AffineXf3f *MR_ViewportProperty_MR_AffineXf3f_index(MR_ViewportProperty_MR_AffineXf3f *_this, MR_ViewportId id);

/// sets specific property value for given viewport (or default value if !id)
/// Generated from a method of class `MR::ViewportProperty<MR::AffineXf3f>` named `set`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ViewportProperty_MR_AffineXf3f_set_2(MR_ViewportProperty_MR_AffineXf3f *_this, MR_AffineXf3f v, MR_ViewportId id);

/// gets property value for given viewport: specific if available otherwise default one;
/// \param isDef receives true if this viewport does not have specific value and default one is returned
/// Generated from a method of class `MR::ViewportProperty<MR::AffineXf3f>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `isDef` defaults to a null pointer in C++.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *MR_ViewportProperty_MR_AffineXf3f_get_const_2(const MR_ViewportProperty_MR_AffineXf3f *_this, MR_ViewportId id, bool *isDef);

/// forgets specific property value for given viewport (or all viewports if !id);
/// returns true if any specific value was removed
/// Generated from a method of class `MR::ViewportProperty<MR::AffineXf3f>` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ViewportProperty_MR_AffineXf3f_reset_1(MR_ViewportProperty_MR_AffineXf3f *_this, MR_ViewportId id);

/// forgets specific property value for all viewports;
/// returns true if any specific value was removed
/// Generated from a method of class `MR::ViewportProperty<MR::AffineXf3f>` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ViewportProperty_MR_AffineXf3f_reset_0(MR_ViewportProperty_MR_AffineXf3f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportProperty_MR_Color_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportProperty_MR_Color *MR_ViewportProperty_MR_Color_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ViewportProperty_MR_Color_DestroyArray()`.
/// Use `MR_ViewportProperty_MR_Color_OffsetMutablePtr()` and `MR_ViewportProperty_MR_Color_OffsetPtr()` to access the array elements.
MRC_API MR_ViewportProperty_MR_Color *MR_ViewportProperty_MR_Color_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ViewportProperty_MR_Color *MR_ViewportProperty_MR_Color_OffsetPtr(const MR_ViewportProperty_MR_Color *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ViewportProperty_MR_Color *MR_ViewportProperty_MR_Color_OffsetMutablePtr(MR_ViewportProperty_MR_Color *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ViewportProperty<MR::Color>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportProperty_MR_Color_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportProperty_MR_Color *MR_ViewportProperty_MR_Color_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ViewportProperty_MR_Color *_other);

/// Generated from a constructor of class `MR::ViewportProperty<MR::Color>`.
/// Parameter `def` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportProperty_MR_Color_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportProperty_MR_Color *MR_ViewportProperty_MR_Color_Construct(const MR_Color *def);

/// Destroys a heap-allocated instance of `MR_ViewportProperty_MR_Color`. Does nothing if the pointer is null.
MRC_API void MR_ViewportProperty_MR_Color_Destroy(const MR_ViewportProperty_MR_Color *_this);

/// Destroys a heap-allocated array of `MR_ViewportProperty_MR_Color`. Does nothing if the pointer is null.
MRC_API void MR_ViewportProperty_MR_Color_DestroyArray(const MR_ViewportProperty_MR_Color *_this);

/// Generated from a method of class `MR::ViewportProperty<MR::Color>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ViewportProperty_MR_Color *MR_ViewportProperty_MR_Color_AssignFromAnother(MR_ViewportProperty_MR_Color *_this, MR_PassBy _other_pass_by, MR_ViewportProperty_MR_Color *_other);

/// sets default property value
/// Generated from a method of class `MR::ViewportProperty<MR::Color>` named `set`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ViewportProperty_MR_Color_set_1(MR_ViewportProperty_MR_Color *_this, MR_Color def);

/// gets default property value
/// Generated from a method of class `MR::ViewportProperty<MR::Color>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Color *MR_ViewportProperty_MR_Color_get_const_0(const MR_ViewportProperty_MR_Color *_this);

/// Generated from a method of class `MR::ViewportProperty<MR::Color>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Color *MR_ViewportProperty_MR_Color_get(MR_ViewportProperty_MR_Color *_this);

/// returns direct access to value associated with given viewport (or default value if !id)
/// Generated from a method of class `MR::ViewportProperty<MR::Color>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Color *MR_ViewportProperty_MR_Color_index(MR_ViewportProperty_MR_Color *_this, MR_ViewportId id);

/// sets specific property value for given viewport (or default value if !id)
/// Generated from a method of class `MR::ViewportProperty<MR::Color>` named `set`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ViewportProperty_MR_Color_set_2(MR_ViewportProperty_MR_Color *_this, MR_Color v, MR_ViewportId id);

/// gets property value for given viewport: specific if available otherwise default one;
/// \param isDef receives true if this viewport does not have specific value and default one is returned
/// Generated from a method of class `MR::ViewportProperty<MR::Color>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `isDef` defaults to a null pointer in C++.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Color *MR_ViewportProperty_MR_Color_get_const_2(const MR_ViewportProperty_MR_Color *_this, MR_ViewportId id, bool *isDef);

/// forgets specific property value for given viewport (or all viewports if !id);
/// returns true if any specific value was removed
/// Generated from a method of class `MR::ViewportProperty<MR::Color>` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ViewportProperty_MR_Color_reset_1(MR_ViewportProperty_MR_Color *_this, MR_ViewportId id);

/// forgets specific property value for all viewports;
/// returns true if any specific value was removed
/// Generated from a method of class `MR::ViewportProperty<MR::Color>` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ViewportProperty_MR_Color_reset_0(MR_ViewportProperty_MR_Color *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportProperty_uint8_t_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportProperty_uint8_t *MR_ViewportProperty_uint8_t_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ViewportProperty_uint8_t_DestroyArray()`.
/// Use `MR_ViewportProperty_uint8_t_OffsetMutablePtr()` and `MR_ViewportProperty_uint8_t_OffsetPtr()` to access the array elements.
MRC_API MR_ViewportProperty_uint8_t *MR_ViewportProperty_uint8_t_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ViewportProperty_uint8_t *MR_ViewportProperty_uint8_t_OffsetPtr(const MR_ViewportProperty_uint8_t *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ViewportProperty_uint8_t *MR_ViewportProperty_uint8_t_OffsetMutablePtr(MR_ViewportProperty_uint8_t *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ViewportProperty<uint8_t>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportProperty_uint8_t_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportProperty_uint8_t *MR_ViewportProperty_uint8_t_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ViewportProperty_uint8_t *_other);

/// Generated from a constructor of class `MR::ViewportProperty<uint8_t>`.
/// Parameter `def` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportProperty_uint8_t_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportProperty_uint8_t *MR_ViewportProperty_uint8_t_Construct(const uint8_t *def);

/// Destroys a heap-allocated instance of `MR_ViewportProperty_uint8_t`. Does nothing if the pointer is null.
MRC_API void MR_ViewportProperty_uint8_t_Destroy(const MR_ViewportProperty_uint8_t *_this);

/// Destroys a heap-allocated array of `MR_ViewportProperty_uint8_t`. Does nothing if the pointer is null.
MRC_API void MR_ViewportProperty_uint8_t_DestroyArray(const MR_ViewportProperty_uint8_t *_this);

/// Generated from a method of class `MR::ViewportProperty<uint8_t>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ViewportProperty_uint8_t *MR_ViewportProperty_uint8_t_AssignFromAnother(MR_ViewportProperty_uint8_t *_this, MR_PassBy _other_pass_by, MR_ViewportProperty_uint8_t *_other);

/// sets default property value
/// Generated from a method of class `MR::ViewportProperty<uint8_t>` named `set`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ViewportProperty_uint8_t_set_1(MR_ViewportProperty_uint8_t *_this, uint8_t def);

/// gets default property value
/// Generated from a method of class `MR::ViewportProperty<uint8_t>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const uint8_t *MR_ViewportProperty_uint8_t_get_const_0(const MR_ViewportProperty_uint8_t *_this);

/// Generated from a method of class `MR::ViewportProperty<uint8_t>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API uint8_t *MR_ViewportProperty_uint8_t_get(MR_ViewportProperty_uint8_t *_this);

/// returns direct access to value associated with given viewport (or default value if !id)
/// Generated from a method of class `MR::ViewportProperty<uint8_t>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API uint8_t *MR_ViewportProperty_uint8_t_index(MR_ViewportProperty_uint8_t *_this, MR_ViewportId id);

/// sets specific property value for given viewport (or default value if !id)
/// Generated from a method of class `MR::ViewportProperty<uint8_t>` named `set`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ViewportProperty_uint8_t_set_2(MR_ViewportProperty_uint8_t *_this, uint8_t v, MR_ViewportId id);

/// gets property value for given viewport: specific if available otherwise default one;
/// \param isDef receives true if this viewport does not have specific value and default one is returned
/// Generated from a method of class `MR::ViewportProperty<uint8_t>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `isDef` defaults to a null pointer in C++.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const uint8_t *MR_ViewportProperty_uint8_t_get_const_2(const MR_ViewportProperty_uint8_t *_this, MR_ViewportId id, bool *isDef);

/// forgets specific property value for given viewport (or all viewports if !id);
/// returns true if any specific value was removed
/// Generated from a method of class `MR::ViewportProperty<uint8_t>` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ViewportProperty_uint8_t_reset_1(MR_ViewportProperty_uint8_t *_this, MR_ViewportId id);

/// forgets specific property value for all viewports;
/// returns true if any specific value was removed
/// Generated from a method of class `MR::ViewportProperty<uint8_t>` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ViewportProperty_uint8_t_reset_0(MR_ViewportProperty_uint8_t *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportProperty_MR_XfBasedCache_MR_Box3f_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportProperty_MR_XfBasedCache_MR_Box3f *MR_ViewportProperty_MR_XfBasedCache_MR_Box3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ViewportProperty_MR_XfBasedCache_MR_Box3f_DestroyArray()`.
/// Use `MR_ViewportProperty_MR_XfBasedCache_MR_Box3f_OffsetMutablePtr()` and `MR_ViewportProperty_MR_XfBasedCache_MR_Box3f_OffsetPtr()` to access the array elements.
MRC_API MR_ViewportProperty_MR_XfBasedCache_MR_Box3f *MR_ViewportProperty_MR_XfBasedCache_MR_Box3f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ViewportProperty_MR_XfBasedCache_MR_Box3f *MR_ViewportProperty_MR_XfBasedCache_MR_Box3f_OffsetPtr(const MR_ViewportProperty_MR_XfBasedCache_MR_Box3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ViewportProperty_MR_XfBasedCache_MR_Box3f *MR_ViewportProperty_MR_XfBasedCache_MR_Box3f_OffsetMutablePtr(MR_ViewportProperty_MR_XfBasedCache_MR_Box3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ViewportProperty<MR::XfBasedCache<MR::Box3f>>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportProperty_MR_XfBasedCache_MR_Box3f_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportProperty_MR_XfBasedCache_MR_Box3f *MR_ViewportProperty_MR_XfBasedCache_MR_Box3f_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ViewportProperty_MR_XfBasedCache_MR_Box3f *_other);

/// Generated from a constructor of class `MR::ViewportProperty<MR::XfBasedCache<MR::Box3f>>`.
/// Parameter `def` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportProperty_MR_XfBasedCache_MR_Box3f_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportProperty_MR_XfBasedCache_MR_Box3f *MR_ViewportProperty_MR_XfBasedCache_MR_Box3f_Construct(const MR_XfBasedCache_MR_Box3f *def);

/// Destroys a heap-allocated instance of `MR_ViewportProperty_MR_XfBasedCache_MR_Box3f`. Does nothing if the pointer is null.
MRC_API void MR_ViewportProperty_MR_XfBasedCache_MR_Box3f_Destroy(const MR_ViewportProperty_MR_XfBasedCache_MR_Box3f *_this);

/// Destroys a heap-allocated array of `MR_ViewportProperty_MR_XfBasedCache_MR_Box3f`. Does nothing if the pointer is null.
MRC_API void MR_ViewportProperty_MR_XfBasedCache_MR_Box3f_DestroyArray(const MR_ViewportProperty_MR_XfBasedCache_MR_Box3f *_this);

/// Generated from a method of class `MR::ViewportProperty<MR::XfBasedCache<MR::Box3f>>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ViewportProperty_MR_XfBasedCache_MR_Box3f *MR_ViewportProperty_MR_XfBasedCache_MR_Box3f_AssignFromAnother(MR_ViewportProperty_MR_XfBasedCache_MR_Box3f *_this, MR_PassBy _other_pass_by, MR_ViewportProperty_MR_XfBasedCache_MR_Box3f *_other);

/// sets default property value
/// Generated from a method of class `MR::ViewportProperty<MR::XfBasedCache<MR::Box3f>>` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `def` can not be null. It is a single object.
MRC_API void MR_ViewportProperty_MR_XfBasedCache_MR_Box3f_set_1(MR_ViewportProperty_MR_XfBasedCache_MR_Box3f *_this, const MR_XfBasedCache_MR_Box3f *def);

/// gets default property value
/// Generated from a method of class `MR::ViewportProperty<MR::XfBasedCache<MR::Box3f>>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_XfBasedCache_MR_Box3f *MR_ViewportProperty_MR_XfBasedCache_MR_Box3f_get_const_0(const MR_ViewportProperty_MR_XfBasedCache_MR_Box3f *_this);

/// Generated from a method of class `MR::ViewportProperty<MR::XfBasedCache<MR::Box3f>>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_XfBasedCache_MR_Box3f *MR_ViewportProperty_MR_XfBasedCache_MR_Box3f_get(MR_ViewportProperty_MR_XfBasedCache_MR_Box3f *_this);

/// returns direct access to value associated with given viewport (or default value if !id)
/// Generated from a method of class `MR::ViewportProperty<MR::XfBasedCache<MR::Box3f>>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_XfBasedCache_MR_Box3f *MR_ViewportProperty_MR_XfBasedCache_MR_Box3f_index(MR_ViewportProperty_MR_XfBasedCache_MR_Box3f *_this, MR_ViewportId id);

/// sets specific property value for given viewport (or default value if !id)
/// Generated from a method of class `MR::ViewportProperty<MR::XfBasedCache<MR::Box3f>>` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `v` can not be null. It is a single object.
MRC_API void MR_ViewportProperty_MR_XfBasedCache_MR_Box3f_set_2(MR_ViewportProperty_MR_XfBasedCache_MR_Box3f *_this, const MR_XfBasedCache_MR_Box3f *v, MR_ViewportId id);

/// gets property value for given viewport: specific if available otherwise default one;
/// \param isDef receives true if this viewport does not have specific value and default one is returned
/// Generated from a method of class `MR::ViewportProperty<MR::XfBasedCache<MR::Box3f>>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `isDef` defaults to a null pointer in C++.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_XfBasedCache_MR_Box3f *MR_ViewportProperty_MR_XfBasedCache_MR_Box3f_get_const_2(const MR_ViewportProperty_MR_XfBasedCache_MR_Box3f *_this, MR_ViewportId id, bool *isDef);

/// forgets specific property value for given viewport (or all viewports if !id);
/// returns true if any specific value was removed
/// Generated from a method of class `MR::ViewportProperty<MR::XfBasedCache<MR::Box3f>>` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ViewportProperty_MR_XfBasedCache_MR_Box3f_reset_1(MR_ViewportProperty_MR_XfBasedCache_MR_Box3f *_this, MR_ViewportId id);

/// forgets specific property value for all viewports;
/// returns true if any specific value was removed
/// Generated from a method of class `MR::ViewportProperty<MR::XfBasedCache<MR::Box3f>>` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ViewportProperty_MR_XfBasedCache_MR_Box3f_reset_0(MR_ViewportProperty_MR_XfBasedCache_MR_Box3f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportProperty_MR_Matrix3f_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportProperty_MR_Matrix3f *MR_ViewportProperty_MR_Matrix3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ViewportProperty_MR_Matrix3f_DestroyArray()`.
/// Use `MR_ViewportProperty_MR_Matrix3f_OffsetMutablePtr()` and `MR_ViewportProperty_MR_Matrix3f_OffsetPtr()` to access the array elements.
MRC_API MR_ViewportProperty_MR_Matrix3f *MR_ViewportProperty_MR_Matrix3f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ViewportProperty_MR_Matrix3f *MR_ViewportProperty_MR_Matrix3f_OffsetPtr(const MR_ViewportProperty_MR_Matrix3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ViewportProperty_MR_Matrix3f *MR_ViewportProperty_MR_Matrix3f_OffsetMutablePtr(MR_ViewportProperty_MR_Matrix3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ViewportProperty<MR::Matrix3f>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportProperty_MR_Matrix3f_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportProperty_MR_Matrix3f *MR_ViewportProperty_MR_Matrix3f_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ViewportProperty_MR_Matrix3f *_other);

/// Generated from a constructor of class `MR::ViewportProperty<MR::Matrix3f>`.
/// Parameter `def` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportProperty_MR_Matrix3f_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportProperty_MR_Matrix3f *MR_ViewportProperty_MR_Matrix3f_Construct(const MR_Matrix3f *def);

/// Destroys a heap-allocated instance of `MR_ViewportProperty_MR_Matrix3f`. Does nothing if the pointer is null.
MRC_API void MR_ViewportProperty_MR_Matrix3f_Destroy(const MR_ViewportProperty_MR_Matrix3f *_this);

/// Destroys a heap-allocated array of `MR_ViewportProperty_MR_Matrix3f`. Does nothing if the pointer is null.
MRC_API void MR_ViewportProperty_MR_Matrix3f_DestroyArray(const MR_ViewportProperty_MR_Matrix3f *_this);

/// Generated from a method of class `MR::ViewportProperty<MR::Matrix3f>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ViewportProperty_MR_Matrix3f *MR_ViewportProperty_MR_Matrix3f_AssignFromAnother(MR_ViewportProperty_MR_Matrix3f *_this, MR_PassBy _other_pass_by, MR_ViewportProperty_MR_Matrix3f *_other);

/// sets default property value
/// Generated from a method of class `MR::ViewportProperty<MR::Matrix3f>` named `set`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ViewportProperty_MR_Matrix3f_set_1(MR_ViewportProperty_MR_Matrix3f *_this, MR_Matrix3f def);

/// gets default property value
/// Generated from a method of class `MR::ViewportProperty<MR::Matrix3f>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Matrix3f *MR_ViewportProperty_MR_Matrix3f_get_const_0(const MR_ViewportProperty_MR_Matrix3f *_this);

/// Generated from a method of class `MR::ViewportProperty<MR::Matrix3f>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3f *MR_ViewportProperty_MR_Matrix3f_get(MR_ViewportProperty_MR_Matrix3f *_this);

/// returns direct access to value associated with given viewport (or default value if !id)
/// Generated from a method of class `MR::ViewportProperty<MR::Matrix3f>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3f *MR_ViewportProperty_MR_Matrix3f_index(MR_ViewportProperty_MR_Matrix3f *_this, MR_ViewportId id);

/// sets specific property value for given viewport (or default value if !id)
/// Generated from a method of class `MR::ViewportProperty<MR::Matrix3f>` named `set`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ViewportProperty_MR_Matrix3f_set_2(MR_ViewportProperty_MR_Matrix3f *_this, MR_Matrix3f v, MR_ViewportId id);

/// gets property value for given viewport: specific if available otherwise default one;
/// \param isDef receives true if this viewport does not have specific value and default one is returned
/// Generated from a method of class `MR::ViewportProperty<MR::Matrix3f>` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `isDef` defaults to a null pointer in C++.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Matrix3f *MR_ViewportProperty_MR_Matrix3f_get_const_2(const MR_ViewportProperty_MR_Matrix3f *_this, MR_ViewportId id, bool *isDef);

/// forgets specific property value for given viewport (or all viewports if !id);
/// returns true if any specific value was removed
/// Generated from a method of class `MR::ViewportProperty<MR::Matrix3f>` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ViewportProperty_MR_Matrix3f_reset_1(MR_ViewportProperty_MR_Matrix3f *_this, MR_ViewportId id);

/// forgets specific property value for all viewports;
/// returns true if any specific value was removed
/// Generated from a method of class `MR::ViewportProperty<MR::Matrix3f>` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ViewportProperty_MR_Matrix3f_reset_0(MR_ViewportProperty_MR_Matrix3f *_this);

#ifdef __cplusplus
} // extern "C"
#endif
