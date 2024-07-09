/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=denm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_denm_DangerousEndOfQueueSubCauseCode_H_
#define	_denm_DangerousEndOfQueueSubCauseCode_H_


#include <etsi_its_denm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_denm_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum denm_DangerousEndOfQueueSubCauseCode {
	denm_DangerousEndOfQueueSubCauseCode_unavailable	= 0,
	denm_DangerousEndOfQueueSubCauseCode_suddenEndOfQueue	= 1,
	denm_DangerousEndOfQueueSubCauseCode_queueOverHill	= 2,
	denm_DangerousEndOfQueueSubCauseCode_queueAroundBend	= 3,
	denm_DangerousEndOfQueueSubCauseCode_queueInTunnel	= 4
} e_denm_DangerousEndOfQueueSubCauseCode;

/* denm_DangerousEndOfQueueSubCauseCode */
typedef long	 denm_DangerousEndOfQueueSubCauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_denm_DangerousEndOfQueueSubCauseCode;
asn_struct_free_f denm_DangerousEndOfQueueSubCauseCode_free;
asn_struct_print_f denm_DangerousEndOfQueueSubCauseCode_print;
asn_constr_check_f denm_DangerousEndOfQueueSubCauseCode_constraint;
per_type_decoder_f denm_DangerousEndOfQueueSubCauseCode_decode_uper;
per_type_encoder_f denm_DangerousEndOfQueueSubCauseCode_encode_uper;
per_type_decoder_f denm_DangerousEndOfQueueSubCauseCode_decode_aper;
per_type_encoder_f denm_DangerousEndOfQueueSubCauseCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _denm_DangerousEndOfQueueSubCauseCode_H_ */
#include <etsi_its_denm_coding/asn_internal.h>
