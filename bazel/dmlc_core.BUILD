package(default_visibility = ["//visibility:public"])

cc_library(
    name = "dmlc_core",
    hdrs = glob([
        "include/dmlc/*.h",
    ]),
    srcs = glob([
        "src/*.cc",
        "src/*.h",
        # data
        "src/data/*.h",
        "src/data/*.cc",
        # io
        "src/io/*.h",
        "src/io/*.cc",
    ], exclude=[
        "src/io/azure_*",
        "src/io/hdfs_*",
        "src/io/s3_*",
    ]),
    includes = [ "include", ],
    defines = [
        "DMLC_USE_FOPEN64"
    ],
    copts = [
        '-fopenmp',
        '-DDMLC_ENABLE_STD_THREAD=1',
    ],
    deps = [
        '@org_gcc_openmp//:openmp',
    ],
)

