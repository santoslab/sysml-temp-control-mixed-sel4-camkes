#include <all.h>

// tc.TempControlMixedSeL4CAmKES.SetPoint

B tc_TempControlMixedSeL4CAmKES_SetPoint__eq(tc_TempControlMixedSeL4CAmKES_SetPoint this, tc_TempControlMixedSeL4CAmKES_SetPoint other) {
  if (tc_TempControlMixedSeL4CAmKES_Temperature__ne((tc_TempControlMixedSeL4CAmKES_Temperature) &this->low, (tc_TempControlMixedSeL4CAmKES_Temperature) &other->low)) return F;
  if (tc_TempControlMixedSeL4CAmKES_Temperature__ne((tc_TempControlMixedSeL4CAmKES_Temperature) &this->high, (tc_TempControlMixedSeL4CAmKES_Temperature) &other->high)) return F;
  return T;
}

B tc_TempControlMixedSeL4CAmKES_SetPoint__equiv(tc_TempControlMixedSeL4CAmKES_SetPoint this, tc_TempControlMixedSeL4CAmKES_SetPoint other) {
  if (tc_TempControlMixedSeL4CAmKES_Temperature__inequiv((tc_TempControlMixedSeL4CAmKES_Temperature) &this->low, (tc_TempControlMixedSeL4CAmKES_Temperature) &other->low)) return F;
  if (tc_TempControlMixedSeL4CAmKES_Temperature__inequiv((tc_TempControlMixedSeL4CAmKES_Temperature) &this->high, (tc_TempControlMixedSeL4CAmKES_Temperature) &other->high)) return F;
  return T;
}

B tc_TempControlMixedSeL4CAmKES_SetPoint__ne(tc_TempControlMixedSeL4CAmKES_SetPoint this, tc_TempControlMixedSeL4CAmKES_SetPoint other);
B tc_TempControlMixedSeL4CAmKES_SetPoint__inequiv(tc_TempControlMixedSeL4CAmKES_SetPoint this, tc_TempControlMixedSeL4CAmKES_SetPoint other);

void tc_TempControlMixedSeL4CAmKES_SetPoint_string_(STACK_FRAME String result, tc_TempControlMixedSeL4CAmKES_SetPoint this) {
  DeclNewStackFrame(caller, "SetPoint.scala", "tc.TempControlMixedSeL4CAmKES.SetPoint", "string", 0);
  String_string_(SF result, string("SetPoint("));
  String sep = string(", ");
  tc_TempControlMixedSeL4CAmKES_Temperature_string_(SF result, (tc_TempControlMixedSeL4CAmKES_Temperature) &this->low);
  String_string_(SF result, sep);
  tc_TempControlMixedSeL4CAmKES_Temperature_string_(SF result, (tc_TempControlMixedSeL4CAmKES_Temperature) &this->high);
  String_string_(SF result, string(")"));
}

void tc_TempControlMixedSeL4CAmKES_SetPoint_cprint(tc_TempControlMixedSeL4CAmKES_SetPoint this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("SetPoint("), isOut);
  String sep = string(", ");
  tc_TempControlMixedSeL4CAmKES_Temperature_cprint((tc_TempControlMixedSeL4CAmKES_Temperature) &this->low, isOut);
  String_cprint(sep, isOut);
  tc_TempControlMixedSeL4CAmKES_Temperature_cprint((tc_TempControlMixedSeL4CAmKES_Temperature) &this->high, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_TempControlMixedSeL4CAmKES_SetPoint__is(STACK_FRAME void* this);
tc_TempControlMixedSeL4CAmKES_SetPoint tc_TempControlMixedSeL4CAmKES_SetPoint__as(STACK_FRAME void *this);

void tc_TempControlMixedSeL4CAmKES_SetPoint_apply(STACK_FRAME tc_TempControlMixedSeL4CAmKES_SetPoint this, tc_TempControlMixedSeL4CAmKES_Temperature low, tc_TempControlMixedSeL4CAmKES_Temperature high) {
  DeclNewStackFrame(caller, "SetPoint.scala", "tc.TempControlMixedSeL4CAmKES.SetPoint", "apply", 0);
  Type_assign(&this->low, low, sizeof(struct tc_TempControlMixedSeL4CAmKES_Temperature));
  Type_assign(&this->high, high, sizeof(struct tc_TempControlMixedSeL4CAmKES_Temperature));
}

void tc_TempControlMixedSeL4CAmKES_SetPoint_example(STACK_FRAME tc_TempControlMixedSeL4CAmKES_SetPoint result) {
  DeclNewStackFrame(caller, "SetPoint.scala", "tc.TempControlMixedSeL4CAmKES.SetPoint", "example", 0);
  DeclNewtc_TempControlMixedSeL4CAmKES_Temperature(t_1);
  tc_TempControlMixedSeL4CAmKES_Temperature_example(SF (tc_TempControlMixedSeL4CAmKES_Temperature) &t_1);
  DeclNewtc_TempControlMixedSeL4CAmKES_Temperature(t_2);
  tc_TempControlMixedSeL4CAmKES_Temperature_example(SF (tc_TempControlMixedSeL4CAmKES_Temperature) &t_2);
  DeclNewtc_TempControlMixedSeL4CAmKES_SetPoint(t_0);
  tc_TempControlMixedSeL4CAmKES_SetPoint_apply(SF &t_0, (tc_TempControlMixedSeL4CAmKES_Temperature) ((tc_TempControlMixedSeL4CAmKES_Temperature) &t_1), (tc_TempControlMixedSeL4CAmKES_Temperature) ((tc_TempControlMixedSeL4CAmKES_Temperature) &t_2));
  Type_assign(result, (&t_0), sizeof(struct tc_TempControlMixedSeL4CAmKES_SetPoint));
  return;
}