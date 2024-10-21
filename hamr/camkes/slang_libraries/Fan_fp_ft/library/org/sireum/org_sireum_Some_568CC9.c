#include <all.h>

// Some[tc.TempControlMixedSeL4CAmKES.Fan_Operational_Api]

B Some_568CC9__eq(Some_568CC9 this, Some_568CC9 other) {
  if (tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api__ne((tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api) &this->value, (tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api) &other->value)) return F;
  return T;
}

B Some_568CC9__equiv(Some_568CC9 this, Some_568CC9 other) {
  if (tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api__inequiv((tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api) &this->value, (tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api) &other->value)) return F;
  return T;
}

B Some_568CC9__ne(Some_568CC9 this, Some_568CC9 other);
B Some_568CC9__inequiv(Some_568CC9 this, Some_568CC9 other);

void Some_568CC9_string_(STACK_FRAME String result, Some_568CC9 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_string_(SF result, (tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_568CC9_cprint(Some_568CC9 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_cprint((tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_568CC9__is(STACK_FRAME void* this);
Some_568CC9 Some_568CC9__as(STACK_FRAME void *this);

void Some_568CC9_apply(STACK_FRAME Some_568CC9 this, tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_568CC9", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api));
}