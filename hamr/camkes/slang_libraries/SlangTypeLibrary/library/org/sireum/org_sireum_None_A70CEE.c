#include <all.h>

// None[tc.TempControlMixedSeL4CAmKES.FanAck.Type]

B None_A70CEE__eq(None_A70CEE this, None_A70CEE other) {
  return T;
}

B None_A70CEE__equiv(None_A70CEE this, None_A70CEE other) {
  return T;
}

B None_A70CEE__ne(None_A70CEE this, None_A70CEE other);
B None_A70CEE__inequiv(None_A70CEE this, None_A70CEE other);

void None_A70CEE_string_(STACK_FRAME String result, None_A70CEE this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_A70CEE_cprint(None_A70CEE this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_A70CEE__is(STACK_FRAME void* this);
None_A70CEE None_A70CEE__as(STACK_FRAME void *this);

void None_A70CEE_apply(STACK_FRAME None_A70CEE this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_A70CEE", "apply", 0);
}