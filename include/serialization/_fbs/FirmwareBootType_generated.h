// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_FIRMWAREBOOTTYPE_OPENSHOCK_SERIALIZATION_TYPES_H_
#define FLATBUFFERS_GENERATED_FIRMWAREBOOTTYPE_OPENSHOCK_SERIALIZATION_TYPES_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 25 &&
              FLATBUFFERS_VERSION_MINOR == 1 &&
              FLATBUFFERS_VERSION_REVISION == 24,
             "Non-compatible flatbuffers version included");

namespace OpenShock {
namespace Serialization {
namespace Types {

enum class FirmwareBootType : uint8_t {
  Normal = 0,
  NewFirmware = 1,
  Rollback = 2,
  MIN = Normal,
  MAX = Rollback
};

inline const FirmwareBootType (&EnumValuesFirmwareBootType())[3] {
  static const FirmwareBootType values[] = {
    FirmwareBootType::Normal,
    FirmwareBootType::NewFirmware,
    FirmwareBootType::Rollback
  };
  return values;
}

inline const char * const *EnumNamesFirmwareBootType() {
  static const char * const names[4] = {
    "Normal",
    "NewFirmware",
    "Rollback",
    nullptr
  };
  return names;
}

inline const char *EnumNameFirmwareBootType(FirmwareBootType e) {
  if (::flatbuffers::IsOutRange(e, FirmwareBootType::Normal, FirmwareBootType::Rollback)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesFirmwareBootType()[index];
}

}  // namespace Types
}  // namespace Serialization
}  // namespace OpenShock

#endif  // FLATBUFFERS_GENERATED_FIRMWAREBOOTTYPE_OPENSHOCK_SERIALIZATION_TYPES_H_
