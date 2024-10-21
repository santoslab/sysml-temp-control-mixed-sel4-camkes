#include <all.h>

// Some[tc.Isolette_Data_Model.Regulator_Mode.Type]

B Some_C790DA__eq(Some_C790DA this, Some_C790DA other) {
  if (tc_Isolette_Data_Model_Regulator_Mode_Type__ne(this->value, other->value)) return F;
  return T;
}

B Some_C790DA__equiv(Some_C790DA this, Some_C790DA other) {
  if (tc_Isolette_Data_Model_Regulator_Mode_Type__inequiv(this->value, other->value)) return F;
  return T;
}

B Some_C790DA__ne(Some_C790DA this, Some_C790DA other);
B Some_C790DA__inequiv(Some_C790DA this, Some_C790DA other);

void Some_C790DA_string_(STACK_FRAME String result, Some_C790DA this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  tc_Isolette_Data_Model_Regulator_Mode_Type_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void Some_C790DA_cprint(Some_C790DA this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  tc_Isolette_Data_Model_Regulator_Mode_Type_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_C790DA__is(STACK_FRAME void* this);
Some_C790DA Some_C790DA__as(STACK_FRAME void *this);

void Some_C790DA_apply(STACK_FRAME Some_C790DA this, tc_Isolette_Data_Model_Regulator_Mode_Type value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_C790DA", "apply", 0);
  this->value = value;
}