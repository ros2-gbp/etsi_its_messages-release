/** ============================================================================
MIT License

Copyright (c) 2023-2025 Institute for Automotive Engineering (ika), RWTH Aachen University

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
  asn1/raw/cam_ts103900/CAM-PDU-Descriptions.asn \
  asn1/patched/cam_ts103900/cdd/ETSI-ITS-CDD.asn \
  -t \
  cam_ts \
  -o \
  etsi_its_conversion/etsi_its_cam_ts_conversion/include/etsi_its_cam_ts_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
*
 * This DF represents the steering wheel angle of the vehicle at certain point in time.
 *
 * It shall include the following components: 
 * 
 * @field steeringWheelAngleValue: steering wheel angle value.
 * 
 * @field steeringWheelAngleConfidence: confidence value of the steering wheel angle value.
 * 
 * @category: Vehicle information
 * @revision: Created in V2.1.1
 *
SteeringWheelAngle ::= SEQUENCE {
    steeringWheelAngleValue         SteeringWheelAngleValue,
    steeringWheelAngleConfidence    SteeringWheelAngleConfidence
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cam_ts_coding/cam_ts_SteeringWheelAngle.h>
#include <etsi_its_cam_ts_conversion/convertSteeringWheelAngleConfidence.h>
#include <etsi_its_cam_ts_conversion/convertSteeringWheelAngleValue.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/SteeringWheelAngle.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/steering_wheel_angle.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_SteeringWheelAngle(const cam_ts_SteeringWheelAngle_t& in, cam_ts_msgs::SteeringWheelAngle& out) {
  toRos_SteeringWheelAngleValue(in.steeringWheelAngleValue, out.steering_wheel_angle_value);
  toRos_SteeringWheelAngleConfidence(in.steeringWheelAngleConfidence, out.steering_wheel_angle_confidence);
}

void toStruct_SteeringWheelAngle(const cam_ts_msgs::SteeringWheelAngle& in, cam_ts_SteeringWheelAngle_t& out) {
  memset(&out, 0, sizeof(cam_ts_SteeringWheelAngle_t));
  toStruct_SteeringWheelAngleValue(in.steering_wheel_angle_value, out.steeringWheelAngleValue);
  toStruct_SteeringWheelAngleConfidence(in.steering_wheel_angle_confidence, out.steeringWheelAngleConfidence);
}

}
