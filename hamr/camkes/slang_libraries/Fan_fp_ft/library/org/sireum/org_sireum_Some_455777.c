#include <all.h>

// Some[tc.Isolette_Data_Model.Monitor_Mode.Type]

B Some_455777__eq(Some_455777 this, Some_455777 other) {
  if (tc_Isolette_Data_Model_Monitor_Mode_Type__ne(this->value, other->value)) return F;
  return T;
}

B Some_455777__equiv(Some_455777 this, Some_455777 other) {
  if (tc_Isolette_Data_Model_Monitor_Mode_Type__inequiv(this->value, other->value)) return F;
  return T;
}

B Some_455777__ne(Some_455777 this, Some_455777 other);
B Some_455777__inequiv(Some_455777 this, Some_455777 other);

void Some_455777_string_(STACK_FRAME String result, Some_455777 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  tc_Isolette_Data_Model_Monitor_Mode_Type_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void Some_455777_cprint(Some_455777 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  tc_Isolette_Data_Model_Monitor_Mode_Type_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_455777__is(STACK_FRAME void* this);
Some_455777 Some_455777__as(STACK_FRAME void *this);

void Some_455777_apply(STACK_FRAME Some_455777 this, tc_Isolette_Data_Model_Monitor_Mode_Type value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_455777", "apply", 0);
  this->value = value;
}