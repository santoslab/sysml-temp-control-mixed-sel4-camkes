#include <all.h>

// tc.Isolette_Environment.Heat_Payload

B tc_Isolette_Environment_Heat_Payload__eq(tc_Isolette_Environment_Heat_Payload this, tc_Isolette_Environment_Heat_Payload other) {
  if (tc_Isolette_Environment_Heat__ne((tc_Isolette_Environment_Heat) &this->value, (tc_Isolette_Environment_Heat) &other->value)) return F;
  return T;
}

B tc_Isolette_Environment_Heat_Payload__equiv(tc_Isolette_Environment_Heat_Payload this, tc_Isolette_Environment_Heat_Payload other) {
  if (tc_Isolette_Environment_Heat__inequiv((tc_Isolette_Environment_Heat) &this->value, (tc_Isolette_Environment_Heat) &other->value)) return F;
  return T;
}

B tc_Isolette_Environment_Heat_Payload__ne(tc_Isolette_Environment_Heat_Payload this, tc_Isolette_Environment_Heat_Payload other);
B tc_Isolette_Environment_Heat_Payload__inequiv(tc_Isolette_Environment_Heat_Payload this, tc_Isolette_Environment_Heat_Payload other);

void tc_Isolette_Environment_Heat_Payload_string_(STACK_FRAME String result, tc_Isolette_Environment_Heat_Payload this) {
  DeclNewStackFrame(caller, "Heat.scala", "tc.Isolette_Environment.Heat_Payload", "string", 0);
  String_string_(SF result, string("Heat_Payload("));
  tc_Isolette_Environment_Heat_string_(SF result, (tc_Isolette_Environment_Heat) &this->value);
  String_string_(SF result, string(")"));
}

void tc_Isolette_Environment_Heat_Payload_cprint(tc_Isolette_Environment_Heat_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Heat_Payload("), isOut);
  tc_Isolette_Environment_Heat_cprint((tc_Isolette_Environment_Heat) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_Isolette_Environment_Heat_Payload__is(STACK_FRAME void* this);
tc_Isolette_Environment_Heat_Payload tc_Isolette_Environment_Heat_Payload__as(STACK_FRAME void *this);

void tc_Isolette_Environment_Heat_Payload_apply(STACK_FRAME tc_Isolette_Environment_Heat_Payload this, tc_Isolette_Environment_Heat value) {
  DeclNewStackFrame(caller, "Heat.scala", "tc.Isolette_Environment.Heat_Payload", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct tc_Isolette_Environment_Heat));
}