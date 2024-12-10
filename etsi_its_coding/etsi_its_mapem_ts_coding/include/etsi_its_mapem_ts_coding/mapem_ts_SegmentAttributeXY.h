/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/input/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -fcompound-names -fprefix=mapem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_mapem_ts_SegmentAttributeXY_H_
#define	_mapem_ts_SegmentAttributeXY_H_


#include <etsi_its_mapem_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_mapem_ts_coding/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum mapem_ts_SegmentAttributeXY {
	mapem_ts_SegmentAttributeXY_reserved	= 0,
	mapem_ts_SegmentAttributeXY_doNotBlock	= 1,
	mapem_ts_SegmentAttributeXY_whiteLine	= 2,
	mapem_ts_SegmentAttributeXY_mergingLaneLeft	= 3,
	mapem_ts_SegmentAttributeXY_mergingLaneRight	= 4,
	mapem_ts_SegmentAttributeXY_curbOnLeft	= 5,
	mapem_ts_SegmentAttributeXY_curbOnRight	= 6,
	mapem_ts_SegmentAttributeXY_loadingzoneOnLeft	= 7,
	mapem_ts_SegmentAttributeXY_loadingzoneOnRight	= 8,
	mapem_ts_SegmentAttributeXY_turnOutPointOnLeft	= 9,
	mapem_ts_SegmentAttributeXY_turnOutPointOnRight	= 10,
	mapem_ts_SegmentAttributeXY_adjacentParkingOnLeft	= 11,
	mapem_ts_SegmentAttributeXY_adjacentParkingOnRight	= 12,
	mapem_ts_SegmentAttributeXY_adjacentBikeLaneOnLeft	= 13,
	mapem_ts_SegmentAttributeXY_adjacentBikeLaneOnRight	= 14,
	mapem_ts_SegmentAttributeXY_sharedBikeLane	= 15,
	mapem_ts_SegmentAttributeXY_bikeBoxInFront	= 16,
	mapem_ts_SegmentAttributeXY_transitStopOnLeft	= 17,
	mapem_ts_SegmentAttributeXY_transitStopOnRight	= 18,
	mapem_ts_SegmentAttributeXY_transitStopInLane	= 19,
	mapem_ts_SegmentAttributeXY_sharedWithTrackedVehicle	= 20,
	mapem_ts_SegmentAttributeXY_safeIsland	= 21,
	mapem_ts_SegmentAttributeXY_lowCurbsPresent	= 22,
	mapem_ts_SegmentAttributeXY_rumbleStripPresent	= 23,
	mapem_ts_SegmentAttributeXY_audibleSignalingPresent	= 24,
	mapem_ts_SegmentAttributeXY_adaptiveTimingPresent	= 25,
	mapem_ts_SegmentAttributeXY_rfSignalRequestPresent	= 26,
	mapem_ts_SegmentAttributeXY_partialCurbIntrusion	= 27,
	mapem_ts_SegmentAttributeXY_taperToLeft	= 28,
	mapem_ts_SegmentAttributeXY_taperToRight	= 29,
	mapem_ts_SegmentAttributeXY_taperToCenterLine	= 30,
	mapem_ts_SegmentAttributeXY_parallelParking	= 31,
	mapem_ts_SegmentAttributeXY_headInParking	= 32,
	mapem_ts_SegmentAttributeXY_freeParking	= 33,
	mapem_ts_SegmentAttributeXY_timeRestrictionsOnParking	= 34,
	mapem_ts_SegmentAttributeXY_costToPark	= 35,
	mapem_ts_SegmentAttributeXY_midBlockCurbPresent	= 36,
	mapem_ts_SegmentAttributeXY_unEvenPavementPresent	= 37
	/*
	 * Enumeration is extensible
	 */
} e_mapem_ts_SegmentAttributeXY;

/* mapem_ts_SegmentAttributeXY */
typedef long	 mapem_ts_SegmentAttributeXY_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_mapem_ts_SegmentAttributeXY_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_mapem_ts_SegmentAttributeXY;
extern const asn_INTEGER_specifics_t asn_SPC_mapem_ts_SegmentAttributeXY_specs_1;
asn_struct_free_f mapem_ts_SegmentAttributeXY_free;
asn_struct_print_f mapem_ts_SegmentAttributeXY_print;
asn_constr_check_f mapem_ts_SegmentAttributeXY_constraint;
per_type_decoder_f mapem_ts_SegmentAttributeXY_decode_uper;
per_type_encoder_f mapem_ts_SegmentAttributeXY_encode_uper;
per_type_decoder_f mapem_ts_SegmentAttributeXY_decode_aper;
per_type_encoder_f mapem_ts_SegmentAttributeXY_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _mapem_ts_SegmentAttributeXY_H_ */
#include <etsi_its_mapem_ts_coding/asn_internal.h>
