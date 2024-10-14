// #Sireum

package slang

import org.sireum._
import org.sireum.Random.Gen64

/*
GENERATED FROM

Temperature.scala

SetPoint.scala

TempUnit.scala

FanCmd.scala

FanAck.scala

Temperature.scala

SetPoint.scala

TempUnit.scala

FanCmd.scala

FanAck.scala

Heat.scala

Interface_Interaction.scala

Air_Interaction.scala

Temperature.scala

SetPoint.scala

TempUnit.scala

FanCmd.scala

FanAck.scala

PhysicalTemp.scala

TempWstatus.scala

Temp.scala

On_Off.scala

Failure_Flag.scala

ValueStatus.scala

Status.scala

Regulator_Mode.scala

Monitor_Mode.scala

Base_Types.scala

GUMBO__Library.scala

GUMBO__Library.scala

GUMBO__Library.scala

GUMBO__Library.scala

TempSensor_tsp_ts_Containers.scala

TempControl_tcp_tc_Containers.scala

Fan_fp_f_Containers.scala

ObservationKind.scala

Container.scala

DataContent.scala

Aux_Types.scala

*/

@enum object _artDataContent_DataTypeId {
   "_artEmpty_Id"
   "Base_TypesBits_Payload_Id"
   "Base_TypesBoolean_Payload_Id"
   "Base_TypesCharacter_Payload_Id"
   "Base_TypesFloat_32_Payload_Id"
   "Base_TypesFloat_64_Payload_Id"
   "Base_TypesFloat_Payload_Id"
   "Base_TypesInteger_16_Payload_Id"
   "Base_TypesInteger_32_Payload_Id"
   "Base_TypesInteger_64_Payload_Id"
   "Base_TypesInteger_8_Payload_Id"
   "Base_TypesInteger_Payload_Id"
   "Base_TypesString_Payload_Id"
   "Base_TypesUnsigned_16_Payload_Id"
   "Base_TypesUnsigned_32_Payload_Id"
   "Base_TypesUnsigned_64_Payload_Id"
   "Base_TypesUnsigned_8_Payload_Id"
   "Isolette_Data_ModelFailure_Flag_Payload_Id"
   "Isolette_Data_ModelMonitor_Mode_Payload_Id"
   "Isolette_Data_ModelOn_Off_Payload_Id"
   "Isolette_Data_ModelPhysicalTemp_Payload_Id"
   "Isolette_Data_ModelRegulator_Mode_Payload_Id"
   "Isolette_Data_ModelStatus_Payload_Id"
   "Isolette_Data_ModelTempWstatus_Payload_Id"
   "Isolette_Data_ModelTemp_Payload_Id"
   "Isolette_Data_ModelValueStatus_Payload_Id"
   "Isolette_EnvironmentAir_Interaction_Payload_Id"
   "Isolette_EnvironmentHeat_Payload_Id"
   "Isolette_EnvironmentInterface_Interaction_Payload_Id"
   "TempControlMixedFanAck_Payload_Id"
   "TempControlMixedFanCmd_Payload_Id"
   "TempControlMixedSetPoint_Payload_Id"
   "TempControlMixedTempUnit_Payload_Id"
   "TempControlMixedTemperature_Payload_Id"
   "TempControlMixedSeL4CAmKESFanAck_Payload_Id"
   "TempControlMixedSeL4CAmKESFanCmd_Payload_Id"
   "TempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P_Id"
   "TempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS_Id"
   "TempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P_Id"
   "TempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS_Id"
   "TempControlMixedSeL4CAmKESSetPoint_Payload_Id"
   "TempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P_Id"
   "TempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS_Id"
   "TempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P_Id"
   "TempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS_Id"
   "TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P_Id"
   "TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS_Id"
   "TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P_Id"
   "TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS_Id"
   "TempControlMixedSeL4CAmKESTempUnit_Payload_Id"
   "TempControlMixedSeL4CAmKESTemperature_Payload_Id"
   "TempControlPeriodicFanAck_Payload_Id"
   "TempControlPeriodicFanCmd_Payload_Id"
   "TempControlPeriodicSetPoint_Payload_Id"
   "TempControlPeriodicTempUnit_Payload_Id"
   "TempControlPeriodicTemperature_Payload_Id"
   "utilEmptyContainer_Id"
}

@enum object TempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_DataTypeId {
   "TempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P_Id"
   "TempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS_Id"
}

@enum object TempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_DataTypeId {
   "TempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P_Id"
   "TempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS_Id"
}

@enum object TempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_DataTypeId {
   "TempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P_Id"
   "TempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS_Id"
}

@enum object TempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_DataTypeId {
   "TempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P_Id"
   "TempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS_Id"
}

@enum object TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_DataTypeId {
   "TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P_Id"
   "TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS_Id"
}

@enum object TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_DataTypeId {
   "TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P_Id"
   "TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS_Id"
}

@enum object utilContainer_DataTypeId {
   "TempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P_Id"
   "TempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS_Id"
   "TempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P_Id"
   "TempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS_Id"
   "TempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P_Id"
   "TempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS_Id"
   "TempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P_Id"
   "TempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS_Id"
   "TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P_Id"
   "TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS_Id"
   "TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P_Id"
   "TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS_Id"
   "utilEmptyContainer_Id"
}

