/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/input/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -fcompound-names -fprefix=mapem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_mapem_ts_MovementEvent_H_
#define	_mapem_ts_MovementEvent_H_


#include <etsi_its_mapem_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_mapem_ts_coding/mapem_ts_MovementPhaseState.h"
#include <etsi_its_mapem_ts_coding/asn_SEQUENCE_OF.h>
#include <etsi_its_mapem_ts_coding/constr_SEQUENCE_OF.h>
#include <etsi_its_mapem_ts_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct mapem_ts_TimeChangeDetails;
struct mapem_ts_AdvisorySpeedList;
struct mapem_ts_Reg_MovementEvent;

/* mapem_ts_MovementEvent */
typedef struct mapem_ts_MovementEvent {
	mapem_ts_MovementPhaseState_t	 eventState;
	struct mapem_ts_TimeChangeDetails	*timing;	/* OPTIONAL */
	struct mapem_ts_AdvisorySpeedList	*speeds;	/* OPTIONAL */
	struct mapem_ts_MovementEvent__regional {
		A_SEQUENCE_OF(struct mapem_ts_Reg_MovementEvent) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *regional;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} mapem_ts_MovementEvent_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_mapem_ts_MovementEvent;
extern asn_SEQUENCE_specifics_t asn_SPC_mapem_ts_MovementEvent_specs_1;
extern asn_TYPE_member_t asn_MBR_mapem_ts_MovementEvent_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "etsi_its_mapem_ts_coding/mapem_ts_TimeChangeDetails.h"
#include "etsi_its_mapem_ts_coding/mapem_ts_AdvisorySpeedList.h"
#include "etsi_its_mapem_ts_coding/mapem_ts_RegionalExtension.h"

#endif	/* _mapem_ts_MovementEvent_H_ */
#include <etsi_its_mapem_ts_coding/asn_internal.h>
