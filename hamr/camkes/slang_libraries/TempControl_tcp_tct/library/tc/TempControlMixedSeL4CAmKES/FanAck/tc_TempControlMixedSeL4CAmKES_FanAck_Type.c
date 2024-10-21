#include <all.h>

// tc.TempControlMixedSeL4CAmKES.FanAck.Type

B tc_TempControlMixedSeL4CAmKES_FanAck_Type__eq(tc_TempControlMixedSeL4CAmKES_FanAck_Type this, tc_TempControlMixedSeL4CAmKES_FanAck_Type other);
B tc_TempControlMixedSeL4CAmKES_FanAck_Type__ne(tc_TempControlMixedSeL4CAmKES_FanAck_Type this, tc_TempControlMixedSeL4CAmKES_FanAck_Type other);
B tc_TempControlMixedSeL4CAmKES_FanAck_Type__equiv(tc_TempControlMixedSeL4CAmKES_FanAck_Type this, tc_TempControlMixedSeL4CAmKES_FanAck_Type other);
B tc_TempControlMixedSeL4CAmKES_FanAck_Type__inequiv(tc_TempControlMixedSeL4CAmKES_FanAck_Type this, tc_TempControlMixedSeL4CAmKES_FanAck_Type other);
Z tc_TempControlMixedSeL4CAmKES_FanAck_Type__ordinal(tc_TempControlMixedSeL4CAmKES_FanAck_Type this);
void tc_TempControlMixedSeL4CAmKES_FanAck_Type_name_(String result, tc_TempControlMixedSeL4CAmKES_FanAck_Type this);

void tc_TempControlMixedSeL4CAmKES_FanAck_Type_byName(STACK_FRAME Option_36021E result, String s) {
  if (String__eq(s, string("Ok"))) Type_assign(result, &((struct Some_D85467) { .type = TSome_D85467, .value = tc_TempControlMixedSeL4CAmKES_FanAck_Type_Ok }), sizeof(union Option_36021E));
  else if (String__eq(s, string("Error"))) Type_assign(result, &((struct Some_D85467) { .type = TSome_D85467, .value = tc_TempControlMixedSeL4CAmKES_FanAck_Type_Error }), sizeof(union Option_36021E));
  else Type_assign(result, &((struct None_A70CEE) { .type = TNone_A70CEE }), sizeof(union Option_36021E));
}

void tc_TempControlMixedSeL4CAmKES_FanAck_Type_byOrdinal(STACK_FRAME Option_36021E result, Z n) {
  switch ((tc_TempControlMixedSeL4CAmKES_FanAck_Type) n) {
    case tc_TempControlMixedSeL4CAmKES_FanAck_Type_Ok: Type_assign(result, &((struct Some_D85467) { .type = TSome_D85467, .value = tc_TempControlMixedSeL4CAmKES_FanAck_Type_Ok }), sizeof(union Option_36021E)); return;
    case tc_TempControlMixedSeL4CAmKES_FanAck_Type_Error: Type_assign(result, &((struct Some_D85467) { .type = TSome_D85467, .value = tc_TempControlMixedSeL4CAmKES_FanAck_Type_Error }), sizeof(union Option_36021E)); return;
    default: Type_assign(result, &((struct None_A70CEE) { .type = TNone_A70CEE }), sizeof(union Option_36021E)); return;
  }
}

Z tc_TempControlMixedSeL4CAmKES_FanAck_Type_numOfElements(void) {
  return Z_C(2);
}

void tc_TempControlMixedSeL4CAmKES_FanAck_Type_cprint(tc_TempControlMixedSeL4CAmKES_FanAck_Type this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  switch (this) {
    case tc_TempControlMixedSeL4CAmKES_FanAck_Type_Ok: String_cprint(string("Ok"), isOut); return;
    case tc_TempControlMixedSeL4CAmKES_FanAck_Type_Error: String_cprint(string("Error"), isOut); return;
  }
  #endif
}

void tc_TempControlMixedSeL4CAmKES_FanAck_Type_string_(STACK_FRAME String result, tc_TempControlMixedSeL4CAmKES_FanAck_Type this) {
  DeclNewStackFrame(caller, "FanAck.scala", "tc_TempControlMixedSeL4CAmKES_FanAck_Type", "string", 0);
  switch (this) {
    case tc_TempControlMixedSeL4CAmKES_FanAck_Type_Ok: String_string_(SF result, string("Ok")); return;
    case tc_TempControlMixedSeL4CAmKES_FanAck_Type_Error: String_string_(SF result, string("Error")); return;
  }
}