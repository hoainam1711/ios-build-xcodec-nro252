#include "com/badlogic/gdx/graphics/g3d/Environment.h"
#include "com/badlogic/gdx/graphics/g3d/Attribute.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/graphics/g3d/attributes/PointLightsAttribute.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/graphics/g3d/environment/SpotLight.h"
#include "com/badlogic/gdx/graphics/g3d/environment/PointLight.h"
#include "com/badlogic/gdx/graphics/g3d/attributes/SpotLightsAttribute.h"
#include "java/lang/Iterable.h"
#include "com/badlogic/gdx/graphics/g3d/attributes/DirectionalLightsAttribute.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g3d/environment/DirectionalLight.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g3d/environment/ShadowMap.h"
#include "com/badlogic/gdx/graphics/g3d/Attributes.h"
#include "com/badlogic/gdx/graphics/g3d/Environment.h"
#include "java/util/Comparator.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"
#include "com/badlogic/gdx/graphics/g3d/environment/BaseLight.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_Environment(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_graphics_g3d_Attributes(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g3d_Environment *) object;
	if (self->F_shadowMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shadowMap)->clazz)->markFunction)((jobject) self->F_shadowMap, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_Environment(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g3d_Attributes(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_Environment(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Environment:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_Environment(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(35);
	init_com_badlogic_gdx_graphics_g3d_Attributes(ctx, (frame[0].o));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Environment_add_Array1_com_badlogic_gdx_graphics_g3d_environment_BaseLight_R_com_badlogic_gdx_graphics_g3d_Environment(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Environment:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(39);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(40);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_BaseLight_R_com_badlogic_gdx_graphics_g3d_Environment) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_BaseLight_R_com_badlogic_gdx_graphics_g3d_Environment])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(39);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_graphics_g3d_Environment(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Environment:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_environment_BaseLight, sp[0].o));
	LINE_NUMBER(46);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_BaseLight_R_com_badlogic_gdx_graphics_g3d_Environment) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_BaseLight_R_com_badlogic_gdx_graphics_g3d_Environment])(ctx, (frame[0].o), (frame[3].o));
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_BaseLight_R_com_badlogic_gdx_graphics_g3d_Environment(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Environment:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(51);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_graphics_g3d_environment_DirectionalLight)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_DirectionalLight_R_com_badlogic_gdx_graphics_g3d_Environment) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_DirectionalLight_R_com_badlogic_gdx_graphics_g3d_Environment])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_environment_DirectionalLight, (frame[1].o))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(53);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_graphics_g3d_environment_PointLight)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_PointLight_R_com_badlogic_gdx_graphics_g3d_Environment) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_PointLight_R_com_badlogic_gdx_graphics_g3d_Environment])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_environment_PointLight, (frame[1].o))));
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(55);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_graphics_g3d_environment_SpotLight)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_SpotLight_R_com_badlogic_gdx_graphics_g3d_Environment) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_SpotLight_R_com_badlogic_gdx_graphics_g3d_Environment])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_environment_SpotLight, (frame[1].o))));
	goto label_3;
	}
label_6:;
	{
	LINE_NUMBER(58);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unknown light type"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_DirectionalLight_R_com_badlogic_gdx_graphics_g3d_Environment(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Environment:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Environment_get_long_R_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Environment_get_long_R_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, (frame[0].o), (clinit_com_badlogic_gdx_graphics_g3d_attributes_DirectionalLightsAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_DirectionalLightsAttribute_Type));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_DirectionalLightsAttribute, sp[0].o));
	LINE_NUMBER(64);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g3d_attributes_DirectionalLightsAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_DirectionalLightsAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_DirectionalLightsAttribute(ctx, sp[1].o);
	frame[2].o = sp[1].o;
	((func_com_badlogic_gdx_graphics_g3d_Environment_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Environment_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_attributes_DirectionalLightsAttribute *) NULL_CHECK((frame[2].o)))->F_lights;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_PointLight_R_com_badlogic_gdx_graphics_g3d_Environment(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Environment:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Environment_get_long_R_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Environment_get_long_R_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, (frame[0].o), (clinit_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_Type));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute, sp[0].o));
	LINE_NUMBER(71);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute(ctx, sp[1].o);
	frame[2].o = sp[1].o;
	((func_com_badlogic_gdx_graphics_g3d_Environment_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Environment_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute *) NULL_CHECK((frame[2].o)))->F_lights;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_SpotLight_R_com_badlogic_gdx_graphics_g3d_Environment(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Environment:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Environment_get_long_R_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Environment_get_long_R_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, (frame[0].o), (clinit_com_badlogic_gdx_graphics_g3d_attributes_SpotLightsAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_SpotLightsAttribute_Type));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_SpotLightsAttribute, sp[0].o));
	LINE_NUMBER(78);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g3d_attributes_SpotLightsAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_SpotLightsAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_SpotLightsAttribute(ctx, sp[1].o);
	frame[2].o = sp[1].o;
	((func_com_badlogic_gdx_graphics_g3d_Environment_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Environment_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_attributes_SpotLightsAttribute *) NULL_CHECK((frame[2].o)))->F_lights;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Environment_remove_Array1_com_badlogic_gdx_graphics_g3d_environment_BaseLight_R_com_badlogic_gdx_graphics_g3d_Environment(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Environment:remove", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(85);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_BaseLight_R_com_badlogic_gdx_graphics_g3d_Environment) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_BaseLight_R_com_badlogic_gdx_graphics_g3d_Environment])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(84);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_graphics_g3d_Environment(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Environment:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_environment_BaseLight, sp[0].o));
	LINE_NUMBER(91);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_BaseLight_R_com_badlogic_gdx_graphics_g3d_Environment) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_BaseLight_R_com_badlogic_gdx_graphics_g3d_Environment])(ctx, (frame[0].o), (frame[3].o));
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_BaseLight_R_com_badlogic_gdx_graphics_g3d_Environment(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Environment:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(96);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_graphics_g3d_environment_DirectionalLight)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_DirectionalLight_R_com_badlogic_gdx_graphics_g3d_Environment) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_DirectionalLight_R_com_badlogic_gdx_graphics_g3d_Environment])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_environment_DirectionalLight, (frame[1].o))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(98);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_graphics_g3d_environment_PointLight)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_PointLight_R_com_badlogic_gdx_graphics_g3d_Environment) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_PointLight_R_com_badlogic_gdx_graphics_g3d_Environment])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_environment_PointLight, (frame[1].o))));
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(100);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_graphics_g3d_environment_SpotLight)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_SpotLight_R_com_badlogic_gdx_graphics_g3d_Environment) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_SpotLight_R_com_badlogic_gdx_graphics_g3d_Environment])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_environment_SpotLight, (frame[1].o))));
	goto label_3;
	}
label_6:;
	{
	LINE_NUMBER(103);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unknown light type"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_DirectionalLight_R_com_badlogic_gdx_graphics_g3d_Environment(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Environment:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(108);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_Environment_has_long_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Environment_has_long_R_boolean])(ctx, (frame[0].o), (clinit_com_badlogic_gdx_graphics_g3d_attributes_DirectionalLightsAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_DirectionalLightsAttribute_Type));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Environment_get_long_R_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Environment_get_long_R_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, (frame[0].o), (clinit_com_badlogic_gdx_graphics_g3d_attributes_DirectionalLightsAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_DirectionalLightsAttribute_Type));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_DirectionalLightsAttribute, sp[0].o));
	LINE_NUMBER(110);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_attributes_DirectionalLightsAttribute *) NULL_CHECK((frame[2].o)))->F_lights;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	LINE_NUMBER(111);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_attributes_DirectionalLightsAttribute *) NULL_CHECK((frame[2].o)))->F_lights;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	{
	((func_com_badlogic_gdx_graphics_g3d_Environment_remove_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Environment_remove_long])(ctx, (frame[0].o), (clinit_com_badlogic_gdx_graphics_g3d_attributes_DirectionalLightsAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_DirectionalLightsAttribute_Type));
	}
label_1:;
	{
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_PointLight_R_com_badlogic_gdx_graphics_g3d_Environment(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Environment:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(117);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_Environment_has_long_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Environment_has_long_R_boolean])(ctx, (frame[0].o), (clinit_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_Type));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Environment_get_long_R_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Environment_get_long_R_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, (frame[0].o), (clinit_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_Type));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute, sp[0].o));
	LINE_NUMBER(119);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute *) NULL_CHECK((frame[2].o)))->F_lights;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	LINE_NUMBER(120);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute *) NULL_CHECK((frame[2].o)))->F_lights;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	{
	((func_com_badlogic_gdx_graphics_g3d_Environment_remove_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Environment_remove_long])(ctx, (frame[0].o), (clinit_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_PointLightsAttribute_Type));
	}
label_1:;
	{
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_SpotLight_R_com_badlogic_gdx_graphics_g3d_Environment(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Environment:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(126);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_Environment_has_long_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Environment_has_long_R_boolean])(ctx, (frame[0].o), (clinit_com_badlogic_gdx_graphics_g3d_attributes_SpotLightsAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_SpotLightsAttribute_Type));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Environment_get_long_R_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Environment_get_long_R_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, (frame[0].o), (clinit_com_badlogic_gdx_graphics_g3d_attributes_SpotLightsAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_SpotLightsAttribute_Type));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_SpotLightsAttribute, sp[0].o));
	LINE_NUMBER(128);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_attributes_SpotLightsAttribute *) NULL_CHECK((frame[2].o)))->F_lights;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	LINE_NUMBER(129);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_attributes_SpotLightsAttribute *) NULL_CHECK((frame[2].o)))->F_lights;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	{
	((func_com_badlogic_gdx_graphics_g3d_Environment_remove_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Environment_remove_long])(ctx, (frame[0].o), (clinit_com_badlogic_gdx_graphics_g3d_attributes_SpotLightsAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_SpotLightsAttribute_Type));
	}
label_1:;
	{
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_Environment[] {
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_hashCode_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_compare_java_lang_Object_java_lang_Object_R_int,
	(void *) M_java_util_Comparator_reversed_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_Comparator_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_function_Function_java_util_Comparator_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_function_Function_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingInt_java_util_function_ToIntFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingLong_java_util_function_ToLongFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingDouble_java_util_function_ToDoubleFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_lambda$thenComparing$0_java_util_Comparator_java_lang_Object_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_compareTo_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_sort,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_getMask_R_long,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_get_long_R_com_badlogic_gdx_graphics_g3d_Attribute,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_get_java_lang_Class_long_R_com_badlogic_gdx_graphics_g3d_Attribute,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_get_com_badlogic_gdx_utils_Array_long_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_clear,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_size_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_enable_long,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_disable_long,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_set_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_set_Array1_com_badlogic_gdx_graphics_g3d_Attribute,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_set_java_lang_Iterable,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_remove_long,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_has_long_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_indexOf_long_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_same_com_badlogic_gdx_graphics_g3d_Attributes_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_same_com_badlogic_gdx_graphics_g3d_Attributes_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_compare_com_badlogic_gdx_graphics_g3d_Attribute_com_badlogic_gdx_graphics_g3d_Attribute_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_attributesHash_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attributes_compareTo_com_badlogic_gdx_graphics_g3d_Attributes_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_Environment_add_Array1_com_badlogic_gdx_graphics_g3d_environment_BaseLight_R_com_badlogic_gdx_graphics_g3d_Environment,
	(void *) M_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_graphics_g3d_Environment,
	(void *) M_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_BaseLight_R_com_badlogic_gdx_graphics_g3d_Environment,
	(void *) M_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_DirectionalLight_R_com_badlogic_gdx_graphics_g3d_Environment,
	(void *) M_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_PointLight_R_com_badlogic_gdx_graphics_g3d_Environment,
	(void *) M_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_SpotLight_R_com_badlogic_gdx_graphics_g3d_Environment,
	(void *) M_com_badlogic_gdx_graphics_g3d_Environment_remove_Array1_com_badlogic_gdx_graphics_g3d_environment_BaseLight_R_com_badlogic_gdx_graphics_g3d_Environment,
	(void *) M_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_graphics_g3d_Environment,
	(void *) M_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_BaseLight_R_com_badlogic_gdx_graphics_g3d_Environment,
	(void *) M_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_DirectionalLight_R_com_badlogic_gdx_graphics_g3d_Environment,
	(void *) M_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_PointLight_R_com_badlogic_gdx_graphics_g3d_Environment,
	(void *) M_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_SpotLight_R_com_badlogic_gdx_graphics_g3d_Environment,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "compare", "(Ljava/lang/Object;Ljava/lang/Object;)I" },
	{ "reversed", "()Ljava/util/Comparator;" },
	{ "thenComparing", "(Ljava/util/Comparator;)Ljava/util/Comparator;" },
	{ "thenComparing", "(Ljava/util/function/Function;Ljava/util/Comparator;)Ljava/util/Comparator;" },
	{ "thenComparing", "(Ljava/util/function/Function;)Ljava/util/Comparator;" },
	{ "thenComparingInt", "(Ljava/util/function/ToIntFunction;)Ljava/util/Comparator;" },
	{ "thenComparingLong", "(Ljava/util/function/ToLongFunction;)Ljava/util/Comparator;" },
	{ "thenComparingDouble", "(Ljava/util/function/ToDoubleFunction;)Ljava/util/Comparator;" },
	{ "lambda$thenComparing$0", "(Ljava/util/Comparator;Ljava/lang/Object;Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "sort", "()V" },
	{ "getMask", "()J" },
	{ "get", "(J)Lcom/badlogic/gdx/graphics/g3d/Attribute;" },
	{ "get", "(Ljava/lang/Class;J)Lcom/badlogic/gdx/graphics/g3d/Attribute;" },
	{ "get", "(Lcom/badlogic/gdx/utils/Array;J)Lcom/badlogic/gdx/utils/Array;" },
	{ "clear", "()V" },
	{ "size", "()I" },
	{ "enable", "(J)V" },
	{ "disable", "(J)V" },
	{ "set", "(Lcom/badlogic/gdx/graphics/g3d/Attribute;)V" },
	{ "set", "(Lcom/badlogic/gdx/graphics/g3d/Attribute;Lcom/badlogic/gdx/graphics/g3d/Attribute;)V" },
	{ "set", "(Lcom/badlogic/gdx/graphics/g3d/Attribute;Lcom/badlogic/gdx/graphics/g3d/Attribute;Lcom/badlogic/gdx/graphics/g3d/Attribute;)V" },
	{ "set", "(Lcom/badlogic/gdx/graphics/g3d/Attribute;Lcom/badlogic/gdx/graphics/g3d/Attribute;Lcom/badlogic/gdx/graphics/g3d/Attribute;Lcom/badlogic/gdx/graphics/g3d/Attribute;)V" },
	{ "set", "([Lcom/badlogic/gdx/graphics/g3d/Attribute;)V" },
	{ "set", "(Ljava/lang/Iterable;)V" },
	{ "remove", "(J)V" },
	{ "has", "(J)Z" },
	{ "indexOf", "(J)I" },
	{ "same", "(Lcom/badlogic/gdx/graphics/g3d/Attributes;Z)Z" },
	{ "same", "(Lcom/badlogic/gdx/graphics/g3d/Attributes;)Z" },
	{ "compare", "(Lcom/badlogic/gdx/graphics/g3d/Attribute;Lcom/badlogic/gdx/graphics/g3d/Attribute;)I" },
	{ "attributesHash", "()I" },
	{ "compareTo", "(Lcom/badlogic/gdx/graphics/g3d/Attributes;)I" },
	{ "add", "([Lcom/badlogic/gdx/graphics/g3d/environment/BaseLight;)Lcom/badlogic/gdx/graphics/g3d/Environment;" },
	{ "add", "(Lcom/badlogic/gdx/utils/Array;)Lcom/badlogic/gdx/graphics/g3d/Environment;" },
	{ "add", "(Lcom/badlogic/gdx/graphics/g3d/environment/BaseLight;)Lcom/badlogic/gdx/graphics/g3d/Environment;" },
	{ "add", "(Lcom/badlogic/gdx/graphics/g3d/environment/DirectionalLight;)Lcom/badlogic/gdx/graphics/g3d/Environment;" },
	{ "add", "(Lcom/badlogic/gdx/graphics/g3d/environment/PointLight;)Lcom/badlogic/gdx/graphics/g3d/Environment;" },
	{ "add", "(Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;)Lcom/badlogic/gdx/graphics/g3d/Environment;" },
	{ "remove", "([Lcom/badlogic/gdx/graphics/g3d/environment/BaseLight;)Lcom/badlogic/gdx/graphics/g3d/Environment;" },
	{ "remove", "(Lcom/badlogic/gdx/utils/Array;)Lcom/badlogic/gdx/graphics/g3d/Environment;" },
	{ "remove", "(Lcom/badlogic/gdx/graphics/g3d/environment/BaseLight;)Lcom/badlogic/gdx/graphics/g3d/Environment;" },
	{ "remove", "(Lcom/badlogic/gdx/graphics/g3d/environment/DirectionalLight;)Lcom/badlogic/gdx/graphics/g3d/Environment;" },
	{ "remove", "(Lcom/badlogic/gdx/graphics/g3d/environment/PointLight;)Lcom/badlogic/gdx/graphics/g3d/Environment;" },
	{ "remove", "(Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;)Lcom/badlogic/gdx/graphics/g3d/Environment;" },
};

static FieldMetadata fields[] {
	{ "shadowMap", &class_com_badlogic_gdx_graphics_g3d_environment_ShadowMap, offsetof(com_badlogic_gdx_graphics_g3d_Environment, F_shadowMap), "Lcom/badlogic/gdx/graphics/g3d/environment/ShadowMap;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_Environment, 0, "()V", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Environment_add_Array1_com_badlogic_gdx_graphics_g3d_environment_BaseLight_R_com_badlogic_gdx_graphics_g3d_Environment, VTABLE_com_badlogic_gdx_graphics_g3d_Environment_add_Array1_com_badlogic_gdx_graphics_g3d_environment_BaseLight_R_com_badlogic_gdx_graphics_g3d_Environment, "([Lcom/badlogic/gdx/graphics/g3d/environment/BaseLight;)Lcom/badlogic/gdx/graphics/g3d/Environment;", 129 },
	{ "add", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_graphics_g3d_Environment, VTABLE_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_graphics_g3d_Environment, "(Lcom/badlogic/gdx/utils/Array;)Lcom/badlogic/gdx/graphics/g3d/Environment;", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_BaseLight_R_com_badlogic_gdx_graphics_g3d_Environment, VTABLE_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_BaseLight_R_com_badlogic_gdx_graphics_g3d_Environment, "(Lcom/badlogic/gdx/graphics/g3d/environment/BaseLight;)Lcom/badlogic/gdx/graphics/g3d/Environment;", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_DirectionalLight_R_com_badlogic_gdx_graphics_g3d_Environment, VTABLE_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_DirectionalLight_R_com_badlogic_gdx_graphics_g3d_Environment, "(Lcom/badlogic/gdx/graphics/g3d/environment/DirectionalLight;)Lcom/badlogic/gdx/graphics/g3d/Environment;", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_PointLight_R_com_badlogic_gdx_graphics_g3d_Environment, VTABLE_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_PointLight_R_com_badlogic_gdx_graphics_g3d_Environment, "(Lcom/badlogic/gdx/graphics/g3d/environment/PointLight;)Lcom/badlogic/gdx/graphics/g3d/Environment;", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_SpotLight_R_com_badlogic_gdx_graphics_g3d_Environment, VTABLE_com_badlogic_gdx_graphics_g3d_Environment_add_com_badlogic_gdx_graphics_g3d_environment_SpotLight_R_com_badlogic_gdx_graphics_g3d_Environment, "(Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;)Lcom/badlogic/gdx/graphics/g3d/Environment;", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Environment_remove_Array1_com_badlogic_gdx_graphics_g3d_environment_BaseLight_R_com_badlogic_gdx_graphics_g3d_Environment, VTABLE_com_badlogic_gdx_graphics_g3d_Environment_remove_Array1_com_badlogic_gdx_graphics_g3d_environment_BaseLight_R_com_badlogic_gdx_graphics_g3d_Environment, "([Lcom/badlogic/gdx/graphics/g3d/environment/BaseLight;)Lcom/badlogic/gdx/graphics/g3d/Environment;", 129 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_graphics_g3d_Environment, VTABLE_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_graphics_g3d_Environment, "(Lcom/badlogic/gdx/utils/Array;)Lcom/badlogic/gdx/graphics/g3d/Environment;", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_BaseLight_R_com_badlogic_gdx_graphics_g3d_Environment, VTABLE_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_BaseLight_R_com_badlogic_gdx_graphics_g3d_Environment, "(Lcom/badlogic/gdx/graphics/g3d/environment/BaseLight;)Lcom/badlogic/gdx/graphics/g3d/Environment;", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_DirectionalLight_R_com_badlogic_gdx_graphics_g3d_Environment, VTABLE_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_DirectionalLight_R_com_badlogic_gdx_graphics_g3d_Environment, "(Lcom/badlogic/gdx/graphics/g3d/environment/DirectionalLight;)Lcom/badlogic/gdx/graphics/g3d/Environment;", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_PointLight_R_com_badlogic_gdx_graphics_g3d_Environment, VTABLE_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_PointLight_R_com_badlogic_gdx_graphics_g3d_Environment, "(Lcom/badlogic/gdx/graphics/g3d/environment/PointLight;)Lcom/badlogic/gdx/graphics/g3d/Environment;", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_SpotLight_R_com_badlogic_gdx_graphics_g3d_Environment, VTABLE_com_badlogic_gdx_graphics_g3d_Environment_remove_com_badlogic_gdx_graphics_g3d_environment_SpotLight_R_com_badlogic_gdx_graphics_g3d_Environment, "(Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;)Lcom/badlogic/gdx/graphics/g3d/Environment;", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_Environment{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/Environment",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_Attributes,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_Environment),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_Environment,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_Environment,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_Environment,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 59,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_Environment = registerClass(&class_com_badlogic_gdx_graphics_g3d_Environment);

}

