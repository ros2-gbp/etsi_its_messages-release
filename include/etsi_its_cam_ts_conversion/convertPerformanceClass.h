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
 * This DE denotes the ability of an ITS-S to provide up-to-date information.
 * A performance class value is used to describe age of data. The exact values are out of scope of the present document.
 * 
 *  The value shall be set to:
 * - `0` if  the performance class is unknown,
 * - `1` for performance class A as defined in ETSI TS 101 539-1 [5],
 * - `2` for performance class B as defined in ETSI TS 101 539-1 [5],
 * -  3-7 reserved for future use.
 *
 * @category: Vehicle information
 * @revision: Editorial update in V2.1.1
 *
PerformanceClass ::= INTEGER {
    unavailable       (0), 
    performanceClassA (1), 
    performanceClassB (2)
} (0..7)
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cam_ts_coding/cam_ts_PerformanceClass.h>
#include <etsi_its_cam_ts_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/PerformanceClass.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/performance_class.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_PerformanceClass(const cam_ts_PerformanceClass_t& in, cam_ts_msgs::PerformanceClass& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_PerformanceClass(const cam_ts_msgs::PerformanceClass& in, cam_ts_PerformanceClass_t& out) {
  memset(&out, 0, sizeof(cam_ts_PerformanceClass_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}
