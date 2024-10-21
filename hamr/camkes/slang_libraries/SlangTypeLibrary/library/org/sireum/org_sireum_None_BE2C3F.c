#include <all.h>

// None[tc.Isolette_Data_Model.Monitor_Mode.Type]

B None_BE2C3F__eq(None_BE2C3F this, None_BE2C3F other) {
  return T;
}

B None_BE2C3F__equiv(None_BE2C3F this, None_BE2C3F other) {
  return T;
}

B None_BE2C3F__ne(None_BE2C3F this, None_BE2C3F other);
B None_BE2C3F__inequiv(None_BE2C3F this, None_BE2C3F other);

void None_BE2C3F_string_(STACK_FRAME String result, None_BE2C3F this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_BE2C3F_cprint(None_BE2C3F this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_BE2C3F__is(STACK_FRAME void* this);
None_BE2C3F None_BE2C3F__as(STACK_FRAME void *this);

void None_BE2C3F_apply(STACK_FRAME None_BE2C3F this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_BE2C3F", "apply", 0);
}