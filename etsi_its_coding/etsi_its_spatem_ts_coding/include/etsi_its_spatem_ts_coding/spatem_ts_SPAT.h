/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/input/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -fcompound-names -fprefix=spatem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_spatem_ts_SPAT_H_
#define	_spatem_ts_SPAT_H_


#include <etsi_its_spatem_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_spatem_ts_coding/spatem_ts_MinuteOfTheYear.h"
#include "etsi_its_spatem_ts_coding/spatem_ts_DescriptiveName.h"
#include "etsi_its_spatem_ts_coding/spatem_ts_IntersectionStateList.h"
#include <etsi_its_spatem_ts_coding/asn_SEQUENCE_OF.h>
#include <etsi_its_spatem_ts_coding/constr_SEQUENCE_OF.h>
#include <etsi_its_spatem_ts_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct spatem_ts_Reg_SPAT;

/* spatem_ts_SPAT */
typedef struct spatem_ts_SPAT {
	spatem_ts_MinuteOfTheYear_t	*timeStamp;	/* OPTIONAL */
	spatem_ts_DescriptiveName_t	*name;	/* OPTIONAL */
	spatem_ts_IntersectionStateList_t	 intersections;
	struct spatem_ts_SPAT__regional {
		A_SEQUENCE_OF(struct spatem_ts_Reg_SPAT) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *regional;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} spatem_ts_SPAT_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_spatem_ts_SPAT;
extern asn_SEQUENCE_specifics_t asn_SPC_spatem_ts_SPAT_specs_1;
extern asn_TYPE_member_t asn_MBR_spatem_ts_SPAT_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "etsi_its_spatem_ts_coding/spatem_ts_RegionalExtension.h"

#endif	/* _spatem_ts_SPAT_H_ */
#include <etsi_its_spatem_ts_coding/asn_internal.h>
