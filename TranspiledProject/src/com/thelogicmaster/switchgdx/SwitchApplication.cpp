#include "com/thelogicmaster/switchgdx/SwitchApplication.h"
#include "com/badlogic/gdx/ApplicationLogger.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/Application_ApplicationType.h"
#include "com/badlogic/gdx/Application.h"
#include "com/thelogicmaster/switchgdx/SwitchAudio.h"
#include "com/thelogicmaster/switchgdx/SwitchInput.h"
#include "java/lang/Runnable.h"
#include "com/thelogicmaster/switchgdx/SwitchLogger.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/Audio.h"
#include "com/badlogic/gdx/Graphics.h"
#include "com/badlogic/gdx/LifecycleListener.h"
#include "java/lang/Throwable.h"
#include "com/thelogicmaster/switchgdx/SwitchPreferences.h"
#include "com/thelogicmaster/switchgdx/SwitchGraphics.h"
#include "java/util/Iterator.h"
#include "com/thelogicmaster/switchgdx/SwitchApplication_Config.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/utils/ObjectMap.h"
#include "com/thelogicmaster/switchgdx/SwitchNet.h"
#include "com/badlogic/gdx/Files.h"
#include "com/thelogicmaster/switchgdx/SwitchApplication_invoke_java_lang_Runnable_0.h"
#include "com/thelogicmaster/switchgdx/SwitchApplication_1.h"
#include "com/thelogicmaster/switchgdx/SwitchFiles.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/Input.h"
#include "com/badlogic/gdx/utils/Clipboard.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/nro/clearwing/IOSWebSocketBridge.h"
#include "com/badlogic/gdx/Preferences.h"
#include "com/badlogic/gdx/Net.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterable.h"
#include "com/thelogicmaster/switchgdx/SwitchApplication_SwitchClipboard.h"
#include "com/badlogic/gdx/ApplicationListener.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"
#include "com/thelogicmaster/switchgdx/SwitchApplication.h"
#include "com/badlogic/gdx/utils/Timer.h"

extern "C" {

jint SF_com_thelogicmaster_switchgdx_SwitchApplication_EXIT;
jint SF_com_thelogicmaster_switchgdx_SwitchApplication_PAUSED;
jint SF_com_thelogicmaster_switchgdx_SwitchApplication_RESUMED;

void mark_com_thelogicmaster_switchgdx_SwitchApplication(jobject object, jint mark, jint depth) {
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
	auto self = (com_thelogicmaster_switchgdx_SwitchApplication *) object;
	if (self->F_graphics)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_graphics)->clazz)->markFunction)((jobject) self->F_graphics, mark, depth + 1);
	if (self->F_files)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_files)->clazz)->markFunction)((jobject) self->F_files, mark, depth + 1);
	if (self->F_input)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_input)->clazz)->markFunction)((jobject) self->F_input, mark, depth + 1);
	if (self->F_net)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_net)->clazz)->markFunction)((jobject) self->F_net, mark, depth + 1);
	if (self->F_audio)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_audio)->clazz)->markFunction)((jobject) self->F_audio, mark, depth + 1);
	if (self->F_appType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_appType)->clazz)->markFunction)((jobject) self->F_appType, mark, depth + 1);
	if (self->F_applicationLogger)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_applicationLogger)->clazz)->markFunction)((jobject) self->F_applicationLogger, mark, depth + 1);
	if (self->F_preferences)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_preferences)->clazz)->markFunction)((jobject) self->F_preferences, mark, depth + 1);
	if (self->F_listener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listener)->clazz)->markFunction)((jobject) self->F_listener, mark, depth + 1);
	if (self->F_lifecycleListeners)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lifecycleListeners)->clazz)->markFunction)((jobject) self->F_lifecycleListeners, mark, depth + 1);
	if (self->F_runnables)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_runnables)->clazz)->markFunction)((jobject) self->F_runnables, mark, depth + 1);
	if (self->F_executedRunnables)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_executedRunnables)->clazz)->markFunction)((jobject) self->F_executedRunnables, mark, depth + 1);
}

void clinit_com_thelogicmaster_switchgdx_SwitchApplication(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_thelogicmaster_switchgdx_SwitchApplication_EXIT = jint(0);
	SF_com_thelogicmaster_switchgdx_SwitchApplication_PAUSED = jint(2);
	SF_com_thelogicmaster_switchgdx_SwitchApplication_RESUMED = jint(3);
}

void init_com_thelogicmaster_switchgdx_SwitchApplication_com_badlogic_gdx_ApplicationListener_com_thelogicmaster_switchgdx_SwitchApplication$Config(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:<init>", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchApplication(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(45);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(34);
	((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_logLevel = (jint(2));
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o);
	((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK(sp[0].o))->F_preferences = (jref) sp[1].o;
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK(sp[0].o))->F_lifecycleListeners = (jref) sp[1].o;
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK(sp[0].o))->F_runnables = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK(sp[0].o))->F_executedRunnables = (jref) sp[1].o;
	LINE_NUMBER(46);
	((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_listener = (jref) (frame[1].o);
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_thelogicmaster_switchgdx_SwitchApplication$Config_access$000_com_thelogicmaster_switchgdx_SwitchApplication$Config_R_com_badlogic_gdx_Application$ApplicationType(ctx, (frame[2].o));
	((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK(sp[0].o))->F_appType = (jref) sp[1].o;
	LINE_NUMBER(48);
	jint temp0 = (jint)SM_com_thelogicmaster_switchgdx_SwitchApplication$Config_access$100_com_thelogicmaster_switchgdx_SwitchApplication$Config_R_boolean(ctx, (frame[2].o));
	SM_com_thelogicmaster_switchgdx_SwitchApplication_init_boolean(ctx, temp0);
	}
label_22: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_21; }
	}
	{
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_com_thelogicmaster_switchgdx_SwitchLogger(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchLogger);
	init_com_thelogicmaster_switchgdx_SwitchLogger(ctx, sp[1].o);
	((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK(sp[0].o))->F_applicationLogger = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_com_thelogicmaster_switchgdx_SwitchGraphics(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchGraphics);
	init_com_thelogicmaster_switchgdx_SwitchGraphics(ctx, sp[1].o);
	((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK(sp[0].o))->F_graphics = (jref) sp[1].o;
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_com_thelogicmaster_switchgdx_SwitchFiles(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchFiles);
	init_com_thelogicmaster_switchgdx_SwitchFiles(ctx, sp[1].o);
	((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK(sp[0].o))->F_files = (jref) sp[1].o;
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_com_thelogicmaster_switchgdx_SwitchInput(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchInput);
	init_com_thelogicmaster_switchgdx_SwitchInput(ctx, sp[1].o);
	((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK(sp[0].o))->F_input = (jref) sp[1].o;
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_com_thelogicmaster_switchgdx_SwitchNet(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchNet);
	init_com_thelogicmaster_switchgdx_SwitchNet(ctx, sp[1].o);
	((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK(sp[0].o))->F_net = (jref) sp[1].o;
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_com_thelogicmaster_switchgdx_SwitchAudio(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchAudio);
	init_com_thelogicmaster_switchgdx_SwitchAudio(ctx, sp[1].o);
	((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK(sp[0].o))->F_audio = (jref) sp[1].o;
	LINE_NUMBER(57);
	clinit_com_badlogic_gdx_Gdx(ctx);
	SF_com_badlogic_gdx_Gdx_app = (frame[0].o);
	LINE_NUMBER(58);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_input;
	clinit_com_badlogic_gdx_Gdx(ctx);
	SF_com_badlogic_gdx_Gdx_input = sp[0].o;
	LINE_NUMBER(59);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_audio;
	clinit_com_badlogic_gdx_Gdx(ctx);
	SF_com_badlogic_gdx_Gdx_audio = sp[0].o;
	LINE_NUMBER(60);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_files;
	clinit_com_badlogic_gdx_Gdx(ctx);
	SF_com_badlogic_gdx_Gdx_files = sp[0].o;
	LINE_NUMBER(61);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_graphics;
	clinit_com_badlogic_gdx_Gdx(ctx);
	SF_com_badlogic_gdx_Gdx_graphics = sp[0].o;
	LINE_NUMBER(62);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_net;
	clinit_com_badlogic_gdx_Gdx(ctx);
	SF_com_badlogic_gdx_Gdx_net = sp[0].o;
	LINE_NUMBER(64);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_files;
	sp[0].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchFiles_local_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchFiles_local_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	((func_com_badlogic_gdx_files_FileHandle_mkdirs) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_mkdirs])(ctx, sp[0].o);
	LINE_NUMBER(65);
	((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_running = (jint(1));
	LINE_NUMBER(66);
	((func_com_badlogic_gdx_ApplicationListener_create) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_ApplicationListener, INDEX_com_badlogic_gdx_ApplicationListener_create, (frame[1].o)))(ctx, (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(68);
	M_com_thelogicmaster_switchgdx_SwitchApplication_runLoop(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(70);
	M_com_thelogicmaster_switchgdx_SwitchApplication_disposeGame(ctx, (frame[0].o));
	LINE_NUMBER(71);
	goto label_10;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(70);
	frame[3].o = sp[0].o;
	M_com_thelogicmaster_switchgdx_SwitchApplication_disposeGame(ctx, (frame[0].o));
	LINE_NUMBER(71);
	throwException(ctx, (frame[3].o));	}
label_10:;
	popExceptionFrame(frameRef);
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_11; }
	}
	LINE_NUMBER(74);
	SM_com_nro_clearwing_IOSWebSocketBridge_shutdown(ctx);
	popExceptionFrame(frameRef);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_audio;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_audio;
	((func_com_thelogicmaster_switchgdx_SwitchAudio_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchAudio_dispose])(ctx, sp[0].o);
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(79);
	SM_com_thelogicmaster_switchgdx_SwitchApplication_dispose(ctx);
	LINE_NUMBER(80);
	goto label_66;
	}
label_6:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	LINE_NUMBER(79);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	SM_com_thelogicmaster_switchgdx_SwitchApplication_dispose(ctx);
	LINE_NUMBER(80);
	throwException(ctx, (frame[4].o));	}
label_66:;
	LINE_NUMBER(81);
	goto label_68;
label_11:;
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_11; }
	}
	LINE_NUMBER(76);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
label_16: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_15; }
	}
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_audio;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_audio;
	((func_com_thelogicmaster_switchgdx_SwitchAudio_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchAudio_dispose])(ctx, sp[0].o);
	}
label_14:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(79);
	SM_com_thelogicmaster_switchgdx_SwitchApplication_dispose(ctx);
	LINE_NUMBER(80);
	goto label_70;
	}
label_15:;
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_15; }
	}
	LINE_NUMBER(79);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	SM_com_thelogicmaster_switchgdx_SwitchApplication_dispose(ctx);
	LINE_NUMBER(80);
	throwException(ctx, (frame[6].o));	}
label_70:;
	{
	LINE_NUMBER(81);
	throwException(ctx, (frame[5].o));	}
label_68:;
	LINE_NUMBER(82);
	goto label_72;
label_21:;
label_39: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_21; }
	}
	LINE_NUMBER(73);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
label_31: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_30; }
	}
	LINE_NUMBER(74);
	SM_com_nro_clearwing_IOSWebSocketBridge_shutdown(ctx);
	popExceptionFrame(frameRef);
label_26: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_25; }
	}
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_audio;
	if (sp[0].o == nullptr) goto label_24;
	}
	{
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_audio;
	((func_com_thelogicmaster_switchgdx_SwitchAudio_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchAudio_dispose])(ctx, sp[0].o);
	}
label_24:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(79);
	SM_com_thelogicmaster_switchgdx_SwitchApplication_dispose(ctx);
	LINE_NUMBER(80);
	goto label_74;
	}
label_25:;
label_28: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_25; }
	}
	LINE_NUMBER(79);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	{
	SM_com_thelogicmaster_switchgdx_SwitchApplication_dispose(ctx);
	LINE_NUMBER(80);
	throwException(ctx, (frame[8].o));	}
label_74:;
	LINE_NUMBER(81);
	goto label_76;
label_30:;
label_38: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_30; }
	}
	LINE_NUMBER(76);
	INST_ASTORE(9);
	popExceptionFrame(frameRef);
label_35: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_34; }
	}
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_audio;
	if (sp[0].o == nullptr) goto label_33;
	}
	{
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_audio;
	((func_com_thelogicmaster_switchgdx_SwitchAudio_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchAudio_dispose])(ctx, sp[0].o);
	}
label_33:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(79);
	SM_com_thelogicmaster_switchgdx_SwitchApplication_dispose(ctx);
	LINE_NUMBER(80);
	goto label_78;
	}
label_34:;
label_37: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_34; }
	}
	LINE_NUMBER(79);
	INST_ASTORE(10);
	popExceptionFrame(frameRef);
	{
	SM_com_thelogicmaster_switchgdx_SwitchApplication_dispose(ctx);
	LINE_NUMBER(80);
	throwException(ctx, (frame[10].o));	}
label_78:;
	{
	LINE_NUMBER(81);
	throwException(ctx, (frame[9].o));	}
label_76:;
	{
	LINE_NUMBER(82);
	throwException(ctx, (frame[7].o));	}
label_72:;
	LINE_NUMBER(83);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchApplication_runLoop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:runLoop", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(86);
	frame[1].i = (jint(0));
	LINE_NUMBER(87);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(88);
	if (((jint)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_running) == 0) goto label_3;
	}
	{
	LINE_NUMBER(89);
	jint temp0 = (jint)SM_com_thelogicmaster_switchgdx_SwitchApplication_update_R_int(ctx);
	frame[3].i = temp0;
	LINE_NUMBER(90);
	if (((jint)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_running) == 0) goto label_3;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_6;
	goto label_3;
label_6:;
	{
	LINE_NUMBER(91);
	if ((frame[3].i) == (jint(2))) goto label_7;
	}
	{
	if ((frame[3].i) != (jint(3))) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(92);
	SM_com_thelogicmaster_switchgdx_SwitchApplication_lifecycle_int(ctx, (frame[3].i));
	LINE_NUMBER(93);
	goto label_2;
	}
label_8:;
	{
	LINE_NUMBER(95);
	if (((jint)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_paused) == 0) goto label_10;
	}
	goto label_2;
label_10:;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_graphics;
	jint temp0 = (jint)((func_com_thelogicmaster_switchgdx_SwitchGraphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getWidth_R_int])(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(98);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_graphics;
	jint temp1 = (jint)((func_com_thelogicmaster_switchgdx_SwitchGraphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getHeight_R_int])(ctx, sp[0].o);
	frame[5].i = temp1;
	LINE_NUMBER(99);
	if ((frame[4].i) != (frame[1].i)) goto label_13;
	}
	{
	if ((frame[5].i) == (frame[2].i)) goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(100);
	frame[1].i = (frame[4].i);
	LINE_NUMBER(101);
	frame[2].i = (frame[5].i);
	LINE_NUMBER(102);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_listener;
	((func_com_badlogic_gdx_ApplicationListener_resize_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_ApplicationListener, INDEX_com_badlogic_gdx_ApplicationListener_resize_int_int, sp[0].o))(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	}
label_14:;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_com_thelogicmaster_switchgdx_SwitchGraphics_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_update])(ctx, sp[0].o);
	LINE_NUMBER(106);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_audio;
	sp[1].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_graphics;
	jfloat temp0 = (jfloat)((func_com_thelogicmaster_switchgdx_SwitchGraphics_getDeltaTime_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_getDeltaTime_R_float])(ctx, sp[1].o);
	((func_com_thelogicmaster_switchgdx_SwitchAudio_update_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchAudio_update_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(107);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_input;
	((func_com_thelogicmaster_switchgdx_SwitchInput_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchInput_update])(ctx, sp[0].o);
	LINE_NUMBER(108);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_Timer_instance_R_com_badlogic_gdx_utils_Timer(ctx);
	((func_com_badlogic_gdx_utils_Timer_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer_update])(ctx, sp[0].o);
	LINE_NUMBER(109);
	SM_com_nro_clearwing_IOSWebSocketBridge_pollEvents(ctx);
	LINE_NUMBER(110);
	M_com_thelogicmaster_switchgdx_SwitchApplication_executeRunnables(ctx, (frame[0].o));
	LINE_NUMBER(111);
	if (((jint)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_running) == 0) goto label_23;
	}
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_listener;
	((func_com_badlogic_gdx_ApplicationListener_render) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_ApplicationListener, INDEX_com_badlogic_gdx_ApplicationListener_render, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(113);
	SM_com_thelogicmaster_switchgdx_SwitchApplication_present(ctx);
	}
label_23:;
	LINE_NUMBER(115);
	goto label_2;
label_3:;
	LINE_NUMBER(116);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_thelogicmaster_switchgdx_SwitchApplication_lifecycle_int(jcontext ctx, jint param0) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:lifecycle", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchApplication(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(119);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	frame[1].o = (checkCast(ctx, &class_com_thelogicmaster_switchgdx_SwitchApplication, sp[0].o));
	LINE_NUMBER(120);
	if ((frame[1].o) == nullptr) goto label_10;
	}
	{
	if (((jint)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[1].o)))->F_running) != 0) goto label_4;
	}
label_10:;
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(122);
	if ((frame[0].i) != 0) goto label_11;
	}
	{
	LINE_NUMBER(123);
	((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[1].o)))->F_running = (jint(0));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(125);
	M_com_thelogicmaster_switchgdx_SwitchApplication_disposeGame(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(127);
	SM_com_nro_clearwing_IOSWebSocketBridge_shutdown(ctx);
	LINE_NUMBER(128);
	goto label_14;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(127);
	frame[2].o = sp[0].o;
	SM_com_nro_clearwing_IOSWebSocketBridge_shutdown(ctx);
	LINE_NUMBER(128);
	throwException(ctx, (frame[2].o));	}
label_14:;
	goto label_5;
label_11:;
	{
	LINE_NUMBER(129);
	if ((frame[0].i) != (jint(2))) goto label_16;
	}
	{
	if (((jint)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[1].o)))->F_paused) != 0) goto label_16;
	}
	{
	LINE_NUMBER(130);
	((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[1].o)))->F_paused = (jint(1));
	LINE_NUMBER(131);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[1].o)))->F_input;
	((func_com_thelogicmaster_switchgdx_SwitchInput_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchInput_update])(ctx, sp[0].o);
	LINE_NUMBER(132);
	clinit_com_badlogic_gdx_utils_Array$ArrayIterable(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array$ArrayIterable);
	sp[1].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[1].o)))->F_lifecycleListeners;
	init_com_badlogic_gdx_utils_Array$ArrayIterable_com_badlogic_gdx_utils_Array(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_20:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_LifecycleListener, sp[0].o));
	LINE_NUMBER(133);
	((func_com_badlogic_gdx_LifecycleListener_pause) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_LifecycleListener, INDEX_com_badlogic_gdx_LifecycleListener_pause, (frame[3].o)))(ctx, (frame[3].o));
	LINE_NUMBER(134);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[1].o)))->F_listener;
	((func_com_badlogic_gdx_ApplicationListener_pause) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_ApplicationListener, INDEX_com_badlogic_gdx_ApplicationListener_pause, sp[0].o))(ctx, sp[0].o);
	goto label_5;
	}
label_16:;
	{
	LINE_NUMBER(136);
	if ((frame[0].i) != (jint(3))) goto label_5;
	}
	{
	if (((jint)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[1].o)))->F_paused) == 0) goto label_5;
	}
	{
	LINE_NUMBER(137);
	((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[1].o)))->F_paused = (jint(0));
	LINE_NUMBER(138);
	clinit_com_badlogic_gdx_utils_Array$ArrayIterable(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array$ArrayIterable);
	sp[1].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[1].o)))->F_lifecycleListeners;
	init_com_badlogic_gdx_utils_Array$ArrayIterable_com_badlogic_gdx_utils_Array(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_26:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_27;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_LifecycleListener, sp[0].o));
	LINE_NUMBER(139);
	((func_com_badlogic_gdx_LifecycleListener_resume) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_LifecycleListener, INDEX_com_badlogic_gdx_LifecycleListener_resume, (frame[3].o)))(ctx, (frame[3].o));
	LINE_NUMBER(140);
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[1].o)))->F_listener;
	((func_com_badlogic_gdx_ApplicationListener_resume) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_ApplicationListener, INDEX_com_badlogic_gdx_ApplicationListener_resume, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(142);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[1].o)))->F_graphics;
	((func_com_thelogicmaster_switchgdx_SwitchGraphics_resetTime) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchGraphics_resetTime])(ctx, sp[0].o);
	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(146);
	goto label_31;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(144);
	frame[2].o = sp[0].o;
	LINE_NUMBER(145);
	((func_com_thelogicmaster_switchgdx_SwitchApplication_error_java_lang_String_java_lang_String_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_error_java_lang_String_java_lang_String_java_lang_Throwable])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"IOSLifecycle"_j))), (((jobject) createStringLiteral(ctx, u8"Application lifecycle callback failed"_j))), (frame[2].o));
	}
label_31:;
	LINE_NUMBER(147);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchApplication_disposeGame(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:disposeGame", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(150);
	if (((jint)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_disposed) == 0) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(151);
	((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_disposed = (jint(1));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(153);
	clinit_com_badlogic_gdx_utils_Array$ArrayIterable(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array$ArrayIterable);
	sp[1].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_lifecycleListeners;
	init_com_badlogic_gdx_utils_Array$ArrayIterable_com_badlogic_gdx_utils_Array(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_LifecycleListener, sp[0].o));
	LINE_NUMBER(154);
	((func_com_badlogic_gdx_LifecycleListener_dispose) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_LifecycleListener, INDEX_com_badlogic_gdx_LifecycleListener_dispose, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(155);
	goto label_6;
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_listener;
	((func_com_badlogic_gdx_ApplicationListener_dispose) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_ApplicationListener, INDEX_com_badlogic_gdx_ApplicationListener_dispose, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(158);
	goto label_10;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(157);
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_listener;
	((func_com_badlogic_gdx_ApplicationListener_dispose) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_ApplicationListener, INDEX_com_badlogic_gdx_ApplicationListener_dispose, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(158);
	throwException(ctx, (frame[3].o));	}
label_10:;
	LINE_NUMBER(159);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchApplication_executeRunnables(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:executeRunnables", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_runnables;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_runnables;
	frame[2].i = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}
label_7:;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_8;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_executedRunnables;
	sp[1].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_runnables;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[2].i));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_Runnable, sp[1].o)));
	LINE_NUMBER(163);
	INST_IINC(2, -1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_runnables;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(166);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_12;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	label_12:;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_executedRunnables;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_13;
	}
	LINE_NUMBER(168);
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_executedRunnables;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_pop_R_java_lang_Object])(ctx, sp[0].o);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (checkCast(ctx, &class_java_lang_Runnable, sp[0].o))))(ctx, (checkCast(ctx, &class_java_lang_Runnable, sp[0].o)));
	LINE_NUMBER(171);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_executedRunnables;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) > 0) goto label_13;
	}
	LINE_NUMBER(172);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchApplication_getApplicationListener_R_com_badlogic_gdx_ApplicationListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:getApplicationListener", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_listener;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchApplication_getGraphics_R_com_badlogic_gdx_Graphics(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:getGraphics", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_graphics;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchApplication_getAudio_R_com_badlogic_gdx_Audio(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:getAudio", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_audio;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchApplication_getInput_R_com_badlogic_gdx_Input(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:getInput", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_input;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchApplication_getFiles_R_com_badlogic_gdx_Files(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:getFiles", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_files;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchApplication_getNet_R_com_badlogic_gdx_Net(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:getNet", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_net;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchApplication_debug_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:debug", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(206);
	if (((jint)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_logLevel) < (jint(3))) goto label_1;
	}
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchApplication_getApplicationLogger_R_com_badlogic_gdx_ApplicationLogger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_getApplicationLogger_R_com_badlogic_gdx_ApplicationLogger])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_ApplicationLogger_debug_java_lang_String_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_ApplicationLogger, INDEX_com_badlogic_gdx_ApplicationLogger_debug_java_lang_String_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	}
label_1:;
	LINE_NUMBER(208);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchApplication_debug_java_lang_String_java_lang_String_java_lang_Throwable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:debug", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(212);
	if (((jint)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_logLevel) < (jint(3))) goto label_1;
	}
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchApplication_getApplicationLogger_R_com_badlogic_gdx_ApplicationLogger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_getApplicationLogger_R_com_badlogic_gdx_ApplicationLogger])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_ApplicationLogger_debug_java_lang_String_java_lang_String_java_lang_Throwable) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_ApplicationLogger, INDEX_com_badlogic_gdx_ApplicationLogger_debug_java_lang_String_java_lang_String_java_lang_Throwable, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].o));
	}
label_1:;
	LINE_NUMBER(214);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchApplication_log_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:log", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(218);
	if (((jint)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_logLevel) < (jint(2))) goto label_1;
	}
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchApplication_getApplicationLogger_R_com_badlogic_gdx_ApplicationLogger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_getApplicationLogger_R_com_badlogic_gdx_ApplicationLogger])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_ApplicationLogger_log_java_lang_String_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_ApplicationLogger, INDEX_com_badlogic_gdx_ApplicationLogger_log_java_lang_String_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	}
label_1:;
	LINE_NUMBER(220);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchApplication_log_java_lang_String_java_lang_String_java_lang_Throwable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:log", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(224);
	if (((jint)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_logLevel) < (jint(2))) goto label_1;
	}
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchApplication_getApplicationLogger_R_com_badlogic_gdx_ApplicationLogger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_getApplicationLogger_R_com_badlogic_gdx_ApplicationLogger])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_ApplicationLogger_log_java_lang_String_java_lang_String_java_lang_Throwable) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_ApplicationLogger, INDEX_com_badlogic_gdx_ApplicationLogger_log_java_lang_String_java_lang_String_java_lang_Throwable, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].o));
	}
label_1:;
	LINE_NUMBER(226);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchApplication_error_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:error", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(230);
	if (((jint)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_logLevel) < (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchApplication_getApplicationLogger_R_com_badlogic_gdx_ApplicationLogger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_getApplicationLogger_R_com_badlogic_gdx_ApplicationLogger])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_ApplicationLogger_error_java_lang_String_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_ApplicationLogger, INDEX_com_badlogic_gdx_ApplicationLogger_error_java_lang_String_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	}
label_1:;
	LINE_NUMBER(232);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchApplication_error_java_lang_String_java_lang_String_java_lang_Throwable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:error", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(236);
	if (((jint)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_logLevel) < (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchApplication_getApplicationLogger_R_com_badlogic_gdx_ApplicationLogger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_getApplicationLogger_R_com_badlogic_gdx_ApplicationLogger])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_ApplicationLogger_error_java_lang_String_java_lang_String_java_lang_Throwable) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_ApplicationLogger, INDEX_com_badlogic_gdx_ApplicationLogger_error_java_lang_String_java_lang_String_java_lang_Throwable, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].o));
	}
label_1:;
	LINE_NUMBER(238);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchApplication_setLogLevel_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:setLogLevel", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(242);
	((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_logLevel = (frame[1].i);
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_thelogicmaster_switchgdx_SwitchApplication_getLogLevel_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:getLogLevel", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return ((jint)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_logLevel);
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchApplication_setApplicationLogger_com_badlogic_gdx_ApplicationLogger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:setApplicationLogger", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(252);
	((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_applicationLogger = (jref) (frame[1].o);
	LINE_NUMBER(253);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchApplication_getApplicationLogger_R_com_badlogic_gdx_ApplicationLogger(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:getApplicationLogger", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_applicationLogger;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchApplication_getType_R_com_badlogic_gdx_Application$ApplicationType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:getType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(262);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_appType;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_thelogicmaster_switchgdx_SwitchApplication_getVersion_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:getVersion", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jlong M_com_thelogicmaster_switchgdx_SwitchApplication_getJavaHeap_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:getJavaHeap", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return (jlong(0));
	}

	popStackFrame(ctx);
}

jlong M_com_thelogicmaster_switchgdx_SwitchApplication_getNativeHeap_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:getNativeHeap", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return (jlong(0));
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchApplication_getPreferences_java_lang_String_R_com_badlogic_gdx_Preferences(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:getPreferences", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_preferences;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_preferences;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_Preferences, sp[0].o));
	}
label_1:;
	{
	LINE_NUMBER(285);
	clinit_com_thelogicmaster_switchgdx_SwitchPreferences(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchPreferences);
	sp[1].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_files;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[1].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8".prefs"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchFiles_local_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchFiles_local_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[1].o, sp[2].o);
	init_com_thelogicmaster_switchgdx_SwitchPreferences_com_badlogic_gdx_files_FileHandle(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(286);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_preferences;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(287);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchApplication_getClipboard_R_com_badlogic_gdx_utils_Clipboard(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:getClipboard", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(293);
	clinit_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard);
	init_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard_com_thelogicmaster_switchgdx_SwitchApplication$1(ctx, sp[0].o, (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchApplication_postRunnable_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:postRunnable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_runnables;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_runnables;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(300);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_8;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	label_8:;
	LINE_NUMBER(301);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchApplication_exit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:exit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(305);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_com_thelogicmaster_switchgdx_SwitchApplication_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (com_thelogicmaster_switchgdx_SwitchApplication_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchApplication_invoke_java_lang_Runnable_0);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_com_thelogicmaster_switchgdx_SwitchApplication_postRunnable_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_postRunnable_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchApplication_addLifecycleListener_com_badlogic_gdx_LifecycleListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:addLifecycleListener", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_lifecycleListeners;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(311);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchApplication_removeLifecycleListener_com_badlogic_gdx_LifecycleListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:removeLifecycleListener", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(315);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_lifecycleListeners;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	LINE_NUMBER(316);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchApplication_lambda$exit$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication:lambda$exit$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(305);
	((com_thelogicmaster_switchgdx_SwitchApplication *) NULL_CHECK((frame[0].o)))->F_running = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_thelogicmaster_switchgdx_SwitchApplication[] {
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
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_getApplicationListener_R_com_badlogic_gdx_ApplicationListener,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_getGraphics_R_com_badlogic_gdx_Graphics,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_getAudio_R_com_badlogic_gdx_Audio,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_getInput_R_com_badlogic_gdx_Input,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_getFiles_R_com_badlogic_gdx_Files,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_getNet_R_com_badlogic_gdx_Net,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_log_java_lang_String_java_lang_String,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_log_java_lang_String_java_lang_String_java_lang_Throwable,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_error_java_lang_String_java_lang_String,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_error_java_lang_String_java_lang_String_java_lang_Throwable,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_debug_java_lang_String_java_lang_String,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_debug_java_lang_String_java_lang_String_java_lang_Throwable,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_setLogLevel_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_getLogLevel_R_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_setApplicationLogger_com_badlogic_gdx_ApplicationLogger,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_getApplicationLogger_R_com_badlogic_gdx_ApplicationLogger,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_getType_R_com_badlogic_gdx_Application$ApplicationType,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_getVersion_R_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_getJavaHeap_R_long,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_getNativeHeap_R_long,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_getPreferences_java_lang_String_R_com_badlogic_gdx_Preferences,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_getClipboard_R_com_badlogic_gdx_utils_Clipboard,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_postRunnable_java_lang_Runnable,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_exit,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_addLifecycleListener_com_badlogic_gdx_LifecycleListener,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_removeLifecycleListener_com_badlogic_gdx_LifecycleListener,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_runLoop,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_disposeGame,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_executeRunnables,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication_lambda$exit$0,
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
	{ "getApplicationListener", "()Lcom/badlogic/gdx/ApplicationListener;" },
	{ "getGraphics", "()Lcom/badlogic/gdx/Graphics;" },
	{ "getAudio", "()Lcom/badlogic/gdx/Audio;" },
	{ "getInput", "()Lcom/badlogic/gdx/Input;" },
	{ "getFiles", "()Lcom/badlogic/gdx/Files;" },
	{ "getNet", "()Lcom/badlogic/gdx/Net;" },
	{ "log", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "log", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V" },
	{ "error", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "error", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V" },
	{ "debug", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "debug", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V" },
	{ "setLogLevel", "(I)V" },
	{ "getLogLevel", "()I" },
	{ "setApplicationLogger", "(Lcom/badlogic/gdx/ApplicationLogger;)V" },
	{ "getApplicationLogger", "()Lcom/badlogic/gdx/ApplicationLogger;" },
	{ "getType", "()Lcom/badlogic/gdx/Application$ApplicationType;" },
	{ "getVersion", "()I" },
	{ "getJavaHeap", "()J" },
	{ "getNativeHeap", "()J" },
	{ "getPreferences", "(Ljava/lang/String;)Lcom/badlogic/gdx/Preferences;" },
	{ "getClipboard", "()Lcom/badlogic/gdx/utils/Clipboard;" },
	{ "postRunnable", "(Ljava/lang/Runnable;)V" },
	{ "exit", "()V" },
	{ "addLifecycleListener", "(Lcom/badlogic/gdx/LifecycleListener;)V" },
	{ "removeLifecycleListener", "(Lcom/badlogic/gdx/LifecycleListener;)V" },
	{ "runLoop", "()V" },
	{ "disposeGame", "()V" },
	{ "executeRunnables", "()V" },
	{ "lambda$exit$0", "()V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_Application, };

static jclass innerClasses[] {
	&class_com_thelogicmaster_switchgdx_SwitchApplication$Config,
	&class_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard,
};

static FieldMetadata fields[] {
	{ "graphics", &class_com_thelogicmaster_switchgdx_SwitchGraphics, offsetof(com_thelogicmaster_switchgdx_SwitchApplication, F_graphics), "Lcom/thelogicmaster/switchgdx/SwitchGraphics;", 2 },
	{ "files", &class_com_thelogicmaster_switchgdx_SwitchFiles, offsetof(com_thelogicmaster_switchgdx_SwitchApplication, F_files), "Lcom/thelogicmaster/switchgdx/SwitchFiles;", 2 },
	{ "input", &class_com_thelogicmaster_switchgdx_SwitchInput, offsetof(com_thelogicmaster_switchgdx_SwitchApplication, F_input), "Lcom/thelogicmaster/switchgdx/SwitchInput;", 2 },
	{ "net", &class_com_thelogicmaster_switchgdx_SwitchNet, offsetof(com_thelogicmaster_switchgdx_SwitchApplication, F_net), "Lcom/thelogicmaster/switchgdx/SwitchNet;", 2 },
	{ "audio", &class_com_thelogicmaster_switchgdx_SwitchAudio, offsetof(com_thelogicmaster_switchgdx_SwitchApplication, F_audio), "Lcom/thelogicmaster/switchgdx/SwitchAudio;", 2 },
	{ "appType", &class_com_badlogic_gdx_Application$ApplicationType, offsetof(com_thelogicmaster_switchgdx_SwitchApplication, F_appType), "Lcom/badlogic/gdx/Application$ApplicationType;", 18 },
	{ "running", &class_boolean, offsetof(com_thelogicmaster_switchgdx_SwitchApplication, F_running), "Z", 2 },
	{ "paused", &class_boolean, offsetof(com_thelogicmaster_switchgdx_SwitchApplication, F_paused), "Z", 2 },
	{ "disposed", &class_boolean, offsetof(com_thelogicmaster_switchgdx_SwitchApplication, F_disposed), "Z", 2 },
	{ "applicationLogger", &class_com_badlogic_gdx_ApplicationLogger, offsetof(com_thelogicmaster_switchgdx_SwitchApplication, F_applicationLogger), "Lcom/badlogic/gdx/ApplicationLogger;", 2 },
	{ "logLevel", &class_int, offsetof(com_thelogicmaster_switchgdx_SwitchApplication, F_logLevel), "I", 2 },
	{ "preferences", &class_com_badlogic_gdx_utils_ObjectMap, offsetof(com_thelogicmaster_switchgdx_SwitchApplication, F_preferences), "Lcom/badlogic/gdx/utils/ObjectMap;", 18 },
	{ "listener", &class_com_badlogic_gdx_ApplicationListener, offsetof(com_thelogicmaster_switchgdx_SwitchApplication, F_listener), "Lcom/badlogic/gdx/ApplicationListener;", 18 },
	{ "lifecycleListeners", &class_com_badlogic_gdx_utils_Array, offsetof(com_thelogicmaster_switchgdx_SwitchApplication, F_lifecycleListeners), "Lcom/badlogic/gdx/utils/Array;", 18 },
	{ "runnables", &class_com_badlogic_gdx_utils_Array, offsetof(com_thelogicmaster_switchgdx_SwitchApplication, F_runnables), "Lcom/badlogic/gdx/utils/Array;", 18 },
	{ "executedRunnables", &class_com_badlogic_gdx_utils_Array, offsetof(com_thelogicmaster_switchgdx_SwitchApplication, F_executedRunnables), "Lcom/badlogic/gdx/utils/Array;", 18 },
	{ "EXIT", &class_int, (intptr_t) &SF_com_thelogicmaster_switchgdx_SwitchApplication_EXIT, "I", 26 },
	{ "PAUSED", &class_int, (intptr_t) &SF_com_thelogicmaster_switchgdx_SwitchApplication_PAUSED, "I", 26 },
	{ "RESUMED", &class_int, (intptr_t) &SF_com_thelogicmaster_switchgdx_SwitchApplication_RESUMED, "I", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_thelogicmaster_switchgdx_SwitchApplication_com_badlogic_gdx_ApplicationListener_com_thelogicmaster_switchgdx_SwitchApplication$Config, 0, "(Lcom/badlogic/gdx/ApplicationListener;Lcom/thelogicmaster/switchgdx/SwitchApplication$Config;)V", 1 },
	{ "runLoop", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_runLoop, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_runLoop, "()V", 2 },
	{ "lifecycle", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchApplication_lifecycle_int, 0, "(I)V", 9 },
	{ "disposeGame", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_disposeGame, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_disposeGame, "()V", 2 },
	{ "executeRunnables", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_executeRunnables, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_executeRunnables, "()V", 2 },
	{ "getApplicationListener", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_getApplicationListener_R_com_badlogic_gdx_ApplicationListener, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_getApplicationListener_R_com_badlogic_gdx_ApplicationListener, "()Lcom/badlogic/gdx/ApplicationListener;", 1 },
	{ "getGraphics", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_getGraphics_R_com_badlogic_gdx_Graphics, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_getGraphics_R_com_badlogic_gdx_Graphics, "()Lcom/badlogic/gdx/Graphics;", 1 },
	{ "getAudio", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_getAudio_R_com_badlogic_gdx_Audio, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_getAudio_R_com_badlogic_gdx_Audio, "()Lcom/badlogic/gdx/Audio;", 1 },
	{ "getInput", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_getInput_R_com_badlogic_gdx_Input, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_getInput_R_com_badlogic_gdx_Input, "()Lcom/badlogic/gdx/Input;", 1 },
	{ "getFiles", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_getFiles_R_com_badlogic_gdx_Files, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_getFiles_R_com_badlogic_gdx_Files, "()Lcom/badlogic/gdx/Files;", 1 },
	{ "getNet", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_getNet_R_com_badlogic_gdx_Net, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_getNet_R_com_badlogic_gdx_Net, "()Lcom/badlogic/gdx/Net;", 1 },
	{ "debug", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_debug_java_lang_String_java_lang_String, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_debug_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "debug", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_debug_java_lang_String_java_lang_String_java_lang_Throwable, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_debug_java_lang_String_java_lang_String_java_lang_Throwable, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", 1 },
	{ "log", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_log_java_lang_String_java_lang_String, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_log_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "log", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_log_java_lang_String_java_lang_String_java_lang_Throwable, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_log_java_lang_String_java_lang_String_java_lang_Throwable, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", 1 },
	{ "error", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_error_java_lang_String_java_lang_String, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_error_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "error", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_error_java_lang_String_java_lang_String_java_lang_Throwable, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_error_java_lang_String_java_lang_String_java_lang_Throwable, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", 1 },
	{ "setLogLevel", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_setLogLevel_int, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_setLogLevel_int, "(I)V", 1 },
	{ "getLogLevel", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_getLogLevel_R_int, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_getLogLevel_R_int, "()I", 1 },
	{ "setApplicationLogger", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_setApplicationLogger_com_badlogic_gdx_ApplicationLogger, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_setApplicationLogger_com_badlogic_gdx_ApplicationLogger, "(Lcom/badlogic/gdx/ApplicationLogger;)V", 1 },
	{ "getApplicationLogger", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_getApplicationLogger_R_com_badlogic_gdx_ApplicationLogger, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_getApplicationLogger_R_com_badlogic_gdx_ApplicationLogger, "()Lcom/badlogic/gdx/ApplicationLogger;", 1 },
	{ "getType", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_getType_R_com_badlogic_gdx_Application$ApplicationType, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_getType_R_com_badlogic_gdx_Application$ApplicationType, "()Lcom/badlogic/gdx/Application$ApplicationType;", 1 },
	{ "getVersion", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_getVersion_R_int, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_getVersion_R_int, "()I", 1 },
	{ "getJavaHeap", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_getJavaHeap_R_long, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_getJavaHeap_R_long, "()J", 1 },
	{ "getNativeHeap", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_getNativeHeap_R_long, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_getNativeHeap_R_long, "()J", 1 },
	{ "getPreferences", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_getPreferences_java_lang_String_R_com_badlogic_gdx_Preferences, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_getPreferences_java_lang_String_R_com_badlogic_gdx_Preferences, "(Ljava/lang/String;)Lcom/badlogic/gdx/Preferences;", 1 },
	{ "getClipboard", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_getClipboard_R_com_badlogic_gdx_utils_Clipboard, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_getClipboard_R_com_badlogic_gdx_utils_Clipboard, "()Lcom/badlogic/gdx/utils/Clipboard;", 1 },
	{ "postRunnable", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_postRunnable_java_lang_Runnable, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_postRunnable_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1 },
	{ "exit", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_exit, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_exit, "()V", 1 },
	{ "addLifecycleListener", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_addLifecycleListener_com_badlogic_gdx_LifecycleListener, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_addLifecycleListener_com_badlogic_gdx_LifecycleListener, "(Lcom/badlogic/gdx/LifecycleListener;)V", 1 },
	{ "removeLifecycleListener", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_removeLifecycleListener_com_badlogic_gdx_LifecycleListener, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_removeLifecycleListener_com_badlogic_gdx_LifecycleListener, "(Lcom/badlogic/gdx/LifecycleListener;)V", 1 },
	{ "init", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchApplication_init_boolean, 0, "(Z)V", 266 },
	{ "update", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchApplication_update_R_int, 0, "()I", 266 },
	{ "present", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchApplication_present, 0, "()V", 266 },
	{ "dispose", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchApplication_dispose, 0, "()V", 266 },
	{ "lambda$exit$0", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication_lambda$exit$0, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication_lambda$exit$0, "()V", 4098 },
};

Class class_com_thelogicmaster_switchgdx_SwitchApplication{
		.nativeName = (intptr_t) "com/thelogicmaster/switchgdx/SwitchApplication",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_thelogicmaster_switchgdx_SwitchApplication),
		.classVtable = (intptr_t) vtable_com_thelogicmaster_switchgdx_SwitchApplication,
		.staticInitializer = (intptr_t) clinit_com_thelogicmaster_switchgdx_SwitchApplication,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_thelogicmaster_switchgdx_SwitchApplication,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 19,
		.nativeFields = (intptr_t) fields,
		.methodCount = 36,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 41,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_thelogicmaster_switchgdx_SwitchApplication = registerClass(&class_com_thelogicmaster_switchgdx_SwitchApplication);

}

