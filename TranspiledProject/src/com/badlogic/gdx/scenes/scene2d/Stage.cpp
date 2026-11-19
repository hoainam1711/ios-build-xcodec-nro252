#include "com/badlogic/gdx/scenes/scene2d/Stage.h"
#include "com/badlogic/gdx/utils/ArraySupplier.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Table_Debug.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Table.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "com/badlogic/gdx/scenes/scene2d/InputEvent_Type.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/FocusListener_FocusEvent.h"
#include "com/badlogic/gdx/Application_ApplicationType.h"
#include "com/badlogic/gdx/utils/Scaling.h"
#include "com/badlogic/gdx/Application.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage_invoke_com_badlogic_gdx_utils_ArraySupplier_0.h"
#include "com/badlogic/gdx/scenes/scene2d/Group.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/FocusListener_FocusEvent_Type.h"
#include "com/badlogic/gdx/InputAdapter.h"
#include "com/badlogic/gdx/utils/PoolManager.h"
#include "com/badlogic/gdx/scenes/scene2d/InputEvent.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/Graphics.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/scenes/scene2d/Action.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "com/badlogic/gdx/graphics/g2d/SpriteBatch.h"
#include "com/badlogic/gdx/graphics/glutils/ShapeRenderer.h"
#include "com/badlogic/gdx/utils/viewport/ScalingViewport.h"
#include "com/badlogic/gdx/utils/viewport/Viewport.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/graphics/Camera.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage_invoke_com_badlogic_gdx_utils_DefaultPool_PoolSupplier_2.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage_invoke_com_badlogic_gdx_utils_DefaultPool_PoolSupplier_1.h"
#include "com/badlogic/gdx/utils/SnapshotArray.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage_invoke_com_badlogic_gdx_utils_DefaultPool_PoolSupplier_0.h"
#include "com/badlogic/gdx/math/Rectangle.h"
#include "com/badlogic/gdx/scenes/scene2d/EventListener.h"
#include "com/badlogic/gdx/scenes/scene2d/Event.h"
#include "com/badlogic/gdx/Input.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/OrthographicCamera.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage_TouchFocus.h"
#include "com/badlogic/gdx/utils/DefaultPool_PoolSupplier.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/math/Vector2.h"
#include "com/badlogic/gdx/scenes/scene2d/Touchable.h"

extern "C" {

jbool SF_com_badlogic_gdx_scenes_scene2d_Stage_debug;

void mark_com_badlogic_gdx_scenes_scene2d_Stage(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_InputAdapter(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_Stage *) object;
	if (self->F_pools)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pools)->clazz)->markFunction)((jobject) self->F_pools, mark, depth + 1);
	if (self->F_viewport)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_viewport)->clazz)->markFunction)((jobject) self->F_viewport, mark, depth + 1);
	if (self->F_batch)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_batch)->clazz)->markFunction)((jobject) self->F_batch, mark, depth + 1);
	if (self->F_root)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_root)->clazz)->markFunction)((jobject) self->F_root, mark, depth + 1);
	if (self->F_tempCoords)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tempCoords)->clazz)->markFunction)((jobject) self->F_tempCoords, mark, depth + 1);
	if (self->F_pointerOverActors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pointerOverActors)->clazz)->markFunction)((jobject) self->F_pointerOverActors, mark, depth + 1);
	if (self->F_pointerTouched)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pointerTouched)->clazz)->markFunction)((jobject) self->F_pointerTouched, mark, depth + 1);
	if (self->F_pointerScreenX)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pointerScreenX)->clazz)->markFunction)((jobject) self->F_pointerScreenX, mark, depth + 1);
	if (self->F_pointerScreenY)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pointerScreenY)->clazz)->markFunction)((jobject) self->F_pointerScreenY, mark, depth + 1);
	if (self->F_mouseOverActor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mouseOverActor)->clazz)->markFunction)((jobject) self->F_mouseOverActor, mark, depth + 1);
	if (self->F_keyboardFocus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keyboardFocus)->clazz)->markFunction)((jobject) self->F_keyboardFocus, mark, depth + 1);
	if (self->F_scrollFocus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scrollFocus)->clazz)->markFunction)((jobject) self->F_scrollFocus, mark, depth + 1);
	if (self->F_touchFocuses)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_touchFocuses)->clazz)->markFunction)((jobject) self->F_touchFocuses, mark, depth + 1);
	if (self->F_debugShapes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_debugShapes)->clazz)->markFunction)((jobject) self->F_debugShapes, mark, depth + 1);
	if (self->F_debugTableUnderMouse)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_debugTableUnderMouse)->clazz)->markFunction)((jobject) self->F_debugTableUnderMouse, mark, depth + 1);
	if (self->F_debugColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_debugColor)->clazz)->markFunction)((jobject) self->F_debugColor, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_Stage(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_InputAdapter(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_Stage(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_Stage(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_viewport_ScalingViewport(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_viewport_ScalingViewport);
	clinit_com_badlogic_gdx_utils_Scaling(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_utils_Scaling_stretch;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[3].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp0 = (jint)((func_com_badlogic_gdx_Graphics_getWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getWidth_R_int, sp[3].o))(ctx, sp[3].o);
	jfloat temp1 = jfloat(temp0);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[3].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp2 = (jint)((func_com_badlogic_gdx_Graphics_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getHeight_R_int, sp[3].o))(ctx, sp[3].o);
	jfloat temp3 = jfloat(temp2);
	clinit_com_badlogic_gdx_graphics_OrthographicCamera(ctx);
	sp[3].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_OrthographicCamera);
	init_com_badlogic_gdx_graphics_OrthographicCamera(ctx, sp[3].o);
	init_com_badlogic_gdx_utils_viewport_ScalingViewport_com_badlogic_gdx_utils_Scaling_float_float_com_badlogic_gdx_graphics_Camera(ctx, sp[1].o, sp[2].o, temp1, temp3, sp[3].o);
	clinit_com_badlogic_gdx_graphics_g2d_SpriteBatch(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_SpriteBatch);
	init_com_badlogic_gdx_graphics_g2d_SpriteBatch(ctx, sp[2].o);
	init_com_badlogic_gdx_scenes_scene2d_Stage_com_badlogic_gdx_utils_viewport_Viewport_com_badlogic_gdx_graphics_g2d_Batch(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(95);
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_ownsBatch = (jint(1));
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_Stage_com_badlogic_gdx_utils_viewport_Viewport(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_Stage(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_graphics_g2d_SpriteBatch(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_SpriteBatch);
	init_com_badlogic_gdx_graphics_g2d_SpriteBatch(ctx, sp[2].o);
	init_com_badlogic_gdx_scenes_scene2d_Stage_com_badlogic_gdx_utils_viewport_Viewport_com_badlogic_gdx_graphics_g2d_Batch(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(102);
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_ownsBatch = (jint(1));
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_Stage_com_badlogic_gdx_utils_viewport_Viewport_com_badlogic_gdx_graphics_g2d_Batch(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_Stage(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(108);
	init_com_badlogic_gdx_InputAdapter(ctx, (frame[0].o));
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_PoolManager(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_PoolManager);
	init_com_badlogic_gdx_utils_PoolManager(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK(sp[0].o))->F_pools = (jref) sp[1].o;
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK(sp[0].o))->F_tempCoords = (jref) sp[1].o;
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_scenes_scene2d_Actor, (20));
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK(sp[0].o))->F_pointerOverActors = (jref) sp[1].o;
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_boolean, (20));
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK(sp[0].o))->F_pointerTouched = (jref) sp[1].o;
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (20));
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK(sp[0].o))->F_pointerScreenX = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (20));
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK(sp[0].o))->F_pointerScreenY = (jref) sp[1].o;
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_SnapshotArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SnapshotArray);
	jint temp0 = jint(1);
	jint temp1 = jint(4);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_scenes_scene2d_Stage_invoke_com_badlogic_gdx_utils_ArraySupplier_0(ctx);
		auto proxy = (com_badlogic_gdx_scenes_scene2d_Stage_invoke_com_badlogic_gdx_utils_ArraySupplier_0 *) gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_Stage_invoke_com_badlogic_gdx_utils_ArraySupplier_0);
		sp[2].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_utils_SnapshotArray_boolean_int_com_badlogic_gdx_utils_ArraySupplier(ctx, sp[1].o, temp0, temp1, sp[2].o);
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK(sp[0].o))->F_touchFocuses = (jref) sp[1].o;
	LINE_NUMBER(83);
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_actionsRequestRendering = (jint(1));
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_none;
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK(sp[0].o))->F_debugTableUnderMouse = (jref) sp[1].o;
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(1)), (jfloat(0)), (jfloat(0.85f)));
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK(sp[0].o))->F_debugColor = (jref) sp[1].o;
	LINE_NUMBER(109);
	if ((frame[1].o) != nullptr) goto label_11;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"viewport cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(110);
	if ((frame[2].o) != nullptr) goto label_12;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"batch cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(111);
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_viewport = (jref) (frame[1].o);
	LINE_NUMBER(112);
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_batch = (jref) (frame[2].o);
	LINE_NUMBER(114);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_scenes_scene2d_InputEvent);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_scenes_scene2d_Stage_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_0(ctx);
		auto proxy = (com_badlogic_gdx_scenes_scene2d_Stage_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_0 *) gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_Stage_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_0);
		sp[2].o = (jobject) proxy;
	}
	((func_com_badlogic_gdx_utils_PoolManager_addPool_java_lang_Class_com_badlogic_gdx_utils_DefaultPool$PoolSupplier) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_addPool_java_lang_Class_com_badlogic_gdx_utils_DefaultPool$PoolSupplier])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(115);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_scenes_scene2d_Stage_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_1(ctx);
		auto proxy = (com_badlogic_gdx_scenes_scene2d_Stage_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_1 *) gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_Stage_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_1);
		sp[2].o = (jobject) proxy;
	}
	((func_com_badlogic_gdx_utils_PoolManager_addPool_java_lang_Class_com_badlogic_gdx_utils_DefaultPool$PoolSupplier) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_addPool_java_lang_Class_com_badlogic_gdx_utils_DefaultPool$PoolSupplier])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(116);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_scenes_scene2d_Stage_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_2(ctx);
		auto proxy = (com_badlogic_gdx_scenes_scene2d_Stage_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_2 *) gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_Stage_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_2);
		sp[2].o = (jobject) proxy;
	}
	((func_com_badlogic_gdx_utils_PoolManager_addPool_java_lang_Class_com_badlogic_gdx_utils_DefaultPool$PoolSupplier) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_addPool_java_lang_Class_com_badlogic_gdx_utils_DefaultPool$PoolSupplier])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_Group(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_Group);
	init_com_badlogic_gdx_scenes_scene2d_Group(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK(sp[0].o))->F_root = (jref) sp[1].o;
	LINE_NUMBER(119);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	((func_com_badlogic_gdx_scenes_scene2d_Group_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(121);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp0 = (jint)((func_com_badlogic_gdx_Graphics_getWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getWidth_R_int, sp[1].o))(ctx, sp[1].o);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp1 = (jint)((func_com_badlogic_gdx_Graphics_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getHeight_R_int, sp[1].o))(ctx, sp[1].o);
	((func_com_badlogic_gdx_utils_viewport_Viewport_update_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_viewport_Viewport_update_int_int_boolean])(ctx, sp[0].o, temp0, temp1, (jint(1)));
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:draw", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_viewport;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_viewport_Viewport_getCamera_R_com_badlogic_gdx_graphics_Camera) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_viewport_Viewport_getCamera_R_com_badlogic_gdx_graphics_Camera])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(126);
	((func_com_badlogic_gdx_graphics_Camera_update) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Camera_update])(ctx, (frame[1].o));
	LINE_NUMBER(128);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Group_isVisible_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_isVisible_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_batch;
	frame[2].o = sp[0].o;
	LINE_NUMBER(131);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[1].o)))->F_combined;
	((func_com_badlogic_gdx_graphics_g2d_Batch_setProjectionMatrix_com_badlogic_gdx_math_Matrix4) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setProjectionMatrix_com_badlogic_gdx_math_Matrix4, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(132);
	((func_com_badlogic_gdx_graphics_g2d_Batch_begin) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_begin, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(133);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	((func_com_badlogic_gdx_scenes_scene2d_Group_draw_com_badlogic_gdx_graphics_g2d_Batch_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_draw_com_badlogic_gdx_graphics_g2d_Batch_float])(ctx, sp[0].o, (frame[2].o), (jfloat(1)));
	LINE_NUMBER(134);
	((func_com_badlogic_gdx_graphics_g2d_Batch_end) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_end, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(136);
	if ((clinit_com_badlogic_gdx_scenes_scene2d_Stage(ctx), (jint)SF_com_badlogic_gdx_scenes_scene2d_Stage_debug) == 0) goto label_9;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_scenes_scene2d_Stage_drawDebug(ctx, sp[0].o);
label_9:;
	LINE_NUMBER(137);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_drawDebug(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:drawDebug", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugShapes;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(141);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_ShapeRenderer);
	init_com_badlogic_gdx_graphics_glutils_ShapeRenderer(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK(sp[0].o))->F_debugShapes = (jref) sp[1].o;
	LINE_NUMBER(142);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugShapes;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setAutoShapeType_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setAutoShapeType_boolean])(ctx, sp[0].o, (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(145);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugUnderMouse) != 0) goto label_4;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugParentUnderMouse) != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugTableUnderMouse;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_none;
	if (sp[0].o == sp[1].o) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(146);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp0 = (jint)((func_com_badlogic_gdx_Input_getX_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_getX_R_int, sp[2].o))(ctx, sp[2].o);
	jfloat temp1 = jfloat(temp0);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp2 = (jint)((func_com_badlogic_gdx_Input_getY_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_getY_R_int, sp[2].o))(ctx, sp[2].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, temp1, (jfloat(temp2)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_screenToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_screenToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(147);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	jfloat temp3 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, temp3, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_y), (jint(1)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(148);
	if ((frame[1].o) != nullptr) goto label_8;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_8:;
	{
	LINE_NUMBER(150);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugParentUnderMouse) == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[1].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[1].o)))->F_parent;
	frame[1].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugTableUnderMouse;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_none;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(153);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setDebug_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setDebug_boolean])(ctx, (frame[1].o), (jint(1)));
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(155);
	if ((frame[1].o) == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(156);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_scenes_scene2d_ui_Table)) == 0) goto label_15;
	}
	goto label_13;
label_15:;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[1].o)))->F_parent;
	frame[1].o = sp[0].o;
	goto label_10;
	}
label_13:;
	{
	LINE_NUMBER(159);
	if ((frame[1].o) != nullptr) goto label_16;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_16:;
	{
	LINE_NUMBER(160);
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Table, (frame[1].o));
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugTableUnderMouse;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_debug_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_R_com_badlogic_gdx_scenes_scene2d_ui_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_debug_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_R_com_badlogic_gdx_scenes_scene2d_ui_Table])(ctx, sp[0].o, sp[1].o);
	}
label_12:;
	{
	LINE_NUMBER(163);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugAll) == 0) goto label_17;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_scenes_scene2d_Group)) == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Group_debugAll_R_com_badlogic_gdx_scenes_scene2d_Group) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Group, (frame[1].o))))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_debugAll_R_com_badlogic_gdx_scenes_scene2d_Group])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Group, (frame[1].o))));
	}
label_17:;
	{
	LINE_NUMBER(165);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	M_com_badlogic_gdx_scenes_scene2d_Stage_disableDebug_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor(ctx, sp[0].o, sp[1].o, (frame[1].o));
	LINE_NUMBER(166);
	goto label_19;
	}
label_5:;
	{
	LINE_NUMBER(167);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugAll) == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Group_debugAll_R_com_badlogic_gdx_scenes_scene2d_Group) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_debugAll_R_com_badlogic_gdx_scenes_scene2d_Group])(ctx, sp[0].o);
	}
label_19:;
	{
	LINE_NUMBER(170);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glEnable_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glEnable_int, sp[0].o))(ctx, sp[0].o, (3042));
	LINE_NUMBER(171);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugShapes;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_viewport;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_viewport_Viewport_getCamera_R_com_badlogic_gdx_graphics_Camera) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_viewport_Viewport_getCamera_R_com_badlogic_gdx_graphics_Camera])(ctx, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK(sp[1].o))->F_combined;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setProjectionMatrix_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setProjectionMatrix_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(172);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugShapes;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_begin])(ctx, sp[0].o);
	LINE_NUMBER(173);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugShapes;
	((func_com_badlogic_gdx_scenes_scene2d_Group_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(174);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugShapes;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_end])(ctx, sp[0].o);
	LINE_NUMBER(175);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glDisable_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDisable_int, sp[0].o))(ctx, sp[0].o, (3042));
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_disableDebug_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:disableDebug", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(180);
	if ((frame[1].o) != (frame[2].o)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(181);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setDebug_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setDebug_boolean])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(182);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_scenes_scene2d_Group)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Group, (frame[1].o)))))->F_children;
	frame[3].o = sp[0].o;
	LINE_NUMBER(184);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[3].o)))->F_size);
	}
label_7:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_3;
	}
	{
	LINE_NUMBER(185);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[4].i));
	M_com_badlogic_gdx_scenes_scene2d_Stage_disableDebug_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor(ctx, sp[0].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Actor, sp[1].o)), (frame[2].o));
	LINE_NUMBER(184);
	INST_IINC(4, 1);
	goto label_7;
	}
label_3:;
	LINE_NUMBER(187);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_act(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:act", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(191);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_Graphics_getDeltaTime_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getDeltaTime_R_float, sp[1].o))(ctx, sp[1].o);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, (jfloat(0.033333335f)));
	((func_com_badlogic_gdx_scenes_scene2d_Stage_act_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_act_float])(ctx, sp[0].o, temp1);
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_act_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:act", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(199);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pointerOverActors;
	frame[3].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pointerOverActors;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(201);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pointerTouched;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[2].i))) == 0) goto label_6;
	}
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pointerOverActors;
	jint temp0 = frame[2].i;
	sp[1].o = frame[0].o;
	sp[2].o = frame[4].o;
	sp[3].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pointerScreenX;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[3].o, (frame[2].i));
	sp[3].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pointerScreenY;
	sp[1].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_Stage_fireEnterAndExit_com_badlogic_gdx_scenes_scene2d_Actor_int_int_int_R_com_badlogic_gdx_scenes_scene2d_Actor(ctx, sp[1].o, sp[2].o, temp1, ((jint)ARRAY_ACCESS(jint, sp[3].o, (frame[2].i))), (frame[2].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(204);
	if ((frame[4].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pointerOverActors;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(207);
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pointerScreenX;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[2].o, (frame[2].i));
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pointerScreenY;
	M_com_badlogic_gdx_scenes_scene2d_Stage_fireExit_com_badlogic_gdx_scenes_scene2d_Actor_int_int_int(ctx, sp[0].o, sp[1].o, temp0, ((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[2].i))), (frame[2].i));
	}
label_8:;
	{
	LINE_NUMBER(199);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(212);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(213);
	sp[0].o = frame[2].o;
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_Desktop;
	if (sp[0].o == sp[1].o) goto label_12;
	}
	{
	sp[0].o = frame[2].o;
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_Applet;
	if (sp[0].o == sp[1].o) goto label_12;
	}
	{
	sp[0].o = frame[2].o;
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_WebGL;
	if (sp[0].o != sp[1].o) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(214);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_mouseOverActor;
	sp[1].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_Stage_fireEnterAndExit_com_badlogic_gdx_scenes_scene2d_Actor_int_int_int_R_com_badlogic_gdx_scenes_scene2d_Actor(ctx, sp[1].o, sp[2].o, ((jint)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_mouseScreenX), ((jint)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_mouseScreenY), (jint(-1)));
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK(sp[0].o))->F_mouseOverActor = (jref) sp[1].o;
	}
label_13:;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	((func_com_badlogic_gdx_scenes_scene2d_Group_act_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_act_float])(ctx, sp[0].o, (frame[1].f));
	LINE_NUMBER(217);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Stage_fireEnterAndExit_com_badlogic_gdx_scenes_scene2d_Actor_int_int_int_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:fireEnterAndExit", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(221);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, (jfloat((frame[2].i))), (jfloat((frame[3].i))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_screenToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_screenToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(222);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, temp0, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_y), (jint(1)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(223);
	if ((frame[5].o) != (frame[1].o)) goto label_3;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(226);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_scenes_scene2d_InputEvent)));
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_InputEvent, sp[0].o));
	LINE_NUMBER(228);
	sp[0].o = frame[6].o;
	clinit_com_badlogic_gdx_scenes_scene2d_InputEvent$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_exit;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(229);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[6].o), (frame[0].o));
	LINE_NUMBER(230);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageX_float])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(231);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageY_float])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(232);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setPointer_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setPointer_int])(ctx, (frame[6].o), (frame[4].i));
	LINE_NUMBER(233);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setRelatedActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setRelatedActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[6].o), (frame[5].o));
	LINE_NUMBER(234);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean])(ctx, (frame[1].o), (frame[6].o));
	LINE_NUMBER(235);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[6].o));
	}
label_4:;
	{
	LINE_NUMBER(239);
	if ((frame[5].o) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_scenes_scene2d_InputEvent)));
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_InputEvent, sp[0].o));
	LINE_NUMBER(241);
	sp[0].o = frame[6].o;
	clinit_com_badlogic_gdx_scenes_scene2d_InputEvent$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_enter;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(242);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[6].o), (frame[0].o));
	LINE_NUMBER(243);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageX_float])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(244);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageY_float])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(245);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setPointer_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setPointer_int])(ctx, (frame[6].o), (frame[4].i));
	LINE_NUMBER(246);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setRelatedActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setRelatedActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[6].o), (frame[1].o));
	LINE_NUMBER(247);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean])(ctx, (frame[5].o), (frame[6].o));
	LINE_NUMBER(248);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[6].o));
	}
label_14:;
	{
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_fireExit_com_badlogic_gdx_scenes_scene2d_Actor_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:fireExit", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(254);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, (jfloat((frame[2].i))), (jfloat((frame[3].i))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_screenToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_screenToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(255);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_scenes_scene2d_InputEvent)));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_InputEvent, sp[0].o));
	LINE_NUMBER(256);
	sp[0].o = frame[5].o;
	clinit_com_badlogic_gdx_scenes_scene2d_InputEvent$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_exit;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(257);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[5].o), (frame[0].o));
	LINE_NUMBER(258);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageX_float])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(259);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageY_float])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(260);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setPointer_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setPointer_int])(ctx, (frame[5].o), (frame[4].i));
	LINE_NUMBER(261);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setRelatedActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setRelatedActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[5].o), (frame[1].o));
	LINE_NUMBER(262);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean])(ctx, (frame[1].o), (frame[5].o));
	LINE_NUMBER(263);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(264);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Stage_touchDown_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:touchDown", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(269);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Stage_isInsideViewport_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_isInsideViewport_int_int_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pointerTouched;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i)) = (jint(1));
	LINE_NUMBER(272);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pointerScreenX;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[1].i);
	LINE_NUMBER(273);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pointerScreenY;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[2].i);
	LINE_NUMBER(275);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, (jfloat((frame[1].i))), (jfloat((frame[2].i))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_screenToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_screenToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(277);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_scenes_scene2d_InputEvent)));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_InputEvent, sp[0].o));
	LINE_NUMBER(278);
	sp[0].o = frame[5].o;
	clinit_com_badlogic_gdx_scenes_scene2d_InputEvent$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_touchDown;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(279);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[5].o), (frame[0].o));
	LINE_NUMBER(280);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageX_float])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(281);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageY_float])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(282);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setPointer_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setPointer_int])(ctx, (frame[5].o), (frame[3].i));
	LINE_NUMBER(283);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setButton_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setButton_int])(ctx, (frame[5].o), (frame[4].i));
	LINE_NUMBER(285);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, temp0, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_y), (jint(1)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(286);
	if ((frame[6].o) != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Group_getTouchable_R_com_badlogic_gdx_scenes_scene2d_Touchable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_getTouchable_R_com_badlogic_gdx_scenes_scene2d_Touchable])(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_Touchable(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Touchable_enabled;
	if (sp[0].o != sp[1].o) goto label_16;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Group_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean])(ctx, sp[0].o, (frame[5].o));
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(289);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean])(ctx, (frame[6].o), (frame[5].o));
	}
label_16:;
	{
	LINE_NUMBER(291);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_isHandled_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_isHandled_R_boolean])(ctx, (frame[5].o));
	frame[7].i = temp0;
	LINE_NUMBER(292);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(293);
	popStackFrame(ctx);
	return (frame[7].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Stage_touchDragged_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:touchDragged", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pointerScreenX;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[1].i);
	LINE_NUMBER(300);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pointerScreenY;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[2].i);
	LINE_NUMBER(301);
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_mouseScreenX = (frame[1].i);
	LINE_NUMBER(302);
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_mouseScreenY = (frame[2].i);
	LINE_NUMBER(304);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_touchFocuses;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(306);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, (jfloat((frame[1].i))), (jfloat((frame[2].i))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_screenToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_screenToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(308);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_scenes_scene2d_InputEvent)));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_InputEvent, sp[0].o));
	LINE_NUMBER(309);
	sp[0].o = frame[4].o;
	clinit_com_badlogic_gdx_scenes_scene2d_InputEvent$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_touchDragged;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(310);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[4].o), (frame[0].o));
	LINE_NUMBER(311);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageX_float])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(312);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageY_float])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(313);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setPointer_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setPointer_int])(ctx, (frame[4].o), (frame[3].i));
	LINE_NUMBER(315);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_touchFocuses;
	frame[5].o = sp[0].o;
	LINE_NUMBER(316);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object])(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus, 1), sp[0].o));
	LINE_NUMBER(317);
	frame[7].i = (jint(0));
	frame[8].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[5].o)))->F_size);
	}
label_16:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_17;
	}
	{
	LINE_NUMBER(318);
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i)));
	LINE_NUMBER(319);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[9].o)))->F_pointer) == (frame[3].i)) goto label_20;
	}
	goto label_21;
label_20:;
	{
	LINE_NUMBER(320);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_SnapshotArray_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_contains_java_lang_Object_boolean_R_boolean])(ctx, (frame[5].o), (frame[9].o), (jint(1)));
	if (temp0 != 0) goto label_22;
	}
	goto label_21;
label_22:;
	{
	LINE_NUMBER(321);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[9].o)))->F_target;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setTarget_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setTarget_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(322);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[9].o)))->F_listenerActor;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setListenerActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setListenerActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(323);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[9].o)))->F_listener;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_EventListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_EventListener, INDEX_com_badlogic_gdx_scenes_scene2d_EventListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[4].o));
	if (temp0 == 0) goto label_21;
	}
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_handle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_handle])(ctx, sp[0].o);
label_21:;
	{
	LINE_NUMBER(317);
	INST_IINC(7, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(325);
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, (frame[5].o));
	LINE_NUMBER(327);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_isHandled_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_isHandled_R_boolean])(ctx, (frame[4].o));
	frame[7].i = temp0;
	LINE_NUMBER(328);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(329);
	popStackFrame(ctx);
	return (frame[7].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Stage_touchUp_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:touchUp", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(335);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pointerTouched;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i)) = (jint(0));
	LINE_NUMBER(336);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pointerScreenX;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[1].i);
	LINE_NUMBER(337);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pointerScreenY;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[2].i);
	LINE_NUMBER(339);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_touchFocuses;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(341);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, (jfloat((frame[1].i))), (jfloat((frame[2].i))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_screenToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_screenToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(343);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_scenes_scene2d_InputEvent)));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_InputEvent, sp[0].o));
	LINE_NUMBER(344);
	sp[0].o = frame[5].o;
	clinit_com_badlogic_gdx_scenes_scene2d_InputEvent$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_touchUp;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(345);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[5].o), (frame[0].o));
	LINE_NUMBER(346);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageX_float])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(347);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageY_float])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(348);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setPointer_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setPointer_int])(ctx, (frame[5].o), (frame[3].i));
	LINE_NUMBER(349);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setButton_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setButton_int])(ctx, (frame[5].o), (frame[4].i));
	LINE_NUMBER(351);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_touchFocuses;
	frame[6].o = sp[0].o;
	LINE_NUMBER(352);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object])(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus, 1), sp[0].o));
	LINE_NUMBER(353);
	frame[8].i = (jint(0));
	frame[9].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[6].o)))->F_size);
	}
label_16:;
	{
	if ((frame[8].i) >= (frame[9].i)) goto label_17;
	}
	{
	LINE_NUMBER(354);
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[8].i)));
	LINE_NUMBER(355);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[10].o)))->F_pointer) != (frame[3].i)) goto label_20;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[10].o)))->F_button) == (frame[4].i)) goto label_21;
	}
	goto label_20;
label_21:;
	{
	LINE_NUMBER(356);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_SnapshotArray_removeValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_removeValue_java_lang_Object_boolean_R_boolean])(ctx, (frame[6].o), (frame[10].o), (jint(1)));
	if (temp0 != 0) goto label_22;
	}
	goto label_20;
label_22:;
	{
	LINE_NUMBER(357);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[10].o)))->F_target;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setTarget_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setTarget_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(358);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[10].o)))->F_listenerActor;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setListenerActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setListenerActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(359);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[10].o)))->F_listener;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_EventListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_EventListener, INDEX_com_badlogic_gdx_scenes_scene2d_EventListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[5].o));
	if (temp0 == 0) goto label_25;
	}
	INST_ALOAD(5);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_handle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_handle])(ctx, sp[0].o);
label_25:;
	{
	LINE_NUMBER(360);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[10].o));
	}
label_20:;
	{
	LINE_NUMBER(353);
	INST_IINC(8, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(362);
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, (frame[6].o));
	LINE_NUMBER(364);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_isHandled_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_isHandled_R_boolean])(ctx, (frame[5].o));
	frame[8].i = temp0;
	LINE_NUMBER(365);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return (frame[8].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Stage_touchCancelled_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:touchCancelled", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(370);
	((func_com_badlogic_gdx_scenes_scene2d_Stage_cancelTouchFocus) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_cancelTouchFocus])(ctx, (frame[0].o));
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Stage_mouseMoved_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:mouseMoved", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(377);
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_mouseScreenX = (frame[1].i);
	LINE_NUMBER(378);
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_mouseScreenY = (frame[2].i);
	LINE_NUMBER(380);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Stage_isInsideViewport_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_isInsideViewport_int_int_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	if (temp0 != 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(382);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, (jfloat((frame[1].i))), (jfloat((frame[2].i))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_screenToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_screenToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(384);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_scenes_scene2d_InputEvent)));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_InputEvent, sp[0].o));
	LINE_NUMBER(385);
	sp[0].o = frame[3].o;
	clinit_com_badlogic_gdx_scenes_scene2d_InputEvent$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_mouseMoved;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(386);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[3].o), (frame[0].o));
	LINE_NUMBER(387);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageX_float])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(388);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageY_float])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(390);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, temp0, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_y), (jint(1)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(391);
	if ((frame[4].o) != nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	frame[4].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(393);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean])(ctx, (frame[4].o), (frame[3].o));
	LINE_NUMBER(394);
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_isHandled_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_isHandled_R_boolean])(ctx, (frame[3].o));
	frame[5].i = temp1;
	LINE_NUMBER(395);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(396);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Stage_scrolled_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:scrolled", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(402);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_scrollFocus;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK(sp[-1].o))->F_scrollFocus;
label_2:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(404);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, (jfloat(((jint)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_mouseScreenX))), (jfloat(((jint)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_mouseScreenY))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_screenToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_screenToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(406);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_scenes_scene2d_InputEvent)));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_InputEvent, sp[0].o));
	LINE_NUMBER(407);
	sp[0].o = frame[4].o;
	clinit_com_badlogic_gdx_scenes_scene2d_InputEvent$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_scrolled;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(408);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[4].o), (frame[0].o));
	LINE_NUMBER(409);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageX_float])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(410);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageY_float])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(411);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setScrollAmountX_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setScrollAmountX_float])(ctx, (frame[4].o), (frame[1].f));
	LINE_NUMBER(412);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setScrollAmountY_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setScrollAmountY_float])(ctx, (frame[4].o), (frame[2].f));
	LINE_NUMBER(413);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean])(ctx, (frame[3].o), (frame[4].o));
	LINE_NUMBER(414);
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_isHandled_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_isHandled_R_boolean])(ctx, (frame[4].o));
	frame[5].i = temp1;
	LINE_NUMBER(415);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Stage_keyDown_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:keyDown", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(422);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_keyboardFocus;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK(sp[-1].o))->F_keyboardFocus;
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(423);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_scenes_scene2d_InputEvent)));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_InputEvent, sp[0].o));
	LINE_NUMBER(424);
	sp[0].o = frame[3].o;
	clinit_com_badlogic_gdx_scenes_scene2d_InputEvent$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_keyDown;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(425);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[3].o), (frame[0].o));
	LINE_NUMBER(426);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setKeyCode_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setKeyCode_int])(ctx, (frame[3].o), (frame[1].i));
	LINE_NUMBER(427);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean])(ctx, (frame[2].o), (frame[3].o));
	LINE_NUMBER(428);
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_isHandled_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_isHandled_R_boolean])(ctx, (frame[3].o));
	frame[4].i = temp1;
	LINE_NUMBER(429);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(430);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Stage_keyUp_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:keyUp", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(436);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_keyboardFocus;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK(sp[-1].o))->F_keyboardFocus;
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(437);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_scenes_scene2d_InputEvent)));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_InputEvent, sp[0].o));
	LINE_NUMBER(438);
	sp[0].o = frame[3].o;
	clinit_com_badlogic_gdx_scenes_scene2d_InputEvent$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_keyUp;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(439);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[3].o), (frame[0].o));
	LINE_NUMBER(440);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setKeyCode_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setKeyCode_int])(ctx, (frame[3].o), (frame[1].i));
	LINE_NUMBER(441);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean])(ctx, (frame[2].o), (frame[3].o));
	LINE_NUMBER(442);
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_isHandled_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_isHandled_R_boolean])(ctx, (frame[3].o));
	frame[4].i = temp1;
	LINE_NUMBER(443);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(444);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Stage_keyTyped_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:keyTyped", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(450);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_keyboardFocus;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK(sp[-1].o))->F_keyboardFocus;
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(451);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_scenes_scene2d_InputEvent)));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_InputEvent, sp[0].o));
	LINE_NUMBER(452);
	sp[0].o = frame[3].o;
	clinit_com_badlogic_gdx_scenes_scene2d_InputEvent$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_keyTyped;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(453);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[3].o), (frame[0].o));
	LINE_NUMBER(454);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setCharacter_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setCharacter_char])(ctx, (frame[3].o), (frame[1].i));
	LINE_NUMBER(455);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean])(ctx, (frame[2].o), (frame[3].o));
	LINE_NUMBER(456);
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_isHandled_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_isHandled_R_boolean])(ctx, (frame[3].o));
	frame[4].i = temp1;
	LINE_NUMBER(457);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(458);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_addTouchFocus_com_badlogic_gdx_scenes_scene2d_EventListener_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:addTouchFocus", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(466);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus)));
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus, sp[0].o));
	LINE_NUMBER(467);
	((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[6].o)))->F_listenerActor = (jref) (frame[2].o);
	LINE_NUMBER(468);
	((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[6].o)))->F_target = (jref) (frame[3].o);
	LINE_NUMBER(469);
	((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[6].o)))->F_listener = (jref) (frame[1].o);
	LINE_NUMBER(470);
	((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[6].o)))->F_pointer = (frame[4].i);
	LINE_NUMBER(471);
	((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[6].o)))->F_button = (frame[5].i);
	LINE_NUMBER(472);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_touchFocuses;
	((func_com_badlogic_gdx_utils_SnapshotArray_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_add_java_lang_Object])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(473);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_removeTouchFocus_com_badlogic_gdx_scenes_scene2d_EventListener_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:removeTouchFocus", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(478);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_touchFocuses;
	frame[6].o = sp[0].o;
	LINE_NUMBER(479);
	frame[7].i = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[6].o)))->F_size) - (jint(1)));
	}
label_2:;
	INST_ILOAD(7);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(480);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_get_int_R_java_lang_Object])(ctx, (frame[6].o), (frame[7].i));
	frame[8].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus, sp[0].o));
	LINE_NUMBER(481);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[8].o)))->F_listener;
	if (sp[0].o != (frame[1].o)) goto label_6;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[8].o)))->F_listenerActor;
	if (sp[0].o != (frame[2].o)) goto label_6;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[8].o)))->F_target;
	if (sp[0].o != (frame[3].o)) goto label_6;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[8].o)))->F_pointer) != (frame[4].i)) goto label_6;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[8].o)))->F_button) != (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(483);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_removeIndex_int_R_java_lang_Object])(ctx, (frame[6].o), (frame[7].i));
	LINE_NUMBER(484);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[8].o));
	}
label_6:;
	{
	LINE_NUMBER(479);
	INST_IINC(7, -1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(487);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_cancelTouchFocus_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:cancelTouchFocus", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(494);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(495);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_touchFocuses;
	frame[3].o = sp[0].o;
	LINE_NUMBER(496);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object])(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus, 1), sp[0].o));
	LINE_NUMBER(497);
	frame[5].i = (jint(0));
	frame[6].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[3].o)))->F_size);
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_6;
	}
	{
	LINE_NUMBER(498);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)));
	LINE_NUMBER(499);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[7].o)))->F_listenerActor;
	if (sp[0].o == (frame[1].o)) goto label_9;
	}
	goto label_10;
label_9:;
	{
	LINE_NUMBER(500);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_SnapshotArray_removeValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_removeValue_java_lang_Object_boolean_R_boolean])(ctx, (frame[3].o), (frame[7].o), (jint(1)));
	if (temp0 != 0) goto label_11;
	}
	goto label_10;
label_11:;
	{
	LINE_NUMBER(502);
	if ((frame[2].o) != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(503);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_scenes_scene2d_InputEvent)));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_InputEvent, sp[0].o));
	LINE_NUMBER(504);
	sp[0].o = frame[2].o;
	clinit_com_badlogic_gdx_scenes_scene2d_InputEvent$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_touchUp;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(505);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(506);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageX_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageX_float])(ctx, (frame[2].o), (jfloat(-2.147484e+09f)));
	LINE_NUMBER(507);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageY_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageY_float])(ctx, (frame[2].o), (jfloat(-2.147484e+09f)));
	}
label_12:;
	{
	LINE_NUMBER(510);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[7].o)))->F_target;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setTarget_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setTarget_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(511);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[7].o)))->F_listenerActor;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setListenerActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setListenerActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(512);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setPointer_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setPointer_int])(ctx, (frame[2].o), ((jint)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[7].o)))->F_pointer));
	LINE_NUMBER(513);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setButton_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setButton_int])(ctx, (frame[2].o), ((jint)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[7].o)))->F_button));
	LINE_NUMBER(514);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[7].o)))->F_listener;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_EventListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_EventListener, INDEX_com_badlogic_gdx_scenes_scene2d_EventListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
label_10:;
	{
	LINE_NUMBER(497);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(517);
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, (frame[3].o));
	LINE_NUMBER(519);
	if ((frame[2].o) == nullptr) goto label_23;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	}
label_23:;
	LINE_NUMBER(520);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_cancelTouchFocus(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:cancelTouchFocus", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(526);
	((func_com_badlogic_gdx_scenes_scene2d_Stage_cancelTouchFocusExcept_com_badlogic_gdx_scenes_scene2d_EventListener_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_cancelTouchFocusExcept_com_badlogic_gdx_scenes_scene2d_EventListener_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[0].o), (jobject(nullptr)), (jobject(nullptr)));
	LINE_NUMBER(527);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_cancelTouchFocusExcept_com_badlogic_gdx_scenes_scene2d_EventListener_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:cancelTouchFocusExcept", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(532);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_scenes_scene2d_InputEvent)));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_InputEvent, sp[0].o));
	LINE_NUMBER(533);
	sp[0].o = frame[3].o;
	clinit_com_badlogic_gdx_scenes_scene2d_InputEvent$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_touchUp;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(534);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[3].o), (frame[0].o));
	LINE_NUMBER(535);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageX_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageX_float])(ctx, (frame[3].o), (jfloat(-2.147484e+09f)));
	LINE_NUMBER(536);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageY_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageY_float])(ctx, (frame[3].o), (jfloat(-2.147484e+09f)));
	LINE_NUMBER(540);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_touchFocuses;
	frame[4].o = sp[0].o;
	LINE_NUMBER(541);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object])(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus, 1), sp[0].o));
	LINE_NUMBER(542);
	frame[6].i = (jint(0));
	frame[7].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[4].o)))->F_size);
	}
label_9:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_10;
	}
	{
	LINE_NUMBER(543);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(544);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[8].o)))->F_listener;
	if (sp[0].o != (frame[1].o)) goto label_13;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[8].o)))->F_listenerActor;
	if (sp[0].o != (frame[2].o)) goto label_13;
	}
	goto label_14;
label_13:;
	{
	LINE_NUMBER(545);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_SnapshotArray_removeValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_removeValue_java_lang_Object_boolean_R_boolean])(ctx, (frame[4].o), (frame[8].o), (jint(1)));
	if (temp0 != 0) goto label_15;
	}
	goto label_14;
label_15:;
	{
	LINE_NUMBER(546);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[8].o)))->F_target;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setTarget_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setTarget_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(547);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[8].o)))->F_listenerActor;
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setListenerActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setListenerActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(548);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setPointer_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setPointer_int])(ctx, (frame[3].o), ((jint)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[8].o)))->F_pointer));
	LINE_NUMBER(549);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_setButton_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setButton_int])(ctx, (frame[3].o), ((jint)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[8].o)))->F_button));
	LINE_NUMBER(550);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[8].o)))->F_listener;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_EventListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_EventListener, INDEX_com_badlogic_gdx_scenes_scene2d_EventListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	}
label_14:;
	{
	LINE_NUMBER(542);
	INST_IINC(6, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(553);
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, (frame[4].o));
	LINE_NUMBER(555);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(556);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_addActor_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:addActor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(561);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	((func_com_badlogic_gdx_scenes_scene2d_Group_addActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_addActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(562);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_addAction_com_badlogic_gdx_scenes_scene2d_Action(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:addAction", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(567);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	((func_com_badlogic_gdx_scenes_scene2d_Group_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(568);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Stage_getActors_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:getActors", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(573);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK(sp[0].o))->F_children;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Stage_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:addListener", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(579);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Group_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Stage_removeListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:removeListener", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(585);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Group_removeListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_removeListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Stage_addCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:addCaptureListener", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(591);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Group_addCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_addCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Stage_removeCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:removeCaptureListener", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(597);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Group_removeCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_removeCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_actorRemoved_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:actorRemoved", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(604);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pointerOverActors;
	frame[3].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(605);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pointerOverActors;
	if (sp[0].o != ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))) goto label_5;
	}
	{
	LINE_NUMBER(606);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pointerOverActors;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(607);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pointerScreenX;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[2].o, (frame[2].i));
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pointerScreenY;
	M_com_badlogic_gdx_scenes_scene2d_Stage_fireExit_com_badlogic_gdx_scenes_scene2d_Actor_int_int_int(ctx, sp[0].o, sp[1].o, temp0, ((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[2].i))), (frame[2].i));
	}
label_5:;
	{
	LINE_NUMBER(604);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(611);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_mouseOverActor;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(612);
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_mouseOverActor = (jref) (jobject(nullptr));
	LINE_NUMBER(613);
	M_com_badlogic_gdx_scenes_scene2d_Stage_fireExit_com_badlogic_gdx_scenes_scene2d_Actor_int_int_int(ctx, (frame[0].o), (frame[1].o), ((jint)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_mouseScreenX), ((jint)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_mouseScreenY), (jint(-1)));
	}
label_8:;
	LINE_NUMBER(615);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(619);
	((func_com_badlogic_gdx_scenes_scene2d_Stage_unfocusAll) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_unfocusAll])(ctx, (frame[0].o));
	LINE_NUMBER(620);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	((func_com_badlogic_gdx_scenes_scene2d_Group_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_clear])(ctx, sp[0].o);
	LINE_NUMBER(621);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_unfocusAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:unfocusAll", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(625);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Stage_setScrollFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_setScrollFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean])(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(626);
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Stage_setKeyboardFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_setKeyboardFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean])(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(627);
	((func_com_badlogic_gdx_scenes_scene2d_Stage_cancelTouchFocus) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_cancelTouchFocus])(ctx, (frame[0].o));
	LINE_NUMBER(628);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_unfocus_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:unfocus", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(632);
	((func_com_badlogic_gdx_scenes_scene2d_Stage_cancelTouchFocus_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_cancelTouchFocus_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(633);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_scrollFocus;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_scrollFocus;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_isDescendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_isDescendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Stage_setScrollFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_setScrollFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean])(ctx, (frame[0].o), (jobject(nullptr)));
	}
label_2:;
	{
	LINE_NUMBER(634);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_keyboardFocus;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_keyboardFocus;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_isDescendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_isDescendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Stage_setKeyboardFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_setKeyboardFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean])(ctx, (frame[0].o), (jobject(nullptr)));
	}
label_3:;
	LINE_NUMBER(635);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Stage_setKeyboardFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:setKeyboardFocus", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(641);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_keyboardFocus;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(642);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent)));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent, sp[0].o));
	LINE_NUMBER(643);
	((func_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(644);
	sp[0].o = frame[2].o;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent$Type_keyboard;
	((func_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setType_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent$Type) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setType_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent$Type])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(645);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_keyboardFocus;
	frame[3].o = sp[0].o;
	LINE_NUMBER(646);
	if ((frame[3].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(647);
	((func_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setFocused_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setFocused_boolean])(ctx, (frame[2].o), (jint(0)));
	LINE_NUMBER(648);
	((func_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setRelatedActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setRelatedActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(649);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean])(ctx, (frame[3].o), (frame[2].o));
	}
label_6:;
	{
	LINE_NUMBER(651);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_isCancelled_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_isCancelled_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(652);
	if ((frame[4].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(653);
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_keyboardFocus = (jref) (frame[1].o);
	LINE_NUMBER(654);
	if ((frame[1].o) == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(655);
	((func_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setFocused_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setFocused_boolean])(ctx, (frame[2].o), (jint(1)));
	LINE_NUMBER(656);
	((func_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setRelatedActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setRelatedActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[2].o), (frame[3].o));
	LINE_NUMBER(657);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(658);
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_isCancelled_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_isCancelled_R_boolean])(ctx, (frame[2].o));
	if (temp1 != 0) goto label_20;
	}
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(0);
label_21:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(659);
	if ((frame[4].i) != 0) goto label_13;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_keyboardFocus = (jref) (frame[3].o);
	}
label_13:;
	{
	LINE_NUMBER(662);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(663);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Stage_getKeyboardFocus_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:getKeyboardFocus", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(669);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_keyboardFocus;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Stage_setScrollFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:setScrollFocus", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(676);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_scrollFocus;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(677);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent)));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent, sp[0].o));
	LINE_NUMBER(678);
	((func_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(679);
	sp[0].o = frame[2].o;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent$Type_scroll;
	((func_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setType_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent$Type) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setType_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent$Type])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(680);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_scrollFocus;
	frame[3].o = sp[0].o;
	LINE_NUMBER(681);
	if ((frame[3].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(682);
	((func_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setFocused_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setFocused_boolean])(ctx, (frame[2].o), (jint(0)));
	LINE_NUMBER(683);
	((func_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setRelatedActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setRelatedActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(684);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean])(ctx, (frame[3].o), (frame[2].o));
	}
label_6:;
	{
	LINE_NUMBER(686);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_isCancelled_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_isCancelled_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(687);
	if ((frame[4].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(688);
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_scrollFocus = (jref) (frame[1].o);
	LINE_NUMBER(689);
	if ((frame[1].o) == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(690);
	((func_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setFocused_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setFocused_boolean])(ctx, (frame[2].o), (jint(1)));
	LINE_NUMBER(691);
	((func_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setRelatedActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_setRelatedActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[2].o), (frame[3].o));
	LINE_NUMBER(692);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(693);
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_isCancelled_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_FocusListener$FocusEvent_isCancelled_R_boolean])(ctx, (frame[2].o));
	if (temp1 != 0) goto label_20;
	}
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(0);
label_21:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(694);
	if ((frame[4].i) != 0) goto label_13;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_scrollFocus = (jref) (frame[3].o);
	}
label_13:;
	{
	LINE_NUMBER(697);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_pools;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(698);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Stage_getScrollFocus_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:getScrollFocus", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(704);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_scrollFocus;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Stage_getBatch_R_com_badlogic_gdx_graphics_g2d_Batch(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:getBatch", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(708);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_batch;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Stage_getViewport_R_com_badlogic_gdx_utils_viewport_Viewport(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:getViewport", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(712);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_viewport;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_setViewport_com_badlogic_gdx_utils_viewport_Viewport(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:setViewport", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(716);
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_viewport = (jref) (frame[1].o);
	LINE_NUMBER(717);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_Stage_getWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(721);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_viewport;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_viewport_Viewport_getWorldWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_viewport_Viewport_getWorldWidth_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_Stage_getHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(726);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_viewport;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_viewport_Viewport_getWorldHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_viewport_Viewport_getWorldHeight_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Stage_getCamera_R_com_badlogic_gdx_graphics_Camera(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:getCamera", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(731);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_viewport;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_viewport_Viewport_getCamera_R_com_badlogic_gdx_graphics_Camera) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_viewport_Viewport_getCamera_R_com_badlogic_gdx_graphics_Camera])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Stage_getRoot_R_com_badlogic_gdx_scenes_scene2d_Group(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:getRoot", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(736);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_setRoot_com_badlogic_gdx_scenes_scene2d_Group(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:setRoot", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(742);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[1].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[1].o)))->F_parent;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	}
label_1:;
	{
	LINE_NUMBER(743);
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root = (jref) (frame[1].o);
	LINE_NUMBER(744);
	((func_com_badlogic_gdx_scenes_scene2d_Group_setParent_com_badlogic_gdx_scenes_scene2d_Group) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_setParent_com_badlogic_gdx_scenes_scene2d_Group])(ctx, (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(745);
	((func_com_badlogic_gdx_scenes_scene2d_Group_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(746);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Stage_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:hit", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(754);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, (frame[1].f), (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Group_parentToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_parentToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(755);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Group_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, temp0, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_y), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Stage_screenToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:screenToStageCoordinates", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(761);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_viewport;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_viewport_Viewport_unproject_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_viewport_Viewport_unproject_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(762);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Stage_stageToScreenCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:stageToScreenCoordinates", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(768);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_viewport;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_viewport_Viewport_project_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_viewport_Viewport_project_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(769);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp0 = (jint)((func_com_badlogic_gdx_Graphics_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getHeight_R_int, sp[1].o))(ctx, sp[1].o);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y = ((jfloat(temp0)) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(770);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Stage_toScreenCoordinates_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:toScreenCoordinates", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(778);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_viewport;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_viewport_Viewport_toScreenCoordinates_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_viewport_Viewport_toScreenCoordinates_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_calculateScissors_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:calculateScissors", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(785);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugShapes;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugShapes;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_isDrawing_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_isDrawing_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(786);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugShapes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_getTransformMatrix_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_getTransformMatrix_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(788);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_batch;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_Batch_getTransformMatrix_R_com_badlogic_gdx_math_Matrix4) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_getTransformMatrix_R_com_badlogic_gdx_math_Matrix4, sp[0].o))(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(789);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_viewport;
	((func_com_badlogic_gdx_utils_viewport_Viewport_calculateScissors_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_viewport_Viewport_calculateScissors_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle])(ctx, sp[0].o, (frame[3].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(790);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_setActionsRequestRendering_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:setActionsRequestRendering", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(796);
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_actionsRequestRendering = (frame[1].i);
	LINE_NUMBER(797);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Stage_getActionsRequestRendering_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:getActionsRequestRendering", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(800);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_actionsRequestRendering);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Stage_getDebugColor_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:getDebugColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(805);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugColor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_setDebugInvisible_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:setDebugInvisible", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(810);
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugInvisible = (frame[1].i);
	LINE_NUMBER(811);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_setDebugAll_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:setDebugAll", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(815);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugAll) != (frame[1].i)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(816);
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugAll = (frame[1].i);
	LINE_NUMBER(817);
	if ((frame[1].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(818);
	clinit_com_badlogic_gdx_scenes_scene2d_Stage(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_Stage_debug = (jint(1));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(820);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	((func_com_badlogic_gdx_scenes_scene2d_Group_setDebug_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_setDebug_boolean_boolean])(ctx, sp[0].o, (jint(0)), (jint(1)));
	}
label_5:;
	LINE_NUMBER(821);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Stage_isDebugAll_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:isDebugAll", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(824);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugAll);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_setDebugUnderMouse_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:setDebugUnderMouse", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(829);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugUnderMouse) != (frame[1].i)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(830);
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugUnderMouse = (frame[1].i);
	LINE_NUMBER(831);
	if ((frame[1].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(832);
	clinit_com_badlogic_gdx_scenes_scene2d_Stage(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_Stage_debug = (jint(1));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(834);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	((func_com_badlogic_gdx_scenes_scene2d_Group_setDebug_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_setDebug_boolean_boolean])(ctx, sp[0].o, (jint(0)), (jint(1)));
	}
label_5:;
	LINE_NUMBER(835);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_setDebugParentUnderMouse_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:setDebugParentUnderMouse", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(840);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugParentUnderMouse) != (frame[1].i)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(841);
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugParentUnderMouse = (frame[1].i);
	LINE_NUMBER(842);
	if ((frame[1].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(843);
	clinit_com_badlogic_gdx_scenes_scene2d_Stage(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_Stage_debug = (jint(1));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(845);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	((func_com_badlogic_gdx_scenes_scene2d_Group_setDebug_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_setDebug_boolean_boolean])(ctx, sp[0].o, (jint(0)), (jint(1)));
	}
label_5:;
	LINE_NUMBER(846);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_setDebugTableUnderMouse_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:setDebugTableUnderMouse", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(852);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	(sp++)->o = SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_none;
	INST_ASTORE(1);
label_1:;
	{
	LINE_NUMBER(853);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugTableUnderMouse;
	if (sp[0].o != (frame[1].o)) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(854);
	((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugTableUnderMouse = (jref) (frame[1].o);
	LINE_NUMBER(855);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_none;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(856);
	clinit_com_badlogic_gdx_scenes_scene2d_Stage(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_Stage_debug = (jint(1));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(858);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_root;
	((func_com_badlogic_gdx_scenes_scene2d_Group_setDebug_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_setDebug_boolean_boolean])(ctx, sp[0].o, (jint(0)), (jint(1)));
	}
label_6:;
	LINE_NUMBER(859);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_setDebugTableUnderMouse_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:setDebugTableUnderMouse", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(864);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_1;
	}
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	(sp++)->o = SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_all;
	goto label_2;
label_1:;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	(sp++)->o = SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_none;
label_2:;
	{
	sp -= 2;
	((func_com_badlogic_gdx_scenes_scene2d_Stage_setDebugTableUnderMouse_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_setDebugTableUnderMouse_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(865);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(868);
	((func_com_badlogic_gdx_scenes_scene2d_Stage_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_clear])(ctx, (frame[0].o));
	LINE_NUMBER(869);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_ownsBatch) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_batch;
	((func_com_badlogic_gdx_utils_Disposable_dispose) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_Disposable, INDEX_com_badlogic_gdx_utils_Disposable_dispose, sp[0].o))(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(870);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugShapes;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_debugShapes;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_dispose])(ctx, sp[0].o);
	}
label_3:;
	LINE_NUMBER(871);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Stage_isInsideViewport_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:isInsideViewport", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(875);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_viewport;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_viewport_Viewport_getScreenX_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_viewport_Viewport_getScreenX_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(876);
	jint temp1 = frame[3].i;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_viewport;
	jint temp2 = (jint)((func_com_badlogic_gdx_utils_viewport_Viewport_getScreenWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_viewport_Viewport_getScreenWidth_R_int])(ctx, sp[0].o);
	frame[4].i = (temp1 + temp2);
	LINE_NUMBER(877);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_viewport;
	jint temp3 = (jint)((func_com_badlogic_gdx_utils_viewport_Viewport_getScreenY_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_viewport_Viewport_getScreenY_R_int])(ctx, sp[0].o);
	frame[5].i = temp3;
	LINE_NUMBER(878);
	jint temp4 = frame[5].i;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Stage *) NULL_CHECK((frame[0].o)))->F_viewport;
	jint temp5 = (jint)((func_com_badlogic_gdx_utils_viewport_Viewport_getScreenHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_viewport_Viewport_getScreenHeight_R_int])(ctx, sp[0].o);
	frame[6].i = (temp4 + temp5);
	LINE_NUMBER(879);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp6 = (jint)((func_com_badlogic_gdx_Graphics_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getHeight_R_int, sp[0].o))(ctx, sp[0].o);
	frame[2].i = ((temp6 - (jint(1))) - (frame[2].i));
	LINE_NUMBER(880);
	if ((frame[1].i) < (frame[3].i)) goto label_6;
	}
	{
	if ((frame[1].i) >= (frame[4].i)) goto label_6;
	}
	{
	if ((frame[2].i) < (frame[5].i)) goto label_6;
	}
	{
	if ((frame[2].i) >= (frame[6].i)) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_scenes_scene2d_Stage_lambda$new$0_int_R_Array1_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage:lambda$new$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_Stage(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_Stage[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_keyDown_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_keyUp_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_keyTyped_char_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_touchDown_int_int_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_touchUp_int_int_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_touchCancelled_int_int_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_touchDragged_int_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_mouseMoved_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_scrolled_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_dispose,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_draw,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_drawDebug,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_disableDebug_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_act,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_act_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_fireEnterAndExit_com_badlogic_gdx_scenes_scene2d_Actor_int_int_int_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_fireExit_com_badlogic_gdx_scenes_scene2d_Actor_int_int_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_addTouchFocus_com_badlogic_gdx_scenes_scene2d_EventListener_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_int_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_removeTouchFocus_com_badlogic_gdx_scenes_scene2d_EventListener_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_int_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_cancelTouchFocus_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_cancelTouchFocus,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_cancelTouchFocusExcept_com_badlogic_gdx_scenes_scene2d_EventListener_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_addActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_addAction_com_badlogic_gdx_scenes_scene2d_Action,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_getActors_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_removeListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_addCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_removeCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_actorRemoved_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_clear,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_unfocusAll,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_unfocus_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_setKeyboardFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_getKeyboardFocus_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_setScrollFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_getScrollFocus_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_getBatch_R_com_badlogic_gdx_graphics_g2d_Batch,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_getViewport_R_com_badlogic_gdx_utils_viewport_Viewport,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_setViewport_com_badlogic_gdx_utils_viewport_Viewport,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_getWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_getHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_getCamera_R_com_badlogic_gdx_graphics_Camera,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_getRoot_R_com_badlogic_gdx_scenes_scene2d_Group,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_setRoot_com_badlogic_gdx_scenes_scene2d_Group,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_screenToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_stageToScreenCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_toScreenCoordinates_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_calculateScissors_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_setActionsRequestRendering_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_getActionsRequestRendering_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_getDebugColor_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_setDebugInvisible_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_setDebugAll_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_isDebugAll_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_setDebugUnderMouse_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_setDebugParentUnderMouse_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_setDebugTableUnderMouse_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_setDebugTableUnderMouse_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage_isInsideViewport_int_int_R_boolean,
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
	{ "dispose", "()V" },
	{ "draw", "()V" },
	{ "drawDebug", "()V" },
	{ "disableDebug", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "act", "()V" },
	{ "act", "(F)V" },
	{ "fireEnterAndExit", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;III)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "fireExit", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;III)V" },
	{ "addTouchFocus", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;II)V" },
	{ "removeTouchFocus", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;II)V" },
	{ "cancelTouchFocus", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "cancelTouchFocus", "()V" },
	{ "cancelTouchFocusExcept", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "addActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "addAction", "(Lcom/badlogic/gdx/scenes/scene2d/Action;)V" },
	{ "getActors", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "addListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "removeListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "addCaptureListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "removeCaptureListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "actorRemoved", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "clear", "()V" },
	{ "unfocusAll", "()V" },
	{ "unfocus", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "setKeyboardFocus", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z" },
	{ "getKeyboardFocus", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "setScrollFocus", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z" },
	{ "getScrollFocus", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "getBatch", "()Lcom/badlogic/gdx/graphics/g2d/Batch;" },
	{ "getViewport", "()Lcom/badlogic/gdx/utils/viewport/Viewport;" },
	{ "setViewport", "(Lcom/badlogic/gdx/utils/viewport/Viewport;)V" },
	{ "getWidth", "()F" },
	{ "getHeight", "()F" },
	{ "getCamera", "()Lcom/badlogic/gdx/graphics/Camera;" },
	{ "getRoot", "()Lcom/badlogic/gdx/scenes/scene2d/Group;" },
	{ "setRoot", "(Lcom/badlogic/gdx/scenes/scene2d/Group;)V" },
	{ "hit", "(FFZ)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "screenToStageCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "stageToScreenCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "toScreenCoordinates", "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "calculateScissors", "(Lcom/badlogic/gdx/math/Rectangle;Lcom/badlogic/gdx/math/Rectangle;)V" },
	{ "setActionsRequestRendering", "(Z)V" },
	{ "getActionsRequestRendering", "()Z" },
	{ "getDebugColor", "()Lcom/badlogic/gdx/graphics/Color;" },
	{ "setDebugInvisible", "(Z)V" },
	{ "setDebugAll", "(Z)V" },
	{ "isDebugAll", "()Z" },
	{ "setDebugUnderMouse", "(Z)V" },
	{ "setDebugParentUnderMouse", "(Z)V" },
	{ "setDebugTableUnderMouse", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Table$Debug;)V" },
	{ "setDebugTableUnderMouse", "(Z)V" },
	{ "isInsideViewport", "(II)Z" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus,
};

static FieldMetadata fields[] {
	{ "debug", &class_boolean, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_Stage_debug, "Z", 8 },
	{ "pools", &class_com_badlogic_gdx_utils_PoolManager, offsetof(com_badlogic_gdx_scenes_scene2d_Stage, F_pools), "Lcom/badlogic/gdx/utils/PoolManager;", 4 },
	{ "viewport", &class_com_badlogic_gdx_utils_viewport_Viewport, offsetof(com_badlogic_gdx_scenes_scene2d_Stage, F_viewport), "Lcom/badlogic/gdx/utils/viewport/Viewport;", 2 },
	{ "batch", &class_com_badlogic_gdx_graphics_g2d_Batch, offsetof(com_badlogic_gdx_scenes_scene2d_Stage, F_batch), "Lcom/badlogic/gdx/graphics/g2d/Batch;", 18 },
	{ "ownsBatch", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_Stage, F_ownsBatch), "Z", 2 },
	{ "root", &class_com_badlogic_gdx_scenes_scene2d_Group, offsetof(com_badlogic_gdx_scenes_scene2d_Stage, F_root), "Lcom/badlogic/gdx/scenes/scene2d/Group;", 2 },
	{ "tempCoords", &class_com_badlogic_gdx_math_Vector2, offsetof(com_badlogic_gdx_scenes_scene2d_Stage, F_tempCoords), "Lcom/badlogic/gdx/math/Vector2;", 18 },
	{ "pointerOverActors", getArrayClass(&class_com_badlogic_gdx_scenes_scene2d_Actor, 1), offsetof(com_badlogic_gdx_scenes_scene2d_Stage, F_pointerOverActors), "[Lcom/badlogic/gdx/scenes/scene2d/Actor;", 18 },
	{ "pointerTouched", getArrayClass(&class_boolean, 1), offsetof(com_badlogic_gdx_scenes_scene2d_Stage, F_pointerTouched), "[Z", 18 },
	{ "pointerScreenX", getArrayClass(&class_int, 1), offsetof(com_badlogic_gdx_scenes_scene2d_Stage, F_pointerScreenX), "[I", 18 },
	{ "pointerScreenY", getArrayClass(&class_int, 1), offsetof(com_badlogic_gdx_scenes_scene2d_Stage, F_pointerScreenY), "[I", 18 },
	{ "mouseScreenX", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_Stage, F_mouseScreenX), "I", 2 },
	{ "mouseScreenY", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_Stage, F_mouseScreenY), "I", 2 },
	{ "mouseOverActor", &class_com_badlogic_gdx_scenes_scene2d_Actor, offsetof(com_badlogic_gdx_scenes_scene2d_Stage, F_mouseOverActor), "Lcom/badlogic/gdx/scenes/scene2d/Actor;", 2 },
	{ "keyboardFocus", &class_com_badlogic_gdx_scenes_scene2d_Actor, offsetof(com_badlogic_gdx_scenes_scene2d_Stage, F_keyboardFocus), "Lcom/badlogic/gdx/scenes/scene2d/Actor;", 2 },
	{ "scrollFocus", &class_com_badlogic_gdx_scenes_scene2d_Actor, offsetof(com_badlogic_gdx_scenes_scene2d_Stage, F_scrollFocus), "Lcom/badlogic/gdx/scenes/scene2d/Actor;", 2 },
	{ "touchFocuses", &class_com_badlogic_gdx_utils_SnapshotArray, offsetof(com_badlogic_gdx_scenes_scene2d_Stage, F_touchFocuses), "Lcom/badlogic/gdx/utils/SnapshotArray;", 16 },
	{ "actionsRequestRendering", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_Stage, F_actionsRequestRendering), "Z", 2 },
	{ "debugShapes", &class_com_badlogic_gdx_graphics_glutils_ShapeRenderer, offsetof(com_badlogic_gdx_scenes_scene2d_Stage, F_debugShapes), "Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;", 2 },
	{ "debugInvisible", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_Stage, F_debugInvisible), "Z", 2 },
	{ "debugAll", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_Stage, F_debugAll), "Z", 2 },
	{ "debugUnderMouse", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_Stage, F_debugUnderMouse), "Z", 2 },
	{ "debugParentUnderMouse", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_Stage, F_debugParentUnderMouse), "Z", 2 },
	{ "debugTableUnderMouse", &class_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug, offsetof(com_badlogic_gdx_scenes_scene2d_Stage, F_debugTableUnderMouse), "Lcom/badlogic/gdx/scenes/scene2d/ui/Table$Debug;", 2 },
	{ "debugColor", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_scenes_scene2d_Stage, F_debugColor), "Lcom/badlogic/gdx/graphics/Color;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_Stage, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_Stage_com_badlogic_gdx_utils_viewport_Viewport, 0, "(Lcom/badlogic/gdx/utils/viewport/Viewport;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_Stage_com_badlogic_gdx_utils_viewport_Viewport_com_badlogic_gdx_graphics_g2d_Batch, 0, "(Lcom/badlogic/gdx/utils/viewport/Viewport;Lcom/badlogic/gdx/graphics/g2d/Batch;)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_draw, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_draw, "()V", 1 },
	{ "drawDebug", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_drawDebug, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_drawDebug, "()V", 2 },
	{ "disableDebug", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_disableDebug_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_disableDebug_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 2 },
	{ "act", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_act, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_act, "()V", 1 },
	{ "act", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_act_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_act_float, "(F)V", 1 },
	{ "fireEnterAndExit", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_fireEnterAndExit_com_badlogic_gdx_scenes_scene2d_Actor_int_int_int_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_fireEnterAndExit_com_badlogic_gdx_scenes_scene2d_Actor_int_int_int_R_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;III)Lcom/badlogic/gdx/scenes/scene2d/Actor;", 2 },
	{ "fireExit", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_fireExit_com_badlogic_gdx_scenes_scene2d_Actor_int_int_int, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_fireExit_com_badlogic_gdx_scenes_scene2d_Actor_int_int_int, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;III)V", 2 },
	{ "touchDown", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_touchDown_int_int_int_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_touchDown_int_int_int_int_R_boolean, "(IIII)Z", 1 },
	{ "touchDragged", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_touchDragged_int_int_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_touchDragged_int_int_int_R_boolean, "(III)Z", 1 },
	{ "touchUp", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_touchUp_int_int_int_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_touchUp_int_int_int_int_R_boolean, "(IIII)Z", 1 },
	{ "touchCancelled", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_touchCancelled_int_int_int_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_touchCancelled_int_int_int_int_R_boolean, "(IIII)Z", 1 },
	{ "mouseMoved", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_mouseMoved_int_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_mouseMoved_int_int_R_boolean, "(II)Z", 1 },
	{ "scrolled", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_scrolled_float_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_scrolled_float_float_R_boolean, "(FF)Z", 1 },
	{ "keyDown", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_keyDown_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_keyDown_int_R_boolean, "(I)Z", 1 },
	{ "keyUp", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_keyUp_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_keyUp_int_R_boolean, "(I)Z", 1 },
	{ "keyTyped", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_keyTyped_char_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_keyTyped_char_R_boolean, "(C)Z", 1 },
	{ "addTouchFocus", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_addTouchFocus_com_badlogic_gdx_scenes_scene2d_EventListener_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_int_int, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_addTouchFocus_com_badlogic_gdx_scenes_scene2d_EventListener_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_int_int, "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;II)V", 1 },
	{ "removeTouchFocus", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_removeTouchFocus_com_badlogic_gdx_scenes_scene2d_EventListener_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_int_int, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_removeTouchFocus_com_badlogic_gdx_scenes_scene2d_EventListener_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_int_int, "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;II)V", 1 },
	{ "cancelTouchFocus", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_cancelTouchFocus_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_cancelTouchFocus_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "cancelTouchFocus", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_cancelTouchFocus, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_cancelTouchFocus, "()V", 1 },
	{ "cancelTouchFocusExcept", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_cancelTouchFocusExcept_com_badlogic_gdx_scenes_scene2d_EventListener_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_cancelTouchFocusExcept_com_badlogic_gdx_scenes_scene2d_EventListener_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "addActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_addActor_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_addActor_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "addAction", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_addAction_com_badlogic_gdx_scenes_scene2d_Action, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_addAction_com_badlogic_gdx_scenes_scene2d_Action, "(Lcom/badlogic/gdx/scenes/scene2d/Action;)V", 1 },
	{ "getActors", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_getActors_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getActors_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "addListener", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z", 1 },
	{ "removeListener", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_removeListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_removeListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z", 1 },
	{ "addCaptureListener", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_addCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_addCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z", 1 },
	{ "removeCaptureListener", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_removeCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_removeCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z", 1 },
	{ "actorRemoved", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_actorRemoved_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_actorRemoved_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 4 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_clear, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_clear, "()V", 1 },
	{ "unfocusAll", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_unfocusAll, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_unfocusAll, "()V", 1 },
	{ "unfocus", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_unfocus_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_unfocus_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "setKeyboardFocus", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_setKeyboardFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_setKeyboardFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z", 1 },
	{ "getKeyboardFocus", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_getKeyboardFocus_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getKeyboardFocus_R_com_badlogic_gdx_scenes_scene2d_Actor, "()Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "setScrollFocus", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_setScrollFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_setScrollFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z", 1 },
	{ "getScrollFocus", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_getScrollFocus_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getScrollFocus_R_com_badlogic_gdx_scenes_scene2d_Actor, "()Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "getBatch", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_getBatch_R_com_badlogic_gdx_graphics_g2d_Batch, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getBatch_R_com_badlogic_gdx_graphics_g2d_Batch, "()Lcom/badlogic/gdx/graphics/g2d/Batch;", 1 },
	{ "getViewport", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_getViewport_R_com_badlogic_gdx_utils_viewport_Viewport, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getViewport_R_com_badlogic_gdx_utils_viewport_Viewport, "()Lcom/badlogic/gdx/utils/viewport/Viewport;", 1 },
	{ "setViewport", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_setViewport_com_badlogic_gdx_utils_viewport_Viewport, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_setViewport_com_badlogic_gdx_utils_viewport_Viewport, "(Lcom/badlogic/gdx/utils/viewport/Viewport;)V", 1 },
	{ "getWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_getWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getWidth_R_float, "()F", 1 },
	{ "getHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_getHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getHeight_R_float, "()F", 1 },
	{ "getCamera", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_getCamera_R_com_badlogic_gdx_graphics_Camera, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getCamera_R_com_badlogic_gdx_graphics_Camera, "()Lcom/badlogic/gdx/graphics/Camera;", 1 },
	{ "getRoot", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_getRoot_R_com_badlogic_gdx_scenes_scene2d_Group, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getRoot_R_com_badlogic_gdx_scenes_scene2d_Group, "()Lcom/badlogic/gdx/scenes/scene2d/Group;", 1 },
	{ "setRoot", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_setRoot_com_badlogic_gdx_scenes_scene2d_Group, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_setRoot_com_badlogic_gdx_scenes_scene2d_Group, "(Lcom/badlogic/gdx/scenes/scene2d/Group;)V", 1 },
	{ "hit", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, "(FFZ)Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "screenToStageCoordinates", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_screenToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_screenToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "stageToScreenCoordinates", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_stageToScreenCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_stageToScreenCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "toScreenCoordinates", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_toScreenCoordinates_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_toScreenCoordinates_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "calculateScissors", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_calculateScissors_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_calculateScissors_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle, "(Lcom/badlogic/gdx/math/Rectangle;Lcom/badlogic/gdx/math/Rectangle;)V", 1 },
	{ "setActionsRequestRendering", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_setActionsRequestRendering_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_setActionsRequestRendering_boolean, "(Z)V", 1 },
	{ "getActionsRequestRendering", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_getActionsRequestRendering_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getActionsRequestRendering_R_boolean, "()Z", 1 },
	{ "getDebugColor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_getDebugColor_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getDebugColor_R_com_badlogic_gdx_graphics_Color, "()Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "setDebugInvisible", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_setDebugInvisible_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_setDebugInvisible_boolean, "(Z)V", 1 },
	{ "setDebugAll", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_setDebugAll_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_setDebugAll_boolean, "(Z)V", 1 },
	{ "isDebugAll", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_isDebugAll_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_isDebugAll_R_boolean, "()Z", 1 },
	{ "setDebugUnderMouse", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_setDebugUnderMouse_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_setDebugUnderMouse_boolean, "(Z)V", 1 },
	{ "setDebugParentUnderMouse", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_setDebugParentUnderMouse_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_setDebugParentUnderMouse_boolean, "(Z)V", 1 },
	{ "setDebugTableUnderMouse", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_setDebugTableUnderMouse_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_setDebugTableUnderMouse_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Table$Debug;)V", 1 },
	{ "setDebugTableUnderMouse", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_setDebugTableUnderMouse_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_setDebugTableUnderMouse_boolean, "(Z)V", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_dispose, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_dispose, "()V", 1 },
	{ "isInsideViewport", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage_isInsideViewport_int_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_isInsideViewport_int_int_R_boolean, "(II)Z", 4 },
	{ "lambda$new$0", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_Stage_lambda$new$0_int_R_Array1_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus, 0, "(I)[Lcom/badlogic/gdx/scenes/scene2d/Stage$TouchFocus;", 4106 },
};

Class class_com_badlogic_gdx_scenes_scene2d_Stage{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/Stage",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_InputAdapter,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_Stage),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_Stage,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_Stage,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_Stage,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 25,
		.nativeFields = (intptr_t) fields,
		.methodCount = 65,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 72,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_Stage = registerClass(&class_com_badlogic_gdx_scenes_scene2d_Stage);

}

