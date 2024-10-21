#include <all.h>

// Some[tc.TempControlMixed.TempUnit.Type]

B Some_0E3FBA__eq(Some_0E3FBA this, Some_0E3FBA other) {
  if (tc_TempControlMixed_TempUnit_Type__ne(this->value, other->value)) return F;
  return T;
}

B Some_0E3FBA__equiv(Some_0E3FBA this, Some_0E3FBA other) {
  if (tc_TempControlMixed_TempUnit_Type__inequiv(this->value, other->value)) return F;
  return T;
}

B Some_0E3FBA__ne(Some_0E3FBA this, Some_0E3FBA other);
B Some_0E3FBA__inequiv(Some_0E3FBA this, Some_0E3FBA other);

void Some_0E3FBA_string_(STACK_FRAME String result, Some_0E3FBA this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  tc_TempControlMixed_TempUnit_Type_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void Some_0E3FBA_cprint(Some_0E3FBA this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  tc_TempControlMixed_TempUnit_Type_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_0E3FBA__is(STACK_FRAME void* this);
Some_0E3FBA Some_0E3FBA__as(STACK_FRAME void *this);

void Some_0E3FBA_apply(STACK_FRAME Some_0E3FBA this, tc_TempControlMixed_TempUnit_Type value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_0E3FBA", "apply", 0);
  this->value = value;
}