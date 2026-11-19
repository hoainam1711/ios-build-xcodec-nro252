#include "lib/mFont.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Vector.h"
#include "main/GameCanvas.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator.h"
#include "java/io/InputStream.h"
#include "java/lang/String.h"
#include "javax/microedition/lcdui/Image.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "lib/image/MyStream.h"
#include "lib/sound/SoundMn.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator_FreeTypeFontParameter.h"
#include "java/io/IOException.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont.h"
#include "java/lang/Throwable.h"
#include "lib/mSystem.h"
#include "lib/mFont.h"
#include "java/lang/Exception.h"
#include "lib/mGraphics.h"
#include "java/lang/AutoCloseable.h"
#include "java/io/DataInputStream.h"
#include "com/badlogic/gdx/graphics/Texture_TextureFilter.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/Files.h"
#include "java/lang/CharSequence.h"
#include "com/badlogic/gdx/graphics/g2d/GlyphLayout.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "nro/Rms.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {

jobject SF_lib_mFont_str;
jobject SF_lib_mFont_tahoma_7b_red;
jobject SF_lib_mFont_tahoma_7b_blue;
jobject SF_lib_mFont_tahoma_7b_white;
jobject SF_lib_mFont_tahoma_7b_yellow;
jobject SF_lib_mFont_tahoma_7b_yellowSmall;
jobject SF_lib_mFont_tahoma_7b_redSmall;
jobject SF_lib_mFont_tahoma_7b_dark;
jobject SF_lib_mFont_tahoma_7b_green2;
jobject SF_lib_mFont_tahoma_7b_green;
jobject SF_lib_mFont_tahoma_7b_focus;
jobject SF_lib_mFont_tahoma_7b_unfocus;
jobject SF_lib_mFont_tahoma_7;
jobject SF_lib_mFont_tahoma_7_blue1;
jobject SF_lib_mFont_tahoma_7_green2;
jobject SF_lib_mFont_tahoma_7_yellow;
jobject SF_lib_mFont_tahoma_7_grey;
jobject SF_lib_mFont_tahoma_7_red;
jobject SF_lib_mFont_tahoma_7_blue;
jobject SF_lib_mFont_tahoma_7_green;
jobject SF_lib_mFont_tahoma_7_white;
jobject SF_lib_mFont_tahoma_8b;
jobject SF_lib_mFont_number_yellow;
jobject SF_lib_mFont_number_red;
jobject SF_lib_mFont_number_green;
jobject SF_lib_mFont_number_gray;
jobject SF_lib_mFont_number_orange;
jobject SF_lib_mFont_bigNumber_red;
jobject SF_lib_mFont_bigNumber_While;
jobject SF_lib_mFont_bigNumber_yellow;
jobject SF_lib_mFont_bigNumber_green;
jobject SF_lib_mFont_bigNumber_orange;
jobject SF_lib_mFont_bigNumber_blue;
jobject SF_lib_mFont_bigNumber_black;
jobject SF_lib_mFont_nameFontRed;
jobject SF_lib_mFont_nameFontYellow;
jobject SF_lib_mFont_nameFontGreen;
jobject SF_lib_mFont_tahoma_7_greySmall;
jobject SF_lib_mFont_tahoma_7b_yellowSmall2;
jobject SF_lib_mFont_tahoma_7b_green2Small;
jobject SF_lib_mFont_tahoma_7_whiteSmall;
jobject SF_lib_mFont_tahoma_7b_greenSmall;
jobject SF_lib_mFont_tahoma_7b_darkSmall;
jobject SF_lib_mFont_tahoma_7b_whiteSmall;
jobject SF_lib_mFont_tahoma_7b_greySmall;
jobject SF_lib_mFont_J;
jobject SF_lib_mFont_glyphLayout;
jbool SF_lib_mFont_ttfInitialized;
jbool SF_lib_mFont_isPixelFont;
jbool SF_lib_mFont_isPixelDamageFont;
jbool SF_lib_mFont_fontPreferenceLoaded;
jobject SF_lib_mFont_currentBarmeneb;
jobject SF_lib_mFont_currentBarmenebBold;
jobject SF_lib_mFont_currentBarmenebSmall;
jobject SF_lib_mFont_currentChelthm;
jobject SF_lib_mFont_currentChelthmSmall;
jobject SF_lib_mFont_currentStaccato;
jobject SF_lib_mFont_VIETNAMESE_CHARS;
jobject SF_lib_mFont_colorJava;

void mark_lib_mFont(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_lib_mFont_str)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_str)->clazz)->markFunction)((jobject) SF_lib_mFont_str, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7b_red)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7b_red)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7b_red, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7b_blue)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7b_blue)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7b_blue, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7b_white)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7b_white)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7b_white, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7b_yellow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7b_yellow)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7b_yellow, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7b_yellowSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7b_yellowSmall)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7b_yellowSmall, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7b_redSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7b_redSmall)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7b_redSmall, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7b_dark)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7b_dark)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7b_dark, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7b_green2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7b_green2)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7b_green2, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7b_green)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7b_green)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7b_green, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7b_focus)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7b_focus)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7b_focus, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7b_unfocus)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7b_unfocus)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7b_unfocus, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7_blue1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7_blue1)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7_blue1, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7_green2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7_green2)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7_green2, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7_yellow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7_yellow)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7_yellow, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7_grey)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7_grey)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7_grey, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7_red)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7_red)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7_red, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7_blue)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7_blue)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7_blue, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7_green)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7_green)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7_green, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7_white)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7_white)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7_white, mark, depth + 1);
		if (SF_lib_mFont_tahoma_8b)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_8b)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_8b, mark, depth + 1);
		if (SF_lib_mFont_number_yellow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_number_yellow)->clazz)->markFunction)((jobject) SF_lib_mFont_number_yellow, mark, depth + 1);
		if (SF_lib_mFont_number_red)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_number_red)->clazz)->markFunction)((jobject) SF_lib_mFont_number_red, mark, depth + 1);
		if (SF_lib_mFont_number_green)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_number_green)->clazz)->markFunction)((jobject) SF_lib_mFont_number_green, mark, depth + 1);
		if (SF_lib_mFont_number_gray)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_number_gray)->clazz)->markFunction)((jobject) SF_lib_mFont_number_gray, mark, depth + 1);
		if (SF_lib_mFont_number_orange)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_number_orange)->clazz)->markFunction)((jobject) SF_lib_mFont_number_orange, mark, depth + 1);
		if (SF_lib_mFont_bigNumber_red)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_bigNumber_red)->clazz)->markFunction)((jobject) SF_lib_mFont_bigNumber_red, mark, depth + 1);
		if (SF_lib_mFont_bigNumber_While)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_bigNumber_While)->clazz)->markFunction)((jobject) SF_lib_mFont_bigNumber_While, mark, depth + 1);
		if (SF_lib_mFont_bigNumber_yellow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_bigNumber_yellow)->clazz)->markFunction)((jobject) SF_lib_mFont_bigNumber_yellow, mark, depth + 1);
		if (SF_lib_mFont_bigNumber_green)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_bigNumber_green)->clazz)->markFunction)((jobject) SF_lib_mFont_bigNumber_green, mark, depth + 1);
		if (SF_lib_mFont_bigNumber_orange)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_bigNumber_orange)->clazz)->markFunction)((jobject) SF_lib_mFont_bigNumber_orange, mark, depth + 1);
		if (SF_lib_mFont_bigNumber_blue)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_bigNumber_blue)->clazz)->markFunction)((jobject) SF_lib_mFont_bigNumber_blue, mark, depth + 1);
		if (SF_lib_mFont_bigNumber_black)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_bigNumber_black)->clazz)->markFunction)((jobject) SF_lib_mFont_bigNumber_black, mark, depth + 1);
		if (SF_lib_mFont_nameFontRed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_nameFontRed)->clazz)->markFunction)((jobject) SF_lib_mFont_nameFontRed, mark, depth + 1);
		if (SF_lib_mFont_nameFontYellow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_nameFontYellow)->clazz)->markFunction)((jobject) SF_lib_mFont_nameFontYellow, mark, depth + 1);
		if (SF_lib_mFont_nameFontGreen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_nameFontGreen)->clazz)->markFunction)((jobject) SF_lib_mFont_nameFontGreen, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7_greySmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7_greySmall)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7_greySmall, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7b_yellowSmall2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7b_yellowSmall2)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7b_yellowSmall2, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7b_green2Small)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7b_green2Small)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7b_green2Small, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7_whiteSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7_whiteSmall)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7_whiteSmall, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7b_greenSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7b_greenSmall)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7b_greenSmall, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7b_darkSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7b_darkSmall)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7b_darkSmall, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7b_whiteSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7b_whiteSmall)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7b_whiteSmall, mark, depth + 1);
		if (SF_lib_mFont_tahoma_7b_greySmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_tahoma_7b_greySmall)->clazz)->markFunction)((jobject) SF_lib_mFont_tahoma_7b_greySmall, mark, depth + 1);
		if (SF_lib_mFont_J)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_J)->clazz)->markFunction)((jobject) SF_lib_mFont_J, mark, depth + 1);
		if (SF_lib_mFont_glyphLayout)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_glyphLayout)->clazz)->markFunction)((jobject) SF_lib_mFont_glyphLayout, mark, depth + 1);
		if (SF_lib_mFont_currentBarmeneb)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_currentBarmeneb)->clazz)->markFunction)((jobject) SF_lib_mFont_currentBarmeneb, mark, depth + 1);
		if (SF_lib_mFont_currentBarmenebBold)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_currentBarmenebBold)->clazz)->markFunction)((jobject) SF_lib_mFont_currentBarmenebBold, mark, depth + 1);
		if (SF_lib_mFont_currentBarmenebSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_currentBarmenebSmall)->clazz)->markFunction)((jobject) SF_lib_mFont_currentBarmenebSmall, mark, depth + 1);
		if (SF_lib_mFont_currentChelthm)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_currentChelthm)->clazz)->markFunction)((jobject) SF_lib_mFont_currentChelthm, mark, depth + 1);
		if (SF_lib_mFont_currentChelthmSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_currentChelthmSmall)->clazz)->markFunction)((jobject) SF_lib_mFont_currentChelthmSmall, mark, depth + 1);
		if (SF_lib_mFont_currentStaccato)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_currentStaccato)->clazz)->markFunction)((jobject) SF_lib_mFont_currentStaccato, mark, depth + 1);
		if (SF_lib_mFont_VIETNAMESE_CHARS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_VIETNAMESE_CHARS)->clazz)->markFunction)((jobject) SF_lib_mFont_VIETNAMESE_CHARS, mark, depth + 1);
		if (SF_lib_mFont_colorJava)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mFont_colorJava)->clazz)->markFunction)((jobject) SF_lib_mFont_colorJava, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (lib_mFont *) object;
	if (self->F_imgFont)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imgFont)->clazz)->markFunction)((jobject) self->F_imgFont, mark, depth + 1);
	if (self->F_strFont)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_strFont)->clazz)->markFunction)((jobject) self->F_strFont, mark, depth + 1);
	if (self->F_fImages)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fImages)->clazz)->markFunction)((jobject) self->F_fImages, mark, depth + 1);
	if (self->F_pathImage)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pathImage)->clazz)->markFunction)((jobject) self->F_pathImage, mark, depth + 1);
	if (self->F_ttfFont)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ttfFont)->clazz)->markFunction)((jobject) self->F_ttfFont, mark, depth + 1);
	if (self->F_fontColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fontColor)->clazz)->markFunction)((jobject) self->F_fontColor, mark, depth + 1);
	if (self->F_outlineColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outlineColor)->clazz)->markFunction)((jobject) self->F_outlineColor, mark, depth + 1);
}

void init_lib_mFont(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mFont:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mFont(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(344);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1250);
	((lib_mFont *) NULL_CHECK((frame[0].o)))->F_yOffset = (jfloat(2.5f));
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mFont:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	clinit_lib_mFont(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(350);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1250);
	((lib_mFont *) NULL_CHECK((frame[0].o)))->F_yOffset = (jfloat(2.5f));
	}
label_33: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_32; }
	}
	{
	LINE_NUMBER(354);
	((lib_mFont *) NULL_CHECK((frame[0].o)))->F_strFont = (jref) (frame[1].o);
	LINE_NUMBER(356);
	((lib_mFont *) NULL_CHECK((frame[0].o)))->F_space = (frame[4].i);
	LINE_NUMBER(358);
	((lib_mFont *) NULL_CHECK((frame[0].o)))->F_pathImage = (jref) (frame[2].o);
	LINE_NUMBER(360);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(364);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_pathImage;
	sp[1].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[1].o);
	((lib_mFont *) NULL_CHECK(sp[0].o))->F_imgFont = (jref) sp[1].o;
	LINE_NUMBER(368);
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_imgFont;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_imgFont;
	sp[0].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK(sp[0].o))->F_texture;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_imgFont;
	SM_javax_microedition_lcdui_Image_setFontTextureQuality_javax_microedition_lcdui_Image(ctx, sp[0].o);
	}
label_8:;
label_20: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_35; } // goto label_19
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); bypasses[1] = true; goto label_35; } // goto label_10
	}
	{
	LINE_NUMBER(378);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	sp[1].o = (jobject)SM_lib_image_MyStream_readFile_java_lang_String_R_java_io_InputStream(ctx, (frame[3].o));
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(380);
	if ((frame[5].o) != nullptr) { popExceptionFrames(frameRef, 3); goto label_12; }
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(418);
	if ((frame[5].o) == nullptr) goto label_31;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(422);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(428);
	goto label_31;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(424);
	frame[6].o = sp[0].o;
	LINE_NUMBER(426);
	((func_java_io_IOException_printStackTrace) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_io_IOException_printStackTrace])(ctx, (frame[6].o));
	}
label_31:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(382);
	popStackFrame(ctx);
	INST_RETURN();
label_12:;
label_35: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_32; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_19; }
	if (bypasses[1]) { bypasses[1] = false; goto label_10; }
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_19; }
	}
label_14: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_10; }
	}
	{
	LINE_NUMBER(388);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[5].o));
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), temp0);
	((lib_mFont *) NULL_CHECK(sp[0].o))->F_fImages = (jref) sp[1].o;
	LINE_NUMBER(392);
	frame[6].i = (jint(0));
	}
label_47:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_13;
	}
	{
	LINE_NUMBER(394);
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	jint temp0 = frame[6].i;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(396);
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i));
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[5].o));
	ARRAY_ACCESS(jint, sp[0].o, temp1) = temp2;
	LINE_NUMBER(398);
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i));
	jint temp3 = jint(1);
	jint temp4 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[5].o));
	ARRAY_ACCESS(jint, sp[0].o, temp3) = temp4;
	LINE_NUMBER(400);
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i));
	jint temp5 = jint(2);
	jint temp6 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[5].o));
	ARRAY_ACCESS(jint, sp[0].o, temp5) = temp6;
	LINE_NUMBER(402);
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i));
	jint temp7 = jint(3);
	jint temp8 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[5].o));
	ARRAY_ACCESS(jint, sp[0].o, temp7) = temp8;
	LINE_NUMBER(404);
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	frame[7].i = ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i))), (jint(3))));
	LINE_NUMBER(406);
	((lib_mFont *) NULL_CHECK((frame[0].o)))->F_height = (frame[7].i);
	LINE_NUMBER(392);
	INST_IINC(6, 1);
	goto label_47;
	}
label_13:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(418);
	if ((frame[5].o) == nullptr) goto label_34;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(422);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(428);
	goto label_34;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(424);
	frame[6].o = sp[0].o;
	LINE_NUMBER(426);
	((func_java_io_IOException_printStackTrace) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_io_IOException_printStackTrace])(ctx, (frame[6].o));
	LINE_NUMBER(428);
	goto label_34;
	}
label_10:;
label_23: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_19; }
	}
	{
	sp -= 1;
	LINE_NUMBER(412);
	frame[6].o = sp[0].o;
	LINE_NUMBER(414);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(418);
	if ((frame[5].o) == nullptr) goto label_34;
	}
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_17; }
	}
	{
	LINE_NUMBER(422);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(428);
	goto label_34;
label_17:;
	{
	sp -= 1;
	LINE_NUMBER(424);
	frame[6].o = sp[0].o;
	LINE_NUMBER(426);
	((func_java_io_IOException_printStackTrace) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_io_IOException_printStackTrace])(ctx, (frame[6].o));
	LINE_NUMBER(428);
	goto label_34;
	}
label_19:;
label_29: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_19; }
	}
	LINE_NUMBER(418);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_61;
label_27: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_26; }
	}
	{
	LINE_NUMBER(422);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(428);
	goto label_61;
label_26:;
	{
	sp -= 1;
	LINE_NUMBER(424);
	frame[9].o = sp[0].o;
	LINE_NUMBER(426);
	((func_java_io_IOException_printStackTrace) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_io_IOException_printStackTrace])(ctx, (frame[9].o));
	}
label_61:;
	{
	LINE_NUMBER(432);
	throwException(ctx, (frame[8].o));	}
label_34:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(438);
	goto label_63;
label_32:;
	{
	sp -= 1;
	LINE_NUMBER(434);
	frame[5].o = sp[0].o;
	LINE_NUMBER(436);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[5].o));
	}
label_63:;
	LINE_NUMBER(440);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_lib_mFont_colorFromRGB_int_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jint param0) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mFont:colorFromRGB", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mFont(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(456);
	frame[1].f = ((jfloat((((frame[0].i) >> (16)) & (255)))) / (jfloat(255.0f)));
	LINE_NUMBER(458);
	frame[2].f = ((jfloat((((frame[0].i) >> (8)) & (255)))) / (jfloat(255.0f)));
	LINE_NUMBER(460);
	frame[3].f = ((jfloat(((frame[0].i) & (255)))) / (jfloat(255.0f)));
	LINE_NUMBER(462);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (jfloat(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_lib_mFont_generateTTFFont_java_lang_String_int_boolean_R_com_badlogic_gdx_graphics_g2d_BitmapFont(jcontext ctx, jobject param0, jint param1, jbool param2) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mFont:generateTTFFont", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mFont(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(482);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mFont: Generating TTF "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" at size "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" (pixel="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_lib_mSystem_println_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(484);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[1].o = (jobject)((func_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[1].o))(ctx, sp[1].o, (frame[0].o));
	init_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_com_badlogic_gdx_files_FileHandle(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(486);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter);
	init_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(488);
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[4].o)))->F_size = (frame[1].i);
	LINE_NUMBER(490);
	sp[0].o = frame[4].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Color_WHITE;
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(492);
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[4].o)))->F_flip = (jint(1));
	LINE_NUMBER(494);
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[4].o)))->F_characters = (jref) (((jobject) createStringLiteral(ctx, u8"\u0000ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890\"!`?'.,;:()[]{}<>|/@\\^$\u20ac-%+=#_&~*\u0080\u0081\u0082\u0083\u0084\u0085\u0086\u0087\u0088\u0089\u008a\u008b\u008c\u008d\u008e\u008f\u0090\u0091\u0092\u0093\u0094\u0095\u0096\u0097\u0098\u0099\u009a\u009b\u009c\u009d\u009e\u009f\u00a0\u00a1\u00a2\u00a3\u00a4\u00a5\u00a6\u00a7\u00a8\u00a9\u00aa\u00ab\u00ac\u00ad\u00ae\u00af\u00b0\u00b1\u00b2\u00b3\u00b4\u00b5\u00b6\u00b7\u00b8\u00b9\u00ba\u00bb\u00bc\u00bd\u00be\u00bf\u00c0\u00c1\u00c2\u00c3\u00c4\u00c5\u00c6\u00c7\u00c8\u00c9\u00ca\u00cb\u00cc\u00cd\u00ce\u00cf\u00d0\u00d1\u00d2\u00d3\u00d4\u00d5\u00d6\u00d7\u00d8\u00d9\u00da\u00db\u00dc\u00dd\u00de\u00df\u00e0\u00e1\u00e2\u00e3\u00e4\u00e5\u00e6\u00e7\u00e8\u00e9\u00ea\u00eb\u00ec\u00ed\u00ee\u00ef\u00f0\u00f1\u00f2\u00f3\u00f4\u00f5\u00f6\u00f7\u00f8\u00f9\u00fa\u00fb\u00fc\u00fd\u00fe\u00ff\u00e1\u00e0\u1ea3\u00e3\u1ea1\u00e2\u1ea5\u1ea7\u1ea9\u1eab\u1ead\u0103\u1eaf\u1eb1\u1eb3\u1eb5\u1eb7bcd\u0111e\u00e9\u00e8\u1ebb\u1ebd\u1eb9\u00ea\u1ebf\u1ec1\u1ec3\u1ec5\u1ec7fghi\u00ed\u00ec\u1ec9\u0129\u1ecbjklmno\u00f3\u00f2\u1ecf\u00f5\u1ecd\u00f4\u1ed1\u1ed3\u1ed5\u1ed7\u1ed9\u01a1\u1edb\u1edd\u1edf\u1ee1\u1ee3pqrstu\u00fa\u00f9\u1ee7\u0169\u1ee5\u01b0\u1ee9\u1eeb\u1eed\u1eef\u1ef1vxy\u00fd\u1ef3\u1ef7\u1ef9\u1ef5zw\u00c1\u00c0\u1ea2\u00c3\u1ea0\u0102\u1eb0\u1eae\u1eb2\u1eb4\u1eb6\u00c2\u1ea4\u1ea6\u1ea8\u1eaa\u1eacBCD\u0110E\u00c9\u00c8\u1eba\u1ebc\u1eb8\u00ca\u1ebe\u1ec0\u1ec2\u1ec4\u1ec6FGHI\u00cd\u00cc\u1ec8\u0128\u1ecaJKLMNO\u00d3\u00d2\u1ece\u00d5\u1ecc\u00d4\u1ed0\u1ed2\u1ed4\u1ed6\u1ed8\u01a0\u1eda\u1edc\u1ede\u1ee0\u1ee2PQRSTU\u00da\u00d9\u1ee6\u0168\u1ee4\u01af\u1ee8\u1eea\u1eec\u1eee\u1ef0VXY\u00dd\u1ef2\u1ef6\u1ef8\u1ef4ZW\u2026\u2013\u2014\u2022\u00b7\u00a0\u2019\u2018\u201c\u201d"_j)));
	LINE_NUMBER(496);
	sp[0].o = frame[4].o;
	sp += 1;
	if ((frame[2].i) == 0) goto label_11;
	}
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	(sp++)->o = SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Nearest;
	goto label_12;
label_11:;
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	(sp++)->o = SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Linear;
label_12:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[0].o))->F_minFilter = (jref) sp[1].o;
	LINE_NUMBER(498);
	sp[0].o = frame[4].o;
	sp += 1;
	if ((frame[2].i) == 0) goto label_14;
	}
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	(sp++)->o = SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Nearest;
	goto label_15;
label_14:;
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	(sp++)->o = SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Linear;
label_15:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[0].o))->F_magFilter = (jref) sp[1].o;
	LINE_NUMBER(500);
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[4].o)))->F_genMipMaps = (jint(0));
	LINE_NUMBER(504);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateFont_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_com_badlogic_gdx_graphics_g2d_BitmapFont) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateFont_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_com_badlogic_gdx_graphics_g2d_BitmapFont])(ctx, (frame[3].o), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(506);
	((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_dispose) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_dispose])(ctx, (frame[3].o));
	LINE_NUMBER(508);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mFont: Generated TTF "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" successfully"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_lib_mSystem_println_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(510);
	sp[0].o = frame[5].o;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(512);
	frame[3].o = sp[0].o;
	LINE_NUMBER(514);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mFont: Failed to generate TTF font from "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[1].o = (jobject)((func_java_lang_Throwable_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Throwable_getMessage_R_java_lang_String])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_lib_mSystem_println_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(516);
	((func_java_lang_Throwable_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Throwable_printStackTrace])(ctx, (frame[3].o));
	LINE_NUMBER(518);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_lib_mFont_generateTTFFont_java_lang_String_int_R_com_badlogic_gdx_graphics_g2d_BitmapFont(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mFont:generateTTFFont", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mFont(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(528);
	sp[0].o = (jobject)SM_lib_mFont_generateTTFFont_java_lang_String_int_boolean_R_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx, (frame[0].o), (frame[1].i), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_lib_mFont_getExactFontSize_java_lang_String_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mFont:getExactFontSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mFont(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(542);
	if ((frame[1].i) > (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(544);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"barmeneb"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"barmeneb"_j))), (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	INST_BIPUSH(14);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(546);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"chelthm"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"chelthm"_j))), (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	INST_BIPUSH(12);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(548);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"staccato"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"staccato"_j))), (frame[0].o));
	if (temp0 == 0) goto label_5;
	}
	INST_BIPUSH(16);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(550);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"determination_regular"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"determination_regular"_j))), (frame[0].o));
	if (temp0 == 0) goto label_6;
	}
	INST_BIPUSH(11);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(552);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"determination_bold"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"determination_bold"_j))), (frame[0].o));
	if (temp0 == 0) goto label_7;
	}
	INST_BIPUSH(13);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(554);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"determination_small"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"determination_small"_j))), (frame[0].o));
	if (temp0 == 0) goto label_8;
	}
	INST_BIPUSH(10);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(556);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"determination_damage"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"determination_damage"_j))), (frame[0].o));
	if (temp0 == 0) goto label_9;
	}
	INST_BIPUSH(15);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(558);
	if ((frame[1].i) != (jint(2))) goto label_10;
	}
	{
	LINE_NUMBER(560);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"barmeneb"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"barmeneb"_j))), (frame[0].o));
	if (temp0 == 0) goto label_12;
	}
	INST_BIPUSH(19);
	popStackFrame(ctx);
	INST_IRETURN();
label_12:;
	{
	LINE_NUMBER(562);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"chelthm"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"chelthm"_j))), (frame[0].o));
	if (temp0 == 0) goto label_13;
	}
	INST_BIPUSH(16);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(564);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"staccato"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"staccato"_j))), (frame[0].o));
	if (temp0 == 0) goto label_14;
	}
	INST_BIPUSH(22);
	popStackFrame(ctx);
	INST_IRETURN();
label_14:;
	{
	LINE_NUMBER(566);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"determination_regular"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"determination_regular"_j))), (frame[0].o));
	if (temp0 == 0) goto label_15;
	}
	INST_BIPUSH(16);
	popStackFrame(ctx);
	INST_IRETURN();
label_15:;
	{
	LINE_NUMBER(568);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"determination_bold"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"determination_bold"_j))), (frame[0].o));
	if (temp0 == 0) goto label_16;
	}
	INST_BIPUSH(18);
	popStackFrame(ctx);
	INST_IRETURN();
label_16:;
	{
	LINE_NUMBER(570);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"determination_small"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"determination_small"_j))), (frame[0].o));
	if (temp0 == 0) goto label_17;
	}
	INST_BIPUSH(13);
	popStackFrame(ctx);
	INST_IRETURN();
label_17:;
	{
	LINE_NUMBER(572);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"determination_damage"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"determination_damage"_j))), (frame[0].o));
	if (temp0 == 0) goto label_9;
	}
	INST_BIPUSH(21);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(574);
	if ((frame[1].i) != (jint(3))) goto label_18;
	}
	{
	LINE_NUMBER(576);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"barmeneb"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"barmeneb"_j))), (frame[0].o));
	if (temp0 == 0) goto label_20;
	}
	INST_BIPUSH(28);
	popStackFrame(ctx);
	INST_IRETURN();
label_20:;
	{
	LINE_NUMBER(578);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"chelthm"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"chelthm"_j))), (frame[0].o));
	if (temp0 == 0) goto label_21;
	}
	INST_BIPUSH(24);
	popStackFrame(ctx);
	INST_IRETURN();
label_21:;
	{
	LINE_NUMBER(580);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"staccato"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"staccato"_j))), (frame[0].o));
	if (temp0 == 0) goto label_22;
	}
	INST_BIPUSH(35);
	popStackFrame(ctx);
	INST_IRETURN();
label_22:;
	{
	LINE_NUMBER(582);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"determination_regular"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"determination_regular"_j))), (frame[0].o));
	if (temp0 == 0) goto label_23;
	}
	INST_BIPUSH(23);
	popStackFrame(ctx);
	INST_IRETURN();
label_23:;
	{
	LINE_NUMBER(584);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"determination_bold"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"determination_bold"_j))), (frame[0].o));
	if (temp0 == 0) goto label_24;
	}
	INST_BIPUSH(27);
	popStackFrame(ctx);
	INST_IRETURN();
label_24:;
	{
	LINE_NUMBER(586);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"determination_small"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"determination_small"_j))), (frame[0].o));
	if (temp0 == 0) goto label_25;
	}
	INST_BIPUSH(18);
	popStackFrame(ctx);
	INST_IRETURN();
label_25:;
	{
	LINE_NUMBER(588);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"determination_damage"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"determination_damage"_j))), (frame[0].o));
	if (temp0 == 0) goto label_9;
	}
	INST_BIPUSH(32);
	popStackFrame(ctx);
	INST_IRETURN();
label_18:;
	{
	LINE_NUMBER(590);
	if ((frame[1].i) < (jint(4))) goto label_9;
	}
	{
	LINE_NUMBER(592);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"barmeneb"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"barmeneb"_j))), (frame[0].o));
	if (temp0 == 0) goto label_27;
	}
	{
	popStackFrame(ctx);
	return (((39) * (frame[1].i)) / (jint(4)));
	}
label_27:;
	{
	LINE_NUMBER(594);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"chelthm"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"chelthm"_j))), (frame[0].o));
	if (temp0 == 0) goto label_28;
	}
	{
	popStackFrame(ctx);
	return (((34) * (frame[1].i)) / (jint(4)));
	}
label_28:;
	{
	LINE_NUMBER(596);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"staccato"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"staccato"_j))), (frame[0].o));
	if (temp0 == 0) goto label_29;
	}
	{
	popStackFrame(ctx);
	return (((45) * (frame[1].i)) / (jint(4)));
	}
label_29:;
	{
	LINE_NUMBER(598);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"determination_regular"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"determination_regular"_j))), (frame[0].o));
	if (temp0 == 0) goto label_30;
	}
	{
	popStackFrame(ctx);
	return (((36) * (frame[1].i)) / (jint(4)));
	}
label_30:;
	{
	LINE_NUMBER(600);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"determination_bold"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"determination_bold"_j))), (frame[0].o));
	if (temp0 == 0) goto label_31;
	}
	{
	popStackFrame(ctx);
	return (((42) * (frame[1].i)) / (jint(4)));
	}
label_31:;
	{
	LINE_NUMBER(602);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"determination_small"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"determination_small"_j))), (frame[0].o));
	if (temp0 == 0) goto label_32;
	}
	{
	popStackFrame(ctx);
	return (((28) * (frame[1].i)) / (jint(4)));
	}
label_32:;
	{
	LINE_NUMBER(604);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"determination_damage"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"determination_damage"_j))), (frame[0].o));
	if (temp0 == 0) goto label_9;
	}
	{
	popStackFrame(ctx);
	return (((50) * (frame[1].i)) / (jint(4)));
	}
label_9:;
	{
	LINE_NUMBER(608);
	popStackFrame(ctx);
	return (((16) * (frame[1].i)) / (jint(2)));
	}

	popStackFrame(ctx);
}

void SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mFont:setupTTF", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mFont(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(622);
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (jint(-1)), (frame[3].i));
	LINE_NUMBER(624);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mFont:setupTTF", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mFont(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(636);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(638);
	sp[0].o = (jobject)SM_lib_mFont_colorFromRGB_int_R_com_badlogic_gdx_graphics_Color(ctx, (frame[2].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(640);
	((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fontColor = (jref) (frame[5].o);
	LINE_NUMBER(642);
	if ((frame[3].i) == (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(644);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_mFont_colorFromRGB_int_R_com_badlogic_gdx_graphics_Color(ctx, (frame[3].i));
	((lib_mFont *) NULL_CHECK(sp[0].o))->F_outlineColor = (jref) sp[1].o;
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(648);
	((lib_mFont *) NULL_CHECK((frame[0].o)))->F_outlineColor = (jref) (jobject(nullptr));
	}
label_6:;
	{
	LINE_NUMBER(652);
	((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont = (jref) (frame[1].o);
	LINE_NUMBER(654);
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(656);
	((lib_mFont *) NULL_CHECK((frame[0].o)))->F_height = (frame[4].i);
	}
label_8:;
	LINE_NUMBER(660);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_lib_mFont_toggleFontMode(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mFont:toggleFontMode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mFont(ctx);
	{
	LINE_NUMBER(665);
	if ((clinit_lib_mFont(ctx), (jint)SF_lib_mFont_isPixelFont) != 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	clinit_lib_mFont(ctx);
	SF_lib_mFont_isPixelFont = (--sp)->i;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(667);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"pixelFont"_j));
	sp += 1;
	if ((clinit_lib_mFont(ctx), (jint)SF_lib_mFont_isPixelFont) == 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	POP_N(2); // Pop method args
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, sp[0].o, sp[1].i);
	popExceptionFrame(frameRef);
	LINE_NUMBER(669);
	goto label_9;
label_2:;
	LINE_NUMBER(668);
	INST_ASTORE(0);
label_9:;
	{
	LINE_NUMBER(670);
	SM_lib_mFont_initTTF(ctx);
	LINE_NUMBER(671);
	SM_lib_sound_SoundMn_getStrOption(ctx);
	LINE_NUMBER(672);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_mFont_toggleDamageFontMode(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mFont:toggleDamageFontMode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mFont(ctx);
	{
	LINE_NUMBER(675);
	if ((clinit_lib_mFont(ctx), (jint)SF_lib_mFont_isPixelDamageFont) != 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	clinit_lib_mFont(ctx);
	SF_lib_mFont_isPixelDamageFont = (--sp)->i;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(677);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"pixelDamageFont"_j));
	sp += 1;
	if ((clinit_lib_mFont(ctx), (jint)SF_lib_mFont_isPixelDamageFont) == 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	POP_N(2); // Pop method args
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, sp[0].o, sp[1].i);
	popExceptionFrame(frameRef);
	LINE_NUMBER(679);
	goto label_9;
label_2:;
	LINE_NUMBER(678);
	INST_ASTORE(0);
label_9:;
	{
	LINE_NUMBER(680);
	SM_lib_mFont_initTTF(ctx);
	LINE_NUMBER(681);
	SM_lib_sound_SoundMn_getStrOption(ctx);
	LINE_NUMBER(682);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_mFont_disposeOldFonts(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mFont:disposeOldFonts", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mFont(ctx);
	{
	LINE_NUMBER(685);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_currentBarmeneb;
	if (sp[0].o == nullptr) goto label_25;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_currentBarmeneb;
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_dispose])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_26;
label_2:;
	INST_ASTORE(0);
label_26:;
	INST_ACONST_NULL();
	clinit_lib_mFont(ctx);
	SF_lib_mFont_currentBarmeneb = (--sp)->o;
label_25:;
	{
	LINE_NUMBER(686);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_currentBarmenebBold;
	if (sp[0].o == nullptr) goto label_27;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_currentBarmenebBold;
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_dispose])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_28;
label_6:;
	INST_ASTORE(0);
label_28:;
	INST_ACONST_NULL();
	clinit_lib_mFont(ctx);
	SF_lib_mFont_currentBarmenebBold = (--sp)->o;
label_27:;
	{
	LINE_NUMBER(687);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_currentBarmenebSmall;
	if (sp[0].o == nullptr) goto label_29;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_currentBarmenebSmall;
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_dispose])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_30;
label_10:;
	INST_ASTORE(0);
label_30:;
	INST_ACONST_NULL();
	clinit_lib_mFont(ctx);
	SF_lib_mFont_currentBarmenebSmall = (--sp)->o;
label_29:;
	{
	LINE_NUMBER(688);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_currentChelthm;
	if (sp[0].o == nullptr) goto label_31;
	}
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_currentChelthm;
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_dispose])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_32;
label_14:;
	INST_ASTORE(0);
label_32:;
	INST_ACONST_NULL();
	clinit_lib_mFont(ctx);
	SF_lib_mFont_currentChelthm = (--sp)->o;
label_31:;
	{
	LINE_NUMBER(689);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_currentChelthmSmall;
	if (sp[0].o == nullptr) goto label_33;
	}
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_18; }
	}
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_currentChelthmSmall;
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_dispose])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_34;
label_18:;
	INST_ASTORE(0);
label_34:;
	INST_ACONST_NULL();
	clinit_lib_mFont(ctx);
	SF_lib_mFont_currentChelthmSmall = (--sp)->o;
label_33:;
	{
	LINE_NUMBER(690);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_currentStaccato;
	if (sp[0].o == nullptr) goto label_35;
	}
label_23: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_22; }
	}
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_currentStaccato;
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_dispose])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_36;
label_22:;
	INST_ASTORE(0);
label_36:;
	INST_ACONST_NULL();
	clinit_lib_mFont(ctx);
	SF_lib_mFont_currentStaccato = (--sp)->o;
label_35:;
	LINE_NUMBER(691);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_lib_mFont_initTTF(jcontext ctx) {
	jtype frame[23];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mFont:initTTF", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mFont(ctx);
	{
	LINE_NUMBER(699);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mFont.initTTF: Initializing TTF fonts at zoomLevel="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", pixelFont="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_lib_mFont(ctx), (jint)SF_lib_mFont_isPixelFont));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", pixelDamageFont="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_lib_mFont(ctx), (jint)SF_lib_mFont_isPixelDamageFont));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_lib_mSystem_println_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(700);
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout);
	init_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx, sp[0].o);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_glyphLayout = sp[0].o;
	LINE_NUMBER(702);
	if ((clinit_lib_mFont(ctx), (jint)SF_lib_mFont_fontPreferenceLoaded) != 0) goto label_7;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(704);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"pixelFont"_j))));
	frame[0].i = temp0;
	LINE_NUMBER(705);
	if ((frame[0].i) == (jint(-1))) goto label_9;
	}
	{
	LINE_NUMBER(706);
	if ((frame[0].i) != (jint(1))) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	clinit_lib_mFont(ctx);
	SF_lib_mFont_isPixelFont = (--sp)->i;
	goto label_13;
label_9:;
	{
	LINE_NUMBER(708);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_isPixelFont = (jint(1));
	}
label_13:;
	{
	LINE_NUMBER(710);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"pixelDamageFont"_j))));
	frame[1].i = temp0;
	LINE_NUMBER(711);
	if ((frame[1].i) == (jint(-1))) goto label_15;
	}
	{
	LINE_NUMBER(712);
	if ((frame[1].i) != (jint(1))) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	clinit_lib_mFont(ctx);
	SF_lib_mFont_isPixelDamageFont = (--sp)->i;
	goto label_1;
label_15:;
	{
	LINE_NUMBER(714);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_isPixelDamageFont = (jint(1));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(717);
	goto label_19;
label_2:;
	LINE_NUMBER(716);
	INST_ASTORE(0);
label_19:;
	{
	LINE_NUMBER(718);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_fontPreferenceLoaded = (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(721);
	SM_lib_mFont_disposeOldFonts(ctx);
	LINE_NUMBER(723);
	frame[0].o = (((jobject) createStringLiteral(ctx, u8"myfont/barmeneb.ttf"_j)));
	LINE_NUMBER(724);
	frame[1].o = (((jobject) createStringLiteral(ctx, u8"myfont/chelthm.ttf"_j)));
	LINE_NUMBER(725);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"myfont/staccato.ttf"_j)));
	LINE_NUMBER(726);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"myfont/determination.otf"_j)));
	LINE_NUMBER(727);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_25;
	}
	{
	LINE_NUMBER(728);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"myfont/SVN-Determination Sans.otf"_j)));
	}
label_25:;
	{
	LINE_NUMBER(731);
	frame[4].i = (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel);
	LINE_NUMBER(732);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(733);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(734);
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(735);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(736);
	frame[9].o = (jobject(nullptr));
	LINE_NUMBER(739);
	if ((clinit_lib_mFont(ctx), (jint)SF_lib_mFont_isPixelFont) == 0) goto label_33;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_34;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"myfont/SVN-Determination Sans.otf"_j))));
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_33;
	}
label_34:;
	{
	LINE_NUMBER(740);
	jint temp0 = (jint)SM_lib_mFont_getExactFontSize_java_lang_String_int_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"determination_regular"_j))), (frame[4].i));
	frame[10].i = temp0;
	LINE_NUMBER(741);
	jint temp1 = (jint)SM_lib_mFont_getExactFontSize_java_lang_String_int_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"determination_bold"_j))), (frame[4].i));
	frame[11].i = temp1;
	LINE_NUMBER(742);
	jint temp2 = (jint)SM_lib_mFont_getExactFontSize_java_lang_String_int_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"determination_small"_j))), (frame[4].i));
	frame[12].i = temp2;
	LINE_NUMBER(744);
	sp[0].o = (jobject)SM_lib_mFont_generateTTFFont_java_lang_String_int_boolean_R_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx, (frame[3].o), (frame[11].i), (jint(1)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(745);
	sp[0].o = (jobject)SM_lib_mFont_generateTTFFont_java_lang_String_int_boolean_R_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx, (frame[3].o), ((frame[11].i) + (jint(2))), (jint(1)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(746);
	sp[0].o = (jobject)SM_lib_mFont_generateTTFFont_java_lang_String_int_boolean_R_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx, (frame[3].o), (frame[12].i), (jint(1)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(747);
	sp[0].o = (jobject)SM_lib_mFont_generateTTFFont_java_lang_String_int_boolean_R_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx, (frame[3].o), (frame[10].i), (jint(1)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(748);
	sp[0].o = (jobject)SM_lib_mFont_generateTTFFont_java_lang_String_int_boolean_R_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx, (frame[3].o), (frame[12].i), (jint(1)));
	frame[9].o = sp[0].o;
	}
label_33:;
	{
	LINE_NUMBER(752);
	if ((frame[5].o) == nullptr) goto label_42;
	}
	INST_ALOAD(8);
	if ((--sp)->o != nullptr) goto label_43;
label_42:;
	{
	LINE_NUMBER(753);
	jint temp0 = (jint)SM_lib_mFont_getExactFontSize_java_lang_String_int_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"barmeneb"_j))), (frame[4].i));
	frame[10].i = temp0;
	LINE_NUMBER(754);
	jint temp1 = (jint)SM_lib_mFont_getExactFontSize_java_lang_String_int_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"chelthm"_j))), (frame[4].i));
	frame[11].i = temp1;
	LINE_NUMBER(755);
	sp[0].o = (jobject)SM_lib_mFont_generateTTFFont_java_lang_String_int_boolean_R_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx, (frame[0].o), (frame[10].i), (jint(0)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(756);
	sp[0].o = (jobject)SM_lib_mFont_generateTTFFont_java_lang_String_int_boolean_R_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx, (frame[0].o), ((frame[10].i) + (jint(2))), (jint(0)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(757);
	if ((frame[4].i) > (jint(1))) goto label_48;
	}
	INST_BIPUSH(12);
	goto label_49;
label_48:;
	{
	if ((frame[4].i) != (jint(2))) goto label_50;
	}
	INST_BIPUSH(16);
	goto label_49;
label_50:;
	{
	if ((frame[4].i) != (jint(3))) goto label_51;
	}
	INST_BIPUSH(24);
	goto label_49;
label_51:;
	{
	jint temp0 = ((33) * (frame[4].i)) / (jint(4));
	sp[0].i = temp0;
	sp += 1;
	}
label_49:;
	{
	sp -= 1;
	frame[12].i = sp[0].i;
	LINE_NUMBER(758);
	sp[0].o = (jobject)SM_lib_mFont_generateTTFFont_java_lang_String_int_boolean_R_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx, (frame[0].o), (frame[12].i), (jint(0)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(759);
	sp[0].o = (jobject)SM_lib_mFont_generateTTFFont_java_lang_String_int_boolean_R_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx, (frame[1].o), (frame[11].i), (jint(0)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(760);
	if ((frame[4].i) > (jint(1))) goto label_55;
	}
	INST_BIPUSH(10);
	goto label_56;
label_55:;
	{
	if ((frame[4].i) != (jint(2))) goto label_57;
	}
	INST_BIPUSH(13);
	goto label_56;
label_57:;
	{
	if ((frame[4].i) != (jint(3))) goto label_58;
	}
	INST_BIPUSH(19);
	goto label_56;
label_58:;
	{
	jint temp0 = ((27) * (frame[4].i)) / (jint(4));
	sp[0].i = temp0;
	sp += 1;
	}
label_56:;
	{
	sp -= 1;
	frame[13].i = sp[0].i;
	LINE_NUMBER(761);
	sp[0].o = (jobject)SM_lib_mFont_generateTTFFont_java_lang_String_int_boolean_R_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx, (frame[1].o), (frame[13].i), (jint(0)));
	frame[9].o = sp[0].o;
	}
label_43:;
	{
	LINE_NUMBER(765);
	frame[10].o = (jobject(nullptr));
	LINE_NUMBER(766);
	if ((clinit_lib_mFont(ctx), (jint)SF_lib_mFont_isPixelDamageFont) == 0) goto label_61;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_62;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"myfont/SVN-Determination Sans.otf"_j))));
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_61;
	}
label_62:;
	{
	LINE_NUMBER(767);
	jint temp0 = (jint)SM_lib_mFont_getExactFontSize_java_lang_String_int_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"determination_damage"_j))), (frame[4].i));
	frame[11].i = temp0;
	LINE_NUMBER(768);
	sp[0].o = (jobject)SM_lib_mFont_generateTTFFont_java_lang_String_int_boolean_R_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx, (frame[3].o), (frame[11].i), (jint(1)));
	frame[10].o = sp[0].o;
	}
label_61:;
	{
	LINE_NUMBER(770);
	if ((frame[10].o) != nullptr) goto label_64;
	}
	{
	LINE_NUMBER(771);
	jint temp0 = (jint)SM_lib_mFont_getExactFontSize_java_lang_String_int_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"staccato"_j))), (frame[4].i));
	frame[11].i = temp0;
	LINE_NUMBER(772);
	sp[0].o = (jobject)SM_lib_mFont_generateTTFFont_java_lang_String_int_boolean_R_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx, (frame[2].o), (frame[11].i), (jint(0)));
	frame[10].o = sp[0].o;
	}
label_64:;
	{
	LINE_NUMBER(775);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_currentBarmeneb = (frame[5].o);
	LINE_NUMBER(776);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_currentBarmenebBold = (frame[6].o);
	LINE_NUMBER(777);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_currentBarmenebSmall = (frame[7].o);
	LINE_NUMBER(778);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_currentChelthm = (frame[8].o);
	LINE_NUMBER(779);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_currentChelthmSmall = (frame[9].o);
	LINE_NUMBER(780);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_currentStaccato = (frame[10].o);
	LINE_NUMBER(782);
	if ((frame[5].o) != nullptr) goto label_73;
	}
	INST_ALOAD(8);
	if ((--sp)->o != nullptr) goto label_73;
	{
	LINE_NUMBER(783);
	SM_lib_mSystem_println_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"mFont.initTTF: TTF fonts generation returned null, falling back to bitmap fonts"_j))));
	LINE_NUMBER(784);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_ttfInitialized = (jint(0));
	LINE_NUMBER(785);
	popStackFrame(ctx);
	return;
	}
label_73:;
	{
	LINE_NUMBER(789);
	frame[11].i = (11);
	LINE_NUMBER(790);
	frame[12].i = (11);
	LINE_NUMBER(791);
	frame[13].i = (14);
	LINE_NUMBER(792);
	frame[14].i = (11);
	LINE_NUMBER(793);
	frame[15].i = (14);
	LINE_NUMBER(796);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_red;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[5].o), (jint(16711680)), (frame[11].i));
	LINE_NUMBER(797);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_blue;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[5].o), (jint(6520319)), (frame[11].i));
	LINE_NUMBER(798);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_white;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[5].o), (jint(16777215)), (frame[11].i));
	LINE_NUMBER(799);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_yellow;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[5].o), (jint(16755200)), (frame[11].i));
	LINE_NUMBER(800);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_yellowSmall;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[5].o), (jint(16755200)), (frame[11].i));
	LINE_NUMBER(801);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[5].o), (jint(5449989)), (frame[11].i));
	LINE_NUMBER(802);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_green2;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[5].o), (21285), (frame[11].i));
	LINE_NUMBER(803);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_green;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[5].o), (jint(52224)), (frame[11].i));
	LINE_NUMBER(804);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_focus;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[5].o), (jint(7386228)), (frame[11].i));
	LINE_NUMBER(805);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_unfocus;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[5].o), (jint(16771788)), (frame[11].i));
	LINE_NUMBER(808);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[8].o), (jint(0)), (frame[12].i));
	LINE_NUMBER(809);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_blue1;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[8].o), (jint(65535)), (frame[12].i));
	LINE_NUMBER(810);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_green2;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[8].o), (21285), (frame[12].i));
	LINE_NUMBER(811);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_yellow;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[8].o), (jint(16776960)), (frame[12].i));
	LINE_NUMBER(812);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[8].o), (jint(5592405)), (frame[12].i));
	LINE_NUMBER(813);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_red;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[8].o), (jint(16742263)), (frame[12].i));
	LINE_NUMBER(814);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_blue;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[8].o), (jint(33023)), (frame[12].i));
	LINE_NUMBER(815);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_green;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[8].o), (jint(8701737)), (frame[12].i));
	LINE_NUMBER(816);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_white;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[8].o), (jint(15723503)), (frame[12].i));
	LINE_NUMBER(819);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_8b;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[6].o), (jint(7999781)), (frame[13].i));
	LINE_NUMBER(822);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_number_yellow;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[8].o), (jint(16768815)), (frame[14].i));
	LINE_NUMBER(823);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_number_red;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[8].o), (jint(14961237)), (frame[14].i));
	LINE_NUMBER(824);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_number_green;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[8].o), (jint(4124899)), (frame[14].i));
	LINE_NUMBER(825);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_number_gray;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[8].o), (jint(4671303)), (frame[14].i));
	LINE_NUMBER(826);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_number_orange;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[8].o), (jint(16096312)), (frame[14].i));
	LINE_NUMBER(830);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	init_lib_mFont(ctx, sp[0].o);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_bigNumber_red = sp[0].o;
	LINE_NUMBER(831);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	init_lib_mFont(ctx, sp[0].o);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_bigNumber_yellow = sp[0].o;
	LINE_NUMBER(832);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	init_lib_mFont(ctx, sp[0].o);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_bigNumber_green = sp[0].o;
	LINE_NUMBER(833);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	init_lib_mFont(ctx, sp[0].o);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_bigNumber_While = sp[0].o;
	LINE_NUMBER(834);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	init_lib_mFont(ctx, sp[0].o);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_bigNumber_blue = sp[0].o;
	LINE_NUMBER(835);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	init_lib_mFont(ctx, sp[0].o);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_bigNumber_orange = sp[0].o;
	LINE_NUMBER(836);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	init_lib_mFont(ctx, sp[0].o);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_bigNumber_black = sp[0].o;
	LINE_NUMBER(838);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_bigNumber_red;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int_int(ctx, sp[0].o, (frame[10].o), (jint(16711680)), (jint(6029312)), (frame[15].i));
	LINE_NUMBER(839);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_bigNumber_yellow;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int_int(ctx, sp[0].o, (frame[10].o), (jint(16776960)), (jint(7169025)), (frame[15].i));
	LINE_NUMBER(840);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_bigNumber_green;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int_int(ctx, sp[0].o, (frame[10].o), (jint(65280)), (7680), (frame[15].i));
	LINE_NUMBER(841);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_bigNumber_While;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int_int(ctx, sp[0].o, (frame[10].o), (jint(16777215)), (jint(0)), (frame[15].i));
	LINE_NUMBER(842);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_bigNumber_blue;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int_int(ctx, sp[0].o, (frame[10].o), (jint(40404)), (9264), (frame[15].i));
	LINE_NUMBER(843);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_bigNumber_orange;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int_int(ctx, sp[0].o, (frame[10].o), (jint(16096312)), (jint(6029312)), (frame[15].i));
	LINE_NUMBER(844);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_bigNumber_black;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int_int(ctx, sp[0].o, (frame[10].o), (jint(0)), (jint(-1)), (frame[15].i));
	LINE_NUMBER(850);
	frame[16].i = (9);
	LINE_NUMBER(852);
	if ((frame[7].o) == nullptr) goto label_122;
	}
	INST_ALOAD(7);
	goto label_123;
label_122:;
	INST_ALOAD(5);
label_123:;
	{
	sp -= 1;
	frame[17].o = sp[0].o;
	LINE_NUMBER(854);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_green2Small;
	if (sp[0].o != nullptr) goto label_125;
	}
	{
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	init_lib_mFont(ctx, sp[0].o);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7b_green2Small = sp[0].o;
	}
label_125:;
	{
	LINE_NUMBER(856);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_green2Small;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[17].o), (21285), (frame[16].i));
	LINE_NUMBER(860);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	if (sp[0].o != nullptr) goto label_127;
	}
	{
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	init_lib_mFont(ctx, sp[0].o);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7b_darkSmall = sp[0].o;
	}
label_127:;
	{
	LINE_NUMBER(862);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[17].o), (jint(5449989)), (frame[16].i));
	LINE_NUMBER(866);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_whiteSmall;
	if (sp[0].o != nullptr) goto label_129;
	}
	{
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	init_lib_mFont(ctx, sp[0].o);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7b_whiteSmall = sp[0].o;
	}
label_129:;
	{
	LINE_NUMBER(868);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_whiteSmall;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[17].o), (jint(16777215)), (frame[16].i));
	LINE_NUMBER(872);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_greySmall;
	if (sp[0].o != nullptr) goto label_131;
	}
	{
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	init_lib_mFont(ctx, sp[0].o);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7b_greySmall = sp[0].o;
	}
label_131:;
	{
	LINE_NUMBER(874);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_greySmall;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[17].o), (jint(5592405)), (frame[16].i));
	LINE_NUMBER(876);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_yellowSmall;
	if (sp[0].o != nullptr) goto label_133;
	}
	{
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	init_lib_mFont(ctx, sp[0].o);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7b_yellowSmall = sp[0].o;
	}
label_133:;
	{
	LINE_NUMBER(878);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_yellowSmall;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[17].o), (jint(16776960)), (frame[16].i));
	LINE_NUMBER(880);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_redSmall;
	if (sp[0].o != nullptr) goto label_135;
	}
	{
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	init_lib_mFont(ctx, sp[0].o);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7b_redSmall = sp[0].o;
	}
label_135:;
	{
	LINE_NUMBER(882);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_redSmall;
	SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int(ctx, sp[0].o, (frame[17].o), (jint(16724787)), (frame[16].i));
	LINE_NUMBER(888);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_red;
	clinit_lib_mFont(ctx);
	SF_lib_mFont_nameFontRed = sp[0].o;
	LINE_NUMBER(890);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_yellow;
	clinit_lib_mFont(ctx);
	SF_lib_mFont_nameFontYellow = sp[0].o;
	LINE_NUMBER(892);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_green;
	clinit_lib_mFont(ctx);
	SF_lib_mFont_nameFontGreen = sp[0].o;
	LINE_NUMBER(894);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7_greySmall = sp[0].o;
	LINE_NUMBER(896);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_yellow;
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7b_yellowSmall2 = sp[0].o;
	LINE_NUMBER(898);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_white;
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7_whiteSmall = sp[0].o;
	LINE_NUMBER(900);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_green;
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7b_greenSmall = sp[0].o;
	LINE_NUMBER(902);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_blue1;
	clinit_lib_mFont(ctx);
	SF_lib_mFont_J = sp[0].o;
	LINE_NUMBER(906);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_ttfInitialized = (jint(1));
	LINE_NUMBER(908);
	SM_lib_mSystem_println_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"mFont.initTTF: TTF fonts initialized successfully"_j))));
	LINE_NUMBER(910);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_lib_mFont_hasTTF_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mFont:hasTTF", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(922);
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	if (sp[0].o == nullptr) goto label_1;
	}
	clinit_lib_mFont(ctx);
	(sp++)->i = SF_lib_mFont_ttfInitialized;
	if ((--sp)->i == 0) goto label_1;
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_lib_mFont_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mFont:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(934);
	popStackFrame(ctx);
	return ((jint)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_height);
	}

	popStackFrame(ctx);
}

jint M_lib_mFont_getCharIndex_char_R_int(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mFont:getCharIndex", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(942);
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_strFont;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_strFont;
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, sp[0].o, (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(-1);
label_2:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(944);
	if ((frame[2].i) != (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(946);
	if ((frame[1].i) == (8217)) goto label_6;
	}
	{
	if ((frame[1].i) != (8216)) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(948);
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_strFont;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_strFont;
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, sp[0].o, (39));
	sp[0].i = temp0;
	sp += 1;
	goto label_9;
	}
label_8:;
	INST_ICONST(-1);
label_9:;
	INST_ISTORE(2);
label_7:;
	{
	LINE_NUMBER(952);
	if ((frame[2].i) != (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(954);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(960);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_lib_mFont_getWidth_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mFont:getWidth", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(968);
	jint temp0 = (jint)M_lib_mFont_hasTTF_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(970);
	jint temp0 = (jint)M_lib_mFont_getTTFWidth_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(976);
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(978);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(984);
	frame[2].i = (jint(0));
	LINE_NUMBER(988);
	frame[3].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_7;
	}
	{
	LINE_NUMBER(990);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[3].i));
	jint temp1 = (jint)M_lib_mFont_getCharIndex_char_R_int(ctx, sp[0].o, temp0);
	frame[4].i = temp1;
	LINE_NUMBER(994);
	if ((frame[4].i) < 0) goto label_10;
	}
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_10;
	}
	{
	LINE_NUMBER(996);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	frame[2].i = (temp0 + (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))), (jint(2)))) + ((jint)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_space)));
	}
label_10:;
	{
	LINE_NUMBER(988);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(1004);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_lib_mFont_getTTFWidth_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mFont:getTTFWidth", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1018);
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	if (sp[0].o == nullptr) goto label_5;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_5;
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_0;
	}
label_5:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1022);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_glyphLayout;
	sp[1].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	((func_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	LINE_NUMBER(1024);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_glyphLayout;
	jint temp0 = jint((((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_width) / (jfloat((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel)))));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1026);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1030);
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(1032);
	frame[3].i = (jint(0));
	LINE_NUMBER(1034);
	frame[4].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_12;
	}
	{
	LINE_NUMBER(1036);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[4].i));
	jint temp1 = (jint)M_lib_mFont_getCharIndex_char_R_int(ctx, sp[0].o, temp0);
	frame[5].i = temp1;
	LINE_NUMBER(1038);
	if ((frame[5].i) < 0) goto label_15;
	}
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_15;
	}
	{
	LINE_NUMBER(1040);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	frame[3].i = (temp0 + (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))), (jint(2)))) + ((jint)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_space)));
	}
label_15:;
	{
	LINE_NUMBER(1034);
	INST_IINC(4, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(1046);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_8:;
	{
	LINE_NUMBER(1050);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mFont:drawString", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(1064);
	jint temp0 = (jint)M_lib_mFont_hasTTF_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1066);
	M_lib_mFont_drawStringTTF_lib_mGraphics_java_lang_String_int_int_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(1068);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(1076);
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_imgFont;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	if (sp[0].o != nullptr) goto label_5;
	}
label_4:;
	LINE_NUMBER(1078);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(1084);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	frame[6].i = temp0;
	LINE_NUMBER(1086);
	if ((frame[5].i) != 0) goto label_7;
	}
	{
	LINE_NUMBER(1088);
	frame[5].i = (frame[3].i);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(1090);
	if ((frame[5].i) != (jint(1))) goto label_10;
	}
	{
	LINE_NUMBER(1092);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_lib_mFont_getWidth_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mFont_getWidth_java_lang_String_R_int])(ctx, (frame[0].o), (frame[2].o));
	frame[5].i = (temp0 - temp1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(1096);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_lib_mFont_getWidth_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mFont_getWidth_java_lang_String_R_int])(ctx, (frame[0].o), (frame[2].o));
	frame[5].i = (temp0 - (temp1 >> (jint(1))));
	}
label_9:;
	{
	LINE_NUMBER(1102);
	frame[7].i = (jint(0));
	}
label_12:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_13;
	}
	{
	LINE_NUMBER(1104);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[7].i));
	jint temp1 = (jint)M_lib_mFont_getCharIndex_char_R_int(ctx, sp[0].o, temp0);
	frame[3].i = temp1;
	LINE_NUMBER(1108);
	if ((frame[3].i) < 0) goto label_16;
	}
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_16;
	}
	{
	LINE_NUMBER(1110);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_imgFont;
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	jint temp0 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[3].i))), (jint(0)));
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	jint temp1 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[3].i))), (jint(1)));
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	jint temp2 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[3].i))), (jint(2)));
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[3].i))), (jint(3)))), (jint(0)), (frame[5].i), (frame[4].i), (20));
	}
label_16:;
	{
	LINE_NUMBER(1116);
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	frame[5].i = (temp0 + (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))), (jint(2)))) + ((jint)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_space)));
	LINE_NUMBER(1102);
	INST_IINC(7, 1);
	goto label_12;
	}
label_13:;
	LINE_NUMBER(1120);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mFont:drawString", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(1126);
	jint temp0 = (jint)M_lib_mFont_hasTTF_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1128);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_glyphLayout;
	sp[1].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	((func_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(1130);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_glyphLayout;
	frame[7].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_width);
	LINE_NUMBER(1132);
	frame[8].f = (jfloat(((frame[3].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel))));
	LINE_NUMBER(1134);
	if ((frame[5].i) != (jint(1))) goto label_6;
	}
	{
	frame[8].f = ((frame[8].f) - (frame[7].f));
	goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(1136);
	if ((frame[5].i) != (jint(2))) goto label_7;
	}
	{
	frame[8].f = ((frame[8].f) - ((frame[7].f) / (jfloat(2))));
	}
label_7:;
	{
	LINE_NUMBER(1138);
	frame[9].f = (((jfloat((frame[4].i))) + ((jfloat)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_yOffset)) * (jfloat((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel))));
	LINE_NUMBER(1142);
	if ((frame[6].o) == nullptr) goto label_9;
	}
	{
	jint temp0 = (jint)M_lib_mFont_hasTTF_R_boolean(ctx, (frame[6].o));
	if (temp0 == 0) goto label_9;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_lowGraphic;
	if ((--sp)->i != 0) goto label_9;
	{
	LINE_NUMBER(1144);
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_outlineColor;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(1148);
	frame[10].f = ((jfloat(1)) * (jfloat((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel))));
	LINE_NUMBER(1150);
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[6].o)))->F_fontColor;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[6].o)))->F_fontColor;
	sp += 1;
	goto label_15;
	}
label_14:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((lib_mFont *) NULL_CHECK(sp[-1].o))->F_outlineColor;
label_15:;
	{
	sp -= 1;
	frame[11].o = sp[0].o;
	LINE_NUMBER(1152);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jfloat temp0 = (frame[8].f) + (frame[10].f);
	jfloat temp1 = frame[9].f;
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	((func_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o, (frame[11].o));
	LINE_NUMBER(1154);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jfloat temp2 = (frame[8].f) - (frame[10].f);
	jfloat temp3 = frame[9].f;
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	((func_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o, temp2, temp3, sp[2].o, (frame[11].o));
	LINE_NUMBER(1156);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jfloat temp4 = frame[8].f;
	jfloat temp5 = (frame[9].f) - (frame[10].f);
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	((func_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o, temp4, temp5, sp[2].o, (frame[11].o));
	LINE_NUMBER(1158);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jfloat temp6 = frame[8].f;
	jfloat temp7 = (frame[9].f) + (frame[10].f);
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	((func_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o, temp6, temp7, sp[2].o, (frame[11].o));
	LINE_NUMBER(1160);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jfloat temp8 = (frame[8].f) + (frame[10].f);
	jfloat temp9 = (frame[9].f) + (frame[10].f);
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	((func_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o, temp8, temp9, sp[2].o, (frame[11].o));
	LINE_NUMBER(1162);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jfloat temp10 = (frame[8].f) + (frame[10].f);
	jfloat temp11 = (frame[9].f) - (frame[10].f);
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	((func_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o, temp10, temp11, sp[2].o, (frame[11].o));
	LINE_NUMBER(1164);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jfloat temp12 = (frame[8].f) - (frame[10].f);
	jfloat temp13 = (frame[9].f) - (frame[10].f);
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	((func_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o, temp12, temp13, sp[2].o, (frame[11].o));
	LINE_NUMBER(1166);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jfloat temp14 = (frame[8].f) - (frame[10].f);
	jfloat temp15 = (frame[9].f) + (frame[10].f);
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	((func_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o, temp14, temp15, sp[2].o, (frame[11].o));
	LINE_NUMBER(1168);
	goto label_9;
	}
label_11:;
	{
	LINE_NUMBER(1172);
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[6].o)))->F_fontColor;
	if (sp[0].o == nullptr) goto label_25;
	}
	{
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[6].o)))->F_fontColor;
	sp += 1;
	goto label_26;
	}
label_25:;
	(sp++)->i = jint(5449989);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_lib_mFont_colorFromRGB_int_R_com_badlogic_gdx_graphics_Color(ctx, sp[0].i);
	sp++;
label_26:;
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	LINE_NUMBER(1174);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jfloat temp0 = frame[8].f;
	jfloat temp1 = (frame[9].f) + (jfloat(1));
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	((func_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o, (frame[10].o));
	}
label_9:;
	{
	LINE_NUMBER(1182);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jfloat temp0 = frame[8].f;
	jfloat temp1 = frame[9].f;
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	sp[3].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fontColor;
	((func_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o, sp[3].o);
	LINE_NUMBER(1184);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(1192);
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_imgFont;
	if (sp[0].o == nullptr) goto label_29;
	}
	{
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	if (sp[0].o == nullptr) goto label_29;
	}
	INST_ALOAD(6);
	if ((--sp)->o == nullptr) goto label_29;
	{
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[6].o)))->F_imgFont;
	if (sp[0].o != nullptr) goto label_30;
	}
label_29:;
	LINE_NUMBER(1194);
	popStackFrame(ctx);
	INST_RETURN();
label_30:;
	{
	LINE_NUMBER(1200);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	frame[7].i = temp0;
	LINE_NUMBER(1202);
	if ((frame[5].i) != 0) goto label_32;
	}
	{
	LINE_NUMBER(1204);
	frame[5].i = (frame[3].i);
	goto label_34;
	}
label_32:;
	{
	LINE_NUMBER(1206);
	if ((frame[5].i) != (jint(1))) goto label_35;
	}
	{
	LINE_NUMBER(1208);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_lib_mFont_getWidth_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mFont_getWidth_java_lang_String_R_int])(ctx, (frame[0].o), (frame[2].o));
	frame[5].i = (temp0 - temp1);
	goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(1212);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_lib_mFont_getWidth_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mFont_getWidth_java_lang_String_R_int])(ctx, (frame[0].o), (frame[2].o));
	frame[5].i = (temp0 - (temp1 >> (jint(1))));
	}
label_34:;
	{
	LINE_NUMBER(1218);
	frame[8].i = (jint(0));
	}
label_37:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_38;
	}
	{
	LINE_NUMBER(1220);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[8].i));
	jint temp1 = (jint)M_lib_mFont_getCharIndex_char_R_int(ctx, sp[0].o, temp0);
	frame[3].i = temp1;
	LINE_NUMBER(1224);
	if ((frame[3].i) < 0) goto label_41;
	}
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_41;
	}
	{
	LINE_NUMBER(1226);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) != 0) goto label_43;
	}
	{
	LINE_NUMBER(1228);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((lib_mFont *) NULL_CHECK((frame[6].o)))->F_imgFont;
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	jint temp0 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[3].i))), (jint(0)));
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	jint temp1 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[3].i))), (jint(1)));
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	jint temp2 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[3].i))), (jint(2)));
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[3].i))), (jint(3)))), (jint(0)), ((frame[5].i) + (jint(1))), (frame[4].i), (20));
	LINE_NUMBER(1230);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((lib_mFont *) NULL_CHECK((frame[6].o)))->F_imgFont;
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	jint temp3 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[3].i))), (jint(0)));
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	jint temp4 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[3].i))), (jint(1)));
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	jint temp5 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[3].i))), (jint(2)));
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp3, temp4, temp5, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[3].i))), (jint(3)))), (jint(0)), (frame[5].i), ((frame[4].i) + (jint(1))), (20));
	}
label_43:;
	{
	LINE_NUMBER(1236);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_imgFont;
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	jint temp0 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[3].i))), (jint(0)));
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	jint temp1 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[3].i))), (jint(1)));
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	jint temp2 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[3].i))), (jint(2)));
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[3].i))), (jint(3)))), (jint(0)), (frame[5].i), (frame[4].i), (20));
	}
label_41:;
	{
	LINE_NUMBER(1242);
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fImages;
	frame[5].i = (temp0 + (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))), (jint(2)))) + ((jint)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_space)));
	LINE_NUMBER(1218);
	INST_IINC(8, 1);
	goto label_37;
	}
label_38:;
	LINE_NUMBER(1246);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_mFont_drawStringTTF_lib_mGraphics_java_lang_String_int_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mFont:drawStringTTF", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(1266);
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_1;
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1270);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_glyphLayout;
	sp[1].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	((func_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(1272);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_glyphLayout;
	frame[6].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_width);
	LINE_NUMBER(1276);
	frame[7].f = (jfloat(((frame[3].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel))));
	LINE_NUMBER(1278);
	if ((frame[5].i) != (jint(1))) goto label_6;
	}
	{
	LINE_NUMBER(1280);
	frame[7].f = ((frame[7].f) - (frame[6].f));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(1282);
	if ((frame[5].i) != (jint(2))) goto label_8;
	}
	{
	LINE_NUMBER(1284);
	frame[7].f = ((frame[7].f) - ((frame[6].f) / (jfloat(2))));
	}
label_8:;
	{
	LINE_NUMBER(1290);
	frame[8].f = (((jfloat((frame[4].i))) + ((jfloat)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_yOffset)) * (jfloat((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel))));
	LINE_NUMBER(1296);
	sp[0].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_outlineColor;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(1298);
	frame[9].f = ((jfloat(1)) * (jfloat((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel))));
	LINE_NUMBER(1300);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jfloat temp0 = (frame[7].f) + (frame[9].f);
	jfloat temp1 = frame[8].f;
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	sp[3].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_outlineColor;
	((func_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o, sp[3].o);
	LINE_NUMBER(1302);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jfloat temp2 = (frame[7].f) - (frame[9].f);
	jfloat temp3 = frame[8].f;
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	sp[3].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_outlineColor;
	((func_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o, temp2, temp3, sp[2].o, sp[3].o);
	LINE_NUMBER(1304);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jfloat temp4 = frame[7].f;
	jfloat temp5 = (frame[8].f) - (frame[9].f);
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	sp[3].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_outlineColor;
	((func_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o, temp4, temp5, sp[2].o, sp[3].o);
	LINE_NUMBER(1306);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jfloat temp6 = frame[7].f;
	jfloat temp7 = (frame[8].f) + (frame[9].f);
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	sp[3].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_outlineColor;
	((func_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o, temp6, temp7, sp[2].o, sp[3].o);
	LINE_NUMBER(1308);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jfloat temp8 = (frame[7].f) + (frame[9].f);
	jfloat temp9 = (frame[8].f) + (frame[9].f);
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	sp[3].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_outlineColor;
	((func_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o, temp8, temp9, sp[2].o, sp[3].o);
	LINE_NUMBER(1310);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jfloat temp10 = (frame[7].f) + (frame[9].f);
	jfloat temp11 = (frame[8].f) - (frame[9].f);
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	sp[3].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_outlineColor;
	((func_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o, temp10, temp11, sp[2].o, sp[3].o);
	LINE_NUMBER(1312);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jfloat temp12 = (frame[7].f) - (frame[9].f);
	jfloat temp13 = (frame[8].f) - (frame[9].f);
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	sp[3].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_outlineColor;
	((func_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o, temp12, temp13, sp[2].o, sp[3].o);
	LINE_NUMBER(1314);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jfloat temp14 = (frame[7].f) - (frame[9].f);
	jfloat temp15 = (frame[8].f) + (frame[9].f);
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	sp[3].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_outlineColor;
	((func_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o, temp14, temp15, sp[2].o, sp[3].o);
	}
label_11:;
	{
	LINE_NUMBER(1320);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jfloat temp0 = frame[7].f;
	jfloat temp1 = frame[8].f;
	sp[2].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_ttfFont;
	sp[3].o = (jobject)((lib_mFont *) NULL_CHECK((frame[0].o)))->F_fontColor;
	((func_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o, sp[3].o);
	LINE_NUMBER(1322);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mFont:splitFontArray", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1332);
	frame[3].i = (frame[2].i);
	LINE_NUMBER(1334);
	frame[4].o = (frame[1].o);
	LINE_NUMBER(1336);
	frame[5].o = (frame[0].o);
	LINE_NUMBER(1338);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vLine"_j))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1340);
	frame[7].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(1344);
	frame[8].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[8].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[4].o));
	if (temp0 >= temp1) goto label_7;
	}
	{
	LINE_NUMBER(1346);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[4].o), (frame[8].i));
	if (temp0 == (10)) goto label_9;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[4].o), (frame[8].i));
	if (temp0 == (8)) goto label_9;
	}
	{
	LINE_NUMBER(1348);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[7].o));
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[4].o), (frame[8].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(1350);
	jint temp1 = (jint)((func_lib_mFont_getWidth_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_lib_mFont_getWidth_java_lang_String_R_int])(ctx, (frame[5].o), (frame[7].o));
	if (temp1 <= (frame[3].i)) goto label_12;
	}
	{
	LINE_NUMBER(1354);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[7].o));
	frame[9].i = (temp0 - (jint(1)));
	}
label_14:;
	INST_ILOAD(9);
	if ((--sp)->i < 0) goto label_15;
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[7].o), (frame[9].i));
	if (temp0 == (32)) goto label_15;
	}
	INST_IINC(9, -1);
	goto label_14;
label_15:;
	{
	LINE_NUMBER(1360);
	if ((frame[9].i) >= 0) goto label_16;
	}
	{
	LINE_NUMBER(1362);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[7].o));
	frame[9].i = (temp0 - (jint(1)));
	}
label_16:;
	{
	LINE_NUMBER(1368);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[7].o), (jint(0)), (frame[9].i));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1370);
	jint temp0 = frame[8].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[7].o));
	frame[8].i = ((temp0 - (temp1 - (frame[9].i))) + (jint(1)));
	LINE_NUMBER(1372);
	frame[7].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_12:;
	{
	LINE_NUMBER(1378);
	jint temp0 = frame[8].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[4].o));
	if (temp0 != (temp1 - (jint(1)))) goto label_20;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[7].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 != 0) goto label_20;
	}
	{
	LINE_NUMBER(1380);
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, (frame[6].o), (frame[7].o));
	goto label_20;
	}
label_9:;
	{
	LINE_NUMBER(1386);
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, (frame[6].o), (frame[7].o));
	LINE_NUMBER(1388);
	frame[7].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_20:;
	{
	LINE_NUMBER(1344);
	INST_IINC(8, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(1396);
	frame[8].o = (frame[6].o);
	LINE_NUMBER(1398);
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[6].o));
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, temp0);
	frame[9].o = sp[0].o;
	LINE_NUMBER(1402);
	frame[3].i = (jint(0));
	}
label_25:;
	{
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[8].o));
	if (temp0 >= temp1) goto label_26;
	}
	{
	LINE_NUMBER(1404);
	sp[0].o = frame[9].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, (frame[8].o), (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1402);
	INST_IINC(3, 1);
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(1410);
	popStackFrame(ctx);
	return (frame[9].o);
	}

	popStackFrame(ctx);
}

void M_lib_mFont_drawText_lib_mGraphics_java_lang_String_int_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mFont:drawText", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(1418);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i), (jint(2)));
	LINE_NUMBER(1420);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_mFont_drawStringWithFontType_lib_mGraphics_java_lang_String_int_int_int_lib_mFont(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mFont:drawStringWithFontType", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(1426);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].o));
	LINE_NUMBER(1428);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_lib_mFont(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_lib_mFont_VIETNAMESE_CHARS = ((jobject) createStringLiteral(ctx, u8"\u0000ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890\"!`?'.,;:()[]{}<>|/@\\^$\u20ac-%+=#_&~*\u0080\u0081\u0082\u0083\u0084\u0085\u0086\u0087\u0088\u0089\u008a\u008b\u008c\u008d\u008e\u008f\u0090\u0091\u0092\u0093\u0094\u0095\u0096\u0097\u0098\u0099\u009a\u009b\u009c\u009d\u009e\u009f\u00a0\u00a1\u00a2\u00a3\u00a4\u00a5\u00a6\u00a7\u00a8\u00a9\u00aa\u00ab\u00ac\u00ad\u00ae\u00af\u00b0\u00b1\u00b2\u00b3\u00b4\u00b5\u00b6\u00b7\u00b8\u00b9\u00ba\u00bb\u00bc\u00bd\u00be\u00bf\u00c0\u00c1\u00c2\u00c3\u00c4\u00c5\u00c6\u00c7\u00c8\u00c9\u00ca\u00cb\u00cc\u00cd\u00ce\u00cf\u00d0\u00d1\u00d2\u00d3\u00d4\u00d5\u00d6\u00d7\u00d8\u00d9\u00da\u00db\u00dc\u00dd\u00de\u00df\u00e0\u00e1\u00e2\u00e3\u00e4\u00e5\u00e6\u00e7\u00e8\u00e9\u00ea\u00eb\u00ec\u00ed\u00ee\u00ef\u00f0\u00f1\u00f2\u00f3\u00f4\u00f5\u00f6\u00f7\u00f8\u00f9\u00fa\u00fb\u00fc\u00fd\u00fe\u00ff\u00e1\u00e0\u1ea3\u00e3\u1ea1\u00e2\u1ea5\u1ea7\u1ea9\u1eab\u1ead\u0103\u1eaf\u1eb1\u1eb3\u1eb5\u1eb7bcd\u0111e\u00e9\u00e8\u1ebb\u1ebd\u1eb9\u00ea\u1ebf\u1ec1\u1ec3\u1ec5\u1ec7fghi\u00ed\u00ec\u1ec9\u0129\u1ecbjklmno\u00f3\u00f2\u1ecf\u00f5\u1ecd\u00f4\u1ed1\u1ed3\u1ed5\u1ed7\u1ed9\u01a1\u1edb\u1edd\u1edf\u1ee1\u1ee3pqrstu\u00fa\u00f9\u1ee7\u0169\u1ee5\u01b0\u1ee9\u1eeb\u1eed\u1eef\u1ef1vxy\u00fd\u1ef3\u1ef7\u1ef9\u1ef5zw\u00c1\u00c0\u1ea2\u00c3\u1ea0\u0102\u1eb0\u1eae\u1eb2\u1eb4\u1eb6\u00c2\u1ea4\u1ea6\u1ea8\u1eaa\u1eacBCD\u0110E\u00c9\u00c8\u1eba\u1ebc\u1eb8\u00ca\u1ebe\u1ec0\u1ec2\u1ec4\u1ec6FGHI\u00cd\u00cc\u1ec8\u0128\u1ecaJKLMNO\u00d3\u00d2\u1ece\u00d5\u1ecc\u00d4\u1ed0\u1ed2\u1ed4\u1ed6\u1ed8\u01a0\u1eda\u1edc\u1ede\u1ee0\u1ee2PQRSTU\u00da\u00d9\u1ee6\u0168\u1ee4\u01af\u1ee8\u1eea\u1eec\u1eee\u1ef0VXY\u00dd\u1ef2\u1ef6\u1ef8\u1ef4ZW\u2026\u2013\u2014\u2022\u00b7\u00a0\u2019\u2018\u201c\u201d"_j));
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mFont:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mFont(ctx);
	{
	LINE_NUMBER(49);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_str = (((jobject) createStringLiteral(ctx, u8" 0123456789+-*='_?.,<>/[]{}!@#$%^&*():a\u00e1\u00e0\u1ea3\u00e3\u1ea1\u00e2\u1ea5\u1ea7\u1ea9\u1eab\u1ead\u0103\u1eaf\u1eb1\u1eb3\u1eb5\u1eb7bcd\u0111e\u00e9\u00e8\u1ebb\u1ebd\u1eb9\u00ea\u1ebf\u1ec1\u1ec3\u1ec5\u1ec7fghi\u00ed\u00ec\u1ec9\u0129\u1ecbjklmno\u00f3\u00f2\u1ecf\u00f5\u1ecd\u00f4\u1ed1\u1ed3\u1ed5\u1ed7\u1ed9\u01a1\u1edb\u1edd\u1edf\u1ee1\u1ee3pqrstu\u00fa\u00f9\u1ee7\u0169\u1ee5\u01b0\u1ee9\u1eeb\u1eed\u1eef\u1ef1vxy\u00fd\u1ef3\u1ef7\u1ef9\u1ef5zwA\u00c1\u00c0\u1ea2\u00c3\u1ea0\u0102\u1eb0\u1eae\u1eb2\u1eb4\u1eb6\u00c2\u1ea4\u1ea6\u1ea8\u1eaa\u1eacBCD\u0110E\u00c9\u00c8\u1eba\u1ebc\u1eb8\u00ca\u1ebe\u1ec0\u1ec2\u1ec4\u1ec6FGHI\u00cd\u00cc\u1ec8\u0128\u1ecaJKLMNO\u00d3\u00d2\u1ece\u00d5\u1ecc\u00d4\u1ed0\u1ed2\u1ed4\u1ed6\u1ed8\u01a0\u1eda\u1edc\u1ede\u1ee0\u1ee2PQRSTU\u00da\u00d9\u1ee6\u0168\u1ee4\u01af\u1ee8\u1eea\u1eec\u1eee\u1ef0VXY\u00dd\u1ef2\u1ef6\u1ef8\u1ef4ZW"_j)));
	LINE_NUMBER(154);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_ttfInitialized = (jint(0));
	LINE_NUMBER(156);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_isPixelFont = (jint(1));
	LINE_NUMBER(158);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_isPixelDamageFont = (jint(1));
	LINE_NUMBER(160);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_fontPreferenceLoaded = (jint(0));
	LINE_NUMBER(194);
	sp[0].o = (jobject) createArray(ctx, &class_int, (25));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(16711680));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(6520831));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(16777215));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(16771072));
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (jint(5451397));
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (21285);
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (jint(52224));
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (jint(7386228));
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (jint(16771148));
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (11)) = (jint(65535));
	ARRAY_ACCESS(jint, sp[0].o, (12)) = (21285);
	ARRAY_ACCESS(jint, sp[0].o, (13)) = (jint(16776960));
	ARRAY_ACCESS(jint, sp[0].o, (14)) = (jint(5592405));
	ARRAY_ACCESS(jint, sp[0].o, (15)) = (jint(16752615));
	ARRAY_ACCESS(jint, sp[0].o, (16)) = (jint(33023));
	ARRAY_ACCESS(jint, sp[0].o, (17)) = (jint(8711177));
	ARRAY_ACCESS(jint, sp[0].o, (18)) = (jint(15738639));
	ARRAY_ACCESS(jint, sp[0].o, (19)) = (jint(8001701));
	ARRAY_ACCESS(jint, sp[0].o, (20)) = (jint(16769455));
	ARRAY_ACCESS(jint, sp[0].o, (21)) = (jint(14962005));
	ARRAY_ACCESS(jint, sp[0].o, (22)) = (jint(4122083));
	ARRAY_ACCESS(jint, sp[0].o, (23)) = (jint(4671303));
	ARRAY_ACCESS(jint, sp[0].o, (24)) = (jint(16099384));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_colorJava = sp[0].o;
	LINE_NUMBER(252);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_str;
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b_red.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7b_red = sp[0].o;
	LINE_NUMBER(254);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_str;
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b_blue.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7b_blue = sp[0].o;
	LINE_NUMBER(256);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_str;
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b_white.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7b_white = sp[0].o;
	LINE_NUMBER(258);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_str;
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b_yellow.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7b_yellow = sp[0].o;
	LINE_NUMBER(260);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_str;
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b_yellow.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7b_yellowSmall = sp[0].o;
	LINE_NUMBER(262);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_str;
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b_brown.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7b_dark = sp[0].o;
	LINE_NUMBER(264);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_str;
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b_green2.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7b_green2 = sp[0].o;
	LINE_NUMBER(266);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_str;
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b_green.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7b_green = sp[0].o;
	LINE_NUMBER(268);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_str;
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b_focus.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7b_focus = sp[0].o;
	LINE_NUMBER(270);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_str;
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b_unfocus.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7b_unfocus = sp[0].o;
	LINE_NUMBER(272);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_str;
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7 = sp[0].o;
	LINE_NUMBER(274);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_str;
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7_blue1.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7_blue1 = sp[0].o;
	LINE_NUMBER(276);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_str;
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7_green2.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7_green2 = sp[0].o;
	LINE_NUMBER(278);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_str;
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7_yellow.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7_yellow = sp[0].o;
	LINE_NUMBER(280);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_str;
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7_grey.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7_grey = sp[0].o;
	LINE_NUMBER(282);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_str;
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7_red.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7_red = sp[0].o;
	LINE_NUMBER(284);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_str;
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7_blue.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7_blue = sp[0].o;
	LINE_NUMBER(286);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_str;
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7_green.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7_green = sp[0].o;
	LINE_NUMBER(288);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_str;
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7_white.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7_white = sp[0].o;
	LINE_NUMBER(290);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_str;
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_8b.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_8b"_j))), (jint(-1)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_8b = sp[0].o;
	LINE_NUMBER(292);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" 0123456789+-"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/number_yellow.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/number"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_number_yellow = sp[0].o;
	LINE_NUMBER(294);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" 0123456789+-"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/number_red.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/number"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_number_red = sp[0].o;
	LINE_NUMBER(296);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" 0123456789+-"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/number_green.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/number"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_number_green = sp[0].o;
	LINE_NUMBER(298);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" 0123456789+-"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/number_gray.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/number"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_number_gray = sp[0].o;
	LINE_NUMBER(300);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" 0123456789+-"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/number_orange.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/number"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_number_orange = sp[0].o;
	LINE_NUMBER(302);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	init_lib_mFont(ctx, sp[0].o);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_bigNumber_red = sp[0].o;
	LINE_NUMBER(304);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	init_lib_mFont(ctx, sp[0].o);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_bigNumber_While = sp[0].o;
	LINE_NUMBER(306);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	init_lib_mFont(ctx, sp[0].o);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_bigNumber_yellow = sp[0].o;
	LINE_NUMBER(308);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	init_lib_mFont(ctx, sp[0].o);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_bigNumber_green = sp[0].o;
	LINE_NUMBER(310);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	init_lib_mFont(ctx, sp[0].o);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_bigNumber_orange = sp[0].o;
	LINE_NUMBER(312);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	init_lib_mFont(ctx, sp[0].o);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_bigNumber_blue = sp[0].o;
	LINE_NUMBER(314);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	init_lib_mFont(ctx, sp[0].o);
	clinit_lib_mFont(ctx);
	SF_lib_mFont_bigNumber_black = sp[0].o;
	LINE_NUMBER(316);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_red;
	clinit_lib_mFont(ctx);
	SF_lib_mFont_nameFontRed = sp[0].o;
	LINE_NUMBER(318);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_yellow;
	clinit_lib_mFont(ctx);
	SF_lib_mFont_nameFontYellow = sp[0].o;
	LINE_NUMBER(320);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_green;
	clinit_lib_mFont(ctx);
	SF_lib_mFont_nameFontGreen = sp[0].o;
	LINE_NUMBER(322);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7_greySmall = sp[0].o;
	LINE_NUMBER(324);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_yellow;
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7b_yellowSmall2 = sp[0].o;
	LINE_NUMBER(326);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_str;
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b_green2.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7b_green2Small = sp[0].o;
	LINE_NUMBER(328);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_white;
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7_whiteSmall = sp[0].o;
	LINE_NUMBER(330);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_green;
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7b_greenSmall = sp[0].o;
	LINE_NUMBER(332);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_str;
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b_brown.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7b_darkSmall = sp[0].o;
	LINE_NUMBER(334);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_str;
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b_white.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7b"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7b_whiteSmall = sp[0].o;
	LINE_NUMBER(336);
	clinit_lib_mFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_mFont);
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_str;
	init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7_grey.png"_j))), (((jobject) createStringLiteral(ctx, u8"/myfont/tahoma_7"_j))), (jint(0)));
	clinit_lib_mFont(ctx);
	SF_lib_mFont_tahoma_7b_greySmall = sp[0].o;
	LINE_NUMBER(338);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_blue1;
	clinit_lib_mFont(ctx);
	SF_lib_mFont_J = sp[0].o;
	LINE_NUMBER(340);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_lib_mFont[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_lib_mFont_hasTTF_R_boolean,
	(void *) M_lib_mFont_getHeight_R_int,
	(void *) M_lib_mFont_getCharIndex_char_R_int,
	(void *) M_lib_mFont_getWidth_java_lang_String_R_int,
	(void *) M_lib_mFont_getTTFWidth_java_lang_String_R_int,
	(void *) M_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int,
	(void *) M_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont,
	(void *) M_lib_mFont_drawStringTTF_lib_mGraphics_java_lang_String_int_int_int,
	(void *) M_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String,
	(void *) M_lib_mFont_drawText_lib_mGraphics_java_lang_String_int_int_int,
	(void *) M_lib_mFont_drawStringWithFontType_lib_mGraphics_java_lang_String_int_int_int_lib_mFont,
};

static VtableEntry vtableEntries[] {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
	{ "hasTTF", "()Z" },
	{ "getHeight", "()I" },
	{ "getCharIndex", "(C)I" },
	{ "getWidth", "(Ljava/lang/String;)I" },
	{ "getTTFWidth", "(Ljava/lang/String;)I" },
	{ "drawString", "(Llib/mGraphics;Ljava/lang/String;III)V" },
	{ "drawString", "(Llib/mGraphics;Ljava/lang/String;IIILlib/mFont;)V" },
	{ "drawStringTTF", "(Llib/mGraphics;Ljava/lang/String;III)V" },
	{ "splitFontArray", "(Ljava/lang/String;I)[Ljava/lang/String;" },
	{ "drawText", "(Llib/mGraphics;Ljava/lang/String;III)V" },
	{ "drawStringWithFontType", "(Llib/mGraphics;Ljava/lang/String;IIILlib/mFont;)V" },
};

static FieldMetadata fields[] {
	{ "space", &class_int, offsetof(lib_mFont, F_space), "I", 2 },
	{ "height", &class_int, offsetof(lib_mFont, F_height), "I", 2 },
	{ "imgFont", &class_javax_microedition_lcdui_Image, offsetof(lib_mFont, F_imgFont), "Ljavax/microedition/lcdui/Image;", 2 },
	{ "strFont", &class_java_lang_String, offsetof(lib_mFont, F_strFont), "Ljava/lang/String;", 2 },
	{ "fImages", getArrayClass(&class_int, 2), offsetof(lib_mFont, F_fImages), "[[I", 2 },
	{ "str", &class_java_lang_String, (intptr_t) &SF_lib_mFont_str, "Ljava/lang/String;", 10 },
	{ "tahoma_7b_red", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7b_red, "Llib/mFont;", 9 },
	{ "tahoma_7b_blue", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7b_blue, "Llib/mFont;", 9 },
	{ "tahoma_7b_white", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7b_white, "Llib/mFont;", 9 },
	{ "tahoma_7b_yellow", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7b_yellow, "Llib/mFont;", 9 },
	{ "tahoma_7b_yellowSmall", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7b_yellowSmall, "Llib/mFont;", 9 },
	{ "tahoma_7b_redSmall", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7b_redSmall, "Llib/mFont;", 9 },
	{ "tahoma_7b_dark", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7b_dark, "Llib/mFont;", 9 },
	{ "tahoma_7b_green2", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7b_green2, "Llib/mFont;", 9 },
	{ "tahoma_7b_green", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7b_green, "Llib/mFont;", 9 },
	{ "tahoma_7b_focus", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7b_focus, "Llib/mFont;", 9 },
	{ "tahoma_7b_unfocus", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7b_unfocus, "Llib/mFont;", 9 },
	{ "tahoma_7", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7, "Llib/mFont;", 9 },
	{ "tahoma_7_blue1", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7_blue1, "Llib/mFont;", 9 },
	{ "tahoma_7_green2", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7_green2, "Llib/mFont;", 9 },
	{ "tahoma_7_yellow", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7_yellow, "Llib/mFont;", 9 },
	{ "tahoma_7_grey", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7_grey, "Llib/mFont;", 9 },
	{ "tahoma_7_red", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7_red, "Llib/mFont;", 9 },
	{ "tahoma_7_blue", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7_blue, "Llib/mFont;", 9 },
	{ "tahoma_7_green", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7_green, "Llib/mFont;", 9 },
	{ "tahoma_7_white", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7_white, "Llib/mFont;", 9 },
	{ "tahoma_8b", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_8b, "Llib/mFont;", 9 },
	{ "number_yellow", &class_lib_mFont, (intptr_t) &SF_lib_mFont_number_yellow, "Llib/mFont;", 10 },
	{ "number_red", &class_lib_mFont, (intptr_t) &SF_lib_mFont_number_red, "Llib/mFont;", 10 },
	{ "number_green", &class_lib_mFont, (intptr_t) &SF_lib_mFont_number_green, "Llib/mFont;", 10 },
	{ "number_gray", &class_lib_mFont, (intptr_t) &SF_lib_mFont_number_gray, "Llib/mFont;", 9 },
	{ "number_orange", &class_lib_mFont, (intptr_t) &SF_lib_mFont_number_orange, "Llib/mFont;", 10 },
	{ "bigNumber_red", &class_lib_mFont, (intptr_t) &SF_lib_mFont_bigNumber_red, "Llib/mFont;", 9 },
	{ "bigNumber_While", &class_lib_mFont, (intptr_t) &SF_lib_mFont_bigNumber_While, "Llib/mFont;", 9 },
	{ "bigNumber_yellow", &class_lib_mFont, (intptr_t) &SF_lib_mFont_bigNumber_yellow, "Llib/mFont;", 9 },
	{ "bigNumber_green", &class_lib_mFont, (intptr_t) &SF_lib_mFont_bigNumber_green, "Llib/mFont;", 9 },
	{ "bigNumber_orange", &class_lib_mFont, (intptr_t) &SF_lib_mFont_bigNumber_orange, "Llib/mFont;", 9 },
	{ "bigNumber_blue", &class_lib_mFont, (intptr_t) &SF_lib_mFont_bigNumber_blue, "Llib/mFont;", 9 },
	{ "bigNumber_black", &class_lib_mFont, (intptr_t) &SF_lib_mFont_bigNumber_black, "Llib/mFont;", 9 },
	{ "nameFontRed", &class_lib_mFont, (intptr_t) &SF_lib_mFont_nameFontRed, "Llib/mFont;", 9 },
	{ "nameFontYellow", &class_lib_mFont, (intptr_t) &SF_lib_mFont_nameFontYellow, "Llib/mFont;", 9 },
	{ "nameFontGreen", &class_lib_mFont, (intptr_t) &SF_lib_mFont_nameFontGreen, "Llib/mFont;", 9 },
	{ "tahoma_7_greySmall", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7_greySmall, "Llib/mFont;", 9 },
	{ "tahoma_7b_yellowSmall2", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7b_yellowSmall2, "Llib/mFont;", 9 },
	{ "tahoma_7b_green2Small", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7b_green2Small, "Llib/mFont;", 9 },
	{ "tahoma_7_whiteSmall", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7_whiteSmall, "Llib/mFont;", 9 },
	{ "tahoma_7b_greenSmall", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7b_greenSmall, "Llib/mFont;", 9 },
	{ "tahoma_7b_darkSmall", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7b_darkSmall, "Llib/mFont;", 9 },
	{ "tahoma_7b_whiteSmall", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7b_whiteSmall, "Llib/mFont;", 9 },
	{ "tahoma_7b_greySmall", &class_lib_mFont, (intptr_t) &SF_lib_mFont_tahoma_7b_greySmall, "Llib/mFont;", 9 },
	{ "J", &class_lib_mFont, (intptr_t) &SF_lib_mFont_J, "Llib/mFont;", 9 },
	{ "pathImage", &class_java_lang_String, offsetof(lib_mFont, F_pathImage), "Ljava/lang/String;", 2 },
	{ "ttfFont", &class_com_badlogic_gdx_graphics_g2d_BitmapFont, offsetof(lib_mFont, F_ttfFont), "Lcom/badlogic/gdx/graphics/g2d/BitmapFont;", 2 },
	{ "fontColor", &class_com_badlogic_gdx_graphics_Color, offsetof(lib_mFont, F_fontColor), "Lcom/badlogic/gdx/graphics/Color;", 2 },
	{ "outlineColor", &class_com_badlogic_gdx_graphics_Color, offsetof(lib_mFont, F_outlineColor), "Lcom/badlogic/gdx/graphics/Color;", 2 },
	{ "glyphLayout", &class_com_badlogic_gdx_graphics_g2d_GlyphLayout, (intptr_t) &SF_lib_mFont_glyphLayout, "Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;", 10 },
	{ "ttfInitialized", &class_boolean, (intptr_t) &SF_lib_mFont_ttfInitialized, "Z", 10 },
	{ "isPixelFont", &class_boolean, (intptr_t) &SF_lib_mFont_isPixelFont, "Z", 9 },
	{ "isPixelDamageFont", &class_boolean, (intptr_t) &SF_lib_mFont_isPixelDamageFont, "Z", 9 },
	{ "fontPreferenceLoaded", &class_boolean, (intptr_t) &SF_lib_mFont_fontPreferenceLoaded, "Z", 10 },
	{ "currentBarmeneb", &class_com_badlogic_gdx_graphics_g2d_BitmapFont, (intptr_t) &SF_lib_mFont_currentBarmeneb, "Lcom/badlogic/gdx/graphics/g2d/BitmapFont;", 10 },
	{ "currentBarmenebBold", &class_com_badlogic_gdx_graphics_g2d_BitmapFont, (intptr_t) &SF_lib_mFont_currentBarmenebBold, "Lcom/badlogic/gdx/graphics/g2d/BitmapFont;", 10 },
	{ "currentBarmenebSmall", &class_com_badlogic_gdx_graphics_g2d_BitmapFont, (intptr_t) &SF_lib_mFont_currentBarmenebSmall, "Lcom/badlogic/gdx/graphics/g2d/BitmapFont;", 10 },
	{ "currentChelthm", &class_com_badlogic_gdx_graphics_g2d_BitmapFont, (intptr_t) &SF_lib_mFont_currentChelthm, "Lcom/badlogic/gdx/graphics/g2d/BitmapFont;", 10 },
	{ "currentChelthmSmall", &class_com_badlogic_gdx_graphics_g2d_BitmapFont, (intptr_t) &SF_lib_mFont_currentChelthmSmall, "Lcom/badlogic/gdx/graphics/g2d/BitmapFont;", 10 },
	{ "currentStaccato", &class_com_badlogic_gdx_graphics_g2d_BitmapFont, (intptr_t) &SF_lib_mFont_currentStaccato, "Lcom/badlogic/gdx/graphics/g2d/BitmapFont;", 10 },
	{ "VIETNAMESE_CHARS", &class_java_lang_String, (intptr_t) &SF_lib_mFont_VIETNAMESE_CHARS, "Ljava/lang/String;", 26 },
	{ "colorJava", getArrayClass(&class_int, 1), (intptr_t) &SF_lib_mFont_colorJava, "[I", 26 },
	{ "yOffset", &class_float, offsetof(lib_mFont, F_yOffset), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_mFont, 0, "()V", 2 },
	{ "<init>", (intptr_t) init_lib_mFont_java_lang_String_java_lang_String_java_lang_String_int, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V", 2 },
	{ "colorFromRGB", (intptr_t) SM_lib_mFont_colorFromRGB_int_R_com_badlogic_gdx_graphics_Color, 0, "(I)Lcom/badlogic/gdx/graphics/Color;", 10 },
	{ "generateTTFFont", (intptr_t) SM_lib_mFont_generateTTFFont_java_lang_String_int_boolean_R_com_badlogic_gdx_graphics_g2d_BitmapFont, 0, "(Ljava/lang/String;IZ)Lcom/badlogic/gdx/graphics/g2d/BitmapFont;", 10 },
	{ "generateTTFFont", (intptr_t) SM_lib_mFont_generateTTFFont_java_lang_String_int_R_com_badlogic_gdx_graphics_g2d_BitmapFont, 0, "(Ljava/lang/String;I)Lcom/badlogic/gdx/graphics/g2d/BitmapFont;", 10 },
	{ "getExactFontSize", (intptr_t) SM_lib_mFont_getExactFontSize_java_lang_String_int_R_int, 0, "(Ljava/lang/String;I)I", 10 },
	{ "setupTTF", (intptr_t) SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int, 0, "(Llib/mFont;Lcom/badlogic/gdx/graphics/g2d/BitmapFont;II)V", 10 },
	{ "setupTTF", (intptr_t) SM_lib_mFont_setupTTF_lib_mFont_com_badlogic_gdx_graphics_g2d_BitmapFont_int_int_int, 0, "(Llib/mFont;Lcom/badlogic/gdx/graphics/g2d/BitmapFont;III)V", 10 },
	{ "toggleFontMode", (intptr_t) SM_lib_mFont_toggleFontMode, 0, "()V", 9 },
	{ "toggleDamageFontMode", (intptr_t) SM_lib_mFont_toggleDamageFontMode, 0, "()V", 9 },
	{ "disposeOldFonts", (intptr_t) SM_lib_mFont_disposeOldFonts, 0, "()V", 10 },
	{ "initTTF", (intptr_t) SM_lib_mFont_initTTF, 0, "()V", 9 },
	{ "hasTTF", (intptr_t) M_lib_mFont_hasTTF_R_boolean, VTABLE_lib_mFont_hasTTF_R_boolean, "()Z", 2 },
	{ "getHeight", (intptr_t) M_lib_mFont_getHeight_R_int, VTABLE_lib_mFont_getHeight_R_int, "()I", 17 },
	{ "getCharIndex", (intptr_t) M_lib_mFont_getCharIndex_char_R_int, VTABLE_lib_mFont_getCharIndex_char_R_int, "(C)I", 2 },
	{ "getWidth", (intptr_t) M_lib_mFont_getWidth_java_lang_String_R_int, VTABLE_lib_mFont_getWidth_java_lang_String_R_int, "(Ljava/lang/String;)I", 17 },
	{ "getTTFWidth", (intptr_t) M_lib_mFont_getTTFWidth_java_lang_String_R_int, VTABLE_lib_mFont_getTTFWidth_java_lang_String_R_int, "(Ljava/lang/String;)I", 2 },
	{ "drawString", (intptr_t) M_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int, VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int, "(Llib/mGraphics;Ljava/lang/String;III)V", 17 },
	{ "drawString", (intptr_t) M_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont, VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont, "(Llib/mGraphics;Ljava/lang/String;IIILlib/mFont;)V", 17 },
	{ "drawStringTTF", (intptr_t) M_lib_mFont_drawStringTTF_lib_mGraphics_java_lang_String_int_int_int, VTABLE_lib_mFont_drawStringTTF_lib_mGraphics_java_lang_String_int_int_int, "(Llib/mGraphics;Ljava/lang/String;III)V", 2 },
	{ "splitFontArray", (intptr_t) M_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String, VTABLE_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String, "(Ljava/lang/String;I)[Ljava/lang/String;", 17 },
	{ "drawText", (intptr_t) M_lib_mFont_drawText_lib_mGraphics_java_lang_String_int_int_int, VTABLE_lib_mFont_drawText_lib_mGraphics_java_lang_String_int_int_int, "(Llib/mGraphics;Ljava/lang/String;III)V", 17 },
	{ "drawStringWithFontType", (intptr_t) M_lib_mFont_drawStringWithFontType_lib_mGraphics_java_lang_String_int_int_int_lib_mFont, VTABLE_lib_mFont_drawStringWithFontType_lib_mGraphics_java_lang_String_int_int_int_lib_mFont, "(Llib/mGraphics;Ljava/lang/String;IIILlib/mFont;)V", 17 },
	{ "<clinit>", (intptr_t) clinit_lib_mFont, 0, "()V", 8 },
};

Class class_lib_mFont{
		.nativeName = (intptr_t) "lib/mFont",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_mFont),
		.classVtable = (intptr_t) vtable_lib_mFont,
		.staticInitializer = (intptr_t) clinit_lib_mFont,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_mFont,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 69,
		.nativeFields = (intptr_t) fields,
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_lib_mFont = registerClass(&class_lib_mFont);

}

