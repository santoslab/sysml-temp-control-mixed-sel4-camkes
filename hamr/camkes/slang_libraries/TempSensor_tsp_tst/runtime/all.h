#ifndef SIREUM_ALL_H
#define SIREUM_ALL_H

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>
#include <art_Art.h>
#include <art_Art_BridgeId.h>
#include <art_Art_PortId.h>
#include <art_Bridge.h>
#include <art_Bridge_EntryPoints.h>
#include <art_Bridge_Ports.h>
#include <art_DataContent.h>
#include <art_DispatchPropertyProtocol.h>
#include <art_DispatchPropertyProtocol_Periodic.h>
#include <art_Empty.h>
#include <art_PortMode_Type.h>
#include <art_UPort.h>
#include <art_art_Port_890848.h>
#include <art_art_Port_9CBF18.h>
#include <org_sireum_IS_820232.h>
#include <org_sireum_IS_948B60.h>
#include <org_sireum_IS_D10119.h>
#include <org_sireum_MBox2_37E193.h>
#include <org_sireum_MBox2_43CC67.h>
#include <org_sireum_MS_83D5EB.h>
#include <org_sireum_None.h>
#include <org_sireum_None_037804.h>
#include <org_sireum_None_121724.h>
#include <org_sireum_None_1AEC2C.h>
#include <org_sireum_None_3C78E7.h>
#include <org_sireum_None_4E7E94.h>
#include <org_sireum_None_734370.h>
#include <org_sireum_None_79FC20.h>
#include <org_sireum_None_86BF24.h>
#include <org_sireum_None_964667.h>
#include <org_sireum_None_A23E58.h>
#include <org_sireum_None_A45A41.h>
#include <org_sireum_None_A70CEE.h>
#include <org_sireum_None_ACDB63.h>
#include <org_sireum_None_B4A4FA.h>
#include <org_sireum_None_B66650.h>
#include <org_sireum_None_BE24EA.h>
#include <org_sireum_None_BE2C3F.h>
#include <org_sireum_None_CFD2B0.h>
#include <org_sireum_None_D4B208.h>
#include <org_sireum_Nothing.h>
#include <org_sireum_Option_0247A1.h>
#include <org_sireum_Option_103926.h>
#include <org_sireum_Option_121E48.h>
#include <org_sireum_Option_262EA2.h>
#include <org_sireum_Option_36021E.h>
#include <org_sireum_Option_38D338.h>
#include <org_sireum_Option_5071ED.h>
#include <org_sireum_Option_50DC68.h>
#include <org_sireum_Option_570179.h>
#include <org_sireum_Option_5F90D6.h>
#include <org_sireum_Option_62C8EC.h>
#include <org_sireum_Option_7BBFBE.h>
#include <org_sireum_Option_8499F5.h>
#include <org_sireum_Option_8E9F45.h>
#include <org_sireum_Option_978FB8.h>
#include <org_sireum_Option_A2275D.h>
#include <org_sireum_Option_AAF24B.h>
#include <org_sireum_Option_C6954F.h>
#include <org_sireum_Option_C9A4D6.h>
#include <org_sireum_Random.h>
#include <org_sireum_Random_Gen.h>
#include <org_sireum_Random_Gen64.h>
#include <org_sireum_Random_Gen64Impl.h>
#include <org_sireum_Random_Impl_SplitMix64.h>
#include <org_sireum_Random_Impl_Xoshiro256.h>
#include <org_sireum_S16.h>
#include <org_sireum_S32.h>
#include <org_sireum_S64.h>
#include <org_sireum_S8.h>
#include <org_sireum_Some.h>
#include <org_sireum_Some_0C4CF8.h>
#include <org_sireum_Some_0E3FBA.h>
#include <org_sireum_Some_140719.h>
#include <org_sireum_Some_21C1E5.h>
#include <org_sireum_Some_270A8B.h>
#include <org_sireum_Some_2EFA7D.h>
#include <org_sireum_Some_455777.h>
#include <org_sireum_Some_56FCC9.h>
#include <org_sireum_Some_776961.h>
#include <org_sireum_Some_B14D88.h>
#include <org_sireum_Some_C0DBA9.h>
#include <org_sireum_Some_C3173C.h>
#include <org_sireum_Some_C790DA.h>
#include <org_sireum_Some_D29615.h>
#include <org_sireum_Some_D85467.h>
#include <org_sireum_Some_F1808D.h>
#include <org_sireum_Some_FBE41D.h>
#include <org_sireum_U16.h>
#include <org_sireum_U32.h>
#include <org_sireum_U64.h>
#include <org_sireum_U8.h>
#include <org_sireum_conversions_U32.h>
#include <org_sireum_extension_Time.h>
#include <tc_Base_Types.h>
#include <tc_Base_Types_Boolean_Payload.h>
#include <tc_Base_Types_Character_Payload.h>
#include <tc_Base_Types_Float_32_Payload.h>
#include <tc_Base_Types_Float_64_Payload.h>
#include <tc_Base_Types_Float_Payload.h>
#include <tc_Base_Types_Integer_16_Payload.h>
#include <tc_Base_Types_Integer_32_Payload.h>
#include <tc_Base_Types_Integer_64_Payload.h>
#include <tc_Base_Types_Integer_8_Payload.h>
#include <tc_Base_Types_Integer_Payload.h>
#include <tc_Base_Types_String_Payload.h>
#include <tc_Base_Types_Unsigned_16_Payload.h>
#include <tc_Base_Types_Unsigned_32_Payload.h>
#include <tc_Base_Types_Unsigned_64_Payload.h>
#include <tc_Base_Types_Unsigned_8_Payload.h>
#include <tc_Isolette_Data_Model_Failure_Flag.h>
#include <tc_Isolette_Data_Model_Failure_Flag_Payload.h>
#include <tc_Isolette_Data_Model_Monitor_Mode_Type.h>
#include <tc_Isolette_Data_Model_Monitor_Mode_Payload.h>
#include <tc_Isolette_Data_Model_On_Off_Type.h>
#include <tc_Isolette_Data_Model_On_Off_Payload.h>
#include <tc_Isolette_Data_Model_PhysicalTemp.h>
#include <tc_Isolette_Data_Model_PhysicalTemp_Payload.h>
#include <tc_Isolette_Data_Model_Regulator_Mode_Type.h>
#include <tc_Isolette_Data_Model_Regulator_Mode_Payload.h>
#include <tc_Isolette_Data_Model_Status_Type.h>
#include <tc_Isolette_Data_Model_Status_Payload.h>
#include <tc_Isolette_Data_Model_Temp.h>
#include <tc_Isolette_Data_Model_TempWstatus.h>
#include <tc_Isolette_Data_Model_TempWstatus_Payload.h>
#include <tc_Isolette_Data_Model_Temp_Payload.h>
#include <tc_Isolette_Data_Model_ValueStatus_Type.h>
#include <tc_Isolette_Data_Model_ValueStatus_Payload.h>
#include <tc_Isolette_Environment_Air_Interaction.h>
#include <tc_Isolette_Environment_Air_Interaction_Payload.h>
#include <tc_Isolette_Environment_Heat.h>
#include <tc_Isolette_Environment_Heat_Payload.h>
#include <tc_Isolette_Environment_Interface_Interaction.h>
#include <tc_Isolette_Environment_Interface_Interaction_Payload.h>
#include <tc_TempControlMixed_FanAck_Type.h>
#include <tc_TempControlMixed_FanAck_Payload.h>
#include <tc_TempControlMixed_FanCmd_Type.h>
#include <tc_TempControlMixed_FanCmd_Payload.h>
#include <tc_TempControlMixedSeL4CAmKES_Defs.h>
#include <tc_TempControlMixedSeL4CAmKES_FanAck_Type.h>
#include <tc_TempControlMixedSeL4CAmKES_FanAck_Payload.h>
#include <tc_TempControlMixedSeL4CAmKES_FanCmd_Type.h>
#include <tc_TempControlMixedSeL4CAmKES_FanCmd_Payload.h>
#include <tc_TempControlMixedSeL4CAmKES_SetPoint.h>
#include <tc_TempControlMixedSeL4CAmKES_SetPoint_Payload.h>
#include <tc_TempControlMixedSeL4CAmKES_TempSensor_Api.h>
#include <tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api.h>
#include <tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api.h>
#include <tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst.h>
#include <tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge.h>
#include <tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints.h>
#include <tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_seL4Nix.h>
#include <tc_TempControlMixedSeL4CAmKES_TempUnit_Type.h>
#include <tc_TempControlMixedSeL4CAmKES_TempUnit_Payload.h>
#include <tc_TempControlMixedSeL4CAmKES_Temperature.h>
#include <tc_TempControlMixedSeL4CAmKES_Temperature_Payload.h>
#include <tc_TempControlMixed_SetPoint.h>
#include <tc_TempControlMixed_SetPoint_Payload.h>
#include <tc_TempControlMixed_TempUnit_Type.h>
#include <tc_TempControlMixed_TempUnit_Payload.h>
#include <tc_TempControlMixed_Temperature.h>
#include <tc_TempControlMixed_Temperature_Payload.h>
#include <tc_TempControlPeriodic_FanAck_Type.h>
#include <tc_TempControlPeriodic_FanAck_Payload.h>
#include <tc_TempControlPeriodic_FanCmd_Type.h>
#include <tc_TempControlPeriodic_FanCmd_Payload.h>
#include <tc_TempControlPeriodic_SetPoint.h>
#include <tc_TempControlPeriodic_SetPoint_Payload.h>
#include <tc_TempControlPeriodic_TempUnit_Type.h>
#include <tc_TempControlPeriodic_TempUnit_Payload.h>
#include <tc_TempControlPeriodic_Temperature.h>
#include <tc_TempControlPeriodic_Temperature_Payload.h>
#include <tc_TempSensor_tsp_tst_tst_seL4App.h>
#include <tc_TranspilerToucher.h>


#ifdef __cplusplus
}
#endif

#endif