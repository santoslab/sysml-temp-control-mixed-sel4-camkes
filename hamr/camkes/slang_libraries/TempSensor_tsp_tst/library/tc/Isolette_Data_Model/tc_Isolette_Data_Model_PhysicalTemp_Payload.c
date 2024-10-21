#include <all.h>

// tc.Isolette_Data_Model.PhysicalTemp_Payload

B tc_Isolette_Data_Model_PhysicalTemp_Payload__eq(tc_Isolette_Data_Model_PhysicalTemp_Payload this, tc_Isolette_Data_Model_PhysicalTemp_Payload other) {
  if (tc_Isolette_Data_Model_PhysicalTemp__ne((tc_Isolette_Data_Model_PhysicalTemp) &this->value, (tc_Isolette_Data_Model_PhysicalTemp) &other->value)) return F;
  return T;
}

B tc_Isolette_Data_Model_PhysicalTemp_Payload__equiv(tc_Isolette_Data_Model_PhysicalTemp_Payload this, tc_Isolette_Data_Model_PhysicalTemp_Payload other) {
  if (tc_Isolette_Data_Model_PhysicalTemp__inequiv((tc_Isolette_Data_Model_PhysicalTemp) &this->value, (tc_Isolette_Data_Model_PhysicalTemp) &other->value)) return F;
  return T;
}

B tc_Isolette_Data_Model_PhysicalTemp_Payload__ne(tc_Isolette_Data_Model_PhysicalTemp_Payload this, tc_Isolette_Data_Model_PhysicalTemp_Payload other);
B tc_Isolette_Data_Model_PhysicalTemp_Payload__inequiv(tc_Isolette_Data_Model_PhysicalTemp_Payload this, tc_Isolette_Data_Model_PhysicalTemp_Payload other);

void tc_Isolette_Data_Model_PhysicalTemp_Payload_string_(STACK_FRAME String result, tc_Isolette_Data_Model_PhysicalTemp_Payload this) {
  DeclNewStackFrame(caller, "PhysicalTemp.scala", "tc.Isolette_Data_Model.PhysicalTemp_Payload", "string", 0);
  String_string_(SF result, string("PhysicalTemp_Payload("));
  tc_Isolette_Data_Model_PhysicalTemp_string_(SF result, (tc_Isolette_Data_Model_PhysicalTemp) &this->value);
  String_string_(SF result, string(")"));
}

void tc_Isolette_Data_Model_PhysicalTemp_Payload_cprint(tc_Isolette_Data_Model_PhysicalTemp_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("PhysicalTemp_Payload("), isOut);
  tc_Isolette_Data_Model_PhysicalTemp_cprint((tc_Isolette_Data_Model_PhysicalTemp) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_Isolette_Data_Model_PhysicalTemp_Payload__is(STACK_FRAME void* this);
tc_Isolette_Data_Model_PhysicalTemp_Payload tc_Isolette_Data_Model_PhysicalTemp_Payload__as(STACK_FRAME void *this);

void tc_Isolette_Data_Model_PhysicalTemp_Payload_apply(STACK_FRAME tc_Isolette_Data_Model_PhysicalTemp_Payload this, tc_Isolette_Data_Model_PhysicalTemp value) {
  DeclNewStackFrame(caller, "PhysicalTemp.scala", "tc.Isolette_Data_Model.PhysicalTemp_Payload", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct tc_Isolette_Data_Model_PhysicalTemp));
}