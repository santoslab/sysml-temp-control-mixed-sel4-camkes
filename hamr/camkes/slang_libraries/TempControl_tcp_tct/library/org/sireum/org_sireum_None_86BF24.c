#include <all.h>

// None[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]

B None_86BF24__eq(None_86BF24 this, None_86BF24 other) {
  return T;
}

B None_86BF24__equiv(None_86BF24 this, None_86BF24 other) {
  return T;
}

B None_86BF24__ne(None_86BF24 this, None_86BF24 other);
B None_86BF24__inequiv(None_86BF24 this, None_86BF24 other);

void None_86BF24_string_(STACK_FRAME String result, None_86BF24 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_86BF24_cprint(None_86BF24 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_86BF24__is(STACK_FRAME void* this);
None_86BF24 None_86BF24__as(STACK_FRAME void *this);

void None_86BF24_apply(STACK_FRAME None_86BF24 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_86BF24", "apply", 0);
}