#ifndef HEADER_lib_input_TField$1
#define HEADER_lib_input_TField$1

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/Input_TextInputListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct lib_input_TField$1 {
	java_lang_Object parent;
	jref F_this$0;
} lib_input_TField$1;

extern Class class_lib_input_TField$1;


#define VTABLE_lib_input_TField$1_hashCode_R_int 0
typedef jint (*func_lib_input_TField$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_lib_input_TField$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_input_TField$1_clone_R_java_lang_Object 2
typedef jobject (*func_lib_input_TField$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField$1_getClass_R_java_lang_Class 3
typedef jobject (*func_lib_input_TField$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField$1_toString_R_java_lang_String 4
typedef jobject (*func_lib_input_TField$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField$1_finalize 5
typedef void (*func_lib_input_TField$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField$1_notify 6
typedef void (*func_lib_input_TField$1_notify)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField$1_notifyAll 7
typedef void (*func_lib_input_TField$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField$1_wait 8
typedef void (*func_lib_input_TField$1_wait)(jcontext ctx, jobject self);
#define VTABLE_lib_input_TField$1_wait_long 9
typedef void (*func_lib_input_TField$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_lib_input_TField$1_wait_long_int 10
typedef void (*func_lib_input_TField$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_lib_input_TField$1_input_java_lang_String 11
typedef void (*func_lib_input_TField$1_input_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_input_TField$1_canceled 12
typedef void (*func_lib_input_TField$1_canceled)(jcontext ctx, jobject self);

void mark_lib_input_TField$1(jobject object, jint mark, jint depth);
void clinit_lib_input_TField$1(jcontext ctx);
void init_lib_input_TField$1_lib_input_TField(jcontext ctx, jobject self, jobject param0);
void M_lib_input_TField$1_input_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_lib_input_TField$1_canceled(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
