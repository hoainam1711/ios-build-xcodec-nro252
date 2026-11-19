#include "com/badlogic/gdx/InputMultiplexer.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/InputProcessor.h"
#include "java/lang/NullPointerException.h"
#include "com/badlogic/gdx/utils/SnapshotArray.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/InputMultiplexer.h"

extern "C" {


void mark_com_badlogic_gdx_InputMultiplexer(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_InputMultiplexer *) object;
	if (self->F_processors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_processors)->clazz)->markFunction)((jobject) self->F_processors, mark, depth + 1);
}

void clinit_com_badlogic_gdx_InputMultiplexer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_InputMultiplexer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputMultiplexer:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_InputMultiplexer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(28);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_SnapshotArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SnapshotArray);
	init_com_badlogic_gdx_utils_SnapshotArray_int(ctx, sp[1].o, (jint(4)));
	((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK(sp[0].o))->F_processors = (jref) sp[1].o;
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_InputMultiplexer_Array1_com_badlogic_gdx_InputProcessor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputMultiplexer:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_InputMultiplexer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(31);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_SnapshotArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SnapshotArray);
	init_com_badlogic_gdx_utils_SnapshotArray_int(ctx, sp[1].o, (jint(4)));
	((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK(sp[0].o))->F_processors = (jref) sp[1].o;
	LINE_NUMBER(32);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_addAll_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_addAll_Array1_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_InputMultiplexer_addProcessor_int_com_badlogic_gdx_InputProcessor(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputMultiplexer:addProcessor", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(36);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"processor cannot be null"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_insert_int_java_lang_Object])(ctx, sp[0].o, (frame[1].i), (frame[2].o));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_InputMultiplexer_removeProcessor_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputMultiplexer:removeProcessor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_removeIndex_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_InputMultiplexer_addProcessor_com_badlogic_gdx_InputProcessor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputMultiplexer:addProcessor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(45);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"processor cannot be null"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_add_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_InputMultiplexer_removeProcessor_com_badlogic_gdx_InputProcessor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputMultiplexer:removeProcessor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_SnapshotArray_removeValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_removeValue_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_InputMultiplexer_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputMultiplexer:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_InputMultiplexer_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputMultiplexer:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_clear])(ctx, sp[0].o);
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_InputMultiplexer_setProcessors_Array1_com_badlogic_gdx_InputProcessor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputMultiplexer:setProcessors", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_clear])(ctx, sp[0].o);
	LINE_NUMBER(64);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_addAll_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_addAll_Array1_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_InputMultiplexer_setProcessors_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputMultiplexer:setProcessors", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_clear])(ctx, sp[0].o);
	LINE_NUMBER(69);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_addAll_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_addAll_com_badlogic_gdx_utils_Array])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_InputMultiplexer_getProcessors_R_com_badlogic_gdx_utils_SnapshotArray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputMultiplexer:getProcessors", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_InputMultiplexer_keyDown_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputMultiplexer:keyDown", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_11; }
	{
	LINE_NUMBER(79);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_11:;
	{
	if ((frame[3].i) >= (frame[4].i)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_5
	}
	{
	LINE_NUMBER(80);
	jint temp0 = (jint)((func_com_badlogic_gdx_InputProcessor_keyDown_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_InputProcessor, INDEX_com_badlogic_gdx_InputProcessor_keyDown_int_R_boolean, (checkCast(ctx, &class_com_badlogic_gdx_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)))))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))))), (frame[1].i));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ICONST(1);
	INST_ISTORE(5);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_5; }
	{
	LINE_NUMBER(79);
	INST_IINC(3, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_11
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(83);
	goto label_15;
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(82);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(83);
	throwException(ctx, (frame[6].o));	}
label_15:;
	{
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_InputMultiplexer_keyUp_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputMultiplexer:keyUp", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_11; }
	{
	LINE_NUMBER(90);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_11:;
	{
	if ((frame[3].i) >= (frame[4].i)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_5
	}
	{
	LINE_NUMBER(91);
	jint temp0 = (jint)((func_com_badlogic_gdx_InputProcessor_keyUp_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_InputProcessor, INDEX_com_badlogic_gdx_InputProcessor_keyUp_int_R_boolean, (checkCast(ctx, &class_com_badlogic_gdx_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)))))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))))), (frame[1].i));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ICONST(1);
	INST_ISTORE(5);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_5; }
	{
	LINE_NUMBER(90);
	INST_IINC(3, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_11
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(94);
	goto label_15;
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(93);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(94);
	throwException(ctx, (frame[6].o));	}
label_15:;
	{
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_InputMultiplexer_keyTyped_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputMultiplexer:keyTyped", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_11; }
	{
	LINE_NUMBER(101);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_11:;
	{
	if ((frame[3].i) >= (frame[4].i)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_5
	}
	{
	LINE_NUMBER(102);
	jint temp0 = (jint)((func_com_badlogic_gdx_InputProcessor_keyTyped_char_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_InputProcessor, INDEX_com_badlogic_gdx_InputProcessor_keyTyped_char_R_boolean, (checkCast(ctx, &class_com_badlogic_gdx_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)))))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))))), (frame[1].i));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ICONST(1);
	INST_ISTORE(5);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_5; }
	{
	LINE_NUMBER(101);
	INST_IINC(3, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_11
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(105);
	goto label_15;
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(104);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(105);
	throwException(ctx, (frame[6].o));	}
label_15:;
	{
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_InputMultiplexer_touchDown_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputMultiplexer:touchDown", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_11; }
	{
	LINE_NUMBER(112);
	frame[6].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	frame[7].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_11:;
	{
	if ((frame[6].i) >= (frame[7].i)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_5
	}
	{
	LINE_NUMBER(113);
	jint temp0 = (jint)((func_com_badlogic_gdx_InputProcessor_touchDown_int_int_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_InputProcessor, INDEX_com_badlogic_gdx_InputProcessor_touchDown_int_int_int_int_R_boolean, (checkCast(ctx, &class_com_badlogic_gdx_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)))))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i))))), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ICONST(1);
	INST_ISTORE(8);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return (frame[8].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_5; }
	{
	LINE_NUMBER(112);
	INST_IINC(6, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_11
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(116);
	goto label_15;
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(115);
	INST_ASTORE(9);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(116);
	throwException(ctx, (frame[9].o));	}
label_15:;
	{
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_InputMultiplexer_touchUp_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputMultiplexer:touchUp", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_11; }
	{
	LINE_NUMBER(123);
	frame[6].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	frame[7].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_11:;
	{
	if ((frame[6].i) >= (frame[7].i)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_5
	}
	{
	LINE_NUMBER(124);
	jint temp0 = (jint)((func_com_badlogic_gdx_InputProcessor_touchUp_int_int_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_InputProcessor, INDEX_com_badlogic_gdx_InputProcessor_touchUp_int_int_int_int_R_boolean, (checkCast(ctx, &class_com_badlogic_gdx_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)))))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i))))), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ICONST(1);
	INST_ISTORE(8);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return (frame[8].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_5; }
	{
	LINE_NUMBER(123);
	INST_IINC(6, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_11
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(127);
	goto label_15;
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(126);
	INST_ASTORE(9);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(127);
	throwException(ctx, (frame[9].o));	}
label_15:;
	{
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_InputMultiplexer_touchCancelled_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputMultiplexer:touchCancelled", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_11; }
	{
	LINE_NUMBER(134);
	frame[6].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	frame[7].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_11:;
	{
	if ((frame[6].i) >= (frame[7].i)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_5
	}
	{
	LINE_NUMBER(135);
	jint temp0 = (jint)((func_com_badlogic_gdx_InputProcessor_touchCancelled_int_int_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_InputProcessor, INDEX_com_badlogic_gdx_InputProcessor_touchCancelled_int_int_int_int_R_boolean, (checkCast(ctx, &class_com_badlogic_gdx_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)))))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i))))), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ICONST(1);
	INST_ISTORE(8);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return (frame[8].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_5; }
	{
	LINE_NUMBER(134);
	INST_IINC(6, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_11
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(138);
	goto label_15;
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(137);
	INST_ASTORE(9);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(138);
	throwException(ctx, (frame[9].o));	}
label_15:;
	{
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_InputMultiplexer_touchDragged_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputMultiplexer:touchDragged", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_11; }
	{
	LINE_NUMBER(145);
	frame[5].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	frame[6].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_11:;
	{
	if ((frame[5].i) >= (frame[6].i)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_5
	}
	{
	LINE_NUMBER(146);
	jint temp0 = (jint)((func_com_badlogic_gdx_InputProcessor_touchDragged_int_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_InputProcessor, INDEX_com_badlogic_gdx_InputProcessor_touchDragged_int_int_int_R_boolean, (checkCast(ctx, &class_com_badlogic_gdx_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)))))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))))), (frame[1].i), (frame[2].i), (frame[3].i));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ICONST(1);
	INST_ISTORE(7);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return (frame[7].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_5; }
	{
	LINE_NUMBER(145);
	INST_IINC(5, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_11
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(149);
	goto label_15;
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(148);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(149);
	throwException(ctx, (frame[8].o));	}
label_15:;
	{
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_InputMultiplexer_mouseMoved_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputMultiplexer:mouseMoved", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_11; }
	{
	LINE_NUMBER(156);
	frame[4].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	frame[5].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_11:;
	{
	if ((frame[4].i) >= (frame[5].i)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_5
	}
	{
	LINE_NUMBER(157);
	jint temp0 = (jint)((func_com_badlogic_gdx_InputProcessor_mouseMoved_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_InputProcessor, INDEX_com_badlogic_gdx_InputProcessor_mouseMoved_int_int_R_boolean, (checkCast(ctx, &class_com_badlogic_gdx_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)))))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))))), (frame[1].i), (frame[2].i));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ICONST(1);
	INST_ISTORE(6);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return (frame[6].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_5; }
	{
	LINE_NUMBER(156);
	INST_IINC(4, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_11
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(160);
	goto label_15;
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(159);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(160);
	throwException(ctx, (frame[7].o));	}
label_15:;
	{
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_InputMultiplexer_scrolled_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputMultiplexer:scrolled", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_11; }
	{
	LINE_NUMBER(167);
	frame[4].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	frame[5].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_11:;
	{
	if ((frame[4].i) >= (frame[5].i)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_5
	}
	{
	LINE_NUMBER(168);
	jint temp0 = (jint)((func_com_badlogic_gdx_InputProcessor_scrolled_float_float_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_InputProcessor, INDEX_com_badlogic_gdx_InputProcessor_scrolled_float_float_R_boolean, (checkCast(ctx, &class_com_badlogic_gdx_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)))))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))))), (frame[1].f), (frame[2].f));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ICONST(1);
	INST_ISTORE(6);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return (frame[6].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_5; }
	{
	LINE_NUMBER(167);
	INST_IINC(4, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_11
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(171);
	goto label_15;
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(170);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((com_badlogic_gdx_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(171);
	throwException(ctx, (frame[7].o));	}
label_15:;
	{
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_InputMultiplexer[] {
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
	(void *) M_com_badlogic_gdx_InputMultiplexer_keyDown_int_R_boolean,
	(void *) M_com_badlogic_gdx_InputMultiplexer_keyUp_int_R_boolean,
	(void *) M_com_badlogic_gdx_InputMultiplexer_keyTyped_char_R_boolean,
	(void *) M_com_badlogic_gdx_InputMultiplexer_touchDown_int_int_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_InputMultiplexer_touchUp_int_int_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_InputMultiplexer_touchCancelled_int_int_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_InputMultiplexer_touchDragged_int_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_InputMultiplexer_mouseMoved_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_InputMultiplexer_scrolled_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_InputMultiplexer_addProcessor_int_com_badlogic_gdx_InputProcessor,
	(void *) M_com_badlogic_gdx_InputMultiplexer_removeProcessor_int,
	(void *) M_com_badlogic_gdx_InputMultiplexer_addProcessor_com_badlogic_gdx_InputProcessor,
	(void *) M_com_badlogic_gdx_InputMultiplexer_removeProcessor_com_badlogic_gdx_InputProcessor,
	(void *) M_com_badlogic_gdx_InputMultiplexer_size_R_int,
	(void *) M_com_badlogic_gdx_InputMultiplexer_clear,
	(void *) M_com_badlogic_gdx_InputMultiplexer_setProcessors_Array1_com_badlogic_gdx_InputProcessor,
	(void *) M_com_badlogic_gdx_InputMultiplexer_setProcessors_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_InputMultiplexer_getProcessors_R_com_badlogic_gdx_utils_SnapshotArray,
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
	{ "keyDown", "(I)Z" },
	{ "keyUp", "(I)Z" },
	{ "keyTyped", "(C)Z" },
	{ "touchDown", "(IIII)Z" },
	{ "touchUp", "(IIII)Z" },
	{ "touchCancelled", "(IIII)Z" },
	{ "touchDragged", "(III)Z" },
	{ "mouseMoved", "(II)Z" },
	{ "scrolled", "(FF)Z" },
	{ "addProcessor", "(ILcom/badlogic/gdx/InputProcessor;)V" },
	{ "removeProcessor", "(I)V" },
	{ "addProcessor", "(Lcom/badlogic/gdx/InputProcessor;)V" },
	{ "removeProcessor", "(Lcom/badlogic/gdx/InputProcessor;)V" },
	{ "size", "()I" },
	{ "clear", "()V" },
	{ "setProcessors", "([Lcom/badlogic/gdx/InputProcessor;)V" },
	{ "setProcessors", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "getProcessors", "()Lcom/badlogic/gdx/utils/SnapshotArray;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_InputProcessor, };

static FieldMetadata fields[] {
	{ "processors", &class_com_badlogic_gdx_utils_SnapshotArray, offsetof(com_badlogic_gdx_InputMultiplexer, F_processors), "Lcom/badlogic/gdx/utils/SnapshotArray;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_InputMultiplexer, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_InputMultiplexer_Array1_com_badlogic_gdx_InputProcessor, 0, "([Lcom/badlogic/gdx/InputProcessor;)V", 129 },
	{ "addProcessor", (intptr_t) M_com_badlogic_gdx_InputMultiplexer_addProcessor_int_com_badlogic_gdx_InputProcessor, VTABLE_com_badlogic_gdx_InputMultiplexer_addProcessor_int_com_badlogic_gdx_InputProcessor, "(ILcom/badlogic/gdx/InputProcessor;)V", 1 },
	{ "removeProcessor", (intptr_t) M_com_badlogic_gdx_InputMultiplexer_removeProcessor_int, VTABLE_com_badlogic_gdx_InputMultiplexer_removeProcessor_int, "(I)V", 1 },
	{ "addProcessor", (intptr_t) M_com_badlogic_gdx_InputMultiplexer_addProcessor_com_badlogic_gdx_InputProcessor, VTABLE_com_badlogic_gdx_InputMultiplexer_addProcessor_com_badlogic_gdx_InputProcessor, "(Lcom/badlogic/gdx/InputProcessor;)V", 1 },
	{ "removeProcessor", (intptr_t) M_com_badlogic_gdx_InputMultiplexer_removeProcessor_com_badlogic_gdx_InputProcessor, VTABLE_com_badlogic_gdx_InputMultiplexer_removeProcessor_com_badlogic_gdx_InputProcessor, "(Lcom/badlogic/gdx/InputProcessor;)V", 1 },
	{ "size", (intptr_t) M_com_badlogic_gdx_InputMultiplexer_size_R_int, VTABLE_com_badlogic_gdx_InputMultiplexer_size_R_int, "()I", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_InputMultiplexer_clear, VTABLE_com_badlogic_gdx_InputMultiplexer_clear, "()V", 1 },
	{ "setProcessors", (intptr_t) M_com_badlogic_gdx_InputMultiplexer_setProcessors_Array1_com_badlogic_gdx_InputProcessor, VTABLE_com_badlogic_gdx_InputMultiplexer_setProcessors_Array1_com_badlogic_gdx_InputProcessor, "([Lcom/badlogic/gdx/InputProcessor;)V", 129 },
	{ "setProcessors", (intptr_t) M_com_badlogic_gdx_InputMultiplexer_setProcessors_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_InputMultiplexer_setProcessors_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "getProcessors", (intptr_t) M_com_badlogic_gdx_InputMultiplexer_getProcessors_R_com_badlogic_gdx_utils_SnapshotArray, VTABLE_com_badlogic_gdx_InputMultiplexer_getProcessors_R_com_badlogic_gdx_utils_SnapshotArray, "()Lcom/badlogic/gdx/utils/SnapshotArray;", 1 },
	{ "keyDown", (intptr_t) M_com_badlogic_gdx_InputMultiplexer_keyDown_int_R_boolean, VTABLE_com_badlogic_gdx_InputMultiplexer_keyDown_int_R_boolean, "(I)Z", 1 },
	{ "keyUp", (intptr_t) M_com_badlogic_gdx_InputMultiplexer_keyUp_int_R_boolean, VTABLE_com_badlogic_gdx_InputMultiplexer_keyUp_int_R_boolean, "(I)Z", 1 },
	{ "keyTyped", (intptr_t) M_com_badlogic_gdx_InputMultiplexer_keyTyped_char_R_boolean, VTABLE_com_badlogic_gdx_InputMultiplexer_keyTyped_char_R_boolean, "(C)Z", 1 },
	{ "touchDown", (intptr_t) M_com_badlogic_gdx_InputMultiplexer_touchDown_int_int_int_int_R_boolean, VTABLE_com_badlogic_gdx_InputMultiplexer_touchDown_int_int_int_int_R_boolean, "(IIII)Z", 1 },
	{ "touchUp", (intptr_t) M_com_badlogic_gdx_InputMultiplexer_touchUp_int_int_int_int_R_boolean, VTABLE_com_badlogic_gdx_InputMultiplexer_touchUp_int_int_int_int_R_boolean, "(IIII)Z", 1 },
	{ "touchCancelled", (intptr_t) M_com_badlogic_gdx_InputMultiplexer_touchCancelled_int_int_int_int_R_boolean, VTABLE_com_badlogic_gdx_InputMultiplexer_touchCancelled_int_int_int_int_R_boolean, "(IIII)Z", 1 },
	{ "touchDragged", (intptr_t) M_com_badlogic_gdx_InputMultiplexer_touchDragged_int_int_int_R_boolean, VTABLE_com_badlogic_gdx_InputMultiplexer_touchDragged_int_int_int_R_boolean, "(III)Z", 1 },
	{ "mouseMoved", (intptr_t) M_com_badlogic_gdx_InputMultiplexer_mouseMoved_int_int_R_boolean, VTABLE_com_badlogic_gdx_InputMultiplexer_mouseMoved_int_int_R_boolean, "(II)Z", 1 },
	{ "scrolled", (intptr_t) M_com_badlogic_gdx_InputMultiplexer_scrolled_float_float_R_boolean, VTABLE_com_badlogic_gdx_InputMultiplexer_scrolled_float_float_R_boolean, "(FF)Z", 1 },
};

Class class_com_badlogic_gdx_InputMultiplexer{
		.nativeName = (intptr_t) "com/badlogic/gdx/InputMultiplexer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_InputMultiplexer),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_InputMultiplexer,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_InputMultiplexer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_InputMultiplexer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 29,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_InputMultiplexer = registerClass(&class_com_badlogic_gdx_InputMultiplexer);

}

