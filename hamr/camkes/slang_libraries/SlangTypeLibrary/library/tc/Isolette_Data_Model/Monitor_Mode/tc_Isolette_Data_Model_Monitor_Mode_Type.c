#include <all.h>

// tc.Isolette_Data_Model.Monitor_Mode.Type

B tc_Isolette_Data_Model_Monitor_Mode_Type__eq(tc_Isolette_Data_Model_Monitor_Mode_Type this, tc_Isolette_Data_Model_Monitor_Mode_Type other);
B tc_Isolette_Data_Model_Monitor_Mode_Type__ne(tc_Isolette_Data_Model_Monitor_Mode_Type this, tc_Isolette_Data_Model_Monitor_Mode_Type other);
B tc_Isolette_Data_Model_Monitor_Mode_Type__equiv(tc_Isolette_Data_Model_Monitor_Mode_Type this, tc_Isolette_Data_Model_Monitor_Mode_Type other);
B tc_Isolette_Data_Model_Monitor_Mode_Type__inequiv(tc_Isolette_Data_Model_Monitor_Mode_Type this, tc_Isolette_Data_Model_Monitor_Mode_Type other);
Z tc_Isolette_Data_Model_Monitor_Mode_Type__ordinal(tc_Isolette_Data_Model_Monitor_Mode_Type this);
void tc_Isolette_Data_Model_Monitor_Mode_Type_name_(String result, tc_Isolette_Data_Model_Monitor_Mode_Type this);

void tc_Isolette_Data_Model_Monitor_Mode_Type_byName(STACK_FRAME Option_38D338 result, String s) {
  if (String__eq(s, string("Init_Monitor_Mode"))) Type_assign(result, &((struct Some_455777) { .type = TSome_455777, .value = tc_Isolette_Data_Model_Monitor_Mode_Type_Init_Monitor_Mode }), sizeof(union Option_38D338));
  else if (String__eq(s, string("Normal_Monitor_Mode"))) Type_assign(result, &((struct Some_455777) { .type = TSome_455777, .value = tc_Isolette_Data_Model_Monitor_Mode_Type_Normal_Monitor_Mode }), sizeof(union Option_38D338));
  else if (String__eq(s, string("Failed_Monitor_Mode"))) Type_assign(result, &((struct Some_455777) { .type = TSome_455777, .value = tc_Isolette_Data_Model_Monitor_Mode_Type_Failed_Monitor_Mode }), sizeof(union Option_38D338));
  else Type_assign(result, &((struct None_BE2C3F) { .type = TNone_BE2C3F }), sizeof(union Option_38D338));
}

void tc_Isolette_Data_Model_Monitor_Mode_Type_byOrdinal(STACK_FRAME Option_38D338 result, Z n) {
  switch ((tc_Isolette_Data_Model_Monitor_Mode_Type) n) {
    case tc_Isolette_Data_Model_Monitor_Mode_Type_Init_Monitor_Mode: Type_assign(result, &((struct Some_455777) { .type = TSome_455777, .value = tc_Isolette_Data_Model_Monitor_Mode_Type_Init_Monitor_Mode }), sizeof(union Option_38D338)); return;
    case tc_Isolette_Data_Model_Monitor_Mode_Type_Normal_Monitor_Mode: Type_assign(result, &((struct Some_455777) { .type = TSome_455777, .value = tc_Isolette_Data_Model_Monitor_Mode_Type_Normal_Monitor_Mode }), sizeof(union Option_38D338)); return;
    case tc_Isolette_Data_Model_Monitor_Mode_Type_Failed_Monitor_Mode: Type_assign(result, &((struct Some_455777) { .type = TSome_455777, .value = tc_Isolette_Data_Model_Monitor_Mode_Type_Failed_Monitor_Mode }), sizeof(union Option_38D338)); return;
    default: Type_assign(result, &((struct None_BE2C3F) { .type = TNone_BE2C3F }), sizeof(union Option_38D338)); return;
  }
}

Z tc_Isolette_Data_Model_Monitor_Mode_Type_numOfElements(void) {
  return Z_C(3);
}

void tc_Isolette_Data_Model_Monitor_Mode_Type_cprint(tc_Isolette_Data_Model_Monitor_Mode_Type this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  switch (this) {
    case tc_Isolette_Data_Model_Monitor_Mode_Type_Init_Monitor_Mode: String_cprint(string("Init_Monitor_Mode"), isOut); return;
    case tc_Isolette_Data_Model_Monitor_Mode_Type_Normal_Monitor_Mode: String_cprint(string("Normal_Monitor_Mode"), isOut); return;
    case tc_Isolette_Data_Model_Monitor_Mode_Type_Failed_Monitor_Mode: String_cprint(string("Failed_Monitor_Mode"), isOut); return;
  }
  #endif
}

void tc_Isolette_Data_Model_Monitor_Mode_Type_string_(STACK_FRAME String result, tc_Isolette_Data_Model_Monitor_Mode_Type this) {
  DeclNewStackFrame(caller, "Monitor_Mode.scala", "tc_Isolette_Data_Model_Monitor_Mode_Type", "string", 0);
  switch (this) {
    case tc_Isolette_Data_Model_Monitor_Mode_Type_Init_Monitor_Mode: String_string_(SF result, string("Init_Monitor_Mode")); return;
    case tc_Isolette_Data_Model_Monitor_Mode_Type_Normal_Monitor_Mode: String_string_(SF result, string("Normal_Monitor_Mode")); return;
    case tc_Isolette_Data_Model_Monitor_Mode_Type_Failed_Monitor_Mode: String_string_(SF result, string("Failed_Monitor_Mode")); return;
  }
}