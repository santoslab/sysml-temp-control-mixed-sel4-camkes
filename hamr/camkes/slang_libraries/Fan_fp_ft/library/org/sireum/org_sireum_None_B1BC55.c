#include <all.h>

// None[tc.TempControlMixedSeL4CAmKES.Fan_Operational_Api]

B None_B1BC55__eq(None_B1BC55 this, None_B1BC55 other) {
  return T;
}

B None_B1BC55__equiv(None_B1BC55 this, None_B1BC55 other) {
  return T;
}

B None_B1BC55__ne(None_B1BC55 this, None_B1BC55 other);
B None_B1BC55__inequiv(None_B1BC55 this, None_B1BC55 other);

void None_B1BC55_string_(STACK_FRAME String result, None_B1BC55 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_B1BC55_cprint(None_B1BC55 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_B1BC55__is(STACK_FRAME void* this);
None_B1BC55 None_B1BC55__as(STACK_FRAME void *this);

void None_B1BC55_apply(STACK_FRAME None_B1BC55 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_B1BC55", "apply", 0);
}