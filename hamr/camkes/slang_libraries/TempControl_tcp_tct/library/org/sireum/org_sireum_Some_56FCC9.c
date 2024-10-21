#include <all.h>

// Some[tc.TempControlPeriodic.TempUnit.Type]

B Some_56FCC9__eq(Some_56FCC9 this, Some_56FCC9 other) {
  if (tc_TempControlPeriodic_TempUnit_Type__ne(this->value, other->value)) return F;
  return T;
}

B Some_56FCC9__equiv(Some_56FCC9 this, Some_56FCC9 other) {
  if (tc_TempControlPeriodic_TempUnit_Type__inequiv(this->value, other->value)) return F;
  return T;
}

B Some_56FCC9__ne(Some_56FCC9 this, Some_56FCC9 other);
B Some_56FCC9__inequiv(Some_56FCC9 this, Some_56FCC9 other);

void Some_56FCC9_string_(STACK_FRAME String result, Some_56FCC9 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  tc_TempControlPeriodic_TempUnit_Type_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void Some_56FCC9_cprint(Some_56FCC9 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  tc_TempControlPeriodic_TempUnit_Type_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_56FCC9__is(STACK_FRAME void* this);
Some_56FCC9 Some_56FCC9__as(STACK_FRAME void *this);

void Some_56FCC9_apply(STACK_FRAME Some_56FCC9 this, tc_TempControlPeriodic_TempUnit_Type value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_56FCC9", "apply", 0);
  this->value = value;
}