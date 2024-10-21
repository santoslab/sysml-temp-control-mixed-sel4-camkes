#include <all.h>

// None[tc.TempControlMixed.TempUnit.Type]

B None_121724__eq(None_121724 this, None_121724 other) {
  return T;
}

B None_121724__equiv(None_121724 this, None_121724 other) {
  return T;
}

B None_121724__ne(None_121724 this, None_121724 other);
B None_121724__inequiv(None_121724 this, None_121724 other);

void None_121724_string_(STACK_FRAME String result, None_121724 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_121724_cprint(None_121724 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_121724__is(STACK_FRAME void* this);
None_121724 None_121724__as(STACK_FRAME void *this);

void None_121724_apply(STACK_FRAME None_121724 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_121724", "apply", 0);
}