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
                "src/functionfactory.cc"
            ],
            "include_dirs" : [
                "<!(node -e \"require('nan')\")"
            ]
        }
    ]
}