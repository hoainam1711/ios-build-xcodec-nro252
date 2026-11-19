#include "com/thelogicmaster/switchgdx/SwitchSound.h"
#include "com/thelogicmaster/switchgdx/SwitchSound.h"
#include "java/util/Iterator.h"
#include "com/thelogicmaster/switchgdx/SwitchSound_SoundInstance.h"
#include "com/badlogic/gdx/utils/IntMap_Entries.h"
#include "com/thelogicmaster/switchgdx/SwitchSound_Listener.h"
#include "java/util/ArrayList.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/utils/Pool.h"
#include "com/badlogic/gdx/audio/Sound.h"
#include "com/thelogicmaster/switchgdx/SwitchSound_1.h"
#include "java/io/File.h"
#include "com/badlogic/gdx/utils/IntMap_Entry.h"
#include "java/util/List.h"
#include "com/badlogic/gdx/utils/IntMap.h"

extern "C" {


void mark_com_thelogicmaster_switchgdx_SwitchSound(jobject object, jint mark, jint depth) {
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
	auto self = (com_thelogicmaster_switchgdx_SwitchSound *) object;
	if (self->F_instanceMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_instanceMap)->clazz)->markFunction)((jobject) self->F_instanceMap, mark, depth + 1);
	if (self->F_soundPool)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_soundPool)->clazz)->markFunction)((jobject) self->F_soundPool, mark, depth + 1);
	if (self->F_listeners)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listeners)->clazz)->markFunction)((jobject) self->F_listeners, mark, depth + 1);
	if (self->F_wavData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_wavData)->clazz)->markFunction)((jobject) self->F_wavData, mark, depth + 1);
}

void clinit_com_thelogicmaster_switchgdx_SwitchSound(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_thelogicmaster_switchgdx_SwitchSound_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchSound(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntMap);
	init_com_badlogic_gdx_utils_IntMap(ctx, sp[1].o);
	((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK(sp[0].o))->F_instanceMap = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_com_thelogicmaster_switchgdx_SwitchSound$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchSound$1);
	init_com_thelogicmaster_switchgdx_SwitchSound$1_com_thelogicmaster_switchgdx_SwitchSound_int(ctx, sp[1].o, (frame[0].o), (32));
	((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK(sp[0].o))->F_soundPool = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[1].o);
	((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK(sp[0].o))->F_listeners = (jref) sp[1].o;
	LINE_NUMBER(37);
	((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_wavData = (jref) (jobject(nullptr));
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_io_File_getPath_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_File_getPath_R_java_lang_String])(ctx, sp[1].o);
	M_com_thelogicmaster_switchgdx_SwitchSound_create_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_thelogicmaster_switchgdx_SwitchSound_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchSound(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(41);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntMap);
	init_com_badlogic_gdx_utils_IntMap(ctx, sp[1].o);
	((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK(sp[0].o))->F_instanceMap = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_com_thelogicmaster_switchgdx_SwitchSound$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchSound$1);
	init_com_thelogicmaster_switchgdx_SwitchSound$1_com_thelogicmaster_switchgdx_SwitchSound_int(ctx, sp[1].o, (frame[0].o), (32));
	((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK(sp[0].o))->F_soundPool = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[1].o);
	((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK(sp[0].o))->F_listeners = (jref) sp[1].o;
	LINE_NUMBER(42);
	((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_wavData = (jref) (frame[1].o);
	LINE_NUMBER(43);
	M_com_thelogicmaster_switchgdx_SwitchSound_create_Array1_byte(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchSound_update_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound:update", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return ((jint)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_disposed);
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchSound_onSoundFinished_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound:onSoundFinished", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(51);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(52);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_instanceMap;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntMap_entries_R_com_badlogic_gdx_utils_IntMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_entries_R_com_badlogic_gdx_utils_IntMap$Entries])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntMap$Entries_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap$Entries_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_IntMap$Entry, sp[0].o));
	LINE_NUMBER(53);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap$Entry *) NULL_CHECK((frame[4].o)))->F_value;
	if (((jint)((com_thelogicmaster_switchgdx_SwitchSound$SoundInstance *) NULL_CHECK((checkCast(ctx, &class_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance, sp[0].o))))->F_channel) != (frame[1].i)) goto label_5;
	}
	{
	LINE_NUMBER(54);
	frame[2].o = (frame[4].o);
	LINE_NUMBER(55);
	goto label_3;
	}
label_5:;
	LINE_NUMBER(53);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(57);
	if ((frame[2].o) == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap$Entry *) NULL_CHECK((frame[2].o)))->F_value;
	if (((jint)((com_thelogicmaster_switchgdx_SwitchSound$SoundInstance *) NULL_CHECK((checkCast(ctx, &class_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance, sp[0].o))))->F_looping) == 0) goto label_9;
	}
label_8:;
	LINE_NUMBER(58);
	popStackFrame(ctx);
	INST_RETURN();
label_9:;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_soundPool;
	sp[1].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_instanceMap;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_IntMap_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_remove_int_R_java_lang_Object])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_IntMap$Entry *) NULL_CHECK((frame[2].o)))->F_key));
	((func_com_badlogic_gdx_utils_Pool_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_free_java_lang_Object])(ctx, sp[0].o, (checkCast(ctx, &class_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance, sp[1].o)));
	LINE_NUMBER(60);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_listeners;
	sp[0].o = (jobject)((func_java_util_ArrayList_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_thelogicmaster_switchgdx_SwitchSound$Listener, sp[0].o));
	LINE_NUMBER(61);
	((func_com_thelogicmaster_switchgdx_SwitchSound$Listener_soundFinished_int) resolveInterfaceMethod(ctx, &class_com_thelogicmaster_switchgdx_SwitchSound$Listener, INDEX_com_thelogicmaster_switchgdx_SwitchSound$Listener_soundFinished_int, (frame[4].o)))(ctx, (frame[4].o), (frame[1].i));
	goto label_11;
	}
label_12:;
	LINE_NUMBER(62);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchSound_addListener_com_thelogicmaster_switchgdx_SwitchSound$Listener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound:addListener", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_listeners;
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchSound_removeListener_com_thelogicmaster_switchgdx_SwitchSound$Listener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound:removeListener", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_listeners;
	jint temp0 = (jint)((func_java_util_ArrayList_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_com_thelogicmaster_switchgdx_SwitchSound_play_float_float_float_boolean_R_long(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound:play", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(73);
	jint temp0 = (jint)M_com_thelogicmaster_switchgdx_SwitchSound_play0_boolean_R_int(ctx, (frame[0].o), (frame[4].i));
	frame[5].i = temp0;
	LINE_NUMBER(74);
	SM_com_thelogicmaster_switchgdx_SwitchSound_setVolume0_int_float(ctx, (frame[5].i), (frame[1].f));
	LINE_NUMBER(75);
	SM_com_thelogicmaster_switchgdx_SwitchSound_setPitch0_int_float(ctx, (frame[5].i), (frame[2].f));
	LINE_NUMBER(76);
	SM_com_thelogicmaster_switchgdx_SwitchSound_setPan0_int_float(ctx, (frame[5].i), (frame[3].f));
	LINE_NUMBER(77);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_soundPool;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Pool_obtain_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_obtain_R_java_lang_Object])(ctx, sp[0].o);
	frame[6].o = (checkCast(ctx, &class_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance, sp[0].o));
	LINE_NUMBER(78);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_instanceMap;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntMap_put_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_put_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, ((jint)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_id), (frame[6].o));
	LINE_NUMBER(79);
	((com_thelogicmaster_switchgdx_SwitchSound$SoundInstance *) NULL_CHECK((frame[6].o)))->F_channel = (frame[5].i);
	LINE_NUMBER(80);
	((com_thelogicmaster_switchgdx_SwitchSound$SoundInstance *) NULL_CHECK((frame[6].o)))->F_looping = (frame[4].i);
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK(sp[0].o))->F_id;
	((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK(sp[0].o))->F_id = (temp1 + (jint(1)));
	popStackFrame(ctx);
	return (jlong(temp1));
	}

	popStackFrame(ctx);
}

jlong M_com_thelogicmaster_switchgdx_SwitchSound_play_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound:play", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(86);
	jlong temp0 = (jlong)((func_com_thelogicmaster_switchgdx_SwitchSound_play_float_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchSound_play_float_R_long])(ctx, (frame[0].o), (jfloat(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_com_thelogicmaster_switchgdx_SwitchSound_play_float_R_long(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound:play", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(91);
	jlong temp0 = (jlong)((func_com_thelogicmaster_switchgdx_SwitchSound_play_float_float_float_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchSound_play_float_float_float_R_long])(ctx, (frame[0].o), (frame[1].f), (jfloat(1)), (jfloat(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_com_thelogicmaster_switchgdx_SwitchSound_play_float_float_float_R_long(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound:play", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(96);
	jlong temp0 = (jlong)M_com_thelogicmaster_switchgdx_SwitchSound_play_float_float_float_boolean_R_long(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_com_thelogicmaster_switchgdx_SwitchSound_loop_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound:loop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(101);
	jlong temp0 = (jlong)((func_com_thelogicmaster_switchgdx_SwitchSound_loop_float_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchSound_loop_float_R_long])(ctx, (frame[0].o), (jfloat(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_com_thelogicmaster_switchgdx_SwitchSound_loop_float_R_long(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound:loop", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(106);
	jlong temp0 = (jlong)((func_com_thelogicmaster_switchgdx_SwitchSound_loop_float_float_float_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchSound_loop_float_float_float_R_long])(ctx, (frame[0].o), (frame[1].f), (jfloat(1)), (jfloat(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_com_thelogicmaster_switchgdx_SwitchSound_loop_float_float_float_R_long(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound:loop", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(111);
	jlong temp0 = (jlong)M_com_thelogicmaster_switchgdx_SwitchSound_play_float_float_float_boolean_R_long(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchSound_stop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound:stop", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(116);
	clinit_com_badlogic_gdx_utils_IntMap$Entries(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntMap$Entries);
	sp[1].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_instanceMap;
	init_com_badlogic_gdx_utils_IntMap$Entries_com_badlogic_gdx_utils_IntMap(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntMap$Entries_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap$Entries_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_IntMap$Entry, sp[0].o));
	LINE_NUMBER(117);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap$Entry *) NULL_CHECK((frame[2].o)))->F_value;
	SM_com_thelogicmaster_switchgdx_SwitchSound_stop0_int(ctx, ((jint)((com_thelogicmaster_switchgdx_SwitchSound$SoundInstance *) NULL_CHECK((checkCast(ctx, &class_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance, sp[0].o))))->F_channel));
	LINE_NUMBER(118);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_soundPool;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntMap$Entry *) NULL_CHECK((frame[2].o)))->F_value;
	((func_com_badlogic_gdx_utils_Pool_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_free_java_lang_Object])(ctx, sp[0].o, (checkCast(ctx, &class_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance, sp[1].o)));
	LINE_NUMBER(119);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_instanceMap;
	((func_com_badlogic_gdx_utils_IntMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchSound_pause(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound:pause", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	clinit_com_badlogic_gdx_utils_IntMap$Entries(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntMap$Entries);
	sp[1].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_instanceMap;
	init_com_badlogic_gdx_utils_IntMap$Entries_com_badlogic_gdx_utils_IntMap(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntMap$Entries_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap$Entries_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_IntMap$Entry, sp[0].o));
	LINE_NUMBER(126);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap$Entry *) NULL_CHECK((frame[2].o)))->F_value;
	SM_com_thelogicmaster_switchgdx_SwitchSound_pause0_int(ctx, ((jint)((com_thelogicmaster_switchgdx_SwitchSound$SoundInstance *) NULL_CHECK((checkCast(ctx, &class_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance, sp[0].o))))->F_channel));
	goto label_1;
	}
label_2:;
	LINE_NUMBER(127);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchSound_resume(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound:resume", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(131);
	clinit_com_badlogic_gdx_utils_IntMap$Entries(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntMap$Entries);
	sp[1].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_instanceMap;
	init_com_badlogic_gdx_utils_IntMap$Entries_com_badlogic_gdx_utils_IntMap(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntMap$Entries_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap$Entries_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_IntMap$Entry, sp[0].o));
	LINE_NUMBER(132);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap$Entry *) NULL_CHECK((frame[2].o)))->F_value;
	SM_com_thelogicmaster_switchgdx_SwitchSound_resume0_int(ctx, ((jint)((com_thelogicmaster_switchgdx_SwitchSound$SoundInstance *) NULL_CHECK((checkCast(ctx, &class_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance, sp[0].o))))->F_channel));
	goto label_1;
	}
label_2:;
	LINE_NUMBER(133);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchSound_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound:dispose", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(137);
	if (((jint)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_disposed) == 0) goto label_1;
	}
	LINE_NUMBER(138);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(140);
	((func_com_thelogicmaster_switchgdx_SwitchSound_stop) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchSound_stop])(ctx, (frame[0].o));
	LINE_NUMBER(141);
	M_com_thelogicmaster_switchgdx_SwitchSound_dispose0(ctx, (frame[0].o));
	LINE_NUMBER(142);
	((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_disposed = (jint(1));
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchSound_stop_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound:stop", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_instanceMap;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntMap_containsKey_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_containsKey_int_R_boolean])(ctx, sp[0].o, (jint((frame[1].l))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_instanceMap;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntMap_get_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_get_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (jint((frame[1].l))), (jobject(nullptr)));
	SM_com_thelogicmaster_switchgdx_SwitchSound_stop0_int(ctx, ((jint)((com_thelogicmaster_switchgdx_SwitchSound$SoundInstance *) NULL_CHECK((checkCast(ctx, &class_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance, sp[0].o))))->F_channel));
	LINE_NUMBER(149);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_instanceMap;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntMap_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_remove_int_R_java_lang_Object])(ctx, sp[0].o, (jint((frame[1].l))));
	frame[3].o = (checkCast(ctx, &class_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance, sp[0].o));
	LINE_NUMBER(150);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_soundPool;
	((func_com_badlogic_gdx_utils_Pool_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_free_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	}
label_1:;
	LINE_NUMBER(152);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchSound_pause_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound:pause", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_instanceMap;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntMap_containsKey_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_containsKey_int_R_boolean])(ctx, sp[0].o, (jint((frame[1].l))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_instanceMap;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_get_int_R_java_lang_Object])(ctx, sp[0].o, (jint((frame[1].l))));
	SM_com_thelogicmaster_switchgdx_SwitchSound_pause0_int(ctx, ((jint)((com_thelogicmaster_switchgdx_SwitchSound$SoundInstance *) NULL_CHECK((checkCast(ctx, &class_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance, sp[0].o))))->F_channel));
	}
label_1:;
	LINE_NUMBER(158);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchSound_resume_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound:resume", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_instanceMap;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntMap_containsKey_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_containsKey_int_R_boolean])(ctx, sp[0].o, (jint((frame[1].l))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_instanceMap;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_get_int_R_java_lang_Object])(ctx, sp[0].o, (jint((frame[1].l))));
	SM_com_thelogicmaster_switchgdx_SwitchSound_resume0_int(ctx, ((jint)((com_thelogicmaster_switchgdx_SwitchSound$SoundInstance *) NULL_CHECK((checkCast(ctx, &class_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance, sp[0].o))))->F_channel));
	}
label_1:;
	LINE_NUMBER(164);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchSound_setLooping_long_boolean(jcontext ctx, jobject self, jlong param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound:setLooping", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].i = param1;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_instanceMap;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_get_int_R_java_lang_Object])(ctx, sp[0].o, (jint((frame[1].l))));
	frame[4].o = (checkCast(ctx, &class_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance, sp[0].o));
	LINE_NUMBER(170);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	if (((jint)((com_thelogicmaster_switchgdx_SwitchSound$SoundInstance *) NULL_CHECK((frame[4].o)))->F_looping) == (frame[3].i)) goto label_2;
	}
	{
	LINE_NUMBER(171);
	M_com_thelogicmaster_switchgdx_SwitchSound_setLooping0_int_boolean(ctx, (frame[0].o), ((jint)((com_thelogicmaster_switchgdx_SwitchSound$SoundInstance *) NULL_CHECK((frame[4].o)))->F_channel), (frame[3].i));
	LINE_NUMBER(172);
	((com_thelogicmaster_switchgdx_SwitchSound$SoundInstance *) NULL_CHECK((frame[4].o)))->F_looping = (frame[3].i);
	}
label_2:;
	LINE_NUMBER(174);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchSound_setPitch_long_float(jcontext ctx, jobject self, jlong param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound:setPitch", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].f = param1;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_instanceMap;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntMap_containsKey_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_containsKey_int_R_boolean])(ctx, sp[0].o, (jint((frame[1].l))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_instanceMap;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_get_int_R_java_lang_Object])(ctx, sp[0].o, (jint((frame[1].l))));
	SM_com_thelogicmaster_switchgdx_SwitchSound_setPitch0_int_float(ctx, ((jint)((com_thelogicmaster_switchgdx_SwitchSound$SoundInstance *) NULL_CHECK((checkCast(ctx, &class_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance, sp[0].o))))->F_channel), (frame[3].f));
	}
label_1:;
	LINE_NUMBER(181);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchSound_setVolume_long_float(jcontext ctx, jobject self, jlong param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound:setVolume", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].f = param1;
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_instanceMap;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntMap_containsKey_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_containsKey_int_R_boolean])(ctx, sp[0].o, (jint((frame[1].l))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_instanceMap;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_get_int_R_java_lang_Object])(ctx, sp[0].o, (jint((frame[1].l))));
	SM_com_thelogicmaster_switchgdx_SwitchSound_setVolume0_int_float(ctx, ((jint)((com_thelogicmaster_switchgdx_SwitchSound$SoundInstance *) NULL_CHECK((checkCast(ctx, &class_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance, sp[0].o))))->F_channel), (frame[3].f));
	}
label_1:;
	LINE_NUMBER(187);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchSound_setPan_long_float_float(jcontext ctx, jobject self, jlong param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound:setPan", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].f = param1;
	frame[4].f = param2;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_instanceMap;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntMap_containsKey_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_containsKey_int_R_boolean])(ctx, sp[0].o, (jint((frame[1].l))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchSound *) NULL_CHECK((frame[0].o)))->F_instanceMap;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_get_int_R_java_lang_Object])(ctx, sp[0].o, (jint((frame[1].l))));
	frame[5].i = ((jint)((com_thelogicmaster_switchgdx_SwitchSound$SoundInstance *) NULL_CHECK((checkCast(ctx, &class_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance, sp[0].o))))->F_channel);
	LINE_NUMBER(193);
	SM_com_thelogicmaster_switchgdx_SwitchSound_setPan0_int_float(ctx, (frame[5].i), (frame[3].f));
	LINE_NUMBER(194);
	SM_com_thelogicmaster_switchgdx_SwitchSound_setVolume0_int_float(ctx, (frame[5].i), (frame[4].f));
	}
label_1:;
	LINE_NUMBER(196);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_thelogicmaster_switchgdx_SwitchSound[] {
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
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_dispose,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_play_R_long,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_play_float_R_long,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_play_float_float_float_R_long,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_loop_R_long,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_loop_float_R_long,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_loop_float_float_float_R_long,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_stop,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_pause,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_resume,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_stop_long,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_pause_long,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_resume_long,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_setLooping_long_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_setPitch_long_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_setVolume_long_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_setPan_long_float_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_update_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_onSoundFinished_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_addListener_com_thelogicmaster_switchgdx_SwitchSound$Listener,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_removeListener_com_thelogicmaster_switchgdx_SwitchSound$Listener,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_play_float_float_float_boolean_R_long,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_create_java_lang_String,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_create_Array1_byte,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_dispose0,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_play0_boolean_R_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchSound_setLooping0_int_boolean,
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
	{ "dispose", "()V" },
	{ "play", "()J" },
	{ "play", "(F)J" },
	{ "play", "(FFF)J" },
	{ "loop", "()J" },
	{ "loop", "(F)J" },
	{ "loop", "(FFF)J" },
	{ "stop", "()V" },
	{ "pause", "()V" },
	{ "resume", "()V" },
	{ "stop", "(J)V" },
	{ "pause", "(J)V" },
	{ "resume", "(J)V" },
	{ "setLooping", "(JZ)V" },
	{ "setPitch", "(JF)V" },
	{ "setVolume", "(JF)V" },
	{ "setPan", "(JFF)V" },
	{ "update", "()Z" },
	{ "onSoundFinished", "(I)V" },
	{ "addListener", "(Lcom/thelogicmaster/switchgdx/SwitchSound$Listener;)V" },
	{ "removeListener", "(Lcom/thelogicmaster/switchgdx/SwitchSound$Listener;)V" },
	{ "play", "(FFFZ)J" },
	{ "create", "(Ljava/lang/String;)V" },
	{ "create", "([B)V" },
	{ "dispose0", "()V" },
	{ "play0", "(Z)I" },
	{ "setLooping0", "(IZ)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_audio_Sound, };

static jclass innerClasses[] {
	&class_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance,
	&class_com_thelogicmaster_switchgdx_SwitchSound$Listener,
};

static FieldMetadata fields[] {
	{ "handle", &class_long, offsetof(com_thelogicmaster_switchgdx_SwitchSound, F_handle), "J", 2 },
	{ "instanceMap", &class_com_badlogic_gdx_utils_IntMap, offsetof(com_thelogicmaster_switchgdx_SwitchSound, F_instanceMap), "Lcom/badlogic/gdx/utils/IntMap;", 18 },
	{ "disposed", &class_boolean, offsetof(com_thelogicmaster_switchgdx_SwitchSound, F_disposed), "Z", 2 },
	{ "id", &class_int, offsetof(com_thelogicmaster_switchgdx_SwitchSound, F_id), "I", 2 },
	{ "soundPool", &class_com_badlogic_gdx_utils_Pool, offsetof(com_thelogicmaster_switchgdx_SwitchSound, F_soundPool), "Lcom/badlogic/gdx/utils/Pool;", 18 },
	{ "listeners", &class_java_util_ArrayList, offsetof(com_thelogicmaster_switchgdx_SwitchSound, F_listeners), "Ljava/util/ArrayList;", 18 },
	{ "wavData", getArrayClass(&class_byte, 1), offsetof(com_thelogicmaster_switchgdx_SwitchSound, F_wavData), "[B", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_thelogicmaster_switchgdx_SwitchSound_com_badlogic_gdx_files_FileHandle, 0, "(Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "<init>", (intptr_t) init_com_thelogicmaster_switchgdx_SwitchSound_Array1_byte, 0, "([B)V", 1 },
	{ "update", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_update_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_update_R_boolean, "()Z", 0 },
	{ "onSoundFinished", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_onSoundFinished_int, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_onSoundFinished_int, "(I)V", 0 },
	{ "addListener", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_addListener_com_thelogicmaster_switchgdx_SwitchSound$Listener, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_addListener_com_thelogicmaster_switchgdx_SwitchSound$Listener, "(Lcom/thelogicmaster/switchgdx/SwitchSound$Listener;)V", 1 },
	{ "removeListener", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_removeListener_com_thelogicmaster_switchgdx_SwitchSound$Listener, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_removeListener_com_thelogicmaster_switchgdx_SwitchSound$Listener, "(Lcom/thelogicmaster/switchgdx/SwitchSound$Listener;)V", 1 },
	{ "play", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_play_float_float_float_boolean_R_long, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_play_float_float_float_boolean_R_long, "(FFFZ)J", 2 },
	{ "play", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_play_R_long, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_play_R_long, "()J", 1 },
	{ "play", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_play_float_R_long, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_play_float_R_long, "(F)J", 1 },
	{ "play", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_play_float_float_float_R_long, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_play_float_float_float_R_long, "(FFF)J", 1 },
	{ "loop", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_loop_R_long, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_loop_R_long, "()J", 1 },
	{ "loop", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_loop_float_R_long, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_loop_float_R_long, "(F)J", 1 },
	{ "loop", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_loop_float_float_float_R_long, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_loop_float_float_float_R_long, "(FFF)J", 1 },
	{ "stop", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_stop, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_stop, "()V", 1 },
	{ "pause", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_pause, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_pause, "()V", 1 },
	{ "resume", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_resume, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_resume, "()V", 1 },
	{ "dispose", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_dispose, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_dispose, "()V", 1 },
	{ "stop", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_stop_long, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_stop_long, "(J)V", 1 },
	{ "pause", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_pause_long, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_pause_long, "(J)V", 1 },
	{ "resume", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_resume_long, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_resume_long, "(J)V", 1 },
	{ "setLooping", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_setLooping_long_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_setLooping_long_boolean, "(JZ)V", 1 },
	{ "setPitch", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_setPitch_long_float, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_setPitch_long_float, "(JF)V", 1 },
	{ "setVolume", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_setVolume_long_float, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_setVolume_long_float, "(JF)V", 1 },
	{ "setPan", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_setPan_long_float_float, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_setPan_long_float_float, "(JFF)V", 1 },
	{ "create", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_create_java_lang_String, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_create_java_lang_String, "(Ljava/lang/String;)V", 258 },
	{ "create", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_create_Array1_byte, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_create_Array1_byte, "([B)V", 258 },
	{ "dispose0", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_dispose0, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_dispose0, "()V", 258 },
	{ "play0", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_play0_boolean_R_int, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_play0_boolean_R_int, "(Z)I", 258 },
	{ "setLooping0", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchSound_setLooping0_int_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchSound_setLooping0_int_boolean, "(IZ)V", 258 },
	{ "stop0", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchSound_stop0_int, 0, "(I)V", 266 },
	{ "pause0", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchSound_pause0_int, 0, "(I)V", 266 },
	{ "resume0", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchSound_resume0_int, 0, "(I)V", 266 },
	{ "setPitch0", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchSound_setPitch0_int_float, 0, "(IF)V", 266 },
	{ "setVolume0", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchSound_setVolume0_int_float, 0, "(IF)V", 266 },
	{ "setPan0", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchSound_setPan0_int_float, 0, "(IF)V", 266 },
};

Class class_com_thelogicmaster_switchgdx_SwitchSound{
		.nativeName = (intptr_t) "com/thelogicmaster/switchgdx/SwitchSound",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_thelogicmaster_switchgdx_SwitchSound),
		.classVtable = (intptr_t) vtable_com_thelogicmaster_switchgdx_SwitchSound,
		.staticInitializer = (intptr_t) clinit_com_thelogicmaster_switchgdx_SwitchSound,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_thelogicmaster_switchgdx_SwitchSound,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 35,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 38,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_thelogicmaster_switchgdx_SwitchSound = registerClass(&class_com_thelogicmaster_switchgdx_SwitchSound);

}

