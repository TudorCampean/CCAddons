// hello.cc
#include <node.h>
#include <nan.h>

using namespace v8;

NAN_METHOD(Hello) {
  NanScope();
  NanReturnValue(NanNew<String>("world"));
}

