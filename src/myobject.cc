// myobject.cc
#include "myobject.h"

Persistent<FunctionTemplate> MyObject::constructor;

MyObject::MyObject(double value) : value_(value) {
}

MyObject::~MyObject() {
}

void MyObject::Init(Handle<Object> exports) {
  NanScope();

  Local<FunctionTemplate> ftmpl = NanNew<FunctionTemplate>(MyObject::New);

  ftmpl->SetClassName(NanNew<String>("MyObject"));
  ftmpl->InstanceTemplate()->SetInternalFieldCount(1);

  // Prototype
  NODE_SET_PROTOTYPE_METHOD(ftmpl, "plusOne", PlusOne);

  exports->Set(NanNew("MyObject"),ftmpl->GetFunction());
  NanAssignPersistent(constructor, ftmpl);
}

NAN_METHOD(MyObject::New) {
  NanScope();

  if (args.IsConstructCall()) {
    // Invoked as constructor: `new MyObject(...)`
    double value = args[0]->IsUndefined() ? 0 : args[0]->NumberValue();
    MyObject* obj = new MyObject(value);
    obj->Wrap(args.This());
    NanReturnValue(args.This());
  } else {
    // Invoked as plain function `MyObject(...)`, turn into construct call.
    const int argc = 1;
    Local<Value> argv[argc] = { args[0] };
    Local<Function> cons = NanNew(constructor)->GetFunction();
    NanReturnValue(cons->NewInstance(argc, argv));
  }
}

NAN_METHOD(MyObject::PlusOne) {
  NanScope();

  MyObject* obj = ObjectWrap::Unwrap<MyObject>(args.Holder());
  obj->value_ += 1;

  NanReturnValue(obj->value_);
}
