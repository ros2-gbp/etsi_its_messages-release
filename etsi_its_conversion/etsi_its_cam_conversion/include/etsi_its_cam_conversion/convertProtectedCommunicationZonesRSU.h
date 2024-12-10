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
ProtectedCommunicationZonesRSU ::= SEQUENCE (SIZE(1..16)) OF ProtectedCommunicationZone 
----------------------------------------------------------------------------- */

#pragma once

#include <stdexcept>

#include <etsi_its_cam_coding/asn_SEQUENCE_OF.h>
#include <etsi_its_cam_coding/cam_ProtectedCommunicationZonesRSU.h>
#include <etsi_its_cam_coding/cam_ProtectedCommunicationZone.h>
#include <etsi_its_cam_conversion/convertProtectedCommunicationZone.h>
#ifdef ROS1
#include <etsi_its_cam_msgs/ProtectedCommunicationZone.h>
#include <etsi_its_cam_msgs/ProtectedCommunicationZonesRSU.h>
namespace cam_msgs = etsi_its_cam_msgs;
#else
#include <etsi_its_cam_msgs/msg/protected_communication_zone.hpp>
#include <etsi_its_cam_msgs/msg/protected_communication_zones_rsu.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#endif


namespace etsi_its_cam_conversion {

void toRos_ProtectedCommunicationZonesRSU(const cam_ProtectedCommunicationZonesRSU_t& in, cam_msgs::ProtectedCommunicationZonesRSU& out) {
  for (int i = 0; i < in.list.count; ++i) {
    cam_msgs::ProtectedCommunicationZone el;
    toRos_ProtectedCommunicationZone(*(in.list.array[i]), el);
    out.array.push_back(el);
  }
}

void toStruct_ProtectedCommunicationZonesRSU(const cam_msgs::ProtectedCommunicationZonesRSU& in, cam_ProtectedCommunicationZonesRSU_t& out) {
  memset(&out, 0, sizeof(cam_ProtectedCommunicationZonesRSU_t));
  for (int i = 0; i < in.array.size(); ++i) {
    cam_ProtectedCommunicationZone_t* el = (cam_ProtectedCommunicationZone_t*) calloc(1, sizeof(cam_ProtectedCommunicationZone_t));
    toStruct_ProtectedCommunicationZone(in.array[i], *el);
    if (asn_sequence_add(&out, el)) throw std::invalid_argument("Failed to add to A_SEQUENCE_OF");
  }
}

}