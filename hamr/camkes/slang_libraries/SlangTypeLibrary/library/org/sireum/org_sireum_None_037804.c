#include <all.h>

// None[tc.TempControlPeriodic.FanCmd.Type]

B None_037804__eq(None_037804 this, None_037804 other) {
  return T;
}

B None_037804__equiv(None_037804 this, None_037804 other) {
  return T;
}

B None_037804__ne(None_037804 this, None_037804 other);
B None_037804__inequiv(None_037804 this, None_037804 other);

void None_037804_string_(STACK_FRAME String result, None_037804 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_037804_cprint(None_037804 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_037804__is(STACK_FRAME void* this);
None_037804 None_037804__as(STACK_FRAME void *this);

void None_037804_apply(STACK_FRAME None_037804 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_037804", "apply", 0);
}