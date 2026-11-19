#ifndef HEADER_lib_image_mImage
#define HEADER_lib_image_mImage

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct lib_image_mImage {
	java_lang_Object parent;
} lib_image_mImage;

extern Class class_lib_image_mImage;

extern jobject SF_lib_image_mImage_decryptCode;

#define VTABLE_lib_image_mImage_hashCode_R_int 0
typedef jint (*func_lib_image_mImage_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_image_mImage_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_lib_image_mImage_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_image_mImage_clone_R_java_lang_Object 2
typedef jobject (*func_lib_image_mImage_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_lib_image_mImage_getClass_R_java_lang_Class 3
typedef jobject (*func_lib_image_mImage_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_lib_image_mImage_toString_R_java_lang_String 4
typedef jobject (*func_lib_image_mImage_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_lib_image_mImage_finalize 5
typedef void (*func_lib_image_mImage_finalize)(jcontext ctx, jobject self);
#define VTABLE_lib_image_mImage_notify 6
typedef void (*func_lib_image_mImage_notify)(jcontext ctx, jobject self);
#define VTABLE_lib_image_mImage_notifyAll 7
typedef void (*func_lib_image_mImage_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_lib_image_mImage_wait 8
typedef void (*func_lib_image_mImage_wait)(jcontext ctx, jobject self);
#define VTABLE_lib_image_mImage_wait_long 9
typedef void (*func_lib_image_mImage_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_lib_image_mImage_wait_long_int 10
typedef void (*func_lib_image_mImage_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_lib_image_mImage(jobject object, jint mark, jint depth);
void clinit_lib_image_mImage(jcontext ctx);
void init_lib_image_mImage(jcontext ctx, jobject self);
jobject SM_lib_image_mImage_createImage_java_lang_String_R_javax_microedition_lcdui_Image(jcontext ctx, jobject param0);
jobject SM_lib_image_mImage_createImageFromBytes_Array1_byte_R_javax_microedition_lcdui_Image(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
