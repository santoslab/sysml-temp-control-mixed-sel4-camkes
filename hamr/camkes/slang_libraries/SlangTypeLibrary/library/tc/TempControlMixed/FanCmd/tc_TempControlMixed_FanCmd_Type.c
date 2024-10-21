#include <all.h>

// tc.TempControlMixed.FanCmd.Type

B tc_TempControlMixed_FanCmd_Type__eq(tc_TempControlMixed_FanCmd_Type this, tc_TempControlMixed_FanCmd_Type other);
B tc_TempControlMixed_FanCmd_Type__ne(tc_TempControlMixed_FanCmd_Type this, tc_TempControlMixed_FanCmd_Type other);
B tc_TempControlMixed_FanCmd_Type__equiv(tc_TempControlMixed_FanCmd_Type this, tc_TempControlMixed_FanCmd_Type other);
B tc_TempControlMixed_FanCmd_Type__inequiv(tc_TempControlMixed_FanCmd_Type this, tc_TempControlMixed_FanCmd_Type other);
Z tc_TempControlMixed_FanCmd_Type__ordinal(tc_TempControlMixed_FanCmd_Type this);
void tc_TempControlMixed_FanCmd_Type_name_(String result, tc_TempControlMixed_FanCmd_Type this);

void tc_TempControlMixed_FanCmd_Type_byName(STACK_FRAME Option_8499F5 result, String s) {
  if (String__eq(s, string("On"))) Type_assign(result, &((struct Some_776961) { .type = TSome_776961, .value = tc_TempControlMixed_FanCmd_Type_On }), sizeof(union Option_8499F5));
  else if (String__eq(s, string("Off"))) Type_assign(result, &((struct Some_776961) { .type = TSome_776961, .value = tc_TempControlMixed_FanCmd_Type_Off }), sizeof(union Option_8499F5));
  else Type_assign(result, &((struct None_1AEC2C) { .type = TNone_1AEC2C }), sizeof(union Option_8499F5));
}

void tc_TempControlMixed_FanCmd_Type_byOrdinal(STACK_FRAME Option_8499F5 result, Z n) {
  switch ((tc_TempControlMixed_FanCmd_Type) n) {
    case tc_TempControlMixed_FanCmd_Type_On: Type_assign(result, &((struct Some_776961) { .type = TSome_776961, .value = tc_TempControlMixed_FanCmd_Type_On }), sizeof(union Option_8499F5)); return;
    case tc_TempControlMixed_FanCmd_Type_Off: Type_assign(result, &((struct Some_776961) { .type = TSome_776961, .value = tc_TempControlMixed_FanCmd_Type_Off }), sizeof(union Option_8499F5)); return;
    default: Type_assign(result, &((struct None_1AEC2C) { .type = TNone_1AEC2C }), sizeof(union Option_8499F5)); return;
  }
}

Z tc_TempControlMixed_FanCmd_Type_numOfElements(void) {
  return Z_C(2);
}

void tc_TempControlMixed_FanCmd_Type_cprint(tc_TempControlMixed_FanCmd_Type this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  switch (this) {
    case tc_TempControlMixed_FanCmd_Type_On: String_cprint(string("On"), isOut); return;
    case tc_TempControlMixed_FanCmd_Type_Off: String_cprint(string("Off"), isOut); return;
  }
  #endif
}

void tc_TempControlMixed_FanCmd_Type_string_(STACK_FRAME String result, tc_TempControlMixed_FanCmd_Type this) {
  DeclNewStackFrame(caller, "FanCmd.scala", "tc_TempControlMixed_FanCmd_Type", "string", 0);
  switch (this) {
    case tc_TempControlMixed_FanCmd_Type_On: String_string_(SF result, string("On")); return;
    case tc_TempControlMixed_FanCmd_Type_Off: String_string_(SF result, string("Off")); return;
  }
}