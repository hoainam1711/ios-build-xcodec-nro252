#include "com/badlogic/gdx/utils/SharedLibraryLoader.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "java/util/Random.h"
#include "java/lang/UnsupportedOperationException.h"
#include "com/badlogic/gdx/utils/SharedLibraryLoader.h"
#include "java/lang/CharSequence.h"
#include "java/io/InputStream.h"
#include "com/badlogic/gdx/utils/Architecture.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Os.h"
#include "com/badlogic/gdx/utils/Architecture_Bitness.h"
#include "java/io/Closeable.h"
#include "java/util/UUID.h"
#include "java/io/File.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_com_badlogic_gdx_utils_SharedLibraryLoader_os;
jobject SF_com_badlogic_gdx_utils_SharedLibraryLoader_bitness;
jobject SF_com_badlogic_gdx_utils_SharedLibraryLoader_architecture;
jbool SF_com_badlogic_gdx_utils_SharedLibraryLoader_isWindows;
jbool SF_com_badlogic_gdx_utils_SharedLibraryLoader_isLinux;
jbool SF_com_badlogic_gdx_utils_SharedLibraryLoader_isMac;
jbool SF_com_badlogic_gdx_utils_SharedLibraryLoader_isIos;
jbool SF_com_badlogic_gdx_utils_SharedLibraryLoader_isAndroid;
jbool SF_com_badlogic_gdx_utils_SharedLibraryLoader_isARM;
jbool SF_com_badlogic_gdx_utils_SharedLibraryLoader_is64Bit;

void mark_com_badlogic_gdx_utils_SharedLibraryLoader(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_utils_SharedLibraryLoader_os)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_SharedLibraryLoader_os)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_SharedLibraryLoader_os, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_SharedLibraryLoader_bitness)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_SharedLibraryLoader_bitness)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_SharedLibraryLoader_bitness, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_SharedLibraryLoader_architecture)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_SharedLibraryLoader_architecture)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_SharedLibraryLoader_architecture, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_utils_SharedLibraryLoader *) object;
}

void init_com_badlogic_gdx_utils_SharedLibraryLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SharedLibraryLoader:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(26);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_SharedLibraryLoader_randomUUID_R_java_lang_String(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SharedLibraryLoader:randomUUID", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	{
	LINE_NUMBER(30);
	clinit_java_util_UUID(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_UUID);
	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_MathUtils_random;
	jlong temp0 = (jlong)((func_java_util_Random_nextLong_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Random_nextLong_R_long])(ctx, sp[1].o);
	clinit_com_badlogic_gdx_math_MathUtils(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_MathUtils_random;
	jlong temp1 = (jlong)((func_java_util_Random_nextLong_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Random_nextLong_R_long])(ctx, sp[1].o);
	init_java_util_UUID_long_long(ctx, sp[0].o, temp0, temp1);
	sp[0].o = (jobject)((func_java_util_UUID_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_UUID_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_SharedLibraryLoader_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SharedLibraryLoader:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_SharedLibraryLoader_crc_java_io_InputStream_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SharedLibraryLoader:crc", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_SharedLibraryLoader_mapLibraryName_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SharedLibraryLoader:mapLibraryName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(42);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_SharedLibraryLoader_load_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SharedLibraryLoader:load", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	SM_java_lang_System_loadLibrary_java_lang_String(ctx, (frame[1].o));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_R_java_io_File(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SharedLibraryLoader:extractFile", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(50);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_SharedLibraryLoader_extractFileTo_java_lang_String_java_io_File(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SharedLibraryLoader:extractFileTo", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(54);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_SharedLibraryLoader_setLoaded_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SharedLibraryLoader:setLoaded", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_com_badlogic_gdx_utils_SharedLibraryLoader);

	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	frame[0].o = param0;
	LINE_NUMBER(59);
	popStackFrame(ctx, (jobject) &class_com_badlogic_gdx_utils_SharedLibraryLoader);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_utils_SharedLibraryLoader_isLoaded_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SharedLibraryLoader:isLoaded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_com_badlogic_gdx_utils_SharedLibraryLoader);

	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(62);
	popStackFrame(ctx, (jobject) &class_com_badlogic_gdx_utils_SharedLibraryLoader);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_SharedLibraryLoader_closeQuietly_java_io_Closeable(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SharedLibraryLoader:closeQuietly", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(66);
	if ((frame[0].o) == nullptr) goto label_5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(68);
	((func_java_io_Closeable_close) resolveInterfaceMethod(ctx, &class_java_io_Closeable, INDEX_java_io_Closeable_close, (frame[0].o)))(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(70);
	goto label_5;
label_2:;
	LINE_NUMBER(69);
	INST_ASTORE(1);
label_5:;
	LINE_NUMBER(73);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_utils_SharedLibraryLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/SharedLibraryLoader:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	{
	LINE_NUMBER(76);
	clinit_com_badlogic_gdx_utils_Architecture$Bitness(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Architecture$Bitness__32;
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	SF_com_badlogic_gdx_utils_SharedLibraryLoader_bitness = sp[0].o;
	LINE_NUMBER(77);
	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Architecture_x86;
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	SF_com_badlogic_gdx_utils_SharedLibraryLoader_architecture = sp[0].o;
	LINE_NUMBER(78);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.name"_j))));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Windows"_j))));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(79);
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Os_Windows;
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	SF_com_badlogic_gdx_utils_SharedLibraryLoader_os = sp[0].o;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.name"_j))));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Linux"_j))));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(81);
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Os_Linux;
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	SF_com_badlogic_gdx_utils_SharedLibraryLoader_os = sp[0].o;
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.name"_j))));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Mac"_j))));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(83);
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Os_MacOsX;
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	SF_com_badlogic_gdx_utils_SharedLibraryLoader_os = sp[0].o;
	goto label_5;
	}
label_8:;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.name"_j))));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"horizon"_j))));
	if (temp0 != 0) goto label_10;
	}
	{
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.name"_j))));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"uwp"_j))));
	if (temp0 == 0) goto label_5;
	}
label_10:;
	{
	LINE_NUMBER(85);
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Os_Android;
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	SF_com_badlogic_gdx_utils_SharedLibraryLoader_os = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.arch"_j))));
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"arm"_j))));
	if (temp0 != 0) goto label_11;
	}
	{
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.arch"_j))));
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"aarch64"_j))));
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.arch"_j))));
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"riscv"_j))));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(90);
	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Architecture_RISCV;
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	SF_com_badlogic_gdx_utils_SharedLibraryLoader_architecture = sp[0].o;
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.arch"_j))));
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"loongarch"_j))));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(92);
	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Architecture_LOONGARCH;
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	SF_com_badlogic_gdx_utils_SharedLibraryLoader_architecture = sp[0].o;
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(95);
	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Architecture_ARM;
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	SF_com_badlogic_gdx_utils_SharedLibraryLoader_architecture = sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.arch"_j))));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"64"_j))));
	if (temp0 != 0) goto label_17;
	}
	{
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.arch"_j))));
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"armv8"_j))));
	if (temp0 != 0) goto label_17;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.arch"_j))));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"128"_j))));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(100);
	clinit_com_badlogic_gdx_utils_Architecture$Bitness(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Architecture$Bitness__128;
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	SF_com_badlogic_gdx_utils_SharedLibraryLoader_bitness = sp[0].o;
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(103);
	clinit_com_badlogic_gdx_utils_Architecture$Bitness(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Architecture$Bitness__64;
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	SF_com_badlogic_gdx_utils_SharedLibraryLoader_bitness = sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"moe.platform.name"_j))));
	if (sp[0].o == nullptr) goto label_21;
	}
	INST_ICONST(1);
	goto label_22;
label_21:;
	INST_ICONST(0);
label_22:;
	{
	sp -= 1;
	frame[0].i = sp[0].i;
	LINE_NUMBER(107);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"java.runtime.name"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(108);
	if ((frame[1].o) == nullptr) goto label_25;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Android Runtime"_j))));
	if (temp0 == 0) goto label_25;
	}
	{
	LINE_NUMBER(109);
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Os_Android;
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	SF_com_badlogic_gdx_utils_SharedLibraryLoader_os = sp[0].o;
	LINE_NUMBER(110);
	clinit_com_badlogic_gdx_utils_Architecture$Bitness(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Architecture$Bitness__32;
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	SF_com_badlogic_gdx_utils_SharedLibraryLoader_bitness = sp[0].o;
	LINE_NUMBER(111);
	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Architecture_x86;
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	SF_com_badlogic_gdx_utils_SharedLibraryLoader_architecture = sp[0].o;
	}
label_25:;
	{
	LINE_NUMBER(114);
	if ((frame[0].i) != 0) goto label_29;
	}
	{
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_SharedLibraryLoader_os;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_Android;
	if (sp[0].o == sp[1].o) goto label_30;
	}
	{
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_SharedLibraryLoader_os;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_Windows;
	if (sp[0].o == sp[1].o) goto label_30;
	}
	{
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_SharedLibraryLoader_os;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_Linux;
	if (sp[0].o == sp[1].o) goto label_30;
	}
	{
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_SharedLibraryLoader_os;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_MacOsX;
	if (sp[0].o == sp[1].o) goto label_30;
	}
label_29:;
	{
	LINE_NUMBER(115);
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Os_IOS;
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	SF_com_badlogic_gdx_utils_SharedLibraryLoader_os = sp[0].o;
	LINE_NUMBER(116);
	clinit_com_badlogic_gdx_utils_Architecture$Bitness(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Architecture$Bitness__32;
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	SF_com_badlogic_gdx_utils_SharedLibraryLoader_bitness = sp[0].o;
	LINE_NUMBER(117);
	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Architecture_x86;
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	SF_com_badlogic_gdx_utils_SharedLibraryLoader_architecture = sp[0].o;
	}
label_30:;
	{
	LINE_NUMBER(120);
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_SharedLibraryLoader_os;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_Windows;
	if (sp[0].o != sp[1].o) goto label_33;
	}
	INST_ICONST(1);
	goto label_34;
label_33:;
	INST_ICONST(0);
label_34:;
	{
	sp -= 1;
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	SF_com_badlogic_gdx_utils_SharedLibraryLoader_isWindows = sp[0].i;
	LINE_NUMBER(121);
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_SharedLibraryLoader_os;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_Linux;
	if (sp[0].o != sp[1].o) goto label_36;
	}
	INST_ICONST(1);
	goto label_37;
label_36:;
	INST_ICONST(0);
label_37:;
	{
	sp -= 1;
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	SF_com_badlogic_gdx_utils_SharedLibraryLoader_isLinux = sp[0].i;
	LINE_NUMBER(122);
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_SharedLibraryLoader_os;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_MacOsX;
	if (sp[0].o != sp[1].o) goto label_39;
	}
	INST_ICONST(1);
	goto label_40;
label_39:;
	INST_ICONST(0);
label_40:;
	{
	sp -= 1;
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	SF_com_badlogic_gdx_utils_SharedLibraryLoader_isMac = sp[0].i;
	LINE_NUMBER(123);
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_SharedLibraryLoader_os;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_IOS;
	if (sp[0].o != sp[1].o) goto label_42;
	}
	INST_ICONST(1);
	goto label_43;
label_42:;
	INST_ICONST(0);
label_43:;
	{
	sp -= 1;
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	SF_com_badlogic_gdx_utils_SharedLibraryLoader_isIos = sp[0].i;
	LINE_NUMBER(124);
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_SharedLibraryLoader_os;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_Android;
	if (sp[0].o != sp[1].o) goto label_45;
	}
	INST_ICONST(1);
	goto label_46;
label_45:;
	INST_ICONST(0);
label_46:;
	{
	sp -= 1;
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	SF_com_badlogic_gdx_utils_SharedLibraryLoader_isAndroid = sp[0].i;
	LINE_NUMBER(125);
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_SharedLibraryLoader_architecture;
	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Architecture_ARM;
	if (sp[0].o != sp[1].o) goto label_48;
	}
	INST_ICONST(1);
	goto label_49;
label_48:;
	INST_ICONST(0);
label_49:;
	{
	sp -= 1;
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	SF_com_badlogic_gdx_utils_SharedLibraryLoader_isARM = sp[0].i;
	LINE_NUMBER(126);
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_SharedLibraryLoader_bitness;
	clinit_com_badlogic_gdx_utils_Architecture$Bitness(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Architecture$Bitness__64;
	if (sp[0].o != sp[1].o) goto label_51;
	}
	INST_ICONST(1);
	goto label_52;
label_51:;
	INST_ICONST(0);
label_52:;
	{
	sp -= 1;
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	SF_com_badlogic_gdx_utils_SharedLibraryLoader_is64Bit = sp[0].i;
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_SharedLibraryLoader[] {
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
	(void *) M_com_badlogic_gdx_utils_SharedLibraryLoader_crc_java_io_InputStream_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_SharedLibraryLoader_mapLibraryName_java_lang_String_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_SharedLibraryLoader_load_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_R_java_io_File,
	(void *) M_com_badlogic_gdx_utils_SharedLibraryLoader_extractFileTo_java_lang_String_java_io_File,
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
	{ "crc", "(Ljava/io/InputStream;)Ljava/lang/String;" },
	{ "mapLibraryName", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "load", "(Ljava/lang/String;)V" },
	{ "extractFile", "(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;" },
	{ "extractFileTo", "(Ljava/lang/String;Ljava/io/File;)V" },
};

static FieldMetadata fields[] {
	{ "os", &class_com_badlogic_gdx_utils_Os, (intptr_t) &SF_com_badlogic_gdx_utils_SharedLibraryLoader_os, "Lcom/badlogic/gdx/utils/Os;", 9 },
	{ "bitness", &class_com_badlogic_gdx_utils_Architecture$Bitness, (intptr_t) &SF_com_badlogic_gdx_utils_SharedLibraryLoader_bitness, "Lcom/badlogic/gdx/utils/Architecture$Bitness;", 9 },
	{ "architecture", &class_com_badlogic_gdx_utils_Architecture, (intptr_t) &SF_com_badlogic_gdx_utils_SharedLibraryLoader_architecture, "Lcom/badlogic/gdx/utils/Architecture;", 9 },
	{ "isWindows", &class_boolean, (intptr_t) &SF_com_badlogic_gdx_utils_SharedLibraryLoader_isWindows, "Z", 9 },
	{ "isLinux", &class_boolean, (intptr_t) &SF_com_badlogic_gdx_utils_SharedLibraryLoader_isLinux, "Z", 9 },
	{ "isMac", &class_boolean, (intptr_t) &SF_com_badlogic_gdx_utils_SharedLibraryLoader_isMac, "Z", 9 },
	{ "isIos", &class_boolean, (intptr_t) &SF_com_badlogic_gdx_utils_SharedLibraryLoader_isIos, "Z", 9 },
	{ "isAndroid", &class_boolean, (intptr_t) &SF_com_badlogic_gdx_utils_SharedLibraryLoader_isAndroid, "Z", 9 },
	{ "isARM", &class_boolean, (intptr_t) &SF_com_badlogic_gdx_utils_SharedLibraryLoader_isARM, "Z", 9 },
	{ "is64Bit", &class_boolean, (intptr_t) &SF_com_badlogic_gdx_utils_SharedLibraryLoader_is64Bit, "Z", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_SharedLibraryLoader, 0, "()V", 1 },
	{ "randomUUID", (intptr_t) SM_com_badlogic_gdx_utils_SharedLibraryLoader_randomUUID_R_java_lang_String, 0, "()Ljava/lang/String;", 8 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_SharedLibraryLoader_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "crc", (intptr_t) M_com_badlogic_gdx_utils_SharedLibraryLoader_crc_java_io_InputStream_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_SharedLibraryLoader_crc_java_io_InputStream_R_java_lang_String, "(Ljava/io/InputStream;)Ljava/lang/String;", 1 },
	{ "mapLibraryName", (intptr_t) M_com_badlogic_gdx_utils_SharedLibraryLoader_mapLibraryName_java_lang_String_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_SharedLibraryLoader_mapLibraryName_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_utils_SharedLibraryLoader_load_java_lang_String, VTABLE_com_badlogic_gdx_utils_SharedLibraryLoader_load_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "extractFile", (intptr_t) M_com_badlogic_gdx_utils_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_R_java_io_File, VTABLE_com_badlogic_gdx_utils_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_R_java_io_File, "(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;", 1 },
	{ "extractFileTo", (intptr_t) M_com_badlogic_gdx_utils_SharedLibraryLoader_extractFileTo_java_lang_String_java_io_File, VTABLE_com_badlogic_gdx_utils_SharedLibraryLoader_extractFileTo_java_lang_String_java_io_File, "(Ljava/lang/String;Ljava/io/File;)V", 1 },
	{ "setLoaded", (intptr_t) SM_com_badlogic_gdx_utils_SharedLibraryLoader_setLoaded_java_lang_String, 0, "(Ljava/lang/String;)V", 41 },
	{ "isLoaded", (intptr_t) SM_com_badlogic_gdx_utils_SharedLibraryLoader_isLoaded_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 41 },
	{ "closeQuietly", (intptr_t) SM_com_badlogic_gdx_utils_SharedLibraryLoader_closeQuietly_java_io_Closeable, 0, "(Ljava/io/Closeable;)V", 9 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_utils_SharedLibraryLoader, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_utils_SharedLibraryLoader{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/SharedLibraryLoader",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_SharedLibraryLoader),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_SharedLibraryLoader,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_SharedLibraryLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_SharedLibraryLoader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_SharedLibraryLoader = registerClass(&class_com_badlogic_gdx_utils_SharedLibraryLoader);

}

