#include <node.h>
#include "myobjectfactory.h"

using namespace v8;
using namespace node;

NAN_METHOD(AdderObjects) {
  NanScope();

  if (args.Length() != 2) {
    return NanThrowError("Wrong number of arguments");
  }

  if (!args[0]->IsObject() || !args[1]->IsObject()) {
    return NanThrowError("Wrong type of arguments. MyObject required");
  }

  MyObject* obj1 = ObjectWrap::Unwrap<MyObject>(
      args[0]->ToObject());
  MyObject* obj2 = ObjectWrap::Unwrap<MyObject>(
      args[1]->ToObject());

  double sum = obj1->value() + obj2->value();
  NanReturnValue(NanNew<Number>(sum));
}
