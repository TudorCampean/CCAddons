// runcallback.cc
#include <node.h>
#include <nan.h>

using namespace v8;

NAN_METHOD(RunCallback) {
  NanScope();

  NanCallback *callback = new NanCallback(args[0].As<Function>());
  Handle<Value> argv[] = {
    NanNew<String>("hello world")
  };

  callback->Call(1, argv);
}