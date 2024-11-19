/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cam_ts_MetaInformation_H_
#define	_cam_ts_MetaInformation_H_


#include <etsi_its_cam_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_cam_ts_coding/cam_ts_SensorTypes.h"
#include "etsi_its_cam_ts_coding/cam_ts_StoredInformationType.h"
#include "etsi_its_cam_ts_coding/cam_ts_ConfidenceLevel.h"
#include <etsi_its_cam_ts_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* cam_ts_MetaInformation */
typedef struct cam_ts_MetaInformation {
	cam_ts_SensorTypes_t	 usedDetectionInformation;
	cam_ts_StoredInformationType_t	 usedStoredInformation;
	cam_ts_ConfidenceLevel_t	*confidenceValue;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} cam_ts_MetaInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cam_ts_MetaInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_cam_ts_MetaInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_cam_ts_MetaInformation_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _cam_ts_MetaInformation_H_ */
#include <etsi_its_cam_ts_coding/asn_internal.h>