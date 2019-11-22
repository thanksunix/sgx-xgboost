workspace(name = "sgx_xgboost")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# Asylo
local_repository(
    name = "com_google_asylo",
    path = "asylo",
)

local_repository(
    name = "org_gcc_openmp",
    path = "openmp",
)

# XGBoost
new_local_repository(
    name = "dmlc_core",
    path = "secure-xgboost/dmlc-core",
    build_file = "//bazel:dmlc_core.BUILD",
)

new_local_repository(
    name = "rabit",
    path = "secure-xgboost/rabit",
    build_file = "//bazel:rabit.BUILD",
)

new_local_repository(
    name = "xgboost",
    path = "secure-xgboost",
    build_file = "//bazel:xgboost.BUILD",
)

load("@com_google_asylo//asylo/bazel:asylo_deps.bzl", "asylo_deps")
asylo_deps()

load("@com_google_asylo//asylo/bazel:sgx_deps.bzl", "sgx_deps")
sgx_deps()
