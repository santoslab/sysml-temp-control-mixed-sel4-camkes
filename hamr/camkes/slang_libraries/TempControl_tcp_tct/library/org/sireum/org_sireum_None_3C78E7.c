#include <all.h>

// None[tc.Isolette_Data_Model.Regulator_Mode.Type]

B None_3C78E7__eq(None_3C78E7 this, None_3C78E7 other) {
  return T;
}

B None_3C78E7__equiv(None_3C78E7 this, None_3C78E7 other) {
  return T;
}

B None_3C78E7__ne(None_3C78E7 this, None_3C78E7 other);
B None_3C78E7__inequiv(None_3C78E7 this, None_3C78E7 other);

void None_3C78E7_string_(STACK_FRAME String result, None_3C78E7 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_3C78E7_cprint(None_3C78E7 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_3C78E7__is(STACK_FRAME void* this);
None_3C78E7 None_3C78E7__as(STACK_FRAME void *this);

void None_3C78E7_apply(STACK_FRAME None_3C78E7 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_3C78E7", "apply", 0);
}