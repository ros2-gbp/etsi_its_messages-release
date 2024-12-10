/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=vam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_vam_ts_VruProfileAndSubprofile_H_
#define	_vam_ts_VruProfileAndSubprofile_H_


#include <etsi_its_vam_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_vam_ts_coding/vam_ts_VruSubProfilePedestrian.h"
#include "etsi_its_vam_ts_coding/vam_ts_VruSubProfileBicyclist.h"
#include "etsi_its_vam_ts_coding/vam_ts_VruSubProfileMotorcyclist.h"
#include "etsi_its_vam_ts_coding/vam_ts_VruSubProfileAnimal.h"
#include <etsi_its_vam_ts_coding/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum vam_ts_VruProfileAndSubprofile_PR {
	vam_ts_VruProfileAndSubprofile_PR_NOTHING,	/* No components present */
	vam_ts_VruProfileAndSubprofile_PR_pedestrian,
	vam_ts_VruProfileAndSubprofile_PR_bicyclistAndLightVruVehicle,
	vam_ts_VruProfileAndSubprofile_PR_motorcyclist,
	vam_ts_VruProfileAndSubprofile_PR_animal
	/* Extensions may appear below */
	
} vam_ts_VruProfileAndSubprofile_PR;

/* vam_ts_VruProfileAndSubprofile */
typedef struct vam_ts_VruProfileAndSubprofile {
	vam_ts_VruProfileAndSubprofile_PR present;
	union vam_ts_VruProfileAndSubprofile_u {
		vam_ts_VruSubProfilePedestrian_t	 pedestrian;
		vam_ts_VruSubProfileBicyclist_t	 bicyclistAndLightVruVehicle;
		vam_ts_VruSubProfileMotorcyclist_t	 motorcyclist;
		vam_ts_VruSubProfileAnimal_t	 animal;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} vam_ts_VruProfileAndSubprofile_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_vam_ts_VruProfileAndSubprofile;
extern asn_CHOICE_specifics_t asn_SPC_vam_ts_VruProfileAndSubprofile_specs_1;
extern asn_TYPE_member_t asn_MBR_vam_ts_VruProfileAndSubprofile_1[4];
extern asn_per_constraints_t asn_PER_type_vam_ts_VruProfileAndSubprofile_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _vam_ts_VruProfileAndSubprofile_H_ */
#include <etsi_its_vam_ts_coding/asn_internal.h>