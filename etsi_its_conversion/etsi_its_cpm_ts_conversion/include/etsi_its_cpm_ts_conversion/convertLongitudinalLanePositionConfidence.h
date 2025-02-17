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
  asn1/raw/cpm_ts103324/asn/CPM-PDU-Descriptions.asn \
  asn1/raw/cpm_ts103324/asn/CPM-OriginatingStationContainers.asn \
  asn1/raw/cpm_ts103324/asn/CPM-PerceivedObjectContainer.asn \
  asn1/raw/cpm_ts103324/asn/CPM-PerceptionRegionContainer.asn \
  asn1/raw/cpm_ts103324/asn/CPM-SensorInformationContainer.asn \
  asn1/patched/cpm_ts103324/asn/cdd/ETSI-ITS-CDD.asn \
  -t \
  cpm_ts \
  -o \
  etsi_its_conversion/etsi_its_cpm_ts_conversion/include/etsi_its_cpm_ts_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
* 
 * This DE indicates the longitudinal lane position confidence value which represents the estimated accuracy of longitudinal lane position measurement with a default confidence level of 95 %.
 * If required, the confidence level can be defined by the corresponding standards applying this DE.
 *
 * The value shall be set to:
 * - `n` (`n > 0` and `n < 1 022`) if the  confidence value is equal to or less than n x 0,1 m, and more than (n-1) x 0,1 m,
 * - `1 022` if the confidence value is out of range i.e. greater than 102,1 m,
 * - `1 023` if the confidence value is unavailable.
 *
 * @unit 0,1 metre
 * @category: GeoReference information
 * @revision: Created in V2.1.1
*
LongitudinalLanePositionConfidence ::= INTEGER {
    outOfRange  (1022),
    unavailable (1023)  
} (0..1023)
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cpm_ts_coding/cpm_ts_LongitudinalLanePositionConfidence.h>
#include <etsi_its_cpm_ts_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_cpm_ts_msgs/LongitudinalLanePositionConfidence.h>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs;
#else
#include <etsi_its_cpm_ts_msgs/msg/longitudinal_lane_position_confidence.hpp>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs::msg;
#endif


namespace etsi_its_cpm_ts_conversion {

void toRos_LongitudinalLanePositionConfidence(const cpm_ts_LongitudinalLanePositionConfidence_t& in, cpm_ts_msgs::LongitudinalLanePositionConfidence& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_LongitudinalLanePositionConfidence(const cpm_ts_msgs::LongitudinalLanePositionConfidence& in, cpm_ts_LongitudinalLanePositionConfidence_t& out) {
  memset(&out, 0, sizeof(cpm_ts_LongitudinalLanePositionConfidence_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}
