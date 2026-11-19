#include "nro/Rms.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "java/util/Map_Entry.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/Files.h"
#include "java/util/Map.h"
#include "java/lang/Object.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "nro/Res.h"
#include "nro/PartImage.h"
#include "java/util/LinkedHashMap.h"
#include "nro/Rms.h"
#include "java/util/HashSet.h"
#include "com/nro/GameMain.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_nro_Rms_MAGIC;
jobject SF_nro_Rms_CIPHER_KEY;
jint SF_nro_Rms_WEB_CACHE_MAX_ENTRIES;
jint SF_nro_Rms_WEB_CACHE_MAX_BYTES;
jint SF_nro_Rms_webCacheBytes;
jobject SF_nro_Rms_webMemoryCache;
jobject SF_nro_Rms_webMissingKeys;
jobject SF_nro_Rms_cachedStorageDir;

void mark_nro_Rms(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_Rms_MAGIC)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Rms_MAGIC)->clazz)->markFunction)((jobject) SF_nro_Rms_MAGIC, mark, depth + 1);
		if (SF_nro_Rms_CIPHER_KEY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Rms_CIPHER_KEY)->clazz)->markFunction)((jobject) SF_nro_Rms_CIPHER_KEY, mark, depth + 1);
		if (SF_nro_Rms_webMemoryCache)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Rms_webMemoryCache)->clazz)->markFunction)((jobject) SF_nro_Rms_webMemoryCache, mark, depth + 1);
		if (SF_nro_Rms_webMissingKeys)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Rms_webMissingKeys)->clazz)->markFunction)((jobject) SF_nro_Rms_webMissingKeys, mark, depth + 1);
		if (SF_nro_Rms_cachedStorageDir)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Rms_cachedStorageDir)->clazz)->markFunction)((jobject) SF_nro_Rms_cachedStorageDir, mark, depth + 1);
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
	auto self = (nro_Rms *) object;
	if (self->F_pi)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pi)->clazz)->markFunction)((jobject) self->F_pi, mark, depth + 1);
}

jbool SM_nro_Rms_isWebRamOnlyKey_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Rms:isWebRamOnlyKey", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Rms(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(25);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Small"_j))));
	if (temp0 >= 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"bgItem"_j))));
	if (temp0 >= 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"ImgByName_"_j))));
	if (temp0 < 0) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_nro_Rms_putWebCache_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Rms:putWebCache", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_nro_Rms);

	clinit_nro_Rms(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(30);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	popStackFrame(ctx, (jobject) &class_nro_Rms);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(31);
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_webMissingKeys;
	jint temp0 = (jint)((func_java_util_HashSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(32);
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_webMemoryCache;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	frame[2].o = (checkCast(ctx, getArrayClass(&class_byte, 1), sp[0].o));
	LINE_NUMBER(33);
	if ((frame[2].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(34);
	clinit_nro_Rms(ctx);
	SF_nro_Rms_webCacheBytes = ((clinit_nro_Rms(ctx), (jint)SF_nro_Rms_webCacheBytes) - (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	}
label_5:;
	{
	LINE_NUMBER(36);
	clinit_nro_Rms(ctx);
	SF_nro_Rms_webCacheBytes = ((clinit_nro_Rms(ctx), (jint)SF_nro_Rms_webCacheBytes) + (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(37);
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_webMemoryCache;
	jint temp0 = (jint)((func_java_util_LinkedHashMap_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_size_R_int])(ctx, sp[0].o);
	if (temp0 > (4000)) goto label_8;
	}
	{
	if ((clinit_nro_Rms(ctx), (jint)SF_nro_Rms_webCacheBytes) <= (jint(33554432))) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(38);
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_webMemoryCache;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_entrySet_R_java_util_Set) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_entrySet_R_java_util_Set])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(39);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_9;
	}
	{
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_webMemoryCache;
	jint temp0 = (jint)((func_java_util_LinkedHashMap_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_size_R_int])(ctx, sp[0].o);
	if (temp0 > (4000)) goto label_11;
	}
	{
	if ((clinit_nro_Rms(ctx), (jint)SF_nro_Rms_webCacheBytes) <= (jint(33554432))) goto label_9;
	}
label_11:;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(41);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, getArrayClass(&class_byte, 1), sp[0].o));
	LINE_NUMBER(42);
	if ((frame[5].o) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(43);
	clinit_nro_Rms(ctx);
	SF_nro_Rms_webCacheBytes = ((clinit_nro_Rms(ctx), (jint)SF_nro_Rms_webCacheBytes) - (((jarray) nullCheck(ctx, (frame[5].o)))->length));
	}
label_14:;
	{
	LINE_NUMBER(45);
	((func_java_util_Iterator_remove) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_remove, (frame[3].o)))(ctx, (frame[3].o));
	LINE_NUMBER(46);
	goto label_10;
	}
label_9:;
	LINE_NUMBER(48);
	popStackFrame(ctx, (jobject) &class_nro_Rms);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_nro_Rms_getWebCache_java_lang_String_R_Array1_byte(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Rms:getWebCache", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_nro_Rms);

	clinit_nro_Rms(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(51);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx, (jobject) &class_nro_Rms);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(52);
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_webMemoryCache;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx, (jobject) &class_nro_Rms);
	return (checkCast(ctx, getArrayClass(&class_byte, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jbool SM_nro_Rms_isWebMissing_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Rms:isWebMissing", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_nro_Rms);

	clinit_nro_Rms(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(56);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_webMissingKeys;
	jint temp0 = (jint)((func_java_util_HashSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx, (jobject) &class_nro_Rms);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_nro_Rms_markWebMissing_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Rms:markWebMissing", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_nro_Rms);

	clinit_nro_Rms(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(60);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_webMissingKeys;
	jint temp0 = (jint)((func_java_util_HashSet_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashSet_size_R_int])(ctx, sp[0].o);
	if (temp0 >= (8192)) goto label_1;
	}
	{
	LINE_NUMBER(61);
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_webMissingKeys;
	jint temp0 = (jint)((func_java_util_HashSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(63);
	popStackFrame(ctx, (jobject) &class_nro_Rms);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_Rms_removeWebCache_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Rms:removeWebCache", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_nro_Rms);

	clinit_nro_Rms(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(66);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx, (jobject) &class_nro_Rms);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(67);
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_webMissingKeys;
	jint temp0 = (jint)((func_java_util_HashSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(68);
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_webMemoryCache;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	frame[1].o = (checkCast(ctx, getArrayClass(&class_byte, 1), sp[0].o));
	LINE_NUMBER(69);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(70);
	clinit_nro_Rms(ctx);
	SF_nro_Rms_webCacheBytes = ((clinit_nro_Rms(ctx), (jint)SF_nro_Rms_webCacheBytes) - (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	}
label_4:;
	LINE_NUMBER(72);
	popStackFrame(ctx, (jobject) &class_nro_Rms);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_Rms_clearWebCache(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Rms:clearWebCache", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_nro_Rms);

	clinit_nro_Rms(ctx);
	{
	LINE_NUMBER(75);
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_webMemoryCache;
	((func_java_util_LinkedHashMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(76);
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_webMissingKeys;
	((func_java_util_HashSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(77);
	clinit_nro_Rms(ctx);
	SF_nro_Rms_webCacheBytes = (jint(0));
	LINE_NUMBER(78);
	popStackFrame(ctx, (jobject) &class_nro_Rms);
	return;
	}

	popStackFrame(ctx);
}

jint SM_nro_Rms_getWebCacheEntryCount_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Rms:getWebCacheEntryCount", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_nro_Rms);

	clinit_nro_Rms(ctx);
	{
	LINE_NUMBER(81);
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_webMemoryCache;
	jint temp0 = (jint)((func_java_util_LinkedHashMap_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_size_R_int])(ctx, sp[0].o);
	popStackFrame(ctx, (jobject) &class_nro_Rms);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_nro_Rms_getWebCacheBytes_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Rms:getWebCacheBytes", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_nro_Rms);

	clinit_nro_Rms(ctx);
	{
	LINE_NUMBER(85);
	popStackFrame(ctx, (jobject) &class_nro_Rms);
	return (clinit_nro_Rms(ctx), (jint)SF_nro_Rms_webCacheBytes);
	}

	popStackFrame(ctx);
}

void init_nro_Rms_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Rms:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Rms(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(90);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(91);
	if ((frame[1].i) != 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_nro_PartImage, (jint(3)));
	((nro_Rms *) NULL_CHECK(sp[0].o))->F_pi = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(92);
	if ((frame[1].i) != (jint(1))) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_nro_PartImage, (17));
	((nro_Rms *) NULL_CHECK(sp[0].o))->F_pi = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(93);
	if ((frame[1].i) != (jint(2))) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_nro_PartImage, (14));
	((nro_Rms *) NULL_CHECK(sp[0].o))->F_pi = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(94);
	if ((frame[1].i) != (jint(3))) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_nro_PartImage, (jint(2)));
	((nro_Rms *) NULL_CHECK(sp[0].o))->F_pi = (jref) sp[1].o;
	}
label_5:;
	LINE_NUMBER(95);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_nro_Rms(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Rms:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Rms(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(97);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_nro_Rms_getStorageDir_R_com_badlogic_gdx_files_FileHandle(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Rms:getStorageDir", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Rms(ctx);
	{
	LINE_NUMBER(106);
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_cachedStorageDir;
	if (sp[0].o == nullptr) goto label_0;
	}
	{
	LINE_NUMBER(107);
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_cachedStorageDir;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(110);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isWeb) != 0) { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)SM_java_lang_System_getenv_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"APPDATA"_j))));
	frame[0].o = sp[0].o;
	LINE_NUMBER(112);
	if ((frame[0].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(113);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, (frame[0].o), (92), (47));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/NRO_Game/storage"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(114);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Files_absolute_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_absolute_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	clinit_nro_Rms(ctx);
	SF_nro_Rms_cachedStorageDir = sp[0].o;
	LINE_NUMBER(115);
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_cachedStorageDir;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	LINE_NUMBER(119);
	goto label_12;
label_2:;
	LINE_NUMBER(118);
	INST_ASTORE(0);
label_12:;
	{
	LINE_NUMBER(120);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Files_local_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_local_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".storage"_j))));
	clinit_nro_Rms(ctx);
	SF_nro_Rms_cachedStorageDir = sp[0].o;
	LINE_NUMBER(121);
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_cachedStorageDir;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_nro_Rms_getFileHandle_java_lang_String_R_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Rms:getFileHandle", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Rms(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)SM_nro_Rms_getStorageDir_R_com_badlogic_gdx_files_FileHandle(ctx);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_nro_Rms_encrypt_Array1_byte_R_Array1_byte(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Rms:encrypt", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Rms(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(132);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(133);
	jint temp0 = ((jarray) nullCheck(ctx, (frame[0].o)))->length;
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_MAGIC;
	sp[0].o = (jobject) createArray(ctx, &class_byte, (temp0 + (((jarray) nullCheck(ctx, sp[0].o))->length)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(134);
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_MAGIC;
	jint temp1 = jint(0);
	sp[1].o = frame[1].o;
	jint temp2 = jint(0);
	clinit_nro_Rms(ctx);
	sp[2].o = (jobject)SF_nro_Rms_MAGIC;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, temp2, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(135);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(136);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	clinit_nro_Rms(ctx);
	sp[1].o = (jobject)SF_nro_Rms_MAGIC;
	jint temp1 = temp0 + (((jarray) nullCheck(ctx, sp[1].o))->length);
	jint temp2 = (jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[2].i));
	clinit_nro_Rms(ctx);
	sp[1].o = (jobject)SF_nro_Rms_CIPHER_KEY;
	jint temp3 = frame[2].i;
	clinit_nro_Rms(ctx);
	sp[2].o = (jobject)SF_nro_Rms_CIPHER_KEY;
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (jbyte(((temp2 ^ ((jint)ARRAY_ACCESS(jbyte, sp[1].o, (temp3 % (((jarray) nullCheck(ctx, sp[2].o))->length))))) ^ (((frame[2].i) * (13)) & (255)))));
	LINE_NUMBER(135);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_nro_Rms_decrypt_Array1_byte_R_Array1_byte(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Rms:decrypt", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Rms(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(145);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(146);
	jint temp0 = ((jarray) nullCheck(ctx, (frame[0].o)))->length;
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_MAGIC;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	jint temp0 = (jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(0)));
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_MAGIC;
	if (temp0 != ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))))) goto label_2;
	}
	{
	jint temp0 = (jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(1)));
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_MAGIC;
	if (temp0 != ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))))) goto label_2;
	}
	{
	jint temp0 = (jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(2)));
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_MAGIC;
	if (temp0 != ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))))) goto label_2;
	}
	{
	jint temp0 = (jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(3)));
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_MAGIC;
	if (temp0 != ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))))) goto label_2;
	}
	{
	LINE_NUMBER(148);
	jint temp0 = ((jarray) nullCheck(ctx, (frame[0].o)))->length;
	clinit_nro_Rms(ctx);
	sp[0].o = (jobject)SF_nro_Rms_MAGIC;
	frame[1].i = (temp0 - (((jarray) nullCheck(ctx, sp[0].o))->length));
	LINE_NUMBER(149);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(150);
	frame[3].i = (jint(0));
	}
label_6:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_7;
	}
	{
	LINE_NUMBER(151);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[1].o = frame[0].o;
	jint temp1 = frame[3].i;
	clinit_nro_Rms(ctx);
	sp[2].o = (jobject)SF_nro_Rms_MAGIC;
	jint temp2 = (jint)ARRAY_ACCESS(jbyte, sp[1].o, (temp1 + (((jarray) nullCheck(ctx, sp[2].o))->length)));
	clinit_nro_Rms(ctx);
	sp[1].o = (jobject)SF_nro_Rms_CIPHER_KEY;
	jint temp3 = frame[3].i;
	clinit_nro_Rms(ctx);
	sp[2].o = (jobject)SF_nro_Rms_CIPHER_KEY;
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte(((temp2 ^ ((jint)ARRAY_ACCESS(jbyte, sp[1].o, (temp3 % (((jarray) nullCheck(ctx, sp[2].o))->length))))) ^ (((frame[3].i) * (13)) & (255)))));
	LINE_NUMBER(150);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_2:;
	{
	LINE_NUMBER(155);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void SM_nro_Rms_saveRMS_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Rms:saveRMS", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Rms(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(160);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
label_1:;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(161);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isWeb) == 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(162);
	SM_nro_Rms_putWebCache_java_lang_String_Array1_byte(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(163);
	jint temp0 = (jint)SM_nro_Rms_isWebRamOnlyKey_java_lang_String_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(164);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)SM_nro_Rms_encrypt_Array1_byte_R_Array1_byte(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(168);
	sp[0].o = (jobject)SM_nro_Rms_getFileHandle_java_lang_String_R_com_badlogic_gdx_files_FileHandle(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(169);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(170);
	if ((frame[4].o) == nullptr) goto label_15;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_exists_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_15;
	}
	{
	LINE_NUMBER(171);
	((func_com_badlogic_gdx_files_FileHandle_mkdirs) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_mkdirs])(ctx, (frame[4].o));
	}
label_15:;
	{
	LINE_NUMBER(173);
	((func_com_badlogic_gdx_files_FileHandle_writeBytes_Array1_byte_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_writeBytes_Array1_byte_boolean])(ctx, (frame[3].o), (frame[2].o), (jint(0)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(175);
	goto label_17;
label_2:;
	LINE_NUMBER(174);
	INST_ASTORE(2);
label_17:;
	LINE_NUMBER(176);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_Rms_DeleteStorage_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Rms:DeleteStorage", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Rms(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(180);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isWeb) == 0) goto label_4;
	}
	{
	LINE_NUMBER(181);
	SM_nro_Rms_removeWebCache_java_lang_String(ctx, (frame[0].o));
	}
label_4:;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)SM_nro_Rms_getFileHandle_java_lang_String_R_com_badlogic_gdx_files_FileHandle(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(184);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_exists_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(185);
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_delete_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_delete_R_boolean])(ctx, (frame[1].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(188);
	goto label_8;
label_2:;
	LINE_NUMBER(187);
	INST_ASTORE(1);
label_8:;
	LINE_NUMBER(189);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_Rms_clearAll(jcontext ctx) {
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Rms:clearAll", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Rms(ctx);
	{
	LINE_NUMBER(195);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"CLEAR ALL STORAGE"_j))));
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(197);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isWeb) == 0) goto label_13;
	}
	LINE_NUMBER(198);
	SM_nro_Rms_clearWebCache(ctx);
label_13:;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)SM_nro_Rms_getStorageDir_R_com_badlogic_gdx_files_FileHandle(ctx);
	frame[0].o = sp[0].o;
	LINE_NUMBER(201);
	if ((frame[0].o) == nullptr) goto label_16;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_exists_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_list_R_Array1_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_list_R_Array1_com_badlogic_gdx_files_FileHandle])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(203);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(204);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_20:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(206);
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_isDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_isDirectory_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_21;
	}
	{
	LINE_NUMBER(207);
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_deleteDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_deleteDirectory_R_boolean])(ctx, (frame[5].o));
	goto label_1;
	}
label_21:;
	{
	LINE_NUMBER(209);
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_delete_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_delete_R_boolean])(ctx, (frame[5].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(212);
	goto label_23;
label_2:;
	LINE_NUMBER(211);
	INST_ASTORE(6);
label_23:;
	{
	LINE_NUMBER(204);
	INST_IINC(4, 1);
	goto label_20;
	}
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(216);
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_deleteDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_deleteDirectory_R_boolean])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(218);
	goto label_16;
label_6:;
	LINE_NUMBER(217);
	INST_ASTORE(2);
label_16:;
	{
	LINE_NUMBER(220);
	if ((frame[0].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(221);
	((func_com_badlogic_gdx_files_FileHandle_mkdirs) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_mkdirs])(ctx, (frame[0].o));
	}
label_9:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(225);
	goto label_25;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(223);
	frame[0].o = sp[0].o;
	LINE_NUMBER(224);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[0].o));
	}
label_25:;
	LINE_NUMBER(226);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_nro_Rms_loadRMS_java_lang_String_R_Array1_byte(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Rms:loadRMS", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Rms(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(235);
	if ((frame[0].o) != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ACONST_NULL();
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(236);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isWeb) == 0) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)SM_nro_Rms_getWebCache_java_lang_String_R_Array1_byte(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(238);
	if ((frame[1].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	LINE_NUMBER(239);
	INST_ALOAD(1);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(241);
	jint temp0 = (jint)SM_nro_Rms_isWebMissing_java_lang_String_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	LINE_NUMBER(242);
	INST_ACONST_NULL();
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)SM_nro_Rms_getFileHandle_java_lang_String_R_com_badlogic_gdx_files_FileHandle(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(246);
	if ((frame[1].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_13; }
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_exists_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_13; }
	}
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_readBytes_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_readBytes_R_Array1_byte])(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_nro_Rms_decrypt_Array1_byte_R_Array1_byte(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(248);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isWeb) == 0) goto label_23;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_23;
	{
	LINE_NUMBER(249);
	SM_nro_Rms_putWebCache_java_lang_String_Array1_byte(ctx, (frame[0].o), (frame[2].o));
	}
label_23:;
	LINE_NUMBER(251);
	INST_ALOAD(2);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_13:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(252);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isWeb) == 0) goto label_14;
	}
	{
	LINE_NUMBER(253);
	SM_nro_Rms_markWebMissing_java_lang_String(ctx, (frame[0].o));
	}
label_14:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(256);
	goto label_26;
label_2:;
	LINE_NUMBER(255);
	INST_ASTORE(1);
label_26:;
	{
	LINE_NUMBER(257);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void SM_nro_Rms_saveRMSInt_java_lang_String_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Rms:saveRMSInt", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Rms(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(262);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (jbyte((frame[1].i)));
	SM_nro_Rms_saveRMS_java_lang_String_Array1_byte(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(264);
	goto label_4;
label_2:;
	LINE_NUMBER(263);
	INST_ASTORE(2);
label_4:;
	LINE_NUMBER(265);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Rms:saveRMSString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Rms(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(269);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_getBytes_java_lang_String_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_getBytes_java_lang_String_R_Array1_byte])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"UTF-8"_j))));
	SM_nro_Rms_saveRMS_java_lang_String_Array1_byte(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(272);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(270);
	frame[2].o = sp[0].o;
	LINE_NUMBER(271);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
label_4:;
	LINE_NUMBER(273);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Rms:loadRMSString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Rms(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)SM_nro_Rms_loadRMS_java_lang_String_R_Array1_byte(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(277);
	if ((frame[1].o) != nullptr) goto label_0;
	}
	{
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(281);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_byte_java_lang_String(ctx, sp[0].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"UTF-8"_j))));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(282);
	frame[2].o = sp[0].o;
	LINE_NUMBER(283);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_byte(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_nro_Rms_loadRMSInt_java_lang_String_R_int(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Rms:loadRMSInt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Rms(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)SM_nro_Rms_loadRMS_java_lang_String_R_Array1_byte(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(290);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	INST_ICONST(-1);
	goto label_3;
label_2:;
	{
	jint temp0 = (jint)ARRAY_ACCESS(jbyte, (frame[1].o), (jint(0)));
	sp[0].i = temp0;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void clinit_nro_Rms(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_nro_Rms_WEB_CACHE_MAX_ENTRIES = jint(4000);
	SF_nro_Rms_WEB_CACHE_MAX_BYTES = jint(33554432);
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Rms:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Rms(ctx);
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(4)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (78);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (82);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (79);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(3));
	clinit_nro_Rms(ctx);
	SF_nro_Rms_MAGIC = sp[0].o;
	LINE_NUMBER(11);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (8));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (-89);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (91);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (-116);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (61);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (-31);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (-97);
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (66);
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (119);
	clinit_nro_Rms(ctx);
	SF_nro_Rms_CIPHER_KEY = sp[0].o;
	LINE_NUMBER(17);
	clinit_nro_Rms(ctx);
	SF_nro_Rms_webCacheBytes = (jint(0));
	LINE_NUMBER(18);
	clinit_java_util_LinkedHashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_LinkedHashMap);
	init_java_util_LinkedHashMap_int_float_boolean(ctx, sp[0].o, (512), (jfloat(0.75f)), (jint(1)));
	clinit_nro_Rms(ctx);
	SF_nro_Rms_webMemoryCache = sp[0].o;
	LINE_NUMBER(20);
	clinit_java_util_HashSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashSet);
	init_java_util_HashSet_int(ctx, sp[0].o, (1024));
	clinit_nro_Rms(ctx);
	SF_nro_Rms_webMissingKeys = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_Rms[] {
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
};

static FieldMetadata fields[] {
	{ "MAGIC", getArrayClass(&class_byte, 1), (intptr_t) &SF_nro_Rms_MAGIC, "[B", 26 },
	{ "CIPHER_KEY", getArrayClass(&class_byte, 1), (intptr_t) &SF_nro_Rms_CIPHER_KEY, "[B", 26 },
	{ "WEB_CACHE_MAX_ENTRIES", &class_int, (intptr_t) &SF_nro_Rms_WEB_CACHE_MAX_ENTRIES, "I", 26 },
	{ "WEB_CACHE_MAX_BYTES", &class_int, (intptr_t) &SF_nro_Rms_WEB_CACHE_MAX_BYTES, "I", 26 },
	{ "webCacheBytes", &class_int, (intptr_t) &SF_nro_Rms_webCacheBytes, "I", 10 },
	{ "webMemoryCache", &class_java_util_LinkedHashMap, (intptr_t) &SF_nro_Rms_webMemoryCache, "Ljava/util/LinkedHashMap;", 26 },
	{ "webMissingKeys", &class_java_util_HashSet, (intptr_t) &SF_nro_Rms_webMissingKeys, "Ljava/util/HashSet;", 26 },
	{ "cachedStorageDir", &class_com_badlogic_gdx_files_FileHandle, (intptr_t) &SF_nro_Rms_cachedStorageDir, "Lcom/badlogic/gdx/files/FileHandle;", 10 },
	{ "pi", getArrayClass(&class_nro_PartImage, 1), offsetof(nro_Rms, F_pi), "[Lnro/PartImage;", 1 },
};

static MethodMetadata methods[] {
	{ "isWebRamOnlyKey", (intptr_t) SM_nro_Rms_isWebRamOnlyKey_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 10 },
	{ "putWebCache", (intptr_t) SM_nro_Rms_putWebCache_java_lang_String_Array1_byte, 0, "(Ljava/lang/String;[B)V", 42 },
	{ "getWebCache", (intptr_t) SM_nro_Rms_getWebCache_java_lang_String_R_Array1_byte, 0, "(Ljava/lang/String;)[B", 42 },
	{ "isWebMissing", (intptr_t) SM_nro_Rms_isWebMissing_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 42 },
	{ "markWebMissing", (intptr_t) SM_nro_Rms_markWebMissing_java_lang_String, 0, "(Ljava/lang/String;)V", 42 },
	{ "removeWebCache", (intptr_t) SM_nro_Rms_removeWebCache_java_lang_String, 0, "(Ljava/lang/String;)V", 42 },
	{ "clearWebCache", (intptr_t) SM_nro_Rms_clearWebCache, 0, "()V", 42 },
	{ "getWebCacheEntryCount", (intptr_t) SM_nro_Rms_getWebCacheEntryCount_R_int, 0, "()I", 41 },
	{ "getWebCacheBytes", (intptr_t) SM_nro_Rms_getWebCacheBytes_R_int, 0, "()I", 41 },
	{ "<init>", (intptr_t) init_nro_Rms_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_nro_Rms, 0, "()V", 1 },
	{ "getStorageDir", (intptr_t) SM_nro_Rms_getStorageDir_R_com_badlogic_gdx_files_FileHandle, 0, "()Lcom/badlogic/gdx/files/FileHandle;", 9 },
	{ "getFileHandle", (intptr_t) SM_nro_Rms_getFileHandle_java_lang_String_R_com_badlogic_gdx_files_FileHandle, 0, "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;", 9 },
	{ "encrypt", (intptr_t) SM_nro_Rms_encrypt_Array1_byte_R_Array1_byte, 0, "([B)[B", 10 },
	{ "decrypt", (intptr_t) SM_nro_Rms_decrypt_Array1_byte_R_Array1_byte, 0, "([B)[B", 10 },
	{ "saveRMS", (intptr_t) SM_nro_Rms_saveRMS_java_lang_String_Array1_byte, 0, "(Ljava/lang/String;[B)V", 9 },
	{ "DeleteStorage", (intptr_t) SM_nro_Rms_DeleteStorage_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "clearAll", (intptr_t) SM_nro_Rms_clearAll, 0, "()V", 9 },
	{ "loadRMS", (intptr_t) SM_nro_Rms_loadRMS_java_lang_String_R_Array1_byte, 0, "(Ljava/lang/String;)[B", 9 },
	{ "saveRMSInt", (intptr_t) SM_nro_Rms_saveRMSInt_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 9 },
	{ "saveRMSString", (intptr_t) SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 9 },
	{ "loadRMSString", (intptr_t) SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "loadRMSInt", (intptr_t) SM_nro_Rms_loadRMSInt_java_lang_String_R_int, 0, "(Ljava/lang/String;)I", 9 },
	{ "<clinit>", (intptr_t) clinit_nro_Rms, 0, "()V", 8 },
};

Class class_nro_Rms{
		.nativeName = (intptr_t) "nro/Rms",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Rms),
		.classVtable = (intptr_t) vtable_nro_Rms,
		.staticInitializer = (intptr_t) clinit_nro_Rms,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Rms,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Rms = registerClass(&class_nro_Rms);

}

