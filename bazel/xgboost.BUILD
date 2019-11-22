package(default_visibility = ["//visibility:public"])

cc_library(
    name = "cli_main",
    hdrs = glob([
        "include/xgboost/*.h",
    ]),
    srcs =  []
      + glob(["src/c_api/*.cc"])
      + glob(["src/c_api/*.h"])
      + glob(["src/common/*.cc"])
      + glob(["src/common/*.h"])
      + glob(["src/data/*.cc"])
      + glob(["src/data/*.h"])
      + glob(["src/gbm/*.cc"])
      + glob(["src/gbm/*.h"])
      + glob(["src/linear/*.cc"])
      + glob(["src/linear/*.h"])
      + glob(["src/metric/*.cc"])
      + glob(["src/metric/*.h"])
      + glob(["src/objective/*.cc"])
      + glob(["src/objective/*.h"])
      + glob(["src/predictor/*.cc"])
      + glob(["src/predictor/*.h"])
      + glob(["src/tree/*.cc"])
      + glob(["src/tree/*.h"]) + [
          "src/learner.cc",
          "src/logging.cc",
          "src/cli_main.cc",
    ],
    textual_hdrs = glob([ "src/**/*.cu" ]),
    copts = [
        '-DDMLC_ENABLE_STD_THREAD=1',
        '-fopenmp',
    ],
    includes = [ "include" ],
    deps = [
        '@dmlc_core',
        '@rabit',
        '@org_gcc_openmp//:openmp',
    ],
)
