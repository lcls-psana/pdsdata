
// *** Do not edit this file, it is auto-generated ***

#include "pdsdata/psddl/andor.ddl.h"

#include <iostream>
namespace Pds {
namespace Andor {
uint32_t
ConfigV1::frameSize() const {
  return 12 + this->numPixels()*2;
}
std::ostream& operator<<(std::ostream& str, Andor::ConfigV1::EnumFanMode enval) {
  const char* val;
  switch (enval) {
  case Andor::ConfigV1::ENUM_FAN_FULL:
    val = "ENUM_FAN_FULL";
    break;
  case Andor::ConfigV1::ENUM_FAN_LOW:
    val = "ENUM_FAN_LOW";
    break;
  case Andor::ConfigV1::ENUM_FAN_OFF:
    val = "ENUM_FAN_OFF";
    break;
  case Andor::ConfigV1::ENUM_FAN_ACQOFF:
    val = "ENUM_FAN_ACQOFF";
    break;
  case Andor::ConfigV1::ENUM_FAN_NUM:
    val = "ENUM_FAN_NUM";
    break;
  default:
    return str << "EnumFanMode(" << int(enval) << ")";
  }
  return str << val;
}
uint32_t
ConfigV2::frameSize() const {
  return 12 + this->numPixels()*2;
}
std::ostream& operator<<(std::ostream& str, Andor::ConfigV2::EnumFanMode enval) {
  const char* val;
  switch (enval) {
  case Andor::ConfigV2::ENUM_FAN_FULL:
    val = "ENUM_FAN_FULL";
    break;
  case Andor::ConfigV2::ENUM_FAN_LOW:
    val = "ENUM_FAN_LOW";
    break;
  case Andor::ConfigV2::ENUM_FAN_OFF:
    val = "ENUM_FAN_OFF";
    break;
  case Andor::ConfigV2::ENUM_FAN_ACQOFF:
    val = "ENUM_FAN_ACQOFF";
    break;
  case Andor::ConfigV2::ENUM_FAN_NUM:
    val = "ENUM_FAN_NUM";
    break;
  default:
    return str << "EnumFanMode(" << int(enval) << ")";
  }
  return str << val;
}
std::ostream& operator<<(std::ostream& str, Andor::ConfigV2::EnumCropMode enval) {
  const char* val;
  switch (enval) {
  case Andor::ConfigV2::ENUM_CROP_OFF:
    val = "ENUM_CROP_OFF";
    break;
  case Andor::ConfigV2::ENUM_CROP_ON:
    val = "ENUM_CROP_ON";
    break;
  case Andor::ConfigV2::ENUM_CROP_EX:
    val = "ENUM_CROP_EX";
    break;
  case Andor::ConfigV2::ENUM_CROP_NUM:
    val = "ENUM_CROP_NUM";
    break;
  default:
    return str << "EnumCropMode(" << int(enval) << ")";
  }
  return str << val;
}
} // namespace Andor
} // namespace Pds