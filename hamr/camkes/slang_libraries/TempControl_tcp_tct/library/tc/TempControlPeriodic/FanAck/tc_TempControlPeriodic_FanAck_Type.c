#include <all.h>

// tc.TempControlPeriodic.FanAck.Type

B tc_TempControlPeriodic_FanAck_Type__eq(tc_TempControlPeriodic_FanAck_Type this, tc_TempControlPeriodic_FanAck_Type other);
B tc_TempControlPeriodic_FanAck_Type__ne(tc_TempControlPeriodic_FanAck_Type this, tc_TempControlPeriodic_FanAck_Type other);
B tc_TempControlPeriodic_FanAck_Type__equiv(tc_TempControlPeriodic_FanAck_Type this, tc_TempControlPeriodic_FanAck_Type other);
B tc_TempControlPeriodic_FanAck_Type__inequiv(tc_TempControlPeriodic_FanAck_Type this, tc_TempControlPeriodic_FanAck_Type other);
Z tc_TempControlPeriodic_FanAck_Type__ordinal(tc_TempControlPeriodic_FanAck_Type this);
void tc_TempControlPeriodic_FanAck_Type_name_(String result, tc_TempControlPeriodic_FanAck_Type this);

void tc_TempControlPeriodic_FanAck_Type_byName(STACK_FRAME Option_121E48 result, String s) {
  if (String__eq(s, string("Ok"))) Type_assign(result, &((struct Some_C3173C) { .type = TSome_C3173C, .value = tc_TempControlPeriodic_FanAck_Type_Ok }), sizeof(union Option_121E48));
  else if (String__eq(s, string("Error"))) Type_assign(result, &((struct Some_C3173C) { .type = TSome_C3173C, .value = tc_TempControlPeriodic_FanAck_Type_Error }), sizeof(union Option_121E48));
  else Type_assign(result, &((struct None_D4B208) { .type = TNone_D4B208 }), sizeof(union Option_121E48));
}

void tc_TempControlPeriodic_FanAck_Type_byOrdinal(STACK_FRAME Option_121E48 result, Z n) {
  switch ((tc_TempControlPeriodic_FanAck_Type) n) {
    case tc_TempControlPeriodic_FanAck_Type_Ok: Type_assign(result, &((struct Some_C3173C) { .type = TSome_C3173C, .value = tc_TempControlPeriodic_FanAck_Type_Ok }), sizeof(union Option_121E48)); return;
    case tc_TempControlPeriodic_FanAck_Type_Error: Type_assign(result, &((struct Some_C3173C) { .type = TSome_C3173C, .value = tc_TempControlPeriodic_FanAck_Type_Error }), sizeof(union Option_121E48)); return;
    default: Type_assign(result, &((struct None_D4B208) { .type = TNone_D4B208 }), sizeof(union Option_121E48)); return;
  }
}

Z tc_TempControlPeriodic_FanAck_Type_numOfElements(void) {
  return Z_C(2);
}

void tc_TempControlPeriodic_FanAck_Type_cprint(tc_TempControlPeriodic_FanAck_Type this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  switch (this) {
    case tc_TempControlPeriodic_FanAck_Type_Ok: String_cprint(string("Ok"), isOut); return;
    case tc_TempControlPeriodic_FanAck_Type_Error: String_cprint(string("Error"), isOut); return;
  }
  #endif
}

void tc_TempControlPeriodic_FanAck_Type_string_(STACK_FRAME String result, tc_TempControlPeriodic_FanAck_Type this) {
  DeclNewStackFrame(caller, "FanAck.scala", "tc_TempControlPeriodic_FanAck_Type", "string", 0);
  switch (this) {
    case tc_TempControlPeriodic_FanAck_Type_Ok: String_string_(SF result, string("Ok")); return;
    case tc_TempControlPeriodic_FanAck_Type_Error: String_string_(SF result, string("Error")); return;
  }
}