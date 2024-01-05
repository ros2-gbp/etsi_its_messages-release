/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER`
 */

#ifndef	_LanePosition_H_
#define	_LanePosition_H_


#include <etsi_its_denm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_denm_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LanePosition {
	LanePosition_offTheRoad	= -1,
	LanePosition_hardShoulder	= 0,
	LanePosition_outermostDrivingLane	= 1,
	LanePosition_secondLaneFromOutside	= 2
} e_LanePosition;

/* LanePosition */
typedef long	 LanePosition_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LanePosition_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LanePosition;
asn_struct_free_f LanePosition_free;
asn_struct_print_f LanePosition_print;
asn_constr_check_f LanePosition_constraint;
ber_type_decoder_f LanePosition_decode_ber;
der_type_encoder_f LanePosition_encode_der;
xer_type_decoder_f LanePosition_decode_xer;
xer_type_encoder_f LanePosition_encode_xer;
oer_type_decoder_f LanePosition_decode_oer;
oer_type_encoder_f LanePosition_encode_oer;
per_type_decoder_f LanePosition_decode_uper;
per_type_encoder_f LanePosition_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _LanePosition_H_ */
#include <etsi_its_denm_coding/asn_internal.h>
