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
  asn1/raw/cpm_ts103324/asn/CPM-PDU-Descriptions.asn \
  asn1/raw/cpm_ts103324/asn/CPM-OriginatingStationContainers.asn \
  asn1/raw/cpm_ts103324/asn/CPM-PerceivedObjectContainer.asn \
  asn1/raw/cpm_ts103324/asn/CPM-PerceptionRegionContainer.asn \
  asn1/raw/cpm_ts103324/asn/CPM-SensorInformationContainer.asn \
  asn1/patched/cpm_ts103324/asn/cdd/ETSI-ITS-CDD.asn \
  -t \
  cpm_ts \
  -o \
  etsi_its_conversion/etsi_its_cpm_ts_conversion/include/etsi_its_cpm_ts_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
*
 * This DF  represents the payload of the CPM. 
 *
 * It shall include the following components: 
 *
 * @field managementContainer: the management container. 
 *
 * @field cpmContainers: the list of CPM containers, including its container type identifier and including either one or none of originatingVehicleContainer and/or originatingRsuContainer. 
 *
*
CpmPayload ::= SEQUENCE {
    managementContainer   ManagementContainer,
    cpmContainers         ConstraintWrappedCpmContainers,
    ...
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cpm_ts_coding/cpm_ts_CpmPayload.h>
#include <etsi_its_cpm_ts_conversion/convertConstraintWrappedCpmContainers.h>
#include <etsi_its_cpm_ts_conversion/convertManagementContainer.h>
#ifdef ROS1
#include <etsi_its_cpm_ts_msgs/CpmPayload.h>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs;
#else
#include <etsi_its_cpm_ts_msgs/msg/cpm_payload.hpp>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs::msg;
#endif


namespace etsi_its_cpm_ts_conversion {

void toRos_CpmPayload(const cpm_ts_CpmPayload_t& in, cpm_ts_msgs::CpmPayload& out) {
  toRos_ManagementContainer(in.managementContainer, out.management_container);
  toRos_ConstraintWrappedCpmContainers(in.cpmContainers, out.cpm_containers);
}

void toStruct_CpmPayload(const cpm_ts_msgs::CpmPayload& in, cpm_ts_CpmPayload_t& out) {
  memset(&out, 0, sizeof(cpm_ts_CpmPayload_t));
  toStruct_ManagementContainer(in.management_container, out.managementContainer);
  toStruct_ConstraintWrappedCpmContainers(in.cpm_containers, out.cpmContainers);
}

}
