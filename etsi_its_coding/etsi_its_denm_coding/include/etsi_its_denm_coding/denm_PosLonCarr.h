/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=denm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_denm_PosLonCarr_H_
#define	_denm_PosLonCarr_H_


#include <etsi_its_denm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_denm_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum denm_PosLonCarr {
	denm_PosLonCarr_oneCentimeter	= 1,
	denm_PosLonCarr_unavailable	= 127
} e_denm_PosLonCarr;

/* denm_PosLonCarr */
typedef long	 denm_PosLonCarr_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_denm_PosLonCarr_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_denm_PosLonCarr;
asn_struct_free_f denm_PosLonCarr_free;
asn_struct_print_f denm_PosLonCarr_print;
asn_constr_check_f denm_PosLonCarr_constraint;
per_type_decoder_f denm_PosLonCarr_decode_uper;
per_type_encoder_f denm_PosLonCarr_encode_uper;
per_type_decoder_f denm_PosLonCarr_decode_aper;
per_type_encoder_f denm_PosLonCarr_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _denm_PosLonCarr_H_ */
#include <etsi_its_denm_coding/asn_internal.h>
