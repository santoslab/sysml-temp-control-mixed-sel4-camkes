#include <all.h>

// Some[tc.TempControlMixedSeL4CAmKES.TempControl_Initialization_Api]

B Some_6EABEC__eq(Some_6EABEC this, Some_6EABEC other) {
  if (tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api__ne((tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api) &this->value, (tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_6EABEC__equiv(Some_6EABEC this, Some_6EABEC other) {
  if (tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api__inequiv((tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api) &this->value, (tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_6EABEC__ne(Some_6EABEC this, Some_6EABEC other);
B Some_6EABEC__inequiv(Some_6EABEC this, Some_6EABEC other);

void Some_6EABEC_string_(STACK_FRAME String result, Some_6EABEC this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api_string_(SF result, (tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_6EABEC_cprint(Some_6EABEC this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api_cprint((tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_6EABEC__is(STACK_FRAME void* this);
Some_6EABEC Some_6EABEC__as(STACK_FRAME void *this);

void Some_6EABEC_apply(STACK_FRAME Some_6EABEC this, tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_6EABEC", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api));
}