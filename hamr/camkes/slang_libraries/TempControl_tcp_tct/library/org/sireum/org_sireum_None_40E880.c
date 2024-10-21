#include <all.h>

// None[tc.TempControlMixedSeL4CAmKES.Temperature]

B None_40E880__eq(None_40E880 this, None_40E880 other) {
  return T;
}

B None_40E880__equiv(None_40E880 this, None_40E880 other) {
  return T;
}

B None_40E880__ne(None_40E880 this, None_40E880 other);
B None_40E880__inequiv(None_40E880 this, None_40E880 other);

void None_40E880_string_(STACK_FRAME String result, None_40E880 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_40E880_cprint(None_40E880 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_40E880__is(STACK_FRAME void* this);
None_40E880 None_40E880__as(STACK_FRAME void *this);

void None_40E880_apply(STACK_FRAME None_40E880 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_40E880", "apply", 0);
}