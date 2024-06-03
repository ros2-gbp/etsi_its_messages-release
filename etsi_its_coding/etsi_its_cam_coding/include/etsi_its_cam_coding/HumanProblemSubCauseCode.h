/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -no-gen-example -gen-UPER`
 */


/* Including external dependencies */
#include <etsi_its_cam_coding/NativeInteger.h>
#ifndef	_HumanProblemSubCauseCode_H_
#define	_HumanProblemSubCauseCode_H_


#include <etsi_its_cam_coding/asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HumanProblemSubCauseCode {
	HumanProblemSubCauseCode_unavailable	= 0,
	HumanProblemSubCauseCode_glycemiaProblem	= 1,
	HumanProblemSubCauseCode_heartProblem	= 2
} e_HumanProblemSubCauseCode;

/* HumanProblemSubCauseCode */
typedef long	 HumanProblemSubCauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HumanProblemSubCauseCode;
asn_struct_free_f HumanProblemSubCauseCode_free;
asn_struct_print_f HumanProblemSubCauseCode_print;
asn_constr_check_f HumanProblemSubCauseCode_constraint;
ber_type_decoder_f HumanProblemSubCauseCode_decode_ber;
der_type_encoder_f HumanProblemSubCauseCode_encode_der;
xer_type_decoder_f HumanProblemSubCauseCode_decode_xer;
xer_type_encoder_f HumanProblemSubCauseCode_encode_xer;
jer_type_encoder_f HumanProblemSubCauseCode_encode_jer;
oer_type_decoder_f HumanProblemSubCauseCode_decode_oer;
oer_type_encoder_f HumanProblemSubCauseCode_encode_oer;
per_type_decoder_f HumanProblemSubCauseCode_decode_uper;
per_type_encoder_f HumanProblemSubCauseCode_encode_uper;
per_type_decoder_f HumanProblemSubCauseCode_decode_aper;
per_type_encoder_f HumanProblemSubCauseCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _HumanProblemSubCauseCode_H_ */
#include <etsi_its_cam_coding/asn_internal.h>
