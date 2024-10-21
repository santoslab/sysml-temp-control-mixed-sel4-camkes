#include <all.h>

// None[tc.TempControlPeriodic.FanAck.Type]

B None_D4B208__eq(None_D4B208 this, None_D4B208 other) {
  return T;
}

B None_D4B208__equiv(None_D4B208 this, None_D4B208 other) {
  return T;
}

B None_D4B208__ne(None_D4B208 this, None_D4B208 other);
B None_D4B208__inequiv(None_D4B208 this, None_D4B208 other);

void None_D4B208_string_(STACK_FRAME String result, None_D4B208 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_D4B208_cprint(None_D4B208 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_D4B208__is(STACK_FRAME void* this);
None_D4B208 None_D4B208__as(STACK_FRAME void *this);

void None_D4B208_apply(STACK_FRAME None_D4B208 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_D4B208", "apply", 0);
}