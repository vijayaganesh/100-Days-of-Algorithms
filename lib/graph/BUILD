cc_library(
    name = "graph",
    hdrs = glob(["include/*.hpp"]),
    strip_include_prefix = "//lib/graph/include",
    visibility = ["//visibility:public"],
)

cc_binary(
       name = "graph_test",
       srcs = ["test/graph_test.cpp"],
       deps = ["//lib/graph:graph"],
       visibility = ["//visibility:public"],    
   )
