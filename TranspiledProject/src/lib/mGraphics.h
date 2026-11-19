#ifndef HEADER_lib_mGraphics
#define HEADER_lib_mGraphics

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct lib_mGraphics {
	java_lang_Object parent;
	jref F_g;
	jbool F_isOptimized;
	jint F_clipX;
	jint F_clipY;
	jint F_clipW;
	jint F_clipH;
	jfloat F_R;
	jfloat F_G;
	jfloat F_B;
	jfloat F_A;
	jbool F_isClip;
	jbool F_isTranslate;
	jint F_translateX;
	jint F_translateY;
	jint F_clipTX;
	jint F_clipTY;
	jref F_tmpScissors;
	jref F_tmpClipBounds;
	jref F_tmpLineStart;
	jref F_tmpLineEnd;
} lib_mGraphics;

extern Class class_lib_mGraphics;

extern jint SF_lib_mGraphics_HCENTER;
extern jint SF_lib_mGraphics_VCENTER;
extern jint SF_lib_mGraphics_LEFT;
extern jint SF_lib_mGraphics_RIGHT;
extern jint SF_lib_mGraphics_TOP;
extern jint SF_lib_mGraphics_BOTTOM;
extern jint SF_lib_mGraphics_zoomLevel;
extern jobject SF_lib_mGraphics_cachedTextures;
extern jobject SF_lib_mGraphics_whitePixelTexture;
extern jint SF_lib_mGraphics_addYWhenOpenKeyBoard;
extern jobject SF_lib_mGraphics_cachedRoundedNinePatches;
extern jobject SF_lib_mGraphics_cachedOutlineRoundedNinePatches;

#define VTABLE_lib_mGraphics_hashCode_R_int 0
typedef jint (*func_lib_mGraphics_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_mGraphics_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_lib_mGraphics_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_mGraphics_clone_R_java_lang_Object 2
typedef jobject (*func_lib_mGraphics_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_lib_mGraphics_getClass_R_java_lang_Class 3
typedef jobject (*func_lib_mGraphics_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_lib_mGraphics_toString_R_java_lang_String 4
typedef jobject (*func_lib_mGraphics_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_lib_mGraphics_finalize 5
typedef void (*func_lib_mGraphics_finalize)(jcontext ctx, jobject self);
#define VTABLE_lib_mGraphics_notify 6
typedef void (*func_lib_mGraphics_notify)(jcontext ctx, jobject self);
#define VTABLE_lib_mGraphics_notifyAll 7
typedef void (*func_lib_mGraphics_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_lib_mGraphics_wait 8
typedef void (*func_lib_mGraphics_wait)(jcontext ctx, jobject self);
#define VTABLE_lib_mGraphics_wait_long 9
typedef void (*func_lib_mGraphics_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_lib_mGraphics_wait_long_int 10
typedef void (*func_lib_mGraphics_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_lib_mGraphics_begin 11
typedef void (*func_lib_mGraphics_begin)(jcontext ctx, jobject self);
#define VTABLE_lib_mGraphics_end 12
typedef void (*func_lib_mGraphics_end)(jcontext ctx, jobject self);
#define VTABLE_lib_mGraphics_cache_java_lang_String_com_badlogic_gdx_graphics_Texture 13
typedef void (*func_lib_mGraphics_cache_java_lang_String_com_badlogic_gdx_graphics_Texture)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_lib_mGraphics_translate_int_int 14
typedef void (*func_lib_mGraphics_translate_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_lib_mGraphics_getTranslateX_R_int 15
typedef jint (*func_lib_mGraphics_getTranslateX_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_mGraphics_getTranslateY_R_int 16
typedef jint (*func_lib_mGraphics_getTranslateY_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_mGraphics_setClip_int_int_int_int 17
typedef void (*func_lib_mGraphics_setClip_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_lib_mGraphics_beginClip 18
typedef void (*func_lib_mGraphics_beginClip)(jcontext ctx, jobject self);
#define VTABLE_lib_mGraphics_endClip 19
typedef void (*func_lib_mGraphics_endClip)(jcontext ctx, jobject self);
#define VTABLE_lib_mGraphics_getClipX_R_int 20
typedef jint (*func_lib_mGraphics_getClipX_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_mGraphics_getClipY_R_int 21
typedef jint (*func_lib_mGraphics_getClipY_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_mGraphics_getClipWidth_R_int 22
typedef jint (*func_lib_mGraphics_getClipWidth_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_mGraphics_getClipHeight_R_int 23
typedef jint (*func_lib_mGraphics_getClipHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_mGraphics_fillRect_int_int_int_int_int 24
typedef void (*func_lib_mGraphics_fillRect_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_lib_mGraphics__fillRect_int_int_int_int 25
typedef void (*func_lib_mGraphics__fillRect_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_lib_mGraphics_drawLine_int_int_int_int 26
typedef void (*func_lib_mGraphics_drawLine_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_lib_mGraphics_drawRect_int_int_int_int 27
typedef void (*func_lib_mGraphics_drawRect_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_lib_mGraphics_fillRect_int_int_int_int 28
typedef void (*func_lib_mGraphics_fillRect_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_lib_mGraphics_drawString_java_lang_String_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont 29
typedef void (*func_lib_mGraphics_drawString_java_lang_String_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);
#define VTABLE_lib_mGraphics_drawStringTTF_java_lang_String_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color 30
typedef void (*func_lib_mGraphics_drawStringTTF_java_lang_String_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jobject param4);
#define VTABLE_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color 31
typedef void (*func_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jobject param3, jobject param4);
#define VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int 32
typedef void (*func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8);
#define VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_float_float_int 33
typedef void (*func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_float_float_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jfloat param6, jfloat param7, jint param8);
#define VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_boolean 34
typedef void (*func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jbool param9);
#define VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float 35
typedef void (*func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jfloat param9);
#define VTABLE_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int 36
typedef void (*func_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8);
#define VTABLE_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float 37
typedef void (*func_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jfloat param9);
#define VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int 38
typedef void (*func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
#define VTABLE_lib_mGraphics_drawImageFog_javax_microedition_lcdui_Image_int_int_int 39
typedef void (*func_lib_mGraphics_drawImageFog_javax_microedition_lcdui_Image_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
#define VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int 40
typedef void (*func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_float_float_int 41
typedef void (*func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_float_float_int)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3);
#define VTABLE_lib_mGraphics_fillRect_int_int_int_int_int_int_int_int 42
typedef void (*func_lib_mGraphics_fillRect_int_int_int_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7);
#define VTABLE_lib_mGraphics_drawRoundRect_int_int_int_int_int_int 43
typedef void (*func_lib_mGraphics_drawRoundRect_int_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5);
#define VTABLE_lib_mGraphics_fillRoundRect_int_int_int_int_int_int 44
typedef void (*func_lib_mGraphics_fillRoundRect_int_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5);
#define VTABLE_lib_mGraphics_fillTrans_javax_microedition_lcdui_Image_int_int_int_int 45
typedef void (*func_lib_mGraphics_fillTrans_javax_microedition_lcdui_Image_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_lib_mGraphics_fillArg_int_int_int_int_int_int 46
typedef void (*func_lib_mGraphics_fillArg_int_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5);
#define VTABLE_lib_mGraphics_drawRegion_nro_Small_int_int_int_int_int_int_int_int 47
typedef void (*func_lib_mGraphics_drawRegion_nro_Small_int_int_int_int_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8);
#define VTABLE_lib_mGraphics_getAngle_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_float 48
typedef jfloat (*func_lib_mGraphics_getAngle_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_float)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_lib_mGraphics_setColor_int_float 49
typedef void (*func_lib_mGraphics_setColor_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_lib_mGraphics_setColor_int 50
typedef void (*func_lib_mGraphics_setColor_int)(jcontext ctx, jobject self, jint param0);

void mark_lib_mGraphics(jobject object, jint mark, jint depth);
void clinit_lib_mGraphics(jcontext ctx);
void init_lib_mGraphics_com_badlogic_gdx_graphics_g2d_SpriteBatch(jcontext ctx, jobject self, jobject param0);
void init_lib_mGraphics(jcontext ctx, jobject self);
jint SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(jcontext ctx, jobject param0);
jint SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(jcontext ctx, jobject param0);
jbool SM_lib_mGraphics_isNotTranColor_com_badlogic_gdx_graphics_Color_R_boolean(jcontext ctx, jobject param0);
jfloat SM_lib_mGraphics_clamp_float_R_float(jcontext ctx, jfloat param0);
jobject SM_lib_mGraphics_setColorObj_int_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jint param0);
jint SM_lib_mGraphics_blendColor_float_int_int_R_int(jcontext ctx, jfloat param0, jint param1, jint param2);
jint SM_lib_mGraphics_getRealImageWidth_javax_microedition_lcdui_Image_R_int(jcontext ctx, jobject param0);
jint SM_lib_mGraphics_getRealImageHeight_javax_microedition_lcdui_Image_R_int(jcontext ctx, jobject param0);
void M_lib_mGraphics_begin(jcontext ctx, jobject self);
void M_lib_mGraphics_end(jcontext ctx, jobject self);
jobject SM_lib_mGraphics_getWhitePixelTexture_R_com_badlogic_gdx_graphics_Texture(jcontext ctx);
void SM_lib_mGraphics_clearCache(jcontext ctx);
void SM_lib_mGraphics_clearCachedTextures(jcontext ctx);
void M_lib_mGraphics_cache_java_lang_String_com_badlogic_gdx_graphics_Texture(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_lib_mGraphics_translate_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jint M_lib_mGraphics_getTranslateX_R_int(jcontext ctx, jobject self);
jint M_lib_mGraphics_getTranslateY_R_int(jcontext ctx, jobject self);
void M_lib_mGraphics_setClip_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_lib_mGraphics_beginClip(jcontext ctx, jobject self);
void M_lib_mGraphics_endClip(jcontext ctx, jobject self);
jint M_lib_mGraphics_getClipX_R_int(jcontext ctx, jobject self);
jint M_lib_mGraphics_getClipY_R_int(jcontext ctx, jobject self);
jint M_lib_mGraphics_getClipWidth_R_int(jcontext ctx, jobject self);
jint M_lib_mGraphics_getClipHeight_R_int(jcontext ctx, jobject self);
void M_lib_mGraphics_fillRect_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
void M_lib_mGraphics__fillRect_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_lib_mGraphics_drawLine_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_lib_mGraphics_drawRect_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_lib_mGraphics_fillRect_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_lib_mGraphics_drawString_java_lang_String_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);
void M_lib_mGraphics_drawStringTTF_java_lang_String_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jobject param4);
void M_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jobject param3, jobject param4);
void M_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8);
void M_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_float_float_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jfloat param6, jfloat param7, jint param8);
void M_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jbool param9);
void M_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jfloat param9);
void M_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8);
void M_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jfloat param9);
void M_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
void M_lib_mGraphics_drawImageFog_javax_microedition_lcdui_Image_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
void M_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3);
jobject SM_lib_mGraphics_getRoundedRectNinePatch_int_R_com_badlogic_gdx_graphics_g2d_NinePatch(jcontext ctx, jint param0);
void M_lib_mGraphics_fillRect_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7);
jobject SM_lib_mGraphics_getOutlineRoundedNinePatch_int_int_R_com_badlogic_gdx_graphics_g2d_NinePatch(jcontext ctx, jint param0, jint param1);
void M_lib_mGraphics_drawRoundRect_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5);
void M_lib_mGraphics_fillRoundRect_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5);
void M_lib_mGraphics_fillTrans_javax_microedition_lcdui_Image_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
void M_lib_mGraphics_fillArg_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5);
void M_lib_mGraphics_drawRegion_nro_Small_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8);
jfloat M_lib_mGraphics_getAngle_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_float(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_lib_mGraphics_setColor_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void M_lib_mGraphics_setColor_int(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
