#include <all.h>

// tc.TempControlMixedSeL4CAmKES.FanAck_Payload

B tc_TempControlMixedSeL4CAmKES_FanAck_Payload__eq(tc_TempControlMixedSeL4CAmKES_FanAck_Payload this, tc_TempControlMixedSeL4CAmKES_FanAck_Payload other) {
  if (tc_TempControlMixedSeL4CAmKES_FanAck_Type__ne(this->value, other->value)) return F;
  return T;
}

B tc_TempControlMixedSeL4CAmKES_FanAck_Payload__equiv(tc_TempControlMixedSeL4CAmKES_FanAck_Payload this, tc_TempControlMixedSeL4CAmKES_FanAck_Payload other) {
  if (tc_TempControlMixedSeL4CAmKES_FanAck_Type__inequiv(this->value, other->value)) return F;
  return T;
}

B tc_TempControlMixedSeL4CAmKES_FanAck_Payload__ne(tc_TempControlMixedSeL4CAmKES_FanAck_Payload this, tc_TempControlMixedSeL4CAmKES_FanAck_Payload other);
B tc_TempControlMixedSeL4CAmKES_FanAck_Payload__inequiv(tc_TempControlMixedSeL4CAmKES_FanAck_Payload this, tc_TempControlMixedSeL4CAmKES_FanAck_Payload other);

void tc_TempControlMixedSeL4CAmKES_FanAck_Payload_string_(STACK_FRAME String result, tc_TempControlMixedSeL4CAmKES_FanAck_Payload this) {
  DeclNewStackFrame(caller, "FanAck.scala", "tc.TempControlMixedSeL4CAmKES.FanAck_Payload", "string", 0);
  String_string_(SF result, string("FanAck_Payload("));
  tc_TempControlMixedSeL4CAmKES_FanAck_Type_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void tc_TempControlMixedSeL4CAmKES_FanAck_Payload_cprint(tc_TempControlMixedSeL4CAmKES_FanAck_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("FanAck_Payload("), isOut);
  tc_TempControlMixedSeL4CAmKES_FanAck_Type_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_TempControlMixedSeL4CAmKES_FanAck_Payload__is(STACK_FRAME void* this);
tc_TempControlMixedSeL4CAmKES_FanAck_Payload tc_TempControlMixedSeL4CAmKES_FanAck_Payload__as(STACK_FRAME void *this);

void tc_TempControlMixedSeL4CAmKES_FanAck_Payload_apply(STACK_FRAME tc_TempControlMixedSeL4CAmKES_FanAck_Payload this, tc_TempControlMixedSeL4CAmKES_FanAck_Type value) {
  DeclNewStackFrame(caller, "FanAck.scala", "tc.TempControlMixedSeL4CAmKES.FanAck_Payload", "apply", 0);
  this->value = value;
}