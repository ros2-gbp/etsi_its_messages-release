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
  asn1/raw/cam_ts103900/CAM-PDU-Descriptions.asn \
  asn1/patched/cam_ts103900/cdd/ETSI-ITS-CDD.asn \
  -t \
  cam_ts \
  -o \
  etsi_its_conversion/etsi_its_cam_ts_conversion/include/etsi_its_cam_ts_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
*
 * This DF represents the length of vehicle and accuracy indication information.
 *
 * It shall include the following components: 
 * 
 * @field vehicleLengthValue: length of vehicle. 
 * 
 * @field vehicleLengthConfidenceIndication: indication of the length value confidence.
 * 
 * @note: this DF is kept for backwards compatibility reasons only. It is recommended to use @ref VehicleLengthV2 instead.
 * @category: Vehicle information
 * @revision: V1.3.1
 *
VehicleLength ::= SEQUENCE {
    vehicleLengthValue                   VehicleLengthValue,
    vehicleLengthConfidenceIndication    VehicleLengthConfidenceIndication
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cam_ts_coding/cam_ts_VehicleLength.h>
#include <etsi_its_cam_ts_conversion/convertVehicleLengthConfidenceIndication.h>
#include <etsi_its_cam_ts_conversion/convertVehicleLengthValue.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/VehicleLength.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/vehicle_length.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_VehicleLength(const cam_ts_VehicleLength_t& in, cam_ts_msgs::VehicleLength& out) {
  toRos_VehicleLengthValue(in.vehicleLengthValue, out.vehicle_length_value);
  toRos_VehicleLengthConfidenceIndication(in.vehicleLengthConfidenceIndication, out.vehicle_length_confidence_indication);
}

void toStruct_VehicleLength(const cam_ts_msgs::VehicleLength& in, cam_ts_VehicleLength_t& out) {
  memset(&out, 0, sizeof(cam_ts_VehicleLength_t));
  toStruct_VehicleLengthValue(in.vehicle_length_value, out.vehicleLengthValue);
  toStruct_VehicleLengthConfidenceIndication(in.vehicle_length_confidence_indication, out.vehicleLengthConfidenceIndication);
}

}
