#include <emscripten/val.h>
#include <emscripten/bind.h>

void addOne(int input, int output, int len) {
  int* input_ptr = (int *) input;
  int* output_ptr = (int *) output;

  for (int i = 0; i < len; i++) {
    output_ptr[i] = input_ptr[i] + 1;
  }
}

EMSCRIPTEN_BINDINGS(my_module) {
  emscripten::function("addOne", &addOne, emscripten::allow_raw_pointers());
}
