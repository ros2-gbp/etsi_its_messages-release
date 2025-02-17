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
 * This DE represents the value of the sub cause code of the @ref CauseCode `humanPresenceOnTheRoad`.
 * 
 * The value shall be set to:
 * - 0 - `unavailable`                    - in case further detailed information abou the human presence on the road is unavailable,
 * - 1 - `childrenOnRoadway`              - in case children are present on the road,
 * - 2 - `cyclistOnRoadway`               - in case cyclist(s) are present on the road,
 * - 3 - `motorcyclistOnRoadway`          - in case motorcyclist(s) are present on the road,
 * - 4 - `pedestrian`                     - in case pedestrian(s) of any type are present on the road,
 * - 5 - `ordinary-pedestrian`            - in case pedestrian(s) to which no more-specific profile applies are present on the road,
 * - 6 - `road-worker`                    - in case pedestrian(s) with the role of a road worker applies are present on the road,
 * - 7 - `first-responder`                - in case pedestrian(s) with the role of a first responder applies are present on the road,  
 * - 8 - `lightVruVehicle                 - in case light vru vehicle(s) of any type are present on the road,
 * - 9 - `bicyclist `                     - in case cycle(s) and their bicyclist(s) are present on the road,
 * - 10 - `wheelchair-user`               - in case wheelchair(s) and their user(s) are present on the road,
 * - 11 - `horse-and-rider`               - in case horse(s) and rider(s) are present on the road,
 * - 12 - `rollerskater`                  - in case rolleskater(s) and skater(s) are present on the road,
 * - 13 - `e-scooter`                     - in case e-scooter(s) and rider(s) are present on the road,
 * - 14 - `personal-transporter`          - in case personal-transporter(s) and rider(s) are present on the road,
 * - 15 - `pedelec`                       - in case pedelec(s) and rider(s) are present on the road,
 * - 16 - `speed-pedelec`                 - in case speed-pedelec(s) and rider(s) are present on the road,
 * - 17 - `ptw`                           - in case powered-two-wheeler(s) of any type are present on the road,
 * - 18 - `moped`                         - in case moped(s) and rider(s) are present on the road,
 * - 19 - `motorcycle`                    - in case motorcycle(s) and rider(s) are present on the road,
 * - 20 - `motorcycle-and-sidecar-right`  - in case motorcycle(s) with sidecar(s) on the right and rider are present on the road,
 * - 21 - `motorcycle-and-sidecar-left`   - in case motorcycle(s) with sidecar(s) on the left and rider are present on the road.
 * - 22-255                               - are reserved for future usage.
 *
 * @category: Traffic information
 * @revision: editorial revision in V2.1.1, named values 4-21 added in V2.2.1
 *
HumanPresenceOnTheRoadSubCauseCode ::= INTEGER {
    unavailable                  (0), 
    childrenOnRoadway            (1), 
    cyclistOnRoadway             (2), 
    motorcyclistOnRoadway        (3),
    pedestrian                   (4),
    ordinary-pedestrian          (5),
    road-worker                  (6),
    first-responder              (7),
    lightVruVehicle              (8), 
    bicyclist                    (9), 
    wheelchair-user              (10), 
    horse-and-rider              (11), 
    rollerskater                 (12), 
    e-scooter                    (13), 
    personal-transporter         (14),
    pedelec                      (15), 
    speed-pedelec                (16),
    ptw                          (17), 
    moped                        (18), 
    motorcycle                   (19), 
    motorcycle-and-sidecar-right (20), 
    motorcycle-and-sidecar-left  (21)
} (0..255)
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_denm_ts_coding/denm_ts_HumanPresenceOnTheRoadSubCauseCode.h>
#include <etsi_its_denm_ts_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_denm_ts_msgs/HumanPresenceOnTheRoadSubCauseCode.h>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs;
#else
#include <etsi_its_denm_ts_msgs/msg/human_presence_on_the_road_sub_cause_code.hpp>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs::msg;
#endif


namespace etsi_its_denm_ts_conversion {

void toRos_HumanPresenceOnTheRoadSubCauseCode(const denm_ts_HumanPresenceOnTheRoadSubCauseCode_t& in, denm_ts_msgs::HumanPresenceOnTheRoadSubCauseCode& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_HumanPresenceOnTheRoadSubCauseCode(const denm_ts_msgs::HumanPresenceOnTheRoadSubCauseCode& in, denm_ts_HumanPresenceOnTheRoadSubCauseCode_t& out) {
  memset(&out, 0, sizeof(denm_ts_HumanPresenceOnTheRoadSubCauseCode_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}
