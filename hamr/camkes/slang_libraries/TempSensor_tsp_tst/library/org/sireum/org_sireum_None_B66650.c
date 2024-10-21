#include <all.h>

// None[tc.TempControlMixedSeL4CAmKES.TempSensor_Initialization_Api]

B None_B66650__eq(None_B66650 this, None_B66650 other) {
  return T;
}

B None_B66650__equiv(None_B66650 this, None_B66650 other) {
  return T;
}

B None_B66650__ne(None_B66650 this, None_B66650 other);
B None_B66650__inequiv(None_B66650 this, None_B66650 other);

void None_B66650_string_(STACK_FRAME String result, None_B66650 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_B66650_cprint(None_B66650 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_B66650__is(STACK_FRAME void* this);
None_B66650 None_B66650__as(STACK_FRAME void *this);

void None_B66650_apply(STACK_FRAME None_B66650 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_B66650", "apply", 0);
}