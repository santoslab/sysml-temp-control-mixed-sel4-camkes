#include <all.h>

// None[tc.Isolette_Data_Model.On_Off.Type]

B None_BE24EA__eq(None_BE24EA this, None_BE24EA other) {
  return T;
}

B None_BE24EA__equiv(None_BE24EA this, None_BE24EA other) {
  return T;
}

B None_BE24EA__ne(None_BE24EA this, None_BE24EA other);
B None_BE24EA__inequiv(None_BE24EA this, None_BE24EA other);

void None_BE24EA_string_(STACK_FRAME String result, None_BE24EA this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_BE24EA_cprint(None_BE24EA this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_BE24EA__is(STACK_FRAME void* this);
None_BE24EA None_BE24EA__as(STACK_FRAME void *this);

void None_BE24EA_apply(STACK_FRAME None_BE24EA this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_BE24EA", "apply", 0);
}