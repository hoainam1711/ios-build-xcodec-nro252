#include "com/thelogicmaster/switchgdx/SwitchAudio.h"
#include "com/badlogic/gdx/audio/Music.h"
#include "com/thelogicmaster/switchgdx/SwitchSound.h"
#include "com/thelogicmaster/switchgdx/SwitchAudio_invoke_java_lang_Runnable_1.h"
#include "java/util/Iterator.h"
#include "com/thelogicmaster/switchgdx/SwitchAudio_invoke_java_lang_Runnable_0.h"
#include "com/badlogic/gdx/Application.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/thelogicmaster/switchgdx/SwitchAudio.h"
#include "java/lang/Runnable.h"
#include "java/lang/Object.h"
#include "com/thelogicmaster/switchgdx/SwitchAudioDevice.h"
#include "com/badlogic/gdx/audio/AudioDevice.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/audio/AudioRecorder.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/Audio.h"
#include "com/thelogicmaster/switchgdx/SwitchMusic.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterable.h"
#include "com/badlogic/gdx/audio/Sound.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"

extern "C" {

jobject SF_com_thelogicmaster_switchgdx_SwitchAudio_musics;
jobject SF_com_thelogicmaster_switchgdx_SwitchAudio_sounds;

void mark_com_thelogicmaster_switchgdx_SwitchAudio(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_thelogicmaster_switchgdx_SwitchAudio_musics)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_thelogicmaster_switchgdx_SwitchAudio_musics)->clazz)->markFunction)((jobject) SF_com_thelogicmaster_switchgdx_SwitchAudio_musics, mark, depth + 1);
		if (SF_com_thelogicmaster_switchgdx_SwitchAudio_sounds)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_thelogicmaster_switchgdx_SwitchAudio_sounds)->clazz)->markFunction)((jobject) SF_com_thelogicmaster_switchgdx_SwitchAudio_sounds, mark, depth + 1);
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
	auto self = (com_thelogicmaster_switchgdx_SwitchAudio *) object;
}

void init_com_thelogicmaster_switchgdx_SwitchAudio(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchAudio:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchAudio(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchAudio_update_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchAudio:update", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(18);
	clinit_com_badlogic_gdx_utils_Array$ArrayIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array$ArrayIterator);
	clinit_com_thelogicmaster_switchgdx_SwitchAudio(ctx);
	sp[1].o = (jobject)SF_com_thelogicmaster_switchgdx_SwitchAudio_musics;
	init_com_badlogic_gdx_utils_Array$ArrayIterator_com_badlogic_gdx_utils_Array(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(19);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array$ArrayIterator_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_thelogicmaster_switchgdx_SwitchMusic, sp[0].o));
	LINE_NUMBER(20);
	jint temp0 = (jint)((func_com_thelogicmaster_switchgdx_SwitchMusic_update_float_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_update_float_R_boolean])(ctx, (frame[4].o), (frame[1].f));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(21);
	((func_com_badlogic_gdx_utils_Array$ArrayIterator_remove) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_remove])(ctx, (frame[2].o));
	}
label_5:;
	LINE_NUMBER(20);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(23);
	clinit_com_badlogic_gdx_utils_Array$ArrayIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array$ArrayIterator);
	clinit_com_thelogicmaster_switchgdx_SwitchAudio(ctx);
	sp[1].o = (jobject)SF_com_thelogicmaster_switchgdx_SwitchAudio_sounds;
	init_com_badlogic_gdx_utils_Array$ArrayIterator_com_badlogic_gdx_utils_Array(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(24);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array$ArrayIterator_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_com_thelogicmaster_switchgdx_SwitchSound, sp[0].o));
	LINE_NUMBER(25);
	jint temp0 = (jint)((func_com_thelogicmaster_switchgdx_SwitchSound_update_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchSound_update_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(26);
	((func_com_badlogic_gdx_utils_Array$ArrayIterator_remove) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_remove])(ctx, (frame[3].o));
	}
label_11:;
	LINE_NUMBER(25);
	goto label_8;
label_9:;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchAudio_newAudioDevice_int_boolean_R_com_badlogic_gdx_audio_AudioDevice(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchAudio:newAudioDevice", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(31);
	clinit_com_thelogicmaster_switchgdx_SwitchAudioDevice(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchAudioDevice);
	init_com_thelogicmaster_switchgdx_SwitchAudioDevice_int_boolean(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchAudio_newAudioRecorder_int_boolean_R_com_badlogic_gdx_audio_AudioRecorder(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchAudio:newAudioRecorder", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchAudio_newSound_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_audio_Sound(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchAudio:newSound", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(41);
	clinit_com_thelogicmaster_switchgdx_SwitchSound(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchSound);
	init_com_thelogicmaster_switchgdx_SwitchSound_com_badlogic_gdx_files_FileHandle(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(42);
	clinit_com_thelogicmaster_switchgdx_SwitchAudio(ctx);
	sp[0].o = (jobject)SF_com_thelogicmaster_switchgdx_SwitchAudio_sounds;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchAudio_newSound_Array1_byte_R_com_thelogicmaster_switchgdx_SwitchSound(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchAudio:newSound", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(47);
	clinit_com_thelogicmaster_switchgdx_SwitchSound(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchSound);
	init_com_thelogicmaster_switchgdx_SwitchSound_Array1_byte(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(48);
	clinit_com_thelogicmaster_switchgdx_SwitchAudio(ctx);
	sp[0].o = (jobject)SF_com_thelogicmaster_switchgdx_SwitchAudio_sounds;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchAudio_newMusic_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_audio_Music(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchAudio:newMusic", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(54);
	clinit_com_thelogicmaster_switchgdx_SwitchMusic(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchMusic);
	init_com_thelogicmaster_switchgdx_SwitchMusic_com_badlogic_gdx_files_FileHandle(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(55);
	clinit_com_thelogicmaster_switchgdx_SwitchAudio(ctx);
	sp[0].o = (jobject)SF_com_thelogicmaster_switchgdx_SwitchAudio_musics;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchAudio_switchOutputDevice_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchAudio:switchOutputDevice", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchAudio_getAvailableOutputDevices_R_Array1_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchAudio:getAvailableOutputDevices", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchAudio_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchAudio:dispose", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	clinit_com_badlogic_gdx_utils_Array$ArrayIterable(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array$ArrayIterable);
	clinit_com_thelogicmaster_switchgdx_SwitchAudio(ctx);
	sp[1].o = (jobject)SF_com_thelogicmaster_switchgdx_SwitchAudio_musics;
	init_com_badlogic_gdx_utils_Array$ArrayIterable_com_badlogic_gdx_utils_Array(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_thelogicmaster_switchgdx_SwitchMusic, sp[0].o));
	LINE_NUMBER(72);
	((func_com_thelogicmaster_switchgdx_SwitchMusic_dispose) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_dispose])(ctx, (frame[2].o));
	LINE_NUMBER(73);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(74);
	clinit_com_badlogic_gdx_utils_Array$ArrayIterable(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array$ArrayIterable);
	clinit_com_thelogicmaster_switchgdx_SwitchAudio(ctx);
	sp[1].o = (jobject)SF_com_thelogicmaster_switchgdx_SwitchAudio_sounds;
	init_com_badlogic_gdx_utils_Array$ArrayIterable_com_badlogic_gdx_utils_Array(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_thelogicmaster_switchgdx_SwitchSound, sp[0].o));
	LINE_NUMBER(75);
	((func_com_thelogicmaster_switchgdx_SwitchSound_dispose) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchSound_dispose])(ctx, (frame[2].o));
	LINE_NUMBER(76);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(77);
	clinit_com_thelogicmaster_switchgdx_SwitchAudio(ctx);
	sp[0].o = (jobject)SF_com_thelogicmaster_switchgdx_SwitchAudio_musics;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(78);
	clinit_com_thelogicmaster_switchgdx_SwitchAudio(ctx);
	sp[0].o = (jobject)SF_com_thelogicmaster_switchgdx_SwitchAudio_sounds;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_thelogicmaster_switchgdx_SwitchAudio_onMusicFinished(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchAudio:onMusicFinished", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchAudio(ctx);
	{
	LINE_NUMBER(82);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	{ /* InvokeDynamic */
		clinit_com_thelogicmaster_switchgdx_SwitchAudio_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (com_thelogicmaster_switchgdx_SwitchAudio_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchAudio_invoke_java_lang_Runnable_0);
		sp[1].o = (jobject) proxy;
	}
	((func_com_badlogic_gdx_Application_postRunnable_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_postRunnable_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_thelogicmaster_switchgdx_SwitchAudio_onSoundFinished_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchAudio:onSoundFinished", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchAudio(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(89);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	{ /* InvokeDynamic */
		clinit_com_thelogicmaster_switchgdx_SwitchAudio_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (com_thelogicmaster_switchgdx_SwitchAudio_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchAudio_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (frame[0].i);
		sp[1].o = (jobject) proxy;
	}
	((func_com_badlogic_gdx_Application_postRunnable_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_postRunnable_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_thelogicmaster_switchgdx_SwitchAudio_lambda$onSoundFinished$1_int(jcontext ctx, jint param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchAudio:lambda$onSoundFinished$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchAudio(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(90);
	clinit_com_badlogic_gdx_utils_Array$ArrayIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array$ArrayIterator);
	clinit_com_thelogicmaster_switchgdx_SwitchAudio(ctx);
	sp[1].o = (jobject)SF_com_thelogicmaster_switchgdx_SwitchAudio_sounds;
	init_com_badlogic_gdx_utils_Array$ArrayIterator_com_badlogic_gdx_utils_Array(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array$ArrayIterator_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_thelogicmaster_switchgdx_SwitchSound, sp[0].o));
	LINE_NUMBER(91);
	((func_com_thelogicmaster_switchgdx_SwitchSound_onSoundFinished_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchSound_onSoundFinished_int])(ctx, (frame[2].o), (frame[0].i));
	goto label_1;
	}
label_2:;
	LINE_NUMBER(92);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_thelogicmaster_switchgdx_SwitchAudio_lambda$onMusicFinished$0(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchAudio:lambda$onMusicFinished$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchAudio(ctx);
	{
	LINE_NUMBER(83);
	clinit_com_badlogic_gdx_utils_Array$ArrayIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array$ArrayIterator);
	clinit_com_thelogicmaster_switchgdx_SwitchAudio(ctx);
	sp[1].o = (jobject)SF_com_thelogicmaster_switchgdx_SwitchAudio_musics;
	init_com_badlogic_gdx_utils_Array$ArrayIterator_com_badlogic_gdx_utils_Array(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array$ArrayIterator_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_com_thelogicmaster_switchgdx_SwitchMusic, sp[0].o));
	LINE_NUMBER(84);
	((func_com_thelogicmaster_switchgdx_SwitchMusic_onMusicFinished) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_onMusicFinished])(ctx, (frame[1].o));
	goto label_1;
	}
label_2:;
	LINE_NUMBER(85);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_com_thelogicmaster_switchgdx_SwitchAudio(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchAudio:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchAudio(ctx);
	{
	LINE_NUMBER(14);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	clinit_com_thelogicmaster_switchgdx_SwitchAudio(ctx);
	SF_com_thelogicmaster_switchgdx_SwitchAudio_musics = sp[0].o;
	LINE_NUMBER(15);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	clinit_com_thelogicmaster_switchgdx_SwitchAudio(ctx);
	SF_com_thelogicmaster_switchgdx_SwitchAudio_sounds = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_thelogicmaster_switchgdx_SwitchAudio[] {
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
	(void *) M_com_thelogicmaster_switchgdx_SwitchAudio_dispose,
	(void *) M_com_thelogicmaster_switchgdx_SwitchAudio_newAudioDevice_int_boolean_R_com_badlogic_gdx_audio_AudioDevice,
	(void *) M_com_thelogicmaster_switchgdx_SwitchAudio_newAudioRecorder_int_boolean_R_com_badlogic_gdx_audio_AudioRecorder,
	(void *) M_com_thelogicmaster_switchgdx_SwitchAudio_newSound_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_audio_Sound,
	(void *) M_com_thelogicmaster_switchgdx_SwitchAudio_newMusic_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_audio_Music,
	(void *) M_com_thelogicmaster_switchgdx_SwitchAudio_switchOutputDevice_java_lang_String_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchAudio_getAvailableOutputDevices_R_Array1_java_lang_String,
	(void *) M_com_thelogicmaster_switchgdx_SwitchAudio_update_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchAudio_newSound_Array1_byte_R_com_thelogicmaster_switchgdx_SwitchSound,
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
	{ "newAudioDevice", "(IZ)Lcom/badlogic/gdx/audio/AudioDevice;" },
	{ "newAudioRecorder", "(IZ)Lcom/badlogic/gdx/audio/AudioRecorder;" },
	{ "newSound", "(Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/audio/Sound;" },
	{ "newMusic", "(Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/audio/Music;" },
	{ "switchOutputDevice", "(Ljava/lang/String;)Z" },
	{ "getAvailableOutputDevices", "()[Ljava/lang/String;" },
	{ "update", "(F)V" },
	{ "newSound", "([B)Lcom/thelogicmaster/switchgdx/SwitchSound;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_Audio, };

static FieldMetadata fields[] {
	{ "musics", &class_com_badlogic_gdx_utils_Array, (intptr_t) &SF_com_thelogicmaster_switchgdx_SwitchAudio_musics, "Lcom/badlogic/gdx/utils/Array;", 26 },
	{ "sounds", &class_com_badlogic_gdx_utils_Array, (intptr_t) &SF_com_thelogicmaster_switchgdx_SwitchAudio_sounds, "Lcom/badlogic/gdx/utils/Array;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_thelogicmaster_switchgdx_SwitchAudio, 0, "()V", 1 },
	{ "update", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchAudio_update_float, VTABLE_com_thelogicmaster_switchgdx_SwitchAudio_update_float, "(F)V", 0 },
	{ "newAudioDevice", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchAudio_newAudioDevice_int_boolean_R_com_badlogic_gdx_audio_AudioDevice, VTABLE_com_thelogicmaster_switchgdx_SwitchAudio_newAudioDevice_int_boolean_R_com_badlogic_gdx_audio_AudioDevice, "(IZ)Lcom/badlogic/gdx/audio/AudioDevice;", 1 },
	{ "newAudioRecorder", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchAudio_newAudioRecorder_int_boolean_R_com_badlogic_gdx_audio_AudioRecorder, VTABLE_com_thelogicmaster_switchgdx_SwitchAudio_newAudioRecorder_int_boolean_R_com_badlogic_gdx_audio_AudioRecorder, "(IZ)Lcom/badlogic/gdx/audio/AudioRecorder;", 1 },
	{ "newSound", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchAudio_newSound_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_audio_Sound, VTABLE_com_thelogicmaster_switchgdx_SwitchAudio_newSound_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_audio_Sound, "(Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/audio/Sound;", 1 },
	{ "newSound", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchAudio_newSound_Array1_byte_R_com_thelogicmaster_switchgdx_SwitchSound, VTABLE_com_thelogicmaster_switchgdx_SwitchAudio_newSound_Array1_byte_R_com_thelogicmaster_switchgdx_SwitchSound, "([B)Lcom/thelogicmaster/switchgdx/SwitchSound;", 1 },
	{ "newMusic", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchAudio_newMusic_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_audio_Music, VTABLE_com_thelogicmaster_switchgdx_SwitchAudio_newMusic_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_audio_Music, "(Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/audio/Music;", 1 },
	{ "switchOutputDevice", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchAudio_switchOutputDevice_java_lang_String_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchAudio_switchOutputDevice_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "getAvailableOutputDevices", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchAudio_getAvailableOutputDevices_R_Array1_java_lang_String, VTABLE_com_thelogicmaster_switchgdx_SwitchAudio_getAvailableOutputDevices_R_Array1_java_lang_String, "()[Ljava/lang/String;", 1 },
	{ "dispose", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchAudio_dispose, VTABLE_com_thelogicmaster_switchgdx_SwitchAudio_dispose, "()V", 1 },
	{ "onMusicFinished", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchAudio_onMusicFinished, 0, "()V", 10 },
	{ "onSoundFinished", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchAudio_onSoundFinished_int, 0, "(I)V", 10 },
	{ "lambda$onSoundFinished$1", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchAudio_lambda$onSoundFinished$1_int, 0, "(I)V", 4106 },
	{ "lambda$onMusicFinished$0", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchAudio_lambda$onMusicFinished$0, 0, "()V", 4106 },
	{ "<clinit>", (intptr_t) clinit_com_thelogicmaster_switchgdx_SwitchAudio, 0, "()V", 8 },
};

Class class_com_thelogicmaster_switchgdx_SwitchAudio{
		.nativeName = (intptr_t) "com/thelogicmaster/switchgdx/SwitchAudio",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_thelogicmaster_switchgdx_SwitchAudio),
		.classVtable = (intptr_t) vtable_com_thelogicmaster_switchgdx_SwitchAudio,
		.staticInitializer = (intptr_t) clinit_com_thelogicmaster_switchgdx_SwitchAudio,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_thelogicmaster_switchgdx_SwitchAudio,
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
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_thelogicmaster_switchgdx_SwitchAudio = registerClass(&class_com_thelogicmaster_switchgdx_SwitchAudio);

}

