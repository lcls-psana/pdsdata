
// *** Do not edit this file, it is auto-generated ***

#include "pdsdata/psddl/archon.ddl.h"

#include <iostream>
namespace Pds {
namespace Archon {
ConfigV1::ConfigV1(Archon::ConfigV1::ReadoutMode arg__readoutMode, uint16_t arg__sweepCount, uint32_t arg__integrationTime, uint32_t arg__nonIntegrationTime, uint32_t arg__preSkipPixels, uint32_t arg__pixels, uint32_t arg__postSkipPixels, uint32_t arg__overscanPixels, uint16_t arg__preSkipLines, uint16_t arg__lines, uint16_t arg__postSkipLines, uint16_t arg__overScanLines, uint16_t arg__horizontalBinning, uint16_t arg__verticalBinning, uint16_t arg__rgh, uint16_t arg__rgl, uint16_t arg__shp, uint16_t arg__shd, uint16_t arg__st, uint16_t arg__stm1, uint16_t arg__at, uint16_t arg__dwell1, uint16_t arg__dwell2, int16_t arg__rgHigh, int16_t arg__rgLow, int16_t arg__sHigh, int16_t arg__sLow, int16_t arg__aHigh, int16_t arg__aLow, int16_t arg__rgSlew, int16_t arg__sSlew, int16_t arg__aSlew, const char* arg__config)
    : _readoutMode(arg__readoutMode), _sweepCount(arg__sweepCount), _integrationTime(arg__integrationTime), _nonIntegrationTime(arg__nonIntegrationTime), _preSkipPixels(arg__preSkipPixels), _pixels(arg__pixels), _postSkipPixels(arg__postSkipPixels), _overscanPixels(arg__overscanPixels), _preSkipLines(arg__preSkipLines), _lines(arg__lines), _postSkipLines(arg__postSkipLines), _overScanLines(arg__overScanLines), _horizontalBinning(arg__horizontalBinning), _verticalBinning(arg__verticalBinning), _rgh(arg__rgh), _rgl(arg__rgl), _shp(arg__shp), _shd(arg__shd), _st(arg__st), _stm1(arg__stm1), _at(arg__at), _dwell1(arg__dwell1), _dwell2(arg__dwell2), _rgHigh(arg__rgHigh), _rgLow(arg__rgLow), _sHigh(arg__sHigh), _sLow(arg__sLow), _aHigh(arg__aHigh), _aLow(arg__aLow), _rgSlew(arg__rgSlew), _sSlew(arg__sSlew), _aSlew(arg__aSlew)
{
  if (arg__config) std::copy(arg__config, arg__config+(256), &_config[0]);
}
std::ostream& operator<<(std::ostream& str, Archon::ConfigV1::ReadoutMode enval) {
  const char* val;
  switch (enval) {
  case Archon::ConfigV1::Single:
    val = "Single";
    break;
  case Archon::ConfigV1::Continuous:
    val = "Continuous";
    break;
  case Archon::ConfigV1::Triggered:
    val = "Triggered";
    break;
  default:
    return str << "ReadoutMode(" << int(enval) << ")";
  }
  return str << val;
}
ConfigV2::ConfigV2(Archon::ConfigV2::ReadoutMode arg__readoutMode, uint16_t arg__exposureEventCode, uint32_t arg__configSize, uint32_t arg__preFrameSweepCount, uint32_t arg__idleSweepCount, uint32_t arg__integrationTime, uint32_t arg__nonIntegrationTime, uint32_t arg__batches, uint32_t arg__pixels, uint32_t arg__lines, uint32_t arg__horizontalBinning, uint32_t arg__verticalBinning, uint32_t arg__sensorPixels, uint32_t arg__sensorLines, uint32_t arg__sensorTaps, uint32_t arg__st, uint32_t arg__stm1, uint32_t arg__at, const char* arg__config)
    : _readoutMode(arg__readoutMode), _exposureEventCode(arg__exposureEventCode), _configSize(arg__configSize), _preFrameSweepCount(arg__preFrameSweepCount), _idleSweepCount(arg__idleSweepCount), _integrationTime(arg__integrationTime), _nonIntegrationTime(arg__nonIntegrationTime), _batches(arg__batches), _pixels(arg__pixels), _lines(arg__lines), _horizontalBinning(arg__horizontalBinning), _verticalBinning(arg__verticalBinning), _sensorPixels(arg__sensorPixels), _sensorLines(arg__sensorLines), _sensorTaps(arg__sensorTaps), _st(arg__st), _stm1(arg__stm1), _at(arg__at)
{
  if (arg__config and (this->configSize())) {
    ptrdiff_t offset = 68;
    char* data = reinterpret_cast<char*>(((char*)this)+offset);
    std::copy(arg__config, arg__config+(this->configSize()), data);
  }
}
std::vector<int>
ConfigV2::config_shape() const {
  std::vector<int> shape;
  shape.reserve(1);
  shape.push_back(this->configSize());
  return shape;
}
std::ostream& operator<<(std::ostream& str, Archon::ConfigV2::ReadoutMode enval) {
  const char* val;
  switch (enval) {
  case Archon::ConfigV2::Single:
    val = "Single";
    break;
  case Archon::ConfigV2::Continuous:
    val = "Continuous";
    break;
  case Archon::ConfigV2::Triggered:
    val = "Triggered";
    break;
  default:
    return str << "ReadoutMode(" << int(enval) << ")";
  }
  return str << val;
}
ConfigV3::ConfigV3(Archon::ConfigV3::ReadoutMode arg__readoutMode, Archon::ConfigV3::Switch arg__power, uint16_t arg__exposureEventCode, uint32_t arg__configSize, uint32_t arg__preFrameSweepCount, uint32_t arg__idleSweepCount, uint32_t arg__integrationTime, uint32_t arg__nonIntegrationTime, uint32_t arg__batches, uint32_t arg__pixels, uint32_t arg__lines, uint32_t arg__horizontalBinning, uint32_t arg__verticalBinning, uint32_t arg__sensorPixels, uint32_t arg__sensorLines, uint32_t arg__sensorTaps, uint32_t arg__st, uint32_t arg__stm1, uint32_t arg__at, Archon::ConfigV3::Switch arg__bias, Archon::ConfigV3::BiasChannelId arg__biasChan, float arg__biasVoltage, uint32_t arg__configVersion, const char* arg__config)
    : _readoutMode(arg__readoutMode), _power(arg__power), _exposureEventCode(arg__exposureEventCode), _configSize(arg__configSize), _preFrameSweepCount(arg__preFrameSweepCount), _idleSweepCount(arg__idleSweepCount), _integrationTime(arg__integrationTime), _nonIntegrationTime(arg__nonIntegrationTime), _batches(arg__batches), _pixels(arg__pixels), _lines(arg__lines), _horizontalBinning(arg__horizontalBinning), _verticalBinning(arg__verticalBinning), _sensorPixels(arg__sensorPixels), _sensorLines(arg__sensorLines), _sensorTaps(arg__sensorTaps), _st(arg__st), _stm1(arg__stm1), _at(arg__at), _bias(arg__bias), _biasChan(arg__biasChan), _biasVoltage(arg__biasVoltage), _configVersion(arg__configVersion)
{
  if (arg__config and (this->configSize())) {
    ptrdiff_t offset = 84;
    char* data = reinterpret_cast<char*>(((char*)this)+offset);
    std::copy(arg__config, arg__config+(this->configSize()), data);
  }
}
std::vector<int>
ConfigV3::config_shape() const {
  std::vector<int> shape;
  shape.reserve(1);
  shape.push_back(this->configSize());
  return shape;
}
std::ostream& operator<<(std::ostream& str, Archon::ConfigV3::ReadoutMode enval) {
  const char* val;
  switch (enval) {
  case Archon::ConfigV3::FreeRun:
    val = "FreeRun";
    break;
  case Archon::ConfigV3::Triggered:
    val = "Triggered";
    break;
  default:
    return str << "ReadoutMode(" << int(enval) << ")";
  }
  return str << val;
}
std::ostream& operator<<(std::ostream& str, Archon::ConfigV3::Switch enval) {
  const char* val;
  switch (enval) {
  case Archon::ConfigV3::Off:
    val = "Off";
    break;
  case Archon::ConfigV3::On:
    val = "On";
    break;
  default:
    return str << "Switch(" << int(enval) << ")";
  }
  return str << val;
}
std::ostream& operator<<(std::ostream& str, Archon::ConfigV3::BiasChannelId enval) {
  const char* val;
  switch (enval) {
  case Archon::ConfigV3::NV4:
    val = "NV4";
    break;
  case Archon::ConfigV3::NV3:
    val = "NV3";
    break;
  case Archon::ConfigV3::NV2:
    val = "NV2";
    break;
  case Archon::ConfigV3::NV1:
    val = "NV1";
    break;
  case Archon::ConfigV3::PV1:
    val = "PV1";
    break;
  case Archon::ConfigV3::PV2:
    val = "PV2";
    break;
  case Archon::ConfigV3::PV3:
    val = "PV3";
    break;
  case Archon::ConfigV3::PV4:
    val = "PV4";
    break;
  default:
    return str << "BiasChannelId(" << int(enval) << ")";
  }
  return str << val;
}
ConfigV4::ConfigV4(Archon::ConfigV4::ReadoutMode arg__readoutMode, Archon::ConfigV4::Switch arg__power, uint16_t arg__exposureEventCode, uint32_t arg__configSize, uint32_t arg__preFrameSweepCount, uint32_t arg__idleSweepCount, uint32_t arg__preSkipLines, uint32_t arg__integrationTime, uint32_t arg__nonIntegrationTime, uint32_t arg__batches, uint32_t arg__pixels, uint32_t arg__lines, uint32_t arg__horizontalBinning, uint32_t arg__verticalBinning, uint32_t arg__sensorPixels, uint32_t arg__sensorLines, uint32_t arg__sensorTaps, uint32_t arg__st, uint32_t arg__stm1, uint32_t arg__at, Archon::ConfigV4::Switch arg__bias, Archon::ConfigV4::BiasChannelId arg__biasChan, float arg__biasVoltage, uint32_t arg__configVersion, const char* arg__config)
    : _readoutMode(arg__readoutMode), _power(arg__power), _exposureEventCode(arg__exposureEventCode), _configSize(arg__configSize), _preFrameSweepCount(arg__preFrameSweepCount), _idleSweepCount(arg__idleSweepCount), _preSkipLines(arg__preSkipLines), _integrationTime(arg__integrationTime), _nonIntegrationTime(arg__nonIntegrationTime), _batches(arg__batches), _pixels(arg__pixels), _lines(arg__lines), _horizontalBinning(arg__horizontalBinning), _verticalBinning(arg__verticalBinning), _sensorPixels(arg__sensorPixels), _sensorLines(arg__sensorLines), _sensorTaps(arg__sensorTaps), _st(arg__st), _stm1(arg__stm1), _at(arg__at), _bias(arg__bias), _biasChan(arg__biasChan), _biasVoltage(arg__biasVoltage), _configVersion(arg__configVersion)
{
  if (arg__config and (this->configSize())) {
    ptrdiff_t offset = 88;
    char* data = reinterpret_cast<char*>(((char*)this)+offset);
    std::copy(arg__config, arg__config+(this->configSize()), data);
  }
}
std::vector<int>
ConfigV4::config_shape() const {
  std::vector<int> shape;
  shape.reserve(1);
  shape.push_back(this->configSize());
  return shape;
}
std::ostream& operator<<(std::ostream& str, Archon::ConfigV4::ReadoutMode enval) {
  const char* val;
  switch (enval) {
  case Archon::ConfigV4::FreeRun:
    val = "FreeRun";
    break;
  case Archon::ConfigV4::Triggered:
    val = "Triggered";
    break;
  default:
    return str << "ReadoutMode(" << int(enval) << ")";
  }
  return str << val;
}
std::ostream& operator<<(std::ostream& str, Archon::ConfigV4::Switch enval) {
  const char* val;
  switch (enval) {
  case Archon::ConfigV4::Off:
    val = "Off";
    break;
  case Archon::ConfigV4::On:
    val = "On";
    break;
  default:
    return str << "Switch(" << int(enval) << ")";
  }
  return str << val;
}
std::ostream& operator<<(std::ostream& str, Archon::ConfigV4::BiasChannelId enval) {
  const char* val;
  switch (enval) {
  case Archon::ConfigV4::NV4:
    val = "NV4";
    break;
  case Archon::ConfigV4::NV3:
    val = "NV3";
    break;
  case Archon::ConfigV4::NV2:
    val = "NV2";
    break;
  case Archon::ConfigV4::NV1:
    val = "NV1";
    break;
  case Archon::ConfigV4::PV1:
    val = "PV1";
    break;
  case Archon::ConfigV4::PV2:
    val = "PV2";
    break;
  case Archon::ConfigV4::PV3:
    val = "PV3";
    break;
  case Archon::ConfigV4::PV4:
    val = "PV4";
    break;
  default:
    return str << "BiasChannelId(" << int(enval) << ")";
  }
  return str << val;
}
} // namespace Archon
} // namespace Pds
