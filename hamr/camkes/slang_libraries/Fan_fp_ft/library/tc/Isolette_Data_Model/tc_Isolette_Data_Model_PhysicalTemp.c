#include <all.h>

// tc.Isolette_Data_Model.PhysicalTemp

B tc_Isolette_Data_Model_PhysicalTemp__eq(tc_Isolette_Data_Model_PhysicalTemp this, tc_Isolette_Data_Model_PhysicalTemp other) {
  if (F32__ne(this->degrees, other->degrees)) return F;
  return T;
}

B tc_Isolette_Data_Model_PhysicalTemp__equiv(tc_Isolette_Data_Model_PhysicalTemp this, tc_Isolette_Data_Model_PhysicalTemp other) {
  if (F32__inequiv(this->degrees, other->degrees)) return F;
  return T;
}

B tc_Isolette_Data_Model_PhysicalTemp__ne(tc_Isolette_Data_Model_PhysicalTemp this, tc_Isolette_Data_Model_PhysicalTemp other);
B tc_Isolette_Data_Model_PhysicalTemp__inequiv(tc_Isolette_Data_Model_PhysicalTemp this, tc_Isolette_Data_Model_PhysicalTemp other);

void tc_Isolette_Data_Model_PhysicalTemp_string_(STACK_FRAME String result, tc_Isolette_Data_Model_PhysicalTemp this) {
  DeclNewStackFrame(caller, "PhysicalTemp.scala", "tc.Isolette_Data_Model.PhysicalTemp", "string", 0);
  String_string_(SF result, string("PhysicalTemp("));
  F32_string_(SF result, this->degrees);
  String_string_(SF result, string(")"));
}

void tc_Isolette_Data_Model_PhysicalTemp_cprint(tc_Isolette_Data_Model_PhysicalTemp this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("PhysicalTemp("), isOut);
  F32_cprint(this->degrees, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_Isolette_Data_Model_PhysicalTemp__is(STACK_FRAME void* this);
tc_Isolette_Data_Model_PhysicalTemp tc_Isolette_Data_Model_PhysicalTemp__as(STACK_FRAME void *this);

void tc_Isolette_Data_Model_PhysicalTemp_apply(STACK_FRAME tc_Isolette_Data_Model_PhysicalTemp this, F32 degrees) {
  DeclNewStackFrame(caller, "PhysicalTemp.scala", "tc.Isolette_Data_Model.PhysicalTemp", "apply", 0);
  this->degrees = degrees;
}

void tc_Isolette_Data_Model_PhysicalTemp_example(STACK_FRAME tc_Isolette_Data_Model_PhysicalTemp result) {
  DeclNewStackFrame(caller, "PhysicalTemp.scala", "tc.Isolette_Data_Model.PhysicalTemp", "example", 0);
  F32 t_1 = tc_Base_Types_Float_32_example(SF_LAST);
  DeclNewtc_Isolette_Data_Model_PhysicalTemp(t_0);
  tc_Isolette_Data_Model_PhysicalTemp_apply(SF &t_0, t_1);
  Type_assign(result, (&t_0), sizeof(struct tc_Isolette_Data_Model_PhysicalTemp));
  return;
}