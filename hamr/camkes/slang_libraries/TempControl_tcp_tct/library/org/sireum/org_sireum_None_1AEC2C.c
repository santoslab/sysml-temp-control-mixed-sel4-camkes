#include <all.h>

// None[tc.TempControlMixed.FanCmd.Type]

B None_1AEC2C__eq(None_1AEC2C this, None_1AEC2C other) {
  return T;
}

B None_1AEC2C__equiv(None_1AEC2C this, None_1AEC2C other) {
  return T;
}

B None_1AEC2C__ne(None_1AEC2C this, None_1AEC2C other);
B None_1AEC2C__inequiv(None_1AEC2C this, None_1AEC2C other);

void None_1AEC2C_string_(STACK_FRAME String result, None_1AEC2C this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_1AEC2C_cprint(None_1AEC2C this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_1AEC2C__is(STACK_FRAME void* this);
None_1AEC2C None_1AEC2C__as(STACK_FRAME void *this);

void None_1AEC2C_apply(STACK_FRAME None_1AEC2C this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_1AEC2C", "apply", 0);
}