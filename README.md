# sgx-xgboost
SGX XGBoost based on Google Asylo.

# Build
```bash
git submodule update --init --recursive

# Enter asylo docker to build.
sh env init

# NOTE: inside docker
bazel build --config=sgx-sim && ./bazel-bin/sgx_xgboost_host_loader tests/mushroom.conf
```

# How to run for sgx hardware

Please refer to https://github.com/google/asylo
