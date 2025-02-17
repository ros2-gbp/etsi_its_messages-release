/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/input/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -fcompound-names -fprefix=spatem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_spatem_ts_AllowedManeuvers_H_
#define	_spatem_ts_AllowedManeuvers_H_


#include <etsi_its_spatem_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_spatem_ts_coding/BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum spatem_ts_AllowedManeuvers {
	spatem_ts_AllowedManeuvers_maneuverStraightAllowed	= 0,
	spatem_ts_AllowedManeuvers_maneuverLeftAllowed	= 1,
	spatem_ts_AllowedManeuvers_maneuverRightAllowed	= 2,
	spatem_ts_AllowedManeuvers_maneuverUTurnAllowed	= 3,
	spatem_ts_AllowedManeuvers_maneuverLeftTurnOnRedAllowed	= 4,
	spatem_ts_AllowedManeuvers_maneuverRightTurnOnRedAllowed	= 5,
	spatem_ts_AllowedManeuvers_maneuverLaneChangeAllowed	= 6,
	spatem_ts_AllowedManeuvers_maneuverNoStoppingAllowed	= 7,
	spatem_ts_AllowedManeuvers_yieldAllwaysRequired	= 8,
	spatem_ts_AllowedManeuvers_goWithHalt	= 9,
	spatem_ts_AllowedManeuvers_caution	= 10,
	spatem_ts_AllowedManeuvers_reserved1	= 11
} e_spatem_ts_AllowedManeuvers;

/* spatem_ts_AllowedManeuvers */
typedef BIT_STRING_t	 spatem_ts_AllowedManeuvers_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_spatem_ts_AllowedManeuvers_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_spatem_ts_AllowedManeuvers;
asn_struct_free_f spatem_ts_AllowedManeuvers_free;
asn_struct_print_f spatem_ts_AllowedManeuvers_print;
asn_constr_check_f spatem_ts_AllowedManeuvers_constraint;
per_type_decoder_f spatem_ts_AllowedManeuvers_decode_uper;
per_type_encoder_f spatem_ts_AllowedManeuvers_encode_uper;
per_type_decoder_f spatem_ts_AllowedManeuvers_decode_aper;
per_type_encoder_f spatem_ts_AllowedManeuvers_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _spatem_ts_AllowedManeuvers_H_ */
#include <etsi_its_spatem_ts_coding/asn_internal.h>
