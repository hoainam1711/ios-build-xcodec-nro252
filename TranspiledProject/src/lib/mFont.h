#ifndef HEADER_lib_mFont
#define HEADER_lib_mFont

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct lib_mFont {
	java_lang_Object parent;
	jint F_space;
	jint F_height;
	jref F_imgFont;
	jref F_strFont;
	jref F_fImages;
	jref F_pathImage;
	jref F_ttfFont;
	jref F_fontColor;
	jref F_outlineColor;
	jfloat F_yOffset;
} lib_mFont;

extern Class class_lib_mFont;

extern jobject SF_lib_mFont_str;
extern jobject SF_lib_mFont_tahoma_7b_red;
extern jobject SF_lib_mFont_tahoma_7b_blue;
extern jobject SF_lib_mFont_tahoma_7b_white;
extern jobject SF_lib_mFont_tahoma_7b_yellow;
extern jobject SF_lib_mFont_tahoma_7b_yellowSmall;
extern jobject SF_lib_mFont_tahoma_7b_redSmall;
extern jobject SF_lib_mFont_tahoma_7b_dark;
extern jobject SF_lib_mFont_tahoma_7b_green2;
extern jobject SF_lib_mFont_tahoma_7b_green;
extern jobject SF_lib_mFont_tahoma_7b_focus;
extern jobject SF_lib_mFont_tahoma_7b_unfocus;
extern jobject SF_lib_mFont_tahoma_7;
extern jobject SF_lib_mFont_tahoma_7_blue1;
extern jobject SF_lib_mFont_tahoma_7_green2;
extern jobject SF_lib_mFont_tahoma_7_yellow;
extern jobject SF_lib_mFont_tahoma_7_grey;
extern jobject SF_lib_mFont_tahoma_7_red;
extern jobject SF_lib_mFont_tahoma_7_blue;
extern jobject SF_lib_mFont_tahoma_7_green;
extern jobject SF_lib_mFont_tahoma_7_white;
extern jobject SF_lib_mFont_tahoma_8b;
extern jobject SF_lib_mFont_number_yellow;
extern jobject SF_lib_mFont_number_red;
extern jobject SF_lib_mFont_number_green;
extern jobject SF_lib_mFont_number_gray;
extern jobject SF_lib_mFont_number_orange;
extern jobject SF_lib_mFont_bigNumber_red;
extern jobject SF_lib_mFont_bigNumber_While;
extern jobject SF_lib_mFont_bigNumber_yellow;
extern jobject SF_lib_mFont_bigNumber_green;
extern jobject SF_lib_mFont_bigNumber_orange;
extern jobject SF_lib_mFont_bigNumber_blue;
extern jobject SF_lib_mFont_bigNumber_black;
extern jobject SF_lib_mFont_nameFontRed;
extern jobject SF_lib_mFont_nameFontYellow;
extern jobject SF_lib_mFont_nameFontGreen;
extern jobject SF_lib_mFont_tahoma_7_greySmall;
extern jobject SF_lib_mFont_tahoma_7b_yellowSmall2;
extern jobject SF_lib_mFont_tahoma_7b_green2Small;
extern jobject SF_lib_mFont_tahoma_7_whiteSmall;
extern jobject SF_lib_mFont_tahoma_7b_greenSmall;
extern jobject SF_lib_mFont_tahoma_7b_darkSmall;
extern jobject SF_lib_mFont_tahoma_7b_whiteSmall;
extern jobject SF_lib_mFont_tahoma_7b_greySmall;
extern jobject SF_lib_mFont_J;
extern jobject SF_lib_mFont_glyphLayout;
extern jbool SF_lib_mFont_ttfInitialized;
extern jbool SF_lib_mFont_isPixelFont;
extern jbool SF_lib_mFont_isPixelDamageFont;
extern jbool SF_lib_mFont_fontPreferenceLoaded;
extern jobject SF_lib_mFont_currentBarmeneb;
extern jobject SF_lib_mFont_currentBarmenebBold;
extern jobject SF_lib_mFont_currentBarmenebSmall;
extern jobject SF_lib_mFont_currentChelthm;
extern jobject SF_lib_mFont_currentChelthmSmall;
extern jobject SF_lib_mFont_currentStaccato;
extern jobject SF_lib_mFont_VIETNAMESE_CHARS;
extern jobject SF_lib_mFont_colorJava;

#define VTABLE_lib_mFont_hashCode_R_int 0
typedef jint (*func_lib_mFont_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_mFont_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_lib_mFont_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_mFont_clone_R_java_lang_Object 2
typedef jobject (*func_lib_mFont_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_lib_mFont_getClass_R_java_lang_Class 3
typedef jobject (*func_lib_mFont_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_lib_mFont_toString_R_java_lang_String 4
typedef jobject (*func_lib_mFont_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_lib_mFont_finalize 5
typedef void (*func_lib_mFont_finalize)(jcontext ctx, jobject self);
#define VTABLE_lib_mFont_notify 6
typedef void (*func_lib_mFont_notify)(jcontext ctx, jobject self);
#define VTABLE_lib_mFont_notifyAll 7
typedef void (*func_lib_mFont_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_lib_mFont_wait 8
typedef void (*func_lib_mFont_wait)(jcontext ctx, jobject self);
#define VTABLE_lib_mFont_wait_long 9
typedef void (*func_lib_mFont_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_lib_mFont_wait_long_int 10
typedef void (*func_lib_mFont_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_lib_mFont_hasTTF_R_boolean 11
typedef jbool (*func_lib_mFont_hasTTF_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_lib_mFont_getHeight_R_int 12
typedef jint (*func_lib_mFont_getHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_mFont_getCharIndex_char_R_int 13
typedef jint (*func_lib_mFont_getCharIndex_char_R_int)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_lib_mFont_getWidth_java_lang_String_R_int 14
typedef jint (*func_lib_mFont_getWidth_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_mFont_getTTFWidth_java_lang_String_R_int 15
typedef jint (*func_lib_mFont_getTTFWidth_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int 16
typedef void (*func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4);
#define VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont 17
typedef void (*func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5);
#define VTABLE_lib_mFont_drawStringTTF_lib_mGraphics_java_lang_String_int_int_int 18
typedef void (*func_lib_mFont_drawStringTTF_lib_mGraphics_java_lang_String_int_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4);
#define VTABLE_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String 19
typedef jobject (*func_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_lib_mFont_drawText_lib_mGraphics_java_lang_String_int_int_int 20
typedef void (*func_lib_mFont_drawText_lib_mGraphics_java_lang_String_int_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4);
#define VTABLE_lib_mFont_drawStringWithFontType_lib_mGraphics_java_lang_String_int_int_int_lib_mFont 21
typedef void (*func_lib_mFont_drawStringWithFontType_lib_mGraphics_java_lang_String_int_int_int_lib_mFont)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5);

void mark_lib_mFont(jobject object, jint mark, jint depth);
void clinit_lib_mFont(jcontext ctx);
void init_lib_mFont(jcontext ctx, jobject self);
void init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3);
jobject SM_lib_mFont_colorFromRGB_int_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jint param0);
jobject SM_lib_mFont_generateTTFFont_java_lang_String_int_boolean_R_com_badlogic_gdx_graphics_g2d_BitmapFont(jcontext ctx, jobject param0, jint param1, jbool param2);
jobject SM_lib_mFont_generateTTFFont_java_lang_String_int_R_com_badlogic_gdx_graphics_g2d_BitmapFont(jcontext ctx, jobject param0, jint param1);
jint SM_lib_mFont_getExactFontSize_java_lang_String_int_R_int(jcontext ctx, jobject param0, jint param1);
void SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3);
void SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4);
void SM_lib_mFont_toggleFontMode(jcontext ctx);
void SM_lib_mFont_toggleDamageFontMode(jcontext ctx);
void SM_lib_mFont_disposeOldFonts(jcontext ctx);
void SM_lib_mFont_initTTF(jcontext ctx);
jbool M_lib_mFont_hasTTF_R_boolean(jcontext ctx, jobject self);
jint M_lib_mFont_getHeight_R_int(jcontext ctx, jobject self);
jint M_lib_mFont_getCharIndex_char_R_int(jcontext ctx, jobject self, jchar param0);
jint M_lib_mFont_getWidth_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jint M_lib_mFont_getTTFWidth_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
void M_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4);
void M_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5);
void M_lib_mFont_drawStringTTF_lib_mGraphics_java_lang_String_int_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4);
jobject M_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1);
void M_lib_mFont_drawText_lib_mGraphics_java_lang_String_int_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4);
void M_lib_mFont_drawStringWithFontType_lib_mGraphics_java_lang_String_int_int_int_lib_mFont(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5);

#ifdef __cplusplus
}
#endif

#endif
