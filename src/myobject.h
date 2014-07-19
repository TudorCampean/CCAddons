// myobject.h
#ifndef MYOBJECT_H
#define MYOBJECT_H

#include <node.h>
#include <node_object_wrap.h>
#include <nan.h>

using namespace v8;
using namespace node;

class MyObject : public ObjectWrap {
 public:
  static void Init(Handle<Object> exports);

 private:
  explicit MyObject(double value = 0);
  ~MyObject();

  static Persistent<FunctionTemplate> constructor;
  double value_;
  static NAN_METHOD(New);
  static NAN_METHOD(PlusOne);
};

#endif
