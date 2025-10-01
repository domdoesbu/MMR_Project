// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector4.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_NoInit MR_NoInit; // Defined in `#include <MRCMesh/MRMeshFwd.h>`.


/// Generated from class `MR::Color`.
typedef struct MR_Color
{
    uint8_t r;
    uint8_t g;
    uint8_t b;
    uint8_t a;
} MR_Color;

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Color MR_Color_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Color_DestroyArray()`.
/// Use `MR_Color_OffsetMutablePtr()` and `MR_Color_OffsetPtr()` to access the array elements.
MRC_API MR_Color *MR_Color_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Color`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Color MR_Color_Construct_1(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::Color`.
MRC_API MR_Color MR_Color_Construct_4_int32_t(int32_t r, int32_t g, int32_t b, int32_t a);

/// Generated from a constructor of class `MR::Color`.
MRC_API MR_Color MR_Color_Construct_3_int32_t(int32_t r, int32_t g, int32_t b);

/// Generated from a constructor of class `MR::Color`.
MRC_API MR_Color MR_Color_Construct_4_float(float r, float g, float b, float a);

/// Generated from a constructor of class `MR::Color`.
MRC_API MR_Color MR_Color_Construct_3_float(float r, float g, float b);

/// Generated from a constructor of class `MR::Color`.
/// Parameter `vec` can not be null. It is a single object.
MRC_API MR_Color MR_Color_Construct_int32_t(const MR_Vector4i *vec);

/// Generated from a constructor of class `MR::Color`.
/// Parameter `vec` can not be null. It is a single object.
MRC_API MR_Color MR_Color_Construct_float(const MR_Vector4f *vec);

/// Generated from a conversion operator of class `MR::Color` to type `MR::Vector4i`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector4i MR_Color_ConvertTo_MR_Vector4i(const MR_Color *_this);

/// Generated from a conversion operator of class `MR::Color` to type `MR::Vector4f`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector4f MR_Color_ConvertTo_MR_Vector4f(const MR_Color *_this);

/// Generated from a method of class `MR::Color` named `getUInt32`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API uint32_t MR_Color_getUInt32(const MR_Color *_this);

/// Generated from a method of class `MR::Color` named `white`.
MRC_API MR_Color MR_Color_white(void);

/// Generated from a method of class `MR::Color` named `black`.
MRC_API MR_Color MR_Color_black(void);

/// Generated from a method of class `MR::Color` named `gray`.
MRC_API MR_Color MR_Color_gray(void);

/// Generated from a method of class `MR::Color` named `red`.
MRC_API MR_Color MR_Color_red(void);

/// Generated from a method of class `MR::Color` named `green`.
MRC_API MR_Color MR_Color_green(void);

/// Generated from a method of class `MR::Color` named `blue`.
MRC_API MR_Color MR_Color_blue(void);

/// Generated from a method of class `MR::Color` named `yellow`.
MRC_API MR_Color MR_Color_yellow(void);

/// Generated from a method of class `MR::Color` named `brown`.
MRC_API MR_Color MR_Color_brown(void);

/// Generated from a method of class `MR::Color` named `purple`.
MRC_API MR_Color MR_Color_purple(void);

/// Generated from a method of class `MR::Color` named `transparent`.
MRC_API MR_Color MR_Color_transparent(void);

/// Generated from a method of class `MR::Color` named `valToUint8<int32_t>`.
MRC_API uint8_t MR_Color_valToUint8_int32_t(int32_t val);

/// Generated from a method of class `MR::Color` named `valToUint8<float>`.
MRC_API uint8_t MR_Color_valToUint8_float(float val);

/// Generated from a method of class `MR::Color` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const uint8_t *MR_Color_index_const(const MR_Color *_this, int32_t e);

/// Generated from a method of class `MR::Color` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API uint8_t *MR_Color_index(MR_Color *_this, int32_t e);

/// Generated from a method of class `MR::Color` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Color *MR_Color_add_assign(MR_Color *_this, const MR_Color *other);

/// Generated from a method of class `MR::Color` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Color *MR_Color_sub_assign(MR_Color *_this, const MR_Color *other);

/// Generated from a method of class `MR::Color` named `operator*=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Color *MR_Color_mul_assign(MR_Color *_this, float m);

/// Generated from a method of class `MR::Color` named `operator/=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Color *MR_Color_div_assign(MR_Color *_this, float m);

/// Generated from a method of class `MR::Color` named `scaledAlpha`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Color MR_Color_scaledAlpha(const MR_Color *_this, float m);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Color(const MR_Color *a, const MR_Color *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Color(const MR_Color *a, const MR_Color *b);

/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Color MR_add_MR_Color(const MR_Color *a, const MR_Color *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Color MR_sub_MR_Color(const MR_Color *a, const MR_Color *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Color MR_mul_float_MR_Color(float a, const MR_Color *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Color MR_mul_MR_Color_float(const MR_Color *b, float a);

/// Generated from function `MR::operator/`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Color MR_div_MR_Color_float(const MR_Color *b, float a);

/// Blend two colors together
/// \note This operation is not commutative
/// Generated from function `MR::blend`.
/// Parameter `front` can not be null. It is a single object.
/// Parameter `back` can not be null. It is a single object.
MRC_API MR_Color MR_blend(const MR_Color *front, const MR_Color *back);

#ifdef __cplusplus
} // extern "C"
#endif
