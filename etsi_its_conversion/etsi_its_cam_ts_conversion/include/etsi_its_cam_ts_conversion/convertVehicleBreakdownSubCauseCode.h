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
 * This DE represents the value of the sub cause codes of the @ref CauseCode `vehicleBreakdown`. 
 * 
 * The value shall be set to:
 * - 0 `unavailable`         - in case further detailed information on cause of vehicle break down is unavailable,
 * - 1 `lackOfFuel`          - in case vehicle break down is due to lack of fuel,
 * - 2 `lackOfBatteryPower`  - in case vehicle break down is caused by lack of battery power,
 * - 3 `engineProblem`       - in case vehicle break down is caused by an engine problem,
 * - 4 `transmissionProblem` - in case vehicle break down is caused by transmission problem,
 * - 5 `engineCoolingProblem`- in case vehicle break down is caused by an engine cooling problem,
 * - 6 `brakingSystemProblem`- in case vehicle break down is caused by a braking system problem,
 * - 7 `steeringProblem`     - in case vehicle break down is caused by a steering problem,
 * - 8 `tyrePuncture`        - in case vehicle break down is caused by tyre puncture,
 * - 9 `tyrePressureProblem` - in case low tyre pressure in detected,
 * - 10 `vehicleOnFire`      - in case the vehicle is on fire.
 * - 11-255                  - are reserved for future usage.
 *
 * @category: Traffic information

 *
VehicleBreakdownSubCauseCode ::= INTEGER {
    unavailable          (0), 
    lackOfFuel           (1), 
    lackOfBatteryPower   (2), 
    engineProblem        (3), 
    transmissionProblem  (4), 
    engineCoolingProblem (5), 
    brakingSystemProblem (6), 
    steeringProblem      (7), 
    tyrePuncture         (8), 
    tyrePressureProblem  (9), 
    vehicleOnFire        (10)
} (0..255)
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cam_ts_coding/cam_ts_VehicleBreakdownSubCauseCode.h>
#include <etsi_its_cam_ts_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/VehicleBreakdownSubCauseCode.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/vehicle_breakdown_sub_cause_code.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_VehicleBreakdownSubCauseCode(const cam_ts_VehicleBreakdownSubCauseCode_t& in, cam_ts_msgs::VehicleBreakdownSubCauseCode& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_VehicleBreakdownSubCauseCode(const cam_ts_msgs::VehicleBreakdownSubCauseCode& in, cam_ts_VehicleBreakdownSubCauseCode_t& out) {
  memset(&out, 0, sizeof(cam_ts_VehicleBreakdownSubCauseCode_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}
