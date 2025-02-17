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
 * This DE indicates the approximate size of a VRU including the VRU vehicle used.
 * 
 * The value shall be set to:
 * - 0 `unavailable`    - to indicate that there is no matched size class or due to privacy reasons in profile 1, 
 * - 1 `low`            - to indicate that the VRU size class is low depending on the VRU profile,
 * - 2 `medium`         - to indicate that the VRU size class is medium depending on the VRU profile,
 * - 3 `high`           - to indicate that the VRU size class is high depending on the VRU profile.
 * - 4 to 15            - are reserved for future usage. Value 15 is set to "max" in order to bound the size of the encoded field.
 *
 * @category: VRU information
 * @revision: Created in V2.1.1
 *
VruSizeClass ::= ENUMERATED { 
    unavailable (0), 
    low         (1), 
    medium      (2), 
    high        (3), 
    max         (15)
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_vam_ts_coding/vam_ts_VruSizeClass.h>

#ifdef ROS1
#include <etsi_its_vam_ts_msgs/VruSizeClass.h>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs;
#else
#include <etsi_its_vam_ts_msgs/msg/vru_size_class.hpp>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs::msg;
#endif


namespace etsi_its_vam_ts_conversion {

void toRos_VruSizeClass(const vam_ts_VruSizeClass_t& in, vam_ts_msgs::VruSizeClass& out) {
  out.value = in;
}

void toStruct_VruSizeClass(const vam_ts_msgs::VruSizeClass& in, vam_ts_VruSizeClass_t& out) {
  memset(&out, 0, sizeof(vam_ts_VruSizeClass_t));
  out = in.value;
}

}
