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

#include <etsi_its_cam_ts_coding/cam_ts_Wgs84Angle.h>
#include <etsi_its_cam_ts_conversion/convertWgs84AngleConfidence.h>
#include <etsi_its_cam_ts_conversion/convertWgs84AngleValue.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/Wgs84Angle.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/wgs84_angle.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_Wgs84Angle(const cam_ts_Wgs84Angle_t& in, cam_ts_msgs::Wgs84Angle& out) {
  toRos_Wgs84AngleValue(in.value, out.value);
  toRos_Wgs84AngleConfidence(in.confidence, out.confidence);
}

void toStruct_Wgs84Angle(const cam_ts_msgs::Wgs84Angle& in, cam_ts_Wgs84Angle_t& out) {
  memset(&out, 0, sizeof(cam_ts_Wgs84Angle_t));

  toStruct_Wgs84AngleValue(in.value, out.value);
  toStruct_Wgs84AngleConfidence(in.confidence, out.confidence);
}

}
