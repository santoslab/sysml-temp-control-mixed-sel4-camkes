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
    case TNone_A70CEE: return sizeof(struct None_A70CEE); // None[tc.TempControlMixedSeL4CAmKES.FanAck.Type]
    case TNone_ACDB63: return sizeof(struct None_ACDB63); // None[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]
    case TNone_B66650: return sizeof(struct None_B66650); // None[tc.TempControlMixedSeL4CAmKES.TempSensor_Initialization_Api]
    case TNone_79FC20: return sizeof(struct None_79FC20); // None[tc.TempControlMixedSeL4CAmKES.TempSensor_Operational_Api]
    case TNone_86BF24: return sizeof(struct None_86BF24); // None[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]
    case TRandom_Gen64Impl: return sizeof(struct Random_Gen64Impl); // Random.Gen64Impl
    case TRandom_Impl_SplitMix64: return sizeof(struct Random_Impl_SplitMix64); // Random.Impl.SplitMix64
    case TRandom_Impl_Xoshiro256: return sizeof(struct Random_Impl_Xoshiro256); // Random.Impl.Xoshiro256
    case TSome_D29615: return sizeof(struct Some_D29615); // Some[art.DataContent]
    case TSome_D85467: return sizeof(struct Some_D85467); // Some[tc.TempControlMixedSeL4CAmKES.FanAck.Type]
    case TSome_2EFA7D: return sizeof(struct Some_2EFA7D); // Some[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]
    case TSome_B14D88: return sizeof(struct Some_B14D88); // Some[tc.TempControlMixedSeL4CAmKES.TempSensor_Initialization_Api]
    case TSome_FBE41D: return sizeof(struct Some_FBE41D); // Some[tc.TempControlMixedSeL4CAmKES.TempSensor_Operational_Api]
    case TSome_0C4CF8: return sizeof(struct Some_0C4CF8); // Some[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]
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
    "None[tc.TempControlMixedSeL4CAmKES.FanAck.Type]",
    "None[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]",
    "None[tc.TempControlMixedSeL4CAmKES.TempSensor_Initialization_Api]",
    "None[tc.TempControlMixedSeL4CAmKES.TempSensor_Operational_Api]",
    "None[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]",
    "Random.Gen64Impl",
    "Random.Impl.SplitMix64",
    "Random.Impl.Xoshiro256",
    "Some[art.DataContent]",
    "Some[tc.TempControlMixedSeL4CAmKES.FanAck.Type]",
    "Some[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]",
    "Some[tc.TempControlMixedSeL4CAmKES.TempSensor_Initialization_Api]",
    "Some[tc.TempControlMixedSeL4CAmKES.TempSensor_Operational_Api]",
    "Some[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]",
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
    "tc.TempControlMixedSeL4CAmKES.Temperature_Payload"
  };
  return strings[((Type) type)->type];
}