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
 * This DE indicates the horizontal position confidence value which represents the estimated absolute position accuracy, in one of the axis direction as defined in a shape of ellipse with a 
 * confidence level of 95 %. 
 * 
 * The value shall be set to:
 * - `n` (`n > 0` and `n < 4 094`) if the accuracy is equal to or less than n * 0,01 metre,
 * - `4 094` if the accuracy is out of range, i.e. greater than 4,093 m,
 * - `4 095` if the accuracy information is unavailable.
 *
 * The value 0 shall not be used.
 * 
 * @note: The fact that a position coordinate value is received with confidence value set to `unavailable(4095)`.
 * can be caused by several reasons, such as:
 * - the sensor cannot deliver the accuracy at the defined confidence level because it is a low-end sensor,
 * - the sensor cannot calculate the accuracy due to lack of variables, or
 * - there has been a vehicle bus (e.g. CAN bus) error.
 * In all 3 cases above, the position coordinate value may be valid and used by the application.
 * If a position coordinate value is received and its confidence value is set to `outOfRange(4094)`, it means that
 * the position coordinate value is not valid and therefore cannot be trusted. Such value is not useful
 * for the application.

 * @unit 0,01 metre 
 * @category: GeoReference Information
 * @revision: Description revised in V2.1.1
 *
SemiAxisLength ::= INTEGER{
    doNotUse    (0),
    outOfRange  (4094), 
    unavailable (4095)
} (0..4095)
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_vam_ts_coding/vam_ts_SemiAxisLength.h>
#include <etsi_its_vam_ts_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_vam_ts_msgs/SemiAxisLength.h>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs;
#else
#include <etsi_its_vam_ts_msgs/msg/semi_axis_length.hpp>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs::msg;
#endif


namespace etsi_its_vam_ts_conversion {

void toRos_SemiAxisLength(const vam_ts_SemiAxisLength_t& in, vam_ts_msgs::SemiAxisLength& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_SemiAxisLength(const vam_ts_msgs::SemiAxisLength& in, vam_ts_SemiAxisLength_t& out) {
  memset(&out, 0, sizeof(vam_ts_SemiAxisLength_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}
