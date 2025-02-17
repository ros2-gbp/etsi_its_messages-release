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
 * This DE represents the value of the sub cause code of the @ref CauseCode `adverseWeatherCondition-Adhesion`. 
 * 
 * The value shall be set to:
 * - 0 - `unavailable`     - in case information on the cause of the low road adhesion is unavailable,
 * - 1 - `heavyFrostOnRoad`- in case the low road adhesion is due to heavy frost on the road,
 * - 2 - `fuelOnRoad`      - in case the low road adhesion is due to fuel on the road,
 * - 3 - `mudOnRoad`       - in case the low road adhesion is due to mud on the road,
 * - 4 - `snowOnRoad`      - in case the low road adhesion is due to snow on the road,
 * - 5 - `iceOnRoad`       - in case the low road adhesion is due to ice on the road,
 * - 6 - `blackIceOnRoad`  - in case the low road adhesion is due to black ice on the road,
 * - 7 - `oilOnRoad`       - in case the low road adhesion is due to oil on the road,
 * - 8 - `looseChippings`  - in case the low road adhesion is due to loose gravel or stone fragments detached from a road surface or from a hazard,
 * - 9 - `instantBlackIce` - in case the low road adhesion is due to instant black ice on the road surface,
 * - 10 - `roadsSalted`    - when the low road adhesion is due to salted road,
 * - 11-255                - are reserved for future usage.
 *
 * @category: Traffic information
 * @revision: V1.3.1
 *
AdverseWeatherCondition-AdhesionSubCauseCode ::= INTEGER {
    unavailable      (0),
    heavyFrostOnRoad (1),
    fuelOnRoad       (2),
    mudOnRoad        (3),
    snowOnRoad       (4),
    iceOnRoad        (5),
    blackIceOnRoad   (6),
    oilOnRoad        (7),
    looseChippings   (8),
    instantBlackIce  (9),
    roadsSalted      (10)
} (0..255)
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cam_ts_coding/cam_ts_AdverseWeatherCondition-AdhesionSubCauseCode.h>
#include <etsi_its_cam_ts_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/AdverseWeatherConditionAdhesionSubCauseCode.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/adverse_weather_condition_adhesion_sub_cause_code.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_AdverseWeatherConditionAdhesionSubCauseCode(const cam_ts_AdverseWeatherCondition_AdhesionSubCauseCode_t& in, cam_ts_msgs::AdverseWeatherConditionAdhesionSubCauseCode& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_AdverseWeatherConditionAdhesionSubCauseCode(const cam_ts_msgs::AdverseWeatherConditionAdhesionSubCauseCode& in, cam_ts_AdverseWeatherCondition_AdhesionSubCauseCode_t& out) {
  memset(&out, 0, sizeof(cam_ts_AdverseWeatherCondition_AdhesionSubCauseCode_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}
