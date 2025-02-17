/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=mapem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_mapem_ts_DangerousGoodsBasic_H_
#define	_mapem_ts_DangerousGoodsBasic_H_


#include <etsi_its_mapem_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_mapem_ts_coding/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum mapem_ts_DangerousGoodsBasic {
	mapem_ts_DangerousGoodsBasic_explosives1	= 0,
	mapem_ts_DangerousGoodsBasic_explosives2	= 1,
	mapem_ts_DangerousGoodsBasic_explosives3	= 2,
	mapem_ts_DangerousGoodsBasic_explosives4	= 3,
	mapem_ts_DangerousGoodsBasic_explosives5	= 4,
	mapem_ts_DangerousGoodsBasic_explosives6	= 5,
	mapem_ts_DangerousGoodsBasic_flammableGases	= 6,
	mapem_ts_DangerousGoodsBasic_nonFlammableGases	= 7,
	mapem_ts_DangerousGoodsBasic_toxicGases	= 8,
	mapem_ts_DangerousGoodsBasic_flammableLiquids	= 9,
	mapem_ts_DangerousGoodsBasic_flammableSolids	= 10,
	mapem_ts_DangerousGoodsBasic_substancesLiableToSpontaneousCombustion	= 11,
	mapem_ts_DangerousGoodsBasic_substancesEmittingFlammableGasesUponContactWithWater	= 12,
	mapem_ts_DangerousGoodsBasic_oxidizingSubstances	= 13,
	mapem_ts_DangerousGoodsBasic_organicPeroxides	= 14,
	mapem_ts_DangerousGoodsBasic_toxicSubstances	= 15,
	mapem_ts_DangerousGoodsBasic_infectiousSubstances	= 16,
	mapem_ts_DangerousGoodsBasic_radioactiveMaterial	= 17,
	mapem_ts_DangerousGoodsBasic_corrosiveSubstances	= 18,
	mapem_ts_DangerousGoodsBasic_miscellaneousDangerousSubstances	= 19
} e_mapem_ts_DangerousGoodsBasic;

/* mapem_ts_DangerousGoodsBasic */
typedef long	 mapem_ts_DangerousGoodsBasic_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_mapem_ts_DangerousGoodsBasic_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_mapem_ts_DangerousGoodsBasic;
extern const asn_INTEGER_specifics_t asn_SPC_mapem_ts_DangerousGoodsBasic_specs_1;
asn_struct_free_f mapem_ts_DangerousGoodsBasic_free;
asn_struct_print_f mapem_ts_DangerousGoodsBasic_print;
asn_constr_check_f mapem_ts_DangerousGoodsBasic_constraint;
per_type_decoder_f mapem_ts_DangerousGoodsBasic_decode_uper;
per_type_encoder_f mapem_ts_DangerousGoodsBasic_encode_uper;
per_type_decoder_f mapem_ts_DangerousGoodsBasic_decode_aper;
per_type_encoder_f mapem_ts_DangerousGoodsBasic_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _mapem_ts_DangerousGoodsBasic_H_ */
#include <etsi_its_mapem_ts_coding/asn_internal.h>
