licenses(["notice"])

load("@com_google_asylo//asylo/bazel:asylo.bzl", "cc_enclave_binary")
load("@com_google_asylo//asylo/bazel:copts.bzl", "ASYLO_DEFAULT_COPTS")
load("@linux_sgx//:sgx_sdk.bzl", "sgx_enclave_configuration")

sgx_enclave_configuration(
    name = "enclave_configuration",
    stack_max_size = "0x400000",
    heap_max_size = "0x10000000",
)

# An implementation of ApplicationConfig() that returns an EnclaveConfig with
# an SGX local assertion authority config.
cc_library(
    name = "xgboost_enclave_config",
    srcs = ["xgboost_enclave_config.cc"],
    copts = ASYLO_DEFAULT_COPTS,
    visibility = ["//visibility:public"],
    deps = [
        "@com_google_asylo//asylo:enclave_cc_proto",
        "@com_google_asylo//asylo/identity:descriptions",
        "@com_google_asylo//asylo/identity:enclave_assertion_authority_config_cc_proto",
        "@com_google_asylo//asylo/identity/sgx:sgx_local_assertion_authority_config_cc_proto",
        "@com_google_asylo//asylo/util:logging",
    ],
)

cc_enclave_binary(
    name = "sgx_xgboost",
    enclave_build_config = "enclave_configuration",
    application_enclave_config = "xgboost_enclave_config",
    deps = ["@xgboost//:cli_main"],
)
