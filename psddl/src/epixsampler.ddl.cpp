
// *** Do not edit this file, it is auto-generated ***

#include "pdsdata/psddl/epixsampler.ddl.h"

#include <iostream>
namespace Pds {
namespace EpixSampler {
ConfigV1::ConfigV1(uint32_t arg__version, uint32_t arg__runTrigDelay, uint32_t arg__daqTrigDelay, uint32_t arg__daqSetting, uint32_t arg__adcClkHalfT, uint32_t arg__adcPipelineDelay, uint32_t arg__digitalCardId0, uint32_t arg__digitalCardId1, uint32_t arg__analogCardId0, uint32_t arg__analogCardId1, uint32_t arg__numberOfChannels, uint32_t arg__samplesPerChannel, uint32_t arg__baseClockFrequency, uint8_t arg__testPatternEnable)
    : _version(arg__version), _runTrigDelay(arg__runTrigDelay), _daqTrigDelay(arg__daqTrigDelay), _daqSetting(arg__daqSetting), _adcClkHalfT(arg__adcClkHalfT), _adcPipelineDelay(arg__adcPipelineDelay), _digitalCardId0(arg__digitalCardId0), _digitalCardId1(arg__digitalCardId1), _analogCardId0(arg__analogCardId0), _analogCardId1(arg__analogCardId1), _numberOfChannels(arg__numberOfChannels), _samplesPerChannel(arg__samplesPerChannel), _baseClockFrequency(arg__baseClockFrequency), _bitControls((((arg__testPatternEnable) & 0x1)<<8))
{
}
double
ConfigV1::sampleInterval_sec() const {
  
    double v=0;
    for (unsigned r=baseClockFrequency(); r!=0; r>>=4)
      v += 10*(r & 0xf);
    return double(adcClkHalfT())*2.e-3/v;

}
} // namespace EpixSampler
} // namespace Pds