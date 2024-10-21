#include <all.h>

// tc.Isolette_Data_Model.Temp_Payload

B tc_Isolette_Data_Model_Temp_Payload__eq(tc_Isolette_Data_Model_Temp_Payload this, tc_Isolette_Data_Model_Temp_Payload other) {
  if (tc_Isolette_Data_Model_Temp__ne((tc_Isolette_Data_Model_Temp) &this->value, (tc_Isolette_Data_Model_Temp) &other->value)) return F;
  return T;
}

B tc_Isolette_Data_Model_Temp_Payload__equiv(tc_Isolette_Data_Model_Temp_Payload this, tc_Isolette_Data_Model_Temp_Payload other) {
  if (tc_Isolette_Data_Model_Temp__inequiv((tc_Isolette_Data_Model_Temp) &this->value, (tc_Isolette_Data_Model_Temp) &other->value)) return F;
  return T;
}

B tc_Isolette_Data_Model_Temp_Payload__ne(tc_Isolette_Data_Model_Temp_Payload this, tc_Isolette_Data_Model_Temp_Payload other);
B tc_Isolette_Data_Model_Temp_Payload__inequiv(tc_Isolette_Data_Model_Temp_Payload this, tc_Isolette_Data_Model_Temp_Payload other);

void tc_Isolette_Data_Model_Temp_Payload_string_(STACK_FRAME String result, tc_Isolette_Data_Model_Temp_Payload this) {
  DeclNewStackFrame(caller, "Temp.scala", "tc.Isolette_Data_Model.Temp_Payload", "string", 0);
  String_string_(SF result, string("Temp_Payload("));
  tc_Isolette_Data_Model_Temp_string_(SF result, (tc_Isolette_Data_Model_Temp) &this->value);
  String_string_(SF result, string(")"));
}

void tc_Isolette_Data_Model_Temp_Payload_cprint(tc_Isolette_Data_Model_Temp_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Temp_Payload("), isOut);
  tc_Isolette_Data_Model_Temp_cprint((tc_Isolette_Data_Model_Temp) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_Isolette_Data_Model_Temp_Payload__is(STACK_FRAME void* this);
tc_Isolette_Data_Model_Temp_Payload tc_Isolette_Data_Model_Temp_Payload__as(STACK_FRAME void *this);

void tc_Isolette_Data_Model_Temp_Payload_apply(STACK_FRAME tc_Isolette_Data_Model_Temp_Payload this, tc_Isolette_Data_Model_Temp value) {
  DeclNewStackFrame(caller, "Temp.scala", "tc.Isolette_Data_Model.Temp_Payload", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct tc_Isolette_Data_Model_Temp));
}