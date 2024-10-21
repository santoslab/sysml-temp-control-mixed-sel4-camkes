#include <all.h>

// Some[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]

B Some_2EFA7D__eq(Some_2EFA7D this, Some_2EFA7D other) {
  if (tc_TempControlMixedSeL4CAmKES_FanCmd_Type__ne(this->value, other->value)) return F;
  return T;
}

B Some_2EFA7D__equiv(Some_2EFA7D this, Some_2EFA7D other) {
  if (tc_TempControlMixedSeL4CAmKES_FanCmd_Type__inequiv(this->value, other->value)) return F;
  return T;
}

B Some_2EFA7D__ne(Some_2EFA7D this, Some_2EFA7D other);
B Some_2EFA7D__inequiv(Some_2EFA7D this, Some_2EFA7D other);

void Some_2EFA7D_string_(STACK_FRAME String result, Some_2EFA7D this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  tc_TempControlMixedSeL4CAmKES_FanCmd_Type_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void Some_2EFA7D_cprint(Some_2EFA7D this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  tc_TempControlMixedSeL4CAmKES_FanCmd_Type_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_2EFA7D__is(STACK_FRAME void* this);
Some_2EFA7D Some_2EFA7D__as(STACK_FRAME void *this);

void Some_2EFA7D_apply(STACK_FRAME Some_2EFA7D this, tc_TempControlMixedSeL4CAmKES_FanCmd_Type value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_2EFA7D", "apply", 0);
  this->value = value;
}