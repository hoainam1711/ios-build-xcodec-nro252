#include "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane.h"
#include "java/lang/UnsupportedOperationException.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane_ScrollPaneStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane_3.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane_2.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane_1.h"
#include "com/badlogic/gdx/scenes/scene2d/Group.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Layout.h"
#include "java/lang/reflect/Constructor.h"
#include "com/badlogic/gdx/input/GestureDetector.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/Graphics.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "java/lang/reflect/Method.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "java/lang/reflect/Field.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "com/badlogic/gdx/graphics/glutils/ShapeRenderer.h"
#include "java/lang/annotation/Annotation.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/math/Rectangle.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener.h"
#include "com/badlogic/gdx/scenes/scene2d/EventListener.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Styleable.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/WidgetGroup.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/math/Interpolation.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/math/Vector2.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Cullable.h"
#include "com/badlogic/gdx/scenes/scene2d/Touchable.h"
#include "java/lang/Deprecated.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) object;
	if (self->F_style)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_style)->clazz)->markFunction)((jobject) self->F_style, mark, depth + 1);
	if (self->F_actor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_actor)->clazz)->markFunction)((jobject) self->F_actor, mark, depth + 1);
	if (self->F_actorArea)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_actorArea)->clazz)->markFunction)((jobject) self->F_actorArea, mark, depth + 1);
	if (self->F_hScrollBounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hScrollBounds)->clazz)->markFunction)((jobject) self->F_hScrollBounds, mark, depth + 1);
	if (self->F_hKnobBounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hKnobBounds)->clazz)->markFunction)((jobject) self->F_hKnobBounds, mark, depth + 1);
	if (self->F_vScrollBounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vScrollBounds)->clazz)->markFunction)((jobject) self->F_vScrollBounds, mark, depth + 1);
	if (self->F_vKnobBounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vKnobBounds)->clazz)->markFunction)((jobject) self->F_vKnobBounds, mark, depth + 1);
	if (self->F_actorCullingArea)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_actorCullingArea)->clazz)->markFunction)((jobject) self->F_actorCullingArea, mark, depth + 1);
	if (self->F_flickScrollListener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_flickScrollListener)->clazz)->markFunction)((jobject) self->F_flickScrollListener, mark, depth + 1);
	if (self->F_lastPoint)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastPoint)->clazz)->markFunction)((jobject) self->F_lastPoint, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle);
	init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle(ctx, sp[2].o);
	init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object])(ctx, (frame[2].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle, sp[2].o)));
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle, sp[2].o)));
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(100);
	init_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup(ctx, (frame[0].o));
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Rectangle);
	init_com_badlogic_gdx_math_Rectangle(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_actorArea = (jref) sp[1].o;
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Rectangle);
	init_com_badlogic_gdx_math_Rectangle(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_hScrollBounds = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Rectangle);
	init_com_badlogic_gdx_math_Rectangle(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_hKnobBounds = (jref) sp[1].o;
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Rectangle);
	init_com_badlogic_gdx_math_Rectangle(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_vScrollBounds = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Rectangle);
	init_com_badlogic_gdx_math_Rectangle(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_vKnobBounds = (jref) sp[1].o;
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Rectangle);
	init_com_badlogic_gdx_math_Rectangle(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_actorCullingArea = (jref) sp[1].o;
	LINE_NUMBER(63);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollOnRight = (jint(1));
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollOnBottom = (jint(1));
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_lastPoint = (jref) sp[1].o;
	LINE_NUMBER(69);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeScrollBars = (jint(1));
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_smoothScrolling = (jint(1));
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollBarTouch = (jint(1));
	LINE_NUMBER(70);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeAlphaSeconds = (jfloat(1));
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeDelaySeconds = (jfloat(1));
	LINE_NUMBER(71);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_cancelTouchFocus = (jint(1));
	LINE_NUMBER(73);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flickScroll = (jint(1));
	LINE_NUMBER(74);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flingTime = (jfloat(1));
	LINE_NUMBER(75);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollX = (jint(1));
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollY = (jint(1));
	LINE_NUMBER(76);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance = (jfloat(50.0f));
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMin = (jfloat(30.0f));
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMax = (jfloat(200.0f));
	LINE_NUMBER(79);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_clamp = (jint(1));
	LINE_NUMBER(81);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_variableSizeKnobs = (jint(1));
	LINE_NUMBER(82);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_draggingPointer = (jint(-1));
	LINE_NUMBER(101);
	if ((frame[2].o) != nullptr) goto label_18;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"style cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_18:;
	{
	LINE_NUMBER(102);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style = (jref) (frame[2].o);
	LINE_NUMBER(103);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(104);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setSize_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setSize_float_float])(ctx, (frame[0].o), (jfloat(150.0f)), (jfloat(150.0f)));
	LINE_NUMBER(106);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addCaptureListener) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addCaptureListener])(ctx, (frame[0].o));
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getFlickScrollListener_R_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getFlickScrollListener_R_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener])(ctx, (frame[0].o));
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_flickScrollListener = (jref) sp[1].o;
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flickScrollListener;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(109);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addScrollListener) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addScrollListener])(ctx, (frame[0].o));
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addCaptureListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:addCaptureListener", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1);
	init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$1_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane(ctx, sp[1].o, (frame[0].o));
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getFlickScrollListener_R_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getFlickScrollListener", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(191);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2);
	init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$2_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addScrollListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:addScrollListener", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(223);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$3);
	init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$3_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane(ctx, sp[1].o, (frame[0].o));
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsVisible_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setScrollbarsVisible", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(244);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(245);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeAlpha = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeAlphaSeconds);
	LINE_NUMBER(246);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeDelay = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeDelaySeconds);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(248);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeAlpha = (jfloat(0));
	LINE_NUMBER(249);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeDelay = (jfloat(0));
	}
label_4:;
	LINE_NUMBER(251);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_cancelTouchFocus(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:cancelTouchFocus", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(258);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flickScrollListener;
	((func_com_badlogic_gdx_scenes_scene2d_Stage_cancelTouchFocusExcept_com_badlogic_gdx_scenes_scene2d_EventListener_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_cancelTouchFocusExcept_com_badlogic_gdx_scenes_scene2d_EventListener_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, sp[1].o, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(259);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_cancel(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:cancel", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(263);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_draggingPointer = (jint(-1));
	LINE_NUMBER(264);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_touchScrollH = (jint(0));
	LINE_NUMBER(265);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_touchScrollV = (jint(0));
	LINE_NUMBER(266);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flickScrollListener;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_getGestureDetector_R_com_badlogic_gdx_input_GestureDetector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_getGestureDetector_R_com_badlogic_gdx_input_GestureDetector])(ctx, sp[0].o);
	((func_com_badlogic_gdx_input_GestureDetector_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_input_GestureDetector_cancel])(ctx, sp[0].o);
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_clamp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:clamp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(270);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_clamp) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(271);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollX) == 0) goto label_2;
	}
	{
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), (-((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance)), (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance)));
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(272);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), (jfloat(0)), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX));
	sp[0].f = temp0;
	sp += 1;
	}
label_3:;
	{
	sp -= 2;
	LINE_NUMBER(271);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollX_float])(ctx, sp[0].o, sp[1].f);
	LINE_NUMBER(273);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollY) == 0) goto label_5;
	}
	{
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), (-((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance)), (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance)));
	sp[0].f = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(274);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), (jfloat(0)), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY));
	sp[0].f = temp0;
	sp += 1;
	}
label_6:;
	{
	sp -= 2;
	LINE_NUMBER(273);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollY_float])(ctx, sp[0].o, sp[1].f);
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setStyle_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setStyle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(278);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"style cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(279);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style = (jref) (frame[1].o);
	LINE_NUMBER(280);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(281);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_act_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:act", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(290);
	M_com_badlogic_gdx_scenes_scene2d_Group_act_float(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(292);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flickScrollListener;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_getGestureDetector_R_com_badlogic_gdx_input_GestureDetector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_getGestureDetector_R_com_badlogic_gdx_input_GestureDetector])(ctx, sp[0].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_input_GestureDetector_isPanning_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_input_GestureDetector_isPanning_R_boolean])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(293);
	frame[3].i = (jint(0));
	LINE_NUMBER(295);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeAlpha), (jfloat(0)), -1)) <= 0) goto label_4;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeScrollBars) == 0) goto label_4;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_4;
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_touchScrollH) != 0) goto label_4;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_touchScrollV) != 0) goto label_4;
	}
	{
	LINE_NUMBER(296);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_fadeDelay = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_fadeDelay) - (frame[1].f));
	LINE_NUMBER(297);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeDelay), (jfloat(0)), 1)) > 0) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeAlpha) - (frame[1].f)));
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_fadeAlpha = temp0;
	}
label_7:;
	{
	LINE_NUMBER(298);
	frame[3].i = (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(301);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flingTimer), (jfloat(0)), -1)) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(302);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsVisible_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsVisible_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(304);
	frame[4].f = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flingTimer) / ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flingTime));
	LINE_NUMBER(305);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_amountX = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_amountX) - ((((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityX) * (frame[4].f)) * (frame[1].f)));
	LINE_NUMBER(306);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_amountY = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_amountY) - ((((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityY) * (frame[4].f)) * (frame[1].f)));
	LINE_NUMBER(307);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_clamp) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_clamp])(ctx, (frame[0].o));
	LINE_NUMBER(310);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), (-((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance)), -1)) != 0) goto label_15;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityX = (jfloat(0));
	}
label_15:;
	{
	LINE_NUMBER(311);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance)), -1)) < 0) goto label_16;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityX = (jfloat(0));
	}
label_16:;
	{
	LINE_NUMBER(312);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), (-((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance)), -1)) != 0) goto label_17;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityY = (jfloat(0));
	}
label_17:;
	{
	LINE_NUMBER(313);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance)), -1)) < 0) goto label_18;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityY = (jfloat(0));
	}
label_18:;
	{
	LINE_NUMBER(315);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_flingTimer = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_flingTimer) - (frame[1].f));
	LINE_NUMBER(316);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flingTimer), (jfloat(0)), 1)) > 0) goto label_20;
	}
	{
	LINE_NUMBER(317);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityX = (jfloat(0));
	LINE_NUMBER(318);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityY = (jfloat(0));
	}
label_20:;
	{
	LINE_NUMBER(321);
	frame[3].i = (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(324);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_smoothScrolling) == 0) goto label_23;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flingTimer), (jfloat(0)), 1)) > 0) goto label_23;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_23;
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_touchScrollH) == 0) goto label_24;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_23;
	}
	{
	jfloat temp0 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	jfloat temp2 = temp0 / (temp1 - ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	if ((floatCompare(temp2, (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width) * (jfloat(0.1f))), -1)) <= 0) goto label_23;
	}
label_24:;
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_touchScrollV) == 0) goto label_25;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_23;
	}
	{
	jfloat temp0 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	jfloat temp2 = temp0 / (temp1 - ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	if ((floatCompare(temp2, (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height) * (jfloat(0.1f))), -1)) <= 0) goto label_23;
	}
label_25:;
	{
	LINE_NUMBER(329);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountX), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), -1)) == 0) goto label_26;
	}
	{
	LINE_NUMBER(330);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountX), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), 1)) >= 0) goto label_28;
	}
	{
	LINE_NUMBER(331);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountX;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_smoothScroll_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_smoothScroll_float_float_R_float])(ctx, (frame[0].o), (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountX)), (frame[1].f));
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, (temp1 + temp2));
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_visualScrollX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_visualScrollX_float])(ctx, sp[0].o, temp3);
	goto label_30;
	}
label_28:;
	{
	LINE_NUMBER(333);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountX;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_smoothScroll_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_smoothScroll_float_float_R_float])(ctx, (frame[0].o), (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountX) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX)), (frame[1].f));
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (temp1 - temp2));
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_visualScrollX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_visualScrollX_float])(ctx, sp[0].o, temp3);
	}
label_30:;
	{
	LINE_NUMBER(334);
	frame[3].i = (jint(1));
	}
label_26:;
	{
	LINE_NUMBER(336);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountY), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), -1)) == 0) goto label_31;
	}
	{
	LINE_NUMBER(337);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountY), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), 1)) >= 0) goto label_33;
	}
	{
	LINE_NUMBER(338);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountY;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_smoothScroll_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_smoothScroll_float_float_R_float])(ctx, (frame[0].o), (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountY)), (frame[1].f));
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, (temp1 + temp2));
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_visualScrollY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_visualScrollY_float])(ctx, sp[0].o, temp3);
	goto label_35;
	}
label_33:;
	{
	LINE_NUMBER(340);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountY;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_smoothScroll_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_smoothScroll_float_float_R_float])(ctx, (frame[0].o), (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountY) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY)), (frame[1].f));
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (temp1 - temp2));
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_visualScrollY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_visualScrollY_float])(ctx, sp[0].o, temp3);
	}
label_35:;
	{
	LINE_NUMBER(341);
	frame[3].i = (jint(1));
	goto label_31;
	}
label_23:;
	{
	LINE_NUMBER(344);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountX), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), -1)) == 0) goto label_36;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_visualScrollX_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_visualScrollX_float])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX));
	}
label_36:;
	{
	LINE_NUMBER(345);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountY), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), -1)) == 0) goto label_31;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_visualScrollY_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_visualScrollY_float])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY));
	}
label_31:;
	{
	LINE_NUMBER(348);
	if ((frame[2].i) != 0) goto label_37;
	}
	{
	LINE_NUMBER(349);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollX) == 0) goto label_39;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_39;
	}
	{
	LINE_NUMBER(350);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), (jfloat(0)), 1)) >= 0) goto label_41;
	}
	{
	LINE_NUMBER(351);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsVisible_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsVisible_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(352);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX) + ((((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMin) + (((((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMax) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMin)) * (-((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX))) / ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance))) * (frame[1].f)));
	LINE_NUMBER(354);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), (jfloat(0)), -1)) <= 0) goto label_45;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollX_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollX_float])(ctx, (frame[0].o), (jfloat(0)));
	}
label_45:;
	{
	LINE_NUMBER(355);
	frame[3].i = (jint(1));
	goto label_39;
	}
label_41:;
	{
	LINE_NUMBER(356);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX), -1)) <= 0) goto label_39;
	}
	{
	LINE_NUMBER(357);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsVisible_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsVisible_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(358);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_amountX = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_amountX) - ((((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMin) + (((((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMax) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMin)) * (-(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX)))) / ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance))) * (frame[1].f)));
	LINE_NUMBER(360);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX), 1)) >= 0) goto label_49;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollX_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollX_float])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX));
	}
label_49:;
	{
	LINE_NUMBER(361);
	frame[3].i = (jint(1));
	}
label_39:;
	{
	LINE_NUMBER(364);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollY) == 0) goto label_37;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_37;
	}
	{
	LINE_NUMBER(365);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), (jfloat(0)), 1)) >= 0) goto label_51;
	}
	{
	LINE_NUMBER(366);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsVisible_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsVisible_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(367);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY) + ((((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMin) + (((((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMax) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMin)) * (-((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY))) / ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance))) * (frame[1].f)));
	LINE_NUMBER(369);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), (jfloat(0)), -1)) <= 0) goto label_55;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollY_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollY_float])(ctx, (frame[0].o), (jfloat(0)));
	}
label_55:;
	{
	LINE_NUMBER(370);
	frame[3].i = (jint(1));
	goto label_37;
	}
label_51:;
	{
	LINE_NUMBER(371);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY), -1)) <= 0) goto label_37;
	}
	{
	LINE_NUMBER(372);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsVisible_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsVisible_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(373);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_amountY = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_amountY) - ((((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMin) + (((((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMax) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMin)) * (-(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY)))) / ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance))) * (frame[1].f)));
	LINE_NUMBER(375);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY), 1)) >= 0) goto label_59;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollY_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollY_float])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY));
	}
label_59:;
	{
	LINE_NUMBER(376);
	frame[3].i = (jint(1));
	}
label_37:;
	{
	LINE_NUMBER(381);
	if ((frame[3].i) == 0) goto label_60;
	}
	{
	LINE_NUMBER(382);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(383);
	if ((frame[4].o) == nullptr) goto label_60;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Stage_getActionsRequestRendering_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getActionsRequestRendering_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_60;
	}
	clinit_com_badlogic_gdx_Gdx(ctx);
	(sp++)->o = SF_com_badlogic_gdx_Gdx_graphics;
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_Graphics_requestRendering) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_requestRendering, sp[0].o))(ctx, sp[0].o);
label_60:;
	LINE_NUMBER(385);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_layout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:layout", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_background;
	frame[1].o = sp[0].o;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScrollKnob;
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScrollKnob;
	frame[3].o = sp[0].o;
	LINE_NUMBER(389);
	frame[4].f = (jfloat(0));
	frame[5].f = (jfloat(0));
	frame[6].f = (jfloat(0));
	frame[7].f = (jfloat(0));
	LINE_NUMBER(390);
	if ((frame[1].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(391);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	frame[4].f = temp0;
	LINE_NUMBER(392);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	frame[5].f = temp1;
	LINE_NUMBER(393);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float, (frame[1].o)))(ctx, (frame[1].o));
	frame[6].f = temp2;
	LINE_NUMBER(394);
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, (frame[1].o)))(ctx, (frame[1].o));
	frame[7].f = temp3;
	}
label_8:;
	{
	LINE_NUMBER(396);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getWidth_R_float])(ctx, (frame[0].o));
	frame[8].f = temp0;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getHeight_R_float])(ctx, (frame[0].o));
	frame[9].f = temp1;
	LINE_NUMBER(397);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, sp[0].o, (frame[4].f), (frame[7].f), (((frame[8].f) - (frame[4].f)) - (frame[5].f)), (((frame[9].f) - (frame[6].f)) - (frame[7].f)));
	LINE_NUMBER(399);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o != nullptr) goto label_16;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_16:;
	{
	LINE_NUMBER(401);
	frame[10].f = (jfloat(0));
	frame[11].f = (jfloat(0));
	LINE_NUMBER(402);
	if ((frame[2].o) == nullptr) goto label_19;
	}
	{
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, (frame[2].o)))(ctx, (frame[2].o));
	frame[10].f = temp0;
	}
label_19:;
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScroll;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	jfloat temp0 = frame[10].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScroll;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[10].f = temp2;
	}
label_20:;
	{
	LINE_NUMBER(404);
	if ((frame[3].o) == nullptr) goto label_21;
	}
	{
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[3].o)))(ctx, (frame[3].o));
	frame[11].f = temp0;
	}
label_21:;
	{
	LINE_NUMBER(405);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScroll;
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	jfloat temp0 = frame[11].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScroll;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[11].f = temp2;
	}
label_22:;
	{
	LINE_NUMBER(409);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_23;
	}
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	frame[14].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o));
	LINE_NUMBER(411);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefWidth_R_float, (frame[14].o)))(ctx, (frame[14].o));
	frame[12].f = temp0;
	LINE_NUMBER(412);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefHeight_R_float, (frame[14].o)))(ctx, (frame[14].o));
	frame[13].f = temp1;
	LINE_NUMBER(413);
	goto label_28;
	}
label_23:;
	{
	LINE_NUMBER(414);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float])(ctx, sp[0].o);
	frame[12].f = temp0;
	LINE_NUMBER(415);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float])(ctx, sp[0].o);
	frame[13].f = temp1;
	}
label_28:;
	{
	LINE_NUMBER(419);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_forceScrollX) != 0) goto label_30;
	}
	{
	jfloat temp0 = frame[12].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width), -1)) <= 0) goto label_31;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_disableX) != 0) goto label_31;
	}
label_30:;
	INST_ICONST(1);
	goto label_32;
label_31:;
	INST_ICONST(0);
label_32:;
	{
	sp -= 2;
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_scrollX = sp[1].i;
	LINE_NUMBER(420);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_forceScrollY) != 0) goto label_34;
	}
	{
	jfloat temp0 = frame[13].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height), -1)) <= 0) goto label_35;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_disableY) != 0) goto label_35;
	}
label_34:;
	INST_ICONST(1);
	goto label_36;
label_35:;
	INST_ICONST(0);
label_36:;
	{
	sp -= 2;
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_scrollY = sp[1].i;
	LINE_NUMBER(423);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollbarsOnTop) != 0) goto label_38;
	}
	{
	LINE_NUMBER(424);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_40;
	}
	{
	LINE_NUMBER(425);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width = (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width) - (frame[11].f));
	LINE_NUMBER(426);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollOnRight) != 0) goto label_43;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_x) + (frame[11].f));
	}
label_43:;
	{
	LINE_NUMBER(428);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) != 0) goto label_40;
	}
	{
	jfloat temp0 = frame[12].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width), -1)) <= 0) goto label_40;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_disableX) != 0) goto label_40;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX = (jint(1));
	}
label_40:;
	{
	LINE_NUMBER(430);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_38;
	}
	{
	LINE_NUMBER(431);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height = (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height) - (frame[10].f));
	LINE_NUMBER(432);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollOnBottom) == 0) goto label_46;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_y) + (frame[10].f));
	}
label_46:;
	{
	LINE_NUMBER(434);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) != 0) goto label_38;
	}
	{
	jfloat temp0 = frame[13].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height), -1)) <= 0) goto label_38;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_disableY) != 0) goto label_38;
	}
	{
	LINE_NUMBER(435);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY = (jint(1));
	LINE_NUMBER(436);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width = (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width) - (frame[11].f));
	LINE_NUMBER(437);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollOnRight) != 0) goto label_38;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_x) + (frame[11].f));
	}
label_38:;
	{
	LINE_NUMBER(443);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_disableX) == 0) goto label_50;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width;
	sp[0].f = temp0;
	sp += 1;
	goto label_51;
	}
label_50:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width), (frame[12].f));
	sp[0].f = temp0;
	sp += 1;
	}
label_51:;
	{
	sp -= 1;
	frame[12].f = sp[0].f;
	LINE_NUMBER(444);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_disableY) == 0) goto label_53;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height;
	sp[0].f = temp0;
	sp += 1;
	goto label_54;
	}
label_53:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height), (frame[13].f));
	sp[0].f = temp0;
	sp += 1;
	}
label_54:;
	{
	sp -= 1;
	frame[13].f = sp[0].f;
	LINE_NUMBER(446);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[12].f;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_maxX = (temp0 - ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_width));
	LINE_NUMBER(447);
	sp[0].o = frame[0].o;
	jfloat temp1 = frame[13].f;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_maxY = (temp1 - ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_height));
	LINE_NUMBER(448);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), (jfloat(0)), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX));
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollX_float])(ctx, sp[0].o, temp2);
	LINE_NUMBER(449);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), (jfloat(0)), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY));
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollY_float])(ctx, sp[0].o, temp3);
	LINE_NUMBER(452);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_60;
	}
	{
	LINE_NUMBER(453);
	if ((frame[2].o) == nullptr) goto label_62;
	}
	{
	LINE_NUMBER(454);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollbarsOnTop) == 0) goto label_64;
	}
	INST_FLOAD(4);
	goto label_65;
label_64:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].f = temp0;
	sp += 1;
	}
label_65:;
	{
	sp -= 1;
	frame[14].f = sp[0].f;
	LINE_NUMBER(455);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollOnBottom) == 0) goto label_67;
	}
	INST_FLOAD(7);
	goto label_68;
label_67:;
	{
	jfloat temp0 = ((frame[9].f) - (frame[6].f)) - (frame[10].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_68:;
	{
	sp -= 1;
	frame[15].f = sp[0].f;
	LINE_NUMBER(456);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jfloat temp0 = frame[14].f;
	jfloat temp1 = frame[15].f;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, sp[0].o, temp0, temp1, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_width), (frame[10].f));
	LINE_NUMBER(457);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_71;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollbarsOnTop) == 0) goto label_71;
	}
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width = (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width) - (frame[11].f));
	LINE_NUMBER(459);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollOnRight) != 0) goto label_71;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_x) + (frame[11].f));
	}
label_71:;
	{
	LINE_NUMBER(462);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_variableSizeKnobs) == 0) goto label_74;
	}
	{
	LINE_NUMBER(463);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[2].o)))(ctx, (frame[2].o));
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_width;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (jfloat((jint(((temp1 * ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_width)) / (frame[12].f)))))));
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width = temp2;
	goto label_76;
	}
label_74:;
	{
	LINE_NUMBER(465);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[2].o)))(ctx, (frame[2].o));
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width = temp0;
	}
label_76:;
	{
	LINE_NUMBER(466);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width), (frame[12].f), -1)) <= 0) goto label_77;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width = (jfloat(0));
	}
label_77:;
	{
	LINE_NUMBER(467);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, (frame[2].o)))(ctx, (frame[2].o));
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height = temp0;
	LINE_NUMBER(468);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_width;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	jfloat temp3 = temp2 - ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_width);
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollPercentX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollPercentX_R_float])(ctx, (frame[0].o));
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_x = (temp1 + (jfloat((jint((temp3 * temp4))))));
	LINE_NUMBER(469);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_y = ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(470);
	goto label_60;
	}
label_62:;
	{
	LINE_NUMBER(471);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(472);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	}
label_60:;
	{
	LINE_NUMBER(475);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_82;
	}
	{
	LINE_NUMBER(476);
	if ((frame[3].o) == nullptr) goto label_84;
	}
	{
	LINE_NUMBER(477);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollOnRight) == 0) goto label_86;
	}
	{
	jfloat temp0 = ((frame[8].f) - (frame[5].f)) - (frame[11].f);
	sp[0].f = temp0;
	sp += 1;
	goto label_87;
	}
label_86:;
	INST_FLOAD(4);
label_87:;
	{
	sp -= 1;
	frame[14].f = sp[0].f;
	LINE_NUMBER(478);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollbarsOnTop) == 0) goto label_89;
	}
	INST_FLOAD(7);
	goto label_90;
label_89:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].f = temp0;
	sp += 1;
	}
label_90:;
	{
	sp -= 1;
	frame[15].f = sp[0].f;
	LINE_NUMBER(479);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	jfloat temp0 = frame[14].f;
	jfloat temp1 = frame[15].f;
	jfloat temp2 = frame[11].f;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, sp[0].o, temp0, temp1, temp2, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_height));
	LINE_NUMBER(480);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_93;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollbarsOnTop) == 0) goto label_93;
	}
	{
	LINE_NUMBER(481);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height = (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height) - (frame[10].f));
	LINE_NUMBER(482);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollOnBottom) == 0) goto label_93;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_y) + (frame[10].f));
	}
label_93:;
	{
	LINE_NUMBER(485);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[3].o)))(ctx, (frame[3].o));
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width = temp0;
	LINE_NUMBER(486);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_variableSizeKnobs) == 0) goto label_97;
	}
	{
	LINE_NUMBER(487);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, (frame[3].o)))(ctx, (frame[3].o));
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_height;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (jfloat((jint(((temp1 * ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_height)) / (frame[13].f)))))));
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height = temp2;
	goto label_99;
	}
label_97:;
	{
	LINE_NUMBER(490);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, (frame[3].o)))(ctx, (frame[3].o));
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height = temp0;
	}
label_99:;
	{
	LINE_NUMBER(491);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height), (frame[13].f), -1)) <= 0) goto label_100;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height = (jfloat(0));
	}
label_100:;
	{
	LINE_NUMBER(492);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	sp += 1;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollOnRight) == 0) goto label_101;
	}
	{
	jfloat temp0 = (frame[8].f) - (frame[5].f);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[3].o)))(ctx, (frame[3].o));
	jfloat temp2 = temp0 - temp1;
	sp[0].f = temp2;
	sp += 1;
	goto label_102;
	}
label_101:;
	INST_FLOAD(4);
label_102:;
	{
	sp -= 2;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_x = sp[1].f;
	LINE_NUMBER(493);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_height;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	jfloat temp2 = temp1 - ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_height);
	jfloat temp3 = jfloat(1);
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollPercentY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollPercentY_R_float])(ctx, (frame[0].o));
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_y = (temp0 + (jfloat((jint((temp2 * (temp3 - temp4)))))));
	LINE_NUMBER(494);
	goto label_82;
	}
label_84:;
	{
	LINE_NUMBER(495);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(496);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	}
label_82:;
	{
	LINE_NUMBER(500);
	M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_updateActorPosition(ctx, (frame[0].o));
	LINE_NUMBER(501);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_107;
	}
	{
	LINE_NUMBER(502);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setSize_float_float])(ctx, sp[0].o, (frame[12].f), (frame[13].f));
	LINE_NUMBER(503);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_validate) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_validate, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o)));
	}
label_107:;
	LINE_NUMBER(505);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_updateActorPosition(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:updateActorPosition", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(509);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].f = temp0;
	sp += 1;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_1;
	}
	{
	jint temp0 = jint(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountX));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	frame[1].f = (sp[0].f - (jfloat(sp[1].i)));
	LINE_NUMBER(510);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].f = temp0;
	sp += 1;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_4;
	}
	{
	jfloat temp0 = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountY);
	sp[0].f = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ALOAD(0);
	sp[-1].f = ((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[-1].o))->F_maxY;
label_5:;
	{
	sp -= 2;
	frame[2].f = (sp[0].f - (jfloat((jint(sp[1].f)))));
	LINE_NUMBER(511);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setPosition_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setPosition_float_float])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(513);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_scenes_scene2d_utils_Cullable)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(514);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorCullingArea;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_x) - (frame[1].f));
	LINE_NUMBER(515);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorCullingArea;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_y) - (frame[2].f));
	LINE_NUMBER(516);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorCullingArea;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width = ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_width);
	LINE_NUMBER(517);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorCullingArea;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height = ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_height);
	LINE_NUMBER(518);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Cullable, sp[0].o);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorCullingArea;
	((func_com_badlogic_gdx_scenes_scene2d_utils_Cullable_setCullingArea_com_badlogic_gdx_math_Rectangle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Cullable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Cullable_setCullingArea_com_badlogic_gdx_math_Rectangle, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_8:;
	LINE_NUMBER(520);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_draw_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:draw", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(523);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(525);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_validate])(ctx, (frame[0].o));
	LINE_NUMBER(528);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_computeTransform_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_computeTransform_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_applyTransform_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_applyTransform_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(530);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_width;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	jfloat temp2 = temp1 - ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_width);
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVisualScrollPercentX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVisualScrollPercentX_R_float])(ctx, (frame[0].o));
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_x = (temp0 + (jfloat((jint((temp2 * temp3))))));
	}
label_4:;
	{
	LINE_NUMBER(531);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_5;
	}
	{
	LINE_NUMBER(532);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_height;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	jfloat temp2 = temp1 - ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_height);
	jfloat temp3 = jfloat(1);
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVisualScrollPercentY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVisualScrollPercentY_R_float])(ctx, (frame[0].o));
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_y = (temp0 + (jfloat((jint((temp2 * (temp3 - temp4)))))));
	}
label_5:;
	{
	LINE_NUMBER(534);
	M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_updateActorPosition(ctx, (frame[0].o));
	LINE_NUMBER(537);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(538);
	frame[4].f = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_a) * (frame[2].f));
	LINE_NUMBER(539);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_background;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(540);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float, (frame[1].o)))(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_b), (frame[4].f));
	LINE_NUMBER(541);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_background;
	sp[1].o = frame[1].o;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getWidth_R_float])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, sp[0].o))(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3);
	}
label_10:;
	{
	LINE_NUMBER(544);
	((func_com_badlogic_gdx_graphics_g2d_Batch_flush) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_flush, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(545);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_width;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	jint temp3 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_clipBegin_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_clipBegin_float_float_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1, temp2, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_height));
	if (temp3 == 0) goto label_14;
	}
	{
	LINE_NUMBER(546);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_drawChildren_com_badlogic_gdx_graphics_g2d_Batch_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_drawChildren_com_badlogic_gdx_graphics_g2d_Batch_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	LINE_NUMBER(547);
	((func_com_badlogic_gdx_graphics_g2d_Batch_flush) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_flush, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(548);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_clipEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_clipEnd])(ctx, (frame[0].o));
	}
label_14:;
	{
	LINE_NUMBER(552);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float, (frame[1].o)))(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_b), (frame[4].f));
	LINE_NUMBER(553);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeScrollBars) == 0) goto label_19;
	}
	{
	jfloat temp0 = frame[4].f;
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Interpolation_fade;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_math_Interpolation_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Interpolation_apply_float_R_float])(ctx, sp[0].o, (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeAlpha) / ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeAlphaSeconds)));
	frame[4].f = (temp0 * temp1);
	}
label_19:;
	{
	LINE_NUMBER(554);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_drawScrollBars_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_drawScrollBars_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float])(ctx, (frame[0].o), (frame[1].o), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_b), (frame[4].f));
	LINE_NUMBER(556);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_resetTransform_com_badlogic_gdx_graphics_g2d_Batch) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_resetTransform_com_badlogic_gdx_graphics_g2d_Batch])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(557);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_drawScrollBars_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:drawScrollBars", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(562);
	if ((floatCompare((frame[5].f), (jfloat(0)), 1)) > 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(563);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float, (frame[1].o)))(ctx, (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	LINE_NUMBER(565);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width), (jfloat(0)), -1)) <= 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(566);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height), (jfloat(0)), -1)) <= 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(567);
	if ((frame[6].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(568);
	if ((frame[7].i) == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_corner;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_corner;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jfloat temp1 = temp0 + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[2].o))->F_width);
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[2].o))->F_y;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	jfloat temp3 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[2].o))->F_width;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, sp[0].o))(ctx, sp[0].o, sp[1].o, temp1, temp2, temp3, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[2].o))->F_y));
	}
label_11:;
	{
	LINE_NUMBER(571);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScroll;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(572);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScroll;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[2].o))->F_y;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[2].o))->F_width;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, sp[0].o))(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[2].o))->F_height));
	}
label_12:;
	{
	LINE_NUMBER(573);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScrollKnob;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(574);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScrollKnob;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[2].o))->F_y;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[2].o))->F_width;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hKnobBounds;
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, sp[0].o))(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[2].o))->F_height));
	}
label_9:;
	{
	LINE_NUMBER(576);
	if ((frame[7].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(577);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScroll;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(578);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScroll;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[2].o))->F_y;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[2].o))->F_width;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, sp[0].o))(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[2].o))->F_height));
	}
label_17:;
	{
	LINE_NUMBER(579);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScrollKnob;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(580);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScrollKnob;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[2].o))->F_y;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[2].o))->F_width;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vKnobBounds;
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, sp[0].o))(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[2].o))->F_height));
	}
label_15:;
	LINE_NUMBER(582);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_fling_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:fling", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(589);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flingTimer = (frame[1].f);
	LINE_NUMBER(590);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityX = (frame[2].f);
	LINE_NUMBER(591);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityY = (frame[3].f);
	LINE_NUMBER(592);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getPrefWidth", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(595);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(596);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(597);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefWidth_R_float, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o)));
	frame[1].f = temp0;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(598);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(599);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float])(ctx, sp[0].o);
	frame[1].f = temp0;
	}
label_4:;
	{
	LINE_NUMBER(601);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_background;
	frame[2].o = sp[0].o;
	LINE_NUMBER(602);
	if ((frame[2].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(603);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp4 = temp2 + temp3;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp4, temp5);
	frame[1].f = temp6;
	}
label_7:;
	{
	LINE_NUMBER(605);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_9;
	}
	{
	LINE_NUMBER(606);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(607);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScrollKnob;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScrollKnob;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	frame[3].f = temp0;
	}
label_12:;
	{
	LINE_NUMBER(608);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScroll;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	jfloat temp0 = frame[3].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScroll;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[3].f = temp2;
	}
label_13:;
	{
	LINE_NUMBER(609);
	frame[1].f = ((frame[1].f) + (frame[3].f));
	}
label_9:;
	{
	LINE_NUMBER(611);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getPrefHeight", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(615);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(616);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(617);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefHeight_R_float, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o)));
	frame[1].f = temp0;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(618);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(619);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float])(ctx, sp[0].o);
	frame[1].f = temp0;
	}
label_4:;
	{
	LINE_NUMBER(621);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_background;
	frame[2].o = sp[0].o;
	LINE_NUMBER(622);
	if ((frame[2].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(623);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp4 = temp2 + temp3;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp4, temp5);
	frame[1].f = temp6;
	}
label_7:;
	{
	LINE_NUMBER(625);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_9;
	}
	{
	LINE_NUMBER(626);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(627);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScrollKnob;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScrollKnob;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	frame[3].f = temp0;
	}
label_12:;
	{
	LINE_NUMBER(628);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScroll;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	jfloat temp0 = frame[3].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScroll;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[3].f = temp2;
	}
label_13:;
	{
	LINE_NUMBER(629);
	frame[1].f = ((frame[1].f) + (frame[3].f));
	}
label_9:;
	{
	LINE_NUMBER(631);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMinWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getMinWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(635);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMinHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getMinHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(639);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setActor_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setActor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(645);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o != (frame[0].o)) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"actor cannot be the ScrollPane."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(646);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	jint temp0 = (jint)M_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(647);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor = (jref) (frame[1].o);
	LINE_NUMBER(648);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	M_com_badlogic_gdx_scenes_scene2d_Group_addActor_com_badlogic_gdx_scenes_scene2d_Actor(ctx, (frame[0].o), (frame[1].o));
	}
label_4:;
	LINE_NUMBER(649);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getActor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(653);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setWidget_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setWidget", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(659);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(660);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getWidget_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getWidget", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(665);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addActor_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:addActor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(672);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Use ScrollPane#setActor."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addActorAt_int_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:addActorAt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(679);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Use ScrollPane#setActor."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addActorBefore_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:addActorBefore", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(686);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Use ScrollPane#setActor."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addActorAfter_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:addActorAfter", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(693);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Use ScrollPane#setActor."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:removeActor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(697);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"actor cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(698);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(699);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(700);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:removeActor", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(704);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"actor cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(705);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(706);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor = (jref) (jobject(nullptr));
	LINE_NUMBER(707);
	jint temp0 = (jint)M_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:removeActorAt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(711);
	sp[0].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_Group_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(712);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actor = (jref) (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(713);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:hit", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(717);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) < 0) goto label_1;
	}
	{
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getWidth_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp0, temp1, -1)) >= 0) goto label_1;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) < 0) goto label_1;
	}
	{
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getHeight_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp0, temp1, -1)) < 0) goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(718);
	if ((frame[3].i) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getTouchable_R_com_badlogic_gdx_scenes_scene2d_Touchable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getTouchable_R_com_badlogic_gdx_scenes_scene2d_Touchable])(ctx, (frame[0].o));
	clinit_com_badlogic_gdx_scenes_scene2d_Touchable(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Touchable_enabled;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isVisible_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isVisible_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(719);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_5;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_touchScrollH) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollBounds;
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Rectangle_contains_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_contains_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	if (temp0 == 0) goto label_5;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_5:;
	{
	LINE_NUMBER(720);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_3;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_touchScrollV) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollBounds;
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Rectangle_contains_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_contains_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	if (temp0 == 0) goto label_3;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(722);
	sp[0].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:scrollX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(727);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX = (frame[1].f);
	LINE_NUMBER(728);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:scrollY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(732);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY = (frame[1].f);
	LINE_NUMBER(733);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_visualScrollX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:visualScrollX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(737);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountX = (frame[1].f);
	LINE_NUMBER(738);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_visualScrollY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:visualScrollY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(742);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountY = (frame[1].f);
	LINE_NUMBER(743);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMouseWheelX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getMouseWheelX", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(747);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width) * (jfloat(0.9f))), (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX) * (jfloat(0.1f))));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, (temp1 / (jfloat(4.0f))));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMouseWheelY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getMouseWheelY", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(752);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height) * (jfloat(0.9f))), (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY) * (jfloat(0.1f))));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, (temp1 / (jfloat(4.0f))));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setScrollX", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(756);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, (frame[1].f), (jfloat(0)), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX));
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollX_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(757);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getScrollX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(761);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setScrollY", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(765);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, (frame[1].f), (jfloat(0)), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY));
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollY_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(766);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getScrollY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(770);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_updateVisualScroll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:updateVisualScroll", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(776);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountX = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX);
	LINE_NUMBER(777);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountY = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY);
	LINE_NUMBER(778);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVisualScrollX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getVisualScrollX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(781);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) != 0) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	INST_ALOAD(0);
	sp[-1].f = ((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[-1].o))->F_visualAmountX;
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVisualScrollY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getVisualScrollY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(785);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) != 0) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	INST_ALOAD(0);
	sp[-1].f = ((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[-1].o))->F_visualAmountY;
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVisualScrollPercentX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getVisualScrollPercentX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(789);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX), (jfloat(0)), -1)) != 0) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(790);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountX) / ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX)), (jfloat(0)), (jfloat(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVisualScrollPercentY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getVisualScrollPercentY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(794);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY), (jfloat(0)), -1)) != 0) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(795);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_visualAmountY) / ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY)), (jfloat(0)), (jfloat(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollPercentX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getScrollPercentX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(799);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX), (jfloat(0)), -1)) != 0) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(800);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX) / ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX)), (jfloat(0)), (jfloat(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollPercentX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setScrollPercentX", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(804);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX;
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, (frame[1].f), (jfloat(0)), (jfloat(1)));
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollX_float])(ctx, sp[0].o, (temp0 * temp1));
	LINE_NUMBER(805);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollPercentY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getScrollPercentY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(808);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY), (jfloat(0)), -1)) != 0) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(809);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY) / ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY)), (jfloat(0)), (jfloat(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollPercentY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setScrollPercentY", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(813);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY;
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, (frame[1].f), (jfloat(0)), (jfloat(1)));
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollY_float])(ctx, sp[0].o, (temp0 * temp1));
	LINE_NUMBER(814);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setFlickScroll_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setFlickScroll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(817);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flickScroll) != (frame[1].i)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(818);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flickScroll = (frame[1].i);
	LINE_NUMBER(819);
	if ((frame[1].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(820);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flickScrollListener;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(822);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flickScrollListener;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_removeListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_removeListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	{
	LINE_NUMBER(823);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(824);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setFlickScrollTapSquareSize_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setFlickScrollTapSquareSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(827);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flickScrollListener;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_getGestureDetector_R_com_badlogic_gdx_input_GestureDetector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_getGestureDetector_R_com_badlogic_gdx_input_GestureDetector])(ctx, sp[0].o);
	((func_com_badlogic_gdx_input_GestureDetector_setTapSquareSize_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_input_GestureDetector_setTapSquareSize_float])(ctx, sp[0].o, (frame[1].f));
	LINE_NUMBER(828);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollTo_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:scrollTo", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(833);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollTo_float_float_float_float_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollTo_float_float_float_float_boolean_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (jint(0)), (jint(0)));
	LINE_NUMBER(834);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollTo_float_float_float_float_boolean_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jbool param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:scrollTo", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(839);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_validate])(ctx, (frame[0].o));
	LINE_NUMBER(841);
	frame[7].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX);
	LINE_NUMBER(842);
	if ((frame[5].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(843);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[3].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	frame[7].f = (temp0 + ((temp1 - ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width)) / (jfloat(2))));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(845);
	jfloat temp0 = frame[7].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = (frame[1].f) + (frame[3].f);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	jfloat temp3 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, temp0, temp1, (temp2 - ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width)));
	frame[7].f = temp3;
	}
label_5:;
	{
	LINE_NUMBER(846);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, (frame[7].f), (jfloat(0)), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX));
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollX_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(848);
	frame[8].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY);
	LINE_NUMBER(849);
	frame[2].f = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY) - (frame[2].f));
	LINE_NUMBER(850);
	if ((frame[6].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(851);
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	frame[8].f = (temp0 + ((((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height) + (frame[4].f)) / (jfloat(2))));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(853);
	jfloat temp0 = frame[8].f;
	jfloat temp1 = (frame[2].f) + (frame[4].f);
	jfloat temp2 = frame[2].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	jfloat temp3 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, temp0, temp1, (temp2 + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height)));
	frame[8].f = temp3;
	}
label_11:;
	{
	LINE_NUMBER(854);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, (frame[8].f), (jfloat(0)), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY));
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollY_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(855);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMaxX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getMaxX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(859);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMaxY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getMaxY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(864);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollBarHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getScrollBarHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(868);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) != 0) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(869);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(870);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScrollKnob;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScrollKnob;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	frame[1].f = temp0;
	}
label_3:;
	{
	LINE_NUMBER(871);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScroll;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScroll;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[1].f = temp2;
	}
label_4:;
	{
	LINE_NUMBER(872);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollBarWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getScrollBarWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(876);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) != 0) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(877);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(878);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScrollKnob;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScrollKnob;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	frame[1].f = temp0;
	}
label_3:;
	{
	LINE_NUMBER(879);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScroll;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScroll;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[1].f = temp2;
	}
label_4:;
	{
	LINE_NUMBER(880);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getScrollWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(885);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getScrollHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(890);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isScrollX_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:isScrollX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(895);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isScrollY_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:isScrollY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(900);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollingDisabled_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setScrollingDisabled", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(905);
	if ((frame[1].i) != ((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_disableX)) goto label_1;
	}
	{
	if ((frame[2].i) != ((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_disableY)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(906);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_disableX = (frame[1].i);
	LINE_NUMBER(907);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_disableY = (frame[2].i);
	LINE_NUMBER(908);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(909);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isScrollingDisabledX_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:isScrollingDisabledX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(912);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_disableX);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isScrollingDisabledY_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:isScrollingDisabledY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(916);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_disableY);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isLeftEdge_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:isLeftEdge", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(920);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), (jfloat(0)), 1)) > 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isRightEdge_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:isRightEdge", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(924);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollX) == 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountX), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxX), -1)) < 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isTopEdge_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:isTopEdge", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(928);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), (jfloat(0)), 1)) > 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isBottomEdge_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:isBottomEdge", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(932);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollY) == 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_amountY), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_maxY), -1)) < 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isDragging_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:isDragging", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(936);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_draggingPointer) == (jint(-1))) goto label_1;
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

jbool M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isPanning_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:isPanning", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(940);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flickScrollListener;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_getGestureDetector_R_com_badlogic_gdx_input_GestureDetector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_getGestureDetector_R_com_badlogic_gdx_input_GestureDetector])(ctx, sp[0].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_input_GestureDetector_isPanning_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_input_GestureDetector_isPanning_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isFlinging_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:isFlinging", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(944);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flingTimer), (jfloat(0)), -1)) <= 0) goto label_1;
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

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setVelocityX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setVelocityX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(948);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityX = (frame[1].f);
	LINE_NUMBER(949);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVelocityX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getVelocityX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(953);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityX);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setVelocityY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setVelocityY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(957);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityY = (frame[1].f);
	LINE_NUMBER(958);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVelocityY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getVelocityY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(962);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_velocityY);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setOverscroll_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setOverscroll", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(968);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollX = (frame[1].i);
	LINE_NUMBER(969);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollY = (frame[2].i);
	LINE_NUMBER(970);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setupOverscroll_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setupOverscroll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(975);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance = (frame[1].f);
	LINE_NUMBER(976);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMin = (frame[2].f);
	LINE_NUMBER(977);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollSpeedMax = (frame[3].f);
	LINE_NUMBER(978);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getOverscrollDistance_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getOverscrollDistance", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(981);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_overscrollDistance);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setForceScroll_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setForceScroll", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(987);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_forceScrollX = (frame[1].i);
	LINE_NUMBER(988);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_forceScrollY = (frame[2].i);
	LINE_NUMBER(989);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isForceScrollX_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:isForceScrollX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(992);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_forceScrollX);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isForceScrollY_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:isForceScrollY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(996);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_forceScrollY);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setFlingTime_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setFlingTime", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1001);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_flingTime = (frame[1].f);
	LINE_NUMBER(1002);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setClamp_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setClamp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1006);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_clamp = (frame[1].i);
	LINE_NUMBER(1007);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollBarPositions_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setScrollBarPositions", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1011);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_hScrollOnBottom = (frame[1].i);
	LINE_NUMBER(1012);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_vScrollOnRight = (frame[2].i);
	LINE_NUMBER(1013);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setFadeScrollBars_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setFadeScrollBars", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1017);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeScrollBars) != (frame[1].i)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1018);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeScrollBars = (frame[1].i);
	LINE_NUMBER(1019);
	if ((frame[1].i) != 0) goto label_3;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeAlpha = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeAlphaSeconds);
	}
label_3:;
	{
	LINE_NUMBER(1020);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(1021);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setupFadeScrollBars_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setupFadeScrollBars", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1024);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeAlphaSeconds = (frame[1].f);
	LINE_NUMBER(1025);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeDelaySeconds = (frame[2].f);
	LINE_NUMBER(1026);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getFadeScrollBars_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getFadeScrollBars", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1029);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_fadeScrollBars);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollBarTouch_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setScrollBarTouch", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1034);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollBarTouch = (frame[1].i);
	LINE_NUMBER(1035);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setSmoothScrolling_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setSmoothScrolling", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1040);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_smoothScrolling = (frame[1].i);
	LINE_NUMBER(1041);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_smoothScroll_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:smoothScroll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1047);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat(200.0f)) * (frame[2].f)), (((frame[1].f) * (jfloat(7.0f))) * (frame[2].f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsOnTop_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setScrollbarsOnTop", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1054);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_scrollbarsOnTop = (frame[1].i);
	LINE_NUMBER(1055);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(1056);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVariableSizeKnobs_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getVariableSizeKnobs", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1059);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_variableSizeKnobs);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setVariableSizeKnobs_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setVariableSizeKnobs", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1065);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_variableSizeKnobs = (frame[1].i);
	LINE_NUMBER(1066);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setCancelTouchFocus_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setCancelTouchFocus", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1071);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_cancelTouchFocus = (frame[1].i);
	LINE_NUMBER(1072);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:drawDebug", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1075);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_drawDebugBounds_com_badlogic_gdx_graphics_glutils_ShapeRenderer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_drawDebugBounds_com_badlogic_gdx_graphics_glutils_ShapeRenderer])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1076);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_computeTransform_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_computeTransform_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_applyTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_applyTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1077);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_width;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK((frame[0].o)))->F_actorArea;
	jint temp3 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_clipBegin_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_clipBegin_float_float_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1, temp2, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[1].o))->F_height));
	if (temp3 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1078);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_drawDebugChildren_com_badlogic_gdx_graphics_glutils_ShapeRenderer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_drawDebugChildren_com_badlogic_gdx_graphics_glutils_ShapeRenderer])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1079);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_flush) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_flush])(ctx, (frame[1].o));
	LINE_NUMBER(1080);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_clipEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_clipEnd])(ctx, (frame[0].o));
	}
label_3:;
	{
	LINE_NUMBER(1082);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_resetTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_resetTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1083);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setStyle_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:setStyle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(52);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setStyle_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setStyle_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getStyle_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane;
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

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[3])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	{ // Method setWidget
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[21]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	{ // Method getWidget
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[22]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	{ // Method addActor
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[23]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	{ // Method addActorAt
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[24]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	{ // Method addActorBefore
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[25]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	{ // Method addActorAfter
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[26]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_draw_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_act_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_notify_com_badlogic_gdx_scenes_scene2d_Event_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_clear,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_setStage_com_badlogic_gdx_scenes_scene2d_Stage,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_sizeChanged,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_drawDebugBounds_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setDebug_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getDebug_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_debug_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_setCullingArea_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_drawChildren_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_drawDebugChildren_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_computeTransform_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_applyTransform_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_resetTransform_com_badlogic_gdx_graphics_g2d_Batch,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_applyTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_resetTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_getCullingArea_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_childrenChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addActorAt_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addActorBefore_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addActorAfter_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_clearChildren,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_clearChildren_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_clear_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_findActor_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_swapActor_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_swapActor_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_getChild_int_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_getChildren_R_com_badlogic_gdx_utils_SnapshotArray,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_hasChildren_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_setTransform_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_isTransform_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_localToDescendantCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_setDebug_boolean_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_debugAll_R_com_badlogic_gdx_scenes_scene2d_Group,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_toString_java_lang_StringBuilder_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_layout,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_invalidate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_invalidateHierarchy,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_validate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_pack,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_setFillParent_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_setLayoutEnabled_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMinWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMinHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getPrefWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getPrefHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_getMaxWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_getMaxHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_setLayoutEnabled_com_badlogic_gdx_scenes_scene2d_Group_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_needsLayout_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getStyle_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setStyle_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addCaptureListener,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getFlickScrollListener_R_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addScrollListener,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsVisible_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_cancelTouchFocus,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_cancel,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_clamp,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setStyle_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_updateActorPosition,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_drawScrollBars_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_fling_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setWidget_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getWidget_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_visualScrollX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_visualScrollY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMouseWheelX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMouseWheelY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_updateVisualScroll,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVisualScrollX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVisualScrollY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVisualScrollPercentX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVisualScrollPercentY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollPercentX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollPercentX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollPercentY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollPercentY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setFlickScroll_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setFlickScrollTapSquareSize_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollTo_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollTo_float_float_float_float_boolean_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMaxX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMaxY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollBarHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollBarWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isScrollX_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isScrollY_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollingDisabled_boolean_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isScrollingDisabledX_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isScrollingDisabledY_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isLeftEdge_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isRightEdge_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isTopEdge_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isBottomEdge_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isDragging_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isPanning_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isFlinging_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setVelocityX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVelocityX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setVelocityY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVelocityY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setOverscroll_boolean_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setupOverscroll_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getOverscrollDistance_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setForceScroll_boolean_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isForceScrollX_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isForceScrollY_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setFlingTime_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setClamp_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollBarPositions_boolean_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setFadeScrollBars_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setupFadeScrollBars_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getFadeScrollBars_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollBarTouch_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setSmoothScrolling_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_smoothScroll_float_float_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsOnTop_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVariableSizeKnobs_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setVariableSizeKnobs_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setCancelTouchFocus_boolean,
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
	{ "setCullingArea", "(Lcom/badlogic/gdx/math/Rectangle;)V" },
	{ "drawChildren", "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V" },
	{ "drawDebugChildren", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V" },
	{ "computeTransform", "()Lcom/badlogic/gdx/math/Matrix4;" },
	{ "applyTransform", "(Lcom/badlogic/gdx/graphics/g2d/Batch;Lcom/badlogic/gdx/math/Matrix4;)V" },
	{ "resetTransform", "(Lcom/badlogic/gdx/graphics/g2d/Batch;)V" },
	{ "applyTransform", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;Lcom/badlogic/gdx/math/Matrix4;)V" },
	{ "resetTransform", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V" },
	{ "getCullingArea", "()Lcom/badlogic/gdx/math/Rectangle;" },
	{ "childrenChanged", "()V" },
	{ "addActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "addActorAt", "(ILcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "addActorBefore", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "addActorAfter", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "removeActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z" },
	{ "removeActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Z)Z" },
	{ "removeActorAt", "(IZ)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "clearChildren", "()V" },
	{ "clearChildren", "(Z)V" },
	{ "clear", "(Z)V" },
	{ "findActor", "(Ljava/lang/String;)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "swapActor", "(II)Z" },
	{ "swapActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z" },
	{ "getChild", "(I)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "getChildren", "()Lcom/badlogic/gdx/utils/SnapshotArray;" },
	{ "hasChildren", "()Z" },
	{ "setTransform", "(Z)V" },
	{ "isTransform", "()Z" },
	{ "localToDescendantCoordinates", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "setDebug", "(ZZ)V" },
	{ "debugAll", "()Lcom/badlogic/gdx/scenes/scene2d/Group;" },
	{ "toString", "(Ljava/lang/StringBuilder;I)V" },
	{ "layout", "()V" },
	{ "invalidate", "()V" },
	{ "invalidateHierarchy", "()V" },
	{ "validate", "()V" },
	{ "pack", "()V" },
	{ "setFillParent", "(Z)V" },
	{ "setLayoutEnabled", "(Z)V" },
	{ "getMinWidth", "()F" },
	{ "getMinHeight", "()F" },
	{ "getPrefWidth", "()F" },
	{ "getPrefHeight", "()F" },
	{ "getMaxWidth", "()F" },
	{ "getMaxHeight", "()F" },
	{ "setLayoutEnabled", "(Lcom/badlogic/gdx/scenes/scene2d/Group;Z)V" },
	{ "needsLayout", "()Z" },
	{ "getStyle", "()Ljava/lang/Object;" },
	{ "setStyle", "(Ljava/lang/Object;)V" },
	{ "addCaptureListener", "()V" },
	{ "getFlickScrollListener", "()Lcom/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener;" },
	{ "addScrollListener", "()V" },
	{ "setScrollbarsVisible", "(Z)V" },
	{ "cancelTouchFocus", "()V" },
	{ "cancel", "()V" },
	{ "clamp", "()V" },
	{ "setStyle", "(Lcom/badlogic/gdx/scenes/scene2d/ui/ScrollPane$ScrollPaneStyle;)V" },
	{ "getStyle", "()Lcom/badlogic/gdx/scenes/scene2d/ui/ScrollPane$ScrollPaneStyle;" },
	{ "updateActorPosition", "()V" },
	{ "drawScrollBars", "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFF)V" },
	{ "fling", "(FFF)V" },
	{ "setActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "getActor", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "setWidget", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "getWidget", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "scrollX", "(F)V" },
	{ "scrollY", "(F)V" },
	{ "visualScrollX", "(F)V" },
	{ "visualScrollY", "(F)V" },
	{ "getMouseWheelX", "()F" },
	{ "getMouseWheelY", "()F" },
	{ "setScrollX", "(F)V" },
	{ "getScrollX", "()F" },
	{ "setScrollY", "(F)V" },
	{ "getScrollY", "()F" },
	{ "updateVisualScroll", "()V" },
	{ "getVisualScrollX", "()F" },
	{ "getVisualScrollY", "()F" },
	{ "getVisualScrollPercentX", "()F" },
	{ "getVisualScrollPercentY", "()F" },
	{ "getScrollPercentX", "()F" },
	{ "setScrollPercentX", "(F)V" },
	{ "getScrollPercentY", "()F" },
	{ "setScrollPercentY", "(F)V" },
	{ "setFlickScroll", "(Z)V" },
	{ "setFlickScrollTapSquareSize", "(F)V" },
	{ "scrollTo", "(FFFF)V" },
	{ "scrollTo", "(FFFFZZ)V" },
	{ "getMaxX", "()F" },
	{ "getMaxY", "()F" },
	{ "getScrollBarHeight", "()F" },
	{ "getScrollBarWidth", "()F" },
	{ "getScrollWidth", "()F" },
	{ "getScrollHeight", "()F" },
	{ "isScrollX", "()Z" },
	{ "isScrollY", "()Z" },
	{ "setScrollingDisabled", "(ZZ)V" },
	{ "isScrollingDisabledX", "()Z" },
	{ "isScrollingDisabledY", "()Z" },
	{ "isLeftEdge", "()Z" },
	{ "isRightEdge", "()Z" },
	{ "isTopEdge", "()Z" },
	{ "isBottomEdge", "()Z" },
	{ "isDragging", "()Z" },
	{ "isPanning", "()Z" },
	{ "isFlinging", "()Z" },
	{ "setVelocityX", "(F)V" },
	{ "getVelocityX", "()F" },
	{ "setVelocityY", "(F)V" },
	{ "getVelocityY", "()F" },
	{ "setOverscroll", "(ZZ)V" },
	{ "setupOverscroll", "(FFF)V" },
	{ "getOverscrollDistance", "()F" },
	{ "setForceScroll", "(ZZ)V" },
	{ "isForceScrollX", "()Z" },
	{ "isForceScrollY", "()Z" },
	{ "setFlingTime", "(F)V" },
	{ "setClamp", "(Z)V" },
	{ "setScrollBarPositions", "(ZZ)V" },
	{ "setFadeScrollBars", "(Z)V" },
	{ "setupFadeScrollBars", "(FF)V" },
	{ "getFadeScrollBars", "()Z" },
	{ "setScrollBarTouch", "(Z)V" },
	{ "setSmoothScrolling", "(Z)V" },
	{ "smoothScroll", "(FF)F" },
	{ "setScrollbarsOnTop", "(Z)V" },
	{ "getVariableSizeKnobs", "()Z" },
	{ "setVariableSizeKnobs", "(Z)V" },
	{ "setCancelTouchFocus", "(Z)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_ui_Styleable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle,
};

static FieldMetadata fields[] {
	{ "style", &class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_style), "Lcom/badlogic/gdx/scenes/scene2d/ui/ScrollPane$ScrollPaneStyle;", 2 },
	{ "actor", &class_com_badlogic_gdx_scenes_scene2d_Actor, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_actor), "Lcom/badlogic/gdx/scenes/scene2d/Actor;", 2 },
	{ "actorArea", &class_com_badlogic_gdx_math_Rectangle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_actorArea), "Lcom/badlogic/gdx/math/Rectangle;", 16 },
	{ "hScrollBounds", &class_com_badlogic_gdx_math_Rectangle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_hScrollBounds), "Lcom/badlogic/gdx/math/Rectangle;", 16 },
	{ "hKnobBounds", &class_com_badlogic_gdx_math_Rectangle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_hKnobBounds), "Lcom/badlogic/gdx/math/Rectangle;", 16 },
	{ "vScrollBounds", &class_com_badlogic_gdx_math_Rectangle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_vScrollBounds), "Lcom/badlogic/gdx/math/Rectangle;", 16 },
	{ "vKnobBounds", &class_com_badlogic_gdx_math_Rectangle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_vKnobBounds), "Lcom/badlogic/gdx/math/Rectangle;", 16 },
	{ "actorCullingArea", &class_com_badlogic_gdx_math_Rectangle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_actorCullingArea), "Lcom/badlogic/gdx/math/Rectangle;", 18 },
	{ "flickScrollListener", &class_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_flickScrollListener), "Lcom/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener;", 2 },
	{ "scrollX", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_scrollX), "Z", 0 },
	{ "scrollY", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_scrollY), "Z", 0 },
	{ "vScrollOnRight", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_vScrollOnRight), "Z", 0 },
	{ "hScrollOnBottom", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_hScrollOnBottom), "Z", 0 },
	{ "amountX", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_amountX), "F", 0 },
	{ "amountY", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_amountY), "F", 0 },
	{ "visualAmountX", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_visualAmountX), "F", 0 },
	{ "visualAmountY", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_visualAmountY), "F", 0 },
	{ "maxX", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_maxX), "F", 0 },
	{ "maxY", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_maxY), "F", 0 },
	{ "touchScrollH", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_touchScrollH), "Z", 0 },
	{ "touchScrollV", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_touchScrollV), "Z", 0 },
	{ "lastPoint", &class_com_badlogic_gdx_math_Vector2, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_lastPoint), "Lcom/badlogic/gdx/math/Vector2;", 16 },
	{ "fadeScrollBars", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_fadeScrollBars), "Z", 0 },
	{ "smoothScrolling", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_smoothScrolling), "Z", 0 },
	{ "scrollBarTouch", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_scrollBarTouch), "Z", 0 },
	{ "fadeAlpha", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_fadeAlpha), "F", 0 },
	{ "fadeAlphaSeconds", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_fadeAlphaSeconds), "F", 0 },
	{ "fadeDelay", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_fadeDelay), "F", 0 },
	{ "fadeDelaySeconds", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_fadeDelaySeconds), "F", 0 },
	{ "cancelTouchFocus", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_cancelTouchFocus), "Z", 0 },
	{ "flickScroll", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_flickScroll), "Z", 0 },
	{ "flingTime", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_flingTime), "F", 0 },
	{ "flingTimer", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_flingTimer), "F", 0 },
	{ "velocityX", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_velocityX), "F", 0 },
	{ "velocityY", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_velocityY), "F", 0 },
	{ "overscrollX", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_overscrollX), "Z", 2 },
	{ "overscrollY", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_overscrollY), "Z", 2 },
	{ "overscrollDistance", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_overscrollDistance), "F", 2 },
	{ "overscrollSpeedMin", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_overscrollSpeedMin), "F", 2 },
	{ "overscrollSpeedMax", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_overscrollSpeedMax), "F", 2 },
	{ "forceScrollX", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_forceScrollX), "Z", 2 },
	{ "forceScrollY", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_forceScrollY), "Z", 2 },
	{ "disableX", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_disableX), "Z", 0 },
	{ "disableY", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_disableY), "Z", 0 },
	{ "clamp", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_clamp), "Z", 2 },
	{ "scrollbarsOnTop", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_scrollbarsOnTop), "Z", 2 },
	{ "variableSizeKnobs", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_variableSizeKnobs), "Z", 2 },
	{ "draggingPointer", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane, F_draggingPointer), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_com_badlogic_gdx_scenes_scene2d_Actor, 0, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_ui_Skin, 0, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String, 0, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle, 0, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/ui/ScrollPane$ScrollPaneStyle;)V", 1 },
	{ "addCaptureListener", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addCaptureListener, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addCaptureListener, "()V", 4 },
	{ "getFlickScrollListener", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getFlickScrollListener_R_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getFlickScrollListener_R_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener, "()Lcom/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener;", 4 },
	{ "addScrollListener", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addScrollListener, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addScrollListener, "()V", 4 },
	{ "setScrollbarsVisible", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsVisible_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsVisible_boolean, "(Z)V", 1 },
	{ "cancelTouchFocus", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_cancelTouchFocus, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_cancelTouchFocus, "()V", 1 },
	{ "cancel", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_cancel, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_cancel, "()V", 1 },
	{ "clamp", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_clamp, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_clamp, "()V", 0 },
	{ "setStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setStyle_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setStyle_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle, "(Lcom/badlogic/gdx/scenes/scene2d/ui/ScrollPane$ScrollPaneStyle;)V", 1 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle, "()Lcom/badlogic/gdx/scenes/scene2d/ui/ScrollPane$ScrollPaneStyle;", 1 },
	{ "act", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_act_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_act_float, "(F)V", 1 },
	{ "layout", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_layout, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_layout, "()V", 1 },
	{ "updateActorPosition", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_updateActorPosition, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_updateActorPosition, "()V", 2 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_draw_com_badlogic_gdx_graphics_g2d_Batch_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_draw_com_badlogic_gdx_graphics_g2d_Batch_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V", 1 },
	{ "drawScrollBars", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_drawScrollBars_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_drawScrollBars_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFF)V", 4 },
	{ "fling", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_fling_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_fling_float_float_float, "(FFF)V", 1 },
	{ "getPrefWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getPrefWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getPrefHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getPrefHeight_R_float, "()F", 1 },
	{ "getMinWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMinWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMinWidth_R_float, "()F", 1 },
	{ "getMinHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMinHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMinHeight_R_float, "()F", 1 },
	{ "setActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setActor_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setActor_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "getActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor, "()Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "setWidget", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setWidget_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setWidget_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 131073 },
	{ "getWidget", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getWidget_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getWidget_R_com_badlogic_gdx_scenes_scene2d_Actor, "()Lcom/badlogic/gdx/scenes/scene2d/Actor;", 131073 },
	{ "addActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addActor_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addActor_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 131073 },
	{ "addActorAt", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addActorAt_int_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addActorAt_int_com_badlogic_gdx_scenes_scene2d_Actor, "(ILcom/badlogic/gdx/scenes/scene2d/Actor;)V", 131073 },
	{ "addActorBefore", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addActorBefore_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addActorBefore_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 131073 },
	{ "addActorAfter", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addActorAfter_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addActorAfter_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 131073 },
	{ "removeActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z", 1 },
	{ "removeActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Z)Z", 1 },
	{ "removeActorAt", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, "(IZ)Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "hit", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, "(FFZ)Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "scrollX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollX_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollX_float, "(F)V", 4 },
	{ "scrollY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollY_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollY_float, "(F)V", 4 },
	{ "visualScrollX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_visualScrollX_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_visualScrollX_float, "(F)V", 4 },
	{ "visualScrollY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_visualScrollY_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_visualScrollY_float, "(F)V", 4 },
	{ "getMouseWheelX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMouseWheelX_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMouseWheelX_R_float, "()F", 4 },
	{ "getMouseWheelY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMouseWheelY_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMouseWheelY_R_float, "()F", 4 },
	{ "setScrollX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollX_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollX_float, "(F)V", 1 },
	{ "getScrollX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollX_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollX_R_float, "()F", 1 },
	{ "setScrollY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollY_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollY_float, "(F)V", 1 },
	{ "getScrollY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollY_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollY_R_float, "()F", 1 },
	{ "updateVisualScroll", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_updateVisualScroll, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_updateVisualScroll, "()V", 1 },
	{ "getVisualScrollX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVisualScrollX_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVisualScrollX_R_float, "()F", 1 },
	{ "getVisualScrollY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVisualScrollY_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVisualScrollY_R_float, "()F", 1 },
	{ "getVisualScrollPercentX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVisualScrollPercentX_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVisualScrollPercentX_R_float, "()F", 1 },
	{ "getVisualScrollPercentY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVisualScrollPercentY_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVisualScrollPercentY_R_float, "()F", 1 },
	{ "getScrollPercentX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollPercentX_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollPercentX_R_float, "()F", 1 },
	{ "setScrollPercentX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollPercentX_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollPercentX_float, "(F)V", 1 },
	{ "getScrollPercentY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollPercentY_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollPercentY_R_float, "()F", 1 },
	{ "setScrollPercentY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollPercentY_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollPercentY_float, "(F)V", 1 },
	{ "setFlickScroll", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setFlickScroll_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setFlickScroll_boolean, "(Z)V", 1 },
	{ "setFlickScrollTapSquareSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setFlickScrollTapSquareSize_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setFlickScrollTapSquareSize_float, "(F)V", 1 },
	{ "scrollTo", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollTo_float_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollTo_float_float_float_float, "(FFFF)V", 1 },
	{ "scrollTo", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollTo_float_float_float_float_boolean_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollTo_float_float_float_float_boolean_boolean, "(FFFFZZ)V", 1 },
	{ "getMaxX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMaxX_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMaxX_R_float, "()F", 1 },
	{ "getMaxY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMaxY_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMaxY_R_float, "()F", 1 },
	{ "getScrollBarHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollBarHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollBarHeight_R_float, "()F", 1 },
	{ "getScrollBarWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollBarWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollBarWidth_R_float, "()F", 1 },
	{ "getScrollWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollWidth_R_float, "()F", 1 },
	{ "getScrollHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollHeight_R_float, "()F", 1 },
	{ "isScrollX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isScrollX_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isScrollX_R_boolean, "()Z", 1 },
	{ "isScrollY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isScrollY_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isScrollY_R_boolean, "()Z", 1 },
	{ "setScrollingDisabled", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollingDisabled_boolean_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollingDisabled_boolean_boolean, "(ZZ)V", 1 },
	{ "isScrollingDisabledX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isScrollingDisabledX_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isScrollingDisabledX_R_boolean, "()Z", 1 },
	{ "isScrollingDisabledY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isScrollingDisabledY_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isScrollingDisabledY_R_boolean, "()Z", 1 },
	{ "isLeftEdge", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isLeftEdge_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isLeftEdge_R_boolean, "()Z", 1 },
	{ "isRightEdge", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isRightEdge_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isRightEdge_R_boolean, "()Z", 1 },
	{ "isTopEdge", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isTopEdge_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isTopEdge_R_boolean, "()Z", 1 },
	{ "isBottomEdge", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isBottomEdge_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isBottomEdge_R_boolean, "()Z", 1 },
	{ "isDragging", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isDragging_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isDragging_R_boolean, "()Z", 1 },
	{ "isPanning", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isPanning_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isPanning_R_boolean, "()Z", 1 },
	{ "isFlinging", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isFlinging_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isFlinging_R_boolean, "()Z", 1 },
	{ "setVelocityX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setVelocityX_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setVelocityX_float, "(F)V", 1 },
	{ "getVelocityX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVelocityX_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVelocityX_R_float, "()F", 1 },
	{ "setVelocityY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setVelocityY_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setVelocityY_float, "(F)V", 1 },
	{ "getVelocityY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVelocityY_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVelocityY_R_float, "()F", 1 },
	{ "setOverscroll", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setOverscroll_boolean_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setOverscroll_boolean_boolean, "(ZZ)V", 1 },
	{ "setupOverscroll", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setupOverscroll_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setupOverscroll_float_float_float, "(FFF)V", 1 },
	{ "getOverscrollDistance", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getOverscrollDistance_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getOverscrollDistance_R_float, "()F", 1 },
	{ "setForceScroll", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setForceScroll_boolean_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setForceScroll_boolean_boolean, "(ZZ)V", 1 },
	{ "isForceScrollX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isForceScrollX_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isForceScrollX_R_boolean, "()Z", 1 },
	{ "isForceScrollY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isForceScrollY_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isForceScrollY_R_boolean, "()Z", 1 },
	{ "setFlingTime", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setFlingTime_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setFlingTime_float, "(F)V", 1 },
	{ "setClamp", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setClamp_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setClamp_boolean, "(Z)V", 1 },
	{ "setScrollBarPositions", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollBarPositions_boolean_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollBarPositions_boolean_boolean, "(ZZ)V", 1 },
	{ "setFadeScrollBars", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setFadeScrollBars_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setFadeScrollBars_boolean, "(Z)V", 1 },
	{ "setupFadeScrollBars", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setupFadeScrollBars_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setupFadeScrollBars_float_float, "(FF)V", 1 },
	{ "getFadeScrollBars", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getFadeScrollBars_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getFadeScrollBars_R_boolean, "()Z", 1 },
	{ "setScrollBarTouch", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollBarTouch_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollBarTouch_boolean, "(Z)V", 1 },
	{ "setSmoothScrolling", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setSmoothScrolling_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setSmoothScrolling_boolean, "(Z)V", 1 },
	{ "smoothScroll", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_smoothScroll_float_float_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_smoothScroll_float_float_R_float, "(FF)F", 4 },
	{ "setScrollbarsOnTop", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsOnTop_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsOnTop_boolean, "(Z)V", 1 },
	{ "getVariableSizeKnobs", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVariableSizeKnobs_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVariableSizeKnobs_R_boolean, "()Z", 1 },
	{ "setVariableSizeKnobs", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setVariableSizeKnobs_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setVariableSizeKnobs_boolean, "(Z)V", 1 },
	{ "setCancelTouchFocus", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setCancelTouchFocus_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setCancelTouchFocus_boolean, "(Z)V", 1 },
	{ "drawDebug", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer, "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V", 1 },
	{ "setStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setStyle_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setStyle_java_lang_Object, "(Ljava/lang/Object;)V", 4161 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getStyle_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getStyle_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 48,
		.nativeFields = (intptr_t) fields,
		.methodCount = 102,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 247,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane);

}

