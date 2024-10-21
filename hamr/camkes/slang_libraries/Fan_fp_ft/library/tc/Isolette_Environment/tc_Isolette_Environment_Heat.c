#include <all.h>

// tc.Isolette_Environment.Heat

B tc_Isolette_Environment_Heat__eq(tc_Isolette_Environment_Heat this, tc_Isolette_Environment_Heat other) {
  if (B__ne(this->dummyField, other->dummyField)) return F;
  return T;
}

B tc_Isolette_Environment_Heat__equiv(tc_Isolette_Environment_Heat this, tc_Isolette_Environment_Heat other) {
  if (B__inequiv(this->dummyField, other->dummyField)) return F;
  return T;
}

B tc_Isolette_Environment_Heat__ne(tc_Isolette_Environment_Heat this, tc_Isolette_Environment_Heat other);
B tc_Isolette_Environment_Heat__inequiv(tc_Isolette_Environment_Heat this, tc_Isolette_Environment_Heat other);

void tc_Isolette_Environment_Heat_string_(STACK_FRAME String result, tc_Isolette_Environment_Heat this) {
  DeclNewStackFrame(caller, "Heat.scala", "tc.Isolette_Environment.Heat", "string", 0);
  String_string_(SF result, string("Heat("));
  B_string_(SF result, this->dummyField);
  String_string_(SF result, string(")"));
}

void tc_Isolette_Environment_Heat_cprint(tc_Isolette_Environment_Heat this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Heat("), isOut);
  B_cprint(this->dummyField, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_Isolette_Environment_Heat__is(STACK_FRAME void* this);
tc_Isolette_Environment_Heat tc_Isolette_Environment_Heat__as(STACK_FRAME void *this);

void tc_Isolette_Environment_Heat_apply(STACK_FRAME tc_Isolette_Environment_Heat this, B dummyField) {
  DeclNewStackFrame(caller, "Heat.scala", "tc.Isolette_Environment.Heat", "apply", 0);
  this->dummyField = dummyField;
}

void tc_Isolette_Environment_Heat_example(STACK_FRAME tc_Isolette_Environment_Heat result) {
  DeclNewStackFrame(caller, "Heat.scala", "tc.Isolette_Environment.Heat", "example", 0);
  B t_1 = tc_Base_Types_Boolean_example(SF_LAST);
  DeclNewtc_Isolette_Environment_Heat(t_0);
  tc_Isolette_Environment_Heat_apply(SF &t_0, t_1);
  Type_assign(result, (&t_0), sizeof(struct tc_Isolette_Environment_Heat));
  return;
}