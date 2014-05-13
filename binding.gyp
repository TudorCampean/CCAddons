{
    "targets": [
        {
            "target_name": "addon",
            "sources": [
                "src/addon.cc",
                "src/hello.cc",
                "src/adder.cc"
            ],
            "include_dirs" : [
                "<!(node -e \"require('nan')\")"
            ]
        }
    ]
}