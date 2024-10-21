#include <all.h>

// tc.Isolette_Data_Model.Status.Type

B tc_Isolette_Data_Model_Status_Type__eq(tc_Isolette_Data_Model_Status_Type this, tc_Isolette_Data_Model_Status_Type other);
B tc_Isolette_Data_Model_Status_Type__ne(tc_Isolette_Data_Model_Status_Type this, tc_Isolette_Data_Model_Status_Type other);
B tc_Isolette_Data_Model_Status_Type__equiv(tc_Isolette_Data_Model_Status_Type this, tc_Isolette_Data_Model_Status_Type other);
B tc_Isolette_Data_Model_Status_Type__inequiv(tc_Isolette_Data_Model_Status_Type this, tc_Isolette_Data_Model_Status_Type other);
Z tc_Isolette_Data_Model_Status_Type__ordinal(tc_Isolette_Data_Model_Status_Type this);
void tc_Isolette_Data_Model_Status_Type_name_(String result, tc_Isolette_Data_Model_Status_Type this);

void tc_Isolette_Data_Model_Status_Type_byName(STACK_FRAME Option_C9A4D6 result, String s) {
  if (String__eq(s, string("Init_Status"))) Type_assign(result, &((struct Some_140719) { .type = TSome_140719, .value = tc_Isolette_Data_Model_Status_Type_Init_Status }), sizeof(union Option_C9A4D6));
  else if (String__eq(s, string("On_Status"))) Type_assign(result, &((struct Some_140719) { .type = TSome_140719, .value = tc_Isolette_Data_Model_Status_Type_On_Status }), sizeof(union Option_C9A4D6));
  else if (String__eq(s, string("Failed_Status"))) Type_assign(result, &((struct Some_140719) { .type = TSome_140719, .value = tc_Isolette_Data_Model_Status_Type_Failed_Status }), sizeof(union Option_C9A4D6));
  else Type_assign(result, &((struct None_A45A41) { .type = TNone_A45A41 }), sizeof(union Option_C9A4D6));
}

void tc_Isolette_Data_Model_Status_Type_byOrdinal(STACK_FRAME Option_C9A4D6 result, Z n) {
  switch ((tc_Isolette_Data_Model_Status_Type) n) {
    case tc_Isolette_Data_Model_Status_Type_Init_Status: Type_assign(result, &((struct Some_140719) { .type = TSome_140719, .value = tc_Isolette_Data_Model_Status_Type_Init_Status }), sizeof(union Option_C9A4D6)); return;
    case tc_Isolette_Data_Model_Status_Type_On_Status: Type_assign(result, &((struct Some_140719) { .type = TSome_140719, .value = tc_Isolette_Data_Model_Status_Type_On_Status }), sizeof(union Option_C9A4D6)); return;
    case tc_Isolette_Data_Model_Status_Type_Failed_Status: Type_assign(result, &((struct Some_140719) { .type = TSome_140719, .value = tc_Isolette_Data_Model_Status_Type_Failed_Status }), sizeof(union Option_C9A4D6)); return;
    default: Type_assign(result, &((struct None_A45A41) { .type = TNone_A45A41 }), sizeof(union Option_C9A4D6)); return;
  }
}

Z tc_Isolette_Data_Model_Status_Type_numOfElements(void) {
  return Z_C(3);
}

void tc_Isolette_Data_Model_Status_Type_cprint(tc_Isolette_Data_Model_Status_Type this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  switch (this) {
    case tc_Isolette_Data_Model_Status_Type_Init_Status: String_cprint(string("Init_Status"), isOut); return;
    case tc_Isolette_Data_Model_Status_Type_On_Status: String_cprint(string("On_Status"), isOut); return;
    case tc_Isolette_Data_Model_Status_Type_Failed_Status: String_cprint(string("Failed_Status"), isOut); return;
  }
  #endif
}

void tc_Isolette_Data_Model_Status_Type_string_(STACK_FRAME String result, tc_Isolette_Data_Model_Status_Type this) {
  DeclNewStackFrame(caller, "Status.scala", "tc_Isolette_Data_Model_Status_Type", "string", 0);
  switch (this) {
    case tc_Isolette_Data_Model_Status_Type_Init_Status: String_string_(SF result, string("Init_Status")); return;
    case tc_Isolette_Data_Model_Status_Type_On_Status: String_string_(SF result, string("On_Status")); return;
    case tc_Isolette_Data_Model_Status_Type_Failed_Status: String_string_(SF result, string("Failed_Status")); return;
  }
}