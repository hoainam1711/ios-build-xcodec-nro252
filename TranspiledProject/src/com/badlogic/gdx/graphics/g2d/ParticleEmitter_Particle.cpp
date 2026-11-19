#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_Particle.h"
#include "com/badlogic/gdx/graphics/g2d/Sprite.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_graphics_g2d_Sprite(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) object;
	if (self->F_tint)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tint)->clazz)->markFunction)((jobject) self->F_tint, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g2d_Sprite(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_com_badlogic_gdx_graphics_g2d_Sprite(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$Particle:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1242);
	init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_g2d_Sprite(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1243);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_Texture,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setRegion_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setTexture_com_badlogic_gdx_graphics_Texture,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getU_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setU_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getV_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setV_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getU2_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setU2_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getV2_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setV2_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionX_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionX_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionY_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionY_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionWidth_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionHeight_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_flip_boolean_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_isFlipX_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_isFlipY_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_scroll_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_split_int_int_R_Array2_com_badlogic_gdx_graphics_g2d_TextureRegion,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_set_com_badlogic_gdx_graphics_g2d_Sprite,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setBounds_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setSize_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setPosition_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setOriginBasedPosition_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setX_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setY_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setCenterX_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setCenterY_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setCenter_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_translateX_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_translateY_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_translate_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setColor_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setAlpha_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setColor_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setPackedColor_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setOrigin_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setOriginCenter,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setRotation_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getRotation_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_rotate_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_rotate90_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setScale_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setScale_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_scale_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getVertices_R_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getBoundingRectangle_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_draw_com_badlogic_gdx_graphics_g2d_Batch,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_draw_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getX_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getY_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getWidth_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getHeight_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getOriginX_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getOriginY_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getScaleX_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getScaleY_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getColor_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getPackedColor_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setFlip_boolean_boolean,
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
	{ "setRegion", "(Lcom/badlogic/gdx/graphics/Texture;)V" },
	{ "setRegion", "(IIII)V" },
	{ "setRegion", "(FFFF)V" },
	{ "setRegion", "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)V" },
	{ "setRegion", "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;IIII)V" },
	{ "getTexture", "()Lcom/badlogic/gdx/graphics/Texture;" },
	{ "setTexture", "(Lcom/badlogic/gdx/graphics/Texture;)V" },
	{ "getU", "()F" },
	{ "setU", "(F)V" },
	{ "getV", "()F" },
	{ "setV", "(F)V" },
	{ "getU2", "()F" },
	{ "setU2", "(F)V" },
	{ "getV2", "()F" },
	{ "setV2", "(F)V" },
	{ "getRegionX", "()I" },
	{ "setRegionX", "(I)V" },
	{ "getRegionY", "()I" },
	{ "setRegionY", "(I)V" },
	{ "getRegionWidth", "()I" },
	{ "setRegionWidth", "(I)V" },
	{ "getRegionHeight", "()I" },
	{ "setRegionHeight", "(I)V" },
	{ "flip", "(ZZ)V" },
	{ "isFlipX", "()Z" },
	{ "isFlipY", "()Z" },
	{ "scroll", "(FF)V" },
	{ "split", "(II)[[Lcom/badlogic/gdx/graphics/g2d/TextureRegion;" },
	{ "set", "(Lcom/badlogic/gdx/graphics/g2d/Sprite;)V" },
	{ "setBounds", "(FFFF)V" },
	{ "setSize", "(FF)V" },
	{ "setPosition", "(FF)V" },
	{ "setOriginBasedPosition", "(FF)V" },
	{ "setX", "(F)V" },
	{ "setY", "(F)V" },
	{ "setCenterX", "(F)V" },
	{ "setCenterY", "(F)V" },
	{ "setCenter", "(FF)V" },
	{ "translateX", "(F)V" },
	{ "translateY", "(F)V" },
	{ "translate", "(FF)V" },
	{ "setColor", "(Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "setAlpha", "(F)V" },
	{ "setColor", "(FFFF)V" },
	{ "setPackedColor", "(F)V" },
	{ "setOrigin", "(FF)V" },
	{ "setOriginCenter", "()V" },
	{ "setRotation", "(F)V" },
	{ "getRotation", "()F" },
	{ "rotate", "(F)V" },
	{ "rotate90", "(Z)V" },
	{ "setScale", "(F)V" },
	{ "setScale", "(FF)V" },
	{ "scale", "(F)V" },
	{ "getVertices", "()[F" },
	{ "getBoundingRectangle", "()Lcom/badlogic/gdx/math/Rectangle;" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V" },
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "getWidth", "()F" },
	{ "getHeight", "()F" },
	{ "getOriginX", "()F" },
	{ "getOriginY", "()F" },
	{ "getScaleX", "()F" },
	{ "getScaleY", "()F" },
	{ "getColor", "()Lcom/badlogic/gdx/graphics/Color;" },
	{ "getPackedColor", "()F" },
	{ "setFlip", "(ZZ)V" },
};

static FieldMetadata fields[] {
	{ "life", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, F_life), "I", 4 },
	{ "currentLife", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, F_currentLife), "I", 4 },
	{ "xScale", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, F_xScale), "F", 4 },
	{ "xScaleDiff", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, F_xScaleDiff), "F", 4 },
	{ "yScale", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, F_yScale), "F", 4 },
	{ "yScaleDiff", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, F_yScaleDiff), "F", 4 },
	{ "rotation", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, F_rotation), "F", 4 },
	{ "rotationDiff", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, F_rotationDiff), "F", 4 },
	{ "velocity", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, F_velocity), "F", 4 },
	{ "velocityDiff", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, F_velocityDiff), "F", 4 },
	{ "angle", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, F_angle), "F", 4 },
	{ "angleDiff", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, F_angleDiff), "F", 4 },
	{ "angleCos", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, F_angleCos), "F", 4 },
	{ "angleSin", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, F_angleSin), "F", 4 },
	{ "transparency", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, F_transparency), "F", 4 },
	{ "transparencyDiff", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, F_transparencyDiff), "F", 4 },
	{ "wind", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, F_wind), "F", 4 },
	{ "windDiff", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, F_windDiff), "F", 4 },
	{ "gravity", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, F_gravity), "F", 4 },
	{ "gravityDiff", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, F_gravityDiff), "F", 4 },
	{ "tint", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, F_tint), "[F", 4 },
	{ "frame", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, F_frame), "I", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_com_badlogic_gdx_graphics_g2d_Sprite, 0, "(Lcom/badlogic/gdx/graphics/g2d/Sprite;)V", 1 },
};

Class class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/ParticleEmitter$Particle",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_Sprite,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 22,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 80,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle = registerClass(&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle);

}

