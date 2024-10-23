#include <all.h>

B Type__eq(void *t1, void *t2) {
  TYPE type = ((Type) t1)->type;
  if (type != ((Type) t2)->type) return F;
  switch (type) {
    case TIS_948B60: return IS_948B60__eq((IS_948B60) t1, (IS_948B60) t2);
    case TNone_A70CEE: return None_A70CEE__eq((None_A70CEE) t1, (None_A70CEE) t2);
    case TNone_ACDB63: return None_ACDB63__eq((None_ACDB63) t1, (None_ACDB63) t2);
    case TNone_86BF24: return None_86BF24__eq((None_86BF24) t1, (None_86BF24) t2);
    case TSome_D85467: return Some_D85467__eq((Some_D85467) t1, (Some_D85467) t2);
    case TSome_2EFA7D: return Some_2EFA7D__eq((Some_2EFA7D) t1, (Some_2EFA7D) t2);
    case TSome_0C4CF8: return Some_0C4CF8__eq((Some_0C4CF8) t1, (Some_0C4CF8) t2);
    case TString: return String__eq((String) t1, (String) t2);
    case Tart_Empty: return art_Empty__eq((art_Empty) t1, (art_Empty) t2);
    case Ttc_Base_Types_Boolean_Payload: return tc_Base_Types_Boolean_Payload__eq((tc_Base_Types_Boolean_Payload) t1, (tc_Base_Types_Boolean_Payload) t2);
    case Ttc_Base_Types_Character_Payload: return tc_Base_Types_Character_Payload__eq((tc_Base_Types_Character_Payload) t1, (tc_Base_Types_Character_Payload) t2);
    case Ttc_Base_Types_Float_32_Payload: return tc_Base_Types_Float_32_Payload__eq((tc_Base_Types_Float_32_Payload) t1, (tc_Base_Types_Float_32_Payload) t2);
    case Ttc_Base_Types_Float_64_Payload: return tc_Base_Types_Float_64_Payload__eq((tc_Base_Types_Float_64_Payload) t1, (tc_Base_Types_Float_64_Payload) t2);
    case Ttc_Base_Types_Float_Payload: return tc_Base_Types_Float_Payload__eq((tc_Base_Types_Float_Payload) t1, (tc_Base_Types_Float_Payload) t2);
    case Ttc_Base_Types_Integer_16_Payload: return tc_Base_Types_Integer_16_Payload__eq((tc_Base_Types_Integer_16_Payload) t1, (tc_Base_Types_Integer_16_Payload) t2);
    case Ttc_Base_Types_Integer_32_Payload: return tc_Base_Types_Integer_32_Payload__eq((tc_Base_Types_Integer_32_Payload) t1, (tc_Base_Types_Integer_32_Payload) t2);
    case Ttc_Base_Types_Integer_64_Payload: return tc_Base_Types_Integer_64_Payload__eq((tc_Base_Types_Integer_64_Payload) t1, (tc_Base_Types_Integer_64_Payload) t2);
    case Ttc_Base_Types_Integer_8_Payload: return tc_Base_Types_Integer_8_Payload__eq((tc_Base_Types_Integer_8_Payload) t1, (tc_Base_Types_Integer_8_Payload) t2);
    case Ttc_Base_Types_Integer_Payload: return tc_Base_Types_Integer_Payload__eq((tc_Base_Types_Integer_Payload) t1, (tc_Base_Types_Integer_Payload) t2);
    case Ttc_Base_Types_String_Payload: return tc_Base_Types_String_Payload__eq((tc_Base_Types_String_Payload) t1, (tc_Base_Types_String_Payload) t2);
    case Ttc_Base_Types_Unsigned_16_Payload: return tc_Base_Types_Unsigned_16_Payload__eq((tc_Base_Types_Unsigned_16_Payload) t1, (tc_Base_Types_Unsigned_16_Payload) t2);
    case Ttc_Base_Types_Unsigned_32_Payload: return tc_Base_Types_Unsigned_32_Payload__eq((tc_Base_Types_Unsigned_32_Payload) t1, (tc_Base_Types_Unsigned_32_Payload) t2);
    case Ttc_Base_Types_Unsigned_64_Payload: return tc_Base_Types_Unsigned_64_Payload__eq((tc_Base_Types_Unsigned_64_Payload) t1, (tc_Base_Types_Unsigned_64_Payload) t2);
    case Ttc_Base_Types_Unsigned_8_Payload: return tc_Base_Types_Unsigned_8_Payload__eq((tc_Base_Types_Unsigned_8_Payload) t1, (tc_Base_Types_Unsigned_8_Payload) t2);
    case Ttc_TempControlMixedSeL4CAmKES_FanAck_Payload: return tc_TempControlMixedSeL4CAmKES_FanAck_Payload__eq((tc_TempControlMixedSeL4CAmKES_FanAck_Payload) t1, (tc_TempControlMixedSeL4CAmKES_FanAck_Payload) t2);
    case Ttc_TempControlMixedSeL4CAmKES_FanCmd_Payload: return tc_TempControlMixedSeL4CAmKES_FanCmd_Payload__eq((tc_TempControlMixedSeL4CAmKES_FanCmd_Payload) t1, (tc_TempControlMixedSeL4CAmKES_FanCmd_Payload) t2);
    case Ttc_TempControlMixedSeL4CAmKES_SetPoint: return tc_TempControlMixedSeL4CAmKES_SetPoint__eq((tc_TempControlMixedSeL4CAmKES_SetPoint) t1, (tc_TempControlMixedSeL4CAmKES_SetPoint) t2);
    case Ttc_TempControlMixedSeL4CAmKES_SetPoint_Payload: return tc_TempControlMixedSeL4CAmKES_SetPoint_Payload__eq((tc_TempControlMixedSeL4CAmKES_SetPoint_Payload) t1, (tc_TempControlMixedSeL4CAmKES_SetPoint_Payload) t2);
    case Ttc_TempControlMixedSeL4CAmKES_TempUnit_Payload: return tc_TempControlMixedSeL4CAmKES_TempUnit_Payload__eq((tc_TempControlMixedSeL4CAmKES_TempUnit_Payload) t1, (tc_TempControlMixedSeL4CAmKES_TempUnit_Payload) t2);
    case Ttc_TempControlMixedSeL4CAmKES_Temperature: return tc_TempControlMixedSeL4CAmKES_Temperature__eq((tc_TempControlMixedSeL4CAmKES_Temperature) t1, (tc_TempControlMixedSeL4CAmKES_Temperature) t2);
    case Ttc_TempControlMixedSeL4CAmKES_Temperature_Payload: return tc_TempControlMixedSeL4CAmKES_Temperature_Payload__eq((tc_TempControlMixedSeL4CAmKES_Temperature_Payload) t1, (tc_TempControlMixedSeL4CAmKES_Temperature_Payload) t2);
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

B Type__equiv(void *t1, void *t2) {
  TYPE type = ((Type) t1)->type;
  if (type != ((Type) t2)->type) return F;
  switch (type) {
    case TIS_948B60: return IS_948B60__equiv((IS_948B60) t1, (IS_948B60) t2);
    case TNone_A70CEE: return None_A70CEE__equiv((None_A70CEE) t1, (None_A70CEE) t2);
    case TNone_ACDB63: return None_ACDB63__equiv((None_ACDB63) t1, (None_ACDB63) t2);
    case TNone_86BF24: return None_86BF24__equiv((None_86BF24) t1, (None_86BF24) t2);
    case TSome_D85467: return Some_D85467__equiv((Some_D85467) t1, (Some_D85467) t2);
    case TSome_2EFA7D: return Some_2EFA7D__equiv((Some_2EFA7D) t1, (Some_2EFA7D) t2);
    case TSome_0C4CF8: return Some_0C4CF8__equiv((Some_0C4CF8) t1, (Some_0C4CF8) t2);
    case TString: return String__equiv((String) t1, (String) t2);
    case Tart_Empty: return art_Empty__equiv((art_Empty) t1, (art_Empty) t2);
    case Ttc_Base_Types_Boolean_Payload: return tc_Base_Types_Boolean_Payload__equiv((tc_Base_Types_Boolean_Payload) t1, (tc_Base_Types_Boolean_Payload) t2);
    case Ttc_Base_Types_Character_Payload: return tc_Base_Types_Character_Payload__equiv((tc_Base_Types_Character_Payload) t1, (tc_Base_Types_Character_Payload) t2);
    case Ttc_Base_Types_Float_32_Payload: return tc_Base_Types_Float_32_Payload__equiv((tc_Base_Types_Float_32_Payload) t1, (tc_Base_Types_Float_32_Payload) t2);
    case Ttc_Base_Types_Float_64_Payload: return tc_Base_Types_Float_64_Payload__equiv((tc_Base_Types_Float_64_Payload) t1, (tc_Base_Types_Float_64_Payload) t2);
    case Ttc_Base_Types_Float_Payload: return tc_Base_Types_Float_Payload__equiv((tc_Base_Types_Float_Payload) t1, (tc_Base_Types_Float_Payload) t2);
    case Ttc_Base_Types_Integer_16_Payload: return tc_Base_Types_Integer_16_Payload__equiv((tc_Base_Types_Integer_16_Payload) t1, (tc_Base_Types_Integer_16_Payload) t2);
    case Ttc_Base_Types_Integer_32_Payload: return tc_Base_Types_Integer_32_Payload__equiv((tc_Base_Types_Integer_32_Payload) t1, (tc_Base_Types_Integer_32_Payload) t2);
    case Ttc_Base_Types_Integer_64_Payload: return tc_Base_Types_Integer_64_Payload__equiv((tc_Base_Types_Integer_64_Payload) t1, (tc_Base_Types_Integer_64_Payload) t2);
    case Ttc_Base_Types_Integer_8_Payload: return tc_Base_Types_Integer_8_Payload__equiv((tc_Base_Types_Integer_8_Payload) t1, (tc_Base_Types_Integer_8_Payload) t2);
    case Ttc_Base_Types_Integer_Payload: return tc_Base_Types_Integer_Payload__equiv((tc_Base_Types_Integer_Payload) t1, (tc_Base_Types_Integer_Payload) t2);
    case Ttc_Base_Types_String_Payload: return tc_Base_Types_String_Payload__equiv((tc_Base_Types_String_Payload) t1, (tc_Base_Types_String_Payload) t2);
    case Ttc_Base_Types_Unsigned_16_Payload: return tc_Base_Types_Unsigned_16_Payload__equiv((tc_Base_Types_Unsigned_16_Payload) t1, (tc_Base_Types_Unsigned_16_Payload) t2);
    case Ttc_Base_Types_Unsigned_32_Payload: return tc_Base_Types_Unsigned_32_Payload__equiv((tc_Base_Types_Unsigned_32_Payload) t1, (tc_Base_Types_Unsigned_32_Payload) t2);
    case Ttc_Base_Types_Unsigned_64_Payload: return tc_Base_Types_Unsigned_64_Payload__equiv((tc_Base_Types_Unsigned_64_Payload) t1, (tc_Base_Types_Unsigned_64_Payload) t2);
    case Ttc_Base_Types_Unsigned_8_Payload: return tc_Base_Types_Unsigned_8_Payload__equiv((tc_Base_Types_Unsigned_8_Payload) t1, (tc_Base_Types_Unsigned_8_Payload) t2);
    case Ttc_TempControlMixedSeL4CAmKES_FanAck_Payload: return tc_TempControlMixedSeL4CAmKES_FanAck_Payload__equiv((tc_TempControlMixedSeL4CAmKES_FanAck_Payload) t1, (tc_TempControlMixedSeL4CAmKES_FanAck_Payload) t2);
    case Ttc_TempControlMixedSeL4CAmKES_FanCmd_Payload: return tc_TempControlMixedSeL4CAmKES_FanCmd_Payload__equiv((tc_TempControlMixedSeL4CAmKES_FanCmd_Payload) t1, (tc_TempControlMixedSeL4CAmKES_FanCmd_Payload) t2);
    case Ttc_TempControlMixedSeL4CAmKES_SetPoint: return tc_TempControlMixedSeL4CAmKES_SetPoint__equiv((tc_TempControlMixedSeL4CAmKES_SetPoint) t1, (tc_TempControlMixedSeL4CAmKES_SetPoint) t2);
    case Ttc_TempControlMixedSeL4CAmKES_SetPoint_Payload: return tc_TempControlMixedSeL4CAmKES_SetPoint_Payload__equiv((tc_TempControlMixedSeL4CAmKES_SetPoint_Payload) t1, (tc_TempControlMixedSeL4CAmKES_SetPoint_Payload) t2);
    case Ttc_TempControlMixedSeL4CAmKES_TempUnit_Payload: return tc_TempControlMixedSeL4CAmKES_TempUnit_Payload__equiv((tc_TempControlMixedSeL4CAmKES_TempUnit_Payload) t1, (tc_TempControlMixedSeL4CAmKES_TempUnit_Payload) t2);
    case Ttc_TempControlMixedSeL4CAmKES_Temperature: return tc_TempControlMixedSeL4CAmKES_Temperature__equiv((tc_TempControlMixedSeL4CAmKES_Temperature) t1, (tc_TempControlMixedSeL4CAmKES_Temperature) t2);
    case Ttc_TempControlMixedSeL4CAmKES_Temperature_Payload: return tc_TempControlMixedSeL4CAmKES_Temperature_Payload__equiv((tc_TempControlMixedSeL4CAmKES_Temperature_Payload) t1, (tc_TempControlMixedSeL4CAmKES_Temperature_Payload) t2);
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

void Type_cprint(void *this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  TYPE type = ((Type) this)->type;
  switch (type) {
    case TIS_948B60: IS_948B60_cprint((IS_948B60) this, isOut); return;
    case TNone_A70CEE: None_A70CEE_cprint((None_A70CEE) this, isOut); return;
    case TNone_ACDB63: None_ACDB63_cprint((None_ACDB63) this, isOut); return;
    case TNone_86BF24: None_86BF24_cprint((None_86BF24) this, isOut); return;
    case TSome_D85467: Some_D85467_cprint((Some_D85467) this, isOut); return;
    case TSome_2EFA7D: Some_2EFA7D_cprint((Some_2EFA7D) this, isOut); return;
    case TSome_0C4CF8: Some_0C4CF8_cprint((Some_0C4CF8) this, isOut); return;
    case TString: String_cprint((String) this, isOut); return;
    case Tart_Empty: art_Empty_cprint((art_Empty) this, isOut); return;
    case Ttc_Base_Types_Boolean_Payload: tc_Base_Types_Boolean_Payload_cprint((tc_Base_Types_Boolean_Payload) this, isOut); return;
    case Ttc_Base_Types_Character_Payload: tc_Base_Types_Character_Payload_cprint((tc_Base_Types_Character_Payload) this, isOut); return;
    case Ttc_Base_Types_Float_32_Payload: tc_Base_Types_Float_32_Payload_cprint((tc_Base_Types_Float_32_Payload) this, isOut); return;
    case Ttc_Base_Types_Float_64_Payload: tc_Base_Types_Float_64_Payload_cprint((tc_Base_Types_Float_64_Payload) this, isOut); return;
    case Ttc_Base_Types_Float_Payload: tc_Base_Types_Float_Payload_cprint((tc_Base_Types_Float_Payload) this, isOut); return;
    case Ttc_Base_Types_Integer_16_Payload: tc_Base_Types_Integer_16_Payload_cprint((tc_Base_Types_Integer_16_Payload) this, isOut); return;
    case Ttc_Base_Types_Integer_32_Payload: tc_Base_Types_Integer_32_Payload_cprint((tc_Base_Types_Integer_32_Payload) this, isOut); return;
    case Ttc_Base_Types_Integer_64_Payload: tc_Base_Types_Integer_64_Payload_cprint((tc_Base_Types_Integer_64_Payload) this, isOut); return;
    case Ttc_Base_Types_Integer_8_Payload: tc_Base_Types_Integer_8_Payload_cprint((tc_Base_Types_Integer_8_Payload) this, isOut); return;
    case Ttc_Base_Types_Integer_Payload: tc_Base_Types_Integer_Payload_cprint((tc_Base_Types_Integer_Payload) this, isOut); return;
    case Ttc_Base_Types_String_Payload: tc_Base_Types_String_Payload_cprint((tc_Base_Types_String_Payload) this, isOut); return;
    case Ttc_Base_Types_Unsigned_16_Payload: tc_Base_Types_Unsigned_16_Payload_cprint((tc_Base_Types_Unsigned_16_Payload) this, isOut); return;
    case Ttc_Base_Types_Unsigned_32_Payload: tc_Base_Types_Unsigned_32_Payload_cprint((tc_Base_Types_Unsigned_32_Payload) this, isOut); return;
    case Ttc_Base_Types_Unsigned_64_Payload: tc_Base_Types_Unsigned_64_Payload_cprint((tc_Base_Types_Unsigned_64_Payload) this, isOut); return;
    case Ttc_Base_Types_Unsigned_8_Payload: tc_Base_Types_Unsigned_8_Payload_cprint((tc_Base_Types_Unsigned_8_Payload) this, isOut); return;
    case Ttc_TempControlMixedSeL4CAmKES_FanAck_Payload: tc_TempControlMixedSeL4CAmKES_FanAck_Payload_cprint((tc_TempControlMixedSeL4CAmKES_FanAck_Payload) this, isOut); return;
    case Ttc_TempControlMixedSeL4CAmKES_FanCmd_Payload: tc_TempControlMixedSeL4CAmKES_FanCmd_Payload_cprint((tc_TempControlMixedSeL4CAmKES_FanCmd_Payload) this, isOut); return;
    case Ttc_TempControlMixedSeL4CAmKES_SetPoint: tc_TempControlMixedSeL4CAmKES_SetPoint_cprint((tc_TempControlMixedSeL4CAmKES_SetPoint) this, isOut); return;
    case Ttc_TempControlMixedSeL4CAmKES_SetPoint_Payload: tc_TempControlMixedSeL4CAmKES_SetPoint_Payload_cprint((tc_TempControlMixedSeL4CAmKES_SetPoint_Payload) this, isOut); return;
    case Ttc_TempControlMixedSeL4CAmKES_TempUnit_Payload: tc_TempControlMixedSeL4CAmKES_TempUnit_Payload_cprint((tc_TempControlMixedSeL4CAmKES_TempUnit_Payload) this, isOut); return;
    case Ttc_TempControlMixedSeL4CAmKES_Temperature: tc_TempControlMixedSeL4CAmKES_Temperature_cprint((tc_TempControlMixedSeL4CAmKES_Temperature) this, isOut); return;
    case Ttc_TempControlMixedSeL4CAmKES_Temperature_Payload: tc_TempControlMixedSeL4CAmKES_Temperature_Payload_cprint((tc_TempControlMixedSeL4CAmKES_Temperature_Payload) this, isOut); return;
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
  #endif
}

void Type_string_(STACK_FRAME String result, void *this) {
  TYPE type = ((Type) this)->type;
  switch (type) {
    case TIS_948B60: IS_948B60_string_(CALLER result, (IS_948B60) this); return;
    case TNone_A70CEE: None_A70CEE_string_(CALLER result, (None_A70CEE) this); return;
    case TNone_ACDB63: None_ACDB63_string_(CALLER result, (None_ACDB63) this); return;
    case TNone_86BF24: None_86BF24_string_(CALLER result, (None_86BF24) this); return;
    case TSome_D85467: Some_D85467_string_(CALLER result, (Some_D85467) this); return;
    case TSome_2EFA7D: Some_2EFA7D_string_(CALLER result, (Some_2EFA7D) this); return;
    case TSome_0C4CF8: Some_0C4CF8_string_(CALLER result, (Some_0C4CF8) this); return;
    case TString: String_string_(CALLER result, (String) this); return;
    case Tart_Empty: art_Empty_string_(CALLER result, (art_Empty) this); return;
    case Ttc_Base_Types_Boolean_Payload: tc_Base_Types_Boolean_Payload_string_(CALLER result, (tc_Base_Types_Boolean_Payload) this); return;
    case Ttc_Base_Types_Character_Payload: tc_Base_Types_Character_Payload_string_(CALLER result, (tc_Base_Types_Character_Payload) this); return;
    case Ttc_Base_Types_Float_32_Payload: tc_Base_Types_Float_32_Payload_string_(CALLER result, (tc_Base_Types_Float_32_Payload) this); return;
    case Ttc_Base_Types_Float_64_Payload: tc_Base_Types_Float_64_Payload_string_(CALLER result, (tc_Base_Types_Float_64_Payload) this); return;
    case Ttc_Base_Types_Float_Payload: tc_Base_Types_Float_Payload_string_(CALLER result, (tc_Base_Types_Float_Payload) this); return;
    case Ttc_Base_Types_Integer_16_Payload: tc_Base_Types_Integer_16_Payload_string_(CALLER result, (tc_Base_Types_Integer_16_Payload) this); return;
    case Ttc_Base_Types_Integer_32_Payload: tc_Base_Types_Integer_32_Payload_string_(CALLER result, (tc_Base_Types_Integer_32_Payload) this); return;
    case Ttc_Base_Types_Integer_64_Payload: tc_Base_Types_Integer_64_Payload_string_(CALLER result, (tc_Base_Types_Integer_64_Payload) this); return;
    case Ttc_Base_Types_Integer_8_Payload: tc_Base_Types_Integer_8_Payload_string_(CALLER result, (tc_Base_Types_Integer_8_Payload) this); return;
    case Ttc_Base_Types_Integer_Payload: tc_Base_Types_Integer_Payload_string_(CALLER result, (tc_Base_Types_Integer_Payload) this); return;
    case Ttc_Base_Types_String_Payload: tc_Base_Types_String_Payload_string_(CALLER result, (tc_Base_Types_String_Payload) this); return;
    case Ttc_Base_Types_Unsigned_16_Payload: tc_Base_Types_Unsigned_16_Payload_string_(CALLER result, (tc_Base_Types_Unsigned_16_Payload) this); return;
    case Ttc_Base_Types_Unsigned_32_Payload: tc_Base_Types_Unsigned_32_Payload_string_(CALLER result, (tc_Base_Types_Unsigned_32_Payload) this); return;
    case Ttc_Base_Types_Unsigned_64_Payload: tc_Base_Types_Unsigned_64_Payload_string_(CALLER result, (tc_Base_Types_Unsigned_64_Payload) this); return;
    case Ttc_Base_Types_Unsigned_8_Payload: tc_Base_Types_Unsigned_8_Payload_string_(CALLER result, (tc_Base_Types_Unsigned_8_Payload) this); return;
    case Ttc_TempControlMixedSeL4CAmKES_FanAck_Payload: tc_TempControlMixedSeL4CAmKES_FanAck_Payload_string_(CALLER result, (tc_TempControlMixedSeL4CAmKES_FanAck_Payload) this); return;
    case Ttc_TempControlMixedSeL4CAmKES_FanCmd_Payload: tc_TempControlMixedSeL4CAmKES_FanCmd_Payload_string_(CALLER result, (tc_TempControlMixedSeL4CAmKES_FanCmd_Payload) this); return;
    case Ttc_TempControlMixedSeL4CAmKES_SetPoint: tc_TempControlMixedSeL4CAmKES_SetPoint_string_(CALLER result, (tc_TempControlMixedSeL4CAmKES_SetPoint) this); return;
    case Ttc_TempControlMixedSeL4CAmKES_SetPoint_Payload: tc_TempControlMixedSeL4CAmKES_SetPoint_Payload_string_(CALLER result, (tc_TempControlMixedSeL4CAmKES_SetPoint_Payload) this); return;
    case Ttc_TempControlMixedSeL4CAmKES_TempUnit_Payload: tc_TempControlMixedSeL4CAmKES_TempUnit_Payload_string_(CALLER result, (tc_TempControlMixedSeL4CAmKES_TempUnit_Payload) this); return;
    case Ttc_TempControlMixedSeL4CAmKES_Temperature: tc_TempControlMixedSeL4CAmKES_Temperature_string_(CALLER result, (tc_TempControlMixedSeL4CAmKES_Temperature) this); return;
    case Ttc_TempControlMixedSeL4CAmKES_Temperature_Payload: tc_TempControlMixedSeL4CAmKES_Temperature_Payload_string_(CALLER result, (tc_TempControlMixedSeL4CAmKES_Temperature_Payload) this); return;
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

