#include <all.h>

// tc.TempControlMixed.TempUnit.Type

B tc_TempControlMixed_TempUnit_Type__eq(tc_TempControlMixed_TempUnit_Type this, tc_TempControlMixed_TempUnit_Type other);
B tc_TempControlMixed_TempUnit_Type__ne(tc_TempControlMixed_TempUnit_Type this, tc_TempControlMixed_TempUnit_Type other);
B tc_TempControlMixed_TempUnit_Type__equiv(tc_TempControlMixed_TempUnit_Type this, tc_TempControlMixed_TempUnit_Type other);
B tc_TempControlMixed_TempUnit_Type__inequiv(tc_TempControlMixed_TempUnit_Type this, tc_TempControlMixed_TempUnit_Type other);
Z tc_TempControlMixed_TempUnit_Type__ordinal(tc_TempControlMixed_TempUnit_Type this);
void tc_TempControlMixed_TempUnit_Type_name_(String result, tc_TempControlMixed_TempUnit_Type this);

void tc_TempControlMixed_TempUnit_Type_byName(STACK_FRAME Option_5F90D6 result, String s) {
  if (String__eq(s, string("Fahrenheit"))) Type_assign(result, &((struct Some_0E3FBA) { .type = TSome_0E3FBA, .value = tc_TempControlMixed_TempUnit_Type_Fahrenheit }), sizeof(union Option_5F90D6));
  else if (String__eq(s, string("Celsius"))) Type_assign(result, &((struct Some_0E3FBA) { .type = TSome_0E3FBA, .value = tc_TempControlMixed_TempUnit_Type_Celsius }), sizeof(union Option_5F90D6));
  else if (String__eq(s, string("Kelvin"))) Type_assign(result, &((struct Some_0E3FBA) { .type = TSome_0E3FBA, .value = tc_TempControlMixed_TempUnit_Type_Kelvin }), sizeof(union Option_5F90D6));
  else Type_assign(result, &((struct None_121724) { .type = TNone_121724 }), sizeof(union Option_5F90D6));
}

void tc_TempControlMixed_TempUnit_Type_byOrdinal(STACK_FRAME Option_5F90D6 result, Z n) {
  switch ((tc_TempControlMixed_TempUnit_Type) n) {
    case tc_TempControlMixed_TempUnit_Type_Fahrenheit: Type_assign(result, &((struct Some_0E3FBA) { .type = TSome_0E3FBA, .value = tc_TempControlMixed_TempUnit_Type_Fahrenheit }), sizeof(union Option_5F90D6)); return;
    case tc_TempControlMixed_TempUnit_Type_Celsius: Type_assign(result, &((struct Some_0E3FBA) { .type = TSome_0E3FBA, .value = tc_TempControlMixed_TempUnit_Type_Celsius }), sizeof(union Option_5F90D6)); return;
    case tc_TempControlMixed_TempUnit_Type_Kelvin: Type_assign(result, &((struct Some_0E3FBA) { .type = TSome_0E3FBA, .value = tc_TempControlMixed_TempUnit_Type_Kelvin }), sizeof(union Option_5F90D6)); return;
    default: Type_assign(result, &((struct None_121724) { .type = TNone_121724 }), sizeof(union Option_5F90D6)); return;
  }
}

Z tc_TempControlMixed_TempUnit_Type_numOfElements(void) {
  return Z_C(3);
}

void tc_TempControlMixed_TempUnit_Type_cprint(tc_TempControlMixed_TempUnit_Type this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  switch (this) {
    case tc_TempControlMixed_TempUnit_Type_Fahrenheit: String_cprint(string("Fahrenheit"), isOut); return;
    case tc_TempControlMixed_TempUnit_Type_Celsius: String_cprint(string("Celsius"), isOut); return;
    case tc_TempControlMixed_TempUnit_Type_Kelvin: String_cprint(string("Kelvin"), isOut); return;
  }
  #endif
}

void tc_TempControlMixed_TempUnit_Type_string_(STACK_FRAME String result, tc_TempControlMixed_TempUnit_Type this) {
  DeclNewStackFrame(caller, "TempUnit.scala", "tc_TempControlMixed_TempUnit_Type", "string", 0);
  switch (this) {
    case tc_TempControlMixed_TempUnit_Type_Fahrenheit: String_string_(SF result, string("Fahrenheit")); return;
    case tc_TempControlMixed_TempUnit_Type_Celsius: String_string_(SF result, string("Celsius")); return;
    case tc_TempControlMixed_TempUnit_Type_Kelvin: String_string_(SF result, string("Kelvin")); return;
  }
}