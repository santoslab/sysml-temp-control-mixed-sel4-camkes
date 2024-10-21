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
    DeclNewtc_Isolette_Environment_Heat(t_44);
    tc_Isolette_Environment_Heat_example(SF (tc_Isolette_Environment_Heat) &t_44);
    DeclNewtc_Isolette_Environment_Heat_Payload(t_43);
    tc_Isolette_Environment_Heat_Payload_apply(SF &t_43, (tc_Isolette_Environment_Heat) ((tc_Isolette_Environment_Heat) &t_44));
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_43));
  }

  sfUpdateLoc(36);
  {
    DeclNewtc_Isolette_Environment_Interface_Interaction(t_46);
    tc_Isolette_Environment_Interface_Interaction_example(SF (tc_Isolette_Environment_Interface_Interaction) &t_46);
    DeclNewtc_Isolette_Environment_Interface_Interaction_Payload(t_45);
    tc_Isolette_Environment_Interface_Interaction_Payload_apply(SF &t_45, (tc_Isolette_Environment_Interface_Interaction) ((tc_Isolette_Environment_Interface_Interaction) &t_46));
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_45));
  }

  sfUpdateLoc(37);
  {
    DeclNewtc_Isolette_Environment_Air_Interaction(t_48);
    tc_Isolette_Environment_Air_Interaction_example(SF (tc_Isolette_Environment_Air_Interaction) &t_48);
    DeclNewtc_Isolette_Environment_Air_Interaction_Payload(t_47);
    tc_Isolette_Environment_Air_Interaction_Payload_apply(SF &t_47, (tc_Isolette_Environment_Air_Interaction) ((tc_Isolette_Environment_Air_Interaction) &t_48));
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_47));
  }

  sfUpdateLoc(38);
  {
    DeclNewtc_TempControlMixed_Temperature(t_50);
    tc_TempControlMixed_Temperature_example(SF (tc_TempControlMixed_Temperature) &t_50);
    DeclNewtc_TempControlMixed_Temperature_Payload(t_49);
    tc_TempControlMixed_Temperature_Payload_apply(SF &t_49, (tc_TempControlMixed_Temperature) ((tc_TempControlMixed_Temperature) &t_50));
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_49));
  }

  sfUpdateLoc(39);
  {
    DeclNewtc_TempControlMixed_SetPoint(t_52);
    tc_TempControlMixed_SetPoint_example(SF (tc_TempControlMixed_SetPoint) &t_52);
    DeclNewtc_TempControlMixed_SetPoint_Payload(t_51);
    tc_TempControlMixed_SetPoint_Payload_apply(SF &t_51, (tc_TempControlMixed_SetPoint) ((tc_TempControlMixed_SetPoint) &t_52));
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_51));
  }

  sfUpdateLoc(40);
  {
    DeclNewOption_5F90D6(t_54);
    tc_TempControlMixed_TempUnit_Type_byOrdinal(SF (Option_5F90D6) &t_54, Z_C(0));
    tc_TempControlMixed_TempUnit_Type t_55 = Option_5F90D6_get_(SF ((Option_5F90D6) &t_54));
    DeclNewtc_TempControlMixed_TempUnit_Payload(t_53);
    tc_TempControlMixed_TempUnit_Payload_apply(SF &t_53, t_55);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_53));
  }

  sfUpdateLoc(41);
  {
    DeclNewOption_8499F5(t_57);
    tc_TempControlMixed_FanCmd_Type_byOrdinal(SF (Option_8499F5) &t_57, Z_C(0));
    tc_TempControlMixed_FanCmd_Type t_58 = Option_8499F5_get_(SF ((Option_8499F5) &t_57));
    DeclNewtc_TempControlMixed_FanCmd_Payload(t_56);
    tc_TempControlMixed_FanCmd_Payload_apply(SF &t_56, t_58);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_56));
  }

  sfUpdateLoc(42);
  {
    DeclNewOption_AAF24B(t_60);
    tc_TempControlMixed_FanAck_Type_byOrdinal(SF (Option_AAF24B) &t_60, Z_C(0));
    tc_TempControlMixed_FanAck_Type t_61 = Option_AAF24B_get_(SF ((Option_AAF24B) &t_60));
    DeclNewtc_TempControlMixed_FanAck_Payload(t_59);
    tc_TempControlMixed_FanAck_Payload_apply(SF &t_59, t_61);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_59));
  }

  sfUpdateLoc(43);
  {
    DeclNewtc_TempControlPeriodic_Temperature(t_63);
    tc_TempControlPeriodic_Temperature_example(SF (tc_TempControlPeriodic_Temperature) &t_63);
    DeclNewtc_TempControlPeriodic_Temperature_Payload(t_62);
    tc_TempControlPeriodic_Temperature_Payload_apply(SF &t_62, (tc_TempControlPeriodic_Temperature) ((tc_TempControlPeriodic_Temperature) &t_63));
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_62));
  }

  sfUpdateLoc(44);
  {
    DeclNewtc_TempControlPeriodic_SetPoint(t_65);
    tc_TempControlPeriodic_SetPoint_example(SF (tc_TempControlPeriodic_SetPoint) &t_65);
    DeclNewtc_TempControlPeriodic_SetPoint_Payload(t_64);
    tc_TempControlPeriodic_SetPoint_Payload_apply(SF &t_64, (tc_TempControlPeriodic_SetPoint) ((tc_TempControlPeriodic_SetPoint) &t_65));
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_64));
  }

  sfUpdateLoc(45);
  {
    DeclNewOption_978FB8(t_67);
    tc_TempControlPeriodic_TempUnit_Type_byOrdinal(SF (Option_978FB8) &t_67, Z_C(0));
    tc_TempControlPeriodic_TempUnit_Type t_68 = Option_978FB8_get_(SF ((Option_978FB8) &t_67));
    DeclNewtc_TempControlPeriodic_TempUnit_Payload(t_66);
    tc_TempControlPeriodic_TempUnit_Payload_apply(SF &t_66, t_68);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_66));
  }

  sfUpdateLoc(46);
  {
    DeclNewOption_62C8EC(t_70);
    tc_TempControlPeriodic_FanCmd_Type_byOrdinal(SF (Option_62C8EC) &t_70, Z_C(0));
    tc_TempControlPeriodic_FanCmd_Type t_71 = Option_62C8EC_get_(SF ((Option_62C8EC) &t_70));
    DeclNewtc_TempControlPeriodic_FanCmd_Payload(t_69);
    tc_TempControlPeriodic_FanCmd_Payload_apply(SF &t_69, t_71);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_69));
  }

  sfUpdateLoc(47);
  {
    DeclNewOption_121E48(t_73);
    tc_TempControlPeriodic_FanAck_Type_byOrdinal(SF (Option_121E48) &t_73, Z_C(0));
    tc_TempControlPeriodic_FanAck_Type t_74 = Option_121E48_get_(SF ((Option_121E48) &t_73));
    DeclNewtc_TempControlPeriodic_FanAck_Payload(t_72);
    tc_TempControlPeriodic_FanAck_Payload_apply(SF &t_72, t_74);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_72));
  }

  sfUpdateLoc(48);
  {
    DeclNewtc_Isolette_Data_Model_PhysicalTemp(t_76);
    tc_Isolette_Data_Model_PhysicalTemp_example(SF (tc_Isolette_Data_Model_PhysicalTemp) &t_76);
    DeclNewtc_Isolette_Data_Model_PhysicalTemp_Payload(t_75);
    tc_Isolette_Data_Model_PhysicalTemp_Payload_apply(SF &t_75, (tc_Isolette_Data_Model_PhysicalTemp) ((tc_Isolette_Data_Model_PhysicalTemp) &t_76));
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_75));
  }

  sfUpdateLoc(49);
  {
    DeclNewtc_Isolette_Data_Model_TempWstatus(t_78);
    tc_Isolette_Data_Model_TempWstatus_example(SF (tc_Isolette_Data_Model_TempWstatus) &t_78);
    DeclNewtc_Isolette_Data_Model_TempWstatus_Payload(t_77);
    tc_Isolette_Data_Model_TempWstatus_Payload_apply(SF &t_77, (tc_Isolette_Data_Model_TempWstatus) ((tc_Isolette_Data_Model_TempWstatus) &t_78));
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_77));
  }

  sfUpdateLoc(50);
  {
    DeclNewtc_Isolette_Data_Model_Temp(t_80);
    tc_Isolette_Data_Model_Temp_example(SF (tc_Isolette_Data_Model_Temp) &t_80);
    DeclNewtc_Isolette_Data_Model_Temp_Payload(t_79);
    tc_Isolette_Data_Model_Temp_Payload_apply(SF &t_79, (tc_Isolette_Data_Model_Temp) ((tc_Isolette_Data_Model_Temp) &t_80));
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_79));
  }

  sfUpdateLoc(51);
  {
    DeclNewOption_C6954F(t_82);
    tc_Isolette_Data_Model_On_Off_Type_byOrdinal(SF (Option_C6954F) &t_82, Z_C(0));
    tc_Isolette_Data_Model_On_Off_Type t_83 = Option_C6954F_get_(SF ((Option_C6954F) &t_82));
    DeclNewtc_Isolette_Data_Model_On_Off_Payload(t_81);
    tc_Isolette_Data_Model_On_Off_Payload_apply(SF &t_81, t_83);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_81));
  }

  sfUpdateLoc(52);
  {
    DeclNewtc_Isolette_Data_Model_Failure_Flag(t_85);
    tc_Isolette_Data_Model_Failure_Flag_example(SF (tc_Isolette_Data_Model_Failure_Flag) &t_85);
    DeclNewtc_Isolette_Data_Model_Failure_Flag_Payload(t_84);
    tc_Isolette_Data_Model_Failure_Flag_Payload_apply(SF &t_84, (tc_Isolette_Data_Model_Failure_Flag) ((tc_Isolette_Data_Model_Failure_Flag) &t_85));
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_84));
  }

  sfUpdateLoc(53);
  {
    DeclNewOption_570179(t_87);
    tc_Isolette_Data_Model_ValueStatus_Type_byOrdinal(SF (Option_570179) &t_87, Z_C(0));
    tc_Isolette_Data_Model_ValueStatus_Type t_88 = Option_570179_get_(SF ((Option_570179) &t_87));
    DeclNewtc_Isolette_Data_Model_ValueStatus_Payload(t_86);
    tc_Isolette_Data_Model_ValueStatus_Payload_apply(SF &t_86, t_88);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_86));
  }

  sfUpdateLoc(54);
  {
    DeclNewOption_C9A4D6(t_90);
    tc_Isolette_Data_Model_Status_Type_byOrdinal(SF (Option_C9A4D6) &t_90, Z_C(0));
    tc_Isolette_Data_Model_Status_Type t_91 = Option_C9A4D6_get_(SF ((Option_C9A4D6) &t_90));
    DeclNewtc_Isolette_Data_Model_Status_Payload(t_89);
    tc_Isolette_Data_Model_Status_Payload_apply(SF &t_89, t_91);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_89));
  }

  sfUpdateLoc(55);
  {
    DeclNewOption_A2275D(t_93);
    tc_Isolette_Data_Model_Regulator_Mode_Type_byOrdinal(SF (Option_A2275D) &t_93, Z_C(0));
    tc_Isolette_Data_Model_Regulator_Mode_Type t_94 = Option_A2275D_get_(SF ((Option_A2275D) &t_93));
    DeclNewtc_Isolette_Data_Model_Regulator_Mode_Payload(t_92);
    tc_Isolette_Data_Model_Regulator_Mode_Payload_apply(SF &t_92, t_94);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_92));
  }

  sfUpdateLoc(56);
  {
    DeclNewOption_38D338(t_96);
    tc_Isolette_Data_Model_Monitor_Mode_Type_byOrdinal(SF (Option_38D338) &t_96, Z_C(0));
    tc_Isolette_Data_Model_Monitor_Mode_Type t_97 = Option_38D338_get_(SF ((Option_38D338) &t_96));
    DeclNewtc_Isolette_Data_Model_Monitor_Mode_Payload(t_95);
    tc_Isolette_Data_Model_Monitor_Mode_Payload_apply(SF &t_95, t_97);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_95));
  }

  sfUpdateLoc(57);
  {
    DeclNewart_Empty(t_98);
    art_Empty_apply(SF &t_98);
    tc_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_98));
  }
  return Z_C(0);
}