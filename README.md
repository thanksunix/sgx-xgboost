# SGX XGBoost
SGX XGBoost based on Google Asylo.

# Build and Run
```bash
git submodule update --init --recursive

# Enter asylo docker to build.
sh env init

# NOTE: inside docker
# build and run
bazel build --config=sgx-sim :sgx_xgboost && ./bazel-bin/sgx_xgboost_host_loader tests/mushroom.conf
```

# How to run for sgx hardware

Please refer to https://github.com/google/asylo
