#include <all.h>

// Some[tc.TempControlMixedSeL4CAmKES.Temperature]

B Some_76E303__eq(Some_76E303 this, Some_76E303 other) {
  if (tc_TempControlMixedSeL4CAmKES_Temperature__ne((tc_TempControlMixedSeL4CAmKES_Temperature) &this->value, (tc_TempControlMixedSeL4CAmKES_Temperature) &other->value)) return F;
  return T;
}

B Some_76E303__equiv(Some_76E303 this, Some_76E303 other) {
  if (tc_TempControlMixedSeL4CAmKES_Temperature__inequiv((tc_TempControlMixedSeL4CAmKES_Temperature) &this->value, (tc_TempControlMixedSeL4CAmKES_Temperature) &other->value)) return F;
  return T;
}

B Some_76E303__ne(Some_76E303 this, Some_76E303 other);
B Some_76E303__inequiv(Some_76E303 this, Some_76E303 other);

void Some_76E303_string_(STACK_FRAME String result, Some_76E303 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  tc_TempControlMixedSeL4CAmKES_Temperature_string_(SF result, (tc_TempControlMixedSeL4CAmKES_Temperature) &this->value);
  String_string_(SF result, string(")"));
}

void Some_76E303_cprint(Some_76E303 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  tc_TempControlMixedSeL4CAmKES_Temperature_cprint((tc_TempControlMixedSeL4CAmKES_Temperature) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_76E303__is(STACK_FRAME void* this);
Some_76E303 Some_76E303__as(STACK_FRAME void *this);

void Some_76E303_apply(STACK_FRAME Some_76E303 this, tc_TempControlMixedSeL4CAmKES_Temperature value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_76E303", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct tc_TempControlMixedSeL4CAmKES_Temperature));
}