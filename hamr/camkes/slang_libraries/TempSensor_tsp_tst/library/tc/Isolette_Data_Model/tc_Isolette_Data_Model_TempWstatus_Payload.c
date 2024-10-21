#include <all.h>

// tc.Isolette_Data_Model.TempWstatus_Payload

B tc_Isolette_Data_Model_TempWstatus_Payload__eq(tc_Isolette_Data_Model_TempWstatus_Payload this, tc_Isolette_Data_Model_TempWstatus_Payload other) {
  if (tc_Isolette_Data_Model_TempWstatus__ne((tc_Isolette_Data_Model_TempWstatus) &this->value, (tc_Isolette_Data_Model_TempWstatus) &other->value)) return F;
  return T;
}

B tc_Isolette_Data_Model_TempWstatus_Payload__equiv(tc_Isolette_Data_Model_TempWstatus_Payload this, tc_Isolette_Data_Model_TempWstatus_Payload other) {
  if (tc_Isolette_Data_Model_TempWstatus__inequiv((tc_Isolette_Data_Model_TempWstatus) &this->value, (tc_Isolette_Data_Model_TempWstatus) &other->value)) return F;
  return T;
}

B tc_Isolette_Data_Model_TempWstatus_Payload__ne(tc_Isolette_Data_Model_TempWstatus_Payload this, tc_Isolette_Data_Model_TempWstatus_Payload other);
B tc_Isolette_Data_Model_TempWstatus_Payload__inequiv(tc_Isolette_Data_Model_TempWstatus_Payload this, tc_Isolette_Data_Model_TempWstatus_Payload other);

void tc_Isolette_Data_Model_TempWstatus_Payload_string_(STACK_FRAME String result, tc_Isolette_Data_Model_TempWstatus_Payload this) {
  DeclNewStackFrame(caller, "TempWstatus.scala", "tc.Isolette_Data_Model.TempWstatus_Payload", "string", 0);
  String_string_(SF result, string("TempWstatus_Payload("));
  tc_Isolette_Data_Model_TempWstatus_string_(SF result, (tc_Isolette_Data_Model_TempWstatus) &this->value);
  String_string_(SF result, string(")"));
}

void tc_Isolette_Data_Model_TempWstatus_Payload_cprint(tc_Isolette_Data_Model_TempWstatus_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("TempWstatus_Payload("), isOut);
  tc_Isolette_Data_Model_TempWstatus_cprint((tc_Isolette_Data_Model_TempWstatus) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_Isolette_Data_Model_TempWstatus_Payload__is(STACK_FRAME void* this);
tc_Isolette_Data_Model_TempWstatus_Payload tc_Isolette_Data_Model_TempWstatus_Payload__as(STACK_FRAME void *this);

void tc_Isolette_Data_Model_TempWstatus_Payload_apply(STACK_FRAME tc_Isolette_Data_Model_TempWstatus_Payload this, tc_Isolette_Data_Model_TempWstatus value) {
  DeclNewStackFrame(caller, "TempWstatus.scala", "tc.Isolette_Data_Model.TempWstatus_Payload", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct tc_Isolette_Data_Model_TempWstatus));
}