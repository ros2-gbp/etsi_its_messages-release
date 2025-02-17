/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/input/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -fcompound-names -fprefix=spatem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_spatem_ts_SpeedLimitType_H_
#define	_spatem_ts_SpeedLimitType_H_


#include <etsi_its_spatem_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_spatem_ts_coding/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum spatem_ts_SpeedLimitType {
	spatem_ts_SpeedLimitType_unknown	= 0,
	spatem_ts_SpeedLimitType_maxSpeedInSchoolZone	= 1,
	spatem_ts_SpeedLimitType_maxSpeedInSchoolZoneWhenChildrenArePresent	= 2,
	spatem_ts_SpeedLimitType_maxSpeedInConstructionZone	= 3,
	spatem_ts_SpeedLimitType_vehicleMinSpeed	= 4,
	spatem_ts_SpeedLimitType_vehicleMaxSpeed	= 5,
	spatem_ts_SpeedLimitType_vehicleNightMaxSpeed	= 6,
	spatem_ts_SpeedLimitType_truckMinSpeed	= 7,
	spatem_ts_SpeedLimitType_truckMaxSpeed	= 8,
	spatem_ts_SpeedLimitType_truckNightMaxSpeed	= 9,
	spatem_ts_SpeedLimitType_vehiclesWithTrailersMinSpeed	= 10,
	spatem_ts_SpeedLimitType_vehiclesWithTrailersMaxSpeed	= 11,
	spatem_ts_SpeedLimitType_vehiclesWithTrailersNightMaxSpeed	= 12
	/*
	 * Enumeration is extensible
	 */
} e_spatem_ts_SpeedLimitType;

/* spatem_ts_SpeedLimitType */
typedef long	 spatem_ts_SpeedLimitType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_spatem_ts_SpeedLimitType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_spatem_ts_SpeedLimitType;
extern const asn_INTEGER_specifics_t asn_SPC_spatem_ts_SpeedLimitType_specs_1;
asn_struct_free_f spatem_ts_SpeedLimitType_free;
asn_struct_print_f spatem_ts_SpeedLimitType_print;
asn_constr_check_f spatem_ts_SpeedLimitType_constraint;
per_type_decoder_f spatem_ts_SpeedLimitType_decode_uper;
per_type_encoder_f spatem_ts_SpeedLimitType_encode_uper;
per_type_decoder_f spatem_ts_SpeedLimitType_decode_aper;
per_type_encoder_f spatem_ts_SpeedLimitType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _spatem_ts_SpeedLimitType_H_ */
#include <etsi_its_spatem_ts_coding/asn_internal.h>
