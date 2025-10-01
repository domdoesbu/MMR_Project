// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_EdgeBitSet MR_EdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_EdgeMap MR_EdgeMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Plane3f MR_Plane3f; // Defined in `#include <MRCMesh/MRPlane3.h>`.
typedef struct MR_Polyline3 MR_Polyline3; // Defined in `#include <MRCMesh/MRPolyline.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertMap MR_VertMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_function_void_from_MR_EdgeId_MR_EdgeId_float MR_std_function_void_from_MR_EdgeId_MR_EdgeId_float; // Defined in `#include <MRCMisc/std_function_void_from_MR_EdgeId_MR_EdgeId_float.h>`.
typedef struct MR_std_vector_MR_EdgeSegment MR_std_vector_MR_EdgeSegment; // Defined in `#include <MRCMisc/std_vector_MR_EdgeSegment.h>`.


/// Generated from class `MR::DividePolylineParameters`.
typedef struct MR_DividePolylineParameters MR_DividePolylineParameters;

/// This function splits edges intersected by the plane
/// \return edges located above the plane (in direction of normal to plane)
/// \param polyline Input polyline that will be cut by the plane
/// \param plane Input plane to cut polyline with
/// \param newPositiveEdges edges with origin on the plane and oriented to the positive direction (only adds bits to the existing ones)
/// \param onEdgeSplitCallback is invoked each time when an edge is split. Receives edge ID before split, edge ID after split, and weight of the origin vertex
/// Generated from function `MR::subdivideWithPlane`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `plane` can not be null. It is a single object.
/// Parameter `newPositiveEdges` defaults to a null pointer in C++.
/// Parameter `onEdgeSplitCallback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_subdivideWithPlane_4(MR_Polyline3 *polyline, const MR_Plane3f *plane, MR_EdgeBitSet *newPositiveEdges, MR_PassBy onEdgeSplitCallback_pass_by, MR_std_function_void_from_MR_EdgeId_MR_EdgeId_float *onEdgeSplitCallback);

/// onEdgeSplitCallback is invoked each time when an edge is split. Receives edge ID before split, edge ID after split, and weight of the origin vertex
/// Returns a pointer to a member variable of class `MR::DividePolylineParameters` named `onEdgeSplitCallback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_void_from_MR_EdgeId_MR_EdgeId_float *MR_DividePolylineParameters_Get_onEdgeSplitCallback(const MR_DividePolylineParameters *_this);

/// onEdgeSplitCallback is invoked each time when an edge is split. Receives edge ID before split, edge ID after split, and weight of the origin vertex
/// Modifies a member variable of class `MR::DividePolylineParameters` named `onEdgeSplitCallback`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DividePolylineParameters_Set_onEdgeSplitCallback(MR_DividePolylineParameters *_this, MR_PassBy value_pass_by, MR_std_function_void_from_MR_EdgeId_MR_EdgeId_float *value);

/// onEdgeSplitCallback is invoked each time when an edge is split. Receives edge ID before split, edge ID after split, and weight of the origin vertex
/// Returns a mutable pointer to a member variable of class `MR::DividePolylineParameters` named `onEdgeSplitCallback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_void_from_MR_EdgeId_MR_EdgeId_float *MR_DividePolylineParameters_GetMutable_onEdgeSplitCallback(MR_DividePolylineParameters *_this);

/// closeLineAfterCut if true, the ends of resulting polyline will be connected by new edges (can make a polyline closed, even if the original one was open)
/// if close, only cut edges (no new edges will be created)
/// Returns a pointer to a member variable of class `MR::DividePolylineParameters` named `closeLineAfterCut`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_DividePolylineParameters_Get_closeLineAfterCut(const MR_DividePolylineParameters *_this);

/// closeLineAfterCut if true, the ends of resulting polyline will be connected by new edges (can make a polyline closed, even if the original one was open)
/// if close, only cut edges (no new edges will be created)
/// Modifies a member variable of class `MR::DividePolylineParameters` named `closeLineAfterCut`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DividePolylineParameters_Set_closeLineAfterCut(MR_DividePolylineParameters *_this, bool value);

/// closeLineAfterCut if true, the ends of resulting polyline will be connected by new edges (can make a polyline closed, even if the original one was open)
/// if close, only cut edges (no new edges will be created)
/// Returns a mutable pointer to a member variable of class `MR::DividePolylineParameters` named `closeLineAfterCut`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_DividePolylineParameters_GetMutable_closeLineAfterCut(MR_DividePolylineParameters *_this);

/// map from input polyline verts to output
/// Returns a pointer to a member variable of class `MR::DividePolylineParameters` named `outVmap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertMap *const *MR_DividePolylineParameters_Get_outVmap(const MR_DividePolylineParameters *_this);

/// map from input polyline verts to output
/// Modifies a member variable of class `MR::DividePolylineParameters` named `outVmap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DividePolylineParameters_Set_outVmap(MR_DividePolylineParameters *_this, MR_VertMap *value);

/// map from input polyline verts to output
/// Returns a mutable pointer to a member variable of class `MR::DividePolylineParameters` named `outVmap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertMap **MR_DividePolylineParameters_GetMutable_outVmap(MR_DividePolylineParameters *_this);

/// map from input polyline edges to output
/// Returns a pointer to a member variable of class `MR::DividePolylineParameters` named `outEmap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeMap *const *MR_DividePolylineParameters_Get_outEmap(const MR_DividePolylineParameters *_this);

/// map from input polyline edges to output
/// Modifies a member variable of class `MR::DividePolylineParameters` named `outEmap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DividePolylineParameters_Set_outEmap(MR_DividePolylineParameters *_this, MR_EdgeMap *value);

/// map from input polyline edges to output
/// Returns a mutable pointer to a member variable of class `MR::DividePolylineParameters` named `outEmap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeMap **MR_DividePolylineParameters_GetMutable_outEmap(MR_DividePolylineParameters *_this);

/// otherPart Optional return, polyline composed from edges on the negative side of the plane
/// Returns a pointer to a member variable of class `MR::DividePolylineParameters` named `otherPart`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Polyline3 *const *MR_DividePolylineParameters_Get_otherPart(const MR_DividePolylineParameters *_this);

/// otherPart Optional return, polyline composed from edges on the negative side of the plane
/// Modifies a member variable of class `MR::DividePolylineParameters` named `otherPart`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DividePolylineParameters_Set_otherPart(MR_DividePolylineParameters *_this, MR_Polyline3 *value);

/// otherPart Optional return, polyline composed from edges on the negative side of the plane
/// Returns a mutable pointer to a member variable of class `MR::DividePolylineParameters` named `otherPart`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Polyline3 **MR_DividePolylineParameters_GetMutable_otherPart(MR_DividePolylineParameters *_this);

///  map from input polyline verts to other output
/// Returns a pointer to a member variable of class `MR::DividePolylineParameters` named `otherOutVmap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertMap *const *MR_DividePolylineParameters_Get_otherOutVmap(const MR_DividePolylineParameters *_this);

///  map from input polyline verts to other output
/// Modifies a member variable of class `MR::DividePolylineParameters` named `otherOutVmap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DividePolylineParameters_Set_otherOutVmap(MR_DividePolylineParameters *_this, MR_VertMap *value);

///  map from input polyline verts to other output
/// Returns a mutable pointer to a member variable of class `MR::DividePolylineParameters` named `otherOutVmap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertMap **MR_DividePolylineParameters_GetMutable_otherOutVmap(MR_DividePolylineParameters *_this);

/// map from input polyline edges to other output
/// Returns a pointer to a member variable of class `MR::DividePolylineParameters` named `otherOutEmap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeMap *const *MR_DividePolylineParameters_Get_otherOutEmap(const MR_DividePolylineParameters *_this);

/// map from input polyline edges to other output
/// Modifies a member variable of class `MR::DividePolylineParameters` named `otherOutEmap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DividePolylineParameters_Set_otherOutEmap(MR_DividePolylineParameters *_this, MR_EdgeMap *value);

/// map from input polyline edges to other output
/// Returns a mutable pointer to a member variable of class `MR::DividePolylineParameters` named `otherOutEmap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeMap **MR_DividePolylineParameters_GetMutable_otherOutEmap(MR_DividePolylineParameters *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DividePolylineParameters_Destroy()` to free it when you're done using it.
MRC_API MR_DividePolylineParameters *MR_DividePolylineParameters_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_DividePolylineParameters_DestroyArray()`.
/// Use `MR_DividePolylineParameters_OffsetMutablePtr()` and `MR_DividePolylineParameters_OffsetPtr()` to access the array elements.
MRC_API MR_DividePolylineParameters *MR_DividePolylineParameters_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::DividePolylineParameters` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DividePolylineParameters_Destroy()` to free it when you're done using it.
MRC_API MR_DividePolylineParameters *MR_DividePolylineParameters_ConstructFrom(MR_PassBy onEdgeSplitCallback_pass_by, MR_std_function_void_from_MR_EdgeId_MR_EdgeId_float *onEdgeSplitCallback, bool closeLineAfterCut, MR_VertMap *outVmap, MR_EdgeMap *outEmap, MR_Polyline3 *otherPart, MR_VertMap *otherOutVmap, MR_EdgeMap *otherOutEmap);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_DividePolylineParameters *MR_DividePolylineParameters_OffsetPtr(const MR_DividePolylineParameters *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_DividePolylineParameters *MR_DividePolylineParameters_OffsetMutablePtr(MR_DividePolylineParameters *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::DividePolylineParameters`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DividePolylineParameters_Destroy()` to free it when you're done using it.
MRC_API MR_DividePolylineParameters *MR_DividePolylineParameters_ConstructFromAnother(MR_PassBy _other_pass_by, MR_DividePolylineParameters *_other);

/// Destroys a heap-allocated instance of `MR_DividePolylineParameters`. Does nothing if the pointer is null.
MRC_API void MR_DividePolylineParameters_Destroy(const MR_DividePolylineParameters *_this);

/// Destroys a heap-allocated array of `MR_DividePolylineParameters`. Does nothing if the pointer is null.
MRC_API void MR_DividePolylineParameters_DestroyArray(const MR_DividePolylineParameters *_this);

/// Generated from a method of class `MR::DividePolylineParameters` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DividePolylineParameters *MR_DividePolylineParameters_AssignFromAnother(MR_DividePolylineParameters *_this, MR_PassBy _other_pass_by, MR_DividePolylineParameters *_other);

/// This function divides polyline with a plane, leaving only part of polyline that lies in positive direction of normal
/// \param polyline Input polyline that will be cut by the plane
/// \param plane Input plane to cut polyline with
/// \param params Parameters of the function, containing optional output
/// Generated from function `MR::trimWithPlane`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `plane` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_trimWithPlane_MR_Polyline3(MR_Polyline3 *polyline, const MR_Plane3f *plane, const MR_DividePolylineParameters *params);

/// This function cuts polyline with a plane
/// \details plane cuts an edge if one end of the edge is below the plane and the other is not
/// \return Edge segments that are closer to the plane than \param eps. Segments are oriented according by plane normal ( segment.a <= segment.b)
/// \param polyline Input polyline that will be cut by the plane
/// \param plane Input plane to cut polyline with
/// \param eps Maximal distance from the plane
/// \param positiveEdges Edges in a positive half-space relative to the plane or on the plane itself (only adds bits to the existing ones)
/// Generated from function `MR::extractSectionsFromPolyline`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `plane` can not be null. It is a single object.
/// Parameter `positiveEdges` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeSegment *MR_extractSectionsFromPolyline(const MR_Polyline3 *polyline, const MR_Plane3f *plane, float eps, MR_UndirectedEdgeBitSet *positiveEdges);

#ifdef __cplusplus
} // extern "C"
#endif
