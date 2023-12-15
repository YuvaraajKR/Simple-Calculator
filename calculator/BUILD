load("@rules_cc//cc:defs.bzl","cc_binary","cc_library")

cc_binary(

    name = "main",
    srcs = ["main.cpp"],
    deps = [
            "//:functionalities" ,
    ],
)

cc_library(

    name = "functionalities",
    srcs = ["functionalities.cpp"],
    hdrs = ["functionalities.h"],
    visibility = ["//visibility:public"],
    
)


