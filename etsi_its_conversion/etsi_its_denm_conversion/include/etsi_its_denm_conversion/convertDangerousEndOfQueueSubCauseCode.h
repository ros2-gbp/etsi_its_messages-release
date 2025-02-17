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
  asn1/raw/denm_en302637_3/DENM-PDU-Descriptions.asn \
  asn1/raw/denm_en302637_3/cdd/ITS-Container.asn \
  -t \
  denm \
  -o \
  etsi_its_conversion/etsi_its_denm_conversion/include/etsi_its_denm_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
DangerousEndOfQueueSubCauseCode ::= INTEGER {unavailable(0), suddenEndOfQueue(1), queueOverHill(2), queueAroundBend(3), queueInTunnel(4)} (0..255)
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_denm_coding/denm_DangerousEndOfQueueSubCauseCode.h>
#include <etsi_its_denm_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_denm_msgs/DangerousEndOfQueueSubCauseCode.h>
namespace denm_msgs = etsi_its_denm_msgs;
#else
#include <etsi_its_denm_msgs/msg/dangerous_end_of_queue_sub_cause_code.hpp>
namespace denm_msgs = etsi_its_denm_msgs::msg;
#endif


namespace etsi_its_denm_conversion {

void toRos_DangerousEndOfQueueSubCauseCode(const denm_DangerousEndOfQueueSubCauseCode_t& in, denm_msgs::DangerousEndOfQueueSubCauseCode& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_DangerousEndOfQueueSubCauseCode(const denm_msgs::DangerousEndOfQueueSubCauseCode& in, denm_DangerousEndOfQueueSubCauseCode_t& out) {
  memset(&out, 0, sizeof(denm_DangerousEndOfQueueSubCauseCode_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}
