#include <all.h>

// tc.Isolette_Data_Model.Regulator_Mode.Type

B tc_Isolette_Data_Model_Regulator_Mode_Type__eq(tc_Isolette_Data_Model_Regulator_Mode_Type this, tc_Isolette_Data_Model_Regulator_Mode_Type other);
B tc_Isolette_Data_Model_Regulator_Mode_Type__ne(tc_Isolette_Data_Model_Regulator_Mode_Type this, tc_Isolette_Data_Model_Regulator_Mode_Type other);
B tc_Isolette_Data_Model_Regulator_Mode_Type__equiv(tc_Isolette_Data_Model_Regulator_Mode_Type this, tc_Isolette_Data_Model_Regulator_Mode_Type other);
B tc_Isolette_Data_Model_Regulator_Mode_Type__inequiv(tc_Isolette_Data_Model_Regulator_Mode_Type this, tc_Isolette_Data_Model_Regulator_Mode_Type other);
Z tc_Isolette_Data_Model_Regulator_Mode_Type__ordinal(tc_Isolette_Data_Model_Regulator_Mode_Type this);
void tc_Isolette_Data_Model_Regulator_Mode_Type_name_(String result, tc_Isolette_Data_Model_Regulator_Mode_Type this);

void tc_Isolette_Data_Model_Regulator_Mode_Type_byName(STACK_FRAME Option_A2275D result, String s) {
  if (String__eq(s, string("Init_Regulator_Mode"))) Type_assign(result, &((struct Some_C790DA) { .type = TSome_C790DA, .value = tc_Isolette_Data_Model_Regulator_Mode_Type_Init_Regulator_Mode }), sizeof(union Option_A2275D));
  else if (String__eq(s, string("Normal_Regulator_Mode"))) Type_assign(result, &((struct Some_C790DA) { .type = TSome_C790DA, .value = tc_Isolette_Data_Model_Regulator_Mode_Type_Normal_Regulator_Mode }), sizeof(union Option_A2275D));
  else if (String__eq(s, string("Failed_Regulator_Mode"))) Type_assign(result, &((struct Some_C790DA) { .type = TSome_C790DA, .value = tc_Isolette_Data_Model_Regulator_Mode_Type_Failed_Regulator_Mode }), sizeof(union Option_A2275D));
  else Type_assign(result, &((struct None_3C78E7) { .type = TNone_3C78E7 }), sizeof(union Option_A2275D));
}

void tc_Isolette_Data_Model_Regulator_Mode_Type_byOrdinal(STACK_FRAME Option_A2275D result, Z n) {
  switch ((tc_Isolette_Data_Model_Regulator_Mode_Type) n) {
    case tc_Isolette_Data_Model_Regulator_Mode_Type_Init_Regulator_Mode: Type_assign(result, &((struct Some_C790DA) { .type = TSome_C790DA, .value = tc_Isolette_Data_Model_Regulator_Mode_Type_Init_Regulator_Mode }), sizeof(union Option_A2275D)); return;
    case tc_Isolette_Data_Model_Regulator_Mode_Type_Normal_Regulator_Mode: Type_assign(result, &((struct Some_C790DA) { .type = TSome_C790DA, .value = tc_Isolette_Data_Model_Regulator_Mode_Type_Normal_Regulator_Mode }), sizeof(union Option_A2275D)); return;
    case tc_Isolette_Data_Model_Regulator_Mode_Type_Failed_Regulator_Mode: Type_assign(result, &((struct Some_C790DA) { .type = TSome_C790DA, .value = tc_Isolette_Data_Model_Regulator_Mode_Type_Failed_Regulator_Mode }), sizeof(union Option_A2275D)); return;
    default: Type_assign(result, &((struct None_3C78E7) { .type = TNone_3C78E7 }), sizeof(union Option_A2275D)); return;
  }
}

Z tc_Isolette_Data_Model_Regulator_Mode_Type_numOfElements(void) {
  return Z_C(3);
}

void tc_Isolette_Data_Model_Regulator_Mode_Type_cprint(tc_Isolette_Data_Model_Regulator_Mode_Type this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  switch (this) {
    case tc_Isolette_Data_Model_Regulator_Mode_Type_Init_Regulator_Mode: String_cprint(string("Init_Regulator_Mode"), isOut); return;
    case tc_Isolette_Data_Model_Regulator_Mode_Type_Normal_Regulator_Mode: String_cprint(string("Normal_Regulator_Mode"), isOut); return;
    case tc_Isolette_Data_Model_Regulator_Mode_Type_Failed_Regulator_Mode: String_cprint(string("Failed_Regulator_Mode"), isOut); return;
  }
  #endif
}

void tc_Isolette_Data_Model_Regulator_Mode_Type_string_(STACK_FRAME String result, tc_Isolette_Data_Model_Regulator_Mode_Type this) {
  DeclNewStackFrame(caller, "Regulator_Mode.scala", "tc_Isolette_Data_Model_Regulator_Mode_Type", "string", 0);
  switch (this) {
    case tc_Isolette_Data_Model_Regulator_Mode_Type_Init_Regulator_Mode: String_string_(SF result, string("Init_Regulator_Mode")); return;
    case tc_Isolette_Data_Model_Regulator_Mode_Type_Normal_Regulator_Mode: String_string_(SF result, string("Normal_Regulator_Mode")); return;
    case tc_Isolette_Data_Model_Regulator_Mode_Type_Failed_Regulator_Mode: String_string_(SF result, string("Failed_Regulator_Mode")); return;
  }
}