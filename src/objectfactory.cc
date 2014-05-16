// objectfactory.cc
#include <node.h>
#include <nan.h>

using namespace v8;

NAN_METHOD(CreateObject) {
  NanScope();

  Local<Object> obj = NanNew<Object>();

  obj->Set(NanSymbol("msg"), args[0]->ToString());

  NanReturnValue(obj);
}