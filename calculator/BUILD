load("@rules_cc//cc:defs.bzl","cc_binary","cc_library")

cc_binary(

    name = "main",
    srcs = ["main.cpp"],
    deps = [
             "//calculator/addition:addition",
             "//calculator/subraction:subraction",
             "//calculator/multiplication:multiplication",
             "//calculator/division:division",
    ],
)

