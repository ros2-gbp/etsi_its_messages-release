/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#include "etsi_its_cam_ts_coding/cam_ts_AccelerationPolarWithZ.h"

asn_TYPE_member_t asn_MBR_cam_ts_AccelerationPolarWithZ_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct cam_ts_AccelerationPolarWithZ, accelerationMagnitude),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cam_ts_AccelerationMagnitude,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"accelerationMagnitude"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct cam_ts_AccelerationPolarWithZ, accelerationDirection),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cam_ts_CartesianAngle,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"accelerationDirection"
		},
	{ ATF_POINTER, 1, offsetof(struct cam_ts_AccelerationPolarWithZ, zAcceleration),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cam_ts_AccelerationComponent,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"zAcceleration"
		},
};
static const int asn_MAP_cam_ts_AccelerationPolarWithZ_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_cam_ts_AccelerationPolarWithZ_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cam_ts_AccelerationPolarWithZ_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* accelerationMagnitude */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* accelerationDirection */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* zAcceleration */
};
asn_SEQUENCE_specifics_t asn_SPC_cam_ts_AccelerationPolarWithZ_specs_1 = {
	sizeof(struct cam_ts_AccelerationPolarWithZ),
	offsetof(struct cam_ts_AccelerationPolarWithZ, _asn_ctx),
	asn_MAP_cam_ts_AccelerationPolarWithZ_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_cam_ts_AccelerationPolarWithZ_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_cam_ts_AccelerationPolarWithZ = {
	"AccelerationPolarWithZ",
	"AccelerationPolarWithZ",
	&asn_OP_SEQUENCE,
	asn_DEF_cam_ts_AccelerationPolarWithZ_tags_1,
	sizeof(asn_DEF_cam_ts_AccelerationPolarWithZ_tags_1)
		/sizeof(asn_DEF_cam_ts_AccelerationPolarWithZ_tags_1[0]), /* 1 */
	asn_DEF_cam_ts_AccelerationPolarWithZ_tags_1,	/* Same as above */
	sizeof(asn_DEF_cam_ts_AccelerationPolarWithZ_tags_1)
		/sizeof(asn_DEF_cam_ts_AccelerationPolarWithZ_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_cam_ts_AccelerationPolarWithZ_1,
	3,	/* Elements count */
	&asn_SPC_cam_ts_AccelerationPolarWithZ_specs_1	/* Additional specs */
};

