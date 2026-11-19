#ifndef HEADER_nro_SmallImage
#define HEADER_nro_SmallImage

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_SmallImage {
	java_lang_Object parent;
} nro_SmallImage;

extern Class class_nro_SmallImage;

extern jobject SF_nro_SmallImage_smallImg;
extern jobject SF_nro_SmallImage_instance;
extern jobject SF_nro_SmallImage_imgbig;
extern jobject SF_nro_SmallImage_imgNew;
extern jobject SF_nro_SmallImage_vKeys;
extern jobject SF_nro_SmallImage_imgEmpty;
extern jobject SF_nro_SmallImage_newSmallVersion;
extern jobject SF_nro_SmallImage_vt_images_watingDowload;
extern jint SF_nro_SmallImage_smallCount;
extern jshort SF_nro_SmallImage_maxSmall;

#define VTABLE_nro_SmallImage_hashCode_R_int 0
typedef jint (*func_nro_SmallImage_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_SmallImage_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_SmallImage_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_SmallImage_clone_R_java_lang_Object 2
typedef jobject (*func_nro_SmallImage_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_SmallImage_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_SmallImage_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_SmallImage_toString_R_java_lang_String 4
typedef jobject (*func_nro_SmallImage_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_SmallImage_finalize 5
typedef void (*func_nro_SmallImage_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_SmallImage_notify 6
typedef void (*func_nro_SmallImage_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_SmallImage_notifyAll 7
typedef void (*func_nro_SmallImage_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_SmallImage_wait 8
typedef void (*func_nro_SmallImage_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_SmallImage_wait_long 9
typedef void (*func_nro_SmallImage_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_SmallImage_wait_long_int 10
typedef void (*func_nro_SmallImage_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_SmallImage(jobject object, jint mark, jint depth);
void clinit_nro_SmallImage(jcontext ctx);
void init_nro_SmallImage(jcontext ctx, jobject self);
void SM_nro_SmallImage_loadBigRMS(jcontext ctx);
void SM_nro_SmallImage_disposeSmall_nro_Small(jcontext ctx, jobject param0);
void SM_nro_SmallImage_putSmall_int_javax_microedition_lcdui_Image(jcontext ctx, jint param0, jobject param1);
void SM_nro_SmallImage_freeBig(jcontext ctx);
void SM_nro_SmallImage_loadBigImage(jcontext ctx);
void SM_nro_SmallImage_init(jcontext ctx);
void SM_nro_SmallImage_clearHastable(jcontext ctx);
void SM_nro_SmallImage_readImage(jcontext ctx);
void SM_nro_SmallImage_createImage_int(jcontext ctx, jint param0);
void SM_nro_SmallImage_createImage_lib_mGraphics_int_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5);
void SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5);
void SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int_float(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jfloat param6);
void SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8);
void SM_nro_SmallImage_update(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
