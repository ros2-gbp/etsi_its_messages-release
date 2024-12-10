/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "/input/CAM-PDU-Descriptions.asn"
 * 	`asn1c -fcompound-names -fprefix=cam_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cam_CAM_H_
#define	_cam_CAM_H_


#include <etsi_its_cam_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_cam_coding/cam_ItsPduHeader.h"
#include "etsi_its_cam_coding/cam_CoopAwareness.h"
#include <etsi_its_cam_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* cam_CAM */
typedef struct cam_CAM {
	cam_ItsPduHeader_t	 header;
	cam_CoopAwareness_t	 cam;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} cam_CAM_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cam_CAM;

#ifdef __cplusplus
}
#endif

#endif	/* _cam_CAM_H_ */
#include <etsi_its_cam_coding/asn_internal.h>