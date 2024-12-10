/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/input/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -fcompound-names -fprefix=spatem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_spatem_ts_LaneAttributes_Sidewalk_H_
#define	_spatem_ts_LaneAttributes_Sidewalk_H_


#include <etsi_its_spatem_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_spatem_ts_coding/BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum spatem_ts_LaneAttributes_Sidewalk {
	spatem_ts_LaneAttributes_Sidewalk_sidewalk_RevocableLane	= 0,
	spatem_ts_LaneAttributes_Sidewalk_bicyleUseAllowed	= 1,
	spatem_ts_LaneAttributes_Sidewalk_isSidewalkFlyOverLane	= 2,
	spatem_ts_LaneAttributes_Sidewalk_walkBikes	= 3
} e_spatem_ts_LaneAttributes_Sidewalk;

/* spatem_ts_LaneAttributes-Sidewalk */
typedef BIT_STRING_t	 spatem_ts_LaneAttributes_Sidewalk_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_spatem_ts_LaneAttributes_Sidewalk_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_spatem_ts_LaneAttributes_Sidewalk;
asn_struct_free_f spatem_ts_LaneAttributes_Sidewalk_free;
asn_struct_print_f spatem_ts_LaneAttributes_Sidewalk_print;
asn_constr_check_f spatem_ts_LaneAttributes_Sidewalk_constraint;
per_type_decoder_f spatem_ts_LaneAttributes_Sidewalk_decode_uper;
per_type_encoder_f spatem_ts_LaneAttributes_Sidewalk_encode_uper;
per_type_decoder_f spatem_ts_LaneAttributes_Sidewalk_decode_aper;
per_type_encoder_f spatem_ts_LaneAttributes_Sidewalk_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _spatem_ts_LaneAttributes_Sidewalk_H_ */
#include <etsi_its_spatem_ts_coding/asn_internal.h>
