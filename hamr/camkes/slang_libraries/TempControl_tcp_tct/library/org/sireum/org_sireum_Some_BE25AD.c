#include <all.h>

// Some[tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api]

B Some_BE25AD__eq(Some_BE25AD this, Some_BE25AD other) {
  if (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api__ne((tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) &this->value, (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_BE25AD__equiv(Some_BE25AD this, Some_BE25AD other) {
  if (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api__inequiv((tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) &this->value, (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_BE25AD__ne(Some_BE25AD this, Some_BE25AD other);
B Some_BE25AD__inequiv(Some_BE25AD this, Some_BE25AD other);

void Some_BE25AD_string_(STACK_FRAME String result, Some_BE25AD this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_string_(SF result, (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_BE25AD_cprint(Some_BE25AD this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_cprint((tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_BE25AD__is(STACK_FRAME void* this);
Some_BE25AD Some_BE25AD__as(STACK_FRAME void *this);

void Some_BE25AD_apply(STACK_FRAME Some_BE25AD this, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_BE25AD", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api));
}