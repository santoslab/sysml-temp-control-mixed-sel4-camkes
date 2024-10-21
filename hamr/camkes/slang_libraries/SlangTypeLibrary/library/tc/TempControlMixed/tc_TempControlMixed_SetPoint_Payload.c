#include <all.h>

// tc.TempControlMixed.SetPoint_Payload

B tc_TempControlMixed_SetPoint_Payload__eq(tc_TempControlMixed_SetPoint_Payload this, tc_TempControlMixed_SetPoint_Payload other) {
  if (tc_TempControlMixed_SetPoint__ne((tc_TempControlMixed_SetPoint) &this->value, (tc_TempControlMixed_SetPoint) &other->value)) return F;
  return T;
}

B tc_TempControlMixed_SetPoint_Payload__equiv(tc_TempControlMixed_SetPoint_Payload this, tc_TempControlMixed_SetPoint_Payload other) {
  if (tc_TempControlMixed_SetPoint__inequiv((tc_TempControlMixed_SetPoint) &this->value, (tc_TempControlMixed_SetPoint) &other->value)) return F;
  return T;
}

B tc_TempControlMixed_SetPoint_Payload__ne(tc_TempControlMixed_SetPoint_Payload this, tc_TempControlMixed_SetPoint_Payload other);
B tc_TempControlMixed_SetPoint_Payload__inequiv(tc_TempControlMixed_SetPoint_Payload this, tc_TempControlMixed_SetPoint_Payload other);

void tc_TempControlMixed_SetPoint_Payload_string_(STACK_FRAME String result, tc_TempControlMixed_SetPoint_Payload this) {
  DeclNewStackFrame(caller, "SetPoint.scala", "tc.TempControlMixed.SetPoint_Payload", "string", 0);
  String_string_(SF result, string("SetPoint_Payload("));
  tc_TempControlMixed_SetPoint_string_(SF result, (tc_TempControlMixed_SetPoint) &this->value);
  String_string_(SF result, string(")"));
}

void tc_TempControlMixed_SetPoint_Payload_cprint(tc_TempControlMixed_SetPoint_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("SetPoint_Payload("), isOut);
  tc_TempControlMixed_SetPoint_cprint((tc_TempControlMixed_SetPoint) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_TempControlMixed_SetPoint_Payload__is(STACK_FRAME void* this);
tc_TempControlMixed_SetPoint_Payload tc_TempControlMixed_SetPoint_Payload__as(STACK_FRAME void *this);

void tc_TempControlMixed_SetPoint_Payload_apply(STACK_FRAME tc_TempControlMixed_SetPoint_Payload this, tc_TempControlMixed_SetPoint value) {
  DeclNewStackFrame(caller, "SetPoint.scala", "tc.TempControlMixed.SetPoint_Payload", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct tc_TempControlMixed_SetPoint));
}