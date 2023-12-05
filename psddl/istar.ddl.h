#ifndef PDS_ISTAR_DDL_H
#define PDS_ISTAR_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <iosfwd>
#include <cstddef>
#include <cstring>
#include "pdsdata/xtc/TypeId.hh"
#include "ndarray/ndarray.h"
namespace Pds {
namespace iStar {

/** @class ConfigV1

  
*/

#pragma pack(push,4)

class ConfigV1 {
public:
  enum { TypeId = Pds::TypeId::Id_iStarConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  enum { STR_LEN_MAX = 64 };
  enum ATBool {
    False = 0,
    True = 1,
  };
  enum FanSpeed {
    Off = 0,
    On = 1,
  };
  enum ReadoutRate {
    Rate280MHz = 0,
    Rate100MHz = 1,
  };
  enum TriggerMode {
    Internal = 0,
    ExternalLevelTransition = 1,
    ExternalStart = 2,
    ExternalExposure = 3,
    Software = 4,
    Advanced = 5,
    External = 6,
  };
  enum GainMode {
    HighWellCap12Bit = 0,
    LowNoise12Bit = 1,
    LowNoiseHighWellCap16Bit = 2,
  };
  enum GateMode {
    CWOn = 0,
    CWOff = 1,
    FireOnly = 2,
    GateOnly = 3,
    FireAndGate = 4,
    DDG = 5,
  };
  enum InsertionDelay {
    Normal = 0,
    Fast = 1,
  };
  ConfigV1(iStar::ConfigV1::ATBool arg__cooling, iStar::ConfigV1::ATBool arg__overlap, iStar::ConfigV1::ATBool arg__noiseFilter, iStar::ConfigV1::ATBool arg__blemishCorrection, iStar::ConfigV1::ATBool arg__mcpIntelligate, iStar::ConfigV1::FanSpeed arg__fanSpeed, iStar::ConfigV1::ReadoutRate arg__readoutRate, iStar::ConfigV1::TriggerMode arg__triggerMode, iStar::ConfigV1::GainMode arg__gainMode, iStar::ConfigV1::GateMode arg__gateMode, iStar::ConfigV1::InsertionDelay arg__insertionDelay, uint16_t arg__mcpGain, uint32_t arg__width, uint32_t arg__height, uint32_t arg__orgX, uint32_t arg__orgY, uint32_t arg__binX, uint32_t arg__binY, double arg__exposureTime, double arg__triggerDelay)
    : _cooling(arg__cooling), _overlap(arg__overlap), _noiseFilter(arg__noiseFilter), _blemishCorrection(arg__blemishCorrection), _mcpIntelligate(arg__mcpIntelligate), _fanSpeed(arg__fanSpeed), _readoutRate(arg__readoutRate), _triggerMode(arg__triggerMode), _gainMode(arg__gainMode), _gateMode(arg__gateMode), _insertionDelay(arg__insertionDelay), _mcpGain(arg__mcpGain), _width(arg__width), _height(arg__height), _orgX(arg__orgX), _orgY(arg__orgY), _binX(arg__binX), _binY(arg__binY), _exposureTime(arg__exposureTime), _triggerDelay(arg__triggerDelay)
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
  iStar::ConfigV1::ATBool cooling() const { return iStar::ConfigV1::ATBool(_cooling); }
  iStar::ConfigV1::ATBool overlap() const { return iStar::ConfigV1::ATBool(_overlap); }
  iStar::ConfigV1::ATBool noiseFilter() const { return iStar::ConfigV1::ATBool(_noiseFilter); }
  iStar::ConfigV1::ATBool blemishCorrection() const { return iStar::ConfigV1::ATBool(_blemishCorrection); }
  iStar::ConfigV1::ATBool mcpIntelligate() const { return iStar::ConfigV1::ATBool(_mcpIntelligate); }
  iStar::ConfigV1::FanSpeed fanSpeed() const { return iStar::ConfigV1::FanSpeed(_fanSpeed); }
  iStar::ConfigV1::ReadoutRate readoutRate() const { return iStar::ConfigV1::ReadoutRate(_readoutRate); }
  iStar::ConfigV1::TriggerMode triggerMode() const { return iStar::ConfigV1::TriggerMode(_triggerMode); }
  iStar::ConfigV1::GainMode gainMode() const { return iStar::ConfigV1::GainMode(_gainMode); }
  iStar::ConfigV1::GateMode gateMode() const { return iStar::ConfigV1::GateMode(_gateMode); }
  iStar::ConfigV1::InsertionDelay insertionDelay() const { return iStar::ConfigV1::InsertionDelay(_insertionDelay); }
  uint16_t mcpGain() const { return _mcpGain; }
  uint32_t width() const { return _width; }
  uint32_t height() const { return _height; }
  uint32_t orgX() const { return _orgX; }
  uint32_t orgY() const { return _orgY; }
  uint32_t binX() const { return _binX; }
  uint32_t binY() const { return _binY; }
  double exposureTime() const { return _exposureTime; }
  double triggerDelay() const { return _triggerDelay; }
  /** Total size in bytes of the Frame object */
  uint32_t frameSize() const;
  /** calculate frame X size in pixels based on the current ROI and binning settings */
  uint32_t numPixelsX() const { return (width() + binX() - 1) / binX(); }
  /** calculate frame Y size in pixels based on the current ROI and binning settings */
  uint32_t numPixelsY() const { return (height() + binY() - 1) / binY(); }
  /** calculate total frame size in pixels based on the current ROI and binning settings */
  uint32_t numPixels() const { return numPixelsX()*numPixelsY(); }
  static uint32_t _sizeof() { return 56; }
private:
  uint8_t	_cooling;
  uint8_t	_overlap;
  uint8_t	_noiseFilter;
  uint8_t	_blemishCorrection;
  uint8_t	_mcpIntelligate;
  uint8_t	_fanSpeed;
  uint8_t	_readoutRate;
  uint8_t	_triggerMode;
  uint8_t	_gainMode;
  uint8_t	_gateMode;
  uint8_t	_insertionDelay;
  uint8_t	_pad0;
  uint16_t	_mcpGain;
  uint16_t	_pad1;
  uint32_t	_width;
  uint32_t	_height;
  uint32_t	_orgX;
  uint32_t	_orgY;
  uint32_t	_binX;
  uint32_t	_binY;
  double	_exposureTime;
  double	_triggerDelay;
};
std::ostream& operator<<(std::ostream& str, iStar::ConfigV1::ATBool enval);
std::ostream& operator<<(std::ostream& str, iStar::ConfigV1::FanSpeed enval);
std::ostream& operator<<(std::ostream& str, iStar::ConfigV1::ReadoutRate enval);
std::ostream& operator<<(std::ostream& str, iStar::ConfigV1::TriggerMode enval);
std::ostream& operator<<(std::ostream& str, iStar::ConfigV1::GainMode enval);
std::ostream& operator<<(std::ostream& str, iStar::ConfigV1::GateMode enval);
std::ostream& operator<<(std::ostream& str, iStar::ConfigV1::InsertionDelay enval);
#pragma pack(pop)
} // namespace iStar
} // namespace Pds
#endif // PDS_ISTAR_DDL_H