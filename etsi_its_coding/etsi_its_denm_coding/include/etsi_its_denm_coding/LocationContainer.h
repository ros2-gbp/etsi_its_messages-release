/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "DENM-PDU-Descriptions"
 * 	found in "/input/DENM-PDU-Descriptions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -gen-UPER`
 */


/* Including external dependencies */
#include "etsi_its_denm_coding/Traces.h"
#include "etsi_its_denm_coding/RoadType.h"
#include <etsi_its_denm_coding/constr_SEQUENCE.h>
#ifndef	_LocationContainer_H_
#define	_LocationContainer_H_


#include <etsi_its_denm_coding/asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Speed;
struct Heading;

/* LocationContainer */
typedef struct LocationContainer {
	struct Speed	*eventSpeed;	/* OPTIONAL */
	struct Heading	*eventPositionHeading;	/* OPTIONAL */
	Traces_t	 traces;
	RoadType_t	*roadType;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LocationContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LocationContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_LocationContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_LocationContainer_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "etsi_its_denm_coding/Speed.h"
#include "etsi_its_denm_coding/Heading.h"

#endif	/* _LocationContainer_H_ */
#include <etsi_its_denm_coding/asn_internal.h>
