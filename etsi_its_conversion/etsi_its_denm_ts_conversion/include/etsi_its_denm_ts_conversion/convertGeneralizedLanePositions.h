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
 * This DF represents transversal position information with respect to the road, at an externally defined reference position. It shall contain a set of up to `4` @ref GeneralizedLanePosition.
 * Multiple entries can be used to describe several lane positions with the associated confidence, in cases where the reference position cannot be mapped to a single lane.
 *
 * @category: Road Topology information
 * @revision: Created in V2.2.1
 *
GeneralizedLanePositions ::= SEQUENCE (SIZE(1..4)) OF GeneralizedLanePosition
----------------------------------------------------------------------------- */

#pragma once

#include <stdexcept>

#include <etsi_its_denm_ts_coding/asn_SEQUENCE_OF.h>
#include <etsi_its_denm_ts_coding/denm_ts_GeneralizedLanePositions.h>
#include <etsi_its_denm_ts_coding/denm_ts_GeneralizedLanePosition.h>
#include <etsi_its_denm_ts_conversion/convertGeneralizedLanePosition.h>
#ifdef ROS1
#include <etsi_its_denm_ts_msgs/GeneralizedLanePosition.h>
#include <etsi_its_denm_ts_msgs/GeneralizedLanePositions.h>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs;
#else
#include <etsi_its_denm_ts_msgs/msg/generalized_lane_position.hpp>
#include <etsi_its_denm_ts_msgs/msg/generalized_lane_positions.hpp>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs::msg;
#endif


namespace etsi_its_denm_ts_conversion {

void toRos_GeneralizedLanePositions(const denm_ts_GeneralizedLanePositions_t& in, denm_ts_msgs::GeneralizedLanePositions& out) {
  for (int i = 0; i < in.list.count; ++i) {
    denm_ts_msgs::GeneralizedLanePosition el;
    toRos_GeneralizedLanePosition(*(in.list.array[i]), el);
    out.array.push_back(el);
  }
}

void toStruct_GeneralizedLanePositions(const denm_ts_msgs::GeneralizedLanePositions& in, denm_ts_GeneralizedLanePositions_t& out) {
  memset(&out, 0, sizeof(denm_ts_GeneralizedLanePositions_t));
  for (int i = 0; i < in.array.size(); ++i) {
    denm_ts_GeneralizedLanePosition_t* el = (denm_ts_GeneralizedLanePosition_t*) calloc(1, sizeof(denm_ts_GeneralizedLanePosition_t));
    toStruct_GeneralizedLanePosition(in.array[i], *el);
    if (asn_sequence_add(&out, el)) throw std::invalid_argument("Failed to add to A_SEQUENCE_OF");
  }
}

}
