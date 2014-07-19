// addonObject.cc
#include <node.h>

#include <nan.h>
#include "myobject.h"

using namespace v8;

void initAll(Handle<Object> exports) {
  MyObject::Init(exports);
}

NODE_MODULE(addonWrappedObject, initAll)
