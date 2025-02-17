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
 * This DF provides information about the source of and confidence in information.
 *
 * It shall include the following components: 
 * 
 * @field usedDetectionInformation: the type of sensor(s) that is used to provide the detection information.
 * 
 * @field usedStoredInformation: the type of source of the stored information. 
 *
 * @field confidenceValue: an optional confidence value associated to the information. 
 * 
 * @category: Basic information
 * @revision: Created in V2.2.1
*
MetaInformation::=SEQUENCE{		
  usedDetectionInformation   SensorTypes, 
  usedStoredInformation      StoredInformationType,
  confidenceValue            ConfidenceLevel OPTIONAL,
  ...
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_denm_ts_coding/denm_ts_MetaInformation.h>
#include <etsi_its_denm_ts_conversion/convertConfidenceLevel.h>
#include <etsi_its_denm_ts_conversion/convertSensorTypes.h>
#include <etsi_its_denm_ts_conversion/convertStoredInformationType.h>
#ifdef ROS1
#include <etsi_its_denm_ts_msgs/MetaInformation.h>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs;
#else
#include <etsi_its_denm_ts_msgs/msg/meta_information.hpp>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs::msg;
#endif


namespace etsi_its_denm_ts_conversion {

void toRos_MetaInformation(const denm_ts_MetaInformation_t& in, denm_ts_msgs::MetaInformation& out) {
  toRos_SensorTypes(in.usedDetectionInformation, out.used_detection_information);
  toRos_StoredInformationType(in.usedStoredInformation, out.used_stored_information);
  if (in.confidenceValue) {
    toRos_ConfidenceLevel(*in.confidenceValue, out.confidence_value);
    out.confidence_value_is_present = true;
  }
}

void toStruct_MetaInformation(const denm_ts_msgs::MetaInformation& in, denm_ts_MetaInformation_t& out) {
  memset(&out, 0, sizeof(denm_ts_MetaInformation_t));
  toStruct_SensorTypes(in.used_detection_information, out.usedDetectionInformation);
  toStruct_StoredInformationType(in.used_stored_information, out.usedStoredInformation);
  if (in.confidence_value_is_present) {
    out.confidenceValue = (denm_ts_ConfidenceLevel_t*) calloc(1, sizeof(denm_ts_ConfidenceLevel_t));
    toStruct_ConfidenceLevel(in.confidence_value, *out.confidenceValue);
  }
}

}
