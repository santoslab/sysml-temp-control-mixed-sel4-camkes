#include <all.h>

B tc_Base_Types_Boolean_example(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Base_Types.scala", "tc.Base_Types", "Boolean_example", 0);
  return F;
}

Z tc_Base_Types_Integer_example(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Base_Types.scala", "tc.Base_Types", "Integer_example", 0);
  return Z_C(0);
}

S8 tc_Base_Types_Integer_8_example(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Base_Types.scala", "tc.Base_Types", "Integer_8_example", 0);
  return S8_C(0);
}

S16 tc_Base_Types_Integer_16_example(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Base_Types.scala", "tc.Base_Types", "Integer_16_example", 0);
  return S16_C(0);
}

S32 tc_Base_Types_Integer_32_example(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Base_Types.scala", "tc.Base_Types", "Integer_32_example", 0);
  return S32_C(0);
}

S64 tc_Base_Types_Integer_64_example(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Base_Types.scala", "tc.Base_Types", "Integer_64_example", 0);
  return S64_C(0);
}

U8 tc_Base_Types_Unsigned_8_example(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Base_Types.scala", "tc.Base_Types", "Unsigned_8_example", 0);
  return U8_C(0);
}

U16 tc_Base_Types_Unsigned_16_example(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Base_Types.scala", "tc.Base_Types", "Unsigned_16_example", 0);
  return U16_C(0);
}

U32 tc_Base_Types_Unsigned_32_example(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Base_Types.scala", "tc.Base_Types", "Unsigned_32_example", 0);
  return U32_C(0);
}

U64 tc_Base_Types_Unsigned_64_example(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Base_Types.scala", "tc.Base_Types", "Unsigned_64_example", 0);
  return U64_C(0);
}

R tc_Base_Types_Float_example(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Base_Types.scala", "tc.Base_Types", "Float_example", 0);
  return 80L;
}

F32 tc_Base_Types_Float_32_example(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Base_Types.scala", "tc.Base_Types", "Float_32_example", 0);
  return 0.0F;
}

F64 tc_Base_Types_Float_64_example(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Base_Types.scala", "tc.Base_Types", "Float_64_example", 0);
  return 0.0;
}

C tc_Base_Types_Character_example(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Base_Types.scala", "tc.Base_Types", "Character_example", 0);
  return ' ';
}

void tc_Base_Types_String_example(STACK_FRAME String result) {
  DeclNewStackFrame(caller, "Base_Types.scala", "tc.Base_Types", "String_example", 0);
  Type_assign(result, string(""), sizeof(struct StaticString));
  return;
}