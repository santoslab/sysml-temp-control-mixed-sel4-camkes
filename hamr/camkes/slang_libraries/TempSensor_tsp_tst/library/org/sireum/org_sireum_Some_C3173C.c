#include <all.h>

// Some[tc.TempControlPeriodic.FanAck.Type]

B Some_C3173C__eq(Some_C3173C this, Some_C3173C other) {
  if (tc_TempControlPeriodic_FanAck_Type__ne(this->value, other->value)) return F;
  return T;
}

B Some_C3173C__equiv(Some_C3173C this, Some_C3173C other) {
  if (tc_TempControlPeriodic_FanAck_Type__inequiv(this->value, other->value)) return F;
  return T;
}

B Some_C3173C__ne(Some_C3173C this, Some_C3173C other);
B Some_C3173C__inequiv(Some_C3173C this, Some_C3173C other);

void Some_C3173C_string_(STACK_FRAME String result, Some_C3173C this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  tc_TempControlPeriodic_FanAck_Type_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void Some_C3173C_cprint(Some_C3173C this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  tc_TempControlPeriodic_FanAck_Type_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_C3173C__is(STACK_FRAME void* this);
Some_C3173C Some_C3173C__as(STACK_FRAME void *this);

void Some_C3173C_apply(STACK_FRAME Some_C3173C this, tc_TempControlPeriodic_FanAck_Type value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_C3173C", "apply", 0);
  this->value = value;
}