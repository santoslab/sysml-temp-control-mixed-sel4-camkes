#include <all.h>

// tc.Isolette_Data_Model.Temp

B tc_Isolette_Data_Model_Temp__eq(tc_Isolette_Data_Model_Temp this, tc_Isolette_Data_Model_Temp other) {
  if (F32__ne(this->degrees, other->degrees)) return F;
  return T;
}

B tc_Isolette_Data_Model_Temp__equiv(tc_Isolette_Data_Model_Temp this, tc_Isolette_Data_Model_Temp other) {
  if (F32__inequiv(this->degrees, other->degrees)) return F;
  return T;
}

B tc_Isolette_Data_Model_Temp__ne(tc_Isolette_Data_Model_Temp this, tc_Isolette_Data_Model_Temp other);
B tc_Isolette_Data_Model_Temp__inequiv(tc_Isolette_Data_Model_Temp this, tc_Isolette_Data_Model_Temp other);

void tc_Isolette_Data_Model_Temp_string_(STACK_FRAME String result, tc_Isolette_Data_Model_Temp this) {
  DeclNewStackFrame(caller, "Temp.scala", "tc.Isolette_Data_Model.Temp", "string", 0);
  String_string_(SF result, string("Temp("));
  F32_string_(SF result, this->degrees);
  String_string_(SF result, string(")"));
}

void tc_Isolette_Data_Model_Temp_cprint(tc_Isolette_Data_Model_Temp this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Temp("), isOut);
  F32_cprint(this->degrees, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_Isolette_Data_Model_Temp__is(STACK_FRAME void* this);
tc_Isolette_Data_Model_Temp tc_Isolette_Data_Model_Temp__as(STACK_FRAME void *this);

void tc_Isolette_Data_Model_Temp_apply(STACK_FRAME tc_Isolette_Data_Model_Temp this, F32 degrees) {
  DeclNewStackFrame(caller, "Temp.scala", "tc.Isolette_Data_Model.Temp", "apply", 0);
  this->degrees = degrees;
}

void tc_Isolette_Data_Model_Temp_example(STACK_FRAME tc_Isolette_Data_Model_Temp result) {
  DeclNewStackFrame(caller, "Temp.scala", "tc.Isolette_Data_Model.Temp", "example", 0);
  F32 t_1 = tc_Base_Types_Float_32_example(SF_LAST);
  DeclNewtc_Isolette_Data_Model_Temp(t_0);
  tc_Isolette_Data_Model_Temp_apply(SF &t_0, t_1);
  Type_assign(result, (&t_0), sizeof(struct tc_Isolette_Data_Model_Temp));
  return;
}