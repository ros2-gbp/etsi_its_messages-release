/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "/input/CAM-PDU-Descriptions.asn"
 * 	`asn1c -fcompound-names -fprefix=cam_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cam_CamParameters_H_
#define	_cam_CamParameters_H_


#include <etsi_its_cam_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_cam_coding/cam_BasicContainer.h"
#include "etsi_its_cam_coding/cam_HighFrequencyContainer.h"
#include <etsi_its_cam_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct cam_LowFrequencyContainer;
struct cam_SpecialVehicleContainer;

/* cam_CamParameters */
typedef struct cam_CamParameters {
	cam_BasicContainer_t	 basicContainer;
	cam_HighFrequencyContainer_t	 highFrequencyContainer;
	struct cam_LowFrequencyContainer	*lowFrequencyContainer;	/* OPTIONAL */
	struct cam_SpecialVehicleContainer	*specialVehicleContainer;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} cam_CamParameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cam_CamParameters;
extern asn_SEQUENCE_specifics_t asn_SPC_cam_CamParameters_specs_1;
extern asn_TYPE_member_t asn_MBR_cam_CamParameters_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "etsi_its_cam_coding/cam_LowFrequencyContainer.h"
#include "etsi_its_cam_coding/cam_SpecialVehicleContainer.h"

#endif	/* _cam_CamParameters_H_ */
#include <etsi_its_cam_coding/asn_internal.h>
