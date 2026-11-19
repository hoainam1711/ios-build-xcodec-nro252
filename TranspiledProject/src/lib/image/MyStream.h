#ifndef HEADER_lib_image_MyStream
#define HEADER_lib_image_MyStream

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct lib_image_MyStream {
	java_lang_Object parent;
	jref F_b;
	jref F_a;
	jref F_c;
} lib_image_MyStream;

extern Class class_lib_image_MyStream;


#define VTABLE_lib_image_MyStream_hashCode_R_int 0
typedef jint (*func_lib_image_MyStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_image_MyStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_lib_image_MyStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_image_MyStream_clone_R_java_lang_Object 2
typedef jobject (*func_lib_image_MyStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_lib_image_MyStream_getClass_R_java_lang_Class 3
typedef jobject (*func_lib_image_MyStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_lib_image_MyStream_toString_R_java_lang_String 4
typedef jobject (*func_lib_image_MyStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_lib_image_MyStream_finalize 5
typedef void (*func_lib_image_MyStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_lib_image_MyStream_notify 6
typedef void (*func_lib_image_MyStream_notify)(jcontext ctx, jobject self);
#define VTABLE_lib_image_MyStream_notifyAll 7
typedef void (*func_lib_image_MyStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_lib_image_MyStream_wait 8
typedef void (*func_lib_image_MyStream_wait)(jcontext ctx, jobject self);
#define VTABLE_lib_image_MyStream_wait_long 9
typedef void (*func_lib_image_MyStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_lib_image_MyStream_wait_long_int 10
typedef void (*func_lib_image_MyStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_lib_image_MyStream(jobject object, jint mark, jint depth);
void clinit_lib_image_MyStream(jcontext ctx);
void init_lib_image_MyStream_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void init_lib_image_MyStream(jcontext ctx, jobject self);
jobject SM_lib_image_MyStream_readFile_java_lang_String_R_java_io_InputStream(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
