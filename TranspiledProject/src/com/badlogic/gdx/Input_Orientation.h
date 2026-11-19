#ifndef HEADER_com_badlogic_gdx_Input$Orientation
#define HEADER_com_badlogic_gdx_Input$Orientation

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_Input$Orientation {
	java_lang_Enum parent;
} com_badlogic_gdx_Input$Orientation;

extern Class class_com_badlogic_gdx_Input$Orientation;

extern jobject SF_com_badlogic_gdx_Input$Orientation_Landscape;
extern jobject SF_com_badlogic_gdx_Input$Orientation_Portrait;
extern jobject SF_com_badlogic_gdx_Input$Orientation_$VALUES;

#define VTABLE_com_badlogic_gdx_Input$Orientation_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_Input$Orientation_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Input$Orientation_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_Input$Orientation_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_Input$Orientation_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_Input$Orientation_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Input$Orientation_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_Input$Orientation_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Input$Orientation_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_Input$Orientation_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Input$Orientation_finalize 5
typedef void (*func_com_badlogic_gdx_Input$Orientation_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Input$Orientation_notify 6
typedef void (*func_com_badlogic_gdx_Input$Orientation_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Input$Orientation_notifyAll 7
typedef void (*func_com_badlogic_gdx_Input$Orientation_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Input$Orientation_wait 8
typedef void (*func_com_badlogic_gdx_Input$Orientation_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Input$Orientation_wait_long 9
typedef void (*func_com_badlogic_gdx_Input$Orientation_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_Input$Orientation_wait_long_int 10
typedef void (*func_com_badlogic_gdx_Input$Orientation_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_Input$Orientation_compareTo_java_lang_Object_R_int 11
typedef jint (*func_com_badlogic_gdx_Input$Orientation_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_Input$Orientation_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_com_badlogic_gdx_Input$Orientation_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_Input$Orientation_name_R_java_lang_String 13
typedef jobject (*func_com_badlogic_gdx_Input$Orientation_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Input$Orientation_ordinal_R_int 14
typedef jint (*func_com_badlogic_gdx_Input$Orientation_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Input$Orientation_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_com_badlogic_gdx_Input$Orientation_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_Input$Orientation(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_Input$Orientation(jcontext ctx);
jobject SM_com_badlogic_gdx_Input$Orientation_values_R_Array1_com_badlogic_gdx_Input$Orientation(jcontext ctx);
jobject SM_com_badlogic_gdx_Input$Orientation_valueOf_java_lang_String_R_com_badlogic_gdx_Input$Orientation(jcontext ctx, jobject param0);
void init_com_badlogic_gdx_Input$Orientation_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_com_badlogic_gdx_Input$Orientation_$values_R_Array1_com_badlogic_gdx_Input$Orientation(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
