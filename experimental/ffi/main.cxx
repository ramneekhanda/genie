#include <dlfcn.h>
#include <ffi.h>

#include <iostream>

int main() {
  void* libhandle = dlopen("libSystem.dylib", RTLD_LAZY);
  
  if (!libhandle) {
    std::cout << stderr << "dlopen error" << dlerror() << std::endl;
    exit(1);
  } else {
    std::cout << "success" << std::endl;
  }

  void* printf = dlsym(libhandle, "printf");
  char* err = dlerror();
  if (err) {
    std::cout << stderr << "dlopen error" << err << std::endl;
    exit(1);
  } else {
    std::cout << "success" << std::endl;
  }

  return 0;
}