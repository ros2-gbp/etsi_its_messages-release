/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=denm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#include "etsi_its_denm_ts_coding/denm_ts_AccessTechnologyClass.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_denm_ts_AccessTechnologyClass_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_denm_ts_AccessTechnologyClass_value2enum_1[] = {
	{ 0,	3,	"any" },
	{ 1,	10,	"itsg5Class" },
	{ 2,	11,	"ltev2xClass" },
	{ 3,	10,	"nrv2xClass" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_denm_ts_AccessTechnologyClass_enum2value_1[] = {
	0,	/* any(0) */
	1,	/* itsg5Class(1) */
	2,	/* ltev2xClass(2) */
	3	/* nrv2xClass(3) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_denm_ts_AccessTechnologyClass_specs_1 = {
	asn_MAP_denm_ts_AccessTechnologyClass_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_denm_ts_AccessTechnologyClass_enum2value_1,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_denm_ts_AccessTechnologyClass_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_denm_ts_AccessTechnologyClass = {
	"AccessTechnologyClass",
	"AccessTechnologyClass",
	&asn_OP_NativeEnumerated,
	asn_DEF_denm_ts_AccessTechnologyClass_tags_1,
	sizeof(asn_DEF_denm_ts_AccessTechnologyClass_tags_1)
		/sizeof(asn_DEF_denm_ts_AccessTechnologyClass_tags_1[0]), /* 1 */
	asn_DEF_denm_ts_AccessTechnologyClass_tags_1,	/* Same as above */
	sizeof(asn_DEF_denm_ts_AccessTechnologyClass_tags_1)
		/sizeof(asn_DEF_denm_ts_AccessTechnologyClass_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_denm_ts_AccessTechnologyClass_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_denm_ts_AccessTechnologyClass_specs_1	/* Additional specs */
};

