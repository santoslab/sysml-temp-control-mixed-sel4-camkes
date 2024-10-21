#include <all.h>

// tc.Isolette_Data_Model.Failure_Flag_Payload

B tc_Isolette_Data_Model_Failure_Flag_Payload__eq(tc_Isolette_Data_Model_Failure_Flag_Payload this, tc_Isolette_Data_Model_Failure_Flag_Payload other) {
  if (tc_Isolette_Data_Model_Failure_Flag__ne((tc_Isolette_Data_Model_Failure_Flag) &this->value, (tc_Isolette_Data_Model_Failure_Flag) &other->value)) return F;
  return T;
}

B tc_Isolette_Data_Model_Failure_Flag_Payload__equiv(tc_Isolette_Data_Model_Failure_Flag_Payload this, tc_Isolette_Data_Model_Failure_Flag_Payload other) {
  if (tc_Isolette_Data_Model_Failure_Flag__inequiv((tc_Isolette_Data_Model_Failure_Flag) &this->value, (tc_Isolette_Data_Model_Failure_Flag) &other->value)) return F;
  return T;
}

B tc_Isolette_Data_Model_Failure_Flag_Payload__ne(tc_Isolette_Data_Model_Failure_Flag_Payload this, tc_Isolette_Data_Model_Failure_Flag_Payload other);
B tc_Isolette_Data_Model_Failure_Flag_Payload__inequiv(tc_Isolette_Data_Model_Failure_Flag_Payload this, tc_Isolette_Data_Model_Failure_Flag_Payload other);

void tc_Isolette_Data_Model_Failure_Flag_Payload_string_(STACK_FRAME String result, tc_Isolette_Data_Model_Failure_Flag_Payload this) {
  DeclNewStackFrame(caller, "Failure_Flag.scala", "tc.Isolette_Data_Model.Failure_Flag_Payload", "string", 0);
  String_string_(SF result, string("Failure_Flag_Payload("));
  tc_Isolette_Data_Model_Failure_Flag_string_(SF result, (tc_Isolette_Data_Model_Failure_Flag) &this->value);
  String_string_(SF result, string(")"));
}

void tc_Isolette_Data_Model_Failure_Flag_Payload_cprint(tc_Isolette_Data_Model_Failure_Flag_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Failure_Flag_Payload("), isOut);
  tc_Isolette_Data_Model_Failure_Flag_cprint((tc_Isolette_Data_Model_Failure_Flag) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_Isolette_Data_Model_Failure_Flag_Payload__is(STACK_FRAME void* this);
tc_Isolette_Data_Model_Failure_Flag_Payload tc_Isolette_Data_Model_Failure_Flag_Payload__as(STACK_FRAME void *this);

void tc_Isolette_Data_Model_Failure_Flag_Payload_apply(STACK_FRAME tc_Isolette_Data_Model_Failure_Flag_Payload this, tc_Isolette_Data_Model_Failure_Flag value) {
  DeclNewStackFrame(caller, "Failure_Flag.scala", "tc.Isolette_Data_Model.Failure_Flag_Payload", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct tc_Isolette_Data_Model_Failure_Flag));
}