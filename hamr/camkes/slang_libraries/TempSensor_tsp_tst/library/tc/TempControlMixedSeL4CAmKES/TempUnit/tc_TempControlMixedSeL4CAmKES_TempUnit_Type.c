#include <all.h>

// tc.TempControlMixedSeL4CAmKES.TempUnit.Type

B tc_TempControlMixedSeL4CAmKES_TempUnit_Type__eq(tc_TempControlMixedSeL4CAmKES_TempUnit_Type this, tc_TempControlMixedSeL4CAmKES_TempUnit_Type other);
B tc_TempControlMixedSeL4CAmKES_TempUnit_Type__ne(tc_TempControlMixedSeL4CAmKES_TempUnit_Type this, tc_TempControlMixedSeL4CAmKES_TempUnit_Type other);
B tc_TempControlMixedSeL4CAmKES_TempUnit_Type__equiv(tc_TempControlMixedSeL4CAmKES_TempUnit_Type this, tc_TempControlMixedSeL4CAmKES_TempUnit_Type other);
B tc_TempControlMixedSeL4CAmKES_TempUnit_Type__inequiv(tc_TempControlMixedSeL4CAmKES_TempUnit_Type this, tc_TempControlMixedSeL4CAmKES_TempUnit_Type other);
Z tc_TempControlMixedSeL4CAmKES_TempUnit_Type__ordinal(tc_TempControlMixedSeL4CAmKES_TempUnit_Type this);
void tc_TempControlMixedSeL4CAmKES_TempUnit_Type_name_(String result, tc_TempControlMixedSeL4CAmKES_TempUnit_Type this);

void tc_TempControlMixedSeL4CAmKES_TempUnit_Type_byName(STACK_FRAME Option_103926 result, String s) {
  if (String__eq(s, string("Fahrenheit"))) Type_assign(result, &((struct Some_0C4CF8) { .type = TSome_0C4CF8, .value = tc_TempControlMixedSeL4CAmKES_TempUnit_Type_Fahrenheit }), sizeof(union Option_103926));
  else Type_assign(result, &((struct None_86BF24) { .type = TNone_86BF24 }), sizeof(union Option_103926));
}

void tc_TempControlMixedSeL4CAmKES_TempUnit_Type_byOrdinal(STACK_FRAME Option_103926 result, Z n) {
  switch ((tc_TempControlMixedSeL4CAmKES_TempUnit_Type) n) {
    case tc_TempControlMixedSeL4CAmKES_TempUnit_Type_Fahrenheit: Type_assign(result, &((struct Some_0C4CF8) { .type = TSome_0C4CF8, .value = tc_TempControlMixedSeL4CAmKES_TempUnit_Type_Fahrenheit }), sizeof(union Option_103926)); return;
    default: Type_assign(result, &((struct None_86BF24) { .type = TNone_86BF24 }), sizeof(union Option_103926)); return;
  }
}

Z tc_TempControlMixedSeL4CAmKES_TempUnit_Type_numOfElements(void) {
  return Z_C(1);
}

void tc_TempControlMixedSeL4CAmKES_TempUnit_Type_cprint(tc_TempControlMixedSeL4CAmKES_TempUnit_Type this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  switch (this) {
    case tc_TempControlMixedSeL4CAmKES_TempUnit_Type_Fahrenheit: String_cprint(string("Fahrenheit"), isOut); return;
  }
  #endif
}

void tc_TempControlMixedSeL4CAmKES_TempUnit_Type_string_(STACK_FRAME String result, tc_TempControlMixedSeL4CAmKES_TempUnit_Type this) {
  DeclNewStackFrame(caller, "TempUnit.scala", "tc_TempControlMixedSeL4CAmKES_TempUnit_Type", "string", 0);
  switch (this) {
    case tc_TempControlMixedSeL4CAmKES_TempUnit_Type_Fahrenheit: String_string_(SF result, string("Fahrenheit")); return;
  }
}