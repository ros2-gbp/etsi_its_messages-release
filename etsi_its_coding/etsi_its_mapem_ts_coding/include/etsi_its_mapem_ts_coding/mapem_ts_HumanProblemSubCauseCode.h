/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=mapem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_mapem_ts_HumanProblemSubCauseCode_H_
#define	_mapem_ts_HumanProblemSubCauseCode_H_


#include <etsi_its_mapem_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_mapem_ts_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum mapem_ts_HumanProblemSubCauseCode {
	mapem_ts_HumanProblemSubCauseCode_unavailable	= 0,
	mapem_ts_HumanProblemSubCauseCode_glycemiaProblem	= 1,
	mapem_ts_HumanProblemSubCauseCode_heartProblem	= 2
} e_mapem_ts_HumanProblemSubCauseCode;

/* mapem_ts_HumanProblemSubCauseCode */
typedef long	 mapem_ts_HumanProblemSubCauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_mapem_ts_HumanProblemSubCauseCode;
asn_struct_free_f mapem_ts_HumanProblemSubCauseCode_free;
asn_struct_print_f mapem_ts_HumanProblemSubCauseCode_print;
asn_constr_check_f mapem_ts_HumanProblemSubCauseCode_constraint;
per_type_decoder_f mapem_ts_HumanProblemSubCauseCode_decode_uper;
per_type_encoder_f mapem_ts_HumanProblemSubCauseCode_encode_uper;
per_type_decoder_f mapem_ts_HumanProblemSubCauseCode_decode_aper;
per_type_encoder_f mapem_ts_HumanProblemSubCauseCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _mapem_ts_HumanProblemSubCauseCode_H_ */
#include <etsi_its_mapem_ts_coding/asn_internal.h>