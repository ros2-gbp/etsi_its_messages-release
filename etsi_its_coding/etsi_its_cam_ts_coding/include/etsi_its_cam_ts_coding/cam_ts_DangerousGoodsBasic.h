/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cam_ts_DangerousGoodsBasic_H_
#define	_cam_ts_DangerousGoodsBasic_H_


#include <etsi_its_cam_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cam_ts_coding/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cam_ts_DangerousGoodsBasic {
	cam_ts_DangerousGoodsBasic_explosives1	= 0,
	cam_ts_DangerousGoodsBasic_explosives2	= 1,
	cam_ts_DangerousGoodsBasic_explosives3	= 2,
	cam_ts_DangerousGoodsBasic_explosives4	= 3,
	cam_ts_DangerousGoodsBasic_explosives5	= 4,
	cam_ts_DangerousGoodsBasic_explosives6	= 5,
	cam_ts_DangerousGoodsBasic_flammableGases	= 6,
	cam_ts_DangerousGoodsBasic_nonFlammableGases	= 7,
	cam_ts_DangerousGoodsBasic_toxicGases	= 8,
	cam_ts_DangerousGoodsBasic_flammableLiquids	= 9,
	cam_ts_DangerousGoodsBasic_flammableSolids	= 10,
	cam_ts_DangerousGoodsBasic_substancesLiableToSpontaneousCombustion	= 11,
	cam_ts_DangerousGoodsBasic_substancesEmittingFlammableGasesUponContactWithWater	= 12,
	cam_ts_DangerousGoodsBasic_oxidizingSubstances	= 13,
	cam_ts_DangerousGoodsBasic_organicPeroxides	= 14,
	cam_ts_DangerousGoodsBasic_toxicSubstances	= 15,
	cam_ts_DangerousGoodsBasic_infectiousSubstances	= 16,
	cam_ts_DangerousGoodsBasic_radioactiveMaterial	= 17,
	cam_ts_DangerousGoodsBasic_corrosiveSubstances	= 18,
	cam_ts_DangerousGoodsBasic_miscellaneousDangerousSubstances	= 19
} e_cam_ts_DangerousGoodsBasic;

/* cam_ts_DangerousGoodsBasic */
typedef long	 cam_ts_DangerousGoodsBasic_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_cam_ts_DangerousGoodsBasic_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_cam_ts_DangerousGoodsBasic;
extern const asn_INTEGER_specifics_t asn_SPC_cam_ts_DangerousGoodsBasic_specs_1;
asn_struct_free_f cam_ts_DangerousGoodsBasic_free;
asn_struct_print_f cam_ts_DangerousGoodsBasic_print;
asn_constr_check_f cam_ts_DangerousGoodsBasic_constraint;
per_type_decoder_f cam_ts_DangerousGoodsBasic_decode_uper;
per_type_encoder_f cam_ts_DangerousGoodsBasic_encode_uper;
per_type_decoder_f cam_ts_DangerousGoodsBasic_decode_aper;
per_type_encoder_f cam_ts_DangerousGoodsBasic_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cam_ts_DangerousGoodsBasic_H_ */
#include <etsi_its_cam_ts_coding/asn_internal.h>
