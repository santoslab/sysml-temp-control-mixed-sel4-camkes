#include <all.h>

// None[tc.TempControlMixed.FanAck.Type]

B None_B4A4FA__eq(None_B4A4FA this, None_B4A4FA other) {
  return T;
}

B None_B4A4FA__equiv(None_B4A4FA this, None_B4A4FA other) {
  return T;
}

B None_B4A4FA__ne(None_B4A4FA this, None_B4A4FA other);
B None_B4A4FA__inequiv(None_B4A4FA this, None_B4A4FA other);

void None_B4A4FA_string_(STACK_FRAME String result, None_B4A4FA this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_B4A4FA_cprint(None_B4A4FA this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_B4A4FA__is(STACK_FRAME void* this);
None_B4A4FA None_B4A4FA__as(STACK_FRAME void *this);

void None_B4A4FA_apply(STACK_FRAME None_B4A4FA this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_B4A4FA", "apply", 0);
}