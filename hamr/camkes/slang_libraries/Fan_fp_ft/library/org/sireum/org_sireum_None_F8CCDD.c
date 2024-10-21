#include <all.h>

// None[tc.TempControlMixedSeL4CAmKES.Fan_Initialization_Api]

B None_F8CCDD__eq(None_F8CCDD this, None_F8CCDD other) {
  return T;
}

B None_F8CCDD__equiv(None_F8CCDD this, None_F8CCDD other) {
  return T;
}

B None_F8CCDD__ne(None_F8CCDD this, None_F8CCDD other);
B None_F8CCDD__inequiv(None_F8CCDD this, None_F8CCDD other);

void None_F8CCDD_string_(STACK_FRAME String result, None_F8CCDD this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_F8CCDD_cprint(None_F8CCDD this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_F8CCDD__is(STACK_FRAME void* this);
None_F8CCDD None_F8CCDD__as(STACK_FRAME void *this);

void None_F8CCDD_apply(STACK_FRAME None_F8CCDD this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_F8CCDD", "apply", 0);
}