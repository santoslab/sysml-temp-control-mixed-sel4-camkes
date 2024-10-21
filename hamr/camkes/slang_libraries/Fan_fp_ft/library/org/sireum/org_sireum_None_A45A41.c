#include <all.h>

// None[tc.Isolette_Data_Model.Status.Type]

B None_A45A41__eq(None_A45A41 this, None_A45A41 other) {
  return T;
}

B None_A45A41__equiv(None_A45A41 this, None_A45A41 other) {
  return T;
}

B None_A45A41__ne(None_A45A41 this, None_A45A41 other);
B None_A45A41__inequiv(None_A45A41 this, None_A45A41 other);

void None_A45A41_string_(STACK_FRAME String result, None_A45A41 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_A45A41_cprint(None_A45A41 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_A45A41__is(STACK_FRAME void* this);
None_A45A41 None_A45A41__as(STACK_FRAME void *this);

void None_A45A41_apply(STACK_FRAME None_A45A41 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_A45A41", "apply", 0);
}