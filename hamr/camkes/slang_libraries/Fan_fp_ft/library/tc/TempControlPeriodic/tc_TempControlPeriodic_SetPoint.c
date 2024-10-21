#include <all.h>

// tc.TempControlPeriodic.SetPoint

B tc_TempControlPeriodic_SetPoint__eq(tc_TempControlPeriodic_SetPoint this, tc_TempControlPeriodic_SetPoint other) {
  if (tc_TempControlPeriodic_Temperature__ne((tc_TempControlPeriodic_Temperature) &this->low, (tc_TempControlPeriodic_Temperature) &other->low)) return F;
  if (tc_TempControlPeriodic_Temperature__ne((tc_TempControlPeriodic_Temperature) &this->high, (tc_TempControlPeriodic_Temperature) &other->high)) return F;
  return T;
}

B tc_TempControlPeriodic_SetPoint__equiv(tc_TempControlPeriodic_SetPoint this, tc_TempControlPeriodic_SetPoint other) {
  if (tc_TempControlPeriodic_Temperature__inequiv((tc_TempControlPeriodic_Temperature) &this->low, (tc_TempControlPeriodic_Temperature) &other->low)) return F;
  if (tc_TempControlPeriodic_Temperature__inequiv((tc_TempControlPeriodic_Temperature) &this->high, (tc_TempControlPeriodic_Temperature) &other->high)) return F;
  return T;
}

B tc_TempControlPeriodic_SetPoint__ne(tc_TempControlPeriodic_SetPoint this, tc_TempControlPeriodic_SetPoint other);
B tc_TempControlPeriodic_SetPoint__inequiv(tc_TempControlPeriodic_SetPoint this, tc_TempControlPeriodic_SetPoint other);

void tc_TempControlPeriodic_SetPoint_string_(STACK_FRAME String result, tc_TempControlPeriodic_SetPoint this) {
  DeclNewStackFrame(caller, "SetPoint.scala", "tc.TempControlPeriodic.SetPoint", "string", 0);
  String_string_(SF result, string("SetPoint("));
  String sep = string(", ");
  tc_TempControlPeriodic_Temperature_string_(SF result, (tc_TempControlPeriodic_Temperature) &this->low);
  String_string_(SF result, sep);
  tc_TempControlPeriodic_Temperature_string_(SF result, (tc_TempControlPeriodic_Temperature) &this->high);
  String_string_(SF result, string(")"));
}

void tc_TempControlPeriodic_SetPoint_cprint(tc_TempControlPeriodic_SetPoint this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("SetPoint("), isOut);
  String sep = string(", ");
  tc_TempControlPeriodic_Temperature_cprint((tc_TempControlPeriodic_Temperature) &this->low, isOut);
  String_cprint(sep, isOut);
  tc_TempControlPeriodic_Temperature_cprint((tc_TempControlPeriodic_Temperature) &this->high, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_TempControlPeriodic_SetPoint__is(STACK_FRAME void* this);
tc_TempControlPeriodic_SetPoint tc_TempControlPeriodic_SetPoint__as(STACK_FRAME void *this);

void tc_TempControlPeriodic_SetPoint_apply(STACK_FRAME tc_TempControlPeriodic_SetPoint this, tc_TempControlPeriodic_Temperature low, tc_TempControlPeriodic_Temperature high) {
  DeclNewStackFrame(caller, "SetPoint.scala", "tc.TempControlPeriodic.SetPoint", "apply", 0);
  Type_assign(&this->low, low, sizeof(struct tc_TempControlPeriodic_Temperature));
  Type_assign(&this->high, high, sizeof(struct tc_TempControlPeriodic_Temperature));
}

void tc_TempControlPeriodic_SetPoint_example(STACK_FRAME tc_TempControlPeriodic_SetPoint result) {
  DeclNewStackFrame(caller, "SetPoint.scala", "tc.TempControlPeriodic.SetPoint", "example", 0);
  DeclNewtc_TempControlPeriodic_Temperature(t_1);
  tc_TempControlPeriodic_Temperature_example(SF (tc_TempControlPeriodic_Temperature) &t_1);
  DeclNewtc_TempControlPeriodic_Temperature(t_2);
  tc_TempControlPeriodic_Temperature_example(SF (tc_TempControlPeriodic_Temperature) &t_2);
  DeclNewtc_TempControlPeriodic_SetPoint(t_0);
  tc_TempControlPeriodic_SetPoint_apply(SF &t_0, (tc_TempControlPeriodic_Temperature) ((tc_TempControlPeriodic_Temperature) &t_1), (tc_TempControlPeriodic_Temperature) ((tc_TempControlPeriodic_Temperature) &t_2));
  Type_assign(result, (&t_0), sizeof(struct tc_TempControlPeriodic_SetPoint));
  return;
}