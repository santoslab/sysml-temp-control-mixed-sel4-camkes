#include <all.h>

// None[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]

B None_ACDB63__eq(None_ACDB63 this, None_ACDB63 other) {
  return T;
}

B None_ACDB63__equiv(None_ACDB63 this, None_ACDB63 other) {
  return T;
}

B None_ACDB63__ne(None_ACDB63 this, None_ACDB63 other);
B None_ACDB63__inequiv(None_ACDB63 this, None_ACDB63 other);

void None_ACDB63_string_(STACK_FRAME String result, None_ACDB63 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_ACDB63_cprint(None_ACDB63 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_ACDB63__is(STACK_FRAME void* this);
None_ACDB63 None_ACDB63__as(STACK_FRAME void *this);

void None_ACDB63_apply(STACK_FRAME None_ACDB63 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_ACDB63", "apply", 0);
}