#ifndef SIREUM_GEN_TYPE_H
#define SIREUM_GEN_TYPE_H

#ifdef __cplusplus
extern "C" {
#endif
#include <stackframe.h>

typedef enum {
  TIS_948B60 = (int) 0x948B6070, // IS[Z, String]
  TNone_A70CEE = (int) 0xA70CEE66, // None[tc.TempControlMixedSeL4CAmKES.FanAck.Type]
  TNone_ACDB63 = (int) 0xACDB63D2, // None[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]
  TNone_86BF24 = (int) 0x86BF24F2, // None[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]
  TSome_D85467 = (int) 0xD85467C1, // Some[tc.TempControlMixedSeL4CAmKES.FanAck.Type]
  TSome_2EFA7D = (int) 0x2EFA7DE1, // Some[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]
  TSome_0C4CF8 = (int) 0x0C4CF838, // Some[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]
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
  Ttc_TempControlMixedSeL4CAmKES_FanAck_Payload = (int) 0xBA4336D8, // tc.TempControlMixedSeL4CAmKES.FanAck_Payload
  Ttc_TempControlMixedSeL4CAmKES_FanCmd_Payload = (int) 0x87F19AD2, // tc.TempControlMixedSeL4CAmKES.FanCmd_Payload
  Ttc_TempControlMixedSeL4CAmKES_SetPoint = (int) 0xD6A74839, // tc.TempControlMixedSeL4CAmKES.SetPoint
  Ttc_TempControlMixedSeL4CAmKES_SetPoint_Payload = (int) 0x343EAC61, // tc.TempControlMixedSeL4CAmKES.SetPoint_Payload
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