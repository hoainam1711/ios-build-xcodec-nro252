#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/scenes/scene2d/Group.h"
#include "java/lang/reflect/Constructor.h"
#include "com/badlogic/gdx/utils/PoolManager.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/Graphics.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "java/lang/reflect/Method.h"
#include "com/badlogic/gdx/utils/DelayedRemovalArray.h"
#include "com/badlogic/gdx/scenes/scene2d/Action.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ScissorStack.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "java/lang/reflect/Field.h"
#include "com/badlogic/gdx/graphics/glutils/ShapeRenderer.h"
#include "com/badlogic/gdx/utils/reflect/ClassReflection.h"
#include "java/lang/annotation/Annotation.h"
#include "com/badlogic/gdx/Gdx.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/utils/SnapshotArray.h"
#include "com/badlogic/gdx/math/Rectangle.h"
#include "com/badlogic/gdx/scenes/scene2d/EventListener.h"
#include "com/badlogic/gdx/scenes/scene2d/Event.h"
#include "com/badlogic/gdx/graphics/g2d/GlyphLayout.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/glutils/ShapeRenderer_ShapeType.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor_invoke_com_badlogic_gdx_utils_DefaultPool_PoolSupplier_0.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor_invoke_com_badlogic_gdx_utils_DefaultPool_PoolSupplier_1.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor_invoke_com_badlogic_gdx_utils_DefaultPool_PoolSupplier_2.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage_TouchFocus.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor_invoke_com_badlogic_gdx_utils_DefaultPool_PoolSupplier_3.h"
#include "com/badlogic/gdx/utils/DefaultPool_PoolSupplier.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/scenes/scene2d/Touchable.h"
#include "com/badlogic/gdx/math/Vector2.h"
#include "java/lang/Deprecated.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ChangeListener_ChangeEvent.h"

extern "C" {

jobject SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;

void mark_com_badlogic_gdx_scenes_scene2d_Actor(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_scenes_scene2d_Actor *) object;
	if (self->F_stage)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stage)->clazz)->markFunction)((jobject) self->F_stage, mark, depth + 1);
	if (self->F_parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parent)->clazz)->markFunction)((jobject) self->F_parent, mark, depth + 1);
	if (self->F_listeners)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listeners)->clazz)->markFunction)((jobject) self->F_listeners, mark, depth + 1);
	if (self->F_captureListeners)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_captureListeners)->clazz)->markFunction)((jobject) self->F_captureListeners, mark, depth + 1);
	if (self->F_actions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_actions)->clazz)->markFunction)((jobject) self->F_actions, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_touchable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_touchable)->clazz)->markFunction)((jobject) self->F_touchable, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_userObject)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_userObject)->clazz)->markFunction)((jobject) self->F_userObject, mark, depth + 1);
}

void init_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_Actor(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(59);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_DelayedRemovalArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_DelayedRemovalArray);
	init_com_badlogic_gdx_utils_DelayedRemovalArray_int(ctx, sp[1].o, (jint(0)));
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[0].o))->F_listeners = (jref) sp[1].o;
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_DelayedRemovalArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_DelayedRemovalArray);
	init_com_badlogic_gdx_utils_DelayedRemovalArray_int(ctx, sp[1].o, (jint(0)));
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[0].o))->F_captureListeners = (jref) sp[1].o;
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (jint(0)));
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[0].o))->F_actions = (jref) sp[1].o;
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_Touchable(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Touchable_enabled;
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(78);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_visible = (jint(1));
	LINE_NUMBER(82);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_scaleX = (jfloat(1));
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_scaleY = (jfloat(1));
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_draw_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:draw", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	LINE_NUMBER(97);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_act_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:act", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_actions;
	frame[2].o = sp[0].o;
	LINE_NUMBER(105);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[2].o)))->F_size) != 0) goto label_6;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_stage;
	if (sp[0].o == nullptr) goto label_0;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_stage;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Stage_getActionsRequestRendering_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getActionsRequestRendering_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_0;
	}
	clinit_com_badlogic_gdx_Gdx(ctx);
	(sp++)->o = SF_com_badlogic_gdx_Gdx_graphics;
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_Graphics_requestRendering) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_requestRendering, sp[0].o))(ctx, sp[0].o);
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(108);
	frame[3].i = (jint(0));
	}
label_7:;
	{
	if ((frame[3].i) >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[2].o)))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Action, sp[0].o));
	LINE_NUMBER(110);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Action_act_float_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Action_act_float_R_boolean])(ctx, (frame[4].o), (frame[1].f));
	if (temp0 == 0) goto label_10;
	}
	{
	if ((frame[3].i) >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[2].o)))->F_size)) goto label_10;
	}
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Action, sp[0].o));
	LINE_NUMBER(112);
	if ((frame[5].o) != (frame[4].o)) goto label_13;
	}
	INST_ILOAD(3);
	goto label_14;
label_13:;
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int])(ctx, (frame[2].o), (frame[4].o), (jint(1)));
	sp[0].i = temp0;
	sp += 1;
	}
label_14:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(113);
	if ((frame[6].i) == (jint(-1))) goto label_10;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[6].i));
	LINE_NUMBER(115);
	((func_com_badlogic_gdx_scenes_scene2d_Action_setActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Action_setActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[4].o), (jobject(nullptr)));
	LINE_NUMBER(116);
	INST_IINC(3, -1);
	}
label_10:;
	{
	LINE_NUMBER(108);
	INST_IINC(3, 1);
	goto label_7;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(123);
	goto label_19;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(120);
	frame[3].o = sp[0].o;
	LINE_NUMBER(121);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_toString_R_java_lang_String])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(122);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Actor: "_j))));
	sp[2].o = frame[4].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[4].o));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp1, (128));
	sp[2].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[2].o, temp0, temp2);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_RuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_19:;
	LINE_NUMBER(124);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:fire", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[4]{};

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Event_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Event_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[1].o));
	if (sp[0].o != nullptr) goto label_22;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_Event_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Event_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, sp[0].o, sp[1].o);
	}
label_22:;
	{
	LINE_NUMBER(140);
	((func_com_badlogic_gdx_scenes_scene2d_Event_setTarget_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Event_setTarget_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(143);
	clinit_com_badlogic_gdx_scenes_scene2d_Actor(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_utils_Array)));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o));
	LINE_NUMBER(144);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_parent;
	frame[3].o = sp[0].o;
	}
label_25:;
	{
	LINE_NUMBER(145);
	if ((frame[3].o) == nullptr) goto label_0;
	}
	{
	LINE_NUMBER(146);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, (frame[2].o), (frame[3].o));
	LINE_NUMBER(147);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[3].o)))->F_parent;
	frame[3].o = sp[0].o;
	goto label_25;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_29; }
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[2].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(153);
	frame[5].i = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[2].o)))->F_size) - (jint(1)));
	}
label_29:;
	INST_ILOAD(5);
	if ((--sp)->i < 0) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_30
	{
	LINE_NUMBER(154);
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Group, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)))));
	LINE_NUMBER(155);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Group_notify_com_badlogic_gdx_scenes_scene2d_Event_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_notify_com_badlogic_gdx_scenes_scene2d_Event_boolean_R_boolean])(ctx, (frame[6].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(156);
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Event_isStopped_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Event_isStopped_R_boolean])(ctx, (frame[1].o));
	if (temp1 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Event_isCancelled_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Event_isCancelled_R_boolean])(ctx, (frame[1].o));
	frame[7].i = temp0;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(176);
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, (frame[2].o));
	LINE_NUMBER(177);
	clinit_com_badlogic_gdx_scenes_scene2d_Actor(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return (frame[7].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_30; }
	{
	LINE_NUMBER(153);
	INST_IINC(5, -1);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_29
	}
label_30:;
	{
	LINE_NUMBER(160);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_notify_com_badlogic_gdx_scenes_scene2d_Event_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_notify_com_badlogic_gdx_scenes_scene2d_Event_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(161);
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Event_isStopped_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Event_isStopped_R_boolean])(ctx, (frame[1].o));
	if (temp1 == 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Event_isCancelled_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Event_isCancelled_R_boolean])(ctx, (frame[1].o));
	frame[5].i = temp0;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(176);
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, (frame[2].o));
	LINE_NUMBER(177);
	clinit_com_badlogic_gdx_scenes_scene2d_Actor(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(164);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_notify_com_badlogic_gdx_scenes_scene2d_Event_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_notify_com_badlogic_gdx_scenes_scene2d_Event_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(165);
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Event_getBubbles_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Event_getBubbles_R_boolean])(ctx, (frame[1].o));
	if (temp1 != 0) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Event_isCancelled_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Event_isCancelled_R_boolean])(ctx, (frame[1].o));
	frame[5].i = temp0;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(176);
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, (frame[2].o));
	LINE_NUMBER(177);
	clinit_com_badlogic_gdx_scenes_scene2d_Actor(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(166);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Event_isStopped_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Event_isStopped_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_13; }
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Event_isCancelled_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Event_isCancelled_R_boolean])(ctx, (frame[1].o));
	frame[5].i = temp0;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(176);
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, (frame[2].o));
	LINE_NUMBER(177);
	clinit_com_badlogic_gdx_scenes_scene2d_Actor(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_13:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[3]) { bypasses[3] = false; goto label_45; }
	{
	LINE_NUMBER(169);
	frame[5].i = (jint(0));
	frame[6].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[2].o)))->F_size);
	}
label_45:;
	{
	if ((frame[5].i) >= (frame[6].i)) { popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_18; } // goto label_46
	}
	{
	LINE_NUMBER(170);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Group_notify_com_badlogic_gdx_scenes_scene2d_Event_boolean_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Group, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))))))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_notify_com_badlogic_gdx_scenes_scene2d_Event_boolean_R_boolean])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Group, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))))), (frame[1].o), (jint(0)));
	LINE_NUMBER(171);
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Event_isStopped_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Event_isStopped_R_boolean])(ctx, (frame[1].o));
	if (temp1 == 0) { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Event_isCancelled_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Event_isCancelled_R_boolean])(ctx, (frame[1].o));
	frame[7].i = temp0;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(176);
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, (frame[2].o));
	LINE_NUMBER(177);
	clinit_com_badlogic_gdx_scenes_scene2d_Actor(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return (frame[7].i);
	}
label_16:;
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[2]) { bypasses[2] = false; goto label_46; }
	{
	LINE_NUMBER(169);
	INST_IINC(5, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[3] = true; goto label_15; } // goto label_45
	}
label_46:;
	{
	LINE_NUMBER(174);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Event_isCancelled_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Event_isCancelled_R_boolean])(ctx, (frame[1].o));
	frame[5].i = temp0;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(176);
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, (frame[2].o));
	LINE_NUMBER(177);
	clinit_com_badlogic_gdx_scenes_scene2d_Actor(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_2:;
label_20: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(176);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	{
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, (frame[2].o));
	LINE_NUMBER(177);
	clinit_com_badlogic_gdx_scenes_scene2d_Actor(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(178);
	throwException(ctx, (frame[8].o));	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Actor_notify_com_badlogic_gdx_scenes_scene2d_Event_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:notify", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Event_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Event_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[1].o));
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"The event target cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(190);
	if ((frame[2].i) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_captureListeners;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[-1].o))->F_listeners;
label_7:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(191);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[3].o)))->F_size) != 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Event_isCancelled_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Event_isCancelled_R_boolean])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_9:;
	{
	LINE_NUMBER(193);
	((func_com_badlogic_gdx_scenes_scene2d_Event_setListenerActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Event_setListenerActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(194);
	((func_com_badlogic_gdx_scenes_scene2d_Event_setCapture_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Event_setCapture_boolean])(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(195);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Event_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Event_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[1].o));
	if (sp[0].o != nullptr) goto label_0;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_stage;
	((func_com_badlogic_gdx_scenes_scene2d_Event_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Event_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, sp[0].o, sp[1].o);
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(198);
	((func_com_badlogic_gdx_utils_DelayedRemovalArray_begin) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_begin])(ctx, (frame[3].o));
	LINE_NUMBER(199);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[3].o)))->F_size);
	}
label_14:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_15;
	}
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_DelayedRemovalArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[4].i));
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_EventListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_EventListener, INDEX_com_badlogic_gdx_scenes_scene2d_EventListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_EventListener, sp[0].o))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_EventListener, sp[0].o)), (frame[1].o));
	if (temp0 == 0) goto label_17;
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_scenes_scene2d_Event_handle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Event_handle])(ctx, sp[0].o);
label_17:;
	{
	LINE_NUMBER(199);
	INST_IINC(4, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(201);
	((func_com_badlogic_gdx_utils_DelayedRemovalArray_end) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_end])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(205);
	goto label_18;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(202);
	frame[4].o = sp[0].o;
	LINE_NUMBER(203);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_toString_R_java_lang_String])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(204);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Actor: "_j))));
	sp[2].o = frame[5].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[5].o));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp1, (128));
	sp[2].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[2].o, temp0, temp2);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_RuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_18:;
	{
	LINE_NUMBER(207);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Event_isCancelled_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Event_isCancelled_R_boolean])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Actor_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:hit", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(221);
	if ((frame[3].i) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_touchable;
	clinit_com_badlogic_gdx_scenes_scene2d_Touchable(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Touchable_enabled;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(222);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(223);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) < 0) goto label_3;
	}
	{
	if ((floatCompare((frame[1].f), ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_width), 1)) >= 0) goto label_3;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) < 0) goto label_3;
	}
	{
	if ((floatCompare((frame[2].f), ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_height), 1)) >= 0) goto label_3;
	}
	INST_ALOAD(0);
	goto label_4;
label_3:;
	INST_ACONST_NULL();
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Actor_remove_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_parent;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean])(ctx, sp[0].o, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Actor_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:addListener", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(237);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"listener cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_listeners;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_DelayedRemovalArray_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_contains_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_listeners;
	((func_com_badlogic_gdx_utils_DelayedRemovalArray_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_add_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(242);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Actor_removeListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:removeListener", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(246);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"listener cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_listeners;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_DelayedRemovalArray_removeValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_removeValue_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Actor_getListeners_R_com_badlogic_gdx_utils_DelayedRemovalArray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:getListeners", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_listeners;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Actor_addCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:addCaptureListener", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(257);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"listener cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_captureListeners;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_DelayedRemovalArray_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_contains_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_captureListeners;
	((func_com_badlogic_gdx_utils_DelayedRemovalArray_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_add_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(259);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Actor_removeCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:removeCaptureListener", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(263);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"listener cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(264);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_captureListeners;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_DelayedRemovalArray_removeValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_removeValue_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Actor_getCaptureListeners_R_com_badlogic_gdx_utils_DelayedRemovalArray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:getCaptureListeners", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_captureListeners;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_addAction_com_badlogic_gdx_scenes_scene2d_Action(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:addAction", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(272);
	((func_com_badlogic_gdx_scenes_scene2d_Action_setActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Action_setActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(273);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_actions;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(275);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_stage;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_stage;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Stage_getActionsRequestRendering_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getActionsRequestRendering_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	clinit_com_badlogic_gdx_Gdx(ctx);
	(sp++)->o = SF_com_badlogic_gdx_Gdx_graphics;
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_Graphics_requestRendering) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_requestRendering, sp[0].o))(ctx, sp[0].o);
label_3:;
	LINE_NUMBER(276);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_removeAction_com_badlogic_gdx_scenes_scene2d_Action(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:removeAction", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(280);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_actions;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	if (temp0 == 0) goto label_1;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_Action_setActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Action_setActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[1].o), (jobject(nullptr)));
	}
label_1:;
	LINE_NUMBER(281);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Actor_getActions_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:getActions", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_actions;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Actor_hasActions_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:hasActions", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_actions;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
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

void M_com_badlogic_gdx_scenes_scene2d_Actor_clearActions(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:clearActions", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_actions;
	frame[1].i = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}
label_1:;
	INST_ILOAD(1);
	if ((--sp)->i < 0) goto label_2;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_actions;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((func_com_badlogic_gdx_scenes_scene2d_Action_setActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Action, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Action_setActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Action, sp[0].o)), (jobject(nullptr)));
	LINE_NUMBER(294);
	INST_IINC(1, -1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_actions;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(297);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_clearListeners(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:clearListeners", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_listeners;
	((func_com_badlogic_gdx_utils_DelayedRemovalArray_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_clear])(ctx, sp[0].o);
	LINE_NUMBER(302);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_captureListeners;
	((func_com_badlogic_gdx_utils_DelayedRemovalArray_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_DelayedRemovalArray_clear])(ctx, sp[0].o);
	LINE_NUMBER(303);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(307);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_clearActions) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_clearActions])(ctx, (frame[0].o));
	LINE_NUMBER(308);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_clearListeners) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_clearListeners])(ctx, (frame[0].o));
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:getStage", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_stage;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setStage_com_badlogic_gdx_scenes_scene2d_Stage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setStage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(319);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_stage = (jref) (frame[1].o);
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Actor_isDescendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:isDescendantOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(324);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"actor cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(325);
	frame[2].o = (frame[0].o);
	}
label_2:;
	{
	LINE_NUMBER(327);
	if ((frame[2].o) != (frame[1].o)) goto label_3;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(328);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[2].o)))->F_parent;
	frame[2].o = sp[0].o;
	LINE_NUMBER(329);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Actor_isAscendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:isAscendantOf", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(335);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"actor cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(337);
	if ((frame[1].o) != (frame[0].o)) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(338);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[1].o)))->F_parent;
	frame[1].o = sp[0].o;
	LINE_NUMBER(339);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(340);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Actor_firstAscendant_java_lang_Class_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:firstAscendant", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(346);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"actor cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(347);
	frame[2].o = (frame[0].o);
	}
label_2:;
	{
	LINE_NUMBER(349);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_reflect_ClassReflection_isInstance_java_lang_Class_java_lang_Object_R_boolean(ctx, (frame[1].o), (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	INST_ALOAD(2);
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[2].o)))->F_parent;
	frame[2].o = sp[0].o;
	LINE_NUMBER(351);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Actor_hasParent_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:hasParent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(357);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
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

jobject M_com_badlogic_gdx_scenes_scene2d_Actor_getParent_R_com_badlogic_gdx_scenes_scene2d_Group(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:getParent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(362);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_parent;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setParent_com_badlogic_gdx_scenes_scene2d_Group(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setParent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(368);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_parent = (jref) (frame[1].o);
	LINE_NUMBER(369);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Actor_isTouchable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:isTouchable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(373);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_touchable;
	clinit_com_badlogic_gdx_scenes_scene2d_Touchable(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Touchable_enabled;
	if (sp[0].o != sp[1].o) goto label_1;
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

jobject M_com_badlogic_gdx_scenes_scene2d_Actor_getTouchable_R_com_badlogic_gdx_scenes_scene2d_Touchable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:getTouchable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(377);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_touchable;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setTouchable_com_badlogic_gdx_scenes_scene2d_Touchable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setTouchable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(382);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_touchable = (jref) (frame[1].o);
	LINE_NUMBER(383);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:isVisible", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(386);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_visible);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setVisible_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setVisible", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(391);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_visible = (frame[1].i);
	LINE_NUMBER(392);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Actor_ascendantsVisible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:ascendantsVisible", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(396);
	frame[1].o = (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(398);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(399);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[1].o)))->F_parent;
	frame[1].o = sp[0].o;
	LINE_NUMBER(400);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(401);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Actor_ancestorsVisible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:ancestorsVisible", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(407);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_ascendantsVisible_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_ascendantsVisible_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Actor_hasKeyboardFocus_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:hasKeyboardFocus", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(412);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(413);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_getKeyboardFocus_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getKeyboardFocus_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[1].o));
	if (sp[0].o != (frame[0].o)) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Actor_hasScrollFocus_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:hasScrollFocus", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(418);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(419);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_getScrollFocus_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getScrollFocus_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[1].o));
	if (sp[0].o != (frame[0].o)) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Actor_isTouchFocusTarget_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:isTouchFocusTarget", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(425);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(426);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(427);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[1].o)))->F_touchFocuses;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_4:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[1].o)))->F_touchFocuses;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus, sp[0].o))))->F_target;
	if (sp[0].o != (frame[0].o)) goto label_7;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(427);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(429);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Actor_isTouchFocusListener_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:isTouchFocusListener", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(435);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(436);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(437);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[1].o)))->F_touchFocuses;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_4:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(438);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[1].o)))->F_touchFocuses;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus, sp[0].o))))->F_listenerActor;
	if (sp[0].o != (frame[0].o)) goto label_7;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(437);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(439);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Actor_getUserObject_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:getUserObject", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(444);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_userObject;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setUserObject_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setUserObject", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(449);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_userObject = (jref) (frame[1].o);
	LINE_NUMBER(450);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_Actor_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(454);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_Actor_getX_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:getX", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(459);
	frame[2].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(460);
	if (((frame[1].i) & (16)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(461);
	frame[2].f = ((frame[2].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_width));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(462);
	if (((frame[1].i) & (8)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(463);
	frame[2].f = ((frame[2].f) + (((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2))));
	}
label_4:;
	{
	LINE_NUMBER(464);
	popStackFrame(ctx);
	return (frame[2].f);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(468);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x), (frame[1].f), -1)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(469);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(470);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_positionChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_positionChanged])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(472);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setX_float_int(jcontext ctx, jobject self, jfloat param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setX", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(478);
	if (((frame[2].i) & (16)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(479);
	frame[1].f = ((frame[1].f) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_width));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(480);
	if (((frame[2].i) & (8)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(481);
	frame[1].f = ((frame[1].f) - (((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2))));
	}
label_3:;
	{
	LINE_NUMBER(483);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x), (frame[1].f), -1)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(484);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(485);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_positionChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_positionChanged])(ctx, (frame[0].o));
	}
label_5:;
	LINE_NUMBER(487);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_Actor_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(491);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(495);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].f), -1)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(496);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y = (frame[1].f);
	LINE_NUMBER(497);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_positionChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_positionChanged])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(499);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setY_float_int(jcontext ctx, jobject self, jfloat param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setY", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(505);
	if (((frame[2].i) & (jint(2))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(506);
	frame[1].f = ((frame[1].f) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_height));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(507);
	if (((frame[2].i) & (jint(4))) != 0) goto label_3;
	}
	{
	LINE_NUMBER(508);
	frame[1].f = ((frame[1].f) - (((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2))));
	}
label_3:;
	{
	LINE_NUMBER(510);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].f), -1)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(511);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y = (frame[1].f);
	LINE_NUMBER(512);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_positionChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_positionChanged])(ctx, (frame[0].o));
	}
label_5:;
	LINE_NUMBER(514);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_Actor_getY_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:getY", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(518);
	frame[2].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(519);
	if (((frame[1].i) & (jint(2))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(520);
	frame[2].f = ((frame[2].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_height));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(521);
	if (((frame[1].i) & (jint(4))) != 0) goto label_4;
	}
	{
	LINE_NUMBER(522);
	frame[2].f = ((frame[2].f) + (((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2))));
	}
label_4:;
	{
	LINE_NUMBER(523);
	popStackFrame(ctx);
	return (frame[2].f);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setPosition", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(528);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x), (frame[1].f), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y), (frame[2].f), -1)) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(529);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(530);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(531);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_positionChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_positionChanged])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(533);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setPosition_float_float_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setPosition", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(538);
	if (((frame[3].i) & (16)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(539);
	frame[1].f = ((frame[1].f) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_width));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(540);
	if (((frame[3].i) & (8)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(541);
	frame[1].f = ((frame[1].f) - (((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2))));
	}
label_3:;
	{
	LINE_NUMBER(543);
	if (((frame[3].i) & (jint(2))) == 0) goto label_5;
	}
	{
	LINE_NUMBER(544);
	frame[2].f = ((frame[2].f) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_height));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(545);
	if (((frame[3].i) & (jint(4))) != 0) goto label_7;
	}
	{
	LINE_NUMBER(546);
	frame[2].f = ((frame[2].f) - (((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2))));
	}
label_7:;
	{
	LINE_NUMBER(548);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x), (frame[1].f), -1)) != 0) goto label_9;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y), (frame[2].f), -1)) == 0) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(549);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(550);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(551);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_positionChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_positionChanged])(ctx, (frame[0].o));
	}
label_10:;
	LINE_NUMBER(553);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_moveBy_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:moveBy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(557);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(558);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[0].o))->F_x) + (frame[1].f));
	LINE_NUMBER(559);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[0].o))->F_y) + (frame[2].f));
	LINE_NUMBER(560);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_positionChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_positionChanged])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(562);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(565);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_width);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setWidth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(569);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_width), (frame[1].f), -1)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(570);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_width = (frame[1].f);
	LINE_NUMBER(571);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_sizeChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_sizeChanged])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(573);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(576);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_height);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setHeight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(580);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_height), (frame[1].f), -1)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(581);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_height = (frame[1].f);
	LINE_NUMBER(582);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_sizeChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_sizeChanged])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(584);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_Actor_getTop_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:getTop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(588);
	popStackFrame(ctx);
	return (((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_height));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_Actor_getRight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:getRight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(593);
	popStackFrame(ctx);
	return (((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_width));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_positionChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:positionChanged", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(598);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_sizeChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:sizeChanged", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(602);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_scaleChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:scaleChanged", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(606);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_rotationChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:rotationChanged", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(610);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setSize_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(614);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_width), (frame[1].f), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_height), (frame[2].f), -1)) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(615);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_width = (frame[1].f);
	LINE_NUMBER(616);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_height = (frame[2].f);
	LINE_NUMBER(617);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_sizeChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_sizeChanged])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(619);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_sizeBy_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:sizeBy", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(623);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(624);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[0].o))->F_width = (((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[0].o))->F_width) + (frame[1].f));
	LINE_NUMBER(625);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[0].o))->F_height = (((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[0].o))->F_height) + (frame[1].f));
	LINE_NUMBER(626);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_sizeChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_sizeChanged])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(628);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_sizeBy_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:sizeBy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(632);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(633);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[0].o))->F_width = (((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[0].o))->F_width) + (frame[1].f));
	LINE_NUMBER(634);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[0].o))->F_height = (((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[0].o))->F_height) + (frame[2].f));
	LINE_NUMBER(635);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_sizeChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_sizeChanged])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(637);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setBounds_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setBounds", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(641);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x), (frame[1].f), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y), (frame[2].f), -1)) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(642);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(643);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(644);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_positionChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_positionChanged])(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(646);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_width), (frame[3].f), -1)) != 0) goto label_5;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_height), (frame[4].f), -1)) == 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(647);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_width = (frame[3].f);
	LINE_NUMBER(648);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_height = (frame[4].f);
	LINE_NUMBER(649);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_sizeChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_sizeChanged])(ctx, (frame[0].o));
	}
label_6:;
	LINE_NUMBER(651);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_Actor_getOriginX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:getOriginX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(654);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_originX);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setOriginX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setOriginX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(658);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_originX = (frame[1].f);
	LINE_NUMBER(659);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_Actor_getOriginY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:getOriginY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(662);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_originY);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setOriginY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setOriginY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(666);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_originY = (frame[1].f);
	LINE_NUMBER(667);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setOrigin_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setOrigin", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(671);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_originX = (frame[1].f);
	LINE_NUMBER(672);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_originY = (frame[2].f);
	LINE_NUMBER(673);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setOrigin_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setOrigin", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(677);
	if (((frame[1].i) & (8)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(678);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_originX = (jfloat(0));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(679);
	if (((frame[1].i) & (16)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(680);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_originX = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_width);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(682);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_originX = (((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2)));
	}
label_3:;
	{
	LINE_NUMBER(684);
	if (((frame[1].i) & (jint(4))) == 0) goto label_6;
	}
	{
	LINE_NUMBER(685);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_originY = (jfloat(0));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(686);
	if (((frame[1].i) & (jint(2))) == 0) goto label_9;
	}
	{
	LINE_NUMBER(687);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_originY = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_height);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(689);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_originY = (((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2)));
	}
label_8:;
	LINE_NUMBER(690);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_Actor_getScaleX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:getScaleX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(693);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_scaleX);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setScaleX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setScaleX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(697);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_scaleX), (frame[1].f), -1)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(698);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_scaleX = (frame[1].f);
	LINE_NUMBER(699);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_scaleChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_scaleChanged])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(701);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_Actor_getScaleY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:getScaleY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(704);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_scaleY);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setScaleY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setScaleY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(708);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_scaleY), (frame[1].f), -1)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(709);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_scaleY = (frame[1].f);
	LINE_NUMBER(710);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_scaleChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_scaleChanged])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(712);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setScale_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setScale", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(716);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_scaleX), (frame[1].f), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_scaleY), (frame[1].f), -1)) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(717);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_scaleX = (frame[1].f);
	LINE_NUMBER(718);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_scaleY = (frame[1].f);
	LINE_NUMBER(719);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_scaleChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_scaleChanged])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(721);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setScale_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setScale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(725);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_scaleX), (frame[1].f), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_scaleY), (frame[2].f), -1)) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(726);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_scaleX = (frame[1].f);
	LINE_NUMBER(727);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_scaleY = (frame[2].f);
	LINE_NUMBER(728);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_scaleChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_scaleChanged])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(730);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_scaleBy_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:scaleBy", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(734);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(735);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[0].o))->F_scaleX = (((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[0].o))->F_scaleX) + (frame[1].f));
	LINE_NUMBER(736);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[0].o))->F_scaleY = (((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[0].o))->F_scaleY) + (frame[1].f));
	LINE_NUMBER(737);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_scaleChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_scaleChanged])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(739);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_scaleBy_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:scaleBy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(743);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(744);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[0].o))->F_scaleX = (((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[0].o))->F_scaleX) + (frame[1].f));
	LINE_NUMBER(745);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[0].o))->F_scaleY = (((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK(sp[0].o))->F_scaleY) + (frame[2].f));
	LINE_NUMBER(746);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_scaleChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_scaleChanged])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(748);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_Actor_getRotation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:getRotation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(751);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_rotation);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setRotation_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setRotation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(755);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_rotation), (frame[1].f), -1)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(756);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[1].f);
	LINE_NUMBER(757);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_rotationChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_rotationChanged])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(759);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_rotateBy_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:rotateBy", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(763);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(764);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_rotation = (fmodf((((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_rotation) + (frame[1].f)), (jfloat(360.0f))));
	LINE_NUMBER(765);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_rotationChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_rotationChanged])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(767);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setColor_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(770);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(771);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setColor_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setColor", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(774);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(775);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Actor_getColor_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:getColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(779);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_color;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Actor_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(785);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setName_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(792);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(793);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_toFront(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:toFront", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(797);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_setZIndex_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setZIndex_int_R_boolean])(ctx, (frame[0].o), (jint(2147483647)));
	LINE_NUMBER(798);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_toBack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:toBack", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(802);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_setZIndex_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setZIndex_int_R_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(803);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Actor_setZIndex_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setZIndex", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(810);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ZIndex cannot be < 0."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(811);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_parent;
	frame[2].o = sp[0].o;
	LINE_NUMBER(812);
	if ((frame[2].o) != nullptr) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(813);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[2].o)))->F_children;
	frame[3].o = sp[0].o;
	LINE_NUMBER(814);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[3].o)))->F_size) > (jint(1))) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(815);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[1].i), (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[3].o)))->F_size) - (jint(1))));
	frame[1].i = temp0;
	LINE_NUMBER(816);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[1].i));
	if (sp[0].o != (frame[0].o)) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(817);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean])(ctx, (frame[3].o), (frame[0].o), (jint(1)));
	if (temp0 != 0) goto label_8;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(818);
	((func_com_badlogic_gdx_utils_Array_insert_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_insert_int_java_lang_Object])(ctx, (frame[3].o), (frame[1].i), (frame[0].o));
	LINE_NUMBER(819);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:getZIndex", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(825);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_parent;
	frame[1].o = sp[0].o;
	LINE_NUMBER(826);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(827);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[1].o)))->F_children;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_SnapshotArray_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[0].o, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Actor_clipBegin_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:clipBegin", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(832);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_clipBegin_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_clipBegin_float_float_float_float_R_boolean])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_height));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Actor_clipBegin_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:clipBegin", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(841);
	if ((floatCompare((frame[3].f), (jfloat(0)), 1)) <= 0) goto label_1;
	}
	{
	if ((floatCompare((frame[4].f), (jfloat(0)), 1)) > 0) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(842);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_stage;
	frame[5].o = sp[0].o;
	LINE_NUMBER(843);
	if ((frame[5].o) != nullptr) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(844);
	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Rectangle_tmp;
	frame[6].o = sp[0].o;
	LINE_NUMBER(845);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[6].o)))->F_x = (frame[1].f);
	LINE_NUMBER(846);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[6].o)))->F_y = (frame[2].f);
	LINE_NUMBER(847);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[6].o)))->F_width = (frame[3].f);
	LINE_NUMBER(848);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[6].o)))->F_height = (frame[4].f);
	LINE_NUMBER(849);
	clinit_com_badlogic_gdx_scenes_scene2d_Actor(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_math_Rectangle)));
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_math_Rectangle, sp[0].o));
	LINE_NUMBER(850);
	((func_com_badlogic_gdx_scenes_scene2d_Stage_calculateScissors_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_calculateScissors_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle])(ctx, (frame[5].o), (frame[6].o), (frame[7].o));
	LINE_NUMBER(851);
	jint temp0 = (jint)SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_pushScissors_com_badlogic_gdx_math_Rectangle_R_boolean(ctx, (frame[7].o));
	if (temp0 == 0) goto label_12;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_12:;
	{
	LINE_NUMBER(852);
	clinit_com_badlogic_gdx_scenes_scene2d_Actor(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(853);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_clipEnd(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:clipEnd", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(858);
	clinit_com_badlogic_gdx_scenes_scene2d_Actor(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_popScissors_R_com_badlogic_gdx_math_Rectangle(ctx);
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(859);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Actor_screenToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:screenToLocalCoordinates", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(864);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_stage;
	frame[2].o = sp[0].o;
	LINE_NUMBER(865);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(866);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_screenToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_screenToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[2].o), (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:stageToLocalCoordinates", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(871);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_parent;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Group_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(872);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_parentToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_parentToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(873);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Actor_parentToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:parentToLocalCoordinates", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(878);
	frame[2].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_rotation);
	LINE_NUMBER(879);
	frame[3].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_scaleX);
	LINE_NUMBER(880);
	frame[4].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_scaleY);
	LINE_NUMBER(881);
	frame[5].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(882);
	frame[6].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(883);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) != 0) goto label_6;
	}
	{
	LINE_NUMBER(884);
	if ((floatCompare((frame[3].f), (jfloat(1)), -1)) != 0) goto label_8;
	}
	{
	if ((floatCompare((frame[4].f), (jfloat(1)), -1)) != 0) goto label_8;
	}
	{
	LINE_NUMBER(885);
	sp[0].o = frame[1].o;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x) - (frame[5].f));
	LINE_NUMBER(886);
	sp[0].o = frame[1].o;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y) - (frame[6].f));
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(888);
	frame[7].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_originX);
	LINE_NUMBER(889);
	frame[8].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_originY);
	LINE_NUMBER(890);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x = ((((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x) - (frame[5].f)) - (frame[7].f)) / (frame[3].f)) + (frame[7].f));
	LINE_NUMBER(891);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y = ((((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y) - (frame[6].f)) - (frame[8].f)) / (frame[4].f)) + (frame[8].f));
	LINE_NUMBER(892);
	goto label_11;
	}
label_6:;
	{
	LINE_NUMBER(894);
	jdouble temp0 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (jdouble(((frame[2].f) * (jfloat(0.017453292f))))));
	frame[7].f = (jfloat(temp0));
	LINE_NUMBER(895);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble(((frame[2].f) * (jfloat(0.017453292f))))));
	frame[8].f = (jfloat(temp1));
	LINE_NUMBER(896);
	frame[9].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_originX);
	LINE_NUMBER(897);
	frame[10].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_originY);
	LINE_NUMBER(898);
	frame[11].f = ((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x) - (frame[5].f)) - (frame[9].f));
	LINE_NUMBER(899);
	frame[12].f = ((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y) - (frame[6].f)) - (frame[10].f));
	LINE_NUMBER(900);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x = (((((frame[11].f) * (frame[7].f)) + ((frame[12].f) * (frame[8].f))) / (frame[3].f)) + (frame[9].f));
	LINE_NUMBER(901);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y = (((((frame[11].f) * (-(frame[8].f))) + ((frame[12].f) * (frame[7].f))) / (frame[4].f)) + (frame[10].f));
	}
label_11:;
	{
	LINE_NUMBER(903);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Actor_localToScreenCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:localToScreenCoordinates", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(909);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_stage;
	frame[2].o = sp[0].o;
	LINE_NUMBER(910);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(911);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_localToAscendantCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_localToAscendantCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_stageToScreenCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_stageToScreenCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Actor_localToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:localToStageCoordinates", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(916);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_localToAscendantCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_localToAscendantCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Actor_localToParentCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:localToParentCoordinates", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(921);
	frame[2].f = (-((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(922);
	frame[3].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_scaleX);
	LINE_NUMBER(923);
	frame[4].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_scaleY);
	LINE_NUMBER(924);
	frame[5].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(925);
	frame[6].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(926);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) != 0) goto label_6;
	}
	{
	LINE_NUMBER(927);
	if ((floatCompare((frame[3].f), (jfloat(1)), -1)) != 0) goto label_8;
	}
	{
	if ((floatCompare((frame[4].f), (jfloat(1)), -1)) != 0) goto label_8;
	}
	{
	LINE_NUMBER(928);
	sp[0].o = frame[1].o;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x) + (frame[5].f));
	LINE_NUMBER(929);
	sp[0].o = frame[1].o;
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y) + (frame[6].f));
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(931);
	frame[7].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_originX);
	LINE_NUMBER(932);
	frame[8].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_originY);
	LINE_NUMBER(933);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x = ((((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x) - (frame[7].f)) * (frame[3].f)) + (frame[7].f)) + (frame[5].f));
	LINE_NUMBER(934);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y = ((((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y) - (frame[8].f)) * (frame[4].f)) + (frame[8].f)) + (frame[6].f));
	LINE_NUMBER(935);
	goto label_11;
	}
label_6:;
	{
	LINE_NUMBER(937);
	jdouble temp0 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (jdouble(((frame[2].f) * (jfloat(0.017453292f))))));
	frame[7].f = (jfloat(temp0));
	LINE_NUMBER(938);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble(((frame[2].f) * (jfloat(0.017453292f))))));
	frame[8].f = (jfloat(temp1));
	LINE_NUMBER(939);
	frame[9].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_originX);
	LINE_NUMBER(940);
	frame[10].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_originY);
	LINE_NUMBER(941);
	frame[11].f = ((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x) - (frame[9].f)) * (frame[3].f));
	LINE_NUMBER(942);
	frame[12].f = ((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y) - (frame[10].f)) * (frame[4].f));
	LINE_NUMBER(943);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x = (((((frame[11].f) * (frame[7].f)) + ((frame[12].f) * (frame[8].f))) + (frame[9].f)) + (frame[5].f));
	LINE_NUMBER(944);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y = (((((frame[11].f) * (-(frame[8].f))) + ((frame[12].f) * (frame[7].f))) + (frame[10].f)) + (frame[6].f));
	}
label_11:;
	{
	LINE_NUMBER(946);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Actor_localToAscendantCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:localToAscendantCoordinates", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(952);
	frame[3].o = (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(954);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_localToParentCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_localToParentCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(955);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[3].o)))->F_parent;
	frame[3].o = sp[0].o;
	LINE_NUMBER(956);
	if ((frame[3].o) != (frame[1].o)) goto label_4;
	}
	INST_ALOAD(2);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(957);
	if ((frame[3].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(958);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Actor is not an ascendant: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Actor_localToActorCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:localToActorCoordinates", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(963);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_localToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_localToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(964);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:drawDebug", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(969);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_drawDebugBounds_com_badlogic_gdx_graphics_glutils_ShapeRenderer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_drawDebugBounds_com_badlogic_gdx_graphics_glutils_ShapeRenderer])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(970);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_drawDebugBounds_com_badlogic_gdx_graphics_glutils_ShapeRenderer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:drawDebugBounds", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(974);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_debug) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(975);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_set_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_set_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(976);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_stage;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_stage;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_getDebugColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getDebugColor_R_com_badlogic_gdx_graphics_Color])(ctx, sp[1].o);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setColor_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setColor_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(977);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rect_float_float_float_float_float_float_float_float_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rect_float_float_float_float_float_float_float_float_float])(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_originX), ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_originY), ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_height), ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_scaleX), ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_scaleY), ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(978);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Actor_setDebug_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:setDebug", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(982);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_debug = (frame[1].i);
	LINE_NUMBER(983);
	if ((frame[1].i) == 0) goto label_2;
	}
	INST_ICONST(1);
	clinit_com_badlogic_gdx_scenes_scene2d_Stage(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_Stage_debug = (--sp)->i;
label_2:;
	LINE_NUMBER(984);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Actor_getDebug_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:getDebug", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(987);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_debug);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Actor_debug_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:debug", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(992);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setDebug_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setDebug_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(993);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Actor_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:toString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(997);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_name;
	frame[1].o = sp[0].o;
	LINE_NUMBER(998);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(999);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1000);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[1].o), (46));
	frame[2].i = temp0;
	LINE_NUMBER(1001);
	if ((frame[2].i) == (jint(-1))) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[2].i) + (jint(1))));
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1003);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_Actor(ctx);
	{
	LINE_NUMBER(61);
	clinit_com_badlogic_gdx_utils_PoolManager(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_PoolManager);
	init_com_badlogic_gdx_utils_PoolManager(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_Actor(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS = sp[0].o;
	LINE_NUMBER(64);
	clinit_com_badlogic_gdx_scenes_scene2d_Actor(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_math_Rectangle);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_0(ctx);
		auto proxy = (com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_0 *) gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_0);
		sp[2].o = (jobject) proxy;
	}
	((func_com_badlogic_gdx_utils_PoolManager_addPool_java_lang_Class_com_badlogic_gdx_utils_DefaultPool$PoolSupplier) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_addPool_java_lang_Class_com_badlogic_gdx_utils_DefaultPool$PoolSupplier])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(65);
	clinit_com_badlogic_gdx_scenes_scene2d_Actor(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_utils_Array);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_1(ctx);
		auto proxy = (com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_1 *) gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_1);
		sp[2].o = (jobject) proxy;
	}
	((func_com_badlogic_gdx_utils_PoolManager_addPool_java_lang_Class_com_badlogic_gdx_utils_DefaultPool$PoolSupplier) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_addPool_java_lang_Class_com_badlogic_gdx_utils_DefaultPool$PoolSupplier])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(66);
	clinit_com_badlogic_gdx_scenes_scene2d_Actor(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_graphics_g2d_GlyphLayout);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_2(ctx);
		auto proxy = (com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_2 *) gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_2);
		sp[2].o = (jobject) proxy;
	}
	((func_com_badlogic_gdx_utils_PoolManager_addPool_java_lang_Class_com_badlogic_gdx_utils_DefaultPool$PoolSupplier) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_addPool_java_lang_Class_com_badlogic_gdx_utils_DefaultPool$PoolSupplier])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(67);
	clinit_com_badlogic_gdx_scenes_scene2d_Actor(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_3(ctx);
		auto proxy = (com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_3 *) gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_3);
		sp[2].o = (jobject) proxy;
	}
	((func_com_badlogic_gdx_utils_PoolManager_addPool_java_lang_Class_com_badlogic_gdx_utils_DefaultPool$PoolSupplier) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_addPool_java_lang_Class_com_badlogic_gdx_utils_DefaultPool$PoolSupplier])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_scenes_scene2d_Actor;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method ancestorsVisible
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[33]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[80]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[83]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[84]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[85]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[86]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[87]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[88]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[89]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[90]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[91]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[92]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[93]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[94]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[95]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[96]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[97]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[98]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[99]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[100]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[101]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[102]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[103]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[104]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[105]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[106]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[107]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[108]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_Actor[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_draw_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_act_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_notify_com_badlogic_gdx_scenes_scene2d_Event_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_remove_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_removeListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getListeners_R_com_badlogic_gdx_utils_DelayedRemovalArray,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_addCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_removeCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getCaptureListeners_R_com_badlogic_gdx_utils_DelayedRemovalArray,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_addAction_com_badlogic_gdx_scenes_scene2d_Action,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_removeAction_com_badlogic_gdx_scenes_scene2d_Action,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getActions_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hasActions_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clearActions,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clearListeners,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clear,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setStage_com_badlogic_gdx_scenes_scene2d_Stage,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isDescendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isAscendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_firstAscendant_java_lang_Class_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hasParent_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getParent_R_com_badlogic_gdx_scenes_scene2d_Group,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setParent_com_badlogic_gdx_scenes_scene2d_Group,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isTouchable_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getTouchable_R_com_badlogic_gdx_scenes_scene2d_Touchable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setTouchable_com_badlogic_gdx_scenes_scene2d_Touchable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setVisible_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_ascendantsVisible_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_ancestorsVisible_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hasKeyboardFocus_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hasScrollFocus_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isTouchFocusTarget_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isTouchFocusListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getUserObject_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setUserObject_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getX_int_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setX_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setY_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getY_int_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setPosition_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setPosition_float_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_moveBy_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setWidth_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setHeight_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getTop_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getRight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_positionChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_sizeChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_scaleChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_rotationChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setSize_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_sizeBy_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_sizeBy_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setBounds_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getOriginX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setOriginX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getOriginY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setOriginY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setOrigin_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setOrigin_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getScaleX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setScaleX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getScaleY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setScaleY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setScale_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setScale_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_scaleBy_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_scaleBy_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getRotation_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setRotation_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_rotateBy_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setColor_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setColor_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getColor_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getName_R_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setName_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_toFront,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_toBack,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setZIndex_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clipBegin_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clipBegin_float_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clipEnd,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_screenToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_parentToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToScreenCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToParentCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToAscendantCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToActorCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_drawDebugBounds_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setDebug_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getDebug_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_debug_R_com_badlogic_gdx_scenes_scene2d_Actor,
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
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V" },
	{ "act", "(F)V" },
	{ "fire", "(Lcom/badlogic/gdx/scenes/scene2d/Event;)Z" },
	{ "notify", "(Lcom/badlogic/gdx/scenes/scene2d/Event;Z)Z" },
	{ "hit", "(FFZ)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "remove", "()Z" },
	{ "addListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "removeListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "getListeners", "()Lcom/badlogic/gdx/utils/DelayedRemovalArray;" },
	{ "addCaptureListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "removeCaptureListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "getCaptureListeners", "()Lcom/badlogic/gdx/utils/DelayedRemovalArray;" },
	{ "addAction", "(Lcom/badlogic/gdx/scenes/scene2d/Action;)V" },
	{ "removeAction", "(Lcom/badlogic/gdx/scenes/scene2d/Action;)V" },
	{ "getActions", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "hasActions", "()Z" },
	{ "clearActions", "()V" },
	{ "clearListeners", "()V" },
	{ "clear", "()V" },
	{ "getStage", "()Lcom/badlogic/gdx/scenes/scene2d/Stage;" },
	{ "setStage", "(Lcom/badlogic/gdx/scenes/scene2d/Stage;)V" },
	{ "isDescendantOf", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z" },
	{ "isAscendantOf", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z" },
	{ "firstAscendant", "(Ljava/lang/Class;)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "hasParent", "()Z" },
	{ "getParent", "()Lcom/badlogic/gdx/scenes/scene2d/Group;" },
	{ "setParent", "(Lcom/badlogic/gdx/scenes/scene2d/Group;)V" },
	{ "isTouchable", "()Z" },
	{ "getTouchable", "()Lcom/badlogic/gdx/scenes/scene2d/Touchable;" },
	{ "setTouchable", "(Lcom/badlogic/gdx/scenes/scene2d/Touchable;)V" },
	{ "isVisible", "()Z" },
	{ "setVisible", "(Z)V" },
	{ "ascendantsVisible", "()Z" },
	{ "ancestorsVisible", "()Z" },
	{ "hasKeyboardFocus", "()Z" },
	{ "hasScrollFocus", "()Z" },
	{ "isTouchFocusTarget", "()Z" },
	{ "isTouchFocusListener", "()Z" },
	{ "getUserObject", "()Ljava/lang/Object;" },
	{ "setUserObject", "(Ljava/lang/Object;)V" },
	{ "getX", "()F" },
	{ "getX", "(I)F" },
	{ "setX", "(F)V" },
	{ "setX", "(FI)V" },
	{ "getY", "()F" },
	{ "setY", "(F)V" },
	{ "setY", "(FI)V" },
	{ "getY", "(I)F" },
	{ "setPosition", "(FF)V" },
	{ "setPosition", "(FFI)V" },
	{ "moveBy", "(FF)V" },
	{ "getWidth", "()F" },
	{ "setWidth", "(F)V" },
	{ "getHeight", "()F" },
	{ "setHeight", "(F)V" },
	{ "getTop", "()F" },
	{ "getRight", "()F" },
	{ "positionChanged", "()V" },
	{ "sizeChanged", "()V" },
	{ "scaleChanged", "()V" },
	{ "rotationChanged", "()V" },
	{ "setSize", "(FF)V" },
	{ "sizeBy", "(F)V" },
	{ "sizeBy", "(FF)V" },
	{ "setBounds", "(FFFF)V" },
	{ "getOriginX", "()F" },
	{ "setOriginX", "(F)V" },
	{ "getOriginY", "()F" },
	{ "setOriginY", "(F)V" },
	{ "setOrigin", "(FF)V" },
	{ "setOrigin", "(I)V" },
	{ "getScaleX", "()F" },
	{ "setScaleX", "(F)V" },
	{ "getScaleY", "()F" },
	{ "setScaleY", "(F)V" },
	{ "setScale", "(F)V" },
	{ "setScale", "(FF)V" },
	{ "scaleBy", "(F)V" },
	{ "scaleBy", "(FF)V" },
	{ "getRotation", "()F" },
	{ "setRotation", "(F)V" },
	{ "rotateBy", "(F)V" },
	{ "setColor", "(Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "setColor", "(FFFF)V" },
	{ "getColor", "()Lcom/badlogic/gdx/graphics/Color;" },
	{ "getName", "()Ljava/lang/String;" },
	{ "setName", "(Ljava/lang/String;)V" },
	{ "toFront", "()V" },
	{ "toBack", "()V" },
	{ "setZIndex", "(I)Z" },
	{ "getZIndex", "()I" },
	{ "clipBegin", "()Z" },
	{ "clipBegin", "(FFFF)Z" },
	{ "clipEnd", "()V" },
	{ "screenToLocalCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "stageToLocalCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "parentToLocalCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToScreenCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToStageCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToParentCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToAscendantCoordinates", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToActorCoordinates", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "drawDebug", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V" },
	{ "drawDebugBounds", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V" },
	{ "setDebug", "(Z)V" },
	{ "getDebug", "()Z" },
	{ "debug", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
};

static FieldMetadata fields[] {
	{ "POOLS", &class_com_badlogic_gdx_utils_PoolManager, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS, "Lcom/badlogic/gdx/utils/PoolManager;", 9 },
	{ "stage", &class_com_badlogic_gdx_scenes_scene2d_Stage, offsetof(com_badlogic_gdx_scenes_scene2d_Actor, F_stage), "Lcom/badlogic/gdx/scenes/scene2d/Stage;", 2 },
	{ "parent", &class_com_badlogic_gdx_scenes_scene2d_Group, offsetof(com_badlogic_gdx_scenes_scene2d_Actor, F_parent), "Lcom/badlogic/gdx/scenes/scene2d/Group;", 0 },
	{ "listeners", &class_com_badlogic_gdx_utils_DelayedRemovalArray, offsetof(com_badlogic_gdx_scenes_scene2d_Actor, F_listeners), "Lcom/badlogic/gdx/utils/DelayedRemovalArray;", 18 },
	{ "captureListeners", &class_com_badlogic_gdx_utils_DelayedRemovalArray, offsetof(com_badlogic_gdx_scenes_scene2d_Actor, F_captureListeners), "Lcom/badlogic/gdx/utils/DelayedRemovalArray;", 18 },
	{ "actions", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_scenes_scene2d_Actor, F_actions), "Lcom/badlogic/gdx/utils/Array;", 18 },
	{ "name", &class_java_lang_String, offsetof(com_badlogic_gdx_scenes_scene2d_Actor, F_name), "Ljava/lang/String;", 2 },
	{ "touchable", &class_com_badlogic_gdx_scenes_scene2d_Touchable, offsetof(com_badlogic_gdx_scenes_scene2d_Actor, F_touchable), "Lcom/badlogic/gdx/scenes/scene2d/Touchable;", 2 },
	{ "visible", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_Actor, F_visible), "Z", 2 },
	{ "debug", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_Actor, F_debug), "Z", 2 },
	{ "x", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_Actor, F_x), "F", 0 },
	{ "y", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_Actor, F_y), "F", 0 },
	{ "width", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_Actor, F_width), "F", 0 },
	{ "height", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_Actor, F_height), "F", 0 },
	{ "originX", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_Actor, F_originX), "F", 0 },
	{ "originY", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_Actor, F_originY), "F", 0 },
	{ "scaleX", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_Actor, F_scaleX), "F", 0 },
	{ "scaleY", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_Actor, F_scaleY), "F", 0 },
	{ "rotation", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_Actor, F_rotation), "F", 0 },
	{ "color", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_scenes_scene2d_Actor, F_color), "Lcom/badlogic/gdx/graphics/Color;", 16 },
	{ "userObject", &class_java_lang_Object, offsetof(com_badlogic_gdx_scenes_scene2d_Actor, F_userObject), "Ljava/lang/Object;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_Actor, 0, "()V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_draw_com_badlogic_gdx_graphics_g2d_Batch_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_draw_com_badlogic_gdx_graphics_g2d_Batch_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V", 1 },
	{ "act", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_act_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_act_float, "(F)V", 1 },
	{ "fire", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/Event;)Z", 1 },
	{ "notify", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_notify_com_badlogic_gdx_scenes_scene2d_Event_boolean_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_notify_com_badlogic_gdx_scenes_scene2d_Event_boolean_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/Event;Z)Z", 1 },
	{ "hit", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, "(FFZ)Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_remove_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_remove_R_boolean, "()Z", 1 },
	{ "addListener", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z", 1 },
	{ "removeListener", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_removeListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_removeListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z", 1 },
	{ "getListeners", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_getListeners_R_com_badlogic_gdx_utils_DelayedRemovalArray, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getListeners_R_com_badlogic_gdx_utils_DelayedRemovalArray, "()Lcom/badlogic/gdx/utils/DelayedRemovalArray;", 1 },
	{ "addCaptureListener", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_addCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_addCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z", 1 },
	{ "removeCaptureListener", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_removeCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_removeCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z", 1 },
	{ "getCaptureListeners", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_getCaptureListeners_R_com_badlogic_gdx_utils_DelayedRemovalArray, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getCaptureListeners_R_com_badlogic_gdx_utils_DelayedRemovalArray, "()Lcom/badlogic/gdx/utils/DelayedRemovalArray;", 1 },
	{ "addAction", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_addAction_com_badlogic_gdx_scenes_scene2d_Action, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_addAction_com_badlogic_gdx_scenes_scene2d_Action, "(Lcom/badlogic/gdx/scenes/scene2d/Action;)V", 1 },
	{ "removeAction", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_removeAction_com_badlogic_gdx_scenes_scene2d_Action, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_removeAction_com_badlogic_gdx_scenes_scene2d_Action, "(Lcom/badlogic/gdx/scenes/scene2d/Action;)V", 1 },
	{ "getActions", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_getActions_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getActions_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "hasActions", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_hasActions_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_hasActions_R_boolean, "()Z", 1 },
	{ "clearActions", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_clearActions, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_clearActions, "()V", 1 },
	{ "clearListeners", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_clearListeners, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_clearListeners, "()V", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_clear, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_clear, "()V", 1 },
	{ "getStage", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage, "()Lcom/badlogic/gdx/scenes/scene2d/Stage;", 1 },
	{ "setStage", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setStage_com_badlogic_gdx_scenes_scene2d_Stage, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setStage_com_badlogic_gdx_scenes_scene2d_Stage, "(Lcom/badlogic/gdx/scenes/scene2d/Stage;)V", 4 },
	{ "isDescendantOf", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_isDescendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_isDescendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z", 1 },
	{ "isAscendantOf", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_isAscendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_isAscendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z", 1 },
	{ "firstAscendant", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_firstAscendant_java_lang_Class_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_firstAscendant_java_lang_Class_R_com_badlogic_gdx_scenes_scene2d_Actor, "(Ljava/lang/Class;)Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "hasParent", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_hasParent_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_hasParent_R_boolean, "()Z", 1 },
	{ "getParent", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_getParent_R_com_badlogic_gdx_scenes_scene2d_Group, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getParent_R_com_badlogic_gdx_scenes_scene2d_Group, "()Lcom/badlogic/gdx/scenes/scene2d/Group;", 1 },
	{ "setParent", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setParent_com_badlogic_gdx_scenes_scene2d_Group, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setParent_com_badlogic_gdx_scenes_scene2d_Group, "(Lcom/badlogic/gdx/scenes/scene2d/Group;)V", 4 },
	{ "isTouchable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_isTouchable_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_isTouchable_R_boolean, "()Z", 1 },
	{ "getTouchable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_getTouchable_R_com_badlogic_gdx_scenes_scene2d_Touchable, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getTouchable_R_com_badlogic_gdx_scenes_scene2d_Touchable, "()Lcom/badlogic/gdx/scenes/scene2d/Touchable;", 1 },
	{ "setTouchable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setTouchable_com_badlogic_gdx_scenes_scene2d_Touchable, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setTouchable_com_badlogic_gdx_scenes_scene2d_Touchable, "(Lcom/badlogic/gdx/scenes/scene2d/Touchable;)V", 1 },
	{ "isVisible", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean, "()Z", 1 },
	{ "setVisible", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setVisible_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setVisible_boolean, "(Z)V", 1 },
	{ "ascendantsVisible", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_ascendantsVisible_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_ascendantsVisible_R_boolean, "()Z", 1 },
	{ "ancestorsVisible", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_ancestorsVisible_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_ancestorsVisible_R_boolean, "()Z", 131073 },
	{ "hasKeyboardFocus", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_hasKeyboardFocus_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_hasKeyboardFocus_R_boolean, "()Z", 1 },
	{ "hasScrollFocus", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_hasScrollFocus_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_hasScrollFocus_R_boolean, "()Z", 1 },
	{ "isTouchFocusTarget", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_isTouchFocusTarget_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_isTouchFocusTarget_R_boolean, "()Z", 1 },
	{ "isTouchFocusListener", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_isTouchFocusListener_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_isTouchFocusListener_R_boolean, "()Z", 1 },
	{ "getUserObject", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_getUserObject_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getUserObject_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "setUserObject", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setUserObject_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setUserObject_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "getX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_getX_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getX_R_float, "()F", 1 },
	{ "getX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_getX_int_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getX_int_R_float, "(I)F", 1 },
	{ "setX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setX_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setX_float, "(F)V", 1 },
	{ "setX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setX_float_int, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setX_float_int, "(FI)V", 1 },
	{ "getY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_getY_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getY_R_float, "()F", 1 },
	{ "setY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setY_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setY_float, "(F)V", 1 },
	{ "setY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setY_float_int, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setY_float_int, "(FI)V", 1 },
	{ "getY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_getY_int_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getY_int_R_float, "(I)F", 1 },
	{ "setPosition", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setPosition_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setPosition_float_float, "(FF)V", 1 },
	{ "setPosition", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setPosition_float_float_int, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setPosition_float_float_int, "(FFI)V", 1 },
	{ "moveBy", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_moveBy_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_moveBy_float_float, "(FF)V", 1 },
	{ "getWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float, "()F", 1 },
	{ "setWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setWidth_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setWidth_float, "(F)V", 1 },
	{ "getHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float, "()F", 1 },
	{ "setHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setHeight_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setHeight_float, "(F)V", 1 },
	{ "getTop", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_getTop_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getTop_R_float, "()F", 1 },
	{ "getRight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_getRight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getRight_R_float, "()F", 1 },
	{ "positionChanged", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_positionChanged, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_positionChanged, "()V", 4 },
	{ "sizeChanged", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_sizeChanged, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_sizeChanged, "()V", 4 },
	{ "scaleChanged", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_scaleChanged, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_scaleChanged, "()V", 4 },
	{ "rotationChanged", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_rotationChanged, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_rotationChanged, "()V", 4 },
	{ "setSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setSize_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setSize_float_float, "(FF)V", 1 },
	{ "sizeBy", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_sizeBy_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_sizeBy_float, "(F)V", 1 },
	{ "sizeBy", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_sizeBy_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_sizeBy_float_float, "(FF)V", 1 },
	{ "setBounds", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setBounds_float_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setBounds_float_float_float_float, "(FFFF)V", 1 },
	{ "getOriginX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_getOriginX_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getOriginX_R_float, "()F", 1 },
	{ "setOriginX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setOriginX_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setOriginX_float, "(F)V", 1 },
	{ "getOriginY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_getOriginY_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getOriginY_R_float, "()F", 1 },
	{ "setOriginY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setOriginY_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setOriginY_float, "(F)V", 1 },
	{ "setOrigin", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setOrigin_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setOrigin_float_float, "(FF)V", 1 },
	{ "setOrigin", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setOrigin_int, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setOrigin_int, "(I)V", 1 },
	{ "getScaleX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_getScaleX_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getScaleX_R_float, "()F", 1 },
	{ "setScaleX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setScaleX_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setScaleX_float, "(F)V", 1 },
	{ "getScaleY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_getScaleY_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getScaleY_R_float, "()F", 1 },
	{ "setScaleY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setScaleY_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setScaleY_float, "(F)V", 1 },
	{ "setScale", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setScale_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setScale_float, "(F)V", 1 },
	{ "setScale", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setScale_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setScale_float_float, "(FF)V", 1 },
	{ "scaleBy", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_scaleBy_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_scaleBy_float, "(F)V", 1 },
	{ "scaleBy", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_scaleBy_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_scaleBy_float_float, "(FF)V", 1 },
	{ "getRotation", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_getRotation_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getRotation_R_float, "()F", 1 },
	{ "setRotation", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setRotation_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setRotation_float, "(F)V", 1 },
	{ "rotateBy", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_rotateBy_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_rotateBy_float, "(F)V", 1 },
	{ "setColor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setColor_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setColor_com_badlogic_gdx_graphics_Color, "(Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "setColor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setColor_float_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setColor_float_float_float_float, "(FFFF)V", 1 },
	{ "getColor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_getColor_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getColor_R_com_badlogic_gdx_graphics_Color, "()Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "getName", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_getName_R_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setName", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setName_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setName_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "toFront", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_toFront, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_toFront, "()V", 1 },
	{ "toBack", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_toBack, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_toBack, "()V", 1 },
	{ "setZIndex", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setZIndex_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setZIndex_int_R_boolean, "(I)Z", 1 },
	{ "getZIndex", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int, "()I", 1 },
	{ "clipBegin", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_clipBegin_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_clipBegin_R_boolean, "()Z", 1 },
	{ "clipBegin", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_clipBegin_float_float_float_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_clipBegin_float_float_float_float_R_boolean, "(FFFF)Z", 1 },
	{ "clipEnd", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_clipEnd, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_clipEnd, "()V", 1 },
	{ "screenToLocalCoordinates", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_screenToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_screenToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "stageToLocalCoordinates", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "parentToLocalCoordinates", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_parentToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_parentToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "localToScreenCoordinates", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_localToScreenCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_localToScreenCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "localToStageCoordinates", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_localToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_localToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "localToParentCoordinates", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_localToParentCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_localToParentCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "localToAscendantCoordinates", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_localToAscendantCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_localToAscendantCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "localToActorCoordinates", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_localToActorCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_localToActorCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "drawDebug", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer, "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V", 1 },
	{ "drawDebugBounds", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_drawDebugBounds_com_badlogic_gdx_graphics_glutils_ShapeRenderer, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_drawDebugBounds_com_badlogic_gdx_graphics_glutils_ShapeRenderer, "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V", 4 },
	{ "setDebug", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_setDebug_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setDebug_boolean, "(Z)V", 1 },
	{ "getDebug", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_getDebug_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getDebug_R_boolean, "()Z", 1 },
	{ "debug", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_debug_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_debug_R_com_badlogic_gdx_scenes_scene2d_Actor, "()Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_Actor, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_scenes_scene2d_Actor{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/Actor",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_Actor),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_Actor,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_Actor,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_Actor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 21,
		.nativeFields = (intptr_t) fields,
		.methodCount = 110,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 118,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_Actor = registerClass(&class_com_badlogic_gdx_scenes_scene2d_Actor);

}

