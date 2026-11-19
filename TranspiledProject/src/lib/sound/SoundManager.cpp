#include "lib/sound/SoundManager.h"
#include "java/lang/Integer.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "java/util/HashMap.h"
#include "main/GameCanvas.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/Files.h"
#include "java/lang/Long.h"
#include "lib/sound/SoundManager.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "nro/Res.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/Audio.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "com/badlogic/gdx/audio/Sound.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_lib_sound_SoundManager(jobject object, jint mark, jint depth) {
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
	auto self = (lib_sound_SoundManager *) object;
	if (self->F_musicMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_musicMap)->clazz)->markFunction)((jobject) self->F_musicMap, mark, depth + 1);
	if (self->F_soundMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_soundMap)->clazz)->markFunction)((jobject) self->F_soundMap, mark, depth + 1);
	if (self->F_soundIds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_soundIds)->clazz)->markFunction)((jobject) self->F_soundIds, mark, depth + 1);
	if (self->F_musLoopIds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_musLoopIds)->clazz)->markFunction)((jobject) self->F_musLoopIds, mark, depth + 1);
}

void clinit_lib_sound_SoundManager(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_lib_sound_SoundManager(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundManager:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_sound_SoundManager(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[1].o);
	((lib_sound_SoundManager *) NULL_CHECK(sp[0].o))->F_musicMap = (jref) sp[1].o;
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[1].o);
	((lib_sound_SoundManager *) NULL_CHECK(sp[0].o))->F_soundMap = (jref) sp[1].o;
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[1].o);
	((lib_sound_SoundManager *) NULL_CHECK(sp[0].o))->F_soundIds = (jref) sp[1].o;
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[1].o);
	((lib_sound_SoundManager *) NULL_CHECK(sp[0].o))->F_musLoopIds = (jref) sp[1].o;
	LINE_NUMBER(15);
	((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_musicCount = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundManager_loadAll_Array1_int_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundManager:loadAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(22);
	((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_musicCount = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(24);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(25);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(26);
	M_lib_sound_SoundManager_loadMusic_int_int(ctx, (frame[0].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(24);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(29);
	frame[3].i = (jint(0));
	}
label_7:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_8;
	}
	{
	LINE_NUMBER(30);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(31);
	M_lib_sound_SoundManager_loadSound_int_int(ctx, (frame[0].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(29);
	INST_IINC(3, 1);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_sound_SoundManager_loadMusic_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundManager:loadMusic", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(36);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"music/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".wav"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(37);
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_musicMap;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[2].i));
	jint temp0 = (jint)((func_java_util_HashMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_0;
	}
	{
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_musicMap;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[2].i));
	sp[0].o = (jobject)((func_java_util_HashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	((func_com_badlogic_gdx_audio_Sound_dispose) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_audio_Sound, INDEX_com_badlogic_gdx_audio_Sound_dispose, (checkCast(ctx, &class_com_badlogic_gdx_audio_Sound, sp[0].o))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_audio_Sound, sp[0].o)));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(39);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[SoundManager] Loading music id="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" path="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(40);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_audio;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[1].o = (jobject)((func_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[1].o))(ctx, sp[1].o, (frame[3].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_Audio_newSound_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_audio_Sound) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Audio, INDEX_com_badlogic_gdx_Audio_newSound_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_audio_Sound, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(41);
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_musicMap;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[2].i));
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(44);
	goto label_8;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(42);
	frame[4].o = sp[0].o;
	LINE_NUMBER(43);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[SoundManager] Warning: Could not load music: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[1].o = (jobject)((func_java_lang_Exception_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_getMessage_R_java_lang_String])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_err_java_lang_String(ctx, sp[0].o);
	}
label_8:;
	LINE_NUMBER(45);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_sound_SoundManager_loadSound_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundManager:loadSound", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(48);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sound/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".wav"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(49);
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_soundMap;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[2].i));
	jint temp0 = (jint)((func_java_util_HashMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_0;
	}
	{
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_soundMap;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[2].i));
	sp[0].o = (jobject)((func_java_util_HashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	((func_com_badlogic_gdx_audio_Sound_dispose) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_audio_Sound, INDEX_com_badlogic_gdx_audio_Sound_dispose, (checkCast(ctx, &class_com_badlogic_gdx_audio_Sound, sp[0].o))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_audio_Sound, sp[0].o)));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(51);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[SoundManager] Loading sound id="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" path="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(52);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_audio;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[1].o = (jobject)((func_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[1].o))(ctx, sp[1].o, (frame[3].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_Audio_newSound_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_audio_Sound) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Audio, INDEX_com_badlogic_gdx_Audio_newSound_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_audio_Sound, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(53);
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_soundMap;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[2].i));
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(56);
	goto label_8;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(54);
	frame[4].o = sp[0].o;
	LINE_NUMBER(55);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[SoundManager] Warning: Could not load sound: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[1].o = (jobject)((func_java_lang_Exception_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_getMessage_R_java_lang_String])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_err_java_lang_String(ctx, sp[0].o);
	}
label_8:;
	LINE_NUMBER(57);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_sound_SoundManager_play_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundManager:play", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(63);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPlaySound) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(64);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[SoundManager] play id="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" volume="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].f));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(65);
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_soundMap;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[1].i));
	sp[0].o = (jobject)((func_java_util_HashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_audio_Sound, sp[0].o));
	LINE_NUMBER(66);
	if ((frame[3].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(67);
	jlong temp0 = (jlong)((func_com_badlogic_gdx_audio_Sound_play_float_R_long) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_audio_Sound, INDEX_com_badlogic_gdx_audio_Sound_play_float_R_long, (frame[3].o)))(ctx, (frame[3].o), (frame[2].f));
	frame[4].l = temp0;
	LINE_NUMBER(68);
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_soundIds;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[1].i));
	sp[2].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, (frame[4].l));
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(69);
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(70);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[SoundManager] play: sound id="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" not loaded!"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_err_java_lang_String(ctx, sp[0].o);
	}
label_8:;
	LINE_NUMBER(72);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_sound_SoundManager_playMus_int_float_boolean(jcontext ctx, jobject self, jint param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundManager:playMus", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(78);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPlaySound) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(79);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[SoundManager] playMus id="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" volume="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].f));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" loop="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(80);
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_musicMap;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[1].i));
	sp[0].o = (jobject)((func_java_util_HashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_audio_Sound, sp[0].o));
	LINE_NUMBER(81);
	if ((frame[4].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(82);
	if ((frame[3].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(83);
	jlong temp0 = (jlong)((func_com_badlogic_gdx_audio_Sound_loop_float_R_long) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_audio_Sound, INDEX_com_badlogic_gdx_audio_Sound_loop_float_R_long, (frame[4].o)))(ctx, (frame[4].o), (frame[2].f));
	frame[5].l = temp0;
	LINE_NUMBER(84);
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_musLoopIds;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[1].i));
	sp[2].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, (frame[5].l));
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(85);
	goto label_10;
	}
label_6:;
	{
	LINE_NUMBER(86);
	jlong temp0 = (jlong)((func_com_badlogic_gdx_audio_Sound_play_float_R_long) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_audio_Sound, INDEX_com_badlogic_gdx_audio_Sound_play_float_R_long, (frame[4].o)))(ctx, (frame[4].o), (frame[2].f));
	frame[5].l = temp0;
	LINE_NUMBER(87);
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_musLoopIds;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[1].i));
	sp[2].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, (frame[5].l));
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(88);
	goto label_10;
	}
label_4:;
	{
	LINE_NUMBER(90);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[SoundManager] playMus: music id="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" not loaded!"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_err_java_lang_String(ctx, sp[0].o);
	}
label_10:;
	LINE_NUMBER(92);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_sound_SoundManager_stop_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundManager:stop", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_soundMap;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[1].i));
	sp[0].o = (jobject)((func_java_util_HashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_audio_Sound, sp[0].o));
	LINE_NUMBER(99);
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_soundIds;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[1].i));
	sp[0].o = (jobject)((func_java_util_HashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, &class_java_lang_Long, sp[0].o));
	LINE_NUMBER(100);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(101);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = frame[2].o;
	jlong temp0 = (jlong)((func_java_lang_Long_longValue_R_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Long_longValue_R_long])(ctx, (frame[3].o));
	((func_com_badlogic_gdx_audio_Sound_stop_long) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_audio_Sound, INDEX_com_badlogic_gdx_audio_Sound_stop_long, sp[0].o))(ctx, sp[0].o, temp0);
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(104);
	((func_com_badlogic_gdx_audio_Sound_stop) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_audio_Sound, INDEX_com_badlogic_gdx_audio_Sound_stop, (frame[2].o)))(ctx, (frame[2].o));
	}
label_3:;
	LINE_NUMBER(107);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_sound_SoundManager_stopMus_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundManager:stopMus", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(113);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[SoundManager] stopMus id="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(114);
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_musicMap;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[1].i));
	sp[0].o = (jobject)((func_java_util_HashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_audio_Sound, sp[0].o));
	LINE_NUMBER(115);
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_musLoopIds;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[1].i));
	sp[0].o = (jobject)((func_java_util_HashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, &class_java_lang_Long, sp[0].o));
	LINE_NUMBER(116);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(117);
	if ((frame[3].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(118);
	sp[0].o = frame[2].o;
	jlong temp0 = (jlong)((func_java_lang_Long_longValue_R_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Long_longValue_R_long])(ctx, (frame[3].o));
	((func_com_badlogic_gdx_audio_Sound_stop_long) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_audio_Sound, INDEX_com_badlogic_gdx_audio_Sound_stop_long, sp[0].o))(ctx, sp[0].o, temp0);
	LINE_NUMBER(119);
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_musLoopIds;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[1].i));
	sp[0].o = (jobject)((func_java_util_HashMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(121);
	((func_com_badlogic_gdx_audio_Sound_stop) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_audio_Sound, INDEX_com_badlogic_gdx_audio_Sound_stop, (frame[2].o)))(ctx, (frame[2].o));
	}
label_4:;
	LINE_NUMBER(124);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_sound_SoundManager_stopAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundManager:stopAll", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_soundMap;
	sp[0].o = (jobject)((func_java_util_HashMap_values_R_java_util_Collection) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_values_R_java_util_Collection])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_audio_Sound, sp[0].o));
	LINE_NUMBER(131);
	if ((frame[2].o) == nullptr) goto label_12;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(132);
	((func_com_badlogic_gdx_audio_Sound_stop) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_audio_Sound, INDEX_com_badlogic_gdx_audio_Sound_stop, (frame[2].o)))(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_12;
label_2:;
	INST_ASTORE(3);
label_12:;
	LINE_NUMBER(134);
	goto label_9;
label_10:;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_musicMap;
	sp[0].o = (jobject)((func_java_util_HashMap_values_R_java_util_Collection) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_values_R_java_util_Collection])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_audio_Sound, sp[0].o));
	LINE_NUMBER(136);
	if ((frame[2].o) == nullptr) goto label_16;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(137);
	((func_com_badlogic_gdx_audio_Sound_stop) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_audio_Sound, INDEX_com_badlogic_gdx_audio_Sound_stop, (frame[2].o)))(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_16;
label_6:;
	INST_ASTORE(3);
label_16:;
	LINE_NUMBER(139);
	goto label_13;
label_14:;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_soundIds;
	((func_java_util_HashMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(141);
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_musLoopIds;
	((func_java_util_HashMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_sound_SoundManager_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/sound/SoundManager:dispose", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_soundMap;
	sp[0].o = (jobject)((func_java_util_HashMap_values_R_java_util_Collection) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_values_R_java_util_Collection])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_audio_Sound, sp[0].o));
	LINE_NUMBER(150);
	((func_com_badlogic_gdx_audio_Sound_dispose) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_audio_Sound, INDEX_com_badlogic_gdx_audio_Sound_dispose, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(151);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_musicMap;
	sp[0].o = (jobject)((func_java_util_HashMap_values_R_java_util_Collection) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_values_R_java_util_Collection])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_audio_Sound, sp[0].o));
	LINE_NUMBER(153);
	((func_com_badlogic_gdx_audio_Sound_dispose) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_audio_Sound, INDEX_com_badlogic_gdx_audio_Sound_dispose, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(154);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_soundMap;
	((func_java_util_HashMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(156);
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_musicMap;
	((func_java_util_HashMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(157);
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_soundIds;
	((func_java_util_HashMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(158);
	sp[0].o = (jobject)((lib_sound_SoundManager *) NULL_CHECK((frame[0].o)))->F_musLoopIds;
	((func_java_util_HashMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_lib_sound_SoundManager[] {
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
	(void *) M_lib_sound_SoundManager_dispose,
	(void *) M_lib_sound_SoundManager_loadAll_Array1_int_Array1_int,
	(void *) M_lib_sound_SoundManager_loadMusic_int_int,
	(void *) M_lib_sound_SoundManager_loadSound_int_int,
	(void *) M_lib_sound_SoundManager_play_int_float,
	(void *) M_lib_sound_SoundManager_playMus_int_float_boolean,
	(void *) M_lib_sound_SoundManager_stop_int,
	(void *) M_lib_sound_SoundManager_stopMus_int,
	(void *) M_lib_sound_SoundManager_stopAll,
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
	{ "loadAll", "([I[I)V" },
	{ "loadMusic", "(II)V" },
	{ "loadSound", "(II)V" },
	{ "play", "(IF)V" },
	{ "playMus", "(IFZ)V" },
	{ "stop", "(I)V" },
	{ "stopMus", "(I)V" },
	{ "stopAll", "()V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static FieldMetadata fields[] {
	{ "musicMap", &class_java_util_HashMap, offsetof(lib_sound_SoundManager, F_musicMap), "Ljava/util/HashMap;", 18 },
	{ "soundMap", &class_java_util_HashMap, offsetof(lib_sound_SoundManager, F_soundMap), "Ljava/util/HashMap;", 18 },
	{ "soundIds", &class_java_util_HashMap, offsetof(lib_sound_SoundManager, F_soundIds), "Ljava/util/HashMap;", 18 },
	{ "musLoopIds", &class_java_util_HashMap, offsetof(lib_sound_SoundManager, F_musLoopIds), "Ljava/util/HashMap;", 18 },
	{ "musicCount", &class_int, offsetof(lib_sound_SoundManager, F_musicCount), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_sound_SoundManager, 0, "()V", 1 },
	{ "loadAll", (intptr_t) M_lib_sound_SoundManager_loadAll_Array1_int_Array1_int, VTABLE_lib_sound_SoundManager_loadAll_Array1_int_Array1_int, "([I[I)V", 1 },
	{ "loadMusic", (intptr_t) M_lib_sound_SoundManager_loadMusic_int_int, VTABLE_lib_sound_SoundManager_loadMusic_int_int, "(II)V", 2 },
	{ "loadSound", (intptr_t) M_lib_sound_SoundManager_loadSound_int_int, VTABLE_lib_sound_SoundManager_loadSound_int_int, "(II)V", 2 },
	{ "play", (intptr_t) M_lib_sound_SoundManager_play_int_float, VTABLE_lib_sound_SoundManager_play_int_float, "(IF)V", 1 },
	{ "playMus", (intptr_t) M_lib_sound_SoundManager_playMus_int_float_boolean, VTABLE_lib_sound_SoundManager_playMus_int_float_boolean, "(IFZ)V", 1 },
	{ "stop", (intptr_t) M_lib_sound_SoundManager_stop_int, VTABLE_lib_sound_SoundManager_stop_int, "(I)V", 1 },
	{ "stopMus", (intptr_t) M_lib_sound_SoundManager_stopMus_int, VTABLE_lib_sound_SoundManager_stopMus_int, "(I)V", 1 },
	{ "stopAll", (intptr_t) M_lib_sound_SoundManager_stopAll, VTABLE_lib_sound_SoundManager_stopAll, "()V", 1 },
	{ "dispose", (intptr_t) M_lib_sound_SoundManager_dispose, VTABLE_lib_sound_SoundManager_dispose, "()V", 1 },
};

Class class_lib_sound_SoundManager{
		.nativeName = (intptr_t) "lib/sound/SoundManager",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_sound_SoundManager),
		.classVtable = (intptr_t) vtable_lib_sound_SoundManager,
		.staticInitializer = (intptr_t) clinit_lib_sound_SoundManager,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_sound_SoundManager,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_lib_sound_SoundManager = registerClass(&class_lib_sound_SoundManager);

}

