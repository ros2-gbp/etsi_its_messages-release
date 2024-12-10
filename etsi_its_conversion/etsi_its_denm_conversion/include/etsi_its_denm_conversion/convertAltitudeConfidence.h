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
  asn1/raw/denm_en302637_3/DENM-PDU-Descriptions.asn \
  asn1/raw/denm_en302637_3/cdd/ITS-Container.asn \
  -t \
  denm \
  -o \
  etsi_its_conversion/etsi_its_denm_conversion/include/etsi_its_denm_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
AltitudeConfidence ::= ENUMERATED {
    alt-000-01 (0),
    alt-000-02 (1),
    alt-000-05 (2),
    alt-000-10 (3),
    alt-000-20 (4),
    alt-000-50 (5),
    alt-001-00 (6),
    alt-002-00 (7),
    alt-005-00 (8),
    alt-010-00 (9),
    alt-020-00 (10),
    alt-050-00 (11),
    alt-100-00 (12),
    alt-200-00 (13),
    outOfRange (14),
    unavailable (15)
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_denm_coding/denm_AltitudeConfidence.h>

#ifdef ROS1
#include <etsi_its_denm_msgs/AltitudeConfidence.h>
namespace denm_msgs = etsi_its_denm_msgs;
#else
#include <etsi_its_denm_msgs/msg/altitude_confidence.hpp>
namespace denm_msgs = etsi_its_denm_msgs::msg;
#endif


namespace etsi_its_denm_conversion {

void toRos_AltitudeConfidence(const denm_AltitudeConfidence_t& in, denm_msgs::AltitudeConfidence& out) {
  out.value = in;
}

void toStruct_AltitudeConfidence(const denm_msgs::AltitudeConfidence& in, denm_AltitudeConfidence_t& out) {
  memset(&out, 0, sizeof(denm_AltitudeConfidence_t));
  out = in.value;
}

}
