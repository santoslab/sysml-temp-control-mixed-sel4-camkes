#include <all.h>

// Some[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]

B Some_0C4CF8__eq(Some_0C4CF8 this, Some_0C4CF8 other) {
  if (tc_TempControlMixedSeL4CAmKES_TempUnit_Type__ne(this->value, other->value)) return F;
  return T;
}

B Some_0C4CF8__equiv(Some_0C4CF8 this, Some_0C4CF8 other) {
  if (tc_TempControlMixedSeL4CAmKES_TempUnit_Type__inequiv(this->value, other->value)) return F;
  return T;
}

B Some_0C4CF8__ne(Some_0C4CF8 this, Some_0C4CF8 other);
B Some_0C4CF8__inequiv(Some_0C4CF8 this, Some_0C4CF8 other);

void Some_0C4CF8_string_(STACK_FRAME String result, Some_0C4CF8 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  tc_TempControlMixedSeL4CAmKES_TempUnit_Type_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void Some_0C4CF8_cprint(Some_0C4CF8 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  tc_TempControlMixedSeL4CAmKES_TempUnit_Type_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_0C4CF8__is(STACK_FRAME void* this);
Some_0C4CF8 Some_0C4CF8__as(STACK_FRAME void *this);

void Some_0C4CF8_apply(STACK_FRAME Some_0C4CF8 this, tc_TempControlMixedSeL4CAmKES_TempUnit_Type value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_0C4CF8", "apply", 0);
  this->value = value;
}