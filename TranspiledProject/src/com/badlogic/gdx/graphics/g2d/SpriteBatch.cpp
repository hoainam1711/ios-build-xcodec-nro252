#include "com/badlogic/gdx/graphics/g2d/SpriteBatch.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/graphics/Mesh_VertexDataType.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "com/badlogic/gdx/graphics/glutils/ShaderProgram.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "com/badlogic/gdx/graphics/VertexAttribute.h"
#include "com/badlogic/gdx/Graphics.h"
#include "com/badlogic/gdx/math/Affine2.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "java/lang/reflect/Field.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "com/badlogic/gdx/graphics/g2d/SpriteBatch.h"
#include "com/badlogic/gdx/graphics/GL30.h"
#include "java/lang/annotation/Annotation.h"
#include "com/badlogic/gdx/graphics/Mesh.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/Gdx.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/graphics/glutils/IndexData.h"
#include "java/nio/ShortBuffer.h"
#include "java/lang/IllegalStateException.h"
#include "com/badlogic/gdx/graphics/GLTexture.h"
#include "java/lang/System.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"
#include "com/badlogic/gdx/graphics/Texture.h"
#include "java/lang/Deprecated.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_g2d_SpriteBatch_defaultVertexDataType;
jobject SF_com_badlogic_gdx_graphics_g2d_SpriteBatch_overrideVertexType;

void mark_com_badlogic_gdx_graphics_g2d_SpriteBatch(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_g2d_SpriteBatch_defaultVertexDataType)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_SpriteBatch_defaultVertexDataType)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_SpriteBatch_defaultVertexDataType, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g2d_SpriteBatch_overrideVertexType)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_SpriteBatch_overrideVertexType)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_SpriteBatch_overrideVertexType, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_g2d_SpriteBatch *) object;
	if (self->F_currentDataType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentDataType)->clazz)->markFunction)((jobject) self->F_currentDataType, mark, depth + 1);
	if (self->F_mesh)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mesh)->clazz)->markFunction)((jobject) self->F_mesh, mark, depth + 1);
	if (self->F_vertices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vertices)->clazz)->markFunction)((jobject) self->F_vertices, mark, depth + 1);
	if (self->F_lastTexture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastTexture)->clazz)->markFunction)((jobject) self->F_lastTexture, mark, depth + 1);
	if (self->F_transformMatrix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_transformMatrix)->clazz)->markFunction)((jobject) self->F_transformMatrix, mark, depth + 1);
	if (self->F_projectionMatrix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_projectionMatrix)->clazz)->markFunction)((jobject) self->F_projectionMatrix, mark, depth + 1);
	if (self->F_combinedMatrix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_combinedMatrix)->clazz)->markFunction)((jobject) self->F_combinedMatrix, mark, depth + 1);
	if (self->F_shader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shader)->clazz)->markFunction)((jobject) self->F_shader, mark, depth + 1);
	if (self->F_customShader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_customShader)->clazz)->markFunction)((jobject) self->F_customShader, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
}

void init_com_badlogic_gdx_graphics_g2d_SpriteBatch(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_SpriteBatch(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(88);
	init_com_badlogic_gdx_graphics_g2d_SpriteBatch_int_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx, (frame[0].o), (1000), (jobject(nullptr)));
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_SpriteBatch_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_SpriteBatch(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(94);
	init_com_badlogic_gdx_graphics_g2d_SpriteBatch_int_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx, (frame[0].o), (frame[1].i), (jobject(nullptr)));
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_SpriteBatch_int_com_badlogic_gdx_graphics_glutils_ShaderProgram(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:<init>", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_SpriteBatch(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(105);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(53);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx = (jint(0));
	LINE_NUMBER(54);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_lastTexture = (jref) (jobject(nullptr));
	LINE_NUMBER(55);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_invTexWidth = (jfloat(0));
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_invTexHeight = (jfloat(0));
	LINE_NUMBER(57);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_drawing = (jint(0));
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_transformMatrix = (jref) sp[1].o;
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_projectionMatrix = (jref) sp[1].o;
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_combinedMatrix = (jref) sp[1].o;
	LINE_NUMBER(63);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendingDisabled = (jint(0));
	LINE_NUMBER(64);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendSrcFunc = (770);
	LINE_NUMBER(65);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendDstFunc = (771);
	LINE_NUMBER(66);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendSrcFuncAlpha = (770);
	LINE_NUMBER(67);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendDstFuncAlpha = (771);
	LINE_NUMBER(70);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_customShader = (jref) (jobject(nullptr));
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(74);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_colorPacked = (clinit_com_badlogic_gdx_graphics_Color(ctx), (jfloat)SF_com_badlogic_gdx_graphics_Color_WHITE_FLOAT_BITS);
	LINE_NUMBER(77);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_renderCalls = (jint(0));
	LINE_NUMBER(80);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_totalRenderCalls = (jint(0));
	LINE_NUMBER(83);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_maxSpritesInBatch = (jint(0));
	LINE_NUMBER(107);
	if ((frame[1].i) <= (8191)) goto label_20;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Can't have more than 8191 sprites per batch: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_20:;
	{
	LINE_NUMBER(109);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl30;
	if (sp[0].o == nullptr) goto label_21;
	}
	clinit_com_badlogic_gdx_graphics_Mesh$VertexDataType(ctx);
	(sp++)->o = SF_com_badlogic_gdx_graphics_Mesh$VertexDataType_VertexBufferObjectWithVAO;
	goto label_22;
label_21:;
	clinit_com_badlogic_gdx_graphics_g2d_SpriteBatch(ctx);
	(sp++)->o = SF_com_badlogic_gdx_graphics_g2d_SpriteBatch_defaultVertexDataType;
label_22:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(111);
	clinit_com_badlogic_gdx_graphics_g2d_SpriteBatch(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_SpriteBatch_overrideVertexType;
	if (sp[0].o == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(112);
	clinit_com_badlogic_gdx_graphics_g2d_SpriteBatch(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_SpriteBatch_overrideVertexType;
	frame[3].o = sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(115);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_currentDataType = (jref) (frame[3].o);
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Mesh);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_currentDataType;
	jint temp0 = jint(0);
	jint temp1 = (frame[1].i) * (jint(4));
	jint temp2 = (frame[1].i) * (6);
	sp[3].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute, (jint(3)));
	jint temp3 = jint(0);
	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	sp[4].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute);
	init_com_badlogic_gdx_graphics_VertexAttribute_int_int_java_lang_String(ctx, sp[4].o, (jint(1)), (jint(2)), (((jobject) createStringLiteral(ctx, u8"a_position"_j))));
	ARRAY_ACCESS(jobject, sp[3].o, temp3) = sp[4].o;
	jint temp4 = jint(1);
	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	sp[4].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute);
	init_com_badlogic_gdx_graphics_VertexAttribute_int_int_java_lang_String(ctx, sp[4].o, (jint(4)), (jint(4)), (((jobject) createStringLiteral(ctx, u8"a_color"_j))));
	ARRAY_ACCESS(jobject, sp[3].o, temp4) = sp[4].o;
	jint temp5 = jint(2);
	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	sp[4].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute);
	init_com_badlogic_gdx_graphics_VertexAttribute_int_int_java_lang_String(ctx, sp[4].o, (16), (jint(2)), (((jobject) createStringLiteral(ctx, u8"a_texCoord0"_j))));
	ARRAY_ACCESS(jobject, sp[3].o, temp5) = sp[4].o;
	init_com_badlogic_gdx_graphics_Mesh_com_badlogic_gdx_graphics_Mesh$VertexDataType_boolean_int_int_Array1_com_badlogic_gdx_graphics_VertexAttribute(ctx, sp[1].o, sp[2].o, temp0, temp1, temp2, sp[3].o);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_mesh = (jref) sp[1].o;
	LINE_NUMBER(122);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_projectionMatrix;
	jfloat temp6 = jfloat(0);
	jfloat temp7 = jfloat(0);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp8 = (jint)((func_com_badlogic_gdx_Graphics_getWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getWidth_R_int, sp[1].o))(ctx, sp[1].o);
	jfloat temp9 = jfloat(temp8);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp10 = (jint)((func_com_badlogic_gdx_Graphics_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getHeight_R_int, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_setToOrtho2D_float_float_float_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_setToOrtho2D_float_float_float_float_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, temp6, temp7, temp9, (jfloat(temp10)));
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, ((frame[1].i) * (20)));
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(126);
	frame[4].i = ((frame[1].i) * (6));
	LINE_NUMBER(127);
	sp[0].o = (jobject) createArray(ctx, &class_short, (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(128);
	frame[6].i = (jint(0));
	LINE_NUMBER(129);
	frame[7].i = (jint(0));
	}
label_33:;
	{
	if ((frame[7].i) >= (frame[4].i)) goto label_34;
	}
	{
	LINE_NUMBER(130);
	ARRAY_ACCESS(jshort, (frame[5].o), (frame[7].i)) = (frame[6].i);
	LINE_NUMBER(131);
	ARRAY_ACCESS(jshort, (frame[5].o), ((frame[7].i) + (jint(1)))) = (jshort(((frame[6].i) + (jint(1)))));
	LINE_NUMBER(132);
	ARRAY_ACCESS(jshort, (frame[5].o), ((frame[7].i) + (jint(2)))) = (jshort(((frame[6].i) + (jint(2)))));
	LINE_NUMBER(133);
	ARRAY_ACCESS(jshort, (frame[5].o), ((frame[7].i) + (jint(3)))) = (jshort(((frame[6].i) + (jint(2)))));
	LINE_NUMBER(134);
	ARRAY_ACCESS(jshort, (frame[5].o), ((frame[7].i) + (jint(4)))) = (jshort(((frame[6].i) + (jint(3)))));
	LINE_NUMBER(135);
	ARRAY_ACCESS(jshort, (frame[5].o), ((frame[7].i) + (jint(5)))) = (frame[6].i);
	LINE_NUMBER(129);
	INST_IINC(7, 6);
	frame[6].i = (jshort(((frame[6].i) + (jint(4)))));
	goto label_33;
	}
label_34:;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_setIndices_Array1_short_R_com_badlogic_gdx_graphics_Mesh) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_setIndices_Array1_short_R_com_badlogic_gdx_graphics_Mesh])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(139);
	if ((frame[2].o) != nullptr) goto label_43;
	}
	{
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_SpriteBatch_createDefaultShader_R_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_shader = (jref) sp[1].o;
	LINE_NUMBER(141);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_ownsShader = (jint(1));
	goto label_46;
	}
label_43:;
	{
	LINE_NUMBER(143);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_shader = (jref) (frame[2].o);
	}
label_46:;
	{
	LINE_NUMBER(146);
	sp[0].o = frame[3].o;
	clinit_com_badlogic_gdx_graphics_Mesh$VertexDataType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Mesh$VertexDataType_VertexArray;
	if (sp[0].o == sp[1].o) goto label_47;
	}
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getIndexData_R_com_badlogic_gdx_graphics_glutils_IndexData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getIndexData_R_com_badlogic_gdx_graphics_glutils_IndexData])(ctx, sp[0].o);
	((func_com_badlogic_gdx_graphics_glutils_IndexData_bind) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexData, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_bind, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(148);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getIndexData_R_com_badlogic_gdx_graphics_glutils_IndexData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getIndexData_R_com_badlogic_gdx_graphics_glutils_IndexData])(ctx, sp[0].o);
	((func_com_badlogic_gdx_graphics_glutils_IndexData_unbind) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexData, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_unbind, sp[0].o))(ctx, sp[0].o);
	}
label_47:;
	LINE_NUMBER(150);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g2d_SpriteBatch_createDefaultShader_R_com_badlogic_gdx_graphics_glutils_ShaderProgram(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:createDefaultShader", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_SpriteBatch(ctx);
	{
	LINE_NUMBER(154);
	frame[0].o = (((jobject) createStringLiteral(ctx, u8"attribute vec4 a_position;\nattribute vec4 a_color;\nattribute vec2 a_texCoord0;\nuniform mat4 u_projTrans;\nvarying vec4 v_color;\nvarying vec2 v_texCoords;\n\nvoid main()\n{\n   v_color = a_color;\n   v_color.a = v_color.a * (255.0/254.0);\n   v_texCoords = a_texCoord0;\n   gl_Position =  u_projTrans * a_position;\n}\n"_j)));
	LINE_NUMBER(168);
	frame[1].o = (((jobject) createStringLiteral(ctx, u8"#ifdef GL_ES\n#define LOWP lowp\nprecision mediump float;\n#else\n#define LOWP \n#endif\nvarying LOWP vec4 v_color;\nvarying vec2 v_texCoords;\nuniform sampler2D u_texture;\nvoid main()\n{\n  gl_FragColor = v_color * texture2D(u_texture, v_texCoords);\n}"_j)));
	LINE_NUMBER(182);
	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_ShaderProgram);
	init_com_badlogic_gdx_graphics_glutils_ShaderProgram_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(183);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_isCompiled_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_isCompiled_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_4;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error compiling shader: "_j))));
	sp[2].o = (jobject)((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_getLog_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_getLog_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:begin", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(189);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_drawing) == 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SpriteBatch.end must be called before begin."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(190);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_renderCalls = (jint(0));
	LINE_NUMBER(192);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glDepthMask_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDepthMask_boolean, sp[0].o))(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(193);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_customShader;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_customShader;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_bind])(ctx, sp[0].o);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_bind])(ctx, sp[0].o);
	}
label_6:;
	{
	LINE_NUMBER(197);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_setupMatrices) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_setupMatrices])(ctx, (frame[0].o));
	LINE_NUMBER(199);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_drawing = (jint(1));
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:end", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(204);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_drawing) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SpriteBatch.begin must be called before end."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(205);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx) <= 0) goto label_2;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush])(ctx, sp[0].o);
label_2:;
	{
	LINE_NUMBER(206);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_lastTexture = (jref) (jobject(nullptr));
	LINE_NUMBER(207);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_drawing = (jint(0));
	LINE_NUMBER(209);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	frame[1].o = sp[0].o;
	LINE_NUMBER(210);
	((func_com_badlogic_gdx_graphics_GL20_glDepthMask_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDepthMask_boolean, (frame[1].o)))(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(211);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_isBlendingEnabled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_isBlendingEnabled_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_7;
	}
	{
	((func_com_badlogic_gdx_graphics_GL20_glDisable_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDisable_int, (frame[1].o)))(ctx, (frame[1].o), (3042));
	}
label_7:;
	LINE_NUMBER(212);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:setColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(217);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, (frame[1].o));
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_colorPacked = temp0;
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:setColor", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(223);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_colorPacked = temp0;
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getColor_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:getColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_color;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setPackedColor_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:setPackedColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_color;
	SM_com_badlogic_gdx_graphics_Color_abgr8888ToColor_com_badlogic_gdx_graphics_Color_float(ctx, sp[0].o, (frame[1].f));
	LINE_NUMBER(234);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_colorPacked = (frame[1].f);
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getPackedColor_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:getPackedColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float_float_int_int_int_int_boolean_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9, jint param10, jint param11, jint param12, jint param13, jbool param14, jbool param15) {
	NULL_CHECK(self);
	jtype frame[49];
	auto stack = &frame[46];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:draw", 49 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	frame[10].f = param9;
	frame[11].i = param10;
	frame[12].i = param11;
	frame[13].i = param12;
	frame[14].i = param13;
	frame[15].i = param14;
	frame[16].i = param15;
	{
	LINE_NUMBER(245);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_drawing) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SpriteBatch.begin must be called before draw."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[17].o = sp[0].o;
	LINE_NUMBER(249);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_lastTexture;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(250);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_switchTexture_com_badlogic_gdx_graphics_Texture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_switchTexture_com_badlogic_gdx_graphics_Texture])(ctx, (frame[0].o), (frame[1].o));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(251);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx) != (((jarray) nullCheck(ctx, (frame[17].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(252);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush])(ctx, (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(255);
	frame[18].f = ((frame[2].f) + (frame[4].f));
	LINE_NUMBER(256);
	frame[19].f = ((frame[3].f) + (frame[5].f));
	LINE_NUMBER(257);
	frame[20].f = (-(frame[4].f));
	LINE_NUMBER(258);
	frame[21].f = (-(frame[5].f));
	LINE_NUMBER(259);
	frame[22].f = ((frame[6].f) - (frame[4].f));
	LINE_NUMBER(260);
	frame[23].f = ((frame[7].f) - (frame[5].f));
	LINE_NUMBER(263);
	if ((floatCompare((frame[8].f), (jfloat(1)), -1)) != 0) goto label_13;
	}
	{
	if ((floatCompare((frame[9].f), (jfloat(1)), -1)) == 0) goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(264);
	frame[20].f = ((frame[20].f) * (frame[8].f));
	LINE_NUMBER(265);
	frame[21].f = ((frame[21].f) * (frame[9].f));
	LINE_NUMBER(266);
	frame[22].f = ((frame[22].f) * (frame[8].f));
	LINE_NUMBER(267);
	frame[23].f = ((frame[23].f) * (frame[9].f));
	}
label_14:;
	{
	LINE_NUMBER(271);
	frame[24].f = (frame[20].f);
	LINE_NUMBER(272);
	frame[25].f = (frame[21].f);
	LINE_NUMBER(273);
	frame[26].f = (frame[20].f);
	LINE_NUMBER(274);
	frame[27].f = (frame[23].f);
	LINE_NUMBER(275);
	frame[28].f = (frame[22].f);
	LINE_NUMBER(276);
	frame[29].f = (frame[23].f);
	LINE_NUMBER(277);
	frame[30].f = (frame[22].f);
	LINE_NUMBER(278);
	frame[31].f = (frame[21].f);
	LINE_NUMBER(290);
	if ((floatCompare((frame[10].f), (jfloat(0)), -1)) == 0) goto label_26;
	}
	{
	LINE_NUMBER(291);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cosDeg_float_R_float(ctx, (frame[10].f));
	frame[40].f = temp0;
	LINE_NUMBER(292);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sinDeg_float_R_float(ctx, (frame[10].f));
	frame[41].f = temp1;
	LINE_NUMBER(294);
	frame[32].f = (((frame[40].f) * (frame[24].f)) - ((frame[41].f) * (frame[25].f)));
	LINE_NUMBER(295);
	frame[33].f = (((frame[41].f) * (frame[24].f)) + ((frame[40].f) * (frame[25].f)));
	LINE_NUMBER(297);
	frame[34].f = (((frame[40].f) * (frame[26].f)) - ((frame[41].f) * (frame[27].f)));
	LINE_NUMBER(298);
	frame[35].f = (((frame[41].f) * (frame[26].f)) + ((frame[40].f) * (frame[27].f)));
	LINE_NUMBER(300);
	frame[36].f = (((frame[40].f) * (frame[28].f)) - ((frame[41].f) * (frame[29].f)));
	LINE_NUMBER(301);
	frame[37].f = (((frame[41].f) * (frame[28].f)) + ((frame[40].f) * (frame[29].f)));
	LINE_NUMBER(303);
	frame[38].f = ((frame[32].f) + ((frame[36].f) - (frame[34].f)));
	LINE_NUMBER(304);
	frame[39].f = ((frame[37].f) - ((frame[35].f) - (frame[33].f)));
	LINE_NUMBER(305);
	goto label_38;
	}
label_26:;
	{
	LINE_NUMBER(306);
	frame[32].f = (frame[24].f);
	LINE_NUMBER(307);
	frame[33].f = (frame[25].f);
	LINE_NUMBER(309);
	frame[34].f = (frame[26].f);
	LINE_NUMBER(310);
	frame[35].f = (frame[27].f);
	LINE_NUMBER(312);
	frame[36].f = (frame[28].f);
	LINE_NUMBER(313);
	frame[37].f = (frame[29].f);
	LINE_NUMBER(315);
	frame[38].f = (frame[30].f);
	LINE_NUMBER(316);
	frame[39].f = (frame[31].f);
	}
label_38:;
	{
	LINE_NUMBER(319);
	frame[32].f = ((frame[32].f) + (frame[18].f));
	LINE_NUMBER(320);
	frame[33].f = ((frame[33].f) + (frame[19].f));
	LINE_NUMBER(321);
	frame[34].f = ((frame[34].f) + (frame[18].f));
	LINE_NUMBER(322);
	frame[35].f = ((frame[35].f) + (frame[19].f));
	LINE_NUMBER(323);
	frame[36].f = ((frame[36].f) + (frame[18].f));
	LINE_NUMBER(324);
	frame[37].f = ((frame[37].f) + (frame[19].f));
	LINE_NUMBER(325);
	frame[38].f = ((frame[38].f) + (frame[18].f));
	LINE_NUMBER(326);
	frame[39].f = ((frame[39].f) + (frame[19].f));
	LINE_NUMBER(328);
	frame[40].f = ((jfloat((frame[11].i))) * ((jfloat)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_invTexWidth));
	LINE_NUMBER(329);
	frame[41].f = ((jfloat(((frame[12].i) + (frame[14].i)))) * ((jfloat)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_invTexHeight));
	LINE_NUMBER(330);
	frame[42].f = ((jfloat(((frame[11].i) + (frame[13].i)))) * ((jfloat)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_invTexWidth));
	LINE_NUMBER(331);
	frame[43].f = ((jfloat((frame[12].i))) * ((jfloat)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_invTexHeight));
	LINE_NUMBER(333);
	if ((frame[15].i) == 0) goto label_58;
	}
	{
	LINE_NUMBER(334);
	frame[44].f = (frame[40].f);
	LINE_NUMBER(335);
	frame[40].f = (frame[42].f);
	LINE_NUMBER(336);
	frame[42].f = (frame[44].f);
	}
label_58:;
	{
	LINE_NUMBER(339);
	if ((frame[16].i) == 0) goto label_62;
	}
	{
	LINE_NUMBER(340);
	frame[44].f = (frame[41].f);
	LINE_NUMBER(341);
	frame[41].f = (frame[43].f);
	LINE_NUMBER(342);
	frame[43].f = (frame[44].f);
	}
label_62:;
	{
	LINE_NUMBER(345);
	frame[44].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(346);
	frame[45].i = ((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx);
	LINE_NUMBER(347);
	ARRAY_ACCESS(jfloat, (frame[17].o), (frame[45].i)) = (frame[32].f);
	LINE_NUMBER(348);
	ARRAY_ACCESS(jfloat, (frame[17].o), ((frame[45].i) + (jint(1)))) = (frame[33].f);
	LINE_NUMBER(349);
	ARRAY_ACCESS(jfloat, (frame[17].o), ((frame[45].i) + (jint(2)))) = (frame[44].f);
	LINE_NUMBER(350);
	ARRAY_ACCESS(jfloat, (frame[17].o), ((frame[45].i) + (jint(3)))) = (frame[40].f);
	LINE_NUMBER(351);
	ARRAY_ACCESS(jfloat, (frame[17].o), ((frame[45].i) + (jint(4)))) = (frame[41].f);
	LINE_NUMBER(353);
	ARRAY_ACCESS(jfloat, (frame[17].o), ((frame[45].i) + (jint(5)))) = (frame[34].f);
	LINE_NUMBER(354);
	ARRAY_ACCESS(jfloat, (frame[17].o), ((frame[45].i) + (6))) = (frame[35].f);
	LINE_NUMBER(355);
	ARRAY_ACCESS(jfloat, (frame[17].o), ((frame[45].i) + (7))) = (frame[44].f);
	LINE_NUMBER(356);
	ARRAY_ACCESS(jfloat, (frame[17].o), ((frame[45].i) + (8))) = (frame[40].f);
	LINE_NUMBER(357);
	ARRAY_ACCESS(jfloat, (frame[17].o), ((frame[45].i) + (9))) = (frame[43].f);
	LINE_NUMBER(359);
	ARRAY_ACCESS(jfloat, (frame[17].o), ((frame[45].i) + (10))) = (frame[36].f);
	LINE_NUMBER(360);
	ARRAY_ACCESS(jfloat, (frame[17].o), ((frame[45].i) + (11))) = (frame[37].f);
	LINE_NUMBER(361);
	ARRAY_ACCESS(jfloat, (frame[17].o), ((frame[45].i) + (12))) = (frame[44].f);
	LINE_NUMBER(362);
	ARRAY_ACCESS(jfloat, (frame[17].o), ((frame[45].i) + (13))) = (frame[42].f);
	LINE_NUMBER(363);
	ARRAY_ACCESS(jfloat, (frame[17].o), ((frame[45].i) + (14))) = (frame[43].f);
	LINE_NUMBER(365);
	ARRAY_ACCESS(jfloat, (frame[17].o), ((frame[45].i) + (15))) = (frame[38].f);
	LINE_NUMBER(366);
	ARRAY_ACCESS(jfloat, (frame[17].o), ((frame[45].i) + (16))) = (frame[39].f);
	LINE_NUMBER(367);
	ARRAY_ACCESS(jfloat, (frame[17].o), ((frame[45].i) + (17))) = (frame[44].f);
	LINE_NUMBER(368);
	ARRAY_ACCESS(jfloat, (frame[17].o), ((frame[45].i) + (18))) = (frame[42].f);
	LINE_NUMBER(369);
	ARRAY_ACCESS(jfloat, (frame[17].o), ((frame[45].i) + (19))) = (frame[41].f);
	LINE_NUMBER(370);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx = ((frame[45].i) + (20));
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_int_int_int_int_boolean_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jint param5, jint param6, jint param7, jint param8, jbool param9, jbool param10) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[21];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:draw", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].i = param8;
	frame[10].i = param9;
	frame[11].i = param10;
	{
	LINE_NUMBER(376);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_drawing) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SpriteBatch.begin must be called before draw."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(378);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[12].o = sp[0].o;
	LINE_NUMBER(380);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_lastTexture;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(381);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_switchTexture_com_badlogic_gdx_graphics_Texture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_switchTexture_com_badlogic_gdx_graphics_Texture])(ctx, (frame[0].o), (frame[1].o));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(382);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx) != (((jarray) nullCheck(ctx, (frame[12].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(383);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush])(ctx, (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(385);
	frame[13].f = ((jfloat((frame[6].i))) * ((jfloat)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_invTexWidth));
	LINE_NUMBER(386);
	frame[14].f = ((jfloat(((frame[7].i) + (frame[9].i)))) * ((jfloat)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_invTexHeight));
	LINE_NUMBER(387);
	frame[15].f = ((jfloat(((frame[6].i) + (frame[8].i)))) * ((jfloat)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_invTexWidth));
	LINE_NUMBER(388);
	frame[16].f = ((jfloat((frame[7].i))) * ((jfloat)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_invTexHeight));
	LINE_NUMBER(389);
	frame[17].f = ((frame[2].f) + (frame[4].f));
	LINE_NUMBER(390);
	frame[18].f = ((frame[3].f) + (frame[5].f));
	LINE_NUMBER(392);
	if ((frame[10].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(393);
	frame[19].f = (frame[13].f);
	LINE_NUMBER(394);
	frame[13].f = (frame[15].f);
	LINE_NUMBER(395);
	frame[15].f = (frame[19].f);
	}
label_13:;
	{
	LINE_NUMBER(398);
	if ((frame[11].i) == 0) goto label_17;
	}
	{
	LINE_NUMBER(399);
	frame[19].f = (frame[14].f);
	LINE_NUMBER(400);
	frame[14].f = (frame[16].f);
	LINE_NUMBER(401);
	frame[16].f = (frame[19].f);
	}
label_17:;
	{
	LINE_NUMBER(404);
	frame[19].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(405);
	frame[20].i = ((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx);
	LINE_NUMBER(406);
	ARRAY_ACCESS(jfloat, (frame[12].o), (frame[20].i)) = (frame[2].f);
	LINE_NUMBER(407);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[20].i) + (jint(1)))) = (frame[3].f);
	LINE_NUMBER(408);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[20].i) + (jint(2)))) = (frame[19].f);
	LINE_NUMBER(409);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[20].i) + (jint(3)))) = (frame[13].f);
	LINE_NUMBER(410);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[20].i) + (jint(4)))) = (frame[14].f);
	LINE_NUMBER(412);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[20].i) + (jint(5)))) = (frame[2].f);
	LINE_NUMBER(413);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[20].i) + (6))) = (frame[18].f);
	LINE_NUMBER(414);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[20].i) + (7))) = (frame[19].f);
	LINE_NUMBER(415);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[20].i) + (8))) = (frame[13].f);
	LINE_NUMBER(416);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[20].i) + (9))) = (frame[16].f);
	LINE_NUMBER(418);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[20].i) + (10))) = (frame[17].f);
	LINE_NUMBER(419);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[20].i) + (11))) = (frame[18].f);
	LINE_NUMBER(420);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[20].i) + (12))) = (frame[19].f);
	LINE_NUMBER(421);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[20].i) + (13))) = (frame[15].f);
	LINE_NUMBER(422);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[20].i) + (14))) = (frame[16].f);
	LINE_NUMBER(424);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[20].i) + (15))) = (frame[17].f);
	LINE_NUMBER(425);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[20].i) + (16))) = (frame[3].f);
	LINE_NUMBER(426);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[20].i) + (17))) = (frame[19].f);
	LINE_NUMBER(427);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[20].i) + (18))) = (frame[15].f);
	LINE_NUMBER(428);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[20].i) + (19))) = (frame[14].f);
	LINE_NUMBER(429);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx = ((frame[20].i) + (20));
	LINE_NUMBER(430);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_int_int_int_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4, jint param5, jint param6) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:draw", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(434);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_drawing) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SpriteBatch.begin must be called before draw."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(436);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[8].o = sp[0].o;
	LINE_NUMBER(438);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_lastTexture;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(439);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_switchTexture_com_badlogic_gdx_graphics_Texture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_switchTexture_com_badlogic_gdx_graphics_Texture])(ctx, (frame[0].o), (frame[1].o));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(440);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx) != (((jarray) nullCheck(ctx, (frame[8].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(441);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush])(ctx, (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(443);
	frame[9].f = ((jfloat((frame[4].i))) * ((jfloat)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_invTexWidth));
	LINE_NUMBER(444);
	frame[10].f = ((jfloat(((frame[5].i) + (frame[7].i)))) * ((jfloat)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_invTexHeight));
	LINE_NUMBER(445);
	frame[11].f = ((jfloat(((frame[4].i) + (frame[6].i)))) * ((jfloat)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_invTexWidth));
	LINE_NUMBER(446);
	frame[12].f = ((jfloat((frame[5].i))) * ((jfloat)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_invTexHeight));
	LINE_NUMBER(447);
	frame[13].f = ((frame[2].f) + (jfloat((frame[6].i))));
	LINE_NUMBER(448);
	frame[14].f = ((frame[3].f) + (jfloat((frame[7].i))));
	LINE_NUMBER(450);
	frame[15].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(451);
	frame[16].i = ((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx);
	LINE_NUMBER(452);
	ARRAY_ACCESS(jfloat, (frame[8].o), (frame[16].i)) = (frame[2].f);
	LINE_NUMBER(453);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[16].i) + (jint(1)))) = (frame[3].f);
	LINE_NUMBER(454);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[16].i) + (jint(2)))) = (frame[15].f);
	LINE_NUMBER(455);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[16].i) + (jint(3)))) = (frame[9].f);
	LINE_NUMBER(456);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[16].i) + (jint(4)))) = (frame[10].f);
	LINE_NUMBER(458);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[16].i) + (jint(5)))) = (frame[2].f);
	LINE_NUMBER(459);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[16].i) + (6))) = (frame[14].f);
	LINE_NUMBER(460);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[16].i) + (7))) = (frame[15].f);
	LINE_NUMBER(461);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[16].i) + (8))) = (frame[9].f);
	LINE_NUMBER(462);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[16].i) + (9))) = (frame[12].f);
	LINE_NUMBER(464);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[16].i) + (10))) = (frame[13].f);
	LINE_NUMBER(465);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[16].i) + (11))) = (frame[14].f);
	LINE_NUMBER(466);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[16].i) + (12))) = (frame[15].f);
	LINE_NUMBER(467);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[16].i) + (13))) = (frame[11].f);
	LINE_NUMBER(468);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[16].i) + (14))) = (frame[12].f);
	LINE_NUMBER(470);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[16].i) + (15))) = (frame[13].f);
	LINE_NUMBER(471);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[16].i) + (16))) = (frame[3].f);
	LINE_NUMBER(472);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[16].i) + (17))) = (frame[15].f);
	LINE_NUMBER(473);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[16].i) + (18))) = (frame[11].f);
	LINE_NUMBER(474);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((frame[16].i) + (19))) = (frame[10].f);
	LINE_NUMBER(475);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx = ((frame[16].i) + (20));
	LINE_NUMBER(476);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:draw", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	{
	LINE_NUMBER(480);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_drawing) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SpriteBatch.begin must be called before draw."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(482);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[10].o = sp[0].o;
	LINE_NUMBER(484);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_lastTexture;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(485);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_switchTexture_com_badlogic_gdx_graphics_Texture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_switchTexture_com_badlogic_gdx_graphics_Texture])(ctx, (frame[0].o), (frame[1].o));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(486);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx) != (((jarray) nullCheck(ctx, (frame[10].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(487);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush])(ctx, (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(489);
	frame[11].f = ((frame[2].f) + (frame[4].f));
	LINE_NUMBER(490);
	frame[12].f = ((frame[3].f) + (frame[5].f));
	LINE_NUMBER(492);
	frame[13].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(493);
	frame[14].i = ((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx);
	LINE_NUMBER(494);
	ARRAY_ACCESS(jfloat, (frame[10].o), (frame[14].i)) = (frame[2].f);
	LINE_NUMBER(495);
	ARRAY_ACCESS(jfloat, (frame[10].o), ((frame[14].i) + (jint(1)))) = (frame[3].f);
	LINE_NUMBER(496);
	ARRAY_ACCESS(jfloat, (frame[10].o), ((frame[14].i) + (jint(2)))) = (frame[13].f);
	LINE_NUMBER(497);
	ARRAY_ACCESS(jfloat, (frame[10].o), ((frame[14].i) + (jint(3)))) = (frame[6].f);
	LINE_NUMBER(498);
	ARRAY_ACCESS(jfloat, (frame[10].o), ((frame[14].i) + (jint(4)))) = (frame[7].f);
	LINE_NUMBER(500);
	ARRAY_ACCESS(jfloat, (frame[10].o), ((frame[14].i) + (jint(5)))) = (frame[2].f);
	LINE_NUMBER(501);
	ARRAY_ACCESS(jfloat, (frame[10].o), ((frame[14].i) + (6))) = (frame[12].f);
	LINE_NUMBER(502);
	ARRAY_ACCESS(jfloat, (frame[10].o), ((frame[14].i) + (7))) = (frame[13].f);
	LINE_NUMBER(503);
	ARRAY_ACCESS(jfloat, (frame[10].o), ((frame[14].i) + (8))) = (frame[6].f);
	LINE_NUMBER(504);
	ARRAY_ACCESS(jfloat, (frame[10].o), ((frame[14].i) + (9))) = (frame[9].f);
	LINE_NUMBER(506);
	ARRAY_ACCESS(jfloat, (frame[10].o), ((frame[14].i) + (10))) = (frame[11].f);
	LINE_NUMBER(507);
	ARRAY_ACCESS(jfloat, (frame[10].o), ((frame[14].i) + (11))) = (frame[12].f);
	LINE_NUMBER(508);
	ARRAY_ACCESS(jfloat, (frame[10].o), ((frame[14].i) + (12))) = (frame[13].f);
	LINE_NUMBER(509);
	ARRAY_ACCESS(jfloat, (frame[10].o), ((frame[14].i) + (13))) = (frame[8].f);
	LINE_NUMBER(510);
	ARRAY_ACCESS(jfloat, (frame[10].o), ((frame[14].i) + (14))) = (frame[9].f);
	LINE_NUMBER(512);
	ARRAY_ACCESS(jfloat, (frame[10].o), ((frame[14].i) + (15))) = (frame[11].f);
	LINE_NUMBER(513);
	ARRAY_ACCESS(jfloat, (frame[10].o), ((frame[14].i) + (16))) = (frame[3].f);
	LINE_NUMBER(514);
	ARRAY_ACCESS(jfloat, (frame[10].o), ((frame[14].i) + (17))) = (frame[13].f);
	LINE_NUMBER(515);
	ARRAY_ACCESS(jfloat, (frame[10].o), ((frame[14].i) + (18))) = (frame[8].f);
	LINE_NUMBER(516);
	ARRAY_ACCESS(jfloat, (frame[10].o), ((frame[14].i) + (19))) = (frame[7].f);
	LINE_NUMBER(517);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx = ((frame[14].i) + (20));
	LINE_NUMBER(518);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:draw", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(522);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Texture_getWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getWidth_R_int])(ctx, (frame[1].o));
	jfloat temp3 = jfloat(temp2);
	jint temp4 = (jint)((func_com_badlogic_gdx_graphics_Texture_getHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getHeight_R_int])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp3, (jfloat(temp4)));
	LINE_NUMBER(523);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:draw", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(527);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_drawing) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SpriteBatch.begin must be called before draw."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(529);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[6].o = sp[0].o;
	LINE_NUMBER(531);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_lastTexture;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(532);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_switchTexture_com_badlogic_gdx_graphics_Texture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_switchTexture_com_badlogic_gdx_graphics_Texture])(ctx, (frame[0].o), (frame[1].o));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(533);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx) != (((jarray) nullCheck(ctx, (frame[6].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(534);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush])(ctx, (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(536);
	frame[7].f = ((frame[2].f) + (frame[4].f));
	LINE_NUMBER(537);
	frame[8].f = ((frame[3].f) + (frame[5].f));
	LINE_NUMBER(538);
	frame[9].f = (jfloat(0));
	LINE_NUMBER(539);
	frame[10].f = (jfloat(1));
	LINE_NUMBER(540);
	frame[11].f = (jfloat(1));
	LINE_NUMBER(541);
	frame[12].f = (jfloat(0));
	LINE_NUMBER(543);
	frame[13].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(544);
	frame[14].i = ((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx);
	LINE_NUMBER(545);
	ARRAY_ACCESS(jfloat, (frame[6].o), (frame[14].i)) = (frame[2].f);
	LINE_NUMBER(546);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[14].i) + (jint(1)))) = (frame[3].f);
	LINE_NUMBER(547);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[14].i) + (jint(2)))) = (frame[13].f);
	LINE_NUMBER(548);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[14].i) + (jint(3)))) = (jfloat(0));
	LINE_NUMBER(549);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[14].i) + (jint(4)))) = (jfloat(1));
	LINE_NUMBER(551);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[14].i) + (jint(5)))) = (frame[2].f);
	LINE_NUMBER(552);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[14].i) + (6))) = (frame[8].f);
	LINE_NUMBER(553);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[14].i) + (7))) = (frame[13].f);
	LINE_NUMBER(554);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[14].i) + (8))) = (jfloat(0));
	LINE_NUMBER(555);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[14].i) + (9))) = (jfloat(0));
	LINE_NUMBER(557);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[14].i) + (10))) = (frame[7].f);
	LINE_NUMBER(558);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[14].i) + (11))) = (frame[8].f);
	LINE_NUMBER(559);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[14].i) + (12))) = (frame[13].f);
	LINE_NUMBER(560);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[14].i) + (13))) = (jfloat(1));
	LINE_NUMBER(561);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[14].i) + (14))) = (jfloat(0));
	LINE_NUMBER(563);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[14].i) + (15))) = (frame[7].f);
	LINE_NUMBER(564);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[14].i) + (16))) = (frame[3].f);
	LINE_NUMBER(565);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[14].i) + (17))) = (frame[13].f);
	LINE_NUMBER(566);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[14].i) + (18))) = (jfloat(1));
	LINE_NUMBER(567);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[14].i) + (19))) = (jfloat(1));
	LINE_NUMBER(568);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx = ((frame[14].i) + (20));
	LINE_NUMBER(569);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:draw", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(573);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_drawing) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SpriteBatch.begin must be called before draw."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(575);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[5].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(576);
	frame[6].i = (frame[5].i);
	LINE_NUMBER(577);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_lastTexture;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(578);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_switchTexture_com_badlogic_gdx_graphics_Texture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_switchTexture_com_badlogic_gdx_graphics_Texture])(ctx, (frame[0].o), (frame[1].o));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(580);
	frame[6].i = ((frame[6].i) - ((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx));
	LINE_NUMBER(581);
	if ((frame[6].i) != 0) goto label_6;
	}
	{
	LINE_NUMBER(582);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush])(ctx, (frame[0].o));
	LINE_NUMBER(583);
	frame[6].i = (frame[5].i);
	}
label_6:;
	{
	LINE_NUMBER(586);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[6].i), (frame[4].i));
	frame[7].i = temp0;
	LINE_NUMBER(588);
	sp[0].o = frame[2].o;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, ((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx), (frame[7].i));
	LINE_NUMBER(589);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_idx = (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_idx) + (frame[7].i));
	LINE_NUMBER(590);
	frame[4].i = ((frame[4].i) - (frame[7].i));
	}
label_13:;
	{
	LINE_NUMBER(591);
	if ((frame[4].i) <= 0) goto label_14;
	}
	{
	LINE_NUMBER(592);
	frame[3].i = ((frame[3].i) + (frame[7].i));
	LINE_NUMBER(593);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush])(ctx, (frame[0].o));
	LINE_NUMBER(594);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[5].i), (frame[4].i));
	frame[7].i = temp0;
	LINE_NUMBER(595);
	sp[0].o = frame[2].o;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, (jint(0)), (frame[7].i));
	LINE_NUMBER(596);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_idx = (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_idx) + (frame[7].i));
	LINE_NUMBER(597);
	frame[4].i = ((frame[4].i) - (frame[7].i));
	goto label_13;
	}
label_14:;
	LINE_NUMBER(599);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:draw", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(603);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int])(ctx, (frame[1].o));
	jfloat temp3 = jfloat(temp2);
	jint temp4 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_float_float])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp3, (jfloat(temp4)));
	LINE_NUMBER(604);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:draw", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(608);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_drawing) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SpriteBatch.begin must be called before draw."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(610);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[6].o = sp[0].o;
	LINE_NUMBER(612);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_texture;
	frame[7].o = sp[0].o;
	LINE_NUMBER(613);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_lastTexture;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(614);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_switchTexture_com_badlogic_gdx_graphics_Texture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_switchTexture_com_badlogic_gdx_graphics_Texture])(ctx, (frame[0].o), (frame[7].o));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(615);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx) != (((jarray) nullCheck(ctx, (frame[6].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(616);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush])(ctx, (frame[0].o));
	}
label_6:;
	{
	LINE_NUMBER(618);
	frame[8].f = ((frame[2].f) + (frame[4].f));
	LINE_NUMBER(619);
	frame[9].f = ((frame[3].f) + (frame[5].f));
	LINE_NUMBER(620);
	frame[10].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u);
	LINE_NUMBER(621);
	frame[11].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v2);
	LINE_NUMBER(622);
	frame[12].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u2);
	LINE_NUMBER(623);
	frame[13].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v);
	LINE_NUMBER(625);
	frame[14].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(626);
	frame[15].i = ((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx);
	LINE_NUMBER(627);
	ARRAY_ACCESS(jfloat, (frame[6].o), (frame[15].i)) = (frame[2].f);
	LINE_NUMBER(628);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[15].i) + (jint(1)))) = (frame[3].f);
	LINE_NUMBER(629);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[15].i) + (jint(2)))) = (frame[14].f);
	LINE_NUMBER(630);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[15].i) + (jint(3)))) = (frame[10].f);
	LINE_NUMBER(631);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[15].i) + (jint(4)))) = (frame[11].f);
	LINE_NUMBER(633);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[15].i) + (jint(5)))) = (frame[2].f);
	LINE_NUMBER(634);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[15].i) + (6))) = (frame[9].f);
	LINE_NUMBER(635);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[15].i) + (7))) = (frame[14].f);
	LINE_NUMBER(636);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[15].i) + (8))) = (frame[10].f);
	LINE_NUMBER(637);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[15].i) + (9))) = (frame[13].f);
	LINE_NUMBER(639);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[15].i) + (10))) = (frame[8].f);
	LINE_NUMBER(640);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[15].i) + (11))) = (frame[9].f);
	LINE_NUMBER(641);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[15].i) + (12))) = (frame[14].f);
	LINE_NUMBER(642);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[15].i) + (13))) = (frame[12].f);
	LINE_NUMBER(643);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[15].i) + (14))) = (frame[13].f);
	LINE_NUMBER(645);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[15].i) + (15))) = (frame[8].f);
	LINE_NUMBER(646);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[15].i) + (16))) = (frame[3].f);
	LINE_NUMBER(647);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[15].i) + (17))) = (frame[14].f);
	LINE_NUMBER(648);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[15].i) + (18))) = (frame[12].f);
	LINE_NUMBER(649);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[15].i) + (19))) = (frame[11].f);
	LINE_NUMBER(650);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx = ((frame[15].i) + (20));
	LINE_NUMBER(651);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9) {
	NULL_CHECK(self);
	jtype frame[44];
	auto stack = &frame[41];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:draw", 44 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	frame[10].f = param9;
	{
	LINE_NUMBER(656);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_drawing) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SpriteBatch.begin must be called before draw."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(658);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[11].o = sp[0].o;
	LINE_NUMBER(660);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_texture;
	frame[12].o = sp[0].o;
	LINE_NUMBER(661);
	sp[0].o = frame[12].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_lastTexture;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(662);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_switchTexture_com_badlogic_gdx_graphics_Texture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_switchTexture_com_badlogic_gdx_graphics_Texture])(ctx, (frame[0].o), (frame[12].o));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(663);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx) != (((jarray) nullCheck(ctx, (frame[11].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(664);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush])(ctx, (frame[0].o));
	}
label_6:;
	{
	LINE_NUMBER(667);
	frame[13].f = ((frame[2].f) + (frame[4].f));
	LINE_NUMBER(668);
	frame[14].f = ((frame[3].f) + (frame[5].f));
	LINE_NUMBER(669);
	frame[15].f = (-(frame[4].f));
	LINE_NUMBER(670);
	frame[16].f = (-(frame[5].f));
	LINE_NUMBER(671);
	frame[17].f = ((frame[6].f) - (frame[4].f));
	LINE_NUMBER(672);
	frame[18].f = ((frame[7].f) - (frame[5].f));
	LINE_NUMBER(675);
	if ((floatCompare((frame[8].f), (jfloat(1)), -1)) != 0) goto label_14;
	}
	{
	if ((floatCompare((frame[9].f), (jfloat(1)), -1)) == 0) goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(676);
	frame[15].f = ((frame[15].f) * (frame[8].f));
	LINE_NUMBER(677);
	frame[16].f = ((frame[16].f) * (frame[9].f));
	LINE_NUMBER(678);
	frame[17].f = ((frame[17].f) * (frame[8].f));
	LINE_NUMBER(679);
	frame[18].f = ((frame[18].f) * (frame[9].f));
	}
label_15:;
	{
	LINE_NUMBER(683);
	frame[19].f = (frame[15].f);
	LINE_NUMBER(684);
	frame[20].f = (frame[16].f);
	LINE_NUMBER(685);
	frame[21].f = (frame[15].f);
	LINE_NUMBER(686);
	frame[22].f = (frame[18].f);
	LINE_NUMBER(687);
	frame[23].f = (frame[17].f);
	LINE_NUMBER(688);
	frame[24].f = (frame[18].f);
	LINE_NUMBER(689);
	frame[25].f = (frame[17].f);
	LINE_NUMBER(690);
	frame[26].f = (frame[16].f);
	LINE_NUMBER(702);
	if ((floatCompare((frame[10].f), (jfloat(0)), -1)) == 0) goto label_27;
	}
	{
	LINE_NUMBER(703);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cosDeg_float_R_float(ctx, (frame[10].f));
	frame[35].f = temp0;
	LINE_NUMBER(704);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sinDeg_float_R_float(ctx, (frame[10].f));
	frame[36].f = temp1;
	LINE_NUMBER(706);
	frame[27].f = (((frame[35].f) * (frame[19].f)) - ((frame[36].f) * (frame[20].f)));
	LINE_NUMBER(707);
	frame[28].f = (((frame[36].f) * (frame[19].f)) + ((frame[35].f) * (frame[20].f)));
	LINE_NUMBER(709);
	frame[29].f = (((frame[35].f) * (frame[21].f)) - ((frame[36].f) * (frame[22].f)));
	LINE_NUMBER(710);
	frame[30].f = (((frame[36].f) * (frame[21].f)) + ((frame[35].f) * (frame[22].f)));
	LINE_NUMBER(712);
	frame[31].f = (((frame[35].f) * (frame[23].f)) - ((frame[36].f) * (frame[24].f)));
	LINE_NUMBER(713);
	frame[32].f = (((frame[36].f) * (frame[23].f)) + ((frame[35].f) * (frame[24].f)));
	LINE_NUMBER(715);
	frame[33].f = ((frame[27].f) + ((frame[31].f) - (frame[29].f)));
	LINE_NUMBER(716);
	frame[34].f = ((frame[32].f) - ((frame[30].f) - (frame[28].f)));
	LINE_NUMBER(717);
	goto label_39;
	}
label_27:;
	{
	LINE_NUMBER(718);
	frame[27].f = (frame[19].f);
	LINE_NUMBER(719);
	frame[28].f = (frame[20].f);
	LINE_NUMBER(721);
	frame[29].f = (frame[21].f);
	LINE_NUMBER(722);
	frame[30].f = (frame[22].f);
	LINE_NUMBER(724);
	frame[31].f = (frame[23].f);
	LINE_NUMBER(725);
	frame[32].f = (frame[24].f);
	LINE_NUMBER(727);
	frame[33].f = (frame[25].f);
	LINE_NUMBER(728);
	frame[34].f = (frame[26].f);
	}
label_39:;
	{
	LINE_NUMBER(731);
	frame[27].f = ((frame[27].f) + (frame[13].f));
	LINE_NUMBER(732);
	frame[28].f = ((frame[28].f) + (frame[14].f));
	LINE_NUMBER(733);
	frame[29].f = ((frame[29].f) + (frame[13].f));
	LINE_NUMBER(734);
	frame[30].f = ((frame[30].f) + (frame[14].f));
	LINE_NUMBER(735);
	frame[31].f = ((frame[31].f) + (frame[13].f));
	LINE_NUMBER(736);
	frame[32].f = ((frame[32].f) + (frame[14].f));
	LINE_NUMBER(737);
	frame[33].f = ((frame[33].f) + (frame[13].f));
	LINE_NUMBER(738);
	frame[34].f = ((frame[34].f) + (frame[14].f));
	LINE_NUMBER(740);
	frame[35].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u);
	LINE_NUMBER(741);
	frame[36].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v2);
	LINE_NUMBER(742);
	frame[37].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u2);
	LINE_NUMBER(743);
	frame[38].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v);
	LINE_NUMBER(745);
	frame[39].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(746);
	frame[40].i = ((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx);
	LINE_NUMBER(747);
	ARRAY_ACCESS(jfloat, (frame[11].o), (frame[40].i)) = (frame[27].f);
	LINE_NUMBER(748);
	ARRAY_ACCESS(jfloat, (frame[11].o), ((frame[40].i) + (jint(1)))) = (frame[28].f);
	LINE_NUMBER(749);
	ARRAY_ACCESS(jfloat, (frame[11].o), ((frame[40].i) + (jint(2)))) = (frame[39].f);
	LINE_NUMBER(750);
	ARRAY_ACCESS(jfloat, (frame[11].o), ((frame[40].i) + (jint(3)))) = (frame[35].f);
	LINE_NUMBER(751);
	ARRAY_ACCESS(jfloat, (frame[11].o), ((frame[40].i) + (jint(4)))) = (frame[36].f);
	LINE_NUMBER(753);
	ARRAY_ACCESS(jfloat, (frame[11].o), ((frame[40].i) + (jint(5)))) = (frame[29].f);
	LINE_NUMBER(754);
	ARRAY_ACCESS(jfloat, (frame[11].o), ((frame[40].i) + (6))) = (frame[30].f);
	LINE_NUMBER(755);
	ARRAY_ACCESS(jfloat, (frame[11].o), ((frame[40].i) + (7))) = (frame[39].f);
	LINE_NUMBER(756);
	ARRAY_ACCESS(jfloat, (frame[11].o), ((frame[40].i) + (8))) = (frame[35].f);
	LINE_NUMBER(757);
	ARRAY_ACCESS(jfloat, (frame[11].o), ((frame[40].i) + (9))) = (frame[38].f);
	LINE_NUMBER(759);
	ARRAY_ACCESS(jfloat, (frame[11].o), ((frame[40].i) + (10))) = (frame[31].f);
	LINE_NUMBER(760);
	ARRAY_ACCESS(jfloat, (frame[11].o), ((frame[40].i) + (11))) = (frame[32].f);
	LINE_NUMBER(761);
	ARRAY_ACCESS(jfloat, (frame[11].o), ((frame[40].i) + (12))) = (frame[39].f);
	LINE_NUMBER(762);
	ARRAY_ACCESS(jfloat, (frame[11].o), ((frame[40].i) + (13))) = (frame[37].f);
	LINE_NUMBER(763);
	ARRAY_ACCESS(jfloat, (frame[11].o), ((frame[40].i) + (14))) = (frame[38].f);
	LINE_NUMBER(765);
	ARRAY_ACCESS(jfloat, (frame[11].o), ((frame[40].i) + (15))) = (frame[33].f);
	LINE_NUMBER(766);
	ARRAY_ACCESS(jfloat, (frame[11].o), ((frame[40].i) + (16))) = (frame[34].f);
	LINE_NUMBER(767);
	ARRAY_ACCESS(jfloat, (frame[11].o), ((frame[40].i) + (17))) = (frame[39].f);
	LINE_NUMBER(768);
	ARRAY_ACCESS(jfloat, (frame[11].o), ((frame[40].i) + (18))) = (frame[37].f);
	LINE_NUMBER(769);
	ARRAY_ACCESS(jfloat, (frame[11].o), ((frame[40].i) + (19))) = (frame[36].f);
	LINE_NUMBER(770);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx = ((frame[40].i) + (20));
	LINE_NUMBER(771);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9, jbool param10) {
	NULL_CHECK(self);
	jtype frame[49];
	auto stack = &frame[46];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:draw", 49 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	frame[10].f = param9;
	frame[11].i = param10;
	{
	LINE_NUMBER(776);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_drawing) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SpriteBatch.begin must be called before draw."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(778);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[12].o = sp[0].o;
	LINE_NUMBER(780);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_texture;
	frame[13].o = sp[0].o;
	LINE_NUMBER(781);
	sp[0].o = frame[13].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_lastTexture;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(782);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_switchTexture_com_badlogic_gdx_graphics_Texture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_switchTexture_com_badlogic_gdx_graphics_Texture])(ctx, (frame[0].o), (frame[13].o));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(783);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx) != (((jarray) nullCheck(ctx, (frame[12].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(784);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush])(ctx, (frame[0].o));
	}
label_6:;
	{
	LINE_NUMBER(787);
	frame[14].f = ((frame[2].f) + (frame[4].f));
	LINE_NUMBER(788);
	frame[15].f = ((frame[3].f) + (frame[5].f));
	LINE_NUMBER(789);
	frame[16].f = (-(frame[4].f));
	LINE_NUMBER(790);
	frame[17].f = (-(frame[5].f));
	LINE_NUMBER(791);
	frame[18].f = ((frame[6].f) - (frame[4].f));
	LINE_NUMBER(792);
	frame[19].f = ((frame[7].f) - (frame[5].f));
	LINE_NUMBER(795);
	if ((floatCompare((frame[8].f), (jfloat(1)), -1)) != 0) goto label_14;
	}
	{
	if ((floatCompare((frame[9].f), (jfloat(1)), -1)) == 0) goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(796);
	frame[16].f = ((frame[16].f) * (frame[8].f));
	LINE_NUMBER(797);
	frame[17].f = ((frame[17].f) * (frame[9].f));
	LINE_NUMBER(798);
	frame[18].f = ((frame[18].f) * (frame[8].f));
	LINE_NUMBER(799);
	frame[19].f = ((frame[19].f) * (frame[9].f));
	}
label_15:;
	{
	LINE_NUMBER(803);
	frame[20].f = (frame[16].f);
	LINE_NUMBER(804);
	frame[21].f = (frame[17].f);
	LINE_NUMBER(805);
	frame[22].f = (frame[16].f);
	LINE_NUMBER(806);
	frame[23].f = (frame[19].f);
	LINE_NUMBER(807);
	frame[24].f = (frame[18].f);
	LINE_NUMBER(808);
	frame[25].f = (frame[19].f);
	LINE_NUMBER(809);
	frame[26].f = (frame[18].f);
	LINE_NUMBER(810);
	frame[27].f = (frame[17].f);
	LINE_NUMBER(822);
	if ((floatCompare((frame[10].f), (jfloat(0)), -1)) == 0) goto label_27;
	}
	{
	LINE_NUMBER(823);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cosDeg_float_R_float(ctx, (frame[10].f));
	frame[36].f = temp0;
	LINE_NUMBER(824);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sinDeg_float_R_float(ctx, (frame[10].f));
	frame[37].f = temp1;
	LINE_NUMBER(826);
	frame[28].f = (((frame[36].f) * (frame[20].f)) - ((frame[37].f) * (frame[21].f)));
	LINE_NUMBER(827);
	frame[29].f = (((frame[37].f) * (frame[20].f)) + ((frame[36].f) * (frame[21].f)));
	LINE_NUMBER(829);
	frame[30].f = (((frame[36].f) * (frame[22].f)) - ((frame[37].f) * (frame[23].f)));
	LINE_NUMBER(830);
	frame[31].f = (((frame[37].f) * (frame[22].f)) + ((frame[36].f) * (frame[23].f)));
	LINE_NUMBER(832);
	frame[32].f = (((frame[36].f) * (frame[24].f)) - ((frame[37].f) * (frame[25].f)));
	LINE_NUMBER(833);
	frame[33].f = (((frame[37].f) * (frame[24].f)) + ((frame[36].f) * (frame[25].f)));
	LINE_NUMBER(835);
	frame[34].f = ((frame[28].f) + ((frame[32].f) - (frame[30].f)));
	LINE_NUMBER(836);
	frame[35].f = ((frame[33].f) - ((frame[31].f) - (frame[29].f)));
	LINE_NUMBER(837);
	goto label_39;
	}
label_27:;
	{
	LINE_NUMBER(838);
	frame[28].f = (frame[20].f);
	LINE_NUMBER(839);
	frame[29].f = (frame[21].f);
	LINE_NUMBER(841);
	frame[30].f = (frame[22].f);
	LINE_NUMBER(842);
	frame[31].f = (frame[23].f);
	LINE_NUMBER(844);
	frame[32].f = (frame[24].f);
	LINE_NUMBER(845);
	frame[33].f = (frame[25].f);
	LINE_NUMBER(847);
	frame[34].f = (frame[26].f);
	LINE_NUMBER(848);
	frame[35].f = (frame[27].f);
	}
label_39:;
	{
	LINE_NUMBER(851);
	frame[28].f = ((frame[28].f) + (frame[14].f));
	LINE_NUMBER(852);
	frame[29].f = ((frame[29].f) + (frame[15].f));
	LINE_NUMBER(853);
	frame[30].f = ((frame[30].f) + (frame[14].f));
	LINE_NUMBER(854);
	frame[31].f = ((frame[31].f) + (frame[15].f));
	LINE_NUMBER(855);
	frame[32].f = ((frame[32].f) + (frame[14].f));
	LINE_NUMBER(856);
	frame[33].f = ((frame[33].f) + (frame[15].f));
	LINE_NUMBER(857);
	frame[34].f = ((frame[34].f) + (frame[14].f));
	LINE_NUMBER(858);
	frame[35].f = ((frame[35].f) + (frame[15].f));
	LINE_NUMBER(861);
	if ((frame[11].i) == 0) goto label_55;
	}
	{
	LINE_NUMBER(862);
	frame[36].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u2);
	LINE_NUMBER(863);
	frame[37].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v2);
	LINE_NUMBER(864);
	frame[38].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u);
	LINE_NUMBER(865);
	frame[39].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v2);
	LINE_NUMBER(866);
	frame[40].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u);
	LINE_NUMBER(867);
	frame[41].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v);
	LINE_NUMBER(868);
	frame[42].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u2);
	LINE_NUMBER(869);
	frame[43].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v);
	goto label_65;
	}
label_55:;
	{
	LINE_NUMBER(871);
	frame[36].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u);
	LINE_NUMBER(872);
	frame[37].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v);
	LINE_NUMBER(873);
	frame[38].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u2);
	LINE_NUMBER(874);
	frame[39].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v);
	LINE_NUMBER(875);
	frame[40].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u2);
	LINE_NUMBER(876);
	frame[41].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v2);
	LINE_NUMBER(877);
	frame[42].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u);
	LINE_NUMBER(878);
	frame[43].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v2);
	}
label_65:;
	{
	LINE_NUMBER(881);
	frame[44].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(882);
	frame[45].i = ((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx);
	LINE_NUMBER(883);
	ARRAY_ACCESS(jfloat, (frame[12].o), (frame[45].i)) = (frame[28].f);
	LINE_NUMBER(884);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[45].i) + (jint(1)))) = (frame[29].f);
	LINE_NUMBER(885);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[45].i) + (jint(2)))) = (frame[44].f);
	LINE_NUMBER(886);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[45].i) + (jint(3)))) = (frame[36].f);
	LINE_NUMBER(887);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[45].i) + (jint(4)))) = (frame[37].f);
	LINE_NUMBER(889);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[45].i) + (jint(5)))) = (frame[30].f);
	LINE_NUMBER(890);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[45].i) + (6))) = (frame[31].f);
	LINE_NUMBER(891);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[45].i) + (7))) = (frame[44].f);
	LINE_NUMBER(892);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[45].i) + (8))) = (frame[38].f);
	LINE_NUMBER(893);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[45].i) + (9))) = (frame[39].f);
	LINE_NUMBER(895);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[45].i) + (10))) = (frame[32].f);
	LINE_NUMBER(896);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[45].i) + (11))) = (frame[33].f);
	LINE_NUMBER(897);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[45].i) + (12))) = (frame[44].f);
	LINE_NUMBER(898);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[45].i) + (13))) = (frame[40].f);
	LINE_NUMBER(899);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[45].i) + (14))) = (frame[41].f);
	LINE_NUMBER(901);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[45].i) + (15))) = (frame[34].f);
	LINE_NUMBER(902);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[45].i) + (16))) = (frame[35].f);
	LINE_NUMBER(903);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[45].i) + (17))) = (frame[44].f);
	LINE_NUMBER(904);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[45].i) + (18))) = (frame[42].f);
	LINE_NUMBER(905);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[45].i) + (19))) = (frame[43].f);
	LINE_NUMBER(906);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx = ((frame[45].i) + (20));
	LINE_NUMBER(907);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_com_badlogic_gdx_math_Affine2(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[21];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:draw", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(911);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_drawing) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SpriteBatch.begin must be called before draw."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(913);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[5].o = sp[0].o;
	LINE_NUMBER(915);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_texture;
	frame[6].o = sp[0].o;
	LINE_NUMBER(916);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_lastTexture;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(917);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_switchTexture_com_badlogic_gdx_graphics_Texture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_switchTexture_com_badlogic_gdx_graphics_Texture])(ctx, (frame[0].o), (frame[6].o));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(918);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx) != (((jarray) nullCheck(ctx, (frame[5].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(919);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush])(ctx, (frame[0].o));
	}
label_6:;
	{
	LINE_NUMBER(923);
	frame[7].f = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[4].o)))->F_m02);
	LINE_NUMBER(924);
	frame[8].f = ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[4].o)))->F_m12);
	LINE_NUMBER(925);
	frame[9].f = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[4].o)))->F_m01) * (frame[3].f)) + ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[4].o)))->F_m02));
	LINE_NUMBER(926);
	frame[10].f = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[4].o)))->F_m11) * (frame[3].f)) + ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[4].o)))->F_m12));
	LINE_NUMBER(927);
	frame[11].f = (((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[4].o)))->F_m00) * (frame[2].f)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[4].o)))->F_m01) * (frame[3].f))) + ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[4].o)))->F_m02));
	LINE_NUMBER(928);
	frame[12].f = (((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[4].o)))->F_m10) * (frame[2].f)) + (((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[4].o)))->F_m11) * (frame[3].f))) + ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[4].o)))->F_m12));
	LINE_NUMBER(929);
	frame[13].f = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[4].o)))->F_m00) * (frame[2].f)) + ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[4].o)))->F_m02));
	LINE_NUMBER(930);
	frame[14].f = ((((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[4].o)))->F_m10) * (frame[2].f)) + ((jfloat)((com_badlogic_gdx_math_Affine2 *) NULL_CHECK((frame[4].o)))->F_m12));
	LINE_NUMBER(932);
	frame[15].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u);
	LINE_NUMBER(933);
	frame[16].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v2);
	LINE_NUMBER(934);
	frame[17].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u2);
	LINE_NUMBER(935);
	frame[18].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v);
	LINE_NUMBER(937);
	frame[19].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(938);
	frame[20].i = ((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx);
	LINE_NUMBER(939);
	ARRAY_ACCESS(jfloat, (frame[5].o), (frame[20].i)) = (frame[7].f);
	LINE_NUMBER(940);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[20].i) + (jint(1)))) = (frame[8].f);
	LINE_NUMBER(941);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[20].i) + (jint(2)))) = (frame[19].f);
	LINE_NUMBER(942);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[20].i) + (jint(3)))) = (frame[15].f);
	LINE_NUMBER(943);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[20].i) + (jint(4)))) = (frame[16].f);
	LINE_NUMBER(945);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[20].i) + (jint(5)))) = (frame[9].f);
	LINE_NUMBER(946);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[20].i) + (6))) = (frame[10].f);
	LINE_NUMBER(947);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[20].i) + (7))) = (frame[19].f);
	LINE_NUMBER(948);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[20].i) + (8))) = (frame[15].f);
	LINE_NUMBER(949);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[20].i) + (9))) = (frame[18].f);
	LINE_NUMBER(951);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[20].i) + (10))) = (frame[11].f);
	LINE_NUMBER(952);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[20].i) + (11))) = (frame[12].f);
	LINE_NUMBER(953);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[20].i) + (12))) = (frame[19].f);
	LINE_NUMBER(954);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[20].i) + (13))) = (frame[17].f);
	LINE_NUMBER(955);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[20].i) + (14))) = (frame[18].f);
	LINE_NUMBER(957);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[20].i) + (15))) = (frame[13].f);
	LINE_NUMBER(958);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[20].i) + (16))) = (frame[14].f);
	LINE_NUMBER(959);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[20].i) + (17))) = (frame[19].f);
	LINE_NUMBER(960);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[20].i) + (18))) = (frame[17].f);
	LINE_NUMBER(961);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[20].i) + (19))) = (frame[16].f);
	LINE_NUMBER(962);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx = ((frame[20].i) + (20));
	LINE_NUMBER(963);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:flush", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(967);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(969);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_renderCalls = (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_renderCalls) + (jint(1)));
	LINE_NUMBER(970);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_totalRenderCalls = (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_totalRenderCalls) + (jint(1)));
	LINE_NUMBER(971);
	frame[1].i = (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx) / (20));
	LINE_NUMBER(972);
	if ((frame[1].i) <= ((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_maxSpritesInBatch)) goto label_5;
	}
	{
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_maxSpritesInBatch = (frame[1].i);
	}
label_5:;
	{
	LINE_NUMBER(973);
	frame[2].i = ((frame[1].i) * (6));
	LINE_NUMBER(975);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_lastTexture;
	((func_com_badlogic_gdx_graphics_Texture_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_bind])(ctx, sp[0].o);
	LINE_NUMBER(976);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_mesh;
	frame[3].o = sp[0].o;
	LINE_NUMBER(977);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_setVertices_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_setVertices_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx));
	LINE_NUMBER(980);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_currentDataType;
	clinit_com_badlogic_gdx_graphics_Mesh$VertexDataType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Mesh$VertexDataType_VertexArray;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(981);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getIndicesBuffer_boolean_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getIndicesBuffer_boolean_R_java_nio_ShortBuffer])(ctx, (frame[3].o), (jint(1)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(982);
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, (frame[4].o), (jint(0)));
	LINE_NUMBER(983);
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, (frame[4].o), (frame[2].i));
	}
label_10:;
	{
	LINE_NUMBER(986);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendingDisabled) == 0) goto label_14;
	}
	{
	LINE_NUMBER(987);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glDisable_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDisable_int, sp[0].o))(ctx, sp[0].o, (3042));
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(989);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glEnable_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glEnable_int, sp[0].o))(ctx, sp[0].o, (3042));
	LINE_NUMBER(990);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendSrcFunc) == (jint(-1))) goto label_16;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glBlendFuncSeparate_int_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBlendFuncSeparate_int_int_int_int, sp[0].o))(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendSrcFunc), ((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendDstFunc), ((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendSrcFuncAlpha), ((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendDstFuncAlpha));
	}
label_16:;
	{
	LINE_NUMBER(993);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_customShader;
	sp += 1;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_customShader;
	sp += 1;
	goto label_19;
	}
label_18:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[-1].o))->F_shader;
label_19:;
	{
	sp -= 2;
	((func_com_badlogic_gdx_graphics_Mesh_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(4)), (jint(0)), (frame[2].i));
	LINE_NUMBER(995);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_idx = (jint(0));
	LINE_NUMBER(996);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_disableBlending(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:disableBlending", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1000);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendingDisabled) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1001);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush])(ctx, (frame[0].o));
	LINE_NUMBER(1002);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendingDisabled = (jint(1));
	LINE_NUMBER(1003);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_enableBlending(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:enableBlending", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1007);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendingDisabled) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1008);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush])(ctx, (frame[0].o));
	LINE_NUMBER(1009);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendingDisabled = (jint(0));
	LINE_NUMBER(1010);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setBlendFunction_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:setBlendFunction", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1014);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_setBlendFunctionSeparate_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_setBlendFunctionSeparate_int_int_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[1].i), (frame[2].i));
	LINE_NUMBER(1015);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setBlendFunctionSeparate_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:setBlendFunctionSeparate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1019);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendSrcFunc) != (frame[1].i)) goto label_1;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendDstFunc) != (frame[2].i)) goto label_1;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendSrcFuncAlpha) != (frame[3].i)) goto label_1;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendDstFuncAlpha) != (frame[4].i)) goto label_1;
	}
	LINE_NUMBER(1020);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1021);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush])(ctx, (frame[0].o));
	LINE_NUMBER(1022);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendSrcFunc = (frame[1].i);
	LINE_NUMBER(1023);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendDstFunc = (frame[2].i);
	LINE_NUMBER(1024);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendSrcFuncAlpha = (frame[3].i);
	LINE_NUMBER(1025);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendDstFuncAlpha = (frame[4].i);
	LINE_NUMBER(1026);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getBlendSrcFunc_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:getBlendSrcFunc", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1030);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendSrcFunc);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getBlendDstFunc_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:getBlendDstFunc", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1035);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendDstFunc);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getBlendSrcFuncAlpha_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:getBlendSrcFuncAlpha", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1040);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendSrcFuncAlpha);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getBlendDstFuncAlpha_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:getBlendDstFuncAlpha", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1045);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendDstFuncAlpha);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1050);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_mesh;
	((func_com_badlogic_gdx_graphics_Mesh_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_dispose])(ctx, sp[0].o);
	LINE_NUMBER(1051);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_ownsShader) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_shader;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_dispose])(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(1052);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getProjectionMatrix_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:getProjectionMatrix", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1056);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_projectionMatrix;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getTransformMatrix_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:getTransformMatrix", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1061);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_transformMatrix;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setProjectionMatrix_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:setProjectionMatrix", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1066);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_drawing) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush])(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(1067);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_projectionMatrix;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1068);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_drawing) == 0) goto label_3;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_setupMatrices) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_setupMatrices])(ctx, sp[0].o);
label_3:;
	LINE_NUMBER(1069);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setTransformMatrix_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:setTransformMatrix", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1073);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_drawing) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush])(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(1074);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_transformMatrix;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1075);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_drawing) == 0) goto label_3;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_setupMatrices) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_setupMatrices])(ctx, sp[0].o);
label_3:;
	LINE_NUMBER(1076);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setupMatrices(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:setupMatrices", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1079);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_combinedMatrix;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_projectionMatrix;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_transformMatrix;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1080);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_customShader;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1081);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_customShader;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_projTrans"_j));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_combinedMatrix;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1082);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_customShader;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_java_lang_String_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"u_texture"_j))), (jint(0)));
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(1084);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_shader;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_projTrans"_j));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_combinedMatrix;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1085);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_java_lang_String_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"u_texture"_j))), (jint(0)));
	}
label_5:;
	LINE_NUMBER(1087);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_switchTexture_com_badlogic_gdx_graphics_Texture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:switchTexture", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1090);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush])(ctx, (frame[0].o));
	LINE_NUMBER(1091);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_lastTexture = (jref) (frame[1].o);
	LINE_NUMBER(1092);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat(1);
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Texture_getWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getWidth_R_int])(ctx, (frame[1].o));
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_invTexWidth = (temp0 / (jfloat(temp1)));
	LINE_NUMBER(1093);
	sp[0].o = frame[0].o;
	jfloat temp2 = jfloat(1);
	jint temp3 = (jint)((func_com_badlogic_gdx_graphics_Texture_getHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getHeight_R_int])(ctx, (frame[1].o));
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK(sp[0].o))->F_invTexHeight = (temp2 / (jfloat(temp3)));
	LINE_NUMBER(1094);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setShader_com_badlogic_gdx_graphics_glutils_ShaderProgram(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:setShader", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1098);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_customShader;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	LINE_NUMBER(1099);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1100);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_drawing) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1101);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush])(ctx, (frame[0].o));
	}
label_3:;
	{
	LINE_NUMBER(1103);
	((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_customShader = (jref) (frame[1].o);
	LINE_NUMBER(1104);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_drawing) == 0) goto label_6;
	}
	{
	LINE_NUMBER(1105);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_customShader;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(1106);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_customShader;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_bind])(ctx, sp[0].o);
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(1108);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_bind])(ctx, sp[0].o);
	}
label_10:;
	{
	LINE_NUMBER(1109);
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_setupMatrices) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_setupMatrices])(ctx, (frame[0].o));
	}
label_6:;
	LINE_NUMBER(1111);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getShader_R_com_badlogic_gdx_graphics_glutils_ShaderProgram(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:getShader", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1115);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_customShader;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1116);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_shader;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1118);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_customShader;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_SpriteBatch_isBlendingEnabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:isBlendingEnabled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1123);
	if (((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_blendingDisabled) != 0) goto label_1;
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

jbool M_com_badlogic_gdx_graphics_g2d_SpriteBatch_isDrawing_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:isDrawing", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1127);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_SpriteBatch *) NULL_CHECK((frame[0].o)))->F_drawing);
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_g2d_SpriteBatch(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/SpriteBatch:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_SpriteBatch(ctx);
	{
	LINE_NUMBER(41);
	clinit_com_badlogic_gdx_graphics_Mesh$VertexDataType(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Mesh$VertexDataType_VertexBufferObject;
	clinit_com_badlogic_gdx_graphics_g2d_SpriteBatch(ctx);
	SF_com_badlogic_gdx_graphics_g2d_SpriteBatch_defaultVertexDataType = sp[0].o;
	LINE_NUMBER(46);
	clinit_com_badlogic_gdx_graphics_g2d_SpriteBatch(ctx);
	SF_com_badlogic_gdx_graphics_g2d_SpriteBatch_overrideVertexType = (jobject(nullptr));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_graphics_g2d_SpriteBatch;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field defaultVertexDataType
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	{ // Field overrideVertexType
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

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

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_com_badlogic_gdx_graphics_g2d_SpriteBatch[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_dispose,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_begin,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_end,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getColor_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setPackedColor_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getPackedColor_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float_float_int_int_int_int_boolean_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_int_int_int_int_boolean_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_Array1_float_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_com_badlogic_gdx_math_Affine2,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_disableBlending,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_enableBlending,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setBlendFunction_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setBlendFunctionSeparate_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getBlendSrcFunc_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getBlendDstFunc_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getBlendSrcFuncAlpha_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getBlendDstFuncAlpha_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getProjectionMatrix_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getTransformMatrix_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setProjectionMatrix_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setTransformMatrix_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setShader_com_badlogic_gdx_graphics_glutils_ShaderProgram,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getShader_R_com_badlogic_gdx_graphics_glutils_ShaderProgram,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_isBlendingEnabled_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_isDrawing_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setupMatrices,
	(void *) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_switchTexture_com_badlogic_gdx_graphics_Texture,
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
	{ "dispose", "()V" },
	{ "begin", "()V" },
	{ "end", "()V" },
	{ "setColor", "(Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "setColor", "(FFFF)V" },
	{ "getColor", "()Lcom/badlogic/gdx/graphics/Color;" },
	{ "setPackedColor", "(F)V" },
	{ "getPackedColor", "()F" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/Texture;FFFFFFFFFIIIIZZ)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/Texture;FFFFIIIIZZ)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/Texture;FFIIII)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/Texture;FFFFFFFF)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/Texture;FF)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/Texture;FFFF)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/Texture;[FII)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;FF)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;FFFF)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;FFFFFFFFF)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;FFFFFFFFFZ)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;FFLcom/badlogic/gdx/math/Affine2;)V" },
	{ "flush", "()V" },
	{ "disableBlending", "()V" },
	{ "enableBlending", "()V" },
	{ "setBlendFunction", "(II)V" },
	{ "setBlendFunctionSeparate", "(IIII)V" },
	{ "getBlendSrcFunc", "()I" },
	{ "getBlendDstFunc", "()I" },
	{ "getBlendSrcFuncAlpha", "()I" },
	{ "getBlendDstFuncAlpha", "()I" },
	{ "getProjectionMatrix", "()Lcom/badlogic/gdx/math/Matrix4;" },
	{ "getTransformMatrix", "()Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setProjectionMatrix", "(Lcom/badlogic/gdx/math/Matrix4;)V" },
	{ "setTransformMatrix", "(Lcom/badlogic/gdx/math/Matrix4;)V" },
	{ "setShader", "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V" },
	{ "getShader", "()Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;" },
	{ "isBlendingEnabled", "()Z" },
	{ "isDrawing", "()Z" },
	{ "setupMatrices", "()V" },
	{ "switchTexture", "(Lcom/badlogic/gdx/graphics/Texture;)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_graphics_g2d_Batch, };

static FieldMetadata fields[] {
	{ "defaultVertexDataType", &class_com_badlogic_gdx_graphics_Mesh$VertexDataType, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_SpriteBatch_defaultVertexDataType, "Lcom/badlogic/gdx/graphics/Mesh$VertexDataType;", 131081 },
	{ "overrideVertexType", &class_com_badlogic_gdx_graphics_Mesh$VertexDataType, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_SpriteBatch_overrideVertexType, "Lcom/badlogic/gdx/graphics/Mesh$VertexDataType;", 131081 },
	{ "currentDataType", &class_com_badlogic_gdx_graphics_Mesh$VertexDataType, offsetof(com_badlogic_gdx_graphics_g2d_SpriteBatch, F_currentDataType), "Lcom/badlogic/gdx/graphics/Mesh$VertexDataType;", 2 },
	{ "mesh", &class_com_badlogic_gdx_graphics_Mesh, offsetof(com_badlogic_gdx_graphics_g2d_SpriteBatch, F_mesh), "Lcom/badlogic/gdx/graphics/Mesh;", 2 },
	{ "vertices", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_graphics_g2d_SpriteBatch, F_vertices), "[F", 16 },
	{ "idx", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_SpriteBatch, F_idx), "I", 0 },
	{ "lastTexture", &class_com_badlogic_gdx_graphics_Texture, offsetof(com_badlogic_gdx_graphics_g2d_SpriteBatch, F_lastTexture), "Lcom/badlogic/gdx/graphics/Texture;", 0 },
	{ "invTexWidth", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_SpriteBatch, F_invTexWidth), "F", 0 },
	{ "invTexHeight", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_SpriteBatch, F_invTexHeight), "F", 0 },
	{ "drawing", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_SpriteBatch, F_drawing), "Z", 0 },
	{ "transformMatrix", &class_com_badlogic_gdx_math_Matrix4, offsetof(com_badlogic_gdx_graphics_g2d_SpriteBatch, F_transformMatrix), "Lcom/badlogic/gdx/math/Matrix4;", 18 },
	{ "projectionMatrix", &class_com_badlogic_gdx_math_Matrix4, offsetof(com_badlogic_gdx_graphics_g2d_SpriteBatch, F_projectionMatrix), "Lcom/badlogic/gdx/math/Matrix4;", 18 },
	{ "combinedMatrix", &class_com_badlogic_gdx_math_Matrix4, offsetof(com_badlogic_gdx_graphics_g2d_SpriteBatch, F_combinedMatrix), "Lcom/badlogic/gdx/math/Matrix4;", 18 },
	{ "blendingDisabled", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_SpriteBatch, F_blendingDisabled), "Z", 2 },
	{ "blendSrcFunc", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_SpriteBatch, F_blendSrcFunc), "I", 2 },
	{ "blendDstFunc", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_SpriteBatch, F_blendDstFunc), "I", 2 },
	{ "blendSrcFuncAlpha", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_SpriteBatch, F_blendSrcFuncAlpha), "I", 2 },
	{ "blendDstFuncAlpha", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_SpriteBatch, F_blendDstFuncAlpha), "I", 2 },
	{ "shader", &class_com_badlogic_gdx_graphics_glutils_ShaderProgram, offsetof(com_badlogic_gdx_graphics_g2d_SpriteBatch, F_shader), "Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;", 18 },
	{ "customShader", &class_com_badlogic_gdx_graphics_glutils_ShaderProgram, offsetof(com_badlogic_gdx_graphics_g2d_SpriteBatch, F_customShader), "Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;", 2 },
	{ "ownsShader", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_SpriteBatch, F_ownsShader), "Z", 2 },
	{ "color", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_graphics_g2d_SpriteBatch, F_color), "Lcom/badlogic/gdx/graphics/Color;", 18 },
	{ "colorPacked", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_SpriteBatch, F_colorPacked), "F", 0 },
	{ "renderCalls", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_SpriteBatch, F_renderCalls), "I", 1 },
	{ "totalRenderCalls", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_SpriteBatch, F_totalRenderCalls), "I", 1 },
	{ "maxSpritesInBatch", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_SpriteBatch, F_maxSpritesInBatch), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_SpriteBatch, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_SpriteBatch_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_SpriteBatch_int_com_badlogic_gdx_graphics_glutils_ShaderProgram, 0, "(ILcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V", 1 },
	{ "createDefaultShader", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_SpriteBatch_createDefaultShader_R_com_badlogic_gdx_graphics_glutils_ShaderProgram, 0, "()Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;", 9 },
	{ "begin", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_begin, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_begin, "()V", 1 },
	{ "end", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_end, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_end, "()V", 1 },
	{ "setColor", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_com_badlogic_gdx_graphics_Color, "(Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "setColor", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_setColor_float_float_float_float, "(FFFF)V", 1 },
	{ "getColor", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getColor_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_getColor_R_com_badlogic_gdx_graphics_Color, "()Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "setPackedColor", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setPackedColor_float, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_setPackedColor_float, "(F)V", 1 },
	{ "getPackedColor", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getPackedColor_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_getPackedColor_R_float, "()F", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float_float_int_int_int_int_boolean_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float_float_int_int_int_int_boolean_boolean, "(Lcom/badlogic/gdx/graphics/Texture;FFFFFFFFFIIIIZZ)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_int_int_int_int_boolean_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_int_int_int_int_boolean_boolean, "(Lcom/badlogic/gdx/graphics/Texture;FFFFIIIIZZ)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_int_int_int_int, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_int_int_int_int, "(Lcom/badlogic/gdx/graphics/Texture;FFIIII)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float, "(Lcom/badlogic/gdx/graphics/Texture;FFFFFFFF)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float, "(Lcom/badlogic/gdx/graphics/Texture;FF)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float, "(Lcom/badlogic/gdx/graphics/Texture;FFFF)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_Array1_float_int_int, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_Texture_Array1_float_int_int, "(Lcom/badlogic/gdx/graphics/Texture;[FII)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;FF)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;FFFF)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;FFFFFFFFF)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float_boolean, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;FFFFFFFFFZ)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_com_badlogic_gdx_math_Affine2, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_com_badlogic_gdx_math_Affine2, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;FFLcom/badlogic/gdx/math/Affine2;)V", 1 },
	{ "flush", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_flush, "()V", 1 },
	{ "disableBlending", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_disableBlending, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_disableBlending, "()V", 1 },
	{ "enableBlending", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_enableBlending, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_enableBlending, "()V", 1 },
	{ "setBlendFunction", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setBlendFunction_int_int, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_setBlendFunction_int_int, "(II)V", 1 },
	{ "setBlendFunctionSeparate", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setBlendFunctionSeparate_int_int_int_int, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_setBlendFunctionSeparate_int_int_int_int, "(IIII)V", 1 },
	{ "getBlendSrcFunc", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getBlendSrcFunc_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_getBlendSrcFunc_R_int, "()I", 1 },
	{ "getBlendDstFunc", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getBlendDstFunc_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_getBlendDstFunc_R_int, "()I", 1 },
	{ "getBlendSrcFuncAlpha", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getBlendSrcFuncAlpha_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_getBlendSrcFuncAlpha_R_int, "()I", 1 },
	{ "getBlendDstFuncAlpha", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getBlendDstFuncAlpha_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_getBlendDstFuncAlpha_R_int, "()I", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_dispose, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_dispose, "()V", 1 },
	{ "getProjectionMatrix", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getProjectionMatrix_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_getProjectionMatrix_R_com_badlogic_gdx_math_Matrix4, "()Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "getTransformMatrix", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getTransformMatrix_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_getTransformMatrix_R_com_badlogic_gdx_math_Matrix4, "()Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "setProjectionMatrix", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setProjectionMatrix_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_setProjectionMatrix_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Matrix4;)V", 1 },
	{ "setTransformMatrix", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setTransformMatrix_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_setTransformMatrix_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Matrix4;)V", 1 },
	{ "setupMatrices", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setupMatrices, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_setupMatrices, "()V", 4 },
	{ "switchTexture", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_switchTexture_com_badlogic_gdx_graphics_Texture, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_switchTexture_com_badlogic_gdx_graphics_Texture, "(Lcom/badlogic/gdx/graphics/Texture;)V", 4 },
	{ "setShader", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_setShader_com_badlogic_gdx_graphics_glutils_ShaderProgram, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_setShader_com_badlogic_gdx_graphics_glutils_ShaderProgram, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V", 1 },
	{ "getShader", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_getShader_R_com_badlogic_gdx_graphics_glutils_ShaderProgram, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_getShader_R_com_badlogic_gdx_graphics_glutils_ShaderProgram, "()Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;", 1 },
	{ "isBlendingEnabled", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_isBlendingEnabled_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_isBlendingEnabled_R_boolean, "()Z", 1 },
	{ "isDrawing", (intptr_t) M_com_badlogic_gdx_graphics_g2d_SpriteBatch_isDrawing_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_isDrawing_R_boolean, "()Z", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_SpriteBatch, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_g2d_SpriteBatch{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/SpriteBatch",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_SpriteBatch),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_SpriteBatch,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_SpriteBatch,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_SpriteBatch,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 26,
		.nativeFields = (intptr_t) fields,
		.methodCount = 44,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 50,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_SpriteBatch = registerClass(&class_com_badlogic_gdx_graphics_g2d_SpriteBatch);

}

