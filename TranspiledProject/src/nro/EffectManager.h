#ifndef HEADER_nro_EffectManager
#define HEADER_nro_EffectManager

#include "Clearwing.h"
#include "nro/MyVector.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_EffectManager {
	nro_MyVector parent;
} nro_EffectManager;

extern Class class_nro_EffectManager;

extern jobject SF_nro_EffectManager_lowEffects;
extern jobject SF_nro_EffectManager_midEffects;
extern jobject SF_nro_EffectManager_mid_2Effects;
extern jobject SF_nro_EffectManager_high_2Effects;

#define VTABLE_nro_EffectManager_hashCode_R_int 0
typedef jint (*func_nro_EffectManager_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectManager_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_EffectManager_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectManager_clone_R_java_lang_Object 2
typedef jobject (*func_nro_EffectManager_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectManager_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_EffectManager_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectManager_toString_R_java_lang_String 4
typedef jobject (*func_nro_EffectManager_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectManager_finalize 5
typedef void (*func_nro_EffectManager_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectManager_notify 6
typedef void (*func_nro_EffectManager_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectManager_notifyAll 7
typedef void (*func_nro_EffectManager_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectManager_wait 8
typedef void (*func_nro_EffectManager_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectManager_wait_long 9
typedef void (*func_nro_EffectManager_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_EffectManager_wait_long_int 10
typedef void (*func_nro_EffectManager_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_EffectManager_iterator_R_java_util_Iterator 11
typedef jobject (*func_nro_EffectManager_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectManager_forEach_java_util_function_Consumer 12
typedef void (*func_nro_EffectManager_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectManager_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_nro_EffectManager_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectManager_add_java_lang_Object_R_boolean 14
typedef jbool (*func_nro_EffectManager_add_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectManager_addAll_java_util_Collection_R_boolean 15
typedef jbool (*func_nro_EffectManager_addAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectManager_clear 16
typedef void (*func_nro_EffectManager_clear)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectManager_contains_java_lang_Object_R_boolean 17
typedef jbool (*func_nro_EffectManager_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectManager_containsAll_java_util_Collection_R_boolean 18
typedef jbool (*func_nro_EffectManager_containsAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectManager_isEmpty_R_boolean 19
typedef jbool (*func_nro_EffectManager_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectManager_remove_java_lang_Object_R_boolean 20
typedef jbool (*func_nro_EffectManager_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectManager_removeAll_java_util_Collection_R_boolean 21
typedef jbool (*func_nro_EffectManager_removeAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectManager_retainAll_java_util_Collection_R_boolean 22
typedef jbool (*func_nro_EffectManager_retainAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectManager_size_R_int 23
typedef jint (*func_nro_EffectManager_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectManager_toArray_R_Array1_java_lang_Object 24
typedef jobject (*func_nro_EffectManager_toArray_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectManager_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object 25
typedef jobject (*func_nro_EffectManager_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectManager_add_int_java_lang_Object 26
typedef void (*func_nro_EffectManager_add_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_nro_EffectManager_addAll_int_java_util_Collection_R_boolean 27
typedef jbool (*func_nro_EffectManager_addAll_int_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_nro_EffectManager_get_int_R_java_lang_Object 28
typedef jobject (*func_nro_EffectManager_get_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_EffectManager_indexOf_java_lang_Object_R_int 29
typedef jint (*func_nro_EffectManager_indexOf_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectManager_lastIndexOf_java_lang_Object_R_int 30
typedef jint (*func_nro_EffectManager_lastIndexOf_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectManager_listIterator_R_java_util_ListIterator 31
typedef jobject (*func_nro_EffectManager_listIterator_R_java_util_ListIterator)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectManager_listIterator_int_R_java_util_ListIterator 32
typedef jobject (*func_nro_EffectManager_listIterator_int_R_java_util_ListIterator)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_EffectManager_sort_java_util_Comparator 33
typedef void (*func_nro_EffectManager_sort_java_util_Comparator)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectManager_remove_int_R_java_lang_Object 34
typedef jobject (*func_nro_EffectManager_remove_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_EffectManager_set_int_java_lang_Object_R_java_lang_Object 35
typedef jobject (*func_nro_EffectManager_set_int_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_nro_EffectManager_subList_int_int_R_java_util_List 36
typedef jobject (*func_nro_EffectManager_subList_int_int_R_java_util_List)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_EffectManager_removeRange_int_int 37
typedef void (*func_nro_EffectManager_removeRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_EffectManager_newElementArray_int_R_Array1_java_lang_Object 38
typedef jobject (*func_nro_EffectManager_newElementArray_int_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_EffectManager_addElement_java_lang_Object 39
typedef void (*func_nro_EffectManager_addElement_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectManager_capacity_R_int 40
typedef jint (*func_nro_EffectManager_capacity_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectManager_copyInto_Array1_java_lang_Object 41
typedef void (*func_nro_EffectManager_copyInto_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectManager_elementAt_int_R_java_lang_Object 42
typedef jobject (*func_nro_EffectManager_elementAt_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_EffectManager_elements_R_java_util_Enumeration 43
typedef jobject (*func_nro_EffectManager_elements_R_java_util_Enumeration)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectManager_ensureCapacity_int 44
typedef void (*func_nro_EffectManager_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_EffectManager_firstElement_R_java_lang_Object 45
typedef jobject (*func_nro_EffectManager_firstElement_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectManager_grow_int 46
typedef void (*func_nro_EffectManager_grow_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_EffectManager_growByOne 47
typedef void (*func_nro_EffectManager_growByOne)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectManager_growBy_int 48
typedef void (*func_nro_EffectManager_growBy_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_EffectManager_indexOf_java_lang_Object_int_R_int 49
typedef jint (*func_nro_EffectManager_indexOf_java_lang_Object_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_nro_EffectManager_insertElementAt_java_lang_Object_int 50
typedef void (*func_nro_EffectManager_insertElementAt_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_nro_EffectManager_lastElement_R_java_lang_Object 51
typedef jobject (*func_nro_EffectManager_lastElement_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectManager_lastIndexOf_java_lang_Object_int_R_int 52
typedef jint (*func_nro_EffectManager_lastIndexOf_java_lang_Object_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_nro_EffectManager_removeAllElements 53
typedef void (*func_nro_EffectManager_removeAllElements)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectManager_removeElement_java_lang_Object_R_boolean 54
typedef jbool (*func_nro_EffectManager_removeElement_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectManager_removeElementAt_int 55
typedef void (*func_nro_EffectManager_removeElementAt_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_EffectManager_setElementAt_java_lang_Object_int 56
typedef void (*func_nro_EffectManager_setElementAt_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_nro_EffectManager_setSize_int 57
typedef void (*func_nro_EffectManager_setSize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_EffectManager_trimToSize 58
typedef void (*func_nro_EffectManager_trimToSize)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectManager_updateAll 59
typedef void (*func_nro_EffectManager_updateAll)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectManager_paintAll_lib_mGraphics 60
typedef void (*func_nro_EffectManager_paintAll_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectManager_d 61
typedef void (*func_nro_EffectManager_d)(jcontext ctx, jobject self);

void mark_nro_EffectManager(jobject object, jint mark, jint depth);
void clinit_nro_EffectManager(jcontext ctx);
void M_nro_EffectManager_updateAll(jcontext ctx, jobject self);
void SM_nro_EffectManager_update(jcontext ctx);
void M_nro_EffectManager_paintAll_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_EffectManager_d(jcontext ctx, jobject self);
void SM_nro_EffectManager_remove(jcontext ctx);
void SM_nro_EffectManager_addHiEffect_nro_Effect_End(jcontext ctx, jobject param0);
void SM_nro_EffectManager_addMidEffects_nro_Effect_End(jcontext ctx, jobject param0);
void SM_nro_EffectManager_addMid_2Effects_nro_Effect_End(jcontext ctx, jobject param0);
void SM_nro_EffectManager_addLowEffect_nro_Effect_End(jcontext ctx, jobject param0);
void init_nro_EffectManager_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
