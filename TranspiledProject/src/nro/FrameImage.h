#ifndef HEADER_nro_FrameImage
#define HEADER_nro_FrameImage

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_FrameImage {
	java_lang_Object parent;
	jint F_frameWidth;
	jint F_frameHeight;
	jint F_nFrame;
	jref F_imgFrame;
} nro_FrameImage;

extern Class class_nro_FrameImage;


#define VTABLE_nro_FrameImage_hashCode_R_int 0
typedef jint (*func_nro_FrameImage_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_FrameImage_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_FrameImage_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_FrameImage_clone_R_java_lang_Object 2
typedef jobject (*func_nro_FrameImage_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_FrameImage_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_FrameImage_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_FrameImage_toString_R_java_lang_String 4
typedef jobject (*func_nro_FrameImage_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_FrameImage_finalize 5
typedef void (*func_nro_FrameImage_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_FrameImage_notify 6
typedef void (*func_nro_FrameImage_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_FrameImage_notifyAll 7
typedef void (*func_nro_FrameImage_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_FrameImage_wait 8
typedef void (*func_nro_FrameImage_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_FrameImage_wait_long 9
typedef void (*func_nro_FrameImage_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_FrameImage_wait_long_int 10
typedef void (*func_nro_FrameImage_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics 11
typedef void (*func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jobject param5);

void mark_nro_FrameImage(jobject object, jint mark, jint depth);
void clinit_nro_FrameImage(jcontext ctx);
void init_nro_FrameImage_int(jcontext ctx, jobject self, jint param0);
void init_nro_FrameImage_javax_microedition_lcdui_Image_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jobject param5);

#ifdef __cplusplus
}
#endif

#endif
