#include <all.h>

// None[tc.TempControlPeriodic.TempUnit.Type]

B None_4E7E94__eq(None_4E7E94 this, None_4E7E94 other) {
  return T;
}

B None_4E7E94__equiv(None_4E7E94 this, None_4E7E94 other) {
  return T;
}

B None_4E7E94__ne(None_4E7E94 this, None_4E7E94 other);
B None_4E7E94__inequiv(None_4E7E94 this, None_4E7E94 other);

void None_4E7E94_string_(STACK_FRAME String result, None_4E7E94 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_4E7E94_cprint(None_4E7E94 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_4E7E94__is(STACK_FRAME void* this);
None_4E7E94 None_4E7E94__as(STACK_FRAME void *this);

void None_4E7E94_apply(STACK_FRAME None_4E7E94 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_4E7E94", "apply", 0);
}