/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "/input/CAM-PDU-Descriptions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -gen-UPER`
 */


/* Including external dependencies */
#include "etsi_its_cam_coding/ItsPduHeader.h"
#include "etsi_its_cam_coding/CoopAwareness.h"
#include <etsi_its_cam_coding/constr_SEQUENCE.h>
#ifndef	_CAM_H_
#define	_CAM_H_


#include <etsi_its_cam_coding/asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CAM */
typedef struct CAM {
	ItsPduHeader_t	 header;
	CoopAwareness_t	 cam;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CAM_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CAM;

#ifdef __cplusplus
}
#endif

#endif	/* _CAM_H_ */
#include <etsi_its_cam_coding/asn_internal.h>
