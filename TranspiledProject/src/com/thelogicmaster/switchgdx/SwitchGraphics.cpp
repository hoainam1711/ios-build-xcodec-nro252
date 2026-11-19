#include "com/thelogicmaster/switchgdx/SwitchGraphics.h"
#include "java/lang/Math.h"
#include "com/thelogicmaster/switchgdx/SwitchGraphics.h"
#include "com/thelogicmaster/switchgdx/SwitchGraphics_SwitchMonitor.h"
#include "com/badlogic/gdx/graphics/GL32.h"
#include "com/badlogic/gdx/Graphics_DisplayMode.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "com/badlogic/gdx/graphics/GL31.h"
#include "com/badlogic/gdx/graphics/GL30.h"
#include "com/badlogic/gdx/Application_ApplicationType.h"
#include "com/badlogic/gdx/Graphics_BufferFormat.h"
#include "com/badlogic/gdx/graphics/Cursor_SystemCursor.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/graphics/glutils/GLVersion.h"
#include "com/badlogic/gdx/Graphics_Monitor.h"
#include "com/thelogicmaster/switchgdx/SwitchGraphics_SwitchDisplayMode.h"
#include "com/badlogic/gdx/Graphics_GraphicsType.h"
#include "java/lang/CharSequence.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/AbstractGraphics.h"
#include "com/thelogicmaster/switchgdx/SwitchGL.h"
#include "java/lang/System.h"
#include "com/badlogic/gdx/graphics/Cursor.h"

extern "C" {


void mark_com_thelogicmaster_switchgdx_SwitchGraphics(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_AbstractGraphics(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_thelogicmaster_switchgdx_SwitchGraphics *) object;
	if (self->F_bufferFormat)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bufferFormat)->clazz)->markFunction)((jobject) self->F_bufferFormat, mark, depth + 1);
	if (self->F_glVersion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_glVersion)->clazz)->markFunction)((jobject) self->F_glVersion, mark, depth + 1);
	if (self->F_extensions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_extensions)->clazz)->markFunction)((jobject) self->F_extensions, mark, depth + 1);
}

void clinit_com_thelogicmaster_switchgdx_SwitchGraphics(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_AbstractGraphics(ctx);
}

void init_com_thelogicmaster_switchgdx_SwitchGraphics(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchGraphics(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(22);
	init_com_badlogic_gdx_AbstractGraphics(ctx, (frame[0].o));
	LINE_NUMBER(17);
	((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK((frame[0].o)))->F_frameId = (jlong(-1ll));
	LINE_NUMBER(23);
	clinit_com_thelogicmaster_switchgdx_SwitchGL(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchGL);
	init_com_thelogicmaster_switchgdx_SwitchGL(ctx, sp[0].o);
	clinit_com_badlogic_gdx_Gdx(ctx);
	SF_com_badlogic_gdx_Gdx_gl20 = sp[0].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	SF_com_badlogic_gdx_Gdx_gl = sp[0].o;
	LINE_NUMBER(25);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_GL20_glGetString_int_R_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGetString_int_R_java_lang_String, sp[0].o))(ctx, sp[0].o, (7938));
	frame[1].o = sp[0].o;
	LINE_NUMBER(26);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_GL20_glGetString_int_R_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGetString_int_R_java_lang_String, sp[0].o))(ctx, sp[0].o, (7936));
	frame[2].o = sp[0].o;
	LINE_NUMBER(27);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_GL20_glGetString_int_R_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGetString_int_R_java_lang_String, sp[0].o))(ctx, sp[0].o, (7937));
	frame[3].o = sp[0].o;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_GLVersion(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_GLVersion);
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_iOS;
	init_com_badlogic_gdx_graphics_glutils_GLVersion_com_badlogic_gdx_Application$ApplicationType_java_lang_String_java_lang_String_java_lang_String(ctx, sp[1].o, sp[2].o, (frame[1].o), (frame[2].o), (frame[3].o));
	((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK(sp[0].o))->F_glVersion = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_GL20_glGetString_int_R_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGetString_int_R_java_lang_String, sp[1].o))(ctx, sp[1].o, (7939));
	((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK(sp[0].o))->F_extensions = (jref) sp[1].o;
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Graphics$BufferFormat(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_Graphics$BufferFormat);
	init_com_badlogic_gdx_Graphics$BufferFormat_int_int_int_int_int_int_int_boolean(ctx, sp[1].o, (8), (8), (8), (8), (24), (8), (jint(0)), (jint(0)));
	((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK(sp[0].o))->F_bufferFormat = (jref) sp[1].o;
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK(sp[0].o))->F_previousTime = temp0;
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchGraphics_resetTime(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:resetTime", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK(sp[0].o))->F_previousTime = temp0;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchGraphics_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:update", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[1].l = temp0;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	jlong temp1 = (jlong)SM_java_lang_Math_max_long_long_R_long(ctx, ((frame[1].l) - ((jlong)((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK((frame[0].o)))->F_previousTime)), (jlong(1)));
	((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK(sp[0].o))->F_deltaTime = ((jfloat(temp1)) / (jfloat(1000.0f)));
	LINE_NUMBER(44);
	((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK((frame[0].o)))->F_previousTime = (frame[1].l);
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK(sp[0].o))->F_time = (((jfloat)((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK(sp[0].o))->F_time) + ((jfloat)((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK((frame[0].o)))->F_deltaTime));
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK(sp[0].o))->F_frameId = (((jlong)((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK(sp[0].o))->F_frameId) + (jlong(1)));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK(sp[0].o))->F_frames = (((jint)((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK(sp[0].o))->F_frames) + (jint(1)));
	LINE_NUMBER(48);
	if ((floatCompare(((jfloat)((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK((frame[0].o)))->F_time), (jfloat(1)), -1)) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(49);
	((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK((frame[0].o)))->F_fps = ((jint)((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK((frame[0].o)))->F_frames);
	LINE_NUMBER(50);
	((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK((frame[0].o)))->F_time = (jfloat(0));
	LINE_NUMBER(51);
	((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK((frame[0].o)))->F_frames = (jint(0));
	}
label_7:;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchGraphics_isGL30Available_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:isGL30Available", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchGraphics_isGL31Available_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:isGL31Available", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchGraphics_isGL32Available_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:isGL32Available", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchGraphics_getGL20_R_com_badlogic_gdx_graphics_GL20(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getGL20", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(72);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchGraphics_getGL30_R_com_badlogic_gdx_graphics_GL30(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getGL30", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchGraphics_getGL31_R_com_badlogic_gdx_graphics_GL31(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getGL31", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchGraphics_getGL32_R_com_badlogic_gdx_graphics_GL32(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getGL32", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchGraphics_setGL20_com_badlogic_gdx_graphics_GL20(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:setGL20", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(92);
	clinit_com_badlogic_gdx_Gdx(ctx);
	SF_com_badlogic_gdx_Gdx_gl = (frame[1].o);
	LINE_NUMBER(93);
	clinit_com_badlogic_gdx_Gdx(ctx);
	SF_com_badlogic_gdx_Gdx_gl20 = (frame[1].o);
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchGraphics_setGL30_com_badlogic_gdx_graphics_GL30(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:setGL30", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(99);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchGraphics_setGL31_com_badlogic_gdx_graphics_GL31(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:setGL31", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(104);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchGraphics_setGL32_com_badlogic_gdx_graphics_GL32(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:setGL32", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(109);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_com_thelogicmaster_switchgdx_SwitchGraphics_getBackBufferWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getBackBufferWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(119);
	jint temp0 = (jint)((func_com_thelogicmaster_switchgdx_SwitchGraphics_getWidth_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getWidth_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_thelogicmaster_switchgdx_SwitchGraphics_getBackBufferHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getBackBufferHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(124);
	jint temp0 = (jint)((func_com_thelogicmaster_switchgdx_SwitchGraphics_getHeight_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getHeight_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_thelogicmaster_switchgdx_SwitchGraphics_getSafeInsetLeft_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getSafeInsetLeft", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_com_thelogicmaster_switchgdx_SwitchGraphics_getSafeInsetTop_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getSafeInsetTop", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_com_thelogicmaster_switchgdx_SwitchGraphics_getSafeInsetBottom_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getSafeInsetBottom", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_com_thelogicmaster_switchgdx_SwitchGraphics_getSafeInsetRight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getSafeInsetRight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jlong M_com_thelogicmaster_switchgdx_SwitchGraphics_getFrameId_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getFrameId", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return ((jlong)((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK((frame[0].o)))->F_frameId);
	}

	popStackFrame(ctx);
}

jfloat M_com_thelogicmaster_switchgdx_SwitchGraphics_getDeltaTime_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getDeltaTime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return ((jfloat)((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK((frame[0].o)))->F_deltaTime);
	}

	popStackFrame(ctx);
}

jint M_com_thelogicmaster_switchgdx_SwitchGraphics_getFramesPerSecond_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getFramesPerSecond", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return ((jint)((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK((frame[0].o)))->F_fps);
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchGraphics_getType_R_com_badlogic_gdx_Graphics$GraphicsType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(164);
	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Graphics$GraphicsType_iOSGL;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchGraphics_getGLVersion_R_com_badlogic_gdx_graphics_glutils_GLVersion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getGLVersion", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK((frame[0].o)))->F_glVersion;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_thelogicmaster_switchgdx_SwitchGraphics_getPpiX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getPpiX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return (jfloat(160.0f));
	}

	popStackFrame(ctx);
}

jfloat M_com_thelogicmaster_switchgdx_SwitchGraphics_getPpiY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getPpiY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return (jfloat(160.0f));
	}

	popStackFrame(ctx);
}

jfloat M_com_thelogicmaster_switchgdx_SwitchGraphics_getPpcX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getPpcX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return (jfloat(63.0f));
	}

	popStackFrame(ctx);
}

jfloat M_com_thelogicmaster_switchgdx_SwitchGraphics_getPpcY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getPpcY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return (jfloat(63.0f));
	}

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchGraphics_supportsDisplayModeChange_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:supportsDisplayModeChange", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(194);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchGraphics_getPrimaryMonitor_R_com_badlogic_gdx_Graphics$Monitor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getPrimaryMonitor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchGraphics_getMonitor_R_com_badlogic_gdx_Graphics$Monitor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getMonitor_R_com_badlogic_gdx_Graphics$Monitor])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchGraphics_getMonitor_R_com_badlogic_gdx_Graphics$Monitor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getMonitor", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(204);
	clinit_com_thelogicmaster_switchgdx_SwitchGraphics$SwitchMonitor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchGraphics$SwitchMonitor);
	init_com_thelogicmaster_switchgdx_SwitchGraphics$SwitchMonitor_int_int_java_lang_String(ctx, sp[0].o, (jint(0)), (jint(0)), (((jobject) createStringLiteral(ctx, u8"iOS Display"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchGraphics_getMonitors_R_Array1_com_badlogic_gdx_Graphics$Monitor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getMonitors", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_Graphics$Monitor, (jint(1)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchGraphics_getMonitor_R_com_badlogic_gdx_Graphics$Monitor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getMonitor_R_com_badlogic_gdx_Graphics$Monitor])(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchGraphics_getDisplayModes_R_Array1_com_badlogic_gdx_Graphics$DisplayMode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getDisplayModes", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_Graphics$DisplayMode, (jint(1)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchGraphics_getDisplayMode_R_com_badlogic_gdx_Graphics$DisplayMode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getDisplayMode_R_com_badlogic_gdx_Graphics$DisplayMode])(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchGraphics_getDisplayModes_com_badlogic_gdx_Graphics$Monitor_R_Array1_com_badlogic_gdx_Graphics$DisplayMode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getDisplayModes", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_Graphics$DisplayMode, (jint(1)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchGraphics_getDisplayMode_R_com_badlogic_gdx_Graphics$DisplayMode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getDisplayMode_R_com_badlogic_gdx_Graphics$DisplayMode])(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchGraphics_getDisplayMode_R_com_badlogic_gdx_Graphics$DisplayMode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getDisplayMode", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(224);
	clinit_com_thelogicmaster_switchgdx_SwitchGraphics$SwitchDisplayMode(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchGraphics$SwitchDisplayMode);
	jint temp0 = (jint)((func_com_thelogicmaster_switchgdx_SwitchGraphics_getWidth_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getWidth_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_com_thelogicmaster_switchgdx_SwitchGraphics_getHeight_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getHeight_R_int])(ctx, (frame[0].o));
	init_com_thelogicmaster_switchgdx_SwitchGraphics$SwitchDisplayMode_int_int_int_int(ctx, sp[0].o, temp0, temp1, (60), (32));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchGraphics_getDisplayMode_com_badlogic_gdx_Graphics$Monitor_R_com_badlogic_gdx_Graphics$DisplayMode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getDisplayMode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchGraphics_getDisplayMode_R_com_badlogic_gdx_Graphics$DisplayMode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getDisplayMode_R_com_badlogic_gdx_Graphics$DisplayMode])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchGraphics_setFullscreenMode_com_badlogic_gdx_Graphics$DisplayMode_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:setFullscreenMode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchGraphics_setWindowedMode_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:setWindowedMode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchGraphics_setTitle_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:setTitle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(245);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchGraphics_setUndecorated_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:setUndecorated", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(250);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchGraphics_setResizable_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:setResizable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(255);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchGraphics_setVSync_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:setVSync", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(260);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchGraphics_setForegroundFPS_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:setForegroundFPS", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(265);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchGraphics_getBufferFormat_R_com_badlogic_gdx_Graphics$BufferFormat(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:getBufferFormat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK((frame[0].o)))->F_bufferFormat;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchGraphics_supportsExtension_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:supportsExtension", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchGraphics *) NULL_CHECK((frame[0].o)))->F_extensions;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchGraphics_setContinuousRendering_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:setContinuousRendering", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(280);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchGraphics_isContinuousRendering_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:isContinuousRendering", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchGraphics_requestRendering(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:requestRendering", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(290);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchGraphics_isFullscreen_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:isFullscreen", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(294);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchGraphics_newCursor_com_badlogic_gdx_graphics_Pixmap_int_int_R_com_badlogic_gdx_graphics_Cursor(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:newCursor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(299);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchGraphics_setCursor_com_badlogic_gdx_graphics_Cursor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:setCursor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(305);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchGraphics_setSystemCursor_com_badlogic_gdx_graphics_Cursor$SystemCursor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics:setSystemCursor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(310);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_thelogicmaster_switchgdx_SwitchGraphics[] {
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
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_isGL30Available_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_isGL31Available_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_isGL32Available_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getGL20_R_com_badlogic_gdx_graphics_GL20,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getGL30_R_com_badlogic_gdx_graphics_GL30,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getGL31_R_com_badlogic_gdx_graphics_GL31,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getGL32_R_com_badlogic_gdx_graphics_GL32,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_setGL20_com_badlogic_gdx_graphics_GL20,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_setGL30_com_badlogic_gdx_graphics_GL30,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_setGL31_com_badlogic_gdx_graphics_GL31,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_setGL32_com_badlogic_gdx_graphics_GL32,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getWidth_R_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getHeight_R_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getBackBufferWidth_R_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getBackBufferHeight_R_int,
	(void *) M_com_badlogic_gdx_AbstractGraphics_getBackBufferScale_R_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getSafeInsetLeft_R_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getSafeInsetTop_R_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getSafeInsetBottom_R_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getSafeInsetRight_R_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getFrameId_R_long,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getDeltaTime_R_float,
	(void *) M_com_badlogic_gdx_AbstractGraphics_getRawDeltaTime_R_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getFramesPerSecond_R_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getType_R_com_badlogic_gdx_Graphics$GraphicsType,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getGLVersion_R_com_badlogic_gdx_graphics_glutils_GLVersion,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getPpiX_R_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getPpiY_R_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getPpcX_R_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getPpcY_R_float,
	(void *) M_com_badlogic_gdx_AbstractGraphics_getDensity_R_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_supportsDisplayModeChange_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getPrimaryMonitor_R_com_badlogic_gdx_Graphics$Monitor,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getMonitor_R_com_badlogic_gdx_Graphics$Monitor,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getMonitors_R_Array1_com_badlogic_gdx_Graphics$Monitor,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getDisplayModes_R_Array1_com_badlogic_gdx_Graphics$DisplayMode,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getDisplayModes_com_badlogic_gdx_Graphics$Monitor_R_Array1_com_badlogic_gdx_Graphics$DisplayMode,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getDisplayMode_R_com_badlogic_gdx_Graphics$DisplayMode,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getDisplayMode_com_badlogic_gdx_Graphics$Monitor_R_com_badlogic_gdx_Graphics$DisplayMode,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_setFullscreenMode_com_badlogic_gdx_Graphics$DisplayMode_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_setWindowedMode_int_int_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_setTitle_java_lang_String,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_setUndecorated_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_setResizable_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_setVSync_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_setForegroundFPS_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_getBufferFormat_R_com_badlogic_gdx_Graphics$BufferFormat,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_supportsExtension_java_lang_String_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_setContinuousRendering_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_isContinuousRendering_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_requestRendering,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_isFullscreen_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_newCursor_com_badlogic_gdx_graphics_Pixmap_int_int_R_com_badlogic_gdx_graphics_Cursor,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_setCursor_com_badlogic_gdx_graphics_Cursor,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_setSystemCursor_com_badlogic_gdx_graphics_Cursor$SystemCursor,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_resetTime,
	(void *) M_com_thelogicmaster_switchgdx_SwitchGraphics_update,
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
	{ "isGL30Available", "()Z" },
	{ "isGL31Available", "()Z" },
	{ "isGL32Available", "()Z" },
	{ "getGL20", "()Lcom/badlogic/gdx/graphics/GL20;" },
	{ "getGL30", "()Lcom/badlogic/gdx/graphics/GL30;" },
	{ "getGL31", "()Lcom/badlogic/gdx/graphics/GL31;" },
	{ "getGL32", "()Lcom/badlogic/gdx/graphics/GL32;" },
	{ "setGL20", "(Lcom/badlogic/gdx/graphics/GL20;)V" },
	{ "setGL30", "(Lcom/badlogic/gdx/graphics/GL30;)V" },
	{ "setGL31", "(Lcom/badlogic/gdx/graphics/GL31;)V" },
	{ "setGL32", "(Lcom/badlogic/gdx/graphics/GL32;)V" },
	{ "getWidth", "()I" },
	{ "getHeight", "()I" },
	{ "getBackBufferWidth", "()I" },
	{ "getBackBufferHeight", "()I" },
	{ "getBackBufferScale", "()F" },
	{ "getSafeInsetLeft", "()I" },
	{ "getSafeInsetTop", "()I" },
	{ "getSafeInsetBottom", "()I" },
	{ "getSafeInsetRight", "()I" },
	{ "getFrameId", "()J" },
	{ "getDeltaTime", "()F" },
	{ "getRawDeltaTime", "()F" },
	{ "getFramesPerSecond", "()I" },
	{ "getType", "()Lcom/badlogic/gdx/Graphics$GraphicsType;" },
	{ "getGLVersion", "()Lcom/badlogic/gdx/graphics/glutils/GLVersion;" },
	{ "getPpiX", "()F" },
	{ "getPpiY", "()F" },
	{ "getPpcX", "()F" },
	{ "getPpcY", "()F" },
	{ "getDensity", "()F" },
	{ "supportsDisplayModeChange", "()Z" },
	{ "getPrimaryMonitor", "()Lcom/badlogic/gdx/Graphics$Monitor;" },
	{ "getMonitor", "()Lcom/badlogic/gdx/Graphics$Monitor;" },
	{ "getMonitors", "()[Lcom/badlogic/gdx/Graphics$Monitor;" },
	{ "getDisplayModes", "()[Lcom/badlogic/gdx/Graphics$DisplayMode;" },
	{ "getDisplayModes", "(Lcom/badlogic/gdx/Graphics$Monitor;)[Lcom/badlogic/gdx/Graphics$DisplayMode;" },
	{ "getDisplayMode", "()Lcom/badlogic/gdx/Graphics$DisplayMode;" },
	{ "getDisplayMode", "(Lcom/badlogic/gdx/Graphics$Monitor;)Lcom/badlogic/gdx/Graphics$DisplayMode;" },
	{ "setFullscreenMode", "(Lcom/badlogic/gdx/Graphics$DisplayMode;)Z" },
	{ "setWindowedMode", "(II)Z" },
	{ "setTitle", "(Ljava/lang/String;)V" },
	{ "setUndecorated", "(Z)V" },
	{ "setResizable", "(Z)V" },
	{ "setVSync", "(Z)V" },
	{ "setForegroundFPS", "(I)V" },
	{ "getBufferFormat", "()Lcom/badlogic/gdx/Graphics$BufferFormat;" },
	{ "supportsExtension", "(Ljava/lang/String;)Z" },
	{ "setContinuousRendering", "(Z)V" },
	{ "isContinuousRendering", "()Z" },
	{ "requestRendering", "()V" },
	{ "isFullscreen", "()Z" },
	{ "newCursor", "(Lcom/badlogic/gdx/graphics/Pixmap;II)Lcom/badlogic/gdx/graphics/Cursor;" },
	{ "setCursor", "(Lcom/badlogic/gdx/graphics/Cursor;)V" },
	{ "setSystemCursor", "(Lcom/badlogic/gdx/graphics/Cursor$SystemCursor;)V" },
	{ "resetTime", "()V" },
	{ "update", "()V" },
};

static jclass innerClasses[] {
	&class_com_thelogicmaster_switchgdx_SwitchGraphics$SwitchMonitor,
	&class_com_thelogicmaster_switchgdx_SwitchGraphics$SwitchDisplayMode,
};

static FieldMetadata fields[] {
	{ "bufferFormat", &class_com_badlogic_gdx_Graphics$BufferFormat, offsetof(com_thelogicmaster_switchgdx_SwitchGraphics, F_bufferFormat), "Lcom/badlogic/gdx/Graphics$BufferFormat;", 18 },
	{ "glVersion", &class_com_badlogic_gdx_graphics_glutils_GLVersion, offsetof(com_thelogicmaster_switchgdx_SwitchGraphics, F_glVersion), "Lcom/badlogic/gdx/graphics/glutils/GLVersion;", 18 },
	{ "extensions", &class_java_lang_String, offsetof(com_thelogicmaster_switchgdx_SwitchGraphics, F_extensions), "Ljava/lang/String;", 18 },
	{ "time", &class_float, offsetof(com_thelogicmaster_switchgdx_SwitchGraphics, F_time), "F", 2 },
	{ "deltaTime", &class_float, offsetof(com_thelogicmaster_switchgdx_SwitchGraphics, F_deltaTime), "F", 2 },
	{ "frameId", &class_long, offsetof(com_thelogicmaster_switchgdx_SwitchGraphics, F_frameId), "J", 2 },
	{ "frames", &class_int, offsetof(com_thelogicmaster_switchgdx_SwitchGraphics, F_frames), "I", 2 },
	{ "previousTime", &class_long, offsetof(com_thelogicmaster_switchgdx_SwitchGraphics, F_previousTime), "J", 2 },
	{ "fps", &class_int, offsetof(com_thelogicmaster_switchgdx_SwitchGraphics, F_fps), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_thelogicmaster_switchgdx_SwitchGraphics, 0, "()V", 1 },
	{ "resetTime", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_resetTime, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_resetTime, "()V", 0 },
	{ "update", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_update, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_update, "()V", 0 },
	{ "isGL30Available", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_isGL30Available_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_isGL30Available_R_boolean, "()Z", 1 },
	{ "isGL31Available", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_isGL31Available_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_isGL31Available_R_boolean, "()Z", 1 },
	{ "isGL32Available", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_isGL32Available_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_isGL32Available_R_boolean, "()Z", 1 },
	{ "getGL20", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getGL20_R_com_badlogic_gdx_graphics_GL20, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getGL20_R_com_badlogic_gdx_graphics_GL20, "()Lcom/badlogic/gdx/graphics/GL20;", 1 },
	{ "getGL30", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getGL30_R_com_badlogic_gdx_graphics_GL30, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getGL30_R_com_badlogic_gdx_graphics_GL30, "()Lcom/badlogic/gdx/graphics/GL30;", 1 },
	{ "getGL31", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getGL31_R_com_badlogic_gdx_graphics_GL31, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getGL31_R_com_badlogic_gdx_graphics_GL31, "()Lcom/badlogic/gdx/graphics/GL31;", 1 },
	{ "getGL32", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getGL32_R_com_badlogic_gdx_graphics_GL32, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getGL32_R_com_badlogic_gdx_graphics_GL32, "()Lcom/badlogic/gdx/graphics/GL32;", 1 },
	{ "setGL20", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_setGL20_com_badlogic_gdx_graphics_GL20, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_setGL20_com_badlogic_gdx_graphics_GL20, "(Lcom/badlogic/gdx/graphics/GL20;)V", 1 },
	{ "setGL30", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_setGL30_com_badlogic_gdx_graphics_GL30, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_setGL30_com_badlogic_gdx_graphics_GL30, "(Lcom/badlogic/gdx/graphics/GL30;)V", 1 },
	{ "setGL31", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_setGL31_com_badlogic_gdx_graphics_GL31, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_setGL31_com_badlogic_gdx_graphics_GL31, "(Lcom/badlogic/gdx/graphics/GL31;)V", 1 },
	{ "setGL32", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_setGL32_com_badlogic_gdx_graphics_GL32, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_setGL32_com_badlogic_gdx_graphics_GL32, "(Lcom/badlogic/gdx/graphics/GL32;)V", 1 },
	{ "getWidth", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getWidth_R_int, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getWidth_R_int, "()I", 257 },
	{ "getHeight", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getHeight_R_int, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getHeight_R_int, "()I", 257 },
	{ "getBackBufferWidth", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getBackBufferWidth_R_int, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getBackBufferWidth_R_int, "()I", 1 },
	{ "getBackBufferHeight", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getBackBufferHeight_R_int, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getBackBufferHeight_R_int, "()I", 1 },
	{ "getSafeInsetLeft", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getSafeInsetLeft_R_int, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getSafeInsetLeft_R_int, "()I", 1 },
	{ "getSafeInsetTop", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getSafeInsetTop_R_int, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getSafeInsetTop_R_int, "()I", 1 },
	{ "getSafeInsetBottom", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getSafeInsetBottom_R_int, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getSafeInsetBottom_R_int, "()I", 1 },
	{ "getSafeInsetRight", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getSafeInsetRight_R_int, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getSafeInsetRight_R_int, "()I", 1 },
	{ "getFrameId", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getFrameId_R_long, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getFrameId_R_long, "()J", 1 },
	{ "getDeltaTime", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getDeltaTime_R_float, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getDeltaTime_R_float, "()F", 1 },
	{ "getFramesPerSecond", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getFramesPerSecond_R_int, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getFramesPerSecond_R_int, "()I", 1 },
	{ "getType", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getType_R_com_badlogic_gdx_Graphics$GraphicsType, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getType_R_com_badlogic_gdx_Graphics$GraphicsType, "()Lcom/badlogic/gdx/Graphics$GraphicsType;", 1 },
	{ "getGLVersion", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getGLVersion_R_com_badlogic_gdx_graphics_glutils_GLVersion, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getGLVersion_R_com_badlogic_gdx_graphics_glutils_GLVersion, "()Lcom/badlogic/gdx/graphics/glutils/GLVersion;", 1 },
	{ "getPpiX", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getPpiX_R_float, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getPpiX_R_float, "()F", 1 },
	{ "getPpiY", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getPpiY_R_float, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getPpiY_R_float, "()F", 1 },
	{ "getPpcX", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getPpcX_R_float, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getPpcX_R_float, "()F", 1 },
	{ "getPpcY", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getPpcY_R_float, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getPpcY_R_float, "()F", 1 },
	{ "supportsDisplayModeChange", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_supportsDisplayModeChange_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_supportsDisplayModeChange_R_boolean, "()Z", 1 },
	{ "getPrimaryMonitor", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getPrimaryMonitor_R_com_badlogic_gdx_Graphics$Monitor, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getPrimaryMonitor_R_com_badlogic_gdx_Graphics$Monitor, "()Lcom/badlogic/gdx/Graphics$Monitor;", 1 },
	{ "getMonitor", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getMonitor_R_com_badlogic_gdx_Graphics$Monitor, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getMonitor_R_com_badlogic_gdx_Graphics$Monitor, "()Lcom/badlogic/gdx/Graphics$Monitor;", 1 },
	{ "getMonitors", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getMonitors_R_Array1_com_badlogic_gdx_Graphics$Monitor, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getMonitors_R_Array1_com_badlogic_gdx_Graphics$Monitor, "()[Lcom/badlogic/gdx/Graphics$Monitor;", 1 },
	{ "getDisplayModes", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getDisplayModes_R_Array1_com_badlogic_gdx_Graphics$DisplayMode, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getDisplayModes_R_Array1_com_badlogic_gdx_Graphics$DisplayMode, "()[Lcom/badlogic/gdx/Graphics$DisplayMode;", 1 },
	{ "getDisplayModes", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getDisplayModes_com_badlogic_gdx_Graphics$Monitor_R_Array1_com_badlogic_gdx_Graphics$DisplayMode, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getDisplayModes_com_badlogic_gdx_Graphics$Monitor_R_Array1_com_badlogic_gdx_Graphics$DisplayMode, "(Lcom/badlogic/gdx/Graphics$Monitor;)[Lcom/badlogic/gdx/Graphics$DisplayMode;", 1 },
	{ "getDisplayMode", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getDisplayMode_R_com_badlogic_gdx_Graphics$DisplayMode, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getDisplayMode_R_com_badlogic_gdx_Graphics$DisplayMode, "()Lcom/badlogic/gdx/Graphics$DisplayMode;", 1 },
	{ "getDisplayMode", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getDisplayMode_com_badlogic_gdx_Graphics$Monitor_R_com_badlogic_gdx_Graphics$DisplayMode, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getDisplayMode_com_badlogic_gdx_Graphics$Monitor_R_com_badlogic_gdx_Graphics$DisplayMode, "(Lcom/badlogic/gdx/Graphics$Monitor;)Lcom/badlogic/gdx/Graphics$DisplayMode;", 1 },
	{ "setFullscreenMode", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_setFullscreenMode_com_badlogic_gdx_Graphics$DisplayMode_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_setFullscreenMode_com_badlogic_gdx_Graphics$DisplayMode_R_boolean, "(Lcom/badlogic/gdx/Graphics$DisplayMode;)Z", 1 },
	{ "setWindowedMode", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_setWindowedMode_int_int_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_setWindowedMode_int_int_R_boolean, "(II)Z", 1 },
	{ "setTitle", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_setTitle_java_lang_String, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_setTitle_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "setUndecorated", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_setUndecorated_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_setUndecorated_boolean, "(Z)V", 1 },
	{ "setResizable", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_setResizable_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_setResizable_boolean, "(Z)V", 1 },
	{ "setVSync", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_setVSync_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_setVSync_boolean, "(Z)V", 1 },
	{ "setForegroundFPS", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_setForegroundFPS_int, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_setForegroundFPS_int, "(I)V", 1 },
	{ "getBufferFormat", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_getBufferFormat_R_com_badlogic_gdx_Graphics$BufferFormat, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getBufferFormat_R_com_badlogic_gdx_Graphics$BufferFormat, "()Lcom/badlogic/gdx/Graphics$BufferFormat;", 1 },
	{ "supportsExtension", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_supportsExtension_java_lang_String_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_supportsExtension_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "setContinuousRendering", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_setContinuousRendering_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_setContinuousRendering_boolean, "(Z)V", 1 },
	{ "isContinuousRendering", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_isContinuousRendering_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_isContinuousRendering_R_boolean, "()Z", 1 },
	{ "requestRendering", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_requestRendering, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_requestRendering, "()V", 1 },
	{ "isFullscreen", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_isFullscreen_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_isFullscreen_R_boolean, "()Z", 1 },
	{ "newCursor", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_newCursor_com_badlogic_gdx_graphics_Pixmap_int_int_R_com_badlogic_gdx_graphics_Cursor, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_newCursor_com_badlogic_gdx_graphics_Pixmap_int_int_R_com_badlogic_gdx_graphics_Cursor, "(Lcom/badlogic/gdx/graphics/Pixmap;II)Lcom/badlogic/gdx/graphics/Cursor;", 1 },
	{ "setCursor", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_setCursor_com_badlogic_gdx_graphics_Cursor, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_setCursor_com_badlogic_gdx_graphics_Cursor, "(Lcom/badlogic/gdx/graphics/Cursor;)V", 1 },
	{ "setSystemCursor", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchGraphics_setSystemCursor_com_badlogic_gdx_graphics_Cursor$SystemCursor, VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_setSystemCursor_com_badlogic_gdx_graphics_Cursor$SystemCursor, "(Lcom/badlogic/gdx/graphics/Cursor$SystemCursor;)V", 1 },
};

Class class_com_thelogicmaster_switchgdx_SwitchGraphics{
		.nativeName = (intptr_t) "com/thelogicmaster/switchgdx/SwitchGraphics",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_AbstractGraphics,
		.size = sizeof(com_thelogicmaster_switchgdx_SwitchGraphics),
		.classVtable = (intptr_t) vtable_com_thelogicmaster_switchgdx_SwitchGraphics,
		.staticInitializer = (intptr_t) clinit_com_thelogicmaster_switchgdx_SwitchGraphics,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_thelogicmaster_switchgdx_SwitchGraphics,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 55,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 68,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_thelogicmaster_switchgdx_SwitchGraphics = registerClass(&class_com_thelogicmaster_switchgdx_SwitchGraphics);

}

