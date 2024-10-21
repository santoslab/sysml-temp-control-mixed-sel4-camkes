#include <all.h>

// None[tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api]

B None_E88024__eq(None_E88024 this, None_E88024 other) {
  return T;
}

B None_E88024__equiv(None_E88024 this, None_E88024 other) {
  return T;
}

B None_E88024__ne(None_E88024 this, None_E88024 other);
B None_E88024__inequiv(None_E88024 this, None_E88024 other);

void None_E88024_string_(STACK_FRAME String result, None_E88024 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_E88024_cprint(None_E88024 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_E88024__is(STACK_FRAME void* this);
None_E88024 None_E88024__as(STACK_FRAME void *this);

void None_E88024_apply(STACK_FRAME None_E88024 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_E88024", "apply", 0);
}