/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=vam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#include "etsi_its_vam_ts_coding/vam_ts_SequenceOfCartesianPosition3d.h"

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_vam_ts_SequenceOfCartesianPosition3d_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  1,  16 }	/* (SIZE(1..16,...)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_vam_ts_SequenceOfCartesianPosition3d_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_vam_ts_CartesianPosition3d,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_vam_ts_SequenceOfCartesianPosition3d_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_vam_ts_SequenceOfCartesianPosition3d_specs_1 = {
	sizeof(struct vam_ts_SequenceOfCartesianPosition3d),
	offsetof(struct vam_ts_SequenceOfCartesianPosition3d, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_vam_ts_SequenceOfCartesianPosition3d = {
	"SequenceOfCartesianPosition3d",
	"SequenceOfCartesianPosition3d",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_vam_ts_SequenceOfCartesianPosition3d_tags_1,
	sizeof(asn_DEF_vam_ts_SequenceOfCartesianPosition3d_tags_1)
		/sizeof(asn_DEF_vam_ts_SequenceOfCartesianPosition3d_tags_1[0]), /* 1 */
	asn_DEF_vam_ts_SequenceOfCartesianPosition3d_tags_1,	/* Same as above */
	sizeof(asn_DEF_vam_ts_SequenceOfCartesianPosition3d_tags_1)
		/sizeof(asn_DEF_vam_ts_SequenceOfCartesianPosition3d_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_vam_ts_SequenceOfCartesianPosition3d_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_vam_ts_SequenceOfCartesianPosition3d_1,
	1,	/* Single element */
	&asn_SPC_vam_ts_SequenceOfCartesianPosition3d_specs_1	/* Additional specs */
};
