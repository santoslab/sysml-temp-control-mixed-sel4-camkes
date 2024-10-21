#include <all.h>

// tc.TempControlMixedSeL4CAmKES.FanCmd.Type

B tc_TempControlMixedSeL4CAmKES_FanCmd_Type__eq(tc_TempControlMixedSeL4CAmKES_FanCmd_Type this, tc_TempControlMixedSeL4CAmKES_FanCmd_Type other);
B tc_TempControlMixedSeL4CAmKES_FanCmd_Type__ne(tc_TempControlMixedSeL4CAmKES_FanCmd_Type this, tc_TempControlMixedSeL4CAmKES_FanCmd_Type other);
B tc_TempControlMixedSeL4CAmKES_FanCmd_Type__equiv(tc_TempControlMixedSeL4CAmKES_FanCmd_Type this, tc_TempControlMixedSeL4CAmKES_FanCmd_Type other);
B tc_TempControlMixedSeL4CAmKES_FanCmd_Type__inequiv(tc_TempControlMixedSeL4CAmKES_FanCmd_Type this, tc_TempControlMixedSeL4CAmKES_FanCmd_Type other);
Z tc_TempControlMixedSeL4CAmKES_FanCmd_Type__ordinal(tc_TempControlMixedSeL4CAmKES_FanCmd_Type this);
void tc_TempControlMixedSeL4CAmKES_FanCmd_Type_name_(String result, tc_TempControlMixedSeL4CAmKES_FanCmd_Type this);

void tc_TempControlMixedSeL4CAmKES_FanCmd_Type_byName(STACK_FRAME Option_5071ED result, String s) {
  if (String__eq(s, string("On"))) Type_assign(result, &((struct Some_2EFA7D) { .type = TSome_2EFA7D, .value = tc_TempControlMixedSeL4CAmKES_FanCmd_Type_On }), sizeof(union Option_5071ED));
  else if (String__eq(s, string("Off"))) Type_assign(result, &((struct Some_2EFA7D) { .type = TSome_2EFA7D, .value = tc_TempControlMixedSeL4CAmKES_FanCmd_Type_Off }), sizeof(union Option_5071ED));
  else Type_assign(result, &((struct None_ACDB63) { .type = TNone_ACDB63 }), sizeof(union Option_5071ED));
}

void tc_TempControlMixedSeL4CAmKES_FanCmd_Type_byOrdinal(STACK_FRAME Option_5071ED result, Z n) {
  switch ((tc_TempControlMixedSeL4CAmKES_FanCmd_Type) n) {
    case tc_TempControlMixedSeL4CAmKES_FanCmd_Type_On: Type_assign(result, &((struct Some_2EFA7D) { .type = TSome_2EFA7D, .value = tc_TempControlMixedSeL4CAmKES_FanCmd_Type_On }), sizeof(union Option_5071ED)); return;
    case tc_TempControlMixedSeL4CAmKES_FanCmd_Type_Off: Type_assign(result, &((struct Some_2EFA7D) { .type = TSome_2EFA7D, .value = tc_TempControlMixedSeL4CAmKES_FanCmd_Type_Off }), sizeof(union Option_5071ED)); return;
    default: Type_assign(result, &((struct None_ACDB63) { .type = TNone_ACDB63 }), sizeof(union Option_5071ED)); return;
  }
}

Z tc_TempControlMixedSeL4CAmKES_FanCmd_Type_numOfElements(void) {
  return Z_C(2);
}

void tc_TempControlMixedSeL4CAmKES_FanCmd_Type_cprint(tc_TempControlMixedSeL4CAmKES_FanCmd_Type this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  switch (this) {
    case tc_TempControlMixedSeL4CAmKES_FanCmd_Type_On: String_cprint(string("On"), isOut); return;
    case tc_TempControlMixedSeL4CAmKES_FanCmd_Type_Off: String_cprint(string("Off"), isOut); return;
  }
  #endif
}

void tc_TempControlMixedSeL4CAmKES_FanCmd_Type_string_(STACK_FRAME String result, tc_TempControlMixedSeL4CAmKES_FanCmd_Type this) {
  DeclNewStackFrame(caller, "FanCmd.scala", "tc_TempControlMixedSeL4CAmKES_FanCmd_Type", "string", 0);
  switch (this) {
    case tc_TempControlMixedSeL4CAmKES_FanCmd_Type_On: String_string_(SF result, string("On")); return;
    case tc_TempControlMixedSeL4CAmKES_FanCmd_Type_Off: String_string_(SF result, string("Off")); return;
  }
}