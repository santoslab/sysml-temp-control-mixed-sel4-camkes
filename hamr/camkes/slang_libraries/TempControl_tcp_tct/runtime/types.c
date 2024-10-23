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
    case TNone_ED72E1: return sizeof(struct None_ED72E1); // None[art.Empty]
    case TNone_A70CEE: return sizeof(struct None_A70CEE); // None[tc.TempControlMixedSeL4CAmKES.FanAck.Type]
    case TNone_ACDB63: return sizeof(struct None_ACDB63); // None[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]
    case TNone_30CA2A: return sizeof(struct None_30CA2A); // None[tc.TempControlMixedSeL4CAmKES.SetPoint]
    case TNone_BB3A66: return sizeof(struct None_BB3A66); // None[tc.TempControlMixedSeL4CAmKES.TempControl_Initialization_Api]
    case TNone_E88024: return sizeof(struct None_E88024); // None[tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api]
    case TNone_86BF24: return sizeof(struct None_86BF24); // None[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]
    case TNone_40E880: return sizeof(struct None_40E880); // None[tc.TempControlMixedSeL4CAmKES.Temperature]
    case TSome_D29615: return sizeof(struct Some_D29615); // Some[art.DataContent]
    case TSome_4782C6: return sizeof(struct Some_4782C6); // Some[art.Empty]
    case TSome_D85467: return sizeof(struct Some_D85467); // Some[tc.TempControlMixedSeL4CAmKES.FanAck.Type]
    case TSome_2EFA7D: return sizeof(struct Some_2EFA7D); // Some[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]
    case TSome_B391E9: return sizeof(struct Some_B391E9); // Some[tc.TempControlMixedSeL4CAmKES.SetPoint]
    case TSome_6EABEC: return sizeof(struct Some_6EABEC); // Some[tc.TempControlMixedSeL4CAmKES.TempControl_Initialization_Api]
    case TSome_BE25AD: return sizeof(struct Some_BE25AD); // Some[tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api]
    case TSome_0C4CF8: return sizeof(struct Some_0C4CF8); // Some[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]
    case TSome_76E303: return sizeof(struct Some_76E303); // Some[tc.TempControlMixedSeL4CAmKES.Temperature]
    case TString: return sizeof(struct String); // String
    case Tart_Bridge_Ports: return sizeof(struct art_Bridge_Ports); // art.Bridge.Ports
    case Tart_DispatchPropertyProtocol_Sporadic: return sizeof(struct art_DispatchPropertyProtocol_Sporadic); // art.DispatchPropertyProtocol.Sporadic
    case Tart_Empty: return sizeof(struct art_Empty); // art.Empty
    case Tart_EventTriggered: return sizeof(struct art_EventTriggered); // art.EventTriggered
    case Tart_Port_9CBF18: return sizeof(struct art_Port_9CBF18); // art.Port[art.Empty]
    case Tart_Port_AE5929: return sizeof(struct art_Port_AE5929); // art.Port[tc.TempControlMixedSeL4CAmKES.FanAck.Type]
    case Tart_Port_70EB35: return sizeof(struct art_Port_70EB35); // art.Port[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]
    case Tart_Port_846E11: return sizeof(struct art_Port_846E11); // art.Port[tc.TempControlMixedSeL4CAmKES.SetPoint]
    case Tart_Port_890848: return sizeof(struct art_Port_890848); // art.Port[tc.TempControlMixedSeL4CAmKES.Temperature]
    case Tops_ISZOps_3974F3: return sizeof(struct ops_ISZOps_3974F3); // ops.ISZOps[art.Art.PortId]
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
    case Ttc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api: return sizeof(struct tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api); // tc.TempControlMixedSeL4CAmKES.TempControl_Initialization_Api
    case Ttc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api: return sizeof(struct tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api); // tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api
    case Ttc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge: return sizeof(struct tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge); // tc.TempControlMixedSeL4CAmKES.TempControl_tcp_tct_Bridge
    case Ttc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_EntryPoints: return sizeof(struct tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_EntryPoints); // tc.TempControlMixedSeL4CAmKES.TempControl_tcp_tct_Bridge.EntryPoints
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
    "None[art.Empty]",
    "None[tc.TempControlMixedSeL4CAmKES.FanAck.Type]",
    "None[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]",
    "None[tc.TempControlMixedSeL4CAmKES.SetPoint]",
    "None[tc.TempControlMixedSeL4CAmKES.TempControl_Initialization_Api]",
    "None[tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api]",
    "None[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]",
    "None[tc.TempControlMixedSeL4CAmKES.Temperature]",
    "Some[art.DataContent]",
    "Some[art.Empty]",
    "Some[tc.TempControlMixedSeL4CAmKES.FanAck.Type]",
    "Some[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]",
    "Some[tc.TempControlMixedSeL4CAmKES.SetPoint]",
    "Some[tc.TempControlMixedSeL4CAmKES.TempControl_Initialization_Api]",
    "Some[tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api]",
    "Some[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]",
    "Some[tc.TempControlMixedSeL4CAmKES.Temperature]",
    "String",
    "art.Bridge.Ports",
    "art.DispatchPropertyProtocol.Sporadic",
    "art.Empty",
    "art.EventTriggered",
    "art.Port[art.Empty]",
    "art.Port[tc.TempControlMixedSeL4CAmKES.FanAck.Type]",
    "art.Port[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]",
    "art.Port[tc.TempControlMixedSeL4CAmKES.SetPoint]",
    "art.Port[tc.TempControlMixedSeL4CAmKES.Temperature]",
    "ops.ISZOps[art.Art.PortId]",
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
    "tc.TempControlMixedSeL4CAmKES.TempControl_Initialization_Api",
    "tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api",
    "tc.TempControlMixedSeL4CAmKES.TempControl_tcp_tct_Bridge",
    "tc.TempControlMixedSeL4CAmKES.TempControl_tcp_tct_Bridge.EntryPoints",
    "tc.TempControlMixedSeL4CAmKES.TempUnit_Payload",
    "tc.TempControlMixedSeL4CAmKES.Temperature",
    "tc.TempControlMixedSeL4CAmKES.Temperature_Payload"
  };
  return strings[((Type) type)->type];
}