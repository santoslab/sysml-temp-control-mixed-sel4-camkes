#include <all.h>

// tc.Base_Types.Integer_Payload

B tc_Base_Types_Integer_Payload__eq(tc_Base_Types_Integer_Payload this, tc_Base_Types_Integer_Payload other) {
  if (Z__ne(this->value, other->value)) return F;
  return T;
}

B tc_Base_Types_Integer_Payload__equiv(tc_Base_Types_Integer_Payload this, tc_Base_Types_Integer_Payload other) {
  if (Z__inequiv(this->value, other->value)) return F;
  return T;
}

B tc_Base_Types_Integer_Payload__ne(tc_Base_Types_Integer_Payload this, tc_Base_Types_Integer_Payload other);
B tc_Base_Types_Integer_Payload__inequiv(tc_Base_Types_Integer_Payload this, tc_Base_Types_Integer_Payload other);

void tc_Base_Types_Integer_Payload_string_(STACK_FRAME String result, tc_Base_Types_Integer_Payload this) {
  DeclNewStackFrame(caller, "Base_Types.scala", "tc.Base_Types.Integer_Payload", "string", 0);
  String_string_(SF result, string("Integer_Payload("));
  Z_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void tc_Base_Types_Integer_Payload_cprint(tc_Base_Types_Integer_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Integer_Payload("), isOut);
  Z_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_Base_Types_Integer_Payload__is(STACK_FRAME void* this);
tc_Base_Types_Integer_Payload tc_Base_Types_Integer_Payload__as(STACK_FRAME void *this);

void tc_Base_Types_Integer_Payload_apply(STACK_FRAME tc_Base_Types_Integer_Payload this, Z value) {
  DeclNewStackFrame(caller, "Base_Types.scala", "tc.Base_Types.Integer_Payload", "apply", 0);
  this->value = value;
}