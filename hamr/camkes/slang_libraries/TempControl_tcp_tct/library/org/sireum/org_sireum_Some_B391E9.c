#include <all.h>

// Some[tc.TempControlMixedSeL4CAmKES.SetPoint]

B Some_B391E9__eq(Some_B391E9 this, Some_B391E9 other) {
  if (tc_TempControlMixedSeL4CAmKES_SetPoint__ne((tc_TempControlMixedSeL4CAmKES_SetPoint) &this->value, (tc_TempControlMixedSeL4CAmKES_SetPoint) &other->value)) return F;
  return T;
}

B Some_B391E9__equiv(Some_B391E9 this, Some_B391E9 other) {
  if (tc_TempControlMixedSeL4CAmKES_SetPoint__inequiv((tc_TempControlMixedSeL4CAmKES_SetPoint) &this->value, (tc_TempControlMixedSeL4CAmKES_SetPoint) &other->value)) return F;
  return T;
}

B Some_B391E9__ne(Some_B391E9 this, Some_B391E9 other);
B Some_B391E9__inequiv(Some_B391E9 this, Some_B391E9 other);

void Some_B391E9_string_(STACK_FRAME String result, Some_B391E9 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  tc_TempControlMixedSeL4CAmKES_SetPoint_string_(SF result, (tc_TempControlMixedSeL4CAmKES_SetPoint) &this->value);
  String_string_(SF result, string(")"));
}

void Some_B391E9_cprint(Some_B391E9 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  tc_TempControlMixedSeL4CAmKES_SetPoint_cprint((tc_TempControlMixedSeL4CAmKES_SetPoint) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_B391E9__is(STACK_FRAME void* this);
Some_B391E9 Some_B391E9__as(STACK_FRAME void *this);

void Some_B391E9_apply(STACK_FRAME Some_B391E9 this, tc_TempControlMixedSeL4CAmKES_SetPoint value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_B391E9", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct tc_TempControlMixedSeL4CAmKES_SetPoint));
}