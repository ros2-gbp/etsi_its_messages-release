/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cam_ts_VruExteriorLights_H_
#define	_cam_ts_VruExteriorLights_H_


#include <etsi_its_cam_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_cam_ts_coding/cam_ts_ExteriorLights.h"
#include "etsi_its_cam_ts_coding/cam_ts_VruSpecificExteriorLights.h"
#include <etsi_its_cam_ts_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* cam_ts_VruExteriorLights */
typedef struct cam_ts_VruExteriorLights {
	cam_ts_ExteriorLights_t	 vehicular;
	cam_ts_VruSpecificExteriorLights_t	 vruSpecific;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} cam_ts_VruExteriorLights_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cam_ts_VruExteriorLights;

#ifdef __cplusplus
}
#endif

#endif	/* _cam_ts_VruExteriorLights_H_ */
#include <etsi_its_cam_ts_coding/asn_internal.h>