#include <all.h>

// tc.Isolette_Data_Model.TempWstatus

B tc_Isolette_Data_Model_TempWstatus__eq(tc_Isolette_Data_Model_TempWstatus this, tc_Isolette_Data_Model_TempWstatus other) {
  if (F32__ne(this->degrees, other->degrees)) return F;
  if (tc_Isolette_Data_Model_ValueStatus_Type__ne(this->status, other->status)) return F;
  return T;
}

B tc_Isolette_Data_Model_TempWstatus__equiv(tc_Isolette_Data_Model_TempWstatus this, tc_Isolette_Data_Model_TempWstatus other) {
  if (F32__inequiv(this->degrees, other->degrees)) return F;
  if (tc_Isolette_Data_Model_ValueStatus_Type__inequiv(this->status, other->status)) return F;
  return T;
}

B tc_Isolette_Data_Model_TempWstatus__ne(tc_Isolette_Data_Model_TempWstatus this, tc_Isolette_Data_Model_TempWstatus other);
B tc_Isolette_Data_Model_TempWstatus__inequiv(tc_Isolette_Data_Model_TempWstatus this, tc_Isolette_Data_Model_TempWstatus other);

void tc_Isolette_Data_Model_TempWstatus_string_(STACK_FRAME String result, tc_Isolette_Data_Model_TempWstatus this) {
  DeclNewStackFrame(caller, "TempWstatus.scala", "tc.Isolette_Data_Model.TempWstatus", "string", 0);
  String_string_(SF result, string("TempWstatus("));
  String sep = string(", ");
  F32_string_(SF result, this->degrees);
  String_string_(SF result, sep);
  tc_Isolette_Data_Model_ValueStatus_Type_string_(SF result, this->status);
  String_string_(SF result, string(")"));
}

void tc_Isolette_Data_Model_TempWstatus_cprint(tc_Isolette_Data_Model_TempWstatus this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("TempWstatus("), isOut);
  String sep = string(", ");
  F32_cprint(this->degrees, isOut);
  String_cprint(sep, isOut);
  tc_Isolette_Data_Model_ValueStatus_Type_cprint(this->status, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_Isolette_Data_Model_TempWstatus__is(STACK_FRAME void* this);
tc_Isolette_Data_Model_TempWstatus tc_Isolette_Data_Model_TempWstatus__as(STACK_FRAME void *this);

void tc_Isolette_Data_Model_TempWstatus_apply(STACK_FRAME tc_Isolette_Data_Model_TempWstatus this, F32 degrees, tc_Isolette_Data_Model_ValueStatus_Type status) {
  DeclNewStackFrame(caller, "TempWstatus.scala", "tc.Isolette_Data_Model.TempWstatus", "apply", 0);
  this->degrees = degrees;
  this->status = status;
}

void tc_Isolette_Data_Model_TempWstatus_example(STACK_FRAME tc_Isolette_Data_Model_TempWstatus result) {
  DeclNewStackFrame(caller, "TempWstatus.scala", "tc.Isolette_Data_Model.TempWstatus", "example", 0);
  F32 t_1 = tc_Base_Types_Float_32_example(SF_LAST);
  DeclNewOption_570179(t_2);
  tc_Isolette_Data_Model_ValueStatus_Type_byOrdinal(SF (Option_570179) &t_2, Z_C(0));
  tc_Isolette_Data_Model_ValueStatus_Type t_3 = Option_570179_get_(SF ((Option_570179) &t_2));
  DeclNewtc_Isolette_Data_Model_TempWstatus(t_0);
  tc_Isolette_Data_Model_TempWstatus_apply(SF &t_0, t_1, t_3);
  Type_assign(result, (&t_0), sizeof(struct tc_Isolette_Data_Model_TempWstatus));
  return;
}