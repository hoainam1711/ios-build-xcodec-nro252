#ifndef HEADER_com_badlogic_gdx_utils_Json$ReadOnlySerializer
#define HEADER_com_badlogic_gdx_utils_Json$ReadOnlySerializer

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Json_Serializer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_Json$ReadOnlySerializer {
	java_lang_Object parent;
} com_badlogic_gdx_utils_Json$ReadOnlySerializer;

extern Class class_com_badlogic_gdx_utils_Json$ReadOnlySerializer;


#define VTABLE_com_badlogic_gdx_utils_Json$ReadOnlySerializer_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_Json$ReadOnlySerializer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Json$ReadOnlySerializer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_Json$ReadOnlySerializer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Json$ReadOnlySerializer_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_Json$ReadOnlySerializer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Json$ReadOnlySerializer_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_Json$ReadOnlySerializer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Json$ReadOnlySerializer_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_Json$ReadOnlySerializer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Json$ReadOnlySerializer_finalize 5
typedef void (*func_com_badlogic_gdx_utils_Json$ReadOnlySerializer_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Json$ReadOnlySerializer_notify 6
typedef void (*func_com_badlogic_gdx_utils_Json$ReadOnlySerializer_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Json$ReadOnlySerializer_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_Json$ReadOnlySerializer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Json$ReadOnlySerializer_wait 8
typedef void (*func_com_badlogic_gdx_utils_Json$ReadOnlySerializer_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Json$ReadOnlySerializer_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_Json$ReadOnlySerializer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_Json$ReadOnlySerializer_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_Json$ReadOnlySerializer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_Json$ReadOnlySerializer_write_com_badlogic_gdx_utils_Json_java_lang_Object_java_lang_Class 11
typedef void (*func_com_badlogic_gdx_utils_Json$ReadOnlySerializer_write_com_badlogic_gdx_utils_Json_java_lang_Object_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_com_badlogic_gdx_utils_Json$ReadOnlySerializer_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object 12
typedef jobject (*func_com_badlogic_gdx_utils_Json$ReadOnlySerializer_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_com_badlogic_gdx_utils_Json$ReadOnlySerializer(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_Json$ReadOnlySerializer(jcontext ctx);
void init_com_badlogic_gdx_utils_Json$ReadOnlySerializer(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_Json$ReadOnlySerializer_write_com_badlogic_gdx_utils_Json_java_lang_Object_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
