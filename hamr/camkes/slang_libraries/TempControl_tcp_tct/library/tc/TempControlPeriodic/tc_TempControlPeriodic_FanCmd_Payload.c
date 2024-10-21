#include <all.h>

// tc.TempControlPeriodic.FanCmd_Payload

B tc_TempControlPeriodic_FanCmd_Payload__eq(tc_TempControlPeriodic_FanCmd_Payload this, tc_TempControlPeriodic_FanCmd_Payload other) {
  if (tc_TempControlPeriodic_FanCmd_Type__ne(this->value, other->value)) return F;
  return T;
}

B tc_TempControlPeriodic_FanCmd_Payload__equiv(tc_TempControlPeriodic_FanCmd_Payload this, tc_TempControlPeriodic_FanCmd_Payload other) {
  if (tc_TempControlPeriodic_FanCmd_Type__inequiv(this->value, other->value)) return F;
  return T;
}

B tc_TempControlPeriodic_FanCmd_Payload__ne(tc_TempControlPeriodic_FanCmd_Payload this, tc_TempControlPeriodic_FanCmd_Payload other);
B tc_TempControlPeriodic_FanCmd_Payload__inequiv(tc_TempControlPeriodic_FanCmd_Payload this, tc_TempControlPeriodic_FanCmd_Payload other);

void tc_TempControlPeriodic_FanCmd_Payload_string_(STACK_FRAME String result, tc_TempControlPeriodic_FanCmd_Payload this) {
  DeclNewStackFrame(caller, "FanCmd.scala", "tc.TempControlPeriodic.FanCmd_Payload", "string", 0);
  String_string_(SF result, string("FanCmd_Payload("));
  tc_TempControlPeriodic_FanCmd_Type_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void tc_TempControlPeriodic_FanCmd_Payload_cprint(tc_TempControlPeriodic_FanCmd_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("FanCmd_Payload("), isOut);
  tc_TempControlPeriodic_FanCmd_Type_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_TempControlPeriodic_FanCmd_Payload__is(STACK_FRAME void* this);
tc_TempControlPeriodic_FanCmd_Payload tc_TempControlPeriodic_FanCmd_Payload__as(STACK_FRAME void *this);

void tc_TempControlPeriodic_FanCmd_Payload_apply(STACK_FRAME tc_TempControlPeriodic_FanCmd_Payload this, tc_TempControlPeriodic_FanCmd_Type value) {
  DeclNewStackFrame(caller, "FanCmd.scala", "tc.TempControlPeriodic.FanCmd_Payload", "apply", 0);
  this->value = value;
}