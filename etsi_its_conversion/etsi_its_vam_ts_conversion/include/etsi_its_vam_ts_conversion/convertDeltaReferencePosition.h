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
 * This DF defines a geographical point position as a 3 dimensional offset position to a geographical reference point.
 *
 * It shall include the following components: 
 *
 * @field deltaLatitude: A delta latitude offset with regards to the latitude value of the reference position.
 *
 * @field deltaLongitude: A delta longitude offset with regards to the longitude value of the reference position.
 *
 * @field deltaAltitude: A delta altitude offset with regards to the altitude value of the reference position.
 *
 * @category: GeoReference information
 * @revision:  V1.3.1
 *
DeltaReferencePosition ::= SEQUENCE {
    deltaLatitude     DeltaLatitude,
    deltaLongitude    DeltaLongitude,
    deltaAltitude     DeltaAltitude
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_vam_ts_coding/vam_ts_DeltaReferencePosition.h>
#include <etsi_its_vam_ts_conversion/convertDeltaAltitude.h>
#include <etsi_its_vam_ts_conversion/convertDeltaLatitude.h>
#include <etsi_its_vam_ts_conversion/convertDeltaLongitude.h>
#ifdef ROS1
#include <etsi_its_vam_ts_msgs/DeltaReferencePosition.h>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs;
#else
#include <etsi_its_vam_ts_msgs/msg/delta_reference_position.hpp>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs::msg;
#endif


namespace etsi_its_vam_ts_conversion {

void toRos_DeltaReferencePosition(const vam_ts_DeltaReferencePosition_t& in, vam_ts_msgs::DeltaReferencePosition& out) {
  toRos_DeltaLatitude(in.deltaLatitude, out.delta_latitude);
  toRos_DeltaLongitude(in.deltaLongitude, out.delta_longitude);
  toRos_DeltaAltitude(in.deltaAltitude, out.delta_altitude);
}

void toStruct_DeltaReferencePosition(const vam_ts_msgs::DeltaReferencePosition& in, vam_ts_DeltaReferencePosition_t& out) {
  memset(&out, 0, sizeof(vam_ts_DeltaReferencePosition_t));
  toStruct_DeltaLatitude(in.delta_latitude, out.deltaLatitude);
  toStruct_DeltaLongitude(in.delta_longitude, out.deltaLongitude);
  toStruct_DeltaAltitude(in.delta_altitude, out.deltaAltitude);
}

}