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
  asn1/raw/cam_ts103900/CAM-PDU-Descriptions.asn \
  asn1/patched/cam_ts103900/cdd/ETSI-ITS-CDD.asn \
  -t \
  cam_ts \
  -o \
  etsi_its_conversion/etsi_its_cam_ts_conversion/include/etsi_its_cam_ts_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
*
 * This DE indicates a certain coding type of the PtActivationData data.
 *
 * The folowing value are specified:
 * - 0 `undefinedCodingType`  : undefined coding type,
 * - 1 `r09-16CodingType`     : coding of PtActivationData conform to VDV recommendation 420 [7],
 * - 2 `vdv-50149CodingType`  : coding of PtActivationData based on VDV recommendation 420 [7].
 * - 3 - 255                  : reserved for alternative and future use.
 * 
 * @category: Vehicle information 
 * @revision: V1.3.1
 *
PtActivationType ::= INTEGER {
    undefinedCodingType (0), 
    r09-16CodingType    (1), 
    vdv-50149CodingType (2)
} (0..255)
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cam_ts_coding/cam_ts_PtActivationType.h>
#include <etsi_its_cam_ts_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/PtActivationType.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/pt_activation_type.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_PtActivationType(const cam_ts_PtActivationType_t& in, cam_ts_msgs::PtActivationType& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_PtActivationType(const cam_ts_msgs::PtActivationType& in, cam_ts_PtActivationType_t& out) {
  memset(&out, 0, sizeof(cam_ts_PtActivationType_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}
