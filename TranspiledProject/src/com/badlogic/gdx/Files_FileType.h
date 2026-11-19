#ifndef HEADER_com_badlogic_gdx_Files$FileType
#define HEADER_com_badlogic_gdx_Files$FileType

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_Files$FileType {
	java_lang_Enum parent;
} com_badlogic_gdx_Files$FileType;

extern Class class_com_badlogic_gdx_Files$FileType;

extern jobject SF_com_badlogic_gdx_Files$FileType_Classpath;
extern jobject SF_com_badlogic_gdx_Files$FileType_Internal;
extern jobject SF_com_badlogic_gdx_Files$FileType_External;
extern jobject SF_com_badlogic_gdx_Files$FileType_Absolute;
extern jobject SF_com_badlogic_gdx_Files$FileType_Local;
extern jobject SF_com_badlogic_gdx_Files$FileType_$VALUES;

#define VTABLE_com_badlogic_gdx_Files$FileType_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_Files$FileType_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Files$FileType_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_Files$FileType_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_Files$FileType_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_Files$FileType_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Files$FileType_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_Files$FileType_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Files$FileType_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_Files$FileType_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Files$FileType_finalize 5
typedef void (*func_com_badlogic_gdx_Files$FileType_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Files$FileType_notify 6
typedef void (*func_com_badlogic_gdx_Files$FileType_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Files$FileType_notifyAll 7
typedef void (*func_com_badlogic_gdx_Files$FileType_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Files$FileType_wait 8
typedef void (*func_com_badlogic_gdx_Files$FileType_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Files$FileType_wait_long 9
typedef void (*func_com_badlogic_gdx_Files$FileType_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_Files$FileType_wait_long_int 10
typedef void (*func_com_badlogic_gdx_Files$FileType_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_Files$FileType_compareTo_java_lang_Object_R_int 11
typedef jint (*func_com_badlogic_gdx_Files$FileType_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_Files$FileType_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_com_badlogic_gdx_Files$FileType_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_Files$FileType_name_R_java_lang_String 13
typedef jobject (*func_com_badlogic_gdx_Files$FileType_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Files$FileType_ordinal_R_int 14
typedef jint (*func_com_badlogic_gdx_Files$FileType_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Files$FileType_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_com_badlogic_gdx_Files$FileType_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_Files$FileType(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_Files$FileType(jcontext ctx);
jobject SM_com_badlogic_gdx_Files$FileType_values_R_Array1_com_badlogic_gdx_Files$FileType(jcontext ctx);
jobject SM_com_badlogic_gdx_Files$FileType_valueOf_java_lang_String_R_com_badlogic_gdx_Files$FileType(jcontext ctx, jobject param0);
void init_com_badlogic_gdx_Files$FileType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_com_badlogic_gdx_Files$FileType_$values_R_Array1_com_badlogic_gdx_Files$FileType(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
