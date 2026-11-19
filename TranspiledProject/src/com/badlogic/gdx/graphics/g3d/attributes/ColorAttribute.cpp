#include "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute.h"
#include "com/badlogic/gdx/graphics/g3d/Attribute.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_DiffuseAlias;
jlong SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Diffuse;
jobject SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_SpecularAlias;
jlong SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Specular;
jobject SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_AmbientAlias;
jlong SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Ambient;
jobject SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_EmissiveAlias;
jlong SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Emissive;
jobject SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_ReflectionAlias;
jlong SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Reflection;
jobject SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_AmbientLightAlias;
jlong SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_AmbientLight;
jobject SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_FogAlias;
jlong SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Fog;
jlong SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Mask;

void mark_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_DiffuseAlias)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_DiffuseAlias)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_DiffuseAlias, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_SpecularAlias)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_SpecularAlias)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_SpecularAlias, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_AmbientAlias)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_AmbientAlias)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_AmbientAlias, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_EmissiveAlias)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_EmissiveAlias)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_EmissiveAlias, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_ReflectionAlias)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_ReflectionAlias)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_ReflectionAlias, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_AmbientLightAlias)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_AmbientLightAlias)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_AmbientLightAlias, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_FogAlias)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_FogAlias)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_FogAlias, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_graphics_g3d_Attribute(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
}

jbool SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_is_long_R_boolean(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute:is", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(42);
	if ((longCompare(((frame[0].l) & (clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Mask)), (jlong(0)))) == 0) goto label_1;
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

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createAmbient_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute:createAmbient", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(46);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long_com_badlogic_gdx_graphics_Color(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Ambient), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createAmbient_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute:createAmbient", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(50);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long_float_float_float_float(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Ambient), (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createDiffuse_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute:createDiffuse", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(54);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long_com_badlogic_gdx_graphics_Color(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Diffuse), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createDiffuse_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute:createDiffuse", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(58);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long_float_float_float_float(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Diffuse), (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createSpecular_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute:createSpecular", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(62);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long_com_badlogic_gdx_graphics_Color(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Specular), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createSpecular_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute:createSpecular", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(66);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long_float_float_float_float(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Specular), (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createReflection_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute:createReflection", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(70);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long_com_badlogic_gdx_graphics_Color(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Reflection), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createReflection_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute:createReflection", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(74);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long_float_float_float_float(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Reflection), (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createEmissive_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute:createEmissive", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(78);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long_com_badlogic_gdx_graphics_Color(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Emissive), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createEmissive_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute:createEmissive", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(82);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long_float_float_float_float(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Emissive), (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createAmbientLight_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute:createAmbientLight", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(86);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long_com_badlogic_gdx_graphics_Color(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_AmbientLight), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createAmbientLight_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute:createAmbientLight", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(90);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long_float_float_float_float(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_AmbientLight), (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createFog_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute:createFog", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(94);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long_com_badlogic_gdx_graphics_Color(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Fog), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createFog_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute:createFog", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(98);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long_float_float_float_float(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Fog), (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(104);
	init_com_badlogic_gdx_graphics_g3d_Attribute_long(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(105);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_is_long_R_boolean(ctx, (frame[1].l));
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid type specified"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	LINE_NUMBER(106);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(109);
	init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(110);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[3].o));
	}
label_2:;
	LINE_NUMBER(111);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long_float_float_float_float(jcontext ctx, jobject self, jlong param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].f = param1;
	frame[4].f = param2;
	frame[5].f = param3;
	frame[6].f = param4;
	{
	LINE_NUMBER(114);
	init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(115);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f));
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[1].o)))->F_type;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute *) NULL_CHECK((frame[1].o)))->F_color;
	init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long_com_badlogic_gdx_graphics_Color(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_copy_R_com_badlogic_gdx_graphics_g3d_Attribute(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute:copy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(124);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g3d_Attribute_hashCode_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(130);
	jint temp1 = (953) * (frame[1].i);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute *) NULL_CHECK((frame[0].o)))->F_color;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Color_toIntBits_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toIntBits_R_int])(ctx, sp[0].o);
	frame[1].i = (temp1 + temp2);
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute:compareTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(136);
	if ((longCompare(((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[0].o)))->F_type), ((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[1].o)))->F_type))) == 0) goto label_1;
	}
	{
	popStackFrame(ctx);
	return (jint((((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[0].o)))->F_type) - ((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[1].o)))->F_type))));
	}
label_1:;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute, (frame[1].o)))))->F_color;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Color_toIntBits_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toIntBits_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute *) NULL_CHECK((frame[0].o)))->F_color;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Color_toIntBits_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toIntBits_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 - temp1);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(23);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Attribute, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g3d_Attribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_DiffuseAlias = ((jobject) createStringLiteral(ctx, u8"diffuseColor"_j));
	SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_SpecularAlias = ((jobject) createStringLiteral(ctx, u8"specularColor"_j));
	SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_AmbientAlias = ((jobject) createStringLiteral(ctx, u8"ambientColor"_j));
	SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_EmissiveAlias = ((jobject) createStringLiteral(ctx, u8"emissiveColor"_j));
	SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_ReflectionAlias = ((jobject) createStringLiteral(ctx, u8"reflectionColor"_j));
	SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_AmbientLightAlias = ((jobject) createStringLiteral(ctx, u8"ambientLightColor"_j));
	SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_FogAlias = ((jobject) createStringLiteral(ctx, u8"fogColor"_j));
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	{
	LINE_NUMBER(25);
	jlong temp0 = (jlong)SM_com_badlogic_gdx_graphics_g3d_Attribute_register_java_lang_String_R_long(ctx, (((jobject) createStringLiteral(ctx, u8"diffuseColor"_j))));
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Diffuse = temp0;
	LINE_NUMBER(27);
	jlong temp1 = (jlong)SM_com_badlogic_gdx_graphics_g3d_Attribute_register_java_lang_String_R_long(ctx, (((jobject) createStringLiteral(ctx, u8"specularColor"_j))));
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Specular = temp1;
	LINE_NUMBER(29);
	jlong temp2 = (jlong)SM_com_badlogic_gdx_graphics_g3d_Attribute_register_java_lang_String_R_long(ctx, (((jobject) createStringLiteral(ctx, u8"ambientColor"_j))));
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Ambient = temp2;
	LINE_NUMBER(31);
	jlong temp3 = (jlong)SM_com_badlogic_gdx_graphics_g3d_Attribute_register_java_lang_String_R_long(ctx, (((jobject) createStringLiteral(ctx, u8"emissiveColor"_j))));
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Emissive = temp3;
	LINE_NUMBER(33);
	jlong temp4 = (jlong)SM_com_badlogic_gdx_graphics_g3d_Attribute_register_java_lang_String_R_long(ctx, (((jobject) createStringLiteral(ctx, u8"reflectionColor"_j))));
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Reflection = temp4;
	LINE_NUMBER(35);
	jlong temp5 = (jlong)SM_com_badlogic_gdx_graphics_g3d_Attribute_register_java_lang_String_R_long(ctx, (((jobject) createStringLiteral(ctx, u8"ambientLightColor"_j))));
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_AmbientLight = temp5;
	LINE_NUMBER(37);
	jlong temp6 = (jlong)SM_com_badlogic_gdx_graphics_g3d_Attribute_register_java_lang_String_R_long(ctx, (((jobject) createStringLiteral(ctx, u8"fogColor"_j))));
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Fog = temp6;
	LINE_NUMBER(39);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Mask = (((((((clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Ambient) | (clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Diffuse)) | (clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Specular)) | (clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Emissive)) | (clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Reflection)) | (clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_AmbientLight)) | (clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Fog));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute[] {
	(void *) M_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_hashCode_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attribute_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attribute_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_compareTo_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_copy_R_com_badlogic_gdx_graphics_g3d_Attribute,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attribute_equals_com_badlogic_gdx_graphics_g3d_Attribute_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "copy", "()Lcom/badlogic/gdx/graphics/g3d/Attribute;" },
	{ "equals", "(Lcom/badlogic/gdx/graphics/g3d/Attribute;)Z" },
	{ "compareTo", "(Lcom/badlogic/gdx/graphics/g3d/Attribute;)I" },
};

static FieldMetadata fields[] {
	{ "DiffuseAlias", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_DiffuseAlias, "Ljava/lang/String;", 25 },
	{ "Diffuse", &class_long, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Diffuse, "J", 25 },
	{ "SpecularAlias", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_SpecularAlias, "Ljava/lang/String;", 25 },
	{ "Specular", &class_long, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Specular, "J", 25 },
	{ "AmbientAlias", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_AmbientAlias, "Ljava/lang/String;", 25 },
	{ "Ambient", &class_long, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Ambient, "J", 25 },
	{ "EmissiveAlias", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_EmissiveAlias, "Ljava/lang/String;", 25 },
	{ "Emissive", &class_long, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Emissive, "J", 25 },
	{ "ReflectionAlias", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_ReflectionAlias, "Ljava/lang/String;", 25 },
	{ "Reflection", &class_long, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Reflection, "J", 25 },
	{ "AmbientLightAlias", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_AmbientLightAlias, "Ljava/lang/String;", 25 },
	{ "AmbientLight", &class_long, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_AmbientLight, "J", 25 },
	{ "FogAlias", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_FogAlias, "Ljava/lang/String;", 25 },
	{ "Fog", &class_long, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Fog, "J", 25 },
	{ "Mask", &class_long, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Mask, "J", 12 },
	{ "color", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute, F_color), "Lcom/badlogic/gdx/graphics/Color;", 17 },
};

static MethodMetadata methods[] {
	{ "is", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_is_long_R_boolean, 0, "(J)Z", 25 },
	{ "createAmbient", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createAmbient_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute, 0, "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/graphics/g3d/attributes/ColorAttribute;", 25 },
	{ "createAmbient", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createAmbient_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute, 0, "(FFFF)Lcom/badlogic/gdx/graphics/g3d/attributes/ColorAttribute;", 25 },
	{ "createDiffuse", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createDiffuse_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute, 0, "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/graphics/g3d/attributes/ColorAttribute;", 25 },
	{ "createDiffuse", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createDiffuse_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute, 0, "(FFFF)Lcom/badlogic/gdx/graphics/g3d/attributes/ColorAttribute;", 25 },
	{ "createSpecular", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createSpecular_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute, 0, "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/graphics/g3d/attributes/ColorAttribute;", 25 },
	{ "createSpecular", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createSpecular_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute, 0, "(FFFF)Lcom/badlogic/gdx/graphics/g3d/attributes/ColorAttribute;", 25 },
	{ "createReflection", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createReflection_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute, 0, "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/graphics/g3d/attributes/ColorAttribute;", 25 },
	{ "createReflection", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createReflection_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute, 0, "(FFFF)Lcom/badlogic/gdx/graphics/g3d/attributes/ColorAttribute;", 25 },
	{ "createEmissive", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createEmissive_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute, 0, "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/graphics/g3d/attributes/ColorAttribute;", 25 },
	{ "createEmissive", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createEmissive_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute, 0, "(FFFF)Lcom/badlogic/gdx/graphics/g3d/attributes/ColorAttribute;", 25 },
	{ "createAmbientLight", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createAmbientLight_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute, 0, "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/graphics/g3d/attributes/ColorAttribute;", 25 },
	{ "createAmbientLight", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createAmbientLight_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute, 0, "(FFFF)Lcom/badlogic/gdx/graphics/g3d/attributes/ColorAttribute;", 25 },
	{ "createFog", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createFog_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute, 0, "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/graphics/g3d/attributes/ColorAttribute;", 25 },
	{ "createFog", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_createFog_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute, 0, "(FFFF)Lcom/badlogic/gdx/graphics/g3d/attributes/ColorAttribute;", 25 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long, 0, "(J)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long_com_badlogic_gdx_graphics_Color, 0, "(JLcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long_float_float_float_float, 0, "(JFFFF)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute, 0, "(Lcom/badlogic/gdx/graphics/g3d/attributes/ColorAttribute;)V", 1 },
	{ "copy", (intptr_t) M_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_copy_R_com_badlogic_gdx_graphics_g3d_Attribute, VTABLE_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_copy_R_com_badlogic_gdx_graphics_g3d_Attribute, "()Lcom/badlogic/gdx/graphics/g3d/Attribute;", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_hashCode_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_hashCode_R_int, "()I", 1 },
	{ "compareTo", (intptr_t) M_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int, "(Lcom/badlogic/gdx/graphics/g3d/Attribute;)I", 1 },
	{ "compareTo", (intptr_t) M_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_compareTo_java_lang_Object_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_Attribute,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute = registerClass(&class_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute);

}

