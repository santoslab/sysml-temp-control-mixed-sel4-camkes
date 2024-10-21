#include <all.h>

// Some[tc.TempControlPeriodic.FanCmd.Type]

B Some_C0DBA9__eq(Some_C0DBA9 this, Some_C0DBA9 other) {
  if (tc_TempControlPeriodic_FanCmd_Type__ne(this->value, other->value)) return F;
  return T;
}

B Some_C0DBA9__equiv(Some_C0DBA9 this, Some_C0DBA9 other) {
  if (tc_TempControlPeriodic_FanCmd_Type__inequiv(this->value, other->value)) return F;
  return T;
}

B Some_C0DBA9__ne(Some_C0DBA9 this, Some_C0DBA9 other);
B Some_C0DBA9__inequiv(Some_C0DBA9 this, Some_C0DBA9 other);

void Some_C0DBA9_string_(STACK_FRAME String result, Some_C0DBA9 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  tc_TempControlPeriodic_FanCmd_Type_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void Some_C0DBA9_cprint(Some_C0DBA9 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  tc_TempControlPeriodic_FanCmd_Type_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_C0DBA9__is(STACK_FRAME void* this);
Some_C0DBA9 Some_C0DBA9__as(STACK_FRAME void *this);

void Some_C0DBA9_apply(STACK_FRAME Some_C0DBA9 this, tc_TempControlPeriodic_FanCmd_Type value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_C0DBA9", "apply", 0);
  this->value = value;
}