#include <all.h>

// Some[tc.TempControlMixed.FanAck.Type]

B Some_270A8B__eq(Some_270A8B this, Some_270A8B other) {
  if (tc_TempControlMixed_FanAck_Type__ne(this->value, other->value)) return F;
  return T;
}

B Some_270A8B__equiv(Some_270A8B this, Some_270A8B other) {
  if (tc_TempControlMixed_FanAck_Type__inequiv(this->value, other->value)) return F;
  return T;
}

B Some_270A8B__ne(Some_270A8B this, Some_270A8B other);
B Some_270A8B__inequiv(Some_270A8B this, Some_270A8B other);

void Some_270A8B_string_(STACK_FRAME String result, Some_270A8B this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  tc_TempControlMixed_FanAck_Type_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void Some_270A8B_cprint(Some_270A8B this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  tc_TempControlMixed_FanAck_Type_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_270A8B__is(STACK_FRAME void* this);
Some_270A8B Some_270A8B__as(STACK_FRAME void *this);

void Some_270A8B_apply(STACK_FRAME Some_270A8B this, tc_TempControlMixed_FanAck_Type value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_270A8B", "apply", 0);
  this->value = value;
}