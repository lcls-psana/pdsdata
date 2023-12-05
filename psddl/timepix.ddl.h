#ifndef PDS_TIMEPIX_DDL_H
#define PDS_TIMEPIX_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <iosfwd>
#include <cstddef>
#include <cstring>
#include "pdsdata/xtc/TypeId.hh"
#include "ndarray/ndarray.h"
namespace Pds {
namespace Timepix {

/** @class ConfigV1

  
*/

#pragma pack(push,4)

class ConfigV1 {
public:
  enum { TypeId = Pds::TypeId::Id_TimepixConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  enum { ChipCount = 4 };
  enum ReadoutSpeed {
    ReadoutSpeed_Slow = 0,
    ReadoutSpeed_Fast = 1,
  };
  enum TriggerMode {
    TriggerMode_ExtPos = 0,
    TriggerMode_ExtNeg = 1,
    TriggerMode_Soft = 2,
  };
  ConfigV1(Timepix::ConfigV1::ReadoutSpeed arg__readoutSpeed, Timepix::ConfigV1::TriggerMode arg__triggerMode, int32_t arg__shutterTimeout, int32_t arg__dac0Ikrum, int32_t arg__dac0Disc, int32_t arg__dac0Preamp, int32_t arg__dac0BufAnalogA, int32_t arg__dac0BufAnalogB, int32_t arg__dac0Hist, int32_t arg__dac0ThlFine, int32_t arg__dac0ThlCourse, int32_t arg__dac0Vcas, int32_t arg__dac0Fbk, int32_t arg__dac0Gnd, int32_t arg__dac0Ths, int32_t arg__dac0BiasLvds, int32_t arg__dac0RefLvds, int32_t arg__dac1Ikrum, int32_t arg__dac1Disc, int32_t arg__dac1Preamp, int32_t arg__dac1BufAnalogA, int32_t arg__dac1BufAnalogB, int32_t arg__dac1Hist, int32_t arg__dac1ThlFine, int32_t arg__dac1ThlCourse, int32_t arg__dac1Vcas, int32_t arg__dac1Fbk, int32_t arg__dac1Gnd, int32_t arg__dac1Ths, int32_t arg__dac1BiasLvds, int32_t arg__dac1RefLvds, int32_t arg__dac2Ikrum, int32_t arg__dac2Disc, int32_t arg__dac2Preamp, int32_t arg__dac2BufAnalogA, int32_t arg__dac2BufAnalogB, int32_t arg__dac2Hist, int32_t arg__dac2ThlFine, int32_t arg__dac2ThlCourse, int32_t arg__dac2Vcas, int32_t arg__dac2Fbk, int32_t arg__dac2Gnd, int32_t arg__dac2Ths, int32_t arg__dac2BiasLvds, int32_t arg__dac2RefLvds, int32_t arg__dac3Ikrum, int32_t arg__dac3Disc, int32_t arg__dac3Preamp, int32_t arg__dac3BufAnalogA, int32_t arg__dac3BufAnalogB, int32_t arg__dac3Hist, int32_t arg__dac3ThlFine, int32_t arg__dac3ThlCourse, int32_t arg__dac3Vcas, int32_t arg__dac3Fbk, int32_t arg__dac3Gnd, int32_t arg__dac3Ths, int32_t arg__dac3BiasLvds, int32_t arg__dac3RefLvds)
    : _readoutSpeed(arg__readoutSpeed), _triggerMode(arg__triggerMode), _shutterTimeout(arg__shutterTimeout), _dac0Ikrum(arg__dac0Ikrum), _dac0Disc(arg__dac0Disc), _dac0Preamp(arg__dac0Preamp), _dac0BufAnalogA(arg__dac0BufAnalogA), _dac0BufAnalogB(arg__dac0BufAnalogB), _dac0Hist(arg__dac0Hist), _dac0ThlFine(arg__dac0ThlFine), _dac0ThlCourse(arg__dac0ThlCourse), _dac0Vcas(arg__dac0Vcas), _dac0Fbk(arg__dac0Fbk), _dac0Gnd(arg__dac0Gnd), _dac0Ths(arg__dac0Ths), _dac0BiasLvds(arg__dac0BiasLvds), _dac0RefLvds(arg__dac0RefLvds), _dac1Ikrum(arg__dac1Ikrum), _dac1Disc(arg__dac1Disc), _dac1Preamp(arg__dac1Preamp), _dac1BufAnalogA(arg__dac1BufAnalogA), _dac1BufAnalogB(arg__dac1BufAnalogB), _dac1Hist(arg__dac1Hist), _dac1ThlFine(arg__dac1ThlFine), _dac1ThlCourse(arg__dac1ThlCourse), _dac1Vcas(arg__dac1Vcas), _dac1Fbk(arg__dac1Fbk), _dac1Gnd(arg__dac1Gnd), _dac1Ths(arg__dac1Ths), _dac1BiasLvds(arg__dac1BiasLvds), _dac1RefLvds(arg__dac1RefLvds), _dac2Ikrum(arg__dac2Ikrum), _dac2Disc(arg__dac2Disc), _dac2Preamp(arg__dac2Preamp), _dac2BufAnalogA(arg__dac2BufAnalogA), _dac2BufAnalogB(arg__dac2BufAnalogB), _dac2Hist(arg__dac2Hist), _dac2ThlFine(arg__dac2ThlFine), _dac2ThlCourse(arg__dac2ThlCourse), _dac2Vcas(arg__dac2Vcas), _dac2Fbk(arg__dac2Fbk), _dac2Gnd(arg__dac2Gnd), _dac2Ths(arg__dac2Ths), _dac2BiasLvds(arg__dac2BiasLvds), _dac2RefLvds(arg__dac2RefLvds), _dac3Ikrum(arg__dac3Ikrum), _dac3Disc(arg__dac3Disc), _dac3Preamp(arg__dac3Preamp), _dac3BufAnalogA(arg__dac3BufAnalogA), _dac3BufAnalogB(arg__dac3BufAnalogB), _dac3Hist(arg__dac3Hist), _dac3ThlFine(arg__dac3ThlFine), _dac3ThlCourse(arg__dac3ThlCourse), _dac3Vcas(arg__dac3Vcas), _dac3Fbk(arg__dac3Fbk), _dac3Gnd(arg__dac3Gnd), _dac3Ths(arg__dac3Ths), _dac3BiasLvds(arg__dac3BiasLvds), _dac3RefLvds(arg__dac3RefLvds)
  {
  }
  ConfigV1() {}
  ConfigV1(const ConfigV1& other) {
    const char* src = reinterpret_cast<const char*>(&other);
    std::copy(src, src+other._sizeof(), reinterpret_cast<char*>(this));
  }
  ConfigV1& operator=(const ConfigV1& other) {
    const char* src = reinterpret_cast<const char*>(&other);
    std::copy(src, src+other._sizeof(), reinterpret_cast<char*>(this));
    return *this;
  }
  Timepix::ConfigV1::ReadoutSpeed readoutSpeed() const { return Timepix::ConfigV1::ReadoutSpeed(_readoutSpeed); }
  Timepix::ConfigV1::TriggerMode triggerMode() const { return Timepix::ConfigV1::TriggerMode(_triggerMode); }
  int32_t shutterTimeout() const { return _shutterTimeout; }
  int32_t dac0Ikrum() const { return _dac0Ikrum; }
  int32_t dac0Disc() const { return _dac0Disc; }
  int32_t dac0Preamp() const { return _dac0Preamp; }
  int32_t dac0BufAnalogA() const { return _dac0BufAnalogA; }
  int32_t dac0BufAnalogB() const { return _dac0BufAnalogB; }
  int32_t dac0Hist() const { return _dac0Hist; }
  int32_t dac0ThlFine() const { return _dac0ThlFine; }
  int32_t dac0ThlCourse() const { return _dac0ThlCourse; }
  int32_t dac0Vcas() const { return _dac0Vcas; }
  int32_t dac0Fbk() const { return _dac0Fbk; }
  int32_t dac0Gnd() const { return _dac0Gnd; }
  int32_t dac0Ths() const { return _dac0Ths; }
  int32_t dac0BiasLvds() const { return _dac0BiasLvds; }
  int32_t dac0RefLvds() const { return _dac0RefLvds; }
  int32_t dac1Ikrum() const { return _dac1Ikrum; }
  int32_t dac1Disc() const { return _dac1Disc; }
  int32_t dac1Preamp() const { return _dac1Preamp; }
  int32_t dac1BufAnalogA() const { return _dac1BufAnalogA; }
  int32_t dac1BufAnalogB() const { return _dac1BufAnalogB; }
  int32_t dac1Hist() const { return _dac1Hist; }
  int32_t dac1ThlFine() const { return _dac1ThlFine; }
  int32_t dac1ThlCourse() const { return _dac1ThlCourse; }
  int32_t dac1Vcas() const { return _dac1Vcas; }
  int32_t dac1Fbk() const { return _dac1Fbk; }
  int32_t dac1Gnd() const { return _dac1Gnd; }
  int32_t dac1Ths() const { return _dac1Ths; }
  int32_t dac1BiasLvds() const { return _dac1BiasLvds; }
  int32_t dac1RefLvds() const { return _dac1RefLvds; }
  int32_t dac2Ikrum() const { return _dac2Ikrum; }
  int32_t dac2Disc() const { return _dac2Disc; }
  int32_t dac2Preamp() const { return _dac2Preamp; }
  int32_t dac2BufAnalogA() const { return _dac2BufAnalogA; }
  int32_t dac2BufAnalogB() const { return _dac2BufAnalogB; }
  int32_t dac2Hist() const { return _dac2Hist; }
  int32_t dac2ThlFine() const { return _dac2ThlFine; }
  int32_t dac2ThlCourse() const { return _dac2ThlCourse; }
  int32_t dac2Vcas() const { return _dac2Vcas; }
  int32_t dac2Fbk() const { return _dac2Fbk; }
  int32_t dac2Gnd() const { return _dac2Gnd; }
  int32_t dac2Ths() const { return _dac2Ths; }
  int32_t dac2BiasLvds() const { return _dac2BiasLvds; }
  int32_t dac2RefLvds() const { return _dac2RefLvds; }
  int32_t dac3Ikrum() const { return _dac3Ikrum; }
  int32_t dac3Disc() const { return _dac3Disc; }
  int32_t dac3Preamp() const { return _dac3Preamp; }
  int32_t dac3BufAnalogA() const { return _dac3BufAnalogA; }
  int32_t dac3BufAnalogB() const { return _dac3BufAnalogB; }
  int32_t dac3Hist() const { return _dac3Hist; }
  int32_t dac3ThlFine() const { return _dac3ThlFine; }
  int32_t dac3ThlCourse() const { return _dac3ThlCourse; }
  int32_t dac3Vcas() const { return _dac3Vcas; }
  int32_t dac3Fbk() const { return _dac3Fbk; }
  int32_t dac3Gnd() const { return _dac3Gnd; }
  int32_t dac3Ths() const { return _dac3Ths; }
  int32_t dac3BiasLvds() const { return _dac3BiasLvds; }
  int32_t dac3RefLvds() const { return _dac3RefLvds; }
  static uint32_t _sizeof() { return 232; }
private:
  uint8_t	_readoutSpeed;
  uint8_t	_triggerMode;
  int16_t	_pad;
  int32_t	_shutterTimeout;
  int32_t	_dac0Ikrum;
  int32_t	_dac0Disc;
  int32_t	_dac0Preamp;
  int32_t	_dac0BufAnalogA;
  int32_t	_dac0BufAnalogB;
  int32_t	_dac0Hist;
  int32_t	_dac0ThlFine;
  int32_t	_dac0ThlCourse;
  int32_t	_dac0Vcas;
  int32_t	_dac0Fbk;
  int32_t	_dac0Gnd;
  int32_t	_dac0Ths;
  int32_t	_dac0BiasLvds;
  int32_t	_dac0RefLvds;
  int32_t	_dac1Ikrum;
  int32_t	_dac1Disc;
  int32_t	_dac1Preamp;
  int32_t	_dac1BufAnalogA;
  int32_t	_dac1BufAnalogB;
  int32_t	_dac1Hist;
  int32_t	_dac1ThlFine;
  int32_t	_dac1ThlCourse;
  int32_t	_dac1Vcas;
  int32_t	_dac1Fbk;
  int32_t	_dac1Gnd;
  int32_t	_dac1Ths;
  int32_t	_dac1BiasLvds;
  int32_t	_dac1RefLvds;
  int32_t	_dac2Ikrum;
  int32_t	_dac2Disc;
  int32_t	_dac2Preamp;
  int32_t	_dac2BufAnalogA;
  int32_t	_dac2BufAnalogB;
  int32_t	_dac2Hist;
  int32_t	_dac2ThlFine;
  int32_t	_dac2ThlCourse;
  int32_t	_dac2Vcas;
  int32_t	_dac2Fbk;
  int32_t	_dac2Gnd;
  int32_t	_dac2Ths;
  int32_t	_dac2BiasLvds;
  int32_t	_dac2RefLvds;
  int32_t	_dac3Ikrum;
  int32_t	_dac3Disc;
  int32_t	_dac3Preamp;
  int32_t	_dac3BufAnalogA;
  int32_t	_dac3BufAnalogB;
  int32_t	_dac3Hist;
  int32_t	_dac3ThlFine;
  int32_t	_dac3ThlCourse;
  int32_t	_dac3Vcas;
  int32_t	_dac3Fbk;
  int32_t	_dac3Gnd;
  int32_t	_dac3Ths;
  int32_t	_dac3BiasLvds;
  int32_t	_dac3RefLvds;
};
std::ostream& operator<<(std::ostream& str, Timepix::ConfigV1::ReadoutSpeed enval);
std::ostream& operator<<(std::ostream& str, Timepix::ConfigV1::TriggerMode enval);
#pragma pack(pop)

/** @class ConfigV2

  
*/

#pragma pack(push,4)

class ConfigV2 {
public:
  enum { TypeId = Pds::TypeId::Id_TimepixConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 2 /**< XTC type version number */ };
  enum { ChipCount = 4 };
  enum { ChipNameMax = 16 };
  enum { PixelThreshMax = 4*256*256 };
  enum ReadoutSpeed {
    ReadoutSpeed_Slow = 0,
    ReadoutSpeed_Fast = 1,
  };
  enum TriggerMode {
    TriggerMode_ExtPos = 0,
    TriggerMode_ExtNeg = 1,
    TriggerMode_Soft = 2,
  };
  ConfigV2(Timepix::ConfigV2::ReadoutSpeed arg__readoutSpeed, Timepix::ConfigV2::TriggerMode arg__triggerMode, int32_t arg__timepixSpeed, int32_t arg__dac0Ikrum, int32_t arg__dac0Disc, int32_t arg__dac0Preamp, int32_t arg__dac0BufAnalogA, int32_t arg__dac0BufAnalogB, int32_t arg__dac0Hist, int32_t arg__dac0ThlFine, int32_t arg__dac0ThlCourse, int32_t arg__dac0Vcas, int32_t arg__dac0Fbk, int32_t arg__dac0Gnd, int32_t arg__dac0Ths, int32_t arg__dac0BiasLvds, int32_t arg__dac0RefLvds, int32_t arg__dac1Ikrum, int32_t arg__dac1Disc, int32_t arg__dac1Preamp, int32_t arg__dac1BufAnalogA, int32_t arg__dac1BufAnalogB, int32_t arg__dac1Hist, int32_t arg__dac1ThlFine, int32_t arg__dac1ThlCourse, int32_t arg__dac1Vcas, int32_t arg__dac1Fbk, int32_t arg__dac1Gnd, int32_t arg__dac1Ths, int32_t arg__dac1BiasLvds, int32_t arg__dac1RefLvds, int32_t arg__dac2Ikrum, int32_t arg__dac2Disc, int32_t arg__dac2Preamp, int32_t arg__dac2BufAnalogA, int32_t arg__dac2BufAnalogB, int32_t arg__dac2Hist, int32_t arg__dac2ThlFine, int32_t arg__dac2ThlCourse, int32_t arg__dac2Vcas, int32_t arg__dac2Fbk, int32_t arg__dac2Gnd, int32_t arg__dac2Ths, int32_t arg__dac2BiasLvds, int32_t arg__dac2RefLvds, int32_t arg__dac3Ikrum, int32_t arg__dac3Disc, int32_t arg__dac3Preamp, int32_t arg__dac3BufAnalogA, int32_t arg__dac3BufAnalogB, int32_t arg__dac3Hist, int32_t arg__dac3ThlFine, int32_t arg__dac3ThlCourse, int32_t arg__dac3Vcas, int32_t arg__dac3Fbk, int32_t arg__dac3Gnd, int32_t arg__dac3Ths, int32_t arg__dac3BiasLvds, int32_t arg__dac3RefLvds, int32_t arg__driverVersion, uint32_t arg__firmwareVersion, uint32_t arg__pixelThreshSize, const uint8_t* arg__pixelThresh, const char* arg__chip0Name, const char* arg__chip1Name, const char* arg__chip2Name, const char* arg__chip3Name, int32_t arg__chip0ID, int32_t arg__chip1ID, int32_t arg__chip2ID, int32_t arg__chip3ID)
    : _readoutSpeed(arg__readoutSpeed), _triggerMode(arg__triggerMode), _timepixSpeed(arg__timepixSpeed), _dac0Ikrum(arg__dac0Ikrum), _dac0Disc(arg__dac0Disc), _dac0Preamp(arg__dac0Preamp), _dac0BufAnalogA(arg__dac0BufAnalogA), _dac0BufAnalogB(arg__dac0BufAnalogB), _dac0Hist(arg__dac0Hist), _dac0ThlFine(arg__dac0ThlFine), _dac0ThlCourse(arg__dac0ThlCourse), _dac0Vcas(arg__dac0Vcas), _dac0Fbk(arg__dac0Fbk), _dac0Gnd(arg__dac0Gnd), _dac0Ths(arg__dac0Ths), _dac0BiasLvds(arg__dac0BiasLvds), _dac0RefLvds(arg__dac0RefLvds), _dac1Ikrum(arg__dac1Ikrum), _dac1Disc(arg__dac1Disc), _dac1Preamp(arg__dac1Preamp), _dac1BufAnalogA(arg__dac1BufAnalogA), _dac1BufAnalogB(arg__dac1BufAnalogB), _dac1Hist(arg__dac1Hist), _dac1ThlFine(arg__dac1ThlFine), _dac1ThlCourse(arg__dac1ThlCourse), _dac1Vcas(arg__dac1Vcas), _dac1Fbk(arg__dac1Fbk), _dac1Gnd(arg__dac1Gnd), _dac1Ths(arg__dac1Ths), _dac1BiasLvds(arg__dac1BiasLvds), _dac1RefLvds(arg__dac1RefLvds), _dac2Ikrum(arg__dac2Ikrum), _dac2Disc(arg__dac2Disc), _dac2Preamp(arg__dac2Preamp), _dac2BufAnalogA(arg__dac2BufAnalogA), _dac2BufAnalogB(arg__dac2BufAnalogB), _dac2Hist(arg__dac2Hist), _dac2ThlFine(arg__dac2ThlFine), _dac2ThlCourse(arg__dac2ThlCourse), _dac2Vcas(arg__dac2Vcas), _dac2Fbk(arg__dac2Fbk), _dac2Gnd(arg__dac2Gnd), _dac2Ths(arg__dac2Ths), _dac2BiasLvds(arg__dac2BiasLvds), _dac2RefLvds(arg__dac2RefLvds), _dac3Ikrum(arg__dac3Ikrum), _dac3Disc(arg__dac3Disc), _dac3Preamp(arg__dac3Preamp), _dac3BufAnalogA(arg__dac3BufAnalogA), _dac3BufAnalogB(arg__dac3BufAnalogB), _dac3Hist(arg__dac3Hist), _dac3ThlFine(arg__dac3ThlFine), _dac3ThlCourse(arg__dac3ThlCourse), _dac3Vcas(arg__dac3Vcas), _dac3Fbk(arg__dac3Fbk), _dac3Gnd(arg__dac3Gnd), _dac3Ths(arg__dac3Ths), _dac3BiasLvds(arg__dac3BiasLvds), _dac3RefLvds(arg__dac3RefLvds), _driverVersion(arg__driverVersion), _firmwareVersion(arg__firmwareVersion), _pixelThreshSize(arg__pixelThreshSize), _chip0ID(arg__chip0ID), _chip1ID(arg__chip1ID), _chip2ID(arg__chip2ID), _chip3ID(arg__chip3ID)
  {
    if (arg__pixelThresh) std::copy(arg__pixelThresh, arg__pixelThresh+(4*256*256), &_pixelThresh[0]);
    if (arg__chip0Name) std::copy(arg__chip0Name, arg__chip0Name+(16), &_chip0Name[0]);
    if (arg__chip1Name) std::copy(arg__chip1Name, arg__chip1Name+(16), &_chip1Name[0]);
    if (arg__chip2Name) std::copy(arg__chip2Name, arg__chip2Name+(16), &_chip2Name[0]);
    if (arg__chip3Name) std::copy(arg__chip3Name, arg__chip3Name+(16), &_chip3Name[0]);
  }
  ConfigV2() {}
  ConfigV2(const ConfigV2& other) {
    const char* src = reinterpret_cast<const char*>(&other);
    std::copy(src, src+other._sizeof(), reinterpret_cast<char*>(this));
  }
  ConfigV2& operator=(const ConfigV2& other) {
    const char* src = reinterpret_cast<const char*>(&other);
    std::copy(src, src+other._sizeof(), reinterpret_cast<char*>(this));
    return *this;
  }
  Timepix::ConfigV2::ReadoutSpeed readoutSpeed() const { return Timepix::ConfigV2::ReadoutSpeed(_readoutSpeed); }
  Timepix::ConfigV2::TriggerMode triggerMode() const { return Timepix::ConfigV2::TriggerMode(_triggerMode); }
  int32_t timepixSpeed() const { return _timepixSpeed; }
  int32_t dac0Ikrum() const { return _dac0Ikrum; }
  int32_t dac0Disc() const { return _dac0Disc; }
  int32_t dac0Preamp() const { return _dac0Preamp; }
  int32_t dac0BufAnalogA() const { return _dac0BufAnalogA; }
  int32_t dac0BufAnalogB() const { return _dac0BufAnalogB; }
  int32_t dac0Hist() const { return _dac0Hist; }
  int32_t dac0ThlFine() const { return _dac0ThlFine; }
  int32_t dac0ThlCourse() const { return _dac0ThlCourse; }
  int32_t dac0Vcas() const { return _dac0Vcas; }
  int32_t dac0Fbk() const { return _dac0Fbk; }
  int32_t dac0Gnd() const { return _dac0Gnd; }
  int32_t dac0Ths() const { return _dac0Ths; }
  int32_t dac0BiasLvds() const { return _dac0BiasLvds; }
  int32_t dac0RefLvds() const { return _dac0RefLvds; }
  int32_t dac1Ikrum() const { return _dac1Ikrum; }
  int32_t dac1Disc() const { return _dac1Disc; }
  int32_t dac1Preamp() const { return _dac1Preamp; }
  int32_t dac1BufAnalogA() const { return _dac1BufAnalogA; }
  int32_t dac1BufAnalogB() const { return _dac1BufAnalogB; }
  int32_t dac1Hist() const { return _dac1Hist; }
  int32_t dac1ThlFine() const { return _dac1ThlFine; }
  int32_t dac1ThlCourse() const { return _dac1ThlCourse; }
  int32_t dac1Vcas() const { return _dac1Vcas; }
  int32_t dac1Fbk() const { return _dac1Fbk; }
  int32_t dac1Gnd() const { return _dac1Gnd; }
  int32_t dac1Ths() const { return _dac1Ths; }
  int32_t dac1BiasLvds() const { return _dac1BiasLvds; }
  int32_t dac1RefLvds() const { return _dac1RefLvds; }
  int32_t dac2Ikrum() const { return _dac2Ikrum; }
  int32_t dac2Disc() const { return _dac2Disc; }
  int32_t dac2Preamp() const { return _dac2Preamp; }
  int32_t dac2BufAnalogA() const { return _dac2BufAnalogA; }
  int32_t dac2BufAnalogB() const { return _dac2BufAnalogB; }
  int32_t dac2Hist() const { return _dac2Hist; }
  int32_t dac2ThlFine() const { return _dac2ThlFine; }
  int32_t dac2ThlCourse() const { return _dac2ThlCourse; }
  int32_t dac2Vcas() const { return _dac2Vcas; }
  int32_t dac2Fbk() const { return _dac2Fbk; }
  int32_t dac2Gnd() const { return _dac2Gnd; }
  int32_t dac2Ths() const { return _dac2Ths; }
  int32_t dac2BiasLvds() const { return _dac2BiasLvds; }
  int32_t dac2RefLvds() const { return _dac2RefLvds; }
  int32_t dac3Ikrum() const { return _dac3Ikrum; }
  int32_t dac3Disc() const { return _dac3Disc; }
  int32_t dac3Preamp() const { return _dac3Preamp; }
  int32_t dac3BufAnalogA() const { return _dac3BufAnalogA; }
  int32_t dac3BufAnalogB() const { return _dac3BufAnalogB; }
  int32_t dac3Hist() const { return _dac3Hist; }
  int32_t dac3ThlFine() const { return _dac3ThlFine; }
  int32_t dac3ThlCourse() const { return _dac3ThlCourse; }
  int32_t dac3Vcas() const { return _dac3Vcas; }
  int32_t dac3Fbk() const { return _dac3Fbk; }
  int32_t dac3Gnd() const { return _dac3Gnd; }
  int32_t dac3Ths() const { return _dac3Ths; }
  int32_t dac3BiasLvds() const { return _dac3BiasLvds; }
  int32_t dac3RefLvds() const { return _dac3RefLvds; }
  int32_t driverVersion() const { return _driverVersion; }
  uint32_t firmwareVersion() const { return _firmwareVersion; }
  uint32_t pixelThreshSize() const { return _pixelThreshSize; }
  /**     Note: this overloaded method accepts shared pointer argument which must point to an object containing
    this instance, the returned ndarray object can be used even after this instance disappears. */
  template <typename T>
  ndarray<const uint8_t, 1> pixelThresh(const boost::shared_ptr<T>& owner) const { 
    const uint8_t* data = &_pixelThresh[0];
    return make_ndarray(boost::shared_ptr<const uint8_t>(owner, data), PixelThreshMax);
  }
  /**     Note: this method returns ndarray instance which does not control lifetime
    of the data, do not use returned ndarray after this instance disappears. */
  ndarray<const uint8_t, 1> pixelThresh() const { return make_ndarray(&_pixelThresh[0], PixelThreshMax); }
  const char* chip0Name() const { return _chip0Name; }
  const char* chip1Name() const { return _chip1Name; }
  const char* chip2Name() const { return _chip2Name; }
  const char* chip3Name() const { return _chip3Name; }
  int32_t chip0ID() const { return _chip0ID; }
  int32_t chip1ID() const { return _chip1ID; }
  int32_t chip2ID() const { return _chip2ID; }
  int32_t chip3ID() const { return _chip3ID; }
  int32_t chipCount() const { return ChipCount; }
  static uint32_t _sizeof() { return ((((((((((((244+(1*(PixelThreshMax)))+(1*(ChipNameMax)))+(1*(ChipNameMax)))+(1*(ChipNameMax)))+(1*(ChipNameMax)))+4)+4)+4)+4)+4)-1)/4)*4; }
private:
  uint8_t	_readoutSpeed;
  uint8_t	_triggerMode;
  int16_t	_pad;
  int32_t	_timepixSpeed;
  int32_t	_dac0Ikrum;
  int32_t	_dac0Disc;
  int32_t	_dac0Preamp;
  int32_t	_dac0BufAnalogA;
  int32_t	_dac0BufAnalogB;
  int32_t	_dac0Hist;
  int32_t	_dac0ThlFine;
  int32_t	_dac0ThlCourse;
  int32_t	_dac0Vcas;
  int32_t	_dac0Fbk;
  int32_t	_dac0Gnd;
  int32_t	_dac0Ths;
  int32_t	_dac0BiasLvds;
  int32_t	_dac0RefLvds;
  int32_t	_dac1Ikrum;
  int32_t	_dac1Disc;
  int32_t	_dac1Preamp;
  int32_t	_dac1BufAnalogA;
  int32_t	_dac1BufAnalogB;
  int32_t	_dac1Hist;
  int32_t	_dac1ThlFine;
  int32_t	_dac1ThlCourse;
  int32_t	_dac1Vcas;
  int32_t	_dac1Fbk;
  int32_t	_dac1Gnd;
  int32_t	_dac1Ths;
  int32_t	_dac1BiasLvds;
  int32_t	_dac1RefLvds;
  int32_t	_dac2Ikrum;
  int32_t	_dac2Disc;
  int32_t	_dac2Preamp;
  int32_t	_dac2BufAnalogA;
  int32_t	_dac2BufAnalogB;
  int32_t	_dac2Hist;
  int32_t	_dac2ThlFine;
  int32_t	_dac2ThlCourse;
  int32_t	_dac2Vcas;
  int32_t	_dac2Fbk;
  int32_t	_dac2Gnd;
  int32_t	_dac2Ths;
  int32_t	_dac2BiasLvds;
  int32_t	_dac2RefLvds;
  int32_t	_dac3Ikrum;
  int32_t	_dac3Disc;
  int32_t	_dac3Preamp;
  int32_t	_dac3BufAnalogA;
  int32_t	_dac3BufAnalogB;
  int32_t	_dac3Hist;
  int32_t	_dac3ThlFine;
  int32_t	_dac3ThlCourse;
  int32_t	_dac3Vcas;
  int32_t	_dac3Fbk;
  int32_t	_dac3Gnd;
  int32_t	_dac3Ths;
  int32_t	_dac3BiasLvds;
  int32_t	_dac3RefLvds;
  int32_t	_driverVersion;
  uint32_t	_firmwareVersion;
  uint32_t	_pixelThreshSize;
  uint8_t	_pixelThresh[PixelThreshMax];
  char	_chip0Name[ChipNameMax];
  char	_chip1Name[ChipNameMax];
  char	_chip2Name[ChipNameMax];
  char	_chip3Name[ChipNameMax];
  int32_t	_chip0ID;
  int32_t	_chip1ID;
  int32_t	_chip2ID;
  int32_t	_chip3ID;
};
std::ostream& operator<<(std::ostream& str, Timepix::ConfigV2::ReadoutSpeed enval);
std::ostream& operator<<(std::ostream& str, Timepix::ConfigV2::TriggerMode enval);
#pragma pack(pop)

/** @class ConfigV3

  
*/

#pragma pack(push,4)

class ConfigV3 {
public:
  enum { TypeId = Pds::TypeId::Id_TimepixConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 3 /**< XTC type version number */ };
  enum { ChipCount = 4 };
  enum { ChipNameMax = 16 };
  enum { PixelThreshMax = 4*256*256 };
  enum ReadoutSpeed {
    ReadoutSpeed_Slow = 0,
    ReadoutSpeed_Fast = 1,
  };
  enum TimepixMode {
    TimepixMode_Counting = 0,
    TimepixMode_TOT = 1,
  };
  ConfigV3(Timepix::ConfigV3::ReadoutSpeed arg__readoutSpeed, Timepix::ConfigV3::TimepixMode arg__timepixMode, int32_t arg__timepixSpeed, int32_t arg__dac0Ikrum, int32_t arg__dac0Disc, int32_t arg__dac0Preamp, int32_t arg__dac0BufAnalogA, int32_t arg__dac0BufAnalogB, int32_t arg__dac0Hist, int32_t arg__dac0ThlFine, int32_t arg__dac0ThlCourse, int32_t arg__dac0Vcas, int32_t arg__dac0Fbk, int32_t arg__dac0Gnd, int32_t arg__dac0Ths, int32_t arg__dac0BiasLvds, int32_t arg__dac0RefLvds, int32_t arg__dac1Ikrum, int32_t arg__dac1Disc, int32_t arg__dac1Preamp, int32_t arg__dac1BufAnalogA, int32_t arg__dac1BufAnalogB, int32_t arg__dac1Hist, int32_t arg__dac1ThlFine, int32_t arg__dac1ThlCourse, int32_t arg__dac1Vcas, int32_t arg__dac1Fbk, int32_t arg__dac1Gnd, int32_t arg__dac1Ths, int32_t arg__dac1BiasLvds, int32_t arg__dac1RefLvds, int32_t arg__dac2Ikrum, int32_t arg__dac2Disc, int32_t arg__dac2Preamp, int32_t arg__dac2BufAnalogA, int32_t arg__dac2BufAnalogB, int32_t arg__dac2Hist, int32_t arg__dac2ThlFine, int32_t arg__dac2ThlCourse, int32_t arg__dac2Vcas, int32_t arg__dac2Fbk, int32_t arg__dac2Gnd, int32_t arg__dac2Ths, int32_t arg__dac2BiasLvds, int32_t arg__dac2RefLvds, int32_t arg__dac3Ikrum, int32_t arg__dac3Disc, int32_t arg__dac3Preamp, int32_t arg__dac3BufAnalogA, int32_t arg__dac3BufAnalogB, int32_t arg__dac3Hist, int32_t arg__dac3ThlFine, int32_t arg__dac3ThlCourse, int32_t arg__dac3Vcas, int32_t arg__dac3Fbk, int32_t arg__dac3Gnd, int32_t arg__dac3Ths, int32_t arg__dac3BiasLvds, int32_t arg__dac3RefLvds, int8_t arg__dacBias, int8_t arg__flags, int32_t arg__driverVersion, uint32_t arg__firmwareVersion, uint32_t arg__pixelThreshSize, const uint8_t* arg__pixelThresh, const char* arg__chip0Name, const char* arg__chip1Name, const char* arg__chip2Name, const char* arg__chip3Name, int32_t arg__chip0ID, int32_t arg__chip1ID, int32_t arg__chip2ID, int32_t arg__chip3ID)
    : _readoutSpeed(arg__readoutSpeed), _timepixMode(arg__timepixMode), _timepixSpeed(arg__timepixSpeed), _dac0Ikrum(arg__dac0Ikrum), _dac0Disc(arg__dac0Disc), _dac0Preamp(arg__dac0Preamp), _dac0BufAnalogA(arg__dac0BufAnalogA), _dac0BufAnalogB(arg__dac0BufAnalogB), _dac0Hist(arg__dac0Hist), _dac0ThlFine(arg__dac0ThlFine), _dac0ThlCourse(arg__dac0ThlCourse), _dac0Vcas(arg__dac0Vcas), _dac0Fbk(arg__dac0Fbk), _dac0Gnd(arg__dac0Gnd), _dac0Ths(arg__dac0Ths), _dac0BiasLvds(arg__dac0BiasLvds), _dac0RefLvds(arg__dac0RefLvds), _dac1Ikrum(arg__dac1Ikrum), _dac1Disc(arg__dac1Disc), _dac1Preamp(arg__dac1Preamp), _dac1BufAnalogA(arg__dac1BufAnalogA), _dac1BufAnalogB(arg__dac1BufAnalogB), _dac1Hist(arg__dac1Hist), _dac1ThlFine(arg__dac1ThlFine), _dac1ThlCourse(arg__dac1ThlCourse), _dac1Vcas(arg__dac1Vcas), _dac1Fbk(arg__dac1Fbk), _dac1Gnd(arg__dac1Gnd), _dac1Ths(arg__dac1Ths), _dac1BiasLvds(arg__dac1BiasLvds), _dac1RefLvds(arg__dac1RefLvds), _dac2Ikrum(arg__dac2Ikrum), _dac2Disc(arg__dac2Disc), _dac2Preamp(arg__dac2Preamp), _dac2BufAnalogA(arg__dac2BufAnalogA), _dac2BufAnalogB(arg__dac2BufAnalogB), _dac2Hist(arg__dac2Hist), _dac2ThlFine(arg__dac2ThlFine), _dac2ThlCourse(arg__dac2ThlCourse), _dac2Vcas(arg__dac2Vcas), _dac2Fbk(arg__dac2Fbk), _dac2Gnd(arg__dac2Gnd), _dac2Ths(arg__dac2Ths), _dac2BiasLvds(arg__dac2BiasLvds), _dac2RefLvds(arg__dac2RefLvds), _dac3Ikrum(arg__dac3Ikrum), _dac3Disc(arg__dac3Disc), _dac3Preamp(arg__dac3Preamp), _dac3BufAnalogA(arg__dac3BufAnalogA), _dac3BufAnalogB(arg__dac3BufAnalogB), _dac3Hist(arg__dac3Hist), _dac3ThlFine(arg__dac3ThlFine), _dac3ThlCourse(arg__dac3ThlCourse), _dac3Vcas(arg__dac3Vcas), _dac3Fbk(arg__dac3Fbk), _dac3Gnd(arg__dac3Gnd), _dac3Ths(arg__dac3Ths), _dac3BiasLvds(arg__dac3BiasLvds), _dac3RefLvds(arg__dac3RefLvds), _dacBias(arg__dacBias), _flags(arg__flags), _driverVersion(arg__driverVersion), _firmwareVersion(arg__firmwareVersion), _pixelThreshSize(arg__pixelThreshSize), _chip0ID(arg__chip0ID), _chip1ID(arg__chip1ID), _chip2ID(arg__chip2ID), _chip3ID(arg__chip3ID)
  {
    if (arg__pixelThresh) std::copy(arg__pixelThresh, arg__pixelThresh+(4*256*256), &_pixelThresh[0]);
    if (arg__chip0Name) std::copy(arg__chip0Name, arg__chip0Name+(16), &_chip0Name[0]);
    if (arg__chip1Name) std::copy(arg__chip1Name, arg__chip1Name+(16), &_chip1Name[0]);
    if (arg__chip2Name) std::copy(arg__chip2Name, arg__chip2Name+(16), &_chip2Name[0]);
    if (arg__chip3Name) std::copy(arg__chip3Name, arg__chip3Name+(16), &_chip3Name[0]);
  }
  ConfigV3() {}
  ConfigV3(const ConfigV3& other) {
    const char* src = reinterpret_cast<const char*>(&other);
    std::copy(src, src+other._sizeof(), reinterpret_cast<char*>(this));
  }
  ConfigV3& operator=(const ConfigV3& other) {
    const char* src = reinterpret_cast<const char*>(&other);
    std::copy(src, src+other._sizeof(), reinterpret_cast<char*>(this));
    return *this;
  }
  Timepix::ConfigV3::ReadoutSpeed readoutSpeed() const { return Timepix::ConfigV3::ReadoutSpeed(_readoutSpeed); }
  Timepix::ConfigV3::TimepixMode timepixMode() const { return Timepix::ConfigV3::TimepixMode(_timepixMode); }
  int32_t timepixSpeed() const { return _timepixSpeed; }
  int32_t dac0Ikrum() const { return _dac0Ikrum; }
  int32_t dac0Disc() const { return _dac0Disc; }
  int32_t dac0Preamp() const { return _dac0Preamp; }
  int32_t dac0BufAnalogA() const { return _dac0BufAnalogA; }
  int32_t dac0BufAnalogB() const { return _dac0BufAnalogB; }
  int32_t dac0Hist() const { return _dac0Hist; }
  int32_t dac0ThlFine() const { return _dac0ThlFine; }
  int32_t dac0ThlCourse() const { return _dac0ThlCourse; }
  int32_t dac0Vcas() const { return _dac0Vcas; }
  int32_t dac0Fbk() const { return _dac0Fbk; }
  int32_t dac0Gnd() const { return _dac0Gnd; }
  int32_t dac0Ths() const { return _dac0Ths; }
  int32_t dac0BiasLvds() const { return _dac0BiasLvds; }
  int32_t dac0RefLvds() const { return _dac0RefLvds; }
  int32_t dac1Ikrum() const { return _dac1Ikrum; }
  int32_t dac1Disc() const { return _dac1Disc; }
  int32_t dac1Preamp() const { return _dac1Preamp; }
  int32_t dac1BufAnalogA() const { return _dac1BufAnalogA; }
  int32_t dac1BufAnalogB() const { return _dac1BufAnalogB; }
  int32_t dac1Hist() const { return _dac1Hist; }
  int32_t dac1ThlFine() const { return _dac1ThlFine; }
  int32_t dac1ThlCourse() const { return _dac1ThlCourse; }
  int32_t dac1Vcas() const { return _dac1Vcas; }
  int32_t dac1Fbk() const { return _dac1Fbk; }
  int32_t dac1Gnd() const { return _dac1Gnd; }
  int32_t dac1Ths() const { return _dac1Ths; }
  int32_t dac1BiasLvds() const { return _dac1BiasLvds; }
  int32_t dac1RefLvds() const { return _dac1RefLvds; }
  int32_t dac2Ikrum() const { return _dac2Ikrum; }
  int32_t dac2Disc() const { return _dac2Disc; }
  int32_t dac2Preamp() const { return _dac2Preamp; }
  int32_t dac2BufAnalogA() const { return _dac2BufAnalogA; }
  int32_t dac2BufAnalogB() const { return _dac2BufAnalogB; }
  int32_t dac2Hist() const { return _dac2Hist; }
  int32_t dac2ThlFine() const { return _dac2ThlFine; }
  int32_t dac2ThlCourse() const { return _dac2ThlCourse; }
  int32_t dac2Vcas() const { return _dac2Vcas; }
  int32_t dac2Fbk() const { return _dac2Fbk; }
  int32_t dac2Gnd() const { return _dac2Gnd; }
  int32_t dac2Ths() const { return _dac2Ths; }
  int32_t dac2BiasLvds() const { return _dac2BiasLvds; }
  int32_t dac2RefLvds() const { return _dac2RefLvds; }
  int32_t dac3Ikrum() const { return _dac3Ikrum; }
  int32_t dac3Disc() const { return _dac3Disc; }
  int32_t dac3Preamp() const { return _dac3Preamp; }
  int32_t dac3BufAnalogA() const { return _dac3BufAnalogA; }
  int32_t dac3BufAnalogB() const { return _dac3BufAnalogB; }
  int32_t dac3Hist() const { return _dac3Hist; }
  int32_t dac3ThlFine() const { return _dac3ThlFine; }
  int32_t dac3ThlCourse() const { return _dac3ThlCourse; }
  int32_t dac3Vcas() const { return _dac3Vcas; }
  int32_t dac3Fbk() const { return _dac3Fbk; }
  int32_t dac3Gnd() const { return _dac3Gnd; }
  int32_t dac3Ths() const { return _dac3Ths; }
  int32_t dac3BiasLvds() const { return _dac3BiasLvds; }
  int32_t dac3RefLvds() const { return _dac3RefLvds; }
  int8_t dacBias() const { return _dacBias; }
  int8_t flags() const { return _flags; }
  int32_t driverVersion() const { return _driverVersion; }
  uint32_t firmwareVersion() const { return _firmwareVersion; }
  uint32_t pixelThreshSize() const { return _pixelThreshSize; }
  /**     Note: this overloaded method accepts shared pointer argument which must point to an object containing
    this instance, the returned ndarray object can be used even after this instance disappears. */
  template <typename T>
  ndarray<const uint8_t, 1> pixelThresh(const boost::shared_ptr<T>& owner) const { 
    const uint8_t* data = &_pixelThresh[0];
    return make_ndarray(boost::shared_ptr<const uint8_t>(owner, data), PixelThreshMax);
  }
  /**     Note: this method returns ndarray instance which does not control lifetime
    of the data, do not use returned ndarray after this instance disappears. */
  ndarray<const uint8_t, 1> pixelThresh() const { return make_ndarray(&_pixelThresh[0], PixelThreshMax); }
  const char* chip0Name() const { return _chip0Name; }
  const char* chip1Name() const { return _chip1Name; }
  const char* chip2Name() const { return _chip2Name; }
  const char* chip3Name() const { return _chip3Name; }
  int32_t chip0ID() const { return _chip0ID; }
  int32_t chip1ID() const { return _chip1ID; }
  int32_t chip2ID() const { return _chip2ID; }
  int32_t chip3ID() const { return _chip3ID; }
  int32_t chipCount() const { return ChipCount; }
  static uint32_t _sizeof() { return ((((((((((((248+(1*(PixelThreshMax)))+(1*(ChipNameMax)))+(1*(ChipNameMax)))+(1*(ChipNameMax)))+(1*(ChipNameMax)))+4)+4)+4)+4)+4)-1)/4)*4; }
private:
  uint8_t	_readoutSpeed;
  uint8_t	_timepixMode;
  int16_t	_pad;
  int32_t	_timepixSpeed;
  int32_t	_dac0Ikrum;
  int32_t	_dac0Disc;
  int32_t	_dac0Preamp;
  int32_t	_dac0BufAnalogA;
  int32_t	_dac0BufAnalogB;
  int32_t	_dac0Hist;
  int32_t	_dac0ThlFine;
  int32_t	_dac0ThlCourse;
  int32_t	_dac0Vcas;
  int32_t	_dac0Fbk;
  int32_t	_dac0Gnd;
  int32_t	_dac0Ths;
  int32_t	_dac0BiasLvds;
  int32_t	_dac0RefLvds;
  int32_t	_dac1Ikrum;
  int32_t	_dac1Disc;
  int32_t	_dac1Preamp;
  int32_t	_dac1BufAnalogA;
  int32_t	_dac1BufAnalogB;
  int32_t	_dac1Hist;
  int32_t	_dac1ThlFine;
  int32_t	_dac1ThlCourse;
  int32_t	_dac1Vcas;
  int32_t	_dac1Fbk;
  int32_t	_dac1Gnd;
  int32_t	_dac1Ths;
  int32_t	_dac1BiasLvds;
  int32_t	_dac1RefLvds;
  int32_t	_dac2Ikrum;
  int32_t	_dac2Disc;
  int32_t	_dac2Preamp;
  int32_t	_dac2BufAnalogA;
  int32_t	_dac2BufAnalogB;
  int32_t	_dac2Hist;
  int32_t	_dac2ThlFine;
  int32_t	_dac2ThlCourse;
  int32_t	_dac2Vcas;
  int32_t	_dac2Fbk;
  int32_t	_dac2Gnd;
  int32_t	_dac2Ths;
  int32_t	_dac2BiasLvds;
  int32_t	_dac2RefLvds;
  int32_t	_dac3Ikrum;
  int32_t	_dac3Disc;
  int32_t	_dac3Preamp;
  int32_t	_dac3BufAnalogA;
  int32_t	_dac3BufAnalogB;
  int32_t	_dac3Hist;
  int32_t	_dac3ThlFine;
  int32_t	_dac3ThlCourse;
  int32_t	_dac3Vcas;
  int32_t	_dac3Fbk;
  int32_t	_dac3Gnd;
  int32_t	_dac3Ths;
  int32_t	_dac3BiasLvds;
  int32_t	_dac3RefLvds;
  int8_t	_dacBias;
  int8_t	_flags;
  int16_t	_pad2;
  int32_t	_driverVersion;
  uint32_t	_firmwareVersion;
  uint32_t	_pixelThreshSize;
  uint8_t	_pixelThresh[PixelThreshMax];
  char	_chip0Name[ChipNameMax];
  char	_chip1Name[ChipNameMax];
  char	_chip2Name[ChipNameMax];
  char	_chip3Name[ChipNameMax];
  int32_t	_chip0ID;
  int32_t	_chip1ID;
  int32_t	_chip2ID;
  int32_t	_chip3ID;
};
std::ostream& operator<<(std::ostream& str, Timepix::ConfigV3::ReadoutSpeed enval);
std::ostream& operator<<(std::ostream& str, Timepix::ConfigV3::TimepixMode enval);
#pragma pack(pop)

/** @class DataV1

  
*/


class DataV1 {
public:
  enum { TypeId = Pds::TypeId::Id_TimepixData /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  enum { Height = 512 };
  enum { Width = 512 };
  enum { Depth = 14 };
  enum { DepthBytes = 2 };
  enum { MaxPixelValue = 11810 };
  DataV1(uint32_t timestamp, uint16_t frameCounter, uint16_t lostRows)
    : _timestamp(timestamp), _frameCounter(frameCounter), _lostRows(lostRows)
  {
  }
  DataV1() {}
  DataV1(const DataV1& other) {
    const char* src = reinterpret_cast<const char*>(&other);
    std::copy(src, src+other._sizeof(), reinterpret_cast<char*>(this));
  }
  DataV1& operator=(const DataV1& other) {
    const char* src = reinterpret_cast<const char*>(&other);
    std::copy(src, src+other._sizeof(), reinterpret_cast<char*>(this));
    return *this;
  }
  uint32_t timestamp() const { return _timestamp; }
  uint16_t frameCounter() const { return _frameCounter; }
  uint16_t lostRows() const { return _lostRows; }
  /**     Note: this overloaded method accepts shared pointer argument which must point to an object containing
    this instance, the returned ndarray object can be used even after this instance disappears. */
  template <typename T>
  ndarray<const uint16_t, 2> data(const boost::shared_ptr<T>& owner) const { 
    const uint16_t* data = &_data[0][0];
    return make_ndarray(boost::shared_ptr<const uint16_t>(owner, data), Height, Width);
  }
  /**     Note: this method returns ndarray instance which does not control lifetime
    of the data, do not use returned ndarray after this instance disappears. */
  ndarray<const uint16_t, 2> data() const { return make_ndarray(&_data[0][0], Height, Width); }
  uint32_t width() const { return Width; }
  uint32_t height() const { return Height; }
  uint32_t depth() const { return Depth; }
  uint32_t depth_bytes() const { return DepthBytes; }
  /** Size of the image data in bytes. */
  uint32_t data_size() const { return this->width() * this->height() * this->depth_bytes(); }
  static uint32_t _sizeof() { return ((((8+(2*(Height)*(Width)))+4)-1)/4)*4; }
private:
  uint32_t	_timestamp;
  uint16_t	_frameCounter;
  uint16_t	_lostRows;
  uint16_t	_data[Height][Width];
};

/** @class DataV2

  
*/


class DataV2 {
public:
  enum { TypeId = Pds::TypeId::Id_TimepixData /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 2 /**< XTC type version number */ };
  enum { Depth = 14 };
  enum { MaxPixelValue = 11810 };
  DataV2(uint16_t width, uint16_t height, uint32_t timestamp, uint16_t frameCounter, uint16_t lostRows)
    : _width(width), _height(height), _timestamp(timestamp), _frameCounter(frameCounter), _lostRows(lostRows)
  {
  }
  DataV2(const Timepix::DataV1& datav1);
  DataV2() {}
  DataV2(const DataV2& other) {
    const char* src = reinterpret_cast<const char*>(&other);
    std::copy(src, src+other._sizeof(), reinterpret_cast<char*>(this));
  }
  DataV2& operator=(const DataV2& other) {
    const char* src = reinterpret_cast<const char*>(&other);
    std::copy(src, src+other._sizeof(), reinterpret_cast<char*>(this));
    return *this;
  }
  /** Pixels per row */
  uint16_t width() const { return _width; }
  /** Pixels per column */
  uint16_t height() const { return _height; }
  /** hardware timestamp */
  uint32_t timestamp() const { return _timestamp; }
  /** hardware frame counter */
  uint16_t frameCounter() const { return _frameCounter; }
  /** lost row count */
  uint16_t lostRows() const { return _lostRows; }
  /**     Note: this overloaded method accepts shared pointer argument which must point to an object containing
    this instance, the returned ndarray object can be used even after this instance disappears. */
  template <typename T>
  ndarray<const uint16_t, 2> data(const boost::shared_ptr<T>& owner) const { 
    ptrdiff_t offset=12;
    const uint16_t* data = (const uint16_t*)(((char*)this)+offset);
    return make_ndarray(boost::shared_ptr<const uint16_t>(owner, data), this->height(), this->width());
  }
  /**     Note: this method returns ndarray instance which does not control lifetime
    of the data, do not use returned ndarray after this instance disappears. */
  ndarray<const uint16_t, 2> data() const { ptrdiff_t offset=12;
  const uint16_t* data = (const uint16_t*)(((char*)this)+offset);
  return make_ndarray(data, this->height(), this->width()); }
  uint32_t depth() const { return Depth; }
  uint32_t depth_bytes() const { return (Depth+7)/8; }
  /** Size of the image data in bytes. */
  uint32_t data_size() const { return this->width() * this->height() * this->depth_bytes(); }
  uint32_t _sizeof() const { return ((((12+(2*(this->height())*(this->width())))+4)-1)/4)*4; }
private:
  uint16_t	_width;	/**< Pixels per row */
  uint16_t	_height;	/**< Pixels per column */
  uint32_t	_timestamp;	/**< hardware timestamp */
  uint16_t	_frameCounter;	/**< hardware frame counter */
  uint16_t	_lostRows;	/**< lost row count */
  //uint16_t	_data[this->height()][this->width()];
};
} // namespace Timepix
} // namespace Pds
#endif // PDS_TIMEPIX_DDL_H
