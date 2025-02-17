/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "/input/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -fcompound-names -fprefix=spatem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_spatem_ts_LaneAttributes_addGrpC_H_
#define	_spatem_ts_LaneAttributes_addGrpC_H_


#include <etsi_its_spatem_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_spatem_ts_coding/spatem_ts_VehicleHeight.h"
#include "etsi_its_spatem_ts_coding/spatem_ts_VehicleMass.h"
#include <etsi_its_spatem_ts_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* spatem_ts_LaneAttributes-addGrpC */
typedef struct spatem_ts_LaneAttributes_addGrpC {
	spatem_ts_VehicleHeight_t	*maxVehicleHeight;	/* OPTIONAL */
	spatem_ts_VehicleMass_t	*maxVehicleWeight;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} spatem_ts_LaneAttributes_addGrpC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_spatem_ts_LaneAttributes_addGrpC;
extern asn_SEQUENCE_specifics_t asn_SPC_spatem_ts_LaneAttributes_addGrpC_specs_1;
extern asn_TYPE_member_t asn_MBR_spatem_ts_LaneAttributes_addGrpC_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _spatem_ts_LaneAttributes_addGrpC_H_ */
#include <etsi_its_spatem_ts_coding/asn_internal.h>
