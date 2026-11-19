#include "com/badlogic/gdx/graphics/glutils/GLVersion.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/Application_ApplicationType.h"
#include "com/badlogic/gdx/Application.h"
#include "com/badlogic/gdx/graphics/glutils/GLVersion.h"
#include "com/badlogic/gdx/Gdx.h"
#include "java/util/regex/Matcher.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/regex/Pattern.h"
#include "java/lang/NumberFormatException.h"
#include "com/badlogic/gdx/graphics/glutils/GLVersion_Type.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_glutils_GLVersion(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (com_badlogic_gdx_graphics_glutils_GLVersion *) object;
	if (self->F_versionString)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_versionString)->clazz)->markFunction)((jobject) self->F_versionString, mark, depth + 1);
	if (self->F_vendorString)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vendorString)->clazz)->markFunction)((jobject) self->F_vendorString, mark, depth + 1);
	if (self->F_rendererString)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rendererString)->clazz)->markFunction)((jobject) self->F_rendererString, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_TAG)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_TAG)->clazz)->markFunction)((jobject) self->F_TAG, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_glutils_GLVersion(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_glutils_GLVersion_com_badlogic_gdx_Application$ApplicationType_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/GLVersion:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_GLVersion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(39);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(37);
	((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_TAG = (jref) (((jobject) createStringLiteral(ctx, u8"GLVersion"_j)));
	LINE_NUMBER(40);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_Android;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_GLVersion$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_GLVersion$Type_GLES;
	((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(42);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_iOS;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_GLVersion$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_GLVersion$Type_GLES;
	((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(44);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_Desktop;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_GLVersion$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_GLVersion$Type_OpenGL;
	((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	goto label_5;
	}
label_8:;
	{
	LINE_NUMBER(46);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_Applet;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_GLVersion$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_GLVersion$Type_OpenGL;
	((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	goto label_5;
	}
label_10:;
	{
	LINE_NUMBER(48);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_WebGL;
	if (sp[0].o != sp[1].o) goto label_12;
	}
	{
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_GLVersion$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_GLVersion$Type_WebGL;
	((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	goto label_5;
	}
label_12:;
	{
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_GLVersion$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_GLVersion$Type_NONE;
	((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_graphics_glutils_GLVersion$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_GLVersion$Type_GLES;
	if (sp[0].o != sp[1].o) goto label_14;
	}
	{
	LINE_NUMBER(55);
	M_com_badlogic_gdx_graphics_glutils_GLVersion_extractVersion_java_lang_String_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"OpenGL ES (\\d(\\.\\d){0,2})"_j))), (frame[2].o));
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_graphics_glutils_GLVersion$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_GLVersion$Type_WebGL;
	if (sp[0].o != sp[1].o) goto label_17;
	}
	{
	LINE_NUMBER(58);
	M_com_badlogic_gdx_graphics_glutils_GLVersion_extractVersion_java_lang_String_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"WebGL (\\d(\\.\\d){0,2})"_j))), (frame[2].o));
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_graphics_glutils_GLVersion$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_GLVersion$Type_OpenGL;
	if (sp[0].o != sp[1].o) goto label_19;
	}
	{
	LINE_NUMBER(61);
	M_com_badlogic_gdx_graphics_glutils_GLVersion_extractVersion_java_lang_String_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"(\\d(\\.\\d){0,2})"_j))), (frame[2].o));
	goto label_16;
	}
label_19:;
	{
	LINE_NUMBER(63);
	((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_majorVersion = (jint(-1));
	LINE_NUMBER(64);
	((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_minorVersion = (jint(-1));
	LINE_NUMBER(65);
	((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_releaseVersion = (jint(-1));
	LINE_NUMBER(66);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(67);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_16:;
	{
	LINE_NUMBER(69);
	((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_versionString = (jref) (frame[2].o);
	LINE_NUMBER(70);
	((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_vendorString = (jref) (frame[3].o);
	LINE_NUMBER(71);
	((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_rendererString = (jref) (frame[4].o);
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_GLVersion_extractVersion_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/GLVersion:extractVersion", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(76);
	sp[0].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, (frame[3].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(77);
	jint temp0 = (jint)((func_java_util_regex_Matcher_find_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_regex_Matcher_find_R_boolean])(ctx, (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(78);
	if ((frame[5].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, (frame[4].o), (jint(1)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(80);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"\\."_j))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_GLVersion_parseInt_java_lang_String_int_R_int(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(0)))), (jint(2)));
	((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK(sp[0].o))->F_majorVersion = temp0;
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((((jarray) nullCheck(ctx, (frame[7].o)))->length) >= (jint(2))) goto label_9;
	}
	INST_ICONST(0);
	goto label_10;
label_9:;
	{
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_GLVersion_parseInt_java_lang_String_int_R_int(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(1)))), (jint(0)));
	sp[0].i = temp0;
	sp += 1;
	}
label_10:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK(sp[0].o))->F_minorVersion = sp[1].i;
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((((jarray) nullCheck(ctx, (frame[7].o)))->length) >= (jint(3))) goto label_12;
	}
	INST_ICONST(0);
	goto label_13;
label_12:;
	{
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_GLVersion_parseInt_java_lang_String_int_R_int(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(2)))), (jint(0)));
	sp[0].i = temp0;
	sp += 1;
	}
label_13:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK(sp[0].o))->F_releaseVersion = sp[1].i;
	LINE_NUMBER(84);
	goto label_15;
	}
label_4:;
	{
	LINE_NUMBER(85);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"GLVersion"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Invalid version string: "_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[2].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	((func_com_badlogic_gdx_Application_log_java_lang_String_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_log_java_lang_String_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(86);
	((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_majorVersion = (jint(2));
	LINE_NUMBER(87);
	((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_minorVersion = (jint(0));
	LINE_NUMBER(88);
	((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_releaseVersion = (jint(0));
	}
label_15:;
	LINE_NUMBER(90);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_GLVersion_parseInt_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/GLVersion:parseInt", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(95);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(96);
	frame[3].o = sp[0].o;
	LINE_NUMBER(97);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"libGDX GL"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Error parsing number: "_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[1].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8", assuming: "_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[2].i));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	((func_com_badlogic_gdx_Application_error_java_lang_String_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_error_java_lang_String_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_GLVersion_getType_R_com_badlogic_gdx_graphics_glutils_GLVersion$Type(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/GLVersion:getType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_GLVersion_getMajorVersion_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/GLVersion:getMajorVersion", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_majorVersion);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_GLVersion_getMinorVersion_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/GLVersion:getMinorVersion", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_minorVersion);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_GLVersion_getReleaseVersion_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/GLVersion:getReleaseVersion", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_releaseVersion);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_GLVersion_getVersionString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/GLVersion:getVersionString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_versionString;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_GLVersion_getVendorString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/GLVersion:getVendorString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_vendorString;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_GLVersion_getRendererString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/GLVersion:getRendererString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_rendererString;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_glutils_GLVersion_isVersionEqualToOrHigher_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/GLVersion:isVersionEqualToOrHigher", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(145);
	if (((jint)((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_majorVersion) > (frame[1].i)) goto label_1;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_majorVersion) != (frame[1].i)) goto label_2;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_minorVersion) < (frame[2].i)) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_GLVersion_getDebugVersionString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/GLVersion:getDebugVersionString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(150);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Type: "_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\nVersion: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_majorVersion));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_minorVersion));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_releaseVersion));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\nVendor: "_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_vendorString;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\nRenderer: "_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_GLVersion *) NULL_CHECK((frame[0].o)))->F_rendererString;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_glutils_GLVersion[] {
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
	(void *) M_com_badlogic_gdx_graphics_glutils_GLVersion_extractVersion_java_lang_String_java_lang_String,
	(void *) M_com_badlogic_gdx_graphics_glutils_GLVersion_parseInt_java_lang_String_int_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_GLVersion_getType_R_com_badlogic_gdx_graphics_glutils_GLVersion$Type,
	(void *) M_com_badlogic_gdx_graphics_glutils_GLVersion_getMajorVersion_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_GLVersion_getMinorVersion_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_GLVersion_getReleaseVersion_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_GLVersion_getVersionString_R_java_lang_String,
	(void *) M_com_badlogic_gdx_graphics_glutils_GLVersion_getVendorString_R_java_lang_String,
	(void *) M_com_badlogic_gdx_graphics_glutils_GLVersion_getRendererString_R_java_lang_String,
	(void *) M_com_badlogic_gdx_graphics_glutils_GLVersion_isVersionEqualToOrHigher_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_GLVersion_getDebugVersionString_R_java_lang_String,
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
	{ "extractVersion", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "parseInt", "(Ljava/lang/String;I)I" },
	{ "getType", "()Lcom/badlogic/gdx/graphics/glutils/GLVersion$Type;" },
	{ "getMajorVersion", "()I" },
	{ "getMinorVersion", "()I" },
	{ "getReleaseVersion", "()I" },
	{ "getVersionString", "()Ljava/lang/String;" },
	{ "getVendorString", "()Ljava/lang/String;" },
	{ "getRendererString", "()Ljava/lang/String;" },
	{ "isVersionEqualToOrHigher", "(II)Z" },
	{ "getDebugVersionString", "()Ljava/lang/String;" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_glutils_GLVersion$Type,
};

static FieldMetadata fields[] {
	{ "majorVersion", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_GLVersion, F_majorVersion), "I", 2 },
	{ "minorVersion", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_GLVersion, F_minorVersion), "I", 2 },
	{ "releaseVersion", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_GLVersion, F_releaseVersion), "I", 2 },
	{ "versionString", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_glutils_GLVersion, F_versionString), "Ljava/lang/String;", 18 },
	{ "vendorString", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_glutils_GLVersion, F_vendorString), "Ljava/lang/String;", 18 },
	{ "rendererString", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_glutils_GLVersion, F_rendererString), "Ljava/lang/String;", 18 },
	{ "type", &class_com_badlogic_gdx_graphics_glutils_GLVersion$Type, offsetof(com_badlogic_gdx_graphics_glutils_GLVersion, F_type), "Lcom/badlogic/gdx/graphics/glutils/GLVersion$Type;", 18 },
	{ "TAG", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_glutils_GLVersion, F_TAG), "Ljava/lang/String;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_GLVersion_com_badlogic_gdx_Application$ApplicationType_java_lang_String_java_lang_String_java_lang_String, 0, "(Lcom/badlogic/gdx/Application$ApplicationType;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "extractVersion", (intptr_t) M_com_badlogic_gdx_graphics_glutils_GLVersion_extractVersion_java_lang_String_java_lang_String, VTABLE_com_badlogic_gdx_graphics_glutils_GLVersion_extractVersion_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 2 },
	{ "parseInt", (intptr_t) M_com_badlogic_gdx_graphics_glutils_GLVersion_parseInt_java_lang_String_int_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_GLVersion_parseInt_java_lang_String_int_R_int, "(Ljava/lang/String;I)I", 2 },
	{ "getType", (intptr_t) M_com_badlogic_gdx_graphics_glutils_GLVersion_getType_R_com_badlogic_gdx_graphics_glutils_GLVersion$Type, VTABLE_com_badlogic_gdx_graphics_glutils_GLVersion_getType_R_com_badlogic_gdx_graphics_glutils_GLVersion$Type, "()Lcom/badlogic/gdx/graphics/glutils/GLVersion$Type;", 1 },
	{ "getMajorVersion", (intptr_t) M_com_badlogic_gdx_graphics_glutils_GLVersion_getMajorVersion_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_GLVersion_getMajorVersion_R_int, "()I", 1 },
	{ "getMinorVersion", (intptr_t) M_com_badlogic_gdx_graphics_glutils_GLVersion_getMinorVersion_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_GLVersion_getMinorVersion_R_int, "()I", 1 },
	{ "getReleaseVersion", (intptr_t) M_com_badlogic_gdx_graphics_glutils_GLVersion_getReleaseVersion_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_GLVersion_getReleaseVersion_R_int, "()I", 1 },
	{ "getVersionString", (intptr_t) M_com_badlogic_gdx_graphics_glutils_GLVersion_getVersionString_R_java_lang_String, VTABLE_com_badlogic_gdx_graphics_glutils_GLVersion_getVersionString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getVendorString", (intptr_t) M_com_badlogic_gdx_graphics_glutils_GLVersion_getVendorString_R_java_lang_String, VTABLE_com_badlogic_gdx_graphics_glutils_GLVersion_getVendorString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getRendererString", (intptr_t) M_com_badlogic_gdx_graphics_glutils_GLVersion_getRendererString_R_java_lang_String, VTABLE_com_badlogic_gdx_graphics_glutils_GLVersion_getRendererString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "isVersionEqualToOrHigher", (intptr_t) M_com_badlogic_gdx_graphics_glutils_GLVersion_isVersionEqualToOrHigher_int_int_R_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_GLVersion_isVersionEqualToOrHigher_int_int_R_boolean, "(II)Z", 1 },
	{ "getDebugVersionString", (intptr_t) M_com_badlogic_gdx_graphics_glutils_GLVersion_getDebugVersionString_R_java_lang_String, VTABLE_com_badlogic_gdx_graphics_glutils_GLVersion_getDebugVersionString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_com_badlogic_gdx_graphics_glutils_GLVersion{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/glutils/GLVersion",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_glutils_GLVersion),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_glutils_GLVersion,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_GLVersion,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_glutils_GLVersion,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_glutils_GLVersion = registerClass(&class_com_badlogic_gdx_graphics_glutils_GLVersion);

}

