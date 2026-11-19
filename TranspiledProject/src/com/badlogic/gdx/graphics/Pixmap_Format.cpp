#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"
#include "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_Pixmap$Format_Alpha;
jobject SF_com_badlogic_gdx_graphics_Pixmap$Format_Intensity;
jobject SF_com_badlogic_gdx_graphics_Pixmap$Format_LuminanceAlpha;
jobject SF_com_badlogic_gdx_graphics_Pixmap$Format_RGB565;
jobject SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA4444;
jobject SF_com_badlogic_gdx_graphics_Pixmap$Format_RGB888;
jobject SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA8888;
jobject SF_com_badlogic_gdx_graphics_Pixmap$Format_$VALUES;

void mark_com_badlogic_gdx_graphics_Pixmap$Format(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_Pixmap$Format_Alpha)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Pixmap$Format_Alpha)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Pixmap$Format_Alpha, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Pixmap$Format_Intensity)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Pixmap$Format_Intensity)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Pixmap$Format_Intensity, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Pixmap$Format_LuminanceAlpha)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Pixmap$Format_LuminanceAlpha)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Pixmap$Format_LuminanceAlpha, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Pixmap$Format_RGB565)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Pixmap$Format_RGB565)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Pixmap$Format_RGB565, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA4444)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA4444)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA4444, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Pixmap$Format_RGB888)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Pixmap$Format_RGB888)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Pixmap$Format_RGB888, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA8888)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA8888)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA8888, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Pixmap$Format_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Pixmap$Format_$VALUES)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Pixmap$Format_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_Pixmap$Format *) object;
}

jobject SM_com_badlogic_gdx_graphics_Pixmap$Format_values_R_Array1_com_badlogic_gdx_graphics_Pixmap$Format(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap$Format:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	{
	LINE_NUMBER(47);
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_graphics_Pixmap$Format, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_Pixmap$Format_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_Pixmap$Format(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap$Format:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_com_badlogic_gdx_graphics_Pixmap$Format)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_graphics_Pixmap$Format, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Pixmap$Format_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap$Format:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(47);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_Pixmap$Format_toGdx2DPixmapFormat_com_badlogic_gdx_graphics_Pixmap$Format_R_int(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap$Format:toGdx2DPixmapFormat", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_Alpha;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_Intensity;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_LuminanceAlpha;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	INST_ICONST(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_RGB565;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	INST_ICONST(5);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA4444;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	INST_BIPUSH(6);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_RGB888;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	INST_ICONST(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA8888;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	INST_ICONST(4);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(58);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unknown Format: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_Pixmap$Format_fromGdx2DPixmapFormat_int_R_com_badlogic_gdx_graphics_Pixmap$Format(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap$Format:fromGdx2DPixmapFormat", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(62);
	if ((frame[0].i) != (jint(1))) goto label_1;
	}
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	(sp++)->o = SF_com_badlogic_gdx_graphics_Pixmap$Format_Alpha;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(63);
	if ((frame[0].i) != (jint(2))) goto label_2;
	}
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	(sp++)->o = SF_com_badlogic_gdx_graphics_Pixmap$Format_LuminanceAlpha;
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(64);
	if ((frame[0].i) != (jint(5))) goto label_3;
	}
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	(sp++)->o = SF_com_badlogic_gdx_graphics_Pixmap$Format_RGB565;
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(65);
	if ((frame[0].i) != (6)) goto label_4;
	}
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	(sp++)->o = SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA4444;
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(66);
	if ((frame[0].i) != (jint(3))) goto label_5;
	}
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	(sp++)->o = SF_com_badlogic_gdx_graphics_Pixmap$Format_RGB888;
	popStackFrame(ctx);
	INST_ARETURN();
label_5:;
	{
	LINE_NUMBER(67);
	if ((frame[0].i) != (jint(4))) goto label_6;
	}
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	(sp++)->o = SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA8888;
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	LINE_NUMBER(68);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unknown Gdx2DPixmap Format: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_Pixmap$Format_toGlFormat_com_badlogic_gdx_graphics_Pixmap$Format_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap$Format:toGlFormat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(72);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_Pixmap$Format_toGdx2DPixmapFormat_com_badlogic_gdx_graphics_Pixmap$Format_R_int(ctx, (frame[0].o));
	jint temp1 = (jint)SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_toGlFormat_int_R_int(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_Pixmap$Format_toGlType_com_badlogic_gdx_graphics_Pixmap$Format_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap$Format:toGlType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(76);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_Pixmap$Format_toGdx2DPixmapFormat_com_badlogic_gdx_graphics_Pixmap$Format_R_int(ctx, (frame[0].o));
	jint temp1 = (jint)SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_toGlType_int_R_int(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_Pixmap$Format_$values_R_Array1_com_badlogic_gdx_graphics_Pixmap$Format(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap$Format:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_Pixmap$Format, (7));
	jint temp0 = jint(0);
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_Alpha;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_Intensity;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_LuminanceAlpha;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_RGB565;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA4444;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_RGB888;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA8888;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_Pixmap$Format(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap$Format:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	{
	LINE_NUMBER(48);
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap$Format);
	init_com_badlogic_gdx_graphics_Pixmap$Format_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Alpha"_j))), (jint(0)));
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	SF_com_badlogic_gdx_graphics_Pixmap$Format_Alpha = sp[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap$Format);
	init_com_badlogic_gdx_graphics_Pixmap$Format_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Intensity"_j))), (jint(1)));
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	SF_com_badlogic_gdx_graphics_Pixmap$Format_Intensity = sp[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap$Format);
	init_com_badlogic_gdx_graphics_Pixmap$Format_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LuminanceAlpha"_j))), (jint(2)));
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	SF_com_badlogic_gdx_graphics_Pixmap$Format_LuminanceAlpha = sp[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap$Format);
	init_com_badlogic_gdx_graphics_Pixmap$Format_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RGB565"_j))), (jint(3)));
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	SF_com_badlogic_gdx_graphics_Pixmap$Format_RGB565 = sp[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap$Format);
	init_com_badlogic_gdx_graphics_Pixmap$Format_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RGBA4444"_j))), (jint(4)));
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA4444 = sp[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap$Format);
	init_com_badlogic_gdx_graphics_Pixmap$Format_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RGB888"_j))), (jint(5)));
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	SF_com_badlogic_gdx_graphics_Pixmap$Format_RGB888 = sp[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap$Format);
	init_com_badlogic_gdx_graphics_Pixmap$Format_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RGBA8888"_j))), (6));
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA8888 = sp[0].o;
	LINE_NUMBER(47);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_Pixmap$Format_$values_R_Array1_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	SF_com_badlogic_gdx_graphics_Pixmap$Format_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_Pixmap$Format[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
};

static FieldMetadata fields[] {
	{ "Alpha", &class_com_badlogic_gdx_graphics_Pixmap$Format, (intptr_t) &SF_com_badlogic_gdx_graphics_Pixmap$Format_Alpha, "Lcom/badlogic/gdx/graphics/Pixmap$Format;", 16409 },
	{ "Intensity", &class_com_badlogic_gdx_graphics_Pixmap$Format, (intptr_t) &SF_com_badlogic_gdx_graphics_Pixmap$Format_Intensity, "Lcom/badlogic/gdx/graphics/Pixmap$Format;", 16409 },
	{ "LuminanceAlpha", &class_com_badlogic_gdx_graphics_Pixmap$Format, (intptr_t) &SF_com_badlogic_gdx_graphics_Pixmap$Format_LuminanceAlpha, "Lcom/badlogic/gdx/graphics/Pixmap$Format;", 16409 },
	{ "RGB565", &class_com_badlogic_gdx_graphics_Pixmap$Format, (intptr_t) &SF_com_badlogic_gdx_graphics_Pixmap$Format_RGB565, "Lcom/badlogic/gdx/graphics/Pixmap$Format;", 16409 },
	{ "RGBA4444", &class_com_badlogic_gdx_graphics_Pixmap$Format, (intptr_t) &SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA4444, "Lcom/badlogic/gdx/graphics/Pixmap$Format;", 16409 },
	{ "RGB888", &class_com_badlogic_gdx_graphics_Pixmap$Format, (intptr_t) &SF_com_badlogic_gdx_graphics_Pixmap$Format_RGB888, "Lcom/badlogic/gdx/graphics/Pixmap$Format;", 16409 },
	{ "RGBA8888", &class_com_badlogic_gdx_graphics_Pixmap$Format, (intptr_t) &SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA8888, "Lcom/badlogic/gdx/graphics/Pixmap$Format;", 16409 },
	{ "$VALUES", getArrayClass(&class_com_badlogic_gdx_graphics_Pixmap$Format, 1), (intptr_t) &SF_com_badlogic_gdx_graphics_Pixmap$Format_$VALUES, "[Lcom/badlogic/gdx/graphics/Pixmap$Format;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_com_badlogic_gdx_graphics_Pixmap$Format_values_R_Array1_com_badlogic_gdx_graphics_Pixmap$Format, 0, "()[Lcom/badlogic/gdx/graphics/Pixmap$Format;", 9 },
	{ "valueOf", (intptr_t) SM_com_badlogic_gdx_graphics_Pixmap$Format_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_Pixmap$Format, 0, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/Pixmap$Format;", 9 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Pixmap$Format_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "toGdx2DPixmapFormat", (intptr_t) SM_com_badlogic_gdx_graphics_Pixmap$Format_toGdx2DPixmapFormat_com_badlogic_gdx_graphics_Pixmap$Format_R_int, 0, "(Lcom/badlogic/gdx/graphics/Pixmap$Format;)I", 9 },
	{ "fromGdx2DPixmapFormat", (intptr_t) SM_com_badlogic_gdx_graphics_Pixmap$Format_fromGdx2DPixmapFormat_int_R_com_badlogic_gdx_graphics_Pixmap$Format, 0, "(I)Lcom/badlogic/gdx/graphics/Pixmap$Format;", 9 },
	{ "toGlFormat", (intptr_t) SM_com_badlogic_gdx_graphics_Pixmap$Format_toGlFormat_com_badlogic_gdx_graphics_Pixmap$Format_R_int, 0, "(Lcom/badlogic/gdx/graphics/Pixmap$Format;)I", 9 },
	{ "toGlType", (intptr_t) SM_com_badlogic_gdx_graphics_Pixmap$Format_toGlType_com_badlogic_gdx_graphics_Pixmap$Format_R_int, 0, "(Lcom/badlogic/gdx/graphics/Pixmap$Format;)I", 9 },
	{ "$values", (intptr_t) SM_com_badlogic_gdx_graphics_Pixmap$Format_$values_R_Array1_com_badlogic_gdx_graphics_Pixmap$Format, 0, "()[Lcom/badlogic/gdx/graphics/Pixmap$Format;", 4106 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_Pixmap$Format, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_Pixmap$Format{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/Pixmap$Format",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(com_badlogic_gdx_graphics_Pixmap$Format),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_Pixmap$Format,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_Pixmap$Format,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_Pixmap$Format,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_Pixmap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_Pixmap$Format = registerClass(&class_com_badlogic_gdx_graphics_Pixmap$Format);

}

