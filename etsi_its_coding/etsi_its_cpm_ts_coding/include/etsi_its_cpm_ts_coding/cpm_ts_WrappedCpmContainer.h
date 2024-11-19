/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "/input/CPM-PDU-Descriptions.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_ts_WrappedCpmContainer_H_
#define	_cpm_ts_WrappedCpmContainer_H_


#include <etsi_its_cpm_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_cpm_ts_coding/cpm_ts_CpmContainerId.h"
#include <etsi_its_cpm_ts_coding/ANY.h>
#include <etsi_its_cpm_ts_coding/asn_ioc.h>
#include "etsi_its_cpm_ts_coding/cpm_ts_OriginatingVehicleContainer.h"
#include "etsi_its_cpm_ts_coding/cpm_ts_OriginatingRsuContainer.h"
#include "etsi_its_cpm_ts_coding/cpm_ts_SensorInformationContainer.h"
#include "etsi_its_cpm_ts_coding/cpm_ts_PerceptionRegionContainer.h"
#include "etsi_its_cpm_ts_coding/cpm_ts_PerceivedObjectContainer.h"
#include <etsi_its_cpm_ts_coding/OPEN_TYPE.h>
#include <etsi_its_cpm_ts_coding/constr_CHOICE.h>
#include <etsi_its_cpm_ts_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cpm_ts_WrappedCpmContainer__containerData_PR {
	cpm_ts_WrappedCpmContainer__containerData_PR_NOTHING,	/* No components present */
	cpm_ts_WrappedCpmContainer__containerData_PR_OriginatingVehicleContainer,
	cpm_ts_WrappedCpmContainer__containerData_PR_OriginatingRsuContainer,
	cpm_ts_WrappedCpmContainer__containerData_PR_SensorInformationContainer,
	cpm_ts_WrappedCpmContainer__containerData_PR_PerceptionRegionContainer,
	cpm_ts_WrappedCpmContainer__containerData_PR_PerceivedObjectContainer
} cpm_ts_WrappedCpmContainer__containerData_PR;

/* cpm_ts_WrappedCpmContainer */
typedef struct cpm_ts_WrappedCpmContainer {
	cpm_ts_CpmContainerId_t	 containerId;
	struct cpm_ts_WrappedCpmContainer__containerData {
		cpm_ts_WrappedCpmContainer__containerData_PR present;
		union cpm_ts_WrappedCpmContainer__cpm_ts_containerData_u {
			cpm_ts_OriginatingVehicleContainer_t	 OriginatingVehicleContainer;
			cpm_ts_OriginatingRsuContainer_t	 OriginatingRsuContainer;
			cpm_ts_SensorInformationContainer_t	 SensorInformationContainer;
			cpm_ts_PerceptionRegionContainer_t	 PerceptionRegionContainer;
			cpm_ts_PerceivedObjectContainer_t	 PerceivedObjectContainer;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} containerData;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} cpm_ts_WrappedCpmContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cpm_ts_WrappedCpmContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_cpm_ts_WrappedCpmContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_cpm_ts_WrappedCpmContainer_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_ts_WrappedCpmContainer_H_ */
#include <etsi_its_cpm_ts_coding/asn_internal.h>
