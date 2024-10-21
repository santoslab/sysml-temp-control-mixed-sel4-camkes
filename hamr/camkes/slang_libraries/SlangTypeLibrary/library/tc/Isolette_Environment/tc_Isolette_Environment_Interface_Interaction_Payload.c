#include <all.h>

// tc.Isolette_Environment.Interface_Interaction_Payload

B tc_Isolette_Environment_Interface_Interaction_Payload__eq(tc_Isolette_Environment_Interface_Interaction_Payload this, tc_Isolette_Environment_Interface_Interaction_Payload other) {
  if (tc_Isolette_Environment_Interface_Interaction__ne((tc_Isolette_Environment_Interface_Interaction) &this->value, (tc_Isolette_Environment_Interface_Interaction) &other->value)) return F;
  return T;
}

B tc_Isolette_Environment_Interface_Interaction_Payload__equiv(tc_Isolette_Environment_Interface_Interaction_Payload this, tc_Isolette_Environment_Interface_Interaction_Payload other) {
  if (tc_Isolette_Environment_Interface_Interaction__inequiv((tc_Isolette_Environment_Interface_Interaction) &this->value, (tc_Isolette_Environment_Interface_Interaction) &other->value)) return F;
  return T;
}

B tc_Isolette_Environment_Interface_Interaction_Payload__ne(tc_Isolette_Environment_Interface_Interaction_Payload this, tc_Isolette_Environment_Interface_Interaction_Payload other);
B tc_Isolette_Environment_Interface_Interaction_Payload__inequiv(tc_Isolette_Environment_Interface_Interaction_Payload this, tc_Isolette_Environment_Interface_Interaction_Payload other);

void tc_Isolette_Environment_Interface_Interaction_Payload_string_(STACK_FRAME String result, tc_Isolette_Environment_Interface_Interaction_Payload this) {
  DeclNewStackFrame(caller, "Interface_Interaction.scala", "tc.Isolette_Environment.Interface_Interaction_Payload", "string", 0);
  String_string_(SF result, string("Interface_Interaction_Payload("));
  tc_Isolette_Environment_Interface_Interaction_string_(SF result, (tc_Isolette_Environment_Interface_Interaction) &this->value);
  String_string_(SF result, string(")"));
}

void tc_Isolette_Environment_Interface_Interaction_Payload_cprint(tc_Isolette_Environment_Interface_Interaction_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Interface_Interaction_Payload("), isOut);
  tc_Isolette_Environment_Interface_Interaction_cprint((tc_Isolette_Environment_Interface_Interaction) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_Isolette_Environment_Interface_Interaction_Payload__is(STACK_FRAME void* this);
tc_Isolette_Environment_Interface_Interaction_Payload tc_Isolette_Environment_Interface_Interaction_Payload__as(STACK_FRAME void *this);

void tc_Isolette_Environment_Interface_Interaction_Payload_apply(STACK_FRAME tc_Isolette_Environment_Interface_Interaction_Payload this, tc_Isolette_Environment_Interface_Interaction value) {
  DeclNewStackFrame(caller, "Interface_Interaction.scala", "tc.Isolette_Environment.Interface_Interaction_Payload", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct tc_Isolette_Environment_Interface_Interaction));
}