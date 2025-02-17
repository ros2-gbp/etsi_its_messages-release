/** ============================================================================
MIT License

Copyright (c) 2023-2024 Institute for Automotive Engineering (ika), RWTH Aachen University

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

/** Auto-generated by https://github.com/ika-rwth-aachen/etsi_its_messages -----
python3 \
  utils/codegen/codegen-py/asn1ToConversionHeader.py \
  asn1/raw/cam_en302637_2/CAM-PDU-Descriptions.asn \
  asn1/raw/cam_en302637_2/cdd/ITS-Container.asn \
  -t \
  cam \
  -o \
  etsi_its_conversion/etsi_its_cam_conversion/include/etsi_its_cam_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
LateralAcceleration ::= SEQUENCE {
    lateralAccelerationValue LateralAccelerationValue,
    lateralAccelerationConfidence AccelerationConfidence
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cam_coding/cam_LateralAcceleration.h>
#include <etsi_its_cam_conversion/convertAccelerationConfidence.h>
#include <etsi_its_cam_conversion/convertLateralAccelerationValue.h>
#ifdef ROS1
#include <etsi_its_cam_msgs/LateralAcceleration.h>
namespace cam_msgs = etsi_its_cam_msgs;
#else
#include <etsi_its_cam_msgs/msg/lateral_acceleration.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#endif


namespace etsi_its_cam_conversion {

void toRos_LateralAcceleration(const cam_LateralAcceleration_t& in, cam_msgs::LateralAcceleration& out) {
  toRos_LateralAccelerationValue(in.lateralAccelerationValue, out.lateral_acceleration_value);
  toRos_AccelerationConfidence(in.lateralAccelerationConfidence, out.lateral_acceleration_confidence);
}

void toStruct_LateralAcceleration(const cam_msgs::LateralAcceleration& in, cam_LateralAcceleration_t& out) {
  memset(&out, 0, sizeof(cam_LateralAcceleration_t));
  toStruct_LateralAccelerationValue(in.lateral_acceleration_value, out.lateralAccelerationValue);
  toStruct_AccelerationConfidence(in.lateral_acceleration_confidence, out.lateralAccelerationConfidence);
}

}
