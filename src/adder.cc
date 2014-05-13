// add.cc
#include <node.h>
#include <nan.h>

using namespace v8;

NAN_METHOD(Adder) {
  NanScope();

  if (args.Length() != 2) {
    return NanThrowError("Wrong number of arguments");
  }

  if (!args[0]->IsNumber() || !args[1]->IsNumber()) {
    return NanThrowError("Wrong type of arguments. Numbers required");
  }

  double value = args[0]->NumberValue() + args[1]->NumberValue();
  NanReturnValue(NanNew<Number>(value));
}
