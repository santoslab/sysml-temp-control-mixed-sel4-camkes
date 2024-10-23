#ifndef SIREUM_GEN_H
#define SIREUM_GEN_H

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>
#include <type-art_Art.h>
#include <type-art_Art_BridgeId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Bridge.h>
#include <type-art_Bridge_EntryPoints.h>
#include <type-art_Bridge_Ports.h>
#include <type-art_DataContent.h>
#include <type-art_DispatchPropertyProtocol.h>
#include <type-art_DispatchPropertyProtocol_Sporadic.h>
#include <type-art_DispatchStatus.h>
#include <type-art_Empty.h>
#include <type-art_EventTriggered.h>
#include <type-art_PortMode_Type.h>
#include <type-art_UPort.h>
#include <type-art_art_Port_70EB35.h>
#include <type-art_art_Port_AE5929.h>
#include <type-org_sireum_IS_820232.h>
#include <type-org_sireum_IS_948B60.h>
#include <type-org_sireum_IS_D10119.h>
#include <type-org_sireum_MBox2_37E193.h>
#include <type-org_sireum_MBox2_43CC67.h>
#include <type-org_sireum_MS_83D5EB.h>
#include <type-org_sireum_None.h>
#include <type-org_sireum_None_734370.h>
#include <type-org_sireum_None_86BF24.h>
#include <type-org_sireum_None_964667.h>
#include <type-org_sireum_None_A70CEE.h>
#include <type-org_sireum_None_ACDB63.h>
#include <type-org_sireum_None_B1BC55.h>
#include <type-org_sireum_None_CFD2B0.h>
#include <type-org_sireum_None_F8CCDD.h>
#include <type-org_sireum_Nothing.h>
#include <type-org_sireum_Option_0247A1.h>
#include <type-org_sireum_Option_103926.h>
#include <type-org_sireum_Option_36021E.h>
#include <type-org_sireum_Option_5071ED.h>
#include <type-org_sireum_Option_7BBFBE.h>
#include <type-org_sireum_Option_8E9F45.h>
#include <type-org_sireum_Option_9C9ECC.h>
#include <type-org_sireum_Option_CA19CB.h>
#include <type-org_sireum_Random.h>
#include <type-org_sireum_Random_Gen.h>
#include <type-org_sireum_Random_Gen64.h>
#include <type-org_sireum_Random_Gen64Impl.h>
#include <type-org_sireum_Random_Impl_SplitMix64.h>
#include <type-org_sireum_Random_Impl_Xoshiro256.h>
#include <type-org_sireum_S16.h>
#include <type-org_sireum_S32.h>
#include <type-org_sireum_S64.h>
#include <type-org_sireum_S8.h>
#include <type-org_sireum_Some.h>
#include <type-org_sireum_Some_0C4CF8.h>
#include <type-org_sireum_Some_2EFA7D.h>
#include <type-org_sireum_Some_4F31FE.h>
#include <type-org_sireum_Some_568CC9.h>
#include <type-org_sireum_Some_D29615.h>
#include <type-org_sireum_Some_D85467.h>
#include <type-org_sireum_U16.h>
#include <type-org_sireum_U32.h>
#include <type-org_sireum_U64.h>
#include <type-org_sireum_U8.h>
#include <type-org_sireum_conversions_U64.h>
#include <type-org_sireum_extension_Time.h>
#include <type-org_sireum_ops_ISZOps.h>
#include <type-org_sireum_ops_ops_ISZOps_3974F3.h>
#include <type-tc_Base_Types.h>
#include <type-tc_Base_Types_Boolean_Payload.h>
#include <type-tc_Base_Types_Character_Payload.h>
#include <type-tc_Base_Types_Float_32_Payload.h>
#include <type-tc_Base_Types_Float_64_Payload.h>
#include <type-tc_Base_Types_Float_Payload.h>
#include <type-tc_Base_Types_Integer_16_Payload.h>
#include <type-tc_Base_Types_Integer_32_Payload.h>
#include <type-tc_Base_Types_Integer_64_Payload.h>
#include <type-tc_Base_Types_Integer_8_Payload.h>
#include <type-tc_Base_Types_Integer_Payload.h>
#include <type-tc_Base_Types_String_Payload.h>
#include <type-tc_Base_Types_Unsigned_16_Payload.h>
#include <type-tc_Base_Types_Unsigned_32_Payload.h>
#include <type-tc_Base_Types_Unsigned_64_Payload.h>
#include <type-tc_Base_Types_Unsigned_8_Payload.h>
#include <type-tc_Fan_fp_ft_ft_seL4App.h>
#include <type-tc_TempControlMixedSeL4CAmKES_FanAck_Type.h>
#include <type-tc_TempControlMixedSeL4CAmKES_FanAck_Payload.h>
#include <type-tc_TempControlMixedSeL4CAmKES_FanCmd_Type.h>
#include <type-tc_TempControlMixedSeL4CAmKES_FanCmd_Payload.h>
#include <type-tc_TempControlMixedSeL4CAmKES_Fan_Api.h>
#include <type-tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api.h>
#include <type-tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api.h>
#include <type-tc_TempControlMixedSeL4CAmKES_Fan_fp_ft.h>
#include <type-tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge.h>
#include <type-tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints.h>
#include <type-tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_seL4Nix.h>
#include <type-tc_TempControlMixedSeL4CAmKES_SetPoint.h>
#include <type-tc_TempControlMixedSeL4CAmKES_SetPoint_Payload.h>
#include <type-tc_TempControlMixedSeL4CAmKES_TempUnit_Type.h>
#include <type-tc_TempControlMixedSeL4CAmKES_TempUnit_Payload.h>
#include <type-tc_TempControlMixedSeL4CAmKES_Temperature.h>
#include <type-tc_TempControlMixedSeL4CAmKES_Temperature_Payload.h>
#include <type-tc_TranspilerToucher.h>

#if defined(static_assert)
#define STATIC_ASSERT static_assert
#define GLOBAL_STATIC_ASSERT(a, b, c) static_assert(b, c)
#else
#define STATIC_ASSERT(pred, explanation); {char assert=1/(pred);(void)assert;}
#define GLOBAL_STATIC_ASSERT(unique, pred, explanation); namespace ASSERTION {char unique=1/(pred);}
#endif

size_t sizeOf(Type t);
void Type_assign(void *dest, void *src, size_t destSize);

#ifdef __cplusplus
}
#endif

#endif