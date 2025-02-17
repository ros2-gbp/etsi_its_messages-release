/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=denm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_denm_ts_CartesianAngularAccelerationComponentValue_H_
#define	_denm_ts_CartesianAngularAccelerationComponentValue_H_


#include <etsi_its_denm_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_denm_ts_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum denm_ts_CartesianAngularAccelerationComponentValue {
	denm_ts_CartesianAngularAccelerationComponentValue_negativeOutOfRange	= -255,
	denm_ts_CartesianAngularAccelerationComponentValue_positiveOutOfRange	= 255,
	denm_ts_CartesianAngularAccelerationComponentValue_unavailable	= 256
} e_denm_ts_CartesianAngularAccelerationComponentValue;

/* denm_ts_CartesianAngularAccelerationComponentValue */
typedef long	 denm_ts_CartesianAngularAccelerationComponentValue_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_denm_ts_CartesianAngularAccelerationComponentValue_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_denm_ts_CartesianAngularAccelerationComponentValue;
asn_struct_free_f denm_ts_CartesianAngularAccelerationComponentValue_free;
asn_struct_print_f denm_ts_CartesianAngularAccelerationComponentValue_print;
asn_constr_check_f denm_ts_CartesianAngularAccelerationComponentValue_constraint;
per_type_decoder_f denm_ts_CartesianAngularAccelerationComponentValue_decode_uper;
per_type_encoder_f denm_ts_CartesianAngularAccelerationComponentValue_encode_uper;
per_type_decoder_f denm_ts_CartesianAngularAccelerationComponentValue_decode_aper;
per_type_encoder_f denm_ts_CartesianAngularAccelerationComponentValue_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _denm_ts_CartesianAngularAccelerationComponentValue_H_ */
#include <etsi_its_denm_ts_coding/asn_internal.h>
