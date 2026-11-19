#include "com/badlogic/gdx/utils/I18NBundle.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/util/ArrayList.h"
#include "com/badlogic/gdx/utils/TextFormatter.h"
#include "java/io/InputStream.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "java/lang/NullPointerException.h"
#include "java/io/IOException.h"
#include "java/io/Closeable.h"
#include "java/io/Reader.h"
#include "java/lang/Throwable.h"
#include "java/util/Locale.h"
#include "com/badlogic/gdx/utils/StreamUtils.h"
#include "java/lang/Exception.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/utils/ObjectMap.h"
#include "com/badlogic/gdx/utils/I18NBundle.h"
#include "com/badlogic/gdx/utils/ObjectMap_Keys.h"
#include "java/lang/Object.h"
#include "java/util/MissingResourceException.h"
#include "java/util/LinkedHashSet.h"
#include "java/lang/Class.h"
#include "java/util/List.h"
#include "com/badlogic/gdx/utils/PropertiesUtils.h"

extern "C" {

jobject SF_com_badlogic_gdx_utils_I18NBundle_DEFAULT_ENCODING;
jbool SF_com_badlogic_gdx_utils_I18NBundle_simpleFormatter;
jbool SF_com_badlogic_gdx_utils_I18NBundle_exceptionOnMissingKey;

void mark_com_badlogic_gdx_utils_I18NBundle(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_utils_I18NBundle_DEFAULT_ENCODING)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_I18NBundle_DEFAULT_ENCODING)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_I18NBundle_DEFAULT_ENCODING, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_utils_I18NBundle *) object;
	if (self->F_parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parent)->clazz)->markFunction)((jobject) self->F_parent, mark, depth + 1);
	if (self->F_locale)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_locale)->clazz)->markFunction)((jobject) self->F_locale, mark, depth + 1);
	if (self->F_properties)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_properties)->clazz)->markFunction)((jobject) self->F_properties, mark, depth + 1);
	if (self->F_formatter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_formatter)->clazz)->markFunction)((jobject) self->F_formatter, mark, depth + 1);
}

void init_com_badlogic_gdx_utils_I18NBundle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/I18NBundle:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_I18NBundle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(66);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_utils_I18NBundle_getSimpleFormatter_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/I18NBundle:getSimpleFormatter", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_I18NBundle(ctx);
	{
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return (clinit_com_badlogic_gdx_utils_I18NBundle(ctx), (jint)SF_com_badlogic_gdx_utils_I18NBundle_simpleFormatter);
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_I18NBundle_setSimpleFormatter_boolean(jcontext ctx, jbool param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/I18NBundle:setSimpleFormatter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_I18NBundle(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(95);
	clinit_com_badlogic_gdx_utils_I18NBundle(ctx);
	SF_com_badlogic_gdx_utils_I18NBundle_simpleFormatter = (frame[0].i);
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_utils_I18NBundle_getExceptionOnMissingKey_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/I18NBundle:getExceptionOnMissingKey", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_I18NBundle(ctx);
	{
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return (clinit_com_badlogic_gdx_utils_I18NBundle(ctx), (jint)SF_com_badlogic_gdx_utils_I18NBundle_exceptionOnMissingKey);
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_I18NBundle_setExceptionOnMissingKey_boolean(jcontext ctx, jbool param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/I18NBundle:setExceptionOnMissingKey", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_I18NBundle(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(109);
	clinit_com_badlogic_gdx_utils_I18NBundle(ctx);
	SF_com_badlogic_gdx_utils_I18NBundle_exceptionOnMissingKey = (frame[0].i);
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_I18NBundle_createBundle_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_utils_I18NBundle(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/I18NBundle:createBundle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_I18NBundle(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Locale_getDefault_R_java_util_Locale(ctx);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_I18NBundle_createBundleImpl_com_badlogic_gdx_files_FileHandle_java_util_Locale_java_lang_String_R_com_badlogic_gdx_utils_I18NBundle(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"UTF-8"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_I18NBundle_createBundle_com_badlogic_gdx_files_FileHandle_java_util_Locale_R_com_badlogic_gdx_utils_I18NBundle(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/I18NBundle:createBundle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_I18NBundle(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_I18NBundle_createBundleImpl_com_badlogic_gdx_files_FileHandle_java_util_Locale_java_lang_String_R_com_badlogic_gdx_utils_I18NBundle(ctx, (frame[0].o), (frame[1].o), (((jobject) createStringLiteral(ctx, u8"UTF-8"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_I18NBundle_createBundle_com_badlogic_gdx_files_FileHandle_java_lang_String_R_com_badlogic_gdx_utils_I18NBundle(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/I18NBundle:createBundle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_I18NBundle(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(142);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Locale_getDefault_R_java_util_Locale(ctx);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_I18NBundle_createBundleImpl_com_badlogic_gdx_files_FileHandle_java_util_Locale_java_lang_String_R_com_badlogic_gdx_utils_I18NBundle(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_I18NBundle_createBundle_com_badlogic_gdx_files_FileHandle_java_util_Locale_java_lang_String_R_com_badlogic_gdx_utils_I18NBundle(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/I18NBundle:createBundle", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_I18NBundle(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_I18NBundle_createBundleImpl_com_badlogic_gdx_files_FileHandle_java_util_Locale_java_lang_String_R_com_badlogic_gdx_utils_I18NBundle(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_I18NBundle_createBundleImpl_com_badlogic_gdx_files_FileHandle_java_util_Locale_java_lang_String_R_com_badlogic_gdx_utils_I18NBundle(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/I18NBundle:createBundleImpl", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_I18NBundle(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(159);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_1;
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(161);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(162);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(163);
	frame[5].o = (frame[1].o);
	}
label_5:;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_I18NBundle_getCandidateLocales_java_util_Locale_R_java_util_List(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(169);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_I18NBundle_loadBundleChain_com_badlogic_gdx_files_FileHandle_java_lang_String_java_util_List_int_com_badlogic_gdx_utils_I18NBundle_R_com_badlogic_gdx_utils_I18NBundle(ctx, (frame[0].o), (frame[2].o), (frame[6].o), (jint(0)), (frame[4].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(172);
	if ((frame[3].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_I18NBundle_getLocale_R_java_util_Locale) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_I18NBundle_getLocale_R_java_util_Locale])(ctx, (frame[3].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(174);
	sp[0].o = frame[7].o;
	clinit_java_util_Locale(ctx);
	sp[1].o = (jobject)SF_java_util_Locale_ROOT;
	jint temp0 = (jint)((func_java_util_Locale_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Locale_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[8].i = temp0;
	LINE_NUMBER(176);
	if ((frame[8].i) == 0) goto label_12;
	}
	{
	jint temp0 = (jint)((func_java_util_Locale_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_Locale_equals_java_lang_Object_R_boolean])(ctx, (frame[7].o), (frame[1].o));
	if (temp0 == 0) goto label_13;
	}
	LINE_NUMBER(178);
	goto label_12;
label_13:;
	{
	LINE_NUMBER(180);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 != (jint(1))) goto label_15;
	}
	{
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), (jint(0)));
	jint temp0 = (jint)((func_java_util_Locale_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Locale_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_15;
	}
	LINE_NUMBER(182);
	goto label_12;
label_15:;
	{
	LINE_NUMBER(184);
	if ((frame[4].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(186);
	frame[4].o = (frame[3].o);
	}
label_8:;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_I18NBundle_getFallbackLocale_java_util_Locale_R_java_util_Locale(ctx, (frame[5].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(193);
	if ((frame[5].o) != nullptr) goto label_5;
	}
label_12:;
	{
	LINE_NUMBER(195);
	if ((frame[3].o) != nullptr) goto label_19;
	}
	{
	LINE_NUMBER(196);
	if ((frame[4].o) != nullptr) goto label_21;
	}
	{
	LINE_NUMBER(198);
	clinit_java_util_MissingResourceException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_MissingResourceException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Can't find bundle for base file handle "_j))));
	sp[2].o = frame[0].o;
	LINE_NUMBER(199);
	sp[2].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", locale "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[0].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"_"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[1].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	init_java_util_MissingResourceException_java_lang_String_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	throwException(ctx, sp[0].o);	}
label_21:;
	{
	LINE_NUMBER(203);
	frame[3].o = (frame[4].o);
	}
label_19:;
	{
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_I18NBundle_getCandidateLocales_java_util_Locale_R_java_util_List(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/I18NBundle:getCandidateLocales", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_I18NBundle(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((func_java_util_Locale_getLanguage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Locale_getLanguage_R_java_lang_String])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(259);
	sp[0].o = (jobject)((func_java_util_Locale_getCountry_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Locale_getCountry_R_java_lang_String])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(260);
	sp[0].o = (jobject)((func_java_util_Locale_getVariant_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Locale_getVariant_R_java_lang_String])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(262);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList_int(ctx, sp[0].o, (jint(4)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(263);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(264);
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, (frame[4].o)))(ctx, (frame[4].o), (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(266);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(267);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)((func_java_util_List_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_isEmpty_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	sp += 1;
	if (temp0 == 0) goto label_9;
	}
	INST_ALOAD(0);
	goto label_10;
label_9:;
	{
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	sp += 1;
	}
label_10:;
	POP_N(2); // Pop method args
	sp->i = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp++;
	INST_POP();
label_7:;
	{
	LINE_NUMBER(269);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(270);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)((func_java_util_List_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_isEmpty_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	sp += 1;
	if (temp0 == 0) goto label_13;
	}
	INST_ALOAD(0);
	goto label_14;
label_13:;
	{
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	}
label_14:;
	POP_N(2); // Pop method args
	sp->i = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp++;
	INST_POP();
label_11:;
	{
	LINE_NUMBER(272);
	sp[0].o = frame[4].o;
	clinit_java_util_Locale(ctx);
	sp[1].o = (jobject)SF_java_util_Locale_ROOT;
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(273);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_I18NBundle_getFallbackLocale_java_util_Locale_R_java_util_Locale(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/I18NBundle:getFallbackLocale", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_I18NBundle(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)SM_java_util_Locale_getDefault_R_java_util_Locale(ctx);
	frame[1].o = sp[0].o;
	LINE_NUMBER(291);
	jint temp0 = (jint)((func_java_util_Locale_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Locale_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	INST_ALOAD(1);
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_I18NBundle_loadBundleChain_com_badlogic_gdx_files_FileHandle_java_lang_String_java_util_List_int_com_badlogic_gdx_utils_I18NBundle_R_com_badlogic_gdx_utils_I18NBundle(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/I18NBundle:loadBundleChain", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_I18NBundle(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_java_util_Locale, sp[0].o));
	LINE_NUMBER(297);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(298);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == (temp1 - (jint(1)))) goto label_3;
	}
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_I18NBundle_loadBundleChain_com_badlogic_gdx_files_FileHandle_java_lang_String_java_util_List_int_com_badlogic_gdx_utils_I18NBundle_R_com_badlogic_gdx_utils_I18NBundle(ctx, (frame[0].o), (frame[1].o), (frame[2].o), ((frame[3].i) + (jint(1))), (frame[4].o));
	frame[6].o = sp[0].o;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(301);
	if ((frame[4].o) == nullptr) goto label_5;
	}
	{
	sp[0].o = frame[5].o;
	clinit_java_util_Locale(ctx);
	sp[1].o = (jobject)SF_java_util_Locale_ROOT;
	jint temp0 = (jint)((func_java_util_Locale_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Locale_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_5:;
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_I18NBundle_loadBundle_com_badlogic_gdx_files_FileHandle_java_lang_String_java_util_Locale_R_com_badlogic_gdx_utils_I18NBundle(ctx, (frame[0].o), (frame[1].o), (frame[5].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(307);
	if ((frame[7].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(308);
	((com_badlogic_gdx_utils_I18NBundle *) NULL_CHECK((frame[7].o)))->F_parent = (jref) (frame[6].o);
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_8:;
	{
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_I18NBundle_loadBundle_com_badlogic_gdx_files_FileHandle_java_lang_String_java_util_Locale_R_com_badlogic_gdx_utils_I18NBundle(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/I18NBundle:loadBundle", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	clinit_com_badlogic_gdx_utils_I18NBundle(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(317);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(318);
	frame[4].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_7; } // goto label_4
	}
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_I18NBundle_toFileHandle_com_badlogic_gdx_files_FileHandle_java_util_Locale_R_com_badlogic_gdx_files_FileHandle(ctx, (frame[0].o), (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(321);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_I18NBundle_checkFileExistence_com_badlogic_gdx_files_FileHandle_R_boolean(ctx, (frame[5].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(323);
	clinit_com_badlogic_gdx_utils_I18NBundle(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_I18NBundle);
	init_com_badlogic_gdx_utils_I18NBundle(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(326);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_reader_java_lang_String_R_java_io_Reader) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_reader_java_lang_String_R_java_io_Reader])(ctx, (frame[5].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(327);
	((func_com_badlogic_gdx_utils_I18NBundle_load_java_io_Reader) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_I18NBundle_load_java_io_Reader])(ctx, (frame[3].o), (frame[4].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(332);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[4].o));
	LINE_NUMBER(333);
	goto label_15;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_4;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_4; }
	{
	sp -= 1;
	LINE_NUMBER(329);
	frame[5].o = sp[0].o;
	LINE_NUMBER(330);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[5].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(332);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[4].o));
	LINE_NUMBER(333);
	throwException(ctx, (frame[6].o));	}
label_15:;
	{
	LINE_NUMBER(334);
	if ((frame[3].o) == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(335);
	M_com_badlogic_gdx_utils_I18NBundle_setLocale_java_util_Locale(ctx, (frame[3].o), (frame[2].o));
	}
label_18:;
	{
	LINE_NUMBER(338);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_utils_I18NBundle_checkFileExistence_com_badlogic_gdx_files_FileHandle_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/I18NBundle:checkFileExistence", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_I18NBundle(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(345);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream])(ctx, (frame[0].o));
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_close])(ctx, sp[0].o);
	LINE_NUMBER(346);
	jint temp0 = jint(1);
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(347);
	frame[1].o = sp[0].o;
	LINE_NUMBER(348);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_I18NBundle_load_java_io_Reader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/I18NBundle:load", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(359);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o);
	((com_badlogic_gdx_utils_I18NBundle *) NULL_CHECK(sp[0].o))->F_properties = (jref) sp[1].o;
	LINE_NUMBER(360);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_I18NBundle *) NULL_CHECK((frame[0].o)))->F_properties;
	SM_com_badlogic_gdx_utils_PropertiesUtils_load_com_badlogic_gdx_utils_ObjectMap_java_io_Reader(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(361);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_I18NBundle_toFileHandle_com_badlogic_gdx_files_FileHandle_java_util_Locale_R_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/I18NBundle:toFileHandle", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_I18NBundle(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(381);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String])(ctx, (frame[0].o));
	init_java_lang_StringBuilder_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(382);
	sp[0].o = frame[1].o;
	clinit_java_util_Locale(ctx);
	sp[1].o = (jobject)SF_java_util_Locale_ROOT;
	jint temp0 = (jint)((func_java_util_Locale_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Locale_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((func_java_util_Locale_getLanguage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Locale_getLanguage_R_java_lang_String])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(384);
	sp[0].o = (jobject)((func_java_util_Locale_getCountry_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Locale_getCountry_R_java_lang_String])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(385);
	sp[0].o = (jobject)((func_java_util_Locale_getVariant_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Locale_getVariant_R_java_lang_String])(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(387);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_7;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_7;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[5].o));
	if (temp0 != 0) goto label_2;
	}
label_7:;
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (95));
	LINE_NUMBER(389);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[5].o));
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(390);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (95));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (95));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	goto label_2;
	}
label_9:;
	{
	LINE_NUMBER(391);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (95));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].o));
	goto label_2;
	}
label_11:;
	{
	LINE_NUMBER(394);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[3].o));
	}
label_2:;
	{
	LINE_NUMBER(398);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8".properties"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_sibling_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_sibling_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_I18NBundle_getLocale_R_java_util_Locale(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/I18NBundle:getLocale", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(406);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_I18NBundle *) NULL_CHECK((frame[0].o)))->F_locale;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_I18NBundle_setLocale_java_util_Locale(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/I18NBundle:setLocale", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(413);
	((com_badlogic_gdx_utils_I18NBundle *) NULL_CHECK((frame[0].o)))->F_locale = (jref) (frame[1].o);
	LINE_NUMBER(414);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_TextFormatter(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_TextFormatter);
	sp[2].o = frame[1].o;
	jobject temp0 = sp[2].o;
	sp[2].o = sp[1].o;
	sp[3].o = temp0;
	sp += 4;
	if ((clinit_com_badlogic_gdx_utils_I18NBundle(ctx), (jint)SF_com_badlogic_gdx_utils_I18NBundle_simpleFormatter) != 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 5;
	init_com_badlogic_gdx_utils_TextFormatter_java_util_Locale_boolean(ctx, sp[1].o, sp[3].o, sp[4].i);
	((com_badlogic_gdx_utils_I18NBundle *) NULL_CHECK(sp[0].o))->F_formatter = (jref) sp[1].o;
	LINE_NUMBER(415);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_I18NBundle_get_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/I18NBundle:get", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_I18NBundle *) NULL_CHECK((frame[0].o)))->F_properties;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(427);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_I18NBundle *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_I18NBundle *) NULL_CHECK((frame[0].o)))->F_parent;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(429);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(430);
	if ((clinit_com_badlogic_gdx_utils_I18NBundle(ctx), (jint)SF_com_badlogic_gdx_utils_I18NBundle_exceptionOnMissingKey) == 0) goto label_6;
	}
	{
	LINE_NUMBER(431);
	clinit_java_util_MissingResourceException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_MissingResourceException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Can't find bundle key "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	init_java_util_MissingResourceException_java_lang_String_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(433);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"???"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"???"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(436);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_I18NBundle_keys_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/I18NBundle:keys", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(443);
	clinit_java_util_LinkedHashSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_LinkedHashSet);
	init_java_util_LinkedHashSet(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(444);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_I18NBundle *) NULL_CHECK((frame[0].o)))->F_properties;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_keys_R_com_badlogic_gdx_utils_ObjectMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_keys_R_com_badlogic_gdx_utils_ObjectMap$Keys])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(445);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(446);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap$Keys_iterator_R_com_badlogic_gdx_utils_ObjectMap$Keys) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_iterator_R_com_badlogic_gdx_utils_ObjectMap$Keys])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(447);
	jint temp0 = (jint)((func_java_util_Set_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_add_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[4].o));
	LINE_NUMBER(448);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(450);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/I18NBundle:format", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(462);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_I18NBundle *) NULL_CHECK((frame[0].o)))->F_formatter;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_TextFormatter_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_TextFormatter_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_I18NBundle_debug_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/I18NBundle:debug", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(470);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_I18NBundle *) NULL_CHECK((frame[0].o)))->F_properties;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_keys_R_com_badlogic_gdx_utils_ObjectMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_keys_R_com_badlogic_gdx_utils_ObjectMap$Keys])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(471);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(473);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap$Keys_iterator_R_com_badlogic_gdx_utils_ObjectMap$Keys) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_iterator_R_com_badlogic_gdx_utils_ObjectMap$Keys])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(474);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_I18NBundle *) NULL_CHECK((frame[0].o)))->F_properties;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[4].o), (frame[1].o));
	LINE_NUMBER(475);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(476);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_utils_I18NBundle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_utils_I18NBundle_DEFAULT_ENCODING = ((jobject) createStringLiteral(ctx, u8"UTF-8"_j));
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/I18NBundle:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_I18NBundle(ctx);
	{
	LINE_NUMBER(70);
	clinit_com_badlogic_gdx_utils_I18NBundle(ctx);
	SF_com_badlogic_gdx_utils_I18NBundle_simpleFormatter = (jint(0));
	LINE_NUMBER(71);
	clinit_com_badlogic_gdx_utils_I18NBundle(ctx);
	SF_com_badlogic_gdx_utils_I18NBundle_exceptionOnMissingKey = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_I18NBundle[] {
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
	(void *) M_com_badlogic_gdx_utils_I18NBundle_load_java_io_Reader,
	(void *) M_com_badlogic_gdx_utils_I18NBundle_getLocale_R_java_util_Locale,
	(void *) M_com_badlogic_gdx_utils_I18NBundle_setLocale_java_util_Locale,
	(void *) M_com_badlogic_gdx_utils_I18NBundle_get_java_lang_String_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_I18NBundle_keys_R_java_util_Set,
	(void *) M_com_badlogic_gdx_utils_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_I18NBundle_debug_java_lang_String,
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
	{ "load", "(Ljava/io/Reader;)V" },
	{ "getLocale", "()Ljava/util/Locale;" },
	{ "setLocale", "(Ljava/util/Locale;)V" },
	{ "get", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "keys", "()Ljava/util/Set;" },
	{ "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;" },
	{ "debug", "(Ljava/lang/String;)V" },
};

static FieldMetadata fields[] {
	{ "DEFAULT_ENCODING", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_utils_I18NBundle_DEFAULT_ENCODING, "Ljava/lang/String;", 26 },
	{ "simpleFormatter", &class_boolean, (intptr_t) &SF_com_badlogic_gdx_utils_I18NBundle_simpleFormatter, "Z", 10 },
	{ "exceptionOnMissingKey", &class_boolean, (intptr_t) &SF_com_badlogic_gdx_utils_I18NBundle_exceptionOnMissingKey, "Z", 10 },
	{ "parent", &class_com_badlogic_gdx_utils_I18NBundle, offsetof(com_badlogic_gdx_utils_I18NBundle, F_parent), "Lcom/badlogic/gdx/utils/I18NBundle;", 2 },
	{ "locale", &class_java_util_Locale, offsetof(com_badlogic_gdx_utils_I18NBundle, F_locale), "Ljava/util/Locale;", 2 },
	{ "properties", &class_com_badlogic_gdx_utils_ObjectMap, offsetof(com_badlogic_gdx_utils_I18NBundle, F_properties), "Lcom/badlogic/gdx/utils/ObjectMap;", 2 },
	{ "formatter", &class_com_badlogic_gdx_utils_TextFormatter, offsetof(com_badlogic_gdx_utils_I18NBundle, F_formatter), "Lcom/badlogic/gdx/utils/TextFormatter;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_I18NBundle, 0, "()V", 1 },
	{ "getSimpleFormatter", (intptr_t) SM_com_badlogic_gdx_utils_I18NBundle_getSimpleFormatter_R_boolean, 0, "()Z", 9 },
	{ "setSimpleFormatter", (intptr_t) SM_com_badlogic_gdx_utils_I18NBundle_setSimpleFormatter_boolean, 0, "(Z)V", 9 },
	{ "getExceptionOnMissingKey", (intptr_t) SM_com_badlogic_gdx_utils_I18NBundle_getExceptionOnMissingKey_R_boolean, 0, "()Z", 9 },
	{ "setExceptionOnMissingKey", (intptr_t) SM_com_badlogic_gdx_utils_I18NBundle_setExceptionOnMissingKey_boolean, 0, "(Z)V", 9 },
	{ "createBundle", (intptr_t) SM_com_badlogic_gdx_utils_I18NBundle_createBundle_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_utils_I18NBundle, 0, "(Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/utils/I18NBundle;", 9 },
	{ "createBundle", (intptr_t) SM_com_badlogic_gdx_utils_I18NBundle_createBundle_com_badlogic_gdx_files_FileHandle_java_util_Locale_R_com_badlogic_gdx_utils_I18NBundle, 0, "(Lcom/badlogic/gdx/files/FileHandle;Ljava/util/Locale;)Lcom/badlogic/gdx/utils/I18NBundle;", 9 },
	{ "createBundle", (intptr_t) SM_com_badlogic_gdx_utils_I18NBundle_createBundle_com_badlogic_gdx_files_FileHandle_java_lang_String_R_com_badlogic_gdx_utils_I18NBundle, 0, "(Lcom/badlogic/gdx/files/FileHandle;Ljava/lang/String;)Lcom/badlogic/gdx/utils/I18NBundle;", 9 },
	{ "createBundle", (intptr_t) SM_com_badlogic_gdx_utils_I18NBundle_createBundle_com_badlogic_gdx_files_FileHandle_java_util_Locale_java_lang_String_R_com_badlogic_gdx_utils_I18NBundle, 0, "(Lcom/badlogic/gdx/files/FileHandle;Ljava/util/Locale;Ljava/lang/String;)Lcom/badlogic/gdx/utils/I18NBundle;", 9 },
	{ "createBundleImpl", (intptr_t) SM_com_badlogic_gdx_utils_I18NBundle_createBundleImpl_com_badlogic_gdx_files_FileHandle_java_util_Locale_java_lang_String_R_com_badlogic_gdx_utils_I18NBundle, 0, "(Lcom/badlogic/gdx/files/FileHandle;Ljava/util/Locale;Ljava/lang/String;)Lcom/badlogic/gdx/utils/I18NBundle;", 10 },
	{ "getCandidateLocales", (intptr_t) SM_com_badlogic_gdx_utils_I18NBundle_getCandidateLocales_java_util_Locale_R_java_util_List, 0, "(Ljava/util/Locale;)Ljava/util/List;", 10 },
	{ "getFallbackLocale", (intptr_t) SM_com_badlogic_gdx_utils_I18NBundle_getFallbackLocale_java_util_Locale_R_java_util_Locale, 0, "(Ljava/util/Locale;)Ljava/util/Locale;", 10 },
	{ "loadBundleChain", (intptr_t) SM_com_badlogic_gdx_utils_I18NBundle_loadBundleChain_com_badlogic_gdx_files_FileHandle_java_lang_String_java_util_List_int_com_badlogic_gdx_utils_I18NBundle_R_com_badlogic_gdx_utils_I18NBundle, 0, "(Lcom/badlogic/gdx/files/FileHandle;Ljava/lang/String;Ljava/util/List;ILcom/badlogic/gdx/utils/I18NBundle;)Lcom/badlogic/gdx/utils/I18NBundle;", 10 },
	{ "loadBundle", (intptr_t) SM_com_badlogic_gdx_utils_I18NBundle_loadBundle_com_badlogic_gdx_files_FileHandle_java_lang_String_java_util_Locale_R_com_badlogic_gdx_utils_I18NBundle, 0, "(Lcom/badlogic/gdx/files/FileHandle;Ljava/lang/String;Ljava/util/Locale;)Lcom/badlogic/gdx/utils/I18NBundle;", 10 },
	{ "checkFileExistence", (intptr_t) SM_com_badlogic_gdx_utils_I18NBundle_checkFileExistence_com_badlogic_gdx_files_FileHandle_R_boolean, 0, "(Lcom/badlogic/gdx/files/FileHandle;)Z", 10 },
	{ "load", (intptr_t) M_com_badlogic_gdx_utils_I18NBundle_load_java_io_Reader, VTABLE_com_badlogic_gdx_utils_I18NBundle_load_java_io_Reader, "(Ljava/io/Reader;)V", 4 },
	{ "toFileHandle", (intptr_t) SM_com_badlogic_gdx_utils_I18NBundle_toFileHandle_com_badlogic_gdx_files_FileHandle_java_util_Locale_R_com_badlogic_gdx_files_FileHandle, 0, "(Lcom/badlogic/gdx/files/FileHandle;Ljava/util/Locale;)Lcom/badlogic/gdx/files/FileHandle;", 10 },
	{ "getLocale", (intptr_t) M_com_badlogic_gdx_utils_I18NBundle_getLocale_R_java_util_Locale, VTABLE_com_badlogic_gdx_utils_I18NBundle_getLocale_R_java_util_Locale, "()Ljava/util/Locale;", 1 },
	{ "setLocale", (intptr_t) M_com_badlogic_gdx_utils_I18NBundle_setLocale_java_util_Locale, VTABLE_com_badlogic_gdx_utils_I18NBundle_setLocale_java_util_Locale, "(Ljava/util/Locale;)V", 2 },
	{ "get", (intptr_t) M_com_badlogic_gdx_utils_I18NBundle_get_java_lang_String_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_I18NBundle_get_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "keys", (intptr_t) M_com_badlogic_gdx_utils_I18NBundle_keys_R_java_util_Set, VTABLE_com_badlogic_gdx_utils_I18NBundle_keys_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "format", (intptr_t) M_com_badlogic_gdx_utils_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String, "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", 129 },
	{ "debug", (intptr_t) M_com_badlogic_gdx_utils_I18NBundle_debug_java_lang_String, VTABLE_com_badlogic_gdx_utils_I18NBundle_debug_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_utils_I18NBundle, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_utils_I18NBundle{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/I18NBundle",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_I18NBundle),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_I18NBundle,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_I18NBundle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_I18NBundle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_I18NBundle = registerClass(&class_com_badlogic_gdx_utils_I18NBundle);

}

