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
  asn1/raw/cam_ts103900/CAM-PDU-Descriptions.asn \
  asn1/patched/cam_ts103900/cdd/ETSI-ITS-CDD.asn \
  -t \
  cam_ts \
  -o \
  etsi_its_conversion/etsi_its_cam_ts_conversion/include/etsi_its_cam_ts_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
*
 * This DE indicates the status of light bar and any sort of audible alarm system besides the horn.
 * This includes various common sirens as well as backup up beepers and other slow speed manoeuvring alerts.
 *
 * The corresponding bit shall be set to 1 under the following conditions:
 * - 0 - `lightBarActivated`      - when the light bar is activated,
 * - 1 - `sirenActivated`         - when the siren is activated.
 *
 * Otherwise, it shall be set to 0.
 *
 * @category Vehicle information
 * @revision: Editorial update in V2.1.1
 *
LightBarSirenInUse ::= BIT STRING {
    lightBarActivated (0),
    sirenActivated    (1)
} (SIZE(2))
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cam_ts_coding/cam_ts_LightBarSirenInUse.h>
#include <etsi_its_cam_ts_coding/BIT_STRING.h>
#include <etsi_its_primitives_conversion/convertBIT_STRING.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/LightBarSirenInUse.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/light_bar_siren_in_use.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_LightBarSirenInUse(const cam_ts_LightBarSirenInUse_t& in, cam_ts_msgs::LightBarSirenInUse& out) {
  etsi_its_primitives_conversion::toRos_BIT_STRING(in, out.value);
  out.bits_unused = in.bits_unused;
}

void toStruct_LightBarSirenInUse(const cam_ts_msgs::LightBarSirenInUse& in, cam_ts_LightBarSirenInUse_t& out) {
  memset(&out, 0, sizeof(cam_ts_LightBarSirenInUse_t));
  etsi_its_primitives_conversion::toStruct_BIT_STRING(in.value, out);
  out.bits_unused = in.bits_unused;
}

}