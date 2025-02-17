/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#include "etsi_its_cpm_ts_coding/cpm_ts_PositionConfidenceEllipse.h"

asn_TYPE_member_t asn_MBR_cpm_ts_PositionConfidenceEllipse_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct cpm_ts_PositionConfidenceEllipse, semiMajorAxisLength),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cpm_ts_SemiAxisLength,
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
		"semiMajorAxisLength"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct cpm_ts_PositionConfidenceEllipse, semiMinorAxisLength),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cpm_ts_SemiAxisLength,
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
		"semiMinorAxisLength"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct cpm_ts_PositionConfidenceEllipse, semiMajorAxisOrientation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cpm_ts_Wgs84AngleValue,
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
		"semiMajorAxisOrientation"
		},
};
static const ber_tlv_tag_t asn_DEF_cpm_ts_PositionConfidenceEllipse_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cpm_ts_PositionConfidenceEllipse_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* semiMajorAxisLength */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* semiMinorAxisLength */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* semiMajorAxisOrientation */
};
asn_SEQUENCE_specifics_t asn_SPC_cpm_ts_PositionConfidenceEllipse_specs_1 = {
	sizeof(struct cpm_ts_PositionConfidenceEllipse),
	offsetof(struct cpm_ts_PositionConfidenceEllipse, _asn_ctx),
	asn_MAP_cpm_ts_PositionConfidenceEllipse_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_cpm_ts_PositionConfidenceEllipse = {
	"PositionConfidenceEllipse",
	"PositionConfidenceEllipse",
	&asn_OP_SEQUENCE,
	asn_DEF_cpm_ts_PositionConfidenceEllipse_tags_1,
	sizeof(asn_DEF_cpm_ts_PositionConfidenceEllipse_tags_1)
		/sizeof(asn_DEF_cpm_ts_PositionConfidenceEllipse_tags_1[0]), /* 1 */
	asn_DEF_cpm_ts_PositionConfidenceEllipse_tags_1,	/* Same as above */
	sizeof(asn_DEF_cpm_ts_PositionConfidenceEllipse_tags_1)
		/sizeof(asn_DEF_cpm_ts_PositionConfidenceEllipse_tags_1[0]), /* 1 */
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
	asn_MBR_cpm_ts_PositionConfidenceEllipse_1,
	3,	/* Elements count */
	&asn_SPC_cpm_ts_PositionConfidenceEllipse_specs_1	/* Additional specs */
};

