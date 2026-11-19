#include "lib/mGraphics.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "nro/GameScr.h"
#include "java/lang/Integer.h"
#include "java/util/HashMap.h"
#include "main/GameCanvas.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"
#include "java/util/Collection.h"
#include "javax/microedition/lcdui/Image.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/graphics/g2d/NinePatch.h"
#include "com/nro/GameMain.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ScissorStack.h"
#include "java/lang/Math.h"
#include "java/lang/Exception.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "java/util/Iterator.h"
#include "java/util/Hashtable.h"
#include "lib/mGraphics.h"
#include "com/badlogic/gdx/graphics/g2d/SpriteBatch.h"
#include "com/badlogic/gdx/graphics/Texture_TextureFilter.h"
#include "com/badlogic/gdx/graphics/Camera.h"
#include "com/badlogic/gdx/math/Rectangle.h"
#include "com/badlogic/gdx/graphics/Pixmap_Blending.h"
#include "java/lang/CharSequence.h"
#include "com/badlogic/gdx/graphics/g2d/GlyphLayout.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/OrthographicCamera.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "java/util/Enumeration.h"
#include "nro/Small.h"
#include "com/badlogic/gdx/graphics/GLTexture.h"
#include "com/badlogic/gdx/math/Vector2.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {

jint SF_lib_mGraphics_HCENTER;
jint SF_lib_mGraphics_VCENTER;
jint SF_lib_mGraphics_LEFT;
jint SF_lib_mGraphics_RIGHT;
jint SF_lib_mGraphics_TOP;
jint SF_lib_mGraphics_BOTTOM;
jint SF_lib_mGraphics_zoomLevel;
jobject SF_lib_mGraphics_cachedTextures;
jobject SF_lib_mGraphics_whitePixelTexture;
jint SF_lib_mGraphics_addYWhenOpenKeyBoard;
jobject SF_lib_mGraphics_cachedRoundedNinePatches;
jobject SF_lib_mGraphics_cachedOutlineRoundedNinePatches;

void mark_lib_mGraphics(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_lib_mGraphics_cachedTextures)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mGraphics_cachedTextures)->clazz)->markFunction)((jobject) SF_lib_mGraphics_cachedTextures, mark, depth + 1);
		if (SF_lib_mGraphics_whitePixelTexture)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mGraphics_whitePixelTexture)->clazz)->markFunction)((jobject) SF_lib_mGraphics_whitePixelTexture, mark, depth + 1);
		if (SF_lib_mGraphics_cachedRoundedNinePatches)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mGraphics_cachedRoundedNinePatches)->clazz)->markFunction)((jobject) SF_lib_mGraphics_cachedRoundedNinePatches, mark, depth + 1);
		if (SF_lib_mGraphics_cachedOutlineRoundedNinePatches)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mGraphics_cachedOutlineRoundedNinePatches)->clazz)->markFunction)((jobject) SF_lib_mGraphics_cachedOutlineRoundedNinePatches, mark, depth + 1);
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
	auto self = (lib_mGraphics *) object;
	if (self->F_g)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_g)->clazz)->markFunction)((jobject) self->F_g, mark, depth + 1);
	if (self->F_tmpScissors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmpScissors)->clazz)->markFunction)((jobject) self->F_tmpScissors, mark, depth + 1);
	if (self->F_tmpClipBounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmpClipBounds)->clazz)->markFunction)((jobject) self->F_tmpClipBounds, mark, depth + 1);
	if (self->F_tmpLineStart)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmpLineStart)->clazz)->markFunction)((jobject) self->F_tmpLineStart, mark, depth + 1);
	if (self->F_tmpLineEnd)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmpLineEnd)->clazz)->markFunction)((jobject) self->F_tmpLineEnd, mark, depth + 1);
}

void init_lib_mGraphics_com_badlogic_gdx_graphics_g2d_SpriteBatch(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mGraphics(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(60);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(47);
	((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_A = (jfloat(1));
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Rectangle);
	init_com_badlogic_gdx_math_Rectangle(ctx, sp[1].o);
	((lib_mGraphics *) NULL_CHECK(sp[0].o))->F_tmpScissors = (jref) sp[1].o;
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Rectangle);
	init_com_badlogic_gdx_math_Rectangle(ctx, sp[1].o);
	((lib_mGraphics *) NULL_CHECK(sp[0].o))->F_tmpClipBounds = (jref) sp[1].o;
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[1].o);
	((lib_mGraphics *) NULL_CHECK(sp[0].o))->F_tmpLineStart = (jref) sp[1].o;
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[1].o);
	((lib_mGraphics *) NULL_CHECK(sp[0].o))->F_tmpLineEnd = (jref) sp[1].o;
	LINE_NUMBER(61);
	((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_g = (jref) (frame[1].o);
	LINE_NUMBER(62);
	((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_isOptimized = (jint(1));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_lib_mGraphics(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mGraphics(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(65);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(47);
	((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_A = (jfloat(1));
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Rectangle);
	init_com_badlogic_gdx_math_Rectangle(ctx, sp[1].o);
	((lib_mGraphics *) NULL_CHECK(sp[0].o))->F_tmpScissors = (jref) sp[1].o;
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Rectangle);
	init_com_badlogic_gdx_math_Rectangle(ctx, sp[1].o);
	((lib_mGraphics *) NULL_CHECK(sp[0].o))->F_tmpClipBounds = (jref) sp[1].o;
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[1].o);
	((lib_mGraphics *) NULL_CHECK(sp[0].o))->F_tmpLineStart = (jref) sp[1].o;
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[1].o);
	((lib_mGraphics *) NULL_CHECK(sp[0].o))->F_tmpLineEnd = (jref) sp[1].o;
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:getImageWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mGraphics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(71);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_javax_microedition_lcdui_Image_getWidth_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_javax_microedition_lcdui_Image_getWidth_R_int])(ctx, (frame[0].o));
	if (temp0 > 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(75);
	jint temp0 = (jint)((func_javax_microedition_lcdui_Image_getWidth_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_javax_microedition_lcdui_Image_getWidth_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:getImageHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mGraphics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(80);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_javax_microedition_lcdui_Image_getHeight_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_javax_microedition_lcdui_Image_getHeight_R_int])(ctx, (frame[0].o));
	if (temp0 > 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(84);
	jint temp0 = (jint)((func_javax_microedition_lcdui_Image_getHeight_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_javax_microedition_lcdui_Image_getHeight_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_lib_mGraphics_isNotTranColor_com_badlogic_gdx_graphics_Color_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:isNotTranColor", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mGraphics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Color_CLEAR;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Color_CLEAR_WHITE;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat SM_lib_mGraphics_clamp_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:clamp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mGraphics(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(93);
	jfloat temp0 = jfloat(0);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (jfloat(1)), (frame[0].f));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jobject SM_lib_mGraphics_setColorObj_int_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jint param0) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:setColorObj", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mGraphics(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(100);
	frame[1].i = ((frame[0].i) & (255));
	LINE_NUMBER(101);
	frame[2].i = (((frame[0].i) >> (8)) & (255));
	LINE_NUMBER(102);
	frame[3].i = (((frame[0].i) >> (16)) & (255));
	LINE_NUMBER(103);
	frame[4].f = ((jfloat((frame[1].i))) / (jfloat(256.0f)));
	LINE_NUMBER(104);
	frame[5].f = ((jfloat((frame[2].i))) / (jfloat(256.0f)));
	LINE_NUMBER(105);
	frame[6].f = ((jfloat((frame[3].i))) / (jfloat(256.0f)));
	LINE_NUMBER(106);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[0].o, (frame[6].f), (frame[5].f), (frame[4].f), (jfloat(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_lib_mGraphics_blendColor_float_int_int_R_int(jcontext ctx, jfloat param0, jint param1, jint param2) {
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:blendColor", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mGraphics(ctx);
	frame[0].f = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)SM_lib_mGraphics_setColorObj_int_R_com_badlogic_gdx_graphics_Color(ctx, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(112);
	frame[4].f = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_r) * (jfloat(255.0f)));
	LINE_NUMBER(113);
	frame[5].f = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_g) * (jfloat(255.0f)));
	LINE_NUMBER(114);
	frame[6].f = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_b) * (jfloat(255.0f)));
	LINE_NUMBER(115);
	sp[0].o = (jobject)SM_lib_mGraphics_setColorObj_int_R_com_badlogic_gdx_graphics_Color(ctx, (frame[1].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(116);
	frame[8].f = ((((frame[4].f) + ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_r)) * (frame[0].f)) + ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_r));
	LINE_NUMBER(117);
	frame[9].f = ((((frame[5].f) + ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_g)) * (frame[0].f)) + ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_g));
	LINE_NUMBER(118);
	frame[10].f = ((((frame[6].f) + ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_b)) * (frame[0].f)) + ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_b));
	LINE_NUMBER(119);
	if ((floatCompare((frame[8].f), (jfloat(255.0f)), -1)) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(121);
	frame[8].f = (jfloat(255.0f));
	}
label_9:;
	{
	LINE_NUMBER(123);
	if ((floatCompare((frame[8].f), (jfloat(0)), 1)) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(125);
	frame[8].f = (jfloat(0));
	}
label_11:;
	{
	LINE_NUMBER(127);
	if ((floatCompare((frame[9].f), (jfloat(255.0f)), -1)) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(129);
	frame[9].f = (jfloat(255.0f));
	}
label_13:;
	{
	LINE_NUMBER(131);
	if ((floatCompare((frame[9].f), (jfloat(0)), 1)) >= 0) goto label_15;
	}
	{
	LINE_NUMBER(133);
	frame[9].f = (jfloat(0));
	}
label_15:;
	{
	LINE_NUMBER(135);
	if ((floatCompare((frame[10].f), (jfloat(0)), 1)) >= 0) goto label_17;
	}
	{
	LINE_NUMBER(137);
	frame[10].f = (jfloat(0));
	}
label_17:;
	{
	LINE_NUMBER(139);
	if ((floatCompare((frame[10].f), (jfloat(255.0f)), -1)) <= 0) goto label_19;
	}
	{
	LINE_NUMBER(141);
	frame[10].f = (jfloat(255.0f));
	}
label_19:;
	{
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return ((((jint((frame[10].f))) & ((255) + ((jint((frame[9].f))) << (8)))) & ((255) + ((jint((frame[8].f))) << (16)))) & (255));
	}

	popStackFrame(ctx);
}

jint SM_lib_mGraphics_getRealImageWidth_javax_microedition_lcdui_Image_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:getRealImageWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mGraphics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return ((jint)((javax_microedition_lcdui_Image *) NULL_CHECK((frame[0].o)))->F_w);
	}

	popStackFrame(ctx);
}

jint SM_lib_mGraphics_getRealImageHeight_javax_microedition_lcdui_Image_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:getRealImageHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mGraphics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return ((jint)((javax_microedition_lcdui_Image *) NULL_CHECK((frame[0].o)))->F_h);
	}

	popStackFrame(ctx);
}

void M_lib_mGraphics_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:begin", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_g;
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_begin])(ctx, sp[0].o);
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_mGraphics_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:end", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_peekScissors_R_com_badlogic_gdx_math_Rectangle(ctx);
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_g;
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush])(ctx, sp[0].o);
	LINE_NUMBER(164);
	sp[0].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_popScissors_R_com_badlogic_gdx_math_Rectangle(ctx);
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(166);
	((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_isClip = (jint(0));
	LINE_NUMBER(167);
	((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_isTranslate = (jint(0));
	LINE_NUMBER(168);
	((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_translateX = (jint(0));
	LINE_NUMBER(169);
	((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_translateY = (jint(0));
	LINE_NUMBER(170);
	sp[0].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_g;
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_end])(ctx, sp[0].o);
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_lib_mGraphics_getWhitePixelTexture_R_com_badlogic_gdx_graphics_Texture(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:getWhitePixelTexture", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mGraphics(ctx);
	{
	LINE_NUMBER(175);
	clinit_lib_mGraphics(ctx);
	sp[0].o = (jobject)SF_lib_mGraphics_whitePixelTexture;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(177);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	jint temp0 = jint(1);
	jint temp1 = jint(1);
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA8888;
	init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[0].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(180);
	((func_com_badlogic_gdx_graphics_Pixmap_setColor_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_setColor_float_float_float_float])(ctx, (frame[0].o), (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	LINE_NUMBER(181);
	((func_com_badlogic_gdx_graphics_Pixmap_drawPixel_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixel_int_int])(ctx, (frame[0].o), (jint(0)), (jint(0)));
	LINE_NUMBER(182);
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Texture);
	init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_graphics_Pixmap(ctx, sp[0].o, (frame[0].o));
	clinit_lib_mGraphics(ctx);
	SF_lib_mGraphics_whitePixelTexture = sp[0].o;
	LINE_NUMBER(183);
	clinit_javax_microedition_lcdui_Image(ctx);
	SF_javax_microedition_lcdui_Image_activeTextureCount = ((clinit_javax_microedition_lcdui_Image(ctx), (jint)SF_javax_microedition_lcdui_Image_activeTextureCount) + (jint(1)));
	LINE_NUMBER(184);
	clinit_javax_microedition_lcdui_Image(ctx);
	SF_javax_microedition_lcdui_Image_totalCreatedTextures = ((clinit_javax_microedition_lcdui_Image(ctx), (jint)SF_javax_microedition_lcdui_Image_totalCreatedTextures) + (jint(1)));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(188);
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, (frame[0].o));
	LINE_NUMBER(189);
	goto label_5;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(188);
	frame[1].o = sp[0].o;
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, (frame[0].o));
	LINE_NUMBER(189);
	throwException(ctx, (frame[1].o));	}
label_5:;
	{
	LINE_NUMBER(191);
	clinit_lib_mGraphics(ctx);
	sp[0].o = (jobject)SF_lib_mGraphics_whitePixelTexture;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_lib_mGraphics_clearCache(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:clearCache", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mGraphics(ctx);
	{
	LINE_NUMBER(196);
	clinit_lib_mGraphics(ctx);
	sp[0].o = (jobject)SF_lib_mGraphics_whitePixelTexture;
	if (sp[0].o == nullptr) goto label_9;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(200);
	clinit_lib_mGraphics(ctx);
	sp[0].o = (jobject)SF_lib_mGraphics_whitePixelTexture;
	((func_com_badlogic_gdx_graphics_Texture_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_dispose])(ctx, sp[0].o);
	LINE_NUMBER(201);
	if ((clinit_javax_microedition_lcdui_Image(ctx), (jint)SF_javax_microedition_lcdui_Image_activeTextureCount) <= 0) goto label_11;
	}
	{
	clinit_javax_microedition_lcdui_Image(ctx);
	SF_javax_microedition_lcdui_Image_activeTextureCount = ((clinit_javax_microedition_lcdui_Image(ctx), (jint)SF_javax_microedition_lcdui_Image_activeTextureCount) - (jint(1)));
	}
label_11:;
	{
	LINE_NUMBER(202);
	clinit_javax_microedition_lcdui_Image(ctx);
	SF_javax_microedition_lcdui_Image_totalDisposedTextures = ((clinit_javax_microedition_lcdui_Image(ctx), (jint)SF_javax_microedition_lcdui_Image_totalDisposedTextures) + (jint(1)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(206);
	goto label_12;
label_2:;
	LINE_NUMBER(204);
	INST_ASTORE(0);
label_12:;
	{
	LINE_NUMBER(207);
	clinit_lib_mGraphics(ctx);
	SF_lib_mGraphics_whitePixelTexture = (jobject(nullptr));
	}
label_9:;
	{
	LINE_NUMBER(209);
	SM_lib_mGraphics_clearCachedTextures(ctx);
	LINE_NUMBER(210);
	clinit_lib_mGraphics(ctx);
	sp[0].o = (jobject)SF_lib_mGraphics_cachedRoundedNinePatches;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	clinit_lib_mGraphics(ctx);
	sp[0].o = (jobject)SF_lib_mGraphics_cachedRoundedNinePatches;
	jint temp0 = (jint)((func_java_util_HashMap_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_14;
	}
	{
	LINE_NUMBER(212);
	clinit_lib_mGraphics(ctx);
	sp[0].o = (jobject)SF_lib_mGraphics_cachedRoundedNinePatches;
	sp[0].o = (jobject)((func_java_util_HashMap_values_R_java_util_Collection) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_values_R_java_util_Collection])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_NinePatch, sp[0].o));
	LINE_NUMBER(214);
	if ((frame[1].o) == nullptr) goto label_19;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_NinePatch_getTexture_R_com_badlogic_gdx_graphics_Texture) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getTexture_R_com_badlogic_gdx_graphics_Texture])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_19;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_NinePatch_getTexture_R_com_badlogic_gdx_graphics_Texture) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getTexture_R_com_badlogic_gdx_graphics_Texture])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_graphics_Texture_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_dispose])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(222);
	goto label_19;
label_6:;
	LINE_NUMBER(220);
	INST_ASTORE(2);
label_19:;
	LINE_NUMBER(224);
	goto label_16;
label_17:;
	{
	LINE_NUMBER(225);
	clinit_lib_mGraphics(ctx);
	sp[0].o = (jobject)SF_lib_mGraphics_cachedRoundedNinePatches;
	((func_java_util_HashMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_clear])(ctx, sp[0].o);
	}
label_14:;
	LINE_NUMBER(227);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_lib_mGraphics_clearCachedTextures(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:clearCachedTextures", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mGraphics(ctx);
	{
	LINE_NUMBER(231);
	clinit_lib_mGraphics(ctx);
	sp[0].o = (jobject)SF_lib_mGraphics_cachedTextures;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	clinit_lib_mGraphics(ctx);
	sp[0].o = (jobject)SF_lib_mGraphics_cachedTextures;
	jint temp0 = (jint)((func_java_util_Hashtable_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(233);
	clinit_lib_mGraphics(ctx);
	sp[0].o = (jobject)SF_lib_mGraphics_cachedTextures;
	sp[0].o = (jobject)((func_java_util_Hashtable_elements_R_java_util_Enumeration) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_elements_R_java_util_Enumeration])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(234);
	jint temp0 = (jint)((func_java_util_Enumeration_hasMoreElements_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Enumeration, INDEX_java_util_Enumeration_hasMoreElements_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((func_java_util_Enumeration_nextElement_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Enumeration, INDEX_java_util_Enumeration_nextElement_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(237);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_graphics_Texture)) == 0) goto label_11;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(241);
	((func_com_badlogic_gdx_graphics_Texture_dispose) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_Texture, (frame[1].o))))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_dispose])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_Texture, (frame[1].o))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(245);
	goto label_11;
label_2:;
	LINE_NUMBER(243);
	INST_ASTORE(2);
label_11:;
	LINE_NUMBER(247);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(248);
	clinit_lib_mGraphics(ctx);
	sp[0].o = (jobject)SF_lib_mGraphics_cachedTextures;
	((func_java_util_Hashtable_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_clear])(ctx, sp[0].o);
	}
label_5:;
	LINE_NUMBER(250);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_mGraphics_cache_java_lang_String_com_badlogic_gdx_graphics_Texture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:cache", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(254);
	clinit_lib_mGraphics(ctx);
	sp[0].o = (jobject)SF_lib_mGraphics_cachedTextures;
	jint temp0 = (jint)((func_java_util_Hashtable_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_size_R_int])(ctx, sp[0].o);
	if (temp0 <= (256)) goto label_5;
	}
	LINE_NUMBER(256);
	SM_lib_mGraphics_clearCachedTextures(ctx);
label_5:;
	{
	LINE_NUMBER(258);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Texture_getWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getWidth_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Texture_getHeight_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getHeight_R_int])(ctx, (frame[2].o));
	if ((temp0 * temp1) >= ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) * (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h))) goto label_7;
	}
	{
	LINE_NUMBER(260);
	clinit_lib_mGraphics(ctx);
	sp[0].o = (jobject)SF_lib_mGraphics_cachedTextures;
	sp[0].o = (jobject)((func_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_Texture, sp[0].o));
	LINE_NUMBER(261);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	if ((frame[3].o) == (frame[2].o)) goto label_7;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(265);
	((func_com_badlogic_gdx_graphics_Texture_dispose) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_dispose])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(269);
	goto label_7;
label_2:;
	LINE_NUMBER(267);
	INST_ASTORE(4);
label_7:;
	LINE_NUMBER(272);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_mGraphics_translate_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:translate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(276);
	frame[1].i = ((frame[1].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(277);
	frame[2].i = ((frame[2].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(278);
	sp[0].o = frame[0].o;
	((lib_mGraphics *) NULL_CHECK(sp[0].o))->F_translateX = (((jint)((lib_mGraphics *) NULL_CHECK(sp[0].o))->F_translateX) + (frame[1].i));
	LINE_NUMBER(279);
	sp[0].o = frame[0].o;
	((lib_mGraphics *) NULL_CHECK(sp[0].o))->F_translateY = (((jint)((lib_mGraphics *) NULL_CHECK(sp[0].o))->F_translateY) + (frame[2].i));
	LINE_NUMBER(280);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_translateX) != 0) goto label_5;
	}
	{
	if (((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_translateY) == 0) goto label_6;
	}
label_5:;
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 2;
	((lib_mGraphics *) NULL_CHECK(sp[0].o))->F_isTranslate = sp[1].i;
	LINE_NUMBER(281);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_lib_mGraphics_getTranslateX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:getTranslateX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(285);
	popStackFrame(ctx);
	return (((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_translateX) / (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	}

	popStackFrame(ctx);
}

jint M_lib_mGraphics_getTranslateY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:getTranslateY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return ((((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_translateY) / (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel)) + (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_addYWhenOpenKeyBoard));
	}

	popStackFrame(ctx);
}

void M_lib_mGraphics_setClip_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:setClip", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(295);
	frame[1].i = ((frame[1].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(296);
	frame[2].i = ((frame[2].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(297);
	frame[3].i = ((frame[3].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(298);
	frame[4].i = ((frame[4].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(299);
	((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_clipTX = ((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_translateX);
	LINE_NUMBER(300);
	((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_clipTY = ((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_translateY);
	LINE_NUMBER(301);
	((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_clipX = (frame[1].i);
	LINE_NUMBER(302);
	((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_clipY = (frame[2].i);
	LINE_NUMBER(303);
	((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_clipW = (frame[3].i);
	LINE_NUMBER(304);
	((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_clipH = (frame[4].i);
	LINE_NUMBER(305);
	((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_isClip = (jint(1));
	LINE_NUMBER(306);
	((func_lib_mGraphics_endClip) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_endClip])(ctx, (frame[0].o));
	LINE_NUMBER(307);
	((func_lib_mGraphics_beginClip) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_beginClip])(ctx, (frame[0].o));
	LINE_NUMBER(308);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_mGraphics_beginClip(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:beginClip", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(312);
	if (((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_isClip) != 0) goto label_1;
	}
	LINE_NUMBER(314);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(316);
	if (((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_clipW) <= 0) goto label_3;
	}
	{
	if (((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_clipH) > 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(318);
	((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_clipW = (jint(1));
	LINE_NUMBER(319);
	((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_clipH = (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_tmpClipBounds;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, sp[0].o, (jfloat((((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_clipX) + ((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_clipTX)))), (jfloat((((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_clipY) + ((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_clipTY)))), (jfloat(((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_clipW))), (jfloat(((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_clipH))));
	LINE_NUMBER(322);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_me;
	sp[0].o = (jobject)((com_nro_GameMain *) NULL_CHECK(sp[0].o))->F_camera;
	sp[1].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_g;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_getTransformMatrix_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_getTransformMatrix_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[1].o);
	sp[2].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_tmpClipBounds;
	sp[3].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_tmpScissors;
	SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_calculateScissors_com_badlogic_gdx_graphics_Camera_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(323);
	sp[0].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_tmpScissors;
	jint temp0 = (jint)SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_pushScissors_com_badlogic_gdx_math_Rectangle_R_boolean(ctx, sp[0].o);
	LINE_NUMBER(324);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_mGraphics_endClip(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:endClip", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(328);
	sp[0].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_peekScissors_R_com_badlogic_gdx_math_Rectangle(ctx);
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_g;
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush])(ctx, sp[0].o);
	LINE_NUMBER(331);
	sp[0].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_popScissors_R_com_badlogic_gdx_math_Rectangle(ctx);
	}
label_1:;
	LINE_NUMBER(333);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_lib_mGraphics_getClipX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:getClipX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(337);
	if (((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_isClip) == 0) goto label_1;
	}
	{
	jint temp0 = ((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_clipX) / (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	clinit_nro_GameScr(ctx);
	(sp++)->i = SF_nro_GameScr_cmx;
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_lib_mGraphics_getClipY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:getClipY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(342);
	if (((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_isClip) == 0) goto label_1;
	}
	{
	jint temp0 = ((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_clipY) / (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	clinit_nro_GameScr(ctx);
	(sp++)->i = SF_nro_GameScr_cmy;
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_lib_mGraphics_getClipWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:getClipWidth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(347);
	if (((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_isClip) == 0) goto label_1;
	}
	{
	jint temp0 = ((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_clipW) / (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_w;
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_lib_mGraphics_getClipHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:getClipHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(352);
	if (((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_isClip) == 0) goto label_1;
	}
	{
	jint temp0 = ((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_clipH) / (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_h;
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_lib_mGraphics_fillRect_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:fillRect", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(357);
	frame[6].f = (jfloat(0.5f));
	LINE_NUMBER(358);
	((func_lib_mGraphics_setColor_int_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int_float])(ctx, (frame[0].o), (frame[5].i), (frame[6].f));
	LINE_NUMBER(359);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_mGraphics__fillRect_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:_fillRect", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(365);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_mGraphics_drawLine_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[32];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:drawLine", 32 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(369);
	if ((frame[1].i) != (frame[3].i)) goto label_1;
	}
	{
	if ((frame[2].i) != (frame[4].i)) goto label_1;
	}
	LINE_NUMBER(371);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(374);
	frame[5].f = ((jfloat((frame[1].i))) * (jfloat((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel))));
	LINE_NUMBER(375);
	frame[6].f = ((jfloat((frame[2].i))) * (jfloat((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel))));
	LINE_NUMBER(376);
	frame[7].f = ((jfloat((frame[3].i))) * (jfloat((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel))));
	LINE_NUMBER(377);
	frame[8].f = ((jfloat((frame[4].i))) * (jfloat((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel))));
	LINE_NUMBER(379);
	if (((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_isTranslate) == 0) goto label_7;
	}
	{
	LINE_NUMBER(381);
	frame[5].f = ((frame[5].f) + (jfloat(((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_translateX))));
	LINE_NUMBER(382);
	frame[6].f = ((frame[6].f) + (jfloat(((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_translateY))));
	LINE_NUMBER(383);
	frame[7].f = ((frame[7].f) + (jfloat(((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_translateX))));
	LINE_NUMBER(384);
	frame[8].f = ((frame[8].f) + (jfloat(((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_translateY))));
	}
label_7:;
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)SM_lib_mGraphics_getWhitePixelTexture_R_com_badlogic_gdx_graphics_Texture(ctx);
	frame[9].o = sp[0].o;
	LINE_NUMBER(388);
	frame[10].f = ((frame[7].f) - (frame[5].f));
	LINE_NUMBER(389);
	frame[11].f = ((frame[8].f) - (frame[6].f));
	LINE_NUMBER(390);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((frame[10].f) * (frame[10].f)) + ((frame[11].f) * (frame[11].f))))));
	frame[12].f = (jfloat(temp0));
	LINE_NUMBER(391);
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(1)), (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	frame[13].f = (jfloat(temp1));
	LINE_NUMBER(393);
	sp[0].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_tmpLineStart;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[5].f), (frame[6].f));
	LINE_NUMBER(394);
	sp[0].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_tmpLineEnd;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[7].f), (frame[8].f));
	LINE_NUMBER(395);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_tmpLineStart;
	sp[2].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_tmpLineEnd;
	jfloat temp2 = (jfloat)((func_lib_mGraphics_getAngle_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_getAngle_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_float])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[14].f = temp2;
	LINE_NUMBER(397);
	sp[0].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_g;
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_float_float_float_float])(ctx, sp[0].o, ((jfloat)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_R), ((jfloat)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_G), ((jfloat)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_B), ((jfloat)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_A));
	LINE_NUMBER(398);
	sp[0].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_g;
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float_float_int_int_int_int_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float_float_int_int_int_int_boolean_boolean])(ctx, sp[0].o, (frame[9].o), (frame[5].f), ((frame[6].f) - ((frame[13].f) * (jfloat(0.5f)))), (jfloat(0)), ((frame[13].f) * (jfloat(0.5f))), (jfloat(1)), (jfloat(1)), (frame[12].f), (frame[13].f), (frame[14].f), (jint(0)), (jint(0)), (jint(1)), (jint(1)), (jint(0)), (jint(0)));
	LINE_NUMBER(399);
	sp[0].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_g;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Color_WHITE;
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(400);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_mGraphics_drawRect_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:drawRect", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(404);
	frame[5].i = (jint(1));
	LINE_NUMBER(405);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[5].i));
	LINE_NUMBER(406);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[5].i), (frame[4].i));
	LINE_NUMBER(407);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (frame[3].i)), (frame[2].i), (frame[5].i), ((frame[4].i) + (jint(1))));
	LINE_NUMBER(408);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[1].i), ((frame[2].i) + (frame[4].i)), ((frame[3].i) + (jint(1))), (frame[5].i));
	LINE_NUMBER(409);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_mGraphics_fillRect_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:fillRect", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(413);
	frame[1].i = ((frame[1].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(414);
	frame[2].i = ((frame[2].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(415);
	frame[3].i = ((frame[3].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(416);
	frame[4].i = ((frame[4].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(417);
	if ((frame[3].i) <= 0) goto label_5;
	}
	INST_ILOAD(4);
	if ((--sp)->i > 0) goto label_6;
label_5:;
	LINE_NUMBER(419);
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(421);
	if (((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_isTranslate) == 0) goto label_7;
	}
	{
	LINE_NUMBER(423);
	frame[1].i = ((frame[1].i) + ((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_translateX));
	LINE_NUMBER(424);
	frame[2].i = ((frame[2].i) + ((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_translateY));
	}
label_7:;
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)SM_lib_mGraphics_getWhitePixelTexture_R_com_badlogic_gdx_graphics_Texture(ctx);
	frame[5].o = sp[0].o;
	LINE_NUMBER(427);
	sp[0].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_g;
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_float_float_float_float])(ctx, sp[0].o, ((jfloat)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_R), ((jfloat)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_G), ((jfloat)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_B), ((jfloat)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_A));
	LINE_NUMBER(428);
	sp[0].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_g;
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float_float_int_int_int_int_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float_float_int_int_int_int_boolean_boolean])(ctx, sp[0].o, (frame[5].o), (jfloat((frame[1].i))), (jfloat((frame[2].i))), (jfloat(0)), (jfloat(0)), (jfloat((frame[3].i))), (jfloat((frame[4].i))), (jfloat(1)), (jfloat(1)), (jfloat(0)), (jint(0)), (jint(0)), (jint(1)), (jint(1)), (jint(0)), (jint(1)));
	LINE_NUMBER(429);
	sp[0].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_g;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Color_WHITE;
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(430);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_mGraphics_drawString_java_lang_String_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:drawString", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(434);
	frame[2].i = ((frame[2].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(435);
	frame[3].i = ((frame[3].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(436);
	if (((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_isTranslate) == 0) goto label_3;
	}
	{
	LINE_NUMBER(438);
	frame[2].i = ((frame[2].i) + ((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_translateX));
	LINE_NUMBER(439);
	frame[3].i = ((frame[3].i) + ((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_translateY));
	}
label_3:;
	{
	LINE_NUMBER(441);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_g;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, (frame[1].o), (jfloat((frame[2].i))), (jfloat((frame[3].i))));
	LINE_NUMBER(442);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_mGraphics_drawStringTTF_java_lang_String_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:drawStringTTF", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(450);
	if ((frame[4].o) == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_1;
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(452);
	frame[6].f = (jfloat(((frame[2].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel))));
	LINE_NUMBER(453);
	frame[7].f = (jfloat(((frame[3].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel))));
	LINE_NUMBER(454);
	((func_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o), (frame[1].o), (frame[6].f), (frame[7].f), (frame[4].o), (frame[5].o));
	LINE_NUMBER(455);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:drawStringTTFRaw", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(462);
	if ((frame[4].o) == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_1;
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(464);
	if (((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_isTranslate) == 0) goto label_3;
	}
	{
	LINE_NUMBER(466);
	frame[2].f = ((frame[2].f) + (jfloat(((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_translateX))));
	LINE_NUMBER(467);
	frame[3].f = ((frame[3].f) + (jfloat(((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_translateY))));
	}
label_3:;
	{
	LINE_NUMBER(470);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont_setColor_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_setColor_com_badlogic_gdx_graphics_Color])(ctx, (frame[4].o), (frame[5].o));
	LINE_NUMBER(471);
	sp[0].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_g;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Color_WHITE;
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(473);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_g;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(475);
	sp[0].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_g;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Color_WHITE;
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(476);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:drawRegion", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].i = param8;
	{
	LINE_NUMBER(479);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(482);
	((func_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].i), (frame[9].i));
	}
label_1:;
	LINE_NUMBER(484);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_float_float_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jfloat param6, jfloat param7, jint param8) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:drawRegion", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].i = param8;
	{
	LINE_NUMBER(488);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(491);
	((func_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (jint((frame[7].f))), (jint((frame[8].f))), (frame[9].i));
	}
label_1:;
	LINE_NUMBER(493);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jbool param9) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:drawRegion", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].i = param8;
	frame[10].i = param9;
	{
	LINE_NUMBER(497);
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].i), (frame[9].i));
	LINE_NUMBER(498);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jfloat param9) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:drawRegion", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].i = param8;
	frame[10].f = param9;
	{
	LINE_NUMBER(502);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(504);
	((func_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].i), (frame[9].i), (frame[10].f));
	}
label_1:;
	LINE_NUMBER(506);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:_drawRegion", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].i = param8;
	{
	LINE_NUMBER(510);
	((func_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].i), (frame[9].i), (jfloat(1)));
	LINE_NUMBER(511);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jfloat param9) {
	NULL_CHECK(self);
	jtype frame[45];
	auto stack = &frame[28];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:_drawRegion", 45 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].i = param8;
	frame[10].f = param9;
	{
	LINE_NUMBER(515);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK((frame[1].o)))->F_texture;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	LINE_NUMBER(517);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(521);
	frame[11].f = (jfloat(((frame[7].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel))));
	LINE_NUMBER(522);
	frame[12].f = (jfloat(((frame[8].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel))));
	LINE_NUMBER(523);
	frame[13].f = (jfloat(((frame[2].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel))));
	LINE_NUMBER(524);
	frame[14].f = (jfloat(((frame[3].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel))));
	LINE_NUMBER(525);
	frame[15].f = (jfloat(((frame[4].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel))));
	LINE_NUMBER(526);
	frame[16].f = (jfloat(((frame[5].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel))));
	LINE_NUMBER(528);
	if (((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_isTranslate) == 0) goto label_9;
	}
	{
	LINE_NUMBER(530);
	frame[11].f = ((frame[11].f) + (jfloat(((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_translateX))));
	LINE_NUMBER(531);
	frame[12].f = ((frame[12].f) + (jfloat(((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_translateY))));
	}
label_9:;
	{
	LINE_NUMBER(534);
	frame[17].f = ((frame[15].f) * (frame[10].f));
	LINE_NUMBER(535);
	frame[18].f = ((frame[16].f) * (frame[10].f));
	LINE_NUMBER(536);
	frame[19].f = (jfloat(0));
	LINE_NUMBER(537);
	frame[20].f = (jfloat(0));
	LINE_NUMBER(538);
	frame[21].f = (jfloat(1));
	LINE_NUMBER(539);
	frame[22].f = (jfloat(1));
	LINE_NUMBER(542);
	if (((frame[9].i) & (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_HCENTER)) != (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_HCENTER)) goto label_18;
	}
	{
	LINE_NUMBER(544);
	frame[19].f = ((frame[19].f) - ((frame[17].f) / (jfloat(2))));
	}
label_18:;
	{
	LINE_NUMBER(546);
	if (((frame[9].i) & (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_VCENTER)) != (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_VCENTER)) goto label_20;
	}
	{
	LINE_NUMBER(548);
	frame[20].f = ((frame[20].f) - ((frame[18].f) / (jfloat(2))));
	}
label_20:;
	{
	LINE_NUMBER(550);
	if (((frame[9].i) & (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_RIGHT)) != (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_RIGHT)) goto label_22;
	}
	{
	LINE_NUMBER(552);
	frame[19].f = ((frame[19].f) - (frame[17].f));
	}
label_22:;
	{
	LINE_NUMBER(554);
	if (((frame[9].i) & (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_BOTTOM)) != (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_BOTTOM)) goto label_24;
	}
	{
	LINE_NUMBER(556);
	frame[20].f = ((frame[20].f) - (frame[18].f));
	}
label_24:;
	{
	LINE_NUMBER(559);
	frame[11].f = ((frame[11].f) + (frame[19].f));
	LINE_NUMBER(560);
	frame[12].f = ((frame[12].f) + (frame[20].f));
	LINE_NUMBER(562);
	frame[23].i = (jint(0));
	LINE_NUMBER(563);
	frame[24].i = (jint(1));
	LINE_NUMBER(564);
	frame[25].f = (jfloat(0));
	LINE_NUMBER(565);
	frame[26].f = ((frame[17].f) / (jfloat(2)));
	LINE_NUMBER(566);
	frame[27].f = ((frame[18].f) / (jfloat(2)));
	LINE_NUMBER(568);
	switch((frame[6].i)) {
		case 0: goto label_33;
		case 1: goto label_34;
		case 2: goto label_35;
		case 3: goto label_36;
		case 4: goto label_37;
		case 5: goto label_38;
		case 6: goto label_39;
		case 7: goto label_40;
		default: goto label_41;
	}
	}
label_33:;
	{
	LINE_NUMBER(571);
	frame[26].f = (jfloat(0));
	LINE_NUMBER(572);
	frame[27].f = (jfloat(0));
	LINE_NUMBER(573);
	goto label_41;
	}
label_35:;
	{
	LINE_NUMBER(575);
	frame[21].f = (jfloat(-1.0f));
	LINE_NUMBER(576);
	frame[11].f = ((frame[11].f) + (frame[17].f));
	LINE_NUMBER(577);
	frame[26].f = (jfloat(0));
	LINE_NUMBER(578);
	frame[27].f = (jfloat(0));
	LINE_NUMBER(579);
	goto label_41;
	}
label_34:;
	{
	LINE_NUMBER(581);
	frame[22].f = (jfloat(-1.0f));
	LINE_NUMBER(582);
	frame[12].f = ((frame[12].f) + (frame[18].f));
	LINE_NUMBER(583);
	frame[26].f = (jfloat(0));
	LINE_NUMBER(584);
	frame[27].f = (jfloat(0));
	LINE_NUMBER(585);
	goto label_41;
	}
label_36:;
	{
	LINE_NUMBER(587);
	frame[25].f = (jfloat(180.0f));
	LINE_NUMBER(588);
	goto label_41;
	}
label_37:;
	{
	LINE_NUMBER(590);
	frame[25].f = (jfloat(270.0f));
	LINE_NUMBER(591);
	frame[21].f = (jfloat(-1.0f));
	LINE_NUMBER(592);
	goto label_41;
	}
label_38:;
	{
	LINE_NUMBER(594);
	frame[25].f = (jfloat(90.0f));
	LINE_NUMBER(595);
	goto label_41;
	}
label_39:;
	{
	LINE_NUMBER(597);
	frame[25].f = (jfloat(270.0f));
	LINE_NUMBER(598);
	goto label_41;
	}
label_40:;
	{
	LINE_NUMBER(600);
	frame[25].f = (jfloat(90.0f));
	LINE_NUMBER(601);
	frame[21].f = (jfloat(-1.0f));
	}
label_41:;
	{
	LINE_NUMBER(605);
	sp[0].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_g;
	sp[1].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK((frame[1].o)))->F_texture;
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float_float_int_int_int_int_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float_float_int_int_int_int_boolean_boolean])(ctx, sp[0].o, sp[1].o, (frame[11].f), (frame[12].f), (frame[26].f), (frame[27].f), (frame[17].f), (frame[18].f), (frame[21].f), (frame[22].f), (frame[25].f), (jint((frame[13].f))), (jint((frame[14].f))), (jint((frame[15].f))), (jint((frame[16].f))), (frame[23].i), (frame[24].i));
	LINE_NUMBER(606);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:drawImage", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(610);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(612);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	jint temp2 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, (frame[1].o));
	jint temp3 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, (frame[1].o));
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, (jint(0)), (frame[2].i), (frame[3].i), (frame[4].i));
	}
label_1:;
	LINE_NUMBER(614);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_mGraphics_drawImageFog_javax_microedition_lcdui_Image_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:drawImageFog", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(618);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(620);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	sp[2].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK((frame[1].o)))->F_texture;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Texture_getWidth_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getWidth_R_int])(ctx, sp[2].o);
	sp[2].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK((frame[1].o)))->F_texture;
	jint temp3 = (jint)((func_com_badlogic_gdx_graphics_Texture_getHeight_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getHeight_R_int])(ctx, sp[2].o);
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, (jint(0)), (frame[2].i), (frame[3].i), (frame[4].i));
	}
label_1:;
	LINE_NUMBER(622);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:drawImage", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(626);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(628);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	jint temp2 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, (frame[1].o));
	jint temp3 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, (frame[1].o));
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, (jint(0)), (frame[2].i), (frame[3].i), ((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_TOP) | (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_LEFT)));
	}
label_1:;
	LINE_NUMBER(630);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:drawImage", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(634);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(636);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	jint temp2 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, (frame[1].o));
	jint temp3 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, (frame[1].o));
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_float_float_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, (jint(0)), (frame[2].f), (frame[3].f), (frame[4].i));
	}
label_1:;
	LINE_NUMBER(638);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_lib_mGraphics_getRoundedRectNinePatch_int_R_com_badlogic_gdx_graphics_g2d_NinePatch(jcontext ctx, jint param0) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:getRoundedRectNinePatch", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mGraphics(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(643);
	if ((frame[0].i) >= (jint(1))) goto label_1;
	}
	INST_ICONST(1);
	INST_ISTORE(0);
label_1:;
	{
	LINE_NUMBER(644);
	clinit_lib_mGraphics(ctx);
	sp[0].o = (jobject)SF_lib_mGraphics_cachedRoundedNinePatches;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[0].i));
	sp[0].o = (jobject)((func_java_util_HashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_NinePatch, sp[0].o));
	LINE_NUMBER(645);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(646);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_3:;
	{
	LINE_NUMBER(649);
	frame[2].i = (((frame[0].i) * (jint(2))) + (8));
	LINE_NUMBER(650);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	jint temp0 = frame[2].i;
	jint temp1 = frame[2].i;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA8888;
	init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(651);
	((func_com_badlogic_gdx_graphics_Pixmap_setColor_float_float_float_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_setColor_float_float_float_float])(ctx, (frame[3].o), (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(652);
	((func_com_badlogic_gdx_graphics_Pixmap_fill) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_fill])(ctx, (frame[3].o));
	LINE_NUMBER(653);
	((func_com_badlogic_gdx_graphics_Pixmap_setColor_float_float_float_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_setColor_float_float_float_float])(ctx, (frame[3].o), (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	LINE_NUMBER(655);
	((func_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int])(ctx, (frame[3].o), (frame[0].i), (frame[0].i), (frame[0].i));
	LINE_NUMBER(656);
	((func_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int])(ctx, (frame[3].o), (((frame[2].i) - (frame[0].i)) - (jint(1))), (frame[0].i), (frame[0].i));
	LINE_NUMBER(657);
	((func_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int])(ctx, (frame[3].o), (frame[0].i), (((frame[2].i) - (frame[0].i)) - (jint(1))), (frame[0].i));
	LINE_NUMBER(658);
	((func_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int])(ctx, (frame[3].o), (((frame[2].i) - (frame[0].i)) - (jint(1))), (((frame[2].i) - (frame[0].i)) - (jint(1))), (frame[0].i));
	LINE_NUMBER(660);
	((func_com_badlogic_gdx_graphics_Pixmap_fillRectangle_int_int_int_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_fillRectangle_int_int_int_int])(ctx, (frame[3].o), (frame[0].i), (jint(0)), ((frame[2].i) - ((jint(2)) * (frame[0].i))), (frame[2].i));
	LINE_NUMBER(661);
	((func_com_badlogic_gdx_graphics_Pixmap_fillRectangle_int_int_int_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_fillRectangle_int_int_int_int])(ctx, (frame[3].o), (jint(0)), (frame[0].i), (frame[2].i), ((frame[2].i) - ((jint(2)) * (frame[0].i))));
	LINE_NUMBER(663);
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Texture);
	init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_graphics_Pixmap(ctx, sp[0].o, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(664);
	sp[0].o = frame[4].o;
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Linear;
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Linear;
	((func_com_badlogic_gdx_graphics_Texture_setFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_setFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(665);
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, (frame[3].o));
	LINE_NUMBER(666);
	clinit_com_badlogic_gdx_graphics_g2d_NinePatch(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_NinePatch);
	init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_Texture_int_int_int_int(ctx, sp[0].o, (frame[4].o), (frame[0].i), (frame[0].i), (frame[0].i), (frame[0].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(667);
	clinit_lib_mGraphics(ctx);
	sp[0].o = (jobject)SF_lib_mGraphics_cachedRoundedNinePatches;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[0].i));
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[5].o));
	LINE_NUMBER(668);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

void M_lib_mGraphics_fillRect_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:fillRect", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	{
	LINE_NUMBER(672);
	frame[1].i = ((frame[1].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(673);
	frame[2].i = ((frame[2].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(674);
	frame[3].i = ((frame[3].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(675);
	frame[4].i = ((frame[4].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(676);
	if ((frame[3].i) <= 0) goto label_5;
	}
	INST_ILOAD(4);
	if ((--sp)->i > 0) goto label_6;
label_5:;
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(677);
	if (((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_isTranslate) == 0) goto label_7;
	}
	{
	LINE_NUMBER(678);
	frame[1].i = ((frame[1].i) + ((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_translateX));
	LINE_NUMBER(679);
	frame[2].i = ((frame[2].i) + ((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_translateY));
	}
label_7:;
	{
	LINE_NUMBER(683);
	frame[9].i = ((frame[5].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(684);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[3].i), (frame[4].i));
	frame[10].i = (temp0 / (jint(2)));
	LINE_NUMBER(685);
	if ((frame[9].i) <= (frame[10].i)) goto label_12;
	}
	{
	LINE_NUMBER(686);
	frame[9].i = (frame[10].i);
	}
label_12:;
	{
	LINE_NUMBER(689);
	sp[0].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_g;
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_float_float_float_float])(ctx, sp[0].o, ((jfloat)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_R), ((jfloat)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_G), ((jfloat)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_B), ((jfloat)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_A));
	LINE_NUMBER(690);
	sp[0].o = (jobject)SM_lib_mGraphics_getRoundedRectNinePatch_int_R_com_badlogic_gdx_graphics_g2d_NinePatch(ctx, (frame[9].i));
	frame[11].o = sp[0].o;
	LINE_NUMBER(691);
	sp[0].o = frame[11].o;
	sp[1].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_g;
	((func_com_badlogic_gdx_graphics_g2d_NinePatch_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float])(ctx, sp[0].o, sp[1].o, (jfloat((frame[1].i))), (jfloat((frame[2].i))), (jfloat((frame[3].i))), (jfloat((frame[4].i))));
	LINE_NUMBER(692);
	sp[0].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_g;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Color_WHITE;
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(693);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_lib_mGraphics_getOutlineRoundedNinePatch_int_int_R_com_badlogic_gdx_graphics_g2d_NinePatch(jcontext ctx, jint param0, jint param1) {
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:getOutlineRoundedNinePatch", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mGraphics(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(698);
	if ((frame[0].i) >= (jint(1))) goto label_1;
	}
	INST_ICONST(1);
	INST_ISTORE(0);
label_1:;
	{
	LINE_NUMBER(699);
	if ((frame[1].i) >= (jint(1))) goto label_2;
	}
	INST_ICONST(1);
	INST_ISTORE(1);
label_2:;
	{
	LINE_NUMBER(700);
	if ((frame[0].i) > (frame[1].i)) goto label_3;
	}
	{
	frame[0].i = ((frame[1].i) + (jint(1)));
	}
label_3:;
	{
	LINE_NUMBER(701);
	frame[2].i = (((frame[0].i) << (8)) | ((frame[1].i) & (255)));
	LINE_NUMBER(702);
	clinit_lib_mGraphics(ctx);
	sp[0].o = (jobject)SF_lib_mGraphics_cachedOutlineRoundedNinePatches;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[2].i));
	sp[0].o = (jobject)((func_java_util_HashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_NinePatch, sp[0].o));
	LINE_NUMBER(703);
	if ((frame[3].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(704);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_6:;
	{
	LINE_NUMBER(707);
	frame[4].i = (((frame[0].i) * (jint(2))) + (10));
	LINE_NUMBER(708);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	jint temp0 = frame[4].i;
	jint temp1 = frame[4].i;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA8888;
	init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(709);
	sp[0].o = frame[5].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Blending(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Blending_None;
	((func_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(710);
	((func_com_badlogic_gdx_graphics_Pixmap_setColor_float_float_float_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_setColor_float_float_float_float])(ctx, (frame[5].o), (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(711);
	((func_com_badlogic_gdx_graphics_Pixmap_fill) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_fill])(ctx, (frame[5].o));
	LINE_NUMBER(714);
	sp[0].o = frame[5].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Blending(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Blending_SourceOver;
	((func_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(715);
	((func_com_badlogic_gdx_graphics_Pixmap_setColor_float_float_float_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_setColor_float_float_float_float])(ctx, (frame[5].o), (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	LINE_NUMBER(716);
	((func_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int])(ctx, (frame[5].o), (frame[0].i), (frame[0].i), (frame[0].i));
	LINE_NUMBER(717);
	((func_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int])(ctx, (frame[5].o), (((frame[4].i) - (frame[0].i)) - (jint(1))), (frame[0].i), (frame[0].i));
	LINE_NUMBER(718);
	((func_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int])(ctx, (frame[5].o), (frame[0].i), (((frame[4].i) - (frame[0].i)) - (jint(1))), (frame[0].i));
	LINE_NUMBER(719);
	((func_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int])(ctx, (frame[5].o), (((frame[4].i) - (frame[0].i)) - (jint(1))), (((frame[4].i) - (frame[0].i)) - (jint(1))), (frame[0].i));
	LINE_NUMBER(720);
	((func_com_badlogic_gdx_graphics_Pixmap_fillRectangle_int_int_int_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_fillRectangle_int_int_int_int])(ctx, (frame[5].o), (frame[0].i), (jint(0)), ((frame[4].i) - ((jint(2)) * (frame[0].i))), (frame[4].i));
	LINE_NUMBER(721);
	((func_com_badlogic_gdx_graphics_Pixmap_fillRectangle_int_int_int_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_fillRectangle_int_int_int_int])(ctx, (frame[5].o), (jint(0)), (frame[0].i), (frame[4].i), ((frame[4].i) - ((jint(2)) * (frame[0].i))));
	LINE_NUMBER(724);
	sp[0].o = frame[5].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Blending(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Blending_None;
	((func_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(725);
	((func_com_badlogic_gdx_graphics_Pixmap_setColor_float_float_float_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_setColor_float_float_float_float])(ctx, (frame[5].o), (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(726);
	frame[6].i = ((frame[0].i) - (frame[1].i));
	LINE_NUMBER(727);
	((func_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int])(ctx, (frame[5].o), (frame[0].i), (frame[0].i), (frame[6].i));
	LINE_NUMBER(728);
	((func_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int])(ctx, (frame[5].o), (((frame[4].i) - (frame[0].i)) - (jint(1))), (frame[0].i), (frame[6].i));
	LINE_NUMBER(729);
	((func_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int])(ctx, (frame[5].o), (frame[0].i), (((frame[4].i) - (frame[0].i)) - (jint(1))), (frame[6].i));
	LINE_NUMBER(730);
	((func_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int])(ctx, (frame[5].o), (((frame[4].i) - (frame[0].i)) - (jint(1))), (((frame[4].i) - (frame[0].i)) - (jint(1))), (frame[6].i));
	LINE_NUMBER(731);
	((func_com_badlogic_gdx_graphics_Pixmap_fillRectangle_int_int_int_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_fillRectangle_int_int_int_int])(ctx, (frame[5].o), (frame[0].i), (frame[1].i), ((frame[4].i) - ((jint(2)) * (frame[0].i))), ((frame[4].i) - ((jint(2)) * (frame[1].i))));
	LINE_NUMBER(732);
	((func_com_badlogic_gdx_graphics_Pixmap_fillRectangle_int_int_int_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_fillRectangle_int_int_int_int])(ctx, (frame[5].o), (frame[1].i), (frame[0].i), ((frame[4].i) - ((jint(2)) * (frame[1].i))), ((frame[4].i) - ((jint(2)) * (frame[0].i))));
	LINE_NUMBER(733);
	sp[0].o = frame[5].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Blending(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Blending_SourceOver;
	((func_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(735);
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Texture);
	init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_graphics_Pixmap(ctx, sp[0].o, (frame[5].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(736);
	sp[0].o = frame[7].o;
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Linear;
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Linear;
	((func_com_badlogic_gdx_graphics_Texture_setFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_setFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(737);
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, (frame[5].o));
	LINE_NUMBER(738);
	clinit_com_badlogic_gdx_graphics_g2d_NinePatch(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_NinePatch);
	init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_Texture_int_int_int_int(ctx, sp[0].o, (frame[7].o), (frame[0].i), (frame[0].i), (frame[0].i), (frame[0].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(739);
	clinit_lib_mGraphics(ctx);
	sp[0].o = (jobject)SF_lib_mGraphics_cachedOutlineRoundedNinePatches;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[2].i));
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[8].o));
	LINE_NUMBER(740);
	popStackFrame(ctx);
	return (frame[8].o);
	}

	popStackFrame(ctx);
}

void M_lib_mGraphics_drawRoundRect_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:drawRoundRect", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(745);
	frame[1].i = ((frame[1].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(746);
	frame[2].i = ((frame[2].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(747);
	frame[3].i = ((frame[3].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(748);
	frame[4].i = ((frame[4].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(749);
	if ((frame[3].i) <= 0) goto label_5;
	}
	INST_ILOAD(4);
	if ((--sp)->i > 0) goto label_6;
label_5:;
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(750);
	if (((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_isTranslate) == 0) goto label_7;
	}
	{
	LINE_NUMBER(751);
	frame[1].i = ((frame[1].i) + ((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_translateX));
	LINE_NUMBER(752);
	frame[2].i = ((frame[2].i) + ((jint)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_translateY));
	}
label_7:;
	{
	LINE_NUMBER(755);
	frame[7].i = ((frame[5].i) * (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(756);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[3].i), (frame[4].i));
	frame[8].i = (temp0 / (jint(2)));
	LINE_NUMBER(757);
	if ((frame[7].i) <= (frame[8].i)) goto label_12;
	}
	{
	LINE_NUMBER(758);
	frame[7].i = (frame[8].i);
	}
label_12:;
	{
	LINE_NUMBER(761);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(1)), (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	frame[9].i = temp0;
	LINE_NUMBER(762);
	sp[0].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_g;
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_float_float_float_float])(ctx, sp[0].o, ((jfloat)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_R), ((jfloat)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_G), ((jfloat)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_B), ((jfloat)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_A));
	LINE_NUMBER(763);
	sp[0].o = (jobject)SM_lib_mGraphics_getOutlineRoundedNinePatch_int_int_R_com_badlogic_gdx_graphics_g2d_NinePatch(ctx, (frame[7].i), (frame[9].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(764);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_g;
	((func_com_badlogic_gdx_graphics_g2d_NinePatch_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float])(ctx, sp[0].o, sp[1].o, (jfloat((frame[1].i))), (jfloat((frame[2].i))), (jfloat((frame[3].i))), (jfloat((frame[4].i))));
	LINE_NUMBER(765);
	sp[0].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_g;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Color_WHITE;
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(766);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_mGraphics_fillRoundRect_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:fillRoundRect", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(770);
	((func_lib_mGraphics_fillRect_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int_int_int_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[5].i), (frame[6].i), (frame[6].i));
	LINE_NUMBER(771);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_mGraphics_fillTrans_javax_microedition_lcdui_Image_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:fillTrans", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(775);
	((func_lib_mGraphics_setColor_int_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int_float])(ctx, (frame[0].o), (jint(0)), (jfloat(0.5f)));
	LINE_NUMBER(776);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(777);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_mGraphics_fillArg_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:fillArg", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(781);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(782);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_mGraphics_drawRegion_nro_Small_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:drawRegion", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].i = param8;
	LINE_NUMBER(786);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_lib_mGraphics_getAngle_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:getAngle", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(790);
	jdouble temp0 = (jdouble)SM_java_lang_Math_atan2_double_double_R_double(ctx, (jdouble((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y)))), (jdouble((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x)))));
	jdouble temp1 = (jdouble)SM_java_lang_Math_toDegrees_double_R_double(ctx, temp0);
	frame[3].f = (jfloat(temp1));
	LINE_NUMBER(791);
	if ((floatCompare((frame[3].f), (jfloat(0)), 1)) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(793);
	frame[3].f = ((frame[3].f) + (jfloat(360.0f)));
	}
label_2:;
	{
	LINE_NUMBER(795);
	popStackFrame(ctx);
	return (frame[3].f);
	}

	popStackFrame(ctx);
}

void M_lib_mGraphics_setColor_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:setColor", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(800);
	frame[3].f = (jfloat((((frame[1].i) >> (16)) & (255))));
	LINE_NUMBER(801);
	frame[4].f = (jfloat((((frame[1].i) >> (8)) & (255))));
	LINE_NUMBER(802);
	frame[5].f = (jfloat(((frame[1].i) & (255))));
	LINE_NUMBER(803);
	((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_B = ((frame[5].f) / (jfloat(256.0f)));
	LINE_NUMBER(804);
	((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_G = ((frame[4].f) / (jfloat(256.0f)));
	LINE_NUMBER(805);
	((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_R = ((frame[3].f) / (jfloat(256.0f)));
	LINE_NUMBER(806);
	((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_A = (frame[2].f);
	LINE_NUMBER(807);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_mGraphics_setColor_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:setColor", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(811);
	frame[2].f = (jfloat((((frame[1].i) >> (16)) & (255))));
	LINE_NUMBER(812);
	frame[3].f = (jfloat((((frame[1].i) >> (8)) & (255))));
	LINE_NUMBER(813);
	frame[4].f = (jfloat(((frame[1].i) & (255))));
	LINE_NUMBER(814);
	((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_B = ((frame[4].f) / (jfloat(256.0f)));
	LINE_NUMBER(815);
	((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_G = ((frame[3].f) / (jfloat(256.0f)));
	LINE_NUMBER(816);
	((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_R = ((frame[2].f) / (jfloat(256.0f)));
	LINE_NUMBER(817);
	((lib_mGraphics *) NULL_CHECK((frame[0].o)))->F_A = (jfloat(1));
	LINE_NUMBER(818);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_lib_mGraphics(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mGraphics:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mGraphics(ctx);
	{
	LINE_NUMBER(23);
	clinit_lib_mGraphics(ctx);
	SF_lib_mGraphics_HCENTER = (jint(1));
	LINE_NUMBER(25);
	clinit_lib_mGraphics(ctx);
	SF_lib_mGraphics_VCENTER = (jint(2));
	LINE_NUMBER(27);
	clinit_lib_mGraphics(ctx);
	SF_lib_mGraphics_LEFT = (jint(4));
	LINE_NUMBER(29);
	clinit_lib_mGraphics(ctx);
	SF_lib_mGraphics_RIGHT = (8);
	LINE_NUMBER(31);
	clinit_lib_mGraphics(ctx);
	SF_lib_mGraphics_TOP = (16);
	LINE_NUMBER(33);
	clinit_lib_mGraphics(ctx);
	SF_lib_mGraphics_BOTTOM = (32);
	LINE_NUMBER(34);
	clinit_lib_mGraphics(ctx);
	SF_lib_mGraphics_zoomLevel = (jint(2));
	LINE_NUMBER(35);
	clinit_java_util_Hashtable(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Hashtable);
	init_java_util_Hashtable(ctx, sp[0].o);
	clinit_lib_mGraphics(ctx);
	SF_lib_mGraphics_cachedTextures = sp[0].o;
	LINE_NUMBER(640);
	clinit_java_util_HashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[0].o);
	clinit_lib_mGraphics(ctx);
	SF_lib_mGraphics_cachedRoundedNinePatches = sp[0].o;
	LINE_NUMBER(695);
	clinit_java_util_HashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[0].o);
	clinit_lib_mGraphics(ctx);
	SF_lib_mGraphics_cachedOutlineRoundedNinePatches = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_lib_mGraphics[] {
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
	(void *) M_lib_mGraphics_begin,
	(void *) M_lib_mGraphics_end,
	(void *) M_lib_mGraphics_cache_java_lang_String_com_badlogic_gdx_graphics_Texture,
	(void *) M_lib_mGraphics_translate_int_int,
	(void *) M_lib_mGraphics_getTranslateX_R_int,
	(void *) M_lib_mGraphics_getTranslateY_R_int,
	(void *) M_lib_mGraphics_setClip_int_int_int_int,
	(void *) M_lib_mGraphics_beginClip,
	(void *) M_lib_mGraphics_endClip,
	(void *) M_lib_mGraphics_getClipX_R_int,
	(void *) M_lib_mGraphics_getClipY_R_int,
	(void *) M_lib_mGraphics_getClipWidth_R_int,
	(void *) M_lib_mGraphics_getClipHeight_R_int,
	(void *) M_lib_mGraphics_fillRect_int_int_int_int_int,
	(void *) M_lib_mGraphics__fillRect_int_int_int_int,
	(void *) M_lib_mGraphics_drawLine_int_int_int_int,
	(void *) M_lib_mGraphics_drawRect_int_int_int_int,
	(void *) M_lib_mGraphics_fillRect_int_int_int_int,
	(void *) M_lib_mGraphics_drawString_java_lang_String_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont,
	(void *) M_lib_mGraphics_drawStringTTF_java_lang_String_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color,
	(void *) M_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color,
	(void *) M_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int,
	(void *) M_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_float_float_int,
	(void *) M_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_boolean,
	(void *) M_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float,
	(void *) M_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int,
	(void *) M_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float,
	(void *) M_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int,
	(void *) M_lib_mGraphics_drawImageFog_javax_microedition_lcdui_Image_int_int_int,
	(void *) M_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int,
	(void *) M_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_float_float_int,
	(void *) M_lib_mGraphics_fillRect_int_int_int_int_int_int_int_int,
	(void *) M_lib_mGraphics_drawRoundRect_int_int_int_int_int_int,
	(void *) M_lib_mGraphics_fillRoundRect_int_int_int_int_int_int,
	(void *) M_lib_mGraphics_fillTrans_javax_microedition_lcdui_Image_int_int_int_int,
	(void *) M_lib_mGraphics_fillArg_int_int_int_int_int_int,
	(void *) M_lib_mGraphics_drawRegion_nro_Small_int_int_int_int_int_int_int_int,
	(void *) M_lib_mGraphics_getAngle_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_float,
	(void *) M_lib_mGraphics_setColor_int_float,
	(void *) M_lib_mGraphics_setColor_int,
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
	{ "begin", "()V" },
	{ "end", "()V" },
	{ "cache", "(Ljava/lang/String;Lcom/badlogic/gdx/graphics/Texture;)V" },
	{ "translate", "(II)V" },
	{ "getTranslateX", "()I" },
	{ "getTranslateY", "()I" },
	{ "setClip", "(IIII)V" },
	{ "beginClip", "()V" },
	{ "endClip", "()V" },
	{ "getClipX", "()I" },
	{ "getClipY", "()I" },
	{ "getClipWidth", "()I" },
	{ "getClipHeight", "()I" },
	{ "fillRect", "(IIIII)V" },
	{ "_fillRect", "(IIII)V" },
	{ "drawLine", "(IIII)V" },
	{ "drawRect", "(IIII)V" },
	{ "fillRect", "(IIII)V" },
	{ "drawString", "(Ljava/lang/String;IILcom/badlogic/gdx/graphics/g2d/BitmapFont;)V" },
	{ "drawStringTTF", "(Ljava/lang/String;IILcom/badlogic/gdx/graphics/g2d/BitmapFont;Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "drawStringTTFRaw", "(Ljava/lang/String;FFLcom/badlogic/gdx/graphics/g2d/BitmapFont;Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "drawRegion", "(Ljavax/microedition/lcdui/Image;IIIIIIII)V" },
	{ "drawRegion", "(Ljavax/microedition/lcdui/Image;IIIIIFFI)V" },
	{ "drawRegion", "(Ljavax/microedition/lcdui/Image;IIIIIIIIZ)V" },
	{ "drawRegion", "(Ljavax/microedition/lcdui/Image;IIIIIIIIF)V" },
	{ "_drawRegion", "(Ljavax/microedition/lcdui/Image;IIIIIIII)V" },
	{ "_drawRegion", "(Ljavax/microedition/lcdui/Image;IIIIIIIIF)V" },
	{ "drawImage", "(Ljavax/microedition/lcdui/Image;III)V" },
	{ "drawImageFog", "(Ljavax/microedition/lcdui/Image;III)V" },
	{ "drawImage", "(Ljavax/microedition/lcdui/Image;II)V" },
	{ "drawImage", "(Ljavax/microedition/lcdui/Image;FFI)V" },
	{ "fillRect", "(IIIIIIII)V" },
	{ "drawRoundRect", "(IIIIII)V" },
	{ "fillRoundRect", "(IIIIII)V" },
	{ "fillTrans", "(Ljavax/microedition/lcdui/Image;IIII)V" },
	{ "fillArg", "(IIIIII)V" },
	{ "drawRegion", "(Lnro/Small;IIIIIIII)V" },
	{ "getAngle", "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)F" },
	{ "setColor", "(IF)V" },
	{ "setColor", "(I)V" },
};

static FieldMetadata fields[] {
	{ "HCENTER", &class_int, (intptr_t) &SF_lib_mGraphics_HCENTER, "I", 9 },
	{ "VCENTER", &class_int, (intptr_t) &SF_lib_mGraphics_VCENTER, "I", 9 },
	{ "LEFT", &class_int, (intptr_t) &SF_lib_mGraphics_LEFT, "I", 9 },
	{ "RIGHT", &class_int, (intptr_t) &SF_lib_mGraphics_RIGHT, "I", 9 },
	{ "TOP", &class_int, (intptr_t) &SF_lib_mGraphics_TOP, "I", 9 },
	{ "BOTTOM", &class_int, (intptr_t) &SF_lib_mGraphics_BOTTOM, "I", 9 },
	{ "zoomLevel", &class_int, (intptr_t) &SF_lib_mGraphics_zoomLevel, "I", 9 },
	{ "cachedTextures", &class_java_util_Hashtable, (intptr_t) &SF_lib_mGraphics_cachedTextures, "Ljava/util/Hashtable;", 9 },
	{ "whitePixelTexture", &class_com_badlogic_gdx_graphics_Texture, (intptr_t) &SF_lib_mGraphics_whitePixelTexture, "Lcom/badlogic/gdx/graphics/Texture;", 10 },
	{ "addYWhenOpenKeyBoard", &class_int, (intptr_t) &SF_lib_mGraphics_addYWhenOpenKeyBoard, "I", 9 },
	{ "g", &class_com_badlogic_gdx_graphics_g2d_SpriteBatch, offsetof(lib_mGraphics, F_g), "Lcom/badlogic/gdx/graphics/g2d/SpriteBatch;", 1 },
	{ "isOptimized", &class_boolean, offsetof(lib_mGraphics, F_isOptimized), "Z", 2 },
	{ "clipX", &class_int, offsetof(lib_mGraphics, F_clipX), "I", 1 },
	{ "clipY", &class_int, offsetof(lib_mGraphics, F_clipY), "I", 1 },
	{ "clipW", &class_int, offsetof(lib_mGraphics, F_clipW), "I", 1 },
	{ "clipH", &class_int, offsetof(lib_mGraphics, F_clipH), "I", 1 },
	{ "R", &class_float, offsetof(lib_mGraphics, F_R), "F", 2 },
	{ "G", &class_float, offsetof(lib_mGraphics, F_G), "F", 2 },
	{ "B", &class_float, offsetof(lib_mGraphics, F_B), "F", 2 },
	{ "A", &class_float, offsetof(lib_mGraphics, F_A), "F", 2 },
	{ "isClip", &class_boolean, offsetof(lib_mGraphics, F_isClip), "Z", 2 },
	{ "isTranslate", &class_boolean, offsetof(lib_mGraphics, F_isTranslate), "Z", 2 },
	{ "translateX", &class_int, offsetof(lib_mGraphics, F_translateX), "I", 2 },
	{ "translateY", &class_int, offsetof(lib_mGraphics, F_translateY), "I", 2 },
	{ "clipTX", &class_int, offsetof(lib_mGraphics, F_clipTX), "I", 2 },
	{ "clipTY", &class_int, offsetof(lib_mGraphics, F_clipTY), "I", 2 },
	{ "tmpScissors", &class_com_badlogic_gdx_math_Rectangle, offsetof(lib_mGraphics, F_tmpScissors), "Lcom/badlogic/gdx/math/Rectangle;", 18 },
	{ "tmpClipBounds", &class_com_badlogic_gdx_math_Rectangle, offsetof(lib_mGraphics, F_tmpClipBounds), "Lcom/badlogic/gdx/math/Rectangle;", 18 },
	{ "tmpLineStart", &class_com_badlogic_gdx_math_Vector2, offsetof(lib_mGraphics, F_tmpLineStart), "Lcom/badlogic/gdx/math/Vector2;", 18 },
	{ "tmpLineEnd", &class_com_badlogic_gdx_math_Vector2, offsetof(lib_mGraphics, F_tmpLineEnd), "Lcom/badlogic/gdx/math/Vector2;", 18 },
	{ "cachedRoundedNinePatches", &class_java_util_HashMap, (intptr_t) &SF_lib_mGraphics_cachedRoundedNinePatches, "Ljava/util/HashMap;", 10 },
	{ "cachedOutlineRoundedNinePatches", &class_java_util_HashMap, (intptr_t) &SF_lib_mGraphics_cachedOutlineRoundedNinePatches, "Ljava/util/HashMap;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_mGraphics_com_badlogic_gdx_graphics_g2d_SpriteBatch, 0, "(Lcom/badlogic/gdx/graphics/g2d/SpriteBatch;)V", 1 },
	{ "<init>", (intptr_t) init_lib_mGraphics, 0, "()V", 1 },
	{ "getImageWidth", (intptr_t) SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int, 0, "(Ljavax/microedition/lcdui/Image;)I", 9 },
	{ "getImageHeight", (intptr_t) SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int, 0, "(Ljavax/microedition/lcdui/Image;)I", 9 },
	{ "isNotTranColor", (intptr_t) SM_lib_mGraphics_isNotTranColor_com_badlogic_gdx_graphics_Color_R_boolean, 0, "(Lcom/badlogic/gdx/graphics/Color;)Z", 9 },
	{ "clamp", (intptr_t) SM_lib_mGraphics_clamp_float_R_float, 0, "(F)F", 9 },
	{ "setColorObj", (intptr_t) SM_lib_mGraphics_setColorObj_int_R_com_badlogic_gdx_graphics_Color, 0, "(I)Lcom/badlogic/gdx/graphics/Color;", 9 },
	{ "blendColor", (intptr_t) SM_lib_mGraphics_blendColor_float_int_int_R_int, 0, "(FII)I", 9 },
	{ "getRealImageWidth", (intptr_t) SM_lib_mGraphics_getRealImageWidth_javax_microedition_lcdui_Image_R_int, 0, "(Ljavax/microedition/lcdui/Image;)I", 9 },
	{ "getRealImageHeight", (intptr_t) SM_lib_mGraphics_getRealImageHeight_javax_microedition_lcdui_Image_R_int, 0, "(Ljavax/microedition/lcdui/Image;)I", 9 },
	{ "begin", (intptr_t) M_lib_mGraphics_begin, VTABLE_lib_mGraphics_begin, "()V", 1 },
	{ "end", (intptr_t) M_lib_mGraphics_end, VTABLE_lib_mGraphics_end, "()V", 1 },
	{ "getWhitePixelTexture", (intptr_t) SM_lib_mGraphics_getWhitePixelTexture_R_com_badlogic_gdx_graphics_Texture, 0, "()Lcom/badlogic/gdx/graphics/Texture;", 10 },
	{ "clearCache", (intptr_t) SM_lib_mGraphics_clearCache, 0, "()V", 9 },
	{ "clearCachedTextures", (intptr_t) SM_lib_mGraphics_clearCachedTextures, 0, "()V", 10 },
	{ "cache", (intptr_t) M_lib_mGraphics_cache_java_lang_String_com_badlogic_gdx_graphics_Texture, VTABLE_lib_mGraphics_cache_java_lang_String_com_badlogic_gdx_graphics_Texture, "(Ljava/lang/String;Lcom/badlogic/gdx/graphics/Texture;)V", 2 },
	{ "translate", (intptr_t) M_lib_mGraphics_translate_int_int, VTABLE_lib_mGraphics_translate_int_int, "(II)V", 1 },
	{ "getTranslateX", (intptr_t) M_lib_mGraphics_getTranslateX_R_int, VTABLE_lib_mGraphics_getTranslateX_R_int, "()I", 1 },
	{ "getTranslateY", (intptr_t) M_lib_mGraphics_getTranslateY_R_int, VTABLE_lib_mGraphics_getTranslateY_R_int, "()I", 1 },
	{ "setClip", (intptr_t) M_lib_mGraphics_setClip_int_int_int_int, VTABLE_lib_mGraphics_setClip_int_int_int_int, "(IIII)V", 1 },
	{ "beginClip", (intptr_t) M_lib_mGraphics_beginClip, VTABLE_lib_mGraphics_beginClip, "()V", 1 },
	{ "endClip", (intptr_t) M_lib_mGraphics_endClip, VTABLE_lib_mGraphics_endClip, "()V", 1 },
	{ "getClipX", (intptr_t) M_lib_mGraphics_getClipX_R_int, VTABLE_lib_mGraphics_getClipX_R_int, "()I", 1 },
	{ "getClipY", (intptr_t) M_lib_mGraphics_getClipY_R_int, VTABLE_lib_mGraphics_getClipY_R_int, "()I", 1 },
	{ "getClipWidth", (intptr_t) M_lib_mGraphics_getClipWidth_R_int, VTABLE_lib_mGraphics_getClipWidth_R_int, "()I", 1 },
	{ "getClipHeight", (intptr_t) M_lib_mGraphics_getClipHeight_R_int, VTABLE_lib_mGraphics_getClipHeight_R_int, "()I", 1 },
	{ "fillRect", (intptr_t) M_lib_mGraphics_fillRect_int_int_int_int_int, VTABLE_lib_mGraphics_fillRect_int_int_int_int_int, "(IIIII)V", 1 },
	{ "_fillRect", (intptr_t) M_lib_mGraphics__fillRect_int_int_int_int, VTABLE_lib_mGraphics__fillRect_int_int_int_int, "(IIII)V", 1 },
	{ "drawLine", (intptr_t) M_lib_mGraphics_drawLine_int_int_int_int, VTABLE_lib_mGraphics_drawLine_int_int_int_int, "(IIII)V", 1 },
	{ "drawRect", (intptr_t) M_lib_mGraphics_drawRect_int_int_int_int, VTABLE_lib_mGraphics_drawRect_int_int_int_int, "(IIII)V", 1 },
	{ "fillRect", (intptr_t) M_lib_mGraphics_fillRect_int_int_int_int, VTABLE_lib_mGraphics_fillRect_int_int_int_int, "(IIII)V", 1 },
	{ "drawString", (intptr_t) M_lib_mGraphics_drawString_java_lang_String_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont, VTABLE_lib_mGraphics_drawString_java_lang_String_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont, "(Ljava/lang/String;IILcom/badlogic/gdx/graphics/g2d/BitmapFont;)V", 1 },
	{ "drawStringTTF", (intptr_t) M_lib_mGraphics_drawStringTTF_java_lang_String_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color, VTABLE_lib_mGraphics_drawStringTTF_java_lang_String_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color, "(Ljava/lang/String;IILcom/badlogic/gdx/graphics/g2d/BitmapFont;Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "drawStringTTFRaw", (intptr_t) M_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color, VTABLE_lib_mGraphics_drawStringTTFRaw_java_lang_String_float_float_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color, "(Ljava/lang/String;FFLcom/badlogic/gdx/graphics/g2d/BitmapFont;Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "drawRegion", (intptr_t) M_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int, VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int, "(Ljavax/microedition/lcdui/Image;IIIIIIII)V", 1 },
	{ "drawRegion", (intptr_t) M_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_float_float_int, VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_float_float_int, "(Ljavax/microedition/lcdui/Image;IIIIIFFI)V", 1 },
	{ "drawRegion", (intptr_t) M_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_boolean, VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_boolean, "(Ljavax/microedition/lcdui/Image;IIIIIIIIZ)V", 1 },
	{ "drawRegion", (intptr_t) M_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float, VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float, "(Ljavax/microedition/lcdui/Image;IIIIIIIIF)V", 1 },
	{ "_drawRegion", (intptr_t) M_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int, VTABLE_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int, "(Ljavax/microedition/lcdui/Image;IIIIIIII)V", 1 },
	{ "_drawRegion", (intptr_t) M_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float, VTABLE_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int_float, "(Ljavax/microedition/lcdui/Image;IIIIIIIIF)V", 1 },
	{ "drawImage", (intptr_t) M_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int, VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int, "(Ljavax/microedition/lcdui/Image;III)V", 1 },
	{ "drawImageFog", (intptr_t) M_lib_mGraphics_drawImageFog_javax_microedition_lcdui_Image_int_int_int, VTABLE_lib_mGraphics_drawImageFog_javax_microedition_lcdui_Image_int_int_int, "(Ljavax/microedition/lcdui/Image;III)V", 1 },
	{ "drawImage", (intptr_t) M_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int, VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int, "(Ljavax/microedition/lcdui/Image;II)V", 1 },
	{ "drawImage", (intptr_t) M_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_float_float_int, VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_float_float_int, "(Ljavax/microedition/lcdui/Image;FFI)V", 1 },
	{ "getRoundedRectNinePatch", (intptr_t) SM_lib_mGraphics_getRoundedRectNinePatch_int_R_com_badlogic_gdx_graphics_g2d_NinePatch, 0, "(I)Lcom/badlogic/gdx/graphics/g2d/NinePatch;", 10 },
	{ "fillRect", (intptr_t) M_lib_mGraphics_fillRect_int_int_int_int_int_int_int_int, VTABLE_lib_mGraphics_fillRect_int_int_int_int_int_int_int_int, "(IIIIIIII)V", 1 },
	{ "getOutlineRoundedNinePatch", (intptr_t) SM_lib_mGraphics_getOutlineRoundedNinePatch_int_int_R_com_badlogic_gdx_graphics_g2d_NinePatch, 0, "(II)Lcom/badlogic/gdx/graphics/g2d/NinePatch;", 10 },
	{ "drawRoundRect", (intptr_t) M_lib_mGraphics_drawRoundRect_int_int_int_int_int_int, VTABLE_lib_mGraphics_drawRoundRect_int_int_int_int_int_int, "(IIIIII)V", 1 },
	{ "fillRoundRect", (intptr_t) M_lib_mGraphics_fillRoundRect_int_int_int_int_int_int, VTABLE_lib_mGraphics_fillRoundRect_int_int_int_int_int_int, "(IIIIII)V", 1 },
	{ "fillTrans", (intptr_t) M_lib_mGraphics_fillTrans_javax_microedition_lcdui_Image_int_int_int_int, VTABLE_lib_mGraphics_fillTrans_javax_microedition_lcdui_Image_int_int_int_int, "(Ljavax/microedition/lcdui/Image;IIII)V", 1 },
	{ "fillArg", (intptr_t) M_lib_mGraphics_fillArg_int_int_int_int_int_int, VTABLE_lib_mGraphics_fillArg_int_int_int_int_int_int, "(IIIIII)V", 1 },
	{ "drawRegion", (intptr_t) M_lib_mGraphics_drawRegion_nro_Small_int_int_int_int_int_int_int_int, VTABLE_lib_mGraphics_drawRegion_nro_Small_int_int_int_int_int_int_int_int, "(Lnro/Small;IIIIIIII)V", 0 },
	{ "getAngle", (intptr_t) M_lib_mGraphics_getAngle_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_float, VTABLE_lib_mGraphics_getAngle_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_float, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)F", 1 },
	{ "setColor", (intptr_t) M_lib_mGraphics_setColor_int_float, VTABLE_lib_mGraphics_setColor_int_float, "(IF)V", 1 },
	{ "setColor", (intptr_t) M_lib_mGraphics_setColor_int, VTABLE_lib_mGraphics_setColor_int, "(I)V", 1 },
	{ "<clinit>", (intptr_t) clinit_lib_mGraphics, 0, "()V", 8 },
};

Class class_lib_mGraphics{
		.nativeName = (intptr_t) "lib/mGraphics",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_mGraphics),
		.classVtable = (intptr_t) vtable_lib_mGraphics,
		.staticInitializer = (intptr_t) clinit_lib_mGraphics,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_mGraphics,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 32,
		.nativeFields = (intptr_t) fields,
		.methodCount = 56,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 51,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_lib_mGraphics = registerClass(&class_lib_mGraphics);

}

