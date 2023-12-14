
cc_test(
    name = "test",
    srcs = ["test.cpp"],
    deps = [
         "//calculator/addition:addition",
         "//calculator/multiplication:multiplication",
         "//calculator/division:division",
         "//calculator/subraction:subraction",
         "@com_google_googletest//:gtest",
         "@com_google_googletest//:gtest_main",
    
    ],
    visibility = ["//visibility:public"],
)