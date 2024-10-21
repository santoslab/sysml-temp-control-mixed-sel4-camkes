#ifndef SIREUM_GEN_TYPE_H
#define SIREUM_GEN_TYPE_H

#ifdef __cplusplus
extern "C" {
#endif
#include <stackframe.h>

typedef enum {
  TIS_948B60 = (int) 0x948B6070, // IS[Z, String]
  TNone_BE2C3F = (int) 0xBE2C3FF0, // None[tc.Isolette_Data_Model.Monitor_Mode.Type]
  TNone_BE24EA = (int) 0xBE24EAC6, // None[tc.Isolette_Data_Model.On_Off.Type]
  TNone_3C78E7 = (int) 0x3C78E7CC, // None[tc.Isolette_Data_Model.Regulator_Mode.Type]
  TNone_A45A41 = (int) 0xA45A41C4, // None[tc.Isolette_Data_Model.Status.Type]
  TNone_A23E58 = (int) 0xA23E5891, // None[tc.Isolette_Data_Model.ValueStatus.Type]
  TNone_B4A4FA = (int) 0xB4A4FA59, // None[tc.TempControlMixed.FanAck.Type]
  TNone_1AEC2C = (int) 0x1AEC2CF8, // None[tc.TempControlMixed.FanCmd.Type]
  TNone_121724 = (int) 0x12172437, // None[tc.TempControlMixed.TempUnit.Type]
  TNone_A70CEE = (int) 0xA70CEE66, // None[tc.TempControlMixedSeL4CAmKES.FanAck.Type]
  TNone_ACDB63 = (int) 0xACDB63D2, // None[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]
  TNone_86BF24 = (int) 0x86BF24F2, // None[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]
  TNone_D4B208 = (int) 0xD4B208BE, // None[tc.TempControlPeriodic.FanAck.Type]
  TNone_037804 = (int) 0x03780418, // None[tc.TempControlPeriodic.FanCmd.Type]
  TNone_4E7E94 = (int) 0x4E7E9470, // None[tc.TempControlPeriodic.TempUnit.Type]
  TSome_455777 = (int) 0x455777D8, // Some[tc.Isolette_Data_Model.Monitor_Mode.Type]
  TSome_F1808D = (int) 0xF1808D85, // Some[tc.Isolette_Data_Model.On_Off.Type]
  TSome_C790DA = (int) 0xC790DA47, // Some[tc.Isolette_Data_Model.Regulator_Mode.Type]
  TSome_140719 = (int) 0x140719CA, // Some[tc.Isolette_Data_Model.Status.Type]
  TSome_21C1E5 = (int) 0x21C1E5AA, // Some[tc.Isolette_Data_Model.ValueStatus.Type]
  TSome_270A8B = (int) 0x270A8B2D, // Some[tc.TempControlMixed.FanAck.Type]
  TSome_776961 = (int) 0x77696153, // Some[tc.TempControlMixed.FanCmd.Type]
  TSome_0E3FBA = (int) 0x0E3FBA15, // Some[tc.TempControlMixed.TempUnit.Type]
  TSome_D85467 = (int) 0xD85467C1, // Some[tc.TempControlMixedSeL4CAmKES.FanAck.Type]
  TSome_2EFA7D = (int) 0x2EFA7DE1, // Some[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]
  TSome_0C4CF8 = (int) 0x0C4CF838, // Some[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]
  TSome_C3173C = (int) 0xC3173C2F, // Some[tc.TempControlPeriodic.FanAck.Type]
  TSome_C0DBA9 = (int) 0xC0DBA940, // Some[tc.TempControlPeriodic.FanCmd.Type]
  TSome_56FCC9 = (int) 0x56FCC929, // Some[tc.TempControlPeriodic.TempUnit.Type]
  TString = (int) 0xB6F8E8F6, // String
  Tart_Empty = (int) 0x49C5E24D, // art.Empty
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
  Ttc_Isolette_Data_Model_Failure_Flag = (int) 0xF5207544, // tc.Isolette_Data_Model.Failure_Flag
  Ttc_Isolette_Data_Model_Failure_Flag_Payload = (int) 0x39ECA48D, // tc.Isolette_Data_Model.Failure_Flag_Payload
  Ttc_Isolette_Data_Model_Monitor_Mode_Payload = (int) 0x859923B1, // tc.Isolette_Data_Model.Monitor_Mode_Payload
  Ttc_Isolette_Data_Model_On_Off_Payload = (int) 0xDC0B4844, // tc.Isolette_Data_Model.On_Off_Payload
  Ttc_Isolette_Data_Model_PhysicalTemp = (int) 0x94C1B1E6, // tc.Isolette_Data_Model.PhysicalTemp
  Ttc_Isolette_Data_Model_PhysicalTemp_Payload = (int) 0x7FF76891, // tc.Isolette_Data_Model.PhysicalTemp_Payload
  Ttc_Isolette_Data_Model_Regulator_Mode_Payload = (int) 0x9783F0EB, // tc.Isolette_Data_Model.Regulator_Mode_Payload
  Ttc_Isolette_Data_Model_Status_Payload = (int) 0x17D88E66, // tc.Isolette_Data_Model.Status_Payload
  Ttc_Isolette_Data_Model_Temp = (int) 0x0343E985, // tc.Isolette_Data_Model.Temp
  Ttc_Isolette_Data_Model_TempWstatus = (int) 0x03CAC914, // tc.Isolette_Data_Model.TempWstatus
  Ttc_Isolette_Data_Model_TempWstatus_Payload = (int) 0xC530A752, // tc.Isolette_Data_Model.TempWstatus_Payload
  Ttc_Isolette_Data_Model_Temp_Payload = (int) 0xD138B359, // tc.Isolette_Data_Model.Temp_Payload
  Ttc_Isolette_Data_Model_ValueStatus_Payload = (int) 0xA8D22364, // tc.Isolette_Data_Model.ValueStatus_Payload
  Ttc_Isolette_Environment_Air_Interaction = (int) 0x1D7536E4, // tc.Isolette_Environment.Air_Interaction
  Ttc_Isolette_Environment_Air_Interaction_Payload = (int) 0x5078A416, // tc.Isolette_Environment.Air_Interaction_Payload
  Ttc_Isolette_Environment_Heat = (int) 0x3956564E, // tc.Isolette_Environment.Heat
  Ttc_Isolette_Environment_Heat_Payload = (int) 0xECCE5BFF, // tc.Isolette_Environment.Heat_Payload
  Ttc_Isolette_Environment_Interface_Interaction = (int) 0xDBD57702, // tc.Isolette_Environment.Interface_Interaction
  Ttc_Isolette_Environment_Interface_Interaction_Payload = (int) 0x3F7FA749, // tc.Isolette_Environment.Interface_Interaction_Payload
  Ttc_TempControlMixed_FanAck_Payload = (int) 0xB2620D72, // tc.TempControlMixed.FanAck_Payload
  Ttc_TempControlMixed_FanCmd_Payload = (int) 0x738138D1, // tc.TempControlMixed.FanCmd_Payload
  Ttc_TempControlMixed_SetPoint = (int) 0x6C4AEDE9, // tc.TempControlMixed.SetPoint
  Ttc_TempControlMixed_SetPoint_Payload = (int) 0x4FB2F692, // tc.TempControlMixed.SetPoint_Payload
  Ttc_TempControlMixed_TempUnit_Payload = (int) 0x33CC688B, // tc.TempControlMixed.TempUnit_Payload
  Ttc_TempControlMixed_Temperature = (int) 0xE7049065, // tc.TempControlMixed.Temperature
  Ttc_TempControlMixed_Temperature_Payload = (int) 0xF28FE7DB, // tc.TempControlMixed.Temperature_Payload
  Ttc_TempControlMixedSeL4CAmKES_FanAck_Payload = (int) 0xBA4336D8, // tc.TempControlMixedSeL4CAmKES.FanAck_Payload
  Ttc_TempControlMixedSeL4CAmKES_FanCmd_Payload = (int) 0x87F19AD2, // tc.TempControlMixedSeL4CAmKES.FanCmd_Payload
  Ttc_TempControlMixedSeL4CAmKES_SetPoint = (int) 0xD6A74839, // tc.TempControlMixedSeL4CAmKES.SetPoint
  Ttc_TempControlMixedSeL4CAmKES_SetPoint_Payload = (int) 0x343EAC61, // tc.TempControlMixedSeL4CAmKES.SetPoint_Payload
  Ttc_TempControlMixedSeL4CAmKES_TempUnit_Payload = (int) 0x190251AA, // tc.TempControlMixedSeL4CAmKES.TempUnit_Payload
  Ttc_TempControlMixedSeL4CAmKES_Temperature = (int) 0x3E5CBDF2, // tc.TempControlMixedSeL4CAmKES.Temperature
  Ttc_TempControlMixedSeL4CAmKES_Temperature_Payload = (int) 0x7900EBE2, // tc.TempControlMixedSeL4CAmKES.Temperature_Payload
  Ttc_TempControlPeriodic_FanAck_Payload = (int) 0xF4178C70, // tc.TempControlPeriodic.FanAck_Payload
  Ttc_TempControlPeriodic_FanCmd_Payload = (int) 0x5D0EA527, // tc.TempControlPeriodic.FanCmd_Payload
  Ttc_TempControlPeriodic_SetPoint = (int) 0x9DE038F7, // tc.TempControlPeriodic.SetPoint
  Ttc_TempControlPeriodic_SetPoint_Payload = (int) 0xE8EAC218, // tc.TempControlPeriodic.SetPoint_Payload
  Ttc_TempControlPeriodic_TempUnit_Payload = (int) 0xC044DC09, // tc.TempControlPeriodic.TempUnit_Payload
  Ttc_TempControlPeriodic_Temperature = (int) 0xF73D160E, // tc.TempControlPeriodic.Temperature
  Ttc_TempControlPeriodic_Temperature_Payload = (int) 0x55F91A92, // tc.TempControlPeriodic.Temperature_Payload
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