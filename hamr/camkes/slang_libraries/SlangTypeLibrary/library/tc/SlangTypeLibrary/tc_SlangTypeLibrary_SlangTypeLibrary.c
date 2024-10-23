#include <all.h>

Unit tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "SlangTypeLibrary.scala", "tc.SlangTypeLibrary.SlangTypeLibrary.main", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(13);
  {
    DeclNewString(t_0);
    String_string_(SF (String) &t_0, string(""));
    art_DataContent_string_(SF (String) &t_0, a);
    String_string_(SF (String) &t_0, string(""));
    String_cprint(((String) &t_0), T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Z tc_SlangTypeLibrary_SlangTypeLibrary_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "SlangTypeLibrary.scala", "tc.SlangTypeLibrary.SlangTypeLibrary", "main", 0);

  sfUpdateLoc(15);
  {
    B t_1 = tc_Base_Types_Boolean_example(SF_LAST);
    DeclNewtc_Base_Types_Boolean_Payload(t_0);
    tc_Base_Types_Boolean_Payload_apply(SF &t_0, t_1);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_0));
  }

  sfUpdateLoc(16);
  {
    Z t_3 = tc_Base_Types_Integer_example(SF_LAST);
    DeclNewtc_Base_Types_Integer_Payload(t_2);
    tc_Base_Types_Integer_Payload_apply(SF &t_2, t_3);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_2));
  }

  sfUpdateLoc(17);
  {
    S8 t_5 = tc_Base_Types_Integer_8_example(SF_LAST);
    DeclNewtc_Base_Types_Integer_8_Payload(t_4);
    tc_Base_Types_Integer_8_Payload_apply(SF &t_4, t_5);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_4));
  }

  sfUpdateLoc(18);
  {
    S16 t_7 = tc_Base_Types_Integer_16_example(SF_LAST);
    DeclNewtc_Base_Types_Integer_16_Payload(t_6);
    tc_Base_Types_Integer_16_Payload_apply(SF &t_6, t_7);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_6));
  }

  sfUpdateLoc(19);
  {
    S32 t_9 = tc_Base_Types_Integer_32_example(SF_LAST);
    DeclNewtc_Base_Types_Integer_32_Payload(t_8);
    tc_Base_Types_Integer_32_Payload_apply(SF &t_8, t_9);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_8));
  }

  sfUpdateLoc(20);
  {
    S64 t_11 = tc_Base_Types_Integer_64_example(SF_LAST);
    DeclNewtc_Base_Types_Integer_64_Payload(t_10);
    tc_Base_Types_Integer_64_Payload_apply(SF &t_10, t_11);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_10));
  }

  sfUpdateLoc(21);
  {
    U8 t_13 = tc_Base_Types_Unsigned_8_example(SF_LAST);
    DeclNewtc_Base_Types_Unsigned_8_Payload(t_12);
    tc_Base_Types_Unsigned_8_Payload_apply(SF &t_12, t_13);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_12));
  }

  sfUpdateLoc(22);
  {
    U16 t_15 = tc_Base_Types_Unsigned_16_example(SF_LAST);
    DeclNewtc_Base_Types_Unsigned_16_Payload(t_14);
    tc_Base_Types_Unsigned_16_Payload_apply(SF &t_14, t_15);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_14));
  }

  sfUpdateLoc(23);
  {
    U32 t_17 = tc_Base_Types_Unsigned_32_example(SF_LAST);
    DeclNewtc_Base_Types_Unsigned_32_Payload(t_16);
    tc_Base_Types_Unsigned_32_Payload_apply(SF &t_16, t_17);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_16));
  }

  sfUpdateLoc(24);
  {
    U64 t_19 = tc_Base_Types_Unsigned_64_example(SF_LAST);
    DeclNewtc_Base_Types_Unsigned_64_Payload(t_18);
    tc_Base_Types_Unsigned_64_Payload_apply(SF &t_18, t_19);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_18));
  }

  sfUpdateLoc(25);
  {
    R t_21 = tc_Base_Types_Float_example(SF_LAST);
    DeclNewtc_Base_Types_Float_Payload(t_20);
    tc_Base_Types_Float_Payload_apply(SF &t_20, t_21);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_20));
  }

  sfUpdateLoc(26);
  {
    F32 t_23 = tc_Base_Types_Float_32_example(SF_LAST);
    DeclNewtc_Base_Types_Float_32_Payload(t_22);
    tc_Base_Types_Float_32_Payload_apply(SF &t_22, t_23);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_22));
  }

  sfUpdateLoc(27);
  {
    F64 t_25 = tc_Base_Types_Float_64_example(SF_LAST);
    DeclNewtc_Base_Types_Float_64_Payload(t_24);
    tc_Base_Types_Float_64_Payload_apply(SF &t_24, t_25);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_24));
  }

  sfUpdateLoc(28);
  {
    C t_27 = tc_Base_Types_Character_example(SF_LAST);
    DeclNewtc_Base_Types_Character_Payload(t_26);
    tc_Base_Types_Character_Payload_apply(SF &t_26, t_27);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_26));
  }

  sfUpdateLoc(29);
  {
    DeclNewString(t_29);
    tc_Base_Types_String_example(SF (String) &t_29);
    DeclNewtc_Base_Types_String_Payload(t_28);
    tc_Base_Types_String_Payload_apply(SF &t_28, (String) ((String) &t_29));
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_28));
  }

  sfUpdateLoc(30);
  {
    DeclNewtc_TempControlMixedSeL4CAmKES_Temperature(t_31);
    tc_TempControlMixedSeL4CAmKES_Temperature_example(SF (tc_TempControlMixedSeL4CAmKES_Temperature) &t_31);
    DeclNewtc_TempControlMixedSeL4CAmKES_Temperature_Payload(t_30);
    tc_TempControlMixedSeL4CAmKES_Temperature_Payload_apply(SF &t_30, (tc_TempControlMixedSeL4CAmKES_Temperature) ((tc_TempControlMixedSeL4CAmKES_Temperature) &t_31));
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_30));
  }

  sfUpdateLoc(31);
  {
    DeclNewOption_103926(t_33);
    tc_TempControlMixedSeL4CAmKES_TempUnit_Type_byOrdinal(SF (Option_103926) &t_33, Z_C(0));
    tc_TempControlMixedSeL4CAmKES_TempUnit_Type t_34 = Option_103926_get_(SF ((Option_103926) &t_33));
    DeclNewtc_TempControlMixedSeL4CAmKES_TempUnit_Payload(t_32);
    tc_TempControlMixedSeL4CAmKES_TempUnit_Payload_apply(SF &t_32, t_34);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_32));
  }

  sfUpdateLoc(32);
  {
    DeclNewtc_TempControlMixedSeL4CAmKES_SetPoint(t_36);
    tc_TempControlMixedSeL4CAmKES_SetPoint_example(SF (tc_TempControlMixedSeL4CAmKES_SetPoint) &t_36);
    DeclNewtc_TempControlMixedSeL4CAmKES_SetPoint_Payload(t_35);
    tc_TempControlMixedSeL4CAmKES_SetPoint_Payload_apply(SF &t_35, (tc_TempControlMixedSeL4CAmKES_SetPoint) ((tc_TempControlMixedSeL4CAmKES_SetPoint) &t_36));
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_35));
  }

  sfUpdateLoc(33);
  {
    DeclNewOption_5071ED(t_38);
    tc_TempControlMixedSeL4CAmKES_FanCmd_Type_byOrdinal(SF (Option_5071ED) &t_38, Z_C(0));
    tc_TempControlMixedSeL4CAmKES_FanCmd_Type t_39 = Option_5071ED_get_(SF ((Option_5071ED) &t_38));
    DeclNewtc_TempControlMixedSeL4CAmKES_FanCmd_Payload(t_37);
    tc_TempControlMixedSeL4CAmKES_FanCmd_Payload_apply(SF &t_37, t_39);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_37));
  }

  sfUpdateLoc(34);
  {
    DeclNewOption_36021E(t_41);
    tc_TempControlMixedSeL4CAmKES_FanAck_Type_byOrdinal(SF (Option_36021E) &t_41, Z_C(0));
    tc_TempControlMixedSeL4CAmKES_FanAck_Type t_42 = Option_36021E_get_(SF ((Option_36021E) &t_41));
    DeclNewtc_TempControlMixedSeL4CAmKES_FanAck_Payload(t_40);
    tc_TempControlMixedSeL4CAmKES_FanAck_Payload_apply(SF &t_40, t_42);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_40));
  }

  sfUpdateLoc(35);
  {
    DeclNewart_Empty(t_43);
    art_Empty_apply(SF &t_43);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_43));
  }
  return Z_C(0);
}