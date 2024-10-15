/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=vam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_vam_ts_PathPointPredicted_H_
#define	_vam_ts_PathPointPredicted_H_


#include <etsi_its_vam_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_vam_ts_coding/vam_ts_DeltaLatitude.h"
#include "etsi_its_vam_ts_coding/vam_ts_DeltaLongitude.h"
#include "etsi_its_vam_ts_coding/vam_ts_DeltaAltitude.h"
#include "etsi_its_vam_ts_coding/vam_ts_AltitudeConfidence.h"
#include "etsi_its_vam_ts_coding/vam_ts_DeltaTimeTenthOfSecond.h"
#include <etsi_its_vam_ts_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct vam_ts_PosConfidenceEllipse;

/* vam_ts_PathPointPredicted */
typedef struct vam_ts_PathPointPredicted {
	vam_ts_DeltaLatitude_t	 deltaLatitude;
	vam_ts_DeltaLongitude_t	 deltaLongitude;
	struct vam_ts_PosConfidenceEllipse	*horizontalPositionConfidence;	/* OPTIONAL */
	vam_ts_DeltaAltitude_t	*deltaAltitude;	/* DEFAULT 12800 */
	vam_ts_AltitudeConfidence_t	*altitudeConfidence;	/* DEFAULT 15 */
	vam_ts_DeltaTimeTenthOfSecond_t	 pathDeltaTime;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} vam_ts_PathPointPredicted_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_vam_ts_PathPointPredicted;
extern asn_SEQUENCE_specifics_t asn_SPC_vam_ts_PathPointPredicted_specs_1;
extern asn_TYPE_member_t asn_MBR_vam_ts_PathPointPredicted_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "etsi_its_vam_ts_coding/vam_ts_PosConfidenceEllipse.h"

#endif	/* _vam_ts_PathPointPredicted_H_ */
#include <etsi_its_vam_ts_coding/asn_internal.h>
