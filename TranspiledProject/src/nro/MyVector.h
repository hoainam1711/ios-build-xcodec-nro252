#ifndef HEADER_nro_MyVector
#define HEADER_nro_MyVector

#include "Clearwing.h"
#include "java/util/Vector.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_MyVector {
	java_util_Vector parent;
} nro_MyVector;

extern Class class_nro_MyVector;


#define VTABLE_nro_MyVector_hashCode_R_int 0
typedef jint (*func_nro_MyVector_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_MyVector_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_MyVector_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MyVector_clone_R_java_lang_Object 2
typedef jobject (*func_nro_MyVector_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_MyVector_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_MyVector_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_MyVector_toString_R_java_lang_String 4
typedef jobject (*func_nro_MyVector_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_MyVector_finalize 5
typedef void (*func_nro_MyVector_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_MyVector_notify 6
typedef void (*func_nro_MyVector_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_MyVector_notifyAll 7
typedef void (*func_nro_MyVector_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_MyVector_wait 8
typedef void (*func_nro_MyVector_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_MyVector_wait_long 9
typedef void (*func_nro_MyVector_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_MyVector_wait_long_int 10
typedef void (*func_nro_MyVector_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_MyVector_iterator_R_java_util_Iterator 11
typedef jobject (*func_nro_MyVector_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_nro_MyVector_forEach_java_util_function_Consumer 12
typedef void (*func_nro_MyVector_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MyVector_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_nro_MyVector_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_nro_MyVector_add_java_lang_Object_R_boolean 14
typedef jbool (*func_nro_MyVector_add_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MyVector_addAll_java_util_Collection_R_boolean 15
typedef jbool (*func_nro_MyVector_addAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MyVector_clear 16
typedef void (*func_nro_MyVector_clear)(jcontext ctx, jobject self);
#define VTABLE_nro_MyVector_contains_java_lang_Object_R_boolean 17
typedef jbool (*func_nro_MyVector_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MyVector_containsAll_java_util_Collection_R_boolean 18
typedef jbool (*func_nro_MyVector_containsAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MyVector_isEmpty_R_boolean 19
typedef jbool (*func_nro_MyVector_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_MyVector_remove_java_lang_Object_R_boolean 20
typedef jbool (*func_nro_MyVector_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MyVector_removeAll_java_util_Collection_R_boolean 21
typedef jbool (*func_nro_MyVector_removeAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MyVector_retainAll_java_util_Collection_R_boolean 22
typedef jbool (*func_nro_MyVector_retainAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MyVector_size_R_int 23
typedef jint (*func_nro_MyVector_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_MyVector_toArray_R_Array1_java_lang_Object 24
typedef jobject (*func_nro_MyVector_toArray_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_MyVector_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object 25
typedef jobject (*func_nro_MyVector_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MyVector_add_int_java_lang_Object 26
typedef void (*func_nro_MyVector_add_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_nro_MyVector_addAll_int_java_util_Collection_R_boolean 27
typedef jbool (*func_nro_MyVector_addAll_int_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_nro_MyVector_get_int_R_java_lang_Object 28
typedef jobject (*func_nro_MyVector_get_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_MyVector_indexOf_java_lang_Object_R_int 29
typedef jint (*func_nro_MyVector_indexOf_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MyVector_lastIndexOf_java_lang_Object_R_int 30
typedef jint (*func_nro_MyVector_lastIndexOf_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MyVector_listIterator_R_java_util_ListIterator 31
typedef jobject (*func_nro_MyVector_listIterator_R_java_util_ListIterator)(jcontext ctx, jobject self);
#define VTABLE_nro_MyVector_listIterator_int_R_java_util_ListIterator 32
typedef jobject (*func_nro_MyVector_listIterator_int_R_java_util_ListIterator)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_MyVector_sort_java_util_Comparator 33
typedef void (*func_nro_MyVector_sort_java_util_Comparator)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MyVector_remove_int_R_java_lang_Object 34
typedef jobject (*func_nro_MyVector_remove_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_MyVector_set_int_java_lang_Object_R_java_lang_Object 35
typedef jobject (*func_nro_MyVector_set_int_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_nro_MyVector_subList_int_int_R_java_util_List 36
typedef jobject (*func_nro_MyVector_subList_int_int_R_java_util_List)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_MyVector_removeRange_int_int 37
typedef void (*func_nro_MyVector_removeRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_MyVector_newElementArray_int_R_Array1_java_lang_Object 38
typedef jobject (*func_nro_MyVector_newElementArray_int_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_MyVector_addElement_java_lang_Object 39
typedef void (*func_nro_MyVector_addElement_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MyVector_capacity_R_int 40
typedef jint (*func_nro_MyVector_capacity_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_MyVector_copyInto_Array1_java_lang_Object 41
typedef void (*func_nro_MyVector_copyInto_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object 42
typedef jobject (*func_nro_MyVector_elementAt_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_MyVector_elements_R_java_util_Enumeration 43
typedef jobject (*func_nro_MyVector_elements_R_java_util_Enumeration)(jcontext ctx, jobject self);
#define VTABLE_nro_MyVector_ensureCapacity_int 44
typedef void (*func_nro_MyVector_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_MyVector_firstElement_R_java_lang_Object 45
typedef jobject (*func_nro_MyVector_firstElement_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_MyVector_grow_int 46
typedef void (*func_nro_MyVector_grow_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_MyVector_growByOne 47
typedef void (*func_nro_MyVector_growByOne)(jcontext ctx, jobject self);
#define VTABLE_nro_MyVector_growBy_int 48
typedef void (*func_nro_MyVector_growBy_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_MyVector_indexOf_java_lang_Object_int_R_int 49
typedef jint (*func_nro_MyVector_indexOf_java_lang_Object_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_nro_MyVector_insertElementAt_java_lang_Object_int 50
typedef void (*func_nro_MyVector_insertElementAt_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_nro_MyVector_lastElement_R_java_lang_Object 51
typedef jobject (*func_nro_MyVector_lastElement_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_MyVector_lastIndexOf_java_lang_Object_int_R_int 52
typedef jint (*func_nro_MyVector_lastIndexOf_java_lang_Object_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_nro_MyVector_removeAllElements 53
typedef void (*func_nro_MyVector_removeAllElements)(jcontext ctx, jobject self);
#define VTABLE_nro_MyVector_removeElement_java_lang_Object_R_boolean 54
typedef jbool (*func_nro_MyVector_removeElement_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MyVector_removeElementAt_int 55
typedef void (*func_nro_MyVector_removeElementAt_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_MyVector_setElementAt_java_lang_Object_int 56
typedef void (*func_nro_MyVector_setElementAt_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_nro_MyVector_setSize_int 57
typedef void (*func_nro_MyVector_setSize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_MyVector_trimToSize 58
typedef void (*func_nro_MyVector_trimToSize)(jcontext ctx, jobject self);

void mark_nro_MyVector(jobject object, jint mark, jint depth);
void clinit_nro_MyVector(jcontext ctx);
void init_nro_MyVector_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_nro_MyVector(jcontext ctx, jobject self);
void M_nro_MyVector_removeAllElements(jcontext ctx, jobject self);
jbool M_nro_MyVector_removeElement_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_nro_MyVector_removeElementAt_int(jcontext ctx, jobject self, jint param0);
void M_nro_MyVector_addElement_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_nro_MyVector_insertElementAt_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
