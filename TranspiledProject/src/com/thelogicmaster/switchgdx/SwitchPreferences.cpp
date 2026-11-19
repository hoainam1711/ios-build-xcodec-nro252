#include "com/thelogicmaster/switchgdx/SwitchPreferences.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Boolean.h"
#include "java/util/HashMap.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/lang/Float.h"
#include "java/io/InputStream.h"
#include "java/io/BufferedOutputStream.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "java/util/Properties.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "java/io/Closeable.h"
#include "java/lang/Throwable.h"
#include "com/thelogicmaster/switchgdx/SwitchPreferences.h"
#include "com/badlogic/gdx/utils/StreamUtils.h"
#include "java/lang/Exception.h"
#include "java/util/Iterator.h"
#include "java/util/Map_Entry.h"
#include "java/lang/Long.h"
#include "java/util/Map.h"
#include "java/io/OutputStream.h"
#include "java/io/BufferedInputStream.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/Preferences.h"

extern "C" {


void mark_com_thelogicmaster_switchgdx_SwitchPreferences(jobject object, jint mark, jint depth) {
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
	auto self = (com_thelogicmaster_switchgdx_SwitchPreferences *) object;
	if (self->F_properties)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_properties)->clazz)->markFunction)((jobject) self->F_properties, mark, depth + 1);
	if (self->F_file)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_file)->clazz)->markFunction)((jobject) self->F_file, mark, depth + 1);
}

void clinit_com_thelogicmaster_switchgdx_SwitchPreferences(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_thelogicmaster_switchgdx_SwitchPreferences_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchPreferences:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchPreferences(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_java_util_Properties(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Properties);
	init_java_util_Properties(ctx, sp[1].o);
	((com_thelogicmaster_switchgdx_SwitchPreferences *) NULL_CHECK(sp[0].o))->F_properties = (jref) sp[1].o;
	LINE_NUMBER(21);
	((com_thelogicmaster_switchgdx_SwitchPreferences *) NULL_CHECK((frame[0].o)))->F_file = (jref) (frame[1].o);
	LINE_NUMBER(22);
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_exists_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_14;
	}
	LINE_NUMBER(23);
	popStackFrame(ctx);
	INST_RETURN();
label_14:;
	{
	LINE_NUMBER(24);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(26);
	clinit_java_io_BufferedInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_BufferedInputStream);
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream])(ctx, (frame[1].o));
	init_java_io_BufferedInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(27);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchPreferences *) NULL_CHECK((frame[0].o)))->F_properties;
	((func_java_util_Properties_load_java_io_InputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Properties_load_java_io_InputStream])(ctx, sp[0].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(31);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[2].o));
	LINE_NUMBER(32);
	goto label_18;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(28);
	frame[3].o = sp[0].o;
	LINE_NUMBER(29);
	((func_java_lang_Throwable_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Throwable_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(31);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[2].o));
	LINE_NUMBER(32);
	goto label_18;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(31);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[2].o));
	LINE_NUMBER(32);
	throwException(ctx, (frame[4].o));	}
label_18:;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchPreferences_putBoolean_java_lang_String_boolean_R_com_badlogic_gdx_Preferences(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchPreferences:putBoolean", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchPreferences *) NULL_CHECK((frame[0].o)))->F_properties;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Boolean_toString_boolean_R_java_lang_String(ctx, (frame[2].i));
	sp[0].o = (jobject)((func_java_util_Properties_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Properties_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchPreferences_putInteger_java_lang_String_int_R_com_badlogic_gdx_Preferences(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchPreferences:putInteger", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchPreferences *) NULL_CHECK((frame[0].o)))->F_properties;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Integer_toString_int_R_java_lang_String(ctx, (frame[2].i));
	sp[0].o = (jobject)((func_java_util_Properties_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Properties_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchPreferences_putLong_java_lang_String_long_R_com_badlogic_gdx_Preferences(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchPreferences:putLong", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchPreferences *) NULL_CHECK((frame[0].o)))->F_properties;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, (frame[2].l));
	sp[0].o = (jobject)((func_java_util_Properties_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Properties_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchPreferences_putFloat_java_lang_String_float_R_com_badlogic_gdx_Preferences(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchPreferences:putFloat", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchPreferences *) NULL_CHECK((frame[0].o)))->F_properties;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Float_toString_float_R_java_lang_String(ctx, (frame[2].f));
	sp[0].o = (jobject)((func_java_util_Properties_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Properties_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchPreferences_putString_java_lang_String_java_lang_String_R_com_badlogic_gdx_Preferences(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchPreferences:putString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchPreferences *) NULL_CHECK((frame[0].o)))->F_properties;
	sp[0].o = (jobject)((func_java_util_Properties_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Properties_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchPreferences_put_java_util_Map_R_com_badlogic_gdx_Preferences(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchPreferences:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((func_java_util_Map_entrySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_entrySet_R_java_util_Set, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(68);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Boolean)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	sp[2].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[2].o)))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[2].o)));
	sp[0].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchPreferences_putBoolean_java_lang_String_boolean_R_com_badlogic_gdx_Preferences) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_putBoolean_java_lang_String_boolean_R_com_badlogic_gdx_Preferences])(ctx, sp[0].o, sp[1].o, temp0);
	}
label_4:;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Integer)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	sp[2].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[2].o)))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[2].o)));
	sp[0].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchPreferences_putInteger_java_lang_String_int_R_com_badlogic_gdx_Preferences) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_putInteger_java_lang_String_int_R_com_badlogic_gdx_Preferences])(ctx, sp[0].o, sp[1].o, temp0);
	}
label_6:;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Long)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	sp[2].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	jlong temp0 = (jlong)((func_java_lang_Long_longValue_R_long) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Long, sp[2].o)))->vtable)[VTABLE_java_lang_Long_longValue_R_long])(ctx, (checkCast(ctx, &class_java_lang_Long, sp[2].o)));
	sp[0].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchPreferences_putLong_java_lang_String_long_R_com_badlogic_gdx_Preferences) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_putLong_java_lang_String_long_R_com_badlogic_gdx_Preferences])(ctx, sp[0].o, sp[1].o, temp0);
	}
label_8:;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	if ((isInstance(ctx, sp[0].o, &class_java_lang_String)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	sp[2].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchPreferences_putString_java_lang_String_java_lang_String_R_com_badlogic_gdx_Preferences) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_putString_java_lang_String_java_lang_String_R_com_badlogic_gdx_Preferences])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_java_lang_String, sp[2].o)));
	}
label_10:;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Float)) == 0) goto label_12;
	}
	{
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	sp[2].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, sp[2].o)))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, sp[2].o)));
	sp[0].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchPreferences_putFloat_java_lang_String_float_R_com_badlogic_gdx_Preferences) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_putFloat_java_lang_String_float_R_com_badlogic_gdx_Preferences])(ctx, sp[0].o, sp[1].o, temp0);
	}
label_12:;
	LINE_NUMBER(78);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchPreferences_getBoolean_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchPreferences:getBoolean", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	jint temp0 = (jint)((func_com_thelogicmaster_switchgdx_SwitchPreferences_getBoolean_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_getBoolean_java_lang_String_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_thelogicmaster_switchgdx_SwitchPreferences_getInteger_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchPreferences:getInteger", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(89);
	jint temp0 = (jint)((func_com_thelogicmaster_switchgdx_SwitchPreferences_getInteger_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_getInteger_java_lang_String_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_com_thelogicmaster_switchgdx_SwitchPreferences_getLong_java_lang_String_R_long(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchPreferences:getLong", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(94);
	jlong temp0 = (jlong)((func_com_thelogicmaster_switchgdx_SwitchPreferences_getLong_java_lang_String_long_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_getLong_java_lang_String_long_R_long])(ctx, (frame[0].o), (frame[1].o), (jlong(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_com_thelogicmaster_switchgdx_SwitchPreferences_getFloat_java_lang_String_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchPreferences:getFloat", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	jfloat temp0 = (jfloat)((func_com_thelogicmaster_switchgdx_SwitchPreferences_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_getFloat_java_lang_String_float_R_float])(ctx, (frame[0].o), (frame[1].o), (jfloat(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchPreferences_getString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchPreferences:getString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchPreferences_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchPreferences_getBoolean_java_lang_String_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchPreferences:getBoolean", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchPreferences *) NULL_CHECK((frame[0].o)))->F_properties;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Boolean_toString_boolean_R_java_lang_String(ctx, (frame[2].i));
	sp[0].o = (jobject)((func_java_util_Properties_getProperty_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Properties_getProperty_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jint temp0 = (jint)SM_java_lang_Boolean_parseBoolean_java_lang_String_R_boolean(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_thelogicmaster_switchgdx_SwitchPreferences_getInteger_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchPreferences:getInteger", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchPreferences *) NULL_CHECK((frame[0].o)))->F_properties;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Integer_toString_int_R_java_lang_String(ctx, (frame[2].i));
	sp[0].o = (jobject)((func_java_util_Properties_getProperty_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Properties_getProperty_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_com_thelogicmaster_switchgdx_SwitchPreferences_getLong_java_lang_String_long_R_long(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchPreferences:getLong", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchPreferences *) NULL_CHECK((frame[0].o)))->F_properties;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, (frame[2].l));
	sp[0].o = (jobject)((func_java_util_Properties_getProperty_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Properties_getProperty_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jlong temp0 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_R_long(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_com_thelogicmaster_switchgdx_SwitchPreferences_getFloat_java_lang_String_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchPreferences:getFloat", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchPreferences *) NULL_CHECK((frame[0].o)))->F_properties;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Float_toString_float_R_java_lang_String(ctx, (frame[2].f));
	sp[0].o = (jobject)((func_java_util_Properties_getProperty_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Properties_getProperty_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchPreferences_getString_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchPreferences:getString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchPreferences *) NULL_CHECK((frame[0].o)))->F_properties;
	sp[0].o = (jobject)((func_java_util_Properties_getProperty_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Properties_getProperty_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchPreferences_get_R_java_util_Map(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchPreferences:get", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(134);
	clinit_java_util_HashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(135);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchPreferences *) NULL_CHECK((frame[0].o)))->F_properties;
	sp[0].o = (jobject)((func_java_util_Properties_entrySet_R_java_util_Set) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Properties_entrySet_R_java_util_Set])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(136);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Boolean)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	sp[2].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	jint temp0 = (jint)SM_java_lang_Boolean_parseBoolean_java_lang_String_R_boolean(ctx, (checkCast(ctx, &class_java_lang_String, sp[2].o)));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp0);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_5:;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Integer)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	sp[2].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (checkCast(ctx, &class_java_lang_String, sp[2].o)));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_7:;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Long)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(141);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	sp[2].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	jlong temp0 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_R_long(ctx, (checkCast(ctx, &class_java_lang_String, sp[2].o)));
	sp[2].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, temp0);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_9:;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	if ((isInstance(ctx, sp[0].o, &class_java_lang_String)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(143);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	sp[2].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_11:;
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Float)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(145);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	sp[2].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, (checkCast(ctx, &class_java_lang_String, sp[2].o)));
	sp[2].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, temp0);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_13:;
	LINE_NUMBER(146);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchPreferences_contains_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchPreferences:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchPreferences *) NULL_CHECK((frame[0].o)))->F_properties;
	jint temp0 = (jint)((func_java_util_Properties_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Properties_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchPreferences_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchPreferences:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchPreferences *) NULL_CHECK((frame[0].o)))->F_properties;
	((func_java_util_Properties_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Properties_clear])(ctx, sp[0].o);
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchPreferences_flush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchPreferences:flush", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	{
	LINE_NUMBER(163);
	frame[1].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_7; } // goto label_4
	}
	{
	LINE_NUMBER(165);
	clinit_java_io_BufferedOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_BufferedOutputStream);
	sp[1].o = (jobject)((com_thelogicmaster_switchgdx_SwitchPreferences *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_write_boolean_R_java_io_OutputStream) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_write_boolean_R_java_io_OutputStream])(ctx, sp[1].o, (jint(0)));
	init_java_io_BufferedOutputStream_java_io_OutputStream(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(166);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchPreferences *) NULL_CHECK((frame[0].o)))->F_properties;
	((func_java_util_Properties_store_java_io_OutputStream_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Properties_store_java_io_OutputStream_java_lang_String])(ctx, sp[0].o, (frame[1].o), (jobject(nullptr)));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(170);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(171);
	goto label_11;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_4;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_4; }
	{
	sp -= 1;
	LINE_NUMBER(167);
	frame[2].o = sp[0].o;
	LINE_NUMBER(168);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error writing preferences: "_j))));
	sp[2].o = (jobject)((com_thelogicmaster_switchgdx_SwitchPreferences *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(170);
	INST_ASTORE(3);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(171);
	throwException(ctx, (frame[3].o));	}
label_11:;
	LINE_NUMBER(172);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchPreferences_remove_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchPreferences:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchPreferences *) NULL_CHECK((frame[0].o)))->F_properties;
	sp[0].o = (jobject)((func_java_util_Properties_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Properties_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_thelogicmaster_switchgdx_SwitchPreferences[] {
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
	(void *) M_com_thelogicmaster_switchgdx_SwitchPreferences_putBoolean_java_lang_String_boolean_R_com_badlogic_gdx_Preferences,
	(void *) M_com_thelogicmaster_switchgdx_SwitchPreferences_putInteger_java_lang_String_int_R_com_badlogic_gdx_Preferences,
	(void *) M_com_thelogicmaster_switchgdx_SwitchPreferences_putLong_java_lang_String_long_R_com_badlogic_gdx_Preferences,
	(void *) M_com_thelogicmaster_switchgdx_SwitchPreferences_putFloat_java_lang_String_float_R_com_badlogic_gdx_Preferences,
	(void *) M_com_thelogicmaster_switchgdx_SwitchPreferences_putString_java_lang_String_java_lang_String_R_com_badlogic_gdx_Preferences,
	(void *) M_com_thelogicmaster_switchgdx_SwitchPreferences_put_java_util_Map_R_com_badlogic_gdx_Preferences,
	(void *) M_com_thelogicmaster_switchgdx_SwitchPreferences_getBoolean_java_lang_String_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchPreferences_getInteger_java_lang_String_R_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchPreferences_getLong_java_lang_String_R_long,
	(void *) M_com_thelogicmaster_switchgdx_SwitchPreferences_getFloat_java_lang_String_R_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchPreferences_getString_java_lang_String_R_java_lang_String,
	(void *) M_com_thelogicmaster_switchgdx_SwitchPreferences_getBoolean_java_lang_String_boolean_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchPreferences_getInteger_java_lang_String_int_R_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchPreferences_getLong_java_lang_String_long_R_long,
	(void *) M_com_thelogicmaster_switchgdx_SwitchPreferences_getFloat_java_lang_String_float_R_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchPreferences_getString_java_lang_String_java_lang_String_R_java_lang_String,
	(void *) M_com_thelogicmaster_switchgdx_SwitchPreferences_get_R_java_util_Map,
	(void *) M_com_thelogicmaster_switchgdx_SwitchPreferences_contains_java_lang_String_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchPreferences_clear,
	(void *) M_com_thelogicmaster_switchgdx_SwitchPreferences_remove_java_lang_String,
	(void *) M_com_thelogicmaster_switchgdx_SwitchPreferences_flush,
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
	{ "putBoolean", "(Ljava/lang/String;Z)Lcom/badlogic/gdx/Preferences;" },
	{ "putInteger", "(Ljava/lang/String;I)Lcom/badlogic/gdx/Preferences;" },
	{ "putLong", "(Ljava/lang/String;J)Lcom/badlogic/gdx/Preferences;" },
	{ "putFloat", "(Ljava/lang/String;F)Lcom/badlogic/gdx/Preferences;" },
	{ "putString", "(Ljava/lang/String;Ljava/lang/String;)Lcom/badlogic/gdx/Preferences;" },
	{ "put", "(Ljava/util/Map;)Lcom/badlogic/gdx/Preferences;" },
	{ "getBoolean", "(Ljava/lang/String;)Z" },
	{ "getInteger", "(Ljava/lang/String;)I" },
	{ "getLong", "(Ljava/lang/String;)J" },
	{ "getFloat", "(Ljava/lang/String;)F" },
	{ "getString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "getBoolean", "(Ljava/lang/String;Z)Z" },
	{ "getInteger", "(Ljava/lang/String;I)I" },
	{ "getLong", "(Ljava/lang/String;J)J" },
	{ "getFloat", "(Ljava/lang/String;F)F" },
	{ "getString", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;" },
	{ "get", "()Ljava/util/Map;" },
	{ "contains", "(Ljava/lang/String;)Z" },
	{ "clear", "()V" },
	{ "remove", "(Ljava/lang/String;)V" },
	{ "flush", "()V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_Preferences, };

static FieldMetadata fields[] {
	{ "properties", &class_java_util_Properties, offsetof(com_thelogicmaster_switchgdx_SwitchPreferences, F_properties), "Ljava/util/Properties;", 18 },
	{ "file", &class_com_badlogic_gdx_files_FileHandle, offsetof(com_thelogicmaster_switchgdx_SwitchPreferences, F_file), "Lcom/badlogic/gdx/files/FileHandle;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_thelogicmaster_switchgdx_SwitchPreferences_com_badlogic_gdx_files_FileHandle, 0, "(Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "putBoolean", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchPreferences_putBoolean_java_lang_String_boolean_R_com_badlogic_gdx_Preferences, VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_putBoolean_java_lang_String_boolean_R_com_badlogic_gdx_Preferences, "(Ljava/lang/String;Z)Lcom/badlogic/gdx/Preferences;", 1 },
	{ "putInteger", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchPreferences_putInteger_java_lang_String_int_R_com_badlogic_gdx_Preferences, VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_putInteger_java_lang_String_int_R_com_badlogic_gdx_Preferences, "(Ljava/lang/String;I)Lcom/badlogic/gdx/Preferences;", 1 },
	{ "putLong", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchPreferences_putLong_java_lang_String_long_R_com_badlogic_gdx_Preferences, VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_putLong_java_lang_String_long_R_com_badlogic_gdx_Preferences, "(Ljava/lang/String;J)Lcom/badlogic/gdx/Preferences;", 1 },
	{ "putFloat", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchPreferences_putFloat_java_lang_String_float_R_com_badlogic_gdx_Preferences, VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_putFloat_java_lang_String_float_R_com_badlogic_gdx_Preferences, "(Ljava/lang/String;F)Lcom/badlogic/gdx/Preferences;", 1 },
	{ "putString", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchPreferences_putString_java_lang_String_java_lang_String_R_com_badlogic_gdx_Preferences, VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_putString_java_lang_String_java_lang_String_R_com_badlogic_gdx_Preferences, "(Ljava/lang/String;Ljava/lang/String;)Lcom/badlogic/gdx/Preferences;", 1 },
	{ "put", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchPreferences_put_java_util_Map_R_com_badlogic_gdx_Preferences, VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_put_java_util_Map_R_com_badlogic_gdx_Preferences, "(Ljava/util/Map;)Lcom/badlogic/gdx/Preferences;", 1 },
	{ "getBoolean", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchPreferences_getBoolean_java_lang_String_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_getBoolean_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "getInteger", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchPreferences_getInteger_java_lang_String_R_int, VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_getInteger_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "getLong", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchPreferences_getLong_java_lang_String_R_long, VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_getLong_java_lang_String_R_long, "(Ljava/lang/String;)J", 1 },
	{ "getFloat", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchPreferences_getFloat_java_lang_String_R_float, VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_getFloat_java_lang_String_R_float, "(Ljava/lang/String;)F", 1 },
	{ "getString", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchPreferences_getString_java_lang_String_R_java_lang_String, VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_getString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "getBoolean", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchPreferences_getBoolean_java_lang_String_boolean_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_getBoolean_java_lang_String_boolean_R_boolean, "(Ljava/lang/String;Z)Z", 1 },
	{ "getInteger", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchPreferences_getInteger_java_lang_String_int_R_int, VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_getInteger_java_lang_String_int_R_int, "(Ljava/lang/String;I)I", 1 },
	{ "getLong", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchPreferences_getLong_java_lang_String_long_R_long, VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_getLong_java_lang_String_long_R_long, "(Ljava/lang/String;J)J", 1 },
	{ "getFloat", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchPreferences_getFloat_java_lang_String_float_R_float, VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_getFloat_java_lang_String_float_R_float, "(Ljava/lang/String;F)F", 1 },
	{ "getString", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchPreferences_getString_java_lang_String_java_lang_String_R_java_lang_String, VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_getString_java_lang_String_java_lang_String_R_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "get", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchPreferences_get_R_java_util_Map, VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_get_R_java_util_Map, "()Ljava/util/Map;", 1 },
	{ "contains", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchPreferences_contains_java_lang_String_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_contains_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "clear", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchPreferences_clear, VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_clear, "()V", 1 },
	{ "flush", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchPreferences_flush, VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_flush, "()V", 1 },
	{ "remove", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchPreferences_remove_java_lang_String, VTABLE_com_thelogicmaster_switchgdx_SwitchPreferences_remove_java_lang_String, "(Ljava/lang/String;)V", 1 },
};

Class class_com_thelogicmaster_switchgdx_SwitchPreferences{
		.nativeName = (intptr_t) "com/thelogicmaster/switchgdx/SwitchPreferences",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_thelogicmaster_switchgdx_SwitchPreferences),
		.classVtable = (intptr_t) vtable_com_thelogicmaster_switchgdx_SwitchPreferences,
		.staticInitializer = (intptr_t) clinit_com_thelogicmaster_switchgdx_SwitchPreferences,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_thelogicmaster_switchgdx_SwitchPreferences,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 22,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 32,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_thelogicmaster_switchgdx_SwitchPreferences = registerClass(&class_com_thelogicmaster_switchgdx_SwitchPreferences);

}

