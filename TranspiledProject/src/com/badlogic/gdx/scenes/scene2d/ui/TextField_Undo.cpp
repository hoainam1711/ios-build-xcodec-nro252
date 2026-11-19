#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_Undo.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_Undo.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_UndoState.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Queue.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField.h"
#include "java/lang/System.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) object;
	if (self->F_states)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_states)->clazz)->markFunction)((jobject) self->F_states, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$Undo:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1334);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1335);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_max = (frame[1].i);
	LINE_NUMBER(1336);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Queue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Queue);
	init_com_badlogic_gdx_utils_Queue_int(ctx, sp[1].o, ((frame[1].i) + (jint(1))));
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK(sp[0].o))->F_states = (jref) sp[1].o;
	LINE_NUMBER(1337);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_store_java_lang_String_int_boolean_int(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$Undo:store", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
label_0:;
	{
	LINE_NUMBER(1341);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_states;
	if (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_size) <= ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_index)) goto label_1;
	}
	{
	LINE_NUMBER(1342);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_states;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Queue_removeLast_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Queue_removeLast_R_java_lang_Object])(ctx, sp[0].o);
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(1343);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_states;
	if (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_size) < ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_max)) goto label_3;
	}
	{
	LINE_NUMBER(1344);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_states;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Queue_removeFirst_R_java_lang_Object])(ctx, sp[0].o);
	LINE_NUMBER(1345);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK(sp[0].o))->F_index = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK(sp[0].o))->F_index) - (jint(1)));
	}
label_3:;
	{
	LINE_NUMBER(1347);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState);
	init_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1348);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState *) NULL_CHECK((frame[5].o)))->F_text = (jref) (frame[1].o);
	LINE_NUMBER(1349);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState *) NULL_CHECK((frame[5].o)))->F_cursor = (frame[2].i);
	LINE_NUMBER(1350);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState *) NULL_CHECK((frame[5].o)))->F_hasSelection = (frame[3].i);
	LINE_NUMBER(1351);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState *) NULL_CHECK((frame[5].o)))->F_selectionStart = (frame[4].i);
	LINE_NUMBER(1352);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_states;
	((func_com_badlogic_gdx_utils_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Queue_addLast_java_lang_Object])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(1353);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_states;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK(sp[0].o))->F_index = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[1].o))->F_size);
	LINE_NUMBER(1354);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_keyTyped_java_lang_String_int_boolean_int(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$Undo:keyTyped", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1357);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[5].l = temp0;
	LINE_NUMBER(1358);
	if ((longCompare(((frame[5].l) - (jlong(750ll))), ((jlong)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_lastChangeTime))) <= 0) goto label_2;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_store_java_lang_String_int_boolean_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_store_java_lang_String_int_boolean_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i));
	}
label_2:;
	{
	LINE_NUMBER(1359);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_lastChangeTime = (frame[5].l);
	LINE_NUMBER(1360);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_canUndo_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$Undo:canUndo", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1363);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_index) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_states;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Queue_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Queue_get_int_R_java_lang_Object])(ctx, sp[0].o, (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_index) - (jint(1))));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState, sp[0].o))))->F_text;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_1;
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

jbool M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_canRedo_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$Undo:canRedo", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1367);
	jint temp0 = (jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_states;
	if (temp0 >= (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)))) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_states;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Queue_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Queue_get_int_R_java_lang_Object])(ctx, sp[0].o, (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_index) + (jint(1))));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState, sp[0].o))))->F_text;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_1;
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

jobject M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_undo_java_lang_String_int_boolean_int_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$Undo:undo", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1372);
	M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_storeCurrent_java_lang_String_int_boolean_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(1373);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_states;
	sp[1].o = frame[0].o;
	jint temp0 = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK(sp[1].o))->F_index) - (jint(1));
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK(sp[1].o))->F_index = temp0;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Queue_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Queue_get_int_R_java_lang_Object])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_redo_java_lang_String_int_boolean_int_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$Undo:redo", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1378);
	M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_storeCurrent_java_lang_String_int_boolean_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(1379);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_states;
	sp[1].o = frame[0].o;
	jint temp0 = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK(sp[1].o))->F_index) + (jint(1));
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK(sp[1].o))->F_index = temp0;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Queue_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Queue_get_int_R_java_lang_Object])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_storeCurrent_java_lang_String_int_boolean_int(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$Undo:storeCurrent", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1384);
	jint temp0 = (jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_states;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(1385);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_states;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Queue_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Queue_get_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_index));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState, sp[0].o));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(1387);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState);
	init_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1388);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_states;
	((func_com_badlogic_gdx_utils_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Queue_addLast_java_lang_Object])(ctx, sp[0].o, (frame[5].o));
	}
label_4:;
	{
	LINE_NUMBER(1390);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState *) NULL_CHECK((frame[5].o)))->F_text = (jref) (frame[1].o);
	LINE_NUMBER(1391);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState *) NULL_CHECK((frame[5].o)))->F_cursor = (frame[2].i);
	LINE_NUMBER(1392);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState *) NULL_CHECK((frame[5].o)))->F_hasSelection = (frame[3].i);
	LINE_NUMBER(1393);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState *) NULL_CHECK((frame[5].o)))->F_selectionStart = (frame[4].i);
	LINE_NUMBER(1394);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_cancelUndo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$Undo:cancelUndo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1397);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK(sp[0].o))->F_index = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK(sp[0].o))->F_index) + (jint(1)));
	LINE_NUMBER(1398);
	jint temp0 = (jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_states;
	if (temp0 != (((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)))) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_states;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Queue_removeLast_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Queue_removeLast_R_java_lang_Object])(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(1399);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_cancelRedo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$Undo:cancelRedo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1402);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK(sp[0].o))->F_index = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK(sp[0].o))->F_index) - (jint(1)));
	LINE_NUMBER(1403);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$Undo:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1406);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_states;
	((func_com_badlogic_gdx_utils_Queue_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Queue_clear])(ctx, sp[0].o);
	LINE_NUMBER(1407);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo *) NULL_CHECK((frame[0].o)))->F_index = (jint(0));
	LINE_NUMBER(1408);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_store_java_lang_String_int_boolean_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_keyTyped_java_lang_String_int_boolean_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_canUndo_java_lang_String_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_canRedo_java_lang_String_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_undo_java_lang_String_int_boolean_int_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_redo_java_lang_String_int_boolean_int_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_storeCurrent_java_lang_String_int_boolean_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_cancelUndo,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_cancelRedo,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_clear,
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
	{ "store", "(Ljava/lang/String;IZI)V" },
	{ "keyTyped", "(Ljava/lang/String;IZI)V" },
	{ "canUndo", "(Ljava/lang/String;)Z" },
	{ "canRedo", "(Ljava/lang/String;)Z" },
	{ "undo", "(Ljava/lang/String;IZI)Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$UndoState;" },
	{ "redo", "(Ljava/lang/String;IZI)Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$UndoState;" },
	{ "storeCurrent", "(Ljava/lang/String;IZI)V" },
	{ "cancelUndo", "()V" },
	{ "cancelRedo", "()V" },
	{ "clear", "()V" },
};

static FieldMetadata fields[] {
	{ "max", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo, F_max), "I", 18 },
	{ "states", &class_com_badlogic_gdx_utils_Queue, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo, F_states), "Lcom/badlogic/gdx/utils/Queue;", 18 },
	{ "index", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo, F_index), "I", 2 },
	{ "lastChangeTime", &class_long, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo, F_lastChangeTime), "J", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_int, 0, "(I)V", 0 },
	{ "store", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_store_java_lang_String_int_boolean_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_store_java_lang_String_int_boolean_int, "(Ljava/lang/String;IZI)V", 0 },
	{ "keyTyped", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_keyTyped_java_lang_String_int_boolean_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_keyTyped_java_lang_String_int_boolean_int, "(Ljava/lang/String;IZI)V", 0 },
	{ "canUndo", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_canUndo_java_lang_String_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_canUndo_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 0 },
	{ "canRedo", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_canRedo_java_lang_String_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_canRedo_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 0 },
	{ "undo", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_undo_java_lang_String_int_boolean_int_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_undo_java_lang_String_int_boolean_int_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState, "(Ljava/lang/String;IZI)Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$UndoState;", 0 },
	{ "redo", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_redo_java_lang_String_int_boolean_int_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_redo_java_lang_String_int_boolean_int_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState, "(Ljava/lang/String;IZI)Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$UndoState;", 0 },
	{ "storeCurrent", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_storeCurrent_java_lang_String_int_boolean_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_storeCurrent_java_lang_String_int_boolean_int, "(Ljava/lang/String;IZI)V", 2 },
	{ "cancelUndo", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_cancelUndo, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_cancelUndo, "()V", 0 },
	{ "cancelRedo", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_cancelRedo, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_cancelRedo, "()V", 0 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_clear, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_clear, "()V", 0 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/TextField$Undo",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_TextField,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo);

}

