#include <types.h>

size_t sizeOf(Type t) {
  TYPE type = t->type;
  switch (type) {
    case TIS_948B60: return sizeof(struct IS_948B60); // IS[Z, String]
    case TNone_A70CEE: return sizeof(struct None_A70CEE); // None[tc.TempControlMixedSeL4CAmKES.FanAck.Type]
    case TNone_ACDB63: return sizeof(struct None_ACDB63); // None[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]
    case TNone_86BF24: return sizeof(struct None_86BF24); // None[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]
    case TSome_D85467: return sizeof(struct Some_D85467); // Some[tc.TempControlMixedSeL4CAmKES.FanAck.Type]
    case TSome_2EFA7D: return sizeof(struct Some_2EFA7D); // Some[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]
    case TSome_0C4CF8: return sizeof(struct Some_0C4CF8); // Some[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]
    case TString: return sizeof(struct String); // String
    case Tart_Empty: return sizeof(struct art_Empty); // art.Empty
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
    "None[tc.TempControlMixedSeL4CAmKES.FanAck.Type]",
    "None[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]",
    "None[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]",
    "Some[tc.TempControlMixedSeL4CAmKES.FanAck.Type]",
    "Some[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]",
    "Some[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]",
    "String",
    "art.Empty",
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
    "tc.TempControlMixedSeL4CAmKES.TempUnit_Payload",
    "tc.TempControlMixedSeL4CAmKES.Temperature",
    "tc.TempControlMixedSeL4CAmKES.Temperature_Payload"
  };
  return strings[((Type) type)->type];
}