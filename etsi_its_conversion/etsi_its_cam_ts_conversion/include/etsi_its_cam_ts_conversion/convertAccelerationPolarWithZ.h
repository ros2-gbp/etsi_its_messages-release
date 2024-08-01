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

#include <etsi_its_cam_ts_coding/cam_ts_AccelerationPolarWithZ.h>
#include <etsi_its_cam_ts_conversion/convertAccelerationComponent.h>
#include <etsi_its_cam_ts_conversion/convertAccelerationMagnitude.h>
#include <etsi_its_cam_ts_conversion/convertCartesianAngle.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/AccelerationPolarWithZ.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/acceleration_polar_with_z.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_AccelerationPolarWithZ(const cam_ts_AccelerationPolarWithZ_t& in, cam_ts_msgs::AccelerationPolarWithZ& out) {
  toRos_AccelerationMagnitude(in.accelerationMagnitude, out.acceleration_magnitude);
  toRos_CartesianAngle(in.accelerationDirection, out.acceleration_direction);
  if (in.zAcceleration) {
    toRos_AccelerationComponent(*in.zAcceleration, out.z_acceleration);
    out.z_acceleration_is_present = true;
  }
}

void toStruct_AccelerationPolarWithZ(const cam_ts_msgs::AccelerationPolarWithZ& in, cam_ts_AccelerationPolarWithZ_t& out) {
  memset(&out, 0, sizeof(cam_ts_AccelerationPolarWithZ_t));

  toStruct_AccelerationMagnitude(in.acceleration_magnitude, out.accelerationMagnitude);
  toStruct_CartesianAngle(in.acceleration_direction, out.accelerationDirection);
  if (in.z_acceleration_is_present) {
    out.zAcceleration = (cam_ts_AccelerationComponent_t*) calloc(1, sizeof(cam_ts_AccelerationComponent_t));
    toStruct_AccelerationComponent(in.z_acceleration, *out.zAcceleration);
  }
}

}
