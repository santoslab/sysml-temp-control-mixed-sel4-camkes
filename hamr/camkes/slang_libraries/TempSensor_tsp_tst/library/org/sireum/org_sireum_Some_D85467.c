#include <all.h>

// Some[tc.TempControlMixedSeL4CAmKES.FanAck.Type]

B Some_D85467__eq(Some_D85467 this, Some_D85467 other) {
  if (tc_TempControlMixedSeL4CAmKES_FanAck_Type__ne(this->value, other->value)) return F;
  return T;
}

B Some_D85467__equiv(Some_D85467 this, Some_D85467 other) {
  if (tc_TempControlMixedSeL4CAmKES_FanAck_Type__inequiv(this->value, other->value)) return F;
  return T;
}

B Some_D85467__ne(Some_D85467 this, Some_D85467 other);
B Some_D85467__inequiv(Some_D85467 this, Some_D85467 other);

void Some_D85467_string_(STACK_FRAME String result, Some_D85467 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  tc_TempControlMixedSeL4CAmKES_FanAck_Type_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void Some_D85467_cprint(Some_D85467 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  tc_TempControlMixedSeL4CAmKES_FanAck_Type_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_D85467__is(STACK_FRAME void* this);
Some_D85467 Some_D85467__as(STACK_FRAME void *this);

void Some_D85467_apply(STACK_FRAME Some_D85467 this, tc_TempControlMixedSeL4CAmKES_FanAck_Type value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_D85467", "apply", 0);
  this->value = value;
}