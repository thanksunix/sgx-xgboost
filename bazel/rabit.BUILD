package(default_visibility = ["//visibility:public"])

cc_library(
    name = "rabit",
    hdrs = [
        "include/rabit/c_api.h",
        "include/rabit/rabit.h",
        "include/rabit/serializable.h",
    ],
    srcs = [
        # internal headers
        "include/rabit/internal/engine.h",
        "include/rabit/internal/io.h",
        "include/rabit/internal/rabit-inl.h",
        "include/rabit/internal/timer.h",
        "include/rabit/internal/utils.h",
        # src
        "src/allreduce_base.cc",
        "src/allreduce_base.h",
        "src/allreduce_mock.h",
        "src/allreduce_robust.cc",
        "src/allreduce_robust.h",
        "src/allreduce_robust-inl.h",
        # engine
        "src/c_api.cc",
        "src/engine_base.cc",
        "src/socket.h",
        "src/thread_local.h",
    ],
    textual_hdrs = [ "src/engine.cc", ],
    copts = [
        '-DDMLC_ENABLE_STD_THREAD=1',
        '-fopenmp',
    ],
    includes = [ "include" ],
    deps = [
        "@dmlc_core",
        "@boringssl//:crypto",
        "@boringssl//:ssl",
        '@org_gcc_openmp//:openmp',
    ],
)
