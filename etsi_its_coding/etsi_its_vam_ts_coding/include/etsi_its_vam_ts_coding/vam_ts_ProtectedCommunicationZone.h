/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=vam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_vam_ts_ProtectedCommunicationZone_H_
#define	_vam_ts_ProtectedCommunicationZone_H_


#include <etsi_its_vam_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_vam_ts_coding/vam_ts_ProtectedZoneType.h"
#include "etsi_its_vam_ts_coding/vam_ts_TimestampIts.h"
#include "etsi_its_vam_ts_coding/vam_ts_Latitude.h"
#include "etsi_its_vam_ts_coding/vam_ts_Longitude.h"
#include "etsi_its_vam_ts_coding/vam_ts_ProtectedZoneRadius.h"
#include "etsi_its_vam_ts_coding/vam_ts_ProtectedZoneId.h"
#include <etsi_its_vam_ts_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* vam_ts_ProtectedCommunicationZone */
typedef struct vam_ts_ProtectedCommunicationZone {
	vam_ts_ProtectedZoneType_t	 protectedZoneType;
	vam_ts_TimestampIts_t	*expiryTime;	/* OPTIONAL */
	vam_ts_Latitude_t	 protectedZoneLatitude;
	vam_ts_Longitude_t	 protectedZoneLongitude;
	vam_ts_ProtectedZoneRadius_t	*protectedZoneRadius;	/* OPTIONAL */
	vam_ts_ProtectedZoneId_t	*protectedZoneId;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} vam_ts_ProtectedCommunicationZone_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_vam_ts_ProtectedCommunicationZone;
extern asn_SEQUENCE_specifics_t asn_SPC_vam_ts_ProtectedCommunicationZone_specs_1;
extern asn_TYPE_member_t asn_MBR_vam_ts_ProtectedCommunicationZone_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _vam_ts_ProtectedCommunicationZone_H_ */
#include <etsi_its_vam_ts_coding/asn_internal.h>
