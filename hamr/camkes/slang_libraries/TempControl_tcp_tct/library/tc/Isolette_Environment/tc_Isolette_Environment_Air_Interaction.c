#include <all.h>

// tc.Isolette_Environment.Air_Interaction

B tc_Isolette_Environment_Air_Interaction__eq(tc_Isolette_Environment_Air_Interaction this, tc_Isolette_Environment_Air_Interaction other) {
  if (B__ne(this->dummyField, other->dummyField)) return F;
  return T;
}

B tc_Isolette_Environment_Air_Interaction__equiv(tc_Isolette_Environment_Air_Interaction this, tc_Isolette_Environment_Air_Interaction other) {
  if (B__inequiv(this->dummyField, other->dummyField)) return F;
  return T;
}

B tc_Isolette_Environment_Air_Interaction__ne(tc_Isolette_Environment_Air_Interaction this, tc_Isolette_Environment_Air_Interaction other);
B tc_Isolette_Environment_Air_Interaction__inequiv(tc_Isolette_Environment_Air_Interaction this, tc_Isolette_Environment_Air_Interaction other);

void tc_Isolette_Environment_Air_Interaction_string_(STACK_FRAME String result, tc_Isolette_Environment_Air_Interaction this) {
  DeclNewStackFrame(caller, "Air_Interaction.scala", "tc.Isolette_Environment.Air_Interaction", "string", 0);
  String_string_(SF result, string("Air_Interaction("));
  B_string_(SF result, this->dummyField);
  String_string_(SF result, string(")"));
}

void tc_Isolette_Environment_Air_Interaction_cprint(tc_Isolette_Environment_Air_Interaction this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Air_Interaction("), isOut);
  B_cprint(this->dummyField, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_Isolette_Environment_Air_Interaction__is(STACK_FRAME void* this);
tc_Isolette_Environment_Air_Interaction tc_Isolette_Environment_Air_Interaction__as(STACK_FRAME void *this);

void tc_Isolette_Environment_Air_Interaction_apply(STACK_FRAME tc_Isolette_Environment_Air_Interaction this, B dummyField) {
  DeclNewStackFrame(caller, "Air_Interaction.scala", "tc.Isolette_Environment.Air_Interaction", "apply", 0);
  this->dummyField = dummyField;
}

void tc_Isolette_Environment_Air_Interaction_example(STACK_FRAME tc_Isolette_Environment_Air_Interaction result) {
  DeclNewStackFrame(caller, "Air_Interaction.scala", "tc.Isolette_Environment.Air_Interaction", "example", 0);
  B t_1 = tc_Base_Types_Boolean_example(SF_LAST);
  DeclNewtc_Isolette_Environment_Air_Interaction(t_0);
  tc_Isolette_Environment_Air_Interaction_apply(SF &t_0, t_1);
  Type_assign(result, (&t_0), sizeof(struct tc_Isolette_Environment_Air_Interaction));
  return;
}