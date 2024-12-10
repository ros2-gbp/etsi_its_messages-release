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
  asn1/raw/vam-ts103300_3/VAM-PDU-Descriptions.asn \
  asn1/patched/vam-ts103300_3/cdd/ETSI-ITS-CDD.asn \
  -t \
  vam_ts \
  -o \
  etsi_its_conversion/etsi_its_vam_ts_conversion/include/etsi_its_vam_ts_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
* 
 * This DE represents a general container for usage in various types of messages.
 *
 * It shall include the following components: 
 *
 * @field stationType: the type of technical context in which the ITS-S that has generated the message is integrated in.
 *
 * @field referencePosition: the reference position of the station that has generated the message that contains the basic container.
 *
 * @category: Basic information
 * @revision: Created in V2.1.1
*
BasicContainer ::= SEQUENCE {
	stationType          TrafficParticipantType,
	referencePosition    ReferencePositionWithConfidence,
	...
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_vam_ts_coding/vam_ts_BasicContainer.h>
#include <etsi_its_vam_ts_conversion/convertReferencePositionWithConfidence.h>
#include <etsi_its_vam_ts_conversion/convertTrafficParticipantType.h>
#ifdef ROS1
#include <etsi_its_vam_ts_msgs/BasicContainer.h>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs;
#else
#include <etsi_its_vam_ts_msgs/msg/basic_container.hpp>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs::msg;
#endif


namespace etsi_its_vam_ts_conversion {

void toRos_BasicContainer(const vam_ts_BasicContainer_t& in, vam_ts_msgs::BasicContainer& out) {
  toRos_TrafficParticipantType(in.stationType, out.station_type);
  toRos_ReferencePositionWithConfidence(in.referencePosition, out.reference_position);
}

void toStruct_BasicContainer(const vam_ts_msgs::BasicContainer& in, vam_ts_BasicContainer_t& out) {
  memset(&out, 0, sizeof(vam_ts_BasicContainer_t));
  toStruct_TrafficParticipantType(in.station_type, out.stationType);
  toStruct_ReferencePositionWithConfidence(in.reference_position, out.referencePosition);
}

}
