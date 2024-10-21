#include <all.h>

// tc.Isolette_Data_Model.Failure_Flag

B tc_Isolette_Data_Model_Failure_Flag__eq(tc_Isolette_Data_Model_Failure_Flag this, tc_Isolette_Data_Model_Failure_Flag other) {
  if (B__ne(this->flag, other->flag)) return F;
  return T;
}

B tc_Isolette_Data_Model_Failure_Flag__equiv(tc_Isolette_Data_Model_Failure_Flag this, tc_Isolette_Data_Model_Failure_Flag other) {
  if (B__inequiv(this->flag, other->flag)) return F;
  return T;
}

B tc_Isolette_Data_Model_Failure_Flag__ne(tc_Isolette_Data_Model_Failure_Flag this, tc_Isolette_Data_Model_Failure_Flag other);
B tc_Isolette_Data_Model_Failure_Flag__inequiv(tc_Isolette_Data_Model_Failure_Flag this, tc_Isolette_Data_Model_Failure_Flag other);

void tc_Isolette_Data_Model_Failure_Flag_string_(STACK_FRAME String result, tc_Isolette_Data_Model_Failure_Flag this) {
  DeclNewStackFrame(caller, "Failure_Flag.scala", "tc.Isolette_Data_Model.Failure_Flag", "string", 0);
  String_string_(SF result, string("Failure_Flag("));
  B_string_(SF result, this->flag);
  String_string_(SF result, string(")"));
}

void tc_Isolette_Data_Model_Failure_Flag_cprint(tc_Isolette_Data_Model_Failure_Flag this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Failure_Flag("), isOut);
  B_cprint(this->flag, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_Isolette_Data_Model_Failure_Flag__is(STACK_FRAME void* this);
tc_Isolette_Data_Model_Failure_Flag tc_Isolette_Data_Model_Failure_Flag__as(STACK_FRAME void *this);

void tc_Isolette_Data_Model_Failure_Flag_apply(STACK_FRAME tc_Isolette_Data_Model_Failure_Flag this, B flag) {
  DeclNewStackFrame(caller, "Failure_Flag.scala", "tc.Isolette_Data_Model.Failure_Flag", "apply", 0);
  this->flag = flag;
}

void tc_Isolette_Data_Model_Failure_Flag_example(STACK_FRAME tc_Isolette_Data_Model_Failure_Flag result) {
  DeclNewStackFrame(caller, "Failure_Flag.scala", "tc.Isolette_Data_Model.Failure_Flag", "example", 0);
  B t_1 = tc_Base_Types_Boolean_example(SF_LAST);
  DeclNewtc_Isolette_Data_Model_Failure_Flag(t_0);
  tc_Isolette_Data_Model_Failure_Flag_apply(SF &t_0, t_1);
  Type_assign(result, (&t_0), sizeof(struct tc_Isolette_Data_Model_Failure_Flag));
  return;
}