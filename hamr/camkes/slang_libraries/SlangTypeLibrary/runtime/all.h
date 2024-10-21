#ifndef SIREUM_ALL_H
#define SIREUM_ALL_H

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>
#include <art_DataContent.h>
#include <art_Empty.h>
#include <org_sireum_IS_948B60.h>
#include <org_sireum_None.h>
#include <org_sireum_None_037804.h>
#include <org_sireum_None_121724.h>
#include <org_sireum_None_1AEC2C.h>
#include <org_sireum_None_3C78E7.h>
#include <org_sireum_None_4E7E94.h>
#include <org_sireum_None_86BF24.h>
#include <org_sireum_None_A23E58.h>
#include <org_sireum_None_A45A41.h>
#include <org_sireum_None_A70CEE.h>
#include <org_sireum_None_ACDB63.h>
#include <org_sireum_None_B4A4FA.h>
#include <org_sireum_None_BE24EA.h>
#include <org_sireum_None_BE2C3F.h>
#include <org_sireum_None_D4B208.h>
#include <org_sireum_Nothing.h>
#include <org_sireum_Option_103926.h>
#include <org_sireum_Option_121E48.h>
#include <org_sireum_Option_36021E.h>
#include <org_sireum_Option_38D338.h>
#include <org_sireum_Option_5071ED.h>
#include <org_sireum_Option_570179.h>
#include <org_sireum_Option_5F90D6.h>
#include <org_sireum_Option_62C8EC.h>
#include <org_sireum_Option_8499F5.h>
#include <org_sireum_Option_978FB8.h>
#include <org_sireum_Option_A2275D.h>
#include <org_sireum_Option_AAF24B.h>
#include <org_sireum_Option_C6954F.h>
#include <org_sireum_Option_C9A4D6.h>
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
#include <org_sireum_Some_C0DBA9.h>
#include <org_sireum_Some_C3173C.h>
#include <org_sireum_Some_C790DA.h>
#include <org_sireum_Some_D85467.h>
#include <org_sireum_Some_F1808D.h>
#include <org_sireum_U16.h>
#include <org_sireum_U32.h>
#include <org_sireum_U64.h>
#include <org_sireum_U8.h>
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
#include <tc_SlangTypeLibrary_SlangTypeLibrary.h>
#include <tc_TempControlMixed_FanAck_Type.h>
#include <tc_TempControlMixed_FanAck_Payload.h>
#include <tc_TempControlMixed_FanCmd_Type.h>
#include <tc_TempControlMixed_FanCmd_Payload.h>
#include <tc_TempControlMixedSeL4CAmKES_FanAck_Type.h>
#include <tc_TempControlMixedSeL4CAmKES_FanAck_Payload.h>
#include <tc_TempControlMixedSeL4CAmKES_FanCmd_Type.h>
#include <tc_TempControlMixedSeL4CAmKES_FanCmd_Payload.h>
#include <tc_TempControlMixedSeL4CAmKES_SetPoint.h>
#include <tc_TempControlMixedSeL4CAmKES_SetPoint_Payload.h>
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


#ifdef __cplusplus
}
#endif

#endif