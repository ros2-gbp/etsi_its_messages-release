/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=mapem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_mapem_ts_PathHistory_H_
#define	_mapem_ts_PathHistory_H_


#include <etsi_its_mapem_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_mapem_ts_coding/asn_SEQUENCE_OF.h>
#include <etsi_its_mapem_ts_coding/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct mapem_ts_PathPoint;

/* mapem_ts_PathHistory */
typedef struct mapem_ts_PathHistory {
	A_SEQUENCE_OF(struct mapem_ts_PathPoint) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} mapem_ts_PathHistory_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_mapem_ts_PathHistory;
extern asn_SET_OF_specifics_t asn_SPC_mapem_ts_PathHistory_specs_1;
extern asn_TYPE_member_t asn_MBR_mapem_ts_PathHistory_1[1];
extern asn_per_constraints_t asn_PER_type_mapem_ts_PathHistory_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "etsi_its_mapem_ts_coding/mapem_ts_PathPoint.h"

#endif	/* _mapem_ts_PathHistory_H_ */
#include <etsi_its_mapem_ts_coding/asn_internal.h>
