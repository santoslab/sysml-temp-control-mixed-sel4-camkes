#include <all.h>

// None[tc.TempControlMixedSeL4CAmKES.TempSensor_Operational_Api]

B None_79FC20__eq(None_79FC20 this, None_79FC20 other) {
  return T;
}

B None_79FC20__equiv(None_79FC20 this, None_79FC20 other) {
  return T;
}

B None_79FC20__ne(None_79FC20 this, None_79FC20 other);
B None_79FC20__inequiv(None_79FC20 this, None_79FC20 other);

void None_79FC20_string_(STACK_FRAME String result, None_79FC20 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_79FC20_cprint(None_79FC20 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_79FC20__is(STACK_FRAME void* this);
None_79FC20 None_79FC20__as(STACK_FRAME void *this);

void None_79FC20_apply(STACK_FRAME None_79FC20 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_79FC20", "apply", 0);
}