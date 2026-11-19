#include "com/badlogic/gdx/graphics/g3d/Model.h"
#include "com/badlogic/gdx/math/Quaternion.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelMeshPart.h"
#include "com/badlogic/gdx/graphics/g3d/Attribute.h"
#include "com/badlogic/gdx/utils/ObjectMap_Entries.h"
#include "java/nio/FloatBuffer.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelNodeAnimation.h"
#include "com/badlogic/gdx/graphics/g3d/attributes/ColorAttribute.h"
#include "com/badlogic/gdx/graphics/g3d/model/MeshPart.h"
#include "com/badlogic/gdx/graphics/VertexAttributes.h"
#include "java/nio/Buffer.h"
#include "com/badlogic/gdx/graphics/Texture_TextureWrap.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/graphics/g3d/utils/TextureProvider_FileTextureProvider.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelMesh.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelTexture.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/utils/ArrayMap.h"
#include "com/badlogic/gdx/graphics/Texture_TextureFilter.h"
#include "com/badlogic/gdx/graphics/g3d/Material.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelNodeKeyframe.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/math/collision/BoundingBox.h"
#include "com/badlogic/gdx/graphics/g3d/utils/TextureProvider.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelNodePart.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelMaterial.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelAnimation.h"
#include "com/badlogic/gdx/graphics/Texture.h"
#include "com/badlogic/gdx/utils/ArraySupplier.h"
#include "com/badlogic/gdx/graphics/g3d/model/Node.h"
#include "com/badlogic/gdx/utils/ObjectMap_Entry.h"
#include "com/badlogic/gdx/graphics/g3d/attributes/BlendingAttribute.h"
#include "java/lang/Iterable.h"
#include "com/badlogic/gdx/graphics/g3d/model/Animation.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g3d/utils/TextureDescriptor.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelData.h"
#include "com/badlogic/gdx/utils/ArrayMap_Entries.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelNode.h"
#include "com/badlogic/gdx/graphics/g3d/model/NodeAnimation.h"
#include "com/badlogic/gdx/graphics/g3d/attributes/TextureAttribute.h"
#include "com/badlogic/gdx/graphics/Mesh.h"
#include "com/badlogic/gdx/graphics/g3d/Model.h"
#include "com/badlogic/gdx/utils/ObjectMap.h"
#include "com/badlogic/gdx/graphics/g3d/model/NodeKeyframe.h"
#include "com/badlogic/gdx/graphics/g3d/model/NodePart.h"
#include "com/badlogic/gdx/graphics/g3d/Model_invoke_com_badlogic_gdx_utils_ArraySupplier_0.h"
#include "com/badlogic/gdx/graphics/g3d/Model_invoke_com_badlogic_gdx_utils_ArraySupplier_1.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/nio/ShortBuffer.h"
#include "com/badlogic/gdx/graphics/g3d/attributes/FloatAttribute.h"
#include "com/badlogic/gdx/graphics/g3d/Attributes.h"
#include "com/badlogic/gdx/utils/BufferUtils.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "com/badlogic/gdx/graphics/GLTexture.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"
#include "com/badlogic/gdx/math/Vector2.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_Model(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_Model *) object;
	if (self->F_materials)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_materials)->clazz)->markFunction)((jobject) self->F_materials, mark, depth + 1);
	if (self->F_nodes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nodes)->clazz)->markFunction)((jobject) self->F_nodes, mark, depth + 1);
	if (self->F_animations)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_animations)->clazz)->markFunction)((jobject) self->F_animations, mark, depth + 1);
	if (self->F_meshes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_meshes)->clazz)->markFunction)((jobject) self->F_meshes, mark, depth + 1);
	if (self->F_meshParts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_meshParts)->clazz)->markFunction)((jobject) self->F_meshParts, mark, depth + 1);
	if (self->F_disposables)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_disposables)->clazz)->markFunction)((jobject) self->F_disposables, mark, depth + 1);
	if (self->F_nodePartBones)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nodePartBones)->clazz)->markFunction)((jobject) self->F_nodePartBones, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_Model(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_Model(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_Model(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(93);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK(sp[0].o))->F_materials = (jref) sp[1].o;
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK(sp[0].o))->F_nodes = (jref) sp[1].o;
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK(sp[0].o))->F_animations = (jref) sp[1].o;
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK(sp[0].o))->F_meshes = (jref) sp[1].o;
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK(sp[0].o))->F_meshParts = (jref) sp[1].o;
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK(sp[0].o))->F_disposables = (jref) sp[1].o;
	LINE_NUMBER(166);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK(sp[0].o))->F_nodePartBones = (jref) sp[1].o;
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_graphics_g3d_model_data_ModelData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_Model(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider);
	init_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$FileTextureProvider(ctx, sp[2].o);
	init_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_graphics_g3d_utils_TextureProvider(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_graphics_g3d_utils_TextureProvider(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_Model(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(106);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK(sp[0].o))->F_materials = (jref) sp[1].o;
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK(sp[0].o))->F_nodes = (jref) sp[1].o;
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK(sp[0].o))->F_animations = (jref) sp[1].o;
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK(sp[0].o))->F_meshes = (jref) sp[1].o;
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK(sp[0].o))->F_meshParts = (jref) sp[1].o;
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK(sp[0].o))->F_disposables = (jref) sp[1].o;
	LINE_NUMBER(166);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK(sp[0].o))->F_nodePartBones = (jref) sp[1].o;
	LINE_NUMBER(107);
	((func_com_badlogic_gdx_graphics_g3d_Model_load_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_graphics_g3d_utils_TextureProvider) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Model_load_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_graphics_g3d_utils_TextureProvider])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_Model_load_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_graphics_g3d_utils_TextureProvider(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:load", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK((frame[1].o)))->F_meshes;
	((func_com_badlogic_gdx_graphics_g3d_Model_loadMeshes_java_lang_Iterable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Model_loadMeshes_java_lang_Iterable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(112);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK((frame[1].o)))->F_materials;
	((func_com_badlogic_gdx_graphics_g3d_Model_loadMaterials_java_lang_Iterable_com_badlogic_gdx_graphics_g3d_utils_TextureProvider) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Model_loadMaterials_java_lang_Iterable_com_badlogic_gdx_graphics_g3d_utils_TextureProvider])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK((frame[1].o)))->F_nodes;
	((func_com_badlogic_gdx_graphics_g3d_Model_loadNodes_java_lang_Iterable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Model_loadNodes_java_lang_Iterable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelData *) NULL_CHECK((frame[1].o)))->F_animations;
	((func_com_badlogic_gdx_graphics_g3d_Model_loadAnimations_java_lang_Iterable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Model_loadAnimations_java_lang_Iterable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(115);
	((func_com_badlogic_gdx_graphics_g3d_Model_calculateTransforms) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Model_calculateTransforms])(ctx, (frame[0].o));
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_Model_loadAnimations_java_lang_Iterable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:loadAnimations", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelAnimation, sp[0].o));
	LINE_NUMBER(120);
	clinit_com_badlogic_gdx_graphics_g3d_model_Animation(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Animation);
	init_com_badlogic_gdx_graphics_g3d_model_Animation(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(121);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelAnimation *) NULL_CHECK((frame[3].o)))->F_id;
	((com_badlogic_gdx_graphics_g3d_model_Animation *) NULL_CHECK(sp[0].o))->F_id = (jref) sp[1].o;
	LINE_NUMBER(122);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelAnimation *) NULL_CHECK((frame[3].o)))->F_nodeAnimations;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation, sp[0].o));
	LINE_NUMBER(123);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK((frame[6].o)))->F_nodeId;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Model_getNode_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Model_getNode_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_Node])(ctx, sp[0].o, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(124);
	if ((frame[7].o) != nullptr) goto label_10;
	}
	goto label_6;
label_10:;
	{
	LINE_NUMBER(125);
	clinit_com_badlogic_gdx_graphics_g3d_model_NodeAnimation(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodeAnimation);
	init_com_badlogic_gdx_graphics_g3d_model_NodeAnimation(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(126);
	((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[8].o)))->F_node = (jref) (frame[7].o);
	LINE_NUMBER(128);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK((frame[6].o)))->F_translation;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(129);
	sp[0].o = frame[8].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK(sp[0].o))->F_translation = (jref) sp[1].o;
	LINE_NUMBER(130);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[8].o)))->F_translation;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK((frame[6].o)))->F_translation;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(131);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK((frame[6].o)))->F_translation;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	}
label_17:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe, sp[0].o));
	LINE_NUMBER(132);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK((frame[10].o)))->F_keytime), ((jfloat)((com_badlogic_gdx_graphics_g3d_model_Animation *) NULL_CHECK((frame[4].o)))->F_duration), -1)) <= 0) goto label_19;
	}
	{
	((com_badlogic_gdx_graphics_g3d_model_Animation *) NULL_CHECK((frame[4].o)))->F_duration = ((jfloat)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK((frame[10].o)))->F_keytime);
	}
label_19:;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[8].o)))->F_translation;
	clinit_com_badlogic_gdx_graphics_g3d_model_NodeKeyframe(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodeKeyframe);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK((frame[10].o)))->F_keytime;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	LINE_NUMBER(134);
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK((frame[10].o)))->F_value;
	jobject temp1 = sp[2].o;
	sp[2].o = sp[1].o;
	jobject temp2 = sp[3].o;
	sp[3].f = temp0;
	sp[4].o = temp1;
	sp[5].o = temp1;
	sp += 6;
	if (temp2 != nullptr) goto label_23;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[7].o)))->F_translation;
	sp += 1;
	goto label_24;
	}
label_23:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK((frame[10].o)))->F_value;
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, sp[0].o);
	sp += 1;
	}
label_24:;
	{
	sp -= 7;
	init_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3(ctx, sp[4].o, sp[6].o);
	init_com_badlogic_gdx_graphics_g3d_model_NodeKeyframe_float_java_lang_Object(ctx, sp[1].o, sp[3].f, sp[4].o);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(135);
	goto label_17;
	}
label_13:;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK((frame[6].o)))->F_rotation;
	if (sp[0].o == nullptr) goto label_26;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = frame[8].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK(sp[0].o))->F_rotation = (jref) sp[1].o;
	LINE_NUMBER(140);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[8].o)))->F_rotation;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK((frame[6].o)))->F_rotation;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(141);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK((frame[6].o)))->F_rotation;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	}
label_30:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe, sp[0].o));
	LINE_NUMBER(142);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK((frame[10].o)))->F_keytime), ((jfloat)((com_badlogic_gdx_graphics_g3d_model_Animation *) NULL_CHECK((frame[4].o)))->F_duration), -1)) <= 0) goto label_32;
	}
	{
	((com_badlogic_gdx_graphics_g3d_model_Animation *) NULL_CHECK((frame[4].o)))->F_duration = ((jfloat)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK((frame[10].o)))->F_keytime);
	}
label_32:;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[8].o)))->F_rotation;
	clinit_com_badlogic_gdx_graphics_g3d_model_NodeKeyframe(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodeKeyframe);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK((frame[10].o)))->F_keytime;
	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Quaternion);
	LINE_NUMBER(144);
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK((frame[10].o)))->F_value;
	jobject temp1 = sp[2].o;
	sp[2].o = sp[1].o;
	jobject temp2 = sp[3].o;
	sp[3].f = temp0;
	sp[4].o = temp1;
	sp[5].o = temp1;
	sp += 6;
	if (temp2 != nullptr) goto label_36;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[7].o)))->F_rotation;
	sp += 1;
	goto label_37;
	}
label_36:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK((frame[10].o)))->F_value;
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_math_Quaternion, sp[0].o);
	sp += 1;
	}
label_37:;
	{
	sp -= 7;
	init_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Quaternion(ctx, sp[4].o, sp[6].o);
	init_com_badlogic_gdx_graphics_g3d_model_NodeKeyframe_float_java_lang_Object(ctx, sp[1].o, sp[3].f, sp[4].o);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(145);
	goto label_30;
	}
label_26:;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK((frame[6].o)))->F_scaling;
	if (sp[0].o == nullptr) goto label_39;
	}
	{
	LINE_NUMBER(149);
	sp[0].o = frame[8].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK(sp[0].o))->F_scaling = (jref) sp[1].o;
	LINE_NUMBER(150);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[8].o)))->F_scaling;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK((frame[6].o)))->F_scaling;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(151);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeAnimation *) NULL_CHECK((frame[6].o)))->F_scaling;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	}
label_43:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_39;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe, sp[0].o));
	LINE_NUMBER(152);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK((frame[10].o)))->F_keytime), ((jfloat)((com_badlogic_gdx_graphics_g3d_model_Animation *) NULL_CHECK((frame[4].o)))->F_duration), -1)) <= 0) goto label_45;
	}
	{
	((com_badlogic_gdx_graphics_g3d_model_Animation *) NULL_CHECK((frame[4].o)))->F_duration = ((jfloat)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK((frame[10].o)))->F_keytime);
	}
label_45:;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[8].o)))->F_scaling;
	clinit_com_badlogic_gdx_graphics_g3d_model_NodeKeyframe(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodeKeyframe);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK((frame[10].o)))->F_keytime;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	LINE_NUMBER(154);
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK((frame[10].o)))->F_value;
	jobject temp1 = sp[2].o;
	sp[2].o = sp[1].o;
	jobject temp2 = sp[3].o;
	sp[3].f = temp0;
	sp[4].o = temp1;
	sp[5].o = temp1;
	sp += 6;
	if (temp2 != nullptr) goto label_49;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[7].o)))->F_scale;
	sp += 1;
	goto label_50;
	}
label_49:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodeKeyframe *) NULL_CHECK((frame[10].o)))->F_value;
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, sp[0].o);
	sp += 1;
	}
label_50:;
	{
	sp -= 7;
	init_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3(ctx, sp[4].o, sp[6].o);
	init_com_badlogic_gdx_graphics_g3d_model_NodeKeyframe_float_java_lang_Object(ctx, sp[1].o, sp[3].f, sp[4].o);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(155);
	goto label_43;
	}
label_39:;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[8].o)))->F_translation;
	if (sp[0].o == nullptr) goto label_52;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[8].o)))->F_translation;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) > 0) goto label_53;
	}
label_52:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[8].o)))->F_rotation;
	if (sp[0].o == nullptr) goto label_54;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[8].o)))->F_rotation;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) > 0) goto label_53;
	}
label_54:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[8].o)))->F_scaling;
	if (sp[0].o == nullptr) goto label_55;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[8].o)))->F_scaling;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_55;
	}
label_53:;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Animation *) NULL_CHECK((frame[4].o)))->F_nodeAnimations;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[8].o));
	}
label_55:;
	LINE_NUMBER(161);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Animation *) NULL_CHECK((frame[4].o)))->F_nodeAnimations;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_56;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_animations;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	}
label_56:;
	LINE_NUMBER(163);
	goto label_1;
label_2:;
	LINE_NUMBER(164);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_Model_loadNodes_java_lang_Iterable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:loadNodes", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_nodePartBones;
	((func_com_badlogic_gdx_utils_ObjectMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(170);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelNode, sp[0].o));
	LINE_NUMBER(171);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_nodes;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Model_loadNode_com_badlogic_gdx_graphics_g3d_model_data_ModelNode_R_com_badlogic_gdx_graphics_g3d_model_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Model_loadNode_com_badlogic_gdx_graphics_g3d_model_data_ModelNode_R_com_badlogic_gdx_graphics_g3d_model_Node])(ctx, (frame[0].o), (frame[3].o));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(172);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_nodePartBones;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap$Entries_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Entries_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(174);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[3].o)))->F_key;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodePart, sp[0].o))))->F_invBoneBindTransforms;
	if (sp[0].o != nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[3].o)))->F_key;
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodePart, sp[0].o);
	clinit_com_badlogic_gdx_utils_ArrayMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ArrayMap);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_Model_invoke_com_badlogic_gdx_utils_ArraySupplier_0(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_Model_invoke_com_badlogic_gdx_utils_ArraySupplier_0 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_Model_invoke_com_badlogic_gdx_utils_ArraySupplier_0);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_Model_invoke_com_badlogic_gdx_utils_ArraySupplier_1(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_Model_invoke_com_badlogic_gdx_utils_ArraySupplier_1 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_Model_invoke_com_badlogic_gdx_utils_ArraySupplier_1);
		sp[3].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_utils_ArrayMap_com_badlogic_gdx_utils_ArraySupplier_com_badlogic_gdx_utils_ArraySupplier(ctx, sp[1].o, sp[2].o, sp[3].o);
	((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK(sp[0].o))->F_invBoneBindTransforms = (jref) sp[1].o;
	}
label_9:;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[3].o)))->F_key;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodePart, sp[0].o))))->F_invBoneBindTransforms;
	((func_com_badlogic_gdx_utils_ArrayMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(176);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[3].o)))->F_value;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ArrayMap_entries_R_com_badlogic_gdx_utils_ArrayMap$Entries) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_ArrayMap, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_entries_R_com_badlogic_gdx_utils_ArrayMap$Entries])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_ArrayMap, sp[0].o)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ArrayMap$Entries_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap$Entries_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(177);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[3].o)))->F_key;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodePart, sp[0].o))))->F_invBoneBindTransforms;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[5].o)))->F_key;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Model_getNode_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_Node) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Model_getNode_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_Node])(ctx, sp[1].o, (checkCast(ctx, &class_java_lang_String, sp[2].o)));
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	sp[3].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[5].o)))->F_value;
	init_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Matrix4(ctx, sp[2].o, (checkCast(ctx, &class_com_badlogic_gdx_math_Matrix4, sp[3].o)));
	sp[2].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_inv_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_inv_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[2].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ArrayMap_put_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_put_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_11;
	}
label_12:;
	LINE_NUMBER(178);
	goto label_6;
label_7:;
	LINE_NUMBER(179);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Model_loadNode_com_badlogic_gdx_graphics_g3d_model_data_ModelNode_R_com_badlogic_gdx_graphics_g3d_model_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:loadNode", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(182);
	clinit_com_badlogic_gdx_graphics_g3d_model_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node);
	init_com_badlogic_gdx_graphics_g3d_model_Node(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(183);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK((frame[1].o)))->F_id;
	((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK(sp[0].o))->F_id = (jref) sp[1].o;
	LINE_NUMBER(185);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK((frame[1].o)))->F_translation;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[2].o)))->F_translation;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK((frame[1].o)))->F_translation;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK((frame[1].o)))->F_rotation;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[2].o)))->F_rotation;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK((frame[1].o)))->F_rotation;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK((frame[1].o)))->F_scale;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[2].o)))->F_scale;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK((frame[1].o)))->F_scale;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK((frame[1].o)))->F_parts;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK((frame[1].o)))->F_parts;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_8:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_6;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(191);
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(192);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(194);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodePart *) NULL_CHECK((frame[6].o)))->F_meshPartId;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_meshParts;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	}
label_14:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_MeshPart, sp[0].o));
	LINE_NUMBER(196);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodePart *) NULL_CHECK((frame[6].o)))->F_meshPartId;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[10].o)))->F_id;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(197);
	frame[7].o = (frame[10].o);
	LINE_NUMBER(198);
	goto label_12;
	}
label_16:;
	LINE_NUMBER(200);
	goto label_14;
label_12:;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodePart *) NULL_CHECK((frame[6].o)))->F_materialId;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_materials;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	}
label_21:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Material, sp[0].o));
	LINE_NUMBER(205);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodePart *) NULL_CHECK((frame[6].o)))->F_materialId;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_Material *) NULL_CHECK((frame[10].o)))->F_id;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_23;
	}
	{
	LINE_NUMBER(206);
	frame[8].o = (frame[10].o);
	LINE_NUMBER(207);
	goto label_19;
	}
label_23:;
	LINE_NUMBER(209);
	goto label_21;
label_19:;
	{
	LINE_NUMBER(212);
	if ((frame[7].o) == nullptr) goto label_26;
	}
	INST_ALOAD(8);
	if ((--sp)->o != nullptr) goto label_27;
label_26:;
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid node: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[2].o)))->F_id;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_27:;
	{
	LINE_NUMBER(214);
	clinit_com_badlogic_gdx_graphics_g3d_model_NodePart(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodePart);
	init_com_badlogic_gdx_graphics_g3d_model_NodePart(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(215);
	((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[9].o)))->F_meshPart = (jref) (frame[7].o);
	LINE_NUMBER(216);
	((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[9].o)))->F_material = (jref) (frame[8].o);
	LINE_NUMBER(217);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[2].o)))->F_parts;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[9].o));
	LINE_NUMBER(218);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodePart *) NULL_CHECK((frame[6].o)))->F_bones;
	if (sp[0].o == nullptr) goto label_32;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_nodePartBones;
	sp[1].o = frame[9].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNodePart *) NULL_CHECK((frame[6].o)))->F_bones;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_32:;
	{
	LINE_NUMBER(190);
	INST_IINC(5, 1);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK((frame[1].o)))->F_children;
	if (sp[0].o == nullptr) goto label_33;
	}
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelNode *) NULL_CHECK((frame[1].o)))->F_children;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_35:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_33;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(224);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Model_loadNode_com_badlogic_gdx_graphics_g3d_model_data_ModelNode_R_com_badlogic_gdx_graphics_g3d_model_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Model_loadNode_com_badlogic_gdx_graphics_g3d_model_data_ModelNode_R_com_badlogic_gdx_graphics_g3d_model_Node])(ctx, (frame[0].o), (frame[6].o));
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_model_Node_addChild_com_badlogic_gdx_graphics_g3d_model_Node_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_addChild_com_badlogic_gdx_graphics_g3d_model_Node_R_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(223);
	INST_IINC(5, 1);
	goto label_35;
	}
label_33:;
	{
	LINE_NUMBER(228);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_Model_loadMeshes_java_lang_Iterable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:loadMeshes", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelMesh, sp[0].o));
	LINE_NUMBER(233);
	((func_com_badlogic_gdx_graphics_g3d_Model_convertMesh_com_badlogic_gdx_graphics_g3d_model_data_ModelMesh) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Model_convertMesh_com_badlogic_gdx_graphics_g3d_model_data_ModelMesh])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(234);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(235);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_Model_convertMesh_com_badlogic_gdx_graphics_g3d_model_data_ModelMesh(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:convertMesh", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(238);
	frame[2].i = (jint(0));
	LINE_NUMBER(239);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMesh *) NULL_CHECK((frame[1].o)))->F_parts;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_3;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(240);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMeshPart *) NULL_CHECK((frame[6].o)))->F_indices;
	frame[2].i = (temp0 + (((jarray) nullCheck(ctx, sp[0].o))->length));
	LINE_NUMBER(239);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(242);
	if ((frame[2].i) <= 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(243);
	clinit_com_badlogic_gdx_graphics_VertexAttributes(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttributes);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMesh *) NULL_CHECK((frame[1].o)))->F_attributes;
	init_com_badlogic_gdx_graphics_VertexAttributes_Array1_com_badlogic_gdx_graphics_VertexAttribute(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(244);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMesh *) NULL_CHECK((frame[1].o)))->F_vertices;
	frame[5].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) / (((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[4].o)))->F_vertexSize) / (jint(4))));
	LINE_NUMBER(246);
	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Mesh);
	init_com_badlogic_gdx_graphics_Mesh_boolean_int_int_com_badlogic_gdx_graphics_VertexAttributes(ctx, sp[0].o, (jint(1)), (frame[5].i), (frame[2].i), (frame[4].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(247);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_meshes;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(248);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_disposables;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(250);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMesh *) NULL_CHECK((frame[1].o)))->F_vertices;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVerticesBuffer_boolean_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVerticesBuffer_boolean_R_java_nio_FloatBuffer])(ctx, (frame[6].o), (jint(1)));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMesh *) NULL_CHECK((frame[1].o)))->F_vertices;
	SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_float_java_nio_Buffer_int_int(ctx, sp[0].o, sp[1].o, (((jarray) nullCheck(ctx, sp[2].o))->length), (jint(0)));
	LINE_NUMBER(251);
	frame[7].i = (jint(0));
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getIndicesBuffer_boolean_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getIndicesBuffer_boolean_R_java_nio_ShortBuffer])(ctx, (frame[6].o), (jint(1)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(253);
	sp[0].o = (jobject)((func_java_nio_Buffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_nio_Buffer_clear_R_java_nio_Buffer])(ctx, (frame[8].o));
	LINE_NUMBER(254);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMesh *) NULL_CHECK((frame[1].o)))->F_parts;
	frame[9].o = sp[0].o;
	frame[10].i = (((jarray) nullCheck(ctx, (frame[9].o)))->length);
	frame[11].i = (jint(0));
	}
label_18:;
	{
	if ((frame[11].i) >= (frame[10].i)) goto label_19;
	}
	{
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[11].i)));
	LINE_NUMBER(255);
	clinit_com_badlogic_gdx_graphics_g3d_model_MeshPart(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_MeshPart);
	init_com_badlogic_gdx_graphics_g3d_model_MeshPart(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(256);
	sp[0].o = frame[13].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMeshPart *) NULL_CHECK((frame[12].o)))->F_id;
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK(sp[0].o))->F_id = (jref) sp[1].o;
	LINE_NUMBER(257);
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[13].o)))->F_primitiveType = ((jint)((com_badlogic_gdx_graphics_g3d_model_data_ModelMeshPart *) NULL_CHECK((frame[12].o)))->F_primitiveType);
	LINE_NUMBER(258);
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[13].o)))->F_offset = (frame[7].i);
	LINE_NUMBER(259);
	sp[0].o = frame[13].o;
	sp += 1;
	if ((frame[3].i) == 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMeshPart *) NULL_CHECK((frame[12].o)))->F_indices;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].i = temp0;
	sp += 1;
	goto label_26;
	}
label_25:;
	INST_ILOAD(5);
label_26:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK(sp[0].o))->F_size = sp[1].i;
	LINE_NUMBER(260);
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[13].o)))->F_mesh = (jref) (frame[6].o);
	LINE_NUMBER(261);
	if ((frame[3].i) == 0) goto label_29;
	}
	{
	LINE_NUMBER(262);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMeshPart *) NULL_CHECK((frame[12].o)))->F_indices;
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_put_Array1_short_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_put_Array1_short_R_java_nio_ShortBuffer])(ctx, sp[0].o, sp[1].o);
	}
label_29:;
	{
	LINE_NUMBER(264);
	frame[7].i = ((frame[7].i) + ((jint)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[13].o)))->F_size));
	LINE_NUMBER(265);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_meshParts;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[13].o));
	LINE_NUMBER(254);
	INST_IINC(11, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, (frame[8].o), (jint(0)));
	LINE_NUMBER(268);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_meshParts;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	}
label_34:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_35;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_MeshPart, sp[0].o));
	LINE_NUMBER(269);
	((func_com_badlogic_gdx_graphics_g3d_model_MeshPart_update) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_MeshPart_update])(ctx, (frame[10].o));
	goto label_34;
	}
label_35:;
	LINE_NUMBER(270);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_Model_loadMaterials_java_lang_Iterable_com_badlogic_gdx_graphics_g3d_utils_TextureProvider(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:loadMaterials", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial, sp[0].o));
	LINE_NUMBER(274);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_materials;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Model_convertMaterial_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_R_com_badlogic_gdx_graphics_g3d_Material) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Model_convertMaterial_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_R_com_badlogic_gdx_graphics_g3d_Material])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(275);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(276);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Model_convertMaterial_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_R_com_badlogic_gdx_graphics_g3d_Material(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:convertMaterial", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(279);
	clinit_com_badlogic_gdx_graphics_g3d_Material(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_Material);
	init_com_badlogic_gdx_graphics_g3d_Material(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(280);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[1].o)))->F_id;
	((com_badlogic_gdx_graphics_g3d_Material *) NULL_CHECK(sp[0].o))->F_id = (jref) sp[1].o;
	LINE_NUMBER(281);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[1].o)))->F_ambient;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = frame[3].o;
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	jlong temp0 = (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Ambient;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[1].o)))->F_ambient;
	init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long_com_badlogic_gdx_graphics_Color(ctx, sp[1].o, temp0, sp[2].o);
	((func_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[1].o)))->F_diffuse;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = frame[3].o;
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	jlong temp0 = (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Diffuse;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[1].o)))->F_diffuse;
	init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long_com_badlogic_gdx_graphics_Color(ctx, sp[1].o, temp0, sp[2].o);
	((func_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[1].o)))->F_specular;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = frame[3].o;
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	jlong temp0 = (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Specular;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[1].o)))->F_specular;
	init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long_com_badlogic_gdx_graphics_Color(ctx, sp[1].o, temp0, sp[2].o);
	((func_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[1].o)))->F_emissive;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = frame[3].o;
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	jlong temp0 = (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Emissive;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[1].o)))->F_emissive;
	init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long_com_badlogic_gdx_graphics_Color(ctx, sp[1].o, temp0, sp[2].o);
	((func_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, sp[0].o, sp[1].o);
	}
label_6:;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[1].o)))->F_reflection;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = frame[3].o;
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute);
	clinit_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute(ctx);
	jlong temp0 = (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_Reflection;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[1].o)))->F_reflection;
	init_com_badlogic_gdx_graphics_g3d_attributes_ColorAttribute_long_com_badlogic_gdx_graphics_Color(ctx, sp[1].o, temp0, sp[2].o);
	((func_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(286);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[1].o)))->F_shininess), (jfloat(0)), -1)) <= 0) goto label_8;
	}
	{
	sp[0].o = frame[3].o;
	clinit_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_long_float(ctx, sp[1].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_FloatAttribute_Shininess), ((jfloat)((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[1].o)))->F_shininess));
	((func_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, sp[0].o, sp[1].o);
	}
label_8:;
	{
	LINE_NUMBER(287);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[1].o)))->F_opacity), (jfloat(1)), -1)) == 0) goto label_9;
	}
	{
	sp[0].o = frame[3].o;
	clinit_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_BlendingAttribute_int_int_float(ctx, sp[1].o, (770), (771), ((jfloat)((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[1].o)))->F_opacity));
	((func_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(289);
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(292);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[1].o)))->F_textures;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[1].o)))->F_textures;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture, sp[0].o));
	LINE_NUMBER(295);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelTexture *) NULL_CHECK((frame[6].o)))->F_fileName;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(296);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelTexture *) NULL_CHECK((frame[6].o)))->F_fileName;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_Texture, sp[0].o));
	goto label_18;
	}
label_15:;
	{
	LINE_NUMBER(298);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelTexture *) NULL_CHECK((frame[6].o)))->F_fileName;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_load_java_lang_String_R_com_badlogic_gdx_graphics_Texture) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g3d_utils_TextureProvider, INDEX_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_load_java_lang_String_R_com_badlogic_gdx_graphics_Texture, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(299);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelTexture *) NULL_CHECK((frame[6].o)))->F_fileName;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[7].o));
	LINE_NUMBER(300);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_disposables;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[7].o));
	}
label_18:;
	{
	LINE_NUMBER(303);
	clinit_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor);
	init_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_com_badlogic_gdx_graphics_GLTexture(ctx, sp[0].o, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(304);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Texture_getMinFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getMinFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter])(ctx, (frame[7].o));
	((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK(sp[0].o))->F_minFilter = (jref) sp[1].o;
	LINE_NUMBER(305);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Texture_getMagFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getMagFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter])(ctx, (frame[7].o));
	((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK(sp[0].o))->F_magFilter = (jref) sp[1].o;
	LINE_NUMBER(306);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Texture_getUWrap_R_com_badlogic_gdx_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getUWrap_R_com_badlogic_gdx_graphics_Texture$TextureWrap])(ctx, (frame[7].o));
	((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK(sp[0].o))->F_uWrap = (jref) sp[1].o;
	LINE_NUMBER(307);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Texture_getVWrap_R_com_badlogic_gdx_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getVWrap_R_com_badlogic_gdx_graphics_Texture$TextureWrap])(ctx, (frame[7].o));
	((com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor *) NULL_CHECK(sp[0].o))->F_vWrap = (jref) sp[1].o;
	LINE_NUMBER(309);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelTexture *) NULL_CHECK((frame[6].o)))->F_uvTranslation;
	if (sp[0].o != nullptr) goto label_26;
	}
	INST_FCONST(0);
	goto label_27;
label_26:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelTexture *) NULL_CHECK((frame[6].o)))->F_uvTranslation;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].f = temp0;
	sp += 1;
	}
label_27:;
	{
	sp -= 1;
	frame[9].f = sp[0].f;
	LINE_NUMBER(310);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelTexture *) NULL_CHECK((frame[6].o)))->F_uvTranslation;
	if (sp[0].o != nullptr) goto label_29;
	}
	INST_FCONST(0);
	goto label_30;
label_29:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelTexture *) NULL_CHECK((frame[6].o)))->F_uvTranslation;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].f = temp0;
	sp += 1;
	}
label_30:;
	{
	sp -= 1;
	frame[10].f = sp[0].f;
	LINE_NUMBER(311);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelTexture *) NULL_CHECK((frame[6].o)))->F_uvScaling;
	if (sp[0].o != nullptr) goto label_32;
	}
	INST_FCONST(1);
	goto label_33;
label_32:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelTexture *) NULL_CHECK((frame[6].o)))->F_uvScaling;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].f = temp0;
	sp += 1;
	}
label_33:;
	{
	sp -= 1;
	frame[11].f = sp[0].f;
	LINE_NUMBER(312);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelTexture *) NULL_CHECK((frame[6].o)))->F_uvScaling;
	if (sp[0].o != nullptr) goto label_35;
	}
	INST_FCONST(1);
	goto label_36;
label_35:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelTexture *) NULL_CHECK((frame[6].o)))->F_uvScaling;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].f = temp0;
	sp += 1;
	}
label_36:;
	{
	sp -= 1;
	frame[12].f = sp[0].f;
	LINE_NUMBER(314);
	switch(((jint)((com_badlogic_gdx_graphics_g3d_model_data_ModelTexture *) NULL_CHECK((frame[6].o)))->F_usage)) {
		case 2: goto label_38;
		case 3: goto label_39;
		case 4: goto label_40;
		case 5: goto label_41;
		case 6: goto label_42;
		case 7: goto label_43;
		case 8: goto label_44;
		case 9: goto label_42;
		case 10: goto label_45;
		default: goto label_42;
	}
	}
label_38:;
	{
	LINE_NUMBER(316);
	sp[0].o = frame[3].o;
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_float_float_float_float(ctx, sp[1].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Diffuse), (frame[8].o), (frame[9].f), (frame[10].f), (frame[11].f), (frame[12].f));
	((func_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(317);
	goto label_42;
	}
label_41:;
	{
	LINE_NUMBER(319);
	sp[0].o = frame[3].o;
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_float_float_float_float(ctx, sp[1].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Specular), (frame[8].o), (frame[9].f), (frame[10].f), (frame[11].f), (frame[12].f));
	((func_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(320);
	goto label_42;
	}
label_44:;
	{
	LINE_NUMBER(322);
	sp[0].o = frame[3].o;
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_float_float_float_float(ctx, sp[1].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Bump), (frame[8].o), (frame[9].f), (frame[10].f), (frame[11].f), (frame[12].f));
	((func_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(323);
	goto label_42;
	}
label_43:;
	{
	LINE_NUMBER(325);
	sp[0].o = frame[3].o;
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_float_float_float_float(ctx, sp[1].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Normal), (frame[8].o), (frame[9].f), (frame[10].f), (frame[11].f), (frame[12].f));
	((func_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(326);
	goto label_42;
	}
label_40:;
	{
	LINE_NUMBER(328);
	sp[0].o = frame[3].o;
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_float_float_float_float(ctx, sp[1].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Ambient), (frame[8].o), (frame[9].f), (frame[10].f), (frame[11].f), (frame[12].f));
	((func_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(329);
	goto label_42;
	}
label_39:;
	{
	LINE_NUMBER(331);
	sp[0].o = frame[3].o;
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_float_float_float_float(ctx, sp[1].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Emissive), (frame[8].o), (frame[9].f), (frame[10].f), (frame[11].f), (frame[12].f));
	((func_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(332);
	goto label_42;
	}
label_45:;
	{
	LINE_NUMBER(334);
	sp[0].o = frame[3].o;
	clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute);
	init_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_long_com_badlogic_gdx_graphics_g3d_utils_TextureDescriptor_float_float_float_float(ctx, sp[1].o, (clinit_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute(ctx), (jlong)SF_com_badlogic_gdx_graphics_g3d_attributes_TextureAttribute_Reflection), (frame[8].o), (frame[9].f), (frame[10].f), (frame[11].f), (frame[12].f));
	((func_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Material_set_com_badlogic_gdx_graphics_g3d_Attribute])(ctx, sp[0].o, sp[1].o);
	}
label_42:;
	LINE_NUMBER(337);
	goto label_13;
label_11:;
	{
	LINE_NUMBER(340);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_Model_manageDisposable_com_badlogic_gdx_utils_Disposable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:manageDisposable", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(347);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_disposables;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_contains_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_disposables;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(348);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Model_getManagedDisposables_R_java_lang_Iterable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:getManagedDisposables", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_disposables;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_Model_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:dispose", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(357);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_disposables;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Disposable, sp[0].o));
	LINE_NUMBER(358);
	((func_com_badlogic_gdx_utils_Disposable_dispose) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_Disposable, INDEX_com_badlogic_gdx_utils_Disposable_dispose, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(359);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(360);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_Model_calculateTransforms(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:calculateTransforms", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_nodes;
	frame[1].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(372);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(373);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_nodes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	((func_com_badlogic_gdx_graphics_g3d_model_Node_calculateTransforms_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_calculateTransforms_boolean])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o)), (jint(1)));
	LINE_NUMBER(372);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(375);
	frame[2].i = (jint(0));
	}
label_6:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_7;
	}
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_nodes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	((func_com_badlogic_gdx_graphics_g3d_model_Node_calculateBoneTransforms_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_calculateBoneTransforms_boolean])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o)), (jint(1)));
	LINE_NUMBER(375);
	INST_IINC(2, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(378);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Model_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:calculateBoundingBox", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[1].o));
	LINE_NUMBER(385);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Model_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Model_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Model_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:extendBoundingBox", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(393);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_nodes;
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(394);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_nodes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_Node_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o)), (frame[1].o));
	LINE_NUMBER(394);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(396);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Model_getAnimation_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_Animation(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:getAnimation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(402);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Model_getAnimation_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Animation) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Model_getAnimation_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Animation])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Model_getAnimation_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Animation(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:getAnimation", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(409);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_animations;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(411);
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(412);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(413);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_animations;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Animation, sp[0].o);
	frame[4].o = sp[0].o;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Animation *) NULL_CHECK(sp[0].o))->F_id;
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
	INST_ALOAD(4);
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
	{
	LINE_NUMBER(412);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	goto label_9;
label_2:;
	{
	LINE_NUMBER(415);
	frame[5].i = (jint(0));
	}
label_10:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_9;
	}
	{
	LINE_NUMBER(416);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_animations;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Animation, sp[0].o);
	frame[4].o = sp[0].o;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Animation *) NULL_CHECK(sp[0].o))->F_id;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_13;
	}
	INST_ALOAD(4);
	popStackFrame(ctx);
	INST_ARETURN();
label_13:;
	{
	LINE_NUMBER(415);
	INST_IINC(5, 1);
	goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(418);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Model_getMaterial_java_lang_String_R_com_badlogic_gdx_graphics_g3d_Material(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:getMaterial", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(424);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Model_getMaterial_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_Material) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Model_getMaterial_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_Material])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Model_getMaterial_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_Material(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:getMaterial", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(431);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_materials;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(433);
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(434);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(435);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_materials;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Material, sp[0].o);
	frame[4].o = sp[0].o;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Material *) NULL_CHECK(sp[0].o))->F_id;
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
	INST_ALOAD(4);
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
	{
	LINE_NUMBER(434);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	goto label_9;
label_2:;
	{
	LINE_NUMBER(437);
	frame[5].i = (jint(0));
	}
label_10:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_9;
	}
	{
	LINE_NUMBER(438);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_materials;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Material, sp[0].o);
	frame[4].o = sp[0].o;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Material *) NULL_CHECK(sp[0].o))->F_id;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_13;
	}
	INST_ALOAD(4);
	popStackFrame(ctx);
	INST_ARETURN();
label_13:;
	{
	LINE_NUMBER(437);
	INST_IINC(5, 1);
	goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(440);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Model_getNode_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:getNode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(446);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Model_getNode_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Model_getNode_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Model_getNode_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:getNode", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(453);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Model_getNode_java_lang_String_boolean_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Model_getNode_java_lang_String_boolean_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_Model_getNode_java_lang_String_boolean_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:getNode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(461);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[0].o)))->F_nodes;
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_g3d_model_Node_getNode_com_badlogic_gdx_utils_Array_java_lang_String_boolean_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_Model_lambda$loadNodes$1_int_R_Array1_com_badlogic_gdx_math_Matrix4(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:lambda$loadNodes$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_Model(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_math_Matrix4, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_Model_lambda$loadNodes$0_int_R_Array1_com_badlogic_gdx_graphics_g3d_model_Node(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/Model:lambda$loadNodes$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_Model(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_Model[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_Model_dispose,
	(void *) M_com_badlogic_gdx_graphics_g3d_Model_load_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_graphics_g3d_utils_TextureProvider,
	(void *) M_com_badlogic_gdx_graphics_g3d_Model_loadAnimations_java_lang_Iterable,
	(void *) M_com_badlogic_gdx_graphics_g3d_Model_loadNodes_java_lang_Iterable,
	(void *) M_com_badlogic_gdx_graphics_g3d_Model_loadNode_com_badlogic_gdx_graphics_g3d_model_data_ModelNode_R_com_badlogic_gdx_graphics_g3d_model_Node,
	(void *) M_com_badlogic_gdx_graphics_g3d_Model_loadMeshes_java_lang_Iterable,
	(void *) M_com_badlogic_gdx_graphics_g3d_Model_convertMesh_com_badlogic_gdx_graphics_g3d_model_data_ModelMesh,
	(void *) M_com_badlogic_gdx_graphics_g3d_Model_loadMaterials_java_lang_Iterable_com_badlogic_gdx_graphics_g3d_utils_TextureProvider,
	(void *) M_com_badlogic_gdx_graphics_g3d_Model_convertMaterial_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_R_com_badlogic_gdx_graphics_g3d_Material,
	(void *) M_com_badlogic_gdx_graphics_g3d_Model_manageDisposable_com_badlogic_gdx_utils_Disposable,
	(void *) M_com_badlogic_gdx_graphics_g3d_Model_getManagedDisposables_R_java_lang_Iterable,
	(void *) M_com_badlogic_gdx_graphics_g3d_Model_calculateTransforms,
	(void *) M_com_badlogic_gdx_graphics_g3d_Model_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_graphics_g3d_Model_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_graphics_g3d_Model_getAnimation_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_Animation,
	(void *) M_com_badlogic_gdx_graphics_g3d_Model_getAnimation_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Animation,
	(void *) M_com_badlogic_gdx_graphics_g3d_Model_getMaterial_java_lang_String_R_com_badlogic_gdx_graphics_g3d_Material,
	(void *) M_com_badlogic_gdx_graphics_g3d_Model_getMaterial_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_Material,
	(void *) M_com_badlogic_gdx_graphics_g3d_Model_getNode_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_Node,
	(void *) M_com_badlogic_gdx_graphics_g3d_Model_getNode_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node,
	(void *) M_com_badlogic_gdx_graphics_g3d_Model_getNode_java_lang_String_boolean_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node,
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
	{ "load", "(Lcom/badlogic/gdx/graphics/g3d/model/data/ModelData;Lcom/badlogic/gdx/graphics/g3d/utils/TextureProvider;)V" },
	{ "loadAnimations", "(Ljava/lang/Iterable;)V" },
	{ "loadNodes", "(Ljava/lang/Iterable;)V" },
	{ "loadNode", "(Lcom/badlogic/gdx/graphics/g3d/model/data/ModelNode;)Lcom/badlogic/gdx/graphics/g3d/model/Node;" },
	{ "loadMeshes", "(Ljava/lang/Iterable;)V" },
	{ "convertMesh", "(Lcom/badlogic/gdx/graphics/g3d/model/data/ModelMesh;)V" },
	{ "loadMaterials", "(Ljava/lang/Iterable;Lcom/badlogic/gdx/graphics/g3d/utils/TextureProvider;)V" },
	{ "convertMaterial", "(Lcom/badlogic/gdx/graphics/g3d/model/data/ModelMaterial;Lcom/badlogic/gdx/graphics/g3d/utils/TextureProvider;)Lcom/badlogic/gdx/graphics/g3d/Material;" },
	{ "manageDisposable", "(Lcom/badlogic/gdx/utils/Disposable;)V" },
	{ "getManagedDisposables", "()Ljava/lang/Iterable;" },
	{ "calculateTransforms", "()V" },
	{ "calculateBoundingBox", "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "extendBoundingBox", "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "getAnimation", "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g3d/model/Animation;" },
	{ "getAnimation", "(Ljava/lang/String;Z)Lcom/badlogic/gdx/graphics/g3d/model/Animation;" },
	{ "getMaterial", "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g3d/Material;" },
	{ "getMaterial", "(Ljava/lang/String;Z)Lcom/badlogic/gdx/graphics/g3d/Material;" },
	{ "getNode", "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g3d/model/Node;" },
	{ "getNode", "(Ljava/lang/String;Z)Lcom/badlogic/gdx/graphics/g3d/model/Node;" },
	{ "getNode", "(Ljava/lang/String;ZZ)Lcom/badlogic/gdx/graphics/g3d/model/Node;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static FieldMetadata fields[] {
	{ "materials", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_Model, F_materials), "Lcom/badlogic/gdx/utils/Array;", 17 },
	{ "nodes", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_Model, F_nodes), "Lcom/badlogic/gdx/utils/Array;", 17 },
	{ "animations", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_Model, F_animations), "Lcom/badlogic/gdx/utils/Array;", 17 },
	{ "meshes", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_Model, F_meshes), "Lcom/badlogic/gdx/utils/Array;", 17 },
	{ "meshParts", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_Model, F_meshParts), "Lcom/badlogic/gdx/utils/Array;", 17 },
	{ "disposables", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_Model, F_disposables), "Lcom/badlogic/gdx/utils/Array;", 20 },
	{ "nodePartBones", &class_com_badlogic_gdx_utils_ObjectMap, offsetof(com_badlogic_gdx_graphics_g3d_Model, F_nodePartBones), "Lcom/badlogic/gdx/utils/ObjectMap;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_Model, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_graphics_g3d_model_data_ModelData, 0, "(Lcom/badlogic/gdx/graphics/g3d/model/data/ModelData;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_graphics_g3d_utils_TextureProvider, 0, "(Lcom/badlogic/gdx/graphics/g3d/model/data/ModelData;Lcom/badlogic/gdx/graphics/g3d/utils/TextureProvider;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Model_load_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_graphics_g3d_utils_TextureProvider, VTABLE_com_badlogic_gdx_graphics_g3d_Model_load_com_badlogic_gdx_graphics_g3d_model_data_ModelData_com_badlogic_gdx_graphics_g3d_utils_TextureProvider, "(Lcom/badlogic/gdx/graphics/g3d/model/data/ModelData;Lcom/badlogic/gdx/graphics/g3d/utils/TextureProvider;)V", 4 },
	{ "loadAnimations", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Model_loadAnimations_java_lang_Iterable, VTABLE_com_badlogic_gdx_graphics_g3d_Model_loadAnimations_java_lang_Iterable, "(Ljava/lang/Iterable;)V", 4 },
	{ "loadNodes", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Model_loadNodes_java_lang_Iterable, VTABLE_com_badlogic_gdx_graphics_g3d_Model_loadNodes_java_lang_Iterable, "(Ljava/lang/Iterable;)V", 4 },
	{ "loadNode", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Model_loadNode_com_badlogic_gdx_graphics_g3d_model_data_ModelNode_R_com_badlogic_gdx_graphics_g3d_model_Node, VTABLE_com_badlogic_gdx_graphics_g3d_Model_loadNode_com_badlogic_gdx_graphics_g3d_model_data_ModelNode_R_com_badlogic_gdx_graphics_g3d_model_Node, "(Lcom/badlogic/gdx/graphics/g3d/model/data/ModelNode;)Lcom/badlogic/gdx/graphics/g3d/model/Node;", 4 },
	{ "loadMeshes", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Model_loadMeshes_java_lang_Iterable, VTABLE_com_badlogic_gdx_graphics_g3d_Model_loadMeshes_java_lang_Iterable, "(Ljava/lang/Iterable;)V", 4 },
	{ "convertMesh", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Model_convertMesh_com_badlogic_gdx_graphics_g3d_model_data_ModelMesh, VTABLE_com_badlogic_gdx_graphics_g3d_Model_convertMesh_com_badlogic_gdx_graphics_g3d_model_data_ModelMesh, "(Lcom/badlogic/gdx/graphics/g3d/model/data/ModelMesh;)V", 4 },
	{ "loadMaterials", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Model_loadMaterials_java_lang_Iterable_com_badlogic_gdx_graphics_g3d_utils_TextureProvider, VTABLE_com_badlogic_gdx_graphics_g3d_Model_loadMaterials_java_lang_Iterable_com_badlogic_gdx_graphics_g3d_utils_TextureProvider, "(Ljava/lang/Iterable;Lcom/badlogic/gdx/graphics/g3d/utils/TextureProvider;)V", 4 },
	{ "convertMaterial", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Model_convertMaterial_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_R_com_badlogic_gdx_graphics_g3d_Material, VTABLE_com_badlogic_gdx_graphics_g3d_Model_convertMaterial_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_R_com_badlogic_gdx_graphics_g3d_Material, "(Lcom/badlogic/gdx/graphics/g3d/model/data/ModelMaterial;Lcom/badlogic/gdx/graphics/g3d/utils/TextureProvider;)Lcom/badlogic/gdx/graphics/g3d/Material;", 4 },
	{ "manageDisposable", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Model_manageDisposable_com_badlogic_gdx_utils_Disposable, VTABLE_com_badlogic_gdx_graphics_g3d_Model_manageDisposable_com_badlogic_gdx_utils_Disposable, "(Lcom/badlogic/gdx/utils/Disposable;)V", 1 },
	{ "getManagedDisposables", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Model_getManagedDisposables_R_java_lang_Iterable, VTABLE_com_badlogic_gdx_graphics_g3d_Model_getManagedDisposables_R_java_lang_Iterable, "()Ljava/lang/Iterable;", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Model_dispose, VTABLE_com_badlogic_gdx_graphics_g3d_Model_dispose, "()V", 1 },
	{ "calculateTransforms", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Model_calculateTransforms, VTABLE_com_badlogic_gdx_graphics_g3d_Model_calculateTransforms, "()V", 1 },
	{ "calculateBoundingBox", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Model_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_graphics_g3d_Model_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "extendBoundingBox", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Model_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_graphics_g3d_Model_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "getAnimation", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Model_getAnimation_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_Animation, VTABLE_com_badlogic_gdx_graphics_g3d_Model_getAnimation_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_Animation, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g3d/model/Animation;", 1 },
	{ "getAnimation", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Model_getAnimation_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Animation, VTABLE_com_badlogic_gdx_graphics_g3d_Model_getAnimation_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Animation, "(Ljava/lang/String;Z)Lcom/badlogic/gdx/graphics/g3d/model/Animation;", 1 },
	{ "getMaterial", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Model_getMaterial_java_lang_String_R_com_badlogic_gdx_graphics_g3d_Material, VTABLE_com_badlogic_gdx_graphics_g3d_Model_getMaterial_java_lang_String_R_com_badlogic_gdx_graphics_g3d_Material, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g3d/Material;", 1 },
	{ "getMaterial", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Model_getMaterial_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_Material, VTABLE_com_badlogic_gdx_graphics_g3d_Model_getMaterial_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_Material, "(Ljava/lang/String;Z)Lcom/badlogic/gdx/graphics/g3d/Material;", 1 },
	{ "getNode", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Model_getNode_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_Node, VTABLE_com_badlogic_gdx_graphics_g3d_Model_getNode_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_Node, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g3d/model/Node;", 1 },
	{ "getNode", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Model_getNode_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node, VTABLE_com_badlogic_gdx_graphics_g3d_Model_getNode_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node, "(Ljava/lang/String;Z)Lcom/badlogic/gdx/graphics/g3d/model/Node;", 1 },
	{ "getNode", (intptr_t) M_com_badlogic_gdx_graphics_g3d_Model_getNode_java_lang_String_boolean_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node, VTABLE_com_badlogic_gdx_graphics_g3d_Model_getNode_java_lang_String_boolean_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node, "(Ljava/lang/String;ZZ)Lcom/badlogic/gdx/graphics/g3d/model/Node;", 1 },
	{ "lambda$loadNodes$1", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_Model_lambda$loadNodes$1_int_R_Array1_com_badlogic_gdx_math_Matrix4, 0, "(I)[Lcom/badlogic/gdx/math/Matrix4;", 4106 },
	{ "lambda$loadNodes$0", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_Model_lambda$loadNodes$0_int_R_Array1_com_badlogic_gdx_graphics_g3d_model_Node, 0, "(I)[Lcom/badlogic/gdx/graphics/g3d/model/Node;", 4106 },
};

Class class_com_badlogic_gdx_graphics_g3d_Model{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/Model",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_Model),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_Model,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_Model,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_Model,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 26,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 32,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_Model = registerClass(&class_com_badlogic_gdx_graphics_g3d_Model);

}

