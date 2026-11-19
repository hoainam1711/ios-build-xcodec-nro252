#ifndef HEADER_lib_input_ChatTextField$2
#define HEADER_lib_input_ChatTextField$2

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "nro/IActionListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct lib_input_ChatTextField$2 {
	java_lang_Object parent;
	jref F_this$0;
} lib_input_ChatTextField$2;

extern Class class_lib_input_ChatTextField$2;


#define VTABLE_lib_input_ChatTextField$2_hashCode_R_int 0
typedef jint (*func_lib_input_ChatTextField$2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_input_ChatTextField$2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_lib_input_ChatTextField$2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_input_ChatTextField$2_clone_R_java_lang_Object 2
typedef jobject (*func_lib_input_ChatTextField$2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_lib_input_ChatTextField$2_getClass_R_java_lang_Class 3
typedef jobject (*func_lib_input_ChatTextField$2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_lib_input_ChatTextField$2_toString_R_java_lang_String 4
typedef jobject (*func_lib_input_ChatTextField$2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_lib_input_ChatTextField$2_finalize 5
typedef void (*func_lib_input_ChatTextField$2_finalize)(jcontext ctx, jobject self);
#define VTABLE_lib_input_ChatTextField$2_notify 6
typedef void (*func_lib_input_ChatTextField$2_notify)(jcontext ctx, jobject self);
#define VTABLE_lib_input_ChatTextField$2_notifyAll 7
typedef void (*func_lib_input_ChatTextField$2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_lib_input_ChatTextField$2_wait 8
typedef void (*func_lib_input_ChatTextField$2_wait)(jcontext ctx, jobject self);
#define VTABLE_lib_input_ChatTextField$2_wait_long 9
typedef void (*func_lib_input_ChatTextField$2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_lib_input_ChatTextField$2_wait_long_int 10
typedef void (*func_lib_input_ChatTextField$2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_lib_input_ChatTextField$2_perform_int_java_lang_Object 11
typedef void (*func_lib_input_ChatTextField$2_perform_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);

void mark_lib_input_ChatTextField$2(jobject object, jint mark, jint depth);
void clinit_lib_input_ChatTextField$2(jcontext ctx);
void init_lib_input_ChatTextField$2_lib_input_ChatTextField(jcontext ctx, jobject self, jobject param0);
void M_lib_input_ChatTextField$2_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
