#include <all.h>

// None[tc.Isolette_Data_Model.ValueStatus.Type]

B None_A23E58__eq(None_A23E58 this, None_A23E58 other) {
  return T;
}

B None_A23E58__equiv(None_A23E58 this, None_A23E58 other) {
  return T;
}

B None_A23E58__ne(None_A23E58 this, None_A23E58 other);
B None_A23E58__inequiv(None_A23E58 this, None_A23E58 other);

void None_A23E58_string_(STACK_FRAME String result, None_A23E58 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_A23E58_cprint(None_A23E58 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_A23E58__is(STACK_FRAME void* this);
None_A23E58 None_A23E58__as(STACK_FRAME void *this);

void None_A23E58_apply(STACK_FRAME None_A23E58 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_A23E58", "apply", 0);
}