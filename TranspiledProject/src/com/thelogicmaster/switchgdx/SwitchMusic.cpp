#include "com/thelogicmaster/switchgdx/SwitchMusic.h"
#include "com/badlogic/gdx/audio/Music.h"
#include "com/badlogic/gdx/audio/Music_OnCompletionListener.h"
#include "java/lang/Object.h"
#include "com/thelogicmaster/switchgdx/SwitchMusic_invoke_java_lang_Runnable_0.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/Application.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/thelogicmaster/switchgdx/SwitchMusic.h"
#include "java/io/File.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_com_thelogicmaster_switchgdx_SwitchMusic(jobject object, jint mark, jint depth) {
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
	auto self = (com_thelogicmaster_switchgdx_SwitchMusic *) object;
	if (self->F_listener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listener)->clazz)->markFunction)((jobject) self->F_listener, mark, depth + 1);
}

void clinit_com_thelogicmaster_switchgdx_SwitchMusic(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_thelogicmaster_switchgdx_SwitchMusic_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchMusic:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchMusic(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(15);
	((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_volume = (jfloat(1));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_io_File_getPath_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_File_getPath_R_java_lang_String])(ctx, sp[1].o);
	M_com_thelogicmaster_switchgdx_SwitchMusic_create_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchMusic_update_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchMusic:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(24);
	jint temp0 = (jint)((func_com_thelogicmaster_switchgdx_SwitchMusic_isPlaying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_isPlaying_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK(sp[0].o))->F_position = (((jfloat)((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK(sp[0].o))->F_position) + (frame[1].f));
	}
label_1:;
	{
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return ((jint)((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_disposed);
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchMusic_onMusicFinished(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchMusic:onMusicFinished", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(31);
	if (((jint)((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_playing) != 0) goto label_1;
	}
	LINE_NUMBER(32);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(34);
	((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_position = (jfloat(0));
	LINE_NUMBER(35);
	if (((jint)((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_looping) != 0) goto label_4;
	}
	{
	LINE_NUMBER(36);
	((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_playing = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_listener;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(39);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	{ /* InvokeDynamic */
		clinit_com_thelogicmaster_switchgdx_SwitchMusic_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (com_thelogicmaster_switchgdx_SwitchMusic_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchMusic_invoke_java_lang_Runnable_0);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_com_badlogic_gdx_Application_postRunnable_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_postRunnable_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_6:;
	LINE_NUMBER(40);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchMusic_play(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchMusic:play", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	if (((jint)((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_paused) == 0) goto label_1;
	}
	{
	LINE_NUMBER(45);
	SM_com_thelogicmaster_switchgdx_SwitchMusic_resume(ctx);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(47);
	M_com_thelogicmaster_switchgdx_SwitchMusic_start_boolean(ctx, (frame[0].o), ((jint)((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_looping));
	}
label_3:;
	{
	LINE_NUMBER(48);
	SM_com_thelogicmaster_switchgdx_SwitchMusic_setVolume0_float(ctx, ((jfloat)((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_volume));
	LINE_NUMBER(50);
	((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_paused = (jint(0));
	LINE_NUMBER(51);
	((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_playing = (jint(1));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchMusic_pause(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchMusic:pause", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(56);
	if (((jint)((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_playing) != 0) goto label_1;
	}
	LINE_NUMBER(57);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(58);
	((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_paused = (jint(1));
	LINE_NUMBER(59);
	SM_com_thelogicmaster_switchgdx_SwitchMusic_pause0(ctx);
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchMusic_stop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchMusic:stop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	if (((jint)((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_playing) != 0) goto label_1;
	}
	LINE_NUMBER(65);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(66);
	((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_playing = (jint(0));
	LINE_NUMBER(67);
	((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_position = (jfloat(0));
	LINE_NUMBER(68);
	SM_com_thelogicmaster_switchgdx_SwitchMusic_stop0(ctx);
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchMusic_isPlaying_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchMusic:isPlaying", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	if (((jint)((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_paused) != 0) goto label_1;
	}
	{
	if (((jint)((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_playing) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchMusic_setLooping_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchMusic:setLooping", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(78);
	if (((jint)((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_playing) == 0) goto label_1;
	}
	{
	LINE_NUMBER(79);
	frame[2].f = ((jfloat)((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_position);
	LINE_NUMBER(80);
	((func_com_thelogicmaster_switchgdx_SwitchMusic_stop) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_stop])(ctx, (frame[0].o));
	LINE_NUMBER(81);
	SM_com_thelogicmaster_switchgdx_SwitchMusic_setPosition0_float(ctx, (frame[2].f));
	LINE_NUMBER(82);
	M_com_thelogicmaster_switchgdx_SwitchMusic_start_boolean(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(83);
	((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_position = (frame[2].f);
	LINE_NUMBER(84);
	if (((jint)((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_paused) == 0) goto label_1;
	}
	LINE_NUMBER(85);
	SM_com_thelogicmaster_switchgdx_SwitchMusic_pause0(ctx);
label_1:;
	{
	LINE_NUMBER(87);
	((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_looping = (frame[1].i);
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchMusic_isLooping_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchMusic:isLooping", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return ((jint)((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_looping);
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchMusic_setVolume_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchMusic:setVolume", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(97);
	((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_volume = (frame[1].f);
	LINE_NUMBER(98);
	if (((jint)((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_playing) == 0) goto label_2;
	}
	{
	LINE_NUMBER(99);
	SM_com_thelogicmaster_switchgdx_SwitchMusic_setVolume0_float(ctx, (frame[1].f));
	}
label_2:;
	LINE_NUMBER(100);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_com_thelogicmaster_switchgdx_SwitchMusic_getVolume_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchMusic:getVolume", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return ((jfloat)((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_volume);
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchMusic_setPan_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchMusic:setPan", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	LINE_NUMBER(110);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchMusic_setPosition_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchMusic:setPosition", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(114);
	((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_position = (frame[1].f);
	LINE_NUMBER(115);
	if (((jint)((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_playing) == 0) goto label_2;
	}
	{
	LINE_NUMBER(116);
	SM_com_thelogicmaster_switchgdx_SwitchMusic_setPosition0_float(ctx, (frame[1].f));
	}
label_2:;
	LINE_NUMBER(117);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_com_thelogicmaster_switchgdx_SwitchMusic_getPosition_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchMusic:getPosition", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return ((jfloat)((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_position);
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchMusic_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchMusic:dispose", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(126);
	if (((jint)((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_disposed) == 0) goto label_1;
	}
	LINE_NUMBER(127);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(128);
	((func_com_thelogicmaster_switchgdx_SwitchMusic_stop) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_stop])(ctx, (frame[0].o));
	LINE_NUMBER(129);
	M_com_thelogicmaster_switchgdx_SwitchMusic_dispose0(ctx, (frame[0].o));
	LINE_NUMBER(130);
	((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_disposed = (jint(1));
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchMusic_setOnCompletionListener_com_badlogic_gdx_audio_Music$OnCompletionListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchMusic:setOnCompletionListener", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(135);
	((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_listener = (jref) (frame[1].o);
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchMusic_lambda$onMusicFinished$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchMusic:lambda$onMusicFinished$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchMusic *) NULL_CHECK((frame[0].o)))->F_listener;
	((func_com_badlogic_gdx_audio_Music$OnCompletionListener_onCompletion_com_badlogic_gdx_audio_Music) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_audio_Music$OnCompletionListener, INDEX_com_badlogic_gdx_audio_Music$OnCompletionListener_onCompletion_com_badlogic_gdx_audio_Music, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_thelogicmaster_switchgdx_SwitchMusic[] {
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
	(void *) M_com_thelogicmaster_switchgdx_SwitchMusic_dispose,
	(void *) M_com_thelogicmaster_switchgdx_SwitchMusic_play,
	(void *) M_com_thelogicmaster_switchgdx_SwitchMusic_pause,
	(void *) M_com_thelogicmaster_switchgdx_SwitchMusic_stop,
	(void *) M_com_thelogicmaster_switchgdx_SwitchMusic_isPlaying_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchMusic_setLooping_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchMusic_isLooping_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchMusic_setVolume_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchMusic_getVolume_R_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchMusic_setPan_float_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchMusic_setPosition_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchMusic_getPosition_R_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchMusic_setOnCompletionListener_com_badlogic_gdx_audio_Music$OnCompletionListener,
	(void *) M_com_thelogicmaster_switchgdx_SwitchMusic_update_float_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchMusic_onMusicFinished,
	(void *) M_com_thelogicmaster_switchgdx_SwitchMusic_create_java_lang_String,
	(void *) M_com_thelogicmaster_switchgdx_SwitchMusic_start_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchMusic_dispose0,
	(void *) M_com_thelogicmaster_switchgdx_SwitchMusic_lambda$onMusicFinished$0,
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
	{ "play", "()V" },
	{ "pause", "()V" },
	{ "stop", "()V" },
	{ "isPlaying", "()Z" },
	{ "setLooping", "(Z)V" },
	{ "isLooping", "()Z" },
	{ "setVolume", "(F)V" },
	{ "getVolume", "()F" },
	{ "setPan", "(FF)V" },
	{ "setPosition", "(F)V" },
	{ "getPosition", "()F" },
	{ "setOnCompletionListener", "(Lcom/badlogic/gdx/audio/Music$OnCompletionListener;)V" },
	{ "update", "(F)Z" },
	{ "onMusicFinished", "()V" },
	{ "create", "(Ljava/lang/String;)V" },
	{ "start", "(Z)V" },
	{ "dispose0", "()V" },
	{ "lambda$onMusicFinished$0", "()V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_audio_Music, };

static FieldMetadata fields[] {
	{ "handle", &class_long, offsetof(com_thelogicmaster_switchgdx_SwitchMusic, F_handle), "J", 2 },
	{ "listener", &class_com_badlogic_gdx_audio_Music$OnCompletionListener, offsetof(com_thelogicmaster_switchgdx_SwitchMusic, F_listener), "Lcom/badlogic/gdx/audio/Music$OnCompletionListener;", 2 },
	{ "paused", &class_boolean, offsetof(com_thelogicmaster_switchgdx_SwitchMusic, F_paused), "Z", 2 },
	{ "playing", &class_boolean, offsetof(com_thelogicmaster_switchgdx_SwitchMusic, F_playing), "Z", 2 },
	{ "looping", &class_boolean, offsetof(com_thelogicmaster_switchgdx_SwitchMusic, F_looping), "Z", 2 },
	{ "volume", &class_float, offsetof(com_thelogicmaster_switchgdx_SwitchMusic, F_volume), "F", 2 },
	{ "position", &class_float, offsetof(com_thelogicmaster_switchgdx_SwitchMusic, F_position), "F", 2 },
	{ "disposed", &class_boolean, offsetof(com_thelogicmaster_switchgdx_SwitchMusic, F_disposed), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_thelogicmaster_switchgdx_SwitchMusic_com_badlogic_gdx_files_FileHandle, 0, "(Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "update", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchMusic_update_float_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_update_float_R_boolean, "(F)Z", 0 },
	{ "onMusicFinished", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchMusic_onMusicFinished, VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_onMusicFinished, "()V", 0 },
	{ "play", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchMusic_play, VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_play, "()V", 1 },
	{ "pause", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchMusic_pause, VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_pause, "()V", 1 },
	{ "stop", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchMusic_stop, VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_stop, "()V", 1 },
	{ "isPlaying", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchMusic_isPlaying_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_isPlaying_R_boolean, "()Z", 1 },
	{ "setLooping", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchMusic_setLooping_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_setLooping_boolean, "(Z)V", 1 },
	{ "isLooping", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchMusic_isLooping_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_isLooping_R_boolean, "()Z", 1 },
	{ "setVolume", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchMusic_setVolume_float, VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_setVolume_float, "(F)V", 1 },
	{ "getVolume", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchMusic_getVolume_R_float, VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_getVolume_R_float, "()F", 1 },
	{ "setPan", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchMusic_setPan_float_float, VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_setPan_float_float, "(FF)V", 1 },
	{ "setPosition", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchMusic_setPosition_float, VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_setPosition_float, "(F)V", 1 },
	{ "getPosition", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchMusic_getPosition_R_float, VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_getPosition_R_float, "()F", 1 },
	{ "dispose", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchMusic_dispose, VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_dispose, "()V", 1 },
	{ "setOnCompletionListener", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchMusic_setOnCompletionListener_com_badlogic_gdx_audio_Music$OnCompletionListener, VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_setOnCompletionListener_com_badlogic_gdx_audio_Music$OnCompletionListener, "(Lcom/badlogic/gdx/audio/Music$OnCompletionListener;)V", 1 },
	{ "create", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchMusic_create_java_lang_String, VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_create_java_lang_String, "(Ljava/lang/String;)V", 258 },
	{ "start", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchMusic_start_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_start_boolean, "(Z)V", 258 },
	{ "resume", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchMusic_resume, 0, "()V", 266 },
	{ "pause0", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchMusic_pause0, 0, "()V", 266 },
	{ "stop0", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchMusic_stop0, 0, "()V", 266 },
	{ "setVolume0", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchMusic_setVolume0_float, 0, "(F)V", 266 },
	{ "setPosition0", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchMusic_setPosition0_float, 0, "(F)V", 266 },
	{ "dispose0", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchMusic_dispose0, VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_dispose0, "()V", 258 },
	{ "lambda$onMusicFinished$0", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchMusic_lambda$onMusicFinished$0, VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_lambda$onMusicFinished$0, "()V", 4098 },
};

Class class_com_thelogicmaster_switchgdx_SwitchMusic{
		.nativeName = (intptr_t) "com/thelogicmaster/switchgdx/SwitchMusic",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_thelogicmaster_switchgdx_SwitchMusic),
		.classVtable = (intptr_t) vtable_com_thelogicmaster_switchgdx_SwitchMusic,
		.staticInitializer = (intptr_t) clinit_com_thelogicmaster_switchgdx_SwitchMusic,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_thelogicmaster_switchgdx_SwitchMusic,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 25,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 30,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_thelogicmaster_switchgdx_SwitchMusic = registerClass(&class_com_thelogicmaster_switchgdx_SwitchMusic);

}

