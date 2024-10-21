#include <all.h>

// tc.Base_Types.Character_Payload

B tc_Base_Types_Character_Payload__eq(tc_Base_Types_Character_Payload this, tc_Base_Types_Character_Payload other) {
  if (C__ne(this->value, other->value)) return F;
  return T;
}

B tc_Base_Types_Character_Payload__equiv(tc_Base_Types_Character_Payload this, tc_Base_Types_Character_Payload other) {
  if (C__inequiv(this->value, other->value)) return F;
  return T;
}

B tc_Base_Types_Character_Payload__ne(tc_Base_Types_Character_Payload this, tc_Base_Types_Character_Payload other);
B tc_Base_Types_Character_Payload__inequiv(tc_Base_Types_Character_Payload this, tc_Base_Types_Character_Payload other);

void tc_Base_Types_Character_Payload_string_(STACK_FRAME String result, tc_Base_Types_Character_Payload this) {
  DeclNewStackFrame(caller, "Base_Types.scala", "tc.Base_Types.Character_Payload", "string", 0);
  String_string_(SF result, string("Character_Payload("));
  C_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void tc_Base_Types_Character_Payload_cprint(tc_Base_Types_Character_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Character_Payload("), isOut);
  C_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_Base_Types_Character_Payload__is(STACK_FRAME void* this);
tc_Base_Types_Character_Payload tc_Base_Types_Character_Payload__as(STACK_FRAME void *this);

void tc_Base_Types_Character_Payload_apply(STACK_FRAME tc_Base_Types_Character_Payload this, C value) {
  DeclNewStackFrame(caller, "Base_Types.scala", "tc.Base_Types.Character_Payload", "apply", 0);
  this->value = value;
}