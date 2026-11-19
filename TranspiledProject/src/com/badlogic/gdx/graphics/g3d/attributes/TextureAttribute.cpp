#include "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute.h"
#include "com/badlogic/gdx/graphics/g3d/Attribute.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g3d/utils/TextureDescriptor.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/graphics/GLTexture.h"
#include "com/badlogic/gdx/utils/NumberUtils.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_DiffuseAlias;
jlong SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Diffuse;
jobject SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_SpecularAlias;
jlong SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Specular;
jobject SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_BumpAlias;
jlong SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Bump;
jobject SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_NormalAlias;
jlong SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Normal;
jobject SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_AmbientAlias;
jlong SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Ambient;
jobject SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_EmissiveAlias;
jlong SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Emissive;
jobject SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_ReflectionAlias;
jlong SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Reflection;
jlong SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Mask;

void mark_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_DiffuseAlias)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_DiffuseAlias)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_DiffuseAlias, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_SpecularAlias)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_SpecularAlias)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_SpecularAlias, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_BumpAlias)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_BumpAlias)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_BumpAlias, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_NormalAlias)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_NormalAlias)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_NormalAlias, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_AmbientAlias)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_AmbientAlias)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_AmbientAlias, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_EmissiveAlias)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_EmissiveAlias)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_EmissiveAlias, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_ReflectionAlias)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_ReflectionAlias)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_ReflectionAlias, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) object;
	if (self->F_textureDescription)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_textureDescription)->clazz)->markFunction)((jobject) self->F_textureDescription, mark, depth + 1);
}

jbool SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_is_long_R_boolean(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:is", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(46);
	if ((longCompare(((frame[0].l) & (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Mask)), (jlong(0)))) == 0) goto label_1;
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

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createDiffuse_com_badlogic_gdx_graphics_Texture_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:createDiffuse", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(50);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_Texture(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Diffuse), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createDiffuse_com_badlogic_gdx_graphics_g2d_TextureRegion_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:createDiffuse", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(54);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Diffuse), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createSpecular_com_badlogic_gdx_graphics_Texture_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:createSpecular", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(58);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_Texture(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Specular), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createSpecular_com_badlogic_gdx_graphics_g2d_TextureRegion_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:createSpecular", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(62);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Specular), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createNormal_com_badlogic_gdx_graphics_Texture_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:createNormal", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(66);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_Texture(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Normal), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createNormal_com_badlogic_gdx_graphics_g2d_TextureRegion_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:createNormal", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(70);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Normal), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createBump_com_badlogic_gdx_graphics_Texture_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:createBump", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(74);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_Texture(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Bump), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createBump_com_badlogic_gdx_graphics_g2d_TextureRegion_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:createBump", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(78);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Bump), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createAmbient_com_badlogic_gdx_graphics_Texture_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:createAmbient", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(82);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_Texture(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Ambient), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createAmbient_com_badlogic_gdx_graphics_g2d_TextureRegion_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:createAmbient", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(86);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Ambient), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createEmissive_com_badlogic_gdx_graphics_Texture_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:createEmissive", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(90);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_Texture(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Emissive), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createEmissive_com_badlogic_gdx_graphics_g2d_TextureRegion_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:createEmissive", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(94);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Emissive), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createReflection_com_badlogic_gdx_graphics_Texture_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:createReflection", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(98);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_Texture(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Reflection), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createReflection_com_badlogic_gdx_graphics_g2d_TextureRegion_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:createReflection", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(102);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, sp[0].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Reflection), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(116);
	init_com_badlogic_gdx_graphics_g3d_Attribute_long(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(106);
	((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_offsetU = (jfloat(0));
	LINE_NUMBER(107);
	((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_offsetV = (jfloat(0));
	LINE_NUMBER(108);
	((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_scaleU = (jfloat(1));
	LINE_NUMBER(109);
	((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_scaleV = (jfloat(1));
	LINE_NUMBER(113);
	((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_uvIndex = (jint(0));
	LINE_NUMBER(117);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_is_long_R_boolean(ctx, (frame[1].l));
	if (temp0 != 0) goto label_7;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid type specified"_j))));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor);
	init_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK(sp[0].o))->F_textureDescription = (jref) sp[1].o;
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(122);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(123);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_textureDescription;
	((func_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_set_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_set_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_float_float_float_float_int(jcontext ctx, jobject self, jlong param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jint param6) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	frame[4].f = param2;
	frame[5].f = param3;
	frame[6].f = param4;
	frame[7].f = param5;
	frame[8].i = param6;
	{
	LINE_NUMBER(128);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor(ctx, (frame[0].o), (frame[1].l), (frame[3].o));
	LINE_NUMBER(129);
	((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_offsetU = (frame[4].f);
	LINE_NUMBER(130);
	((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_offsetV = (frame[5].f);
	LINE_NUMBER(131);
	((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_scaleU = (frame[6].f);
	LINE_NUMBER(132);
	((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_scaleV = (frame[7].f);
	LINE_NUMBER(133);
	((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_uvIndex = (frame[8].i);
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_float_float_float_float(jcontext ctx, jobject self, jlong param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:<init>", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	frame[4].f = param2;
	frame[5].f = param3;
	frame[6].f = param4;
	frame[7].f = param5;
	{
	LINE_NUMBER(138);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_float_float_float_float_int(ctx, (frame[0].o), (frame[1].l), (frame[3].o), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f), (jint(0)));
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_Texture(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(142);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(143);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_textureDescription;
	((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK(sp[0].o))->F_texture = (jref) (frame[3].o);
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(147);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(148);
	((func_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_set_com_badlogic_gdx_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_set_com_badlogic_gdx_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(152);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[1].o)))->F_type;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[1].o)))->F_textureDescription;
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_float_float_float_float_int(ctx, sp[0].o, temp0, sp[1].o, ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[1].o)))->F_offsetU), ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[1].o)))->F_offsetV), ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[1].o)))->F_scaleU), ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[1].o)))->F_scaleV), ((jint)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[1].o)))->F_uvIndex));
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_set_com_badlogic_gdx_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_textureDescription;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture])(ctx, (frame[1].o));
	((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getU_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getU_R_float])(ctx, (frame[1].o));
	((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK(sp[0].o))->F_offsetU = temp0;
	LINE_NUMBER(159);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getV_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getV_R_float])(ctx, (frame[1].o));
	((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK(sp[0].o))->F_offsetV = temp1;
	LINE_NUMBER(160);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getU2_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getU2_R_float])(ctx, (frame[1].o));
	((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK(sp[0].o))->F_scaleU = (temp2 - ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_offsetU));
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getV2_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getV2_R_float])(ctx, (frame[1].o));
	((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK(sp[0].o))->F_scaleV = (temp3 - ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_offsetV));
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_copy_R_com_badlogic_gdx_graphics_g3d_Attribute(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:copy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(166);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(171);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g3d_Attribute_hashCode_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(172);
	jint temp1 = (991) * (frame[1].i);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_textureDescription;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_hashCode_R_int])(ctx, sp[0].o);
	frame[1].i = (temp1 + temp2);
	LINE_NUMBER(173);
	jint temp3 = (991) * (frame[1].i);
	jint temp4 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_offsetU));
	frame[1].i = (temp3 + temp4);
	LINE_NUMBER(174);
	jint temp5 = (991) * (frame[1].i);
	jint temp6 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_offsetV));
	frame[1].i = (temp5 + temp6);
	LINE_NUMBER(175);
	jint temp7 = (991) * (frame[1].i);
	jint temp8 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_scaleU));
	frame[1].i = (temp7 + temp8);
	LINE_NUMBER(176);
	jint temp9 = (991) * (frame[1].i);
	jint temp10 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_scaleV));
	frame[1].i = (temp9 + temp10);
	LINE_NUMBER(177);
	frame[1].i = (((991) * (frame[1].i)) + ((jint)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_uvIndex));
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:compareTo", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(183);
	if ((longCompare(((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[0].o)))->F_type), ((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[1].o)))->F_type))) == 0) goto label_1;
	}
	{
	if ((longCompare(((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[0].o)))->F_type), ((jlong)((com_badlogic_gdx_graphics_g3d_Attribute *) NULL_CHECK((frame[1].o)))->F_type))) >= 0) goto label_2;
	}
	INST_ICONST(-1);
	goto label_3;
label_2:;
	INST_ICONST(1);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(184);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute, (frame[1].o)));
	LINE_NUMBER(185);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_textureDescription;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[2].o)))->F_textureDescription;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_compareTo_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_compareTo_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_R_int])(ctx, sp[0].o, sp[1].o);
	frame[3].i = temp0;
	LINE_NUMBER(186);
	if ((frame[3].i) == 0) goto label_6;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(187);
	if (((jint)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_uvIndex) == ((jint)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[2].o)))->F_uvIndex)) goto label_7;
	}
	{
	popStackFrame(ctx);
	return (((jint)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_uvIndex) - ((jint)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[2].o)))->F_uvIndex));
	}
label_7:;
	{
	LINE_NUMBER(188);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_scaleU), ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[2].o)))->F_scaleU));
	if (temp0 != 0) goto label_8;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_scaleU), ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[2].o)))->F_scaleU), -1)) <= 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(-1);
label_10:;
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(189);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_scaleV), ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[2].o)))->F_scaleV));
	if (temp0 != 0) goto label_11;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_scaleV), ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[2].o)))->F_scaleV), -1)) <= 0) goto label_12;
	}
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(-1);
label_13:;
	popStackFrame(ctx);
	INST_IRETURN();
label_11:;
	{
	LINE_NUMBER(190);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_offsetU), ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[2].o)))->F_offsetU));
	if (temp0 != 0) goto label_14;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_offsetU), ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[2].o)))->F_offsetU), -1)) <= 0) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(-1);
label_16:;
	popStackFrame(ctx);
	INST_IRETURN();
label_14:;
	{
	LINE_NUMBER(191);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_offsetV), ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[2].o)))->F_offsetV));
	if (temp0 != 0) goto label_17;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[0].o)))->F_offsetV), ((jfloat)((com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute *) NULL_CHECK((frame[2].o)))->F_offsetV), -1)) <= 0) goto label_18;
	}
	INST_ICONST(1);
	goto label_19;
label_18:;
	INST_ICONST(-1);
label_19:;
	popStackFrame(ctx);
	INST_IRETURN();
label_17:;
	{
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Attribute, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g3d_Attribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_DiffuseAlias = ((jobject) createStringLiteral(ctx, u8"diffuseTexture"_j));
	SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_SpecularAlias = ((jobject) createStringLiteral(ctx, u8"specularTexture"_j));
	SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_BumpAlias = ((jobject) createStringLiteral(ctx, u8"bumpTexture"_j));
	SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_NormalAlias = ((jobject) createStringLiteral(ctx, u8"normalTexture"_j));
	SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_AmbientAlias = ((jobject) createStringLiteral(ctx, u8"ambientTexture"_j));
	SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_EmissiveAlias = ((jobject) createStringLiteral(ctx, u8"emissiveTexture"_j));
	SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_ReflectionAlias = ((jobject) createStringLiteral(ctx, u8"reflectionTexture"_j));
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	{
	LINE_NUMBER(29);
	jlong temp0 = (jlong)SM_com_badlogic_gdx_graphics_g3d_Attribute_register_java_lang_String_R_long(ctx, (((jobject) createStringLiteral(ctx, u8"diffuseTexture"_j))));
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Diffuse = temp0;
	LINE_NUMBER(31);
	jlong temp1 = (jlong)SM_com_badlogic_gdx_graphics_g3d_Attribute_register_java_lang_String_R_long(ctx, (((jobject) createStringLiteral(ctx, u8"specularTexture"_j))));
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Specular = temp1;
	LINE_NUMBER(33);
	jlong temp2 = (jlong)SM_com_badlogic_gdx_graphics_g3d_Attribute_register_java_lang_String_R_long(ctx, (((jobject) createStringLiteral(ctx, u8"bumpTexture"_j))));
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Bump = temp2;
	LINE_NUMBER(35);
	jlong temp3 = (jlong)SM_com_badlogic_gdx_graphics_g3d_Attribute_register_java_lang_String_R_long(ctx, (((jobject) createStringLiteral(ctx, u8"normalTexture"_j))));
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Normal = temp3;
	LINE_NUMBER(37);
	jlong temp4 = (jlong)SM_com_badlogic_gdx_graphics_g3d_Attribute_register_java_lang_String_R_long(ctx, (((jobject) createStringLiteral(ctx, u8"ambientTexture"_j))));
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Ambient = temp4;
	LINE_NUMBER(39);
	jlong temp5 = (jlong)SM_com_badlogic_gdx_graphics_g3d_Attribute_register_java_lang_String_R_long(ctx, (((jobject) createStringLiteral(ctx, u8"emissiveTexture"_j))));
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Emissive = temp5;
	LINE_NUMBER(41);
	jlong temp6 = (jlong)SM_com_badlogic_gdx_graphics_g3d_Attribute_register_java_lang_String_R_long(ctx, (((jobject) createStringLiteral(ctx, u8"reflectionTexture"_j))));
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Reflection = temp6;
	LINE_NUMBER(43);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Mask = (((((((clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Diffuse) | (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Specular)) | (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Bump)) | (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Normal)) | (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Ambient)) | (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Emissive)) | (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Reflection));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute[] {
	(void *) M_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_hashCode_R_int,
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
	(void *) M_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_compareTo_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_copy_R_com_badlogic_gdx_graphics_g3d_Attribute,
	(void *) M_com_badlogic_gdx_graphics_g3d_Attribute_equals_com_badlogic_gdx_graphics_g3d_Attribute_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_set_com_badlogic_gdx_graphics_g2d_TextureRegion,
	(void *) M_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int,
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
	{ "set", "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)V" },
	{ "compareTo", "(Lcom/badlogic/gdx/graphics/g3d/Attribute;)I" },
};

static FieldMetadata fields[] {
	{ "DiffuseAlias", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_DiffuseAlias, "Ljava/lang/String;", 25 },
	{ "Diffuse", &class_long, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Diffuse, "J", 25 },
	{ "SpecularAlias", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_SpecularAlias, "Ljava/lang/String;", 25 },
	{ "Specular", &class_long, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Specular, "J", 25 },
	{ "BumpAlias", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_BumpAlias, "Ljava/lang/String;", 25 },
	{ "Bump", &class_long, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Bump, "J", 25 },
	{ "NormalAlias", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_NormalAlias, "Ljava/lang/String;", 25 },
	{ "Normal", &class_long, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Normal, "J", 25 },
	{ "AmbientAlias", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_AmbientAlias, "Ljava/lang/String;", 25 },
	{ "Ambient", &class_long, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Ambient, "J", 25 },
	{ "EmissiveAlias", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_EmissiveAlias, "Ljava/lang/String;", 25 },
	{ "Emissive", &class_long, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Emissive, "J", 25 },
	{ "ReflectionAlias", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_ReflectionAlias, "Ljava/lang/String;", 25 },
	{ "Reflection", &class_long, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Reflection, "J", 25 },
	{ "Mask", &class_long, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Mask, "J", 12 },
	{ "textureDescription", &class_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor, offsetof(com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute, F_textureDescription), "Lcom/badlogic/gdx/graphics/g3d/utils/TextureDescriptor;", 17 },
	{ "offsetU", &class_float, offsetof(com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute, F_offsetU), "F", 1 },
	{ "offsetV", &class_float, offsetof(com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute, F_offsetV), "F", 1 },
	{ "scaleU", &class_float, offsetof(com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute, F_scaleU), "F", 1 },
	{ "scaleV", &class_float, offsetof(com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute, F_scaleV), "F", 1 },
	{ "uvIndex", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute, F_uvIndex), "I", 1 },
};

static MethodMetadata methods[] {
	{ "is", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_is_long_R_boolean, 0, "(J)Z", 25 },
	{ "createDiffuse", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createDiffuse_com_badlogic_gdx_graphics_Texture_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute, 0, "(Lcom/badlogic/gdx/graphics/Texture;)Lcom/badlogic/gdx/graphics/g3d/attributes/TextureAttribute;", 9 },
	{ "createDiffuse", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createDiffuse_com_badlogic_gdx_graphics_g2d_TextureRegion_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute, 0, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)Lcom/badlogic/gdx/graphics/g3d/attributes/TextureAttribute;", 9 },
	{ "createSpecular", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createSpecular_com_badlogic_gdx_graphics_Texture_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute, 0, "(Lcom/badlogic/gdx/graphics/Texture;)Lcom/badlogic/gdx/graphics/g3d/attributes/TextureAttribute;", 9 },
	{ "createSpecular", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createSpecular_com_badlogic_gdx_graphics_g2d_TextureRegion_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute, 0, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)Lcom/badlogic/gdx/graphics/g3d/attributes/TextureAttribute;", 9 },
	{ "createNormal", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createNormal_com_badlogic_gdx_graphics_Texture_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute, 0, "(Lcom/badlogic/gdx/graphics/Texture;)Lcom/badlogic/gdx/graphics/g3d/attributes/TextureAttribute;", 9 },
	{ "createNormal", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createNormal_com_badlogic_gdx_graphics_g2d_TextureRegion_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute, 0, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)Lcom/badlogic/gdx/graphics/g3d/attributes/TextureAttribute;", 9 },
	{ "createBump", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createBump_com_badlogic_gdx_graphics_Texture_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute, 0, "(Lcom/badlogic/gdx/graphics/Texture;)Lcom/badlogic/gdx/graphics/g3d/attributes/TextureAttribute;", 9 },
	{ "createBump", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createBump_com_badlogic_gdx_graphics_g2d_TextureRegion_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute, 0, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)Lcom/badlogic/gdx/graphics/g3d/attributes/TextureAttribute;", 9 },
	{ "createAmbient", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createAmbient_com_badlogic_gdx_graphics_Texture_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute, 0, "(Lcom/badlogic/gdx/graphics/Texture;)Lcom/badlogic/gdx/graphics/g3d/attributes/TextureAttribute;", 9 },
	{ "createAmbient", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createAmbient_com_badlogic_gdx_graphics_g2d_TextureRegion_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute, 0, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)Lcom/badlogic/gdx/graphics/g3d/attributes/TextureAttribute;", 9 },
	{ "createEmissive", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createEmissive_com_badlogic_gdx_graphics_Texture_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute, 0, "(Lcom/badlogic/gdx/graphics/Texture;)Lcom/badlogic/gdx/graphics/g3d/attributes/TextureAttribute;", 9 },
	{ "createEmissive", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createEmissive_com_badlogic_gdx_graphics_g2d_TextureRegion_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute, 0, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)Lcom/badlogic/gdx/graphics/g3d/attributes/TextureAttribute;", 9 },
	{ "createReflection", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createReflection_com_badlogic_gdx_graphics_Texture_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute, 0, "(Lcom/badlogic/gdx/graphics/Texture;)Lcom/badlogic/gdx/graphics/g3d/attributes/TextureAttribute;", 9 },
	{ "createReflection", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_createReflection_com_badlogic_gdx_graphics_g2d_TextureRegion_R_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute, 0, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)Lcom/badlogic/gdx/graphics/g3d/attributes/TextureAttribute;", 9 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long, 0, "(J)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor, 0, "(JLcom/badlogic/gdx/graphics/g3d/utils/TextureDescriptor;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_float_float_float_float_int, 0, "(JLcom/badlogic/gdx/graphics/g3d/utils/TextureDescriptor;FFFFI)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_float_float_float_float, 0, "(JLcom/badlogic/gdx/graphics/g3d/utils/TextureDescriptor;FFFF)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_Texture, 0, "(JLcom/badlogic/gdx/graphics/Texture;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_g2d_TextureRegion, 0, "(JLcom/badlogic/gdx/graphics/g2d/TextureRegion;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute, 0, "(Lcom/badlogic/gdx/graphics/g3d/attributes/TextureAttribute;)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_set_com_badlogic_gdx_graphics_g2d_TextureRegion, VTABLE_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_set_com_badlogic_gdx_graphics_g2d_TextureRegion, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)V", 1 },
	{ "copy", (intptr_t) M_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_copy_R_com_badlogic_gdx_graphics_g3d_Attribute, VTABLE_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_copy_R_com_badlogic_gdx_graphics_g3d_Attribute, "()Lcom/badlogic/gdx/graphics/g3d/Attribute;", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_hashCode_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_hashCode_R_int, "()I", 1 },
	{ "compareTo", (intptr_t) M_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_compareTo_com_badlogic_gdx_graphics_g3d_Attribute_R_int, "(Lcom/badlogic/gdx/graphics/g3d/Attribute;)I", 1 },
	{ "compareTo", (intptr_t) M_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_compareTo_java_lang_Object_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_Attribute,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute,
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
		.methodCount = 28,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute = registerClass(&class_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute);

}

