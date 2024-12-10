/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/input/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -fcompound-names -fprefix=mapem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#include "etsi_its_mapem_ts_coding/mapem_ts_RestrictionUserTypeList.h"

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_mapem_ts_RestrictionUserTypeList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_mapem_ts_RestrictionUserTypeList_1[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_mapem_ts_RestrictionUserType,
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
static const ber_tlv_tag_t asn_DEF_mapem_ts_RestrictionUserTypeList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_mapem_ts_RestrictionUserTypeList_specs_1 = {
	sizeof(struct mapem_ts_RestrictionUserTypeList),
	offsetof(struct mapem_ts_RestrictionUserTypeList, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
asn_TYPE_descriptor_t asn_DEF_mapem_ts_RestrictionUserTypeList = {
	"RestrictionUserTypeList",
	"RestrictionUserTypeList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_mapem_ts_RestrictionUserTypeList_tags_1,
	sizeof(asn_DEF_mapem_ts_RestrictionUserTypeList_tags_1)
		/sizeof(asn_DEF_mapem_ts_RestrictionUserTypeList_tags_1[0]), /* 1 */
	asn_DEF_mapem_ts_RestrictionUserTypeList_tags_1,	/* Same as above */
	sizeof(asn_DEF_mapem_ts_RestrictionUserTypeList_tags_1)
		/sizeof(asn_DEF_mapem_ts_RestrictionUserTypeList_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_mapem_ts_RestrictionUserTypeList_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_mapem_ts_RestrictionUserTypeList_1,
	1,	/* Single element */
	&asn_SPC_mapem_ts_RestrictionUserTypeList_specs_1	/* Additional specs */
};

