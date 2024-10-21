#include <all.h>

// tc.Isolette_Data_Model.ValueStatus_Payload

B tc_Isolette_Data_Model_ValueStatus_Payload__eq(tc_Isolette_Data_Model_ValueStatus_Payload this, tc_Isolette_Data_Model_ValueStatus_Payload other) {
  if (tc_Isolette_Data_Model_ValueStatus_Type__ne(this->value, other->value)) return F;
  return T;
}

B tc_Isolette_Data_Model_ValueStatus_Payload__equiv(tc_Isolette_Data_Model_ValueStatus_Payload this, tc_Isolette_Data_Model_ValueStatus_Payload other) {
  if (tc_Isolette_Data_Model_ValueStatus_Type__inequiv(this->value, other->value)) return F;
  return T;
}

B tc_Isolette_Data_Model_ValueStatus_Payload__ne(tc_Isolette_Data_Model_ValueStatus_Payload this, tc_Isolette_Data_Model_ValueStatus_Payload other);
B tc_Isolette_Data_Model_ValueStatus_Payload__inequiv(tc_Isolette_Data_Model_ValueStatus_Payload this, tc_Isolette_Data_Model_ValueStatus_Payload other);

void tc_Isolette_Data_Model_ValueStatus_Payload_string_(STACK_FRAME String result, tc_Isolette_Data_Model_ValueStatus_Payload this) {
  DeclNewStackFrame(caller, "ValueStatus.scala", "tc.Isolette_Data_Model.ValueStatus_Payload", "string", 0);
  String_string_(SF result, string("ValueStatus_Payload("));
  tc_Isolette_Data_Model_ValueStatus_Type_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void tc_Isolette_Data_Model_ValueStatus_Payload_cprint(tc_Isolette_Data_Model_ValueStatus_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("ValueStatus_Payload("), isOut);
  tc_Isolette_Data_Model_ValueStatus_Type_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_Isolette_Data_Model_ValueStatus_Payload__is(STACK_FRAME void* this);
tc_Isolette_Data_Model_ValueStatus_Payload tc_Isolette_Data_Model_ValueStatus_Payload__as(STACK_FRAME void *this);

void tc_Isolette_Data_Model_ValueStatus_Payload_apply(STACK_FRAME tc_Isolette_Data_Model_ValueStatus_Payload this, tc_Isolette_Data_Model_ValueStatus_Type value) {
  DeclNewStackFrame(caller, "ValueStatus.scala", "tc.Isolette_Data_Model.ValueStatus_Payload", "apply", 0);
  this->value = value;
}