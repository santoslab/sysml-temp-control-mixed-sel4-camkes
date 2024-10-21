#include <all.h>

// tc.TempControlPeriodic.Temperature

B tc_TempControlPeriodic_Temperature__eq(tc_TempControlPeriodic_Temperature this, tc_TempControlPeriodic_Temperature other) {
  if (F32__ne(this->degrees, other->degrees)) return F;
  if (tc_TempControlPeriodic_TempUnit_Type__ne(this->unit, other->unit)) return F;
  return T;
}

B tc_TempControlPeriodic_Temperature__equiv(tc_TempControlPeriodic_Temperature this, tc_TempControlPeriodic_Temperature other) {
  if (F32__inequiv(this->degrees, other->degrees)) return F;
  if (tc_TempControlPeriodic_TempUnit_Type__inequiv(this->unit, other->unit)) return F;
  return T;
}

B tc_TempControlPeriodic_Temperature__ne(tc_TempControlPeriodic_Temperature this, tc_TempControlPeriodic_Temperature other);
B tc_TempControlPeriodic_Temperature__inequiv(tc_TempControlPeriodic_Temperature this, tc_TempControlPeriodic_Temperature other);

void tc_TempControlPeriodic_Temperature_string_(STACK_FRAME String result, tc_TempControlPeriodic_Temperature this) {
  DeclNewStackFrame(caller, "Temperature.scala", "tc.TempControlPeriodic.Temperature", "string", 0);
  String_string_(SF result, string("Temperature("));
  String sep = string(", ");
  F32_string_(SF result, this->degrees);
  String_string_(SF result, sep);
  tc_TempControlPeriodic_TempUnit_Type_string_(SF result, this->unit);
  String_string_(SF result, string(")"));
}

void tc_TempControlPeriodic_Temperature_cprint(tc_TempControlPeriodic_Temperature this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Temperature("), isOut);
  String sep = string(", ");
  F32_cprint(this->degrees, isOut);
  String_cprint(sep, isOut);
  tc_TempControlPeriodic_TempUnit_Type_cprint(this->unit, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_TempControlPeriodic_Temperature__is(STACK_FRAME void* this);
tc_TempControlPeriodic_Temperature tc_TempControlPeriodic_Temperature__as(STACK_FRAME void *this);

void tc_TempControlPeriodic_Temperature_apply(STACK_FRAME tc_TempControlPeriodic_Temperature this, F32 degrees, tc_TempControlPeriodic_TempUnit_Type unit) {
  DeclNewStackFrame(caller, "Temperature.scala", "tc.TempControlPeriodic.Temperature", "apply", 0);
  this->degrees = degrees;
  this->unit = unit;
}

void tc_TempControlPeriodic_Temperature_example(STACK_FRAME tc_TempControlPeriodic_Temperature result) {
  DeclNewStackFrame(caller, "Temperature.scala", "tc.TempControlPeriodic.Temperature", "example", 0);
  F32 t_1 = tc_Base_Types_Float_32_example(SF_LAST);
  DeclNewOption_978FB8(t_2);
  tc_TempControlPeriodic_TempUnit_Type_byOrdinal(SF (Option_978FB8) &t_2, Z_C(0));
  tc_TempControlPeriodic_TempUnit_Type t_3 = Option_978FB8_get_(SF ((Option_978FB8) &t_2));
  DeclNewtc_TempControlPeriodic_Temperature(t_0);
  tc_TempControlPeriodic_Temperature_apply(SF &t_0, t_1, t_3);
  Type_assign(result, (&t_0), sizeof(struct tc_TempControlPeriodic_Temperature));
  return;
}