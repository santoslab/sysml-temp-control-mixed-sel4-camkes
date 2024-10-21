#include <all.h>

B tc_TempSensor_tsp_tst_tst_initialized_ = F;

struct tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge _tc_TempSensor_tsp_tst_tst_tstBridge;
union art_Bridge_EntryPoints _tc_TempSensor_tsp_tst_tst_entryPoints;
union Option_8E9F45 _tc_TempSensor_tsp_tst_tst_noData;
art_Art_PortId _tc_TempSensor_tsp_tst_tst_currentTemp_id;
union Option_8E9F45 _tc_TempSensor_tsp_tst_tst_currentTemp_port;
art_Art_PortId _tc_TempSensor_tsp_tst_tst_tempChanged_id;
union Option_8E9F45 _tc_TempSensor_tsp_tst_tst_tempChanged_port;

void tc_TempSensor_tsp_tst_tst_init(STACK_FRAME_ONLY) {
  if (tc_TempSensor_tsp_tst_tst_initialized_) return;
  tc_TempSensor_tsp_tst_tst_initialized_ = T;
  DeclNewStackFrame(caller, "tst.scala", "tc.TempSensor_tsp_tst.tst", "<init>", 0);
  tc_TempSensor_tsp_tst_tst_init_tstBridge(SF_LAST);
  tc_TempSensor_tsp_tst_tst_init_entryPoints(SF_LAST);
  tc_TempSensor_tsp_tst_tst_init_noData(SF_LAST);
  tc_TempSensor_tsp_tst_tst_init_currentTemp_id(SF_LAST);
  tc_TempSensor_tsp_tst_tst_init_currentTemp_port(SF_LAST);
  tc_TempSensor_tsp_tst_tst_init_tempChanged_id(SF_LAST);
  tc_TempSensor_tsp_tst_tst_init_tempChanged_port(SF_LAST);
}

tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge tc_TempSensor_tsp_tst_tst_tstBridge(STACK_FRAME_ONLY) {
  tc_TempSensor_tsp_tst_tst_init(CALLER_LAST);
  return (tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge) &_tc_TempSensor_tsp_tst_tst_tstBridge;
}

art_Bridge_EntryPoints tc_TempSensor_tsp_tst_tst_entryPoints(STACK_FRAME_ONLY) {
  tc_TempSensor_tsp_tst_tst_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_tc_TempSensor_tsp_tst_tst_entryPoints;
}

Option_8E9F45 tc_TempSensor_tsp_tst_tst_noData(STACK_FRAME_ONLY) {
  tc_TempSensor_tsp_tst_tst_init(CALLER_LAST);
  return (Option_8E9F45) &_tc_TempSensor_tsp_tst_tst_noData;
}

art_Art_PortId tc_TempSensor_tsp_tst_tst_currentTemp_id(STACK_FRAME_ONLY) {
  tc_TempSensor_tsp_tst_tst_init(CALLER_LAST);
  return _tc_TempSensor_tsp_tst_tst_currentTemp_id;
}

Option_8E9F45 tc_TempSensor_tsp_tst_tst_currentTemp_port(STACK_FRAME_ONLY) {
  tc_TempSensor_tsp_tst_tst_init(CALLER_LAST);
  return (Option_8E9F45) &_tc_TempSensor_tsp_tst_tst_currentTemp_port;
}

void tc_TempSensor_tsp_tst_tst_currentTemp_port_a(STACK_FRAME Option_8E9F45 p_currentTemp_port) {
  tc_TempSensor_tsp_tst_tst_init(CALLER_LAST);
  Type_assign(&_tc_TempSensor_tsp_tst_tst_currentTemp_port, p_currentTemp_port, sizeof(union Option_8E9F45));
}

art_Art_PortId tc_TempSensor_tsp_tst_tst_tempChanged_id(STACK_FRAME_ONLY) {
  tc_TempSensor_tsp_tst_tst_init(CALLER_LAST);
  return _tc_TempSensor_tsp_tst_tst_tempChanged_id;
}

Option_8E9F45 tc_TempSensor_tsp_tst_tst_tempChanged_port(STACK_FRAME_ONLY) {
  tc_TempSensor_tsp_tst_tst_init(CALLER_LAST);
  return (Option_8E9F45) &_tc_TempSensor_tsp_tst_tst_tempChanged_port;
}

void tc_TempSensor_tsp_tst_tst_tempChanged_port_a(STACK_FRAME Option_8E9F45 p_tempChanged_port) {
  tc_TempSensor_tsp_tst_tst_init(CALLER_LAST);
  Type_assign(&_tc_TempSensor_tsp_tst_tst_tempChanged_port, p_tempChanged_port, sizeof(union Option_8E9F45));
}

Z tc_TempSensor_tsp_tst_tst_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "tst.scala", "tc.TempSensor_tsp_tst.tst", "main", 0);

  sfUpdateLoc(95);
  {
    tc_TempSensor_tsp_tst_tst_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(96);
  {
    tc_TempSensor_tsp_tst_tst_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(97);
  {
    tc_TempSensor_tsp_tst_tst_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(98);
  {
    tc_TempSensor_tsp_tst_tst_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(100);
  {
    tc_TempSensor_tsp_tst_tst_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit tc_TempSensor_tsp_tst_tst_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "tst.scala", "tc.TempSensor_tsp_tst.tst", "initialiseArchitecture", 0);
}

Unit tc_TempSensor_tsp_tst_tst_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "tst.scala", "tc.TempSensor_tsp_tst.tst", "initialiseEntryPoint", 0);

  sfUpdateLoc(86);
  {
    art_Bridge_EntryPoints_initialise_(SF tc_TempSensor_tsp_tst_tst_entryPoints(SF_LAST));
  }
}

Unit tc_TempSensor_tsp_tst_tst_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "tst.scala", "tc.TempSensor_tsp_tst.tst", "computeEntryPoint", 0);

  sfUpdateLoc(88);
  {
    art_Bridge_EntryPoints_compute_(SF tc_TempSensor_tsp_tst_tst_entryPoints(SF_LAST));
  }
}

Unit tc_TempSensor_tsp_tst_tst_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "tst.scala", "tc.TempSensor_tsp_tst.tst", "finaliseEntryPoint", 0);

  sfUpdateLoc(90);
  {
    art_Bridge_EntryPoints_finalise_(SF tc_TempSensor_tsp_tst_tst_entryPoints(SF_LAST));
  }
}

Unit tc_TempSensor_tsp_tst_tst_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "tst.scala", "tc.TempSensor_tsp_tst.tst.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(114);
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

Unit tc_TempSensor_tsp_tst_tst_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "tst.scala", "tc.TempSensor_tsp_tst.tst", "touch", 0);

  sfUpdateLoc(106);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(107);
    {
      tc_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(110);
    DeclNewMBox2_43CC67(_mbox2Boolean_Payload);
    MBox2_43CC67 mbox2Boolean_Payload = (MBox2_43CC67) &_mbox2Boolean_Payload;
    {
      DeclNewtc_Base_Types_Boolean_Payload(t_2);
      tc_Base_Types_Boolean_Payload_apply(SF &t_2, T);
      DeclNewMBox2_43CC67(t_1);
      MBox2_43CC67_apply(SF &t_1, art_Art_PortId_C(0), (art_DataContent) (&t_2));
      Type_assign(mbox2Boolean_Payload, (&t_1), sizeof(struct MBox2_43CC67));
    }

    sfUpdateLoc(111);
    DeclNewMBox2_37E193(_mbox2OptionDataContent);
    MBox2_37E193 mbox2OptionDataContent = (MBox2_37E193) &_mbox2OptionDataContent;
    {
      DeclNewNone_964667(t_4);
      None_964667_apply(SF &t_4);
      DeclNewMBox2_37E193(t_3);
      MBox2_37E193_apply(SF &t_3, art_Art_PortId_C(0), (Option_8E9F45) (&t_4));
      Type_assign(mbox2OptionDataContent, (&t_3), sizeof(struct MBox2_37E193));
    }

    sfUpdateLoc(116);
    {
      B t_6 = tc_Base_Types_Boolean_example(SF_LAST);
      DeclNewtc_Base_Types_Boolean_Payload(t_5);
      tc_Base_Types_Boolean_Payload_apply(SF &t_5, t_6);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_5));
    }

    sfUpdateLoc(117);
    {
      Z t_8 = tc_Base_Types_Integer_example(SF_LAST);
      DeclNewtc_Base_Types_Integer_Payload(t_7);
      tc_Base_Types_Integer_Payload_apply(SF &t_7, t_8);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_7));
    }

    sfUpdateLoc(118);
    {
      S8 t_10 = tc_Base_Types_Integer_8_example(SF_LAST);
      DeclNewtc_Base_Types_Integer_8_Payload(t_9);
      tc_Base_Types_Integer_8_Payload_apply(SF &t_9, t_10);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_9));
    }

    sfUpdateLoc(119);
    {
      S16 t_12 = tc_Base_Types_Integer_16_example(SF_LAST);
      DeclNewtc_Base_Types_Integer_16_Payload(t_11);
      tc_Base_Types_Integer_16_Payload_apply(SF &t_11, t_12);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_11));
    }

    sfUpdateLoc(120);
    {
      S32 t_14 = tc_Base_Types_Integer_32_example(SF_LAST);
      DeclNewtc_Base_Types_Integer_32_Payload(t_13);
      tc_Base_Types_Integer_32_Payload_apply(SF &t_13, t_14);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_13));
    }

    sfUpdateLoc(121);
    {
      S64 t_16 = tc_Base_Types_Integer_64_example(SF_LAST);
      DeclNewtc_Base_Types_Integer_64_Payload(t_15);
      tc_Base_Types_Integer_64_Payload_apply(SF &t_15, t_16);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_15));
    }

    sfUpdateLoc(122);
    {
      U8 t_18 = tc_Base_Types_Unsigned_8_example(SF_LAST);
      DeclNewtc_Base_Types_Unsigned_8_Payload(t_17);
      tc_Base_Types_Unsigned_8_Payload_apply(SF &t_17, t_18);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_17));
    }

    sfUpdateLoc(123);
    {
      U16 t_20 = tc_Base_Types_Unsigned_16_example(SF_LAST);
      DeclNewtc_Base_Types_Unsigned_16_Payload(t_19);
      tc_Base_Types_Unsigned_16_Payload_apply(SF &t_19, t_20);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_19));
    }

    sfUpdateLoc(124);
    {
      U32 t_22 = tc_Base_Types_Unsigned_32_example(SF_LAST);
      DeclNewtc_Base_Types_Unsigned_32_Payload(t_21);
      tc_Base_Types_Unsigned_32_Payload_apply(SF &t_21, t_22);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_21));
    }

    sfUpdateLoc(125);
    {
      U64 t_24 = tc_Base_Types_Unsigned_64_example(SF_LAST);
      DeclNewtc_Base_Types_Unsigned_64_Payload(t_23);
      tc_Base_Types_Unsigned_64_Payload_apply(SF &t_23, t_24);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_23));
    }

    sfUpdateLoc(126);
    {
      R t_26 = tc_Base_Types_Float_example(SF_LAST);
      DeclNewtc_Base_Types_Float_Payload(t_25);
      tc_Base_Types_Float_Payload_apply(SF &t_25, t_26);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_25));
    }

    sfUpdateLoc(127);
    {
      F32 t_28 = tc_Base_Types_Float_32_example(SF_LAST);
      DeclNewtc_Base_Types_Float_32_Payload(t_27);
      tc_Base_Types_Float_32_Payload_apply(SF &t_27, t_28);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_27));
    }

    sfUpdateLoc(128);
    {
      F64 t_30 = tc_Base_Types_Float_64_example(SF_LAST);
      DeclNewtc_Base_Types_Float_64_Payload(t_29);
      tc_Base_Types_Float_64_Payload_apply(SF &t_29, t_30);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_29));
    }

    sfUpdateLoc(129);
    {
      C t_32 = tc_Base_Types_Character_example(SF_LAST);
      DeclNewtc_Base_Types_Character_Payload(t_31);
      tc_Base_Types_Character_Payload_apply(SF &t_31, t_32);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_31));
    }

    sfUpdateLoc(130);
    {
      DeclNewString(t_34);
      tc_Base_Types_String_example(SF (String) &t_34);
      DeclNewtc_Base_Types_String_Payload(t_33);
      tc_Base_Types_String_Payload_apply(SF &t_33, (String) ((String) &t_34));
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_33));
    }

    sfUpdateLoc(131);
    {
      DeclNewtc_TempControlMixedSeL4CAmKES_Temperature(t_36);
      tc_TempControlMixedSeL4CAmKES_Temperature_example(SF (tc_TempControlMixedSeL4CAmKES_Temperature) &t_36);
      DeclNewtc_TempControlMixedSeL4CAmKES_Temperature_Payload(t_35);
      tc_TempControlMixedSeL4CAmKES_Temperature_Payload_apply(SF &t_35, (tc_TempControlMixedSeL4CAmKES_Temperature) ((tc_TempControlMixedSeL4CAmKES_Temperature) &t_36));
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_35));
    }

    sfUpdateLoc(132);
    {
      DeclNewOption_103926(t_38);
      tc_TempControlMixedSeL4CAmKES_TempUnit_Type_byOrdinal(SF (Option_103926) &t_38, Z_C(0));
      tc_TempControlMixedSeL4CAmKES_TempUnit_Type t_39 = Option_103926_get_(SF ((Option_103926) &t_38));
      DeclNewtc_TempControlMixedSeL4CAmKES_TempUnit_Payload(t_37);
      tc_TempControlMixedSeL4CAmKES_TempUnit_Payload_apply(SF &t_37, t_39);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_37));
    }

    sfUpdateLoc(133);
    {
      DeclNewtc_TempControlMixedSeL4CAmKES_SetPoint(t_41);
      tc_TempControlMixedSeL4CAmKES_SetPoint_example(SF (tc_TempControlMixedSeL4CAmKES_SetPoint) &t_41);
      DeclNewtc_TempControlMixedSeL4CAmKES_SetPoint_Payload(t_40);
      tc_TempControlMixedSeL4CAmKES_SetPoint_Payload_apply(SF &t_40, (tc_TempControlMixedSeL4CAmKES_SetPoint) ((tc_TempControlMixedSeL4CAmKES_SetPoint) &t_41));
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_40));
    }

    sfUpdateLoc(134);
    {
      DeclNewOption_5071ED(t_43);
      tc_TempControlMixedSeL4CAmKES_FanCmd_Type_byOrdinal(SF (Option_5071ED) &t_43, Z_C(0));
      tc_TempControlMixedSeL4CAmKES_FanCmd_Type t_44 = Option_5071ED_get_(SF ((Option_5071ED) &t_43));
      DeclNewtc_TempControlMixedSeL4CAmKES_FanCmd_Payload(t_42);
      tc_TempControlMixedSeL4CAmKES_FanCmd_Payload_apply(SF &t_42, t_44);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_42));
    }

    sfUpdateLoc(135);
    {
      DeclNewOption_36021E(t_46);
      tc_TempControlMixedSeL4CAmKES_FanAck_Type_byOrdinal(SF (Option_36021E) &t_46, Z_C(0));
      tc_TempControlMixedSeL4CAmKES_FanAck_Type t_47 = Option_36021E_get_(SF ((Option_36021E) &t_46));
      DeclNewtc_TempControlMixedSeL4CAmKES_FanAck_Payload(t_45);
      tc_TempControlMixedSeL4CAmKES_FanAck_Payload_apply(SF &t_45, t_47);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_45));
    }

    sfUpdateLoc(136);
    {
      DeclNewtc_Isolette_Environment_Heat(t_49);
      tc_Isolette_Environment_Heat_example(SF (tc_Isolette_Environment_Heat) &t_49);
      DeclNewtc_Isolette_Environment_Heat_Payload(t_48);
      tc_Isolette_Environment_Heat_Payload_apply(SF &t_48, (tc_Isolette_Environment_Heat) ((tc_Isolette_Environment_Heat) &t_49));
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_48));
    }

    sfUpdateLoc(137);
    {
      DeclNewtc_Isolette_Environment_Interface_Interaction(t_51);
      tc_Isolette_Environment_Interface_Interaction_example(SF (tc_Isolette_Environment_Interface_Interaction) &t_51);
      DeclNewtc_Isolette_Environment_Interface_Interaction_Payload(t_50);
      tc_Isolette_Environment_Interface_Interaction_Payload_apply(SF &t_50, (tc_Isolette_Environment_Interface_Interaction) ((tc_Isolette_Environment_Interface_Interaction) &t_51));
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_50));
    }

    sfUpdateLoc(138);
    {
      DeclNewtc_Isolette_Environment_Air_Interaction(t_53);
      tc_Isolette_Environment_Air_Interaction_example(SF (tc_Isolette_Environment_Air_Interaction) &t_53);
      DeclNewtc_Isolette_Environment_Air_Interaction_Payload(t_52);
      tc_Isolette_Environment_Air_Interaction_Payload_apply(SF &t_52, (tc_Isolette_Environment_Air_Interaction) ((tc_Isolette_Environment_Air_Interaction) &t_53));
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_52));
    }

    sfUpdateLoc(139);
    {
      DeclNewtc_TempControlMixed_Temperature(t_55);
      tc_TempControlMixed_Temperature_example(SF (tc_TempControlMixed_Temperature) &t_55);
      DeclNewtc_TempControlMixed_Temperature_Payload(t_54);
      tc_TempControlMixed_Temperature_Payload_apply(SF &t_54, (tc_TempControlMixed_Temperature) ((tc_TempControlMixed_Temperature) &t_55));
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_54));
    }

    sfUpdateLoc(140);
    {
      DeclNewtc_TempControlMixed_SetPoint(t_57);
      tc_TempControlMixed_SetPoint_example(SF (tc_TempControlMixed_SetPoint) &t_57);
      DeclNewtc_TempControlMixed_SetPoint_Payload(t_56);
      tc_TempControlMixed_SetPoint_Payload_apply(SF &t_56, (tc_TempControlMixed_SetPoint) ((tc_TempControlMixed_SetPoint) &t_57));
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_56));
    }

    sfUpdateLoc(141);
    {
      DeclNewOption_5F90D6(t_59);
      tc_TempControlMixed_TempUnit_Type_byOrdinal(SF (Option_5F90D6) &t_59, Z_C(0));
      tc_TempControlMixed_TempUnit_Type t_60 = Option_5F90D6_get_(SF ((Option_5F90D6) &t_59));
      DeclNewtc_TempControlMixed_TempUnit_Payload(t_58);
      tc_TempControlMixed_TempUnit_Payload_apply(SF &t_58, t_60);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_58));
    }

    sfUpdateLoc(142);
    {
      DeclNewOption_8499F5(t_62);
      tc_TempControlMixed_FanCmd_Type_byOrdinal(SF (Option_8499F5) &t_62, Z_C(0));
      tc_TempControlMixed_FanCmd_Type t_63 = Option_8499F5_get_(SF ((Option_8499F5) &t_62));
      DeclNewtc_TempControlMixed_FanCmd_Payload(t_61);
      tc_TempControlMixed_FanCmd_Payload_apply(SF &t_61, t_63);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_61));
    }

    sfUpdateLoc(143);
    {
      DeclNewOption_AAF24B(t_65);
      tc_TempControlMixed_FanAck_Type_byOrdinal(SF (Option_AAF24B) &t_65, Z_C(0));
      tc_TempControlMixed_FanAck_Type t_66 = Option_AAF24B_get_(SF ((Option_AAF24B) &t_65));
      DeclNewtc_TempControlMixed_FanAck_Payload(t_64);
      tc_TempControlMixed_FanAck_Payload_apply(SF &t_64, t_66);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_64));
    }

    sfUpdateLoc(144);
    {
      DeclNewtc_TempControlPeriodic_Temperature(t_68);
      tc_TempControlPeriodic_Temperature_example(SF (tc_TempControlPeriodic_Temperature) &t_68);
      DeclNewtc_TempControlPeriodic_Temperature_Payload(t_67);
      tc_TempControlPeriodic_Temperature_Payload_apply(SF &t_67, (tc_TempControlPeriodic_Temperature) ((tc_TempControlPeriodic_Temperature) &t_68));
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_67));
    }

    sfUpdateLoc(145);
    {
      DeclNewtc_TempControlPeriodic_SetPoint(t_70);
      tc_TempControlPeriodic_SetPoint_example(SF (tc_TempControlPeriodic_SetPoint) &t_70);
      DeclNewtc_TempControlPeriodic_SetPoint_Payload(t_69);
      tc_TempControlPeriodic_SetPoint_Payload_apply(SF &t_69, (tc_TempControlPeriodic_SetPoint) ((tc_TempControlPeriodic_SetPoint) &t_70));
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_69));
    }

    sfUpdateLoc(146);
    {
      DeclNewOption_978FB8(t_72);
      tc_TempControlPeriodic_TempUnit_Type_byOrdinal(SF (Option_978FB8) &t_72, Z_C(0));
      tc_TempControlPeriodic_TempUnit_Type t_73 = Option_978FB8_get_(SF ((Option_978FB8) &t_72));
      DeclNewtc_TempControlPeriodic_TempUnit_Payload(t_71);
      tc_TempControlPeriodic_TempUnit_Payload_apply(SF &t_71, t_73);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_71));
    }

    sfUpdateLoc(147);
    {
      DeclNewOption_62C8EC(t_75);
      tc_TempControlPeriodic_FanCmd_Type_byOrdinal(SF (Option_62C8EC) &t_75, Z_C(0));
      tc_TempControlPeriodic_FanCmd_Type t_76 = Option_62C8EC_get_(SF ((Option_62C8EC) &t_75));
      DeclNewtc_TempControlPeriodic_FanCmd_Payload(t_74);
      tc_TempControlPeriodic_FanCmd_Payload_apply(SF &t_74, t_76);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_74));
    }

    sfUpdateLoc(148);
    {
      DeclNewOption_121E48(t_78);
      tc_TempControlPeriodic_FanAck_Type_byOrdinal(SF (Option_121E48) &t_78, Z_C(0));
      tc_TempControlPeriodic_FanAck_Type t_79 = Option_121E48_get_(SF ((Option_121E48) &t_78));
      DeclNewtc_TempControlPeriodic_FanAck_Payload(t_77);
      tc_TempControlPeriodic_FanAck_Payload_apply(SF &t_77, t_79);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_77));
    }

    sfUpdateLoc(149);
    {
      DeclNewtc_Isolette_Data_Model_PhysicalTemp(t_81);
      tc_Isolette_Data_Model_PhysicalTemp_example(SF (tc_Isolette_Data_Model_PhysicalTemp) &t_81);
      DeclNewtc_Isolette_Data_Model_PhysicalTemp_Payload(t_80);
      tc_Isolette_Data_Model_PhysicalTemp_Payload_apply(SF &t_80, (tc_Isolette_Data_Model_PhysicalTemp) ((tc_Isolette_Data_Model_PhysicalTemp) &t_81));
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_80));
    }

    sfUpdateLoc(150);
    {
      DeclNewtc_Isolette_Data_Model_TempWstatus(t_83);
      tc_Isolette_Data_Model_TempWstatus_example(SF (tc_Isolette_Data_Model_TempWstatus) &t_83);
      DeclNewtc_Isolette_Data_Model_TempWstatus_Payload(t_82);
      tc_Isolette_Data_Model_TempWstatus_Payload_apply(SF &t_82, (tc_Isolette_Data_Model_TempWstatus) ((tc_Isolette_Data_Model_TempWstatus) &t_83));
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_82));
    }

    sfUpdateLoc(151);
    {
      DeclNewtc_Isolette_Data_Model_Temp(t_85);
      tc_Isolette_Data_Model_Temp_example(SF (tc_Isolette_Data_Model_Temp) &t_85);
      DeclNewtc_Isolette_Data_Model_Temp_Payload(t_84);
      tc_Isolette_Data_Model_Temp_Payload_apply(SF &t_84, (tc_Isolette_Data_Model_Temp) ((tc_Isolette_Data_Model_Temp) &t_85));
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_84));
    }

    sfUpdateLoc(152);
    {
      DeclNewOption_C6954F(t_87);
      tc_Isolette_Data_Model_On_Off_Type_byOrdinal(SF (Option_C6954F) &t_87, Z_C(0));
      tc_Isolette_Data_Model_On_Off_Type t_88 = Option_C6954F_get_(SF ((Option_C6954F) &t_87));
      DeclNewtc_Isolette_Data_Model_On_Off_Payload(t_86);
      tc_Isolette_Data_Model_On_Off_Payload_apply(SF &t_86, t_88);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_86));
    }

    sfUpdateLoc(153);
    {
      DeclNewtc_Isolette_Data_Model_Failure_Flag(t_90);
      tc_Isolette_Data_Model_Failure_Flag_example(SF (tc_Isolette_Data_Model_Failure_Flag) &t_90);
      DeclNewtc_Isolette_Data_Model_Failure_Flag_Payload(t_89);
      tc_Isolette_Data_Model_Failure_Flag_Payload_apply(SF &t_89, (tc_Isolette_Data_Model_Failure_Flag) ((tc_Isolette_Data_Model_Failure_Flag) &t_90));
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_89));
    }

    sfUpdateLoc(154);
    {
      DeclNewOption_570179(t_92);
      tc_Isolette_Data_Model_ValueStatus_Type_byOrdinal(SF (Option_570179) &t_92, Z_C(0));
      tc_Isolette_Data_Model_ValueStatus_Type t_93 = Option_570179_get_(SF ((Option_570179) &t_92));
      DeclNewtc_Isolette_Data_Model_ValueStatus_Payload(t_91);
      tc_Isolette_Data_Model_ValueStatus_Payload_apply(SF &t_91, t_93);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_91));
    }

    sfUpdateLoc(155);
    {
      DeclNewOption_C9A4D6(t_95);
      tc_Isolette_Data_Model_Status_Type_byOrdinal(SF (Option_C9A4D6) &t_95, Z_C(0));
      tc_Isolette_Data_Model_Status_Type t_96 = Option_C9A4D6_get_(SF ((Option_C9A4D6) &t_95));
      DeclNewtc_Isolette_Data_Model_Status_Payload(t_94);
      tc_Isolette_Data_Model_Status_Payload_apply(SF &t_94, t_96);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_94));
    }

    sfUpdateLoc(156);
    {
      DeclNewOption_A2275D(t_98);
      tc_Isolette_Data_Model_Regulator_Mode_Type_byOrdinal(SF (Option_A2275D) &t_98, Z_C(0));
      tc_Isolette_Data_Model_Regulator_Mode_Type t_99 = Option_A2275D_get_(SF ((Option_A2275D) &t_98));
      DeclNewtc_Isolette_Data_Model_Regulator_Mode_Payload(t_97);
      tc_Isolette_Data_Model_Regulator_Mode_Payload_apply(SF &t_97, t_99);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_97));
    }

    sfUpdateLoc(157);
    {
      DeclNewOption_38D338(t_101);
      tc_Isolette_Data_Model_Monitor_Mode_Type_byOrdinal(SF (Option_38D338) &t_101, Z_C(0));
      tc_Isolette_Data_Model_Monitor_Mode_Type t_102 = Option_38D338_get_(SF ((Option_38D338) &t_101));
      DeclNewtc_Isolette_Data_Model_Monitor_Mode_Payload(t_100);
      tc_Isolette_Data_Model_Monitor_Mode_Payload_apply(SF &t_100, t_102);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_100));
    }

    sfUpdateLoc(158);
    {
      DeclNewart_Empty(t_103);
      art_Empty_apply(SF &t_103);
      tc_TempSensor_tsp_tst_tst_touch_printDataContent(SF (art_DataContent) (&t_103));
    }

    sfUpdateLoc(160);
    {
      DeclNewtc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api(t_104);
      Option_262EA2_get_(SF (tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) &t_104, tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_c_initialization_api(SF_LAST));
      tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api_logInfo_(SF ((tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) &t_104), (String) string(""));
    }

    sfUpdateLoc(161);
    {
      DeclNewtc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api(t_105);
      Option_262EA2_get_(SF (tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) &t_105, tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_c_initialization_api(SF_LAST));
      tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api_logDebug_(SF ((tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) &t_105), (String) string(""));
    }

    sfUpdateLoc(162);
    {
      DeclNewtc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api(t_106);
      Option_262EA2_get_(SF (tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) &t_106, tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_c_initialization_api(SF_LAST));
      tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api_logError_(SF ((tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) &t_106), (String) string(""));
    }

    sfUpdateLoc(163);
    {
      DeclNewtc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api(t_107);
      Option_50DC68_get_(SF (tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) &t_107, tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_c_operational_api(SF_LAST));
      tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api_logInfo_(SF ((tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) &t_107), (String) string(""));
    }

    sfUpdateLoc(164);
    {
      DeclNewtc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api(t_108);
      Option_50DC68_get_(SF (tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) &t_108, tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_c_operational_api(SF_LAST));
      tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api_logDebug_(SF ((tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) &t_108), (String) string(""));
    }

    sfUpdateLoc(165);
    {
      DeclNewtc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api(t_109);
      Option_50DC68_get_(SF (tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) &t_109, tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_c_operational_api(SF_LAST));
      tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api_logError_(SF ((tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) &t_109), (String) string(""));
    }

    sfUpdateLoc(166);
    {
      DeclNewtc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api(t_110);
      Option_262EA2_get_(SF (tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) &t_110, tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_c_initialization_api(SF_LAST));
      DeclNewtc_TempControlMixedSeL4CAmKES_Temperature(t_111);
      tc_TempControlMixedSeL4CAmKES_Temperature_example(SF (tc_TempControlMixedSeL4CAmKES_Temperature) &t_111);
      tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api_put_currentTemp_(SF ((tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) &t_110), (tc_TempControlMixedSeL4CAmKES_Temperature) ((tc_TempControlMixedSeL4CAmKES_Temperature) &t_111));
    }

    sfUpdateLoc(167);
    {
      DeclNewtc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api(t_112);
      Option_50DC68_get_(SF (tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) &t_112, tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_c_operational_api(SF_LAST));
      DeclNewtc_TempControlMixedSeL4CAmKES_Temperature(t_113);
      tc_TempControlMixedSeL4CAmKES_Temperature_example(SF (tc_TempControlMixedSeL4CAmKES_Temperature) &t_113);
      tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api_put_currentTemp_(SF ((tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) &t_112), (tc_TempControlMixedSeL4CAmKES_Temperature) ((tc_TempControlMixedSeL4CAmKES_Temperature) &t_113));
    }

    sfUpdateLoc(168);
    {
      DeclNewtc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api(t_114);
      Option_262EA2_get_(SF (tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) &t_114, tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_c_initialization_api(SF_LAST));
      tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api_put_tempChanged_(SF ((tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) &t_114));
    }

    sfUpdateLoc(169);
    {
      DeclNewtc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api(t_115);
      Option_50DC68_get_(SF (tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) &t_115, tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_c_operational_api(SF_LAST));
      tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api_put_tempChanged_(SF ((tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) &t_115));
    }
  }
}

Unit tc_TempSensor_tsp_tst_tst_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "tst.scala", "tc.TempSensor_tsp_tst.tst", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(174);
  {
    String_cprint(tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_name_(tc_TempSensor_tsp_tst_tst_tstBridge(SF_LAST)), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(175);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(176);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit tc_TempSensor_tsp_tst_tst_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "tst.scala", "tc.TempSensor_tsp_tst.tst", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(186);
  {
    String_cprint(tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_name_(tc_TempSensor_tsp_tst_tst_tstBridge(SF_LAST)), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(187);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(188);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit tc_TempSensor_tsp_tst_tst_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "tst.scala", "tc.TempSensor_tsp_tst.tst", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(180);
  {
    String_cprint(tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_name_(tc_TempSensor_tsp_tst_tst_tstBridge(SF_LAST)), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(181);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(182);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

Unit tc_TempSensor_tsp_tst_tst_putValue(STACK_FRAME art_Art_PortId portId, art_DataContent data) {
  DeclNewStackFrame(caller, "tst.scala", "tc.TempSensor_tsp_tst.tst", "putValue", 0);

  sfUpdateLoc(59);
  B t_0;
  {
    t_0 = art_Art_PortId__eq(portId, tc_TempSensor_tsp_tst_tst_currentTemp_id(SF_LAST));
  }
  if (t_0) {

    sfUpdateLoc(60);
    {
      DeclNewSome_D29615(t_1);
      Some_D29615_apply(SF &t_1, (art_DataContent) data);
      tc_TempSensor_tsp_tst_tst_currentTemp_port_a(SF (Option_8E9F45) (&t_1));
    }
  } else {

    sfUpdateLoc(61);
    B t_2;
    {
      t_2 = art_Art_PortId__eq(portId, tc_TempSensor_tsp_tst_tst_tempChanged_id(SF_LAST));
    }
    if (t_2) {

      sfUpdateLoc(62);
      {
        DeclNewSome_D29615(t_3);
        Some_D29615_apply(SF &t_3, (art_DataContent) data);
        tc_TempSensor_tsp_tst_tst_tempChanged_port_a(SF (Option_8E9F45) (&t_3));
      }
    } else {

      sfUpdateLoc(64);
      {
        DeclNewString(t_4);
        String t_5 = (String) &t_4;
        DeclNewString(t_6);
        String_string_(SF (String) &t_6, string("Unexpected: tst.putValue called with: "));
        art_Art_PortId_string_(SF (String) &t_6, portId);
        String_string_(SF (String) &t_6, string(""));
        String_string_(SF t_5, ((String) &t_6));
        sfAbort(t_5->value);
        abort();
      }
    }
  }
}

Unit tc_TempSensor_tsp_tst_tst_sendOutput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds) {
  DeclNewStackFrame(caller, "tst.scala", "tc.TempSensor_tsp_tst.tst", "sendOutput", 0);

  sfUpdateLoc(71);
  B t_0;
  {
    B t_1 = Option_8E9F45_nonEmpty_(SF tc_TempSensor_tsp_tst_tst_currentTemp_port(SF_LAST));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(72);
    {
      DeclNewart_DataContent(t_2);
      Option_8E9F45_get_(SF (art_DataContent) &t_2, tc_TempSensor_tsp_tst_tst_currentTemp_port(SF_LAST));
      tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_seL4Nix_currentTemp_Send(SF (art_DataContent) ((art_DataContent) &t_2));
    }

    sfUpdateLoc(73);
    {
      tc_TempSensor_tsp_tst_tst_currentTemp_port_a(SF (Option_8E9F45) tc_TempSensor_tsp_tst_tst_noData(SF_LAST));
    }
  }

  sfUpdateLoc(76);
  B t_3;
  {
    B t_4 = Option_8E9F45_nonEmpty_(SF tc_TempSensor_tsp_tst_tst_tempChanged_port(SF_LAST));
    t_3 = t_4;
  }
  if (t_3) {

    sfUpdateLoc(77);
    {
      DeclNewart_DataContent(t_5);
      Option_8E9F45_get_(SF (art_DataContent) &t_5, tc_TempSensor_tsp_tst_tst_tempChanged_port(SF_LAST));
      tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_seL4Nix_tempChanged_Send(SF (art_DataContent) ((art_DataContent) &t_5));
    }

    sfUpdateLoc(78);
    {
      tc_TempSensor_tsp_tst_tst_tempChanged_port_a(SF (Option_8E9F45) tc_TempSensor_tsp_tst_tst_noData(SF_LAST));
    }
  }
}

Unit tc_TempSensor_tsp_tst_tst_receiveInput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds) {
  DeclNewStackFrame(caller, "tst.scala", "tc.TempSensor_tsp_tst.tst", "receiveInput", 0);
}

void tc_TempSensor_tsp_tst_tst_init_tstBridge(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(18);
  {

    sfUpdateLoc(19);
    art_Port_890848 currentTemp;
    DeclNewart_Port_890848(t_0);
    art_Port_890848_apply(SF &t_0, art_Art_PortId_C(0), (String) string("TempControlSystem_Instance_tsp_tst_currentTemp"), art_PortMode_Type_DataOut);
    currentTemp = (art_Port_890848) (&t_0);

    sfUpdateLoc(20);
    art_Port_9CBF18 tempChanged;
    DeclNewart_Port_9CBF18(t_1);
    art_Port_9CBF18_apply(SF &t_1, art_Art_PortId_C(1), (String) string("TempControlSystem_Instance_tsp_tst_tempChanged"), art_PortMode_Type_EventOut);
    tempChanged = (art_Port_9CBF18) (&t_1);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_3);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_3, Z_C(1000));
    DeclNewNone_CFD2B0(t_4);
    None_CFD2B0_apply(SF &t_4);
    DeclNewtc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge(t_2);
    tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_apply(SF &t_2, art_Art_BridgeId_C(0), (String) string("TempControlSystem_Instance_tsp_tst"), (art_DispatchPropertyProtocol) (&t_3), (Option_0247A1) (&t_4), (art_Port_890848) currentTemp, (art_Port_9CBF18) tempChanged);
    Type_assign(&_tc_TempSensor_tsp_tst_tst_tstBridge, (&t_2), sizeof(struct tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge));
  }
};

void tc_TempSensor_tsp_tst_tst_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(33);
  Type_assign(&_tc_TempSensor_tsp_tst_tst_entryPoints, tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_entryPoints_(tc_TempSensor_tsp_tst_tst_tstBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void tc_TempSensor_tsp_tst_tst_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(34);
  DeclNewNone_964667(t_5);
  None_964667_apply(SF &t_5);
  Type_assign(&_tc_TempSensor_tsp_tst_tst_noData, (&t_5), sizeof(struct None_964667));
};

void tc_TempSensor_tsp_tst_tst_init_currentTemp_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(37);
  _tc_TempSensor_tsp_tst_tst_currentTemp_id = art_Port_890848_id_(tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_currentTemp_(tc_TempSensor_tsp_tst_tst_tstBridge(SF_LAST)));
};

void tc_TempSensor_tsp_tst_tst_init_currentTemp_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(38);
  Type_assign(&_tc_TempSensor_tsp_tst_tst_currentTemp_port, tc_TempSensor_tsp_tst_tst_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void tc_TempSensor_tsp_tst_tst_init_tempChanged_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(41);
  _tc_TempSensor_tsp_tst_tst_tempChanged_id = art_Port_9CBF18_id_(tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_tempChanged_(tc_TempSensor_tsp_tst_tst_tstBridge(SF_LAST)));
};

void tc_TempSensor_tsp_tst_tst_init_tempChanged_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(42);
  Type_assign(&_tc_TempSensor_tsp_tst_tst_tempChanged_port, tc_TempSensor_tsp_tst_tst_noData(SF_LAST), sizeof(union Option_8E9F45));
};