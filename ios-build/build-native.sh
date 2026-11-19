#!/bin/bash
set -euo pipefail
[ "$(uname -s)" = Darwin ] || { echo 'Native iOS libraries require macOS/Xcode.' >&2; exit 1; }
ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
VENDOR="$ROOT/Libraries/vendor"
PLATFORM="${PLATFORM_NAME:-iphoneos}"
CONFIG="${CONFIGURATION:-Release}"
OUT="$ROOT/build/native/${CONFIG}-${PLATFORM}"
SDK="$(xcrun --sdk "$PLATFORM" --show-sdk-path)"
CLANG="$(xcrun --sdk "$PLATFORM" --find clang)"
AR="$(xcrun --sdk "$PLATFORM" --find ar)"
RANLIB="$(xcrun --sdk "$PLATFORM" --find ranlib)"
MIN_IOS="${IPHONEOS_DEPLOYMENT_TARGET:-15.0}"
ARCH_LIST="${ARCHS:-arm64}"
HOST_CLANG="$(xcrun --sdk macosx --find clang)"
HOST_SDK="$(xcrun --sdk macosx --show-sdk-path)"
HOST_FLAGS="-isysroot $HOST_SDK -O2"
mkdir -p "$OUT/lib"
WORK="$(mktemp -d "${TMPDIR:-/tmp}/nro-clearwing-native.XXXXXX")"
trap 'rm -rf "$WORK"' EXIT
JOBS="$(sysctl -n hw.logicalcpu 2>/dev/null || echo 4)"

# Autotools source/build paths use an ASCII temporary directory, even when the exported app name has spaces.
cp -R "$VENDOR/freetype" "$WORK/freetype"
cp -R "$VENDOR/libffi" "$WORK/libffi"
chmod -R +x "$WORK/freetype" "$WORK/libffi" 2>/dev/null || true
# Apple Clang on Xcode 16+ rejects CFI directives in libffi aarch64 assembly with subsections-via-symbols.
sed -i.bak 's/#ifdef HAVE_AS_CFI_PSEUDO_OP/#if 0/' "$WORK/libffi/include/ffi_cfi.h" 2>/dev/null || true
sed -i.bak 's/cfi_def_cfa(x1, 0);/cfi_def_cfa(x1, 0)/g' "$WORK/libffi/src/aarch64/sysv.S" 2>/dev/null || true
sed -i.bak 's/cfi_def_cfa(x1, 40);/cfi_def_cfa(x1, 40)/g' "$WORK/libffi/src/aarch64/sysv.S" 2>/dev/null || true

unset MAKEFLAGS
export MAKE="make"

for ARCH in $ARCH_LIST; do
  case "$ARCH" in arm64) HOST=aarch64-apple-darwin;; x86_64) HOST=x86_64-apple-darwin;; *) echo "Unsupported iOS arch: $ARCH" >&2; exit 1;; esac
  if [ "$PLATFORM" = iphonesimulator ]; then TARGET="${ARCH}-apple-ios${MIN_IOS}-simulator"; else TARGET="${ARCH}-apple-ios${MIN_IOS}"; fi
  PREFIX="$WORK/prefix-$ARCH"
  mkdir -p "$PREFIX/include" "$PREFIX/lib" "$OUT/$ARCH/include" "$OUT/$ARCH/lib"
  FLAGS="-target $TARGET -isysroot $SDK -O2 -fPIC"
  export CC="$CLANG" AR RANLIB
  export CFLAGS="$FLAGS" CXXFLAGS="$FLAGS" LDFLAGS="-target $TARGET -isysroot $SDK"

  xcodebuild -project "$VENDOR/SDL2/Xcode/SDL/SDL.xcodeproj" -target 'Static Library-iOS' \
    -configuration "$CONFIG" -sdk "$PLATFORM" ARCHS="$ARCH" ONLY_ACTIVE_ARCH=YES \
    IPHONEOS_DEPLOYMENT_TARGET="$MIN_IOS" CODE_SIGNING_ALLOWED=NO \
    CONFIGURATION_BUILD_DIR="$PREFIX/lib" OBJROOT="$WORK/sdl-objects-$ARCH" SYMROOT="$WORK/sdl-products-$ARCH"
  [ -f "$PREFIX/lib/libSDL2.a" ] || { echo 'SDL2 static library was not produced.' >&2; exit 1; }
  cp -R "$VENDOR/SDL2/include/." "$PREFIX/include/"

  mkdir -p "$WORK/ffi-$ARCH" "$WORK/freetype-$ARCH"
  (cd "$WORK/ffi-$ARCH"; \
    gcc_cv_as_cfi_pseudo_op=no /bin/bash "$WORK/libffi/configure" --host="$HOST" --prefix="$PREFIX" \
      --disable-dependency-tracking --disable-shared --enable-static --disable-multi-os-directory --disable-docs --disable-exec-static-tramp \
      CFLAGS="$FLAGS -fno-asynchronous-unwind-tables" \
      gcc_cv_as_cfi_pseudo_op=no; \
    sed -i.bak 's/#define HAVE_AS_CFI_PSEUDO_OP 1/\/* #undef HAVE_AS_CFI_PSEUDO_OP *\//' fficonfig.h 2>/dev/null || true; \
    make -j"$JOBS"; make install)
  mkdir -p "$WORK/freetype-$ARCH"
  "$HOST_CLANG" $HOST_FLAGS -I"$WORK/freetype/src/tools" "$WORK/freetype/src/tools/apinames.c" -o "$WORK/freetype-$ARCH/apinames"
  chmod +x "$WORK/freetype-$ARCH/apinames"
  codesign -s - "$WORK/freetype-$ARCH/apinames" 2>/dev/null || true
  "$WORK/freetype-$ARCH/apinames" -o "$WORK/freetype-$ARCH/ftexport.sym" "$WORK/freetype"/include/freetype/*.h
  printf '%s\n' 'TT_New_Context' 'TT_RunIns' >> "$WORK/freetype-$ARCH/ftexport.sym"

  (cd "$WORK/freetype-$ARCH"; \
    CC_BUILD="$HOST_CLANG $HOST_FLAGS" /bin/bash "$WORK/freetype/configure" --host="$HOST" --prefix="$PREFIX" \
      --disable-dependency-tracking --disable-shared --enable-static --without-bzip2 --without-png --without-harfbuzz --without-brotli --with-zlib=yes; \
    touch "$WORK/freetype-$ARCH/apinames" "$WORK/freetype-$ARCH/ftexport.sym"; \
    make -j"$JOBS" CCraw_build="$HOST_CLANG $HOST_FLAGS" CCexe="$HOST_CLANG $HOST_FLAGS"; \
    make install)

  mkdir -p "$WORK/mixer-$ARCH"
  MIX_OBJECTS=()
  for SOURCE in "$VENDOR/SDL2_mixer"/src/*.c "$VENDOR/SDL2_mixer"/src/codecs/*.c; do
    OBJECT="$WORK/mixer-$ARCH/$(basename "$SOURCE" .c).o"
    "$CLANG" -target "$TARGET" -isysroot "$SDK" -O2 -fPIC -DMUSIC_WAV=1 -DMUSIC_MP3_MINIMP3=1 \
      -I"$PREFIX/include" -I"$VENDOR/SDL2_mixer/include" -I"$VENDOR/SDL2_mixer/src" -I"$VENDOR/SDL2_mixer/src/codecs" -c "$SOURCE" -o "$OBJECT"
    MIX_OBJECTS+=("$OBJECT")
  done
  "$AR" rcs "$PREFIX/lib/libSDL2_mixer.a" "${MIX_OBJECTS[@]}"
  cp "$VENDOR/SDL2_mixer/include/SDL_mixer.h" "$PREFIX/include/"

  mkdir -p "$WORK/zzip-$ARCH" "$WORK/zzip-include/zzip"
  cp "$ROOT/ios-build/zzip-config.h" "$WORK/zzip-include/zzip/_config.h"
  ZIP_OBJECTS=()
  for NAME in dir err file info plugin stat write zip fetch; do
    OBJECT="$WORK/zzip-$ARCH/$NAME.o"
    "$CLANG" -target "$TARGET" -isysroot "$SDK" -O2 -fPIC -DHAVE_CONFIG_H=1 \
      -I"$WORK/zzip-include" -I"$VENDOR/zziplib" -c "$VENDOR/zziplib/zzip/$NAME.c" -o "$OBJECT"
    ZIP_OBJECTS+=("$OBJECT")
  done
  "$AR" rcs "$PREFIX/lib/libzzip.a" "${ZIP_OBJECTS[@]}"
  mkdir -p "$PREFIX/include/zzip"
  cp "$VENDOR/zziplib"/zzip/*.h "$PREFIX/include/zzip/"
  cp "$ROOT/ios-build/zzip-config.h" "$PREFIX/include/zzip/_config.h"
  # libffi may install its public headers in a versioned lib directory.
  FFI_HEADER="$(find "$PREFIX" -name ffi.h -type f -print -quit 2>/dev/null || true)"
  [ -n "$FFI_HEADER" ] || { echo 'libffi public headers missing.' >&2; exit 1; }
  cp "$(dirname "$FFI_HEADER")/ffi.h" "$OUT/$ARCH/include/"
  cp "$(dirname "$FFI_HEADER")/ffitarget.h" "$OUT/$ARCH/include/"
  cp -R "$PREFIX/include/." "$OUT/$ARCH/include/"
  for NAME in SDL2 SDL2_mixer freetype ffi zzip; do
    LIB_PATH="$PREFIX/lib/lib$NAME.a"
    if [ ! -f "$LIB_PATH" ]; then
      FOUND_LIB="$(find "$PREFIX" -name "lib$NAME.a" -type f -print -quit 2>/dev/null || true)"
      if [ -n "$FOUND_LIB" ]; then
        cp "$FOUND_LIB" "$LIB_PATH"
      fi
    fi
    [ -f "$LIB_PATH" ] || { echo "Missing native library: $NAME ($ARCH)" >&2; exit 1; }
    cp "$LIB_PATH" "$OUT/$ARCH/lib/"
  done
done
for NAME in SDL2 SDL2_mixer freetype ffi zzip; do
  INPUTS=()
  for ARCH in $ARCH_LIST; do INPUTS+=("$OUT/$ARCH/lib/lib$NAME.a"); done
  if [ "${#INPUTS[@]}" -eq 1 ]; then
    cp -f "${INPUTS[0]}" "$OUT/lib/lib$NAME.a"
  else
    xcrun lipo -create "${INPUTS[@]}" -output "$OUT/lib/lib$NAME.a"
  fi
done
echo 'Native libraries are ready.'
