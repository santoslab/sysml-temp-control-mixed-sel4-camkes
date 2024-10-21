#include <all.h>

// tc.TempControlPeriodic.Temperature_Payload

B tc_TempControlPeriodic_Temperature_Payload__eq(tc_TempControlPeriodic_Temperature_Payload this, tc_TempControlPeriodic_Temperature_Payload other) {
  if (tc_TempControlPeriodic_Temperature__ne((tc_TempControlPeriodic_Temperature) &this->value, (tc_TempControlPeriodic_Temperature) &other->value)) return F;
  return T;
}

B tc_TempControlPeriodic_Temperature_Payload__equiv(tc_TempControlPeriodic_Temperature_Payload this, tc_TempControlPeriodic_Temperature_Payload other) {
  if (tc_TempControlPeriodic_Temperature__inequiv((tc_TempControlPeriodic_Temperature) &this->value, (tc_TempControlPeriodic_Temperature) &other->value)) return F;
  return T;
}

B tc_TempControlPeriodic_Temperature_Payload__ne(tc_TempControlPeriodic_Temperature_Payload this, tc_TempControlPeriodic_Temperature_Payload other);
B tc_TempControlPeriodic_Temperature_Payload__inequiv(tc_TempControlPeriodic_Temperature_Payload this, tc_TempControlPeriodic_Temperature_Payload other);

void tc_TempControlPeriodic_Temperature_Payload_string_(STACK_FRAME String result, tc_TempControlPeriodic_Temperature_Payload this) {
  DeclNewStackFrame(caller, "Temperature.scala", "tc.TempControlPeriodic.Temperature_Payload", "string", 0);
  String_string_(SF result, string("Temperature_Payload("));
  tc_TempControlPeriodic_Temperature_string_(SF result, (tc_TempControlPeriodic_Temperature) &this->value);
  String_string_(SF result, string(")"));
}

void tc_TempControlPeriodic_Temperature_Payload_cprint(tc_TempControlPeriodic_Temperature_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Temperature_Payload("), isOut);
  tc_TempControlPeriodic_Temperature_cprint((tc_TempControlPeriodic_Temperature) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_TempControlPeriodic_Temperature_Payload__is(STACK_FRAME void* this);
tc_TempControlPeriodic_Temperature_Payload tc_TempControlPeriodic_Temperature_Payload__as(STACK_FRAME void *this);

void tc_TempControlPeriodic_Temperature_Payload_apply(STACK_FRAME tc_TempControlPeriodic_Temperature_Payload this, tc_TempControlPeriodic_Temperature value) {
  DeclNewStackFrame(caller, "Temperature.scala", "tc.TempControlPeriodic.Temperature_Payload", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct tc_TempControlPeriodic_Temperature));
}