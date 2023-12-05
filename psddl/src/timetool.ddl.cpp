
// *** Do not edit this file, it is auto-generated ***

#include "pdsdata/psddl/timetool.ddl.h"

#include <iostream>
namespace Pds {
namespace TimeTool {
std::ostream& operator<<(std::ostream& str, TimeTool::EventLogic::LogicOp enval) {
  const char* val;
  switch (enval) {
  case TimeTool::EventLogic::L_OR:
    val = "L_OR";
    break;
  case TimeTool::EventLogic::L_AND:
    val = "L_AND";
    break;
  case TimeTool::EventLogic::L_OR_NOT:
    val = "L_OR_NOT";
    break;
  case TimeTool::EventLogic::L_AND_NOT:
    val = "L_AND_NOT";
    break;
  default:
    return str << "LogicOp(" << int(enval) << ")";
  }
  return str << val;
}
ConfigV1::ConfigV1(TimeTool::ConfigV1::Axis arg__project_axis, uint8_t arg__write_image, uint8_t arg__write_projections, uint8_t arg__subtract_sideband, uint16_t arg__number_of_weights, uint8_t arg__calib_poly_dim, uint8_t arg__base_name_length, uint16_t arg__number_of_beam_event_codes, uint16_t arg__number_of_laser_event_codes, uint32_t arg__signal_cut, const Camera::FrameCoord& arg__sig_roi_lo, const Camera::FrameCoord& arg__sig_roi_hi, const Camera::FrameCoord& arg__sb_roi_lo, const Camera::FrameCoord& arg__sb_roi_hi, double arg__sb_convergence, double arg__ref_convergence, const TimeTool::EventLogic* arg__beam_logic, const TimeTool::EventLogic* arg__laser_logic, const double* arg__weights, const double* arg__calib_poly, const char* arg__base_name)
    : _Control(((arg__project_axis) & 0x1)|(((arg__write_image) & 0x1)<<1)|(((arg__write_projections) & 0x1)<<2)|(((arg__subtract_sideband) & 0x1)<<3)|(((arg__number_of_weights) & 0xffff)<<4)|(((arg__calib_poly_dim) & 0xf)<<20)|(((arg__base_name_length) & 0xff)<<24)), _number_of_beam_event_codes(arg__number_of_beam_event_codes), _number_of_laser_event_codes(arg__number_of_laser_event_codes), _signal_cut(arg__signal_cut), _sig_roi_lo(arg__sig_roi_lo), _sig_roi_hi(arg__sig_roi_hi), _sb_roi_lo(arg__sb_roi_lo), _sb_roi_hi(arg__sb_roi_hi), _sb_convergence(arg__sb_convergence), _ref_convergence(arg__ref_convergence)
{
  if (arg__beam_logic and (this->number_of_beam_event_codes())) {
    ptrdiff_t offset = 44;
    TimeTool::EventLogic* data = reinterpret_cast<TimeTool::EventLogic*>(((char*)this)+offset);
    std::copy(arg__beam_logic, arg__beam_logic+(this->number_of_beam_event_codes()), data);
  }
  if (arg__laser_logic and (this->number_of_laser_event_codes())) {
    ptrdiff_t offset = 44+(4*(this->number_of_beam_event_codes()));
    TimeTool::EventLogic* data = reinterpret_cast<TimeTool::EventLogic*>(((char*)this)+offset);
    std::copy(arg__laser_logic, arg__laser_logic+(this->number_of_laser_event_codes()), data);
  }
  if (arg__weights and (this->number_of_weights())) {
    ptrdiff_t offset = (44+(4*(this->number_of_beam_event_codes())))+(4*(this->number_of_laser_event_codes()));
    double* data = reinterpret_cast<double*>(((char*)this)+offset);
    std::copy(arg__weights, arg__weights+(this->number_of_weights()), data);
  }
  if (arg__calib_poly and (this->calib_poly_dim())) {
    ptrdiff_t offset = ((44+(4*(this->number_of_beam_event_codes())))+(4*(this->number_of_laser_event_codes())))+(8*(this->number_of_weights()));
    double* data = reinterpret_cast<double*>(((char*)this)+offset);
    std::copy(arg__calib_poly, arg__calib_poly+(this->calib_poly_dim()), data);
  }
  if (arg__base_name and (this->base_name_length())) {
    ptrdiff_t offset = (((44+(4*(this->number_of_beam_event_codes())))+(4*(this->number_of_laser_event_codes())))+(8*(this->number_of_weights())))+(8*(this->calib_poly_dim()));
    char* data = reinterpret_cast<char*>(((char*)this)+offset);
    std::copy(arg__base_name, arg__base_name+(this->base_name_length()), data);
  }
}
uint32_t
ConfigV1::signal_projection_size() const {
  return (this->write_projections() ? (this->project_axis()==X ?
  this->sig_roi_hi().column()-this->sig_roi_lo().column()+1 :
  this->sig_roi_hi().row   ()-this->sig_roi_lo().row   ()+1) : 0);
}
uint32_t
ConfigV1::sideband_projection_size() const {
  return ((this->write_projections()&&this->subtract_sideband()) ?
  (this->project_axis()==X ?
     this->sb_roi_hi().column()-this->sb_roi_lo().column()+1 :
     this->sb_roi_hi().row   ()-this->sb_roi_lo().row   ()+1) : 0);
}
std::vector<int>
ConfigV1::base_name_shape() const {
  std::vector<int> shape;
  shape.reserve(1);
  shape.push_back(this->base_name_length());
  return shape;
}
std::ostream& operator<<(std::ostream& str, TimeTool::ConfigV1::Axis enval) {
  const char* val;
  switch (enval) {
  case TimeTool::ConfigV1::X:
    val = "X";
    break;
  case TimeTool::ConfigV1::Y:
    val = "Y";
    break;
  default:
    return str << "Axis(" << int(enval) << ")";
  }
  return str << val;
}
ConfigV2::ConfigV2(TimeTool::ConfigV2::Axis arg__project_axis, uint8_t arg__write_image, uint8_t arg__write_projections, uint8_t arg__subtract_sideband, uint8_t arg__use_reference_roi, uint16_t arg__number_of_weights, uint8_t arg__calib_poly_dim, uint8_t arg__base_name_length, uint16_t arg__number_of_beam_event_codes, uint16_t arg__number_of_laser_event_codes, uint32_t arg__signal_cut, const Camera::FrameCoord& arg__sig_roi_lo, const Camera::FrameCoord& arg__sig_roi_hi, const Camera::FrameCoord& arg__sb_roi_lo, const Camera::FrameCoord& arg__sb_roi_hi, double arg__sb_convergence, const Camera::FrameCoord& arg__ref_roi_lo, const Camera::FrameCoord& arg__ref_roi_hi, double arg__ref_convergence, const TimeTool::EventLogic* arg__beam_logic, const TimeTool::EventLogic* arg__laser_logic, const double* arg__weights, const double* arg__calib_poly, const char* arg__base_name)
    : _Control(((arg__project_axis) & 0x1)|(((arg__write_image) & 0x1)<<1)|(((arg__write_projections) & 0x1)<<2)|(((arg__subtract_sideband) & 0x1)<<3)|(((arg__use_reference_roi) & 0x1)<<4)|(((arg__number_of_weights) & 0xffff)<<5)|(((arg__calib_poly_dim) & 0xf)<<21)|(((arg__base_name_length) & 0xff)<<25)), _number_of_beam_event_codes(arg__number_of_beam_event_codes), _number_of_laser_event_codes(arg__number_of_laser_event_codes), _signal_cut(arg__signal_cut), _sig_roi_lo(arg__sig_roi_lo), _sig_roi_hi(arg__sig_roi_hi), _sb_roi_lo(arg__sb_roi_lo), _sb_roi_hi(arg__sb_roi_hi), _sb_convergence(arg__sb_convergence), _ref_roi_lo(arg__ref_roi_lo), _ref_roi_hi(arg__ref_roi_hi), _ref_convergence(arg__ref_convergence)
{
  if (arg__beam_logic and (this->number_of_beam_event_codes())) {
    ptrdiff_t offset = 52;
    TimeTool::EventLogic* data = reinterpret_cast<TimeTool::EventLogic*>(((char*)this)+offset);
    std::copy(arg__beam_logic, arg__beam_logic+(this->number_of_beam_event_codes()), data);
  }
  if (arg__laser_logic and (this->number_of_laser_event_codes())) {
    ptrdiff_t offset = 52+(4*(this->number_of_beam_event_codes()));
    TimeTool::EventLogic* data = reinterpret_cast<TimeTool::EventLogic*>(((char*)this)+offset);
    std::copy(arg__laser_logic, arg__laser_logic+(this->number_of_laser_event_codes()), data);
  }
  if (arg__weights and (this->number_of_weights())) {
    ptrdiff_t offset = (52+(4*(this->number_of_beam_event_codes())))+(4*(this->number_of_laser_event_codes()));
    double* data = reinterpret_cast<double*>(((char*)this)+offset);
    std::copy(arg__weights, arg__weights+(this->number_of_weights()), data);
  }
  if (arg__calib_poly and (this->calib_poly_dim())) {
    ptrdiff_t offset = ((52+(4*(this->number_of_beam_event_codes())))+(4*(this->number_of_laser_event_codes())))+(8*(this->number_of_weights()));
    double* data = reinterpret_cast<double*>(((char*)this)+offset);
    std::copy(arg__calib_poly, arg__calib_poly+(this->calib_poly_dim()), data);
  }
  if (arg__base_name and (this->base_name_length())) {
    ptrdiff_t offset = (((52+(4*(this->number_of_beam_event_codes())))+(4*(this->number_of_laser_event_codes())))+(8*(this->number_of_weights())))+(8*(this->calib_poly_dim()));
    char* data = reinterpret_cast<char*>(((char*)this)+offset);
    std::copy(arg__base_name, arg__base_name+(this->base_name_length()), data);
  }
}
uint32_t
ConfigV2::signal_projection_size() const {
  return (this->write_projections() ? (this->project_axis()==X ?
  this->sig_roi_hi().column()-this->sig_roi_lo().column()+1 :
  this->sig_roi_hi().row   ()-this->sig_roi_lo().row   ()+1) : 0);
}
uint32_t
ConfigV2::sideband_projection_size() const {
  return ((this->write_projections()&&this->subtract_sideband()) ?
  (this->project_axis()==X ?
     this->sb_roi_hi().column()-this->sb_roi_lo().column()+1 :
     this->sb_roi_hi().row   ()-this->sb_roi_lo().row   ()+1) : 0);
}
uint32_t
ConfigV2::reference_projection_size() const {
  return ((this->write_projections()&&this->use_reference_roi()) ?
  (this->project_axis()==X ?
     this->ref_roi_hi().column()-this->ref_roi_lo().column()+1 :
     this->ref_roi_hi().row   ()-this->ref_roi_lo().row   ()+1) : 0);
}
std::vector<int>
ConfigV2::base_name_shape() const {
  std::vector<int> shape;
  shape.reserve(1);
  shape.push_back(this->base_name_length());
  return shape;
}
std::ostream& operator<<(std::ostream& str, TimeTool::ConfigV2::Axis enval) {
  const char* val;
  switch (enval) {
  case TimeTool::ConfigV2::X:
    val = "X";
    break;
  case TimeTool::ConfigV2::Y:
    val = "Y";
    break;
  default:
    return str << "Axis(" << int(enval) << ")";
  }
  return str << val;
}
ConfigV3::ConfigV3(TimeTool::ConfigV3::Axis arg__project_axis, uint8_t arg__use_full_roi, uint8_t arg__use_fit, uint8_t arg__write_image, uint8_t arg__write_projections, uint8_t arg__subtract_sideband, uint8_t arg__use_reference_roi, uint16_t arg__number_of_weights, uint8_t arg__calib_poly_dim, uint8_t arg__fit_params_dim, uint8_t arg__base_name_length, uint16_t arg__number_of_beam_event_codes, uint16_t arg__number_of_laser_event_codes, uint32_t arg__signal_cut, uint32_t arg__fit_max_iterations, double arg__fit_weights_factor, const Camera::FrameCoord& arg__sig_roi_lo, const Camera::FrameCoord& arg__sig_roi_hi, const Camera::FrameCoord& arg__sb_roi_lo, const Camera::FrameCoord& arg__sb_roi_hi, double arg__sb_convergence, const Camera::FrameCoord& arg__ref_roi_lo, const Camera::FrameCoord& arg__ref_roi_hi, double arg__ref_convergence, const TimeTool::EventLogic* arg__beam_logic, const TimeTool::EventLogic* arg__laser_logic, const double* arg__weights, const double* arg__calib_poly, const double* arg__fit_params, const char* arg__base_name)
    : _Control(((arg__project_axis) & uint64_t(0x1))|(((arg__use_full_roi) & uint64_t(0x1))<<uint64_t(1))|(((arg__use_fit) & uint64_t(0x1))<<uint64_t(2))|(((arg__write_image) & uint64_t(0x1))<<uint64_t(3))|(((arg__write_projections) & uint64_t(0x1))<<uint64_t(4))|(((arg__subtract_sideband) & uint64_t(0x1))<<uint64_t(5))|(((arg__use_reference_roi) & uint64_t(0x1))<<uint64_t(6))|(((arg__number_of_weights) & uint64_t(0xffff))<<uint64_t(7))|(((arg__calib_poly_dim) & uint64_t(0xf))<<uint64_t(23))|(((arg__fit_params_dim) & uint64_t(0xf))<<uint64_t(27))|(((arg__base_name_length) & uint64_t(0xff))<<uint64_t(31))), _number_of_beam_event_codes(arg__number_of_beam_event_codes), _number_of_laser_event_codes(arg__number_of_laser_event_codes), _signal_cut(arg__signal_cut), _fit_max_iterations(arg__fit_max_iterations), _fit_weights_factor(arg__fit_weights_factor), _sig_roi_lo(arg__sig_roi_lo), _sig_roi_hi(arg__sig_roi_hi), _sb_roi_lo(arg__sb_roi_lo), _sb_roi_hi(arg__sb_roi_hi), _sb_convergence(arg__sb_convergence), _ref_roi_lo(arg__ref_roi_lo), _ref_roi_hi(arg__ref_roi_hi), _ref_convergence(arg__ref_convergence)
{
  if (arg__beam_logic and (this->number_of_beam_event_codes())) {
    ptrdiff_t offset = 68;
    TimeTool::EventLogic* data = reinterpret_cast<TimeTool::EventLogic*>(((char*)this)+offset);
    std::copy(arg__beam_logic, arg__beam_logic+(this->number_of_beam_event_codes()), data);
  }
  if (arg__laser_logic and (this->number_of_laser_event_codes())) {
    ptrdiff_t offset = 68+(4*(this->number_of_beam_event_codes()));
    TimeTool::EventLogic* data = reinterpret_cast<TimeTool::EventLogic*>(((char*)this)+offset);
    std::copy(arg__laser_logic, arg__laser_logic+(this->number_of_laser_event_codes()), data);
  }
  if (arg__weights and (this->number_of_weights())) {
    ptrdiff_t offset = (68+(4*(this->number_of_beam_event_codes())))+(4*(this->number_of_laser_event_codes()));
    double* data = reinterpret_cast<double*>(((char*)this)+offset);
    std::copy(arg__weights, arg__weights+(this->number_of_weights()), data);
  }
  if (arg__calib_poly and (this->calib_poly_dim())) {
    ptrdiff_t offset = ((68+(4*(this->number_of_beam_event_codes())))+(4*(this->number_of_laser_event_codes())))+(8*(this->number_of_weights()));
    double* data = reinterpret_cast<double*>(((char*)this)+offset);
    std::copy(arg__calib_poly, arg__calib_poly+(this->calib_poly_dim()), data);
  }
  if (arg__fit_params and (this->fit_params_dim())) {
    ptrdiff_t offset = (((68+(4*(this->number_of_beam_event_codes())))+(4*(this->number_of_laser_event_codes())))+(8*(this->number_of_weights())))+(8*(this->calib_poly_dim()));
    double* data = reinterpret_cast<double*>(((char*)this)+offset);
    std::copy(arg__fit_params, arg__fit_params+(this->fit_params_dim()), data);
  }
  if (arg__base_name and (this->base_name_length())) {
    ptrdiff_t offset = ((((68+(4*(this->number_of_beam_event_codes())))+(4*(this->number_of_laser_event_codes())))+(8*(this->number_of_weights())))+(8*(this->calib_poly_dim())))+(8*(this->fit_params_dim()));
    char* data = reinterpret_cast<char*>(((char*)this)+offset);
    std::copy(arg__base_name, arg__base_name+(this->base_name_length()), data);
  }
}
uint32_t
ConfigV3::signal_projection_size() const {
  return ((this->write_projections()&&!this->use_full_roi()) ?
  (this->project_axis()==X ?
     this->sig_roi_hi().column()-this->sig_roi_lo().column()+1 :
     this->sig_roi_hi().row   ()-this->sig_roi_lo().row   ()+1) : 0);
}
uint32_t
ConfigV3::sideband_projection_size() const {
  return ((this->write_projections() &&
                                  this->subtract_sideband() &&
                                  !this->use_full_roi()) ?
  (this->project_axis()==X ?
     this->sb_roi_hi().column()-this->sb_roi_lo().column()+1 :
     this->sb_roi_hi().row   ()-this->sb_roi_lo().row   ()+1) : 0);
}
uint32_t
ConfigV3::reference_projection_size() const {
  return ((this->write_projections()&&!this->use_full_roi()) ?
  (this->project_axis()==X ?
     this->ref_roi_hi().column()-this->ref_roi_lo().column()+1 :
     this->ref_roi_hi().row   ()-this->ref_roi_lo().row   ()+1) : 0);
}
uint32_t
ConfigV3::signal_x_size() const {
  return ((this->write_projections()&&this->use_full_roi()) ?
  (this->sig_roi_hi().column()-this->sig_roi_lo().column()+1) : 0);
}
uint32_t
ConfigV3::signal_y_size() const {
  return ((this->write_projections()&&this->use_full_roi()) ?
  (this->sig_roi_hi().row   ()-this->sig_roi_lo().row   ()+1) : 0);
}
uint32_t
ConfigV3::signal_size() const {
  return this->signal_x_size() * this->signal_y_size();
}
uint32_t
ConfigV3::sideband_x_size() const {
  return ((this->write_projections() &&
                                  this->subtract_sideband() &&
                                  this->use_full_roi()) ?
  (this->sb_roi_hi().column()-this->sb_roi_lo().column()+1) : 0);
}
uint32_t
ConfigV3::sideband_y_size() const {
  return ((this->write_projections() &&
                                  this->subtract_sideband() &&
                                  this->use_full_roi()) ?
  (this->sb_roi_hi().row   ()-this->sb_roi_lo().row   ()+1) : 0);
}
uint32_t
ConfigV3::sideband_size() const {
  return this->sideband_x_size() * this->sideband_y_size();
}
uint32_t
ConfigV3::reference_x_size() const {
  return ((this->write_projections()&&this->use_full_roi()) ?
  (this->ref_roi_hi().column()-this->ref_roi_lo().column()+1) : 0);
}
uint32_t
ConfigV3::reference_y_size() const {
  return ((this->write_projections()&&this->use_full_roi()) ?
  (this->ref_roi_hi().row   ()-this->ref_roi_lo().row   ()+1) : 0);
}
uint32_t
ConfigV3::reference_size() const {
  return this->reference_x_size() * this->reference_y_size();
}
std::vector<int>
ConfigV3::base_name_shape() const {
  std::vector<int> shape;
  shape.reserve(1);
  shape.push_back(this->base_name_length());
  return shape;
}
std::ostream& operator<<(std::ostream& str, TimeTool::ConfigV3::Axis enval) {
  const char* val;
  switch (enval) {
  case TimeTool::ConfigV3::X:
    val = "X";
    break;
  case TimeTool::ConfigV3::Y:
    val = "Y";
    break;
  default:
    return str << "Axis(" << int(enval) << ")";
  }
  return str << val;
}
std::ostream& operator<<(std::ostream& str, TimeTool::DataV1::EventType enval) {
  const char* val;
  switch (enval) {
  case TimeTool::DataV1::Dark:
    val = "Dark";
    break;
  case TimeTool::DataV1::Reference:
    val = "Reference";
    break;
  case TimeTool::DataV1::Signal:
    val = "Signal";
    break;
  default:
    return str << "EventType(" << int(enval) << ")";
  }
  return str << val;
}
std::ostream& operator<<(std::ostream& str, TimeTool::DataV2::EventType enval) {
  const char* val;
  switch (enval) {
  case TimeTool::DataV2::Dark:
    val = "Dark";
    break;
  case TimeTool::DataV2::Reference:
    val = "Reference";
    break;
  case TimeTool::DataV2::Signal:
    val = "Signal";
    break;
  default:
    return str << "EventType(" << int(enval) << ")";
  }
  return str << val;
}
std::ostream& operator<<(std::ostream& str, TimeTool::DataV3::EventType enval) {
  const char* val;
  switch (enval) {
  case TimeTool::DataV3::Dark:
    val = "Dark";
    break;
  case TimeTool::DataV3::Reference:
    val = "Reference";
    break;
  case TimeTool::DataV3::Signal:
    val = "Signal";
    break;
  default:
    return str << "EventType(" << int(enval) << ")";
  }
  return str << val;
}
} // namespace TimeTool
} // namespace Pds