#include <all.h>

// tc.TempControlMixedSeL4CAmKES.Temperature

B tc_TempControlMixedSeL4CAmKES_Temperature__eq(tc_TempControlMixedSeL4CAmKES_Temperature this, tc_TempControlMixedSeL4CAmKES_Temperature other) {
  if (F32__ne(this->degrees, other->degrees)) return F;
  if (tc_TempControlMixedSeL4CAmKES_TempUnit_Type__ne(this->unit, other->unit)) return F;
  return T;
}

B tc_TempControlMixedSeL4CAmKES_Temperature__equiv(tc_TempControlMixedSeL4CAmKES_Temperature this, tc_TempControlMixedSeL4CAmKES_Temperature other) {
  if (F32__inequiv(this->degrees, other->degrees)) return F;
  if (tc_TempControlMixedSeL4CAmKES_TempUnit_Type__inequiv(this->unit, other->unit)) return F;
  return T;
}

B tc_TempControlMixedSeL4CAmKES_Temperature__ne(tc_TempControlMixedSeL4CAmKES_Temperature this, tc_TempControlMixedSeL4CAmKES_Temperature other);
B tc_TempControlMixedSeL4CAmKES_Temperature__inequiv(tc_TempControlMixedSeL4CAmKES_Temperature this, tc_TempControlMixedSeL4CAmKES_Temperature other);

void tc_TempControlMixedSeL4CAmKES_Temperature_string_(STACK_FRAME String result, tc_TempControlMixedSeL4CAmKES_Temperature this) {
  DeclNewStackFrame(caller, "Temperature.scala", "tc.TempControlMixedSeL4CAmKES.Temperature", "string", 0);
  String_string_(SF result, string("Temperature("));
  String sep = string(", ");
  F32_string_(SF result, this->degrees);
  String_string_(SF result, sep);
  tc_TempControlMixedSeL4CAmKES_TempUnit_Type_string_(SF result, this->unit);
  String_string_(SF result, string(")"));
}

void tc_TempControlMixedSeL4CAmKES_Temperature_cprint(tc_TempControlMixedSeL4CAmKES_Temperature this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Temperature("), isOut);
  String sep = string(", ");
  F32_cprint(this->degrees, isOut);
  String_cprint(sep, isOut);
  tc_TempControlMixedSeL4CAmKES_TempUnit_Type_cprint(this->unit, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_TempControlMixedSeL4CAmKES_Temperature__is(STACK_FRAME void* this);
tc_TempControlMixedSeL4CAmKES_Temperature tc_TempControlMixedSeL4CAmKES_Temperature__as(STACK_FRAME void *this);

void tc_TempControlMixedSeL4CAmKES_Temperature_apply(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Temperature this, F32 degrees, tc_TempControlMixedSeL4CAmKES_TempUnit_Type unit) {
  DeclNewStackFrame(caller, "Temperature.scala", "tc.TempControlMixedSeL4CAmKES.Temperature", "apply", 0);
  this->degrees = degrees;
  this->unit = unit;
}

void tc_TempControlMixedSeL4CAmKES_Temperature_example(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Temperature result) {
  DeclNewStackFrame(caller, "Temperature.scala", "tc.TempControlMixedSeL4CAmKES.Temperature", "example", 0);
  F32 t_1 = tc_Base_Types_Float_32_example(SF_LAST);
  DeclNewOption_103926(t_2);
  tc_TempControlMixedSeL4CAmKES_TempUnit_Type_byOrdinal(SF (Option_103926) &t_2, Z_C(0));
  tc_TempControlMixedSeL4CAmKES_TempUnit_Type t_3 = Option_103926_get_(SF ((Option_103926) &t_2));
  DeclNewtc_TempControlMixedSeL4CAmKES_Temperature(t_0);
  tc_TempControlMixedSeL4CAmKES_Temperature_apply(SF &t_0, t_1, t_3);
  Type_assign(result, (&t_0), sizeof(struct tc_TempControlMixedSeL4CAmKES_Temperature));
  return;
}