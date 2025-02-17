/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/input/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -fcompound-names -fprefix=spatem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_spatem_ts_PrioritizationResponseStatus_H_
#define	_spatem_ts_PrioritizationResponseStatus_H_


#include <etsi_its_spatem_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_spatem_ts_coding/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum spatem_ts_PrioritizationResponseStatus {
	spatem_ts_PrioritizationResponseStatus_unknown	= 0,
	spatem_ts_PrioritizationResponseStatus_requested	= 1,
	spatem_ts_PrioritizationResponseStatus_processing	= 2,
	spatem_ts_PrioritizationResponseStatus_watchOtherTraffic	= 3,
	spatem_ts_PrioritizationResponseStatus_granted	= 4,
	spatem_ts_PrioritizationResponseStatus_rejected	= 5,
	spatem_ts_PrioritizationResponseStatus_maxPresence	= 6,
	spatem_ts_PrioritizationResponseStatus_reserviceLocked	= 7
	/*
	 * Enumeration is extensible
	 */
} e_spatem_ts_PrioritizationResponseStatus;

/* spatem_ts_PrioritizationResponseStatus */
typedef long	 spatem_ts_PrioritizationResponseStatus_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_spatem_ts_PrioritizationResponseStatus_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_spatem_ts_PrioritizationResponseStatus;
extern const asn_INTEGER_specifics_t asn_SPC_spatem_ts_PrioritizationResponseStatus_specs_1;
asn_struct_free_f spatem_ts_PrioritizationResponseStatus_free;
asn_struct_print_f spatem_ts_PrioritizationResponseStatus_print;
asn_constr_check_f spatem_ts_PrioritizationResponseStatus_constraint;
per_type_decoder_f spatem_ts_PrioritizationResponseStatus_decode_uper;
per_type_encoder_f spatem_ts_PrioritizationResponseStatus_encode_uper;
per_type_decoder_f spatem_ts_PrioritizationResponseStatus_decode_aper;
per_type_encoder_f spatem_ts_PrioritizationResponseStatus_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _spatem_ts_PrioritizationResponseStatus_H_ */
#include <etsi_its_spatem_ts_coding/asn_internal.h>
