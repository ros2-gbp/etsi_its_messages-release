/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_ts_PositionOfPillars_H_
#define	_cpm_ts_PositionOfPillars_H_


#include <etsi_its_cpm_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_cpm_ts_coding/cpm_ts_PosPillar.h"
#include <etsi_its_cpm_ts_coding/asn_SEQUENCE_OF.h>
#include <etsi_its_cpm_ts_coding/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* cpm_ts_PositionOfPillars */
typedef struct cpm_ts_PositionOfPillars {
	A_SEQUENCE_OF(cpm_ts_PosPillar_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} cpm_ts_PositionOfPillars_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cpm_ts_PositionOfPillars;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_ts_PositionOfPillars_H_ */
#include <etsi_its_cpm_ts_coding/asn_internal.h>
