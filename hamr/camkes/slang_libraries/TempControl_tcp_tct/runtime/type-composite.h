#ifndef SIREUM_GEN_TYPE_H
#define SIREUM_GEN_TYPE_H

#ifdef __cplusplus
extern "C" {
#endif
#include <stackframe.h>

typedef enum {
  TIS_948B60 = (int) 0x948B6070, // IS[Z, String]
  TIS_D10119 = (int) 0xD101198A, // IS[Z, art.Art.PortId]
  TIS_820232 = (int) 0x82023297, // IS[Z, art.UPort]
  TMBox2_37E193 = (int) 0x37E19307, // MBox2[art.Art.PortId, Option[art.DataContent]]
  TMBox2_43CC67 = (int) 0x43CC672A, // MBox2[art.Art.PortId, art.DataContent]
  TMS_83D5EB = (int) 0x83D5EBFF, // MS[Z, Option[art.Bridge]]
  TNone_CFD2B0 = (int) 0xCFD2B0C7, // None[IS[Z, art.Art.PortId]]
  TNone_734370 = (int) 0x73437068, // None[art.Bridge]
  TNone_964667 = (int) 0x9646678F, // None[art.DataContent]
  TNone_ED72E1 = (int) 0xED72E191, // None[art.Empty]
  TNone_A70CEE = (int) 0xA70CEE66, // None[tc.TempControlMixedSeL4CAmKES.FanAck.Type]
  TNone_ACDB63 = (int) 0xACDB63D2, // None[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]
  TNone_30CA2A = (int) 0x30CA2A30, // None[tc.TempControlMixedSeL4CAmKES.SetPoint]
  TNone_BB3A66 = (int) 0xBB3A66E4, // None[tc.TempControlMixedSeL4CAmKES.TempControl_Initialization_Api]
  TNone_E88024 = (int) 0xE88024E2, // None[tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api]
  TNone_86BF24 = (int) 0x86BF24F2, // None[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]
  TNone_40E880 = (int) 0x40E88038, // None[tc.TempControlMixedSeL4CAmKES.Temperature]
  TSome_D29615 = (int) 0xD29615C0, // Some[art.DataContent]
  TSome_4782C6 = (int) 0x4782C6E2, // Some[art.Empty]
  TSome_D85467 = (int) 0xD85467C1, // Some[tc.TempControlMixedSeL4CAmKES.FanAck.Type]
  TSome_2EFA7D = (int) 0x2EFA7DE1, // Some[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]
  TSome_B391E9 = (int) 0xB391E9A7, // Some[tc.TempControlMixedSeL4CAmKES.SetPoint]
  TSome_6EABEC = (int) 0x6EABECE1, // Some[tc.TempControlMixedSeL4CAmKES.TempControl_Initialization_Api]
  TSome_BE25AD = (int) 0xBE25AD63, // Some[tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api]
  TSome_0C4CF8 = (int) 0x0C4CF838, // Some[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]
  TSome_76E303 = (int) 0x76E30378, // Some[tc.TempControlMixedSeL4CAmKES.Temperature]
  TString = (int) 0xB6F8E8F6, // String
  Tart_Bridge_Ports = (int) 0x14139493, // art.Bridge.Ports
  Tart_DispatchPropertyProtocol_Sporadic = (int) 0x48F30CFF, // art.DispatchPropertyProtocol.Sporadic
  Tart_Empty = (int) 0x49C5E24D, // art.Empty
  Tart_EventTriggered = (int) 0x5ED6B44C, // art.EventTriggered
  Tart_Port_9CBF18 = (int) 0x9CBF18B7, // art.Port[art.Empty]
  Tart_Port_AE5929 = (int) 0xAE5929CD, // art.Port[tc.TempControlMixedSeL4CAmKES.FanAck.Type]
  Tart_Port_70EB35 = (int) 0x70EB3529, // art.Port[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]
  Tart_Port_846E11 = (int) 0x846E1105, // art.Port[tc.TempControlMixedSeL4CAmKES.SetPoint]
  Tart_Port_890848 = (int) 0x8908485D, // art.Port[tc.TempControlMixedSeL4CAmKES.Temperature]
  Tops_ISZOps_3974F3 = (int) 0x3974F373, // ops.ISZOps[art.Art.PortId]
  Ttc_Base_Types_Boolean_Payload = (int) 0xE7694E24, // tc.Base_Types.Boolean_Payload
  Ttc_Base_Types_Character_Payload = (int) 0x947632D6, // tc.Base_Types.Character_Payload
  Ttc_Base_Types_Float_32_Payload = (int) 0x89E8919C, // tc.Base_Types.Float_32_Payload
  Ttc_Base_Types_Float_64_Payload = (int) 0xA8983A78, // tc.Base_Types.Float_64_Payload
  Ttc_Base_Types_Float_Payload = (int) 0xFEA25C69, // tc.Base_Types.Float_Payload
  Ttc_Base_Types_Integer_16_Payload = (int) 0x765B3783, // tc.Base_Types.Integer_16_Payload
  Ttc_Base_Types_Integer_32_Payload = (int) 0x07A1AAD8, // tc.Base_Types.Integer_32_Payload
  Ttc_Base_Types_Integer_64_Payload = (int) 0x614FF1A0, // tc.Base_Types.Integer_64_Payload
  Ttc_Base_Types_Integer_8_Payload = (int) 0xDE67CE87, // tc.Base_Types.Integer_8_Payload
  Ttc_Base_Types_Integer_Payload = (int) 0x78301DC4, // tc.Base_Types.Integer_Payload
  Ttc_Base_Types_String_Payload = (int) 0xA1FE2DD6, // tc.Base_Types.String_Payload
  Ttc_Base_Types_Unsigned_16_Payload = (int) 0x29EE52C6, // tc.Base_Types.Unsigned_16_Payload
  Ttc_Base_Types_Unsigned_32_Payload = (int) 0x69DB9DF5, // tc.Base_Types.Unsigned_32_Payload
  Ttc_Base_Types_Unsigned_64_Payload = (int) 0x0DA9CE5D, // tc.Base_Types.Unsigned_64_Payload
  Ttc_Base_Types_Unsigned_8_Payload = (int) 0xC961CB4C, // tc.Base_Types.Unsigned_8_Payload
  Ttc_TempControlMixedSeL4CAmKES_FanAck_Payload = (int) 0xBA4336D8, // tc.TempControlMixedSeL4CAmKES.FanAck_Payload
  Ttc_TempControlMixedSeL4CAmKES_FanCmd_Payload = (int) 0x87F19AD2, // tc.TempControlMixedSeL4CAmKES.FanCmd_Payload
  Ttc_TempControlMixedSeL4CAmKES_SetPoint = (int) 0xD6A74839, // tc.TempControlMixedSeL4CAmKES.SetPoint
  Ttc_TempControlMixedSeL4CAmKES_SetPoint_Payload = (int) 0x343EAC61, // tc.TempControlMixedSeL4CAmKES.SetPoint_Payload
  Ttc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api = (int) 0x06F6E659, // tc.TempControlMixedSeL4CAmKES.TempControl_Initialization_Api
  Ttc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api = (int) 0x5A621B76, // tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api
  Ttc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge = (int) 0x689E7606, // tc.TempControlMixedSeL4CAmKES.TempControl_tcp_tct_Bridge
  Ttc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_EntryPoints = (int) 0x169CCD45, // tc.TempControlMixedSeL4CAmKES.TempControl_tcp_tct_Bridge.EntryPoints
  Ttc_TempControlMixedSeL4CAmKES_TempUnit_Payload = (int) 0x190251AA, // tc.TempControlMixedSeL4CAmKES.TempUnit_Payload
  Ttc_TempControlMixedSeL4CAmKES_Temperature = (int) 0x3E5CBDF2, // tc.TempControlMixedSeL4CAmKES.Temperature
  Ttc_TempControlMixedSeL4CAmKES_Temperature_Payload = (int) 0x7900EBE2, // tc.TempControlMixedSeL4CAmKES.Temperature_Payload
} TYPE;

char *TYPE_string_(void *type);

typedef struct Type *Type;
struct Type {
  TYPE type;
};

#define MaxString 256

typedef struct String *String;
struct String {
  TYPE type;
  Z size;
  C value[];
};

struct StaticString {
  TYPE type;
  Z size;
  C value[MaxString + 1];
};

#define string(v) ((String) &((struct { TYPE type; Z size; C value[sizeof(v)]; }) { TString, Z_C(sizeof (v) - 1), v }))
#define DeclNewString(x) struct StaticString x = { .type = TString }

#ifdef __cplusplus
}
#endif

#endif