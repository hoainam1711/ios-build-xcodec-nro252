#include "com/nro/clearwing/IOSWebSocketBridge.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/Application.h"
#include "lib/network/IWebSocketBridge.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/utils/LongMap.h"
#include "com/badlogic/gdx/utils/LongMap_Values.h"
#include "java/lang/Runnable.h"
#include "lib/network/IWebSocketBridge_IWebSocketListener.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/nro/clearwing/IOSWebSocketBridge.h"
#include "com/nro/clearwing/IOSWebSocketBridge_invoke_java_lang_Runnable_0.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"

extern "C" {

jint SF_com_nro_clearwing_IOSWebSocketBridge_OPENED;
jint SF_com_nro_clearwing_IOSWebSocketBridge_MESSAGE;
jint SF_com_nro_clearwing_IOSWebSocketBridge_CLOSED;
jint SF_com_nro_clearwing_IOSWebSocketBridge_ERROR;
jobject SF_com_nro_clearwing_IOSWebSocketBridge_connections;
jlong SF_com_nro_clearwing_IOSWebSocketBridge_nextGeneration;
jbool SF_com_nro_clearwing_IOSWebSocketBridge_shuttingDown;

void mark_com_nro_clearwing_IOSWebSocketBridge(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_nro_clearwing_IOSWebSocketBridge_connections)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_nro_clearwing_IOSWebSocketBridge_connections)->clazz)->markFunction)((jobject) SF_com_nro_clearwing_IOSWebSocketBridge_connections, mark, depth + 1);
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
	auto self = (com_nro_clearwing_IOSWebSocketBridge *) object;
	if (self->F_listener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listener)->clazz)->markFunction)((jobject) self->F_listener, mark, depth + 1);
}

void init_com_nro_clearwing_IOSWebSocketBridge(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/clearwing/IOSWebSocketBridge:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_clearwing_IOSWebSocketBridge(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_nro_clearwing_IOSWebSocketBridge_connect_java_lang_String_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/clearwing/IOSWebSocketBridge:connect", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(24);
	((func_com_nro_clearwing_IOSWebSocketBridge_close) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_nro_clearwing_IOSWebSocketBridge_close])(ctx, (frame[0].o));
	LINE_NUMBER(26);
	clinit_com_nro_clearwing_IOSWebSocketBridge(ctx);
	sp[0].o = (jobject)SF_com_nro_clearwing_IOSWebSocketBridge_connections;
	frame[6].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(27);
	if ((clinit_com_nro_clearwing_IOSWebSocketBridge(ctx), (jint)SF_com_nro_clearwing_IOSWebSocketBridge_shuttingDown) == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ALOAD(6);
	INST_MONITOREXIT();
	popExceptionFrame(frameRef);
	popStackFrame(ctx, self);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(28);
	jlong temp0 = (clinit_com_nro_clearwing_IOSWebSocketBridge(ctx), (jlong)SF_com_nro_clearwing_IOSWebSocketBridge_nextGeneration) + (jlong(1));
	clinit_com_nro_clearwing_IOSWebSocketBridge(ctx);
	SF_com_nro_clearwing_IOSWebSocketBridge_nextGeneration = temp0;
	frame[4].l = temp0;
	LINE_NUMBER(29);
	((com_nro_clearwing_IOSWebSocketBridge *) NULL_CHECK((frame[0].o)))->F_generation = (frame[4].l);
	LINE_NUMBER(30);
	clinit_com_nro_clearwing_IOSWebSocketBridge(ctx);
	sp[0].o = (jobject)SF_com_nro_clearwing_IOSWebSocketBridge_connections;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_LongMap_put_long_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongMap_put_long_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[4].l), (frame[0].o));
	LINE_NUMBER(31);
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	goto label_14;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(7);
	INST_ATHROW();
	label_14:;
	{
	LINE_NUMBER(32);
	jint temp0 = (jint)SM_com_nro_clearwing_IOSWebSocketBridge_connectNative_java_lang_String_long_R_boolean(ctx, (frame[1].o), (frame[4].l));
	if (temp0 != 0) goto label_15;
	}
	{
	LINE_NUMBER(33);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	{ /* InvokeDynamic */
		clinit_com_nro_clearwing_IOSWebSocketBridge_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (com_nro_clearwing_IOSWebSocketBridge_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_com_nro_clearwing_IOSWebSocketBridge_invoke_java_lang_Runnable_0);
		proxy->F_field0 = (frame[4].l);
		sp[1].o = (jobject) proxy;
	}
	((func_com_badlogic_gdx_Application_postRunnable_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_postRunnable_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_15:;
	LINE_NUMBER(35);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_nro_clearwing_IOSWebSocketBridge_send_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/clearwing/IOSWebSocketBridge:send", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(39);
	if (((jint)((com_nro_clearwing_IOSWebSocketBridge *) NULL_CHECK((frame[0].o)))->F_connected) == 0) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_1;
	{
	LINE_NUMBER(40);
	SM_com_nro_clearwing_IOSWebSocketBridge_sendNative_Array1_byte_long(ctx, (frame[1].o), ((jlong)((com_nro_clearwing_IOSWebSocketBridge *) NULL_CHECK((frame[0].o)))->F_generation));
	}
label_1:;
	LINE_NUMBER(42);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_nro_clearwing_IOSWebSocketBridge_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/clearwing/IOSWebSocketBridge:close", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	frame[1].l = ((jlong)((com_nro_clearwing_IOSWebSocketBridge *) NULL_CHECK((frame[0].o)))->F_generation);
	LINE_NUMBER(47);
	if ((longCompare((frame[1].l), (jlong(0)))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(48);
	M_com_nro_clearwing_IOSWebSocketBridge_unregister(ctx, (frame[0].o));
	LINE_NUMBER(49);
	SM_com_nro_clearwing_IOSWebSocketBridge_closeNative_long(ctx, (frame[1].l));
	}
label_2:;
	LINE_NUMBER(51);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_nro_clearwing_IOSWebSocketBridge_unregister(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/clearwing/IOSWebSocketBridge:unregister", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	clinit_com_nro_clearwing_IOSWebSocketBridge(ctx);
	sp[0].o = (jobject)SF_com_nro_clearwing_IOSWebSocketBridge_connections;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(55);
	clinit_com_nro_clearwing_IOSWebSocketBridge(ctx);
	sp[0].o = (jobject)SF_com_nro_clearwing_IOSWebSocketBridge_connections;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_LongMap_remove_long_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongMap_remove_long_R_java_lang_Object])(ctx, sp[0].o, ((jlong)((com_nro_clearwing_IOSWebSocketBridge *) NULL_CHECK((frame[0].o)))->F_generation));
	LINE_NUMBER(56);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_8;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	label_8:;
	{
	LINE_NUMBER(57);
	((com_nro_clearwing_IOSWebSocketBridge *) NULL_CHECK((frame[0].o)))->F_generation = (jlong(0));
	LINE_NUMBER(58);
	((com_nro_clearwing_IOSWebSocketBridge *) NULL_CHECK((frame[0].o)))->F_connected = (jint(0));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_nro_clearwing_IOSWebSocketBridge_isConnected_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/clearwing/IOSWebSocketBridge:isConnected", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	popStackFrame(ctx, self);
	return ((jint)((com_nro_clearwing_IOSWebSocketBridge *) NULL_CHECK((frame[0].o)))->F_connected);
	}

	popStackFrame(ctx);
}

void M_com_nro_clearwing_IOSWebSocketBridge_setListener_lib_network_IWebSocketBridge$IWebSocketListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/clearwing/IOSWebSocketBridge:setListener", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	((com_nro_clearwing_IOSWebSocketBridge *) NULL_CHECK((frame[0].o)))->F_listener = (jref) (frame[1].o);
	LINE_NUMBER(69);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_nro_clearwing_IOSWebSocketBridge_shutdown(jcontext ctx) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/clearwing/IOSWebSocketBridge:shutdown", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_clearwing_IOSWebSocketBridge(ctx);
	{
	LINE_NUMBER(73);
	clinit_com_nro_clearwing_IOSWebSocketBridge(ctx);
	sp[0].o = (jobject)SF_com_nro_clearwing_IOSWebSocketBridge_connections;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(74);
	clinit_com_nro_clearwing_IOSWebSocketBridge(ctx);
	SF_com_nro_clearwing_IOSWebSocketBridge_shuttingDown = (jint(1));
	LINE_NUMBER(75);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	clinit_com_nro_clearwing_IOSWebSocketBridge(ctx);
	sp[1].o = (jobject)SF_com_nro_clearwing_IOSWebSocketBridge_connections;
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_LongMap *) NULL_CHECK(sp[1].o))->F_size));
	frame[0].o = sp[0].o;
	LINE_NUMBER(76);
	clinit_com_nro_clearwing_IOSWebSocketBridge(ctx);
	sp[0].o = (jobject)SF_com_nro_clearwing_IOSWebSocketBridge_connections;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_LongMap_values_R_com_badlogic_gdx_utils_LongMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongMap_values_R_com_badlogic_gdx_utils_LongMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_LongMap$Values_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongMap$Values_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_nro_clearwing_IOSWebSocketBridge, sp[0].o));
	LINE_NUMBER(77);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(78);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(79);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_13;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	label_13:;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	}
label_14:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_nro_clearwing_IOSWebSocketBridge, sp[0].o));
	LINE_NUMBER(81);
	((func_com_nro_clearwing_IOSWebSocketBridge_close) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_nro_clearwing_IOSWebSocketBridge_close])(ctx, (frame[2].o));
	LINE_NUMBER(82);
	goto label_14;
	}
label_15:;
	LINE_NUMBER(83);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_nro_clearwing_IOSWebSocketBridge_onOpen_long(jcontext ctx, jlong param0) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/clearwing/IOSWebSocketBridge:onOpen", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_clearwing_IOSWebSocketBridge(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(86);
	SM_com_nro_clearwing_IOSWebSocketBridge_dispatch_long_int_Array1_byte_java_lang_String(ctx, (frame[0].l), (jint(1)), (jobject(nullptr)), (jobject(nullptr)));
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_nro_clearwing_IOSWebSocketBridge_onMessage_long_Array1_byte(jcontext ctx, jlong param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/clearwing/IOSWebSocketBridge:onMessage", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_clearwing_IOSWebSocketBridge(ctx);
	frame[0].l = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(90);
	SM_com_nro_clearwing_IOSWebSocketBridge_dispatch_long_int_Array1_byte_java_lang_String(ctx, (frame[0].l), (jint(2)), (frame[2].o), (jobject(nullptr)));
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_nro_clearwing_IOSWebSocketBridge_onClose_long(jcontext ctx, jlong param0) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/clearwing/IOSWebSocketBridge:onClose", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_clearwing_IOSWebSocketBridge(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(94);
	SM_com_nro_clearwing_IOSWebSocketBridge_dispatch_long_int_Array1_byte_java_lang_String(ctx, (frame[0].l), (jint(3)), (jobject(nullptr)), (jobject(nullptr)));
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_nro_clearwing_IOSWebSocketBridge_onError_long_java_lang_String(jcontext ctx, jlong param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/clearwing/IOSWebSocketBridge:onError", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_clearwing_IOSWebSocketBridge(ctx);
	frame[0].l = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(98);
	SM_com_nro_clearwing_IOSWebSocketBridge_dispatch_long_int_Array1_byte_java_lang_String(ctx, (frame[0].l), (jint(4)), (jobject(nullptr)), (frame[2].o));
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_nro_clearwing_IOSWebSocketBridge_dispatch_long_int_Array1_byte_java_lang_String(jcontext ctx, jlong param0, jint param1, jobject param2, jobject param3) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/clearwing/IOSWebSocketBridge:dispatch", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_clearwing_IOSWebSocketBridge(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(103);
	clinit_com_nro_clearwing_IOSWebSocketBridge(ctx);
	sp[0].o = (jobject)SF_com_nro_clearwing_IOSWebSocketBridge_connections;
	frame[6].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(104);
	clinit_com_nro_clearwing_IOSWebSocketBridge(ctx);
	sp[0].o = (jobject)SF_com_nro_clearwing_IOSWebSocketBridge_connections;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_LongMap_get_long_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongMap_get_long_R_java_lang_Object])(ctx, sp[0].o, (frame[0].l));
	frame[5].o = (checkCast(ctx, &class_com_nro_clearwing_IOSWebSocketBridge, sp[0].o));
	LINE_NUMBER(105);
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	goto label_21;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(7);
	INST_ATHROW();
	label_21:;
	{
	LINE_NUMBER(106);
	if ((frame[5].o) != nullptr) goto label_22;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_22:;
	{
	LINE_NUMBER(109);
	sp[0].o = frame[5].o;
	frame[7].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(110);
	if ((longCompare(((jlong)((com_nro_clearwing_IOSWebSocketBridge *) NULL_CHECK((frame[5].o)))->F_generation), (frame[0].l))) != 0) goto label_23;
	}
	{
	if ((frame[2].i) != (jint(2))) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	if (((jint)((com_nro_clearwing_IOSWebSocketBridge *) NULL_CHECK((frame[5].o)))->F_connected) != 0) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
label_23:;
	INST_ALOAD(7);
	INST_MONITOREXIT();
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(111);
	if ((frame[2].i) != (jint(1))) goto label_24;
	}
	{
	((com_nro_clearwing_IOSWebSocketBridge *) NULL_CHECK((frame[5].o)))->F_connected = (jint(1));
	}
label_24:;
	{
	LINE_NUMBER(112);
	if ((frame[2].i) == (jint(3))) goto label_25;
	}
	{
	if ((frame[2].i) != (jint(4))) goto label_26;
	}
label_25:;
	INST_ALOAD(5);
	POP_N(1); // Pop method args
	M_com_nro_clearwing_IOSWebSocketBridge_unregister(ctx, sp[0].o);
label_26:;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((com_nro_clearwing_IOSWebSocketBridge *) NULL_CHECK((frame[5].o)))->F_listener;
	frame[6].o = sp[0].o;
	LINE_NUMBER(114);
	monitorExit(ctx, (frame[7].o));
	}
	popExceptionFrame(frameRef);
	goto label_28;
label_8:;
label_14: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	monitorExit(ctx, (frame[7].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(8);
	INST_ATHROW();
	label_28:;
	{
	LINE_NUMBER(115);
	if ((frame[6].o) != nullptr) goto label_15;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_15:;
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_17; }
	}
	{
	LINE_NUMBER(118);
	switch((frame[2].i)) {
		case 1: goto label_29;
		case 2: goto label_30;
		case 3: goto label_31;
		case 4: goto label_32;
		default: goto label_16;
	}
	}
label_29:;
	{
	LINE_NUMBER(119);
	((func_lib_network_IWebSocketBridge$IWebSocketListener_onOpen) resolveInterfaceMethod(ctx, &class_lib_network_IWebSocketBridge$IWebSocketListener, INDEX_lib_network_IWebSocketBridge$IWebSocketListener_onOpen, (frame[6].o)))(ctx, (frame[6].o));
	goto label_16;
	}
label_30:;
	{
	LINE_NUMBER(120);
	((func_lib_network_IWebSocketBridge$IWebSocketListener_onMessage_Array1_byte) resolveInterfaceMethod(ctx, &class_lib_network_IWebSocketBridge$IWebSocketListener, INDEX_lib_network_IWebSocketBridge$IWebSocketListener_onMessage_Array1_byte, (frame[6].o)))(ctx, (frame[6].o), (frame[3].o));
	goto label_16;
	}
label_31:;
	{
	LINE_NUMBER(121);
	((func_lib_network_IWebSocketBridge$IWebSocketListener_onClose) resolveInterfaceMethod(ctx, &class_lib_network_IWebSocketBridge$IWebSocketListener, INDEX_lib_network_IWebSocketBridge$IWebSocketListener_onClose, (frame[6].o)))(ctx, (frame[6].o));
	goto label_16;
	}
label_32:;
	{
	LINE_NUMBER(122);
	((func_lib_network_IWebSocketBridge$IWebSocketListener_onError_java_lang_String) resolveInterfaceMethod(ctx, &class_lib_network_IWebSocketBridge$IWebSocketListener, INDEX_lib_network_IWebSocketBridge$IWebSocketListener_onError_java_lang_String, (frame[6].o)))(ctx, (frame[6].o), (frame[4].o));
	}
label_16:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(126);
	goto label_33;
label_17:;
	{
	sp -= 1;
	LINE_NUMBER(124);
	frame[7].o = sp[0].o;
	LINE_NUMBER(125);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	((func_com_badlogic_gdx_Application_error_java_lang_String_java_lang_String_java_lang_Throwable) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_error_java_lang_String_java_lang_String_java_lang_Throwable, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"IOSWebSocketBridge"_j))), (((jobject) createStringLiteral(ctx, u8"WebSocket listener failed"_j))), (frame[7].o));
	}
label_33:;
	LINE_NUMBER(127);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_nro_clearwing_IOSWebSocketBridge_lambda$connect$0_long(jcontext ctx, jlong param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/clearwing/IOSWebSocketBridge:lambda$connect$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_clearwing_IOSWebSocketBridge(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(33);
	SM_com_nro_clearwing_IOSWebSocketBridge_onError_long_java_lang_String(ctx, (frame[0].l), (((jobject) createStringLiteral(ctx, u8"iOS WebSocket connection limit reached"_j))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_com_nro_clearwing_IOSWebSocketBridge(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_nro_clearwing_IOSWebSocketBridge_OPENED = jint(1);
	SF_com_nro_clearwing_IOSWebSocketBridge_MESSAGE = jint(2);
	SF_com_nro_clearwing_IOSWebSocketBridge_CLOSED = jint(3);
	SF_com_nro_clearwing_IOSWebSocketBridge_ERROR = jint(4);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/clearwing/IOSWebSocketBridge:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_clearwing_IOSWebSocketBridge(ctx);
	{
	LINE_NUMBER(14);
	clinit_com_badlogic_gdx_utils_LongMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_LongMap);
	init_com_badlogic_gdx_utils_LongMap(ctx, sp[0].o);
	clinit_com_nro_clearwing_IOSWebSocketBridge(ctx);
	SF_com_nro_clearwing_IOSWebSocketBridge_connections = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_nro_clearwing_IOSWebSocketBridge[] {
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
	(void *) M_com_nro_clearwing_IOSWebSocketBridge_connect_java_lang_String_java_lang_String_int,
	(void *) M_com_nro_clearwing_IOSWebSocketBridge_send_Array1_byte,
	(void *) M_com_nro_clearwing_IOSWebSocketBridge_close,
	(void *) M_com_nro_clearwing_IOSWebSocketBridge_isConnected_R_boolean,
	(void *) M_com_nro_clearwing_IOSWebSocketBridge_setListener_lib_network_IWebSocketBridge$IWebSocketListener,
	(void *) M_com_nro_clearwing_IOSWebSocketBridge_unregister,
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
	{ "connect", "(Ljava/lang/String;Ljava/lang/String;I)V" },
	{ "send", "([B)V" },
	{ "close", "()V" },
	{ "isConnected", "()Z" },
	{ "setListener", "(Llib/network/IWebSocketBridge$IWebSocketListener;)V" },
	{ "unregister", "()V" },
};

static jclass interfaces[] { &class_lib_network_IWebSocketBridge, };

static FieldMetadata fields[] {
	{ "OPENED", &class_int, (intptr_t) &SF_com_nro_clearwing_IOSWebSocketBridge_OPENED, "I", 26 },
	{ "MESSAGE", &class_int, (intptr_t) &SF_com_nro_clearwing_IOSWebSocketBridge_MESSAGE, "I", 26 },
	{ "CLOSED", &class_int, (intptr_t) &SF_com_nro_clearwing_IOSWebSocketBridge_CLOSED, "I", 26 },
	{ "ERROR", &class_int, (intptr_t) &SF_com_nro_clearwing_IOSWebSocketBridge_ERROR, "I", 26 },
	{ "connections", &class_com_badlogic_gdx_utils_LongMap, (intptr_t) &SF_com_nro_clearwing_IOSWebSocketBridge_connections, "Lcom/badlogic/gdx/utils/LongMap;", 26 },
	{ "nextGeneration", &class_long, (intptr_t) &SF_com_nro_clearwing_IOSWebSocketBridge_nextGeneration, "J", 10 },
	{ "shuttingDown", &class_boolean, (intptr_t) &SF_com_nro_clearwing_IOSWebSocketBridge_shuttingDown, "Z", 10 },
	{ "generation", &class_long, offsetof(com_nro_clearwing_IOSWebSocketBridge, F_generation), "J", 2 },
	{ "connected", &class_boolean, offsetof(com_nro_clearwing_IOSWebSocketBridge, F_connected), "Z", 2 },
	{ "listener", &class_lib_network_IWebSocketBridge$IWebSocketListener, offsetof(com_nro_clearwing_IOSWebSocketBridge, F_listener), "Llib/network/IWebSocketBridge$IWebSocketListener;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_nro_clearwing_IOSWebSocketBridge, 0, "()V", 1 },
	{ "connect", (intptr_t) M_com_nro_clearwing_IOSWebSocketBridge_connect_java_lang_String_java_lang_String_int, VTABLE_com_nro_clearwing_IOSWebSocketBridge_connect_java_lang_String_java_lang_String_int, "(Ljava/lang/String;Ljava/lang/String;I)V", 33 },
	{ "send", (intptr_t) M_com_nro_clearwing_IOSWebSocketBridge_send_Array1_byte, VTABLE_com_nro_clearwing_IOSWebSocketBridge_send_Array1_byte, "([B)V", 33 },
	{ "close", (intptr_t) M_com_nro_clearwing_IOSWebSocketBridge_close, VTABLE_com_nro_clearwing_IOSWebSocketBridge_close, "()V", 33 },
	{ "unregister", (intptr_t) M_com_nro_clearwing_IOSWebSocketBridge_unregister, VTABLE_com_nro_clearwing_IOSWebSocketBridge_unregister, "()V", 2 },
	{ "isConnected", (intptr_t) M_com_nro_clearwing_IOSWebSocketBridge_isConnected_R_boolean, VTABLE_com_nro_clearwing_IOSWebSocketBridge_isConnected_R_boolean, "()Z", 33 },
	{ "setListener", (intptr_t) M_com_nro_clearwing_IOSWebSocketBridge_setListener_lib_network_IWebSocketBridge$IWebSocketListener, VTABLE_com_nro_clearwing_IOSWebSocketBridge_setListener_lib_network_IWebSocketBridge$IWebSocketListener, "(Llib/network/IWebSocketBridge$IWebSocketListener;)V", 33 },
	{ "shutdown", (intptr_t) SM_com_nro_clearwing_IOSWebSocketBridge_shutdown, 0, "()V", 9 },
	{ "onOpen", (intptr_t) SM_com_nro_clearwing_IOSWebSocketBridge_onOpen_long, 0, "(J)V", 9 },
	{ "onMessage", (intptr_t) SM_com_nro_clearwing_IOSWebSocketBridge_onMessage_long_Array1_byte, 0, "(J[B)V", 9 },
	{ "onClose", (intptr_t) SM_com_nro_clearwing_IOSWebSocketBridge_onClose_long, 0, "(J)V", 9 },
	{ "onError", (intptr_t) SM_com_nro_clearwing_IOSWebSocketBridge_onError_long_java_lang_String, 0, "(JLjava/lang/String;)V", 9 },
	{ "dispatch", (intptr_t) SM_com_nro_clearwing_IOSWebSocketBridge_dispatch_long_int_Array1_byte_java_lang_String, 0, "(JI[BLjava/lang/String;)V", 10 },
	{ "connectNative", (intptr_t) SM_com_nro_clearwing_IOSWebSocketBridge_connectNative_java_lang_String_long_R_boolean, 0, "(Ljava/lang/String;J)Z", 266 },
	{ "sendNative", (intptr_t) SM_com_nro_clearwing_IOSWebSocketBridge_sendNative_Array1_byte_long, 0, "([BJ)V", 266 },
	{ "closeNative", (intptr_t) SM_com_nro_clearwing_IOSWebSocketBridge_closeNative_long, 0, "(J)V", 266 },
	{ "pollEvents", (intptr_t) SM_com_nro_clearwing_IOSWebSocketBridge_pollEvents, 0, "()V", 265 },
	{ "lambda$connect$0", (intptr_t) SM_com_nro_clearwing_IOSWebSocketBridge_lambda$connect$0_long, 0, "(J)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_com_nro_clearwing_IOSWebSocketBridge, 0, "()V", 8 },
};

Class class_com_nro_clearwing_IOSWebSocketBridge{
		.nativeName = (intptr_t) "com/nro/clearwing/IOSWebSocketBridge",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_nro_clearwing_IOSWebSocketBridge),
		.classVtable = (intptr_t) vtable_com_nro_clearwing_IOSWebSocketBridge,
		.staticInitializer = (intptr_t) clinit_com_nro_clearwing_IOSWebSocketBridge,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_nro_clearwing_IOSWebSocketBridge,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_nro_clearwing_IOSWebSocketBridge = registerClass(&class_com_nro_clearwing_IOSWebSocketBridge);

}

