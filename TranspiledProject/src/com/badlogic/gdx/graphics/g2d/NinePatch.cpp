#include "com/badlogic/gdx/graphics/g2d/NinePatch.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/graphics/Texture_TextureFilter.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/graphics/g2d/NinePatch.h"
#include "com/badlogic/gdx/graphics/GLTexture.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"
#include "java/lang/System.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {

jint SF_com_badlogic_gdx_graphics_g2d_NinePatch_TOP_LEFT;
jint SF_com_badlogic_gdx_graphics_g2d_NinePatch_TOP_CENTER;
jint SF_com_badlogic_gdx_graphics_g2d_NinePatch_TOP_RIGHT;
jint SF_com_badlogic_gdx_graphics_g2d_NinePatch_MIDDLE_LEFT;
jint SF_com_badlogic_gdx_graphics_g2d_NinePatch_MIDDLE_CENTER;
jint SF_com_badlogic_gdx_graphics_g2d_NinePatch_MIDDLE_RIGHT;
jint SF_com_badlogic_gdx_graphics_g2d_NinePatch_BOTTOM_LEFT;
jint SF_com_badlogic_gdx_graphics_g2d_NinePatch_BOTTOM_CENTER;
jint SF_com_badlogic_gdx_graphics_g2d_NinePatch_BOTTOM_RIGHT;
jobject SF_com_badlogic_gdx_graphics_g2d_NinePatch_tmpDrawColor;

void mark_com_badlogic_gdx_graphics_g2d_NinePatch(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_g2d_NinePatch_tmpDrawColor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_NinePatch_tmpDrawColor)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_NinePatch_tmpDrawColor, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_g2d_NinePatch *) object;
	if (self->F_texture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_texture)->clazz)->markFunction)((jobject) self->F_texture, mark, depth + 1);
	if (self->F_vertices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vertices)->clazz)->markFunction)((jobject) self->F_vertices, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
}

void init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_Texture_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_NinePatch(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion);
	init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_Texture(ctx, sp[1].o, (frame[1].o));
	init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:<init>", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_NinePatch(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(73);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (180));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_WHITE;
	init_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(55);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padLeft = (jfloat(-1.0f));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padRight = (jfloat(-1.0f));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padTop = (jfloat(-1.0f));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padBottom = (jfloat(-1.0f));
	LINE_NUMBER(74);
	if ((frame[1].o) != nullptr) goto label_5;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"region cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(75);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_isFlipY_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_isFlipY_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	INST_ICONST(-1);
	goto label_7;
label_6:;
	INST_ICONST(1);
label_7:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(76);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int])(ctx, (frame[1].o));
	frame[7].i = ((temp0 - (frame[2].i)) - (frame[3].i));
	LINE_NUMBER(77);
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int])(ctx, (frame[1].o));
	frame[8].i = ((temp1 - (frame[4].i)) - (frame[5].i));
	LINE_NUMBER(79);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion, (9));
	frame[9].o = sp[0].o;
	LINE_NUMBER(80);
	if ((frame[4].i) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(81);
	if ((frame[2].i) <= 0) goto label_14;
	}
	{
	sp[0].o = frame[9].o;
	jint temp0 = jint(0);
	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion);
	init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int(ctx, sp[1].o, (frame[1].o), (jint(0)), (jint(0)), (frame[2].i), ((frame[6].i) * (frame[4].i)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_14:;
	{
	LINE_NUMBER(82);
	if ((frame[7].i) <= 0) goto label_15;
	}
	{
	sp[0].o = frame[9].o;
	jint temp0 = jint(1);
	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion);
	init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int(ctx, sp[1].o, (frame[1].o), (frame[2].i), (jint(0)), (frame[7].i), ((frame[6].i) * (frame[4].i)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_15:;
	{
	LINE_NUMBER(83);
	if ((frame[3].i) <= 0) goto label_12;
	}
	{
	sp[0].o = frame[9].o;
	jint temp0 = jint(2);
	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion);
	init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int(ctx, sp[1].o, (frame[1].o), ((frame[2].i) + (frame[7].i)), (jint(0)), (frame[3].i), ((frame[6].i) * (frame[4].i)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_12:;
	{
	LINE_NUMBER(85);
	if ((frame[8].i) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(86);
	if ((frame[2].i) <= 0) goto label_18;
	}
	{
	sp[0].o = frame[9].o;
	jint temp0 = jint(3);
	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion);
	init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int(ctx, sp[1].o, (frame[1].o), (jint(0)), ((frame[6].i) * (frame[4].i)), (frame[2].i), ((frame[6].i) * (frame[8].i)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_18:;
	{
	LINE_NUMBER(87);
	if ((frame[7].i) <= 0) goto label_19;
	}
	{
	LINE_NUMBER(88);
	sp[0].o = frame[9].o;
	jint temp0 = jint(4);
	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion);
	init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int(ctx, sp[1].o, (frame[1].o), (frame[2].i), ((frame[6].i) * (frame[4].i)), (frame[7].i), ((frame[6].i) * (frame[8].i)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_19:;
	{
	LINE_NUMBER(89);
	if ((frame[3].i) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(90);
	sp[0].o = frame[9].o;
	jint temp0 = jint(5);
	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion);
	init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int(ctx, sp[1].o, (frame[1].o), ((frame[2].i) + (frame[7].i)), ((frame[6].i) * (frame[4].i)), (frame[3].i), ((frame[6].i) * (frame[8].i)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_16:;
	{
	LINE_NUMBER(92);
	if ((frame[5].i) <= 0) goto label_22;
	}
	{
	LINE_NUMBER(93);
	if ((frame[2].i) <= 0) goto label_24;
	}
	{
	sp[0].o = frame[9].o;
	jint temp0 = 6;
	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion);
	init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int(ctx, sp[1].o, (frame[1].o), (jint(0)), ((frame[6].i) * ((frame[4].i) + (frame[8].i))), (frame[2].i), ((frame[6].i) * (frame[5].i)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_24:;
	{
	LINE_NUMBER(94);
	if ((frame[7].i) <= 0) goto label_25;
	}
	{
	LINE_NUMBER(95);
	sp[0].o = frame[9].o;
	jint temp0 = 7;
	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion);
	init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int(ctx, sp[1].o, (frame[1].o), (frame[2].i), ((frame[6].i) * ((frame[4].i) + (frame[8].i))), (frame[7].i), ((frame[6].i) * (frame[5].i)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_25:;
	{
	LINE_NUMBER(96);
	if ((frame[3].i) <= 0) goto label_22;
	}
	{
	sp[0].o = frame[9].o;
	jint temp0 = 8;
	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion);
	init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int(ctx, sp[1].o, (frame[1].o), ((frame[2].i) + (frame[7].i)), ((frame[6].i) * ((frame[4].i) + (frame[8].i))), (frame[3].i), ((frame[6].i) * (frame[5].i)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_22:;
	{
	LINE_NUMBER(101);
	if ((frame[2].i) != 0) goto label_27;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_27;
	{
	LINE_NUMBER(102);
	ARRAY_ACCESS(jobject, (frame[9].o), (jint(1))) = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (jint(2))));
	LINE_NUMBER(103);
	ARRAY_ACCESS(jobject, (frame[9].o), (jint(4))) = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (jint(5))));
	LINE_NUMBER(104);
	ARRAY_ACCESS(jobject, (frame[9].o), (7)) = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (8)));
	LINE_NUMBER(105);
	ARRAY_ACCESS(jobject, (frame[9].o), (jint(2))) = (jobject(nullptr));
	LINE_NUMBER(106);
	ARRAY_ACCESS(jobject, (frame[9].o), (jint(5))) = (jobject(nullptr));
	LINE_NUMBER(107);
	ARRAY_ACCESS(jobject, (frame[9].o), (8)) = (jobject(nullptr));
	}
label_27:;
	{
	LINE_NUMBER(110);
	if ((frame[4].i) != 0) goto label_34;
	}
	INST_ILOAD(8);
	if ((--sp)->i != 0) goto label_34;
	{
	LINE_NUMBER(111);
	ARRAY_ACCESS(jobject, (frame[9].o), (jint(3))) = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (6)));
	LINE_NUMBER(112);
	ARRAY_ACCESS(jobject, (frame[9].o), (jint(4))) = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (7)));
	LINE_NUMBER(113);
	ARRAY_ACCESS(jobject, (frame[9].o), (jint(5))) = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (8)));
	LINE_NUMBER(114);
	ARRAY_ACCESS(jobject, (frame[9].o), (6)) = (jobject(nullptr));
	LINE_NUMBER(115);
	ARRAY_ACCESS(jobject, (frame[9].o), (7)) = (jobject(nullptr));
	LINE_NUMBER(116);
	ARRAY_ACCESS(jobject, (frame[9].o), (8)) = (jobject(nullptr));
	}
label_34:;
	{
	LINE_NUMBER(119);
	M_com_badlogic_gdx_graphics_g2d_NinePatch_load_Array1_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, (frame[0].o), (frame[9].o));
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_NinePatch(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(124);
	init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_Texture(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(125);
	((func_com_badlogic_gdx_graphics_g2d_NinePatch_setColor_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_setColor_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_Texture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_NinePatch(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(130);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion);
	init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_Texture(ctx, sp[1].o, (frame[1].o));
	init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_NinePatch(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(135);
	init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(136);
	((func_com_badlogic_gdx_graphics_g2d_NinePatch_setColor_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_setColor_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_NinePatch(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(140);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (180));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_WHITE;
	init_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(55);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padLeft = (jfloat(-1.0f));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padRight = (jfloat(-1.0f));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padTop = (jfloat(-1.0f));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padBottom = (jfloat(-1.0f));
	LINE_NUMBER(141);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion, (9));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (jobject(nullptr));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (jobject(nullptr));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (jobject(nullptr));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(3))) = (jobject(nullptr));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(4))) = (frame[1].o);
	ARRAY_ACCESS(jobject, sp[1].o, (jint(5))) = (jobject(nullptr));
	ARRAY_ACCESS(jobject, sp[1].o, (6)) = (jobject(nullptr));
	ARRAY_ACCESS(jobject, sp[1].o, (7)) = (jobject(nullptr));
	ARRAY_ACCESS(jobject, sp[1].o, (8)) = (jobject(nullptr));
	M_com_badlogic_gdx_graphics_g2d_NinePatch_load_Array1_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_NinePatch_Array1_com_badlogic_gdx_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_NinePatch(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(152);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (180));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_WHITE;
	init_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(55);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padLeft = (jfloat(-1.0f));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padRight = (jfloat(-1.0f));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padTop = (jfloat(-1.0f));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padBottom = (jfloat(-1.0f));
	LINE_NUMBER(153);
	if ((frame[1].o) == nullptr) goto label_5;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) == (9)) goto label_6;
	}
label_5:;
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NinePatch needs nine TextureRegions"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(155);
	M_com_badlogic_gdx_graphics_g2d_NinePatch_load_Array1_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(157);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))) == nullptr) goto label_8;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	if ((floatCompare((jfloat(temp0)), ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_leftWidth), -1)) != 0) goto label_9;
	}
label_8:;
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(3)))) == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(3)));
	LINE_NUMBER(158);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int])(ctx, sp[0].o);
	if ((floatCompare((jfloat(temp0)), ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_leftWidth), -1)) != 0) goto label_9;
	}
label_10:;
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (6))) == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (6));
	LINE_NUMBER(159);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int])(ctx, sp[0].o);
	if ((floatCompare((jfloat(temp0)), ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_leftWidth), -1)) == 0) goto label_12;
	}
label_9:;
	{
	LINE_NUMBER(160);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Left side patches must have the same width"_j))));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(162);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2)))) == nullptr) goto label_14;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2)))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2)))));
	if ((floatCompare((jfloat(temp0)), ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_rightWidth), -1)) != 0) goto label_15;
	}
label_14:;
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(5)))) == nullptr) goto label_16;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(5)));
	LINE_NUMBER(163);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int])(ctx, sp[0].o);
	if ((floatCompare((jfloat(temp0)), ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_rightWidth), -1)) != 0) goto label_15;
	}
label_16:;
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (8))) == nullptr) goto label_18;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (8));
	LINE_NUMBER(164);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int])(ctx, sp[0].o);
	if ((floatCompare((jfloat(temp0)), ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_rightWidth), -1)) == 0) goto label_18;
	}
label_15:;
	{
	LINE_NUMBER(165);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Right side patches must have the same width"_j))));
	throwException(ctx, sp[0].o);	}
label_18:;
	{
	LINE_NUMBER(167);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (6))) == nullptr) goto label_20;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (6))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (6))));
	if ((floatCompare((jfloat(temp0)), ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomHeight), -1)) != 0) goto label_21;
	}
label_20:;
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (7))) == nullptr) goto label_22;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (7));
	LINE_NUMBER(168);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int])(ctx, sp[0].o);
	if ((floatCompare((jfloat(temp0)), ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomHeight), -1)) != 0) goto label_21;
	}
label_22:;
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (8))) == nullptr) goto label_24;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (8));
	LINE_NUMBER(169);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int])(ctx, sp[0].o);
	if ((floatCompare((jfloat(temp0)), ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomHeight), -1)) == 0) goto label_24;
	}
label_21:;
	{
	LINE_NUMBER(170);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Bottom side patches must have the same height"_j))));
	throwException(ctx, sp[0].o);	}
label_24:;
	{
	LINE_NUMBER(172);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))) == nullptr) goto label_26;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	if ((floatCompare((jfloat(temp0)), ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topHeight), -1)) != 0) goto label_27;
	}
label_26:;
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)))) == nullptr) goto label_28;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)));
	LINE_NUMBER(173);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int])(ctx, sp[0].o);
	if ((floatCompare((jfloat(temp0)), ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topHeight), -1)) != 0) goto label_27;
	}
label_28:;
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2)))) == nullptr) goto label_30;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2)));
	LINE_NUMBER(174);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int])(ctx, sp[0].o);
	if ((floatCompare((jfloat(temp0)), ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topHeight), -1)) == 0) goto label_30;
	}
label_27:;
	{
	LINE_NUMBER(175);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Top side patches must have the same height"_j))));
	throwException(ctx, sp[0].o);	}
label_30:;
	LINE_NUMBER(177);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_g2d_NinePatch(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_NinePatch(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(180);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_color;
	init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_NinePatch(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(183);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (180));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_WHITE;
	init_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(55);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padLeft = (jfloat(-1.0f));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padRight = (jfloat(-1.0f));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padTop = (jfloat(-1.0f));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padBottom = (jfloat(-1.0f));
	LINE_NUMBER(184);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_texture;
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	LINE_NUMBER(186);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomLeft = ((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_bottomLeft);
	LINE_NUMBER(187);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomCenter = ((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_bottomCenter);
	LINE_NUMBER(188);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomRight = ((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_bottomRight);
	LINE_NUMBER(189);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleLeft = ((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_middleLeft);
	LINE_NUMBER(190);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleCenter = ((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_middleCenter);
	LINE_NUMBER(191);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleRight = ((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_middleRight);
	LINE_NUMBER(192);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topLeft = ((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_topLeft);
	LINE_NUMBER(193);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topCenter = ((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_topCenter);
	LINE_NUMBER(194);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topRight = ((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_topRight);
	LINE_NUMBER(196);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_leftWidth = ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_leftWidth);
	LINE_NUMBER(197);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_rightWidth = ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_rightWidth);
	LINE_NUMBER(198);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleWidth = ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_middleWidth);
	LINE_NUMBER(199);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleHeight = ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_middleHeight);
	LINE_NUMBER(200);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topHeight = ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_topHeight);
	LINE_NUMBER(201);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomHeight = ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_bottomHeight);
	LINE_NUMBER(203);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padLeft = ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_padLeft);
	LINE_NUMBER(204);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padTop = ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_padTop);
	LINE_NUMBER(205);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padBottom = ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_padBottom);
	LINE_NUMBER(206);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padRight = ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_padRight);
	LINE_NUMBER(208);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_vertices;
	sp[1].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(209);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_vertices;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_vertices;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(210);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx = ((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_idx);
	LINE_NUMBER(211);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_NinePatch_load_Array1_com_badlogic_gdx_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:load", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(215);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (6))) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(216);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_NinePatch_add_com_badlogic_gdx_graphics_g2d_TextureRegion_boolean_boolean_R_int(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (6))), (jint(0)), (jint(0)));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_bottomLeft = temp0;
	LINE_NUMBER(217);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (6))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (6))));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_leftWidth = (jfloat(temp1));
	LINE_NUMBER(218);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (6))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (6))));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_bottomHeight = (jfloat(temp2));
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(220);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomLeft = (jint(-1));
	}
label_5:;
	{
	LINE_NUMBER(221);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (7))) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(222);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (7));
	sp += 3;
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (6))) != nullptr) goto label_8;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (8))) == nullptr) goto label_9;
	}
label_8:;
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 4;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_NinePatch_add_com_badlogic_gdx_graphics_g2d_TextureRegion_boolean_boolean_R_int(ctx, sp[1].o, sp[2].o, sp[3].i, (jint(0)));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_bottomCenter = temp0;
	LINE_NUMBER(223);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleWidth;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (7))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (7))));
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp1, (jfloat(temp2)));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleWidth = temp3;
	LINE_NUMBER(224);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomHeight;
	jint temp5 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (7))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (7))));
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp4, (jfloat(temp5)));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_bottomHeight = temp6;
	goto label_13;
	}
label_6:;
	{
	LINE_NUMBER(226);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomCenter = (jint(-1));
	}
label_13:;
	{
	LINE_NUMBER(227);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (8))) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(228);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_NinePatch_add_com_badlogic_gdx_graphics_g2d_TextureRegion_boolean_boolean_R_int(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (8))), (jint(0)), (jint(0)));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_bottomRight = temp0;
	LINE_NUMBER(229);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_rightWidth;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (8))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (8))));
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp1, (jfloat(temp2)));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_rightWidth = temp3;
	LINE_NUMBER(230);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomHeight;
	jint temp5 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (8))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (8))));
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp4, (jfloat(temp5)));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_bottomHeight = temp6;
	goto label_18;
	}
label_14:;
	{
	LINE_NUMBER(232);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomRight = (jint(-1));
	}
label_18:;
	{
	LINE_NUMBER(233);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(3)))) == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(234);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(3)));
	jint temp0 = jint(0);
	sp[3].i = temp0;
	sp += 4;
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))) != nullptr) goto label_21;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (6))) == nullptr) goto label_22;
	}
label_21:;
	INST_ICONST(1);
	goto label_23;
label_22:;
	INST_ICONST(0);
label_23:;
	{
	sp -= 5;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_NinePatch_add_com_badlogic_gdx_graphics_g2d_TextureRegion_boolean_boolean_R_int(ctx, sp[1].o, sp[2].o, sp[3].i, sp[4].i);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleLeft = temp0;
	LINE_NUMBER(235);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_leftWidth;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(3)))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(3)))));
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp1, (jfloat(temp2)));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_leftWidth = temp3;
	LINE_NUMBER(236);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleHeight;
	jint temp5 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(3)))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(3)))));
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp4, (jfloat(temp5)));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleHeight = temp6;
	goto label_26;
	}
label_19:;
	{
	LINE_NUMBER(238);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleLeft = (jint(-1));
	}
label_26:;
	{
	LINE_NUMBER(239);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(4)))) == nullptr) goto label_27;
	}
	{
	LINE_NUMBER(240);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(4)));
	sp += 3;
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(3)))) != nullptr) goto label_29;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(5)))) == nullptr) goto label_30;
	}
label_29:;
	INST_ICONST(1);
	goto label_31;
label_30:;
	INST_ICONST(0);
label_31:;
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)))) != nullptr) goto label_32;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (7))) == nullptr) goto label_33;
	}
label_32:;
	INST_ICONST(1);
	goto label_34;
label_33:;
	INST_ICONST(0);
label_34:;
	{
	sp -= 5;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_NinePatch_add_com_badlogic_gdx_graphics_g2d_TextureRegion_boolean_boolean_R_int(ctx, sp[1].o, sp[2].o, sp[3].i, sp[4].i);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleCenter = temp0;
	LINE_NUMBER(242);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleWidth;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(4)))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(4)))));
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp1, (jfloat(temp2)));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleWidth = temp3;
	LINE_NUMBER(243);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleHeight;
	jint temp5 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(4)))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(4)))));
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp4, (jfloat(temp5)));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleHeight = temp6;
	goto label_37;
	}
label_27:;
	{
	LINE_NUMBER(245);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleCenter = (jint(-1));
	}
label_37:;
	{
	LINE_NUMBER(246);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(5)))) == nullptr) goto label_38;
	}
	{
	LINE_NUMBER(247);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(5)));
	jint temp0 = jint(0);
	sp[3].i = temp0;
	sp += 4;
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2)))) != nullptr) goto label_40;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (8))) == nullptr) goto label_41;
	}
label_40:;
	INST_ICONST(1);
	goto label_42;
label_41:;
	INST_ICONST(0);
label_42:;
	{
	sp -= 5;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_NinePatch_add_com_badlogic_gdx_graphics_g2d_TextureRegion_boolean_boolean_R_int(ctx, sp[1].o, sp[2].o, sp[3].i, sp[4].i);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleRight = temp0;
	LINE_NUMBER(248);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_rightWidth;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(5)))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(5)))));
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp1, (jfloat(temp2)));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_rightWidth = temp3;
	LINE_NUMBER(249);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleHeight;
	jint temp5 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(5)))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(5)))));
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp4, (jfloat(temp5)));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleHeight = temp6;
	goto label_45;
	}
label_38:;
	{
	LINE_NUMBER(251);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleRight = (jint(-1));
	}
label_45:;
	{
	LINE_NUMBER(252);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))) == nullptr) goto label_46;
	}
	{
	LINE_NUMBER(253);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_NinePatch_add_com_badlogic_gdx_graphics_g2d_TextureRegion_boolean_boolean_R_int(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))), (jint(0)), (jint(0)));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_topLeft = temp0;
	LINE_NUMBER(254);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_leftWidth;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp1, (jfloat(temp2)));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_leftWidth = temp3;
	LINE_NUMBER(255);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topHeight;
	jint temp5 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp4, (jfloat(temp5)));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_topHeight = temp6;
	goto label_50;
	}
label_46:;
	{
	LINE_NUMBER(257);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topLeft = (jint(-1));
	}
label_50:;
	{
	LINE_NUMBER(258);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)))) == nullptr) goto label_51;
	}
	{
	LINE_NUMBER(259);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)));
	sp += 3;
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))) != nullptr) goto label_53;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2)))) == nullptr) goto label_54;
	}
label_53:;
	INST_ICONST(1);
	goto label_55;
label_54:;
	INST_ICONST(0);
label_55:;
	{
	sp -= 4;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_NinePatch_add_com_badlogic_gdx_graphics_g2d_TextureRegion_boolean_boolean_R_int(ctx, sp[1].o, sp[2].o, sp[3].i, (jint(0)));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_topCenter = temp0;
	LINE_NUMBER(260);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleWidth;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)))));
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp1, (jfloat(temp2)));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleWidth = temp3;
	LINE_NUMBER(261);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topHeight;
	jint temp5 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)))));
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp4, (jfloat(temp5)));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_topHeight = temp6;
	goto label_58;
	}
label_51:;
	{
	LINE_NUMBER(263);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topCenter = (jint(-1));
	}
label_58:;
	{
	LINE_NUMBER(264);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2)))) == nullptr) goto label_59;
	}
	{
	LINE_NUMBER(265);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_NinePatch_add_com_badlogic_gdx_graphics_g2d_TextureRegion_boolean_boolean_R_int(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2)))), (jint(0)), (jint(0)));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_topRight = temp0;
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_rightWidth;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2)))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2)))));
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp1, (jfloat(temp2)));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_rightWidth = temp3;
	LINE_NUMBER(267);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topHeight;
	jint temp5 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2)))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2)))));
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp4, (jfloat(temp5)));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_topHeight = temp6;
	goto label_63;
	}
label_59:;
	{
	LINE_NUMBER(269);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topRight = (jint(-1));
	}
label_63:;
	{
	LINE_NUMBER(270);
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_64;
	}
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject) createArray(ctx, &class_float, ((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx));
	frame[2].o = sp[0].o;
	LINE_NUMBER(272);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[2].o), (jint(0)), ((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx));
	LINE_NUMBER(273);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_vertices = (jref) (frame[2].o);
	}
label_64:;
	LINE_NUMBER(275);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_NinePatch_add_com_badlogic_gdx_graphics_g2d_TextureRegion_boolean_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:add", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_texture;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(279);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture])(ctx, (frame[1].o));
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_texture;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(281);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"All regions must be from the same texture."_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(286);
	frame[4].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u);
	frame[5].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v2);
	frame[6].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u2);
	frame[7].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v);
	LINE_NUMBER(287);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_texture;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Texture_getMagFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getMagFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter])(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Linear;
	if (sp[0].o == sp[1].o) goto label_9;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_texture;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Texture_getMinFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getMinFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter])(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Linear;
	if (sp[0].o != sp[1].o) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(288);
	if ((frame[2].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(289);
	jfloat temp0 = jfloat(0.5f);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Texture_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getWidth_R_int])(ctx, sp[0].o);
	frame[8].f = (temp0 / (jfloat(temp1)));
	LINE_NUMBER(290);
	frame[4].f = ((frame[4].f) + (frame[8].f));
	LINE_NUMBER(291);
	frame[6].f = ((frame[6].f) - (frame[8].f));
	}
label_11:;
	{
	LINE_NUMBER(293);
	if ((frame[3].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(294);
	jfloat temp0 = jfloat(0.5f);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Texture_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getHeight_R_int])(ctx, sp[0].o);
	frame[8].f = (temp0 / (jfloat(temp1)));
	LINE_NUMBER(295);
	frame[5].f = ((frame[5].f) - (frame[8].f));
	LINE_NUMBER(296);
	frame[7].f = ((frame[7].f) + (frame[8].f));
	}
label_10:;
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[8].o = sp[0].o;
	LINE_NUMBER(301);
	frame[9].i = ((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx);
	LINE_NUMBER(302);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[9].i) + (jint(3)))) = (frame[4].f);
	LINE_NUMBER(303);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[9].i) + (jint(4)))) = (frame[5].f);
	LINE_NUMBER(305);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[9].i) + (8))) = (frame[4].f);
	LINE_NUMBER(306);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[9].i) + (9))) = (frame[7].f);
	LINE_NUMBER(308);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[9].i) + (13))) = (frame[6].f);
	LINE_NUMBER(309);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[9].i) + (14))) = (frame[7].f);
	LINE_NUMBER(311);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[9].i) + (18))) = (frame[6].f);
	LINE_NUMBER(312);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[9].i) + (19))) = (frame[5].f);
	LINE_NUMBER(313);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_idx = (((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_idx) + (20));
	LINE_NUMBER(314);
	popStackFrame(ctx);
	return (frame[9].i);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_NinePatch_set_int_float_float_float_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:set", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(319);
	frame[7].f = ((frame[2].f) + (frame[4].f));
	LINE_NUMBER(320);
	frame[8].f = ((frame[3].f) + (frame[5].f));
	LINE_NUMBER(321);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[9].o = sp[0].o;
	LINE_NUMBER(322);
	ARRAY_ACCESS(jfloat, (frame[9].o), (frame[1].i)) = (frame[2].f);
	LINE_NUMBER(323);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (jint(1)))) = (frame[3].f);
	LINE_NUMBER(324);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (jint(2)))) = (frame[6].f);
	LINE_NUMBER(326);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (jint(5)))) = (frame[2].f);
	LINE_NUMBER(327);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (6))) = (frame[8].f);
	LINE_NUMBER(328);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (7))) = (frame[6].f);
	LINE_NUMBER(330);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (10))) = (frame[7].f);
	LINE_NUMBER(331);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (11))) = (frame[8].f);
	LINE_NUMBER(332);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (12))) = (frame[6].f);
	LINE_NUMBER(334);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (15))) = (frame[7].f);
	LINE_NUMBER(335);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (16))) = (frame[3].f);
	LINE_NUMBER(336);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (17))) = (frame[6].f);
	LINE_NUMBER(337);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_NinePatch_prepareVertices_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:prepareVertices", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(340);
	frame[6].f = ((frame[2].f) + ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_leftWidth));
	LINE_NUMBER(341);
	frame[7].f = ((frame[3].f) + ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomHeight));
	LINE_NUMBER(342);
	frame[8].f = (((frame[4].f) - ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_rightWidth)) - ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_leftWidth));
	LINE_NUMBER(343);
	frame[9].f = (((frame[5].f) - ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topHeight)) - ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomHeight));
	LINE_NUMBER(344);
	frame[10].f = (((frame[2].f) + (frame[4].f)) - ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_rightWidth));
	LINE_NUMBER(345);
	frame[11].f = (((frame[3].f) + (frame[5].f)) - ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topHeight));
	LINE_NUMBER(346);
	clinit_com_badlogic_gdx_graphics_g2d_NinePatch(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_NinePatch_tmpDrawColor;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_Batch_getColor_R_com_badlogic_gdx_graphics_Color) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_getColor_R_com_badlogic_gdx_graphics_Color, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_mul_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_mul_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	frame[12].f = temp0;
	LINE_NUMBER(347);
	if (((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomLeft) == (jint(-1))) goto label_8;
	}
	{
	M_com_badlogic_gdx_graphics_g2d_NinePatch_set_int_float_float_float_float_float(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomLeft), (frame[2].f), (frame[3].f), ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_leftWidth), ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomHeight), (frame[12].f));
	}
label_8:;
	{
	LINE_NUMBER(348);
	if (((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomCenter) == (jint(-1))) goto label_9;
	}
	{
	M_com_badlogic_gdx_graphics_g2d_NinePatch_set_int_float_float_float_float_float(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomCenter), (frame[6].f), (frame[3].f), (frame[8].f), ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomHeight), (frame[12].f));
	}
label_9:;
	{
	LINE_NUMBER(349);
	if (((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomRight) == (jint(-1))) goto label_10;
	}
	{
	M_com_badlogic_gdx_graphics_g2d_NinePatch_set_int_float_float_float_float_float(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomRight), (frame[10].f), (frame[3].f), ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_rightWidth), ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomHeight), (frame[12].f));
	}
label_10:;
	{
	LINE_NUMBER(350);
	if (((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleLeft) == (jint(-1))) goto label_11;
	}
	{
	M_com_badlogic_gdx_graphics_g2d_NinePatch_set_int_float_float_float_float_float(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleLeft), (frame[2].f), (frame[7].f), ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_leftWidth), (frame[9].f), (frame[12].f));
	}
label_11:;
	{
	LINE_NUMBER(351);
	if (((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleCenter) == (jint(-1))) goto label_12;
	}
	{
	M_com_badlogic_gdx_graphics_g2d_NinePatch_set_int_float_float_float_float_float(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleCenter), (frame[6].f), (frame[7].f), (frame[8].f), (frame[9].f), (frame[12].f));
	}
label_12:;
	{
	LINE_NUMBER(352);
	if (((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleRight) == (jint(-1))) goto label_13;
	}
	{
	M_com_badlogic_gdx_graphics_g2d_NinePatch_set_int_float_float_float_float_float(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleRight), (frame[10].f), (frame[7].f), ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_rightWidth), (frame[9].f), (frame[12].f));
	}
label_13:;
	{
	LINE_NUMBER(353);
	if (((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topLeft) == (jint(-1))) goto label_14;
	}
	{
	M_com_badlogic_gdx_graphics_g2d_NinePatch_set_int_float_float_float_float_float(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topLeft), (frame[2].f), (frame[11].f), ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_leftWidth), ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topHeight), (frame[12].f));
	}
label_14:;
	{
	LINE_NUMBER(354);
	if (((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topCenter) == (jint(-1))) goto label_15;
	}
	{
	M_com_badlogic_gdx_graphics_g2d_NinePatch_set_int_float_float_float_float_float(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topCenter), (frame[6].f), (frame[11].f), (frame[8].f), ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topHeight), (frame[12].f));
	}
label_15:;
	{
	LINE_NUMBER(355);
	if (((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topRight) == (jint(-1))) goto label_16;
	}
	{
	M_com_badlogic_gdx_graphics_g2d_NinePatch_set_int_float_float_float_float_float(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topRight), (frame[10].f), (frame[11].f), ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_rightWidth), ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topHeight), (frame[12].f));
	}
label_16:;
	LINE_NUMBER(356);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_NinePatch_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:draw", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(359);
	M_com_badlogic_gdx_graphics_g2d_NinePatch_prepareVertices_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	LINE_NUMBER(360);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_texture;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	((func_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_Array1_float_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_Array1_float_int_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)), ((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx));
	LINE_NUMBER(361);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_NinePatch_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9) {
	NULL_CHECK(self);
	jtype frame[26];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:draw", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	frame[10].f = param9;
	{
	LINE_NUMBER(365);
	M_com_badlogic_gdx_graphics_g2d_NinePatch_prepareVertices_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[6].f), (frame[7].f));
	LINE_NUMBER(366);
	frame[11].f = ((frame[2].f) + (frame[4].f));
	frame[12].f = ((frame[3].f) + (frame[5].f));
	LINE_NUMBER(367);
	frame[13].i = ((jint)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx);
	LINE_NUMBER(368);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[14].o = sp[0].o;
	LINE_NUMBER(369);
	if ((floatCompare((frame[10].f), (jfloat(0)), -1)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(370);
	frame[15].i = (jint(0));
	}
label_8:;
	{
	if ((frame[15].i) >= (frame[13].i)) goto label_9;
	}
	{
	LINE_NUMBER(371);
	frame[16].f = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[14].o), (frame[15].i))) - (frame[11].f)) * (frame[8].f));
	frame[17].f = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[14].o), ((frame[15].i) + (jint(1))))) - (frame[12].f)) * (frame[9].f));
	LINE_NUMBER(372);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cosDeg_float_R_float(ctx, (frame[10].f));
	frame[18].f = temp0;
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sinDeg_float_R_float(ctx, (frame[10].f));
	frame[19].f = temp1;
	LINE_NUMBER(373);
	ARRAY_ACCESS(jfloat, (frame[14].o), (frame[15].i)) = ((((frame[18].f) * (frame[16].f)) - ((frame[19].f) * (frame[17].f))) + (frame[11].f));
	LINE_NUMBER(374);
	ARRAY_ACCESS(jfloat, (frame[14].o), ((frame[15].i) + (jint(1)))) = ((((frame[19].f) * (frame[16].f)) + ((frame[18].f) * (frame[17].f))) + (frame[12].f));
	LINE_NUMBER(370);
	INST_IINC(15, 5);
	goto label_8;
	}
label_9:;
	goto label_17;
label_6:;
	{
	LINE_NUMBER(376);
	if ((floatCompare((frame[8].f), (jfloat(1)), -1)) != 0) goto label_18;
	}
	{
	if ((floatCompare((frame[9].f), (jfloat(1)), -1)) == 0) goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(377);
	frame[15].i = (jint(0));
	}
label_19:;
	{
	if ((frame[15].i) >= (frame[13].i)) goto label_17;
	}
	{
	LINE_NUMBER(378);
	ARRAY_ACCESS(jfloat, (frame[14].o), (frame[15].i)) = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[14].o), (frame[15].i))) - (frame[11].f)) * (frame[8].f)) + (frame[11].f));
	LINE_NUMBER(379);
	ARRAY_ACCESS(jfloat, (frame[14].o), ((frame[15].i) + (jint(1)))) = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[14].o), ((frame[15].i) + (jint(1))))) - (frame[12].f)) * (frame[9].f)) + (frame[12].f));
	LINE_NUMBER(377);
	INST_IINC(15, 5);
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(382);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_texture;
	((func_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_Array1_float_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_Array1_float_int_int, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[14].o), (jint(0)), (frame[13].i));
	LINE_NUMBER(383);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_NinePatch_setColor_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:setColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(389);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_NinePatch_getColor_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:getColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_color;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_NinePatch_getLeftWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:getLeftWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(396);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_leftWidth);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_NinePatch_setLeftWidth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:setLeftWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(401);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_leftWidth = (frame[1].f);
	LINE_NUMBER(402);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_NinePatch_getRightWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:getRightWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(405);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_rightWidth);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_NinePatch_setRightWidth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:setRightWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(410);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_rightWidth = (frame[1].f);
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_NinePatch_getTopHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:getTopHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(414);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topHeight);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_NinePatch_setTopHeight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:setTopHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(419);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topHeight = (frame[1].f);
	LINE_NUMBER(420);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_NinePatch_getBottomHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:getBottomHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(423);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomHeight);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_NinePatch_setBottomHeight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:setBottomHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(428);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomHeight = (frame[1].f);
	LINE_NUMBER(429);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_NinePatch_getMiddleWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:getMiddleWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(432);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleWidth);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_NinePatch_setMiddleWidth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:setMiddleWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(439);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleWidth = (frame[1].f);
	LINE_NUMBER(440);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_NinePatch_getMiddleHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:getMiddleHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(443);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleHeight);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_NinePatch_setMiddleHeight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:setMiddleHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(450);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleHeight = (frame[1].f);
	LINE_NUMBER(451);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_NinePatch_getTotalWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:getTotalWidth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(454);
	popStackFrame(ctx);
	return ((((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_leftWidth) + ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleWidth)) + ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_rightWidth));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_NinePatch_getTotalHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:getTotalHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(458);
	popStackFrame(ctx);
	return ((((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topHeight) + ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleHeight)) + ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomHeight));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_NinePatch_setPadding_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:setPadding", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(464);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padLeft = (frame[1].f);
	LINE_NUMBER(465);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padRight = (frame[2].f);
	LINE_NUMBER(466);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padTop = (frame[3].f);
	LINE_NUMBER(467);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padBottom = (frame[4].f);
	LINE_NUMBER(468);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_NinePatch_getPadLeft_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:getPadLeft", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(472);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padLeft), (jfloat(-1.0f)), -1)) != 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_NinePatch_getLeftWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getLeftWidth_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(473);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padLeft);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_NinePatch_setPadLeft_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:setPadLeft", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(478);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padLeft = (frame[1].f);
	LINE_NUMBER(479);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_NinePatch_getPadRight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:getPadRight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(483);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padRight), (jfloat(-1.0f)), -1)) != 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_NinePatch_getRightWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getRightWidth_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(484);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padRight);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_NinePatch_setPadRight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:setPadRight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(489);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padRight = (frame[1].f);
	LINE_NUMBER(490);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_NinePatch_getPadTop_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:getPadTop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(494);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padTop), (jfloat(-1.0f)), -1)) != 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_NinePatch_getTopHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getTopHeight_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(495);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padTop);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_NinePatch_setPadTop_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:setPadTop", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(500);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padTop = (frame[1].f);
	LINE_NUMBER(501);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_NinePatch_getPadBottom_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:getPadBottom", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(505);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padBottom), (jfloat(-1.0f)), -1)) != 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_NinePatch_getBottomHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getBottomHeight_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(506);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padBottom);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_NinePatch_setPadBottom_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:setPadBottom", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(511);
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padBottom = (frame[1].f);
	LINE_NUMBER(512);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_NinePatch_scale_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:scale", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(516);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_leftWidth = (((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_leftWidth) * (frame[1].f));
	LINE_NUMBER(517);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_rightWidth = (((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_rightWidth) * (frame[1].f));
	LINE_NUMBER(518);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_topHeight = (((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_topHeight) * (frame[2].f));
	LINE_NUMBER(519);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_bottomHeight = (((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_bottomHeight) * (frame[2].f));
	LINE_NUMBER(520);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleWidth = (((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleWidth) * (frame[1].f));
	LINE_NUMBER(521);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleHeight = (((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleHeight) * (frame[2].f));
	LINE_NUMBER(522);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padLeft), (jfloat(-1.0f)), -1)) == 0) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_padLeft = (((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_padLeft) * (frame[1].f));
	}
label_7:;
	{
	LINE_NUMBER(523);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padRight), (jfloat(-1.0f)), -1)) == 0) goto label_8;
	}
	{
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_padRight = (((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_padRight) * (frame[1].f));
	}
label_8:;
	{
	LINE_NUMBER(524);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padTop), (jfloat(-1.0f)), -1)) == 0) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_padTop = (((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_padTop) * (frame[2].f));
	}
label_9:;
	{
	LINE_NUMBER(525);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padBottom), (jfloat(-1.0f)), -1)) == 0) goto label_10;
	}
	{
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_padBottom = (((jfloat)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_padBottom) * (frame[2].f));
	}
label_10:;
	LINE_NUMBER(526);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_NinePatch_getTexture_R_com_badlogic_gdx_graphics_Texture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:getTexture", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(529);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_texture;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_g2d_NinePatch(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_graphics_g2d_NinePatch_TOP_LEFT = jint(0);
	SF_com_badlogic_gdx_graphics_g2d_NinePatch_TOP_CENTER = jint(1);
	SF_com_badlogic_gdx_graphics_g2d_NinePatch_TOP_RIGHT = jint(2);
	SF_com_badlogic_gdx_graphics_g2d_NinePatch_MIDDLE_LEFT = jint(3);
	SF_com_badlogic_gdx_graphics_g2d_NinePatch_MIDDLE_CENTER = jint(4);
	SF_com_badlogic_gdx_graphics_g2d_NinePatch_MIDDLE_RIGHT = jint(5);
	SF_com_badlogic_gdx_graphics_g2d_NinePatch_BOTTOM_LEFT = jint(6);
	SF_com_badlogic_gdx_graphics_g2d_NinePatch_BOTTOM_CENTER = jint(7);
	SF_com_badlogic_gdx_graphics_g2d_NinePatch_BOTTOM_RIGHT = jint(8);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/NinePatch:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_NinePatch(ctx);
	{
	LINE_NUMBER(45);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_g2d_NinePatch(ctx);
	SF_com_badlogic_gdx_graphics_g2d_NinePatch_tmpDrawColor = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_NinePatch[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_load_Array1_com_badlogic_gdx_graphics_g2d_TextureRegion,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_add_com_badlogic_gdx_graphics_g2d_TextureRegion_boolean_boolean_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_set_int_float_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_prepareVertices_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_setColor_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_getColor_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_getLeftWidth_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_setLeftWidth_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_getRightWidth_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_setRightWidth_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_getTopHeight_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_setTopHeight_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_getBottomHeight_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_setBottomHeight_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_getMiddleWidth_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_setMiddleWidth_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_getMiddleHeight_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_setMiddleHeight_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_getTotalWidth_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_getTotalHeight_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_setPadding_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_getPadLeft_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_setPadLeft_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_getPadRight_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_setPadRight_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_getPadTop_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_setPadTop_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_getPadBottom_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_setPadBottom_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_scale_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_NinePatch_getTexture_R_com_badlogic_gdx_graphics_Texture,
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
	{ "load", "([Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)V" },
	{ "add", "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;ZZ)I" },
	{ "set", "(IFFFFF)V" },
	{ "prepareVertices", "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFF)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFF)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFFFFFFF)V" },
	{ "setColor", "(Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "getColor", "()Lcom/badlogic/gdx/graphics/Color;" },
	{ "getLeftWidth", "()F" },
	{ "setLeftWidth", "(F)V" },
	{ "getRightWidth", "()F" },
	{ "setRightWidth", "(F)V" },
	{ "getTopHeight", "()F" },
	{ "setTopHeight", "(F)V" },
	{ "getBottomHeight", "()F" },
	{ "setBottomHeight", "(F)V" },
	{ "getMiddleWidth", "()F" },
	{ "setMiddleWidth", "(F)V" },
	{ "getMiddleHeight", "()F" },
	{ "setMiddleHeight", "(F)V" },
	{ "getTotalWidth", "()F" },
	{ "getTotalHeight", "()F" },
	{ "setPadding", "(FFFF)V" },
	{ "getPadLeft", "()F" },
	{ "setPadLeft", "(F)V" },
	{ "getPadRight", "()F" },
	{ "setPadRight", "(F)V" },
	{ "getPadTop", "()F" },
	{ "setPadTop", "(F)V" },
	{ "getPadBottom", "()F" },
	{ "setPadBottom", "(F)V" },
	{ "scale", "(FF)V" },
	{ "getTexture", "()Lcom/badlogic/gdx/graphics/Texture;" },
};

static FieldMetadata fields[] {
	{ "TOP_LEFT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_NinePatch_TOP_LEFT, "I", 25 },
	{ "TOP_CENTER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_NinePatch_TOP_CENTER, "I", 25 },
	{ "TOP_RIGHT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_NinePatch_TOP_RIGHT, "I", 25 },
	{ "MIDDLE_LEFT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_NinePatch_MIDDLE_LEFT, "I", 25 },
	{ "MIDDLE_CENTER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_NinePatch_MIDDLE_CENTER, "I", 25 },
	{ "MIDDLE_RIGHT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_NinePatch_MIDDLE_RIGHT, "I", 25 },
	{ "BOTTOM_LEFT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_NinePatch_BOTTOM_LEFT, "I", 25 },
	{ "BOTTOM_CENTER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_NinePatch_BOTTOM_CENTER, "I", 25 },
	{ "BOTTOM_RIGHT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_NinePatch_BOTTOM_RIGHT, "I", 25 },
	{ "tmpDrawColor", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_NinePatch_tmpDrawColor, "Lcom/badlogic/gdx/graphics/Color;", 26 },
	{ "texture", &class_com_badlogic_gdx_graphics_Texture, offsetof(com_badlogic_gdx_graphics_g2d_NinePatch, F_texture), "Lcom/badlogic/gdx/graphics/Texture;", 2 },
	{ "bottomLeft", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_NinePatch, F_bottomLeft), "I", 2 },
	{ "bottomCenter", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_NinePatch, F_bottomCenter), "I", 2 },
	{ "bottomRight", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_NinePatch, F_bottomRight), "I", 2 },
	{ "middleLeft", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_NinePatch, F_middleLeft), "I", 2 },
	{ "middleCenter", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_NinePatch, F_middleCenter), "I", 2 },
	{ "middleRight", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_NinePatch, F_middleRight), "I", 2 },
	{ "topLeft", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_NinePatch, F_topLeft), "I", 2 },
	{ "topCenter", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_NinePatch, F_topCenter), "I", 2 },
	{ "topRight", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_NinePatch, F_topRight), "I", 2 },
	{ "leftWidth", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_NinePatch, F_leftWidth), "F", 2 },
	{ "rightWidth", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_NinePatch, F_rightWidth), "F", 2 },
	{ "middleWidth", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_NinePatch, F_middleWidth), "F", 2 },
	{ "middleHeight", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_NinePatch, F_middleHeight), "F", 2 },
	{ "topHeight", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_NinePatch, F_topHeight), "F", 2 },
	{ "bottomHeight", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_NinePatch, F_bottomHeight), "F", 2 },
	{ "vertices", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_graphics_g2d_NinePatch, F_vertices), "[F", 2 },
	{ "idx", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_NinePatch, F_idx), "I", 2 },
	{ "color", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_graphics_g2d_NinePatch, F_color), "Lcom/badlogic/gdx/graphics/Color;", 18 },
	{ "padLeft", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_NinePatch, F_padLeft), "F", 2 },
	{ "padRight", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_NinePatch, F_padRight), "F", 2 },
	{ "padTop", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_NinePatch, F_padTop), "F", 2 },
	{ "padBottom", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_NinePatch, F_padBottom), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_Texture_int_int_int_int, 0, "(Lcom/badlogic/gdx/graphics/Texture;IIII)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int, 0, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;IIII)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_graphics_Color, 0, "(Lcom/badlogic/gdx/graphics/Texture;Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_Texture, 0, "(Lcom/badlogic/gdx/graphics/Texture;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_Color, 0, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_g2d_TextureRegion, 0, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_NinePatch_Array1_com_badlogic_gdx_graphics_g2d_TextureRegion, 0, "([Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)V", 129 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_g2d_NinePatch, 0, "(Lcom/badlogic/gdx/graphics/g2d/NinePatch;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_Color, 0, "(Lcom/badlogic/gdx/graphics/g2d/NinePatch;Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_load_Array1_com_badlogic_gdx_graphics_g2d_TextureRegion, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_load_Array1_com_badlogic_gdx_graphics_g2d_TextureRegion, "([Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)V", 2 },
	{ "add", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_add_com_badlogic_gdx_graphics_g2d_TextureRegion_boolean_boolean_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_add_com_badlogic_gdx_graphics_g2d_TextureRegion_boolean_boolean_R_int, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;ZZ)I", 2 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_set_int_float_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_set_int_float_float_float_float_float, "(IFFFFF)V", 2 },
	{ "prepareVertices", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_prepareVertices_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_prepareVertices_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFF)V", 2 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFF)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFFFFFFF)V", 1 },
	{ "setColor", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_setColor_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_setColor_com_badlogic_gdx_graphics_Color, "(Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "getColor", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_getColor_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getColor_R_com_badlogic_gdx_graphics_Color, "()Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "getLeftWidth", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_getLeftWidth_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getLeftWidth_R_float, "()F", 1 },
	{ "setLeftWidth", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_setLeftWidth_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_setLeftWidth_float, "(F)V", 1 },
	{ "getRightWidth", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_getRightWidth_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getRightWidth_R_float, "()F", 1 },
	{ "setRightWidth", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_setRightWidth_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_setRightWidth_float, "(F)V", 1 },
	{ "getTopHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_getTopHeight_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getTopHeight_R_float, "()F", 1 },
	{ "setTopHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_setTopHeight_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_setTopHeight_float, "(F)V", 1 },
	{ "getBottomHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_getBottomHeight_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getBottomHeight_R_float, "()F", 1 },
	{ "setBottomHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_setBottomHeight_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_setBottomHeight_float, "(F)V", 1 },
	{ "getMiddleWidth", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_getMiddleWidth_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getMiddleWidth_R_float, "()F", 1 },
	{ "setMiddleWidth", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_setMiddleWidth_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_setMiddleWidth_float, "(F)V", 1 },
	{ "getMiddleHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_getMiddleHeight_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getMiddleHeight_R_float, "()F", 1 },
	{ "setMiddleHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_setMiddleHeight_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_setMiddleHeight_float, "(F)V", 1 },
	{ "getTotalWidth", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_getTotalWidth_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getTotalWidth_R_float, "()F", 1 },
	{ "getTotalHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_getTotalHeight_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getTotalHeight_R_float, "()F", 1 },
	{ "setPadding", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_setPadding_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_setPadding_float_float_float_float, "(FFFF)V", 1 },
	{ "getPadLeft", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_getPadLeft_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getPadLeft_R_float, "()F", 1 },
	{ "setPadLeft", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_setPadLeft_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_setPadLeft_float, "(F)V", 1 },
	{ "getPadRight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_getPadRight_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getPadRight_R_float, "()F", 1 },
	{ "setPadRight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_setPadRight_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_setPadRight_float, "(F)V", 1 },
	{ "getPadTop", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_getPadTop_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getPadTop_R_float, "()F", 1 },
	{ "setPadTop", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_setPadTop_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_setPadTop_float, "(F)V", 1 },
	{ "getPadBottom", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_getPadBottom_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getPadBottom_R_float, "()F", 1 },
	{ "setPadBottom", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_setPadBottom_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_setPadBottom_float, "(F)V", 1 },
	{ "scale", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_scale_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_scale_float_float, "(FF)V", 1 },
	{ "getTexture", (intptr_t) M_com_badlogic_gdx_graphics_g2d_NinePatch_getTexture_R_com_badlogic_gdx_graphics_Texture, VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getTexture_R_com_badlogic_gdx_graphics_Texture, "()Lcom/badlogic/gdx/graphics/Texture;", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_NinePatch, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_g2d_NinePatch{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/NinePatch",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_NinePatch),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_NinePatch,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_NinePatch,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_NinePatch,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 33,
		.nativeFields = (intptr_t) fields,
		.methodCount = 43,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 44,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_NinePatch = registerClass(&class_com_badlogic_gdx_graphics_g2d_NinePatch);

}

