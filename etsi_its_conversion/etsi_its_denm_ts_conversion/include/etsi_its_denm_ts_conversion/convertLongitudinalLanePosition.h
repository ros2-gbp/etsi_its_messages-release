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
  asn1/raw/denm_ts103831/DENM-PDU-Descriptions.asn \
  asn1/patched/denm_ts103831/cdd/ETSI-ITS-CDD.asn \
  -t \
  denm_ts \
  -o \
  etsi_its_conversion/etsi_its_denm_ts_conversion/include/etsi_its_denm_ts_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
* 
 * This DF represents the estimated position along the longitudinal extension of a carriageway or lane. 
 *
 * It shall include the following components: 
 *
 * @field  longitudinalLanePositionValue: the mean value of the longitudinal position along the carriageway or lane w.r.t. an externally defined start position.
 *
 * @field  longitudinalLanePositionConfidence: The confidence value associated to the value.
 *
 * @category: Road topology information
 * @revision: created in V2.1.1, description revised in V2.2.1
 *
LongitudinalLanePosition ::= SEQUENCE {
    longitudinalLanePositionValue         LongitudinalLanePositionValue,
    longitudinalLanePositionConfidence    LongitudinalLanePositionConfidence
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_denm_ts_coding/denm_ts_LongitudinalLanePosition.h>
#include <etsi_its_denm_ts_conversion/convertLongitudinalLanePositionConfidence.h>
#include <etsi_its_denm_ts_conversion/convertLongitudinalLanePositionValue.h>
#ifdef ROS1
#include <etsi_its_denm_ts_msgs/LongitudinalLanePosition.h>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs;
#else
#include <etsi_its_denm_ts_msgs/msg/longitudinal_lane_position.hpp>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs::msg;
#endif


namespace etsi_its_denm_ts_conversion {

void toRos_LongitudinalLanePosition(const denm_ts_LongitudinalLanePosition_t& in, denm_ts_msgs::LongitudinalLanePosition& out) {
  toRos_LongitudinalLanePositionValue(in.longitudinalLanePositionValue, out.longitudinal_lane_position_value);
  toRos_LongitudinalLanePositionConfidence(in.longitudinalLanePositionConfidence, out.longitudinal_lane_position_confidence);
}

void toStruct_LongitudinalLanePosition(const denm_ts_msgs::LongitudinalLanePosition& in, denm_ts_LongitudinalLanePosition_t& out) {
  memset(&out, 0, sizeof(denm_ts_LongitudinalLanePosition_t));
  toStruct_LongitudinalLanePositionValue(in.longitudinal_lane_position_value, out.longitudinalLanePositionValue);
  toStruct_LongitudinalLanePositionConfidence(in.longitudinal_lane_position_confidence, out.longitudinalLanePositionConfidence);
}

}
