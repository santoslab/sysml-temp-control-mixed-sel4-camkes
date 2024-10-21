#include <all.h>

// Some[tc.Isolette_Data_Model.Status.Type]

B Some_140719__eq(Some_140719 this, Some_140719 other) {
  if (tc_Isolette_Data_Model_Status_Type__ne(this->value, other->value)) return F;
  return T;
}

B Some_140719__equiv(Some_140719 this, Some_140719 other) {
  if (tc_Isolette_Data_Model_Status_Type__inequiv(this->value, other->value)) return F;
  return T;
}

B Some_140719__ne(Some_140719 this, Some_140719 other);
B Some_140719__inequiv(Some_140719 this, Some_140719 other);

void Some_140719_string_(STACK_FRAME String result, Some_140719 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  tc_Isolette_Data_Model_Status_Type_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void Some_140719_cprint(Some_140719 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  tc_Isolette_Data_Model_Status_Type_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_140719__is(STACK_FRAME void* this);
Some_140719 Some_140719__as(STACK_FRAME void *this);

void Some_140719_apply(STACK_FRAME Some_140719 this, tc_Isolette_Data_Model_Status_Type value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_140719", "apply", 0);
  this->value = value;
}