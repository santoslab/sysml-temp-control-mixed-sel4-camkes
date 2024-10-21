#include <types.h>

size_t sizeOf(Type t) {
  TYPE type = t->type;
  switch (type) {
    case TIS_948B60: return sizeof(struct IS_948B60); // IS[Z, String]
    case TIS_D10119: return sizeof(struct IS_D10119); // IS[Z, art.Art.PortId]
    case TIS_820232: return sizeof(struct IS_820232); // IS[Z, art.UPort]
    case TMBox2_37E193: return sizeof(struct MBox2_37E193); // MBox2[art.Art.PortId, Option[art.DataContent]]
    case TMBox2_43CC67: return sizeof(struct MBox2_43CC67); // MBox2[art.Art.PortId, art.DataContent]
    case TMS_83D5EB: return sizeof(struct MS_83D5EB); // MS[Z, Option[art.Bridge]]
    case TNone_CFD2B0: return sizeof(struct None_CFD2B0); // None[IS[Z, art.Art.PortId]]
    case TNone_734370: return sizeof(struct None_734370); // None[art.Bridge]
    case TNone_964667: return sizeof(struct None_964667); // None[art.DataContent]
    case TNone_BE2C3F: return sizeof(struct None_BE2C3F); // None[tc.Isolette_Data_Model.Monitor_Mode.Type]
    case TNone_BE24EA: return sizeof(struct None_BE24EA); // None[tc.Isolette_Data_Model.On_Off.Type]
    case TNone_3C78E7: return sizeof(struct None_3C78E7); // None[tc.Isolette_Data_Model.Regulator_Mode.Type]
    case TNone_A45A41: return sizeof(struct None_A45A41); // None[tc.Isolette_Data_Model.Status.Type]
    case TNone_A23E58: return sizeof(struct None_A23E58); // None[tc.Isolette_Data_Model.ValueStatus.Type]
    case TNone_B4A4FA: return sizeof(struct None_B4A4FA); // None[tc.TempControlMixed.FanAck.Type]
    case TNone_1AEC2C: return sizeof(struct None_1AEC2C); // None[tc.TempControlMixed.FanCmd.Type]
    case TNone_121724: return sizeof(struct None_121724); // None[tc.TempControlMixed.TempUnit.Type]
    case TNone_A70CEE: return sizeof(struct None_A70CEE); // None[tc.TempControlMixedSeL4CAmKES.FanAck.Type]
    case TNone_ACDB63: return sizeof(struct None_ACDB63); // None[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]
    case TNone_B66650: return sizeof(struct None_B66650); // None[tc.TempControlMixedSeL4CAmKES.TempSensor_Initialization_Api]
    case TNone_79FC20: return sizeof(struct None_79FC20); // None[tc.TempControlMixedSeL4CAmKES.TempSensor_Operational_Api]
    case TNone_86BF24: return sizeof(struct None_86BF24); // None[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]
    case TNone_D4B208: return sizeof(struct None_D4B208); // None[tc.TempControlPeriodic.FanAck.Type]
    case TNone_037804: return sizeof(struct None_037804); // None[tc.TempControlPeriodic.FanCmd.Type]
    case TNone_4E7E94: return sizeof(struct None_4E7E94); // None[tc.TempControlPeriodic.TempUnit.Type]
    case TRandom_Gen64Impl: return sizeof(struct Random_Gen64Impl); // Random.Gen64Impl
    case TRandom_Impl_SplitMix64: return sizeof(struct Random_Impl_SplitMix64); // Random.Impl.SplitMix64
    case TRandom_Impl_Xoshiro256: return sizeof(struct Random_Impl_Xoshiro256); // Random.Impl.Xoshiro256
    case TSome_D29615: return sizeof(struct Some_D29615); // Some[art.DataContent]
    case TSome_455777: return sizeof(struct Some_455777); // Some[tc.Isolette_Data_Model.Monitor_Mode.Type]
    case TSome_F1808D: return sizeof(struct Some_F1808D); // Some[tc.Isolette_Data_Model.On_Off.Type]
    case TSome_C790DA: return sizeof(struct Some_C790DA); // Some[tc.Isolette_Data_Model.Regulator_Mode.Type]
    case TSome_140719: return sizeof(struct Some_140719); // Some[tc.Isolette_Data_Model.Status.Type]
    case TSome_21C1E5: return sizeof(struct Some_21C1E5); // Some[tc.Isolette_Data_Model.ValueStatus.Type]
    case TSome_270A8B: return sizeof(struct Some_270A8B); // Some[tc.TempControlMixed.FanAck.Type]
    case TSome_776961: return sizeof(struct Some_776961); // Some[tc.TempControlMixed.FanCmd.Type]
    case TSome_0E3FBA: return sizeof(struct Some_0E3FBA); // Some[tc.TempControlMixed.TempUnit.Type]
    case TSome_D85467: return sizeof(struct Some_D85467); // Some[tc.TempControlMixedSeL4CAmKES.FanAck.Type]
    case TSome_2EFA7D: return sizeof(struct Some_2EFA7D); // Some[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]
    case TSome_B14D88: return sizeof(struct Some_B14D88); // Some[tc.TempControlMixedSeL4CAmKES.TempSensor_Initialization_Api]
    case TSome_FBE41D: return sizeof(struct Some_FBE41D); // Some[tc.TempControlMixedSeL4CAmKES.TempSensor_Operational_Api]
    case TSome_0C4CF8: return sizeof(struct Some_0C4CF8); // Some[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]
    case TSome_C3173C: return sizeof(struct Some_C3173C); // Some[tc.TempControlPeriodic.FanAck.Type]
    case TSome_C0DBA9: return sizeof(struct Some_C0DBA9); // Some[tc.TempControlPeriodic.FanCmd.Type]
    case TSome_56FCC9: return sizeof(struct Some_56FCC9); // Some[tc.TempControlPeriodic.TempUnit.Type]
    case TString: return sizeof(struct String); // String
    case Tart_Bridge_Ports: return sizeof(struct art_Bridge_Ports); // art.Bridge.Ports
    case Tart_DispatchPropertyProtocol_Periodic: return sizeof(struct art_DispatchPropertyProtocol_Periodic); // art.DispatchPropertyProtocol.Periodic
    case Tart_Empty: return sizeof(struct art_Empty); // art.Empty
    case Tart_Port_9CBF18: return sizeof(struct art_Port_9CBF18); // art.Port[art.Empty]
    case Tart_Port_890848: return sizeof(struct art_Port_890848); // art.Port[tc.TempControlMixedSeL4CAmKES.Temperature]
    case Ttc_Base_Types_Boolean_Payload: return sizeof(struct tc_Base_Types_Boolean_Payload); // tc.Base_Types.Boolean_Payload
    case Ttc_Base_Types_Character_Payload: return sizeof(struct tc_Base_Types_Character_Payload); // tc.Base_Types.Character_Payload
    case Ttc_Base_Types_Float_32_Payload: return sizeof(struct tc_Base_Types_Float_32_Payload); // tc.Base_Types.Float_32_Payload
    case Ttc_Base_Types_Float_64_Payload: return sizeof(struct tc_Base_Types_Float_64_Payload); // tc.Base_Types.Float_64_Payload
    case Ttc_Base_Types_Float_Payload: return sizeof(struct tc_Base_Types_Float_Payload); // tc.Base_Types.Float_Payload
    case Ttc_Base_Types_Integer_16_Payload: return sizeof(struct tc_Base_Types_Integer_16_Payload); // tc.Base_Types.Integer_16_Payload
    case Ttc_Base_Types_Integer_32_Payload: return sizeof(struct tc_Base_Types_Integer_32_Payload); // tc.Base_Types.Integer_32_Payload
    case Ttc_Base_Types_Integer_64_Payload: return sizeof(struct tc_Base_Types_Integer_64_Payload); // tc.Base_Types.Integer_64_Payload
    case Ttc_Base_Types_Integer_8_Payload: return sizeof(struct tc_Base_Types_Integer_8_Payload); // tc.Base_Types.Integer_8_Payload
    case Ttc_Base_Types_Integer_Payload: return sizeof(struct tc_Base_Types_Integer_Payload); // tc.Base_Types.Integer_Payload
    case Ttc_Base_Types_String_Payload: return sizeof(struct tc_Base_Types_String_Payload); // tc.Base_Types.String_Payload
    case Ttc_Base_Types_Unsigned_16_Payload: return sizeof(struct tc_Base_Types_Unsigned_16_Payload); // tc.Base_Types.Unsigned_16_Payload
    case Ttc_Base_Types_Unsigned_32_Payload: return sizeof(struct tc_Base_Types_Unsigned_32_Payload); // tc.Base_Types.Unsigned_32_Payload
    case Ttc_Base_Types_Unsigned_64_Payload: return sizeof(struct tc_Base_Types_Unsigned_64_Payload); // tc.Base_Types.Unsigned_64_Payload
    case Ttc_Base_Types_Unsigned_8_Payload: return sizeof(struct tc_Base_Types_Unsigned_8_Payload); // tc.Base_Types.Unsigned_8_Payload
    case Ttc_Isolette_Data_Model_Failure_Flag: return sizeof(struct tc_Isolette_Data_Model_Failure_Flag); // tc.Isolette_Data_Model.Failure_Flag
    case Ttc_Isolette_Data_Model_Failure_Flag_Payload: return sizeof(struct tc_Isolette_Data_Model_Failure_Flag_Payload); // tc.Isolette_Data_Model.Failure_Flag_Payload
    case Ttc_Isolette_Data_Model_Monitor_Mode_Payload: return sizeof(struct tc_Isolette_Data_Model_Monitor_Mode_Payload); // tc.Isolette_Data_Model.Monitor_Mode_Payload
    case Ttc_Isolette_Data_Model_On_Off_Payload: return sizeof(struct tc_Isolette_Data_Model_On_Off_Payload); // tc.Isolette_Data_Model.On_Off_Payload
    case Ttc_Isolette_Data_Model_PhysicalTemp: return sizeof(struct tc_Isolette_Data_Model_PhysicalTemp); // tc.Isolette_Data_Model.PhysicalTemp
    case Ttc_Isolette_Data_Model_PhysicalTemp_Payload: return sizeof(struct tc_Isolette_Data_Model_PhysicalTemp_Payload); // tc.Isolette_Data_Model.PhysicalTemp_Payload
    case Ttc_Isolette_Data_Model_Regulator_Mode_Payload: return sizeof(struct tc_Isolette_Data_Model_Regulator_Mode_Payload); // tc.Isolette_Data_Model.Regulator_Mode_Payload
    case Ttc_Isolette_Data_Model_Status_Payload: return sizeof(struct tc_Isolette_Data_Model_Status_Payload); // tc.Isolette_Data_Model.Status_Payload
    case Ttc_Isolette_Data_Model_Temp: return sizeof(struct tc_Isolette_Data_Model_Temp); // tc.Isolette_Data_Model.Temp
    case Ttc_Isolette_Data_Model_TempWstatus: return sizeof(struct tc_Isolette_Data_Model_TempWstatus); // tc.Isolette_Data_Model.TempWstatus
    case Ttc_Isolette_Data_Model_TempWstatus_Payload: return sizeof(struct tc_Isolette_Data_Model_TempWstatus_Payload); // tc.Isolette_Data_Model.TempWstatus_Payload
    case Ttc_Isolette_Data_Model_Temp_Payload: return sizeof(struct tc_Isolette_Data_Model_Temp_Payload); // tc.Isolette_Data_Model.Temp_Payload
    case Ttc_Isolette_Data_Model_ValueStatus_Payload: return sizeof(struct tc_Isolette_Data_Model_ValueStatus_Payload); // tc.Isolette_Data_Model.ValueStatus_Payload
    case Ttc_Isolette_Environment_Air_Interaction: return sizeof(struct tc_Isolette_Environment_Air_Interaction); // tc.Isolette_Environment.Air_Interaction
    case Ttc_Isolette_Environment_Air_Interaction_Payload: return sizeof(struct tc_Isolette_Environment_Air_Interaction_Payload); // tc.Isolette_Environment.Air_Interaction_Payload
    case Ttc_Isolette_Environment_Heat: return sizeof(struct tc_Isolette_Environment_Heat); // tc.Isolette_Environment.Heat
    case Ttc_Isolette_Environment_Heat_Payload: return sizeof(struct tc_Isolette_Environment_Heat_Payload); // tc.Isolette_Environment.Heat_Payload
    case Ttc_Isolette_Environment_Interface_Interaction: return sizeof(struct tc_Isolette_Environment_Interface_Interaction); // tc.Isolette_Environment.Interface_Interaction
    case Ttc_Isolette_Environment_Interface_Interaction_Payload: return sizeof(struct tc_Isolette_Environment_Interface_Interaction_Payload); // tc.Isolette_Environment.Interface_Interaction_Payload
    case Ttc_TempControlMixed_FanAck_Payload: return sizeof(struct tc_TempControlMixed_FanAck_Payload); // tc.TempControlMixed.FanAck_Payload
    case Ttc_TempControlMixed_FanCmd_Payload: return sizeof(struct tc_TempControlMixed_FanCmd_Payload); // tc.TempControlMixed.FanCmd_Payload
    case Ttc_TempControlMixed_SetPoint: return sizeof(struct tc_TempControlMixed_SetPoint); // tc.TempControlMixed.SetPoint
    case Ttc_TempControlMixed_SetPoint_Payload: return sizeof(struct tc_TempControlMixed_SetPoint_Payload); // tc.TempControlMixed.SetPoint_Payload
    case Ttc_TempControlMixed_TempUnit_Payload: return sizeof(struct tc_TempControlMixed_TempUnit_Payload); // tc.TempControlMixed.TempUnit_Payload
    case Ttc_TempControlMixed_Temperature: return sizeof(struct tc_TempControlMixed_Temperature); // tc.TempControlMixed.Temperature
    case Ttc_TempControlMixed_Temperature_Payload: return sizeof(struct tc_TempControlMixed_Temperature_Payload); // tc.TempControlMixed.Temperature_Payload
    case Ttc_TempControlMixedSeL4CAmKES_FanAck_Payload: return sizeof(struct tc_TempControlMixedSeL4CAmKES_FanAck_Payload); // tc.TempControlMixedSeL4CAmKES.FanAck_Payload
    case Ttc_TempControlMixedSeL4CAmKES_FanCmd_Payload: return sizeof(struct tc_TempControlMixedSeL4CAmKES_FanCmd_Payload); // tc.TempControlMixedSeL4CAmKES.FanCmd_Payload
    case Ttc_TempControlMixedSeL4CAmKES_SetPoint: return sizeof(struct tc_TempControlMixedSeL4CAmKES_SetPoint); // tc.TempControlMixedSeL4CAmKES.SetPoint
    case Ttc_TempControlMixedSeL4CAmKES_SetPoint_Payload: return sizeof(struct tc_TempControlMixedSeL4CAmKES_SetPoint_Payload); // tc.TempControlMixedSeL4CAmKES.SetPoint_Payload
    case Ttc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api: return sizeof(struct tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api); // tc.TempControlMixedSeL4CAmKES.TempSensor_Initialization_Api
    case Ttc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api: return sizeof(struct tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api); // tc.TempControlMixedSeL4CAmKES.TempSensor_Operational_Api
    case Ttc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge: return sizeof(struct tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge); // tc.TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_Bridge
    case Ttc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints: return sizeof(struct tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints); // tc.TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_Bridge.EntryPoints
    case Ttc_TempControlMixedSeL4CAmKES_TempUnit_Payload: return sizeof(struct tc_TempControlMixedSeL4CAmKES_TempUnit_Payload); // tc.TempControlMixedSeL4CAmKES.TempUnit_Payload
    case Ttc_TempControlMixedSeL4CAmKES_Temperature: return sizeof(struct tc_TempControlMixedSeL4CAmKES_Temperature); // tc.TempControlMixedSeL4CAmKES.Temperature
    case Ttc_TempControlMixedSeL4CAmKES_Temperature_Payload: return sizeof(struct tc_TempControlMixedSeL4CAmKES_Temperature_Payload); // tc.TempControlMixedSeL4CAmKES.Temperature_Payload
    case Ttc_TempControlPeriodic_FanAck_Payload: return sizeof(struct tc_TempControlPeriodic_FanAck_Payload); // tc.TempControlPeriodic.FanAck_Payload
    case Ttc_TempControlPeriodic_FanCmd_Payload: return sizeof(struct tc_TempControlPeriodic_FanCmd_Payload); // tc.TempControlPeriodic.FanCmd_Payload
    case Ttc_TempControlPeriodic_SetPoint: return sizeof(struct tc_TempControlPeriodic_SetPoint); // tc.TempControlPeriodic.SetPoint
    case Ttc_TempControlPeriodic_SetPoint_Payload: return sizeof(struct tc_TempControlPeriodic_SetPoint_Payload); // tc.TempControlPeriodic.SetPoint_Payload
    case Ttc_TempControlPeriodic_TempUnit_Payload: return sizeof(struct tc_TempControlPeriodic_TempUnit_Payload); // tc.TempControlPeriodic.TempUnit_Payload
    case Ttc_TempControlPeriodic_Temperature: return sizeof(struct tc_TempControlPeriodic_Temperature); // tc.TempControlPeriodic.Temperature
    case Ttc_TempControlPeriodic_Temperature_Payload: return sizeof(struct tc_TempControlPeriodic_Temperature_Payload); // tc.TempControlPeriodic.Temperature_Payload
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

void Type_assign(void *dest, void *src, size_t destSize) {
  Type srcType = (Type) src;
  if (srcType->type == TString) {
    String_assign((String) dest, (String) src);
    return;
  }
  size_t srcSize = sizeOf(srcType);
  memcpy(dest, src, srcSize);
  memset(((char *) dest) + srcSize, 0, destSize - srcSize);
}

char *TYPE_string_(void *type) {
  static char *strings[] = {
    "IS[Z, String]",
    "IS[Z, art.Art.PortId]",
    "IS[Z, art.UPort]",
    "MBox2[art.Art.PortId, Option[art.DataContent]]",
    "MBox2[art.Art.PortId, art.DataContent]",
    "MS[Z, Option[art.Bridge]]",
    "None[IS[Z, art.Art.PortId]]",
    "None[art.Bridge]",
    "None[art.DataContent]",
    "None[tc.Isolette_Data_Model.Monitor_Mode.Type]",
    "None[tc.Isolette_Data_Model.On_Off.Type]",
    "None[tc.Isolette_Data_Model.Regulator_Mode.Type]",
    "None[tc.Isolette_Data_Model.Status.Type]",
    "None[tc.Isolette_Data_Model.ValueStatus.Type]",
    "None[tc.TempControlMixed.FanAck.Type]",
    "None[tc.TempControlMixed.FanCmd.Type]",
    "None[tc.TempControlMixed.TempUnit.Type]",
    "None[tc.TempControlMixedSeL4CAmKES.FanAck.Type]",
    "None[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]",
    "None[tc.TempControlMixedSeL4CAmKES.TempSensor_Initialization_Api]",
    "None[tc.TempControlMixedSeL4CAmKES.TempSensor_Operational_Api]",
    "None[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]",
    "None[tc.TempControlPeriodic.FanAck.Type]",
    "None[tc.TempControlPeriodic.FanCmd.Type]",
    "None[tc.TempControlPeriodic.TempUnit.Type]",
    "Random.Gen64Impl",
    "Random.Impl.SplitMix64",
    "Random.Impl.Xoshiro256",
    "Some[art.DataContent]",
    "Some[tc.Isolette_Data_Model.Monitor_Mode.Type]",
    "Some[tc.Isolette_Data_Model.On_Off.Type]",
    "Some[tc.Isolette_Data_Model.Regulator_Mode.Type]",
    "Some[tc.Isolette_Data_Model.Status.Type]",
    "Some[tc.Isolette_Data_Model.ValueStatus.Type]",
    "Some[tc.TempControlMixed.FanAck.Type]",
    "Some[tc.TempControlMixed.FanCmd.Type]",
    "Some[tc.TempControlMixed.TempUnit.Type]",
    "Some[tc.TempControlMixedSeL4CAmKES.FanAck.Type]",
    "Some[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]",
    "Some[tc.TempControlMixedSeL4CAmKES.TempSensor_Initialization_Api]",
    "Some[tc.TempControlMixedSeL4CAmKES.TempSensor_Operational_Api]",
    "Some[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]",
    "Some[tc.TempControlPeriodic.FanAck.Type]",
    "Some[tc.TempControlPeriodic.FanCmd.Type]",
    "Some[tc.TempControlPeriodic.TempUnit.Type]",
    "String",
    "art.Bridge.Ports",
    "art.DispatchPropertyProtocol.Periodic",
    "art.Empty",
    "art.Port[art.Empty]",
    "art.Port[tc.TempControlMixedSeL4CAmKES.Temperature]",
    "tc.Base_Types.Boolean_Payload",
    "tc.Base_Types.Character_Payload",
    "tc.Base_Types.Float_32_Payload",
    "tc.Base_Types.Float_64_Payload",
    "tc.Base_Types.Float_Payload",
    "tc.Base_Types.Integer_16_Payload",
    "tc.Base_Types.Integer_32_Payload",
    "tc.Base_Types.Integer_64_Payload",
    "tc.Base_Types.Integer_8_Payload",
    "tc.Base_Types.Integer_Payload",
    "tc.Base_Types.String_Payload",
    "tc.Base_Types.Unsigned_16_Payload",
    "tc.Base_Types.Unsigned_32_Payload",
    "tc.Base_Types.Unsigned_64_Payload",
    "tc.Base_Types.Unsigned_8_Payload",
    "tc.Isolette_Data_Model.Failure_Flag",
    "tc.Isolette_Data_Model.Failure_Flag_Payload",
    "tc.Isolette_Data_Model.Monitor_Mode_Payload",
    "tc.Isolette_Data_Model.On_Off_Payload",
    "tc.Isolette_Data_Model.PhysicalTemp",
    "tc.Isolette_Data_Model.PhysicalTemp_Payload",
    "tc.Isolette_Data_Model.Regulator_Mode_Payload",
    "tc.Isolette_Data_Model.Status_Payload",
    "tc.Isolette_Data_Model.Temp",
    "tc.Isolette_Data_Model.TempWstatus",
    "tc.Isolette_Data_Model.TempWstatus_Payload",
    "tc.Isolette_Data_Model.Temp_Payload",
    "tc.Isolette_Data_Model.ValueStatus_Payload",
    "tc.Isolette_Environment.Air_Interaction",
    "tc.Isolette_Environment.Air_Interaction_Payload",
    "tc.Isolette_Environment.Heat",
    "tc.Isolette_Environment.Heat_Payload",
    "tc.Isolette_Environment.Interface_Interaction",
    "tc.Isolette_Environment.Interface_Interaction_Payload",
    "tc.TempControlMixed.FanAck_Payload",
    "tc.TempControlMixed.FanCmd_Payload",
    "tc.TempControlMixed.SetPoint",
    "tc.TempControlMixed.SetPoint_Payload",
    "tc.TempControlMixed.TempUnit_Payload",
    "tc.TempControlMixed.Temperature",
    "tc.TempControlMixed.Temperature_Payload",
    "tc.TempControlMixedSeL4CAmKES.FanAck_Payload",
    "tc.TempControlMixedSeL4CAmKES.FanCmd_Payload",
    "tc.TempControlMixedSeL4CAmKES.SetPoint",
    "tc.TempControlMixedSeL4CAmKES.SetPoint_Payload",
    "tc.TempControlMixedSeL4CAmKES.TempSensor_Initialization_Api",
    "tc.TempControlMixedSeL4CAmKES.TempSensor_Operational_Api",
    "tc.TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_Bridge",
    "tc.TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_Bridge.EntryPoints",
    "tc.TempControlMixedSeL4CAmKES.TempUnit_Payload",
    "tc.TempControlMixedSeL4CAmKES.Temperature",
    "tc.TempControlMixedSeL4CAmKES.Temperature_Payload",
    "tc.TempControlPeriodic.FanAck_Payload",
    "tc.TempControlPeriodic.FanCmd_Payload",
    "tc.TempControlPeriodic.SetPoint",
    "tc.TempControlPeriodic.SetPoint_Payload",
    "tc.TempControlPeriodic.TempUnit_Payload",
    "tc.TempControlPeriodic.Temperature",
    "tc.TempControlPeriodic.Temperature_Payload"
  };
  return strings[((Type) type)->type];
}