/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=vam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_vam_ts_LaneType_H_
#define	_vam_ts_LaneType_H_


#include <etsi_its_vam_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_vam_ts_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum vam_ts_LaneType {
	vam_ts_LaneType_traffic	= 0,
	vam_ts_LaneType_through	= 1,
	vam_ts_LaneType_reversible	= 2,
	vam_ts_LaneType_acceleration	= 3,
	vam_ts_LaneType_deceleration	= 4,
	vam_ts_LaneType_leftHandTurning	= 5,
	vam_ts_LaneType_rightHandTurning	= 6,
	vam_ts_LaneType_dedicatedVehicle	= 7,
	vam_ts_LaneType_bus	= 8,
	vam_ts_LaneType_taxi	= 9,
	vam_ts_LaneType_hov	= 10,
	vam_ts_LaneType_hot	= 11,
	vam_ts_LaneType_pedestrian	= 12,
	vam_ts_LaneType_cycleLane	= 13,
	vam_ts_LaneType_median	= 14,
	vam_ts_LaneType_striping	= 15,
	vam_ts_LaneType_trackedVehicle	= 16,
	vam_ts_LaneType_parking	= 17,
	vam_ts_LaneType_emergency	= 18,
	vam_ts_LaneType_verge	= 19,
	vam_ts_LaneType_minimumRiskManoeuvre	= 20,
	vam_ts_LaneType_unknown	= 31
} e_vam_ts_LaneType;

/* vam_ts_LaneType */
typedef long	 vam_ts_LaneType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_vam_ts_LaneType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_vam_ts_LaneType;
asn_struct_free_f vam_ts_LaneType_free;
asn_struct_print_f vam_ts_LaneType_print;
asn_constr_check_f vam_ts_LaneType_constraint;
per_type_decoder_f vam_ts_LaneType_decode_uper;
per_type_encoder_f vam_ts_LaneType_encode_uper;
per_type_decoder_f vam_ts_LaneType_decode_aper;
per_type_encoder_f vam_ts_LaneType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _vam_ts_LaneType_H_ */
#include <etsi_its_vam_ts_coding/asn_internal.h>