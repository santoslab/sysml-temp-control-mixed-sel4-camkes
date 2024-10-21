#include <all.h>

// tc.TempControlPeriodic.TempUnit.Type

B tc_TempControlPeriodic_TempUnit_Type__eq(tc_TempControlPeriodic_TempUnit_Type this, tc_TempControlPeriodic_TempUnit_Type other);
B tc_TempControlPeriodic_TempUnit_Type__ne(tc_TempControlPeriodic_TempUnit_Type this, tc_TempControlPeriodic_TempUnit_Type other);
B tc_TempControlPeriodic_TempUnit_Type__equiv(tc_TempControlPeriodic_TempUnit_Type this, tc_TempControlPeriodic_TempUnit_Type other);
B tc_TempControlPeriodic_TempUnit_Type__inequiv(tc_TempControlPeriodic_TempUnit_Type this, tc_TempControlPeriodic_TempUnit_Type other);
Z tc_TempControlPeriodic_TempUnit_Type__ordinal(tc_TempControlPeriodic_TempUnit_Type this);
void tc_TempControlPeriodic_TempUnit_Type_name_(String result, tc_TempControlPeriodic_TempUnit_Type this);

void tc_TempControlPeriodic_TempUnit_Type_byName(STACK_FRAME Option_978FB8 result, String s) {
  if (String__eq(s, string("Fahrenheit"))) Type_assign(result, &((struct Some_56FCC9) { .type = TSome_56FCC9, .value = tc_TempControlPeriodic_TempUnit_Type_Fahrenheit }), sizeof(union Option_978FB8));
  else if (String__eq(s, string("Celsius"))) Type_assign(result, &((struct Some_56FCC9) { .type = TSome_56FCC9, .value = tc_TempControlPeriodic_TempUnit_Type_Celsius }), sizeof(union Option_978FB8));
  else if (String__eq(s, string("Kelvin"))) Type_assign(result, &((struct Some_56FCC9) { .type = TSome_56FCC9, .value = tc_TempControlPeriodic_TempUnit_Type_Kelvin }), sizeof(union Option_978FB8));
  else Type_assign(result, &((struct None_4E7E94) { .type = TNone_4E7E94 }), sizeof(union Option_978FB8));
}

void tc_TempControlPeriodic_TempUnit_Type_byOrdinal(STACK_FRAME Option_978FB8 result, Z n) {
  switch ((tc_TempControlPeriodic_TempUnit_Type) n) {
    case tc_TempControlPeriodic_TempUnit_Type_Fahrenheit: Type_assign(result, &((struct Some_56FCC9) { .type = TSome_56FCC9, .value = tc_TempControlPeriodic_TempUnit_Type_Fahrenheit }), sizeof(union Option_978FB8)); return;
    case tc_TempControlPeriodic_TempUnit_Type_Celsius: Type_assign(result, &((struct Some_56FCC9) { .type = TSome_56FCC9, .value = tc_TempControlPeriodic_TempUnit_Type_Celsius }), sizeof(union Option_978FB8)); return;
    case tc_TempControlPeriodic_TempUnit_Type_Kelvin: Type_assign(result, &((struct Some_56FCC9) { .type = TSome_56FCC9, .value = tc_TempControlPeriodic_TempUnit_Type_Kelvin }), sizeof(union Option_978FB8)); return;
    default: Type_assign(result, &((struct None_4E7E94) { .type = TNone_4E7E94 }), sizeof(union Option_978FB8)); return;
  }
}

Z tc_TempControlPeriodic_TempUnit_Type_numOfElements(void) {
  return Z_C(3);
}

void tc_TempControlPeriodic_TempUnit_Type_cprint(tc_TempControlPeriodic_TempUnit_Type this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  switch (this) {
    case tc_TempControlPeriodic_TempUnit_Type_Fahrenheit: String_cprint(string("Fahrenheit"), isOut); return;
    case tc_TempControlPeriodic_TempUnit_Type_Celsius: String_cprint(string("Celsius"), isOut); return;
    case tc_TempControlPeriodic_TempUnit_Type_Kelvin: String_cprint(string("Kelvin"), isOut); return;
  }
  #endif
}

void tc_TempControlPeriodic_TempUnit_Type_string_(STACK_FRAME String result, tc_TempControlPeriodic_TempUnit_Type this) {
  DeclNewStackFrame(caller, "TempUnit.scala", "tc_TempControlPeriodic_TempUnit_Type", "string", 0);
  switch (this) {
    case tc_TempControlPeriodic_TempUnit_Type_Fahrenheit: String_string_(SF result, string("Fahrenheit")); return;
    case tc_TempControlPeriodic_TempUnit_Type_Celsius: String_string_(SF result, string("Celsius")); return;
    case tc_TempControlPeriodic_TempUnit_Type_Kelvin: String_string_(SF result, string("Kelvin")); return;
  }
}