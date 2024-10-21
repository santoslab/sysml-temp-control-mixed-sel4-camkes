#include <all.h>

// Some[tc.TempControlMixed.FanCmd.Type]

B Some_776961__eq(Some_776961 this, Some_776961 other) {
  if (tc_TempControlMixed_FanCmd_Type__ne(this->value, other->value)) return F;
  return T;
}

B Some_776961__equiv(Some_776961 this, Some_776961 other) {
  if (tc_TempControlMixed_FanCmd_Type__inequiv(this->value, other->value)) return F;
  return T;
}

B Some_776961__ne(Some_776961 this, Some_776961 other);
B Some_776961__inequiv(Some_776961 this, Some_776961 other);

void Some_776961_string_(STACK_FRAME String result, Some_776961 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  tc_TempControlMixed_FanCmd_Type_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void Some_776961_cprint(Some_776961 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  tc_TempControlMixed_FanCmd_Type_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_776961__is(STACK_FRAME void* this);
Some_776961 Some_776961__as(STACK_FRAME void *this);

void Some_776961_apply(STACK_FRAME Some_776961 this, tc_TempControlMixed_FanCmd_Type value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_776961", "apply", 0);
  this->value = value;
}