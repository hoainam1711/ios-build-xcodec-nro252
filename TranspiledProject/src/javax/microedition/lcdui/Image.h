#ifndef HEADER_javax_microedition_lcdui_Image
#define HEADER_javax_microedition_lcdui_Image

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct javax_microedition_lcdui_Image {
	java_lang_Object parent;
	jref F_texture;
	jint F_topSampleArgb;
	jint F_bottomSampleArgb;
	jint F_w;
	jint F_h;
	jref F_colorBlend;
} javax_microedition_lcdui_Image;

extern Class class_javax_microedition_lcdui_Image;

extern jint SF_javax_microedition_lcdui_Image_INTERVAL;
extern jint SF_javax_microedition_lcdui_Image_MAXTIME;
extern jint SF_javax_microedition_lcdui_Image_activeTextureCount;
extern jint SF_javax_microedition_lcdui_Image_totalCreatedTextures;
extern jint SF_javax_microedition_lcdui_Image_totalDisposedTextures;
extern jobject SF_javax_microedition_lcdui_Image_imgTemp;
extern jobject SF_javax_microedition_lcdui_Image_filenametemp;
extern jobject SF_javax_microedition_lcdui_Image_datatemp;
extern jobject SF_javax_microedition_lcdui_Image_imgSrcTemp;
extern jint SF_javax_microedition_lcdui_Image_xtemp;
extern jint SF_javax_microedition_lcdui_Image_ytemp;
extern jint SF_javax_microedition_lcdui_Image_wtemp;
extern jint SF_javax_microedition_lcdui_Image_htemp;
extern jint SF_javax_microedition_lcdui_Image_transformtemp;
extern jint SF_javax_microedition_lcdui_Image_status;

#define VTABLE_javax_microedition_lcdui_Image_hashCode_R_int 0
typedef jint (*func_javax_microedition_lcdui_Image_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_javax_microedition_lcdui_Image_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_javax_microedition_lcdui_Image_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_javax_microedition_lcdui_Image_clone_R_java_lang_Object 2
typedef jobject (*func_javax_microedition_lcdui_Image_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_javax_microedition_lcdui_Image_getClass_R_java_lang_Class 3
typedef jobject (*func_javax_microedition_lcdui_Image_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_javax_microedition_lcdui_Image_toString_R_java_lang_String 4
typedef jobject (*func_javax_microedition_lcdui_Image_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_javax_microedition_lcdui_Image_finalize 5
typedef void (*func_javax_microedition_lcdui_Image_finalize)(jcontext ctx, jobject self);
#define VTABLE_javax_microedition_lcdui_Image_notify 6
typedef void (*func_javax_microedition_lcdui_Image_notify)(jcontext ctx, jobject self);
#define VTABLE_javax_microedition_lcdui_Image_notifyAll 7
typedef void (*func_javax_microedition_lcdui_Image_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_javax_microedition_lcdui_Image_wait 8
typedef void (*func_javax_microedition_lcdui_Image_wait)(jcontext ctx, jobject self);
#define VTABLE_javax_microedition_lcdui_Image_wait_long 9
typedef void (*func_javax_microedition_lcdui_Image_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_javax_microedition_lcdui_Image_wait_long_int 10
typedef void (*func_javax_microedition_lcdui_Image_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_javax_microedition_lcdui_Image_dispose 11
typedef void (*func_javax_microedition_lcdui_Image_dispose)(jcontext ctx, jobject self);
#define VTABLE_javax_microedition_lcdui_Image_getWidth_R_int 12
typedef jint (*func_javax_microedition_lcdui_Image_getWidth_R_int)(jcontext ctx, jobject self);
#define VTABLE_javax_microedition_lcdui_Image_getHeight_R_int 13
typedef jint (*func_javax_microedition_lcdui_Image_getHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_javax_microedition_lcdui_Image_getRealImageWidth_R_int 14
typedef jint (*func_javax_microedition_lcdui_Image_getRealImageWidth_R_int)(jcontext ctx, jobject self);
#define VTABLE_javax_microedition_lcdui_Image_getRealImageHeight_R_int 15
typedef jint (*func_javax_microedition_lcdui_Image_getRealImageHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_javax_microedition_lcdui_Image_getRGB_Array1_int_int_int_int_int_int_int 16
typedef void (*func_javax_microedition_lcdui_Image_getRGB_Array1_int_int_int_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6);

void mark_javax_microedition_lcdui_Image(jobject object, jint mark, jint depth);
void clinit_javax_microedition_lcdui_Image(jcontext ctx);
void init_javax_microedition_lcdui_Image(jcontext ctx, jobject self);
jobject SM_javax_microedition_lcdui_Image_createEmptyImage_R_javax_microedition_lcdui_Image(jcontext ctx);
jobject SM_javax_microedition_lcdui_Image_createImage_java_lang_String_R_javax_microedition_lcdui_Image(jcontext ctx, jobject param0);
jobject SM_javax_microedition_lcdui_Image_createImage_Array1_byte_R_javax_microedition_lcdui_Image(jcontext ctx, jobject param0);
jobject SM_javax_microedition_lcdui_Image_createImage_int_int_R_javax_microedition_lcdui_Image(jcontext ctx, jint param0, jint param1);
jobject SM_javax_microedition_lcdui_Image_createImage_Array1_byte_int_int_R_javax_microedition_lcdui_Image(jcontext ctx, jobject param0, jint param1, jint param2);
jbyte SM_javax_microedition_lcdui_Image_convertbyteToByte_byte_R_byte(jcontext ctx, jbyte param0);
jobject SM_javax_microedition_lcdui_Image_createRGBImage_Array1_int_int_int_boolean_R_javax_microedition_lcdui_Image(jcontext ctx, jobject param0, jint param1, jint param2, jbool param3);
jobject SM_javax_microedition_lcdui_Image_setColorFromRBG_int_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jint param0);
void SM_javax_microedition_lcdui_Image_update(jcontext ctx);
jobject SM_javax_microedition_lcdui_Image___createImage_java_lang_String_R_javax_microedition_lcdui_Image(jcontext ctx, jobject param0);
jobject SM_javax_microedition_lcdui_Image___createImage_Array1_byte_R_javax_microedition_lcdui_Image(jcontext ctx, jobject param0);
jobject SM_javax_microedition_lcdui_Image___createEmptyImage_R_javax_microedition_lcdui_Image(jcontext ctx);
jobject SM_javax_microedition_lcdui_Image___createImage_int_int_R_javax_microedition_lcdui_Image(jcontext ctx, jint param0, jint param1);
void M_javax_microedition_lcdui_Image_dispose(jcontext ctx, jobject self);
void SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(jcontext ctx, jobject param0);
jint SM_javax_microedition_lcdui_Image_getImageWidth_javax_microedition_lcdui_Image_R_int(jcontext ctx, jobject param0);
jint SM_javax_microedition_lcdui_Image_getImageHeight_javax_microedition_lcdui_Image_R_int(jcontext ctx, jobject param0);
jint M_javax_microedition_lcdui_Image_getWidth_R_int(jcontext ctx, jobject self);
jint M_javax_microedition_lcdui_Image_getHeight_R_int(jcontext ctx, jobject self);
void SM_javax_microedition_lcdui_Image_setTextureQuality_javax_microedition_lcdui_Image(jcontext ctx, jobject param0);
void SM_javax_microedition_lcdui_Image_setFontTextureQuality_javax_microedition_lcdui_Image(jcontext ctx, jobject param0);
jint M_javax_microedition_lcdui_Image_getRealImageWidth_R_int(jcontext ctx, jobject self);
jint M_javax_microedition_lcdui_Image_getRealImageHeight_R_int(jcontext ctx, jobject self);
jint SM_javax_microedition_lcdui_Image_argb_int_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
jint SM_javax_microedition_lcdui_Image_sampleArgb_com_badlogic_gdx_graphics_Pixmap_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2);
void M_javax_microedition_lcdui_Image_getRGB_Array1_int_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6);

#ifdef __cplusplus
}
#endif

#endif
