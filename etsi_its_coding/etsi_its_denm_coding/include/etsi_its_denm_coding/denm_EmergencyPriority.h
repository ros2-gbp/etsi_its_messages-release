/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=denm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_denm_EmergencyPriority_H_
#define	_denm_EmergencyPriority_H_


#include <etsi_its_denm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_denm_coding/BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum denm_EmergencyPriority {
	denm_EmergencyPriority_requestForRightOfWay	= 0,
	denm_EmergencyPriority_requestForFreeCrossingAtATrafficLight	= 1
} e_denm_EmergencyPriority;

/* denm_EmergencyPriority */
typedef BIT_STRING_t	 denm_EmergencyPriority_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_denm_EmergencyPriority;
asn_struct_free_f denm_EmergencyPriority_free;
asn_struct_print_f denm_EmergencyPriority_print;
asn_constr_check_f denm_EmergencyPriority_constraint;
per_type_decoder_f denm_EmergencyPriority_decode_uper;
per_type_encoder_f denm_EmergencyPriority_encode_uper;
per_type_decoder_f denm_EmergencyPriority_decode_aper;
per_type_encoder_f denm_EmergencyPriority_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _denm_EmergencyPriority_H_ */
#include <etsi_its_denm_coding/asn_internal.h>
