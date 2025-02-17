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
 * This DF provides the basic topological definition of a road section.
 *
 * It shall include the following components: 
 * 
 * @field startingPointSection: the position of the starting point of the section. 
 * 
 * @field lengthOfSection: the optional length of the section along the road profile (i.e. including curves).
 * 
 * @field endingPointSection: the optional position of the ending point of the section. 
 * If this component is absent, the ending position is implicitly defined by other means, e.g. the starting point of the next RoadConfigurationSection, or the section�s length.
 *
 * @field connectedPaths: the identifier(s) of the path(s) having one or an ordered subset of waypoints located upstream of the RoadConfigurationSection� starting point. 
 * 
 * @field includedPaths: the identifier(s) of the path(s) that covers (either with all its length or with a part of it) a RoadConfigurationSection. 
 *
 * @field isEventZoneIncluded: indicates, if set to TRUE, that the @ref EventZone incl. its reference position covers a RoadConfigurationSection (either with all its length or with a part of it). 
 * 
 * @field isEventZoneConnected: indicates, if set to TRUE, that the @ref EventZone incl. its reference position has one or an ordered subset of waypoints located upstream of the RoadConfigurationSection� starting point.
 *
 * @category: Road topology information
 * @revision: Created in V2.2.1
*
RoadSectionDefinition::= SEQUENCE {
  startingPointSection      GeoPosition,
  lengthOfSection	  	    StandardLength2B OPTIONAL,
  endingPointSection       	GeoPosition OPTIONAL, 
  connectedPaths		    PathReferences,	
  includedPaths          	PathReferences,
  isEventZoneIncluded       BOOLEAN,  
  isEventZoneConnected      BOOLEAN,
  ...
}  
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_denm_ts_coding/denm_ts_RoadSectionDefinition.h>
#include <etsi_its_denm_ts_coding/BOOLEAN.h>
#include <etsi_its_primitives_conversion/convertBOOLEAN.h>
#include <etsi_its_denm_ts_conversion/convertGeoPosition.h>
#include <etsi_its_denm_ts_conversion/convertPathReferences.h>
#include <etsi_its_denm_ts_conversion/convertStandardLength2B.h>
#ifdef ROS1
#include <etsi_its_denm_ts_msgs/RoadSectionDefinition.h>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs;
#else
#include <etsi_its_denm_ts_msgs/msg/road_section_definition.hpp>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs::msg;
#endif


namespace etsi_its_denm_ts_conversion {

void toRos_RoadSectionDefinition(const denm_ts_RoadSectionDefinition_t& in, denm_ts_msgs::RoadSectionDefinition& out) {
  toRos_GeoPosition(in.startingPointSection, out.starting_point_section);
  if (in.lengthOfSection) {
    toRos_StandardLength2B(*in.lengthOfSection, out.length_of_section);
    out.length_of_section_is_present = true;
  }
  if (in.endingPointSection) {
    toRos_GeoPosition(*in.endingPointSection, out.ending_point_section);
    out.ending_point_section_is_present = true;
  }
  toRos_PathReferences(in.connectedPaths, out.connected_paths);
  toRos_PathReferences(in.includedPaths, out.included_paths);
  etsi_its_primitives_conversion::toRos_BOOLEAN(in.isEventZoneIncluded, out.is_event_zone_included);
  etsi_its_primitives_conversion::toRos_BOOLEAN(in.isEventZoneConnected, out.is_event_zone_connected);
}

void toStruct_RoadSectionDefinition(const denm_ts_msgs::RoadSectionDefinition& in, denm_ts_RoadSectionDefinition_t& out) {
  memset(&out, 0, sizeof(denm_ts_RoadSectionDefinition_t));
  toStruct_GeoPosition(in.starting_point_section, out.startingPointSection);
  if (in.length_of_section_is_present) {
    out.lengthOfSection = (denm_ts_StandardLength2B_t*) calloc(1, sizeof(denm_ts_StandardLength2B_t));
    toStruct_StandardLength2B(in.length_of_section, *out.lengthOfSection);
  }
  if (in.ending_point_section_is_present) {
    out.endingPointSection = (denm_ts_GeoPosition_t*) calloc(1, sizeof(denm_ts_GeoPosition_t));
    toStruct_GeoPosition(in.ending_point_section, *out.endingPointSection);
  }
  toStruct_PathReferences(in.connected_paths, out.connectedPaths);
  toStruct_PathReferences(in.included_paths, out.includedPaths);
  etsi_its_primitives_conversion::toStruct_BOOLEAN(in.is_event_zone_included, out.isEventZoneIncluded);
  etsi_its_primitives_conversion::toStruct_BOOLEAN(in.is_event_zone_connected, out.isEventZoneConnected);
}

}
