/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=denm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_denm_EventHistory_H_
#define	_denm_EventHistory_H_


#include <etsi_its_denm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_denm_coding/asn_SEQUENCE_OF.h>
#include <etsi_its_denm_coding/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct denm_EventPoint;

/* denm_EventHistory */
typedef struct denm_EventHistory {
	A_SEQUENCE_OF(struct denm_EventPoint) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} denm_EventHistory_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_denm_EventHistory;
extern asn_SET_OF_specifics_t asn_SPC_denm_EventHistory_specs_1;
extern asn_TYPE_member_t asn_MBR_denm_EventHistory_1[1];
extern asn_per_constraints_t asn_PER_type_denm_EventHistory_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "etsi_its_denm_coding/denm_EventPoint.h"

#endif	/* _denm_EventHistory_H_ */
#include <etsi_its_denm_coding/asn_internal.h>
