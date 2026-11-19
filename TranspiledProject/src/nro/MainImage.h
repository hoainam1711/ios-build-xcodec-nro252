#ifndef HEADER_nro_MainImage
#define HEADER_nro_MainImage

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_MainImage {
	java_lang_Object parent;
	jref F_img;
	jlong F_count;
	jint F_timeImageNull;
	jbyte F_nFrame;
} nro_MainImage;

extern Class class_nro_MainImage;


#define VTABLE_nro_MainImage_hashCode_R_int 0
typedef jint (*func_nro_MainImage_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_MainImage_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_MainImage_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MainImage_clone_R_java_lang_Object 2
typedef jobject (*func_nro_MainImage_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_MainImage_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_MainImage_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_MainImage_toString_R_java_lang_String 4
typedef jobject (*func_nro_MainImage_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_MainImage_finalize 5
typedef void (*func_nro_MainImage_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_MainImage_notify 6
typedef void (*func_nro_MainImage_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_MainImage_notifyAll 7
typedef void (*func_nro_MainImage_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_MainImage_wait 8
typedef void (*func_nro_MainImage_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_MainImage_wait_long 9
typedef void (*func_nro_MainImage_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_MainImage_wait_long_int 10
typedef void (*func_nro_MainImage_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_MainImage(jobject object, jint mark, jint depth);
void clinit_nro_MainImage(jcontext ctx);
void init_nro_MainImage(jcontext ctx, jobject self);
void init_nro_MainImage_javax_microedition_lcdui_Image_byte(jcontext ctx, jobject self, jobject param0, jbyte param1);

#ifdef __cplusplus
}
#endif

#endif
