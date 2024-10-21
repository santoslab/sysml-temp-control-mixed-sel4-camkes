#include <all.h>

// Some[tc.Isolette_Data_Model.ValueStatus.Type]

B Some_21C1E5__eq(Some_21C1E5 this, Some_21C1E5 other) {
  if (tc_Isolette_Data_Model_ValueStatus_Type__ne(this->value, other->value)) return F;
  return T;
}

B Some_21C1E5__equiv(Some_21C1E5 this, Some_21C1E5 other) {
  if (tc_Isolette_Data_Model_ValueStatus_Type__inequiv(this->value, other->value)) return F;
  return T;
}

B Some_21C1E5__ne(Some_21C1E5 this, Some_21C1E5 other);
B Some_21C1E5__inequiv(Some_21C1E5 this, Some_21C1E5 other);

void Some_21C1E5_string_(STACK_FRAME String result, Some_21C1E5 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  tc_Isolette_Data_Model_ValueStatus_Type_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void Some_21C1E5_cprint(Some_21C1E5 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  tc_Isolette_Data_Model_ValueStatus_Type_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_21C1E5__is(STACK_FRAME void* this);
Some_21C1E5 Some_21C1E5__as(STACK_FRAME void *this);

void Some_21C1E5_apply(STACK_FRAME Some_21C1E5 this, tc_Isolette_Data_Model_ValueStatus_Type value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_21C1E5", "apply", 0);
  this->value = value;
}