#include <all.h>

// tc.Base_Types.String_Payload

B tc_Base_Types_String_Payload__eq(tc_Base_Types_String_Payload this, tc_Base_Types_String_Payload other) {
  if (String__ne((String) &this->value, (String) &other->value)) return F;
  return T;
}

B tc_Base_Types_String_Payload__equiv(tc_Base_Types_String_Payload this, tc_Base_Types_String_Payload other) {
  if (String__inequiv((String) &this->value, (String) &other->value)) return F;
  return T;
}

B tc_Base_Types_String_Payload__ne(tc_Base_Types_String_Payload this, tc_Base_Types_String_Payload other);
B tc_Base_Types_String_Payload__inequiv(tc_Base_Types_String_Payload this, tc_Base_Types_String_Payload other);

void tc_Base_Types_String_Payload_string_(STACK_FRAME String result, tc_Base_Types_String_Payload this) {
  DeclNewStackFrame(caller, "Base_Types.scala", "tc.Base_Types.String_Payload", "string", 0);
  String_string_(SF result, string("String_Payload("));
  String_string_(SF result, (String) &this->value);
  String_string_(SF result, string(")"));
}

void tc_Base_Types_String_Payload_cprint(tc_Base_Types_String_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("String_Payload("), isOut);
  String_cprint((String) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_Base_Types_String_Payload__is(STACK_FRAME void* this);
tc_Base_Types_String_Payload tc_Base_Types_String_Payload__as(STACK_FRAME void *this);

void tc_Base_Types_String_Payload_apply(STACK_FRAME tc_Base_Types_String_Payload this, String value) {
  DeclNewStackFrame(caller, "Base_Types.scala", "tc.Base_Types.String_Payload", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct StaticString));
}