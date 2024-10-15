/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cam_ts_SensorTypes_H_
#define	_cam_ts_SensorTypes_H_


#include <etsi_its_cam_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cam_ts_coding/BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cam_ts_SensorTypes {
	cam_ts_SensorTypes_undefined	= 0,
	cam_ts_SensorTypes_radar	= 1,
	cam_ts_SensorTypes_lidar	= 2,
	cam_ts_SensorTypes_monovideo	= 3,
	cam_ts_SensorTypes_stereovision	= 4,
	cam_ts_SensorTypes_nightvision	= 5,
	cam_ts_SensorTypes_ultrasonic	= 6,
	cam_ts_SensorTypes_pmd	= 7,
	cam_ts_SensorTypes_inductionLoop	= 8,
	cam_ts_SensorTypes_sphericalCamera	= 9,
	cam_ts_SensorTypes_uwb	= 10,
	cam_ts_SensorTypes_acoustic	= 11,
	cam_ts_SensorTypes_localAggregation	= 12,
	cam_ts_SensorTypes_itsAggregation	= 13
} e_cam_ts_SensorTypes;

/* cam_ts_SensorTypes */
typedef BIT_STRING_t	 cam_ts_SensorTypes_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_cam_ts_SensorTypes_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_cam_ts_SensorTypes;
asn_struct_free_f cam_ts_SensorTypes_free;
asn_struct_print_f cam_ts_SensorTypes_print;
asn_constr_check_f cam_ts_SensorTypes_constraint;
per_type_decoder_f cam_ts_SensorTypes_decode_uper;
per_type_encoder_f cam_ts_SensorTypes_encode_uper;
per_type_decoder_f cam_ts_SensorTypes_decode_aper;
per_type_encoder_f cam_ts_SensorTypes_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cam_ts_SensorTypes_H_ */
#include <etsi_its_cam_ts_coding/asn_internal.h>
