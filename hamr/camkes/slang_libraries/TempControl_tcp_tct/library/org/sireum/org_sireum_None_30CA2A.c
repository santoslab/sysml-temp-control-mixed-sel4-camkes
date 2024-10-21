#include <all.h>

// None[tc.TempControlMixedSeL4CAmKES.SetPoint]

B None_30CA2A__eq(None_30CA2A this, None_30CA2A other) {
  return T;
}

B None_30CA2A__equiv(None_30CA2A this, None_30CA2A other) {
  return T;
}

B None_30CA2A__ne(None_30CA2A this, None_30CA2A other);
B None_30CA2A__inequiv(None_30CA2A this, None_30CA2A other);

void None_30CA2A_string_(STACK_FRAME String result, None_30CA2A this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_30CA2A_cprint(None_30CA2A this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_30CA2A__is(STACK_FRAME void* this);
None_30CA2A None_30CA2A__as(STACK_FRAME void *this);

void None_30CA2A_apply(STACK_FRAME None_30CA2A this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_30CA2A", "apply", 0);
}