#include <all.h>

// tc.Isolette_Data_Model.On_Off.Type

B tc_Isolette_Data_Model_On_Off_Type__eq(tc_Isolette_Data_Model_On_Off_Type this, tc_Isolette_Data_Model_On_Off_Type other);
B tc_Isolette_Data_Model_On_Off_Type__ne(tc_Isolette_Data_Model_On_Off_Type this, tc_Isolette_Data_Model_On_Off_Type other);
B tc_Isolette_Data_Model_On_Off_Type__equiv(tc_Isolette_Data_Model_On_Off_Type this, tc_Isolette_Data_Model_On_Off_Type other);
B tc_Isolette_Data_Model_On_Off_Type__inequiv(tc_Isolette_Data_Model_On_Off_Type this, tc_Isolette_Data_Model_On_Off_Type other);
Z tc_Isolette_Data_Model_On_Off_Type__ordinal(tc_Isolette_Data_Model_On_Off_Type this);
void tc_Isolette_Data_Model_On_Off_Type_name_(String result, tc_Isolette_Data_Model_On_Off_Type this);

void tc_Isolette_Data_Model_On_Off_Type_byName(STACK_FRAME Option_C6954F result, String s) {
  if (String__eq(s, string("Onn"))) Type_assign(result, &((struct Some_F1808D) { .type = TSome_F1808D, .value = tc_Isolette_Data_Model_On_Off_Type_Onn }), sizeof(union Option_C6954F));
  else if (String__eq(s, string("Off"))) Type_assign(result, &((struct Some_F1808D) { .type = TSome_F1808D, .value = tc_Isolette_Data_Model_On_Off_Type_Off }), sizeof(union Option_C6954F));
  else Type_assign(result, &((struct None_BE24EA) { .type = TNone_BE24EA }), sizeof(union Option_C6954F));
}

void tc_Isolette_Data_Model_On_Off_Type_byOrdinal(STACK_FRAME Option_C6954F result, Z n) {
  switch ((tc_Isolette_Data_Model_On_Off_Type) n) {
    case tc_Isolette_Data_Model_On_Off_Type_Onn: Type_assign(result, &((struct Some_F1808D) { .type = TSome_F1808D, .value = tc_Isolette_Data_Model_On_Off_Type_Onn }), sizeof(union Option_C6954F)); return;
    case tc_Isolette_Data_Model_On_Off_Type_Off: Type_assign(result, &((struct Some_F1808D) { .type = TSome_F1808D, .value = tc_Isolette_Data_Model_On_Off_Type_Off }), sizeof(union Option_C6954F)); return;
    default: Type_assign(result, &((struct None_BE24EA) { .type = TNone_BE24EA }), sizeof(union Option_C6954F)); return;
  }
}

Z tc_Isolette_Data_Model_On_Off_Type_numOfElements(void) {
  return Z_C(2);
}

void tc_Isolette_Data_Model_On_Off_Type_cprint(tc_Isolette_Data_Model_On_Off_Type this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  switch (this) {
    case tc_Isolette_Data_Model_On_Off_Type_Onn: String_cprint(string("Onn"), isOut); return;
    case tc_Isolette_Data_Model_On_Off_Type_Off: String_cprint(string("Off"), isOut); return;
  }
  #endif
}

void tc_Isolette_Data_Model_On_Off_Type_string_(STACK_FRAME String result, tc_Isolette_Data_Model_On_Off_Type this) {
  DeclNewStackFrame(caller, "On_Off.scala", "tc_Isolette_Data_Model_On_Off_Type", "string", 0);
  switch (this) {
    case tc_Isolette_Data_Model_On_Off_Type_Onn: String_string_(SF result, string("Onn")); return;
    case tc_Isolette_Data_Model_On_Off_Type_Off: String_string_(SF result, string("Off")); return;
  }
}