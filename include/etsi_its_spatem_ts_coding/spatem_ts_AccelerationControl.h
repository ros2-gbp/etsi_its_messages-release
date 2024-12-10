/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=spatem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_spatem_ts_AccelerationControl_H_
#define	_spatem_ts_AccelerationControl_H_


#include <etsi_its_spatem_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_spatem_ts_coding/BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum spatem_ts_AccelerationControl {
	spatem_ts_AccelerationControl_brakePedalEngaged	= 0,
	spatem_ts_AccelerationControl_gasPedalEngaged	= 1,
	spatem_ts_AccelerationControl_emergencyBrakeEngaged	= 2,
	spatem_ts_AccelerationControl_collisionWarningEngaged	= 3,
	spatem_ts_AccelerationControl_accEngaged	= 4,
	spatem_ts_AccelerationControl_cruiseControlEngaged	= 5,
	spatem_ts_AccelerationControl_speedLimiterEngaged	= 6
} e_spatem_ts_AccelerationControl;

/* spatem_ts_AccelerationControl */
typedef BIT_STRING_t	 spatem_ts_AccelerationControl_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_spatem_ts_AccelerationControl;
asn_struct_free_f spatem_ts_AccelerationControl_free;
asn_struct_print_f spatem_ts_AccelerationControl_print;
asn_constr_check_f spatem_ts_AccelerationControl_constraint;
per_type_decoder_f spatem_ts_AccelerationControl_decode_uper;
per_type_encoder_f spatem_ts_AccelerationControl_encode_uper;
per_type_decoder_f spatem_ts_AccelerationControl_decode_aper;
per_type_encoder_f spatem_ts_AccelerationControl_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _spatem_ts_AccelerationControl_H_ */
#include <etsi_its_spatem_ts_coding/asn_internal.h>