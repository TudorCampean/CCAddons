// functionfactory.cc
#include <node.h>
#include <nan.h>

using namespace v8;

NAN_METHOD(NewFunction) {
    NanScope();
    NanReturnValue(NanNew<String>("test"));
}

NAN_METHOD(CreateFunction) {
  NanScope();

  Local<FunctionTemplate> ftmpl = NanNew<FunctionTemplate>(NewFunction);
  Local<Function> fn = ftmpl->GetFunction();

  fn->SetName(NanSymbol("NewFunction"));

  NanReturnValue(fn);
}