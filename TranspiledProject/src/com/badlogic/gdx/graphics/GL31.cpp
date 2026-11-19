#include "com/badlogic/gdx/graphics/GL31.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/FloatBuffer.h"
#include "java/nio/IntBuffer.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "com/badlogic/gdx/graphics/GL31.h"
#include "com/badlogic/gdx/graphics/GL30.h"

extern "C" {

jint SF_com_badlogic_gdx_graphics_GL31_GL_VERTEX_SHADER_BIT;
jint SF_com_badlogic_gdx_graphics_GL31_GL_FRAGMENT_SHADER_BIT;
jint SF_com_badlogic_gdx_graphics_GL31_GL_COMPUTE_SHADER_BIT;
jint SF_com_badlogic_gdx_graphics_GL31_GL_ALL_SHADER_BITS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT;
jint SF_com_badlogic_gdx_graphics_GL31_GL_ELEMENT_ARRAY_BARRIER_BIT;
jint SF_com_badlogic_gdx_graphics_GL31_GL_UNIFORM_BARRIER_BIT;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_FETCH_BARRIER_BIT;
jint SF_com_badlogic_gdx_graphics_GL31_GL_SHADER_IMAGE_ACCESS_BARRIER_BIT;
jint SF_com_badlogic_gdx_graphics_GL31_GL_COMMAND_BARRIER_BIT;
jint SF_com_badlogic_gdx_graphics_GL31_GL_PIXEL_BUFFER_BARRIER_BIT;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_UPDATE_BARRIER_BIT;
jint SF_com_badlogic_gdx_graphics_GL31_GL_BUFFER_UPDATE_BARRIER_BIT;
jint SF_com_badlogic_gdx_graphics_GL31_GL_FRAMEBUFFER_BARRIER_BIT;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TRANSFORM_FEEDBACK_BARRIER_BIT;
jint SF_com_badlogic_gdx_graphics_GL31_GL_ATOMIC_COUNTER_BARRIER_BIT;
jint SF_com_badlogic_gdx_graphics_GL31_GL_SHADER_STORAGE_BARRIER_BIT;
jint SF_com_badlogic_gdx_graphics_GL31_GL_ALL_BARRIER_BITS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_WIDTH;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_HEIGHT;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_INTERNAL_FORMAT;
jint SF_com_badlogic_gdx_graphics_GL31_GL_STENCIL_INDEX;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_RED_SIZE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_GREEN_SIZE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_BLUE_SIZE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_ALPHA_SIZE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_DEPTH;
jint SF_com_badlogic_gdx_graphics_GL31_GL_PROGRAM_SEPARABLE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_ACTIVE_PROGRAM;
jint SF_com_badlogic_gdx_graphics_GL31_GL_PROGRAM_PIPELINE_BINDING;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_SHARED_MEMORY_SIZE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_UNIFORM_COMPONENTS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_ATOMIC_COUNTERS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_COMPUTE_WORK_GROUP_SIZE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_UNIFORM_LOCATIONS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_VERTEX_ATTRIB_BINDING;
jint SF_com_badlogic_gdx_graphics_GL31_GL_VERTEX_ATTRIB_RELATIVE_OFFSET;
jint SF_com_badlogic_gdx_graphics_GL31_GL_VERTEX_BINDING_DIVISOR;
jint SF_com_badlogic_gdx_graphics_GL31_GL_VERTEX_BINDING_OFFSET;
jint SF_com_badlogic_gdx_graphics_GL31_GL_VERTEX_BINDING_STRIDE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_VERTEX_ATTRIB_BINDINGS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_VERTEX_ATTRIB_STRIDE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_COMPRESSED;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_DEPTH_SIZE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_READ_ONLY;
jint SF_com_badlogic_gdx_graphics_GL31_GL_WRITE_ONLY;
jint SF_com_badlogic_gdx_graphics_GL31_GL_READ_WRITE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_STENCIL_SIZE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_RED_TYPE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_GREEN_TYPE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_BLUE_TYPE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_ALPHA_TYPE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_DEPTH_TYPE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_SHARED_SIZE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_SAMPLE_POSITION;
jint SF_com_badlogic_gdx_graphics_GL31_GL_SAMPLE_MASK;
jint SF_com_badlogic_gdx_graphics_GL31_GL_SAMPLE_MASK_VALUE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_SAMPLE_MASK_WORDS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_IMAGE_UNITS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES;
jint SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_BINDING_NAME;
jint SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_BINDING_LEVEL;
jint SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_BINDING_LAYERED;
jint SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_BINDING_LAYER;
jint SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_BINDING_ACCESS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_DRAW_INDIRECT_BUFFER;
jint SF_com_badlogic_gdx_graphics_GL31_GL_DRAW_INDIRECT_BUFFER_BINDING;
jint SF_com_badlogic_gdx_graphics_GL31_GL_VERTEX_BINDING_BUFFER;
jint SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_2D;
jint SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_3D;
jint SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_CUBE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_2D_ARRAY;
jint SF_com_badlogic_gdx_graphics_GL31_GL_INT_IMAGE_2D;
jint SF_com_badlogic_gdx_graphics_GL31_GL_INT_IMAGE_3D;
jint SF_com_badlogic_gdx_graphics_GL31_GL_INT_IMAGE_CUBE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_INT_IMAGE_2D_ARRAY;
jint SF_com_badlogic_gdx_graphics_GL31_GL_UNSIGNED_INT_IMAGE_2D;
jint SF_com_badlogic_gdx_graphics_GL31_GL_UNSIGNED_INT_IMAGE_3D;
jint SF_com_badlogic_gdx_graphics_GL31_GL_UNSIGNED_INT_IMAGE_CUBE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_UNSIGNED_INT_IMAGE_2D_ARRAY;
jint SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_BINDING_FORMAT;
jint SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_FORMAT_COMPATIBILITY_TYPE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_VERTEX_IMAGE_UNIFORMS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_FRAGMENT_IMAGE_UNIFORMS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMBINED_IMAGE_UNIFORMS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_SHADER_STORAGE_BUFFER;
jint SF_com_badlogic_gdx_graphics_GL31_GL_SHADER_STORAGE_BUFFER_BINDING;
jint SF_com_badlogic_gdx_graphics_GL31_GL_SHADER_STORAGE_BUFFER_START;
jint SF_com_badlogic_gdx_graphics_GL31_GL_SHADER_STORAGE_BUFFER_SIZE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_SHADER_STORAGE_BLOCK_SIZE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT;
jint SF_com_badlogic_gdx_graphics_GL31_GL_DEPTH_STENCIL_TEXTURE_MODE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_DISPATCH_INDIRECT_BUFFER;
jint SF_com_badlogic_gdx_graphics_GL31_GL_DISPATCH_INDIRECT_BUFFER_BINDING;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_2D_MULTISAMPLE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_BINDING_2D_MULTISAMPLE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_SAMPLES;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_FIXED_SAMPLE_LOCATIONS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_SAMPLER_2D_MULTISAMPLE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_INT_SAMPLER_2D_MULTISAMPLE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COLOR_TEXTURE_SAMPLES;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_DEPTH_TEXTURE_SAMPLES;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_INTEGER_SAMPLES;
jint SF_com_badlogic_gdx_graphics_GL31_GL_COMPUTE_SHADER;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_UNIFORM_BLOCKS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_IMAGE_UNIFORMS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_WORK_GROUP_COUNT;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_WORK_GROUP_SIZE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_ATOMIC_COUNTER_BUFFER;
jint SF_com_badlogic_gdx_graphics_GL31_GL_ATOMIC_COUNTER_BUFFER_BINDING;
jint SF_com_badlogic_gdx_graphics_GL31_GL_ATOMIC_COUNTER_BUFFER_START;
jint SF_com_badlogic_gdx_graphics_GL31_GL_ATOMIC_COUNTER_BUFFER_SIZE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_VERTEX_ATOMIC_COUNTERS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_FRAGMENT_ATOMIC_COUNTERS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMBINED_ATOMIC_COUNTERS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_ACTIVE_ATOMIC_COUNTER_BUFFERS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_UNSIGNED_INT_ATOMIC_COUNTER;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_UNIFORM;
jint SF_com_badlogic_gdx_graphics_GL31_GL_UNIFORM_BLOCK;
jint SF_com_badlogic_gdx_graphics_GL31_GL_PROGRAM_INPUT;
jint SF_com_badlogic_gdx_graphics_GL31_GL_PROGRAM_OUTPUT;
jint SF_com_badlogic_gdx_graphics_GL31_GL_BUFFER_VARIABLE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_SHADER_STORAGE_BLOCK;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TRANSFORM_FEEDBACK_VARYING;
jint SF_com_badlogic_gdx_graphics_GL31_GL_ACTIVE_RESOURCES;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_NAME_LENGTH;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_NUM_ACTIVE_VARIABLES;
jint SF_com_badlogic_gdx_graphics_GL31_GL_NAME_LENGTH;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TYPE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_ARRAY_SIZE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_OFFSET;
jint SF_com_badlogic_gdx_graphics_GL31_GL_BLOCK_INDEX;
jint SF_com_badlogic_gdx_graphics_GL31_GL_ARRAY_STRIDE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MATRIX_STRIDE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_IS_ROW_MAJOR;
jint SF_com_badlogic_gdx_graphics_GL31_GL_ATOMIC_COUNTER_BUFFER_INDEX;
jint SF_com_badlogic_gdx_graphics_GL31_GL_BUFFER_BINDING;
jint SF_com_badlogic_gdx_graphics_GL31_GL_BUFFER_DATA_SIZE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_NUM_ACTIVE_VARIABLES;
jint SF_com_badlogic_gdx_graphics_GL31_GL_ACTIVE_VARIABLES;
jint SF_com_badlogic_gdx_graphics_GL31_GL_REFERENCED_BY_VERTEX_SHADER;
jint SF_com_badlogic_gdx_graphics_GL31_GL_REFERENCED_BY_FRAGMENT_SHADER;
jint SF_com_badlogic_gdx_graphics_GL31_GL_REFERENCED_BY_COMPUTE_SHADER;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TOP_LEVEL_ARRAY_SIZE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_TOP_LEVEL_ARRAY_STRIDE;
jint SF_com_badlogic_gdx_graphics_GL31_GL_LOCATION;
jint SF_com_badlogic_gdx_graphics_GL31_GL_FRAMEBUFFER_DEFAULT_WIDTH;
jint SF_com_badlogic_gdx_graphics_GL31_GL_FRAMEBUFFER_DEFAULT_HEIGHT;
jint SF_com_badlogic_gdx_graphics_GL31_GL_FRAMEBUFFER_DEFAULT_SAMPLES;
jint SF_com_badlogic_gdx_graphics_GL31_GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_FRAMEBUFFER_WIDTH;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_FRAMEBUFFER_HEIGHT;
jint SF_com_badlogic_gdx_graphics_GL31_GL_MAX_FRAMEBUFFER_SAMPLES;

void mark_com_badlogic_gdx_graphics_GL31(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_GL31 *) object;
}

void clinit_com_badlogic_gdx_graphics_GL31(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_graphics_GL31_GL_VERTEX_SHADER_BIT = jint(1);
	SF_com_badlogic_gdx_graphics_GL31_GL_FRAGMENT_SHADER_BIT = jint(2);
	SF_com_badlogic_gdx_graphics_GL31_GL_COMPUTE_SHADER_BIT = jint(32);
	SF_com_badlogic_gdx_graphics_GL31_GL_ALL_SHADER_BITS = jint(-1);
	SF_com_badlogic_gdx_graphics_GL31_GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT = jint(1);
	SF_com_badlogic_gdx_graphics_GL31_GL_ELEMENT_ARRAY_BARRIER_BIT = jint(2);
	SF_com_badlogic_gdx_graphics_GL31_GL_UNIFORM_BARRIER_BIT = jint(4);
	SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_FETCH_BARRIER_BIT = jint(8);
	SF_com_badlogic_gdx_graphics_GL31_GL_SHADER_IMAGE_ACCESS_BARRIER_BIT = jint(32);
	SF_com_badlogic_gdx_graphics_GL31_GL_COMMAND_BARRIER_BIT = jint(64);
	SF_com_badlogic_gdx_graphics_GL31_GL_PIXEL_BUFFER_BARRIER_BIT = jint(128);
	SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_UPDATE_BARRIER_BIT = jint(256);
	SF_com_badlogic_gdx_graphics_GL31_GL_BUFFER_UPDATE_BARRIER_BIT = jint(512);
	SF_com_badlogic_gdx_graphics_GL31_GL_FRAMEBUFFER_BARRIER_BIT = jint(1024);
	SF_com_badlogic_gdx_graphics_GL31_GL_TRANSFORM_FEEDBACK_BARRIER_BIT = jint(2048);
	SF_com_badlogic_gdx_graphics_GL31_GL_ATOMIC_COUNTER_BARRIER_BIT = jint(4096);
	SF_com_badlogic_gdx_graphics_GL31_GL_SHADER_STORAGE_BARRIER_BIT = jint(8192);
	SF_com_badlogic_gdx_graphics_GL31_GL_ALL_BARRIER_BITS = jint(-1);
	SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_WIDTH = jint(4096);
	SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_HEIGHT = jint(4097);
	SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_INTERNAL_FORMAT = jint(4099);
	SF_com_badlogic_gdx_graphics_GL31_GL_STENCIL_INDEX = jint(6401);
	SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_RED_SIZE = jint(32860);
	SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_GREEN_SIZE = jint(32861);
	SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_BLUE_SIZE = jint(32862);
	SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_ALPHA_SIZE = jint(32863);
	SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_DEPTH = jint(32881);
	SF_com_badlogic_gdx_graphics_GL31_GL_PROGRAM_SEPARABLE = jint(33368);
	SF_com_badlogic_gdx_graphics_GL31_GL_ACTIVE_PROGRAM = jint(33369);
	SF_com_badlogic_gdx_graphics_GL31_GL_PROGRAM_PIPELINE_BINDING = jint(33370);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_SHARED_MEMORY_SIZE = jint(33378);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_UNIFORM_COMPONENTS = jint(33379);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS = jint(33380);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_ATOMIC_COUNTERS = jint(33381);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS = jint(33382);
	SF_com_badlogic_gdx_graphics_GL31_GL_COMPUTE_WORK_GROUP_SIZE = jint(33383);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_UNIFORM_LOCATIONS = jint(33390);
	SF_com_badlogic_gdx_graphics_GL31_GL_VERTEX_ATTRIB_BINDING = jint(33492);
	SF_com_badlogic_gdx_graphics_GL31_GL_VERTEX_ATTRIB_RELATIVE_OFFSET = jint(33493);
	SF_com_badlogic_gdx_graphics_GL31_GL_VERTEX_BINDING_DIVISOR = jint(33494);
	SF_com_badlogic_gdx_graphics_GL31_GL_VERTEX_BINDING_OFFSET = jint(33495);
	SF_com_badlogic_gdx_graphics_GL31_GL_VERTEX_BINDING_STRIDE = jint(33496);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET = jint(33497);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_VERTEX_ATTRIB_BINDINGS = jint(33498);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_VERTEX_ATTRIB_STRIDE = jint(33509);
	SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_COMPRESSED = jint(34465);
	SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_DEPTH_SIZE = jint(34890);
	SF_com_badlogic_gdx_graphics_GL31_GL_READ_ONLY = jint(35000);
	SF_com_badlogic_gdx_graphics_GL31_GL_WRITE_ONLY = jint(35001);
	SF_com_badlogic_gdx_graphics_GL31_GL_READ_WRITE = jint(35002);
	SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_STENCIL_SIZE = jint(35057);
	SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_RED_TYPE = jint(35856);
	SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_GREEN_TYPE = jint(35857);
	SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_BLUE_TYPE = jint(35858);
	SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_ALPHA_TYPE = jint(35859);
	SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_DEPTH_TYPE = jint(35862);
	SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_SHARED_SIZE = jint(35903);
	SF_com_badlogic_gdx_graphics_GL31_GL_SAMPLE_POSITION = jint(36432);
	SF_com_badlogic_gdx_graphics_GL31_GL_SAMPLE_MASK = jint(36433);
	SF_com_badlogic_gdx_graphics_GL31_GL_SAMPLE_MASK_VALUE = jint(36434);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_SAMPLE_MASK_WORDS = jint(36441);
	SF_com_badlogic_gdx_graphics_GL31_GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET = jint(36446);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET = jint(36447);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_IMAGE_UNITS = jint(36664);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES = jint(36665);
	SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_BINDING_NAME = jint(36666);
	SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_BINDING_LEVEL = jint(36667);
	SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_BINDING_LAYERED = jint(36668);
	SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_BINDING_LAYER = jint(36669);
	SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_BINDING_ACCESS = jint(36670);
	SF_com_badlogic_gdx_graphics_GL31_GL_DRAW_INDIRECT_BUFFER = jint(36671);
	SF_com_badlogic_gdx_graphics_GL31_GL_DRAW_INDIRECT_BUFFER_BINDING = jint(36675);
	SF_com_badlogic_gdx_graphics_GL31_GL_VERTEX_BINDING_BUFFER = jint(36687);
	SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_2D = jint(36941);
	SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_3D = jint(36942);
	SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_CUBE = jint(36944);
	SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_2D_ARRAY = jint(36947);
	SF_com_badlogic_gdx_graphics_GL31_GL_INT_IMAGE_2D = jint(36952);
	SF_com_badlogic_gdx_graphics_GL31_GL_INT_IMAGE_3D = jint(36953);
	SF_com_badlogic_gdx_graphics_GL31_GL_INT_IMAGE_CUBE = jint(36955);
	SF_com_badlogic_gdx_graphics_GL31_GL_INT_IMAGE_2D_ARRAY = jint(36958);
	SF_com_badlogic_gdx_graphics_GL31_GL_UNSIGNED_INT_IMAGE_2D = jint(36963);
	SF_com_badlogic_gdx_graphics_GL31_GL_UNSIGNED_INT_IMAGE_3D = jint(36964);
	SF_com_badlogic_gdx_graphics_GL31_GL_UNSIGNED_INT_IMAGE_CUBE = jint(36966);
	SF_com_badlogic_gdx_graphics_GL31_GL_UNSIGNED_INT_IMAGE_2D_ARRAY = jint(36969);
	SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_BINDING_FORMAT = jint(36974);
	SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_FORMAT_COMPATIBILITY_TYPE = jint(37063);
	SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE = jint(37064);
	SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS = jint(37065);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_VERTEX_IMAGE_UNIFORMS = jint(37066);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_FRAGMENT_IMAGE_UNIFORMS = jint(37070);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMBINED_IMAGE_UNIFORMS = jint(37071);
	SF_com_badlogic_gdx_graphics_GL31_GL_SHADER_STORAGE_BUFFER = jint(37074);
	SF_com_badlogic_gdx_graphics_GL31_GL_SHADER_STORAGE_BUFFER_BINDING = jint(37075);
	SF_com_badlogic_gdx_graphics_GL31_GL_SHADER_STORAGE_BUFFER_START = jint(37076);
	SF_com_badlogic_gdx_graphics_GL31_GL_SHADER_STORAGE_BUFFER_SIZE = jint(37077);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS = jint(37078);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS = jint(37082);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS = jint(37083);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS = jint(37084);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS = jint(37085);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_SHADER_STORAGE_BLOCK_SIZE = jint(37086);
	SF_com_badlogic_gdx_graphics_GL31_GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT = jint(37087);
	SF_com_badlogic_gdx_graphics_GL31_GL_DEPTH_STENCIL_TEXTURE_MODE = jint(37098);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS = jint(37099);
	SF_com_badlogic_gdx_graphics_GL31_GL_DISPATCH_INDIRECT_BUFFER = jint(37102);
	SF_com_badlogic_gdx_graphics_GL31_GL_DISPATCH_INDIRECT_BUFFER_BINDING = jint(37103);
	SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_2D_MULTISAMPLE = jint(37120);
	SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_BINDING_2D_MULTISAMPLE = jint(37124);
	SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_SAMPLES = jint(37126);
	SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_FIXED_SAMPLE_LOCATIONS = jint(37127);
	SF_com_badlogic_gdx_graphics_GL31_GL_SAMPLER_2D_MULTISAMPLE = jint(37128);
	SF_com_badlogic_gdx_graphics_GL31_GL_INT_SAMPLER_2D_MULTISAMPLE = jint(37129);
	SF_com_badlogic_gdx_graphics_GL31_GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE = jint(37130);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COLOR_TEXTURE_SAMPLES = jint(37134);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_DEPTH_TEXTURE_SAMPLES = jint(37135);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_INTEGER_SAMPLES = jint(37136);
	SF_com_badlogic_gdx_graphics_GL31_GL_COMPUTE_SHADER = jint(37305);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_UNIFORM_BLOCKS = jint(37307);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS = jint(37308);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_IMAGE_UNIFORMS = jint(37309);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_WORK_GROUP_COUNT = jint(37310);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_WORK_GROUP_SIZE = jint(37311);
	SF_com_badlogic_gdx_graphics_GL31_GL_ATOMIC_COUNTER_BUFFER = jint(37568);
	SF_com_badlogic_gdx_graphics_GL31_GL_ATOMIC_COUNTER_BUFFER_BINDING = jint(37569);
	SF_com_badlogic_gdx_graphics_GL31_GL_ATOMIC_COUNTER_BUFFER_START = jint(37570);
	SF_com_badlogic_gdx_graphics_GL31_GL_ATOMIC_COUNTER_BUFFER_SIZE = jint(37571);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS = jint(37580);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS = jint(37584);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS = jint(37585);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_VERTEX_ATOMIC_COUNTERS = jint(37586);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_FRAGMENT_ATOMIC_COUNTERS = jint(37590);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMBINED_ATOMIC_COUNTERS = jint(37591);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE = jint(37592);
	SF_com_badlogic_gdx_graphics_GL31_GL_ACTIVE_ATOMIC_COUNTER_BUFFERS = jint(37593);
	SF_com_badlogic_gdx_graphics_GL31_GL_UNSIGNED_INT_ATOMIC_COUNTER = jint(37595);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS = jint(37596);
	SF_com_badlogic_gdx_graphics_GL31_GL_UNIFORM = jint(37601);
	SF_com_badlogic_gdx_graphics_GL31_GL_UNIFORM_BLOCK = jint(37602);
	SF_com_badlogic_gdx_graphics_GL31_GL_PROGRAM_INPUT = jint(37603);
	SF_com_badlogic_gdx_graphics_GL31_GL_PROGRAM_OUTPUT = jint(37604);
	SF_com_badlogic_gdx_graphics_GL31_GL_BUFFER_VARIABLE = jint(37605);
	SF_com_badlogic_gdx_graphics_GL31_GL_SHADER_STORAGE_BLOCK = jint(37606);
	SF_com_badlogic_gdx_graphics_GL31_GL_TRANSFORM_FEEDBACK_VARYING = jint(37620);
	SF_com_badlogic_gdx_graphics_GL31_GL_ACTIVE_RESOURCES = jint(37621);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_NAME_LENGTH = jint(37622);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_NUM_ACTIVE_VARIABLES = jint(37623);
	SF_com_badlogic_gdx_graphics_GL31_GL_NAME_LENGTH = jint(37625);
	SF_com_badlogic_gdx_graphics_GL31_GL_TYPE = jint(37626);
	SF_com_badlogic_gdx_graphics_GL31_GL_ARRAY_SIZE = jint(37627);
	SF_com_badlogic_gdx_graphics_GL31_GL_OFFSET = jint(37628);
	SF_com_badlogic_gdx_graphics_GL31_GL_BLOCK_INDEX = jint(37629);
	SF_com_badlogic_gdx_graphics_GL31_GL_ARRAY_STRIDE = jint(37630);
	SF_com_badlogic_gdx_graphics_GL31_GL_MATRIX_STRIDE = jint(37631);
	SF_com_badlogic_gdx_graphics_GL31_GL_IS_ROW_MAJOR = jint(37632);
	SF_com_badlogic_gdx_graphics_GL31_GL_ATOMIC_COUNTER_BUFFER_INDEX = jint(37633);
	SF_com_badlogic_gdx_graphics_GL31_GL_BUFFER_BINDING = jint(37634);
	SF_com_badlogic_gdx_graphics_GL31_GL_BUFFER_DATA_SIZE = jint(37635);
	SF_com_badlogic_gdx_graphics_GL31_GL_NUM_ACTIVE_VARIABLES = jint(37636);
	SF_com_badlogic_gdx_graphics_GL31_GL_ACTIVE_VARIABLES = jint(37637);
	SF_com_badlogic_gdx_graphics_GL31_GL_REFERENCED_BY_VERTEX_SHADER = jint(37638);
	SF_com_badlogic_gdx_graphics_GL31_GL_REFERENCED_BY_FRAGMENT_SHADER = jint(37642);
	SF_com_badlogic_gdx_graphics_GL31_GL_REFERENCED_BY_COMPUTE_SHADER = jint(37643);
	SF_com_badlogic_gdx_graphics_GL31_GL_TOP_LEVEL_ARRAY_SIZE = jint(37644);
	SF_com_badlogic_gdx_graphics_GL31_GL_TOP_LEVEL_ARRAY_STRIDE = jint(37645);
	SF_com_badlogic_gdx_graphics_GL31_GL_LOCATION = jint(37646);
	SF_com_badlogic_gdx_graphics_GL31_GL_FRAMEBUFFER_DEFAULT_WIDTH = jint(37648);
	SF_com_badlogic_gdx_graphics_GL31_GL_FRAMEBUFFER_DEFAULT_HEIGHT = jint(37649);
	SF_com_badlogic_gdx_graphics_GL31_GL_FRAMEBUFFER_DEFAULT_SAMPLES = jint(37651);
	SF_com_badlogic_gdx_graphics_GL31_GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS = jint(37652);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_FRAMEBUFFER_WIDTH = jint(37653);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_FRAMEBUFFER_HEIGHT = jint(37654);
	SF_com_badlogic_gdx_graphics_GL31_GL_MAX_FRAMEBUFFER_SAMPLES = jint(37656);
}

void *vtable_com_badlogic_gdx_graphics_GL31[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "glActiveTexture", "(I)V" },
	{ "glBindTexture", "(II)V" },
	{ "glBlendFunc", "(II)V" },
	{ "glClear", "(I)V" },
	{ "glClearColor", "(FFFF)V" },
	{ "glClearDepthf", "(F)V" },
	{ "glClearStencil", "(I)V" },
	{ "glColorMask", "(ZZZZ)V" },
	{ "glCompressedTexImage2D", "(IIIIIIILjava/nio/Buffer;)V" },
	{ "glCompressedTexSubImage2D", "(IIIIIIIILjava/nio/Buffer;)V" },
	{ "glCopyTexImage2D", "(IIIIIIII)V" },
	{ "glCopyTexSubImage2D", "(IIIIIIII)V" },
	{ "glCullFace", "(I)V" },
	{ "glDeleteTextures", "(ILjava/nio/IntBuffer;)V" },
	{ "glDeleteTexture", "(I)V" },
	{ "glDepthFunc", "(I)V" },
	{ "glDepthMask", "(Z)V" },
	{ "glDepthRangef", "(FF)V" },
	{ "glDisable", "(I)V" },
	{ "glDrawArrays", "(III)V" },
	{ "glDrawElements", "(IIILjava/nio/Buffer;)V" },
	{ "glEnable", "(I)V" },
	{ "glFinish", "()V" },
	{ "glFlush", "()V" },
	{ "glFrontFace", "(I)V" },
	{ "glGenTextures", "(ILjava/nio/IntBuffer;)V" },
	{ "glGenTexture", "()I" },
	{ "glGetError", "()I" },
	{ "glGetIntegerv", "(ILjava/nio/IntBuffer;)V" },
	{ "glGetString", "(I)Ljava/lang/String;" },
	{ "glHint", "(II)V" },
	{ "glLineWidth", "(F)V" },
	{ "glPixelStorei", "(II)V" },
	{ "glPolygonOffset", "(FF)V" },
	{ "glReadPixels", "(IIIIIILjava/nio/Buffer;)V" },
	{ "glScissor", "(IIII)V" },
	{ "glStencilFunc", "(III)V" },
	{ "glStencilMask", "(I)V" },
	{ "glStencilOp", "(III)V" },
	{ "glTexImage2D", "(IIIIIIIILjava/nio/Buffer;)V" },
	{ "glTexParameterf", "(IIF)V" },
	{ "glTexSubImage2D", "(IIIIIIIILjava/nio/Buffer;)V" },
	{ "glViewport", "(IIII)V" },
	{ "glAttachShader", "(II)V" },
	{ "glBindAttribLocation", "(IILjava/lang/String;)V" },
	{ "glBindBuffer", "(II)V" },
	{ "glBindFramebuffer", "(II)V" },
	{ "glBindRenderbuffer", "(II)V" },
	{ "glBlendColor", "(FFFF)V" },
	{ "glBlendEquation", "(I)V" },
	{ "glBlendEquationSeparate", "(II)V" },
	{ "glBlendFuncSeparate", "(IIII)V" },
	{ "glBufferData", "(IILjava/nio/Buffer;I)V" },
	{ "glBufferSubData", "(IIILjava/nio/Buffer;)V" },
	{ "glCheckFramebufferStatus", "(I)I" },
	{ "glCompileShader", "(I)V" },
	{ "glCreateProgram", "()I" },
	{ "glCreateShader", "(I)I" },
	{ "glDeleteBuffer", "(I)V" },
	{ "glDeleteBuffers", "(ILjava/nio/IntBuffer;)V" },
	{ "glDeleteFramebuffer", "(I)V" },
	{ "glDeleteFramebuffers", "(ILjava/nio/IntBuffer;)V" },
	{ "glDeleteProgram", "(I)V" },
	{ "glDeleteRenderbuffer", "(I)V" },
	{ "glDeleteRenderbuffers", "(ILjava/nio/IntBuffer;)V" },
	{ "glDeleteShader", "(I)V" },
	{ "glDetachShader", "(II)V" },
	{ "glDisableVertexAttribArray", "(I)V" },
	{ "glDrawElements", "(IIII)V" },
	{ "glEnableVertexAttribArray", "(I)V" },
	{ "glFramebufferRenderbuffer", "(IIII)V" },
	{ "glFramebufferTexture2D", "(IIIII)V" },
	{ "glGenBuffer", "()I" },
	{ "glGenBuffers", "(ILjava/nio/IntBuffer;)V" },
	{ "glGenerateMipmap", "(I)V" },
	{ "glGenFramebuffer", "()I" },
	{ "glGenFramebuffers", "(ILjava/nio/IntBuffer;)V" },
	{ "glGenRenderbuffer", "()I" },
	{ "glGenRenderbuffers", "(ILjava/nio/IntBuffer;)V" },
	{ "glGetActiveAttrib", "(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)Ljava/lang/String;" },
	{ "glGetActiveUniform", "(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)Ljava/lang/String;" },
	{ "glGetAttachedShaders", "(IILjava/nio/Buffer;Ljava/nio/IntBuffer;)V" },
	{ "glGetAttribLocation", "(ILjava/lang/String;)I" },
	{ "glGetBooleanv", "(ILjava/nio/Buffer;)V" },
	{ "glGetBufferParameteriv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetFloatv", "(ILjava/nio/FloatBuffer;)V" },
	{ "glGetFramebufferAttachmentParameteriv", "(IIILjava/nio/IntBuffer;)V" },
	{ "glGetProgramiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetProgramInfoLog", "(I)Ljava/lang/String;" },
	{ "glGetRenderbufferParameteriv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetShaderiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetShaderInfoLog", "(I)Ljava/lang/String;" },
	{ "glGetShaderPrecisionFormat", "(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)V" },
	{ "glGetTexParameterfv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glGetTexParameteriv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetUniformfv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glGetUniformiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetUniformLocation", "(ILjava/lang/String;)I" },
	{ "glGetVertexAttribfv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glGetVertexAttribiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetVertexAttribPointerv", "(IILjava/nio/Buffer;)V" },
	{ "glIsBuffer", "(I)Z" },
	{ "glIsEnabled", "(I)Z" },
	{ "glIsFramebuffer", "(I)Z" },
	{ "glIsProgram", "(I)Z" },
	{ "glIsRenderbuffer", "(I)Z" },
	{ "glIsShader", "(I)Z" },
	{ "glIsTexture", "(I)Z" },
	{ "glLinkProgram", "(I)V" },
	{ "glReleaseShaderCompiler", "()V" },
	{ "glRenderbufferStorage", "(IIII)V" },
	{ "glSampleCoverage", "(FZ)V" },
	{ "glShaderBinary", "(ILjava/nio/IntBuffer;ILjava/nio/Buffer;I)V" },
	{ "glShaderSource", "(ILjava/lang/String;)V" },
	{ "glStencilFuncSeparate", "(IIII)V" },
	{ "glStencilMaskSeparate", "(II)V" },
	{ "glStencilOpSeparate", "(IIII)V" },
	{ "glTexParameterfv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glTexParameteri", "(III)V" },
	{ "glTexParameteriv", "(IILjava/nio/IntBuffer;)V" },
	{ "glUniform1f", "(IF)V" },
	{ "glUniform1fv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glUniform1fv", "(II[FI)V" },
	{ "glUniform1i", "(II)V" },
	{ "glUniform1iv", "(IILjava/nio/IntBuffer;)V" },
	{ "glUniform1iv", "(II[II)V" },
	{ "glUniform2f", "(IFF)V" },
	{ "glUniform2fv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glUniform2fv", "(II[FI)V" },
	{ "glUniform2i", "(III)V" },
	{ "glUniform2iv", "(IILjava/nio/IntBuffer;)V" },
	{ "glUniform2iv", "(II[II)V" },
	{ "glUniform3f", "(IFFF)V" },
	{ "glUniform3fv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glUniform3fv", "(II[FI)V" },
	{ "glUniform3i", "(IIII)V" },
	{ "glUniform3iv", "(IILjava/nio/IntBuffer;)V" },
	{ "glUniform3iv", "(II[II)V" },
	{ "glUniform4f", "(IFFFF)V" },
	{ "glUniform4fv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glUniform4fv", "(II[FI)V" },
	{ "glUniform4i", "(IIIII)V" },
	{ "glUniform4iv", "(IILjava/nio/IntBuffer;)V" },
	{ "glUniform4iv", "(II[II)V" },
	{ "glUniformMatrix2fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glUniformMatrix2fv", "(IIZ[FI)V" },
	{ "glUniformMatrix3fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glUniformMatrix3fv", "(IIZ[FI)V" },
	{ "glUniformMatrix4fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glUniformMatrix4fv", "(IIZ[FI)V" },
	{ "glUseProgram", "(I)V" },
	{ "glValidateProgram", "(I)V" },
	{ "glVertexAttrib1f", "(IF)V" },
	{ "glVertexAttrib1fv", "(ILjava/nio/FloatBuffer;)V" },
	{ "glVertexAttrib2f", "(IFF)V" },
	{ "glVertexAttrib2fv", "(ILjava/nio/FloatBuffer;)V" },
	{ "glVertexAttrib3f", "(IFFF)V" },
	{ "glVertexAttrib3fv", "(ILjava/nio/FloatBuffer;)V" },
	{ "glVertexAttrib4f", "(IFFFF)V" },
	{ "glVertexAttrib4fv", "(ILjava/nio/FloatBuffer;)V" },
	{ "glVertexAttribPointer", "(IIIZILjava/nio/Buffer;)V" },
	{ "glVertexAttribPointer", "(IIIZII)V" },
	{ "glReadBuffer", "(I)V" },
	{ "glDrawRangeElements", "(IIIIILjava/nio/Buffer;)V" },
	{ "glDrawRangeElements", "(IIIIII)V" },
	{ "glTexImage2D", "(IIIIIIIII)V" },
	{ "glTexImage3D", "(IIIIIIIIILjava/nio/Buffer;)V" },
	{ "glTexImage3D", "(IIIIIIIIII)V" },
	{ "glTexSubImage2D", "(IIIIIIIII)V" },
	{ "glTexSubImage3D", "(IIIIIIIIIILjava/nio/Buffer;)V" },
	{ "glTexSubImage3D", "(IIIIIIIIIII)V" },
	{ "glCopyTexSubImage3D", "(IIIIIIIII)V" },
	{ "glGenQueries", "(I[II)V" },
	{ "glGenQueries", "(ILjava/nio/IntBuffer;)V" },
	{ "glDeleteQueries", "(I[II)V" },
	{ "glDeleteQueries", "(ILjava/nio/IntBuffer;)V" },
	{ "glIsQuery", "(I)Z" },
	{ "glBeginQuery", "(II)V" },
	{ "glEndQuery", "(I)V" },
	{ "glGetQueryiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetQueryObjectuiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glUnmapBuffer", "(I)Z" },
	{ "glGetBufferPointerv", "(II)Ljava/nio/Buffer;" },
	{ "glDrawBuffers", "(ILjava/nio/IntBuffer;)V" },
	{ "glUniformMatrix2x3fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glUniformMatrix3x2fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glUniformMatrix2x4fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glUniformMatrix4x2fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glUniformMatrix3x4fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glUniformMatrix4x3fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glBlitFramebuffer", "(IIIIIIIIII)V" },
	{ "glRenderbufferStorageMultisample", "(IIIII)V" },
	{ "glFramebufferTextureLayer", "(IIIII)V" },
	{ "glMapBufferRange", "(IIII)Ljava/nio/Buffer;" },
	{ "glFlushMappedBufferRange", "(III)V" },
	{ "glBindVertexArray", "(I)V" },
	{ "glDeleteVertexArrays", "(I[II)V" },
	{ "glDeleteVertexArrays", "(ILjava/nio/IntBuffer;)V" },
	{ "glGenVertexArrays", "(I[II)V" },
	{ "glGenVertexArrays", "(ILjava/nio/IntBuffer;)V" },
	{ "glIsVertexArray", "(I)Z" },
	{ "glBeginTransformFeedback", "(I)V" },
	{ "glEndTransformFeedback", "()V" },
	{ "glBindBufferRange", "(IIIII)V" },
	{ "glBindBufferBase", "(III)V" },
	{ "glTransformFeedbackVaryings", "(I[Ljava/lang/String;I)V" },
	{ "glVertexAttribIPointer", "(IIIII)V" },
	{ "glGetVertexAttribIiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetVertexAttribIuiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glVertexAttribI4i", "(IIIII)V" },
	{ "glVertexAttribI4ui", "(IIIII)V" },
	{ "glGetUniformuiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetFragDataLocation", "(ILjava/lang/String;)I" },
	{ "glUniform1uiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glUniform3uiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glUniform4uiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glClearBufferiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glClearBufferuiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glClearBufferfv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glClearBufferfi", "(IIFI)V" },
	{ "glGetStringi", "(II)Ljava/lang/String;" },
	{ "glCopyBufferSubData", "(IIIII)V" },
	{ "glGetUniformIndices", "(I[Ljava/lang/String;Ljava/nio/IntBuffer;)V" },
	{ "glGetActiveUniformsiv", "(IILjava/nio/IntBuffer;ILjava/nio/IntBuffer;)V" },
	{ "glGetUniformBlockIndex", "(ILjava/lang/String;)I" },
	{ "glGetActiveUniformBlockiv", "(IIILjava/nio/IntBuffer;)V" },
	{ "glGetActiveUniformBlockName", "(IILjava/nio/Buffer;Ljava/nio/Buffer;)V" },
	{ "glGetActiveUniformBlockName", "(II)Ljava/lang/String;" },
	{ "glUniformBlockBinding", "(III)V" },
	{ "glDrawArraysInstanced", "(IIII)V" },
	{ "glDrawElementsInstanced", "(IIIII)V" },
	{ "glGetInteger64v", "(ILjava/nio/LongBuffer;)V" },
	{ "glGetBufferParameteri64v", "(IILjava/nio/LongBuffer;)V" },
	{ "glGenSamplers", "(I[II)V" },
	{ "glGenSamplers", "(ILjava/nio/IntBuffer;)V" },
	{ "glDeleteSamplers", "(I[II)V" },
	{ "glDeleteSamplers", "(ILjava/nio/IntBuffer;)V" },
	{ "glIsSampler", "(I)Z" },
	{ "glBindSampler", "(II)V" },
	{ "glSamplerParameteri", "(III)V" },
	{ "glSamplerParameteriv", "(IILjava/nio/IntBuffer;)V" },
	{ "glSamplerParameterf", "(IIF)V" },
	{ "glSamplerParameterfv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glGetSamplerParameteriv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetSamplerParameterfv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glVertexAttribDivisor", "(II)V" },
	{ "glBindTransformFeedback", "(II)V" },
	{ "glDeleteTransformFeedbacks", "(I[II)V" },
	{ "glDeleteTransformFeedbacks", "(ILjava/nio/IntBuffer;)V" },
	{ "glGenTransformFeedbacks", "(I[II)V" },
	{ "glGenTransformFeedbacks", "(ILjava/nio/IntBuffer;)V" },
	{ "glIsTransformFeedback", "(I)Z" },
	{ "glPauseTransformFeedback", "()V" },
	{ "glResumeTransformFeedback", "()V" },
	{ "glProgramParameteri", "(III)V" },
	{ "glInvalidateFramebuffer", "(IILjava/nio/IntBuffer;)V" },
	{ "glInvalidateSubFramebuffer", "(IILjava/nio/IntBuffer;IIII)V" },
	{ "glDispatchCompute", "(III)V" },
	{ "glDispatchComputeIndirect", "(J)V" },
	{ "glDrawArraysIndirect", "(IJ)V" },
	{ "glDrawElementsIndirect", "(IIJ)V" },
	{ "glFramebufferParameteri", "(III)V" },
	{ "glGetFramebufferParameteriv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetProgramInterfaceiv", "(IIILjava/nio/IntBuffer;)V" },
	{ "glGetProgramResourceIndex", "(IILjava/lang/String;)I" },
	{ "glGetProgramResourceName", "(III)Ljava/lang/String;" },
	{ "glGetProgramResourceiv", "(IIILjava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;)V" },
	{ "glGetProgramResourceLocation", "(IILjava/lang/String;)I" },
	{ "glUseProgramStages", "(III)V" },
	{ "glActiveShaderProgram", "(II)V" },
	{ "glCreateShaderProgramv", "(I[Ljava/lang/String;)I" },
	{ "glBindProgramPipeline", "(I)V" },
	{ "glDeleteProgramPipelines", "(ILjava/nio/IntBuffer;)V" },
	{ "glGenProgramPipelines", "(ILjava/nio/IntBuffer;)V" },
	{ "glIsProgramPipeline", "(I)Z" },
	{ "glGetProgramPipelineiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glProgramUniform1i", "(III)V" },
	{ "glProgramUniform2i", "(IIII)V" },
	{ "glProgramUniform3i", "(IIIII)V" },
	{ "glProgramUniform4i", "(IIIIII)V" },
	{ "glProgramUniform1ui", "(III)V" },
	{ "glProgramUniform2ui", "(IIII)V" },
	{ "glProgramUniform3ui", "(IIIII)V" },
	{ "glProgramUniform4ui", "(IIIIII)V" },
	{ "glProgramUniform1f", "(IIF)V" },
	{ "glProgramUniform2f", "(IIFF)V" },
	{ "glProgramUniform3f", "(IIFFF)V" },
	{ "glProgramUniform4f", "(IIFFFF)V" },
	{ "glProgramUniform1iv", "(IILjava/nio/IntBuffer;)V" },
	{ "glProgramUniform2iv", "(IILjava/nio/IntBuffer;)V" },
	{ "glProgramUniform3iv", "(IILjava/nio/IntBuffer;)V" },
	{ "glProgramUniform4iv", "(IILjava/nio/IntBuffer;)V" },
	{ "glProgramUniform1uiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glProgramUniform2uiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glProgramUniform3uiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glProgramUniform4uiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glProgramUniform1fv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glProgramUniform2fv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glProgramUniform3fv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glProgramUniform4fv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glProgramUniformMatrix2fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glProgramUniformMatrix3fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glProgramUniformMatrix4fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glProgramUniformMatrix2x3fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glProgramUniformMatrix3x2fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glProgramUniformMatrix2x4fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glProgramUniformMatrix4x2fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glProgramUniformMatrix3x4fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glProgramUniformMatrix4x3fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glValidateProgramPipeline", "(I)V" },
	{ "glGetProgramPipelineInfoLog", "(I)Ljava/lang/String;" },
	{ "glBindImageTexture", "(IIIZIII)V" },
	{ "glGetBooleani_v", "(IILjava/nio/IntBuffer;)V" },
	{ "glMemoryBarrier", "(I)V" },
	{ "glMemoryBarrierByRegion", "(I)V" },
	{ "glTexStorage2DMultisample", "(IIIIIZ)V" },
	{ "glGetMultisamplefv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glSampleMaski", "(II)V" },
	{ "glGetTexLevelParameteriv", "(IIILjava/nio/IntBuffer;)V" },
	{ "glGetTexLevelParameterfv", "(IIILjava/nio/FloatBuffer;)V" },
	{ "glBindVertexBuffer", "(IIJI)V" },
	{ "glVertexAttribFormat", "(IIIZI)V" },
	{ "glVertexAttribIFormat", "(IIII)V" },
	{ "glVertexAttribBinding", "(II)V" },
	{ "glVertexBindingDivisor", "(II)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_graphics_GL30, };

static FieldMetadata fields[] {
	{ "GL_VERTEX_SHADER_BIT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_VERTEX_SHADER_BIT, "I", 25 },
	{ "GL_FRAGMENT_SHADER_BIT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_FRAGMENT_SHADER_BIT, "I", 25 },
	{ "GL_COMPUTE_SHADER_BIT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_COMPUTE_SHADER_BIT, "I", 25 },
	{ "GL_ALL_SHADER_BITS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_ALL_SHADER_BITS, "I", 25 },
	{ "GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT, "I", 25 },
	{ "GL_ELEMENT_ARRAY_BARRIER_BIT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_ELEMENT_ARRAY_BARRIER_BIT, "I", 25 },
	{ "GL_UNIFORM_BARRIER_BIT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_UNIFORM_BARRIER_BIT, "I", 25 },
	{ "GL_TEXTURE_FETCH_BARRIER_BIT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_FETCH_BARRIER_BIT, "I", 25 },
	{ "GL_SHADER_IMAGE_ACCESS_BARRIER_BIT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_SHADER_IMAGE_ACCESS_BARRIER_BIT, "I", 25 },
	{ "GL_COMMAND_BARRIER_BIT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_COMMAND_BARRIER_BIT, "I", 25 },
	{ "GL_PIXEL_BUFFER_BARRIER_BIT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_PIXEL_BUFFER_BARRIER_BIT, "I", 25 },
	{ "GL_TEXTURE_UPDATE_BARRIER_BIT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_UPDATE_BARRIER_BIT, "I", 25 },
	{ "GL_BUFFER_UPDATE_BARRIER_BIT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_BUFFER_UPDATE_BARRIER_BIT, "I", 25 },
	{ "GL_FRAMEBUFFER_BARRIER_BIT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_FRAMEBUFFER_BARRIER_BIT, "I", 25 },
	{ "GL_TRANSFORM_FEEDBACK_BARRIER_BIT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TRANSFORM_FEEDBACK_BARRIER_BIT, "I", 25 },
	{ "GL_ATOMIC_COUNTER_BARRIER_BIT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_ATOMIC_COUNTER_BARRIER_BIT, "I", 25 },
	{ "GL_SHADER_STORAGE_BARRIER_BIT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_SHADER_STORAGE_BARRIER_BIT, "I", 25 },
	{ "GL_ALL_BARRIER_BITS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_ALL_BARRIER_BITS, "I", 25 },
	{ "GL_TEXTURE_WIDTH", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_WIDTH, "I", 25 },
	{ "GL_TEXTURE_HEIGHT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_HEIGHT, "I", 25 },
	{ "GL_TEXTURE_INTERNAL_FORMAT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_INTERNAL_FORMAT, "I", 25 },
	{ "GL_STENCIL_INDEX", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_STENCIL_INDEX, "I", 25 },
	{ "GL_TEXTURE_RED_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_RED_SIZE, "I", 25 },
	{ "GL_TEXTURE_GREEN_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_GREEN_SIZE, "I", 25 },
	{ "GL_TEXTURE_BLUE_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_BLUE_SIZE, "I", 25 },
	{ "GL_TEXTURE_ALPHA_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_ALPHA_SIZE, "I", 25 },
	{ "GL_TEXTURE_DEPTH", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_DEPTH, "I", 25 },
	{ "GL_PROGRAM_SEPARABLE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_PROGRAM_SEPARABLE, "I", 25 },
	{ "GL_ACTIVE_PROGRAM", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_ACTIVE_PROGRAM, "I", 25 },
	{ "GL_PROGRAM_PIPELINE_BINDING", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_PROGRAM_PIPELINE_BINDING, "I", 25 },
	{ "GL_MAX_COMPUTE_SHARED_MEMORY_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_SHARED_MEMORY_SIZE, "I", 25 },
	{ "GL_MAX_COMPUTE_UNIFORM_COMPONENTS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_UNIFORM_COMPONENTS, "I", 25 },
	{ "GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS, "I", 25 },
	{ "GL_MAX_COMPUTE_ATOMIC_COUNTERS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_ATOMIC_COUNTERS, "I", 25 },
	{ "GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS, "I", 25 },
	{ "GL_COMPUTE_WORK_GROUP_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_COMPUTE_WORK_GROUP_SIZE, "I", 25 },
	{ "GL_MAX_UNIFORM_LOCATIONS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_UNIFORM_LOCATIONS, "I", 25 },
	{ "GL_VERTEX_ATTRIB_BINDING", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_VERTEX_ATTRIB_BINDING, "I", 25 },
	{ "GL_VERTEX_ATTRIB_RELATIVE_OFFSET", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_VERTEX_ATTRIB_RELATIVE_OFFSET, "I", 25 },
	{ "GL_VERTEX_BINDING_DIVISOR", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_VERTEX_BINDING_DIVISOR, "I", 25 },
	{ "GL_VERTEX_BINDING_OFFSET", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_VERTEX_BINDING_OFFSET, "I", 25 },
	{ "GL_VERTEX_BINDING_STRIDE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_VERTEX_BINDING_STRIDE, "I", 25 },
	{ "GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET, "I", 25 },
	{ "GL_MAX_VERTEX_ATTRIB_BINDINGS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_VERTEX_ATTRIB_BINDINGS, "I", 25 },
	{ "GL_MAX_VERTEX_ATTRIB_STRIDE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_VERTEX_ATTRIB_STRIDE, "I", 25 },
	{ "GL_TEXTURE_COMPRESSED", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_COMPRESSED, "I", 25 },
	{ "GL_TEXTURE_DEPTH_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_DEPTH_SIZE, "I", 25 },
	{ "GL_READ_ONLY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_READ_ONLY, "I", 25 },
	{ "GL_WRITE_ONLY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_WRITE_ONLY, "I", 25 },
	{ "GL_READ_WRITE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_READ_WRITE, "I", 25 },
	{ "GL_TEXTURE_STENCIL_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_STENCIL_SIZE, "I", 25 },
	{ "GL_TEXTURE_RED_TYPE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_RED_TYPE, "I", 25 },
	{ "GL_TEXTURE_GREEN_TYPE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_GREEN_TYPE, "I", 25 },
	{ "GL_TEXTURE_BLUE_TYPE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_BLUE_TYPE, "I", 25 },
	{ "GL_TEXTURE_ALPHA_TYPE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_ALPHA_TYPE, "I", 25 },
	{ "GL_TEXTURE_DEPTH_TYPE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_DEPTH_TYPE, "I", 25 },
	{ "GL_TEXTURE_SHARED_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_SHARED_SIZE, "I", 25 },
	{ "GL_SAMPLE_POSITION", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_SAMPLE_POSITION, "I", 25 },
	{ "GL_SAMPLE_MASK", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_SAMPLE_MASK, "I", 25 },
	{ "GL_SAMPLE_MASK_VALUE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_SAMPLE_MASK_VALUE, "I", 25 },
	{ "GL_MAX_SAMPLE_MASK_WORDS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_SAMPLE_MASK_WORDS, "I", 25 },
	{ "GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET, "I", 25 },
	{ "GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET, "I", 25 },
	{ "GL_MAX_IMAGE_UNITS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_IMAGE_UNITS, "I", 25 },
	{ "GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES, "I", 25 },
	{ "GL_IMAGE_BINDING_NAME", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_BINDING_NAME, "I", 25 },
	{ "GL_IMAGE_BINDING_LEVEL", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_BINDING_LEVEL, "I", 25 },
	{ "GL_IMAGE_BINDING_LAYERED", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_BINDING_LAYERED, "I", 25 },
	{ "GL_IMAGE_BINDING_LAYER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_BINDING_LAYER, "I", 25 },
	{ "GL_IMAGE_BINDING_ACCESS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_BINDING_ACCESS, "I", 25 },
	{ "GL_DRAW_INDIRECT_BUFFER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_DRAW_INDIRECT_BUFFER, "I", 25 },
	{ "GL_DRAW_INDIRECT_BUFFER_BINDING", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_DRAW_INDIRECT_BUFFER_BINDING, "I", 25 },
	{ "GL_VERTEX_BINDING_BUFFER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_VERTEX_BINDING_BUFFER, "I", 25 },
	{ "GL_IMAGE_2D", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_2D, "I", 25 },
	{ "GL_IMAGE_3D", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_3D, "I", 25 },
	{ "GL_IMAGE_CUBE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_CUBE, "I", 25 },
	{ "GL_IMAGE_2D_ARRAY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_2D_ARRAY, "I", 25 },
	{ "GL_INT_IMAGE_2D", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_INT_IMAGE_2D, "I", 25 },
	{ "GL_INT_IMAGE_3D", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_INT_IMAGE_3D, "I", 25 },
	{ "GL_INT_IMAGE_CUBE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_INT_IMAGE_CUBE, "I", 25 },
	{ "GL_INT_IMAGE_2D_ARRAY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_INT_IMAGE_2D_ARRAY, "I", 25 },
	{ "GL_UNSIGNED_INT_IMAGE_2D", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_UNSIGNED_INT_IMAGE_2D, "I", 25 },
	{ "GL_UNSIGNED_INT_IMAGE_3D", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_UNSIGNED_INT_IMAGE_3D, "I", 25 },
	{ "GL_UNSIGNED_INT_IMAGE_CUBE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_UNSIGNED_INT_IMAGE_CUBE, "I", 25 },
	{ "GL_UNSIGNED_INT_IMAGE_2D_ARRAY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_UNSIGNED_INT_IMAGE_2D_ARRAY, "I", 25 },
	{ "GL_IMAGE_BINDING_FORMAT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_BINDING_FORMAT, "I", 25 },
	{ "GL_IMAGE_FORMAT_COMPATIBILITY_TYPE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_FORMAT_COMPATIBILITY_TYPE, "I", 25 },
	{ "GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE, "I", 25 },
	{ "GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS, "I", 25 },
	{ "GL_MAX_VERTEX_IMAGE_UNIFORMS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_VERTEX_IMAGE_UNIFORMS, "I", 25 },
	{ "GL_MAX_FRAGMENT_IMAGE_UNIFORMS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_FRAGMENT_IMAGE_UNIFORMS, "I", 25 },
	{ "GL_MAX_COMBINED_IMAGE_UNIFORMS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMBINED_IMAGE_UNIFORMS, "I", 25 },
	{ "GL_SHADER_STORAGE_BUFFER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_SHADER_STORAGE_BUFFER, "I", 25 },
	{ "GL_SHADER_STORAGE_BUFFER_BINDING", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_SHADER_STORAGE_BUFFER_BINDING, "I", 25 },
	{ "GL_SHADER_STORAGE_BUFFER_START", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_SHADER_STORAGE_BUFFER_START, "I", 25 },
	{ "GL_SHADER_STORAGE_BUFFER_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_SHADER_STORAGE_BUFFER_SIZE, "I", 25 },
	{ "GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS, "I", 25 },
	{ "GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS, "I", 25 },
	{ "GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS, "I", 25 },
	{ "GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS, "I", 25 },
	{ "GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS, "I", 25 },
	{ "GL_MAX_SHADER_STORAGE_BLOCK_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_SHADER_STORAGE_BLOCK_SIZE, "I", 25 },
	{ "GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT, "I", 25 },
	{ "GL_DEPTH_STENCIL_TEXTURE_MODE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_DEPTH_STENCIL_TEXTURE_MODE, "I", 25 },
	{ "GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS, "I", 25 },
	{ "GL_DISPATCH_INDIRECT_BUFFER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_DISPATCH_INDIRECT_BUFFER, "I", 25 },
	{ "GL_DISPATCH_INDIRECT_BUFFER_BINDING", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_DISPATCH_INDIRECT_BUFFER_BINDING, "I", 25 },
	{ "GL_TEXTURE_2D_MULTISAMPLE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_2D_MULTISAMPLE, "I", 25 },
	{ "GL_TEXTURE_BINDING_2D_MULTISAMPLE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_BINDING_2D_MULTISAMPLE, "I", 25 },
	{ "GL_TEXTURE_SAMPLES", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_SAMPLES, "I", 25 },
	{ "GL_TEXTURE_FIXED_SAMPLE_LOCATIONS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TEXTURE_FIXED_SAMPLE_LOCATIONS, "I", 25 },
	{ "GL_SAMPLER_2D_MULTISAMPLE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_SAMPLER_2D_MULTISAMPLE, "I", 25 },
	{ "GL_INT_SAMPLER_2D_MULTISAMPLE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_INT_SAMPLER_2D_MULTISAMPLE, "I", 25 },
	{ "GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE, "I", 25 },
	{ "GL_MAX_COLOR_TEXTURE_SAMPLES", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COLOR_TEXTURE_SAMPLES, "I", 25 },
	{ "GL_MAX_DEPTH_TEXTURE_SAMPLES", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_DEPTH_TEXTURE_SAMPLES, "I", 25 },
	{ "GL_MAX_INTEGER_SAMPLES", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_INTEGER_SAMPLES, "I", 25 },
	{ "GL_COMPUTE_SHADER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_COMPUTE_SHADER, "I", 25 },
	{ "GL_MAX_COMPUTE_UNIFORM_BLOCKS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_UNIFORM_BLOCKS, "I", 25 },
	{ "GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS, "I", 25 },
	{ "GL_MAX_COMPUTE_IMAGE_UNIFORMS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_IMAGE_UNIFORMS, "I", 25 },
	{ "GL_MAX_COMPUTE_WORK_GROUP_COUNT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_WORK_GROUP_COUNT, "I", 25 },
	{ "GL_MAX_COMPUTE_WORK_GROUP_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMPUTE_WORK_GROUP_SIZE, "I", 25 },
	{ "GL_ATOMIC_COUNTER_BUFFER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_ATOMIC_COUNTER_BUFFER, "I", 25 },
	{ "GL_ATOMIC_COUNTER_BUFFER_BINDING", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_ATOMIC_COUNTER_BUFFER_BINDING, "I", 25 },
	{ "GL_ATOMIC_COUNTER_BUFFER_START", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_ATOMIC_COUNTER_BUFFER_START, "I", 25 },
	{ "GL_ATOMIC_COUNTER_BUFFER_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_ATOMIC_COUNTER_BUFFER_SIZE, "I", 25 },
	{ "GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS, "I", 25 },
	{ "GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS, "I", 25 },
	{ "GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS, "I", 25 },
	{ "GL_MAX_VERTEX_ATOMIC_COUNTERS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_VERTEX_ATOMIC_COUNTERS, "I", 25 },
	{ "GL_MAX_FRAGMENT_ATOMIC_COUNTERS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_FRAGMENT_ATOMIC_COUNTERS, "I", 25 },
	{ "GL_MAX_COMBINED_ATOMIC_COUNTERS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_COMBINED_ATOMIC_COUNTERS, "I", 25 },
	{ "GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE, "I", 25 },
	{ "GL_ACTIVE_ATOMIC_COUNTER_BUFFERS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_ACTIVE_ATOMIC_COUNTER_BUFFERS, "I", 25 },
	{ "GL_UNSIGNED_INT_ATOMIC_COUNTER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_UNSIGNED_INT_ATOMIC_COUNTER, "I", 25 },
	{ "GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS, "I", 25 },
	{ "GL_UNIFORM", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_UNIFORM, "I", 25 },
	{ "GL_UNIFORM_BLOCK", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_UNIFORM_BLOCK, "I", 25 },
	{ "GL_PROGRAM_INPUT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_PROGRAM_INPUT, "I", 25 },
	{ "GL_PROGRAM_OUTPUT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_PROGRAM_OUTPUT, "I", 25 },
	{ "GL_BUFFER_VARIABLE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_BUFFER_VARIABLE, "I", 25 },
	{ "GL_SHADER_STORAGE_BLOCK", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_SHADER_STORAGE_BLOCK, "I", 25 },
	{ "GL_TRANSFORM_FEEDBACK_VARYING", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TRANSFORM_FEEDBACK_VARYING, "I", 25 },
	{ "GL_ACTIVE_RESOURCES", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_ACTIVE_RESOURCES, "I", 25 },
	{ "GL_MAX_NAME_LENGTH", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_NAME_LENGTH, "I", 25 },
	{ "GL_MAX_NUM_ACTIVE_VARIABLES", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_NUM_ACTIVE_VARIABLES, "I", 25 },
	{ "GL_NAME_LENGTH", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_NAME_LENGTH, "I", 25 },
	{ "GL_TYPE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TYPE, "I", 25 },
	{ "GL_ARRAY_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_ARRAY_SIZE, "I", 25 },
	{ "GL_OFFSET", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_OFFSET, "I", 25 },
	{ "GL_BLOCK_INDEX", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_BLOCK_INDEX, "I", 25 },
	{ "GL_ARRAY_STRIDE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_ARRAY_STRIDE, "I", 25 },
	{ "GL_MATRIX_STRIDE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MATRIX_STRIDE, "I", 25 },
	{ "GL_IS_ROW_MAJOR", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_IS_ROW_MAJOR, "I", 25 },
	{ "GL_ATOMIC_COUNTER_BUFFER_INDEX", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_ATOMIC_COUNTER_BUFFER_INDEX, "I", 25 },
	{ "GL_BUFFER_BINDING", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_BUFFER_BINDING, "I", 25 },
	{ "GL_BUFFER_DATA_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_BUFFER_DATA_SIZE, "I", 25 },
	{ "GL_NUM_ACTIVE_VARIABLES", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_NUM_ACTIVE_VARIABLES, "I", 25 },
	{ "GL_ACTIVE_VARIABLES", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_ACTIVE_VARIABLES, "I", 25 },
	{ "GL_REFERENCED_BY_VERTEX_SHADER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_REFERENCED_BY_VERTEX_SHADER, "I", 25 },
	{ "GL_REFERENCED_BY_FRAGMENT_SHADER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_REFERENCED_BY_FRAGMENT_SHADER, "I", 25 },
	{ "GL_REFERENCED_BY_COMPUTE_SHADER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_REFERENCED_BY_COMPUTE_SHADER, "I", 25 },
	{ "GL_TOP_LEVEL_ARRAY_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TOP_LEVEL_ARRAY_SIZE, "I", 25 },
	{ "GL_TOP_LEVEL_ARRAY_STRIDE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_TOP_LEVEL_ARRAY_STRIDE, "I", 25 },
	{ "GL_LOCATION", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_LOCATION, "I", 25 },
	{ "GL_FRAMEBUFFER_DEFAULT_WIDTH", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_FRAMEBUFFER_DEFAULT_WIDTH, "I", 25 },
	{ "GL_FRAMEBUFFER_DEFAULT_HEIGHT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_FRAMEBUFFER_DEFAULT_HEIGHT, "I", 25 },
	{ "GL_FRAMEBUFFER_DEFAULT_SAMPLES", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_FRAMEBUFFER_DEFAULT_SAMPLES, "I", 25 },
	{ "GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS, "I", 25 },
	{ "GL_MAX_FRAMEBUFFER_WIDTH", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_FRAMEBUFFER_WIDTH, "I", 25 },
	{ "GL_MAX_FRAMEBUFFER_HEIGHT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_FRAMEBUFFER_HEIGHT, "I", 25 },
	{ "GL_MAX_FRAMEBUFFER_SAMPLES", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL31_GL_MAX_FRAMEBUFFER_SAMPLES, "I", 25 },
};

static MethodMetadata methods[] {
	{ "glDispatchCompute", 0, INDEX_com_badlogic_gdx_graphics_GL31_glDispatchCompute_int_int_int, "(III)V", 1025 },
	{ "glDispatchComputeIndirect", 0, INDEX_com_badlogic_gdx_graphics_GL31_glDispatchComputeIndirect_long, "(J)V", 1025 },
	{ "glDrawArraysIndirect", 0, INDEX_com_badlogic_gdx_graphics_GL31_glDrawArraysIndirect_int_long, "(IJ)V", 1025 },
	{ "glDrawElementsIndirect", 0, INDEX_com_badlogic_gdx_graphics_GL31_glDrawElementsIndirect_int_int_long, "(IIJ)V", 1025 },
	{ "glFramebufferParameteri", 0, INDEX_com_badlogic_gdx_graphics_GL31_glFramebufferParameteri_int_int_int, "(III)V", 1025 },
	{ "glGetFramebufferParameteriv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glGetFramebufferParameteriv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glGetProgramInterfaceiv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glGetProgramInterfaceiv_int_int_int_java_nio_IntBuffer, "(IIILjava/nio/IntBuffer;)V", 1025 },
	{ "glGetProgramResourceIndex", 0, INDEX_com_badlogic_gdx_graphics_GL31_glGetProgramResourceIndex_int_int_java_lang_String_R_int, "(IILjava/lang/String;)I", 1025 },
	{ "glGetProgramResourceName", 0, INDEX_com_badlogic_gdx_graphics_GL31_glGetProgramResourceName_int_int_int_R_java_lang_String, "(III)Ljava/lang/String;", 1025 },
	{ "glGetProgramResourceiv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glGetProgramResourceiv_int_int_int_java_nio_IntBuffer_java_nio_IntBuffer_java_nio_IntBuffer, "(IIILjava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;)V", 1025 },
	{ "glGetProgramResourceLocation", 0, INDEX_com_badlogic_gdx_graphics_GL31_glGetProgramResourceLocation_int_int_java_lang_String_R_int, "(IILjava/lang/String;)I", 1025 },
	{ "glUseProgramStages", 0, INDEX_com_badlogic_gdx_graphics_GL31_glUseProgramStages_int_int_int, "(III)V", 1025 },
	{ "glActiveShaderProgram", 0, INDEX_com_badlogic_gdx_graphics_GL31_glActiveShaderProgram_int_int, "(II)V", 1025 },
	{ "glCreateShaderProgramv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glCreateShaderProgramv_int_Array1_java_lang_String_R_int, "(I[Ljava/lang/String;)I", 1025 },
	{ "glBindProgramPipeline", 0, INDEX_com_badlogic_gdx_graphics_GL31_glBindProgramPipeline_int, "(I)V", 1025 },
	{ "glDeleteProgramPipelines", 0, INDEX_com_badlogic_gdx_graphics_GL31_glDeleteProgramPipelines_int_java_nio_IntBuffer, "(ILjava/nio/IntBuffer;)V", 1025 },
	{ "glGenProgramPipelines", 0, INDEX_com_badlogic_gdx_graphics_GL31_glGenProgramPipelines_int_java_nio_IntBuffer, "(ILjava/nio/IntBuffer;)V", 1025 },
	{ "glIsProgramPipeline", 0, INDEX_com_badlogic_gdx_graphics_GL31_glIsProgramPipeline_int_R_boolean, "(I)Z", 1025 },
	{ "glGetProgramPipelineiv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glGetProgramPipelineiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glProgramUniform1i", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniform1i_int_int_int, "(III)V", 1025 },
	{ "glProgramUniform2i", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniform2i_int_int_int_int, "(IIII)V", 1025 },
	{ "glProgramUniform3i", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniform3i_int_int_int_int_int, "(IIIII)V", 1025 },
	{ "glProgramUniform4i", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniform4i_int_int_int_int_int_int, "(IIIIII)V", 1025 },
	{ "glProgramUniform1ui", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniform1ui_int_int_int, "(III)V", 1025 },
	{ "glProgramUniform2ui", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniform2ui_int_int_int_int, "(IIII)V", 1025 },
	{ "glProgramUniform3ui", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniform3ui_int_int_int_int_int, "(IIIII)V", 1025 },
	{ "glProgramUniform4ui", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniform4ui_int_int_int_int_int_int, "(IIIIII)V", 1025 },
	{ "glProgramUniform1f", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniform1f_int_int_float, "(IIF)V", 1025 },
	{ "glProgramUniform2f", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniform2f_int_int_float_float, "(IIFF)V", 1025 },
	{ "glProgramUniform3f", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniform3f_int_int_float_float_float, "(IIFFF)V", 1025 },
	{ "glProgramUniform4f", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniform4f_int_int_float_float_float_float, "(IIFFFF)V", 1025 },
	{ "glProgramUniform1iv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniform1iv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glProgramUniform2iv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniform2iv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glProgramUniform3iv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniform3iv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glProgramUniform4iv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniform4iv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glProgramUniform1uiv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniform1uiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glProgramUniform2uiv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniform2uiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glProgramUniform3uiv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniform3uiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glProgramUniform4uiv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniform4uiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glProgramUniform1fv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniform1fv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1025 },
	{ "glProgramUniform2fv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniform2fv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1025 },
	{ "glProgramUniform3fv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniform3fv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1025 },
	{ "glProgramUniform4fv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniform4fv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1025 },
	{ "glProgramUniformMatrix2fv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniformMatrix2fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1025 },
	{ "glProgramUniformMatrix3fv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniformMatrix3fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1025 },
	{ "glProgramUniformMatrix4fv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniformMatrix4fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1025 },
	{ "glProgramUniformMatrix2x3fv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniformMatrix2x3fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1025 },
	{ "glProgramUniformMatrix3x2fv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniformMatrix3x2fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1025 },
	{ "glProgramUniformMatrix2x4fv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniformMatrix2x4fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1025 },
	{ "glProgramUniformMatrix4x2fv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniformMatrix4x2fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1025 },
	{ "glProgramUniformMatrix3x4fv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniformMatrix3x4fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1025 },
	{ "glProgramUniformMatrix4x3fv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glProgramUniformMatrix4x3fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1025 },
	{ "glValidateProgramPipeline", 0, INDEX_com_badlogic_gdx_graphics_GL31_glValidateProgramPipeline_int, "(I)V", 1025 },
	{ "glGetProgramPipelineInfoLog", 0, INDEX_com_badlogic_gdx_graphics_GL31_glGetProgramPipelineInfoLog_int_R_java_lang_String, "(I)Ljava/lang/String;", 1025 },
	{ "glBindImageTexture", 0, INDEX_com_badlogic_gdx_graphics_GL31_glBindImageTexture_int_int_int_boolean_int_int_int, "(IIIZIII)V", 1025 },
	{ "glGetBooleani_v", 0, INDEX_com_badlogic_gdx_graphics_GL31_glGetBooleani_v_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glMemoryBarrier", 0, INDEX_com_badlogic_gdx_graphics_GL31_glMemoryBarrier_int, "(I)V", 1025 },
	{ "glMemoryBarrierByRegion", 0, INDEX_com_badlogic_gdx_graphics_GL31_glMemoryBarrierByRegion_int, "(I)V", 1025 },
	{ "glTexStorage2DMultisample", 0, INDEX_com_badlogic_gdx_graphics_GL31_glTexStorage2DMultisample_int_int_int_int_int_boolean, "(IIIIIZ)V", 1025 },
	{ "glGetMultisamplefv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glGetMultisamplefv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1025 },
	{ "glSampleMaski", 0, INDEX_com_badlogic_gdx_graphics_GL31_glSampleMaski_int_int, "(II)V", 1025 },
	{ "glGetTexLevelParameteriv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glGetTexLevelParameteriv_int_int_int_java_nio_IntBuffer, "(IIILjava/nio/IntBuffer;)V", 1025 },
	{ "glGetTexLevelParameterfv", 0, INDEX_com_badlogic_gdx_graphics_GL31_glGetTexLevelParameterfv_int_int_int_java_nio_FloatBuffer, "(IIILjava/nio/FloatBuffer;)V", 1025 },
	{ "glBindVertexBuffer", 0, INDEX_com_badlogic_gdx_graphics_GL31_glBindVertexBuffer_int_int_long_int, "(IIJI)V", 1025 },
	{ "glVertexAttribFormat", 0, INDEX_com_badlogic_gdx_graphics_GL31_glVertexAttribFormat_int_int_int_boolean_int, "(IIIZI)V", 1025 },
	{ "glVertexAttribIFormat", 0, INDEX_com_badlogic_gdx_graphics_GL31_glVertexAttribIFormat_int_int_int_int, "(IIII)V", 1025 },
	{ "glVertexAttribBinding", 0, INDEX_com_badlogic_gdx_graphics_GL31_glVertexAttribBinding_int_int, "(II)V", 1025 },
	{ "glVertexBindingDivisor", 0, INDEX_com_badlogic_gdx_graphics_GL31_glVertexBindingDivisor_int_int, "(II)V", 1025 },
};

Class class_com_badlogic_gdx_graphics_GL31{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/GL31",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_GL31),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_GL31,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_GL31,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_GL31,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 173,
		.nativeFields = (intptr_t) fields,
		.methodCount = 68,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 336,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_GL31 = registerClass(&class_com_badlogic_gdx_graphics_GL31);

}

