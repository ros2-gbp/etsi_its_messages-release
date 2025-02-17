/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=denm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_denm_ts_MessageId_H_
#define	_denm_ts_MessageId_H_


#include <etsi_its_denm_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_denm_ts_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum denm_ts_MessageId {
	denm_ts_MessageId_denm	= 1,
	denm_ts_MessageId_cam	= 2,
	denm_ts_MessageId_poim	= 3,
	denm_ts_MessageId_spatem	= 4,
	denm_ts_MessageId_mapem	= 5,
	denm_ts_MessageId_ivim	= 6,
	denm_ts_MessageId_rfu1	= 7,
	denm_ts_MessageId_rfu2	= 8,
	denm_ts_MessageId_srem	= 9,
	denm_ts_MessageId_ssem	= 10,
	denm_ts_MessageId_evcsn	= 11,
	denm_ts_MessageId_saem	= 12,
	denm_ts_MessageId_rtcmem	= 13,
	denm_ts_MessageId_cpm	= 14,
	denm_ts_MessageId_imzm	= 15,
	denm_ts_MessageId_vam	= 16,
	denm_ts_MessageId_dsm	= 17,
	denm_ts_MessageId_pcim	= 18,
	denm_ts_MessageId_pcvm	= 19,
	denm_ts_MessageId_mcm	= 20,
	denm_ts_MessageId_pam	= 21
} e_denm_ts_MessageId;

/* denm_ts_MessageId */
typedef long	 denm_ts_MessageId_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_denm_ts_MessageId_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_denm_ts_MessageId;
asn_struct_free_f denm_ts_MessageId_free;
asn_struct_print_f denm_ts_MessageId_print;
asn_constr_check_f denm_ts_MessageId_constraint;
per_type_decoder_f denm_ts_MessageId_decode_uper;
per_type_encoder_f denm_ts_MessageId_encode_uper;
per_type_decoder_f denm_ts_MessageId_decode_aper;
per_type_encoder_f denm_ts_MessageId_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _denm_ts_MessageId_H_ */
#include <etsi_its_denm_ts_coding/asn_internal.h>
