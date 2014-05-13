// hello.cc
#include <node.h>
#include <nan.h>
#include "./hello.h"
#include "./adder.h"
#include "./runcallback.h"

using namespace v8;

void initAll(Handle<Object> exports) {
  exports->Set(NanSymbol("hello"),
    NanNew<FunctionTemplate>(Hello)->GetFunction());
  exports->Set(NanSymbol("add"),
    NanNew<FunctionTemplate>(Adder)->GetFunction());
  exports->Set(NanSymbol("runcallback"),
    NanNew<FunctionTemplate>(RunCallback)->GetFunction());
}

NODE_MODULE(addon, initAll);