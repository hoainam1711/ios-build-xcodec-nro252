#include "com/badlogic/gdx/graphics/GL32.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/FloatBuffer.h"
#include "com/badlogic/gdx/graphics/GL32.h"
#include "com/badlogic/gdx/graphics/GL31.h"
#include "com/badlogic/gdx/graphics/GL32_DebugProc.h"
#include "java/nio/IntBuffer.h"
#include "java/nio/Buffer.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "com/badlogic/gdx/graphics/GL30.h"

extern "C" {

jint SF_com_badlogic_gdx_graphics_GL32_GL_CONTEXT_FLAG_DEBUG_BIT;
jint SF_com_badlogic_gdx_graphics_GL32_GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT;
jint SF_com_badlogic_gdx_graphics_GL32_GL_GEOMETRY_SHADER_BIT;
jint SF_com_badlogic_gdx_graphics_GL32_GL_TESS_CONTROL_SHADER_BIT;
jint SF_com_badlogic_gdx_graphics_GL32_GL_TESS_EVALUATION_SHADER_BIT;
jint SF_com_badlogic_gdx_graphics_GL32_GL_QUADS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_LINES_ADJACENCY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_LINE_STRIP_ADJACENCY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_TRIANGLES_ADJACENCY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_TRIANGLE_STRIP_ADJACENCY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_PATCHES;
jint SF_com_badlogic_gdx_graphics_GL32_GL_STACK_OVERFLOW;
jint SF_com_badlogic_gdx_graphics_GL32_GL_STACK_UNDERFLOW;
jint SF_com_badlogic_gdx_graphics_GL32_GL_CONTEXT_LOST;
jint SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BORDER_COLOR;
jint SF_com_badlogic_gdx_graphics_GL32_GL_VERTEX_ARRAY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_CLAMP_TO_BORDER;
jint SF_com_badlogic_gdx_graphics_GL32_GL_CONTEXT_FLAGS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_OUTPUT_SYNCHRONOUS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_CALLBACK_FUNCTION;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_CALLBACK_USER_PARAM;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SOURCE_API;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SOURCE_WINDOW_SYSTEM;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SOURCE_SHADER_COMPILER;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SOURCE_THIRD_PARTY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SOURCE_APPLICATION;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SOURCE_OTHER;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_ERROR;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_PORTABILITY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_PERFORMANCE;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_OTHER;
jint SF_com_badlogic_gdx_graphics_GL32_GL_LOSE_CONTEXT_ON_RESET;
jint SF_com_badlogic_gdx_graphics_GL32_GL_GUILTY_CONTEXT_RESET;
jint SF_com_badlogic_gdx_graphics_GL32_GL_INNOCENT_CONTEXT_RESET;
jint SF_com_badlogic_gdx_graphics_GL32_GL_UNKNOWN_CONTEXT_RESET;
jint SF_com_badlogic_gdx_graphics_GL32_GL_RESET_NOTIFICATION_STRATEGY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_LAYER_PROVOKING_VERTEX;
jint SF_com_badlogic_gdx_graphics_GL32_GL_UNDEFINED_VERTEX;
jint SF_com_badlogic_gdx_graphics_GL32_GL_NO_RESET_NOTIFICATION;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_MARKER;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_PUSH_GROUP;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_POP_GROUP;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SEVERITY_NOTIFICATION;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_DEBUG_GROUP_STACK_DEPTH;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_GROUP_STACK_DEPTH;
jint SF_com_badlogic_gdx_graphics_GL32_GL_BUFFER;
jint SF_com_badlogic_gdx_graphics_GL32_GL_SHADER;
jint SF_com_badlogic_gdx_graphics_GL32_GL_PROGRAM;
jint SF_com_badlogic_gdx_graphics_GL32_GL_QUERY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_PROGRAM_PIPELINE;
jint SF_com_badlogic_gdx_graphics_GL32_GL_SAMPLER;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_LABEL_LENGTH;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_INPUT_COMPONENTS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_GEOMETRY_SHADER_INVOCATIONS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_GEOMETRY_VERTICES_OUT;
jint SF_com_badlogic_gdx_graphics_GL32_GL_GEOMETRY_INPUT_TYPE;
jint SF_com_badlogic_gdx_graphics_GL32_GL_GEOMETRY_OUTPUT_TYPE;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_UNIFORM_BLOCKS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BUFFER;
jint SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BUFFER_BINDING;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TEXTURE_BUFFER_SIZE;
jint SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BINDING_BUFFER;
jint SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BUFFER_DATA_STORE_BINDING;
jint SF_com_badlogic_gdx_graphics_GL32_GL_SAMPLE_SHADING;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MIN_SAMPLE_SHADING_VALUE;
jint SF_com_badlogic_gdx_graphics_GL32_GL_PRIMITIVES_GENERATED;
jint SF_com_badlogic_gdx_graphics_GL32_GL_FRAMEBUFFER_ATTACHMENT_LAYERED;
jint SF_com_badlogic_gdx_graphics_GL32_GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_SAMPLER_BUFFER;
jint SF_com_badlogic_gdx_graphics_GL32_GL_INT_SAMPLER_BUFFER;
jint SF_com_badlogic_gdx_graphics_GL32_GL_UNSIGNED_INT_SAMPLER_BUFFER;
jint SF_com_badlogic_gdx_graphics_GL32_GL_GEOMETRY_SHADER;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_UNIFORM_COMPONENTS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_OUTPUT_VERTICES;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_FIRST_VERTEX_CONVENTION;
jint SF_com_badlogic_gdx_graphics_GL32_GL_LAST_VERTEX_CONVENTION;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_SHADER_INVOCATIONS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MIN_FRAGMENT_INTERPOLATION_OFFSET;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_FRAGMENT_INTERPOLATION_OFFSET;
jint SF_com_badlogic_gdx_graphics_GL32_GL_FRAGMENT_INTERPOLATION_OFFSET_BITS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_PATCH_VERTICES;
jint SF_com_badlogic_gdx_graphics_GL32_GL_TESS_CONTROL_OUTPUT_VERTICES;
jint SF_com_badlogic_gdx_graphics_GL32_GL_TESS_GEN_MODE;
jint SF_com_badlogic_gdx_graphics_GL32_GL_TESS_GEN_SPACING;
jint SF_com_badlogic_gdx_graphics_GL32_GL_TESS_GEN_VERTEX_ORDER;
jint SF_com_badlogic_gdx_graphics_GL32_GL_TESS_GEN_POINT_MODE;
jint SF_com_badlogic_gdx_graphics_GL32_GL_ISOLINES;
jint SF_com_badlogic_gdx_graphics_GL32_GL_FRACTIONAL_ODD;
jint SF_com_badlogic_gdx_graphics_GL32_GL_FRACTIONAL_EVEN;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_PATCH_VERTICES;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_GEN_LEVEL;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_PATCH_COMPONENTS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_TESS_EVALUATION_SHADER;
jint SF_com_badlogic_gdx_graphics_GL32_GL_TESS_CONTROL_SHADER;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_CUBE_MAP_ARRAY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BINDING_CUBE_MAP_ARRAY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_SAMPLER_CUBE_MAP_ARRAY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW;
jint SF_com_badlogic_gdx_graphics_GL32_GL_INT_SAMPLER_CUBE_MAP_ARRAY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_IMAGE_BUFFER;
jint SF_com_badlogic_gdx_graphics_GL32_GL_IMAGE_CUBE_MAP_ARRAY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_INT_IMAGE_BUFFER;
jint SF_com_badlogic_gdx_graphics_GL32_GL_INT_IMAGE_CUBE_MAP_ARRAY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_UNSIGNED_INT_IMAGE_BUFFER;
jint SF_com_badlogic_gdx_graphics_GL32_GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_IMAGE_UNIFORMS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_2D_MULTISAMPLE_ARRAY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_SAMPLER_2D_MULTISAMPLE_ARRAY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_INPUT_COMPONENTS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_OUTPUT_COMPONENTS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_DEBUG_MESSAGE_LENGTH;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_DEBUG_LOGGED_MESSAGES;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_LOGGED_MESSAGES;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SEVERITY_HIGH;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SEVERITY_MEDIUM;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SEVERITY_LOW;
jint SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BUFFER_OFFSET;
jint SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BUFFER_SIZE;
jint SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MULTIPLY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_SCREEN;
jint SF_com_badlogic_gdx_graphics_GL32_GL_OVERLAY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DARKEN;
jint SF_com_badlogic_gdx_graphics_GL32_GL_LIGHTEN;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COLORDODGE;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COLORBURN;
jint SF_com_badlogic_gdx_graphics_GL32_GL_HARDLIGHT;
jint SF_com_badlogic_gdx_graphics_GL32_GL_SOFTLIGHT;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DIFFERENCE;
jint SF_com_badlogic_gdx_graphics_GL32_GL_EXCLUSION;
jint SF_com_badlogic_gdx_graphics_GL32_GL_HSL_HUE;
jint SF_com_badlogic_gdx_graphics_GL32_GL_HSL_SATURATION;
jint SF_com_badlogic_gdx_graphics_GL32_GL_HSL_COLOR;
jint SF_com_badlogic_gdx_graphics_GL32_GL_HSL_LUMINOSITY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_PRIMITIVE_BOUNDING_BOX;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_ATOMIC_COUNTERS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_OUTPUT;
jint SF_com_badlogic_gdx_graphics_GL32_GL_IS_PER_PATCH;
jint SF_com_badlogic_gdx_graphics_GL32_GL_REFERENCED_BY_TESS_CONTROL_SHADER;
jint SF_com_badlogic_gdx_graphics_GL32_GL_REFERENCED_BY_TESS_EVALUATION_SHADER;
jint SF_com_badlogic_gdx_graphics_GL32_GL_REFERENCED_BY_GEOMETRY_SHADER;
jint SF_com_badlogic_gdx_graphics_GL32_GL_FRAMEBUFFER_DEFAULT_LAYERS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MAX_FRAMEBUFFER_LAYERS;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MULTISAMPLE_LINE_WIDTH_RANGE;
jint SF_com_badlogic_gdx_graphics_GL32_GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_4x4;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_5x4;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_5x5;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_6x5;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_6x6;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_8x5;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_8x6;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_8x8;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_10x5;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_10x6;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_10x8;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_10x10;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_12x10;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_12x12;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10;
jint SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12;

void mark_com_badlogic_gdx_graphics_GL32(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_GL32 *) object;
}

void clinit_com_badlogic_gdx_graphics_GL32(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_graphics_GL32_GL_CONTEXT_FLAG_DEBUG_BIT = jint(2);
	SF_com_badlogic_gdx_graphics_GL32_GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT = jint(4);
	SF_com_badlogic_gdx_graphics_GL32_GL_GEOMETRY_SHADER_BIT = jint(4);
	SF_com_badlogic_gdx_graphics_GL32_GL_TESS_CONTROL_SHADER_BIT = jint(8);
	SF_com_badlogic_gdx_graphics_GL32_GL_TESS_EVALUATION_SHADER_BIT = jint(16);
	SF_com_badlogic_gdx_graphics_GL32_GL_QUADS = jint(7);
	SF_com_badlogic_gdx_graphics_GL32_GL_LINES_ADJACENCY = jint(10);
	SF_com_badlogic_gdx_graphics_GL32_GL_LINE_STRIP_ADJACENCY = jint(11);
	SF_com_badlogic_gdx_graphics_GL32_GL_TRIANGLES_ADJACENCY = jint(12);
	SF_com_badlogic_gdx_graphics_GL32_GL_TRIANGLE_STRIP_ADJACENCY = jint(13);
	SF_com_badlogic_gdx_graphics_GL32_GL_PATCHES = jint(14);
	SF_com_badlogic_gdx_graphics_GL32_GL_STACK_OVERFLOW = jint(1283);
	SF_com_badlogic_gdx_graphics_GL32_GL_STACK_UNDERFLOW = jint(1284);
	SF_com_badlogic_gdx_graphics_GL32_GL_CONTEXT_LOST = jint(1287);
	SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BORDER_COLOR = jint(4100);
	SF_com_badlogic_gdx_graphics_GL32_GL_VERTEX_ARRAY = jint(32884);
	SF_com_badlogic_gdx_graphics_GL32_GL_CLAMP_TO_BORDER = jint(33069);
	SF_com_badlogic_gdx_graphics_GL32_GL_CONTEXT_FLAGS = jint(33310);
	SF_com_badlogic_gdx_graphics_GL32_GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED = jint(33313);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_OUTPUT_SYNCHRONOUS = jint(33346);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH = jint(33347);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_CALLBACK_FUNCTION = jint(33348);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_CALLBACK_USER_PARAM = jint(33349);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SOURCE_API = jint(33350);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SOURCE_WINDOW_SYSTEM = jint(33351);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SOURCE_SHADER_COMPILER = jint(33352);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SOURCE_THIRD_PARTY = jint(33353);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SOURCE_APPLICATION = jint(33354);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SOURCE_OTHER = jint(33355);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_ERROR = jint(33356);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR = jint(33357);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR = jint(33358);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_PORTABILITY = jint(33359);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_PERFORMANCE = jint(33360);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_OTHER = jint(33361);
	SF_com_badlogic_gdx_graphics_GL32_GL_LOSE_CONTEXT_ON_RESET = jint(33362);
	SF_com_badlogic_gdx_graphics_GL32_GL_GUILTY_CONTEXT_RESET = jint(33363);
	SF_com_badlogic_gdx_graphics_GL32_GL_INNOCENT_CONTEXT_RESET = jint(33364);
	SF_com_badlogic_gdx_graphics_GL32_GL_UNKNOWN_CONTEXT_RESET = jint(33365);
	SF_com_badlogic_gdx_graphics_GL32_GL_RESET_NOTIFICATION_STRATEGY = jint(33366);
	SF_com_badlogic_gdx_graphics_GL32_GL_LAYER_PROVOKING_VERTEX = jint(33374);
	SF_com_badlogic_gdx_graphics_GL32_GL_UNDEFINED_VERTEX = jint(33376);
	SF_com_badlogic_gdx_graphics_GL32_GL_NO_RESET_NOTIFICATION = jint(33377);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_MARKER = jint(33384);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_PUSH_GROUP = jint(33385);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_POP_GROUP = jint(33386);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SEVERITY_NOTIFICATION = jint(33387);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_DEBUG_GROUP_STACK_DEPTH = jint(33388);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_GROUP_STACK_DEPTH = jint(33389);
	SF_com_badlogic_gdx_graphics_GL32_GL_BUFFER = jint(33504);
	SF_com_badlogic_gdx_graphics_GL32_GL_SHADER = jint(33505);
	SF_com_badlogic_gdx_graphics_GL32_GL_PROGRAM = jint(33506);
	SF_com_badlogic_gdx_graphics_GL32_GL_QUERY = jint(33507);
	SF_com_badlogic_gdx_graphics_GL32_GL_PROGRAM_PIPELINE = jint(33508);
	SF_com_badlogic_gdx_graphics_GL32_GL_SAMPLER = jint(33510);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_LABEL_LENGTH = jint(33512);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_INPUT_COMPONENTS = jint(34924);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS = jint(34925);
	SF_com_badlogic_gdx_graphics_GL32_GL_GEOMETRY_SHADER_INVOCATIONS = jint(34943);
	SF_com_badlogic_gdx_graphics_GL32_GL_GEOMETRY_VERTICES_OUT = jint(35094);
	SF_com_badlogic_gdx_graphics_GL32_GL_GEOMETRY_INPUT_TYPE = jint(35095);
	SF_com_badlogic_gdx_graphics_GL32_GL_GEOMETRY_OUTPUT_TYPE = jint(35096);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_UNIFORM_BLOCKS = jint(35372);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS = jint(35378);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS = jint(35881);
	SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BUFFER = jint(35882);
	SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BUFFER_BINDING = jint(35882);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TEXTURE_BUFFER_SIZE = jint(35883);
	SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BINDING_BUFFER = jint(35884);
	SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BUFFER_DATA_STORE_BINDING = jint(35885);
	SF_com_badlogic_gdx_graphics_GL32_GL_SAMPLE_SHADING = jint(35894);
	SF_com_badlogic_gdx_graphics_GL32_GL_MIN_SAMPLE_SHADING_VALUE = jint(35895);
	SF_com_badlogic_gdx_graphics_GL32_GL_PRIMITIVES_GENERATED = jint(35975);
	SF_com_badlogic_gdx_graphics_GL32_GL_FRAMEBUFFER_ATTACHMENT_LAYERED = jint(36263);
	SF_com_badlogic_gdx_graphics_GL32_GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS = jint(36264);
	SF_com_badlogic_gdx_graphics_GL32_GL_SAMPLER_BUFFER = jint(36290);
	SF_com_badlogic_gdx_graphics_GL32_GL_INT_SAMPLER_BUFFER = jint(36304);
	SF_com_badlogic_gdx_graphics_GL32_GL_UNSIGNED_INT_SAMPLER_BUFFER = jint(36312);
	SF_com_badlogic_gdx_graphics_GL32_GL_GEOMETRY_SHADER = jint(36313);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_UNIFORM_COMPONENTS = jint(36319);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_OUTPUT_VERTICES = jint(36320);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS = jint(36321);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS = jint(36382);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS = jint(36383);
	SF_com_badlogic_gdx_graphics_GL32_GL_FIRST_VERTEX_CONVENTION = jint(36429);
	SF_com_badlogic_gdx_graphics_GL32_GL_LAST_VERTEX_CONVENTION = jint(36430);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_SHADER_INVOCATIONS = jint(36442);
	SF_com_badlogic_gdx_graphics_GL32_GL_MIN_FRAGMENT_INTERPOLATION_OFFSET = jint(36443);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_FRAGMENT_INTERPOLATION_OFFSET = jint(36444);
	SF_com_badlogic_gdx_graphics_GL32_GL_FRAGMENT_INTERPOLATION_OFFSET_BITS = jint(36445);
	SF_com_badlogic_gdx_graphics_GL32_GL_PATCH_VERTICES = jint(36466);
	SF_com_badlogic_gdx_graphics_GL32_GL_TESS_CONTROL_OUTPUT_VERTICES = jint(36469);
	SF_com_badlogic_gdx_graphics_GL32_GL_TESS_GEN_MODE = jint(36470);
	SF_com_badlogic_gdx_graphics_GL32_GL_TESS_GEN_SPACING = jint(36471);
	SF_com_badlogic_gdx_graphics_GL32_GL_TESS_GEN_VERTEX_ORDER = jint(36472);
	SF_com_badlogic_gdx_graphics_GL32_GL_TESS_GEN_POINT_MODE = jint(36473);
	SF_com_badlogic_gdx_graphics_GL32_GL_ISOLINES = jint(36474);
	SF_com_badlogic_gdx_graphics_GL32_GL_FRACTIONAL_ODD = jint(36475);
	SF_com_badlogic_gdx_graphics_GL32_GL_FRACTIONAL_EVEN = jint(36476);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_PATCH_VERTICES = jint(36477);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_GEN_LEVEL = jint(36478);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS = jint(36479);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS = jint(36480);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS = jint(36481);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS = jint(36482);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS = jint(36483);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_PATCH_COMPONENTS = jint(36484);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS = jint(36485);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS = jint(36486);
	SF_com_badlogic_gdx_graphics_GL32_GL_TESS_EVALUATION_SHADER = jint(36487);
	SF_com_badlogic_gdx_graphics_GL32_GL_TESS_CONTROL_SHADER = jint(36488);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS = jint(36489);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS = jint(36490);
	SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_CUBE_MAP_ARRAY = jint(36873);
	SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BINDING_CUBE_MAP_ARRAY = jint(36874);
	SF_com_badlogic_gdx_graphics_GL32_GL_SAMPLER_CUBE_MAP_ARRAY = jint(36876);
	SF_com_badlogic_gdx_graphics_GL32_GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW = jint(36877);
	SF_com_badlogic_gdx_graphics_GL32_GL_INT_SAMPLER_CUBE_MAP_ARRAY = jint(36878);
	SF_com_badlogic_gdx_graphics_GL32_GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY = jint(36879);
	SF_com_badlogic_gdx_graphics_GL32_GL_IMAGE_BUFFER = jint(36945);
	SF_com_badlogic_gdx_graphics_GL32_GL_IMAGE_CUBE_MAP_ARRAY = jint(36948);
	SF_com_badlogic_gdx_graphics_GL32_GL_INT_IMAGE_BUFFER = jint(36956);
	SF_com_badlogic_gdx_graphics_GL32_GL_INT_IMAGE_CUBE_MAP_ARRAY = jint(36959);
	SF_com_badlogic_gdx_graphics_GL32_GL_UNSIGNED_INT_IMAGE_BUFFER = jint(36967);
	SF_com_badlogic_gdx_graphics_GL32_GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY = jint(36970);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS = jint(37067);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS = jint(37068);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_IMAGE_UNIFORMS = jint(37069);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS = jint(37079);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS = jint(37080);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS = jint(37081);
	SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_2D_MULTISAMPLE_ARRAY = jint(37122);
	SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY = jint(37125);
	SF_com_badlogic_gdx_graphics_GL32_GL_SAMPLER_2D_MULTISAMPLE_ARRAY = jint(37131);
	SF_com_badlogic_gdx_graphics_GL32_GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = jint(37132);
	SF_com_badlogic_gdx_graphics_GL32_GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = jint(37133);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_INPUT_COMPONENTS = jint(37155);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_OUTPUT_COMPONENTS = jint(37156);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_DEBUG_MESSAGE_LENGTH = jint(37187);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_DEBUG_LOGGED_MESSAGES = jint(37188);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_LOGGED_MESSAGES = jint(37189);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SEVERITY_HIGH = jint(37190);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SEVERITY_MEDIUM = jint(37191);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SEVERITY_LOW = jint(37192);
	SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BUFFER_OFFSET = jint(37277);
	SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BUFFER_SIZE = jint(37278);
	SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT = jint(37279);
	SF_com_badlogic_gdx_graphics_GL32_GL_MULTIPLY = jint(37524);
	SF_com_badlogic_gdx_graphics_GL32_GL_SCREEN = jint(37525);
	SF_com_badlogic_gdx_graphics_GL32_GL_OVERLAY = jint(37526);
	SF_com_badlogic_gdx_graphics_GL32_GL_DARKEN = jint(37527);
	SF_com_badlogic_gdx_graphics_GL32_GL_LIGHTEN = jint(37528);
	SF_com_badlogic_gdx_graphics_GL32_GL_COLORDODGE = jint(37529);
	SF_com_badlogic_gdx_graphics_GL32_GL_COLORBURN = jint(37530);
	SF_com_badlogic_gdx_graphics_GL32_GL_HARDLIGHT = jint(37531);
	SF_com_badlogic_gdx_graphics_GL32_GL_SOFTLIGHT = jint(37532);
	SF_com_badlogic_gdx_graphics_GL32_GL_DIFFERENCE = jint(37534);
	SF_com_badlogic_gdx_graphics_GL32_GL_EXCLUSION = jint(37536);
	SF_com_badlogic_gdx_graphics_GL32_GL_HSL_HUE = jint(37549);
	SF_com_badlogic_gdx_graphics_GL32_GL_HSL_SATURATION = jint(37550);
	SF_com_badlogic_gdx_graphics_GL32_GL_HSL_COLOR = jint(37551);
	SF_com_badlogic_gdx_graphics_GL32_GL_HSL_LUMINOSITY = jint(37552);
	SF_com_badlogic_gdx_graphics_GL32_GL_PRIMITIVE_BOUNDING_BOX = jint(37566);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS = jint(37581);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS = jint(37582);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS = jint(37583);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS = jint(37587);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS = jint(37588);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_ATOMIC_COUNTERS = jint(37589);
	SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_OUTPUT = jint(37600);
	SF_com_badlogic_gdx_graphics_GL32_GL_IS_PER_PATCH = jint(37607);
	SF_com_badlogic_gdx_graphics_GL32_GL_REFERENCED_BY_TESS_CONTROL_SHADER = jint(37639);
	SF_com_badlogic_gdx_graphics_GL32_GL_REFERENCED_BY_TESS_EVALUATION_SHADER = jint(37640);
	SF_com_badlogic_gdx_graphics_GL32_GL_REFERENCED_BY_GEOMETRY_SHADER = jint(37641);
	SF_com_badlogic_gdx_graphics_GL32_GL_FRAMEBUFFER_DEFAULT_LAYERS = jint(37650);
	SF_com_badlogic_gdx_graphics_GL32_GL_MAX_FRAMEBUFFER_LAYERS = jint(37655);
	SF_com_badlogic_gdx_graphics_GL32_GL_MULTISAMPLE_LINE_WIDTH_RANGE = jint(37761);
	SF_com_badlogic_gdx_graphics_GL32_GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY = jint(37762);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_4x4 = jint(37808);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_5x4 = jint(37809);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_5x5 = jint(37810);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_6x5 = jint(37811);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_6x6 = jint(37812);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_8x5 = jint(37813);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_8x6 = jint(37814);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_8x8 = jint(37815);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_10x5 = jint(37816);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_10x6 = jint(37817);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_10x8 = jint(37818);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_10x10 = jint(37819);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_12x10 = jint(37820);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_12x12 = jint(37821);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4 = jint(37840);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4 = jint(37841);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5 = jint(37842);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5 = jint(37843);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6 = jint(37844);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5 = jint(37845);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6 = jint(37846);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8 = jint(37847);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5 = jint(37848);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6 = jint(37849);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8 = jint(37850);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10 = jint(37851);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10 = jint(37852);
	SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12 = jint(37853);
}

void *vtable_com_badlogic_gdx_graphics_GL32[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "glBlendBarrier", "()V" },
	{ "glCopyImageSubData", "(IIIIIIIIIIIIIII)V" },
	{ "glDebugMessageControl", "(IIILjava/nio/IntBuffer;Z)V" },
	{ "glDebugMessageInsert", "(IIIILjava/lang/String;)V" },
	{ "glDebugMessageCallback", "(Lcom/badlogic/gdx/graphics/GL32$DebugProc;)V" },
	{ "glGetDebugMessageLog", "(ILjava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/ByteBuffer;)I" },
	{ "glPushDebugGroup", "(IILjava/lang/String;)V" },
	{ "glPopDebugGroup", "()V" },
	{ "glObjectLabel", "(IILjava/lang/String;)V" },
	{ "glGetObjectLabel", "(II)Ljava/lang/String;" },
	{ "glGetPointerv", "(I)J" },
	{ "glEnablei", "(II)V" },
	{ "glDisablei", "(II)V" },
	{ "glBlendEquationi", "(II)V" },
	{ "glBlendEquationSeparatei", "(III)V" },
	{ "glBlendFunci", "(III)V" },
	{ "glBlendFuncSeparatei", "(IIIII)V" },
	{ "glColorMaski", "(IZZZZ)V" },
	{ "glIsEnabledi", "(II)Z" },
	{ "glDrawElementsBaseVertex", "(IIILjava/nio/Buffer;I)V" },
	{ "glDrawRangeElementsBaseVertex", "(IIIIILjava/nio/Buffer;I)V" },
	{ "glDrawElementsInstancedBaseVertex", "(IIILjava/nio/Buffer;II)V" },
	{ "glDrawElementsInstancedBaseVertex", "(IIIIII)V" },
	{ "glFramebufferTexture", "(IIII)V" },
	{ "glGetGraphicsResetStatus", "()I" },
	{ "glReadnPixels", "(IIIIIIILjava/nio/Buffer;)V" },
	{ "glGetnUniformfv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glGetnUniformiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetnUniformuiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glMinSampleShading", "(F)V" },
	{ "glPatchParameteri", "(II)V" },
	{ "glTexParameterIiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glTexParameterIuiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetTexParameterIiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetTexParameterIuiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glSamplerParameterIiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glSamplerParameterIuiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetSamplerParameterIiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetSamplerParameterIuiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glTexBuffer", "(III)V" },
	{ "glTexBufferRange", "(IIIII)V" },
	{ "glTexStorage3DMultisample", "(IIIIIIZ)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_graphics_GL31, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_GL32$DebugProc,
};

static FieldMetadata fields[] {
	{ "GL_CONTEXT_FLAG_DEBUG_BIT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_CONTEXT_FLAG_DEBUG_BIT, "I", 25 },
	{ "GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT, "I", 25 },
	{ "GL_GEOMETRY_SHADER_BIT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_GEOMETRY_SHADER_BIT, "I", 25 },
	{ "GL_TESS_CONTROL_SHADER_BIT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_TESS_CONTROL_SHADER_BIT, "I", 25 },
	{ "GL_TESS_EVALUATION_SHADER_BIT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_TESS_EVALUATION_SHADER_BIT, "I", 25 },
	{ "GL_QUADS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_QUADS, "I", 25 },
	{ "GL_LINES_ADJACENCY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_LINES_ADJACENCY, "I", 25 },
	{ "GL_LINE_STRIP_ADJACENCY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_LINE_STRIP_ADJACENCY, "I", 25 },
	{ "GL_TRIANGLES_ADJACENCY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_TRIANGLES_ADJACENCY, "I", 25 },
	{ "GL_TRIANGLE_STRIP_ADJACENCY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_TRIANGLE_STRIP_ADJACENCY, "I", 25 },
	{ "GL_PATCHES", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_PATCHES, "I", 25 },
	{ "GL_STACK_OVERFLOW", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_STACK_OVERFLOW, "I", 25 },
	{ "GL_STACK_UNDERFLOW", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_STACK_UNDERFLOW, "I", 25 },
	{ "GL_CONTEXT_LOST", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_CONTEXT_LOST, "I", 25 },
	{ "GL_TEXTURE_BORDER_COLOR", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BORDER_COLOR, "I", 25 },
	{ "GL_VERTEX_ARRAY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_VERTEX_ARRAY, "I", 25 },
	{ "GL_CLAMP_TO_BORDER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_CLAMP_TO_BORDER, "I", 25 },
	{ "GL_CONTEXT_FLAGS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_CONTEXT_FLAGS, "I", 25 },
	{ "GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED, "I", 25 },
	{ "GL_DEBUG_OUTPUT_SYNCHRONOUS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_OUTPUT_SYNCHRONOUS, "I", 25 },
	{ "GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH, "I", 25 },
	{ "GL_DEBUG_CALLBACK_FUNCTION", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_CALLBACK_FUNCTION, "I", 25 },
	{ "GL_DEBUG_CALLBACK_USER_PARAM", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_CALLBACK_USER_PARAM, "I", 25 },
	{ "GL_DEBUG_SOURCE_API", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SOURCE_API, "I", 25 },
	{ "GL_DEBUG_SOURCE_WINDOW_SYSTEM", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SOURCE_WINDOW_SYSTEM, "I", 25 },
	{ "GL_DEBUG_SOURCE_SHADER_COMPILER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SOURCE_SHADER_COMPILER, "I", 25 },
	{ "GL_DEBUG_SOURCE_THIRD_PARTY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SOURCE_THIRD_PARTY, "I", 25 },
	{ "GL_DEBUG_SOURCE_APPLICATION", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SOURCE_APPLICATION, "I", 25 },
	{ "GL_DEBUG_SOURCE_OTHER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SOURCE_OTHER, "I", 25 },
	{ "GL_DEBUG_TYPE_ERROR", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_ERROR, "I", 25 },
	{ "GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR, "I", 25 },
	{ "GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR, "I", 25 },
	{ "GL_DEBUG_TYPE_PORTABILITY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_PORTABILITY, "I", 25 },
	{ "GL_DEBUG_TYPE_PERFORMANCE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_PERFORMANCE, "I", 25 },
	{ "GL_DEBUG_TYPE_OTHER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_OTHER, "I", 25 },
	{ "GL_LOSE_CONTEXT_ON_RESET", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_LOSE_CONTEXT_ON_RESET, "I", 25 },
	{ "GL_GUILTY_CONTEXT_RESET", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_GUILTY_CONTEXT_RESET, "I", 25 },
	{ "GL_INNOCENT_CONTEXT_RESET", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_INNOCENT_CONTEXT_RESET, "I", 25 },
	{ "GL_UNKNOWN_CONTEXT_RESET", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_UNKNOWN_CONTEXT_RESET, "I", 25 },
	{ "GL_RESET_NOTIFICATION_STRATEGY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_RESET_NOTIFICATION_STRATEGY, "I", 25 },
	{ "GL_LAYER_PROVOKING_VERTEX", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_LAYER_PROVOKING_VERTEX, "I", 25 },
	{ "GL_UNDEFINED_VERTEX", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_UNDEFINED_VERTEX, "I", 25 },
	{ "GL_NO_RESET_NOTIFICATION", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_NO_RESET_NOTIFICATION, "I", 25 },
	{ "GL_DEBUG_TYPE_MARKER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_MARKER, "I", 25 },
	{ "GL_DEBUG_TYPE_PUSH_GROUP", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_PUSH_GROUP, "I", 25 },
	{ "GL_DEBUG_TYPE_POP_GROUP", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_TYPE_POP_GROUP, "I", 25 },
	{ "GL_DEBUG_SEVERITY_NOTIFICATION", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SEVERITY_NOTIFICATION, "I", 25 },
	{ "GL_MAX_DEBUG_GROUP_STACK_DEPTH", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_DEBUG_GROUP_STACK_DEPTH, "I", 25 },
	{ "GL_DEBUG_GROUP_STACK_DEPTH", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_GROUP_STACK_DEPTH, "I", 25 },
	{ "GL_BUFFER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_BUFFER, "I", 25 },
	{ "GL_SHADER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_SHADER, "I", 25 },
	{ "GL_PROGRAM", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_PROGRAM, "I", 25 },
	{ "GL_QUERY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_QUERY, "I", 25 },
	{ "GL_PROGRAM_PIPELINE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_PROGRAM_PIPELINE, "I", 25 },
	{ "GL_SAMPLER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_SAMPLER, "I", 25 },
	{ "GL_MAX_LABEL_LENGTH", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_LABEL_LENGTH, "I", 25 },
	{ "GL_MAX_TESS_CONTROL_INPUT_COMPONENTS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_INPUT_COMPONENTS, "I", 25 },
	{ "GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS, "I", 25 },
	{ "GL_GEOMETRY_SHADER_INVOCATIONS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_GEOMETRY_SHADER_INVOCATIONS, "I", 25 },
	{ "GL_GEOMETRY_VERTICES_OUT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_GEOMETRY_VERTICES_OUT, "I", 25 },
	{ "GL_GEOMETRY_INPUT_TYPE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_GEOMETRY_INPUT_TYPE, "I", 25 },
	{ "GL_GEOMETRY_OUTPUT_TYPE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_GEOMETRY_OUTPUT_TYPE, "I", 25 },
	{ "GL_MAX_GEOMETRY_UNIFORM_BLOCKS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_UNIFORM_BLOCKS, "I", 25 },
	{ "GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS, "I", 25 },
	{ "GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS, "I", 25 },
	{ "GL_TEXTURE_BUFFER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BUFFER, "I", 25 },
	{ "GL_TEXTURE_BUFFER_BINDING", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BUFFER_BINDING, "I", 25 },
	{ "GL_MAX_TEXTURE_BUFFER_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TEXTURE_BUFFER_SIZE, "I", 25 },
	{ "GL_TEXTURE_BINDING_BUFFER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BINDING_BUFFER, "I", 25 },
	{ "GL_TEXTURE_BUFFER_DATA_STORE_BINDING", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BUFFER_DATA_STORE_BINDING, "I", 25 },
	{ "GL_SAMPLE_SHADING", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_SAMPLE_SHADING, "I", 25 },
	{ "GL_MIN_SAMPLE_SHADING_VALUE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MIN_SAMPLE_SHADING_VALUE, "I", 25 },
	{ "GL_PRIMITIVES_GENERATED", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_PRIMITIVES_GENERATED, "I", 25 },
	{ "GL_FRAMEBUFFER_ATTACHMENT_LAYERED", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_FRAMEBUFFER_ATTACHMENT_LAYERED, "I", 25 },
	{ "GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS, "I", 25 },
	{ "GL_SAMPLER_BUFFER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_SAMPLER_BUFFER, "I", 25 },
	{ "GL_INT_SAMPLER_BUFFER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_INT_SAMPLER_BUFFER, "I", 25 },
	{ "GL_UNSIGNED_INT_SAMPLER_BUFFER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_UNSIGNED_INT_SAMPLER_BUFFER, "I", 25 },
	{ "GL_GEOMETRY_SHADER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_GEOMETRY_SHADER, "I", 25 },
	{ "GL_MAX_GEOMETRY_UNIFORM_COMPONENTS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_UNIFORM_COMPONENTS, "I", 25 },
	{ "GL_MAX_GEOMETRY_OUTPUT_VERTICES", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_OUTPUT_VERTICES, "I", 25 },
	{ "GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS, "I", 25 },
	{ "GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS, "I", 25 },
	{ "GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS, "I", 25 },
	{ "GL_FIRST_VERTEX_CONVENTION", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_FIRST_VERTEX_CONVENTION, "I", 25 },
	{ "GL_LAST_VERTEX_CONVENTION", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_LAST_VERTEX_CONVENTION, "I", 25 },
	{ "GL_MAX_GEOMETRY_SHADER_INVOCATIONS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_SHADER_INVOCATIONS, "I", 25 },
	{ "GL_MIN_FRAGMENT_INTERPOLATION_OFFSET", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MIN_FRAGMENT_INTERPOLATION_OFFSET, "I", 25 },
	{ "GL_MAX_FRAGMENT_INTERPOLATION_OFFSET", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_FRAGMENT_INTERPOLATION_OFFSET, "I", 25 },
	{ "GL_FRAGMENT_INTERPOLATION_OFFSET_BITS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_FRAGMENT_INTERPOLATION_OFFSET_BITS, "I", 25 },
	{ "GL_PATCH_VERTICES", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_PATCH_VERTICES, "I", 25 },
	{ "GL_TESS_CONTROL_OUTPUT_VERTICES", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_TESS_CONTROL_OUTPUT_VERTICES, "I", 25 },
	{ "GL_TESS_GEN_MODE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_TESS_GEN_MODE, "I", 25 },
	{ "GL_TESS_GEN_SPACING", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_TESS_GEN_SPACING, "I", 25 },
	{ "GL_TESS_GEN_VERTEX_ORDER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_TESS_GEN_VERTEX_ORDER, "I", 25 },
	{ "GL_TESS_GEN_POINT_MODE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_TESS_GEN_POINT_MODE, "I", 25 },
	{ "GL_ISOLINES", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_ISOLINES, "I", 25 },
	{ "GL_FRACTIONAL_ODD", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_FRACTIONAL_ODD, "I", 25 },
	{ "GL_FRACTIONAL_EVEN", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_FRACTIONAL_EVEN, "I", 25 },
	{ "GL_MAX_PATCH_VERTICES", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_PATCH_VERTICES, "I", 25 },
	{ "GL_MAX_TESS_GEN_LEVEL", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_GEN_LEVEL, "I", 25 },
	{ "GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS, "I", 25 },
	{ "GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS, "I", 25 },
	{ "GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS, "I", 25 },
	{ "GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS, "I", 25 },
	{ "GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS, "I", 25 },
	{ "GL_MAX_TESS_PATCH_COMPONENTS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_PATCH_COMPONENTS, "I", 25 },
	{ "GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS, "I", 25 },
	{ "GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS, "I", 25 },
	{ "GL_TESS_EVALUATION_SHADER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_TESS_EVALUATION_SHADER, "I", 25 },
	{ "GL_TESS_CONTROL_SHADER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_TESS_CONTROL_SHADER, "I", 25 },
	{ "GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS, "I", 25 },
	{ "GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS, "I", 25 },
	{ "GL_TEXTURE_CUBE_MAP_ARRAY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_CUBE_MAP_ARRAY, "I", 25 },
	{ "GL_TEXTURE_BINDING_CUBE_MAP_ARRAY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BINDING_CUBE_MAP_ARRAY, "I", 25 },
	{ "GL_SAMPLER_CUBE_MAP_ARRAY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_SAMPLER_CUBE_MAP_ARRAY, "I", 25 },
	{ "GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW, "I", 25 },
	{ "GL_INT_SAMPLER_CUBE_MAP_ARRAY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_INT_SAMPLER_CUBE_MAP_ARRAY, "I", 25 },
	{ "GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY, "I", 25 },
	{ "GL_IMAGE_BUFFER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_IMAGE_BUFFER, "I", 25 },
	{ "GL_IMAGE_CUBE_MAP_ARRAY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_IMAGE_CUBE_MAP_ARRAY, "I", 25 },
	{ "GL_INT_IMAGE_BUFFER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_INT_IMAGE_BUFFER, "I", 25 },
	{ "GL_INT_IMAGE_CUBE_MAP_ARRAY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_INT_IMAGE_CUBE_MAP_ARRAY, "I", 25 },
	{ "GL_UNSIGNED_INT_IMAGE_BUFFER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_UNSIGNED_INT_IMAGE_BUFFER, "I", 25 },
	{ "GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY, "I", 25 },
	{ "GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS, "I", 25 },
	{ "GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS, "I", 25 },
	{ "GL_MAX_GEOMETRY_IMAGE_UNIFORMS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_IMAGE_UNIFORMS, "I", 25 },
	{ "GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS, "I", 25 },
	{ "GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS, "I", 25 },
	{ "GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS, "I", 25 },
	{ "GL_TEXTURE_2D_MULTISAMPLE_ARRAY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_2D_MULTISAMPLE_ARRAY, "I", 25 },
	{ "GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY, "I", 25 },
	{ "GL_SAMPLER_2D_MULTISAMPLE_ARRAY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_SAMPLER_2D_MULTISAMPLE_ARRAY, "I", 25 },
	{ "GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY, "I", 25 },
	{ "GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY, "I", 25 },
	{ "GL_MAX_GEOMETRY_INPUT_COMPONENTS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_INPUT_COMPONENTS, "I", 25 },
	{ "GL_MAX_GEOMETRY_OUTPUT_COMPONENTS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_OUTPUT_COMPONENTS, "I", 25 },
	{ "GL_MAX_DEBUG_MESSAGE_LENGTH", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_DEBUG_MESSAGE_LENGTH, "I", 25 },
	{ "GL_MAX_DEBUG_LOGGED_MESSAGES", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_DEBUG_LOGGED_MESSAGES, "I", 25 },
	{ "GL_DEBUG_LOGGED_MESSAGES", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_LOGGED_MESSAGES, "I", 25 },
	{ "GL_DEBUG_SEVERITY_HIGH", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SEVERITY_HIGH, "I", 25 },
	{ "GL_DEBUG_SEVERITY_MEDIUM", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SEVERITY_MEDIUM, "I", 25 },
	{ "GL_DEBUG_SEVERITY_LOW", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_SEVERITY_LOW, "I", 25 },
	{ "GL_TEXTURE_BUFFER_OFFSET", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BUFFER_OFFSET, "I", 25 },
	{ "GL_TEXTURE_BUFFER_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BUFFER_SIZE, "I", 25 },
	{ "GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT, "I", 25 },
	{ "GL_MULTIPLY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MULTIPLY, "I", 25 },
	{ "GL_SCREEN", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_SCREEN, "I", 25 },
	{ "GL_OVERLAY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_OVERLAY, "I", 25 },
	{ "GL_DARKEN", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DARKEN, "I", 25 },
	{ "GL_LIGHTEN", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_LIGHTEN, "I", 25 },
	{ "GL_COLORDODGE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COLORDODGE, "I", 25 },
	{ "GL_COLORBURN", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COLORBURN, "I", 25 },
	{ "GL_HARDLIGHT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_HARDLIGHT, "I", 25 },
	{ "GL_SOFTLIGHT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_SOFTLIGHT, "I", 25 },
	{ "GL_DIFFERENCE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DIFFERENCE, "I", 25 },
	{ "GL_EXCLUSION", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_EXCLUSION, "I", 25 },
	{ "GL_HSL_HUE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_HSL_HUE, "I", 25 },
	{ "GL_HSL_SATURATION", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_HSL_SATURATION, "I", 25 },
	{ "GL_HSL_COLOR", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_HSL_COLOR, "I", 25 },
	{ "GL_HSL_LUMINOSITY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_HSL_LUMINOSITY, "I", 25 },
	{ "GL_PRIMITIVE_BOUNDING_BOX", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_PRIMITIVE_BOUNDING_BOX, "I", 25 },
	{ "GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS, "I", 25 },
	{ "GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS, "I", 25 },
	{ "GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS, "I", 25 },
	{ "GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS, "I", 25 },
	{ "GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS, "I", 25 },
	{ "GL_MAX_GEOMETRY_ATOMIC_COUNTERS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_GEOMETRY_ATOMIC_COUNTERS, "I", 25 },
	{ "GL_DEBUG_OUTPUT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_DEBUG_OUTPUT, "I", 25 },
	{ "GL_IS_PER_PATCH", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_IS_PER_PATCH, "I", 25 },
	{ "GL_REFERENCED_BY_TESS_CONTROL_SHADER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_REFERENCED_BY_TESS_CONTROL_SHADER, "I", 25 },
	{ "GL_REFERENCED_BY_TESS_EVALUATION_SHADER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_REFERENCED_BY_TESS_EVALUATION_SHADER, "I", 25 },
	{ "GL_REFERENCED_BY_GEOMETRY_SHADER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_REFERENCED_BY_GEOMETRY_SHADER, "I", 25 },
	{ "GL_FRAMEBUFFER_DEFAULT_LAYERS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_FRAMEBUFFER_DEFAULT_LAYERS, "I", 25 },
	{ "GL_MAX_FRAMEBUFFER_LAYERS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MAX_FRAMEBUFFER_LAYERS, "I", 25 },
	{ "GL_MULTISAMPLE_LINE_WIDTH_RANGE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MULTISAMPLE_LINE_WIDTH_RANGE, "I", 25 },
	{ "GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY, "I", 25 },
	{ "GL_COMPRESSED_RGBA_ASTC_4x4", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_4x4, "I", 25 },
	{ "GL_COMPRESSED_RGBA_ASTC_5x4", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_5x4, "I", 25 },
	{ "GL_COMPRESSED_RGBA_ASTC_5x5", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_5x5, "I", 25 },
	{ "GL_COMPRESSED_RGBA_ASTC_6x5", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_6x5, "I", 25 },
	{ "GL_COMPRESSED_RGBA_ASTC_6x6", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_6x6, "I", 25 },
	{ "GL_COMPRESSED_RGBA_ASTC_8x5", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_8x5, "I", 25 },
	{ "GL_COMPRESSED_RGBA_ASTC_8x6", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_8x6, "I", 25 },
	{ "GL_COMPRESSED_RGBA_ASTC_8x8", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_8x8, "I", 25 },
	{ "GL_COMPRESSED_RGBA_ASTC_10x5", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_10x5, "I", 25 },
	{ "GL_COMPRESSED_RGBA_ASTC_10x6", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_10x6, "I", 25 },
	{ "GL_COMPRESSED_RGBA_ASTC_10x8", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_10x8, "I", 25 },
	{ "GL_COMPRESSED_RGBA_ASTC_10x10", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_10x10, "I", 25 },
	{ "GL_COMPRESSED_RGBA_ASTC_12x10", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_12x10, "I", 25 },
	{ "GL_COMPRESSED_RGBA_ASTC_12x12", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_RGBA_ASTC_12x12, "I", 25 },
	{ "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4, "I", 25 },
	{ "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4, "I", 25 },
	{ "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5, "I", 25 },
	{ "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5, "I", 25 },
	{ "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6, "I", 25 },
	{ "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5, "I", 25 },
	{ "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6, "I", 25 },
	{ "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8, "I", 25 },
	{ "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5, "I", 25 },
	{ "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6, "I", 25 },
	{ "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8, "I", 25 },
	{ "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10, "I", 25 },
	{ "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10, "I", 25 },
	{ "GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_GL32_GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12, "I", 25 },
};

static MethodMetadata methods[] {
	{ "glBlendBarrier", 0, INDEX_com_badlogic_gdx_graphics_GL32_glBlendBarrier, "()V", 1025 },
	{ "glCopyImageSubData", 0, INDEX_com_badlogic_gdx_graphics_GL32_glCopyImageSubData_int_int_int_int_int_int_int_int_int_int_int_int_int_int_int, "(IIIIIIIIIIIIIII)V", 1025 },
	{ "glDebugMessageControl", 0, INDEX_com_badlogic_gdx_graphics_GL32_glDebugMessageControl_int_int_int_java_nio_IntBuffer_boolean, "(IIILjava/nio/IntBuffer;Z)V", 1025 },
	{ "glDebugMessageInsert", 0, INDEX_com_badlogic_gdx_graphics_GL32_glDebugMessageInsert_int_int_int_int_java_lang_String, "(IIIILjava/lang/String;)V", 1025 },
	{ "glDebugMessageCallback", 0, INDEX_com_badlogic_gdx_graphics_GL32_glDebugMessageCallback_com_badlogic_gdx_graphics_GL32$DebugProc, "(Lcom/badlogic/gdx/graphics/GL32$DebugProc;)V", 1025 },
	{ "glGetDebugMessageLog", 0, INDEX_com_badlogic_gdx_graphics_GL32_glGetDebugMessageLog_int_java_nio_IntBuffer_java_nio_IntBuffer_java_nio_IntBuffer_java_nio_IntBuffer_java_nio_IntBuffer_java_nio_ByteBuffer_R_int, "(ILjava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/ByteBuffer;)I", 1025 },
	{ "glPushDebugGroup", 0, INDEX_com_badlogic_gdx_graphics_GL32_glPushDebugGroup_int_int_java_lang_String, "(IILjava/lang/String;)V", 1025 },
	{ "glPopDebugGroup", 0, INDEX_com_badlogic_gdx_graphics_GL32_glPopDebugGroup, "()V", 1025 },
	{ "glObjectLabel", 0, INDEX_com_badlogic_gdx_graphics_GL32_glObjectLabel_int_int_java_lang_String, "(IILjava/lang/String;)V", 1025 },
	{ "glGetObjectLabel", 0, INDEX_com_badlogic_gdx_graphics_GL32_glGetObjectLabel_int_int_R_java_lang_String, "(II)Ljava/lang/String;", 1025 },
	{ "glGetPointerv", 0, INDEX_com_badlogic_gdx_graphics_GL32_glGetPointerv_int_R_long, "(I)J", 1025 },
	{ "glEnablei", 0, INDEX_com_badlogic_gdx_graphics_GL32_glEnablei_int_int, "(II)V", 1025 },
	{ "glDisablei", 0, INDEX_com_badlogic_gdx_graphics_GL32_glDisablei_int_int, "(II)V", 1025 },
	{ "glBlendEquationi", 0, INDEX_com_badlogic_gdx_graphics_GL32_glBlendEquationi_int_int, "(II)V", 1025 },
	{ "glBlendEquationSeparatei", 0, INDEX_com_badlogic_gdx_graphics_GL32_glBlendEquationSeparatei_int_int_int, "(III)V", 1025 },
	{ "glBlendFunci", 0, INDEX_com_badlogic_gdx_graphics_GL32_glBlendFunci_int_int_int, "(III)V", 1025 },
	{ "glBlendFuncSeparatei", 0, INDEX_com_badlogic_gdx_graphics_GL32_glBlendFuncSeparatei_int_int_int_int_int, "(IIIII)V", 1025 },
	{ "glColorMaski", 0, INDEX_com_badlogic_gdx_graphics_GL32_glColorMaski_int_boolean_boolean_boolean_boolean, "(IZZZZ)V", 1025 },
	{ "glIsEnabledi", 0, INDEX_com_badlogic_gdx_graphics_GL32_glIsEnabledi_int_int_R_boolean, "(II)Z", 1025 },
	{ "glDrawElementsBaseVertex", 0, INDEX_com_badlogic_gdx_graphics_GL32_glDrawElementsBaseVertex_int_int_int_java_nio_Buffer_int, "(IIILjava/nio/Buffer;I)V", 1025 },
	{ "glDrawRangeElementsBaseVertex", 0, INDEX_com_badlogic_gdx_graphics_GL32_glDrawRangeElementsBaseVertex_int_int_int_int_int_java_nio_Buffer_int, "(IIIIILjava/nio/Buffer;I)V", 1025 },
	{ "glDrawElementsInstancedBaseVertex", 0, INDEX_com_badlogic_gdx_graphics_GL32_glDrawElementsInstancedBaseVertex_int_int_int_java_nio_Buffer_int_int, "(IIILjava/nio/Buffer;II)V", 1025 },
	{ "glDrawElementsInstancedBaseVertex", 0, INDEX_com_badlogic_gdx_graphics_GL32_glDrawElementsInstancedBaseVertex_int_int_int_int_int_int, "(IIIIII)V", 1025 },
	{ "glFramebufferTexture", 0, INDEX_com_badlogic_gdx_graphics_GL32_glFramebufferTexture_int_int_int_int, "(IIII)V", 1025 },
	{ "glGetGraphicsResetStatus", 0, INDEX_com_badlogic_gdx_graphics_GL32_glGetGraphicsResetStatus_R_int, "()I", 1025 },
	{ "glReadnPixels", 0, INDEX_com_badlogic_gdx_graphics_GL32_glReadnPixels_int_int_int_int_int_int_int_java_nio_Buffer, "(IIIIIIILjava/nio/Buffer;)V", 1025 },
	{ "glGetnUniformfv", 0, INDEX_com_badlogic_gdx_graphics_GL32_glGetnUniformfv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1025 },
	{ "glGetnUniformiv", 0, INDEX_com_badlogic_gdx_graphics_GL32_glGetnUniformiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glGetnUniformuiv", 0, INDEX_com_badlogic_gdx_graphics_GL32_glGetnUniformuiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glMinSampleShading", 0, INDEX_com_badlogic_gdx_graphics_GL32_glMinSampleShading_float, "(F)V", 1025 },
	{ "glPatchParameteri", 0, INDEX_com_badlogic_gdx_graphics_GL32_glPatchParameteri_int_int, "(II)V", 1025 },
	{ "glTexParameterIiv", 0, INDEX_com_badlogic_gdx_graphics_GL32_glTexParameterIiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glTexParameterIuiv", 0, INDEX_com_badlogic_gdx_graphics_GL32_glTexParameterIuiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glGetTexParameterIiv", 0, INDEX_com_badlogic_gdx_graphics_GL32_glGetTexParameterIiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glGetTexParameterIuiv", 0, INDEX_com_badlogic_gdx_graphics_GL32_glGetTexParameterIuiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glSamplerParameterIiv", 0, INDEX_com_badlogic_gdx_graphics_GL32_glSamplerParameterIiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glSamplerParameterIuiv", 0, INDEX_com_badlogic_gdx_graphics_GL32_glSamplerParameterIuiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glGetSamplerParameterIiv", 0, INDEX_com_badlogic_gdx_graphics_GL32_glGetSamplerParameterIiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glGetSamplerParameterIuiv", 0, INDEX_com_badlogic_gdx_graphics_GL32_glGetSamplerParameterIuiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glTexBuffer", 0, INDEX_com_badlogic_gdx_graphics_GL32_glTexBuffer_int_int_int, "(III)V", 1025 },
	{ "glTexBufferRange", 0, INDEX_com_badlogic_gdx_graphics_GL32_glTexBufferRange_int_int_int_int_int, "(IIIII)V", 1025 },
	{ "glTexStorage3DMultisample", 0, INDEX_com_badlogic_gdx_graphics_GL32_glTexStorage3DMultisample_int_int_int_int_int_int_boolean, "(IIIIIIZ)V", 1025 },
};

Class class_com_badlogic_gdx_graphics_GL32{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/GL32",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_GL32),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_GL32,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_GL32,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_GL32,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1537,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 206,
		.nativeFields = (intptr_t) fields,
		.methodCount = 42,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 378,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_GL32 = registerClass(&class_com_badlogic_gdx_graphics_GL32);

}

