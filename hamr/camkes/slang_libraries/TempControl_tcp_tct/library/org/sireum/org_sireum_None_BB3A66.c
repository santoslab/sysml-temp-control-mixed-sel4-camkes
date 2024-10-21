#include <all.h>

// None[tc.TempControlMixedSeL4CAmKES.TempControl_Initialization_Api]

B None_BB3A66__eq(None_BB3A66 this, None_BB3A66 other) {
  return T;
}

B None_BB3A66__equiv(None_BB3A66 this, None_BB3A66 other) {
  return T;
}

B None_BB3A66__ne(None_BB3A66 this, None_BB3A66 other);
B None_BB3A66__inequiv(None_BB3A66 this, None_BB3A66 other);

void None_BB3A66_string_(STACK_FRAME String result, None_BB3A66 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_BB3A66_cprint(None_BB3A66 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_BB3A66__is(STACK_FRAME void* this);
None_BB3A66 None_BB3A66__as(STACK_FRAME void *this);

void None_BB3A66_apply(STACK_FRAME None_BB3A66 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_BB3A66", "apply", 0);
}