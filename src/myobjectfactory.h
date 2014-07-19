// myobjectfactory.h
#ifndef MYOBJECTFACTORY_H
#define MYOBJECTFACTORY_H

#include <node.h>
#include <node_object_wrap.h>
#include <nan.h>

using namespace v8;
using namespace node;

class MyObject : public ObjectWrap {
 public:
  static void Init();
  static NAN_METHOD(NewInstance);
  inline double value() const { return value_; }

 private:
  explicit MyObject(double value = 0);
  ~MyObject();

  static Persistent<Function> constructor;
  double value_;
  static NAN_METHOD(New);
  static NAN_METHOD(PlusOne);
};

NAN_METHOD(CreateWrappedObject);
#endif
