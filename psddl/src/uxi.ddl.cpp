
// *** Do not edit this file, it is auto-generated ***

#include "pdsdata/psddl/uxi.ddl.h"

#include <iostream>
namespace Pds {
namespace Uxi {
ConfigV1::ConfigV1(uint32_t arg__width, uint32_t arg__height, uint32_t arg__numberOfFrames, uint32_t arg__numberOfBytesPerPixel, uint32_t arg__sensorType, const uint32_t* arg__timeOn, const uint32_t* arg__timeOff, const uint32_t* arg__delay, uint32_t arg__readOnlyPots, const double* arg__pots)
    : _width(arg__width), _height(arg__height), _numberOfFrames(arg__numberOfFrames), _numberOfBytesPerPixel(arg__numberOfBytesPerPixel), _sensorType(arg__sensorType), _readOnlyPots(arg__readOnlyPots)
{
  if (arg__timeOn) std::copy(arg__timeOn, arg__timeOn+(2), &_timeOn[0]);
  if (arg__timeOff) std::copy(arg__timeOff, arg__timeOff+(2), &_timeOff[0]);
  if (arg__delay) std::copy(arg__delay, arg__delay+(2), &_delay[0]);
  if (arg__pots) std::copy(arg__pots, arg__pots+(13), &_pots[0]);
}
uint32_t
ConfigV1::frameSize() const {
  return this->numPixels()*this->numberOFBytesPerPixel();
}
ConfigV2::ConfigV2(Uxi::ConfigV2::RoiMode arg__roiEnable, const Uxi::RoiCoord& arg__roiRows, const Uxi::RoiCoord& arg__roiFrames, uint32_t arg__width, uint32_t arg__height, uint32_t arg__numberOfFrames, uint32_t arg__numberOfBytesPerPixel, uint32_t arg__sensorType, const uint32_t* arg__timeOn, const uint32_t* arg__timeOff, const uint32_t* arg__delay, uint32_t arg__readOnlyPots, const double* arg__pots)
    : _roiEnable(arg__roiEnable), _roiRows(arg__roiRows), _roiFrames(arg__roiFrames), _width(arg__width), _height(arg__height), _numberOfFrames(arg__numberOfFrames), _numberOfBytesPerPixel(arg__numberOfBytesPerPixel), _sensorType(arg__sensorType), _readOnlyPots(arg__readOnlyPots)
{
  if (arg__timeOn) std::copy(arg__timeOn, arg__timeOn+(2), &_timeOn[0]);
  if (arg__timeOff) std::copy(arg__timeOff, arg__timeOff+(2), &_timeOff[0]);
  if (arg__delay) std::copy(arg__delay, arg__delay+(2), &_delay[0]);
  if (arg__pots) std::copy(arg__pots, arg__pots+(13), &_pots[0]);
}
uint32_t
ConfigV2::frameSize() const {
  return this->numPixels()*this->numberOFBytesPerPixel();
}
std::ostream& operator<<(std::ostream& str, Uxi::ConfigV2::RoiMode enval) {
  const char* val;
  switch (enval) {
  case Uxi::ConfigV2::Off:
    val = "Off";
    break;
  case Uxi::ConfigV2::On:
    val = "On";
    break;
  default:
    return str << "RoiMode(" << int(enval) << ")";
  }
  return str << val;
}
} // namespace Uxi
} // namespace Pds
