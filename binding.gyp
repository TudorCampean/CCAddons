{
    "targets": [
        {
            "target_name": "addon",
            "sources": [
                "src/addon.cc",
                "src/hello.cc"
            ],
            "include_dirs" : [
                "<!(node -e \"require('nan')\")"
            ]
        }
    ]
}