#include <all.h>

// tc.TempControlMixed.SetPoint

B tc_TempControlMixed_SetPoint__eq(tc_TempControlMixed_SetPoint this, tc_TempControlMixed_SetPoint other) {
  if (tc_TempControlMixed_Temperature__ne((tc_TempControlMixed_Temperature) &this->low, (tc_TempControlMixed_Temperature) &other->low)) return F;
  if (tc_TempControlMixed_Temperature__ne((tc_TempControlMixed_Temperature) &this->high, (tc_TempControlMixed_Temperature) &other->high)) return F;
  return T;
}

B tc_TempControlMixed_SetPoint__equiv(tc_TempControlMixed_SetPoint this, tc_TempControlMixed_SetPoint other) {
  if (tc_TempControlMixed_Temperature__inequiv((tc_TempControlMixed_Temperature) &this->low, (tc_TempControlMixed_Temperature) &other->low)) return F;
  if (tc_TempControlMixed_Temperature__inequiv((tc_TempControlMixed_Temperature) &this->high, (tc_TempControlMixed_Temperature) &other->high)) return F;
  return T;
}

B tc_TempControlMixed_SetPoint__ne(tc_TempControlMixed_SetPoint this, tc_TempControlMixed_SetPoint other);
B tc_TempControlMixed_SetPoint__inequiv(tc_TempControlMixed_SetPoint this, tc_TempControlMixed_SetPoint other);

void tc_TempControlMixed_SetPoint_string_(STACK_FRAME String result, tc_TempControlMixed_SetPoint this) {
  DeclNewStackFrame(caller, "SetPoint.scala", "tc.TempControlMixed.SetPoint", "string", 0);
  String_string_(SF result, string("SetPoint("));
  String sep = string(", ");
  tc_TempControlMixed_Temperature_string_(SF result, (tc_TempControlMixed_Temperature) &this->low);
  String_string_(SF result, sep);
  tc_TempControlMixed_Temperature_string_(SF result, (tc_TempControlMixed_Temperature) &this->high);
  String_string_(SF result, string(")"));
}

void tc_TempControlMixed_SetPoint_cprint(tc_TempControlMixed_SetPoint this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("SetPoint("), isOut);
  String sep = string(", ");
  tc_TempControlMixed_Temperature_cprint((tc_TempControlMixed_Temperature) &this->low, isOut);
  String_cprint(sep, isOut);
  tc_TempControlMixed_Temperature_cprint((tc_TempControlMixed_Temperature) &this->high, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_TempControlMixed_SetPoint__is(STACK_FRAME void* this);
tc_TempControlMixed_SetPoint tc_TempControlMixed_SetPoint__as(STACK_FRAME void *this);

void tc_TempControlMixed_SetPoint_apply(STACK_FRAME tc_TempControlMixed_SetPoint this, tc_TempControlMixed_Temperature low, tc_TempControlMixed_Temperature high) {
  DeclNewStackFrame(caller, "SetPoint.scala", "tc.TempControlMixed.SetPoint", "apply", 0);
  Type_assign(&this->low, low, sizeof(struct tc_TempControlMixed_Temperature));
  Type_assign(&this->high, high, sizeof(struct tc_TempControlMixed_Temperature));
}

void tc_TempControlMixed_SetPoint_example(STACK_FRAME tc_TempControlMixed_SetPoint result) {
  DeclNewStackFrame(caller, "SetPoint.scala", "tc.TempControlMixed.SetPoint", "example", 0);
  DeclNewtc_TempControlMixed_Temperature(t_1);
  tc_TempControlMixed_Temperature_example(SF (tc_TempControlMixed_Temperature) &t_1);
  DeclNewtc_TempControlMixed_Temperature(t_2);
  tc_TempControlMixed_Temperature_example(SF (tc_TempControlMixed_Temperature) &t_2);
  DeclNewtc_TempControlMixed_SetPoint(t_0);
  tc_TempControlMixed_SetPoint_apply(SF &t_0, (tc_TempControlMixed_Temperature) ((tc_TempControlMixed_Temperature) &t_1), (tc_TempControlMixed_Temperature) ((tc_TempControlMixed_Temperature) &t_2));
  Type_assign(result, (&t_0), sizeof(struct tc_TempControlMixed_SetPoint));
  return;
}