{
    "targets": [
        {
            "target_name": "addon",
            "sources": [
                "src/addon.cc",
                "src/hello.cc",
                "src/adder.cc",
                "src/runcallback.cc"
            ],
            "include_dirs" : [
                "<!(node -e \"require('nan')\")"
            ]
        }
    ]
}