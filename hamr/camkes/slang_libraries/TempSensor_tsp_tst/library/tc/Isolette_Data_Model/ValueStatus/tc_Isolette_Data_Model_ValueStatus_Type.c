#include <all.h>

// tc.Isolette_Data_Model.ValueStatus.Type

B tc_Isolette_Data_Model_ValueStatus_Type__eq(tc_Isolette_Data_Model_ValueStatus_Type this, tc_Isolette_Data_Model_ValueStatus_Type other);
B tc_Isolette_Data_Model_ValueStatus_Type__ne(tc_Isolette_Data_Model_ValueStatus_Type this, tc_Isolette_Data_Model_ValueStatus_Type other);
B tc_Isolette_Data_Model_ValueStatus_Type__equiv(tc_Isolette_Data_Model_ValueStatus_Type this, tc_Isolette_Data_Model_ValueStatus_Type other);
B tc_Isolette_Data_Model_ValueStatus_Type__inequiv(tc_Isolette_Data_Model_ValueStatus_Type this, tc_Isolette_Data_Model_ValueStatus_Type other);
Z tc_Isolette_Data_Model_ValueStatus_Type__ordinal(tc_Isolette_Data_Model_ValueStatus_Type this);
void tc_Isolette_Data_Model_ValueStatus_Type_name_(String result, tc_Isolette_Data_Model_ValueStatus_Type this);

void tc_Isolette_Data_Model_ValueStatus_Type_byName(STACK_FRAME Option_570179 result, String s) {
  if (String__eq(s, string("Valid"))) Type_assign(result, &((struct Some_21C1E5) { .type = TSome_21C1E5, .value = tc_Isolette_Data_Model_ValueStatus_Type_Valid }), sizeof(union Option_570179));
  else if (String__eq(s, string("Invalid"))) Type_assign(result, &((struct Some_21C1E5) { .type = TSome_21C1E5, .value = tc_Isolette_Data_Model_ValueStatus_Type_Invalid }), sizeof(union Option_570179));
  else Type_assign(result, &((struct None_A23E58) { .type = TNone_A23E58 }), sizeof(union Option_570179));
}

void tc_Isolette_Data_Model_ValueStatus_Type_byOrdinal(STACK_FRAME Option_570179 result, Z n) {
  switch ((tc_Isolette_Data_Model_ValueStatus_Type) n) {
    case tc_Isolette_Data_Model_ValueStatus_Type_Valid: Type_assign(result, &((struct Some_21C1E5) { .type = TSome_21C1E5, .value = tc_Isolette_Data_Model_ValueStatus_Type_Valid }), sizeof(union Option_570179)); return;
    case tc_Isolette_Data_Model_ValueStatus_Type_Invalid: Type_assign(result, &((struct Some_21C1E5) { .type = TSome_21C1E5, .value = tc_Isolette_Data_Model_ValueStatus_Type_Invalid }), sizeof(union Option_570179)); return;
    default: Type_assign(result, &((struct None_A23E58) { .type = TNone_A23E58 }), sizeof(union Option_570179)); return;
  }
}

Z tc_Isolette_Data_Model_ValueStatus_Type_numOfElements(void) {
  return Z_C(2);
}

void tc_Isolette_Data_Model_ValueStatus_Type_cprint(tc_Isolette_Data_Model_ValueStatus_Type this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  switch (this) {
    case tc_Isolette_Data_Model_ValueStatus_Type_Valid: String_cprint(string("Valid"), isOut); return;
    case tc_Isolette_Data_Model_ValueStatus_Type_Invalid: String_cprint(string("Invalid"), isOut); return;
  }
  #endif
}

void tc_Isolette_Data_Model_ValueStatus_Type_string_(STACK_FRAME String result, tc_Isolette_Data_Model_ValueStatus_Type this) {
  DeclNewStackFrame(caller, "ValueStatus.scala", "tc_Isolette_Data_Model_ValueStatus_Type", "string", 0);
  switch (this) {
    case tc_Isolette_Data_Model_ValueStatus_Type_Valid: String_string_(SF result, string("Valid")); return;
    case tc_Isolette_Data_Model_ValueStatus_Type_Invalid: String_string_(SF result, string("Invalid")); return;
  }
}