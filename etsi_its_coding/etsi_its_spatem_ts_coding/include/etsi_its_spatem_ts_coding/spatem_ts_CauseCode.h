/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=spatem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_spatem_ts_CauseCode_H_
#define	_spatem_ts_CauseCode_H_


#include <etsi_its_spatem_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_spatem_ts_coding/spatem_ts_CauseCodeType.h"
#include "etsi_its_spatem_ts_coding/spatem_ts_SubCauseCodeType.h"
#include <etsi_its_spatem_ts_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* spatem_ts_CauseCode */
typedef struct spatem_ts_CauseCode {
	spatem_ts_CauseCodeType_t	 causeCode;
	spatem_ts_SubCauseCodeType_t	 subCauseCode;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} spatem_ts_CauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_spatem_ts_CauseCode;

#ifdef __cplusplus
}
#endif

#endif	/* _spatem_ts_CauseCode_H_ */
#include <etsi_its_spatem_ts_coding/asn_internal.h>
