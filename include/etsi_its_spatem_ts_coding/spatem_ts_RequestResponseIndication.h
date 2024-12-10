/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=spatem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_spatem_ts_RequestResponseIndication_H_
#define	_spatem_ts_RequestResponseIndication_H_


#include <etsi_its_spatem_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_spatem_ts_coding/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum spatem_ts_RequestResponseIndication {
	spatem_ts_RequestResponseIndication_request	= 0,
	spatem_ts_RequestResponseIndication_response	= 1
} e_spatem_ts_RequestResponseIndication;

/* spatem_ts_RequestResponseIndication */
typedef long	 spatem_ts_RequestResponseIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_spatem_ts_RequestResponseIndication;
asn_struct_free_f spatem_ts_RequestResponseIndication_free;
asn_struct_print_f spatem_ts_RequestResponseIndication_print;
asn_constr_check_f spatem_ts_RequestResponseIndication_constraint;
per_type_decoder_f spatem_ts_RequestResponseIndication_decode_uper;
per_type_encoder_f spatem_ts_RequestResponseIndication_encode_uper;
per_type_decoder_f spatem_ts_RequestResponseIndication_decode_aper;
per_type_encoder_f spatem_ts_RequestResponseIndication_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _spatem_ts_RequestResponseIndication_H_ */
#include <etsi_its_spatem_ts_coding/asn_internal.h>