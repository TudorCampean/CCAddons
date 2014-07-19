// addon.cc
#include <node.h>

#include <nan.h>
#include "./hello.h"
#include "./adder.h"
#include "./runcallback.h"
#include "./objectfactory.h"
#include "./functionfactory.h"
#include "./myobjectfactory.h"
#include "./adderobjects.h"

using namespace v8;

void initAll(Handle<Object> exports) {
  MyObject::Init();
  exports->Set(NanNew<String>("hello"),
    NanNew<FunctionTemplate>(Hello)->GetFunction());
  exports->Set(NanNew<String>("add"),
    NanNew<FunctionTemplate>(Adder)->GetFunction());
  exports->Set(NanNew<String>("runcallback"),
    NanNew<FunctionTemplate>(RunCallback)->GetFunction());
  exports->Set(NanNew<String>("objectCreate"),
    NanNew<FunctionTemplate>(CreateObject)->GetFunction());
  exports->Set(NanNew<String>("functionCreate"),
    NanNew<FunctionTemplate>(CreateFunction)->GetFunction());
  exports->Set(NanNew<String>("createObject"),
    NanNew<FunctionTemplate>(CreateWrappedObject)->GetFunction());
  exports->Set(NanNew<String>("addObj"),
    NanNew<FunctionTemplate>(AdderObjects)->GetFunction());
}

NODE_MODULE(addon, initAll);
