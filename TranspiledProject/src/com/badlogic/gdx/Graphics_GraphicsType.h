#ifndef HEADER_com_badlogic_gdx_Graphics$GraphicsType
#define HEADER_com_badlogic_gdx_Graphics$GraphicsType

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_Graphics$GraphicsType {
	java_lang_Enum parent;
} com_badlogic_gdx_Graphics$GraphicsType;

extern Class class_com_badlogic_gdx_Graphics$GraphicsType;

extern jobject SF_com_badlogic_gdx_Graphics$GraphicsType_AndroidGL;
extern jobject SF_com_badlogic_gdx_Graphics$GraphicsType_LWJGL;
extern jobject SF_com_badlogic_gdx_Graphics$GraphicsType_WebGL;
extern jobject SF_com_badlogic_gdx_Graphics$GraphicsType_iOSGL;
extern jobject SF_com_badlogic_gdx_Graphics$GraphicsType_JGLFW;
extern jobject SF_com_badlogic_gdx_Graphics$GraphicsType_Mock;
extern jobject SF_com_badlogic_gdx_Graphics$GraphicsType_LWJGL3;
extern jobject SF_com_badlogic_gdx_Graphics$GraphicsType_$VALUES;

#define VTABLE_com_badlogic_gdx_Graphics$GraphicsType_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_Graphics$GraphicsType_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Graphics$GraphicsType_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_Graphics$GraphicsType_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_Graphics$GraphicsType_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_Graphics$GraphicsType_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Graphics$GraphicsType_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_Graphics$GraphicsType_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Graphics$GraphicsType_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_Graphics$GraphicsType_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Graphics$GraphicsType_finalize 5
typedef void (*func_com_badlogic_gdx_Graphics$GraphicsType_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Graphics$GraphicsType_notify 6
typedef void (*func_com_badlogic_gdx_Graphics$GraphicsType_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Graphics$GraphicsType_notifyAll 7
typedef void (*func_com_badlogic_gdx_Graphics$GraphicsType_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Graphics$GraphicsType_wait 8
typedef void (*func_com_badlogic_gdx_Graphics$GraphicsType_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Graphics$GraphicsType_wait_long 9
typedef void (*func_com_badlogic_gdx_Graphics$GraphicsType_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_Graphics$GraphicsType_wait_long_int 10
typedef void (*func_com_badlogic_gdx_Graphics$GraphicsType_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_Graphics$GraphicsType_compareTo_java_lang_Object_R_int 11
typedef jint (*func_com_badlogic_gdx_Graphics$GraphicsType_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_Graphics$GraphicsType_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_com_badlogic_gdx_Graphics$GraphicsType_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_Graphics$GraphicsType_name_R_java_lang_String 13
typedef jobject (*func_com_badlogic_gdx_Graphics$GraphicsType_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Graphics$GraphicsType_ordinal_R_int 14
typedef jint (*func_com_badlogic_gdx_Graphics$GraphicsType_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Graphics$GraphicsType_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_com_badlogic_gdx_Graphics$GraphicsType_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_Graphics$GraphicsType(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_Graphics$GraphicsType(jcontext ctx);
jobject SM_com_badlogic_gdx_Graphics$GraphicsType_values_R_Array1_com_badlogic_gdx_Graphics$GraphicsType(jcontext ctx);
jobject SM_com_badlogic_gdx_Graphics$GraphicsType_valueOf_java_lang_String_R_com_badlogic_gdx_Graphics$GraphicsType(jcontext ctx, jobject param0);
void init_com_badlogic_gdx_Graphics$GraphicsType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_com_badlogic_gdx_Graphics$GraphicsType_$values_R_Array1_com_badlogic_gdx_Graphics$GraphicsType(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
