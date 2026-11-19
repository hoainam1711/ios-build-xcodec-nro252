#ifndef HEADER_lib_MapKey
#define HEADER_lib_MapKey

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct lib_MapKey {
	java_lang_Object parent;
} lib_MapKey;

extern Class class_lib_MapKey;

extern jobject SF_lib_MapKey_h;
extern jobject SF_lib_MapKey_shiftNumberMap;

#define VTABLE_lib_MapKey_hashCode_R_int 0
typedef jint (*func_lib_MapKey_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_MapKey_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_lib_MapKey_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_MapKey_clone_R_java_lang_Object 2
typedef jobject (*func_lib_MapKey_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_lib_MapKey_getClass_R_java_lang_Class 3
typedef jobject (*func_lib_MapKey_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_lib_MapKey_toString_R_java_lang_String 4
typedef jobject (*func_lib_MapKey_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_lib_MapKey_finalize 5
typedef void (*func_lib_MapKey_finalize)(jcontext ctx, jobject self);
#define VTABLE_lib_MapKey_notify 6
typedef void (*func_lib_MapKey_notify)(jcontext ctx, jobject self);
#define VTABLE_lib_MapKey_notifyAll 7
typedef void (*func_lib_MapKey_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_lib_MapKey_wait 8
typedef void (*func_lib_MapKey_wait)(jcontext ctx, jobject self);
#define VTABLE_lib_MapKey_wait_long 9
typedef void (*func_lib_MapKey_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_lib_MapKey_wait_long_int 10
typedef void (*func_lib_MapKey_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_lib_MapKey(jobject object, jint mark, jint depth);
void clinit_lib_MapKey(jcontext ctx);
void init_lib_MapKey(jcontext ctx, jobject self);
void SM_lib_MapKey_load(jcontext ctx);
jint SM_lib_MapKey_map_int_R_int(jcontext ctx, jint param0);
jint SM_lib_MapKey_mapShifted_int_boolean_R_int(jcontext ctx, jint param0, jbool param1);

#ifdef __cplusplus
}
#endif

#endif
