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
 * This DE represents the smallest circular turn (i.e. U-turn) that the vehicle is capable of making.
 *
 * The value shall be set to:
 * - `n` (`n > 0` and `n < 254`) to indicate the applicable value is equal to or less than n x 0,4 metre, and greater than (n-1) x 0,4 metre,
 * - `254` to indicate that the turning radius is  greater than 253 x 0,4 metre = 101.2 metres,
 * - `255` to indicate that the information is unavailable.
 * 
 * For vehicle with tracker, the turning radius applies to the vehicle only.
 *
 * @category: Vehicle information
 * @unit 0,4 metre
 * @revision: Description revised V2.1.1 (the meaning of 254 has changed slightly)
 *
TurningRadius ::= INTEGER {
    outOfRange  (254),
    unavailable (255)
} (1..255)
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_denm_ts_coding/denm_ts_TurningRadius.h>
#include <etsi_its_denm_ts_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_denm_ts_msgs/TurningRadius.h>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs;
#else
#include <etsi_its_denm_ts_msgs/msg/turning_radius.hpp>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs::msg;
#endif


namespace etsi_its_denm_ts_conversion {

void toRos_TurningRadius(const denm_ts_TurningRadius_t& in, denm_ts_msgs::TurningRadius& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_TurningRadius(const denm_ts_msgs::TurningRadius& in, denm_ts_TurningRadius_t& out) {
  memset(&out, 0, sizeof(denm_ts_TurningRadius_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}
