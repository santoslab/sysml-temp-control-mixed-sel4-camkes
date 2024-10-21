#include <all.h>

// Some[tc.TempControlMixedSeL4CAmKES.Fan_Initialization_Api]

B Some_4F31FE__eq(Some_4F31FE this, Some_4F31FE other) {
  if (tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api__ne((tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api) &this->value, (tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_4F31FE__equiv(Some_4F31FE this, Some_4F31FE other) {
  if (tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api__inequiv((tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api) &this->value, (tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_4F31FE__ne(Some_4F31FE this, Some_4F31FE other);
B Some_4F31FE__inequiv(Some_4F31FE this, Some_4F31FE other);

void Some_4F31FE_string_(STACK_FRAME String result, Some_4F31FE this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api_string_(SF result, (tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_4F31FE_cprint(Some_4F31FE this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api_cprint((tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_4F31FE__is(STACK_FRAME void* this);
Some_4F31FE Some_4F31FE__as(STACK_FRAME void *this);

void Some_4F31FE_apply(STACK_FRAME Some_4F31FE this, tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_4F31FE", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api));
}