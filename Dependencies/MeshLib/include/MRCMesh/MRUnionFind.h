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

typedef struct MR_FaceMap MR_FaceMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_UndirectedEdgeMap MR_UndirectedEdgeMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertMap MR_VertMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_pair_MR_FaceId_bool MR_std_pair_MR_FaceId_bool; // Defined in `#include <MRCMisc/std_pair_MR_FaceId_bool.h>`.
typedef struct MR_std_pair_MR_UndirectedEdgeId_bool MR_std_pair_MR_UndirectedEdgeId_bool; // Defined in `#include <MRCMisc/std_pair_MR_UndirectedEdgeId_bool.h>`.
typedef struct MR_std_pair_MR_VertId_bool MR_std_pair_MR_VertId_bool; // Defined in `#include <MRCMisc/std_pair_MR_VertId_bool.h>`.


/** 
* \brief Union-find data structure for representing disjoin sets of elements with few very quick operations:
* 1) union of two sets in one,
* 2) checking whether two elements pertain to the same set,
* 3) finding representative element (root) of each set by any set's element
* \tparam I is the identifier of a set's element, e.g. FaceId
*
*/
/// Generated from class `MR::UnionFind<MR::FaceId>`.
typedef struct MR_UnionFind_MR_FaceId MR_UnionFind_MR_FaceId;

/** 
* \brief Union-find data structure for representing disjoin sets of elements with few very quick operations:
* 1) union of two sets in one,
* 2) checking whether two elements pertain to the same set,
* 3) finding representative element (root) of each set by any set's element
* \tparam I is the identifier of a set's element, e.g. FaceId
*
*/
/// Generated from class `MR::UnionFind<MR::VertId>`.
typedef struct MR_UnionFind_MR_VertId MR_UnionFind_MR_VertId;

/** 
* \brief Union-find data structure for representing disjoin sets of elements with few very quick operations:
* 1) union of two sets in one,
* 2) checking whether two elements pertain to the same set,
* 3) finding representative element (root) of each set by any set's element
* \tparam I is the identifier of a set's element, e.g. FaceId
*
*/
/// Generated from class `MR::UnionFind<MR::UndirectedEdgeId>`.
typedef struct MR_UnionFind_MR_UndirectedEdgeId MR_UnionFind_MR_UndirectedEdgeId;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UnionFind_MR_FaceId_Destroy()` to free it when you're done using it.
MRC_API MR_UnionFind_MR_FaceId *MR_UnionFind_MR_FaceId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_UnionFind_MR_FaceId_DestroyArray()`.
/// Use `MR_UnionFind_MR_FaceId_OffsetMutablePtr()` and `MR_UnionFind_MR_FaceId_OffsetPtr()` to access the array elements.
MRC_API MR_UnionFind_MR_FaceId *MR_UnionFind_MR_FaceId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_UnionFind_MR_FaceId *MR_UnionFind_MR_FaceId_OffsetPtr(const MR_UnionFind_MR_FaceId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_UnionFind_MR_FaceId *MR_UnionFind_MR_FaceId_OffsetMutablePtr(MR_UnionFind_MR_FaceId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::UnionFind<MR::FaceId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UnionFind_MR_FaceId_Destroy()` to free it when you're done using it.
MRC_API MR_UnionFind_MR_FaceId *MR_UnionFind_MR_FaceId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_UnionFind_MR_FaceId *_other);

/// creates union-find with given number of elements, each element is the only one in its disjoint set
/// Generated from a constructor of class `MR::UnionFind<MR::FaceId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UnionFind_MR_FaceId_Destroy()` to free it when you're done using it.
MRC_API MR_UnionFind_MR_FaceId *MR_UnionFind_MR_FaceId_Construct(MR_uint64_t size);

/// Destroys a heap-allocated instance of `MR_UnionFind_MR_FaceId`. Does nothing if the pointer is null.
MRC_API void MR_UnionFind_MR_FaceId_Destroy(const MR_UnionFind_MR_FaceId *_this);

/// Destroys a heap-allocated array of `MR_UnionFind_MR_FaceId`. Does nothing if the pointer is null.
MRC_API void MR_UnionFind_MR_FaceId_DestroyArray(const MR_UnionFind_MR_FaceId *_this);

/// Generated from a method of class `MR::UnionFind<MR::FaceId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UnionFind_MR_FaceId *MR_UnionFind_MR_FaceId_AssignFromAnother(MR_UnionFind_MR_FaceId *_this, MR_PassBy _other_pass_by, MR_UnionFind_MR_FaceId *_other);

/// returns the number of elements in union-find
/// Generated from a method of class `MR::UnionFind<MR::FaceId>` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_UnionFind_MR_FaceId_size(const MR_UnionFind_MR_FaceId *_this);

/// resets union-find to represent given number of elements, each element is the only one in its disjoint set
/// Generated from a method of class `MR::UnionFind<MR::FaceId>` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UnionFind_MR_FaceId_reset(MR_UnionFind_MR_FaceId *_this, MR_uint64_t size);

/// unite two elements,
/// \return first: new common root, second: true = union was done, false = first and second were already united
/// Generated from a method of class `MR::UnionFind<MR::FaceId>` named `unite`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_MR_FaceId_bool_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_MR_FaceId_bool *MR_UnionFind_MR_FaceId_unite(MR_UnionFind_MR_FaceId *_this, MR_FaceId first, MR_FaceId second);

/// returns true if given two elements are from one set
/// Generated from a method of class `MR::UnionFind<MR::FaceId>` named `united`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_UnionFind_MR_FaceId_united(MR_UnionFind_MR_FaceId *_this, MR_FaceId first, MR_FaceId second);

/// returns true if given element is the root of some set
/// Generated from a method of class `MR::UnionFind<MR::FaceId>` named `isRoot`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_UnionFind_MR_FaceId_isRoot(const MR_UnionFind_MR_FaceId *_this, MR_FaceId a);

/// return parent element of this element, which is equal to given element only for set's root
/// Generated from a method of class `MR::UnionFind<MR::FaceId>` named `parent`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_FaceId MR_UnionFind_MR_FaceId_parent(const MR_UnionFind_MR_FaceId *_this, MR_FaceId a);

/// finds the root of the set containing given element with optimizing data structure updates
/// Generated from a method of class `MR::UnionFind<MR::FaceId>` named `find`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_FaceId MR_UnionFind_MR_FaceId_find(MR_UnionFind_MR_FaceId *_this, MR_FaceId a);

/// finds the root of the set containing given element with optimizing data structure in the range [begin, end)
/// Generated from a method of class `MR::UnionFind<MR::FaceId>` named `findUpdateRange`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_FaceId MR_UnionFind_MR_FaceId_findUpdateRange(MR_UnionFind_MR_FaceId *_this, MR_FaceId a, MR_FaceId begin, MR_FaceId end);

/// sets the root of corresponding set as the parent of each element, then returns the vector
/// Generated from a method of class `MR::UnionFind<MR::FaceId>` named `roots`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceMap *MR_UnionFind_MR_FaceId_roots(MR_UnionFind_MR_FaceId *_this);

/// gets the parents of all elements as is
/// Generated from a method of class `MR::UnionFind<MR::FaceId>` named `parents`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceMap *MR_UnionFind_MR_FaceId_parents(const MR_UnionFind_MR_FaceId *_this);

/// returns the number of elements in the set containing given element
/// Generated from a method of class `MR::UnionFind<MR::FaceId>` named `sizeOfComp`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_UnionFind_MR_FaceId_sizeOfComp(MR_UnionFind_MR_FaceId *_this, MR_FaceId a);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UnionFind_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_UnionFind_MR_VertId *MR_UnionFind_MR_VertId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_UnionFind_MR_VertId_DestroyArray()`.
/// Use `MR_UnionFind_MR_VertId_OffsetMutablePtr()` and `MR_UnionFind_MR_VertId_OffsetPtr()` to access the array elements.
MRC_API MR_UnionFind_MR_VertId *MR_UnionFind_MR_VertId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_UnionFind_MR_VertId *MR_UnionFind_MR_VertId_OffsetPtr(const MR_UnionFind_MR_VertId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_UnionFind_MR_VertId *MR_UnionFind_MR_VertId_OffsetMutablePtr(MR_UnionFind_MR_VertId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::UnionFind<MR::VertId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UnionFind_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_UnionFind_MR_VertId *MR_UnionFind_MR_VertId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_UnionFind_MR_VertId *_other);

/// creates union-find with given number of elements, each element is the only one in its disjoint set
/// Generated from a constructor of class `MR::UnionFind<MR::VertId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UnionFind_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_UnionFind_MR_VertId *MR_UnionFind_MR_VertId_Construct(MR_uint64_t size);

/// Destroys a heap-allocated instance of `MR_UnionFind_MR_VertId`. Does nothing if the pointer is null.
MRC_API void MR_UnionFind_MR_VertId_Destroy(const MR_UnionFind_MR_VertId *_this);

/// Destroys a heap-allocated array of `MR_UnionFind_MR_VertId`. Does nothing if the pointer is null.
MRC_API void MR_UnionFind_MR_VertId_DestroyArray(const MR_UnionFind_MR_VertId *_this);

/// Generated from a method of class `MR::UnionFind<MR::VertId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UnionFind_MR_VertId *MR_UnionFind_MR_VertId_AssignFromAnother(MR_UnionFind_MR_VertId *_this, MR_PassBy _other_pass_by, MR_UnionFind_MR_VertId *_other);

/// returns the number of elements in union-find
/// Generated from a method of class `MR::UnionFind<MR::VertId>` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_UnionFind_MR_VertId_size(const MR_UnionFind_MR_VertId *_this);

/// resets union-find to represent given number of elements, each element is the only one in its disjoint set
/// Generated from a method of class `MR::UnionFind<MR::VertId>` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UnionFind_MR_VertId_reset(MR_UnionFind_MR_VertId *_this, MR_uint64_t size);

/// unite two elements,
/// \return first: new common root, second: true = union was done, false = first and second were already united
/// Generated from a method of class `MR::UnionFind<MR::VertId>` named `unite`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_MR_VertId_bool_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_MR_VertId_bool *MR_UnionFind_MR_VertId_unite(MR_UnionFind_MR_VertId *_this, MR_VertId first, MR_VertId second);

/// returns true if given two elements are from one set
/// Generated from a method of class `MR::UnionFind<MR::VertId>` named `united`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_UnionFind_MR_VertId_united(MR_UnionFind_MR_VertId *_this, MR_VertId first, MR_VertId second);

/// returns true if given element is the root of some set
/// Generated from a method of class `MR::UnionFind<MR::VertId>` named `isRoot`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_UnionFind_MR_VertId_isRoot(const MR_UnionFind_MR_VertId *_this, MR_VertId a);

/// return parent element of this element, which is equal to given element only for set's root
/// Generated from a method of class `MR::UnionFind<MR::VertId>` named `parent`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertId MR_UnionFind_MR_VertId_parent(const MR_UnionFind_MR_VertId *_this, MR_VertId a);

/// finds the root of the set containing given element with optimizing data structure updates
/// Generated from a method of class `MR::UnionFind<MR::VertId>` named `find`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertId MR_UnionFind_MR_VertId_find(MR_UnionFind_MR_VertId *_this, MR_VertId a);

/// finds the root of the set containing given element with optimizing data structure in the range [begin, end)
/// Generated from a method of class `MR::UnionFind<MR::VertId>` named `findUpdateRange`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertId MR_UnionFind_MR_VertId_findUpdateRange(MR_UnionFind_MR_VertId *_this, MR_VertId a, MR_VertId begin, MR_VertId end);

/// sets the root of corresponding set as the parent of each element, then returns the vector
/// Generated from a method of class `MR::UnionFind<MR::VertId>` named `roots`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertMap *MR_UnionFind_MR_VertId_roots(MR_UnionFind_MR_VertId *_this);

/// gets the parents of all elements as is
/// Generated from a method of class `MR::UnionFind<MR::VertId>` named `parents`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertMap *MR_UnionFind_MR_VertId_parents(const MR_UnionFind_MR_VertId *_this);

/// returns the number of elements in the set containing given element
/// Generated from a method of class `MR::UnionFind<MR::VertId>` named `sizeOfComp`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_UnionFind_MR_VertId_sizeOfComp(MR_UnionFind_MR_VertId *_this, MR_VertId a);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UnionFind_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_UnionFind_MR_UndirectedEdgeId *MR_UnionFind_MR_UndirectedEdgeId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_UnionFind_MR_UndirectedEdgeId_DestroyArray()`.
/// Use `MR_UnionFind_MR_UndirectedEdgeId_OffsetMutablePtr()` and `MR_UnionFind_MR_UndirectedEdgeId_OffsetPtr()` to access the array elements.
MRC_API MR_UnionFind_MR_UndirectedEdgeId *MR_UnionFind_MR_UndirectedEdgeId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_UnionFind_MR_UndirectedEdgeId *MR_UnionFind_MR_UndirectedEdgeId_OffsetPtr(const MR_UnionFind_MR_UndirectedEdgeId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_UnionFind_MR_UndirectedEdgeId *MR_UnionFind_MR_UndirectedEdgeId_OffsetMutablePtr(MR_UnionFind_MR_UndirectedEdgeId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::UnionFind<MR::UndirectedEdgeId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UnionFind_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_UnionFind_MR_UndirectedEdgeId *MR_UnionFind_MR_UndirectedEdgeId_ConstructFromAnother(MR_PassBy _other_pass_by, MR_UnionFind_MR_UndirectedEdgeId *_other);

/// creates union-find with given number of elements, each element is the only one in its disjoint set
/// Generated from a constructor of class `MR::UnionFind<MR::UndirectedEdgeId>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UnionFind_MR_UndirectedEdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_UnionFind_MR_UndirectedEdgeId *MR_UnionFind_MR_UndirectedEdgeId_Construct(MR_uint64_t size);

/// Destroys a heap-allocated instance of `MR_UnionFind_MR_UndirectedEdgeId`. Does nothing if the pointer is null.
MRC_API void MR_UnionFind_MR_UndirectedEdgeId_Destroy(const MR_UnionFind_MR_UndirectedEdgeId *_this);

/// Destroys a heap-allocated array of `MR_UnionFind_MR_UndirectedEdgeId`. Does nothing if the pointer is null.
MRC_API void MR_UnionFind_MR_UndirectedEdgeId_DestroyArray(const MR_UnionFind_MR_UndirectedEdgeId *_this);

/// Generated from a method of class `MR::UnionFind<MR::UndirectedEdgeId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UnionFind_MR_UndirectedEdgeId *MR_UnionFind_MR_UndirectedEdgeId_AssignFromAnother(MR_UnionFind_MR_UndirectedEdgeId *_this, MR_PassBy _other_pass_by, MR_UnionFind_MR_UndirectedEdgeId *_other);

/// returns the number of elements in union-find
/// Generated from a method of class `MR::UnionFind<MR::UndirectedEdgeId>` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_UnionFind_MR_UndirectedEdgeId_size(const MR_UnionFind_MR_UndirectedEdgeId *_this);

/// resets union-find to represent given number of elements, each element is the only one in its disjoint set
/// Generated from a method of class `MR::UnionFind<MR::UndirectedEdgeId>` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UnionFind_MR_UndirectedEdgeId_reset(MR_UnionFind_MR_UndirectedEdgeId *_this, MR_uint64_t size);

/// unite two elements,
/// \return first: new common root, second: true = union was done, false = first and second were already united
/// Generated from a method of class `MR::UnionFind<MR::UndirectedEdgeId>` named `unite`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_MR_UndirectedEdgeId_bool_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_MR_UndirectedEdgeId_bool *MR_UnionFind_MR_UndirectedEdgeId_unite(MR_UnionFind_MR_UndirectedEdgeId *_this, MR_UndirectedEdgeId first, MR_UndirectedEdgeId second);

/// returns true if given two elements are from one set
/// Generated from a method of class `MR::UnionFind<MR::UndirectedEdgeId>` named `united`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_UnionFind_MR_UndirectedEdgeId_united(MR_UnionFind_MR_UndirectedEdgeId *_this, MR_UndirectedEdgeId first, MR_UndirectedEdgeId second);

/// returns true if given element is the root of some set
/// Generated from a method of class `MR::UnionFind<MR::UndirectedEdgeId>` named `isRoot`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_UnionFind_MR_UndirectedEdgeId_isRoot(const MR_UnionFind_MR_UndirectedEdgeId *_this, MR_UndirectedEdgeId a);

/// return parent element of this element, which is equal to given element only for set's root
/// Generated from a method of class `MR::UnionFind<MR::UndirectedEdgeId>` named `parent`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_UnionFind_MR_UndirectedEdgeId_parent(const MR_UnionFind_MR_UndirectedEdgeId *_this, MR_UndirectedEdgeId a);

/// finds the root of the set containing given element with optimizing data structure updates
/// Generated from a method of class `MR::UnionFind<MR::UndirectedEdgeId>` named `find`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_UnionFind_MR_UndirectedEdgeId_find(MR_UnionFind_MR_UndirectedEdgeId *_this, MR_UndirectedEdgeId a);

/// finds the root of the set containing given element with optimizing data structure in the range [begin, end)
/// Generated from a method of class `MR::UnionFind<MR::UndirectedEdgeId>` named `findUpdateRange`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_UnionFind_MR_UndirectedEdgeId_findUpdateRange(MR_UnionFind_MR_UndirectedEdgeId *_this, MR_UndirectedEdgeId a, MR_UndirectedEdgeId begin, MR_UndirectedEdgeId end);

/// sets the root of corresponding set as the parent of each element, then returns the vector
/// Generated from a method of class `MR::UnionFind<MR::UndirectedEdgeId>` named `roots`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeMap *MR_UnionFind_MR_UndirectedEdgeId_roots(MR_UnionFind_MR_UndirectedEdgeId *_this);

/// gets the parents of all elements as is
/// Generated from a method of class `MR::UnionFind<MR::UndirectedEdgeId>` named `parents`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeMap *MR_UnionFind_MR_UndirectedEdgeId_parents(const MR_UnionFind_MR_UndirectedEdgeId *_this);

/// returns the number of elements in the set containing given element
/// Generated from a method of class `MR::UnionFind<MR::UndirectedEdgeId>` named `sizeOfComp`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_UnionFind_MR_UndirectedEdgeId_sizeOfComp(MR_UnionFind_MR_UndirectedEdgeId *_this, MR_UndirectedEdgeId a);

#ifdef __cplusplus
} // extern "C"
#endif
