/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=denm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_denm_StationarySince_H_
#define	_denm_StationarySince_H_


#include <etsi_its_denm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_denm_coding/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum denm_StationarySince {
	denm_StationarySince_lessThan1Minute	= 0,
	denm_StationarySince_lessThan2Minutes	= 1,
	denm_StationarySince_lessThan15Minutes	= 2,
	denm_StationarySince_equalOrGreater15Minutes	= 3
} e_denm_StationarySince;

/* denm_StationarySince */
typedef long	 denm_StationarySince_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_denm_StationarySince_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_denm_StationarySince;
extern const asn_INTEGER_specifics_t asn_SPC_denm_StationarySince_specs_1;
asn_struct_free_f denm_StationarySince_free;
asn_struct_print_f denm_StationarySince_print;
asn_constr_check_f denm_StationarySince_constraint;
per_type_decoder_f denm_StationarySince_decode_uper;
per_type_encoder_f denm_StationarySince_encode_uper;
per_type_decoder_f denm_StationarySince_decode_aper;
per_type_encoder_f denm_StationarySince_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _denm_StationarySince_H_ */
#include <etsi_its_denm_coding/asn_internal.h>