/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=denm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_denm_ts_SafeDistanceIndicator_H_
#define	_denm_ts_SafeDistanceIndicator_H_


#include <etsi_its_denm_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_denm_ts_coding/BOOLEAN.h>

#ifdef __cplusplus
extern "C" {
#endif

/* denm_ts_SafeDistanceIndicator */
typedef BOOLEAN_t	 denm_ts_SafeDistanceIndicator_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_denm_ts_SafeDistanceIndicator;
asn_struct_free_f denm_ts_SafeDistanceIndicator_free;
asn_struct_print_f denm_ts_SafeDistanceIndicator_print;
asn_constr_check_f denm_ts_SafeDistanceIndicator_constraint;
per_type_decoder_f denm_ts_SafeDistanceIndicator_decode_uper;
per_type_encoder_f denm_ts_SafeDistanceIndicator_encode_uper;
per_type_decoder_f denm_ts_SafeDistanceIndicator_decode_aper;
per_type_encoder_f denm_ts_SafeDistanceIndicator_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _denm_ts_SafeDistanceIndicator_H_ */
#include <etsi_its_denm_ts_coding/asn_internal.h>
