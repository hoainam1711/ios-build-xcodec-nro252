#include "com/badlogic/gdx/graphics/Mesh.h"
#include "java/lang/StringBuilder.h"
#include "java/nio/FloatBuffer.h"
#include "com/badlogic/gdx/graphics/Mesh_VertexDataType.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "com/badlogic/gdx/graphics/glutils/InstanceBufferObject.h"
#include "com/badlogic/gdx/graphics/glutils/InstanceData.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/util/HashMap.h"
#include "com/badlogic/gdx/Application.h"
#include "com/badlogic/gdx/graphics/glutils/ShaderProgram.h"
#include "com/badlogic/gdx/graphics/glutils/VertexBufferObjectSubData.h"
#include "java/lang/reflect/Constructor.h"
#include "com/badlogic/gdx/graphics/glutils/VertexBufferObject.h"
#include "java/util/Set.h"
#include "com/badlogic/gdx/graphics/VertexAttributes.h"
#include "com/badlogic/gdx/graphics/Mesh_1.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "com/badlogic/gdx/graphics/VertexAttribute.h"
#include "java/lang/reflect/Method.h"
#include "com/badlogic/gdx/graphics/glutils/VertexData.h"
#include "java/lang/Math.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/graphics/GL30.h"
#include "com/badlogic/gdx/graphics/glutils/VertexArray.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/annotation/Annotation.h"
#include "com/badlogic/gdx/graphics/Mesh.h"
#include "com/badlogic/gdx/Gdx.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Enum.h"
#include "java/util/Map.h"
#include "com/badlogic/gdx/graphics/glutils/IndexBufferObjectSubData.h"
#include "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO.h"
#include "com/badlogic/gdx/graphics/glutils/IndexBufferObject.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/glutils/IndexArray.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/math/collision/BoundingBox.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/graphics/glutils/IndexData.h"
#include "java/nio/ShortBuffer.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "com/badlogic/gdx/math/Matrix3.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "com/badlogic/gdx/math/Vector2.h"
#include "java/lang/Deprecated.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_Mesh_meshes;

void mark_com_badlogic_gdx_graphics_Mesh(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_Mesh_meshes)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Mesh_meshes)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Mesh_meshes, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_Mesh *) object;
	if (self->F_vertices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vertices)->clazz)->markFunction)((jobject) self->F_vertices, mark, depth + 1);
	if (self->F_indices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_indices)->clazz)->markFunction)((jobject) self->F_indices, mark, depth + 1);
	if (self->F_instances)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_instances)->clazz)->markFunction)((jobject) self->F_instances, mark, depth + 1);
	if (self->F_tmpV)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmpV)->clazz)->markFunction)((jobject) self->F_tmpV, mark, depth + 1);
}

void init_com_badlogic_gdx_graphics_Mesh_com_badlogic_gdx_graphics_glutils_VertexData_com_badlogic_gdx_graphics_glutils_IndexData_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(87);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(81);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_autoBind = (jint(1));
	LINE_NUMBER(85);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_isInstanced = (jint(0));
	LINE_NUMBER(780);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_tmpV = (jref) sp[1].o;
	LINE_NUMBER(88);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices = (jref) (frame[1].o);
	LINE_NUMBER(89);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices = (jref) (frame[2].o);
	LINE_NUMBER(90);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_isVertexArray = (frame[3].i);
	LINE_NUMBER(92);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	SM_com_badlogic_gdx_graphics_Mesh_addManagedMesh_com_badlogic_gdx_Application_com_badlogic_gdx_graphics_Mesh(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Mesh_boolean_int_int_Array1_com_badlogic_gdx_graphics_VertexAttribute(jcontext ctx, jobject self, jbool param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(102);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(81);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_autoBind = (jint(1));
	LINE_NUMBER(85);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_isInstanced = (jint(0));
	LINE_NUMBER(780);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_tmpV = (jref) sp[1].o;
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	clinit_com_badlogic_gdx_graphics_VertexAttributes(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttributes);
	init_com_badlogic_gdx_graphics_VertexAttributes_Array1_com_badlogic_gdx_graphics_VertexAttribute(ctx, sp[2].o, (frame[4].o));
	sp[1].o = (jobject)M_com_badlogic_gdx_graphics_Mesh_makeVertexBuffer_boolean_int_com_badlogic_gdx_graphics_VertexAttributes_R_com_badlogic_gdx_graphics_glutils_VertexData(ctx, sp[1].o, temp0, temp1, sp[2].o);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_IndexBufferObject(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexBufferObject);
	init_com_badlogic_gdx_graphics_glutils_IndexBufferObject_boolean_int(ctx, sp[1].o, (frame[1].i), (frame[3].i));
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_indices = (jref) sp[1].o;
	LINE_NUMBER(105);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_isVertexArray = (jint(0));
	LINE_NUMBER(107);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	SM_com_badlogic_gdx_graphics_Mesh_addManagedMesh_com_badlogic_gdx_Application_com_badlogic_gdx_graphics_Mesh(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Mesh_boolean_int_int_com_badlogic_gdx_graphics_VertexAttributes(jcontext ctx, jobject self, jbool param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(117);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(81);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_autoBind = (jint(1));
	LINE_NUMBER(85);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_isInstanced = (jint(0));
	LINE_NUMBER(780);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_tmpV = (jref) sp[1].o;
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_com_badlogic_gdx_graphics_Mesh_makeVertexBuffer_boolean_int_com_badlogic_gdx_graphics_VertexAttributes_R_com_badlogic_gdx_graphics_glutils_VertexData(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[4].o));
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_IndexBufferObject(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexBufferObject);
	init_com_badlogic_gdx_graphics_glutils_IndexBufferObject_boolean_int(ctx, sp[1].o, (frame[1].i), (frame[3].i));
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_indices = (jref) sp[1].o;
	LINE_NUMBER(120);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_isVertexArray = (jint(0));
	LINE_NUMBER(122);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	SM_com_badlogic_gdx_graphics_Mesh_addManagedMesh_com_badlogic_gdx_Application_com_badlogic_gdx_graphics_Mesh(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Mesh_boolean_boolean_int_int_com_badlogic_gdx_graphics_VertexAttributes(jcontext ctx, jobject self, jbool param0, jbool param1, jint param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(135);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(81);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_autoBind = (jint(1));
	LINE_NUMBER(85);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_isInstanced = (jint(0));
	LINE_NUMBER(780);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_tmpV = (jref) sp[1].o;
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_com_badlogic_gdx_graphics_Mesh_makeVertexBuffer_boolean_int_com_badlogic_gdx_graphics_VertexAttributes_R_com_badlogic_gdx_graphics_glutils_VertexData(ctx, (frame[0].o), (frame[1].i), (frame[3].i), (frame[5].o));
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_IndexBufferObject(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexBufferObject);
	init_com_badlogic_gdx_graphics_glutils_IndexBufferObject_boolean_int(ctx, sp[1].o, (frame[2].i), (frame[4].i));
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_indices = (jref) sp[1].o;
	LINE_NUMBER(138);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_isVertexArray = (jint(0));
	LINE_NUMBER(140);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	SM_com_badlogic_gdx_graphics_Mesh_addManagedMesh_com_badlogic_gdx_Application_com_badlogic_gdx_graphics_Mesh(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_makeVertexBuffer_boolean_int_com_badlogic_gdx_graphics_VertexAttributes_R_com_badlogic_gdx_graphics_glutils_VertexData(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:makeVertexBuffer", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(144);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl30;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(145);
	clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO);
	init_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_boolean_int_com_badlogic_gdx_graphics_VertexAttributes(ctx, sp[0].o, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(147);
	clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexBufferObject);
	init_com_badlogic_gdx_graphics_glutils_VertexBufferObject_boolean_int_com_badlogic_gdx_graphics_VertexAttributes(ctx, sp[0].o, (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Mesh_com_badlogic_gdx_graphics_Mesh$VertexDataType_boolean_int_int_Array1_com_badlogic_gdx_graphics_VertexAttribute(jcontext ctx, jobject self, jobject param0, jbool param1, jint param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:<init>", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(160);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	jint temp2 = frame[4].i;
	clinit_com_badlogic_gdx_graphics_VertexAttributes(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttributes);
	init_com_badlogic_gdx_graphics_VertexAttributes_Array1_com_badlogic_gdx_graphics_VertexAttribute(ctx, sp[2].o, (frame[5].o));
	init_com_badlogic_gdx_graphics_Mesh_com_badlogic_gdx_graphics_Mesh$VertexDataType_boolean_int_int_com_badlogic_gdx_graphics_VertexAttributes(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, sp[2].o);
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Mesh_com_badlogic_gdx_graphics_Mesh$VertexDataType_boolean_int_int_com_badlogic_gdx_graphics_VertexAttributes(jcontext ctx, jobject self, jobject param0, jbool param1, jint param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(170);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(81);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_autoBind = (jint(1));
	LINE_NUMBER(85);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_isInstanced = (jint(0));
	LINE_NUMBER(780);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_tmpV = (jref) sp[1].o;
	LINE_NUMBER(171);
	clinit_com_badlogic_gdx_graphics_Mesh$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Mesh$1_$SwitchMap$com$badlogic$gdx$graphics$Mesh$VertexDataType;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Mesh$VertexDataType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh$VertexDataType_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_5;
		case 2: goto label_6;
		case 3: goto label_7;
		case 4: goto label_8;
		default: goto label_8;
	}
	}
label_5:;
	{
	LINE_NUMBER(173);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObject(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexBufferObject);
	init_com_badlogic_gdx_graphics_glutils_VertexBufferObject_boolean_int_com_badlogic_gdx_graphics_VertexAttributes(ctx, sp[1].o, (frame[2].i), (frame[3].i), (frame[5].o));
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(174);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_IndexBufferObject(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexBufferObject);
	init_com_badlogic_gdx_graphics_glutils_IndexBufferObject_boolean_int(ctx, sp[1].o, (frame[2].i), (frame[4].i));
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_indices = (jref) sp[1].o;
	LINE_NUMBER(175);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_isVertexArray = (jint(0));
	LINE_NUMBER(176);
	goto label_12;
	}
label_6:;
	{
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData);
	init_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_boolean_int_com_badlogic_gdx_graphics_VertexAttributes(ctx, sp[1].o, (frame[2].i), (frame[3].i), (frame[5].o));
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(179);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_IndexBufferObjectSubData(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexBufferObjectSubData);
	init_com_badlogic_gdx_graphics_glutils_IndexBufferObjectSubData_boolean_int(ctx, sp[1].o, (frame[2].i), (frame[4].i));
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_indices = (jref) sp[1].o;
	LINE_NUMBER(180);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_isVertexArray = (jint(0));
	LINE_NUMBER(181);
	goto label_12;
	}
label_7:;
	{
	LINE_NUMBER(183);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO);
	init_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_boolean_int_com_badlogic_gdx_graphics_VertexAttributes(ctx, sp[1].o, (frame[2].i), (frame[3].i), (frame[5].o));
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(184);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_IndexBufferObjectSubData(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexBufferObjectSubData);
	init_com_badlogic_gdx_graphics_glutils_IndexBufferObjectSubData_boolean_int(ctx, sp[1].o, (frame[2].i), (frame[4].i));
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_indices = (jref) sp[1].o;
	LINE_NUMBER(185);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_isVertexArray = (jint(0));
	LINE_NUMBER(186);
	goto label_12;
	}
label_8:;
	{
	LINE_NUMBER(189);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_VertexArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexArray);
	init_com_badlogic_gdx_graphics_glutils_VertexArray_int_com_badlogic_gdx_graphics_VertexAttributes(ctx, sp[1].o, (frame[3].i), (frame[5].o));
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(190);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_IndexArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexArray);
	init_com_badlogic_gdx_graphics_glutils_IndexArray_int(ctx, sp[1].o, (frame[4].i));
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_indices = (jref) sp[1].o;
	LINE_NUMBER(191);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_isVertexArray = (jint(1));
	}
label_12:;
	{
	LINE_NUMBER(195);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	SM_com_badlogic_gdx_graphics_Mesh_addManagedMesh_com_badlogic_gdx_Application_com_badlogic_gdx_graphics_Mesh(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_enableInstancedRendering_boolean_int_Array1_com_badlogic_gdx_graphics_VertexAttribute_R_com_badlogic_gdx_graphics_Mesh(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:enableInstancedRendering", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(199);
	if (((jint)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_isInstanced) != 0) goto label_1;
	}
	{
	LINE_NUMBER(200);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_isInstanced = (jint(1));
	LINE_NUMBER(201);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_InstanceBufferObject(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_InstanceBufferObject);
	init_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_boolean_int_Array1_com_badlogic_gdx_graphics_VertexAttribute(ctx, sp[1].o, (frame[1].i), (frame[2].i), (frame[3].o));
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_instances = (jref) sp[1].o;
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(203);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Trying to enable InstancedRendering on same Mesh instance twice. Use disableInstancedRendering to clean up old InstanceData first"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_disableInstancedRendering_R_com_badlogic_gdx_graphics_Mesh(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:disableInstancedRendering", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(210);
	if (((jint)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_isInstanced) == 0) goto label_1;
	}
	{
	LINE_NUMBER(211);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_isInstanced = (jint(0));
	LINE_NUMBER(212);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_instances;
	((func_com_badlogic_gdx_graphics_glutils_InstanceData_dispose) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_InstanceData, INDEX_com_badlogic_gdx_graphics_glutils_InstanceData_dispose, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(213);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_instances = (jref) (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(215);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_setInstanceData_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:setInstanceData", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_instances;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_instances;
	((func_com_badlogic_gdx_graphics_glutils_InstanceData_setInstanceData_Array1_float_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_InstanceData, INDEX_com_badlogic_gdx_graphics_glutils_InstanceData_setInstanceData_Array1_float_int_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(228);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"An InstanceBufferObject must be set before setting instance data!"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_setInstanceData_Array1_float_R_com_badlogic_gdx_graphics_Mesh(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:setInstanceData", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_instances;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_instances;
	((func_com_badlogic_gdx_graphics_glutils_InstanceData_setInstanceData_Array1_float_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_InstanceData, INDEX_com_badlogic_gdx_graphics_glutils_InstanceData_setInstanceData_Array1_float_int_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(241);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"An InstanceBufferObject must be set before setting instance data!"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_setInstanceData_java_nio_FloatBuffer_int_R_com_badlogic_gdx_graphics_Mesh(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:setInstanceData", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_instances;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_instances;
	((func_com_badlogic_gdx_graphics_glutils_InstanceData_setInstanceData_java_nio_FloatBuffer_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_InstanceData, INDEX_com_badlogic_gdx_graphics_glutils_InstanceData_setInstanceData_java_nio_FloatBuffer_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(255);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"An InstanceBufferObject must be set before setting instance data!"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(257);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_setInstanceData_java_nio_FloatBuffer_R_com_badlogic_gdx_graphics_Mesh(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:setInstanceData", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_instances;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_instances;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((func_java_nio_FloatBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_limit_R_int])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_graphics_glutils_InstanceData_setInstanceData_java_nio_FloatBuffer_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_InstanceData, INDEX_com_badlogic_gdx_graphics_glutils_InstanceData_setInstanceData_java_nio_FloatBuffer_int, sp[0].o))(ctx, sp[0].o, sp[1].o, temp0);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(268);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"An InstanceBufferObject must be set before setting instance data!"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_updateInstanceData_int_Array1_float_R_com_badlogic_gdx_graphics_Mesh(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:updateInstanceData", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_updateInstanceData_int_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_updateInstanceData_int_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh])(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_updateInstanceData_int_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:updateInstanceData", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_instances;
	((func_com_badlogic_gdx_graphics_glutils_InstanceData_updateInstanceData_int_Array1_float_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_InstanceData, INDEX_com_badlogic_gdx_graphics_glutils_InstanceData_updateInstanceData_int_Array1_float_int_int, sp[0].o))(ctx, sp[0].o, (frame[1].i), (frame[2].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(288);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_updateInstanceData_int_java_nio_FloatBuffer_R_com_badlogic_gdx_graphics_Mesh(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:updateInstanceData", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(295);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = frame[2].o;
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_java_nio_FloatBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_FloatBuffer_limit_R_int])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_updateInstanceData_int_java_nio_FloatBuffer_int_int_R_com_badlogic_gdx_graphics_Mesh) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_updateInstanceData_int_java_nio_FloatBuffer_int_int_R_com_badlogic_gdx_graphics_Mesh])(ctx, sp[0].o, temp0, sp[1].o, temp1, temp2);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_updateInstanceData_int_java_nio_FloatBuffer_int_int_R_com_badlogic_gdx_graphics_Mesh(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:updateInstanceData", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_instances;
	((func_com_badlogic_gdx_graphics_glutils_InstanceData_updateInstanceData_int_java_nio_FloatBuffer_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_InstanceData, INDEX_com_badlogic_gdx_graphics_glutils_InstanceData_updateInstanceData_int_java_nio_FloatBuffer_int_int, sp[0].o))(ctx, sp[0].o, (frame[1].i), (frame[2].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_setVertices_Array1_float_R_com_badlogic_gdx_graphics_Mesh(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:setVertices", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	((func_com_badlogic_gdx_graphics_glutils_VertexData_setVertices_Array1_float_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexData, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_setVertices_Array1_float_int_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(315);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_Mesh_isInstanced_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:isInstanced", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_isInstanced);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_setVertices_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:setVertices", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	((func_com_badlogic_gdx_graphics_glutils_VertexData_setVertices_Array1_float_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexData, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_setVertices_Array1_float_int_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_updateVertices_int_Array1_float_R_com_badlogic_gdx_graphics_Mesh(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:updateVertices", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(339);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_updateVertices_int_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_updateVertices_int_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh])(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_updateVertices_int_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:updateVertices", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(348);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	((func_com_badlogic_gdx_graphics_glutils_VertexData_updateVertices_int_Array1_float_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexData, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_updateVertices_int_Array1_float_int_int, sp[0].o))(ctx, sp[0].o, (frame[1].i), (frame[2].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(349);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_getVertices_Array1_float_R_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:getVertices", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(355);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVertices_int_int_Array1_float_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertices_int_int_Array1_float_R_Array1_float])(ctx, (frame[0].o), (jint(0)), (jint(-1)), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_getVertices_int_Array1_float_R_Array1_float(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:getVertices", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVertices_int_int_Array1_float_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertices_int_int_Array1_float_R_Array1_float])(ctx, (frame[0].o), (frame[1].i), (jint(-1)), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_getVertices_int_int_Array1_float_R_Array1_float(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:getVertices", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVertices_int_int_Array1_float_int_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertices_int_int_Array1_float_int_R_Array1_float])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_getVertices_int_int_Array1_float_int_R_Array1_float(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:getVertices", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(383);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Mesh_getNumVertices_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getNumVertices_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Mesh_getVertexSize_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexSize_R_int])(ctx, (frame[0].o));
	frame[5].i = ((temp0 * temp1) / (jint(4)));
	LINE_NUMBER(384);
	if ((frame[2].i) != (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(385);
	frame[2].i = ((frame[5].i) - (frame[1].i));
	LINE_NUMBER(386);
	if ((frame[2].i) <= ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (frame[4].i))) goto label_2;
	}
	{
	frame[2].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (frame[4].i));
	}
label_2:;
	{
	LINE_NUMBER(388);
	if ((frame[1].i) < 0) goto label_5;
	}
	INST_ILOAD(2);
	if ((--sp)->i <= 0) goto label_5;
	{
	if (((frame[1].i) + (frame[2].i)) > (frame[5].i)) goto label_5;
	}
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_5;
	{
	if ((frame[4].i) < (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(389);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(390);
	if (((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (frame[4].i)) >= (frame[2].i)) goto label_7;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"not enough room in vertices array, has "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" floats, needs "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVerticesBuffer_boolean_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVerticesBuffer_boolean_R_java_nio_FloatBuffer])(ctx, (frame[0].o), (jint(0)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(393);
	jint temp0 = (jint)((func_java_nio_FloatBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_nio_FloatBuffer_position_R_int])(ctx, (frame[6].o));
	frame[7].i = temp0;
	LINE_NUMBER(394);
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, (frame[6].o), (frame[1].i));
	LINE_NUMBER(395);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_get_Array1_float_int_int_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_Array1_float_int_int_R_java_nio_FloatBuffer])(ctx, (frame[6].o), (frame[3].o), (frame[4].i), (frame[2].i));
	LINE_NUMBER(396);
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, (frame[6].o), (frame[7].i));
	LINE_NUMBER(397);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_setIndices_Array1_short_R_com_badlogic_gdx_graphics_Mesh(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:setIndices", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(405);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	((func_com_badlogic_gdx_graphics_glutils_IndexData_setIndices_Array1_short_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexData, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_setIndices_Array1_short_int_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(407);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_setIndices_Array1_short_int_int_R_com_badlogic_gdx_graphics_Mesh(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:setIndices", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(417);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	((func_com_badlogic_gdx_graphics_glutils_IndexData_setIndices_Array1_short_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexData, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_setIndices_Array1_short_int_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(419);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Mesh_getIndices_Array1_short(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:getIndices", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(425);
	((func_com_badlogic_gdx_graphics_Mesh_getIndices_Array1_short_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getIndices_Array1_short_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(426);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Mesh_getIndices_Array1_short_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:getIndices", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(433);
	((func_com_badlogic_gdx_graphics_Mesh_getIndices_int_Array1_short_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getIndices_int_Array1_short_int])(ctx, (frame[0].o), (jint(0)), (frame[1].o), (frame[2].i));
	LINE_NUMBER(434);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Mesh_getIndices_int_Array1_short_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:getIndices", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(442);
	((func_com_badlogic_gdx_graphics_Mesh_getIndices_int_int_Array1_short_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getIndices_int_int_Array1_short_int])(ctx, (frame[0].o), (frame[1].i), (jint(-1)), (frame[2].o), (frame[3].i));
	LINE_NUMBER(443);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Mesh_getIndices_int_int_Array1_short_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:getIndices", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(452);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Mesh_getNumIndices_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getNumIndices_R_int])(ctx, (frame[0].o));
	frame[5].i = temp0;
	LINE_NUMBER(453);
	if ((frame[2].i) >= 0) goto label_2;
	}
	{
	frame[2].i = ((frame[5].i) - (frame[1].i));
	}
label_2:;
	{
	LINE_NUMBER(454);
	if ((frame[1].i) < 0) goto label_3;
	}
	{
	if ((frame[1].i) >= (frame[5].i)) goto label_3;
	}
	{
	if (((frame[1].i) + (frame[2].i)) <= (frame[5].i)) goto label_4;
	}
label_3:;
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid range specified, offset: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", count: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", max: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[5].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(456);
	if (((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (frame[4].i)) >= (frame[2].i)) goto label_5;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"not enough room in indices array, has "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" shorts, needs "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getIndicesBuffer_boolean_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getIndicesBuffer_boolean_R_java_nio_ShortBuffer])(ctx, (frame[0].o), (jint(0)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(459);
	jint temp0 = (jint)((func_java_nio_ShortBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_nio_ShortBuffer_position_R_int])(ctx, (frame[6].o));
	frame[7].i = temp0;
	LINE_NUMBER(460);
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, (frame[6].o), (frame[1].i));
	LINE_NUMBER(461);
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_get_Array1_short_int_int_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_nio_ShortBuffer_get_Array1_short_int_int_R_java_nio_ShortBuffer])(ctx, (frame[6].o), (frame[3].o), (frame[4].i), (frame[2].i));
	LINE_NUMBER(462);
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, (frame[6].o), (frame[7].i));
	LINE_NUMBER(463);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_Mesh_getNumIndices_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:getNumIndices", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(467);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_IndexData_getNumIndices_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexData, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_getNumIndices_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_Mesh_getNumVertices_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:getNumVertices", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(472);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_VertexData_getNumVertices_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexData, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_getNumVertices_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_Mesh_getMaxVertices_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:getMaxVertices", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(477);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_VertexData_getNumMaxVertices_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexData, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_getNumMaxVertices_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_Mesh_getMaxIndices_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:getMaxIndices", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(482);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_IndexData_getNumMaxIndices_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexData, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_getNumMaxIndices_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_Mesh_getVertexSize_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:getVertexSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(487);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_glutils_VertexData_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexData, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[0].o))->F_vertexSize);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_getIndexData_R_com_badlogic_gdx_graphics_glutils_IndexData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:getIndexData", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(491);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Mesh_setAutoBind_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:setAutoBind", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(501);
	((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_autoBind = (frame[1].i);
	LINE_NUMBER(502);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Mesh_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:bind", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(509);
	((func_com_badlogic_gdx_graphics_Mesh_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int_Array1_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int_Array1_int])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (jobject(nullptr)));
	LINE_NUMBER(510);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Mesh_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:bind", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(519);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	((func_com_badlogic_gdx_graphics_glutils_VertexData_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexData, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(520);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_instances;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_instances;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_InstanceData_getNumInstances_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_InstanceData, INDEX_com_badlogic_gdx_graphics_glutils_InstanceData_getNumInstances_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 <= 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_instances;
	((func_com_badlogic_gdx_graphics_glutils_InstanceData_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_InstanceData, INDEX_com_badlogic_gdx_graphics_glutils_InstanceData_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[3].o));
	}
label_2:;
	{
	LINE_NUMBER(521);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_IndexData_getNumIndices_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexData, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_getNumIndices_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 <= 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	((func_com_badlogic_gdx_graphics_glutils_IndexData_bind) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexData, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_bind, sp[0].o))(ctx, sp[0].o);
	}
label_3:;
	LINE_NUMBER(522);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Mesh_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:unbind", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(529);
	((func_com_badlogic_gdx_graphics_Mesh_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int_Array1_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int_Array1_int])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (jobject(nullptr)));
	LINE_NUMBER(530);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Mesh_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:unbind", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(539);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	((func_com_badlogic_gdx_graphics_glutils_VertexData_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexData, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(540);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_instances;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_instances;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_InstanceData_getNumInstances_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_InstanceData, INDEX_com_badlogic_gdx_graphics_glutils_InstanceData_getNumInstances_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 <= 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_instances;
	((func_com_badlogic_gdx_graphics_glutils_InstanceData_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_InstanceData, INDEX_com_badlogic_gdx_graphics_glutils_InstanceData_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[3].o));
	}
label_2:;
	{
	LINE_NUMBER(541);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_IndexData_getNumIndices_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexData, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_getNumIndices_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 <= 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	((func_com_badlogic_gdx_graphics_glutils_IndexData_unbind) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexData, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_unbind, sp[0].o))(ctx, sp[0].o);
	}
label_3:;
	LINE_NUMBER(542);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Mesh_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:render", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(565);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_glutils_IndexData_getNumMaxIndices_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexData, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_getNumMaxIndices_R_int, sp[2].o))(ctx, sp[2].o);
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp += 4;
	if (temp2 <= 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Mesh_getNumIndices_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getNumIndices_R_int])(ctx, (frame[0].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_com_badlogic_gdx_graphics_Mesh_getNumVertices_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getNumVertices_R_int])(ctx, sp[0].o);
	sp++;
label_2:;
	{
	sp -= 5;
	((func_com_badlogic_gdx_graphics_Mesh_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_int_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_int_int_int_boolean])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, ((jint)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_autoBind));
	LINE_NUMBER(566);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Mesh_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:render", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(593);
	((func_com_badlogic_gdx_graphics_Mesh_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_int_int_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_int_int_int_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), ((jint)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_autoBind));
	LINE_NUMBER(594);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Mesh_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_int_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:render", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(622);
	if ((frame[4].i) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(624);
	if ((frame[5].i) == 0) goto label_2;
	}
	{
	((func_com_badlogic_gdx_graphics_Mesh_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram])(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(626);
	if (((jint)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_isVertexArray) == 0) goto label_3;
	}
	{
	LINE_NUMBER(627);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_IndexData_getNumIndices_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexData, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_getNumIndices_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 <= 0) goto label_5;
	}
	{
	LINE_NUMBER(628);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_glutils_IndexData_getBuffer_boolean_R_java_nio_ShortBuffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexData, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_getBuffer_boolean_R_java_nio_ShortBuffer, sp[0].o))(ctx, sp[0].o, (jint(0)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(629);
	jint temp0 = (jint)((func_java_nio_ShortBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_nio_ShortBuffer_position_R_int])(ctx, (frame[6].o));
	frame[7].i = temp0;
	LINE_NUMBER(630);
	jint temp1 = (jint)((func_java_nio_ShortBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_nio_ShortBuffer_limit_R_int])(ctx, (frame[6].o));
	frame[8].i = temp1;
	LINE_NUMBER(631);
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, (frame[6].o), (frame[3].i));
	LINE_NUMBER(632);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	((func_com_badlogic_gdx_graphics_GL20_glDrawElements_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDrawElements_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, (frame[2].i), (frame[4].i), (5123), (frame[6].o));
	LINE_NUMBER(633);
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, (frame[6].o), (frame[7].i));
	LINE_NUMBER(634);
	goto label_13;
	}
label_5:;
	{
	LINE_NUMBER(635);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	((func_com_badlogic_gdx_graphics_GL20_glDrawArrays_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDrawArrays_int_int_int, sp[0].o))(ctx, sp[0].o, (frame[2].i), (frame[3].i), (frame[4].i));
	goto label_13;
	}
label_3:;
	{
	LINE_NUMBER(638);
	frame[6].i = (jint(0));
	LINE_NUMBER(639);
	if (((jint)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_isInstanced) == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_instances;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_InstanceData_getNumInstances_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_InstanceData, INDEX_com_badlogic_gdx_graphics_glutils_InstanceData_getNumInstances_R_int, sp[0].o))(ctx, sp[0].o);
	frame[6].i = temp0;
	}
label_15:;
	{
	LINE_NUMBER(641);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_IndexData_getNumIndices_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexData, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_getNumIndices_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 <= 0) goto label_16;
	}
	{
	LINE_NUMBER(642);
	jint temp0 = (frame[4].i) + (frame[3].i);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_glutils_IndexData_getNumMaxIndices_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexData, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_getNumMaxIndices_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 <= temp1) goto label_18;
	}
	{
	LINE_NUMBER(643);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Mesh attempting to access memory outside of the index buffer (count: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[4].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", offset: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", max: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	LINE_NUMBER(644);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_IndexData_getNumMaxIndices_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexData, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_getNumMaxIndices_R_int, sp[2].o))(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_18:;
	{
	LINE_NUMBER(647);
	if (((jint)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_isInstanced) == 0) goto label_21;
	}
	INST_ILOAD(6);
	if ((--sp)->i <= 0) goto label_21;
	{
	LINE_NUMBER(648);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl30;
	((func_com_badlogic_gdx_graphics_GL30_glDrawElementsInstanced_int_int_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL30, INDEX_com_badlogic_gdx_graphics_GL30_glDrawElementsInstanced_int_int_int_int_int, sp[0].o))(ctx, sp[0].o, (frame[2].i), (frame[4].i), (5123), ((frame[3].i) * (jint(2))), (frame[6].i));
	goto label_13;
	}
label_21:;
	{
	LINE_NUMBER(650);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	((func_com_badlogic_gdx_graphics_GL20_glDrawElements_int_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDrawElements_int_int_int_int, sp[0].o))(ctx, sp[0].o, (frame[2].i), (frame[4].i), (5123), ((frame[3].i) * (jint(2))));
	goto label_13;
	}
label_16:;
	{
	LINE_NUMBER(653);
	if (((jint)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_isInstanced) == 0) goto label_23;
	}
	INST_ILOAD(6);
	if ((--sp)->i <= 0) goto label_23;
	{
	LINE_NUMBER(654);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl30;
	((func_com_badlogic_gdx_graphics_GL30_glDrawArraysInstanced_int_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL30, INDEX_com_badlogic_gdx_graphics_GL30_glDrawArraysInstanced_int_int_int_int, sp[0].o))(ctx, sp[0].o, (frame[2].i), (frame[3].i), (frame[4].i), (frame[6].i));
	goto label_13;
	}
label_23:;
	{
	LINE_NUMBER(656);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	((func_com_badlogic_gdx_graphics_GL20_glDrawArrays_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDrawArrays_int_int_int, sp[0].o))(ctx, sp[0].o, (frame[2].i), (frame[3].i), (frame[4].i));
	}
label_13:;
	{
	LINE_NUMBER(661);
	if ((frame[5].i) == 0) goto label_25;
	}
	{
	((func_com_badlogic_gdx_graphics_Mesh_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram])(ctx, (frame[0].o), (frame[1].o));
	}
label_25:;
	LINE_NUMBER(662);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Mesh_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:dispose", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(666);
	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Mesh_meshes;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Mesh_meshes;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o)), (frame[0].o), (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(667);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	((func_com_badlogic_gdx_graphics_glutils_VertexData_dispose) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexData, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_dispose, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(668);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_instances;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_instances;
	((func_com_badlogic_gdx_graphics_glutils_InstanceData_dispose) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_InstanceData, INDEX_com_badlogic_gdx_graphics_glutils_InstanceData_dispose, sp[0].o))(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(669);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	((func_com_badlogic_gdx_graphics_glutils_IndexData_dispose) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexData, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_dispose, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(670);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:getVertexAttribute", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(677);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_glutils_VertexData_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexData, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(678);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_VertexAttributes_size_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_size_R_int])(ctx, (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(679);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(680);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, (frame[2].o), (frame[4].i));
	if (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK(sp[0].o))->F_usage) != (frame[1].i)) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, (frame[2].o), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(679);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(682);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_getVertexAttributes_R_com_badlogic_gdx_graphics_VertexAttributes(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:getVertexAttributes", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(687);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_glutils_VertexData_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexData, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_getInstancedAttributes_R_com_badlogic_gdx_graphics_VertexAttributes(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:getInstancedAttributes", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(692);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_instances;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_instances;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_glutils_InstanceData_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_InstanceData, INDEX_com_badlogic_gdx_graphics_glutils_InstanceData_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes, sp[0].o))(ctx, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:getVerticesBuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(699);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_glutils_VertexData_getBuffer_boolean_R_java_nio_FloatBuffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexData, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_getBuffer_boolean_R_java_nio_FloatBuffer, sp[0].o))(ctx, sp[0].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_getVerticesBuffer_boolean_R_java_nio_FloatBuffer(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:getVerticesBuffer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(703);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_glutils_VertexData_getBuffer_boolean_R_java_nio_FloatBuffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexData, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_getBuffer_boolean_R_java_nio_FloatBuffer, sp[0].o))(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_calculateBoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:calculateBoundingBox", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(711);
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_collision_BoundingBox);
	init_com_badlogic_gdx_math_collision_BoundingBox(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(712);
	((func_com_badlogic_gdx_graphics_Mesh_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(713);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Mesh_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:calculateBoundingBox", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(721);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Mesh_getNumVertices_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getNumVertices_R_int])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(722);
	if ((frame[2].i) != 0) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"No vertices defined"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(724);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_glutils_VertexData_getBuffer_boolean_R_java_nio_FloatBuffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexData, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_getBuffer_boolean_R_java_nio_FloatBuffer, sp[0].o))(ctx, sp[0].o, (jint(0)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(725);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[1].o));
	LINE_NUMBER(726);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, (frame[0].o), (jint(1)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(727);
	frame[5].i = (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[4].o)))->F_offset) / (jint(4)));
	LINE_NUMBER(728);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_glutils_VertexData_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexData, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes, sp[0].o))(ctx, sp[0].o);
	frame[6].i = (((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[0].o))->F_vertexSize) / (jint(4)));
	LINE_NUMBER(729);
	frame[7].i = (frame[5].i);
	LINE_NUMBER(731);
	switch(((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[4].o)))->F_numComponents)) {
		case 1: goto label_9;
		case 2: goto label_10;
		case 3: goto label_11;
		default: goto label_12;
	}
	}
label_9:;
	{
	LINE_NUMBER(733);
	frame[8].i = (jint(0));
	}
label_13:;
	{
	if ((frame[8].i) >= (frame[2].i)) goto label_14;
	}
	{
	LINE_NUMBER(734);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, (frame[3].o), (frame[7].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_float_float_float_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_float_float_float_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, temp0, (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(735);
	frame[7].i = ((frame[7].i) + (frame[6].i));
	LINE_NUMBER(733);
	INST_IINC(8, 1);
	goto label_13;
	}
label_14:;
	LINE_NUMBER(737);
	goto label_12;
label_10:;
	{
	LINE_NUMBER(739);
	frame[8].i = (jint(0));
	}
label_18:;
	{
	if ((frame[8].i) >= (frame[2].i)) goto label_19;
	}
	{
	LINE_NUMBER(740);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, (frame[3].o), (frame[7].i));
	jfloat temp1 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, (frame[3].o), ((frame[7].i) + (jint(1))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_float_float_float_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_float_float_float_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, temp0, temp1, (jfloat(0)));
	LINE_NUMBER(741);
	frame[7].i = ((frame[7].i) + (frame[6].i));
	LINE_NUMBER(739);
	INST_IINC(8, 1);
	goto label_18;
	}
label_19:;
	LINE_NUMBER(743);
	goto label_12;
label_11:;
	{
	LINE_NUMBER(745);
	frame[8].i = (jint(0));
	}
label_23:;
	{
	if ((frame[8].i) >= (frame[2].i)) goto label_12;
	}
	{
	LINE_NUMBER(746);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, (frame[3].o), (frame[7].i));
	jfloat temp1 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, (frame[3].o), ((frame[7].i) + (jint(1))));
	jfloat temp2 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, (frame[3].o), ((frame[7].i) + (jint(2))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_float_float_float_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_float_float_float_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(747);
	frame[7].i = ((frame[7].i) + (frame[6].i));
	LINE_NUMBER(745);
	INST_IINC(8, 1);
	goto label_23;
	}
label_12:;
	LINE_NUMBER(751);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:calculateBoundingBox", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(759);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:calculateBoundingBox", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(768);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:extendBoundingBox", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(777);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:extendBoundingBox", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(788);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Mesh_getNumIndices_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getNumIndices_R_int])(ctx, (frame[0].o));
	frame[5].i = temp0;
	LINE_NUMBER(789);
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Mesh_getNumVertices_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getNumVertices_R_int])(ctx, (frame[0].o));
	frame[6].i = temp1;
	LINE_NUMBER(790);
	if ((frame[5].i) != 0) goto label_3;
	}
	INST_ILOAD(6);
	goto label_4;
label_3:;
	INST_ILOAD(5);
label_4:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(791);
	if ((frame[2].i) < 0) goto label_6;
	}
	{
	if ((frame[3].i) < (jint(1))) goto label_6;
	}
	{
	if (((frame[2].i) + (frame[3].i)) <= (frame[7].i)) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(792);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid part specified ( offset="_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", count="_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", max="_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[7].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" )"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(794);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_glutils_VertexData_getBuffer_boolean_R_java_nio_FloatBuffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexData, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_getBuffer_boolean_R_java_nio_FloatBuffer, sp[0].o))(ctx, sp[0].o, (jint(0)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(795);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_glutils_IndexData_getBuffer_boolean_R_java_nio_ShortBuffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexData, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_getBuffer_boolean_R_java_nio_ShortBuffer, sp[0].o))(ctx, sp[0].o, (jint(0)));
	frame[9].o = sp[0].o;
	LINE_NUMBER(796);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, (frame[0].o), (jint(1)));
	frame[10].o = sp[0].o;
	LINE_NUMBER(797);
	frame[11].i = (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[10].o)))->F_offset) / (jint(4)));
	LINE_NUMBER(798);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_glutils_VertexData_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexData, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes, sp[0].o))(ctx, sp[0].o);
	frame[12].i = (((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[0].o))->F_vertexSize) / (jint(4)));
	LINE_NUMBER(799);
	frame[13].i = ((frame[2].i) + (frame[3].i));
	LINE_NUMBER(801);
	switch(((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[10].o)))->F_numComponents)) {
		case 1: goto label_14;
		case 2: goto label_15;
		case 3: goto label_16;
		default: goto label_17;
	}
	}
label_14:;
	{
	LINE_NUMBER(803);
	if ((frame[5].i) <= 0) goto label_18;
	}
	{
	LINE_NUMBER(804);
	frame[14].i = (frame[2].i);
	}
label_20:;
	{
	if ((frame[14].i) >= (frame[13].i)) goto label_21;
	}
	{
	LINE_NUMBER(805);
	jint temp0 = (jint)((func_java_nio_ShortBuffer_get_int_R_short) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_nio_ShortBuffer_get_int_R_short])(ctx, (frame[9].o), (frame[14].i));
	frame[15].i = (((temp0 & (jint(65535))) * (frame[12].i)) + (frame[11].i));
	LINE_NUMBER(806);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	jfloat temp1 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, (frame[8].o), (frame[15].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp1, (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(807);
	if ((frame[4].o) == nullptr) goto label_25;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[4].o));
	}
label_25:;
	{
	LINE_NUMBER(808);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(804);
	INST_IINC(14, 1);
	goto label_20;
	}
label_21:;
	goto label_17;
label_18:;
	{
	LINE_NUMBER(811);
	frame[14].i = (frame[2].i);
	}
label_27:;
	{
	if ((frame[14].i) >= (frame[13].i)) goto label_28;
	}
	{
	LINE_NUMBER(812);
	frame[15].i = (((frame[14].i) * (frame[12].i)) + (frame[11].i));
	LINE_NUMBER(813);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	jfloat temp0 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, (frame[8].o), (frame[15].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp0, (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(814);
	if ((frame[4].o) == nullptr) goto label_32;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[4].o));
	}
label_32:;
	{
	LINE_NUMBER(815);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(811);
	INST_IINC(14, 1);
	goto label_27;
	}
label_28:;
	LINE_NUMBER(818);
	goto label_17;
label_15:;
	{
	LINE_NUMBER(820);
	if ((frame[5].i) <= 0) goto label_34;
	}
	{
	LINE_NUMBER(821);
	frame[14].i = (frame[2].i);
	}
label_36:;
	{
	if ((frame[14].i) >= (frame[13].i)) goto label_37;
	}
	{
	LINE_NUMBER(822);
	jint temp0 = (jint)((func_java_nio_ShortBuffer_get_int_R_short) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_nio_ShortBuffer_get_int_R_short])(ctx, (frame[9].o), (frame[14].i));
	frame[15].i = (((temp0 & (jint(65535))) * (frame[12].i)) + (frame[11].i));
	LINE_NUMBER(823);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	jfloat temp1 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, (frame[8].o), (frame[15].i));
	jfloat temp2 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, (frame[8].o), ((frame[15].i) + (jint(1))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp1, temp2, (jfloat(0)));
	LINE_NUMBER(824);
	if ((frame[4].o) == nullptr) goto label_41;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[4].o));
	}
label_41:;
	{
	LINE_NUMBER(825);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(821);
	INST_IINC(14, 1);
	goto label_36;
	}
label_37:;
	goto label_17;
label_34:;
	{
	LINE_NUMBER(828);
	frame[14].i = (frame[2].i);
	}
label_43:;
	{
	if ((frame[14].i) >= (frame[13].i)) goto label_44;
	}
	{
	LINE_NUMBER(829);
	frame[15].i = (((frame[14].i) * (frame[12].i)) + (frame[11].i));
	LINE_NUMBER(830);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	jfloat temp0 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, (frame[8].o), (frame[15].i));
	jfloat temp1 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, (frame[8].o), ((frame[15].i) + (jint(1))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp0, temp1, (jfloat(0)));
	LINE_NUMBER(831);
	if ((frame[4].o) == nullptr) goto label_48;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[4].o));
	}
label_48:;
	{
	LINE_NUMBER(832);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(828);
	INST_IINC(14, 1);
	goto label_43;
	}
label_44:;
	LINE_NUMBER(835);
	goto label_17;
label_16:;
	{
	LINE_NUMBER(837);
	if ((frame[5].i) <= 0) goto label_50;
	}
	{
	LINE_NUMBER(838);
	frame[14].i = (frame[2].i);
	}
label_52:;
	{
	if ((frame[14].i) >= (frame[13].i)) goto label_53;
	}
	{
	LINE_NUMBER(839);
	jint temp0 = (jint)((func_java_nio_ShortBuffer_get_int_R_short) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_nio_ShortBuffer_get_int_R_short])(ctx, (frame[9].o), (frame[14].i));
	frame[15].i = (((temp0 & (jint(65535))) * (frame[12].i)) + (frame[11].i));
	LINE_NUMBER(840);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	jfloat temp1 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, (frame[8].o), (frame[15].i));
	jfloat temp2 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, (frame[8].o), ((frame[15].i) + (jint(1))));
	jfloat temp3 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, (frame[8].o), ((frame[15].i) + (jint(2))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp1, temp2, temp3);
	LINE_NUMBER(841);
	if ((frame[4].o) == nullptr) goto label_57;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[4].o));
	}
label_57:;
	{
	LINE_NUMBER(842);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(838);
	INST_IINC(14, 1);
	goto label_52;
	}
label_53:;
	goto label_17;
label_50:;
	{
	LINE_NUMBER(845);
	frame[14].i = (frame[2].i);
	}
label_59:;
	{
	if ((frame[14].i) >= (frame[13].i)) goto label_17;
	}
	{
	LINE_NUMBER(846);
	frame[15].i = (((frame[14].i) * (frame[12].i)) + (frame[11].i));
	LINE_NUMBER(847);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	jfloat temp0 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, (frame[8].o), (frame[15].i));
	jfloat temp1 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, (frame[8].o), ((frame[15].i) + (jint(1))));
	jfloat temp2 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, (frame[8].o), ((frame[15].i) + (jint(2))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(848);
	if ((frame[4].o) == nullptr) goto label_63;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[4].o));
	}
label_63:;
	{
	LINE_NUMBER(849);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(845);
	INST_IINC(14, 1);
	goto label_59;
	}
label_17:;
	{
	LINE_NUMBER(854);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_Mesh_calculateRadiusSquared_float_float_float_int_int_com_badlogic_gdx_math_Matrix4_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jint param3, jint param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:calculateRadiusSquared", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(866);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Mesh_getNumIndices_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getNumIndices_R_int])(ctx, (frame[0].o));
	frame[7].i = temp0;
	LINE_NUMBER(867);
	if ((frame[4].i) < 0) goto label_2;
	}
	{
	if ((frame[5].i) < (jint(1))) goto label_2;
	}
	{
	if (((frame[4].i) + (frame[5].i)) <= (frame[7].i)) goto label_3;
	}
label_2:;
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Not enough indices"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(869);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_glutils_VertexData_getBuffer_boolean_R_java_nio_FloatBuffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexData, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_getBuffer_boolean_R_java_nio_FloatBuffer, sp[0].o))(ctx, sp[0].o, (jint(0)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(870);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_glutils_IndexData_getBuffer_boolean_R_java_nio_ShortBuffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexData, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_getBuffer_boolean_R_java_nio_ShortBuffer, sp[0].o))(ctx, sp[0].o, (jint(0)));
	frame[9].o = sp[0].o;
	LINE_NUMBER(871);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, (frame[0].o), (jint(1)));
	frame[10].o = sp[0].o;
	LINE_NUMBER(872);
	frame[11].i = (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[10].o)))->F_offset) / (jint(4)));
	LINE_NUMBER(873);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_glutils_VertexData_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexData, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes, sp[0].o))(ctx, sp[0].o);
	frame[12].i = (((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[0].o))->F_vertexSize) / (jint(4)));
	LINE_NUMBER(874);
	frame[13].i = ((frame[4].i) + (frame[5].i));
	LINE_NUMBER(876);
	frame[14].f = (jfloat(0));
	LINE_NUMBER(878);
	switch(((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[10].o)))->F_numComponents)) {
		case 1: goto label_11;
		case 2: goto label_12;
		case 3: goto label_13;
		default: goto label_14;
	}
	}
label_11:;
	{
	LINE_NUMBER(880);
	frame[15].i = (frame[4].i);
	}
label_15:;
	{
	if ((frame[15].i) >= (frame[13].i)) goto label_16;
	}
	{
	LINE_NUMBER(881);
	jint temp0 = (jint)((func_java_nio_ShortBuffer_get_int_R_short) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_nio_ShortBuffer_get_int_R_short])(ctx, (frame[9].o), (frame[15].i));
	frame[16].i = (((temp0 & (jint(65535))) * (frame[12].i)) + (frame[11].i));
	LINE_NUMBER(882);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	jfloat temp1 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, (frame[8].o), (frame[16].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp1, (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(883);
	if ((frame[6].o) == nullptr) goto label_20;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[6].o));
	}
label_20:;
	{
	LINE_NUMBER(884);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_sub_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_sub_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_len2_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_len2_R_float])(ctx, sp[0].o);
	frame[17].f = temp0;
	LINE_NUMBER(885);
	if ((floatCompare((frame[17].f), (frame[14].f), -1)) <= 0) goto label_22;
	}
	INST_FLOAD(17);
	INST_FSTORE(14);
label_22:;
	{
	LINE_NUMBER(880);
	INST_IINC(15, 1);
	goto label_15;
	}
label_16:;
	LINE_NUMBER(887);
	goto label_14;
label_12:;
	{
	LINE_NUMBER(889);
	frame[15].i = (frame[4].i);
	}
label_23:;
	{
	if ((frame[15].i) >= (frame[13].i)) goto label_24;
	}
	{
	LINE_NUMBER(890);
	jint temp0 = (jint)((func_java_nio_ShortBuffer_get_int_R_short) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_nio_ShortBuffer_get_int_R_short])(ctx, (frame[9].o), (frame[15].i));
	frame[16].i = (((temp0 & (jint(65535))) * (frame[12].i)) + (frame[11].i));
	LINE_NUMBER(891);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	jfloat temp1 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, (frame[8].o), (frame[16].i));
	jfloat temp2 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, (frame[8].o), ((frame[16].i) + (jint(1))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp1, temp2, (jfloat(0)));
	LINE_NUMBER(892);
	if ((frame[6].o) == nullptr) goto label_28;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[6].o));
	}
label_28:;
	{
	LINE_NUMBER(893);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_sub_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_sub_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_len2_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_len2_R_float])(ctx, sp[0].o);
	frame[17].f = temp0;
	LINE_NUMBER(894);
	if ((floatCompare((frame[17].f), (frame[14].f), -1)) <= 0) goto label_30;
	}
	INST_FLOAD(17);
	INST_FSTORE(14);
label_30:;
	{
	LINE_NUMBER(889);
	INST_IINC(15, 1);
	goto label_23;
	}
label_24:;
	LINE_NUMBER(896);
	goto label_14;
label_13:;
	{
	LINE_NUMBER(898);
	frame[15].i = (frame[4].i);
	}
label_31:;
	{
	if ((frame[15].i) >= (frame[13].i)) goto label_14;
	}
	{
	LINE_NUMBER(899);
	jint temp0 = (jint)((func_java_nio_ShortBuffer_get_int_R_short) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_nio_ShortBuffer_get_int_R_short])(ctx, (frame[9].o), (frame[15].i));
	frame[16].i = (((temp0 & (jint(65535))) * (frame[12].i)) + (frame[11].i));
	LINE_NUMBER(900);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	jfloat temp1 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, (frame[8].o), (frame[16].i));
	jfloat temp2 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, (frame[8].o), ((frame[16].i) + (jint(1))));
	jfloat temp3 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, (frame[8].o), ((frame[16].i) + (jint(2))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp1, temp2, temp3);
	LINE_NUMBER(901);
	if ((frame[6].o) == nullptr) goto label_35;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[6].o));
	}
label_35:;
	{
	LINE_NUMBER(902);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_tmpV;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_sub_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_sub_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_len2_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_len2_R_float])(ctx, sp[0].o);
	frame[17].f = temp0;
	LINE_NUMBER(903);
	if ((floatCompare((frame[17].f), (frame[14].f), -1)) <= 0) goto label_37;
	}
	INST_FLOAD(17);
	INST_FSTORE(14);
label_37:;
	{
	LINE_NUMBER(898);
	INST_IINC(15, 1);
	goto label_31;
	}
label_14:;
	{
	LINE_NUMBER(907);
	popStackFrame(ctx);
	return (frame[14].f);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_Mesh_calculateRadius_float_float_float_int_int_com_badlogic_gdx_math_Matrix4_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jint param3, jint param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:calculateRadius", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(919);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Mesh_calculateRadiusSquared_float_float_float_int_int_com_badlogic_gdx_math_Matrix4_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_calculateRadiusSquared_float_float_float_int_int_com_badlogic_gdx_math_Matrix4_R_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].i), (frame[6].o));
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(temp0)));
	popStackFrame(ctx);
	return (jfloat(temp1));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_Mesh_calculateRadius_com_badlogic_gdx_math_Vector3_int_int_com_badlogic_gdx_math_Matrix4_R_float(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:calculateRadius", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(928);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Mesh_calculateRadius_float_float_float_int_int_com_badlogic_gdx_math_Matrix4_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_calculateRadius_float_float_float_int_int_com_badlogic_gdx_math_Matrix4_R_float])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z), (frame[2].i), (frame[3].i), (frame[4].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_Mesh_calculateRadius_float_float_float_int_int_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:calculateRadius", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(939);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Mesh_calculateRadius_float_float_float_int_int_com_badlogic_gdx_math_Matrix4_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_calculateRadius_float_float_float_int_int_com_badlogic_gdx_math_Matrix4_R_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].i), (jobject(nullptr)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_Mesh_calculateRadius_com_badlogic_gdx_math_Vector3_int_int_R_float(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:calculateRadius", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(948);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Mesh_calculateRadius_float_float_float_int_int_com_badlogic_gdx_math_Matrix4_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_calculateRadius_float_float_float_int_int_com_badlogic_gdx_math_Matrix4_R_float])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z), (frame[2].i), (frame[3].i), (jobject(nullptr)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_Mesh_calculateRadius_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:calculateRadius", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(957);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	jint temp3 = jint(0);
	jint temp4 = (jint)((func_com_badlogic_gdx_graphics_Mesh_getNumIndices_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getNumIndices_R_int])(ctx, (frame[0].o));
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_graphics_Mesh_calculateRadius_float_float_float_int_int_com_badlogic_gdx_math_Matrix4_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_calculateRadius_float_float_float_int_int_com_badlogic_gdx_math_Matrix4_R_float])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, (jobject(nullptr)));
	popStackFrame(ctx);
	return temp5;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_Mesh_calculateRadius_com_badlogic_gdx_math_Vector3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:calculateRadius", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(964);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z;
	jint temp3 = jint(0);
	jint temp4 = (jint)((func_com_badlogic_gdx_graphics_Mesh_getNumIndices_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getNumIndices_R_int])(ctx, (frame[0].o));
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_graphics_Mesh_calculateRadius_float_float_float_int_int_com_badlogic_gdx_math_Matrix4_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_calculateRadius_float_float_float_int_int_com_badlogic_gdx_math_Matrix4_R_float])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, (jobject(nullptr)));
	popStackFrame(ctx);
	return temp5;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:getIndicesBuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(971);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_glutils_IndexData_getBuffer_boolean_R_java_nio_ShortBuffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexData, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_getBuffer_boolean_R_java_nio_ShortBuffer, sp[0].o))(ctx, sp[0].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_getIndicesBuffer_boolean_R_java_nio_ShortBuffer(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:getIndicesBuffer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(975);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_glutils_IndexData_getBuffer_boolean_R_java_nio_ShortBuffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexData, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_getBuffer_boolean_R_java_nio_ShortBuffer, sp[0].o))(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_Mesh_addManagedMesh_com_badlogic_gdx_Application_com_badlogic_gdx_graphics_Mesh(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:addManagedMesh", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(979);
	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Mesh_meshes;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o));
	LINE_NUMBER(980);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(981);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(982);
	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Mesh_meshes;
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[0].o), (frame[2].o));
	LINE_NUMBER(983);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_Mesh_invalidateAllMeshes_com_badlogic_gdx_Application(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:invalidateAllMeshes", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(988);
	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Mesh_meshes;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o));
	LINE_NUMBER(989);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(990);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	if ((frame[2].i) >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(991);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].i));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_Mesh, sp[0].o))))->F_vertices;
	((func_com_badlogic_gdx_graphics_glutils_VertexData_invalidate) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_VertexData, INDEX_com_badlogic_gdx_graphics_glutils_VertexData_invalidate, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(992);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].i));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Mesh *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_Mesh, sp[0].o))))->F_indices;
	((func_com_badlogic_gdx_graphics_glutils_IndexData_invalidate) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_glutils_IndexData, INDEX_com_badlogic_gdx_graphics_glutils_IndexData_invalidate, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(990);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(994);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_Mesh_clearAllMeshes_com_badlogic_gdx_Application(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:clearAllMeshes", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(998);
	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Mesh_meshes;
	sp[0].o = (jobject)((func_java_util_Map_remove_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_remove_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(999);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_Mesh_getManagedStatus_R_java_lang_String(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:getManagedStatus", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	{
	LINE_NUMBER(1002);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(1003);
	frame[1].i = (jint(0));
	LINE_NUMBER(1004);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Managed meshes/app: { "_j))));
	LINE_NUMBER(1005);
	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Mesh_meshes;
	sp[0].o = (jobject)((func_java_util_Map_keySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_keySet_R_java_util_Set, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_Application, sp[0].o));
	LINE_NUMBER(1006);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Mesh_meshes;
	sp[1].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[1].o))))->F_size));
	LINE_NUMBER(1007);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(1008);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1009);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"}"_j))));
	LINE_NUMBER(1010);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Mesh_scale_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:scale", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(1020);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, (frame[0].o), (jint(1)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1021);
	frame[5].i = (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[4].o)))->F_offset) / (jint(4)));
	LINE_NUMBER(1022);
	frame[6].i = ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[4].o)))->F_numComponents);
	LINE_NUMBER(1023);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Mesh_getNumVertices_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getNumVertices_R_int])(ctx, (frame[0].o));
	frame[7].i = temp0;
	LINE_NUMBER(1024);
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Mesh_getVertexSize_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexSize_R_int])(ctx, (frame[0].o));
	frame[8].i = (temp1 / (jint(4)));
	LINE_NUMBER(1026);
	sp[0].o = (jobject) createArray(ctx, &class_float, ((frame[7].i) * (frame[8].i)));
	frame[9].o = sp[0].o;
	LINE_NUMBER(1027);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVertices_Array1_float_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertices_Array1_float_R_Array1_float])(ctx, (frame[0].o), (frame[9].o));
	LINE_NUMBER(1029);
	frame[10].i = (frame[5].i);
	LINE_NUMBER(1030);
	switch((frame[6].i)) {
		case 1: goto label_9;
		case 2: goto label_10;
		case 3: goto label_11;
		default: goto label_12;
	}
	}
label_9:;
	{
	LINE_NUMBER(1032);
	frame[11].i = (jint(0));
	}
label_13:;
	{
	if ((frame[11].i) >= (frame[7].i)) goto label_14;
	}
	{
	LINE_NUMBER(1033);
	sp[0].o = frame[9].o;
	jint temp0 = frame[10].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) * (frame[1].f));
	LINE_NUMBER(1034);
	frame[10].i = ((frame[10].i) + (frame[8].i));
	LINE_NUMBER(1032);
	INST_IINC(11, 1);
	goto label_13;
	}
label_14:;
	LINE_NUMBER(1036);
	goto label_12;
label_10:;
	{
	LINE_NUMBER(1038);
	frame[11].i = (jint(0));
	}
label_18:;
	{
	if ((frame[11].i) >= (frame[7].i)) goto label_19;
	}
	{
	LINE_NUMBER(1039);
	sp[0].o = frame[9].o;
	jint temp0 = frame[10].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) * (frame[1].f));
	LINE_NUMBER(1040);
	sp[0].o = frame[9].o;
	jint temp3 = (frame[10].i) + (jint(1));
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) * (frame[2].f));
	LINE_NUMBER(1041);
	frame[10].i = ((frame[10].i) + (frame[8].i));
	LINE_NUMBER(1038);
	INST_IINC(11, 1);
	goto label_18;
	}
label_19:;
	LINE_NUMBER(1043);
	goto label_12;
label_11:;
	{
	LINE_NUMBER(1045);
	frame[11].i = (jint(0));
	}
label_24:;
	{
	if ((frame[11].i) >= (frame[7].i)) goto label_12;
	}
	{
	LINE_NUMBER(1046);
	sp[0].o = frame[9].o;
	jint temp0 = frame[10].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) * (frame[1].f));
	LINE_NUMBER(1047);
	sp[0].o = frame[9].o;
	jint temp3 = (frame[10].i) + (jint(1));
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) * (frame[2].f));
	LINE_NUMBER(1048);
	sp[0].o = frame[9].o;
	jint temp6 = (frame[10].i) + (jint(2));
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp6)) * (frame[3].f));
	LINE_NUMBER(1049);
	frame[10].i = ((frame[10].i) + (frame[8].i));
	LINE_NUMBER(1045);
	INST_IINC(11, 1);
	goto label_24;
	}
label_12:;
	{
	LINE_NUMBER(1054);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_setVertices_Array1_float_R_com_badlogic_gdx_graphics_Mesh) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_setVertices_Array1_float_R_com_badlogic_gdx_graphics_Mesh])(ctx, (frame[0].o), (frame[9].o));
	LINE_NUMBER(1055);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Mesh_transform_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:transform", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1062);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Mesh_getNumVertices_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getNumVertices_R_int])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_graphics_Mesh_transform_com_badlogic_gdx_math_Matrix4_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_transform_com_badlogic_gdx_math_Matrix4_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	LINE_NUMBER(1063);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Mesh_transform_com_badlogic_gdx_math_Matrix4_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:transform", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1067);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, (frame[0].o), (jint(1)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1068);
	frame[5].i = (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[4].o)))->F_offset) / (jint(4)));
	LINE_NUMBER(1069);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Mesh_getVertexSize_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexSize_R_int])(ctx, (frame[0].o));
	frame[6].i = (temp0 / (jint(4)));
	LINE_NUMBER(1070);
	frame[7].i = ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[4].o)))->F_numComponents);
	LINE_NUMBER(1071);
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Mesh_getNumVertices_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getNumVertices_R_int])(ctx, (frame[0].o));
	frame[8].i = temp1;
	LINE_NUMBER(1073);
	sp[0].o = (jobject) createArray(ctx, &class_float, ((frame[3].i) * (frame[6].i)));
	frame[9].o = sp[0].o;
	LINE_NUMBER(1074);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVertices_int_int_Array1_float_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertices_int_int_Array1_float_R_Array1_float])(ctx, (frame[0].o), ((frame[2].i) * (frame[6].i)), ((frame[3].i) * (frame[6].i)), (frame[9].o));
	LINE_NUMBER(1076);
	SM_com_badlogic_gdx_graphics_Mesh_transform_com_badlogic_gdx_math_Matrix4_Array1_float_int_int_int_int_int(ctx, (frame[1].o), (frame[9].o), (frame[6].i), (frame[5].i), (frame[7].i), (jint(0)), (frame[3].i));
	LINE_NUMBER(1078);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_updateVertices_int_Array1_float_R_com_badlogic_gdx_graphics_Mesh) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_updateVertices_int_Array1_float_R_com_badlogic_gdx_graphics_Mesh])(ctx, (frame[0].o), ((frame[2].i) * (frame[6].i)), (frame[9].o));
	LINE_NUMBER(1079);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_Mesh_transform_com_badlogic_gdx_math_Matrix4_Array1_float_int_int_int_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4, jint param5, jint param6) {
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:transform", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(1092);
	if ((frame[3].i) < 0) goto label_1;
	}
	{
	if ((frame[4].i) < (jint(1))) goto label_1;
	}
	{
	if (((frame[3].i) + (frame[4].i)) <= (frame[2].i)) goto label_2;
	}
label_1:;
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1093);
	if ((frame[5].i) < 0) goto label_3;
	}
	{
	if ((frame[6].i) < (jint(1))) goto label_3;
	}
	{
	if ((((frame[5].i) + (frame[6].i)) * (frame[2].i)) <= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
label_3:;
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"start = "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[5].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", count = "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[6].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", vertexSize = "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", length = "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(1096);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(1098);
	frame[8].i = ((frame[3].i) + ((frame[5].i) * (frame[2].i)));
	LINE_NUMBER(1099);
	switch((frame[4].i)) {
		case 1: goto label_7;
		case 2: goto label_8;
		case 3: goto label_9;
		default: goto label_10;
	}
	}
label_7:;
	{
	LINE_NUMBER(1101);
	frame[9].i = (jint(0));
	}
label_11:;
	{
	if ((frame[9].i) >= (frame[6].i)) goto label_12;
	}
	{
	LINE_NUMBER(1102);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[7].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[8].i))), (jfloat(0)), (jfloat(0)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1103);
	ARRAY_ACCESS(jfloat, (frame[1].o), (frame[8].i)) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[7].o)))->F_x);
	LINE_NUMBER(1104);
	frame[8].i = ((frame[8].i) + (frame[2].i));
	LINE_NUMBER(1101);
	INST_IINC(9, 1);
	goto label_11;
	}
label_12:;
	LINE_NUMBER(1106);
	goto label_10;
label_8:;
	{
	LINE_NUMBER(1108);
	frame[9].i = (jint(0));
	}
label_17:;
	{
	if ((frame[9].i) >= (frame[6].i)) goto label_18;
	}
	{
	LINE_NUMBER(1109);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[7].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[8].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[8].i) + (jint(1))))), (jfloat(0)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1110);
	ARRAY_ACCESS(jfloat, (frame[1].o), (frame[8].i)) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[7].o)))->F_x);
	LINE_NUMBER(1111);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[8].i) + (jint(1)))) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[7].o)))->F_y);
	LINE_NUMBER(1112);
	frame[8].i = ((frame[8].i) + (frame[2].i));
	LINE_NUMBER(1108);
	INST_IINC(9, 1);
	goto label_17;
	}
label_18:;
	LINE_NUMBER(1114);
	goto label_10;
label_9:;
	{
	LINE_NUMBER(1116);
	frame[9].i = (jint(0));
	}
label_24:;
	{
	if ((frame[9].i) >= (frame[6].i)) goto label_10;
	}
	{
	LINE_NUMBER(1117);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[7].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[8].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[8].i) + (jint(1))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[8].i) + (jint(2))))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1118);
	ARRAY_ACCESS(jfloat, (frame[1].o), (frame[8].i)) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[7].o)))->F_x);
	LINE_NUMBER(1119);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[8].i) + (jint(1)))) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[7].o)))->F_y);
	LINE_NUMBER(1120);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[8].i) + (jint(2)))) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[7].o)))->F_z);
	LINE_NUMBER(1121);
	frame[8].i = ((frame[8].i) + (frame[2].i));
	LINE_NUMBER(1116);
	INST_IINC(9, 1);
	goto label_24;
	}
label_10:;
	LINE_NUMBER(1125);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Mesh_transformUV_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:transformUV", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1132);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Mesh_getNumVertices_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getNumVertices_R_int])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_graphics_Mesh_transformUV_com_badlogic_gdx_math_Matrix3_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_transformUV_com_badlogic_gdx_math_Matrix3_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	LINE_NUMBER(1133);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Mesh_transformUV_com_badlogic_gdx_math_Matrix3_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:transformUV", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1137);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, (frame[0].o), (16));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1138);
	frame[5].i = (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[4].o)))->F_offset) / (jint(4)));
	LINE_NUMBER(1139);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Mesh_getVertexSize_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexSize_R_int])(ctx, (frame[0].o));
	frame[6].i = (temp0 / (jint(4)));
	LINE_NUMBER(1140);
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Mesh_getNumVertices_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getNumVertices_R_int])(ctx, (frame[0].o));
	frame[7].i = temp1;
	LINE_NUMBER(1142);
	sp[0].o = (jobject) createArray(ctx, &class_float, ((frame[7].i) * (frame[6].i)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1144);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVertices_int_int_Array1_float_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertices_int_int_Array1_float_R_Array1_float])(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[8].o)))->length), (frame[8].o));
	LINE_NUMBER(1145);
	SM_com_badlogic_gdx_graphics_Mesh_transformUV_com_badlogic_gdx_math_Matrix3_Array1_float_int_int_int_int(ctx, (frame[1].o), (frame[8].o), (frame[6].i), (frame[5].i), (frame[2].i), (frame[3].i));
	LINE_NUMBER(1146);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_setVertices_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_setVertices_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh])(ctx, (frame[0].o), (frame[8].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[8].o)))->length));
	LINE_NUMBER(1148);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_Mesh_transformUV_com_badlogic_gdx_math_Matrix3_Array1_float_int_int_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4, jint param5) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:transformUV", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(1159);
	if ((frame[4].i) < 0) goto label_1;
	}
	{
	if ((frame[5].i) < (jint(1))) goto label_1;
	}
	{
	if ((((frame[4].i) + (frame[5].i)) * (frame[2].i)) <= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_2;
	}
label_1:;
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"start = "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[4].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", count = "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[5].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", vertexSize = "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", length = "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1162);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(1164);
	frame[7].i = ((frame[3].i) + ((frame[4].i) * (frame[2].i)));
	LINE_NUMBER(1165);
	frame[8].i = (jint(0));
	}
label_5:;
	{
	if ((frame[8].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(1166);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[6].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[7].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[7].i) + (jint(1))))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_mul_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_mul_com_badlogic_gdx_math_Matrix3_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1167);
	ARRAY_ACCESS(jfloat, (frame[1].o), (frame[7].i)) = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[6].o)))->F_x);
	LINE_NUMBER(1168);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[7].i) + (jint(1)))) = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[6].o)))->F_y);
	LINE_NUMBER(1169);
	frame[7].i = ((frame[7].i) + (frame[2].i));
	LINE_NUMBER(1165);
	INST_IINC(8, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(1171);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_copy_boolean_boolean_Array1_int_R_com_badlogic_gdx_graphics_Mesh(jcontext ctx, jobject self, jbool param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[21];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:copy", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1182);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Mesh_getVertexSize_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexSize_R_int])(ctx, (frame[0].o));
	frame[4].i = (temp0 / (jint(4)));
	LINE_NUMBER(1183);
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Mesh_getNumVertices_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getNumVertices_R_int])(ctx, (frame[0].o));
	frame[5].i = temp1;
	LINE_NUMBER(1184);
	sp[0].o = (jobject) createArray(ctx, &class_float, ((frame[5].i) * (frame[4].i)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1185);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVertices_int_int_Array1_float_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertices_int_int_Array1_float_R_Array1_float])(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[6].o)))->length), (frame[6].o));
	LINE_NUMBER(1186);
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(1187);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(1188);
	frame[9].i = (jint(0));
	LINE_NUMBER(1189);
	if ((frame[3].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(1190);
	frame[10].i = (jint(0));
	LINE_NUMBER(1191);
	frame[11].i = (jint(0));
	LINE_NUMBER(1192);
	frame[12].i = (jint(0));
	}
label_12:;
	{
	if ((frame[12].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_13;
	}
	{
	LINE_NUMBER(1193);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, (frame[0].o), ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[12].i))));
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(1194);
	jint temp0 = frame[10].i;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, (frame[0].o), ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[12].i))));
	frame[10].i = (temp0 + ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK(sp[0].o))->F_numComponents));
	LINE_NUMBER(1195);
	INST_IINC(11, 1);
	}
label_15:;
	{
	LINE_NUMBER(1192);
	INST_IINC(12, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(1197);
	if ((frame[10].i) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(1198);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute, (frame[11].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1199);
	sp[0].o = (jobject) createArray(ctx, &class_short, (frame[10].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1200);
	frame[12].i = (jint(-1));
	LINE_NUMBER(1201);
	frame[13].i = (jint(-1));
	LINE_NUMBER(1202);
	frame[14].i = (jint(0));
	}
label_23:;
	{
	if ((frame[14].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_8;
	}
	{
	LINE_NUMBER(1203);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, (frame[0].o), ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[14].i))));
	frame[15].o = sp[0].o;
	LINE_NUMBER(1204);
	if ((frame[15].o) != nullptr) goto label_26;
	}
	goto label_27;
label_26:;
	{
	LINE_NUMBER(1205);
	frame[16].i = (jint(0));
	}
label_28:;
	{
	if ((frame[16].i) >= ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[15].o)))->F_numComponents)) goto label_29;
	}
	{
	LINE_NUMBER(1206);
	sp[0].o = frame[7].o;
	INST_IINC(12, 1);
	ARRAY_ACCESS(jshort, sp[0].o, (frame[12].i)) = (jshort((((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[15].o)))->F_offset) + (frame[16].i))));
	LINE_NUMBER(1205);
	INST_IINC(16, 1);
	goto label_28;
	}
label_29:;
	{
	LINE_NUMBER(1207);
	sp[0].o = frame[8].o;
	INST_IINC(13, 1);
	jint temp0 = frame[13].i;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_VertexAttribute_copy_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttribute_copy_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, (frame[15].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1208);
	frame[9].i = ((frame[9].i) + ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[15].o)))->F_numComponents));
	}
label_27:;
	{
	LINE_NUMBER(1202);
	INST_IINC(14, 1);
	goto label_23;
	}
label_8:;
	{
	LINE_NUMBER(1212);
	if ((frame[7].o) != nullptr) goto label_33;
	}
	{
	LINE_NUMBER(1213);
	sp[0].o = (jobject) createArray(ctx, &class_short, (frame[4].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1214);
	frame[10].i = (jint(0));
	}
label_36:;
	{
	if ((frame[10].i) >= (frame[4].i)) goto label_37;
	}
	{
	LINE_NUMBER(1215);
	ARRAY_ACCESS(jshort, (frame[7].o), (frame[10].i)) = (frame[10].i);
	LINE_NUMBER(1214);
	frame[10].i = (jshort(((frame[10].i) + (jint(1)))));
	goto label_36;
	}
label_37:;
	{
	LINE_NUMBER(1216);
	frame[9].i = (frame[4].i);
	}
label_33:;
	{
	LINE_NUMBER(1219);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Mesh_getNumIndices_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getNumIndices_R_int])(ctx, (frame[0].o));
	frame[10].i = temp0;
	LINE_NUMBER(1220);
	frame[11].o = (jobject(nullptr));
	LINE_NUMBER(1221);
	if ((frame[10].i) <= 0) goto label_42;
	}
	{
	LINE_NUMBER(1222);
	sp[0].o = (jobject) createArray(ctx, &class_short, (frame[10].i));
	frame[11].o = sp[0].o;
	LINE_NUMBER(1223);
	((func_com_badlogic_gdx_graphics_Mesh_getIndices_Array1_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getIndices_Array1_short])(ctx, (frame[0].o), (frame[11].o));
	LINE_NUMBER(1224);
	if ((frame[2].i) != 0) goto label_46;
	}
	{
	if ((frame[9].i) == (frame[4].i)) goto label_42;
	}
label_46:;
	{
	LINE_NUMBER(1225);
	sp[0].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, (frame[6].o)))->length));
	frame[12].o = sp[0].o;
	LINE_NUMBER(1226);
	frame[13].i = (jint(0));
	LINE_NUMBER(1227);
	frame[14].i = (jint(0));
	}
label_49:;
	{
	if ((frame[14].i) >= (frame[10].i)) goto label_50;
	}
	{
	LINE_NUMBER(1228);
	frame[15].i = (((jint)ARRAY_ACCESS(jshort, (frame[11].o), (frame[14].i))) * (frame[4].i));
	LINE_NUMBER(1229);
	frame[16].i = (jint(-1));
	LINE_NUMBER(1230);
	if ((frame[2].i) == 0) goto label_54;
	}
	{
	LINE_NUMBER(1231);
	frame[17].i = (jint(0));
	}
label_56:;
	{
	if ((frame[17].i) >= (frame[13].i)) goto label_54;
	}
	INST_ILOAD(16);
	if ((--sp)->i >= 0) goto label_54;
	{
	LINE_NUMBER(1232);
	frame[18].i = ((frame[17].i) * (frame[9].i));
	LINE_NUMBER(1233);
	frame[19].i = (jint(1));
	LINE_NUMBER(1234);
	frame[20].i = (jint(0));
	}
label_60:;
	{
	if ((frame[20].i) >= (((jarray) nullCheck(ctx, (frame[7].o)))->length)) goto label_61;
	}
	INST_ILOAD(19);
	if ((--sp)->i == 0) goto label_61;
	{
	LINE_NUMBER(1235);
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[18].i) + (frame[20].i)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[15].i) + ((jint)ARRAY_ACCESS(jshort, (frame[7].o), (frame[20].i)))))), -1)) == 0) goto label_63;
	}
	INST_ICONST(0);
	INST_ISTORE(19);
label_63:;
	{
	LINE_NUMBER(1234);
	INST_IINC(20, 1);
	goto label_60;
	}
label_61:;
	{
	LINE_NUMBER(1237);
	if ((frame[19].i) == 0) goto label_64;
	}
	INST_ILOAD(17);
	INST_ISTORE(16);
label_64:;
	{
	LINE_NUMBER(1231);
	frame[17].i = (jshort(((frame[17].i) + (jint(1)))));
	goto label_56;
	}
label_54:;
	{
	LINE_NUMBER(1240);
	if ((frame[16].i) <= 0) goto label_65;
	}
	{
	LINE_NUMBER(1241);
	ARRAY_ACCESS(jshort, (frame[11].o), (frame[14].i)) = (frame[16].i);
	goto label_67;
	}
label_65:;
	{
	LINE_NUMBER(1243);
	frame[17].i = ((frame[13].i) * (frame[9].i));
	LINE_NUMBER(1244);
	frame[18].i = (jint(0));
	}
label_69:;
	{
	if ((frame[18].i) >= (((jarray) nullCheck(ctx, (frame[7].o)))->length)) goto label_70;
	}
	{
	LINE_NUMBER(1245);
	ARRAY_ACCESS(jfloat, (frame[12].o), ((frame[17].i) + (frame[18].i))) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[15].i) + ((jint)ARRAY_ACCESS(jshort, (frame[7].o), (frame[18].i))))));
	LINE_NUMBER(1244);
	INST_IINC(18, 1);
	goto label_69;
	}
label_70:;
	{
	LINE_NUMBER(1246);
	ARRAY_ACCESS(jshort, (frame[11].o), (frame[14].i)) = (jshort((frame[13].i)));
	LINE_NUMBER(1247);
	INST_IINC(13, 1);
	}
label_67:;
	{
	LINE_NUMBER(1227);
	INST_IINC(14, 1);
	goto label_49;
	}
label_50:;
	{
	LINE_NUMBER(1250);
	frame[6].o = (frame[12].o);
	LINE_NUMBER(1251);
	frame[5].i = (frame[13].i);
	}
label_42:;
	{
	LINE_NUMBER(1256);
	if ((frame[8].o) != nullptr) goto label_75;
	}
	{
	LINE_NUMBER(1257);
	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Mesh);
	jint temp0 = frame[1].i;
	jint temp1 = frame[5].i;
	sp[1].o = sp[0].o;
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp += 4;
	if ((frame[11].o) != nullptr) goto label_77;
	}
	INST_ICONST(0);
	goto label_78;
label_77:;
	INST_ALOAD(11);
	INST_ARRAYLENGTH();
label_78:;
	{
	sp -= 5;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVertexAttributes_R_com_badlogic_gdx_graphics_VertexAttributes) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexAttributes_R_com_badlogic_gdx_graphics_VertexAttributes])(ctx, (frame[0].o));
	init_com_badlogic_gdx_graphics_Mesh_boolean_int_int_com_badlogic_gdx_graphics_VertexAttributes(ctx, sp[0].o, sp[2].i, sp[3].i, sp[4].i, sp[1].o);
	frame[12].o = sp[0].o;
	goto label_80;
	}
label_75:;
	{
	LINE_NUMBER(1259);
	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Mesh);
	jint temp0 = frame[1].i;
	jint temp1 = frame[5].i;
	sp[1].o = sp[0].o;
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp += 4;
	if ((frame[11].o) != nullptr) goto label_81;
	}
	INST_ICONST(0);
	goto label_82;
label_81:;
	INST_ALOAD(11);
	INST_ARRAYLENGTH();
label_82:;
	{
	sp -= 5;
	init_com_badlogic_gdx_graphics_Mesh_boolean_int_int_Array1_com_badlogic_gdx_graphics_VertexAttribute(ctx, sp[0].o, sp[2].i, sp[3].i, sp[4].i, (frame[8].o));
	frame[12].o = sp[0].o;
	}
label_80:;
	{
	LINE_NUMBER(1260);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_setVertices_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_setVertices_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh])(ctx, (frame[12].o), (frame[6].o), (jint(0)), ((frame[5].i) * (frame[9].i)));
	LINE_NUMBER(1261);
	if ((frame[11].o) == nullptr) goto label_84;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_setIndices_Array1_short_R_com_badlogic_gdx_graphics_Mesh) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_setIndices_Array1_short_R_com_badlogic_gdx_graphics_Mesh])(ctx, (frame[12].o), (frame[11].o));
	}
label_84:;
	{
	LINE_NUMBER(1262);
	popStackFrame(ctx);
	return (frame[12].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Mesh_copy_boolean_R_com_badlogic_gdx_graphics_Mesh(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:copy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1269);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_copy_boolean_boolean_Array1_int_R_com_badlogic_gdx_graphics_Mesh) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_copy_boolean_boolean_Array1_int_R_com_badlogic_gdx_graphics_Mesh])(ctx, (frame[0].o), (frame[1].i), (jint(0)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_Mesh(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Mesh:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	{
	LINE_NUMBER(77);
	clinit_java_util_HashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	SF_com_badlogic_gdx_graphics_Mesh_meshes = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_graphics_Mesh;
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

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[3])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[4])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[5])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getVerticesBuffer
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[44]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

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

	{ // Method getIndicesBuffer
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[59]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

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
}

void *vtable_com_badlogic_gdx_graphics_Mesh[] {
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
	(void *) M_com_badlogic_gdx_graphics_Mesh_dispose,
	(void *) M_com_badlogic_gdx_graphics_Mesh_makeVertexBuffer_boolean_int_com_badlogic_gdx_graphics_VertexAttributes_R_com_badlogic_gdx_graphics_glutils_VertexData,
	(void *) M_com_badlogic_gdx_graphics_Mesh_enableInstancedRendering_boolean_int_Array1_com_badlogic_gdx_graphics_VertexAttribute_R_com_badlogic_gdx_graphics_Mesh,
	(void *) M_com_badlogic_gdx_graphics_Mesh_disableInstancedRendering_R_com_badlogic_gdx_graphics_Mesh,
	(void *) M_com_badlogic_gdx_graphics_Mesh_setInstanceData_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh,
	(void *) M_com_badlogic_gdx_graphics_Mesh_setInstanceData_Array1_float_R_com_badlogic_gdx_graphics_Mesh,
	(void *) M_com_badlogic_gdx_graphics_Mesh_setInstanceData_java_nio_FloatBuffer_int_R_com_badlogic_gdx_graphics_Mesh,
	(void *) M_com_badlogic_gdx_graphics_Mesh_setInstanceData_java_nio_FloatBuffer_R_com_badlogic_gdx_graphics_Mesh,
	(void *) M_com_badlogic_gdx_graphics_Mesh_updateInstanceData_int_Array1_float_R_com_badlogic_gdx_graphics_Mesh,
	(void *) M_com_badlogic_gdx_graphics_Mesh_updateInstanceData_int_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh,
	(void *) M_com_badlogic_gdx_graphics_Mesh_updateInstanceData_int_java_nio_FloatBuffer_R_com_badlogic_gdx_graphics_Mesh,
	(void *) M_com_badlogic_gdx_graphics_Mesh_updateInstanceData_int_java_nio_FloatBuffer_int_int_R_com_badlogic_gdx_graphics_Mesh,
	(void *) M_com_badlogic_gdx_graphics_Mesh_setVertices_Array1_float_R_com_badlogic_gdx_graphics_Mesh,
	(void *) M_com_badlogic_gdx_graphics_Mesh_isInstanced_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_Mesh_setVertices_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh,
	(void *) M_com_badlogic_gdx_graphics_Mesh_updateVertices_int_Array1_float_R_com_badlogic_gdx_graphics_Mesh,
	(void *) M_com_badlogic_gdx_graphics_Mesh_updateVertices_int_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh,
	(void *) M_com_badlogic_gdx_graphics_Mesh_getVertices_Array1_float_R_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_Mesh_getVertices_int_Array1_float_R_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_Mesh_getVertices_int_int_Array1_float_R_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_Mesh_getVertices_int_int_Array1_float_int_R_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_Mesh_setIndices_Array1_short_R_com_badlogic_gdx_graphics_Mesh,
	(void *) M_com_badlogic_gdx_graphics_Mesh_setIndices_Array1_short_int_int_R_com_badlogic_gdx_graphics_Mesh,
	(void *) M_com_badlogic_gdx_graphics_Mesh_getIndices_Array1_short,
	(void *) M_com_badlogic_gdx_graphics_Mesh_getIndices_Array1_short_int,
	(void *) M_com_badlogic_gdx_graphics_Mesh_getIndices_int_Array1_short_int,
	(void *) M_com_badlogic_gdx_graphics_Mesh_getIndices_int_int_Array1_short_int,
	(void *) M_com_badlogic_gdx_graphics_Mesh_getNumIndices_R_int,
	(void *) M_com_badlogic_gdx_graphics_Mesh_getNumVertices_R_int,
	(void *) M_com_badlogic_gdx_graphics_Mesh_getMaxVertices_R_int,
	(void *) M_com_badlogic_gdx_graphics_Mesh_getMaxIndices_R_int,
	(void *) M_com_badlogic_gdx_graphics_Mesh_getVertexSize_R_int,
	(void *) M_com_badlogic_gdx_graphics_Mesh_getIndexData_R_com_badlogic_gdx_graphics_glutils_IndexData,
	(void *) M_com_badlogic_gdx_graphics_Mesh_setAutoBind_boolean,
	(void *) M_com_badlogic_gdx_graphics_Mesh_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram,
	(void *) M_com_badlogic_gdx_graphics_Mesh_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int_Array1_int,
	(void *) M_com_badlogic_gdx_graphics_Mesh_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram,
	(void *) M_com_badlogic_gdx_graphics_Mesh_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int_Array1_int,
	(void *) M_com_badlogic_gdx_graphics_Mesh_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_int,
	(void *) M_com_badlogic_gdx_graphics_Mesh_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_Mesh_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_int_int_int_boolean,
	(void *) M_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute,
	(void *) M_com_badlogic_gdx_graphics_Mesh_getVertexAttributes_R_com_badlogic_gdx_graphics_VertexAttributes,
	(void *) M_com_badlogic_gdx_graphics_Mesh_getInstancedAttributes_R_com_badlogic_gdx_graphics_VertexAttributes,
	(void *) M_com_badlogic_gdx_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer,
	(void *) M_com_badlogic_gdx_graphics_Mesh_getVerticesBuffer_boolean_R_java_nio_FloatBuffer,
	(void *) M_com_badlogic_gdx_graphics_Mesh_calculateBoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_graphics_Mesh_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_graphics_Mesh_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_graphics_Mesh_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_graphics_Mesh_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_graphics_Mesh_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_graphics_Mesh_calculateRadiusSquared_float_float_float_int_int_com_badlogic_gdx_math_Matrix4_R_float,
	(void *) M_com_badlogic_gdx_graphics_Mesh_calculateRadius_float_float_float_int_int_com_badlogic_gdx_math_Matrix4_R_float,
	(void *) M_com_badlogic_gdx_graphics_Mesh_calculateRadius_com_badlogic_gdx_math_Vector3_int_int_com_badlogic_gdx_math_Matrix4_R_float,
	(void *) M_com_badlogic_gdx_graphics_Mesh_calculateRadius_float_float_float_int_int_R_float,
	(void *) M_com_badlogic_gdx_graphics_Mesh_calculateRadius_com_badlogic_gdx_math_Vector3_int_int_R_float,
	(void *) M_com_badlogic_gdx_graphics_Mesh_calculateRadius_float_float_float_R_float,
	(void *) M_com_badlogic_gdx_graphics_Mesh_calculateRadius_com_badlogic_gdx_math_Vector3_R_float,
	(void *) M_com_badlogic_gdx_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer,
	(void *) M_com_badlogic_gdx_graphics_Mesh_getIndicesBuffer_boolean_R_java_nio_ShortBuffer,
	(void *) M_com_badlogic_gdx_graphics_Mesh_scale_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_Mesh_transform_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_graphics_Mesh_transform_com_badlogic_gdx_math_Matrix4_int_int,
	(void *) M_com_badlogic_gdx_graphics_Mesh_transformUV_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_graphics_Mesh_transformUV_com_badlogic_gdx_math_Matrix3_int_int,
	(void *) M_com_badlogic_gdx_graphics_Mesh_copy_boolean_boolean_Array1_int_R_com_badlogic_gdx_graphics_Mesh,
	(void *) M_com_badlogic_gdx_graphics_Mesh_copy_boolean_R_com_badlogic_gdx_graphics_Mesh,
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
	{ "makeVertexBuffer", "(ZILcom/badlogic/gdx/graphics/VertexAttributes;)Lcom/badlogic/gdx/graphics/glutils/VertexData;" },
	{ "enableInstancedRendering", "(ZI[Lcom/badlogic/gdx/graphics/VertexAttribute;)Lcom/badlogic/gdx/graphics/Mesh;" },
	{ "disableInstancedRendering", "()Lcom/badlogic/gdx/graphics/Mesh;" },
	{ "setInstanceData", "([FII)Lcom/badlogic/gdx/graphics/Mesh;" },
	{ "setInstanceData", "([F)Lcom/badlogic/gdx/graphics/Mesh;" },
	{ "setInstanceData", "(Ljava/nio/FloatBuffer;I)Lcom/badlogic/gdx/graphics/Mesh;" },
	{ "setInstanceData", "(Ljava/nio/FloatBuffer;)Lcom/badlogic/gdx/graphics/Mesh;" },
	{ "updateInstanceData", "(I[F)Lcom/badlogic/gdx/graphics/Mesh;" },
	{ "updateInstanceData", "(I[FII)Lcom/badlogic/gdx/graphics/Mesh;" },
	{ "updateInstanceData", "(ILjava/nio/FloatBuffer;)Lcom/badlogic/gdx/graphics/Mesh;" },
	{ "updateInstanceData", "(ILjava/nio/FloatBuffer;II)Lcom/badlogic/gdx/graphics/Mesh;" },
	{ "setVertices", "([F)Lcom/badlogic/gdx/graphics/Mesh;" },
	{ "isInstanced", "()Z" },
	{ "setVertices", "([FII)Lcom/badlogic/gdx/graphics/Mesh;" },
	{ "updateVertices", "(I[F)Lcom/badlogic/gdx/graphics/Mesh;" },
	{ "updateVertices", "(I[FII)Lcom/badlogic/gdx/graphics/Mesh;" },
	{ "getVertices", "([F)[F" },
	{ "getVertices", "(I[F)[F" },
	{ "getVertices", "(II[F)[F" },
	{ "getVertices", "(II[FI)[F" },
	{ "setIndices", "([S)Lcom/badlogic/gdx/graphics/Mesh;" },
	{ "setIndices", "([SII)Lcom/badlogic/gdx/graphics/Mesh;" },
	{ "getIndices", "([S)V" },
	{ "getIndices", "([SI)V" },
	{ "getIndices", "(I[SI)V" },
	{ "getIndices", "(II[SI)V" },
	{ "getNumIndices", "()I" },
	{ "getNumVertices", "()I" },
	{ "getMaxVertices", "()I" },
	{ "getMaxIndices", "()I" },
	{ "getVertexSize", "()I" },
	{ "getIndexData", "()Lcom/badlogic/gdx/graphics/glutils/IndexData;" },
	{ "setAutoBind", "(Z)V" },
	{ "bind", "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V" },
	{ "bind", "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;[I[I)V" },
	{ "unbind", "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V" },
	{ "unbind", "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;[I[I)V" },
	{ "render", "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;I)V" },
	{ "render", "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;III)V" },
	{ "render", "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;IIIZ)V" },
	{ "getVertexAttribute", "(I)Lcom/badlogic/gdx/graphics/VertexAttribute;" },
	{ "getVertexAttributes", "()Lcom/badlogic/gdx/graphics/VertexAttributes;" },
	{ "getInstancedAttributes", "()Lcom/badlogic/gdx/graphics/VertexAttributes;" },
	{ "getVerticesBuffer", "()Ljava/nio/FloatBuffer;" },
	{ "getVerticesBuffer", "(Z)Ljava/nio/FloatBuffer;" },
	{ "calculateBoundingBox", "()Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "calculateBoundingBox", "(Lcom/badlogic/gdx/math/collision/BoundingBox;)V" },
	{ "calculateBoundingBox", "(Lcom/badlogic/gdx/math/collision/BoundingBox;II)Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "calculateBoundingBox", "(Lcom/badlogic/gdx/math/collision/BoundingBox;IILcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "extendBoundingBox", "(Lcom/badlogic/gdx/math/collision/BoundingBox;II)Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "extendBoundingBox", "(Lcom/badlogic/gdx/math/collision/BoundingBox;IILcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "calculateRadiusSquared", "(FFFIILcom/badlogic/gdx/math/Matrix4;)F" },
	{ "calculateRadius", "(FFFIILcom/badlogic/gdx/math/Matrix4;)F" },
	{ "calculateRadius", "(Lcom/badlogic/gdx/math/Vector3;IILcom/badlogic/gdx/math/Matrix4;)F" },
	{ "calculateRadius", "(FFFII)F" },
	{ "calculateRadius", "(Lcom/badlogic/gdx/math/Vector3;II)F" },
	{ "calculateRadius", "(FFF)F" },
	{ "calculateRadius", "(Lcom/badlogic/gdx/math/Vector3;)F" },
	{ "getIndicesBuffer", "()Ljava/nio/ShortBuffer;" },
	{ "getIndicesBuffer", "(Z)Ljava/nio/ShortBuffer;" },
	{ "scale", "(FFF)V" },
	{ "transform", "(Lcom/badlogic/gdx/math/Matrix4;)V" },
	{ "transform", "(Lcom/badlogic/gdx/math/Matrix4;II)V" },
	{ "transformUV", "(Lcom/badlogic/gdx/math/Matrix3;)V" },
	{ "transformUV", "(Lcom/badlogic/gdx/math/Matrix3;II)V" },
	{ "copy", "(ZZ[I)Lcom/badlogic/gdx/graphics/Mesh;" },
	{ "copy", "(Z)Lcom/badlogic/gdx/graphics/Mesh;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_Mesh$VertexDataType,
};

static FieldMetadata fields[] {
	{ "meshes", &class_java_util_Map, (intptr_t) &SF_com_badlogic_gdx_graphics_Mesh_meshes, "Ljava/util/Map;", 24 },
	{ "vertices", &class_com_badlogic_gdx_graphics_glutils_VertexData, offsetof(com_badlogic_gdx_graphics_Mesh, F_vertices), "Lcom/badlogic/gdx/graphics/glutils/VertexData;", 20 },
	{ "indices", &class_com_badlogic_gdx_graphics_glutils_IndexData, offsetof(com_badlogic_gdx_graphics_Mesh, F_indices), "Lcom/badlogic/gdx/graphics/glutils/IndexData;", 20 },
	{ "autoBind", &class_boolean, offsetof(com_badlogic_gdx_graphics_Mesh, F_autoBind), "Z", 4 },
	{ "isVertexArray", &class_boolean, offsetof(com_badlogic_gdx_graphics_Mesh, F_isVertexArray), "Z", 20 },
	{ "instances", &class_com_badlogic_gdx_graphics_glutils_InstanceData, offsetof(com_badlogic_gdx_graphics_Mesh, F_instances), "Lcom/badlogic/gdx/graphics/glutils/InstanceData;", 4 },
	{ "isInstanced", &class_boolean, offsetof(com_badlogic_gdx_graphics_Mesh, F_isInstanced), "Z", 4 },
	{ "tmpV", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_graphics_Mesh, F_tmpV), "Lcom/badlogic/gdx/math/Vector3;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Mesh_com_badlogic_gdx_graphics_glutils_VertexData_com_badlogic_gdx_graphics_glutils_IndexData_boolean, 0, "(Lcom/badlogic/gdx/graphics/glutils/VertexData;Lcom/badlogic/gdx/graphics/glutils/IndexData;Z)V", 4 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Mesh_boolean_int_int_Array1_com_badlogic_gdx_graphics_VertexAttribute, 0, "(ZII[Lcom/badlogic/gdx/graphics/VertexAttribute;)V", 129 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Mesh_boolean_int_int_com_badlogic_gdx_graphics_VertexAttributes, 0, "(ZIILcom/badlogic/gdx/graphics/VertexAttributes;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Mesh_boolean_boolean_int_int_com_badlogic_gdx_graphics_VertexAttributes, 0, "(ZZIILcom/badlogic/gdx/graphics/VertexAttributes;)V", 1 },
	{ "makeVertexBuffer", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_makeVertexBuffer_boolean_int_com_badlogic_gdx_graphics_VertexAttributes_R_com_badlogic_gdx_graphics_glutils_VertexData, VTABLE_com_badlogic_gdx_graphics_Mesh_makeVertexBuffer_boolean_int_com_badlogic_gdx_graphics_VertexAttributes_R_com_badlogic_gdx_graphics_glutils_VertexData, "(ZILcom/badlogic/gdx/graphics/VertexAttributes;)Lcom/badlogic/gdx/graphics/glutils/VertexData;", 2 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Mesh_com_badlogic_gdx_graphics_Mesh$VertexDataType_boolean_int_int_Array1_com_badlogic_gdx_graphics_VertexAttribute, 0, "(Lcom/badlogic/gdx/graphics/Mesh$VertexDataType;ZII[Lcom/badlogic/gdx/graphics/VertexAttribute;)V", 129 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Mesh_com_badlogic_gdx_graphics_Mesh$VertexDataType_boolean_int_int_com_badlogic_gdx_graphics_VertexAttributes, 0, "(Lcom/badlogic/gdx/graphics/Mesh$VertexDataType;ZIILcom/badlogic/gdx/graphics/VertexAttributes;)V", 1 },
	{ "enableInstancedRendering", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_enableInstancedRendering_boolean_int_Array1_com_badlogic_gdx_graphics_VertexAttribute_R_com_badlogic_gdx_graphics_Mesh, VTABLE_com_badlogic_gdx_graphics_Mesh_enableInstancedRendering_boolean_int_Array1_com_badlogic_gdx_graphics_VertexAttribute_R_com_badlogic_gdx_graphics_Mesh, "(ZI[Lcom/badlogic/gdx/graphics/VertexAttribute;)Lcom/badlogic/gdx/graphics/Mesh;", 129 },
	{ "disableInstancedRendering", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_disableInstancedRendering_R_com_badlogic_gdx_graphics_Mesh, VTABLE_com_badlogic_gdx_graphics_Mesh_disableInstancedRendering_R_com_badlogic_gdx_graphics_Mesh, "()Lcom/badlogic/gdx/graphics/Mesh;", 1 },
	{ "setInstanceData", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_setInstanceData_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh, VTABLE_com_badlogic_gdx_graphics_Mesh_setInstanceData_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh, "([FII)Lcom/badlogic/gdx/graphics/Mesh;", 1 },
	{ "setInstanceData", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_setInstanceData_Array1_float_R_com_badlogic_gdx_graphics_Mesh, VTABLE_com_badlogic_gdx_graphics_Mesh_setInstanceData_Array1_float_R_com_badlogic_gdx_graphics_Mesh, "([F)Lcom/badlogic/gdx/graphics/Mesh;", 1 },
	{ "setInstanceData", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_setInstanceData_java_nio_FloatBuffer_int_R_com_badlogic_gdx_graphics_Mesh, VTABLE_com_badlogic_gdx_graphics_Mesh_setInstanceData_java_nio_FloatBuffer_int_R_com_badlogic_gdx_graphics_Mesh, "(Ljava/nio/FloatBuffer;I)Lcom/badlogic/gdx/graphics/Mesh;", 1 },
	{ "setInstanceData", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_setInstanceData_java_nio_FloatBuffer_R_com_badlogic_gdx_graphics_Mesh, VTABLE_com_badlogic_gdx_graphics_Mesh_setInstanceData_java_nio_FloatBuffer_R_com_badlogic_gdx_graphics_Mesh, "(Ljava/nio/FloatBuffer;)Lcom/badlogic/gdx/graphics/Mesh;", 1 },
	{ "updateInstanceData", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_updateInstanceData_int_Array1_float_R_com_badlogic_gdx_graphics_Mesh, VTABLE_com_badlogic_gdx_graphics_Mesh_updateInstanceData_int_Array1_float_R_com_badlogic_gdx_graphics_Mesh, "(I[F)Lcom/badlogic/gdx/graphics/Mesh;", 1 },
	{ "updateInstanceData", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_updateInstanceData_int_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh, VTABLE_com_badlogic_gdx_graphics_Mesh_updateInstanceData_int_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh, "(I[FII)Lcom/badlogic/gdx/graphics/Mesh;", 1 },
	{ "updateInstanceData", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_updateInstanceData_int_java_nio_FloatBuffer_R_com_badlogic_gdx_graphics_Mesh, VTABLE_com_badlogic_gdx_graphics_Mesh_updateInstanceData_int_java_nio_FloatBuffer_R_com_badlogic_gdx_graphics_Mesh, "(ILjava/nio/FloatBuffer;)Lcom/badlogic/gdx/graphics/Mesh;", 1 },
	{ "updateInstanceData", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_updateInstanceData_int_java_nio_FloatBuffer_int_int_R_com_badlogic_gdx_graphics_Mesh, VTABLE_com_badlogic_gdx_graphics_Mesh_updateInstanceData_int_java_nio_FloatBuffer_int_int_R_com_badlogic_gdx_graphics_Mesh, "(ILjava/nio/FloatBuffer;II)Lcom/badlogic/gdx/graphics/Mesh;", 1 },
	{ "setVertices", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_setVertices_Array1_float_R_com_badlogic_gdx_graphics_Mesh, VTABLE_com_badlogic_gdx_graphics_Mesh_setVertices_Array1_float_R_com_badlogic_gdx_graphics_Mesh, "([F)Lcom/badlogic/gdx/graphics/Mesh;", 1 },
	{ "isInstanced", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_isInstanced_R_boolean, VTABLE_com_badlogic_gdx_graphics_Mesh_isInstanced_R_boolean, "()Z", 1 },
	{ "setVertices", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_setVertices_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh, VTABLE_com_badlogic_gdx_graphics_Mesh_setVertices_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh, "([FII)Lcom/badlogic/gdx/graphics/Mesh;", 1 },
	{ "updateVertices", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_updateVertices_int_Array1_float_R_com_badlogic_gdx_graphics_Mesh, VTABLE_com_badlogic_gdx_graphics_Mesh_updateVertices_int_Array1_float_R_com_badlogic_gdx_graphics_Mesh, "(I[F)Lcom/badlogic/gdx/graphics/Mesh;", 1 },
	{ "updateVertices", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_updateVertices_int_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh, VTABLE_com_badlogic_gdx_graphics_Mesh_updateVertices_int_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh, "(I[FII)Lcom/badlogic/gdx/graphics/Mesh;", 1 },
	{ "getVertices", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_getVertices_Array1_float_R_Array1_float, VTABLE_com_badlogic_gdx_graphics_Mesh_getVertices_Array1_float_R_Array1_float, "([F)[F", 1 },
	{ "getVertices", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_getVertices_int_Array1_float_R_Array1_float, VTABLE_com_badlogic_gdx_graphics_Mesh_getVertices_int_Array1_float_R_Array1_float, "(I[F)[F", 1 },
	{ "getVertices", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_getVertices_int_int_Array1_float_R_Array1_float, VTABLE_com_badlogic_gdx_graphics_Mesh_getVertices_int_int_Array1_float_R_Array1_float, "(II[F)[F", 1 },
	{ "getVertices", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_getVertices_int_int_Array1_float_int_R_Array1_float, VTABLE_com_badlogic_gdx_graphics_Mesh_getVertices_int_int_Array1_float_int_R_Array1_float, "(II[FI)[F", 1 },
	{ "setIndices", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_setIndices_Array1_short_R_com_badlogic_gdx_graphics_Mesh, VTABLE_com_badlogic_gdx_graphics_Mesh_setIndices_Array1_short_R_com_badlogic_gdx_graphics_Mesh, "([S)Lcom/badlogic/gdx/graphics/Mesh;", 1 },
	{ "setIndices", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_setIndices_Array1_short_int_int_R_com_badlogic_gdx_graphics_Mesh, VTABLE_com_badlogic_gdx_graphics_Mesh_setIndices_Array1_short_int_int_R_com_badlogic_gdx_graphics_Mesh, "([SII)Lcom/badlogic/gdx/graphics/Mesh;", 1 },
	{ "getIndices", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_getIndices_Array1_short, VTABLE_com_badlogic_gdx_graphics_Mesh_getIndices_Array1_short, "([S)V", 1 },
	{ "getIndices", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_getIndices_Array1_short_int, VTABLE_com_badlogic_gdx_graphics_Mesh_getIndices_Array1_short_int, "([SI)V", 1 },
	{ "getIndices", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_getIndices_int_Array1_short_int, VTABLE_com_badlogic_gdx_graphics_Mesh_getIndices_int_Array1_short_int, "(I[SI)V", 1 },
	{ "getIndices", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_getIndices_int_int_Array1_short_int, VTABLE_com_badlogic_gdx_graphics_Mesh_getIndices_int_int_Array1_short_int, "(II[SI)V", 1 },
	{ "getNumIndices", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_getNumIndices_R_int, VTABLE_com_badlogic_gdx_graphics_Mesh_getNumIndices_R_int, "()I", 1 },
	{ "getNumVertices", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_getNumVertices_R_int, VTABLE_com_badlogic_gdx_graphics_Mesh_getNumVertices_R_int, "()I", 1 },
	{ "getMaxVertices", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_getMaxVertices_R_int, VTABLE_com_badlogic_gdx_graphics_Mesh_getMaxVertices_R_int, "()I", 1 },
	{ "getMaxIndices", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_getMaxIndices_R_int, VTABLE_com_badlogic_gdx_graphics_Mesh_getMaxIndices_R_int, "()I", 1 },
	{ "getVertexSize", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_getVertexSize_R_int, VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexSize_R_int, "()I", 1 },
	{ "getIndexData", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_getIndexData_R_com_badlogic_gdx_graphics_glutils_IndexData, VTABLE_com_badlogic_gdx_graphics_Mesh_getIndexData_R_com_badlogic_gdx_graphics_glutils_IndexData, "()Lcom/badlogic/gdx/graphics/glutils/IndexData;", 1 },
	{ "setAutoBind", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_setAutoBind_boolean, VTABLE_com_badlogic_gdx_graphics_Mesh_setAutoBind_boolean, "(Z)V", 1 },
	{ "bind", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram, VTABLE_com_badlogic_gdx_graphics_Mesh_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V", 1 },
	{ "bind", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int_Array1_int, VTABLE_com_badlogic_gdx_graphics_Mesh_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int_Array1_int, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;[I[I)V", 1 },
	{ "unbind", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram, VTABLE_com_badlogic_gdx_graphics_Mesh_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V", 1 },
	{ "unbind", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int_Array1_int, VTABLE_com_badlogic_gdx_graphics_Mesh_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int_Array1_int, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;[I[I)V", 1 },
	{ "render", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_int, VTABLE_com_badlogic_gdx_graphics_Mesh_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_int, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;I)V", 1 },
	{ "render", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_int_int_int, VTABLE_com_badlogic_gdx_graphics_Mesh_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_int_int_int, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;III)V", 1 },
	{ "render", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_int_int_int_boolean, VTABLE_com_badlogic_gdx_graphics_Mesh_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_int_int_int_boolean, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;IIIZ)V", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_dispose, VTABLE_com_badlogic_gdx_graphics_Mesh_dispose, "()V", 1 },
	{ "getVertexAttribute", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute, VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute, "(I)Lcom/badlogic/gdx/graphics/VertexAttribute;", 1 },
	{ "getVertexAttributes", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_getVertexAttributes_R_com_badlogic_gdx_graphics_VertexAttributes, VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexAttributes_R_com_badlogic_gdx_graphics_VertexAttributes, "()Lcom/badlogic/gdx/graphics/VertexAttributes;", 1 },
	{ "getInstancedAttributes", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_getInstancedAttributes_R_com_badlogic_gdx_graphics_VertexAttributes, VTABLE_com_badlogic_gdx_graphics_Mesh_getInstancedAttributes_R_com_badlogic_gdx_graphics_VertexAttributes, "()Lcom/badlogic/gdx/graphics/VertexAttributes;", 1 },
	{ "getVerticesBuffer", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer, VTABLE_com_badlogic_gdx_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer, "()Ljava/nio/FloatBuffer;", 131073 },
	{ "getVerticesBuffer", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_getVerticesBuffer_boolean_R_java_nio_FloatBuffer, VTABLE_com_badlogic_gdx_graphics_Mesh_getVerticesBuffer_boolean_R_java_nio_FloatBuffer, "(Z)Ljava/nio/FloatBuffer;", 1 },
	{ "calculateBoundingBox", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_calculateBoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_graphics_Mesh_calculateBoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, "()Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "calculateBoundingBox", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_graphics_Mesh_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox, "(Lcom/badlogic/gdx/math/collision/BoundingBox;)V", 1 },
	{ "calculateBoundingBox", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_graphics_Mesh_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_R_com_badlogic_gdx_math_collision_BoundingBox, "(Lcom/badlogic/gdx/math/collision/BoundingBox;II)Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "calculateBoundingBox", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_graphics_Mesh_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_BoundingBox, "(Lcom/badlogic/gdx/math/collision/BoundingBox;IILcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "extendBoundingBox", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_graphics_Mesh_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_R_com_badlogic_gdx_math_collision_BoundingBox, "(Lcom/badlogic/gdx/math/collision/BoundingBox;II)Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "extendBoundingBox", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_graphics_Mesh_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_BoundingBox, "(Lcom/badlogic/gdx/math/collision/BoundingBox;IILcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "calculateRadiusSquared", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_calculateRadiusSquared_float_float_float_int_int_com_badlogic_gdx_math_Matrix4_R_float, VTABLE_com_badlogic_gdx_graphics_Mesh_calculateRadiusSquared_float_float_float_int_int_com_badlogic_gdx_math_Matrix4_R_float, "(FFFIILcom/badlogic/gdx/math/Matrix4;)F", 1 },
	{ "calculateRadius", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_calculateRadius_float_float_float_int_int_com_badlogic_gdx_math_Matrix4_R_float, VTABLE_com_badlogic_gdx_graphics_Mesh_calculateRadius_float_float_float_int_int_com_badlogic_gdx_math_Matrix4_R_float, "(FFFIILcom/badlogic/gdx/math/Matrix4;)F", 1 },
	{ "calculateRadius", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_calculateRadius_com_badlogic_gdx_math_Vector3_int_int_com_badlogic_gdx_math_Matrix4_R_float, VTABLE_com_badlogic_gdx_graphics_Mesh_calculateRadius_com_badlogic_gdx_math_Vector3_int_int_com_badlogic_gdx_math_Matrix4_R_float, "(Lcom/badlogic/gdx/math/Vector3;IILcom/badlogic/gdx/math/Matrix4;)F", 1 },
	{ "calculateRadius", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_calculateRadius_float_float_float_int_int_R_float, VTABLE_com_badlogic_gdx_graphics_Mesh_calculateRadius_float_float_float_int_int_R_float, "(FFFII)F", 1 },
	{ "calculateRadius", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_calculateRadius_com_badlogic_gdx_math_Vector3_int_int_R_float, VTABLE_com_badlogic_gdx_graphics_Mesh_calculateRadius_com_badlogic_gdx_math_Vector3_int_int_R_float, "(Lcom/badlogic/gdx/math/Vector3;II)F", 1 },
	{ "calculateRadius", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_calculateRadius_float_float_float_R_float, VTABLE_com_badlogic_gdx_graphics_Mesh_calculateRadius_float_float_float_R_float, "(FFF)F", 1 },
	{ "calculateRadius", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_calculateRadius_com_badlogic_gdx_math_Vector3_R_float, VTABLE_com_badlogic_gdx_graphics_Mesh_calculateRadius_com_badlogic_gdx_math_Vector3_R_float, "(Lcom/badlogic/gdx/math/Vector3;)F", 1 },
	{ "getIndicesBuffer", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer, VTABLE_com_badlogic_gdx_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer, "()Ljava/nio/ShortBuffer;", 131073 },
	{ "getIndicesBuffer", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_getIndicesBuffer_boolean_R_java_nio_ShortBuffer, VTABLE_com_badlogic_gdx_graphics_Mesh_getIndicesBuffer_boolean_R_java_nio_ShortBuffer, "(Z)Ljava/nio/ShortBuffer;", 1 },
	{ "addManagedMesh", (intptr_t) SM_com_badlogic_gdx_graphics_Mesh_addManagedMesh_com_badlogic_gdx_Application_com_badlogic_gdx_graphics_Mesh, 0, "(Lcom/badlogic/gdx/Application;Lcom/badlogic/gdx/graphics/Mesh;)V", 10 },
	{ "invalidateAllMeshes", (intptr_t) SM_com_badlogic_gdx_graphics_Mesh_invalidateAllMeshes_com_badlogic_gdx_Application, 0, "(Lcom/badlogic/gdx/Application;)V", 9 },
	{ "clearAllMeshes", (intptr_t) SM_com_badlogic_gdx_graphics_Mesh_clearAllMeshes_com_badlogic_gdx_Application, 0, "(Lcom/badlogic/gdx/Application;)V", 9 },
	{ "getManagedStatus", (intptr_t) SM_com_badlogic_gdx_graphics_Mesh_getManagedStatus_R_java_lang_String, 0, "()Ljava/lang/String;", 9 },
	{ "scale", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_scale_float_float_float, VTABLE_com_badlogic_gdx_graphics_Mesh_scale_float_float_float, "(FFF)V", 1 },
	{ "transform", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_transform_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_graphics_Mesh_transform_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Matrix4;)V", 1 },
	{ "transform", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_transform_com_badlogic_gdx_math_Matrix4_int_int, VTABLE_com_badlogic_gdx_graphics_Mesh_transform_com_badlogic_gdx_math_Matrix4_int_int, "(Lcom/badlogic/gdx/math/Matrix4;II)V", 1 },
	{ "transform", (intptr_t) SM_com_badlogic_gdx_graphics_Mesh_transform_com_badlogic_gdx_math_Matrix4_Array1_float_int_int_int_int_int, 0, "(Lcom/badlogic/gdx/math/Matrix4;[FIIIII)V", 9 },
	{ "transformUV", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_transformUV_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_graphics_Mesh_transformUV_com_badlogic_gdx_math_Matrix3, "(Lcom/badlogic/gdx/math/Matrix3;)V", 1 },
	{ "transformUV", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_transformUV_com_badlogic_gdx_math_Matrix3_int_int, VTABLE_com_badlogic_gdx_graphics_Mesh_transformUV_com_badlogic_gdx_math_Matrix3_int_int, "(Lcom/badlogic/gdx/math/Matrix3;II)V", 4 },
	{ "transformUV", (intptr_t) SM_com_badlogic_gdx_graphics_Mesh_transformUV_com_badlogic_gdx_math_Matrix3_Array1_float_int_int_int_int, 0, "(Lcom/badlogic/gdx/math/Matrix3;[FIIII)V", 9 },
	{ "copy", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_copy_boolean_boolean_Array1_int_R_com_badlogic_gdx_graphics_Mesh, VTABLE_com_badlogic_gdx_graphics_Mesh_copy_boolean_boolean_Array1_int_R_com_badlogic_gdx_graphics_Mesh, "(ZZ[I)Lcom/badlogic/gdx/graphics/Mesh;", 1 },
	{ "copy", (intptr_t) M_com_badlogic_gdx_graphics_Mesh_copy_boolean_R_com_badlogic_gdx_graphics_Mesh, VTABLE_com_badlogic_gdx_graphics_Mesh_copy_boolean_R_com_badlogic_gdx_graphics_Mesh, "(Z)Lcom/badlogic/gdx/graphics/Mesh;", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_Mesh, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_Mesh{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/Mesh",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_Mesh),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_Mesh,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_Mesh,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_Mesh,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 81,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 79,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_Mesh = registerClass(&class_com_badlogic_gdx_graphics_Mesh);

}

