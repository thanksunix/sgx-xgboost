#include "asylo/enclave.pb.h"

extern "C" asylo::EnclaveConfig GetApplicationConfig() {
  asylo::EnclaveConfig enclave_config;
  return enclave_config;
}
