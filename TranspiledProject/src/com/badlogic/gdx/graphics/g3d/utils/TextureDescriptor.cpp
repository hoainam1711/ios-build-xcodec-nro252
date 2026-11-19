#include "com/badlogic/gdx/graphics/g3d/utils/TextureDescriptor.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g3d/utils/TextureDescriptor.h"
#include "java/lang/Comparable.h"
#include "com/badlogic/gdx/graphics/Texture_TextureWrap.h"
#include "com/badlogic/gdx/graphics/Texture_TextureFilter.h"
#include "com/badlogic/gdx/graphics/GLTexture.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) object;
	if (self->F_texture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_texture)->clazz)->markFunction)((jobject) self->F_texture, mark, depth + 1);
	if (self->F_minFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_minFilter)->clazz)->markFunction)((jobject) self->F_minFilter, mark, depth + 1);
	if (self->F_magFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_magFilter)->clazz)->markFunction)((jobject) self->F_magFilter, mark, depth + 1);
	if (self->F_uWrap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uWrap)->clazz)->markFunction)((jobject) self->F_uWrap, mark, depth + 1);
	if (self->F_vWrap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vWrap)->clazz)->markFunction)((jobject) self->F_vWrap, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_com_badlogic_gdx_graphics_GLTexture_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/utils/TextureDescriptor:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(32);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(23);
	((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_texture = (jref) (jobject(nullptr));
	LINE_NUMBER(33);
	((func_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_set_com_badlogic_gdx_graphics_GLTexture_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_set_com_badlogic_gdx_graphics_GLTexture_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_com_badlogic_gdx_graphics_GLTexture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/utils/TextureDescriptor:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(37);
	init_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_com_badlogic_gdx_graphics_GLTexture_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (jobject(nullptr)), (jobject(nullptr)), (jobject(nullptr)));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/utils/TextureDescriptor:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(40);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(23);
	((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_texture = (jref) (jobject(nullptr));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_set_com_badlogic_gdx_graphics_GLTexture_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/utils/TextureDescriptor:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(45);
	((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_texture = (jref) (frame[1].o);
	LINE_NUMBER(46);
	((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_minFilter = (jref) (frame[2].o);
	LINE_NUMBER(47);
	((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_magFilter = (jref) (frame[3].o);
	LINE_NUMBER(48);
	((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_uWrap = (jref) (frame[4].o);
	LINE_NUMBER(49);
	((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_vWrap = (jref) (frame[5].o);
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_set_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/utils/TextureDescriptor:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[1].o)))->F_texture;
	((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[1].o)))->F_minFilter;
	((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK(sp[0].o))->F_minFilter = (jref) sp[1].o;
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[1].o)))->F_magFilter;
	((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK(sp[0].o))->F_magFilter = (jref) sp[1].o;
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[1].o)))->F_uWrap;
	((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK(sp[0].o))->F_uWrap = (jref) sp[1].o;
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[1].o)))->F_vWrap;
	((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK(sp[0].o))->F_vWrap = (jref) sp[1].o;
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/utils/TextureDescriptor:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(63);
	if ((frame[1].o) != (frame[0].o)) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(64);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor)) != 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(65);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor, (frame[1].o)));
	LINE_NUMBER(66);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[2].o)))->F_texture;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_texture;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[2].o)))->F_minFilter;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_minFilter;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[2].o)))->F_magFilter;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_magFilter;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[2].o)))->F_uWrap;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_uWrap;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[2].o)))->F_vWrap;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_vWrap;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/utils/TextureDescriptor:hashCode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_texture;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_glTarget;
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	frame[1].l = (jlong(sp[0].i));
	LINE_NUMBER(73);
	jlong temp0 = (jlong(811ll)) * (frame[1].l);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_texture;
	jobject temp1 = sp[0].o;
	sp[0].l = temp0;
	sp += 1;
	if (temp1 != nullptr) goto label_4;
	}
	INST_ICONST(0);
	goto label_5;
label_4:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_GLTexture_getTextureObjectHandle_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_GLTexture_getTextureObjectHandle_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_5:;
	{
	sp -= 2;
	frame[1].l = (sp[0].l + (jlong(sp[1].i)));
	LINE_NUMBER(74);
	jlong temp0 = (jlong(811ll)) * (frame[1].l);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_minFilter;
	jobject temp1 = sp[0].o;
	sp[0].l = temp0;
	sp += 1;
	if (temp1 != nullptr) goto label_7;
	}
	INST_ICONST(0);
	goto label_8;
label_7:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_minFilter;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Texture$TextureFilter_getGLEnum_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture$TextureFilter_getGLEnum_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_8:;
	{
	sp -= 2;
	frame[1].l = (sp[0].l + (jlong(sp[1].i)));
	LINE_NUMBER(75);
	jlong temp0 = (jlong(811ll)) * (frame[1].l);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_magFilter;
	jobject temp1 = sp[0].o;
	sp[0].l = temp0;
	sp += 1;
	if (temp1 != nullptr) goto label_10;
	}
	INST_ICONST(0);
	goto label_11;
label_10:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_magFilter;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Texture$TextureFilter_getGLEnum_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture$TextureFilter_getGLEnum_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_11:;
	{
	sp -= 2;
	frame[1].l = (sp[0].l + (jlong(sp[1].i)));
	LINE_NUMBER(76);
	jlong temp0 = (jlong(811ll)) * (frame[1].l);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_uWrap;
	jobject temp1 = sp[0].o;
	sp[0].l = temp0;
	sp += 1;
	if (temp1 != nullptr) goto label_13;
	}
	INST_ICONST(0);
	goto label_14;
label_13:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_uWrap;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Texture$TextureWrap_getGLEnum_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture$TextureWrap_getGLEnum_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_14:;
	{
	sp -= 2;
	frame[1].l = (sp[0].l + (jlong(sp[1].i)));
	LINE_NUMBER(77);
	jlong temp0 = (jlong(811ll)) * (frame[1].l);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_vWrap;
	jobject temp1 = sp[0].o;
	sp[0].l = temp0;
	sp += 1;
	if (temp1 != nullptr) goto label_16;
	}
	INST_ICONST(0);
	goto label_17;
label_16:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_vWrap;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Texture$TextureWrap_getGLEnum_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture$TextureWrap_getGLEnum_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_17:;
	{
	sp -= 2;
	frame[1].l = (sp[0].l + (jlong(sp[1].i)));
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return (jint(((frame[1].l) ^ ((frame[1].l) >> (32)))));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_compareTo_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/utils/TextureDescriptor:compareTo", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_texture;
	if (sp[0].o != nullptr) goto label_2;
	}
	INST_ICONST(0);
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_glTarget;
	sp[0].i = temp0;
	sp += 1;
	}
label_3:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(85);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[1].o)))->F_texture;
	if (sp[0].o != nullptr) goto label_5;
	}
	INST_ICONST(0);
	goto label_6;
label_5:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[1].o)))->F_texture;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_glTarget;
	sp[0].i = temp0;
	sp += 1;
	}
label_6:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(86);
	if ((frame[2].i) == (frame[3].i)) goto label_8;
	}
	{
	popStackFrame(ctx);
	return ((frame[2].i) - (frame[3].i));
	}
label_8:;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_texture;
	if (sp[0].o != nullptr) goto label_9;
	}
	INST_ICONST(0);
	goto label_10;
label_9:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_GLTexture_getTextureObjectHandle_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_GLTexture_getTextureObjectHandle_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(88);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[1].o)))->F_texture;
	if (sp[0].o != nullptr) goto label_12;
	}
	INST_ICONST(0);
	goto label_13;
label_12:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[1].o)))->F_texture;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_GLTexture_getTextureObjectHandle_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_GLTexture_getTextureObjectHandle_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_13:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(89);
	if ((frame[4].i) == (frame[5].i)) goto label_15;
	}
	{
	popStackFrame(ctx);
	return ((frame[4].i) - (frame[5].i));
	}
label_15:;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_minFilter;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[1].o)))->F_minFilter;
	if (sp[0].o == sp[1].o) goto label_16;
	}
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_minFilter;
	if (sp[0].o != nullptr) goto label_18;
	}
	INST_ICONST(0);
	goto label_19;
label_18:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_minFilter;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Texture$TextureFilter_getGLEnum_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture$TextureFilter_getGLEnum_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_19:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[1].o)))->F_minFilter;
	if (sp[0].o != nullptr) goto label_20;
	}
	INST_ICONST(0);
	goto label_21;
label_20:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[1].o)))->F_minFilter;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Texture$TextureFilter_getGLEnum_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture$TextureFilter_getGLEnum_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_21:;
	INST_ISUB();
	popStackFrame(ctx);
	INST_IRETURN();
label_16:;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_magFilter;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[1].o)))->F_magFilter;
	if (sp[0].o == sp[1].o) goto label_22;
	}
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_magFilter;
	if (sp[0].o != nullptr) goto label_24;
	}
	INST_ICONST(0);
	goto label_25;
label_24:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_magFilter;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Texture$TextureFilter_getGLEnum_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture$TextureFilter_getGLEnum_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_25:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[1].o)))->F_magFilter;
	if (sp[0].o != nullptr) goto label_26;
	}
	INST_ICONST(0);
	goto label_27;
label_26:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[1].o)))->F_magFilter;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Texture$TextureFilter_getGLEnum_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture$TextureFilter_getGLEnum_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_27:;
	INST_ISUB();
	popStackFrame(ctx);
	INST_IRETURN();
label_22:;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_uWrap;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[1].o)))->F_uWrap;
	if (sp[0].o == sp[1].o) goto label_28;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_uWrap;
	if (sp[0].o != nullptr) goto label_29;
	}
	INST_ICONST(0);
	goto label_30;
label_29:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_uWrap;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Texture$TextureWrap_getGLEnum_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture$TextureWrap_getGLEnum_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_30:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[1].o)))->F_uWrap;
	if (sp[0].o != nullptr) goto label_31;
	}
	INST_ICONST(0);
	goto label_32;
label_31:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[1].o)))->F_uWrap;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Texture$TextureWrap_getGLEnum_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture$TextureWrap_getGLEnum_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_32:;
	INST_ISUB();
	popStackFrame(ctx);
	INST_IRETURN();
label_28:;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_vWrap;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[1].o)))->F_vWrap;
	if (sp[0].o == sp[1].o) goto label_33;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_vWrap;
	if (sp[0].o != nullptr) goto label_34;
	}
	INST_ICONST(0);
	goto label_35;
label_34:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[0].o)))->F_vWrap;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Texture$TextureWrap_getGLEnum_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture$TextureWrap_getGLEnum_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_35:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[1].o)))->F_vWrap;
	if (sp[0].o != nullptr) goto label_36;
	}
	INST_ICONST(0);
	goto label_37;
label_36:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK((frame[1].o)))->F_vWrap;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Texture$TextureWrap_getGLEnum_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture$TextureWrap_getGLEnum_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_37:;
	INST_ISUB();
	popStackFrame(ctx);
	INST_IRETURN();
label_33:;
	{
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/utils/TextureDescriptor:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(22);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_compareTo_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_compareTo_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor[] {
	(void *) M_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_hashCode_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_compareTo_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_set_com_badlogic_gdx_graphics_GLTexture_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap,
	(void *) M_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_set_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor,
	(void *) M_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_compareTo_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_R_int,
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
	{ "set", "(Lcom/badlogic/gdx/graphics/GLTexture;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureWrap;Lcom/badlogic/gdx/graphics/Texture$TextureWrap;)V" },
	{ "set", "(Lcom/badlogic/gdx/graphics/g3d/utils/TextureDescriptor;)V" },
	{ "compareTo", "(Lcom/badlogic/gdx/graphics/g3d/utils/TextureDescriptor;)I" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "texture", &class_com_badlogic_gdx_graphics_GLTexture, offsetof(com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor, F_texture), "Lcom/badlogic/gdx/graphics/GLTexture;", 1 },
	{ "minFilter", &class_com_badlogic_gdx_graphics_Texture$TextureFilter, offsetof(com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor, F_minFilter), "Lcom/badlogic/gdx/graphics/Texture$TextureFilter;", 1 },
	{ "magFilter", &class_com_badlogic_gdx_graphics_Texture$TextureFilter, offsetof(com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor, F_magFilter), "Lcom/badlogic/gdx/graphics/Texture$TextureFilter;", 1 },
	{ "uWrap", &class_com_badlogic_gdx_graphics_Texture$TextureWrap, offsetof(com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor, F_uWrap), "Lcom/badlogic/gdx/graphics/Texture$TextureWrap;", 1 },
	{ "vWrap", &class_com_badlogic_gdx_graphics_Texture$TextureWrap, offsetof(com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor, F_vWrap), "Lcom/badlogic/gdx/graphics/Texture$TextureWrap;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_com_badlogic_gdx_graphics_GLTexture_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap, 0, "(Lcom/badlogic/gdx/graphics/GLTexture;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureWrap;Lcom/badlogic/gdx/graphics/Texture$TextureWrap;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_com_badlogic_gdx_graphics_GLTexture, 0, "(Lcom/badlogic/gdx/graphics/GLTexture;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor, 0, "()V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_set_com_badlogic_gdx_graphics_GLTexture_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap, VTABLE_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_set_com_badlogic_gdx_graphics_GLTexture_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap, "(Lcom/badlogic/gdx/graphics/GLTexture;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureWrap;Lcom/badlogic/gdx/graphics/Texture$TextureWrap;)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_set_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor, VTABLE_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_set_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor, "(Lcom/badlogic/gdx/graphics/g3d/utils/TextureDescriptor;)V", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_hashCode_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_hashCode_R_int, "()I", 1 },
	{ "compareTo", (intptr_t) M_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_compareTo_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_compareTo_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_R_int, "(Lcom/badlogic/gdx/graphics/g3d/utils/TextureDescriptor;)I", 1 },
	{ "compareTo", (intptr_t) M_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_compareTo_java_lang_Object_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
};

Class class_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/utils/TextureDescriptor",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor = registerClass(&class_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor);

}

