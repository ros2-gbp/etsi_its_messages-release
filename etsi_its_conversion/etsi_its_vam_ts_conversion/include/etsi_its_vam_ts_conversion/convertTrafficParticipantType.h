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
  asn1/raw/vam-ts103300_3/VAM-PDU-Descriptions.asn \
  asn1/patched/vam-ts103300_3/cdd/ETSI-ITS-CDD.asn \
  -t \
  vam_ts \
  -o \
  etsi_its_conversion/etsi_its_vam_ts_conversion/include/etsi_its_vam_ts_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
*
 * This DE represents the type of a traffic participant.
 * 
 * The value shall be set to:
 * - 0 `unknown`          - information about traffic participant is not provided,
 * - 1 `pedestrian`       - human being not using a mechanical device for their trip (VRU profile 1),
 * - 2 `cyclist`          - non-motorized unicycles, bicycles , tricycles, quadracycles (VRU profile 2),
 * - 3 `moped`            - light motor vehicles with less than four wheels as defined in UNECE/TRANS/WP.29/78/Rev.4 [16] class L1, L2 (VRU Profile 3),
 * - 4 `motorcycles`      - motor vehicles with less than four wheels as defined in UNECE/TRANS/WP.29/78/Rev.4 [16] class L3, L4, L5, L6, L7 (VRU Profile 3),
 * - 5 `passengerCar`     - small passenger vehicles as defined in UNECE/TRANS/WP.29/78/Rev.4 [16] class M1,
 * - 6 `bus`              - large passenger vehicles as defined in UNECE/TRANS/WP.29/78/Rev.4 [16] class M2, M3,
 * - 7 `lightTruck`       - light Goods Vehicles as defined in UNECE/TRANS/WP.29/78/Rev.4 [16] class N1,
 * - 8 `heavyTruck`       - Heavy Goods Vehicles as defined in UNECE/TRANS/WP.29/78/Rev.4 [16] class N2 and N3,
 * - 9 `trailer`          - unpowered vehicle that is intended to be towed by a powered vehicle as defined in UNECE/TRANS/WP.29/78/Rev.4 [16] class O,
 * - 10 `specialVehicles` - vehicles which have special purposes other than the above (e.g. moving road works vehicle),
 * - 11 `tram`            - vehicle which runs on tracks along public streets,
 * - 12 `lightVruVehicle` - human being traveling on light vehicle, incl. possible use of roller skates or skateboards (VRU profile 2),
 * - 13 `animal`          - animal presenting a safety risk to other road users e.g. domesticated dog in a city or horse (VRU Profile 4),
 * - 14 `agricultural`    - agricultural and forestry vehicles as defined in UNECE/TRANS/WP.29/78/Rev.4 [16] class T,
 * - 15 `roadSideUnit`    - infrastructure typically positioned outside of the drivable roadway (e.g. on a gantry, on a pole, 
                            on a stationary road works trailer); the infrastructure is static during the entire operation period of the ITS-S (e.g. no stop and go activity),
 * - 16-255               - are reserved for future usage.
 * 
 * @category: Communication information.
 * @revision: Created in V2.1.1 based on StationType
 *
TrafficParticipantType ::= INTEGER {
    unknown         (0), 
    pedestrian      (1), 
    cyclist         (2), 
    moped           (3), 
    motorcycle      (4), 
    passengerCar    (5), 
    bus             (6), 
    lightTruck      (7), 
    heavyTruck      (8), 
    trailer         (9), 
    specialVehicle  (10), 
    tram            (11), 
    lightVruVehicle (12), 
    animal          (13),
    agricultural    (14), 
    roadSideUnit    (15)
} (0..255)
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_vam_ts_coding/vam_ts_TrafficParticipantType.h>
#include <etsi_its_vam_ts_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_vam_ts_msgs/TrafficParticipantType.h>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs;
#else
#include <etsi_its_vam_ts_msgs/msg/traffic_participant_type.hpp>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs::msg;
#endif


namespace etsi_its_vam_ts_conversion {

void toRos_TrafficParticipantType(const vam_ts_TrafficParticipantType_t& in, vam_ts_msgs::TrafficParticipantType& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_TrafficParticipantType(const vam_ts_msgs::TrafficParticipantType& in, vam_ts_TrafficParticipantType_t& out) {
  memset(&out, 0, sizeof(vam_ts_TrafficParticipantType_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}
