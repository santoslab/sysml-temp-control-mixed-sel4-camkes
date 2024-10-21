#include <all.h>

// Some[tc.Isolette_Data_Model.On_Off.Type]

B Some_F1808D__eq(Some_F1808D this, Some_F1808D other) {
  if (tc_Isolette_Data_Model_On_Off_Type__ne(this->value, other->value)) return F;
  return T;
}

B Some_F1808D__equiv(Some_F1808D this, Some_F1808D other) {
  if (tc_Isolette_Data_Model_On_Off_Type__inequiv(this->value, other->value)) return F;
  return T;
}

B Some_F1808D__ne(Some_F1808D this, Some_F1808D other);
B Some_F1808D__inequiv(Some_F1808D this, Some_F1808D other);

void Some_F1808D_string_(STACK_FRAME String result, Some_F1808D this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  tc_Isolette_Data_Model_On_Off_Type_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void Some_F1808D_cprint(Some_F1808D this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  tc_Isolette_Data_Model_On_Off_Type_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_F1808D__is(STACK_FRAME void* this);
Some_F1808D Some_F1808D__as(STACK_FRAME void *this);

void Some_F1808D_apply(STACK_FRAME Some_F1808D this, tc_Isolette_Data_Model_On_Off_Type value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_F1808D", "apply", 0);
  this->value = value;
}