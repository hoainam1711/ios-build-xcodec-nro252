#include "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener_2.h"
#include "java/lang/NoSuchFieldError.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener_2.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/InputEvent_Type.h"
#include "java/lang/Enum.h"

extern "C" {

jobject SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2_$SwitchMap$com$badlogic$gdx$scenes$scene2d$InputEvent$Type;

void mark_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2_$SwitchMap$com$badlogic$gdx$scenes$scene2d$InputEvent$Type)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2_$SwitchMap$com$badlogic$gdx$scenes$scene2d$InputEvent$Type)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2_$SwitchMap$com$badlogic$gdx$scenes$scene2d$InputEvent$Type, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2 *) object;
}

void clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener$2:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2(ctx);
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_values_R_Array1_com_badlogic_gdx_scenes_scene2d_InputEvent$Type(ctx);
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2_$SwitchMap$com$badlogic$gdx$scenes$scene2d$InputEvent$Type = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2_$SwitchMap$com$badlogic$gdx$scenes$scene2d$InputEvent$Type;
	clinit_com_badlogic_gdx_scenes_scene2d_InputEvent$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_touchDown;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(1));
	}
	popExceptionFrame(frameRef);
	goto label_4;
label_2:;
	INST_ASTORE(0);
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2_$SwitchMap$com$badlogic$gdx$scenes$scene2d$InputEvent$Type;
	clinit_com_badlogic_gdx_scenes_scene2d_InputEvent$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_touchUp;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(2));
	}
	popExceptionFrame(frameRef);
	goto label_8;
label_6:;
	INST_ASTORE(0);
label_8:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2_$SwitchMap$com$badlogic$gdx$scenes$scene2d$InputEvent$Type;
	clinit_com_badlogic_gdx_scenes_scene2d_InputEvent$Type(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_touchDragged;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(3));
	}
	popExceptionFrame(frameRef);
	goto label_13;
label_10:;
	INST_ASTORE(0);
label_13:;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2[] {
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
};

static FieldMetadata fields[] {
	{ "$SwitchMap$com$badlogic$gdx$scenes$scene2d$InputEvent$Type", getArrayClass(&class_int, 1), (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2_$SwitchMap$com$badlogic$gdx$scenes$scene2d$InputEvent$Type, "[I", 4120 },
};

static MethodMetadata methods[] {
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener$2",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 4128,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = true,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2 = registerClass(&class_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2);

}

