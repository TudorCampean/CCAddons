{ 
  "targets": [
    {
      "target_name": "addon",
        "sources": [
          "src/addon.cc",
          "src/hello.cc",
          "src/adder.cc",
          "src/runcallback.cc",
          "src/objectfactory.cc",
          "src/functionfactory.cc",
          "src/myobjectfactory.cc",
          "src/adderobjects.cc",
        ],
        "include_dirs" : [
          "<!(node -e \"require('nan')\")"
        ],
        "conditions": [
          [
            'OS=="win"', {
              'msvs_disabled_warnings': [ 4244 ],
             }
          ],
        ],
    },
    {
      "target_name": "addonWrappedObject",
        "sources": [
          "src/addonWrappedObject.cc",
          "src/myobject.cc"
        ],
        "include_dirs" : [
          "<!(node -e \"require('nan')\")"
        ],
        "conditions": [
          [
            'OS=="win"', {
              'msvs_disabled_warnings': [ 4244 ],
             }
          ],
        ],
    }
  ]
}