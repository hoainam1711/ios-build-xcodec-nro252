#ifndef HEADER_com_badlogic_gdx_utils_Justify
#define HEADER_com_badlogic_gdx_utils_Justify

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_Justify {
	java_lang_Enum parent;
} com_badlogic_gdx_utils_Justify;

extern Class class_com_badlogic_gdx_utils_Justify;

extern jobject SF_com_badlogic_gdx_utils_Justify_None;
extern jobject SF_com_badlogic_gdx_utils_Justify_ParagraphBySpace;
extern jobject SF_com_badlogic_gdx_utils_Justify_ParagraphByGlyph;
extern jobject SF_com_badlogic_gdx_utils_Justify_WrappedLinesBySpace;
extern jobject SF_com_badlogic_gdx_utils_Justify_WrappedLinesByGlyph;
extern jobject SF_com_badlogic_gdx_utils_Justify_AllLinesBySpace;
extern jobject SF_com_badlogic_gdx_utils_Justify_AllLinesByGlyph;
extern jobject SF_com_badlogic_gdx_utils_Justify_$VALUES;

#define VTABLE_com_badlogic_gdx_utils_Justify_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_Justify_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Justify_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_Justify_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Justify_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_Justify_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Justify_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_Justify_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Justify_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_Justify_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Justify_finalize 5
typedef void (*func_com_badlogic_gdx_utils_Justify_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Justify_notify 6
typedef void (*func_com_badlogic_gdx_utils_Justify_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Justify_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_Justify_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Justify_wait 8
typedef void (*func_com_badlogic_gdx_utils_Justify_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Justify_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_Justify_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_Justify_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_Justify_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_Justify_compareTo_java_lang_Object_R_int 11
typedef jint (*func_com_badlogic_gdx_utils_Justify_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Justify_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_com_badlogic_gdx_utils_Justify_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Justify_name_R_java_lang_String 13
typedef jobject (*func_com_badlogic_gdx_utils_Justify_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Justify_ordinal_R_int 14
typedef jint (*func_com_badlogic_gdx_utils_Justify_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Justify_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_com_badlogic_gdx_utils_Justify_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Justify_matchChar_int_R_boolean 16
typedef jbool (*func_com_badlogic_gdx_utils_Justify_matchChar_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_Justify_isNone_R_boolean 17
typedef jbool (*func_com_badlogic_gdx_utils_Justify_isNone_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Justify_isParagraph_R_boolean 18
typedef jbool (*func_com_badlogic_gdx_utils_Justify_isParagraph_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Justify_isWrappedLines_R_boolean 19
typedef jbool (*func_com_badlogic_gdx_utils_Justify_isWrappedLines_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Justify_isAllLines_R_boolean 20
typedef jbool (*func_com_badlogic_gdx_utils_Justify_isAllLines_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Justify_isBySpace_R_boolean 21
typedef jbool (*func_com_badlogic_gdx_utils_Justify_isBySpace_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Justify_isByGlyph_R_boolean 22
typedef jbool (*func_com_badlogic_gdx_utils_Justify_isByGlyph_R_boolean)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_utils_Justify(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_Justify(jcontext ctx);
jobject SM_com_badlogic_gdx_utils_Justify_values_R_Array1_com_badlogic_gdx_utils_Justify(jcontext ctx);
jobject SM_com_badlogic_gdx_utils_Justify_valueOf_java_lang_String_R_com_badlogic_gdx_utils_Justify(jcontext ctx, jobject param0);
void init_com_badlogic_gdx_utils_Justify_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jbool M_com_badlogic_gdx_utils_Justify_matchChar_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_com_badlogic_gdx_utils_Justify_isNone_R_boolean(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_Justify_isParagraph_R_boolean(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_Justify_isWrappedLines_R_boolean(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_Justify_isAllLines_R_boolean(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_Justify_isBySpace_R_boolean(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_Justify_isByGlyph_R_boolean(jcontext ctx, jobject self);
jobject SM_com_badlogic_gdx_utils_Justify_$values_R_Array1_com_badlogic_gdx_utils_Justify(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
