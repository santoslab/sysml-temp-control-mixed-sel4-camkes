#include <all.h>

// tc.TempControlPeriodic.FanCmd.Type

B tc_TempControlPeriodic_FanCmd_Type__eq(tc_TempControlPeriodic_FanCmd_Type this, tc_TempControlPeriodic_FanCmd_Type other);
B tc_TempControlPeriodic_FanCmd_Type__ne(tc_TempControlPeriodic_FanCmd_Type this, tc_TempControlPeriodic_FanCmd_Type other);
B tc_TempControlPeriodic_FanCmd_Type__equiv(tc_TempControlPeriodic_FanCmd_Type this, tc_TempControlPeriodic_FanCmd_Type other);
B tc_TempControlPeriodic_FanCmd_Type__inequiv(tc_TempControlPeriodic_FanCmd_Type this, tc_TempControlPeriodic_FanCmd_Type other);
Z tc_TempControlPeriodic_FanCmd_Type__ordinal(tc_TempControlPeriodic_FanCmd_Type this);
void tc_TempControlPeriodic_FanCmd_Type_name_(String result, tc_TempControlPeriodic_FanCmd_Type this);

void tc_TempControlPeriodic_FanCmd_Type_byName(STACK_FRAME Option_62C8EC result, String s) {
  if (String__eq(s, string("On"))) Type_assign(result, &((struct Some_C0DBA9) { .type = TSome_C0DBA9, .value = tc_TempControlPeriodic_FanCmd_Type_On }), sizeof(union Option_62C8EC));
  else if (String__eq(s, string("Off"))) Type_assign(result, &((struct Some_C0DBA9) { .type = TSome_C0DBA9, .value = tc_TempControlPeriodic_FanCmd_Type_Off }), sizeof(union Option_62C8EC));
  else Type_assign(result, &((struct None_037804) { .type = TNone_037804 }), sizeof(union Option_62C8EC));
}

void tc_TempControlPeriodic_FanCmd_Type_byOrdinal(STACK_FRAME Option_62C8EC result, Z n) {
  switch ((tc_TempControlPeriodic_FanCmd_Type) n) {
    case tc_TempControlPeriodic_FanCmd_Type_On: Type_assign(result, &((struct Some_C0DBA9) { .type = TSome_C0DBA9, .value = tc_TempControlPeriodic_FanCmd_Type_On }), sizeof(union Option_62C8EC)); return;
    case tc_TempControlPeriodic_FanCmd_Type_Off: Type_assign(result, &((struct Some_C0DBA9) { .type = TSome_C0DBA9, .value = tc_TempControlPeriodic_FanCmd_Type_Off }), sizeof(union Option_62C8EC)); return;
    default: Type_assign(result, &((struct None_037804) { .type = TNone_037804 }), sizeof(union Option_62C8EC)); return;
  }
}

Z tc_TempControlPeriodic_FanCmd_Type_numOfElements(void) {
  return Z_C(2);
}

void tc_TempControlPeriodic_FanCmd_Type_cprint(tc_TempControlPeriodic_FanCmd_Type this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  switch (this) {
    case tc_TempControlPeriodic_FanCmd_Type_On: String_cprint(string("On"), isOut); return;
    case tc_TempControlPeriodic_FanCmd_Type_Off: String_cprint(string("Off"), isOut); return;
  }
  #endif
}

void tc_TempControlPeriodic_FanCmd_Type_string_(STACK_FRAME String result, tc_TempControlPeriodic_FanCmd_Type this) {
  DeclNewStackFrame(caller, "FanCmd.scala", "tc_TempControlPeriodic_FanCmd_Type", "string", 0);
  switch (this) {
    case tc_TempControlPeriodic_FanCmd_Type_On: String_string_(SF result, string("On")); return;
    case tc_TempControlPeriodic_FanCmd_Type_Off: String_string_(SF result, string("Off")); return;
  }
}