#include <all.h>

// tc.TempControlMixed.TempUnit_Payload

B tc_TempControlMixed_TempUnit_Payload__eq(tc_TempControlMixed_TempUnit_Payload this, tc_TempControlMixed_TempUnit_Payload other) {
  if (tc_TempControlMixed_TempUnit_Type__ne(this->value, other->value)) return F;
  return T;
}

B tc_TempControlMixed_TempUnit_Payload__equiv(tc_TempControlMixed_TempUnit_Payload this, tc_TempControlMixed_TempUnit_Payload other) {
  if (tc_TempControlMixed_TempUnit_Type__inequiv(this->value, other->value)) return F;
  return T;
}

B tc_TempControlMixed_TempUnit_Payload__ne(tc_TempControlMixed_TempUnit_Payload this, tc_TempControlMixed_TempUnit_Payload other);
B tc_TempControlMixed_TempUnit_Payload__inequiv(tc_TempControlMixed_TempUnit_Payload this, tc_TempControlMixed_TempUnit_Payload other);

void tc_TempControlMixed_TempUnit_Payload_string_(STACK_FRAME String result, tc_TempControlMixed_TempUnit_Payload this) {
  DeclNewStackFrame(caller, "TempUnit.scala", "tc.TempControlMixed.TempUnit_Payload", "string", 0);
  String_string_(SF result, string("TempUnit_Payload("));
  tc_TempControlMixed_TempUnit_Type_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void tc_TempControlMixed_TempUnit_Payload_cprint(tc_TempControlMixed_TempUnit_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("TempUnit_Payload("), isOut);
  tc_TempControlMixed_TempUnit_Type_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_TempControlMixed_TempUnit_Payload__is(STACK_FRAME void* this);
tc_TempControlMixed_TempUnit_Payload tc_TempControlMixed_TempUnit_Payload__as(STACK_FRAME void *this);

void tc_TempControlMixed_TempUnit_Payload_apply(STACK_FRAME tc_TempControlMixed_TempUnit_Payload this, tc_TempControlMixed_TempUnit_Type value) {
  DeclNewStackFrame(caller, "TempUnit.scala", "tc.TempControlMixed.TempUnit_Payload", "apply", 0);
  this->value = value;
}