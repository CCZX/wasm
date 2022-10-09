#include <emscripten/val.h>
#include <emscripten/bind.h>
#include <iostream>
 
 
void setTheValue(int ptr, int len){
    int* data = nullptr;
    data = (int *) ptr;
    for(int i = 0; i < len; i++){
      std::cout << data[i] << std::endl;
    }
}

EMSCRIPTEN_BINDINGS(my_module) {
  emscripten::function("setTheValue", &setTheValue);
}
