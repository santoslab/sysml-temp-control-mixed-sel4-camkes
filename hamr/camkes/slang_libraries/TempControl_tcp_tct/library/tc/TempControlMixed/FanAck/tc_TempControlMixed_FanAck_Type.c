#include <all.h>

// tc.TempControlMixed.FanAck.Type

B tc_TempControlMixed_FanAck_Type__eq(tc_TempControlMixed_FanAck_Type this, tc_TempControlMixed_FanAck_Type other);
B tc_TempControlMixed_FanAck_Type__ne(tc_TempControlMixed_FanAck_Type this, tc_TempControlMixed_FanAck_Type other);
B tc_TempControlMixed_FanAck_Type__equiv(tc_TempControlMixed_FanAck_Type this, tc_TempControlMixed_FanAck_Type other);
B tc_TempControlMixed_FanAck_Type__inequiv(tc_TempControlMixed_FanAck_Type this, tc_TempControlMixed_FanAck_Type other);
Z tc_TempControlMixed_FanAck_Type__ordinal(tc_TempControlMixed_FanAck_Type this);
void tc_TempControlMixed_FanAck_Type_name_(String result, tc_TempControlMixed_FanAck_Type this);

void tc_TempControlMixed_FanAck_Type_byName(STACK_FRAME Option_AAF24B result, String s) {
  if (String__eq(s, string("Ok"))) Type_assign(result, &((struct Some_270A8B) { .type = TSome_270A8B, .value = tc_TempControlMixed_FanAck_Type_Ok }), sizeof(union Option_AAF24B));
  else if (String__eq(s, string("Error"))) Type_assign(result, &((struct Some_270A8B) { .type = TSome_270A8B, .value = tc_TempControlMixed_FanAck_Type_Error }), sizeof(union Option_AAF24B));
  else Type_assign(result, &((struct None_B4A4FA) { .type = TNone_B4A4FA }), sizeof(union Option_AAF24B));
}

void tc_TempControlMixed_FanAck_Type_byOrdinal(STACK_FRAME Option_AAF24B result, Z n) {
  switch ((tc_TempControlMixed_FanAck_Type) n) {
    case tc_TempControlMixed_FanAck_Type_Ok: Type_assign(result, &((struct Some_270A8B) { .type = TSome_270A8B, .value = tc_TempControlMixed_FanAck_Type_Ok }), sizeof(union Option_AAF24B)); return;
    case tc_TempControlMixed_FanAck_Type_Error: Type_assign(result, &((struct Some_270A8B) { .type = TSome_270A8B, .value = tc_TempControlMixed_FanAck_Type_Error }), sizeof(union Option_AAF24B)); return;
    default: Type_assign(result, &((struct None_B4A4FA) { .type = TNone_B4A4FA }), sizeof(union Option_AAF24B)); return;
  }
}

Z tc_TempControlMixed_FanAck_Type_numOfElements(void) {
  return Z_C(2);
}

void tc_TempControlMixed_FanAck_Type_cprint(tc_TempControlMixed_FanAck_Type this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  switch (this) {
    case tc_TempControlMixed_FanAck_Type_Ok: String_cprint(string("Ok"), isOut); return;
    case tc_TempControlMixed_FanAck_Type_Error: String_cprint(string("Error"), isOut); return;
  }
  #endif
}

void tc_TempControlMixed_FanAck_Type_string_(STACK_FRAME String result, tc_TempControlMixed_FanAck_Type this) {
  DeclNewStackFrame(caller, "FanAck.scala", "tc_TempControlMixed_FanAck_Type", "string", 0);
  switch (this) {
    case tc_TempControlMixed_FanAck_Type_Ok: String_string_(SF result, string("Ok")); return;
    case tc_TempControlMixed_FanAck_Type_Error: String_string_(SF result, string("Error")); return;
  }
}