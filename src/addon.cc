// hello.cc
#include <node.h>
#include <nan.h>
#include "./hello.h"

using namespace v8;

void initAll(Handle<Object> exports) {
  exports->Set(NanSymbol("hello"),
      NanNew<FunctionTemplate>(Hello)->GetFunction());
}

NODE_MODULE(addon, initAll);