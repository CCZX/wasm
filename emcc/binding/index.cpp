#include <emscripten/bind.h>

using namespace emscripten;

int g_int = 42;

float lerp(float a, float b, float t) {
    return (1 - t) * a + t * b;
}

int* get_int_ptr() {
  return &g_int;
}

EMSCRIPTEN_BINDINGS(my_module) {
    function("lerp", &lerp);
    function("getPtr", &get_int_ptr, allow_raw_pointers());
}

// emcc --bind -o index.js index.cpp
