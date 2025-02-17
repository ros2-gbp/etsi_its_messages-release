/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=denm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_denm_ts_LanePositionWithLateralDetails_H_
#define	_denm_ts_LanePositionWithLateralDetails_H_


#include <etsi_its_denm_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_denm_ts_coding/denm_ts_LanePosition.h"
#include "etsi_its_denm_ts_coding/denm_ts_LaneType.h"
#include "etsi_its_denm_ts_coding/denm_ts_Direction.h"
#include "etsi_its_denm_ts_coding/denm_ts_StandardLength9b.h"
#include <etsi_its_denm_ts_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* denm_ts_LanePositionWithLateralDetails */
typedef struct denm_ts_LanePositionWithLateralDetails {
	denm_ts_LanePosition_t	 transversalPosition;
	denm_ts_LaneType_t	 laneType;	/* DEFAULT 0 */
	denm_ts_Direction_t	 direction;	/* DEFAULT 0 */
	denm_ts_StandardLength9b_t	 distanceToLeftBorder;
	denm_ts_StandardLength9b_t	 distanceToRightBorder;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} denm_ts_LanePositionWithLateralDetails_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_denm_ts_LanePositionWithLateralDetails;
extern asn_SEQUENCE_specifics_t asn_SPC_denm_ts_LanePositionWithLateralDetails_specs_1;
extern asn_TYPE_member_t asn_MBR_denm_ts_LanePositionWithLateralDetails_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _denm_ts_LanePositionWithLateralDetails_H_ */
#include <etsi_its_denm_ts_coding/asn_internal.h>
