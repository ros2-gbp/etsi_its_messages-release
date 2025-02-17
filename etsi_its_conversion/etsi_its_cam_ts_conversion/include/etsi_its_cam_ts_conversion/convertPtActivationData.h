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
 * This DE is used for various tasks in the public transportation environment, especially for controlling traffic
 * signal systems to prioritize and speed up public transportation in urban area (e.g. intersection "_bottlenecks_").
 * The traffic lights may be controlled by an approaching bus or tram automatically. This permits "_In Time_" activation
 * of the green phase, will enable the individual traffic to clear a potential traffic jam in advance. Thereby the
 * approaching bus or tram may pass an intersection with activated green light without slowing down the speed due to
 * traffic congestion. Other usage of the DE is the provision of information like the public transport line number
 * or the schedule delay of a public transport vehicle.
 * 
 * @category: Vehicle information
 * @revision: V1.3.1
 *
PtActivationData ::= OCTET STRING (SIZE(1..20))
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cam_ts_coding/cam_ts_PtActivationData.h>
#include <etsi_its_cam_ts_coding/OCTET_STRING.h>
#include <etsi_its_primitives_conversion/convertOCTET_STRING.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/PtActivationData.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/pt_activation_data.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_PtActivationData(const cam_ts_PtActivationData_t& in, cam_ts_msgs::PtActivationData& out) {
  etsi_its_primitives_conversion::toRos_OCTET_STRING(in, out.value);
}

void toStruct_PtActivationData(const cam_ts_msgs::PtActivationData& in, cam_ts_PtActivationData_t& out) {
  memset(&out, 0, sizeof(cam_ts_PtActivationData_t));
  etsi_its_primitives_conversion::toStruct_OCTET_STRING(in.value, out);
}

}
