/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=cam_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cam_PtActivationType_H_
#define	_cam_PtActivationType_H_


#include <etsi_its_cam_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cam_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cam_PtActivationType {
	cam_PtActivationType_undefinedCodingType	= 0,
	cam_PtActivationType_r09_16CodingType	= 1,
	cam_PtActivationType_vdv_50149CodingType	= 2
} e_cam_PtActivationType;

/* cam_PtActivationType */
typedef long	 cam_PtActivationType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_cam_PtActivationType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_cam_PtActivationType;
asn_struct_free_f cam_PtActivationType_free;
asn_struct_print_f cam_PtActivationType_print;
asn_constr_check_f cam_PtActivationType_constraint;
per_type_decoder_f cam_PtActivationType_decode_uper;
per_type_encoder_f cam_PtActivationType_encode_uper;
per_type_decoder_f cam_PtActivationType_decode_aper;
per_type_encoder_f cam_PtActivationType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cam_PtActivationType_H_ */
#include <etsi_its_cam_coding/asn_internal.h>
