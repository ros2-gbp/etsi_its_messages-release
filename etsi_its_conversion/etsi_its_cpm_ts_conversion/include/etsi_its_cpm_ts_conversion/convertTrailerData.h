/** ============================================================================
MIT License

Copyright (c) 2023-2024 Institute for Automotive Engineering (ika), RWTH Aachen University
Copyright (c) 2024 Instituto de Telecomunicações, Universidade de Aveiro

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
============================================================================= */

// --- Auto-generated by asn1ToConversionHeader.py -----------------------------

#pragma once

#include <etsi_its_cpm_ts_coding/cpm_ts_TrailerData.h>
#include <etsi_its_cpm_ts_conversion/convertCartesianAngle.h>
#include <etsi_its_cpm_ts_conversion/convertIdentifier1B.h>
#include <etsi_its_cpm_ts_conversion/convertStandardLength1B.h>
#include <etsi_its_cpm_ts_conversion/convertVehicleWidth.h>
#ifdef ROS1
#include <etsi_its_cpm_ts_msgs/TrailerData.h>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs;
#else
#include <etsi_its_cpm_ts_msgs/msg/trailer_data.hpp>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs::msg;
#endif


namespace etsi_its_cpm_ts_conversion {

void toRos_TrailerData(const cpm_ts_TrailerData_t& in, cpm_ts_msgs::TrailerData& out) {
  toRos_Identifier1B(in.refPointId, out.ref_point_id);
  toRos_StandardLength1B(in.hitchPointOffset, out.hitch_point_offset);
  if (in.frontOverhang) {
    toRos_StandardLength1B(*in.frontOverhang, out.front_overhang);
    out.front_overhang_is_present = true;
  }
  if (in.rearOverhang) {
    toRos_StandardLength1B(*in.rearOverhang, out.rear_overhang);
    out.rear_overhang_is_present = true;
  }
  if (in.trailerWidth) {
    toRos_VehicleWidth(*in.trailerWidth, out.trailer_width);
    out.trailer_width_is_present = true;
  }
  toRos_CartesianAngle(in.hitchAngle, out.hitch_angle);
}

void toStruct_TrailerData(const cpm_ts_msgs::TrailerData& in, cpm_ts_TrailerData_t& out) {
  memset(&out, 0, sizeof(cpm_ts_TrailerData_t));

  toStruct_Identifier1B(in.ref_point_id, out.refPointId);
  toStruct_StandardLength1B(in.hitch_point_offset, out.hitchPointOffset);
  if (in.front_overhang_is_present) {
    out.frontOverhang = (cpm_ts_StandardLength1B_t*) calloc(1, sizeof(cpm_ts_StandardLength1B_t));
    toStruct_StandardLength1B(in.front_overhang, *out.frontOverhang);
  }
  if (in.rear_overhang_is_present) {
    out.rearOverhang = (cpm_ts_StandardLength1B_t*) calloc(1, sizeof(cpm_ts_StandardLength1B_t));
    toStruct_StandardLength1B(in.rear_overhang, *out.rearOverhang);
  }
  if (in.trailer_width_is_present) {
    out.trailerWidth = (cpm_ts_VehicleWidth_t*) calloc(1, sizeof(cpm_ts_VehicleWidth_t));
    toStruct_VehicleWidth(in.trailer_width, *out.trailerWidth);
  }
  toStruct_CartesianAngle(in.hitch_angle, out.hitchAngle);
}

}
