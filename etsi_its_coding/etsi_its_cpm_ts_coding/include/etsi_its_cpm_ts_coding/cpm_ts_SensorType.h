/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_ts_SensorType_H_
#define	_cpm_ts_SensorType_H_


#include <etsi_its_cpm_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_ts_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cpm_ts_SensorType {
	cpm_ts_SensorType_undefined	= 0,
	cpm_ts_SensorType_radar	= 1,
	cpm_ts_SensorType_lidar	= 2,
	cpm_ts_SensorType_monovideo	= 3,
	cpm_ts_SensorType_stereovision	= 4,
	cpm_ts_SensorType_nightvision	= 5,
	cpm_ts_SensorType_ultrasonic	= 6,
	cpm_ts_SensorType_pmd	= 7,
	cpm_ts_SensorType_inductionLoop	= 8,
	cpm_ts_SensorType_sphericalCamera	= 9,
	cpm_ts_SensorType_uwb	= 10,
	cpm_ts_SensorType_acoustic	= 11,
	cpm_ts_SensorType_localAggregation	= 12,
	cpm_ts_SensorType_itsAggregation	= 13
} e_cpm_ts_SensorType;

/* cpm_ts_SensorType */
typedef long	 cpm_ts_SensorType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_cpm_ts_SensorType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_cpm_ts_SensorType;
asn_struct_free_f cpm_ts_SensorType_free;
asn_struct_print_f cpm_ts_SensorType_print;
asn_constr_check_f cpm_ts_SensorType_constraint;
per_type_decoder_f cpm_ts_SensorType_decode_uper;
per_type_encoder_f cpm_ts_SensorType_encode_uper;
per_type_decoder_f cpm_ts_SensorType_decode_aper;
per_type_encoder_f cpm_ts_SensorType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_ts_SensorType_H_ */
#include <etsi_its_cpm_ts_coding/asn_internal.h>
